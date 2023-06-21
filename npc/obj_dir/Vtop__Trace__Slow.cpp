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
        tracep->declBit(c+2395,"clock", false,-1);
        tracep->declBit(c+2396,"reset", false,-1);
        tracep->declBus(c+2397,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+2398,"io_pc", false,-1, 63,0);
        tracep->declBit(c+2400,"io_step", false,-1);
        tracep->declBit(c+2395,"top clock", false,-1);
        tracep->declBit(c+2396,"top reset", false,-1);
        tracep->declBus(c+2397,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+2398,"top io_pc", false,-1, 63,0);
        tracep->declBit(c+2400,"top io_step", false,-1);
        tracep->declBit(c+2395,"top Register_clock", false,-1);
        tracep->declBus(c+1,"top Register_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register_io_we", false,-1);
        tracep->declBus(c+8,"top Register_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register_io_wdata", false,-1, 63,0);
        tracep->declBit(c+2395,"top IFU_clock", false,-1);
        tracep->declBit(c+2396,"top IFU_reset", false,-1);
        tracep->declBit(c+11,"top IFU_io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IFU_io_ds_ready_go", false,-1);
        tracep->declBit(c+13,"top IFU_io_ds_valid", false,-1);
        tracep->declBit(c+14,"top IFU_io_br_taken", false,-1);
        tracep->declQuad(c+15,"top IFU_io_br_target", false,-1, 63,0);
        tracep->declQuad(c+17,"top IFU_io_to_ds_pc", false,-1, 63,0);
        tracep->declBit(c+19,"top IFU_io_fs_to_ds_valid", false,-1);
        tracep->declBus(c+20,"top IFU_io_inst", false,-1, 31,0);
        tracep->declQuad(c+21,"top IFU_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+23,"top IFU_io_axi_in_rvalid", false,-1);
        tracep->declBus(c+24,"top IFU_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+12,"top IFU_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+25,"top IFU_io_axi_out_rready", false,-1);
        tracep->declBit(c+26,"top IFU_io_fence", false,-1);
        tracep->declBit(c+27,"top IFU_io_clear_cache", false,-1);
        tracep->declBit(c+28,"top IFU_io_cache_init", false,-1);
        tracep->declBit(c+2395,"top IDU_clock", false,-1);
        tracep->declBit(c+2396,"top IDU_reset", false,-1);
        tracep->declQuad(c+17,"top IDU_io_pc", false,-1, 63,0);
        tracep->declBit(c+19,"top IDU_io_fs_to_ds_valid", false,-1);
        tracep->declBit(c+29,"top IDU_io_ds_to_es_valid", false,-1);
        tracep->declBit(c+30,"top IDU_io_es_allowin", false,-1);
        tracep->declBus(c+20,"top IDU_io_from_fs_inst", false,-1, 31,0);
        tracep->declBit(c+14,"top IDU_io_br_taken", false,-1);
        tracep->declQuad(c+15,"top IDU_io_br_target", false,-1, 63,0);
        tracep->declBit(c+11,"top IDU_io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IDU_io_ds_ready_go", false,-1);
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
        tracep->declBit(c+13,"top IDU_io_ds_valid", false,-1);
        tracep->declBit(c+2395,"top EXU_clock", false,-1);
        tracep->declBit(c+2396,"top EXU_reset", false,-1);
        tracep->declQuad(c+31,"top EXU_io_pc", false,-1, 63,0);
        tracep->declBit(c+29,"top EXU_io_ds_to_es_valid", false,-1);
        tracep->declBit(c+61,"top EXU_io_ms_allowin", false,-1);
        tracep->declBit(c+30,"top EXU_io_es_allowin", false,-1);
        tracep->declBus(c+33,"top EXU_io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+34,"top EXU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+36,"top EXU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+38,"top EXU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+39,"top EXU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+51,"top EXU_io_es_to_ms_valid", false,-1);
        tracep->declBus(c+45,"top EXU_io_load_type", false,-1, 2,0);
        tracep->declQuad(c+62,"top EXU_io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+47,"top EXU_io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+64,"top EXU_io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+66,"top EXU_io_to_ms_wen", false,-1);
        tracep->declBus(c+67,"top EXU_io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+68,"top EXU_io_to_ms_ren", false,-1);
        tracep->declQuad(c+47,"top EXU_io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+59,"top EXU_io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+53,"top EXU_io_to_ms_rf_we", false,-1);
        tracep->declBus(c+69,"top EXU_io_to_ms_load_type", false,-1, 2,0);
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
        tracep->declBit(c+2395,"top LSU_clock", false,-1);
        tracep->declBit(c+2396,"top LSU_reset", false,-1);
        tracep->declQuad(c+62,"top LSU_io_pc", false,-1, 63,0);
        tracep->declBit(c+51,"top LSU_io_es_to_ms_valid", false,-1);
        tracep->declBit(c+61,"top LSU_io_ms_allowin", false,-1);
        tracep->declBit(c+53,"top LSU_io_rf_we", false,-1);
        tracep->declBus(c+59,"top LSU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+47,"top LSU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+64,"top LSU_io_store_data", false,-1, 63,0);
        tracep->declBus(c+69,"top LSU_io_load_type", false,-1, 2,0);
        tracep->declBit(c+66,"top LSU_io_wen", false,-1);
        tracep->declBus(c+67,"top LSU_io_wstrb", false,-1, 7,0);
        tracep->declBit(c+68,"top LSU_io_ren", false,-1);
        tracep->declQuad(c+47,"top LSU_io_maddr", false,-1, 63,0);
        tracep->declQuad(c+70,"top LSU_io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+72,"top LSU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+52,"top LSU_io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+74,"top LSU_io_to_ws_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU_io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+57,"top LSU_io_ms_valid", false,-1);
        tracep->declBit(c+54,"top LSU_io_ms_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+52,"top LSU_io_ms_fwd_ready", false,-1);
        tracep->declQuad(c+49,"top LSU_io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+75,"top LSU_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+77,"top LSU_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+78,"top LSU_io_axi_in_wready", false,-1);
        tracep->declBus(c+79,"top LSU_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+80,"top LSU_io_axi_out_arvalid", false,-1);
        tracep->declBus(c+79,"top LSU_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+81,"top LSU_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+82,"top LSU_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+84,"top LSU_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+85,"top LSU_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+2395,"top WBU_clock", false,-1);
        tracep->declBit(c+2396,"top WBU_reset", false,-1);
        tracep->declQuad(c+70,"top WBU_io_pc", false,-1, 63,0);
        tracep->declBit(c+52,"top WBU_io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+72,"top WBU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+74,"top WBU_io_rf_we", false,-1);
        tracep->declBus(c+60,"top WBU_io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU_io_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_wdata", false,-1, 63,0);
        tracep->declBit(c+58,"top WBU_io_ws_valid", false,-1);
        tracep->declBit(c+55,"top WBU_io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_ws_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+86,"top WBU_io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+2395,"top arbiter_clock", false,-1);
        tracep->declBit(c+2396,"top arbiter_reset", false,-1);
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
        tracep->declBit(c+2395,"top i_cache_clock", false,-1);
        tracep->declBit(c+2396,"top i_cache_reset", false,-1);
        tracep->declBus(c+24,"top i_cache_io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+12,"top i_cache_io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+25,"top i_cache_io_from_ifu_rready", false,-1);
        tracep->declQuad(c+21,"top i_cache_io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+23,"top i_cache_io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+88,"top i_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+89,"top i_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+90,"top i_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+91,"top i_cache_io_to_axi_rready", false,-1);
        tracep->declQuad(c+92,"top i_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+94,"top i_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+95,"top i_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+28,"top i_cache_io_cache_init", false,-1);
        tracep->declBit(c+27,"top i_cache_io_clear_cache", false,-1);
        tracep->declBit(c+2395,"top d_cache_clock", false,-1);
        tracep->declBit(c+2396,"top d_cache_reset", false,-1);
        tracep->declBus(c+79,"top d_cache_io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+80,"top d_cache_io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+79,"top d_cache_io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+81,"top d_cache_io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+82,"top d_cache_io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+84,"top d_cache_io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+85,"top d_cache_io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+75,"top d_cache_io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+77,"top d_cache_io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+78,"top d_cache_io_to_lsu_wready", false,-1);
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
        tracep->declBit(c+2395,"top axi_clock", false,-1);
        tracep->declBit(c+2396,"top axi_reset", false,-1);
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
        tracep->declBit(c+2395,"top Register clock", false,-1);
        tracep->declBus(c+1,"top Register io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register io_we", false,-1);
        tracep->declBus(c+8,"top Register io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register io_wdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+137+i*2,"top Register Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+2401,"top Register Reg_io_rdata1_MPORT_en", false,-1);
        tracep->declBus(c+1,"top Register Reg_io_rdata1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+201,"top Register Reg_io_rdata1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_io_rdata2_MPORT_en", false,-1);
        tracep->declBus(c+2,"top Register Reg_io_rdata2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+203,"top Register Reg_io_rdata2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+2402,"top Register Reg_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+205,"top Register Reg_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+2403,"top Register Reg_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+207,"top Register Reg_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+2404,"top Register Reg_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+209,"top Register Reg_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+2405,"top Register Reg_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+211,"top Register Reg_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+2406,"top Register Reg_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+213,"top Register Reg_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+2407,"top Register Reg_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+215,"top Register Reg_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+2408,"top Register Reg_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+217,"top Register Reg_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+2409,"top Register Reg_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+219,"top Register Reg_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+2410,"top Register Reg_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+221,"top Register Reg_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+2411,"top Register Reg_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+223,"top Register Reg_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+2412,"top Register Reg_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+225,"top Register Reg_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+2413,"top Register Reg_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+227,"top Register Reg_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+2414,"top Register Reg_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+229,"top Register Reg_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+2415,"top Register Reg_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+231,"top Register Reg_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+2416,"top Register Reg_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+233,"top Register Reg_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+2417,"top Register Reg_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+235,"top Register Reg_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+2418,"top Register Reg_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+237,"top Register Reg_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+2419,"top Register Reg_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+239,"top Register Reg_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+2420,"top Register Reg_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+241,"top Register Reg_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+2421,"top Register Reg_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+243,"top Register Reg_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+2422,"top Register Reg_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+245,"top Register Reg_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+2423,"top Register Reg_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+247,"top Register Reg_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+2424,"top Register Reg_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+249,"top Register Reg_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+2425,"top Register Reg_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+251,"top Register Reg_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+2426,"top Register Reg_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+253,"top Register Reg_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+2427,"top Register Reg_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+255,"top Register Reg_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+2428,"top Register Reg_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+257,"top Register Reg_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+2429,"top Register Reg_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+259,"top Register Reg_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+2430,"top Register Reg_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+261,"top Register Reg_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+2431,"top Register Reg_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"top Register Reg_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+2432,"top Register Reg_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+265,"top Register Reg_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+2401,"top Register Reg_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+2433,"top Register Reg_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+267,"top Register Reg_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+9,"top Register Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+8,"top Register Reg_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+2401,"top Register Reg_MPORT_mask", false,-1);
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
        tracep->declBit(c+2395,"top IFU clock", false,-1);
        tracep->declBit(c+2396,"top IFU reset", false,-1);
        tracep->declBit(c+11,"top IFU io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IFU io_ds_ready_go", false,-1);
        tracep->declBit(c+13,"top IFU io_ds_valid", false,-1);
        tracep->declBit(c+14,"top IFU io_br_taken", false,-1);
        tracep->declQuad(c+15,"top IFU io_br_target", false,-1, 63,0);
        tracep->declQuad(c+17,"top IFU io_to_ds_pc", false,-1, 63,0);
        tracep->declBit(c+19,"top IFU io_fs_to_ds_valid", false,-1);
        tracep->declBus(c+20,"top IFU io_inst", false,-1, 31,0);
        tracep->declQuad(c+21,"top IFU io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+23,"top IFU io_axi_in_rvalid", false,-1);
        tracep->declBus(c+24,"top IFU io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+12,"top IFU io_axi_out_arvalid", false,-1);
        tracep->declBit(c+25,"top IFU io_axi_out_rready", false,-1);
        tracep->declBit(c+26,"top IFU io_fence", false,-1);
        tracep->declBit(c+27,"top IFU io_clear_cache", false,-1);
        tracep->declBit(c+28,"top IFU io_cache_init", false,-1);
        tracep->declBit(c+334,"top IFU br_taken_cancel", false,-1);
        tracep->declBit(c+335,"top IFU fs_valid", false,-1);
        tracep->declBit(c+336,"top IFU cache_init", false,-1);
        tracep->declBit(c+337,"top IFU fs_ready_go", false,-1);
        tracep->declBit(c+19,"top IFU fs_to_ds_valid", false,-1);
        tracep->declBit(c+338,"top IFU br_taken", false,-1);
        tracep->declQuad(c+17,"top IFU fs_pc", false,-1, 63,0);
        tracep->declBus(c+20,"top IFU fs_inst", false,-1, 31,0);
        tracep->declBit(c+25,"top IFU fs_allowin", false,-1);
        tracep->declQuad(c+339,"top IFU seq_pc", false,-1, 63,0);
        tracep->declQuad(c+341,"top IFU pc_next", false,-1, 63,0);
        tracep->declBit(c+2395,"top IDU clock", false,-1);
        tracep->declBit(c+2396,"top IDU reset", false,-1);
        tracep->declQuad(c+17,"top IDU io_pc", false,-1, 63,0);
        tracep->declBit(c+19,"top IDU io_fs_to_ds_valid", false,-1);
        tracep->declBit(c+29,"top IDU io_ds_to_es_valid", false,-1);
        tracep->declBit(c+30,"top IDU io_es_allowin", false,-1);
        tracep->declBus(c+20,"top IDU io_from_fs_inst", false,-1, 31,0);
        tracep->declBit(c+14,"top IDU io_br_taken", false,-1);
        tracep->declQuad(c+15,"top IDU io_br_target", false,-1, 63,0);
        tracep->declBit(c+11,"top IDU io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IDU io_ds_ready_go", false,-1);
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
        tracep->declBit(c+13,"top IDU io_ds_valid", false,-1);
        tracep->declBit(c+2395,"top IDU csr_reg_clock", false,-1);
        tracep->declBit(c+343,"top IDU csr_reg_io_wen1", false,-1);
        tracep->declBit(c+344,"top IDU csr_reg_io_wen2", false,-1);
        tracep->declBus(c+345,"top IDU csr_reg_io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+346,"top IDU csr_reg_io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+348,"top IDU csr_reg_io_wdata2", false,-1, 63,0);
        tracep->declBus(c+350,"top IDU csr_reg_io_raddr", false,-1, 1,0);
        tracep->declQuad(c+351,"top IDU csr_reg_io_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"top IDU ds_valid", false,-1);
        tracep->declQuad(c+31,"top IDU ds_pc", false,-1, 63,0);
        tracep->declBus(c+353,"top IDU inst", false,-1, 31,0);
        tracep->declBit(c+354,"top IDU src1_is_pc", false,-1);
        tracep->declBus(c+355,"top IDU inst_type", false,-1, 31,0);
        tracep->declBus(c+356,"top IDU csr_write", false,-1, 1,0);
        tracep->declBus(c+1,"top IDU rs1", false,-1, 4,0);
        tracep->declBit(c+357,"top IDU conflict_es_rs1", false,-1);
        tracep->declBit(c+358,"top IDU conflict_ms_rs1", false,-1);
        tracep->declBit(c+359,"top IDU conflict_ws_rs1", false,-1);
        tracep->declQuad(c+360,"top IDU rdata1", false,-1, 63,0);
        tracep->declBit(c+362,"top IDU src2_is_imm", false,-1);
        tracep->declBus(c+2,"top IDU rs2", false,-1, 4,0);
        tracep->declBit(c+363,"top IDU conflict_es_rs2", false,-1);
        tracep->declBit(c+364,"top IDU conflict_ms_rs2", false,-1);
        tracep->declBit(c+365,"top IDU conflict_ws_rs2", false,-1);
        tracep->declQuad(c+366,"top IDU rdata2", false,-1, 63,0);
        tracep->declBit(c+14,"top IDU br_taken", false,-1);
        tracep->declBit(c+12,"top IDU ds_ready_go", false,-1);
        tracep->declBit(c+11,"top IDU ds_allowin", false,-1);
        tracep->declBus(c+38,"top IDU rd", false,-1, 4,0);
        tracep->declBit(c+26,"top IDU fence", false,-1);
        tracep->declBus(c+368,"top IDU imm_imm", false,-1, 11,0);
        tracep->declBus(c+369,"top IDU imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+370,"top IDU imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+371,"top IDU imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+372,"top IDU imm_imm_4", false,-1, 11,0);
        tracep->declQuad(c+373,"top IDU imm", false,-1, 63,0);
        tracep->declBus(c+375,"top IDU csr_index", false,-1, 1,0);
        tracep->declQuad(c+376,"top IDU csr_wdata", false,-1, 63,0);
        tracep->declBus(c+33,"top IDU ALUop", false,-1, 31,0);
        tracep->declQuad(c+378,"top IDU src1", false,-1, 63,0);
        tracep->declQuad(c+380,"top IDU src2", false,-1, 63,0);
        tracep->declBit(c+2395,"top IDU csr_reg clock", false,-1);
        tracep->declBit(c+343,"top IDU csr_reg io_wen1", false,-1);
        tracep->declBit(c+344,"top IDU csr_reg io_wen2", false,-1);
        tracep->declBus(c+345,"top IDU csr_reg io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+346,"top IDU csr_reg io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+348,"top IDU csr_reg io_wdata2", false,-1, 63,0);
        tracep->declBus(c+350,"top IDU csr_reg io_raddr", false,-1, 1,0);
        tracep->declQuad(c+351,"top IDU csr_reg io_rdata", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+382+i*2,"top IDU csr_reg CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+2401,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_en", false,-1);
        tracep->declBus(c+350,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+351,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+346,"top IDU csr_reg CSR_Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+345,"top IDU csr_reg CSR_Reg_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+2401,"top IDU csr_reg CSR_Reg_MPORT_mask", false,-1);
        tracep->declBit(c+343,"top IDU csr_reg CSR_Reg_MPORT_en", false,-1);
        tracep->declQuad(c+348,"top IDU csr_reg CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+2434,"top IDU csr_reg CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+2401,"top IDU csr_reg CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+344,"top IDU csr_reg CSR_Reg_MPORT_1_en", false,-1);
        tracep->declBit(c+2395,"top EXU clock", false,-1);
        tracep->declBit(c+2396,"top EXU reset", false,-1);
        tracep->declQuad(c+31,"top EXU io_pc", false,-1, 63,0);
        tracep->declBit(c+29,"top EXU io_ds_to_es_valid", false,-1);
        tracep->declBit(c+61,"top EXU io_ms_allowin", false,-1);
        tracep->declBit(c+30,"top EXU io_es_allowin", false,-1);
        tracep->declBus(c+33,"top EXU io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+34,"top EXU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+36,"top EXU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+38,"top EXU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+39,"top EXU io_store_data", false,-1, 63,0);
        tracep->declBit(c+51,"top EXU io_es_to_ms_valid", false,-1);
        tracep->declBus(c+45,"top EXU io_load_type", false,-1, 2,0);
        tracep->declQuad(c+62,"top EXU io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+47,"top EXU io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+64,"top EXU io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+66,"top EXU io_to_ms_wen", false,-1);
        tracep->declBus(c+67,"top EXU io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+68,"top EXU io_to_ms_ren", false,-1);
        tracep->declQuad(c+47,"top EXU io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+59,"top EXU io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+53,"top EXU io_to_ms_rf_we", false,-1);
        tracep->declBus(c+69,"top EXU io_to_ms_load_type", false,-1, 2,0);
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
        tracep->declBit(c+2395,"top EXU ALU_clock", false,-1);
        tracep->declBit(c+2396,"top EXU ALU_reset", false,-1);
        tracep->declQuad(c+390,"top EXU ALU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+392,"top EXU ALU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+394,"top EXU ALU_io_ALUop", false,-1, 31,0);
        tracep->declBit(c+56,"top EXU ALU_io_src_valid", false,-1);
        tracep->declBit(c+395,"top EXU ALU_io_alu_busy", false,-1);
        tracep->declQuad(c+47,"top EXU ALU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+62,"top EXU es_pc", false,-1, 63,0);
        tracep->declBit(c+56,"top EXU es_valid", false,-1);
        tracep->declBus(c+59,"top EXU es_rd", false,-1, 4,0);
        tracep->declBit(c+53,"top EXU es_rf_we", false,-1);
        tracep->declQuad(c+396,"top EXU src1_value", false,-1, 63,0);
        tracep->declQuad(c+392,"top EXU src2_value", false,-1, 63,0);
        tracep->declQuad(c+64,"top EXU store_data", false,-1, 63,0);
        tracep->declBus(c+67,"top EXU st_wstrb", false,-1, 7,0);
        tracep->declBit(c+66,"top EXU st_we", false,-1);
        tracep->declBit(c+68,"top EXU ld_we", false,-1);
        tracep->declBus(c+394,"top EXU ALUop", false,-1, 31,0);
        tracep->declBus(c+69,"top EXU load_type", false,-1, 2,0);
        tracep->declBit(c+398,"top EXU es_ready_go", false,-1);
        tracep->declBit(c+30,"top EXU es_allowin", false,-1);
        tracep->declQuad(c+47,"top EXU alu_res", false,-1, 63,0);
        tracep->declBit(c+2395,"top EXU ALU clock", false,-1);
        tracep->declBit(c+2396,"top EXU ALU reset", false,-1);
        tracep->declQuad(c+390,"top EXU ALU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+392,"top EXU ALU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+394,"top EXU ALU io_ALUop", false,-1, 31,0);
        tracep->declBit(c+56,"top EXU ALU io_src_valid", false,-1);
        tracep->declBit(c+395,"top EXU ALU io_alu_busy", false,-1);
        tracep->declQuad(c+47,"top EXU ALU io_alu_res", false,-1, 63,0);
        tracep->declBit(c+2395,"top EXU ALU Mul_clock", false,-1);
        tracep->declBit(c+2396,"top EXU ALU Mul_reset", false,-1);
        tracep->declBit(c+399,"top EXU ALU Mul_io_mul_valid", false,-1);
        tracep->declBit(c+400,"top EXU ALU Mul_io_mulw", false,-1);
        tracep->declQuad(c+390,"top EXU ALU Mul_io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+392,"top EXU ALU Mul_io_multiplier", false,-1, 63,0);
        tracep->declBit(c+401,"top EXU ALU Mul_io_out_valid", false,-1);
        tracep->declBus(c+402,"top EXU ALU Mul_io_result_hi", false,-1, 31,0);
        tracep->declBus(c+403,"top EXU ALU Mul_io_result_lo", false,-1, 31,0);
        tracep->declBit(c+2395,"top EXU ALU Div_clock", false,-1);
        tracep->declBit(c+2396,"top EXU ALU Div_reset", false,-1);
        tracep->declQuad(c+390,"top EXU ALU Div_io_dividend", false,-1, 63,0);
        tracep->declQuad(c+392,"top EXU ALU Div_io_divisor", false,-1, 63,0);
        tracep->declBit(c+404,"top EXU ALU Div_io_div_valid", false,-1);
        tracep->declBit(c+405,"top EXU ALU Div_io_divw", false,-1);
        tracep->declBit(c+406,"top EXU ALU Div_io_div_signed", false,-1);
        tracep->declBit(c+407,"top EXU ALU Div_io_out_valid", false,-1);
        tracep->declQuad(c+408,"top EXU ALU Div_io_quotient", false,-1, 63,0);
        tracep->declQuad(c+410,"top EXU ALU Div_io_remainder", false,-1, 63,0);
        tracep->declBit(c+412,"top EXU ALU mul_valid", false,-1);
        tracep->declBit(c+413,"top EXU ALU div_valid", false,-1);
        tracep->declQuad(c+414,"top EXU ALU add_res", false,-1, 63,0);
        tracep->declQuad(c+416,"top EXU ALU sub_res", false,-1, 63,0);
        tracep->declQuad(c+418,"top EXU ALU sra_res", false,-1, 63,0);
        tracep->declQuad(c+420,"top EXU ALU srl_res", false,-1, 63,0);
        tracep->declArray(c+422,"top EXU ALU sll_res", false,-1, 126,0);
        tracep->declBus(c+426,"top EXU ALU sraw_res", false,-1, 31,0);
        tracep->declBus(c+427,"top EXU ALU srlw_res", false,-1, 31,0);
        tracep->declQuad(c+428,"top EXU ALU sllw_res", false,-1, 62,0);
        tracep->declQuad(c+430,"top EXU ALU or_res", false,-1, 63,0);
        tracep->declQuad(c+432,"top EXU ALU xor_res", false,-1, 63,0);
        tracep->declQuad(c+434,"top EXU ALU and_res", false,-1, 63,0);
        tracep->declQuad(c+436,"top EXU ALU mlu_res", false,-1, 63,0);
        tracep->declBus(c+438,"top EXU ALU divw_res", false,-1, 31,0);
        tracep->declBus(c+439,"top EXU ALU remw_res", false,-1, 31,0);
        tracep->declArray(c+440,"top EXU ALU alu_res", false,-1, 126,0);
        tracep->declBit(c+2395,"top EXU ALU Mul clock", false,-1);
        tracep->declBit(c+2396,"top EXU ALU Mul reset", false,-1);
        tracep->declBit(c+399,"top EXU ALU Mul io_mul_valid", false,-1);
        tracep->declBit(c+400,"top EXU ALU Mul io_mulw", false,-1);
        tracep->declQuad(c+390,"top EXU ALU Mul io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+392,"top EXU ALU Mul io_multiplier", false,-1, 63,0);
        tracep->declBit(c+401,"top EXU ALU Mul io_out_valid", false,-1);
        tracep->declBus(c+402,"top EXU ALU Mul io_result_hi", false,-1, 31,0);
        tracep->declBus(c+403,"top EXU ALU Mul io_result_lo", false,-1, 31,0);
        tracep->declBus(c+444,"top EXU ALU Mul booth_partial_io_y", false,-1, 2,0);
        tracep->declQuad(c+445,"top EXU ALU Mul booth_partial_io_x", false,-1, 63,0);
        tracep->declBit(c+447,"top EXU ALU Mul booth_partial_io_c", false,-1);
        tracep->declQuad(c+448,"top EXU ALU Mul booth_partial_io_p", false,-1, 63,0);
        tracep->declBit(c+450,"top EXU ALU Mul sign", false,-1);
        tracep->declQuad(c+451,"top EXU ALU Mul res", false,-1, 63,0);
        tracep->declBus(c+453,"top EXU ALU Mul state", false,-1, 1,0);
        tracep->declArray(c+454,"top EXU ALU Mul src1", false,-1, 127,0);
        tracep->declArray(c+458,"top EXU ALU Mul src2", false,-1, 64,0);
        tracep->declQuad(c+461,"top EXU ALU Mul src1_32", false,-1, 63,0);
        tracep->declQuad(c+463,"top EXU ALU Mul src2_32", false,-1, 63,0);
        tracep->declArray(c+465,"top EXU ALU Mul real_cand", false,-1, 127,0);
        tracep->declQuad(c+469,"top EXU ALU Mul real_er", false,-1, 63,0);
        tracep->declBus(c+444,"top EXU ALU Mul booth_partial io_y", false,-1, 2,0);
        tracep->declQuad(c+445,"top EXU ALU Mul booth_partial io_x", false,-1, 63,0);
        tracep->declBit(c+447,"top EXU ALU Mul booth_partial io_c", false,-1);
        tracep->declQuad(c+448,"top EXU ALU Mul booth_partial io_p", false,-1, 63,0);
        tracep->declBit(c+2395,"top EXU ALU Div clock", false,-1);
        tracep->declBit(c+2396,"top EXU ALU Div reset", false,-1);
        tracep->declQuad(c+390,"top EXU ALU Div io_dividend", false,-1, 63,0);
        tracep->declQuad(c+392,"top EXU ALU Div io_divisor", false,-1, 63,0);
        tracep->declBit(c+404,"top EXU ALU Div io_div_valid", false,-1);
        tracep->declBit(c+405,"top EXU ALU Div io_divw", false,-1);
        tracep->declBit(c+406,"top EXU ALU Div io_div_signed", false,-1);
        tracep->declBit(c+407,"top EXU ALU Div io_out_valid", false,-1);
        tracep->declQuad(c+408,"top EXU ALU Div io_quotient", false,-1, 63,0);
        tracep->declQuad(c+410,"top EXU ALU Div io_remainder", false,-1, 63,0);
        tracep->declBit(c+471,"top EXU ALU Div dend_neg", false,-1);
        tracep->declBit(c+472,"top EXU ALU Div sor_neg", false,-1);
        tracep->declBit(c+473,"top EXU ALU Div quotient_neg", false,-1);
        tracep->declQuad(c+474,"top EXU ALU Div src1_32_s", false,-1, 63,0);
        tracep->declQuad(c+476,"top EXU ALU Div src2_32_s", false,-1, 63,0);
        tracep->declQuad(c+478,"top EXU ALU Div src1_32", false,-1, 63,0);
        tracep->declQuad(c+480,"top EXU ALU Div src2_32", false,-1, 63,0);
        tracep->declQuad(c+482,"top EXU ALU Div real_cand", false,-1, 63,0);
        tracep->declQuad(c+484,"top EXU ALU Div real_er", false,-1, 63,0);
        tracep->declArray(c+486,"top EXU ALU Div src2", false,-1, 64,0);
        tracep->declArray(c+489,"top EXU ALU Div div_cand", false,-1, 127,0);
        tracep->declBit(c+493,"top EXU ALU Div div_start", false,-1);
        tracep->declQuad(c+494,"top EXU ALU Div quotient", false,-1, 63,0);
        tracep->declBus(c+496,"top EXU ALU Div step_num", false,-1, 31,0);
        tracep->declArray(c+497,"top EXU ALU Div src1", false,-1, 127,0);
        tracep->declArray(c+501,"top EXU ALU Div sub_res", false,-1, 64,0);
        tracep->declArray(c+504,"top EXU ALU Div update_cand", false,-1, 127,0);
        tracep->declArray(c+508,"top EXU ALU Div new_cand", false,-1, 127,0);
        tracep->declBit(c+2395,"top LSU clock", false,-1);
        tracep->declBit(c+2396,"top LSU reset", false,-1);
        tracep->declQuad(c+62,"top LSU io_pc", false,-1, 63,0);
        tracep->declBit(c+51,"top LSU io_es_to_ms_valid", false,-1);
        tracep->declBit(c+61,"top LSU io_ms_allowin", false,-1);
        tracep->declBit(c+53,"top LSU io_rf_we", false,-1);
        tracep->declBus(c+59,"top LSU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+47,"top LSU io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+64,"top LSU io_store_data", false,-1, 63,0);
        tracep->declBus(c+69,"top LSU io_load_type", false,-1, 2,0);
        tracep->declBit(c+66,"top LSU io_wen", false,-1);
        tracep->declBus(c+67,"top LSU io_wstrb", false,-1, 7,0);
        tracep->declBit(c+68,"top LSU io_ren", false,-1);
        tracep->declQuad(c+47,"top LSU io_maddr", false,-1, 63,0);
        tracep->declQuad(c+70,"top LSU io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+72,"top LSU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+52,"top LSU io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+74,"top LSU io_to_ws_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+57,"top LSU io_ms_valid", false,-1);
        tracep->declBit(c+54,"top LSU io_ms_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU io_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+52,"top LSU io_ms_fwd_ready", false,-1);
        tracep->declQuad(c+49,"top LSU io_ms_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+75,"top LSU io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+77,"top LSU io_axi_in_rvalid", false,-1);
        tracep->declBit(c+78,"top LSU io_axi_in_wready", false,-1);
        tracep->declBus(c+79,"top LSU io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+80,"top LSU io_axi_out_arvalid", false,-1);
        tracep->declBus(c+79,"top LSU io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBit(c+81,"top LSU io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+82,"top LSU io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+84,"top LSU io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+85,"top LSU io_axi_out_wvalid", false,-1);
        tracep->declBit(c+57,"top LSU ms_valid", false,-1);
        tracep->declQuad(c+70,"top LSU ms_pc", false,-1, 63,0);
        tracep->declBit(c+512,"top LSU ms_ready_go", false,-1);
        tracep->declBit(c+74,"top LSU ms_rf_we", false,-1);
        tracep->declBus(c+60,"top LSU ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+513,"top LSU ms_res", false,-1, 63,0);
        tracep->declQuad(c+82,"top LSU store_data", false,-1, 63,0);
        tracep->declBit(c+85,"top LSU wen", false,-1);
        tracep->declBus(c+84,"top LSU wstrb", false,-1, 7,0);
        tracep->declBit(c+515,"top LSU ren", false,-1);
        tracep->declQuad(c+516,"top LSU maddr", false,-1, 63,0);
        tracep->declBus(c+518,"top LSU load_type", false,-1, 2,0);
        tracep->declBit(c+61,"top LSU ms_allowin", false,-1);
        tracep->declQuad(c+519,"top LSU mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+521,"top LSU rdata", false,-1, 63,0);
        tracep->declBit(c+2395,"top WBU clock", false,-1);
        tracep->declBit(c+2396,"top WBU reset", false,-1);
        tracep->declQuad(c+70,"top WBU io_pc", false,-1, 63,0);
        tracep->declBit(c+52,"top WBU io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+72,"top WBU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+74,"top WBU io_rf_we", false,-1);
        tracep->declBus(c+60,"top WBU io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU io_we", false,-1);
        tracep->declBus(c+8,"top WBU io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_wdata", false,-1, 63,0);
        tracep->declBit(c+58,"top WBU io_ws_valid", false,-1);
        tracep->declBit(c+55,"top WBU io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_ws_fwd_res", false,-1, 63,0);
        tracep->declQuad(c+86,"top WBU io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+58,"top WBU ws_valid", false,-1);
        tracep->declQuad(c+86,"top WBU ws_pc", false,-1, 63,0);
        tracep->declBit(c+55,"top WBU ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU ws_res", false,-1, 63,0);
        tracep->declBit(c+2395,"top arbiter clock", false,-1);
        tracep->declBit(c+2396,"top arbiter reset", false,-1);
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
        tracep->declBus(c+523,"top arbiter state", false,-1, 1,0);
        tracep->declBit(c+2395,"top i_cache clock", false,-1);
        tracep->declBit(c+2396,"top i_cache reset", false,-1);
        tracep->declBus(c+24,"top i_cache io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+12,"top i_cache io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+25,"top i_cache io_from_ifu_rready", false,-1);
        tracep->declQuad(c+21,"top i_cache io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+23,"top i_cache io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+88,"top i_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+89,"top i_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+90,"top i_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+91,"top i_cache io_to_axi_rready", false,-1);
        tracep->declQuad(c+92,"top i_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+94,"top i_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+95,"top i_cache io_from_axi_rvalid", false,-1);
        tracep->declBit(c+28,"top i_cache io_cache_init", false,-1);
        tracep->declBit(c+27,"top i_cache io_clear_cache", false,-1);
        tracep->declArray(c+524,"top i_cache ram_0_0", false,-1, 511,0);
        tracep->declArray(c+540,"top i_cache ram_0_1", false,-1, 511,0);
        tracep->declArray(c+556,"top i_cache ram_0_2", false,-1, 511,0);
        tracep->declArray(c+572,"top i_cache ram_0_3", false,-1, 511,0);
        tracep->declArray(c+588,"top i_cache ram_0_4", false,-1, 511,0);
        tracep->declArray(c+604,"top i_cache ram_0_5", false,-1, 511,0);
        tracep->declArray(c+620,"top i_cache ram_0_6", false,-1, 511,0);
        tracep->declArray(c+636,"top i_cache ram_0_7", false,-1, 511,0);
        tracep->declArray(c+652,"top i_cache ram_0_8", false,-1, 511,0);
        tracep->declArray(c+668,"top i_cache ram_0_9", false,-1, 511,0);
        tracep->declArray(c+684,"top i_cache ram_0_10", false,-1, 511,0);
        tracep->declArray(c+700,"top i_cache ram_0_11", false,-1, 511,0);
        tracep->declArray(c+716,"top i_cache ram_0_12", false,-1, 511,0);
        tracep->declArray(c+732,"top i_cache ram_0_13", false,-1, 511,0);
        tracep->declArray(c+748,"top i_cache ram_0_14", false,-1, 511,0);
        tracep->declArray(c+764,"top i_cache ram_0_15", false,-1, 511,0);
        tracep->declArray(c+780,"top i_cache ram_1_0", false,-1, 511,0);
        tracep->declArray(c+796,"top i_cache ram_1_1", false,-1, 511,0);
        tracep->declArray(c+812,"top i_cache ram_1_2", false,-1, 511,0);
        tracep->declArray(c+828,"top i_cache ram_1_3", false,-1, 511,0);
        tracep->declArray(c+844,"top i_cache ram_1_4", false,-1, 511,0);
        tracep->declArray(c+860,"top i_cache ram_1_5", false,-1, 511,0);
        tracep->declArray(c+876,"top i_cache ram_1_6", false,-1, 511,0);
        tracep->declArray(c+892,"top i_cache ram_1_7", false,-1, 511,0);
        tracep->declArray(c+908,"top i_cache ram_1_8", false,-1, 511,0);
        tracep->declArray(c+924,"top i_cache ram_1_9", false,-1, 511,0);
        tracep->declArray(c+940,"top i_cache ram_1_10", false,-1, 511,0);
        tracep->declArray(c+956,"top i_cache ram_1_11", false,-1, 511,0);
        tracep->declArray(c+972,"top i_cache ram_1_12", false,-1, 511,0);
        tracep->declArray(c+988,"top i_cache ram_1_13", false,-1, 511,0);
        tracep->declArray(c+1004,"top i_cache ram_1_14", false,-1, 511,0);
        tracep->declArray(c+1020,"top i_cache ram_1_15", false,-1, 511,0);
        tracep->declArray(c+1036,"top i_cache ram_2_0", false,-1, 511,0);
        tracep->declArray(c+1052,"top i_cache ram_2_1", false,-1, 511,0);
        tracep->declArray(c+1068,"top i_cache ram_2_2", false,-1, 511,0);
        tracep->declArray(c+1084,"top i_cache ram_2_3", false,-1, 511,0);
        tracep->declArray(c+1100,"top i_cache ram_2_4", false,-1, 511,0);
        tracep->declArray(c+1116,"top i_cache ram_2_5", false,-1, 511,0);
        tracep->declArray(c+1132,"top i_cache ram_2_6", false,-1, 511,0);
        tracep->declArray(c+1148,"top i_cache ram_2_7", false,-1, 511,0);
        tracep->declArray(c+1164,"top i_cache ram_2_8", false,-1, 511,0);
        tracep->declArray(c+1180,"top i_cache ram_2_9", false,-1, 511,0);
        tracep->declArray(c+1196,"top i_cache ram_2_10", false,-1, 511,0);
        tracep->declArray(c+1212,"top i_cache ram_2_11", false,-1, 511,0);
        tracep->declArray(c+1228,"top i_cache ram_2_12", false,-1, 511,0);
        tracep->declArray(c+1244,"top i_cache ram_2_13", false,-1, 511,0);
        tracep->declArray(c+1260,"top i_cache ram_2_14", false,-1, 511,0);
        tracep->declArray(c+1276,"top i_cache ram_2_15", false,-1, 511,0);
        tracep->declArray(c+1292,"top i_cache ram_3_0", false,-1, 511,0);
        tracep->declArray(c+1308,"top i_cache ram_3_1", false,-1, 511,0);
        tracep->declArray(c+1324,"top i_cache ram_3_2", false,-1, 511,0);
        tracep->declArray(c+1340,"top i_cache ram_3_3", false,-1, 511,0);
        tracep->declArray(c+1356,"top i_cache ram_3_4", false,-1, 511,0);
        tracep->declArray(c+1372,"top i_cache ram_3_5", false,-1, 511,0);
        tracep->declArray(c+1388,"top i_cache ram_3_6", false,-1, 511,0);
        tracep->declArray(c+1404,"top i_cache ram_3_7", false,-1, 511,0);
        tracep->declArray(c+1420,"top i_cache ram_3_8", false,-1, 511,0);
        tracep->declArray(c+1436,"top i_cache ram_3_9", false,-1, 511,0);
        tracep->declArray(c+1452,"top i_cache ram_3_10", false,-1, 511,0);
        tracep->declArray(c+1468,"top i_cache ram_3_11", false,-1, 511,0);
        tracep->declArray(c+1484,"top i_cache ram_3_12", false,-1, 511,0);
        tracep->declArray(c+1500,"top i_cache ram_3_13", false,-1, 511,0);
        tracep->declArray(c+1516,"top i_cache ram_3_14", false,-1, 511,0);
        tracep->declArray(c+1532,"top i_cache ram_3_15", false,-1, 511,0);
        tracep->declBus(c+1548,"top i_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+1549,"top i_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+1550,"top i_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+1551,"top i_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+1552,"top i_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+1553,"top i_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+1554,"top i_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+1555,"top i_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+1556,"top i_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+1557,"top i_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+1558,"top i_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+1559,"top i_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+1560,"top i_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+1561,"top i_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+1562,"top i_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+1563,"top i_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+1564,"top i_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+1565,"top i_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+1566,"top i_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+1567,"top i_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+1568,"top i_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+1569,"top i_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+1570,"top i_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+1571,"top i_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+1572,"top i_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+1573,"top i_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+1574,"top i_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+1575,"top i_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+1576,"top i_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+1577,"top i_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+1578,"top i_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+1579,"top i_cache tag_1_15", false,-1, 31,0);
        tracep->declBus(c+1580,"top i_cache tag_2_0", false,-1, 31,0);
        tracep->declBus(c+1581,"top i_cache tag_2_1", false,-1, 31,0);
        tracep->declBus(c+1582,"top i_cache tag_2_2", false,-1, 31,0);
        tracep->declBus(c+1583,"top i_cache tag_2_3", false,-1, 31,0);
        tracep->declBus(c+1584,"top i_cache tag_2_4", false,-1, 31,0);
        tracep->declBus(c+1585,"top i_cache tag_2_5", false,-1, 31,0);
        tracep->declBus(c+1586,"top i_cache tag_2_6", false,-1, 31,0);
        tracep->declBus(c+1587,"top i_cache tag_2_7", false,-1, 31,0);
        tracep->declBus(c+1588,"top i_cache tag_2_8", false,-1, 31,0);
        tracep->declBus(c+1589,"top i_cache tag_2_9", false,-1, 31,0);
        tracep->declBus(c+1590,"top i_cache tag_2_10", false,-1, 31,0);
        tracep->declBus(c+1591,"top i_cache tag_2_11", false,-1, 31,0);
        tracep->declBus(c+1592,"top i_cache tag_2_12", false,-1, 31,0);
        tracep->declBus(c+1593,"top i_cache tag_2_13", false,-1, 31,0);
        tracep->declBus(c+1594,"top i_cache tag_2_14", false,-1, 31,0);
        tracep->declBus(c+1595,"top i_cache tag_2_15", false,-1, 31,0);
        tracep->declBus(c+1596,"top i_cache tag_3_0", false,-1, 31,0);
        tracep->declBus(c+1597,"top i_cache tag_3_1", false,-1, 31,0);
        tracep->declBus(c+1598,"top i_cache tag_3_2", false,-1, 31,0);
        tracep->declBus(c+1599,"top i_cache tag_3_3", false,-1, 31,0);
        tracep->declBus(c+1600,"top i_cache tag_3_4", false,-1, 31,0);
        tracep->declBus(c+1601,"top i_cache tag_3_5", false,-1, 31,0);
        tracep->declBus(c+1602,"top i_cache tag_3_6", false,-1, 31,0);
        tracep->declBus(c+1603,"top i_cache tag_3_7", false,-1, 31,0);
        tracep->declBus(c+1604,"top i_cache tag_3_8", false,-1, 31,0);
        tracep->declBus(c+1605,"top i_cache tag_3_9", false,-1, 31,0);
        tracep->declBus(c+1606,"top i_cache tag_3_10", false,-1, 31,0);
        tracep->declBus(c+1607,"top i_cache tag_3_11", false,-1, 31,0);
        tracep->declBus(c+1608,"top i_cache tag_3_12", false,-1, 31,0);
        tracep->declBus(c+1609,"top i_cache tag_3_13", false,-1, 31,0);
        tracep->declBus(c+1610,"top i_cache tag_3_14", false,-1, 31,0);
        tracep->declBus(c+1611,"top i_cache tag_3_15", false,-1, 31,0);
        tracep->declBit(c+1612,"top i_cache valid_0_0", false,-1);
        tracep->declBit(c+1613,"top i_cache valid_0_1", false,-1);
        tracep->declBit(c+1614,"top i_cache valid_0_2", false,-1);
        tracep->declBit(c+1615,"top i_cache valid_0_3", false,-1);
        tracep->declBit(c+1616,"top i_cache valid_0_4", false,-1);
        tracep->declBit(c+1617,"top i_cache valid_0_5", false,-1);
        tracep->declBit(c+1618,"top i_cache valid_0_6", false,-1);
        tracep->declBit(c+1619,"top i_cache valid_0_7", false,-1);
        tracep->declBit(c+1620,"top i_cache valid_0_8", false,-1);
        tracep->declBit(c+1621,"top i_cache valid_0_9", false,-1);
        tracep->declBit(c+1622,"top i_cache valid_0_10", false,-1);
        tracep->declBit(c+1623,"top i_cache valid_0_11", false,-1);
        tracep->declBit(c+1624,"top i_cache valid_0_12", false,-1);
        tracep->declBit(c+1625,"top i_cache valid_0_13", false,-1);
        tracep->declBit(c+1626,"top i_cache valid_0_14", false,-1);
        tracep->declBit(c+1627,"top i_cache valid_0_15", false,-1);
        tracep->declBit(c+1628,"top i_cache valid_1_0", false,-1);
        tracep->declBit(c+1629,"top i_cache valid_1_1", false,-1);
        tracep->declBit(c+1630,"top i_cache valid_1_2", false,-1);
        tracep->declBit(c+1631,"top i_cache valid_1_3", false,-1);
        tracep->declBit(c+1632,"top i_cache valid_1_4", false,-1);
        tracep->declBit(c+1633,"top i_cache valid_1_5", false,-1);
        tracep->declBit(c+1634,"top i_cache valid_1_6", false,-1);
        tracep->declBit(c+1635,"top i_cache valid_1_7", false,-1);
        tracep->declBit(c+1636,"top i_cache valid_1_8", false,-1);
        tracep->declBit(c+1637,"top i_cache valid_1_9", false,-1);
        tracep->declBit(c+1638,"top i_cache valid_1_10", false,-1);
        tracep->declBit(c+1639,"top i_cache valid_1_11", false,-1);
        tracep->declBit(c+1640,"top i_cache valid_1_12", false,-1);
        tracep->declBit(c+1641,"top i_cache valid_1_13", false,-1);
        tracep->declBit(c+1642,"top i_cache valid_1_14", false,-1);
        tracep->declBit(c+1643,"top i_cache valid_1_15", false,-1);
        tracep->declBit(c+1644,"top i_cache valid_2_0", false,-1);
        tracep->declBit(c+1645,"top i_cache valid_2_1", false,-1);
        tracep->declBit(c+1646,"top i_cache valid_2_2", false,-1);
        tracep->declBit(c+1647,"top i_cache valid_2_3", false,-1);
        tracep->declBit(c+1648,"top i_cache valid_2_4", false,-1);
        tracep->declBit(c+1649,"top i_cache valid_2_5", false,-1);
        tracep->declBit(c+1650,"top i_cache valid_2_6", false,-1);
        tracep->declBit(c+1651,"top i_cache valid_2_7", false,-1);
        tracep->declBit(c+1652,"top i_cache valid_2_8", false,-1);
        tracep->declBit(c+1653,"top i_cache valid_2_9", false,-1);
        tracep->declBit(c+1654,"top i_cache valid_2_10", false,-1);
        tracep->declBit(c+1655,"top i_cache valid_2_11", false,-1);
        tracep->declBit(c+1656,"top i_cache valid_2_12", false,-1);
        tracep->declBit(c+1657,"top i_cache valid_2_13", false,-1);
        tracep->declBit(c+1658,"top i_cache valid_2_14", false,-1);
        tracep->declBit(c+1659,"top i_cache valid_2_15", false,-1);
        tracep->declBit(c+1660,"top i_cache valid_3_0", false,-1);
        tracep->declBit(c+1661,"top i_cache valid_3_1", false,-1);
        tracep->declBit(c+1662,"top i_cache valid_3_2", false,-1);
        tracep->declBit(c+1663,"top i_cache valid_3_3", false,-1);
        tracep->declBit(c+1664,"top i_cache valid_3_4", false,-1);
        tracep->declBit(c+1665,"top i_cache valid_3_5", false,-1);
        tracep->declBit(c+1666,"top i_cache valid_3_6", false,-1);
        tracep->declBit(c+1667,"top i_cache valid_3_7", false,-1);
        tracep->declBit(c+1668,"top i_cache valid_3_8", false,-1);
        tracep->declBit(c+1669,"top i_cache valid_3_9", false,-1);
        tracep->declBit(c+1670,"top i_cache valid_3_10", false,-1);
        tracep->declBit(c+1671,"top i_cache valid_3_11", false,-1);
        tracep->declBit(c+1672,"top i_cache valid_3_12", false,-1);
        tracep->declBit(c+1673,"top i_cache valid_3_13", false,-1);
        tracep->declBit(c+1674,"top i_cache valid_3_14", false,-1);
        tracep->declBit(c+1675,"top i_cache valid_3_15", false,-1);
        tracep->declBus(c+1676,"top i_cache addr", false,-1, 31,0);
        tracep->declQuad(c+1677,"top i_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+1679,"top i_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+1681,"top i_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+1683,"top i_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+1685,"top i_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+1687,"top i_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+1689,"top i_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+1691,"top i_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+1693,"top i_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+1694,"top i_cache quene_0", false,-1, 7,0);
        tracep->declBus(c+1695,"top i_cache quene_1", false,-1, 7,0);
        tracep->declBus(c+1696,"top i_cache quene_2", false,-1, 7,0);
        tracep->declBus(c+1697,"top i_cache quene_3", false,-1, 7,0);
        tracep->declBus(c+1698,"top i_cache quene_4", false,-1, 7,0);
        tracep->declBus(c+1699,"top i_cache quene_5", false,-1, 7,0);
        tracep->declBus(c+1700,"top i_cache quene_6", false,-1, 7,0);
        tracep->declBus(c+1701,"top i_cache quene_7", false,-1, 7,0);
        tracep->declBus(c+1702,"top i_cache quene_8", false,-1, 7,0);
        tracep->declBus(c+1703,"top i_cache quene_9", false,-1, 7,0);
        tracep->declBus(c+1704,"top i_cache quene_10", false,-1, 7,0);
        tracep->declBus(c+1705,"top i_cache quene_11", false,-1, 7,0);
        tracep->declBus(c+1706,"top i_cache quene_12", false,-1, 7,0);
        tracep->declBus(c+1707,"top i_cache quene_13", false,-1, 7,0);
        tracep->declBus(c+1708,"top i_cache quene_14", false,-1, 7,0);
        tracep->declBus(c+1709,"top i_cache quene_15", false,-1, 7,0);
        tracep->declBus(c+1710,"top i_cache offset", false,-1, 5,0);
        tracep->declBus(c+1711,"top i_cache index", false,-1, 3,0);
        tracep->declBus(c+1712,"top i_cache tag", false,-1, 21,0);
        tracep->declBus(c+1713,"top i_cache shift_bit", false,-1, 8,0);
        tracep->declBit(c+1714,"top i_cache way0_hit", false,-1);
        tracep->declBit(c+1715,"top i_cache way1_hit", false,-1);
        tracep->declBit(c+1716,"top i_cache way2_hit", false,-1);
        tracep->declBit(c+1717,"top i_cache way3_hit", false,-1);
        tracep->declBus(c+1718,"top i_cache unuse_way", false,-1, 2,0);
        tracep->declBus(c+1719,"top i_cache state", false,-1, 2,0);
        tracep->declBit(c+2395,"top d_cache clock", false,-1);
        tracep->declBit(c+2396,"top d_cache reset", false,-1);
        tracep->declBus(c+79,"top d_cache io_from_lsu_araddr", false,-1, 31,0);
        tracep->declBit(c+80,"top d_cache io_from_lsu_arvalid", false,-1);
        tracep->declBus(c+79,"top d_cache io_from_lsu_awaddr", false,-1, 31,0);
        tracep->declBit(c+81,"top d_cache io_from_lsu_awvalid", false,-1);
        tracep->declQuad(c+82,"top d_cache io_from_lsu_wdata", false,-1, 63,0);
        tracep->declBus(c+84,"top d_cache io_from_lsu_wstrb", false,-1, 7,0);
        tracep->declBit(c+85,"top d_cache io_from_lsu_wvalid", false,-1);
        tracep->declQuad(c+75,"top d_cache io_to_lsu_rdata", false,-1, 63,0);
        tracep->declBit(c+77,"top d_cache io_to_lsu_rvalid", false,-1);
        tracep->declBit(c+78,"top d_cache io_to_lsu_wready", false,-1);
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
        tracep->declArray(c+1720,"top d_cache ram_0_0", false,-1, 511,0);
        tracep->declArray(c+1736,"top d_cache ram_0_1", false,-1, 511,0);
        tracep->declArray(c+1752,"top d_cache ram_0_2", false,-1, 511,0);
        tracep->declArray(c+1768,"top d_cache ram_0_3", false,-1, 511,0);
        tracep->declArray(c+1784,"top d_cache ram_0_4", false,-1, 511,0);
        tracep->declArray(c+1800,"top d_cache ram_0_5", false,-1, 511,0);
        tracep->declArray(c+1816,"top d_cache ram_0_6", false,-1, 511,0);
        tracep->declArray(c+1832,"top d_cache ram_0_7", false,-1, 511,0);
        tracep->declArray(c+1848,"top d_cache ram_0_8", false,-1, 511,0);
        tracep->declArray(c+1864,"top d_cache ram_0_9", false,-1, 511,0);
        tracep->declArray(c+1880,"top d_cache ram_0_10", false,-1, 511,0);
        tracep->declArray(c+1896,"top d_cache ram_0_11", false,-1, 511,0);
        tracep->declArray(c+1912,"top d_cache ram_0_12", false,-1, 511,0);
        tracep->declArray(c+1928,"top d_cache ram_0_13", false,-1, 511,0);
        tracep->declArray(c+1944,"top d_cache ram_0_14", false,-1, 511,0);
        tracep->declArray(c+1960,"top d_cache ram_0_15", false,-1, 511,0);
        tracep->declArray(c+1976,"top d_cache ram_1_0", false,-1, 511,0);
        tracep->declArray(c+1992,"top d_cache ram_1_1", false,-1, 511,0);
        tracep->declArray(c+2008,"top d_cache ram_1_2", false,-1, 511,0);
        tracep->declArray(c+2024,"top d_cache ram_1_3", false,-1, 511,0);
        tracep->declArray(c+2040,"top d_cache ram_1_4", false,-1, 511,0);
        tracep->declArray(c+2056,"top d_cache ram_1_5", false,-1, 511,0);
        tracep->declArray(c+2072,"top d_cache ram_1_6", false,-1, 511,0);
        tracep->declArray(c+2088,"top d_cache ram_1_7", false,-1, 511,0);
        tracep->declArray(c+2104,"top d_cache ram_1_8", false,-1, 511,0);
        tracep->declArray(c+2120,"top d_cache ram_1_9", false,-1, 511,0);
        tracep->declArray(c+2136,"top d_cache ram_1_10", false,-1, 511,0);
        tracep->declArray(c+2152,"top d_cache ram_1_11", false,-1, 511,0);
        tracep->declArray(c+2168,"top d_cache ram_1_12", false,-1, 511,0);
        tracep->declArray(c+2184,"top d_cache ram_1_13", false,-1, 511,0);
        tracep->declArray(c+2200,"top d_cache ram_1_14", false,-1, 511,0);
        tracep->declArray(c+2216,"top d_cache ram_1_15", false,-1, 511,0);
        tracep->declBus(c+2232,"top d_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+2233,"top d_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+2234,"top d_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+2235,"top d_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+2236,"top d_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+2237,"top d_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+2238,"top d_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+2239,"top d_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+2240,"top d_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+2241,"top d_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+2242,"top d_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+2243,"top d_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+2244,"top d_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+2245,"top d_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+2246,"top d_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+2247,"top d_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+2248,"top d_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+2249,"top d_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+2250,"top d_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+2251,"top d_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+2252,"top d_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+2253,"top d_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+2254,"top d_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+2255,"top d_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+2256,"top d_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+2257,"top d_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+2258,"top d_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+2259,"top d_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+2260,"top d_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+2261,"top d_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+2262,"top d_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+2263,"top d_cache tag_1_15", false,-1, 31,0);
        tracep->declBit(c+2264,"top d_cache valid_0_0", false,-1);
        tracep->declBit(c+2265,"top d_cache valid_0_1", false,-1);
        tracep->declBit(c+2266,"top d_cache valid_0_2", false,-1);
        tracep->declBit(c+2267,"top d_cache valid_0_3", false,-1);
        tracep->declBit(c+2268,"top d_cache valid_0_4", false,-1);
        tracep->declBit(c+2269,"top d_cache valid_0_5", false,-1);
        tracep->declBit(c+2270,"top d_cache valid_0_6", false,-1);
        tracep->declBit(c+2271,"top d_cache valid_0_7", false,-1);
        tracep->declBit(c+2272,"top d_cache valid_0_8", false,-1);
        tracep->declBit(c+2273,"top d_cache valid_0_9", false,-1);
        tracep->declBit(c+2274,"top d_cache valid_0_10", false,-1);
        tracep->declBit(c+2275,"top d_cache valid_0_11", false,-1);
        tracep->declBit(c+2276,"top d_cache valid_0_12", false,-1);
        tracep->declBit(c+2277,"top d_cache valid_0_13", false,-1);
        tracep->declBit(c+2278,"top d_cache valid_0_14", false,-1);
        tracep->declBit(c+2279,"top d_cache valid_0_15", false,-1);
        tracep->declBit(c+2280,"top d_cache valid_1_0", false,-1);
        tracep->declBit(c+2281,"top d_cache valid_1_1", false,-1);
        tracep->declBit(c+2282,"top d_cache valid_1_2", false,-1);
        tracep->declBit(c+2283,"top d_cache valid_1_3", false,-1);
        tracep->declBit(c+2284,"top d_cache valid_1_4", false,-1);
        tracep->declBit(c+2285,"top d_cache valid_1_5", false,-1);
        tracep->declBit(c+2286,"top d_cache valid_1_6", false,-1);
        tracep->declBit(c+2287,"top d_cache valid_1_7", false,-1);
        tracep->declBit(c+2288,"top d_cache valid_1_8", false,-1);
        tracep->declBit(c+2289,"top d_cache valid_1_9", false,-1);
        tracep->declBit(c+2290,"top d_cache valid_1_10", false,-1);
        tracep->declBit(c+2291,"top d_cache valid_1_11", false,-1);
        tracep->declBit(c+2292,"top d_cache valid_1_12", false,-1);
        tracep->declBit(c+2293,"top d_cache valid_1_13", false,-1);
        tracep->declBit(c+2294,"top d_cache valid_1_14", false,-1);
        tracep->declBit(c+2295,"top d_cache valid_1_15", false,-1);
        tracep->declBit(c+2296,"top d_cache dirty_0_0", false,-1);
        tracep->declBit(c+2297,"top d_cache dirty_0_1", false,-1);
        tracep->declBit(c+2298,"top d_cache dirty_0_2", false,-1);
        tracep->declBit(c+2299,"top d_cache dirty_0_3", false,-1);
        tracep->declBit(c+2300,"top d_cache dirty_0_4", false,-1);
        tracep->declBit(c+2301,"top d_cache dirty_0_5", false,-1);
        tracep->declBit(c+2302,"top d_cache dirty_0_6", false,-1);
        tracep->declBit(c+2303,"top d_cache dirty_0_7", false,-1);
        tracep->declBit(c+2304,"top d_cache dirty_0_8", false,-1);
        tracep->declBit(c+2305,"top d_cache dirty_0_9", false,-1);
        tracep->declBit(c+2306,"top d_cache dirty_0_10", false,-1);
        tracep->declBit(c+2307,"top d_cache dirty_0_11", false,-1);
        tracep->declBit(c+2308,"top d_cache dirty_0_12", false,-1);
        tracep->declBit(c+2309,"top d_cache dirty_0_13", false,-1);
        tracep->declBit(c+2310,"top d_cache dirty_0_14", false,-1);
        tracep->declBit(c+2311,"top d_cache dirty_0_15", false,-1);
        tracep->declBit(c+2312,"top d_cache dirty_1_0", false,-1);
        tracep->declBit(c+2313,"top d_cache dirty_1_1", false,-1);
        tracep->declBit(c+2314,"top d_cache dirty_1_2", false,-1);
        tracep->declBit(c+2315,"top d_cache dirty_1_3", false,-1);
        tracep->declBit(c+2316,"top d_cache dirty_1_4", false,-1);
        tracep->declBit(c+2317,"top d_cache dirty_1_5", false,-1);
        tracep->declBit(c+2318,"top d_cache dirty_1_6", false,-1);
        tracep->declBit(c+2319,"top d_cache dirty_1_7", false,-1);
        tracep->declBit(c+2320,"top d_cache dirty_1_8", false,-1);
        tracep->declBit(c+2321,"top d_cache dirty_1_9", false,-1);
        tracep->declBit(c+2322,"top d_cache dirty_1_10", false,-1);
        tracep->declBit(c+2323,"top d_cache dirty_1_11", false,-1);
        tracep->declBit(c+2324,"top d_cache dirty_1_12", false,-1);
        tracep->declBit(c+2325,"top d_cache dirty_1_13", false,-1);
        tracep->declBit(c+2326,"top d_cache dirty_1_14", false,-1);
        tracep->declBit(c+2327,"top d_cache dirty_1_15", false,-1);
        tracep->declArray(c+2328,"top d_cache write_back_data", false,-1, 511,0);
        tracep->declBus(c+2344,"top d_cache write_back_addr", false,-1, 31,0);
        tracep->declQuad(c+2345,"top d_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+2347,"top d_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+2349,"top d_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+2351,"top d_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+2353,"top d_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+2355,"top d_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+2357,"top d_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+2359,"top d_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+2361,"top d_cache receive_num", false,-1, 2,0);
        tracep->declBus(c+2362,"top d_cache quene_0", false,-1, 1,0);
        tracep->declBus(c+2363,"top d_cache quene_1", false,-1, 1,0);
        tracep->declBus(c+2364,"top d_cache quene_2", false,-1, 1,0);
        tracep->declBus(c+2365,"top d_cache quene_3", false,-1, 1,0);
        tracep->declBus(c+2366,"top d_cache quene_4", false,-1, 1,0);
        tracep->declBus(c+2367,"top d_cache quene_5", false,-1, 1,0);
        tracep->declBus(c+2368,"top d_cache quene_6", false,-1, 1,0);
        tracep->declBus(c+2369,"top d_cache quene_7", false,-1, 1,0);
        tracep->declBus(c+2370,"top d_cache quene_8", false,-1, 1,0);
        tracep->declBus(c+2371,"top d_cache quene_9", false,-1, 1,0);
        tracep->declBus(c+2372,"top d_cache quene_10", false,-1, 1,0);
        tracep->declBus(c+2373,"top d_cache quene_11", false,-1, 1,0);
        tracep->declBus(c+2374,"top d_cache quene_12", false,-1, 1,0);
        tracep->declBus(c+2375,"top d_cache quene_13", false,-1, 1,0);
        tracep->declBus(c+2376,"top d_cache quene_14", false,-1, 1,0);
        tracep->declBus(c+2377,"top d_cache quene_15", false,-1, 1,0);
        tracep->declBus(c+2378,"top d_cache offset", false,-1, 5,0);
        tracep->declBus(c+2379,"top d_cache index", false,-1, 3,0);
        tracep->declBus(c+2380,"top d_cache tag", false,-1, 21,0);
        tracep->declBus(c+2381,"top d_cache shift_bit", false,-1, 8,0);
        tracep->declQuad(c+2382,"top d_cache wmask", false,-1, 63,0);
        tracep->declBit(c+2384,"top d_cache way0_hit", false,-1);
        tracep->declBit(c+2385,"top d_cache way1_hit", false,-1);
        tracep->declBus(c+2386,"top d_cache unuse_way", false,-1, 1,0);
        tracep->declBus(c+2387,"top d_cache state", false,-1, 3,0);
        tracep->declBit(c+2395,"top axi clock", false,-1);
        tracep->declBit(c+2396,"top axi reset", false,-1);
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
        tracep->declQuad(c+2388,"top axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+114,"top axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+2390,"top axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+127,"top axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+129,"top axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+118,"top axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+117,"top axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+118,"top axi axi_wready", false,-1);
        tracep->declBit(c+119,"top axi axi_bvalid", false,-1);
        tracep->declBit(c+117,"top axi axi_rvalid", false,-1);
        tracep->declBus(c+2392,"top axi arlen", false,-1, 7,0);
        tracep->declBus(c+2393,"top axi awlen", false,-1, 7,0);
        tracep->declQuad(c+2388,"top axi araddr", false,-1, 63,0);
        tracep->declQuad(c+2390,"top axi awaddr", false,-1, 63,0);
        tracep->declBus(c+2394,"top axi state", false,-1, 2,0);
        tracep->declQuad(c+2388,"top axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+2390,"top axi Mem_modle Waddr", false,-1, 63,0);
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

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_93e1b771_0;

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<16>/*511:0*/ __Vtemp4036;
    VlWide<16>/*511:0*/ __Vtemp4037;
    VlWide<16>/*511:0*/ __Vtemp4040;
    VlWide<4>/*127:0*/ __Vtemp4044;
    VlWide<4>/*127:0*/ __Vtemp4045;
    VlWide<4>/*127:0*/ __Vtemp4046;
    VlWide<3>/*95:0*/ __Vtemp4049;
    VlWide<3>/*95:0*/ __Vtemp4050;
    VlWide<3>/*95:0*/ __Vtemp4054;
    VlWide<3>/*95:0*/ __Vtemp4058;
    VlWide<3>/*95:0*/ __Vtemp4065;
    VlWide<4>/*127:0*/ __Vtemp4066;
    VlWide<3>/*95:0*/ __Vtemp4067;
    VlWide<4>/*127:0*/ __Vtemp4068;
    VlWide<4>/*127:0*/ __Vtemp4069;
    VlWide<4>/*127:0*/ __Vtemp4075;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0xfU))),5);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__IDU__DOT__rs2),5);
        tracep->fullQData(oldp+3,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0xfU)))
                                    ? 0ULL : vlSelf->top__DOT__Register__DOT__Reg
                                   [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                              >> 0xfU))])),64);
        tracep->fullQData(oldp+5,(((0U == (IData)(vlSelf->top__DOT__IDU__DOT__rs2))
                                    ? 0ULL : vlSelf->top__DOT__Register__DOT__Reg
                                   [vlSelf->top__DOT__IDU__DOT__rs2])),64);
        tracep->fullBit(oldp+7,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                 & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid))));
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__WBU__DOT__ws_rf_dst),5);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__WBU__DOT__ws_res),64);
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__IDU_io_ds_allowin));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__IDU__DOT__ds_ready_go));
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__IDU__DOT__ds_valid));
        tracep->fullBit(oldp+14,(vlSelf->top__DOT__IDU__DOT__br_taken));
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__IDU_io_br_target),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__IFU__DOT__fs_pc),64);
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__IFU__DOT__fs_to_ds_valid));
        tracep->fullIData(oldp+20,(vlSelf->top__DOT__IFU__DOT__fs_inst),32);
        tracep->fullQData(oldp+21,((((QData)((IData)(
                                                     vlSelf->top__DOT__i_cache__DOT___GEN_2967[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__i_cache__DOT___GEN_2967[0U])))),64);
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid));
        tracep->fullIData(oldp+24,((IData)(vlSelf->top__DOT__IFU__DOT__pc_next)),32);
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__IFU_io_axi_out_rready));
        tracep->fullBit(oldp+26,((0x100fU == vlSelf->top__DOT__IDU__DOT__inst)));
        tracep->fullBit(oldp+27,(((0x100fU == vlSelf->top__DOT__IDU__DOT__inst) 
                                  & (~ (IData)(vlSelf->top__DOT__IFU__DOT__cache_init)))));
        tracep->fullBit(oldp+28,((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__IDU_io_ds_to_es_valid));
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__EXU__DOT__es_allowin));
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__IDU__DOT__ds_pc),64);
        tracep->fullIData(oldp+33,(vlSelf->top__DOT__IDU__DOT___ALUop_T_176),32);
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__IDU_io_src1),64);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__IDU_io_src2),64);
        tracep->fullCData(oldp+38,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+39,(((0x3023U == (0x707fU 
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
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__EXU_io_es_ld));
        tracep->fullQData(oldp+47,((((QData)((IData)(
                                                     vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__LSU_io_ms_fwd_res),64);
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__EXU_io_es_to_ms_valid));
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__LSU_io_ms_to_ws_valid));
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__EXU__DOT__es_rf_we));
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__LSU_io_ms_rf_we));
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__EXU__DOT__es_valid));
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
        VL_SHIFTR_WWI(512,512,9, __Vtemp4036, vlSelf->top__DOT__d_cache__DOT___GEN_88, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                 << 3U)));
        VL_SHIFTR_WWI(512,512,9, __Vtemp4037, vlSelf->top__DOT__d_cache__DOT___GEN_136, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                 << 3U)));
        VL_EXTEND_WQ(512,64, __Vtemp4040, ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
        tracep->fullQData(oldp+75,((((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                        ? 
                                                       __Vtemp4036[1U]
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                         ? 
                                                        __Vtemp4037[1U]
                                                         : 
                                                        Vtop__ConstPool__CONST_93e1b771_0[1U]))
                                                       : 
                                                      __Vtemp4040[1U]))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((1U 
                                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                   ? 
                                                                  ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                                    ? 
                                                                   __Vtemp4036[0U]
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                                     ? 
                                                                    __Vtemp4037[0U]
                                                                     : 
                                                                    Vtop__ConstPool__CONST_93e1b771_0[0U]))
                                                                   : 
                                                                  __Vtemp4040[0U]))))),64);
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__d_cache_io_to_lsu_rvalid));
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__d_cache_io_to_lsu_wready));
        tracep->fullIData(oldp+79,((IData)(vlSelf->top__DOT__LSU__DOT__maddr)),32);
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__LSU_io_axi_out_arvalid));
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__LSU_io_axi_out_awvalid));
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__LSU__DOT__store_data),64);
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__LSU__DOT__wen));
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
        tracep->fullIData(oldp+88,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_2962)),32);
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__i_cache__DOT___GEN_2963),8);
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
        tracep->fullBit(oldp+95,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
        tracep->fullIData(oldp+96,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)),32);
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
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_wready));
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__axi_io_axi_out_rlast));
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__axi__DOT__axi_wready));
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
        tracep->fullIData(oldp+120,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)
                                              : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_2962)
                                                  : 0U)))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_2962)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)
                                                  : 0U))))),32);
        tracep->fullCData(oldp+121,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                              : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_2963)
                                                  : 0U)))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_2963)
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
                                    [vlSelf->top__DOT__IDU__DOT__rs2]),64);
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
        tracep->fullBit(oldp+334,(vlSelf->top__DOT__IFU__DOT__br_taken_cancel));
        tracep->fullBit(oldp+335,(vlSelf->top__DOT__IFU__DOT__fs_valid));
        tracep->fullBit(oldp+336,(vlSelf->top__DOT__IFU__DOT__cache_init));
        tracep->fullBit(oldp+337,(vlSelf->top__DOT__IFU__DOT__fs_ready_go));
        tracep->fullBit(oldp+338,(vlSelf->top__DOT__IFU__DOT__br_taken));
        tracep->fullQData(oldp+339,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
        tracep->fullQData(oldp+341,(vlSelf->top__DOT__IFU__DOT__pc_next),64);
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
        tracep->fullBit(oldp+354,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
        tracep->fullIData(oldp+355,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
        tracep->fullCData(oldp+356,(vlSelf->top__DOT__IDU__DOT__csr_write),2);
        tracep->fullBit(oldp+357,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1));
        tracep->fullBit(oldp+358,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1));
        tracep->fullBit(oldp+359,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1));
        tracep->fullQData(oldp+360,(vlSelf->top__DOT__IDU__DOT__rdata1),64);
        tracep->fullBit(oldp+362,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
        tracep->fullBit(oldp+363,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2));
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2));
        tracep->fullBit(oldp+365,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2));
        tracep->fullQData(oldp+366,(vlSelf->top__DOT__IDU__DOT__rdata2),64);
        tracep->fullSData(oldp+368,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+369,(((0x80000U & (vlSelf->top__DOT__IDU__DOT__inst 
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
        tracep->fullIData(oldp+370,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+371,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U)))),12);
        tracep->fullSData(oldp+372,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | ((0x400U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 8U)))))),12);
        tracep->fullQData(oldp+373,(vlSelf->top__DOT__IDU__DOT__imm),64);
        tracep->fullCData(oldp+375,(vlSelf->top__DOT__IDU__DOT__csr_index),2);
        tracep->fullQData(oldp+376,(((0x1073U == (0x707fU 
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
        tracep->fullQData(oldp+378,(vlSelf->top__DOT__IDU__DOT__src1),64);
        tracep->fullQData(oldp+380,(((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                      ? vlSelf->top__DOT__IDU__DOT__imm
                                      : vlSelf->top__DOT__IDU__DOT__rdata2)),64);
        tracep->fullQData(oldp+382,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[0]),64);
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[1]),64);
        tracep->fullQData(oldp+386,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[2]),64);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[3]),64);
        tracep->fullQData(oldp+390,(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value),64);
        tracep->fullQData(oldp+392,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
        tracep->fullIData(oldp+394,(vlSelf->top__DOT__EXU__DOT__ALUop),32);
        tracep->fullBit(oldp+395,(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy));
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
        tracep->fullBit(oldp+398,((1U & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)))));
        tracep->fullBit(oldp+399,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid));
        tracep->fullBit(oldp+400,((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)));
        tracep->fullBit(oldp+401,(((0U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                   & ((1U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                      & (2U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))))));
        tracep->fullIData(oldp+402,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
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
        tracep->fullIData(oldp+403,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo),32);
        tracep->fullBit(oldp+404,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid));
        tracep->fullBit(oldp+405,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw));
        tracep->fullBit(oldp+406,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed));
        tracep->fullBit(oldp+407,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start) 
                                   & VL_GTES_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num))));
        tracep->fullQData(oldp+408,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient),64);
        tracep->fullQData(oldp+410,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder),64);
        tracep->fullBit(oldp+412,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid));
        tracep->fullBit(oldp+413,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid));
        tracep->fullQData(oldp+414,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res),64);
        tracep->fullQData(oldp+416,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res),64);
        tracep->fullQData(oldp+418,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res),64);
        tracep->fullQData(oldp+420,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),64);
        VL_EXTEND_WQ(127,64, __Vtemp4044, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
        VL_SHIFTL_WWI(127,127,6, __Vtemp4045, __Vtemp4044, 
                      (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
        __Vtemp4046[0U] = __Vtemp4045[0U];
        __Vtemp4046[1U] = __Vtemp4045[1U];
        __Vtemp4046[2U] = __Vtemp4045[2U];
        __Vtemp4046[3U] = (0x7fffffffU & __Vtemp4045[3U]);
        tracep->fullWData(oldp+422,(__Vtemp4046),127);
        tracep->fullIData(oldp+426,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
        tracep->fullIData(oldp+427,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res),32);
        tracep->fullQData(oldp+428,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res),63);
        tracep->fullQData(oldp+430,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     | vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+432,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     ^ vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+434,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     & vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+436,((((QData)((IData)(
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
        tracep->fullIData(oldp+438,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient)),32);
        tracep->fullIData(oldp+439,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder)),32);
        tracep->fullWData(oldp+440,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res),127);
        tracep->fullCData(oldp+444,((7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])),3);
        tracep->fullQData(oldp+445,((((QData)((IData)(
                                                      vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))),64);
        tracep->fullBit(oldp+447,(((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                   | ((5U == (7U & 
                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                      | (4U == (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))))));
        VL_EXTEND_WQ(65,64, __Vtemp4049, (~ (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp4050, (~ (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp4054, ((2U == (7U 
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
        __Vtemp4058[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
                                : __Vtemp4054[1U]));
        __Vtemp4065[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                            ? 0U : (1U & ((6U == (7U 
                                                  & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                           ? __Vtemp4049[2U]
                                           : ((5U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                               ? __Vtemp4050[2U]
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
                                                   __Vtemp4054[2U]))))));
        tracep->fullQData(oldp+448,((((QData)((IData)(
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
                                                        __Vtemp4049[1U]
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                          ? 
                                                         __Vtemp4050[1U]
                                                          : 
                                                         __Vtemp4058[1U]))))) 
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
                                                                    __Vtemp4049[0U]
                                                                     : 
                                                                    ((5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                                      ? 
                                                                     __Vtemp4050[0U]
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
                                                                       __Vtemp4054[0U]))))))))),64);
        tracep->fullBit(oldp+450,((1U & ((IData)((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                  >> 0x3fU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__EXU__DOT__src2_value 
                                                    >> 0x3fU))))));
        tracep->fullQData(oldp+451,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res),64);
        tracep->fullCData(oldp+453,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state),2);
        tracep->fullWData(oldp+454,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1),128);
        tracep->fullWData(oldp+458,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2),65);
        tracep->fullQData(oldp+461,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32),64);
        tracep->fullQData(oldp+463,(((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
        __Vtemp4066[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
        __Vtemp4066[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                   >> 0x20U));
        __Vtemp4066[2U] = (IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                  >> 0x3fU)))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL));
        __Vtemp4066[3U] = (IData)((((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                   >> 0x3fU)))
                                     ? 0xffffffffffffffffULL
                                     : 0ULL) >> 0x20U));
        tracep->fullWData(oldp+465,(__Vtemp4066),128);
        tracep->fullQData(oldp+469,((((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
        tracep->fullBit(oldp+471,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg));
        tracep->fullBit(oldp+472,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg));
        tracep->fullBit(oldp+473,((((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg) 
                                    & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg))) 
                                   | ((~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)) 
                                      & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)))));
        tracep->fullQData(oldp+474,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s),64);
        tracep->fullQData(oldp+476,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s),64);
        tracep->fullQData(oldp+478,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                      ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                      : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)),64);
        tracep->fullQData(oldp+480,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                      ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                      : vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+482,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                          : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))),64);
        tracep->fullQData(oldp+484,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                          : vlSelf->top__DOT__EXU__DOT__src2_value))),64);
        VL_EXTEND_WQ(65,64, __Vtemp4067, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                           ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                               ? (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                               : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                           : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                               ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                               : vlSelf->top__DOT__EXU__DOT__src2_value)));
        tracep->fullWData(oldp+486,(__Vtemp4067),65);
        tracep->fullWData(oldp+489,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand),128);
        tracep->fullBit(oldp+493,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start));
        tracep->fullQData(oldp+494,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient),64);
        tracep->fullIData(oldp+496,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num),32);
        VL_EXTEND_WQ(128,64, __Vtemp4068, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                            ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                                ? (1ULL 
                                                   + 
                                                   (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                                : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                            : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                                ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                                : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
        tracep->fullWData(oldp+497,(__Vtemp4068),128);
        tracep->fullWData(oldp+501,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res),65);
        __Vtemp4069[0U] = 0U;
        __Vtemp4069[1U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                           << 0x1fU);
        __Vtemp4069[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                            >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                      << 0x1fU));
        __Vtemp4069[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                            >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                      << 0x1fU));
        tracep->fullWData(oldp+504,(__Vtemp4069),128);
        if ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])) {
            __Vtemp4075[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp4075[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U];
            __Vtemp4075[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U];
            __Vtemp4075[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U];
        } else {
            __Vtemp4075[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp4075[1U] = ((0x7fffffffU & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                               | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                  << 0x1fU));
            __Vtemp4075[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                          << 0x1fU));
            __Vtemp4075[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                          << 0x1fU));
        }
        tracep->fullWData(oldp+508,(__Vtemp4075),128);
        tracep->fullBit(oldp+512,(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
        tracep->fullQData(oldp+513,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
        tracep->fullBit(oldp+515,(vlSelf->top__DOT__LSU__DOT__ren));
        tracep->fullQData(oldp+516,(vlSelf->top__DOT__LSU__DOT__maddr),64);
        tracep->fullCData(oldp+518,(vlSelf->top__DOT__LSU__DOT__load_type),3);
        tracep->fullQData(oldp+519,(vlSelf->top__DOT__LSU__DOT__mem_rdata),64);
        tracep->fullQData(oldp+521,(vlSelf->top__DOT__LSU__DOT__rdata),64);
        tracep->fullCData(oldp+523,(vlSelf->top__DOT__arbiter__DOT__state),2);
        tracep->fullWData(oldp+524,(vlSelf->top__DOT__i_cache__DOT__ram_0_0),512);
        tracep->fullWData(oldp+540,(vlSelf->top__DOT__i_cache__DOT__ram_0_1),512);
        tracep->fullWData(oldp+556,(vlSelf->top__DOT__i_cache__DOT__ram_0_2),512);
        tracep->fullWData(oldp+572,(vlSelf->top__DOT__i_cache__DOT__ram_0_3),512);
        tracep->fullWData(oldp+588,(vlSelf->top__DOT__i_cache__DOT__ram_0_4),512);
        tracep->fullWData(oldp+604,(vlSelf->top__DOT__i_cache__DOT__ram_0_5),512);
        tracep->fullWData(oldp+620,(vlSelf->top__DOT__i_cache__DOT__ram_0_6),512);
        tracep->fullWData(oldp+636,(vlSelf->top__DOT__i_cache__DOT__ram_0_7),512);
        tracep->fullWData(oldp+652,(vlSelf->top__DOT__i_cache__DOT__ram_0_8),512);
        tracep->fullWData(oldp+668,(vlSelf->top__DOT__i_cache__DOT__ram_0_9),512);
        tracep->fullWData(oldp+684,(vlSelf->top__DOT__i_cache__DOT__ram_0_10),512);
        tracep->fullWData(oldp+700,(vlSelf->top__DOT__i_cache__DOT__ram_0_11),512);
        tracep->fullWData(oldp+716,(vlSelf->top__DOT__i_cache__DOT__ram_0_12),512);
        tracep->fullWData(oldp+732,(vlSelf->top__DOT__i_cache__DOT__ram_0_13),512);
        tracep->fullWData(oldp+748,(vlSelf->top__DOT__i_cache__DOT__ram_0_14),512);
        tracep->fullWData(oldp+764,(vlSelf->top__DOT__i_cache__DOT__ram_0_15),512);
        tracep->fullWData(oldp+780,(vlSelf->top__DOT__i_cache__DOT__ram_1_0),512);
        tracep->fullWData(oldp+796,(vlSelf->top__DOT__i_cache__DOT__ram_1_1),512);
        tracep->fullWData(oldp+812,(vlSelf->top__DOT__i_cache__DOT__ram_1_2),512);
        tracep->fullWData(oldp+828,(vlSelf->top__DOT__i_cache__DOT__ram_1_3),512);
        tracep->fullWData(oldp+844,(vlSelf->top__DOT__i_cache__DOT__ram_1_4),512);
        tracep->fullWData(oldp+860,(vlSelf->top__DOT__i_cache__DOT__ram_1_5),512);
        tracep->fullWData(oldp+876,(vlSelf->top__DOT__i_cache__DOT__ram_1_6),512);
        tracep->fullWData(oldp+892,(vlSelf->top__DOT__i_cache__DOT__ram_1_7),512);
        tracep->fullWData(oldp+908,(vlSelf->top__DOT__i_cache__DOT__ram_1_8),512);
        tracep->fullWData(oldp+924,(vlSelf->top__DOT__i_cache__DOT__ram_1_9),512);
        tracep->fullWData(oldp+940,(vlSelf->top__DOT__i_cache__DOT__ram_1_10),512);
        tracep->fullWData(oldp+956,(vlSelf->top__DOT__i_cache__DOT__ram_1_11),512);
        tracep->fullWData(oldp+972,(vlSelf->top__DOT__i_cache__DOT__ram_1_12),512);
        tracep->fullWData(oldp+988,(vlSelf->top__DOT__i_cache__DOT__ram_1_13),512);
        tracep->fullWData(oldp+1004,(vlSelf->top__DOT__i_cache__DOT__ram_1_14),512);
        tracep->fullWData(oldp+1020,(vlSelf->top__DOT__i_cache__DOT__ram_1_15),512);
        tracep->fullWData(oldp+1036,(vlSelf->top__DOT__i_cache__DOT__ram_2_0),512);
        tracep->fullWData(oldp+1052,(vlSelf->top__DOT__i_cache__DOT__ram_2_1),512);
        tracep->fullWData(oldp+1068,(vlSelf->top__DOT__i_cache__DOT__ram_2_2),512);
        tracep->fullWData(oldp+1084,(vlSelf->top__DOT__i_cache__DOT__ram_2_3),512);
        tracep->fullWData(oldp+1100,(vlSelf->top__DOT__i_cache__DOT__ram_2_4),512);
        tracep->fullWData(oldp+1116,(vlSelf->top__DOT__i_cache__DOT__ram_2_5),512);
        tracep->fullWData(oldp+1132,(vlSelf->top__DOT__i_cache__DOT__ram_2_6),512);
        tracep->fullWData(oldp+1148,(vlSelf->top__DOT__i_cache__DOT__ram_2_7),512);
        tracep->fullWData(oldp+1164,(vlSelf->top__DOT__i_cache__DOT__ram_2_8),512);
        tracep->fullWData(oldp+1180,(vlSelf->top__DOT__i_cache__DOT__ram_2_9),512);
        tracep->fullWData(oldp+1196,(vlSelf->top__DOT__i_cache__DOT__ram_2_10),512);
        tracep->fullWData(oldp+1212,(vlSelf->top__DOT__i_cache__DOT__ram_2_11),512);
        tracep->fullWData(oldp+1228,(vlSelf->top__DOT__i_cache__DOT__ram_2_12),512);
        tracep->fullWData(oldp+1244,(vlSelf->top__DOT__i_cache__DOT__ram_2_13),512);
        tracep->fullWData(oldp+1260,(vlSelf->top__DOT__i_cache__DOT__ram_2_14),512);
        tracep->fullWData(oldp+1276,(vlSelf->top__DOT__i_cache__DOT__ram_2_15),512);
        tracep->fullWData(oldp+1292,(vlSelf->top__DOT__i_cache__DOT__ram_3_0),512);
        tracep->fullWData(oldp+1308,(vlSelf->top__DOT__i_cache__DOT__ram_3_1),512);
        tracep->fullWData(oldp+1324,(vlSelf->top__DOT__i_cache__DOT__ram_3_2),512);
        tracep->fullWData(oldp+1340,(vlSelf->top__DOT__i_cache__DOT__ram_3_3),512);
        tracep->fullWData(oldp+1356,(vlSelf->top__DOT__i_cache__DOT__ram_3_4),512);
        tracep->fullWData(oldp+1372,(vlSelf->top__DOT__i_cache__DOT__ram_3_5),512);
        tracep->fullWData(oldp+1388,(vlSelf->top__DOT__i_cache__DOT__ram_3_6),512);
        tracep->fullWData(oldp+1404,(vlSelf->top__DOT__i_cache__DOT__ram_3_7),512);
        tracep->fullWData(oldp+1420,(vlSelf->top__DOT__i_cache__DOT__ram_3_8),512);
        tracep->fullWData(oldp+1436,(vlSelf->top__DOT__i_cache__DOT__ram_3_9),512);
        tracep->fullWData(oldp+1452,(vlSelf->top__DOT__i_cache__DOT__ram_3_10),512);
        tracep->fullWData(oldp+1468,(vlSelf->top__DOT__i_cache__DOT__ram_3_11),512);
        tracep->fullWData(oldp+1484,(vlSelf->top__DOT__i_cache__DOT__ram_3_12),512);
        tracep->fullWData(oldp+1500,(vlSelf->top__DOT__i_cache__DOT__ram_3_13),512);
        tracep->fullWData(oldp+1516,(vlSelf->top__DOT__i_cache__DOT__ram_3_14),512);
        tracep->fullWData(oldp+1532,(vlSelf->top__DOT__i_cache__DOT__ram_3_15),512);
        tracep->fullIData(oldp+1548,(vlSelf->top__DOT__i_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+1549,(vlSelf->top__DOT__i_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+1550,(vlSelf->top__DOT__i_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+1551,(vlSelf->top__DOT__i_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+1552,(vlSelf->top__DOT__i_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+1553,(vlSelf->top__DOT__i_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+1554,(vlSelf->top__DOT__i_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+1555,(vlSelf->top__DOT__i_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+1556,(vlSelf->top__DOT__i_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+1557,(vlSelf->top__DOT__i_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+1558,(vlSelf->top__DOT__i_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+1559,(vlSelf->top__DOT__i_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+1560,(vlSelf->top__DOT__i_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+1561,(vlSelf->top__DOT__i_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+1562,(vlSelf->top__DOT__i_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+1563,(vlSelf->top__DOT__i_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+1564,(vlSelf->top__DOT__i_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+1565,(vlSelf->top__DOT__i_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+1566,(vlSelf->top__DOT__i_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+1567,(vlSelf->top__DOT__i_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+1568,(vlSelf->top__DOT__i_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+1569,(vlSelf->top__DOT__i_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+1570,(vlSelf->top__DOT__i_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+1571,(vlSelf->top__DOT__i_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+1572,(vlSelf->top__DOT__i_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+1573,(vlSelf->top__DOT__i_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+1574,(vlSelf->top__DOT__i_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+1575,(vlSelf->top__DOT__i_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+1576,(vlSelf->top__DOT__i_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+1577,(vlSelf->top__DOT__i_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+1578,(vlSelf->top__DOT__i_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+1579,(vlSelf->top__DOT__i_cache__DOT__tag_1_15),32);
        tracep->fullIData(oldp+1580,(vlSelf->top__DOT__i_cache__DOT__tag_2_0),32);
        tracep->fullIData(oldp+1581,(vlSelf->top__DOT__i_cache__DOT__tag_2_1),32);
        tracep->fullIData(oldp+1582,(vlSelf->top__DOT__i_cache__DOT__tag_2_2),32);
        tracep->fullIData(oldp+1583,(vlSelf->top__DOT__i_cache__DOT__tag_2_3),32);
        tracep->fullIData(oldp+1584,(vlSelf->top__DOT__i_cache__DOT__tag_2_4),32);
        tracep->fullIData(oldp+1585,(vlSelf->top__DOT__i_cache__DOT__tag_2_5),32);
        tracep->fullIData(oldp+1586,(vlSelf->top__DOT__i_cache__DOT__tag_2_6),32);
        tracep->fullIData(oldp+1587,(vlSelf->top__DOT__i_cache__DOT__tag_2_7),32);
        tracep->fullIData(oldp+1588,(vlSelf->top__DOT__i_cache__DOT__tag_2_8),32);
        tracep->fullIData(oldp+1589,(vlSelf->top__DOT__i_cache__DOT__tag_2_9),32);
        tracep->fullIData(oldp+1590,(vlSelf->top__DOT__i_cache__DOT__tag_2_10),32);
        tracep->fullIData(oldp+1591,(vlSelf->top__DOT__i_cache__DOT__tag_2_11),32);
        tracep->fullIData(oldp+1592,(vlSelf->top__DOT__i_cache__DOT__tag_2_12),32);
        tracep->fullIData(oldp+1593,(vlSelf->top__DOT__i_cache__DOT__tag_2_13),32);
        tracep->fullIData(oldp+1594,(vlSelf->top__DOT__i_cache__DOT__tag_2_14),32);
        tracep->fullIData(oldp+1595,(vlSelf->top__DOT__i_cache__DOT__tag_2_15),32);
        tracep->fullIData(oldp+1596,(vlSelf->top__DOT__i_cache__DOT__tag_3_0),32);
        tracep->fullIData(oldp+1597,(vlSelf->top__DOT__i_cache__DOT__tag_3_1),32);
        tracep->fullIData(oldp+1598,(vlSelf->top__DOT__i_cache__DOT__tag_3_2),32);
        tracep->fullIData(oldp+1599,(vlSelf->top__DOT__i_cache__DOT__tag_3_3),32);
        tracep->fullIData(oldp+1600,(vlSelf->top__DOT__i_cache__DOT__tag_3_4),32);
        tracep->fullIData(oldp+1601,(vlSelf->top__DOT__i_cache__DOT__tag_3_5),32);
        tracep->fullIData(oldp+1602,(vlSelf->top__DOT__i_cache__DOT__tag_3_6),32);
        tracep->fullIData(oldp+1603,(vlSelf->top__DOT__i_cache__DOT__tag_3_7),32);
        tracep->fullIData(oldp+1604,(vlSelf->top__DOT__i_cache__DOT__tag_3_8),32);
        tracep->fullIData(oldp+1605,(vlSelf->top__DOT__i_cache__DOT__tag_3_9),32);
        tracep->fullIData(oldp+1606,(vlSelf->top__DOT__i_cache__DOT__tag_3_10),32);
        tracep->fullIData(oldp+1607,(vlSelf->top__DOT__i_cache__DOT__tag_3_11),32);
        tracep->fullIData(oldp+1608,(vlSelf->top__DOT__i_cache__DOT__tag_3_12),32);
        tracep->fullIData(oldp+1609,(vlSelf->top__DOT__i_cache__DOT__tag_3_13),32);
        tracep->fullIData(oldp+1610,(vlSelf->top__DOT__i_cache__DOT__tag_3_14),32);
        tracep->fullIData(oldp+1611,(vlSelf->top__DOT__i_cache__DOT__tag_3_15),32);
        tracep->fullBit(oldp+1612,(vlSelf->top__DOT__i_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+1613,(vlSelf->top__DOT__i_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+1614,(vlSelf->top__DOT__i_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+1615,(vlSelf->top__DOT__i_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+1616,(vlSelf->top__DOT__i_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+1617,(vlSelf->top__DOT__i_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+1618,(vlSelf->top__DOT__i_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+1619,(vlSelf->top__DOT__i_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+1620,(vlSelf->top__DOT__i_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+1621,(vlSelf->top__DOT__i_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+1622,(vlSelf->top__DOT__i_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+1623,(vlSelf->top__DOT__i_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+1624,(vlSelf->top__DOT__i_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+1625,(vlSelf->top__DOT__i_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+1626,(vlSelf->top__DOT__i_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+1627,(vlSelf->top__DOT__i_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+1628,(vlSelf->top__DOT__i_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+1629,(vlSelf->top__DOT__i_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+1630,(vlSelf->top__DOT__i_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+1631,(vlSelf->top__DOT__i_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+1632,(vlSelf->top__DOT__i_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+1633,(vlSelf->top__DOT__i_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+1634,(vlSelf->top__DOT__i_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+1635,(vlSelf->top__DOT__i_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+1636,(vlSelf->top__DOT__i_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+1637,(vlSelf->top__DOT__i_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+1638,(vlSelf->top__DOT__i_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+1639,(vlSelf->top__DOT__i_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+1640,(vlSelf->top__DOT__i_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+1641,(vlSelf->top__DOT__i_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+1642,(vlSelf->top__DOT__i_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+1643,(vlSelf->top__DOT__i_cache__DOT__valid_1_15));
        tracep->fullBit(oldp+1644,(vlSelf->top__DOT__i_cache__DOT__valid_2_0));
        tracep->fullBit(oldp+1645,(vlSelf->top__DOT__i_cache__DOT__valid_2_1));
        tracep->fullBit(oldp+1646,(vlSelf->top__DOT__i_cache__DOT__valid_2_2));
        tracep->fullBit(oldp+1647,(vlSelf->top__DOT__i_cache__DOT__valid_2_3));
        tracep->fullBit(oldp+1648,(vlSelf->top__DOT__i_cache__DOT__valid_2_4));
        tracep->fullBit(oldp+1649,(vlSelf->top__DOT__i_cache__DOT__valid_2_5));
        tracep->fullBit(oldp+1650,(vlSelf->top__DOT__i_cache__DOT__valid_2_6));
        tracep->fullBit(oldp+1651,(vlSelf->top__DOT__i_cache__DOT__valid_2_7));
        tracep->fullBit(oldp+1652,(vlSelf->top__DOT__i_cache__DOT__valid_2_8));
        tracep->fullBit(oldp+1653,(vlSelf->top__DOT__i_cache__DOT__valid_2_9));
        tracep->fullBit(oldp+1654,(vlSelf->top__DOT__i_cache__DOT__valid_2_10));
        tracep->fullBit(oldp+1655,(vlSelf->top__DOT__i_cache__DOT__valid_2_11));
        tracep->fullBit(oldp+1656,(vlSelf->top__DOT__i_cache__DOT__valid_2_12));
        tracep->fullBit(oldp+1657,(vlSelf->top__DOT__i_cache__DOT__valid_2_13));
        tracep->fullBit(oldp+1658,(vlSelf->top__DOT__i_cache__DOT__valid_2_14));
        tracep->fullBit(oldp+1659,(vlSelf->top__DOT__i_cache__DOT__valid_2_15));
        tracep->fullBit(oldp+1660,(vlSelf->top__DOT__i_cache__DOT__valid_3_0));
        tracep->fullBit(oldp+1661,(vlSelf->top__DOT__i_cache__DOT__valid_3_1));
        tracep->fullBit(oldp+1662,(vlSelf->top__DOT__i_cache__DOT__valid_3_2));
        tracep->fullBit(oldp+1663,(vlSelf->top__DOT__i_cache__DOT__valid_3_3));
        tracep->fullBit(oldp+1664,(vlSelf->top__DOT__i_cache__DOT__valid_3_4));
        tracep->fullBit(oldp+1665,(vlSelf->top__DOT__i_cache__DOT__valid_3_5));
        tracep->fullBit(oldp+1666,(vlSelf->top__DOT__i_cache__DOT__valid_3_6));
        tracep->fullBit(oldp+1667,(vlSelf->top__DOT__i_cache__DOT__valid_3_7));
        tracep->fullBit(oldp+1668,(vlSelf->top__DOT__i_cache__DOT__valid_3_8));
        tracep->fullBit(oldp+1669,(vlSelf->top__DOT__i_cache__DOT__valid_3_9));
        tracep->fullBit(oldp+1670,(vlSelf->top__DOT__i_cache__DOT__valid_3_10));
        tracep->fullBit(oldp+1671,(vlSelf->top__DOT__i_cache__DOT__valid_3_11));
        tracep->fullBit(oldp+1672,(vlSelf->top__DOT__i_cache__DOT__valid_3_12));
        tracep->fullBit(oldp+1673,(vlSelf->top__DOT__i_cache__DOT__valid_3_13));
        tracep->fullBit(oldp+1674,(vlSelf->top__DOT__i_cache__DOT__valid_3_14));
        tracep->fullBit(oldp+1675,(vlSelf->top__DOT__i_cache__DOT__valid_3_15));
        tracep->fullIData(oldp+1676,(vlSelf->top__DOT__i_cache__DOT__addr),32);
        tracep->fullQData(oldp+1677,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+1679,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+1681,(vlSelf->top__DOT__i_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+1683,(vlSelf->top__DOT__i_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+1685,(vlSelf->top__DOT__i_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+1687,(vlSelf->top__DOT__i_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+1689,(vlSelf->top__DOT__i_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+1691,(vlSelf->top__DOT__i_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+1693,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+1694,(vlSelf->top__DOT__i_cache__DOT__quene_0),8);
        tracep->fullCData(oldp+1695,(vlSelf->top__DOT__i_cache__DOT__quene_1),8);
        tracep->fullCData(oldp+1696,(vlSelf->top__DOT__i_cache__DOT__quene_2),8);
        tracep->fullCData(oldp+1697,(vlSelf->top__DOT__i_cache__DOT__quene_3),8);
        tracep->fullCData(oldp+1698,(vlSelf->top__DOT__i_cache__DOT__quene_4),8);
        tracep->fullCData(oldp+1699,(vlSelf->top__DOT__i_cache__DOT__quene_5),8);
        tracep->fullCData(oldp+1700,(vlSelf->top__DOT__i_cache__DOT__quene_6),8);
        tracep->fullCData(oldp+1701,(vlSelf->top__DOT__i_cache__DOT__quene_7),8);
        tracep->fullCData(oldp+1702,(vlSelf->top__DOT__i_cache__DOT__quene_8),8);
        tracep->fullCData(oldp+1703,(vlSelf->top__DOT__i_cache__DOT__quene_9),8);
        tracep->fullCData(oldp+1704,(vlSelf->top__DOT__i_cache__DOT__quene_10),8);
        tracep->fullCData(oldp+1705,(vlSelf->top__DOT__i_cache__DOT__quene_11),8);
        tracep->fullCData(oldp+1706,(vlSelf->top__DOT__i_cache__DOT__quene_12),8);
        tracep->fullCData(oldp+1707,(vlSelf->top__DOT__i_cache__DOT__quene_13),8);
        tracep->fullCData(oldp+1708,(vlSelf->top__DOT__i_cache__DOT__quene_14),8);
        tracep->fullCData(oldp+1709,(vlSelf->top__DOT__i_cache__DOT__quene_15),8);
        tracep->fullCData(oldp+1710,((0x3fU & vlSelf->top__DOT__i_cache__DOT__addr)),6);
        tracep->fullCData(oldp+1711,((0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 6U))),4);
        tracep->fullIData(oldp+1712,((vlSelf->top__DOT__i_cache__DOT__addr 
                                      >> 0xaU)),22);
        tracep->fullSData(oldp+1713,((0x1f8U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                << 3U))),9);
        tracep->fullBit(oldp+1714,(vlSelf->top__DOT__i_cache__DOT__way0_hit));
        tracep->fullBit(oldp+1715,(vlSelf->top__DOT__i_cache__DOT__way1_hit));
        tracep->fullBit(oldp+1716,(vlSelf->top__DOT__i_cache__DOT__way2_hit));
        tracep->fullBit(oldp+1717,(vlSelf->top__DOT__i_cache__DOT__way3_hit));
        tracep->fullCData(oldp+1718,(vlSelf->top__DOT__i_cache__DOT__unuse_way),3);
        tracep->fullCData(oldp+1719,(vlSelf->top__DOT__i_cache__DOT__state),3);
        tracep->fullWData(oldp+1720,(vlSelf->top__DOT__d_cache__DOT__ram_0_0),512);
        tracep->fullWData(oldp+1736,(vlSelf->top__DOT__d_cache__DOT__ram_0_1),512);
        tracep->fullWData(oldp+1752,(vlSelf->top__DOT__d_cache__DOT__ram_0_2),512);
        tracep->fullWData(oldp+1768,(vlSelf->top__DOT__d_cache__DOT__ram_0_3),512);
        tracep->fullWData(oldp+1784,(vlSelf->top__DOT__d_cache__DOT__ram_0_4),512);
        tracep->fullWData(oldp+1800,(vlSelf->top__DOT__d_cache__DOT__ram_0_5),512);
        tracep->fullWData(oldp+1816,(vlSelf->top__DOT__d_cache__DOT__ram_0_6),512);
        tracep->fullWData(oldp+1832,(vlSelf->top__DOT__d_cache__DOT__ram_0_7),512);
        tracep->fullWData(oldp+1848,(vlSelf->top__DOT__d_cache__DOT__ram_0_8),512);
        tracep->fullWData(oldp+1864,(vlSelf->top__DOT__d_cache__DOT__ram_0_9),512);
        tracep->fullWData(oldp+1880,(vlSelf->top__DOT__d_cache__DOT__ram_0_10),512);
        tracep->fullWData(oldp+1896,(vlSelf->top__DOT__d_cache__DOT__ram_0_11),512);
        tracep->fullWData(oldp+1912,(vlSelf->top__DOT__d_cache__DOT__ram_0_12),512);
        tracep->fullWData(oldp+1928,(vlSelf->top__DOT__d_cache__DOT__ram_0_13),512);
        tracep->fullWData(oldp+1944,(vlSelf->top__DOT__d_cache__DOT__ram_0_14),512);
        tracep->fullWData(oldp+1960,(vlSelf->top__DOT__d_cache__DOT__ram_0_15),512);
        tracep->fullWData(oldp+1976,(vlSelf->top__DOT__d_cache__DOT__ram_1_0),512);
        tracep->fullWData(oldp+1992,(vlSelf->top__DOT__d_cache__DOT__ram_1_1),512);
        tracep->fullWData(oldp+2008,(vlSelf->top__DOT__d_cache__DOT__ram_1_2),512);
        tracep->fullWData(oldp+2024,(vlSelf->top__DOT__d_cache__DOT__ram_1_3),512);
        tracep->fullWData(oldp+2040,(vlSelf->top__DOT__d_cache__DOT__ram_1_4),512);
        tracep->fullWData(oldp+2056,(vlSelf->top__DOT__d_cache__DOT__ram_1_5),512);
        tracep->fullWData(oldp+2072,(vlSelf->top__DOT__d_cache__DOT__ram_1_6),512);
        tracep->fullWData(oldp+2088,(vlSelf->top__DOT__d_cache__DOT__ram_1_7),512);
        tracep->fullWData(oldp+2104,(vlSelf->top__DOT__d_cache__DOT__ram_1_8),512);
        tracep->fullWData(oldp+2120,(vlSelf->top__DOT__d_cache__DOT__ram_1_9),512);
        tracep->fullWData(oldp+2136,(vlSelf->top__DOT__d_cache__DOT__ram_1_10),512);
        tracep->fullWData(oldp+2152,(vlSelf->top__DOT__d_cache__DOT__ram_1_11),512);
        tracep->fullWData(oldp+2168,(vlSelf->top__DOT__d_cache__DOT__ram_1_12),512);
        tracep->fullWData(oldp+2184,(vlSelf->top__DOT__d_cache__DOT__ram_1_13),512);
        tracep->fullWData(oldp+2200,(vlSelf->top__DOT__d_cache__DOT__ram_1_14),512);
        tracep->fullWData(oldp+2216,(vlSelf->top__DOT__d_cache__DOT__ram_1_15),512);
        tracep->fullIData(oldp+2232,(vlSelf->top__DOT__d_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+2233,(vlSelf->top__DOT__d_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+2234,(vlSelf->top__DOT__d_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+2235,(vlSelf->top__DOT__d_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+2236,(vlSelf->top__DOT__d_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+2237,(vlSelf->top__DOT__d_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+2238,(vlSelf->top__DOT__d_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+2239,(vlSelf->top__DOT__d_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+2240,(vlSelf->top__DOT__d_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+2241,(vlSelf->top__DOT__d_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+2242,(vlSelf->top__DOT__d_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+2243,(vlSelf->top__DOT__d_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+2244,(vlSelf->top__DOT__d_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+2245,(vlSelf->top__DOT__d_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+2246,(vlSelf->top__DOT__d_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+2247,(vlSelf->top__DOT__d_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+2248,(vlSelf->top__DOT__d_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+2249,(vlSelf->top__DOT__d_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+2250,(vlSelf->top__DOT__d_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+2251,(vlSelf->top__DOT__d_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+2252,(vlSelf->top__DOT__d_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+2253,(vlSelf->top__DOT__d_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+2254,(vlSelf->top__DOT__d_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+2255,(vlSelf->top__DOT__d_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+2256,(vlSelf->top__DOT__d_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+2257,(vlSelf->top__DOT__d_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+2258,(vlSelf->top__DOT__d_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+2259,(vlSelf->top__DOT__d_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+2260,(vlSelf->top__DOT__d_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+2261,(vlSelf->top__DOT__d_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+2262,(vlSelf->top__DOT__d_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+2263,(vlSelf->top__DOT__d_cache__DOT__tag_1_15),32);
        tracep->fullBit(oldp+2264,(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+2265,(vlSelf->top__DOT__d_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+2266,(vlSelf->top__DOT__d_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+2267,(vlSelf->top__DOT__d_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+2268,(vlSelf->top__DOT__d_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+2269,(vlSelf->top__DOT__d_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+2270,(vlSelf->top__DOT__d_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+2271,(vlSelf->top__DOT__d_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+2272,(vlSelf->top__DOT__d_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+2273,(vlSelf->top__DOT__d_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+2274,(vlSelf->top__DOT__d_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+2275,(vlSelf->top__DOT__d_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+2276,(vlSelf->top__DOT__d_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+2277,(vlSelf->top__DOT__d_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+2278,(vlSelf->top__DOT__d_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+2279,(vlSelf->top__DOT__d_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+2280,(vlSelf->top__DOT__d_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+2281,(vlSelf->top__DOT__d_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+2282,(vlSelf->top__DOT__d_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+2283,(vlSelf->top__DOT__d_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+2284,(vlSelf->top__DOT__d_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+2285,(vlSelf->top__DOT__d_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+2286,(vlSelf->top__DOT__d_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+2287,(vlSelf->top__DOT__d_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+2288,(vlSelf->top__DOT__d_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+2289,(vlSelf->top__DOT__d_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+2290,(vlSelf->top__DOT__d_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+2291,(vlSelf->top__DOT__d_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+2292,(vlSelf->top__DOT__d_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+2293,(vlSelf->top__DOT__d_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+2294,(vlSelf->top__DOT__d_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+2295,(vlSelf->top__DOT__d_cache__DOT__valid_1_15));
        tracep->fullBit(oldp+2296,(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
        tracep->fullBit(oldp+2297,(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
        tracep->fullBit(oldp+2298,(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
        tracep->fullBit(oldp+2299,(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
        tracep->fullBit(oldp+2300,(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
        tracep->fullBit(oldp+2301,(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
        tracep->fullBit(oldp+2302,(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
        tracep->fullBit(oldp+2303,(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
        tracep->fullBit(oldp+2304,(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
        tracep->fullBit(oldp+2305,(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
        tracep->fullBit(oldp+2306,(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
        tracep->fullBit(oldp+2307,(vlSelf->top__DOT__d_cache__DOT__dirty_0_11));
        tracep->fullBit(oldp+2308,(vlSelf->top__DOT__d_cache__DOT__dirty_0_12));
        tracep->fullBit(oldp+2309,(vlSelf->top__DOT__d_cache__DOT__dirty_0_13));
        tracep->fullBit(oldp+2310,(vlSelf->top__DOT__d_cache__DOT__dirty_0_14));
        tracep->fullBit(oldp+2311,(vlSelf->top__DOT__d_cache__DOT__dirty_0_15));
        tracep->fullBit(oldp+2312,(vlSelf->top__DOT__d_cache__DOT__dirty_1_0));
        tracep->fullBit(oldp+2313,(vlSelf->top__DOT__d_cache__DOT__dirty_1_1));
        tracep->fullBit(oldp+2314,(vlSelf->top__DOT__d_cache__DOT__dirty_1_2));
        tracep->fullBit(oldp+2315,(vlSelf->top__DOT__d_cache__DOT__dirty_1_3));
        tracep->fullBit(oldp+2316,(vlSelf->top__DOT__d_cache__DOT__dirty_1_4));
        tracep->fullBit(oldp+2317,(vlSelf->top__DOT__d_cache__DOT__dirty_1_5));
        tracep->fullBit(oldp+2318,(vlSelf->top__DOT__d_cache__DOT__dirty_1_6));
        tracep->fullBit(oldp+2319,(vlSelf->top__DOT__d_cache__DOT__dirty_1_7));
        tracep->fullBit(oldp+2320,(vlSelf->top__DOT__d_cache__DOT__dirty_1_8));
        tracep->fullBit(oldp+2321,(vlSelf->top__DOT__d_cache__DOT__dirty_1_9));
        tracep->fullBit(oldp+2322,(vlSelf->top__DOT__d_cache__DOT__dirty_1_10));
        tracep->fullBit(oldp+2323,(vlSelf->top__DOT__d_cache__DOT__dirty_1_11));
        tracep->fullBit(oldp+2324,(vlSelf->top__DOT__d_cache__DOT__dirty_1_12));
        tracep->fullBit(oldp+2325,(vlSelf->top__DOT__d_cache__DOT__dirty_1_13));
        tracep->fullBit(oldp+2326,(vlSelf->top__DOT__d_cache__DOT__dirty_1_14));
        tracep->fullBit(oldp+2327,(vlSelf->top__DOT__d_cache__DOT__dirty_1_15));
        tracep->fullWData(oldp+2328,(vlSelf->top__DOT__d_cache__DOT__write_back_data),512);
        tracep->fullIData(oldp+2344,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
        tracep->fullQData(oldp+2345,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+2347,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+2349,(vlSelf->top__DOT__d_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+2351,(vlSelf->top__DOT__d_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+2353,(vlSelf->top__DOT__d_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+2355,(vlSelf->top__DOT__d_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+2357,(vlSelf->top__DOT__d_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+2359,(vlSelf->top__DOT__d_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+2361,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
        tracep->fullCData(oldp+2362,(vlSelf->top__DOT__d_cache__DOT__quene_0),2);
        tracep->fullCData(oldp+2363,(vlSelf->top__DOT__d_cache__DOT__quene_1),2);
        tracep->fullCData(oldp+2364,(vlSelf->top__DOT__d_cache__DOT__quene_2),2);
        tracep->fullCData(oldp+2365,(vlSelf->top__DOT__d_cache__DOT__quene_3),2);
        tracep->fullCData(oldp+2366,(vlSelf->top__DOT__d_cache__DOT__quene_4),2);
        tracep->fullCData(oldp+2367,(vlSelf->top__DOT__d_cache__DOT__quene_5),2);
        tracep->fullCData(oldp+2368,(vlSelf->top__DOT__d_cache__DOT__quene_6),2);
        tracep->fullCData(oldp+2369,(vlSelf->top__DOT__d_cache__DOT__quene_7),2);
        tracep->fullCData(oldp+2370,(vlSelf->top__DOT__d_cache__DOT__quene_8),2);
        tracep->fullCData(oldp+2371,(vlSelf->top__DOT__d_cache__DOT__quene_9),2);
        tracep->fullCData(oldp+2372,(vlSelf->top__DOT__d_cache__DOT__quene_10),2);
        tracep->fullCData(oldp+2373,(vlSelf->top__DOT__d_cache__DOT__quene_11),2);
        tracep->fullCData(oldp+2374,(vlSelf->top__DOT__d_cache__DOT__quene_12),2);
        tracep->fullCData(oldp+2375,(vlSelf->top__DOT__d_cache__DOT__quene_13),2);
        tracep->fullCData(oldp+2376,(vlSelf->top__DOT__d_cache__DOT__quene_14),2);
        tracep->fullCData(oldp+2377,(vlSelf->top__DOT__d_cache__DOT__quene_15),2);
        tracep->fullCData(oldp+2378,((0x3fU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),6);
        tracep->fullCData(oldp+2379,((0xfU & (IData)(
                                                     (vlSelf->top__DOT__LSU__DOT__maddr 
                                                      >> 6U)))),4);
        tracep->fullIData(oldp+2380,((0x3fffffU & (IData)(
                                                          (vlSelf->top__DOT__LSU__DOT__maddr 
                                                           >> 0xaU)))),22);
        tracep->fullSData(oldp+2381,((0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                                << 3U))),9);
        tracep->fullQData(oldp+2382,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
        tracep->fullBit(oldp+2384,(vlSelf->top__DOT__d_cache__DOT__way0_hit));
        tracep->fullBit(oldp+2385,(vlSelf->top__DOT__d_cache__DOT__way1_hit));
        tracep->fullCData(oldp+2386,(vlSelf->top__DOT__d_cache__DOT__unuse_way),2);
        tracep->fullCData(oldp+2387,(vlSelf->top__DOT__d_cache__DOT__state),4);
        tracep->fullQData(oldp+2388,(vlSelf->top__DOT__axi__DOT__araddr),64);
        tracep->fullQData(oldp+2390,(vlSelf->top__DOT__axi__DOT__awaddr),64);
        tracep->fullCData(oldp+2392,(vlSelf->top__DOT__axi__DOT__arlen),8);
        tracep->fullCData(oldp+2393,(vlSelf->top__DOT__axi__DOT__awlen),8);
        tracep->fullCData(oldp+2394,(vlSelf->top__DOT__axi__DOT__state),3);
        tracep->fullBit(oldp+2395,(vlSelf->clock));
        tracep->fullBit(oldp+2396,(vlSelf->reset));
        tracep->fullIData(oldp+2397,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+2398,(vlSelf->io_pc),64);
        tracep->fullBit(oldp+2400,(vlSelf->io_step));
        tracep->fullBit(oldp+2401,(1U));
        tracep->fullCData(oldp+2402,(0U),5);
        tracep->fullCData(oldp+2403,(1U),5);
        tracep->fullCData(oldp+2404,(2U),5);
        tracep->fullCData(oldp+2405,(3U),5);
        tracep->fullCData(oldp+2406,(4U),5);
        tracep->fullCData(oldp+2407,(5U),5);
        tracep->fullCData(oldp+2408,(6U),5);
        tracep->fullCData(oldp+2409,(7U),5);
        tracep->fullCData(oldp+2410,(8U),5);
        tracep->fullCData(oldp+2411,(9U),5);
        tracep->fullCData(oldp+2412,(0xaU),5);
        tracep->fullCData(oldp+2413,(0xbU),5);
        tracep->fullCData(oldp+2414,(0xcU),5);
        tracep->fullCData(oldp+2415,(0xdU),5);
        tracep->fullCData(oldp+2416,(0xeU),5);
        tracep->fullCData(oldp+2417,(0xfU),5);
        tracep->fullCData(oldp+2418,(0x10U),5);
        tracep->fullCData(oldp+2419,(0x11U),5);
        tracep->fullCData(oldp+2420,(0x12U),5);
        tracep->fullCData(oldp+2421,(0x13U),5);
        tracep->fullCData(oldp+2422,(0x14U),5);
        tracep->fullCData(oldp+2423,(0x15U),5);
        tracep->fullCData(oldp+2424,(0x16U),5);
        tracep->fullCData(oldp+2425,(0x17U),5);
        tracep->fullCData(oldp+2426,(0x18U),5);
        tracep->fullCData(oldp+2427,(0x19U),5);
        tracep->fullCData(oldp+2428,(0x1aU),5);
        tracep->fullCData(oldp+2429,(0x1bU),5);
        tracep->fullCData(oldp+2430,(0x1cU),5);
        tracep->fullCData(oldp+2431,(0x1dU),5);
        tracep->fullCData(oldp+2432,(0x1eU),5);
        tracep->fullCData(oldp+2433,(0x1fU),5);
        tracep->fullCData(oldp+2434,(3U),2);
    }
}
