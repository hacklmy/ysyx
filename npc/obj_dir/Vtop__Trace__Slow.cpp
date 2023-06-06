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
        tracep->declBit(c+806,"clock", false,-1);
        tracep->declBit(c+807,"reset", false,-1);
        tracep->declBus(c+808,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+809,"io_pc", false,-1, 63,0);
        tracep->declBit(c+811,"io_step", false,-1);
        tracep->declBit(c+806,"top clock", false,-1);
        tracep->declBit(c+807,"top reset", false,-1);
        tracep->declBus(c+808,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+809,"top io_pc", false,-1, 63,0);
        tracep->declBit(c+811,"top io_step", false,-1);
        tracep->declBit(c+806,"top Register_clock", false,-1);
        tracep->declBit(c+806,"top IFU_clock", false,-1);
        tracep->declBit(c+807,"top IFU_reset", false,-1);
        tracep->declQuad(c+65,"top IFU_io_to_ds_pc", false,-1, 63,0);
        tracep->declBus(c+67,"top IFU_io_inst", false,-1, 31,0);
        tracep->declQuad(c+68,"top IFU_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+70,"top IFU_io_axi_in_rlast", false,-1);
        tracep->declBit(c+71,"top IFU_io_axi_in_rvalid", false,-1);
        tracep->declBus(c+72,"top IFU_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+73,"top IFU_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+74,"top IFU_io_axi_out_rready", false,-1);
        tracep->declQuad(c+65,"top IDU_io_pc", false,-1, 63,0);
        tracep->declBit(c+806,"top arbiter_clock", false,-1);
        tracep->declBit(c+807,"top arbiter_reset", false,-1);
        tracep->declBus(c+75,"top arbiter_io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+76,"top arbiter_io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+77,"top arbiter_io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+78,"top arbiter_io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+79,"top arbiter_io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+81,"top arbiter_io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+82,"top arbiter_io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+83,"top arbiter_io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+84,"top arbiter_io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+85,"top arbiter_io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+86,"top arbiter_io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+87,"top arbiter_io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+88,"top arbiter_io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+89,"top arbiter_io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+91,"top arbiter_io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+92,"top arbiter_io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+93,"top arbiter_io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+94,"top arbiter_io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+96,"top arbiter_io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+97,"top arbiter_io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+98,"top arbiter_io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+99,"top arbiter_io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+100,"top arbiter_io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+102,"top arbiter_io_axi_in_rlast", false,-1);
        tracep->declBit(c+103,"top arbiter_io_axi_in_rvalid", false,-1);
        tracep->declBit(c+104,"top arbiter_io_axi_in_wready", false,-1);
        tracep->declBit(c+105,"top arbiter_io_axi_in_bvalid", false,-1);
        tracep->declBus(c+106,"top arbiter_io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+107,"top arbiter_io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+108,"top arbiter_io_axi_out_arvalid", false,-1);
        tracep->declBit(c+109,"top arbiter_io_axi_out_rready", false,-1);
        tracep->declBus(c+110,"top arbiter_io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+111,"top arbiter_io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+112,"top arbiter_io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+113,"top arbiter_io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+115,"top arbiter_io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+116,"top arbiter_io_axi_out_wvalid", false,-1);
        tracep->declBit(c+117,"top arbiter_io_axi_out_bready", false,-1);
        tracep->declBit(c+806,"top i_cache_clock", false,-1);
        tracep->declBit(c+807,"top i_cache_reset", false,-1);
        tracep->declBus(c+72,"top i_cache_io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+73,"top i_cache_io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+74,"top i_cache_io_from_ifu_rready", false,-1);
        tracep->declQuad(c+68,"top i_cache_io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+70,"top i_cache_io_to_ifu_rlast", false,-1);
        tracep->declBit(c+71,"top i_cache_io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+75,"top i_cache_io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+76,"top i_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+77,"top i_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+78,"top i_cache_io_to_axi_rready", false,-1);
        tracep->declQuad(c+79,"top i_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+81,"top i_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+82,"top i_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+806,"top d_cache_clock", false,-1);
        tracep->declBit(c+807,"top d_cache_reset", false,-1);
        tracep->declBus(c+83,"top d_cache_io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+84,"top d_cache_io_to_axi_arvalid", false,-1);
        tracep->declBit(c+85,"top d_cache_io_to_axi_rready", false,-1);
        tracep->declBus(c+86,"top d_cache_io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+87,"top d_cache_io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+88,"top d_cache_io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+89,"top d_cache_io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+91,"top d_cache_io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+92,"top d_cache_io_to_axi_wvalid", false,-1);
        tracep->declBit(c+93,"top d_cache_io_to_axi_bready", false,-1);
        tracep->declQuad(c+94,"top d_cache_io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+96,"top d_cache_io_from_axi_rlast", false,-1);
        tracep->declBit(c+97,"top d_cache_io_from_axi_rvalid", false,-1);
        tracep->declBit(c+98,"top d_cache_io_from_axi_wready", false,-1);
        tracep->declBit(c+99,"top d_cache_io_from_axi_bvalid", false,-1);
        tracep->declBit(c+806,"top axi_clock", false,-1);
        tracep->declBit(c+807,"top axi_reset", false,-1);
        tracep->declBus(c+106,"top axi_io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+107,"top axi_io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+108,"top axi_io_axi_in_arvalid", false,-1);
        tracep->declBit(c+109,"top axi_io_axi_in_rready", false,-1);
        tracep->declBus(c+110,"top axi_io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+111,"top axi_io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+112,"top axi_io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+113,"top axi_io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+115,"top axi_io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+116,"top axi_io_axi_in_wvalid", false,-1);
        tracep->declBit(c+117,"top axi_io_axi_in_bready", false,-1);
        tracep->declQuad(c+100,"top axi_io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+102,"top axi_io_axi_out_rlast", false,-1);
        tracep->declBit(c+103,"top axi_io_axi_out_rvalid", false,-1);
        tracep->declBit(c+104,"top axi_io_axi_out_wready", false,-1);
        tracep->declBit(c+105,"top axi_io_axi_out_bvalid", false,-1);
        tracep->declBus(c+812,"top dpi_flag", false,-1, 31,0);
        tracep->declBus(c+812,"top dpi_ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+65,"top dpi_pc", false,-1, 63,0);
        tracep->declBit(c+806,"top Register clock", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+813+i*2,"top Register Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+877,"top Register Reg_io_rdata1_MPORT_en", false,-1);
        tracep->declBus(c+878,"top Register Reg_io_rdata1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+879,"top Register Reg_io_rdata1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_io_rdata2_MPORT_en", false,-1);
        tracep->declBus(c+878,"top Register Reg_io_rdata2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+879,"top Register Reg_io_rdata2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+878,"top Register Reg_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+879,"top Register Reg_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+881,"top Register Reg_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+882,"top Register Reg_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+884,"top Register Reg_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+885,"top Register Reg_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+887,"top Register Reg_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+888,"top Register Reg_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+890,"top Register Reg_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+891,"top Register Reg_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+893,"top Register Reg_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+894,"top Register Reg_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+896,"top Register Reg_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+897,"top Register Reg_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+899,"top Register Reg_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+900,"top Register Reg_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+902,"top Register Reg_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+903,"top Register Reg_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+905,"top Register Reg_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+906,"top Register Reg_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+908,"top Register Reg_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+909,"top Register Reg_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+911,"top Register Reg_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+912,"top Register Reg_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+914,"top Register Reg_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+915,"top Register Reg_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+917,"top Register Reg_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+918,"top Register Reg_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+920,"top Register Reg_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+921,"top Register Reg_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+923,"top Register Reg_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+924,"top Register Reg_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+926,"top Register Reg_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+927,"top Register Reg_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+929,"top Register Reg_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+930,"top Register Reg_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+932,"top Register Reg_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+933,"top Register Reg_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+935,"top Register Reg_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+936,"top Register Reg_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+938,"top Register Reg_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+939,"top Register Reg_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+941,"top Register Reg_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+942,"top Register Reg_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+944,"top Register Reg_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+945,"top Register Reg_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+947,"top Register Reg_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+948,"top Register Reg_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+950,"top Register Reg_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+951,"top Register Reg_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+953,"top Register Reg_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+954,"top Register Reg_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+956,"top Register Reg_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+957,"top Register Reg_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+959,"top Register Reg_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+960,"top Register Reg_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+962,"top Register Reg_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+963,"top Register Reg_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+965,"top Register Reg_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+966,"top Register Reg_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+968,"top Register Reg_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+969,"top Register Reg_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+877,"top Register Reg_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+971,"top Register Reg_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+972,"top Register Reg_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+974,"top Register Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+878,"top Register Reg_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+877,"top Register Reg_MPORT_mask", false,-1);
        tracep->declBit(c+976,"top Register Reg_MPORT_en", false,-1);
        tracep->declQuad(c+879,"top Register reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+882,"top Register reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+885,"top Register reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+888,"top Register reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+891,"top Register reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+894,"top Register reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+897,"top Register reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+900,"top Register reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+903,"top Register reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+906,"top Register reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+909,"top Register reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+912,"top Register reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+915,"top Register reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+918,"top Register reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+921,"top Register reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+924,"top Register reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+927,"top Register reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+930,"top Register reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+933,"top Register reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+936,"top Register reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+939,"top Register reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+942,"top Register reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+945,"top Register reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+948,"top Register reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+951,"top Register reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+954,"top Register reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+957,"top Register reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+960,"top Register reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+963,"top Register reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+966,"top Register reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+969,"top Register reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+972,"top Register reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+879,"top Register reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+882,"top Register reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+885,"top Register reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+888,"top Register reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+891,"top Register reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+894,"top Register reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+897,"top Register reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+900,"top Register reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+903,"top Register reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+906,"top Register reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+909,"top Register reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+912,"top Register reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+915,"top Register reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+918,"top Register reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+921,"top Register reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+924,"top Register reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+927,"top Register reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+930,"top Register reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+933,"top Register reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+936,"top Register reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+939,"top Register reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+942,"top Register reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+945,"top Register reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+948,"top Register reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+951,"top Register reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+954,"top Register reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+957,"top Register reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+960,"top Register reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+963,"top Register reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+966,"top Register reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+969,"top Register reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+972,"top Register reg_trace input_reg_31", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1+i*2,"top Register reg_trace traceregs", true,(i+0), 63,0);}}
        tracep->declBit(c+806,"top IFU clock", false,-1);
        tracep->declBit(c+807,"top IFU reset", false,-1);
        tracep->declQuad(c+65,"top IFU io_to_ds_pc", false,-1, 63,0);
        tracep->declBus(c+67,"top IFU io_inst", false,-1, 31,0);
        tracep->declQuad(c+68,"top IFU io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+70,"top IFU io_axi_in_rlast", false,-1);
        tracep->declBit(c+71,"top IFU io_axi_in_rvalid", false,-1);
        tracep->declBus(c+72,"top IFU io_axi_out_araddr", false,-1, 31,0);
        tracep->declBit(c+73,"top IFU io_axi_out_arvalid", false,-1);
        tracep->declBit(c+74,"top IFU io_axi_out_rready", false,-1);
        tracep->declBit(c+73,"top IFU fs_valid", false,-1);
        tracep->declQuad(c+65,"top IFU fs_pc", false,-1, 63,0);
        tracep->declBus(c+67,"top IFU fs_inst", false,-1, 31,0);
        tracep->declQuad(c+118,"top IFU seq_pc", false,-1, 63,0);
        tracep->declBit(c+120,"top IFU fs_allowin", false,-1);
        tracep->declBit(c+74,"top IFU inst_ready", false,-1);
        tracep->declQuad(c+65,"top IDU io_pc", false,-1, 63,0);
        tracep->declBit(c+806,"top arbiter clock", false,-1);
        tracep->declBit(c+807,"top arbiter reset", false,-1);
        tracep->declBus(c+75,"top arbiter io_ifu_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+76,"top arbiter io_ifu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+77,"top arbiter io_ifu_axi_in_arvalid", false,-1);
        tracep->declBit(c+78,"top arbiter io_ifu_axi_in_rready", false,-1);
        tracep->declQuad(c+79,"top arbiter io_ifu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+81,"top arbiter io_ifu_axi_out_rlast", false,-1);
        tracep->declBit(c+82,"top arbiter io_ifu_axi_out_rvalid", false,-1);
        tracep->declBus(c+83,"top arbiter io_lsu_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+84,"top arbiter io_lsu_axi_in_arvalid", false,-1);
        tracep->declBit(c+85,"top arbiter io_lsu_axi_in_rready", false,-1);
        tracep->declBus(c+86,"top arbiter io_lsu_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+87,"top arbiter io_lsu_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+88,"top arbiter io_lsu_axi_in_awvalid", false,-1);
        tracep->declQuad(c+89,"top arbiter io_lsu_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+91,"top arbiter io_lsu_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+92,"top arbiter io_lsu_axi_in_wvalid", false,-1);
        tracep->declBit(c+93,"top arbiter io_lsu_axi_in_bready", false,-1);
        tracep->declQuad(c+94,"top arbiter io_lsu_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+96,"top arbiter io_lsu_axi_out_rlast", false,-1);
        tracep->declBit(c+97,"top arbiter io_lsu_axi_out_rvalid", false,-1);
        tracep->declBit(c+98,"top arbiter io_lsu_axi_out_wready", false,-1);
        tracep->declBit(c+99,"top arbiter io_lsu_axi_out_bvalid", false,-1);
        tracep->declQuad(c+100,"top arbiter io_axi_in_rdata", false,-1, 63,0);
        tracep->declBit(c+102,"top arbiter io_axi_in_rlast", false,-1);
        tracep->declBit(c+103,"top arbiter io_axi_in_rvalid", false,-1);
        tracep->declBit(c+104,"top arbiter io_axi_in_wready", false,-1);
        tracep->declBit(c+105,"top arbiter io_axi_in_bvalid", false,-1);
        tracep->declBus(c+106,"top arbiter io_axi_out_araddr", false,-1, 31,0);
        tracep->declBus(c+107,"top arbiter io_axi_out_arlen", false,-1, 7,0);
        tracep->declBit(c+108,"top arbiter io_axi_out_arvalid", false,-1);
        tracep->declBit(c+109,"top arbiter io_axi_out_rready", false,-1);
        tracep->declBus(c+110,"top arbiter io_axi_out_awaddr", false,-1, 31,0);
        tracep->declBus(c+111,"top arbiter io_axi_out_awlen", false,-1, 7,0);
        tracep->declBit(c+112,"top arbiter io_axi_out_awvalid", false,-1);
        tracep->declQuad(c+113,"top arbiter io_axi_out_wdata", false,-1, 63,0);
        tracep->declBus(c+115,"top arbiter io_axi_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+116,"top arbiter io_axi_out_wvalid", false,-1);
        tracep->declBit(c+117,"top arbiter io_axi_out_bready", false,-1);
        tracep->declBus(c+121,"top arbiter state", false,-1, 1,0);
        tracep->declBit(c+806,"top i_cache clock", false,-1);
        tracep->declBit(c+807,"top i_cache reset", false,-1);
        tracep->declBus(c+72,"top i_cache io_from_ifu_araddr", false,-1, 31,0);
        tracep->declBit(c+73,"top i_cache io_from_ifu_arvalid", false,-1);
        tracep->declBit(c+74,"top i_cache io_from_ifu_rready", false,-1);
        tracep->declQuad(c+68,"top i_cache io_to_ifu_rdata", false,-1, 63,0);
        tracep->declBit(c+70,"top i_cache io_to_ifu_rlast", false,-1);
        tracep->declBit(c+71,"top i_cache io_to_ifu_rvalid", false,-1);
        tracep->declBus(c+75,"top i_cache io_to_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+76,"top i_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+77,"top i_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+78,"top i_cache io_to_axi_rready", false,-1);
        tracep->declQuad(c+79,"top i_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+81,"top i_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+82,"top i_cache io_from_axi_rvalid", false,-1);
        tracep->declArray(c+122,"top i_cache ram_0_0", false,-1, 511,0);
        tracep->declArray(c+138,"top i_cache ram_0_1", false,-1, 511,0);
        tracep->declArray(c+154,"top i_cache ram_0_2", false,-1, 511,0);
        tracep->declArray(c+170,"top i_cache ram_0_3", false,-1, 511,0);
        tracep->declArray(c+186,"top i_cache ram_0_4", false,-1, 511,0);
        tracep->declArray(c+202,"top i_cache ram_0_5", false,-1, 511,0);
        tracep->declArray(c+218,"top i_cache ram_0_6", false,-1, 511,0);
        tracep->declArray(c+234,"top i_cache ram_0_7", false,-1, 511,0);
        tracep->declArray(c+250,"top i_cache ram_0_8", false,-1, 511,0);
        tracep->declArray(c+266,"top i_cache ram_0_9", false,-1, 511,0);
        tracep->declArray(c+282,"top i_cache ram_0_10", false,-1, 511,0);
        tracep->declArray(c+298,"top i_cache ram_0_11", false,-1, 511,0);
        tracep->declArray(c+314,"top i_cache ram_0_12", false,-1, 511,0);
        tracep->declArray(c+330,"top i_cache ram_0_13", false,-1, 511,0);
        tracep->declArray(c+346,"top i_cache ram_0_14", false,-1, 511,0);
        tracep->declArray(c+362,"top i_cache ram_0_15", false,-1, 511,0);
        tracep->declArray(c+378,"top i_cache ram_1_0", false,-1, 511,0);
        tracep->declArray(c+394,"top i_cache ram_1_1", false,-1, 511,0);
        tracep->declArray(c+410,"top i_cache ram_1_2", false,-1, 511,0);
        tracep->declArray(c+426,"top i_cache ram_1_3", false,-1, 511,0);
        tracep->declArray(c+442,"top i_cache ram_1_4", false,-1, 511,0);
        tracep->declArray(c+458,"top i_cache ram_1_5", false,-1, 511,0);
        tracep->declArray(c+474,"top i_cache ram_1_6", false,-1, 511,0);
        tracep->declArray(c+490,"top i_cache ram_1_7", false,-1, 511,0);
        tracep->declArray(c+506,"top i_cache ram_1_8", false,-1, 511,0);
        tracep->declArray(c+522,"top i_cache ram_1_9", false,-1, 511,0);
        tracep->declArray(c+538,"top i_cache ram_1_10", false,-1, 511,0);
        tracep->declArray(c+554,"top i_cache ram_1_11", false,-1, 511,0);
        tracep->declArray(c+570,"top i_cache ram_1_12", false,-1, 511,0);
        tracep->declArray(c+586,"top i_cache ram_1_13", false,-1, 511,0);
        tracep->declArray(c+602,"top i_cache ram_1_14", false,-1, 511,0);
        tracep->declArray(c+618,"top i_cache ram_1_15", false,-1, 511,0);
        tracep->declBus(c+634,"top i_cache tag_0_0", false,-1, 31,0);
        tracep->declBus(c+635,"top i_cache tag_0_1", false,-1, 31,0);
        tracep->declBus(c+636,"top i_cache tag_0_2", false,-1, 31,0);
        tracep->declBus(c+637,"top i_cache tag_0_3", false,-1, 31,0);
        tracep->declBus(c+638,"top i_cache tag_0_4", false,-1, 31,0);
        tracep->declBus(c+639,"top i_cache tag_0_5", false,-1, 31,0);
        tracep->declBus(c+640,"top i_cache tag_0_6", false,-1, 31,0);
        tracep->declBus(c+641,"top i_cache tag_0_7", false,-1, 31,0);
        tracep->declBus(c+642,"top i_cache tag_0_8", false,-1, 31,0);
        tracep->declBus(c+643,"top i_cache tag_0_9", false,-1, 31,0);
        tracep->declBus(c+644,"top i_cache tag_0_10", false,-1, 31,0);
        tracep->declBus(c+645,"top i_cache tag_0_11", false,-1, 31,0);
        tracep->declBus(c+646,"top i_cache tag_0_12", false,-1, 31,0);
        tracep->declBus(c+647,"top i_cache tag_0_13", false,-1, 31,0);
        tracep->declBus(c+648,"top i_cache tag_0_14", false,-1, 31,0);
        tracep->declBus(c+649,"top i_cache tag_0_15", false,-1, 31,0);
        tracep->declBus(c+650,"top i_cache tag_1_0", false,-1, 31,0);
        tracep->declBus(c+651,"top i_cache tag_1_1", false,-1, 31,0);
        tracep->declBus(c+652,"top i_cache tag_1_2", false,-1, 31,0);
        tracep->declBus(c+653,"top i_cache tag_1_3", false,-1, 31,0);
        tracep->declBus(c+654,"top i_cache tag_1_4", false,-1, 31,0);
        tracep->declBus(c+655,"top i_cache tag_1_5", false,-1, 31,0);
        tracep->declBus(c+656,"top i_cache tag_1_6", false,-1, 31,0);
        tracep->declBus(c+657,"top i_cache tag_1_7", false,-1, 31,0);
        tracep->declBus(c+658,"top i_cache tag_1_8", false,-1, 31,0);
        tracep->declBus(c+659,"top i_cache tag_1_9", false,-1, 31,0);
        tracep->declBus(c+660,"top i_cache tag_1_10", false,-1, 31,0);
        tracep->declBus(c+661,"top i_cache tag_1_11", false,-1, 31,0);
        tracep->declBus(c+662,"top i_cache tag_1_12", false,-1, 31,0);
        tracep->declBus(c+663,"top i_cache tag_1_13", false,-1, 31,0);
        tracep->declBus(c+664,"top i_cache tag_1_14", false,-1, 31,0);
        tracep->declBus(c+665,"top i_cache tag_1_15", false,-1, 31,0);
        tracep->declBit(c+666,"top i_cache valid_0_0", false,-1);
        tracep->declBit(c+667,"top i_cache valid_0_1", false,-1);
        tracep->declBit(c+668,"top i_cache valid_0_2", false,-1);
        tracep->declBit(c+669,"top i_cache valid_0_3", false,-1);
        tracep->declBit(c+670,"top i_cache valid_0_4", false,-1);
        tracep->declBit(c+671,"top i_cache valid_0_5", false,-1);
        tracep->declBit(c+672,"top i_cache valid_0_6", false,-1);
        tracep->declBit(c+673,"top i_cache valid_0_7", false,-1);
        tracep->declBit(c+674,"top i_cache valid_0_8", false,-1);
        tracep->declBit(c+675,"top i_cache valid_0_9", false,-1);
        tracep->declBit(c+676,"top i_cache valid_0_10", false,-1);
        tracep->declBit(c+677,"top i_cache valid_0_11", false,-1);
        tracep->declBit(c+678,"top i_cache valid_0_12", false,-1);
        tracep->declBit(c+679,"top i_cache valid_0_13", false,-1);
        tracep->declBit(c+680,"top i_cache valid_0_14", false,-1);
        tracep->declBit(c+681,"top i_cache valid_0_15", false,-1);
        tracep->declBit(c+682,"top i_cache valid_1_0", false,-1);
        tracep->declBit(c+683,"top i_cache valid_1_1", false,-1);
        tracep->declBit(c+684,"top i_cache valid_1_2", false,-1);
        tracep->declBit(c+685,"top i_cache valid_1_3", false,-1);
        tracep->declBit(c+686,"top i_cache valid_1_4", false,-1);
        tracep->declBit(c+687,"top i_cache valid_1_5", false,-1);
        tracep->declBit(c+688,"top i_cache valid_1_6", false,-1);
        tracep->declBit(c+689,"top i_cache valid_1_7", false,-1);
        tracep->declBit(c+690,"top i_cache valid_1_8", false,-1);
        tracep->declBit(c+691,"top i_cache valid_1_9", false,-1);
        tracep->declBit(c+692,"top i_cache valid_1_10", false,-1);
        tracep->declBit(c+693,"top i_cache valid_1_11", false,-1);
        tracep->declBit(c+694,"top i_cache valid_1_12", false,-1);
        tracep->declBit(c+695,"top i_cache valid_1_13", false,-1);
        tracep->declBit(c+696,"top i_cache valid_1_14", false,-1);
        tracep->declBit(c+697,"top i_cache valid_1_15", false,-1);
        tracep->declBit(c+698,"top i_cache way0_hit", false,-1);
        tracep->declBit(c+699,"top i_cache way1_hit", false,-1);
        tracep->declBus(c+700,"top i_cache unuse_way", false,-1, 1,0);
        tracep->declQuad(c+701,"top i_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+703,"top i_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+705,"top i_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+707,"top i_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+709,"top i_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+711,"top i_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+713,"top i_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+715,"top i_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+717,"top i_cache receive_num", false,-1, 2,0);
        tracep->declBit(c+718,"top i_cache quene", false,-1);
        tracep->declBus(c+719,"top i_cache offset", false,-1, 5,0);
        tracep->declBus(c+720,"top i_cache index", false,-1, 3,0);
        tracep->declBus(c+721,"top i_cache tag", false,-1, 21,0);
        tracep->declBus(c+722,"top i_cache shift_bit", false,-1, 8,0);
        tracep->declBus(c+723,"top i_cache state", false,-1, 2,0);
        tracep->declBit(c+806,"top d_cache clock", false,-1);
        tracep->declBit(c+807,"top d_cache reset", false,-1);
        tracep->declBus(c+83,"top d_cache io_to_axi_arlen", false,-1, 7,0);
        tracep->declBit(c+84,"top d_cache io_to_axi_arvalid", false,-1);
        tracep->declBit(c+85,"top d_cache io_to_axi_rready", false,-1);
        tracep->declBus(c+86,"top d_cache io_to_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+87,"top d_cache io_to_axi_awlen", false,-1, 7,0);
        tracep->declBit(c+88,"top d_cache io_to_axi_awvalid", false,-1);
        tracep->declQuad(c+89,"top d_cache io_to_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+91,"top d_cache io_to_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+92,"top d_cache io_to_axi_wvalid", false,-1);
        tracep->declBit(c+93,"top d_cache io_to_axi_bready", false,-1);
        tracep->declQuad(c+94,"top d_cache io_from_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+96,"top d_cache io_from_axi_rlast", false,-1);
        tracep->declBit(c+97,"top d_cache io_from_axi_rvalid", false,-1);
        tracep->declBit(c+98,"top d_cache io_from_axi_wready", false,-1);
        tracep->declBit(c+99,"top d_cache io_from_axi_bvalid", false,-1);
        tracep->declArray(c+724,"top d_cache ram_0_0", false,-1, 511,0);
        tracep->declArray(c+740,"top d_cache ram_1_0", false,-1, 511,0);
        tracep->declBit(c+756,"top d_cache valid_0_0", false,-1);
        tracep->declBit(c+757,"top d_cache valid_1_0", false,-1);
        tracep->declBit(c+758,"top d_cache dirty_0_0", false,-1);
        tracep->declBit(c+759,"top d_cache dirty_1_0", false,-1);
        tracep->declBit(c+760,"top d_cache way0_hit", false,-1);
        tracep->declBit(c+761,"top d_cache way1_hit", false,-1);
        tracep->declArray(c+762,"top d_cache write_back_data", false,-1, 511,0);
        tracep->declBus(c+778,"top d_cache write_back_addr", false,-1, 31,0);
        tracep->declBus(c+779,"top d_cache unuse_way", false,-1, 1,0);
        tracep->declQuad(c+780,"top d_cache receive_data_0", false,-1, 63,0);
        tracep->declQuad(c+782,"top d_cache receive_data_1", false,-1, 63,0);
        tracep->declQuad(c+784,"top d_cache receive_data_2", false,-1, 63,0);
        tracep->declQuad(c+786,"top d_cache receive_data_3", false,-1, 63,0);
        tracep->declQuad(c+788,"top d_cache receive_data_4", false,-1, 63,0);
        tracep->declQuad(c+790,"top d_cache receive_data_5", false,-1, 63,0);
        tracep->declQuad(c+792,"top d_cache receive_data_6", false,-1, 63,0);
        tracep->declQuad(c+794,"top d_cache receive_data_7", false,-1, 63,0);
        tracep->declBus(c+796,"top d_cache receive_num", false,-1, 2,0);
        tracep->declBit(c+797,"top d_cache quene", false,-1);
        tracep->declBus(c+798,"top d_cache state", false,-1, 2,0);
        tracep->declBit(c+806,"top axi clock", false,-1);
        tracep->declBit(c+807,"top axi reset", false,-1);
        tracep->declBus(c+106,"top axi io_axi_in_araddr", false,-1, 31,0);
        tracep->declBus(c+107,"top axi io_axi_in_arlen", false,-1, 7,0);
        tracep->declBit(c+108,"top axi io_axi_in_arvalid", false,-1);
        tracep->declBit(c+109,"top axi io_axi_in_rready", false,-1);
        tracep->declBus(c+110,"top axi io_axi_in_awaddr", false,-1, 31,0);
        tracep->declBus(c+111,"top axi io_axi_in_awlen", false,-1, 7,0);
        tracep->declBit(c+112,"top axi io_axi_in_awvalid", false,-1);
        tracep->declQuad(c+113,"top axi io_axi_in_wdata", false,-1, 63,0);
        tracep->declBus(c+115,"top axi io_axi_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+116,"top axi io_axi_in_wvalid", false,-1);
        tracep->declBit(c+117,"top axi io_axi_in_bready", false,-1);
        tracep->declQuad(c+100,"top axi io_axi_out_rdata", false,-1, 63,0);
        tracep->declBit(c+102,"top axi io_axi_out_rlast", false,-1);
        tracep->declBit(c+103,"top axi io_axi_out_rvalid", false,-1);
        tracep->declBit(c+104,"top axi io_axi_out_wready", false,-1);
        tracep->declBit(c+105,"top axi io_axi_out_bvalid", false,-1);
        tracep->declQuad(c+799,"top axi Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+100,"top axi Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+801,"top axi Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+113,"top axi Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+115,"top axi Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+104,"top axi Mem_modle_Write_en", false,-1);
        tracep->declBit(c+103,"top axi Mem_modle_Read_en", false,-1);
        tracep->declBit(c+104,"top axi axi_wready", false,-1);
        tracep->declBit(c+105,"top axi axi_bvalid", false,-1);
        tracep->declBit(c+103,"top axi axi_rvalid", false,-1);
        tracep->declBus(c+803,"top axi arlen", false,-1, 7,0);
        tracep->declBus(c+804,"top axi awlen", false,-1, 7,0);
        tracep->declQuad(c+799,"top axi araddr", false,-1, 63,0);
        tracep->declQuad(c+801,"top axi awaddr", false,-1, 63,0);
        tracep->declBus(c+805,"top axi state", false,-1, 2,0);
        tracep->declQuad(c+799,"top axi Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+801,"top axi Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+113,"top axi Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+115,"top axi Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+104,"top axi Mem_modle Write_en", false,-1);
        tracep->declBit(c+103,"top axi Mem_modle Read_en", false,-1);
        tracep->declQuad(c+100,"top axi Mem_modle Rdata", false,-1, 63,0);
        tracep->declBus(c+812,"top dpi flag", false,-1, 31,0);
        tracep->declBus(c+812,"top dpi ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+65,"top dpi pc", false,-1, 63,0);
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
    VlWide<16>/*511:0*/ __Vtemp812;
    VlWide<16>/*511:0*/ __Vtemp813;
    VlWide<16>/*511:0*/ __Vtemp817;
    VlWide<16>/*511:0*/ __Vtemp818;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__IFU__DOT__fs_pc),64);
        tracep->fullIData(oldp+67,(vlSelf->top__DOT__IFU__DOT__fs_inst),32);
        if ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__IFU__DOT__fs_pc 
                                      >> 6U))))) {
            __Vtemp812[0U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0U];
            __Vtemp812[1U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[1U];
            __Vtemp812[2U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[2U];
            __Vtemp812[3U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[3U];
            __Vtemp812[4U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[4U];
            __Vtemp812[5U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[5U];
            __Vtemp812[6U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[6U];
            __Vtemp812[7U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[7U];
            __Vtemp812[8U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[8U];
            __Vtemp812[9U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[9U];
            __Vtemp812[0xaU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xaU];
            __Vtemp812[0xbU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xbU];
            __Vtemp812[0xcU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xcU];
            __Vtemp812[0xdU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xdU];
            __Vtemp812[0xeU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xeU];
            __Vtemp812[0xfU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xfU];
        } else {
            __Vtemp812[0U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0U]);
            __Vtemp812[1U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[1U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1009[1U]);
            __Vtemp812[2U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[2U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1009[2U]);
            __Vtemp812[3U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[3U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1009[3U]);
            __Vtemp812[4U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[4U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1009[4U]);
            __Vtemp812[5U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[5U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1009[5U]);
            __Vtemp812[6U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[6U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1009[6U]);
            __Vtemp812[7U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[7U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1009[7U]);
            __Vtemp812[8U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[8U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1009[8U]);
            __Vtemp812[9U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[9U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1009[9U]);
            __Vtemp812[0xaU] = ((0xeU == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                 ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xaU]
                                 : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xaU]);
            __Vtemp812[0xbU] = ((0xeU == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                 ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xbU]
                                 : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xbU]);
            __Vtemp812[0xcU] = ((0xeU == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                 ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xcU]
                                 : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xcU]);
            __Vtemp812[0xdU] = ((0xeU == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                 ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xdU]
                                 : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xdU]);
            __Vtemp812[0xeU] = ((0xeU == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                 ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xeU]
                                 : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xeU]);
            __Vtemp812[0xfU] = ((0xeU == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                 ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xfU]
                                 : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xfU]);
        }
        VL_SHIFTR_WWI(512,512,9, __Vtemp813, __Vtemp812, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                 << 3U)));
        if ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__IFU__DOT__fs_pc 
                                      >> 6U))))) {
            __Vtemp817[0U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0U];
            __Vtemp817[1U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[1U];
            __Vtemp817[2U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[2U];
            __Vtemp817[3U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[3U];
            __Vtemp817[4U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[4U];
            __Vtemp817[5U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[5U];
            __Vtemp817[6U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[6U];
            __Vtemp817[7U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[7U];
            __Vtemp817[8U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[8U];
            __Vtemp817[9U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[9U];
            __Vtemp817[0xaU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xaU];
            __Vtemp817[0xbU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xbU];
            __Vtemp817[0xcU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xcU];
            __Vtemp817[0xdU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xdU];
            __Vtemp817[0xeU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xeU];
            __Vtemp817[0xfU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xfU];
        } else {
            __Vtemp817[0U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0U]);
            __Vtemp817[1U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[1U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1025[1U]);
            __Vtemp817[2U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[2U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1025[2U]);
            __Vtemp817[3U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[3U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1025[3U]);
            __Vtemp817[4U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[4U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1025[4U]);
            __Vtemp817[5U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[5U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1025[5U]);
            __Vtemp817[6U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[6U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1025[6U]);
            __Vtemp817[7U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[7U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1025[7U]);
            __Vtemp817[8U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[8U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1025[8U]);
            __Vtemp817[9U] = ((0xeU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U))))
                               ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[9U]
                               : vlSelf->top__DOT__i_cache__DOT___GEN_1025[9U]);
            __Vtemp817[0xaU] = ((0xeU == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                 ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xaU]
                                 : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xaU]);
            __Vtemp817[0xbU] = ((0xeU == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                 ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xbU]
                                 : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xbU]);
            __Vtemp817[0xcU] = ((0xeU == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                 ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xcU]
                                 : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xcU]);
            __Vtemp817[0xdU] = ((0xeU == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                 ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xdU]
                                 : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xdU]);
            __Vtemp817[0xeU] = ((0xeU == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                 ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xeU]
                                 : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xeU]);
            __Vtemp817[0xfU] = ((0xeU == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                 ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xfU]
                                 : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xfU]);
        }
        VL_SHIFTR_WWI(512,512,9, __Vtemp818, __Vtemp817, 
                      (0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                 << 3U)));
        tracep->fullQData(oldp+68,((((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__i_cache__DOT__way0_hit)
                                                        ? 
                                                       __Vtemp813[1U]
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__i_cache__DOT__way1_hit)
                                                         ? 
                                                        __Vtemp818[1U]
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
                                                                   __Vtemp813[0U]
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__i_cache__DOT__way1_hit)
                                                                     ? 
                                                                    __Vtemp818[0U]
                                                                     : 
                                                                    Vtop__ConstPool__CONST_93e1b771_0[0U]))
                                                                   : 
                                                                  Vtop__ConstPool__CONST_93e1b771_0[0U]))))),64);
        tracep->fullBit(oldp+70,(((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                  & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1034))));
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid));
        tracep->fullIData(oldp+72,((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc)),32);
        tracep->fullBit(oldp+73,(vlSelf->top__DOT__IFU__DOT__fs_valid));
        tracep->fullBit(oldp+74,(vlSelf->top__DOT__IFU__DOT__inst_ready));
        tracep->fullIData(oldp+75,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1043)),32);
        tracep->fullCData(oldp+76,(vlSelf->top__DOT__i_cache__DOT___GEN_1044),8);
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
        tracep->fullCData(oldp+83,(vlSelf->top__DOT__d_cache__DOT___GEN_2087),8);
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__d_cache_io_to_axi_arvalid));
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__d_cache_io_to_axi_rready));
        tracep->fullIData(oldp+86,(vlSelf->top__DOT__d_cache_io_to_axi_awaddr),32);
        tracep->fullCData(oldp+87,(vlSelf->top__DOT__d_cache_io_to_axi_awlen),8);
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__d_cache_io_to_axi_awvalid));
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__d_cache_io_to_axi_wdata),64);
        tracep->fullCData(oldp+91,(vlSelf->top__DOT__d_cache_io_to_axi_wstrb),8);
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__d_cache_io_to_axi_wvalid));
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__d_cache_io_to_axi_bready));
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
        tracep->fullBit(oldp+96,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast));
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
        tracep->fullBit(oldp+98,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                   ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                       ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                       : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                          & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))
                                   : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                      & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                          : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                             & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))))));
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__axi_io_axi_out_rlast));
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__axi__DOT__axi_wready));
        tracep->fullBit(oldp+105,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
        tracep->fullIData(oldp+106,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? 0U : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                    ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1043)
                                                    : 0U)))
                                      : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1043)
                                          : 0U))),32);
        tracep->fullCData(oldp+107,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
        tracep->fullIData(oldp+110,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullCData(oldp+111,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
        tracep->fullQData(oldp+113,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullCData(oldp+115,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
        tracep->fullQData(oldp+118,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
        tracep->fullBit(oldp+120,((1U & (~ (IData)(vlSelf->top__DOT__IFU__DOT__fs_valid)))));
        tracep->fullCData(oldp+121,(vlSelf->top__DOT__arbiter__DOT__state),2);
        tracep->fullWData(oldp+122,(vlSelf->top__DOT__i_cache__DOT__ram_0_0),512);
        tracep->fullWData(oldp+138,(vlSelf->top__DOT__i_cache__DOT__ram_0_1),512);
        tracep->fullWData(oldp+154,(vlSelf->top__DOT__i_cache__DOT__ram_0_2),512);
        tracep->fullWData(oldp+170,(vlSelf->top__DOT__i_cache__DOT__ram_0_3),512);
        tracep->fullWData(oldp+186,(vlSelf->top__DOT__i_cache__DOT__ram_0_4),512);
        tracep->fullWData(oldp+202,(vlSelf->top__DOT__i_cache__DOT__ram_0_5),512);
        tracep->fullWData(oldp+218,(vlSelf->top__DOT__i_cache__DOT__ram_0_6),512);
        tracep->fullWData(oldp+234,(vlSelf->top__DOT__i_cache__DOT__ram_0_7),512);
        tracep->fullWData(oldp+250,(vlSelf->top__DOT__i_cache__DOT__ram_0_8),512);
        tracep->fullWData(oldp+266,(vlSelf->top__DOT__i_cache__DOT__ram_0_9),512);
        tracep->fullWData(oldp+282,(vlSelf->top__DOT__i_cache__DOT__ram_0_10),512);
        tracep->fullWData(oldp+298,(vlSelf->top__DOT__i_cache__DOT__ram_0_11),512);
        tracep->fullWData(oldp+314,(vlSelf->top__DOT__i_cache__DOT__ram_0_12),512);
        tracep->fullWData(oldp+330,(vlSelf->top__DOT__i_cache__DOT__ram_0_13),512);
        tracep->fullWData(oldp+346,(vlSelf->top__DOT__i_cache__DOT__ram_0_14),512);
        tracep->fullWData(oldp+362,(vlSelf->top__DOT__i_cache__DOT__ram_0_15),512);
        tracep->fullWData(oldp+378,(vlSelf->top__DOT__i_cache__DOT__ram_1_0),512);
        tracep->fullWData(oldp+394,(vlSelf->top__DOT__i_cache__DOT__ram_1_1),512);
        tracep->fullWData(oldp+410,(vlSelf->top__DOT__i_cache__DOT__ram_1_2),512);
        tracep->fullWData(oldp+426,(vlSelf->top__DOT__i_cache__DOT__ram_1_3),512);
        tracep->fullWData(oldp+442,(vlSelf->top__DOT__i_cache__DOT__ram_1_4),512);
        tracep->fullWData(oldp+458,(vlSelf->top__DOT__i_cache__DOT__ram_1_5),512);
        tracep->fullWData(oldp+474,(vlSelf->top__DOT__i_cache__DOT__ram_1_6),512);
        tracep->fullWData(oldp+490,(vlSelf->top__DOT__i_cache__DOT__ram_1_7),512);
        tracep->fullWData(oldp+506,(vlSelf->top__DOT__i_cache__DOT__ram_1_8),512);
        tracep->fullWData(oldp+522,(vlSelf->top__DOT__i_cache__DOT__ram_1_9),512);
        tracep->fullWData(oldp+538,(vlSelf->top__DOT__i_cache__DOT__ram_1_10),512);
        tracep->fullWData(oldp+554,(vlSelf->top__DOT__i_cache__DOT__ram_1_11),512);
        tracep->fullWData(oldp+570,(vlSelf->top__DOT__i_cache__DOT__ram_1_12),512);
        tracep->fullWData(oldp+586,(vlSelf->top__DOT__i_cache__DOT__ram_1_13),512);
        tracep->fullWData(oldp+602,(vlSelf->top__DOT__i_cache__DOT__ram_1_14),512);
        tracep->fullWData(oldp+618,(vlSelf->top__DOT__i_cache__DOT__ram_1_15),512);
        tracep->fullIData(oldp+634,(vlSelf->top__DOT__i_cache__DOT__tag_0_0),32);
        tracep->fullIData(oldp+635,(vlSelf->top__DOT__i_cache__DOT__tag_0_1),32);
        tracep->fullIData(oldp+636,(vlSelf->top__DOT__i_cache__DOT__tag_0_2),32);
        tracep->fullIData(oldp+637,(vlSelf->top__DOT__i_cache__DOT__tag_0_3),32);
        tracep->fullIData(oldp+638,(vlSelf->top__DOT__i_cache__DOT__tag_0_4),32);
        tracep->fullIData(oldp+639,(vlSelf->top__DOT__i_cache__DOT__tag_0_5),32);
        tracep->fullIData(oldp+640,(vlSelf->top__DOT__i_cache__DOT__tag_0_6),32);
        tracep->fullIData(oldp+641,(vlSelf->top__DOT__i_cache__DOT__tag_0_7),32);
        tracep->fullIData(oldp+642,(vlSelf->top__DOT__i_cache__DOT__tag_0_8),32);
        tracep->fullIData(oldp+643,(vlSelf->top__DOT__i_cache__DOT__tag_0_9),32);
        tracep->fullIData(oldp+644,(vlSelf->top__DOT__i_cache__DOT__tag_0_10),32);
        tracep->fullIData(oldp+645,(vlSelf->top__DOT__i_cache__DOT__tag_0_11),32);
        tracep->fullIData(oldp+646,(vlSelf->top__DOT__i_cache__DOT__tag_0_12),32);
        tracep->fullIData(oldp+647,(vlSelf->top__DOT__i_cache__DOT__tag_0_13),32);
        tracep->fullIData(oldp+648,(vlSelf->top__DOT__i_cache__DOT__tag_0_14),32);
        tracep->fullIData(oldp+649,(vlSelf->top__DOT__i_cache__DOT__tag_0_15),32);
        tracep->fullIData(oldp+650,(vlSelf->top__DOT__i_cache__DOT__tag_1_0),32);
        tracep->fullIData(oldp+651,(vlSelf->top__DOT__i_cache__DOT__tag_1_1),32);
        tracep->fullIData(oldp+652,(vlSelf->top__DOT__i_cache__DOT__tag_1_2),32);
        tracep->fullIData(oldp+653,(vlSelf->top__DOT__i_cache__DOT__tag_1_3),32);
        tracep->fullIData(oldp+654,(vlSelf->top__DOT__i_cache__DOT__tag_1_4),32);
        tracep->fullIData(oldp+655,(vlSelf->top__DOT__i_cache__DOT__tag_1_5),32);
        tracep->fullIData(oldp+656,(vlSelf->top__DOT__i_cache__DOT__tag_1_6),32);
        tracep->fullIData(oldp+657,(vlSelf->top__DOT__i_cache__DOT__tag_1_7),32);
        tracep->fullIData(oldp+658,(vlSelf->top__DOT__i_cache__DOT__tag_1_8),32);
        tracep->fullIData(oldp+659,(vlSelf->top__DOT__i_cache__DOT__tag_1_9),32);
        tracep->fullIData(oldp+660,(vlSelf->top__DOT__i_cache__DOT__tag_1_10),32);
        tracep->fullIData(oldp+661,(vlSelf->top__DOT__i_cache__DOT__tag_1_11),32);
        tracep->fullIData(oldp+662,(vlSelf->top__DOT__i_cache__DOT__tag_1_12),32);
        tracep->fullIData(oldp+663,(vlSelf->top__DOT__i_cache__DOT__tag_1_13),32);
        tracep->fullIData(oldp+664,(vlSelf->top__DOT__i_cache__DOT__tag_1_14),32);
        tracep->fullIData(oldp+665,(vlSelf->top__DOT__i_cache__DOT__tag_1_15),32);
        tracep->fullBit(oldp+666,(vlSelf->top__DOT__i_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+667,(vlSelf->top__DOT__i_cache__DOT__valid_0_1));
        tracep->fullBit(oldp+668,(vlSelf->top__DOT__i_cache__DOT__valid_0_2));
        tracep->fullBit(oldp+669,(vlSelf->top__DOT__i_cache__DOT__valid_0_3));
        tracep->fullBit(oldp+670,(vlSelf->top__DOT__i_cache__DOT__valid_0_4));
        tracep->fullBit(oldp+671,(vlSelf->top__DOT__i_cache__DOT__valid_0_5));
        tracep->fullBit(oldp+672,(vlSelf->top__DOT__i_cache__DOT__valid_0_6));
        tracep->fullBit(oldp+673,(vlSelf->top__DOT__i_cache__DOT__valid_0_7));
        tracep->fullBit(oldp+674,(vlSelf->top__DOT__i_cache__DOT__valid_0_8));
        tracep->fullBit(oldp+675,(vlSelf->top__DOT__i_cache__DOT__valid_0_9));
        tracep->fullBit(oldp+676,(vlSelf->top__DOT__i_cache__DOT__valid_0_10));
        tracep->fullBit(oldp+677,(vlSelf->top__DOT__i_cache__DOT__valid_0_11));
        tracep->fullBit(oldp+678,(vlSelf->top__DOT__i_cache__DOT__valid_0_12));
        tracep->fullBit(oldp+679,(vlSelf->top__DOT__i_cache__DOT__valid_0_13));
        tracep->fullBit(oldp+680,(vlSelf->top__DOT__i_cache__DOT__valid_0_14));
        tracep->fullBit(oldp+681,(vlSelf->top__DOT__i_cache__DOT__valid_0_15));
        tracep->fullBit(oldp+682,(vlSelf->top__DOT__i_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+683,(vlSelf->top__DOT__i_cache__DOT__valid_1_1));
        tracep->fullBit(oldp+684,(vlSelf->top__DOT__i_cache__DOT__valid_1_2));
        tracep->fullBit(oldp+685,(vlSelf->top__DOT__i_cache__DOT__valid_1_3));
        tracep->fullBit(oldp+686,(vlSelf->top__DOT__i_cache__DOT__valid_1_4));
        tracep->fullBit(oldp+687,(vlSelf->top__DOT__i_cache__DOT__valid_1_5));
        tracep->fullBit(oldp+688,(vlSelf->top__DOT__i_cache__DOT__valid_1_6));
        tracep->fullBit(oldp+689,(vlSelf->top__DOT__i_cache__DOT__valid_1_7));
        tracep->fullBit(oldp+690,(vlSelf->top__DOT__i_cache__DOT__valid_1_8));
        tracep->fullBit(oldp+691,(vlSelf->top__DOT__i_cache__DOT__valid_1_9));
        tracep->fullBit(oldp+692,(vlSelf->top__DOT__i_cache__DOT__valid_1_10));
        tracep->fullBit(oldp+693,(vlSelf->top__DOT__i_cache__DOT__valid_1_11));
        tracep->fullBit(oldp+694,(vlSelf->top__DOT__i_cache__DOT__valid_1_12));
        tracep->fullBit(oldp+695,(vlSelf->top__DOT__i_cache__DOT__valid_1_13));
        tracep->fullBit(oldp+696,(vlSelf->top__DOT__i_cache__DOT__valid_1_14));
        tracep->fullBit(oldp+697,(vlSelf->top__DOT__i_cache__DOT__valid_1_15));
        tracep->fullBit(oldp+698,(vlSelf->top__DOT__i_cache__DOT__way0_hit));
        tracep->fullBit(oldp+699,(vlSelf->top__DOT__i_cache__DOT__way1_hit));
        tracep->fullCData(oldp+700,(vlSelf->top__DOT__i_cache__DOT__unuse_way),2);
        tracep->fullQData(oldp+701,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+703,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+705,(vlSelf->top__DOT__i_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+707,(vlSelf->top__DOT__i_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+709,(vlSelf->top__DOT__i_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+711,(vlSelf->top__DOT__i_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+713,(vlSelf->top__DOT__i_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+715,(vlSelf->top__DOT__i_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+717,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
        tracep->fullBit(oldp+718,(vlSelf->top__DOT__i_cache__DOT__quene));
        tracep->fullCData(oldp+719,((0x3fU & (IData)(vlSelf->top__DOT__IFU__DOT__fs_pc))),6);
        tracep->fullCData(oldp+720,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                     >> 6U)))),4);
        tracep->fullIData(oldp+721,((0x3fffffU & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 0xaU)))),22);
        tracep->fullSData(oldp+722,((0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                               << 3U))),9);
        tracep->fullCData(oldp+723,(vlSelf->top__DOT__i_cache__DOT__state),3);
        tracep->fullWData(oldp+724,(vlSelf->top__DOT__d_cache__DOT__ram_0_0),512);
        tracep->fullWData(oldp+740,(vlSelf->top__DOT__d_cache__DOT__ram_1_0),512);
        tracep->fullBit(oldp+756,(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
        tracep->fullBit(oldp+757,(vlSelf->top__DOT__d_cache__DOT__valid_1_0));
        tracep->fullBit(oldp+758,(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
        tracep->fullBit(oldp+759,(vlSelf->top__DOT__d_cache__DOT__dirty_1_0));
        tracep->fullBit(oldp+760,(vlSelf->top__DOT__d_cache__DOT__way0_hit));
        tracep->fullBit(oldp+761,(vlSelf->top__DOT__d_cache__DOT__way1_hit));
        tracep->fullWData(oldp+762,(vlSelf->top__DOT__d_cache__DOT__write_back_data),512);
        tracep->fullIData(oldp+778,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
        tracep->fullCData(oldp+779,(vlSelf->top__DOT__d_cache__DOT__unuse_way),2);
        tracep->fullQData(oldp+780,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
        tracep->fullQData(oldp+782,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
        tracep->fullQData(oldp+784,(vlSelf->top__DOT__d_cache__DOT__receive_data_2),64);
        tracep->fullQData(oldp+786,(vlSelf->top__DOT__d_cache__DOT__receive_data_3),64);
        tracep->fullQData(oldp+788,(vlSelf->top__DOT__d_cache__DOT__receive_data_4),64);
        tracep->fullQData(oldp+790,(vlSelf->top__DOT__d_cache__DOT__receive_data_5),64);
        tracep->fullQData(oldp+792,(vlSelf->top__DOT__d_cache__DOT__receive_data_6),64);
        tracep->fullQData(oldp+794,(vlSelf->top__DOT__d_cache__DOT__receive_data_7),64);
        tracep->fullCData(oldp+796,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
        tracep->fullBit(oldp+797,(vlSelf->top__DOT__d_cache__DOT__quene));
        tracep->fullCData(oldp+798,(vlSelf->top__DOT__d_cache__DOT__state),3);
        tracep->fullQData(oldp+799,(vlSelf->top__DOT__axi__DOT__araddr),64);
        tracep->fullQData(oldp+801,(vlSelf->top__DOT__axi__DOT__awaddr),64);
        tracep->fullCData(oldp+803,(vlSelf->top__DOT__axi__DOT__arlen),8);
        tracep->fullCData(oldp+804,(vlSelf->top__DOT__axi__DOT__awlen),8);
        tracep->fullCData(oldp+805,(vlSelf->top__DOT__axi__DOT__state),3);
        tracep->fullBit(oldp+806,(vlSelf->clock));
        tracep->fullBit(oldp+807,(vlSelf->reset));
        tracep->fullIData(oldp+808,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+809,(vlSelf->io_pc),64);
        tracep->fullBit(oldp+811,(vlSelf->io_step));
        tracep->fullIData(oldp+812,(0U),32);
        tracep->fullQData(oldp+813,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
        tracep->fullQData(oldp+815,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
        tracep->fullQData(oldp+817,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
        tracep->fullQData(oldp+819,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
        tracep->fullQData(oldp+821,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
        tracep->fullQData(oldp+823,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
        tracep->fullQData(oldp+825,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
        tracep->fullQData(oldp+827,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
        tracep->fullQData(oldp+829,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
        tracep->fullQData(oldp+831,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
        tracep->fullQData(oldp+833,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
        tracep->fullQData(oldp+835,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
        tracep->fullQData(oldp+837,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
        tracep->fullQData(oldp+839,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
        tracep->fullQData(oldp+841,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
        tracep->fullQData(oldp+843,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
        tracep->fullQData(oldp+845,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
        tracep->fullQData(oldp+847,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
        tracep->fullQData(oldp+849,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
        tracep->fullQData(oldp+851,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
        tracep->fullQData(oldp+853,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
        tracep->fullQData(oldp+855,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
        tracep->fullQData(oldp+857,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
        tracep->fullQData(oldp+859,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
        tracep->fullQData(oldp+861,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
        tracep->fullQData(oldp+863,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
        tracep->fullQData(oldp+865,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
        tracep->fullQData(oldp+867,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
        tracep->fullQData(oldp+869,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
        tracep->fullQData(oldp+871,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
        tracep->fullQData(oldp+873,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
        tracep->fullQData(oldp+875,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
        tracep->fullBit(oldp+877,(1U));
        tracep->fullCData(oldp+878,(0U),5);
        tracep->fullQData(oldp+879,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0U]),64);
        tracep->fullCData(oldp+881,(1U),5);
        tracep->fullQData(oldp+882,(vlSelf->top__DOT__Register__DOT__Reg
                                    [1U]),64);
        tracep->fullCData(oldp+884,(2U),5);
        tracep->fullQData(oldp+885,(vlSelf->top__DOT__Register__DOT__Reg
                                    [2U]),64);
        tracep->fullCData(oldp+887,(3U),5);
        tracep->fullQData(oldp+888,(vlSelf->top__DOT__Register__DOT__Reg
                                    [3U]),64);
        tracep->fullCData(oldp+890,(4U),5);
        tracep->fullQData(oldp+891,(vlSelf->top__DOT__Register__DOT__Reg
                                    [4U]),64);
        tracep->fullCData(oldp+893,(5U),5);
        tracep->fullQData(oldp+894,(vlSelf->top__DOT__Register__DOT__Reg
                                    [5U]),64);
        tracep->fullCData(oldp+896,(6U),5);
        tracep->fullQData(oldp+897,(vlSelf->top__DOT__Register__DOT__Reg
                                    [6U]),64);
        tracep->fullCData(oldp+899,(7U),5);
        tracep->fullQData(oldp+900,(vlSelf->top__DOT__Register__DOT__Reg
                                    [7U]),64);
        tracep->fullCData(oldp+902,(8U),5);
        tracep->fullQData(oldp+903,(vlSelf->top__DOT__Register__DOT__Reg
                                    [8U]),64);
        tracep->fullCData(oldp+905,(9U),5);
        tracep->fullQData(oldp+906,(vlSelf->top__DOT__Register__DOT__Reg
                                    [9U]),64);
        tracep->fullCData(oldp+908,(0xaU),5);
        tracep->fullQData(oldp+909,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xaU]),64);
        tracep->fullCData(oldp+911,(0xbU),5);
        tracep->fullQData(oldp+912,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xbU]),64);
        tracep->fullCData(oldp+914,(0xcU),5);
        tracep->fullQData(oldp+915,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xcU]),64);
        tracep->fullCData(oldp+917,(0xdU),5);
        tracep->fullQData(oldp+918,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xdU]),64);
        tracep->fullCData(oldp+920,(0xeU),5);
        tracep->fullQData(oldp+921,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xeU]),64);
        tracep->fullCData(oldp+923,(0xfU),5);
        tracep->fullQData(oldp+924,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xfU]),64);
        tracep->fullCData(oldp+926,(0x10U),5);
        tracep->fullQData(oldp+927,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x10U]),64);
        tracep->fullCData(oldp+929,(0x11U),5);
        tracep->fullQData(oldp+930,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x11U]),64);
        tracep->fullCData(oldp+932,(0x12U),5);
        tracep->fullQData(oldp+933,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x12U]),64);
        tracep->fullCData(oldp+935,(0x13U),5);
        tracep->fullQData(oldp+936,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x13U]),64);
        tracep->fullCData(oldp+938,(0x14U),5);
        tracep->fullQData(oldp+939,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x14U]),64);
        tracep->fullCData(oldp+941,(0x15U),5);
        tracep->fullQData(oldp+942,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x15U]),64);
        tracep->fullCData(oldp+944,(0x16U),5);
        tracep->fullQData(oldp+945,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x16U]),64);
        tracep->fullCData(oldp+947,(0x17U),5);
        tracep->fullQData(oldp+948,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x17U]),64);
        tracep->fullCData(oldp+950,(0x18U),5);
        tracep->fullQData(oldp+951,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x18U]),64);
        tracep->fullCData(oldp+953,(0x19U),5);
        tracep->fullQData(oldp+954,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x19U]),64);
        tracep->fullCData(oldp+956,(0x1aU),5);
        tracep->fullQData(oldp+957,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1aU]),64);
        tracep->fullCData(oldp+959,(0x1bU),5);
        tracep->fullQData(oldp+960,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1bU]),64);
        tracep->fullCData(oldp+962,(0x1cU),5);
        tracep->fullQData(oldp+963,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1cU]),64);
        tracep->fullCData(oldp+965,(0x1dU),5);
        tracep->fullQData(oldp+966,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1dU]),64);
        tracep->fullCData(oldp+968,(0x1eU),5);
        tracep->fullQData(oldp+969,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1eU]),64);
        tracep->fullCData(oldp+971,(0x1fU),5);
        tracep->fullQData(oldp+972,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1fU]),64);
        tracep->fullQData(oldp+974,(0ULL),64);
        tracep->fullBit(oldp+976,(0U));
    }
}
