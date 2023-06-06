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
        tracep->declBit(c+447,"clock", false,-1);
        tracep->declBit(c+448,"reset", false,-1);
        tracep->declBus(c+449,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+450,"io_pc", false,-1, 63,0);
        tracep->declBit(c+452,"io_step", false,-1);
        tracep->declBit(c+447,"top clock", false,-1);
        tracep->declBit(c+448,"top reset", false,-1);
        tracep->declBus(c+449,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+450,"top io_pc", false,-1, 63,0);
        tracep->declBit(c+452,"top io_step", false,-1);
        tracep->declBit(c+447,"top Register_clock", false,-1);
        tracep->declBus(c+1,"top Register_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register_io_we", false,-1);
        tracep->declBus(c+8,"top Register_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register_io_wdata", false,-1, 63,0);
        tracep->declBit(c+447,"top IFU_clock", false,-1);
        tracep->declBit(c+448,"top IFU_reset", false,-1);
        tracep->declBit(c+11,"top IFU_io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IFU_io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IFU_io_br_target", false,-1, 63,0);
        tracep->declBit(c+15,"top IFU_io_br_taken_cancel", false,-1);
        tracep->declQuad(c+16,"top IFU_io_to_ds_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IFU_io_fs_to_ds_valid", false,-1);
        tracep->declBus(c+19,"top IFU_io_inst", false,-1, 31,0);
        tracep->declBit(c+447,"top IDU_clock", false,-1);
        tracep->declBit(c+448,"top IDU_reset", false,-1);
        tracep->declQuad(c+16,"top IDU_io_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IDU_io_fs_to_ds_valid", false,-1);
        tracep->declBit(c+20,"top IDU_io_ds_to_es_valid", false,-1);
        tracep->declBit(c+21,"top IDU_io_es_allowin", false,-1);
        tracep->declBus(c+19,"top IDU_io_from_fs_inst", false,-1, 31,0);
        tracep->declBit(c+12,"top IDU_io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IDU_io_br_target", false,-1, 63,0);
        tracep->declBit(c+15,"top IDU_io_br_taken_cancel", false,-1);
        tracep->declBit(c+11,"top IDU_io_ds_allowin", false,-1);
        tracep->declBus(c+1,"top IDU_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top IDU_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top IDU_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU_io_rdata2", false,-1, 63,0);
        tracep->declQuad(c+22,"top IDU_io_to_es_pc", false,-1, 63,0);
        tracep->declBus(c+24,"top IDU_io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+25,"top IDU_io_src1", false,-1, 63,0);
        tracep->declQuad(c+27,"top IDU_io_src2", false,-1, 63,0);
        tracep->declBus(c+29,"top IDU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+30,"top IDU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+32,"top IDU_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+33,"top IDU_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+34,"top IDU_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+35,"top IDU_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBus(c+36,"top IDU_io_load_type", false,-1, 2,0);
        tracep->declBit(c+37,"top IDU_io_es_rf_we", false,-1);
        tracep->declBit(c+38,"top IDU_io_ms_rf_we", false,-1);
        tracep->declBit(c+39,"top IDU_io_ws_rf_we", false,-1);
        tracep->declBit(c+40,"top IDU_io_es_valid", false,-1);
        tracep->declBit(c+41,"top IDU_io_ms_valid", false,-1);
        tracep->declBit(c+42,"top IDU_io_ws_valid", false,-1);
        tracep->declBus(c+43,"top IDU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+44,"top IDU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+45,"top IDU_io_ds_valid", false,-1);
        tracep->declBit(c+447,"top EXU_clock", false,-1);
        tracep->declBit(c+448,"top EXU_reset", false,-1);
        tracep->declQuad(c+22,"top EXU_io_pc", false,-1, 63,0);
        tracep->declBit(c+20,"top EXU_io_ds_to_es_valid", false,-1);
        tracep->declBit(c+21,"top EXU_io_es_allowin", false,-1);
        tracep->declBus(c+24,"top EXU_io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+25,"top EXU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+27,"top EXU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+29,"top EXU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+30,"top EXU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+46,"top EXU_io_es_to_ms_valid", false,-1);
        tracep->declBus(c+36,"top EXU_io_load_type", false,-1, 2,0);
        tracep->declQuad(c+47,"top EXU_io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+49,"top EXU_io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+51,"top EXU_io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+53,"top EXU_io_to_ms_wen", false,-1);
        tracep->declBus(c+54,"top EXU_io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+55,"top EXU_io_to_ms_ren", false,-1);
        tracep->declQuad(c+49,"top EXU_io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+43,"top EXU_io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+37,"top EXU_io_to_ms_rf_we", false,-1);
        tracep->declBus(c+56,"top EXU_io_to_ms_load_type", false,-1, 2,0);
        tracep->declBit(c+32,"top EXU_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+33,"top EXU_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+34,"top EXU_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+35,"top EXU_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+40,"top EXU_io_es_valid", false,-1);
        tracep->declBit(c+37,"top EXU_io_es_rf_we", false,-1);
        tracep->declBus(c+43,"top EXU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBit(c+447,"top LSU_clock", false,-1);
        tracep->declBit(c+448,"top LSU_reset", false,-1);
        tracep->declQuad(c+47,"top LSU_io_pc", false,-1, 63,0);
        tracep->declBit(c+46,"top LSU_io_es_to_ms_valid", false,-1);
        tracep->declBit(c+37,"top LSU_io_rf_we", false,-1);
        tracep->declBus(c+43,"top LSU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+49,"top LSU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+51,"top LSU_io_store_data", false,-1, 63,0);
        tracep->declBus(c+56,"top LSU_io_load_type", false,-1, 2,0);
        tracep->declBit(c+53,"top LSU_io_wen", false,-1);
        tracep->declBus(c+54,"top LSU_io_wstrb", false,-1, 7,0);
        tracep->declBit(c+55,"top LSU_io_ren", false,-1);
        tracep->declQuad(c+49,"top LSU_io_maddr", false,-1, 63,0);
        tracep->declQuad(c+57,"top LSU_io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+59,"top LSU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+41,"top LSU_io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+61,"top LSU_io_to_ws_rf_we", false,-1);
        tracep->declBus(c+44,"top LSU_io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+41,"top LSU_io_ms_valid", false,-1);
        tracep->declBit(c+38,"top LSU_io_ms_rf_we", false,-1);
        tracep->declBus(c+44,"top LSU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+447,"top WBU_clock", false,-1);
        tracep->declBit(c+448,"top WBU_reset", false,-1);
        tracep->declQuad(c+57,"top WBU_io_pc", false,-1, 63,0);
        tracep->declBit(c+41,"top WBU_io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+59,"top WBU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+61,"top WBU_io_rf_we", false,-1);
        tracep->declBus(c+44,"top WBU_io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU_io_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_wdata", false,-1, 63,0);
        tracep->declBit(c+42,"top WBU_io_ws_valid", false,-1);
        tracep->declBit(c+39,"top WBU_io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+62,"top WBU_io_ws_pc", false,-1, 63,0);
        tracep->declBus(c+64,"top dpi_flag", false,-1, 31,0);
        tracep->declBus(c+65,"top dpi_ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+66,"top dpi_pc", false,-1, 63,0);
        tracep->declBit(c+68,"top diff_step", false,-1);
        tracep->declBit(c+447,"top Register clock", false,-1);
        tracep->declBus(c+1,"top Register io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register io_we", false,-1);
        tracep->declBus(c+8,"top Register io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register io_wdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+69+i*2,"top Register Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+453,"top Register Reg_io_rdata1_MPORT_en", false,-1);
        tracep->declBus(c+1,"top Register Reg_io_rdata1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+133,"top Register Reg_io_rdata1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_io_rdata2_MPORT_en", false,-1);
        tracep->declBus(c+2,"top Register Reg_io_rdata2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+135,"top Register Reg_io_rdata2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+454,"top Register Reg_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+137,"top Register Reg_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+455,"top Register Reg_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+139,"top Register Reg_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+456,"top Register Reg_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+141,"top Register Reg_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+457,"top Register Reg_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+143,"top Register Reg_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+458,"top Register Reg_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+145,"top Register Reg_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+459,"top Register Reg_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+147,"top Register Reg_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+460,"top Register Reg_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+149,"top Register Reg_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+461,"top Register Reg_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+151,"top Register Reg_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+462,"top Register Reg_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+153,"top Register Reg_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+463,"top Register Reg_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+155,"top Register Reg_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+464,"top Register Reg_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+157,"top Register Reg_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+465,"top Register Reg_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+159,"top Register Reg_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+466,"top Register Reg_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+161,"top Register Reg_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+467,"top Register Reg_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+163,"top Register Reg_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+468,"top Register Reg_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+165,"top Register Reg_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+469,"top Register Reg_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+167,"top Register Reg_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+470,"top Register Reg_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+169,"top Register Reg_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+471,"top Register Reg_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+171,"top Register Reg_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+472,"top Register Reg_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+173,"top Register Reg_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+473,"top Register Reg_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+175,"top Register Reg_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+474,"top Register Reg_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+177,"top Register Reg_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+475,"top Register Reg_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+179,"top Register Reg_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+476,"top Register Reg_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+181,"top Register Reg_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+477,"top Register Reg_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+183,"top Register Reg_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+478,"top Register Reg_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+185,"top Register Reg_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+479,"top Register Reg_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+187,"top Register Reg_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+480,"top Register Reg_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+189,"top Register Reg_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+481,"top Register Reg_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+191,"top Register Reg_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+482,"top Register Reg_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+193,"top Register Reg_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+483,"top Register Reg_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+195,"top Register Reg_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+484,"top Register Reg_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+197,"top Register Reg_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+453,"top Register Reg_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+485,"top Register Reg_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+199,"top Register Reg_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+9,"top Register Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+8,"top Register Reg_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+453,"top Register Reg_MPORT_mask", false,-1);
        tracep->declBit(c+201,"top Register Reg_MPORT_en", false,-1);
        tracep->declQuad(c+137,"top Register reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+139,"top Register reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+141,"top Register reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+143,"top Register reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+145,"top Register reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+147,"top Register reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+149,"top Register reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+151,"top Register reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+153,"top Register reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+155,"top Register reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+157,"top Register reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+159,"top Register reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+161,"top Register reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+163,"top Register reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+165,"top Register reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+167,"top Register reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+169,"top Register reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+171,"top Register reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+173,"top Register reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+175,"top Register reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+177,"top Register reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+179,"top Register reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+181,"top Register reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+183,"top Register reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+185,"top Register reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+187,"top Register reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+189,"top Register reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+191,"top Register reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+193,"top Register reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+195,"top Register reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+197,"top Register reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+199,"top Register reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+137,"top Register reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+139,"top Register reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+141,"top Register reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+143,"top Register reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+145,"top Register reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+147,"top Register reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+149,"top Register reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+151,"top Register reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+153,"top Register reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+155,"top Register reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+157,"top Register reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+159,"top Register reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+161,"top Register reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+163,"top Register reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+165,"top Register reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+167,"top Register reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+169,"top Register reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+171,"top Register reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+173,"top Register reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+175,"top Register reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+177,"top Register reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+179,"top Register reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+181,"top Register reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+183,"top Register reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+185,"top Register reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+187,"top Register reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+189,"top Register reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+191,"top Register reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+193,"top Register reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+195,"top Register reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+197,"top Register reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+199,"top Register reg_trace input_reg_31", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+202+i*2,"top Register reg_trace traceregs", true,(i+0), 63,0);}}
        tracep->declBit(c+447,"top IFU clock", false,-1);
        tracep->declBit(c+448,"top IFU reset", false,-1);
        tracep->declBit(c+11,"top IFU io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IFU io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IFU io_br_target", false,-1, 63,0);
        tracep->declBit(c+15,"top IFU io_br_taken_cancel", false,-1);
        tracep->declQuad(c+16,"top IFU io_to_ds_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IFU io_fs_to_ds_valid", false,-1);
        tracep->declBus(c+19,"top IFU io_inst", false,-1, 31,0);
        tracep->declQuad(c+16,"top IFU inst_read_Raddr", false,-1, 63,0);
        tracep->declQuad(c+266,"top IFU inst_read_Rdata", false,-1, 63,0);
        tracep->declQuad(c+486,"top IFU inst_read_Waddr", false,-1, 63,0);
        tracep->declQuad(c+486,"top IFU inst_read_Wdata", false,-1, 63,0);
        tracep->declBus(c+488,"top IFU inst_read_Wmask", false,-1, 7,0);
        tracep->declBit(c+489,"top IFU inst_read_Write_en", false,-1);
        tracep->declBit(c+18,"top IFU inst_read_Read_en", false,-1);
        tracep->declBit(c+18,"top IFU fs_valid", false,-1);
        tracep->declQuad(c+16,"top IFU fs_pc", false,-1, 63,0);
        tracep->declQuad(c+268,"top IFU seq_pc", false,-1, 63,0);
        tracep->declBit(c+270,"top IFU fs_allowin", false,-1);
        tracep->declQuad(c+16,"top IFU inst_read Raddr", false,-1, 63,0);
        tracep->declQuad(c+486,"top IFU inst_read Waddr", false,-1, 63,0);
        tracep->declQuad(c+486,"top IFU inst_read Wdata", false,-1, 63,0);
        tracep->declBus(c+488,"top IFU inst_read Wmask", false,-1, 7,0);
        tracep->declBit(c+489,"top IFU inst_read Write_en", false,-1);
        tracep->declBit(c+18,"top IFU inst_read Read_en", false,-1);
        tracep->declQuad(c+266,"top IFU inst_read Rdata", false,-1, 63,0);
        tracep->declBit(c+447,"top IDU clock", false,-1);
        tracep->declBit(c+448,"top IDU reset", false,-1);
        tracep->declQuad(c+16,"top IDU io_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IDU io_fs_to_ds_valid", false,-1);
        tracep->declBit(c+20,"top IDU io_ds_to_es_valid", false,-1);
        tracep->declBit(c+21,"top IDU io_es_allowin", false,-1);
        tracep->declBus(c+19,"top IDU io_from_fs_inst", false,-1, 31,0);
        tracep->declBit(c+12,"top IDU io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IDU io_br_target", false,-1, 63,0);
        tracep->declBit(c+15,"top IDU io_br_taken_cancel", false,-1);
        tracep->declBit(c+11,"top IDU io_ds_allowin", false,-1);
        tracep->declBus(c+1,"top IDU io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top IDU io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top IDU io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU io_rdata2", false,-1, 63,0);
        tracep->declQuad(c+22,"top IDU io_to_es_pc", false,-1, 63,0);
        tracep->declBus(c+24,"top IDU io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+25,"top IDU io_src1", false,-1, 63,0);
        tracep->declQuad(c+27,"top IDU io_src2", false,-1, 63,0);
        tracep->declBus(c+29,"top IDU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+30,"top IDU io_store_data", false,-1, 63,0);
        tracep->declBit(c+32,"top IDU io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+33,"top IDU io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+34,"top IDU io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+35,"top IDU io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBus(c+36,"top IDU io_load_type", false,-1, 2,0);
        tracep->declBit(c+37,"top IDU io_es_rf_we", false,-1);
        tracep->declBit(c+38,"top IDU io_ms_rf_we", false,-1);
        tracep->declBit(c+39,"top IDU io_ws_rf_we", false,-1);
        tracep->declBit(c+40,"top IDU io_es_valid", false,-1);
        tracep->declBit(c+41,"top IDU io_ms_valid", false,-1);
        tracep->declBit(c+42,"top IDU io_ws_valid", false,-1);
        tracep->declBus(c+43,"top IDU io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+44,"top IDU io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+45,"top IDU io_ds_valid", false,-1);
        tracep->declBit(c+447,"top IDU csr_reg_clock", false,-1);
        tracep->declBit(c+271,"top IDU csr_reg_io_wen1", false,-1);
        tracep->declBit(c+272,"top IDU csr_reg_io_wen2", false,-1);
        tracep->declBus(c+273,"top IDU csr_reg_io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+274,"top IDU csr_reg_io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU csr_reg_io_wdata2", false,-1, 63,0);
        tracep->declBus(c+276,"top IDU csr_reg_io_raddr", false,-1, 1,0);
        tracep->declQuad(c+277,"top IDU csr_reg_io_rdata", false,-1, 63,0);
        tracep->declBit(c+45,"top IDU ds_valid", false,-1);
        tracep->declQuad(c+22,"top IDU ds_pc", false,-1, 63,0);
        tracep->declBus(c+279,"top IDU inst", false,-1, 31,0);
        tracep->declBit(c+280,"top IDU br_taken", false,-1);
        tracep->declBit(c+281,"top IDU src1_is_pc", false,-1);
        tracep->declBus(c+282,"top IDU inst_type", false,-1, 31,0);
        tracep->declBus(c+283,"top IDU csr_write", false,-1, 1,0);
        tracep->declBus(c+1,"top IDU rs1", false,-1, 4,0);
        tracep->declBit(c+284,"top IDU src2_is_imm", false,-1);
        tracep->declBus(c+285,"top IDU rs2", false,-1, 4,0);
        tracep->declBit(c+286,"top IDU conflict", false,-1);
        tracep->declBit(c+287,"top IDU ds_ready_go", false,-1);
        tracep->declBit(c+288,"top IDU br_taken_cancel", false,-1);
        tracep->declBit(c+289,"top IDU ds_allowin", false,-1);
        tracep->declBus(c+29,"top IDU rd", false,-1, 4,0);
        tracep->declBus(c+290,"top IDU imm_imm", false,-1, 11,0);
        tracep->declBus(c+291,"top IDU imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+292,"top IDU imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+293,"top IDU imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+294,"top IDU imm_imm_4", false,-1, 11,0);
        tracep->declQuad(c+295,"top IDU imm", false,-1, 63,0);
        tracep->declBus(c+297,"top IDU csr_index", false,-1, 1,0);
        tracep->declQuad(c+298,"top IDU csr_wdata", false,-1, 63,0);
        tracep->declBus(c+24,"top IDU ALUop", false,-1, 31,0);
        tracep->declQuad(c+300,"top IDU src1", false,-1, 63,0);
        tracep->declQuad(c+27,"top IDU src2", false,-1, 63,0);
        tracep->declBit(c+447,"top IDU csr_reg clock", false,-1);
        tracep->declBit(c+271,"top IDU csr_reg io_wen1", false,-1);
        tracep->declBit(c+272,"top IDU csr_reg io_wen2", false,-1);
        tracep->declBus(c+273,"top IDU csr_reg io_waddr1", false,-1, 1,0);
        tracep->declQuad(c+274,"top IDU csr_reg io_wdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU csr_reg io_wdata2", false,-1, 63,0);
        tracep->declBus(c+276,"top IDU csr_reg io_raddr", false,-1, 1,0);
        tracep->declQuad(c+277,"top IDU csr_reg io_rdata", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+302+i*2,"top IDU csr_reg CSR_Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+453,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_en", false,-1);
        tracep->declBus(c+276,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+277,"top IDU csr_reg CSR_Reg_io_rdata_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+274,"top IDU csr_reg CSR_Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+273,"top IDU csr_reg CSR_Reg_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+453,"top IDU csr_reg CSR_Reg_MPORT_mask", false,-1);
        tracep->declBit(c+271,"top IDU csr_reg CSR_Reg_MPORT_en", false,-1);
        tracep->declQuad(c+5,"top IDU csr_reg CSR_Reg_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+490,"top IDU csr_reg CSR_Reg_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+453,"top IDU csr_reg CSR_Reg_MPORT_1_mask", false,-1);
        tracep->declBit(c+272,"top IDU csr_reg CSR_Reg_MPORT_1_en", false,-1);
        tracep->declBit(c+447,"top EXU clock", false,-1);
        tracep->declBit(c+448,"top EXU reset", false,-1);
        tracep->declQuad(c+22,"top EXU io_pc", false,-1, 63,0);
        tracep->declBit(c+20,"top EXU io_ds_to_es_valid", false,-1);
        tracep->declBit(c+21,"top EXU io_es_allowin", false,-1);
        tracep->declBus(c+24,"top EXU io_ALUop", false,-1, 31,0);
        tracep->declQuad(c+25,"top EXU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+27,"top EXU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+29,"top EXU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+30,"top EXU io_store_data", false,-1, 63,0);
        tracep->declBit(c+46,"top EXU io_es_to_ms_valid", false,-1);
        tracep->declBus(c+36,"top EXU io_load_type", false,-1, 2,0);
        tracep->declQuad(c+47,"top EXU io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+49,"top EXU io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+51,"top EXU io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+53,"top EXU io_to_ms_wen", false,-1);
        tracep->declBus(c+54,"top EXU io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+55,"top EXU io_to_ms_ren", false,-1);
        tracep->declQuad(c+49,"top EXU io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+43,"top EXU io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+37,"top EXU io_to_ms_rf_we", false,-1);
        tracep->declBus(c+56,"top EXU io_to_ms_load_type", false,-1, 2,0);
        tracep->declBit(c+32,"top EXU io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+33,"top EXU io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+34,"top EXU io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+35,"top EXU io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+40,"top EXU io_es_valid", false,-1);
        tracep->declBit(c+37,"top EXU io_es_rf_we", false,-1);
        tracep->declBus(c+43,"top EXU io_es_rf_dst", false,-1, 4,0);
        tracep->declBit(c+447,"top EXU ALU_clock", false,-1);
        tracep->declBit(c+448,"top EXU ALU_reset", false,-1);
        tracep->declQuad(c+310,"top EXU ALU_io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+312,"top EXU ALU_io_src2_value", false,-1, 63,0);
        tracep->declBus(c+314,"top EXU ALU_io_ALUop", false,-1, 31,0);
        tracep->declBit(c+40,"top EXU ALU_io_src_valid", false,-1);
        tracep->declBit(c+315,"top EXU ALU_io_alu_busy", false,-1);
        tracep->declQuad(c+49,"top EXU ALU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+47,"top EXU es_pc", false,-1, 63,0);
        tracep->declBit(c+40,"top EXU es_valid", false,-1);
        tracep->declBus(c+43,"top EXU es_rd", false,-1, 4,0);
        tracep->declBit(c+37,"top EXU es_rf_we", false,-1);
        tracep->declQuad(c+316,"top EXU src1_value", false,-1, 63,0);
        tracep->declQuad(c+312,"top EXU src2_value", false,-1, 63,0);
        tracep->declQuad(c+51,"top EXU store_data", false,-1, 63,0);
        tracep->declBus(c+54,"top EXU st_wstrb", false,-1, 7,0);
        tracep->declBit(c+53,"top EXU st_we", false,-1);
        tracep->declBit(c+55,"top EXU ld_we", false,-1);
        tracep->declBus(c+314,"top EXU ALUop", false,-1, 31,0);
        tracep->declBus(c+56,"top EXU load_type", false,-1, 2,0);
        tracep->declBit(c+318,"top EXU es_ready_go", false,-1);
        tracep->declBit(c+21,"top EXU es_allowin", false,-1);
        tracep->declBit(c+447,"top EXU ALU clock", false,-1);
        tracep->declBit(c+448,"top EXU ALU reset", false,-1);
        tracep->declQuad(c+310,"top EXU ALU io_src1_value", false,-1, 63,0);
        tracep->declQuad(c+312,"top EXU ALU io_src2_value", false,-1, 63,0);
        tracep->declBus(c+314,"top EXU ALU io_ALUop", false,-1, 31,0);
        tracep->declBit(c+40,"top EXU ALU io_src_valid", false,-1);
        tracep->declBit(c+315,"top EXU ALU io_alu_busy", false,-1);
        tracep->declQuad(c+49,"top EXU ALU io_alu_res", false,-1, 63,0);
        tracep->declBit(c+447,"top EXU ALU Mul_clock", false,-1);
        tracep->declBit(c+448,"top EXU ALU Mul_reset", false,-1);
        tracep->declBit(c+319,"top EXU ALU Mul_io_mul_valid", false,-1);
        tracep->declBit(c+320,"top EXU ALU Mul_io_mulw", false,-1);
        tracep->declQuad(c+310,"top EXU ALU Mul_io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+312,"top EXU ALU Mul_io_multiplier", false,-1, 63,0);
        tracep->declBit(c+321,"top EXU ALU Mul_io_out_valid", false,-1);
        tracep->declBus(c+322,"top EXU ALU Mul_io_result_hi", false,-1, 31,0);
        tracep->declBus(c+323,"top EXU ALU Mul_io_result_lo", false,-1, 31,0);
        tracep->declBit(c+447,"top EXU ALU Div_clock", false,-1);
        tracep->declBit(c+448,"top EXU ALU Div_reset", false,-1);
        tracep->declQuad(c+310,"top EXU ALU Div_io_dividend", false,-1, 63,0);
        tracep->declQuad(c+312,"top EXU ALU Div_io_divisor", false,-1, 63,0);
        tracep->declBit(c+324,"top EXU ALU Div_io_div_valid", false,-1);
        tracep->declBit(c+325,"top EXU ALU Div_io_divw", false,-1);
        tracep->declBit(c+326,"top EXU ALU Div_io_div_signed", false,-1);
        tracep->declBit(c+327,"top EXU ALU Div_io_out_valid", false,-1);
        tracep->declQuad(c+328,"top EXU ALU Div_io_quotient", false,-1, 63,0);
        tracep->declQuad(c+330,"top EXU ALU Div_io_remainder", false,-1, 63,0);
        tracep->declBit(c+332,"top EXU ALU mul_valid", false,-1);
        tracep->declBit(c+333,"top EXU ALU div_valid", false,-1);
        tracep->declQuad(c+334,"top EXU ALU add_res", false,-1, 63,0);
        tracep->declQuad(c+336,"top EXU ALU sub_res", false,-1, 63,0);
        tracep->declQuad(c+338,"top EXU ALU sra_res", false,-1, 63,0);
        tracep->declQuad(c+340,"top EXU ALU srl_res", false,-1, 63,0);
        tracep->declArray(c+342,"top EXU ALU sll_res", false,-1, 126,0);
        tracep->declBus(c+346,"top EXU ALU sraw_res", false,-1, 31,0);
        tracep->declBus(c+347,"top EXU ALU srlw_res", false,-1, 31,0);
        tracep->declQuad(c+348,"top EXU ALU sllw_res", false,-1, 62,0);
        tracep->declQuad(c+350,"top EXU ALU or_res", false,-1, 63,0);
        tracep->declQuad(c+352,"top EXU ALU xor_res", false,-1, 63,0);
        tracep->declQuad(c+354,"top EXU ALU and_res", false,-1, 63,0);
        tracep->declQuad(c+356,"top EXU ALU mlu_res", false,-1, 63,0);
        tracep->declBus(c+358,"top EXU ALU divw_res", false,-1, 31,0);
        tracep->declBus(c+359,"top EXU ALU remw_res", false,-1, 31,0);
        tracep->declArray(c+360,"top EXU ALU alu_res", false,-1, 126,0);
        tracep->declBit(c+447,"top EXU ALU Mul clock", false,-1);
        tracep->declBit(c+448,"top EXU ALU Mul reset", false,-1);
        tracep->declBit(c+319,"top EXU ALU Mul io_mul_valid", false,-1);
        tracep->declBit(c+320,"top EXU ALU Mul io_mulw", false,-1);
        tracep->declQuad(c+310,"top EXU ALU Mul io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+312,"top EXU ALU Mul io_multiplier", false,-1, 63,0);
        tracep->declBit(c+321,"top EXU ALU Mul io_out_valid", false,-1);
        tracep->declBus(c+322,"top EXU ALU Mul io_result_hi", false,-1, 31,0);
        tracep->declBus(c+323,"top EXU ALU Mul io_result_lo", false,-1, 31,0);
        tracep->declBus(c+364,"top EXU ALU Mul booth_partial_io_y", false,-1, 2,0);
        tracep->declQuad(c+365,"top EXU ALU Mul booth_partial_io_x", false,-1, 63,0);
        tracep->declBit(c+367,"top EXU ALU Mul booth_partial_io_c", false,-1);
        tracep->declQuad(c+368,"top EXU ALU Mul booth_partial_io_p", false,-1, 63,0);
        tracep->declBit(c+370,"top EXU ALU Mul sign", false,-1);
        tracep->declQuad(c+371,"top EXU ALU Mul res", false,-1, 63,0);
        tracep->declBus(c+373,"top EXU ALU Mul state", false,-1, 1,0);
        tracep->declArray(c+374,"top EXU ALU Mul src1", false,-1, 127,0);
        tracep->declArray(c+378,"top EXU ALU Mul src2", false,-1, 64,0);
        tracep->declQuad(c+381,"top EXU ALU Mul src1_32", false,-1, 63,0);
        tracep->declQuad(c+383,"top EXU ALU Mul src2_32", false,-1, 63,0);
        tracep->declArray(c+385,"top EXU ALU Mul real_cand", false,-1, 127,0);
        tracep->declQuad(c+389,"top EXU ALU Mul real_er", false,-1, 63,0);
        tracep->declBus(c+364,"top EXU ALU Mul booth_partial io_y", false,-1, 2,0);
        tracep->declQuad(c+365,"top EXU ALU Mul booth_partial io_x", false,-1, 63,0);
        tracep->declBit(c+367,"top EXU ALU Mul booth_partial io_c", false,-1);
        tracep->declQuad(c+368,"top EXU ALU Mul booth_partial io_p", false,-1, 63,0);
        tracep->declBit(c+447,"top EXU ALU Div clock", false,-1);
        tracep->declBit(c+448,"top EXU ALU Div reset", false,-1);
        tracep->declQuad(c+310,"top EXU ALU Div io_dividend", false,-1, 63,0);
        tracep->declQuad(c+312,"top EXU ALU Div io_divisor", false,-1, 63,0);
        tracep->declBit(c+324,"top EXU ALU Div io_div_valid", false,-1);
        tracep->declBit(c+325,"top EXU ALU Div io_divw", false,-1);
        tracep->declBit(c+326,"top EXU ALU Div io_div_signed", false,-1);
        tracep->declBit(c+327,"top EXU ALU Div io_out_valid", false,-1);
        tracep->declQuad(c+328,"top EXU ALU Div io_quotient", false,-1, 63,0);
        tracep->declQuad(c+330,"top EXU ALU Div io_remainder", false,-1, 63,0);
        tracep->declBit(c+391,"top EXU ALU Div dend_neg", false,-1);
        tracep->declBit(c+392,"top EXU ALU Div sor_neg", false,-1);
        tracep->declBit(c+393,"top EXU ALU Div quotient_neg", false,-1);
        tracep->declQuad(c+394,"top EXU ALU Div src1_32_s", false,-1, 63,0);
        tracep->declQuad(c+396,"top EXU ALU Div src2_32_s", false,-1, 63,0);
        tracep->declQuad(c+398,"top EXU ALU Div src1_32", false,-1, 63,0);
        tracep->declQuad(c+400,"top EXU ALU Div src2_32", false,-1, 63,0);
        tracep->declQuad(c+402,"top EXU ALU Div real_cand", false,-1, 63,0);
        tracep->declQuad(c+404,"top EXU ALU Div real_er", false,-1, 63,0);
        tracep->declArray(c+406,"top EXU ALU Div src2", false,-1, 64,0);
        tracep->declArray(c+409,"top EXU ALU Div div_cand", false,-1, 127,0);
        tracep->declBit(c+413,"top EXU ALU Div div_start", false,-1);
        tracep->declQuad(c+414,"top EXU ALU Div quotient", false,-1, 63,0);
        tracep->declBus(c+416,"top EXU ALU Div step_num", false,-1, 31,0);
        tracep->declArray(c+417,"top EXU ALU Div src1", false,-1, 127,0);
        tracep->declArray(c+421,"top EXU ALU Div sub_res", false,-1, 64,0);
        tracep->declArray(c+424,"top EXU ALU Div update_cand", false,-1, 127,0);
        tracep->declArray(c+428,"top EXU ALU Div new_cand", false,-1, 127,0);
        tracep->declBit(c+447,"top LSU clock", false,-1);
        tracep->declBit(c+448,"top LSU reset", false,-1);
        tracep->declQuad(c+47,"top LSU io_pc", false,-1, 63,0);
        tracep->declBit(c+46,"top LSU io_es_to_ms_valid", false,-1);
        tracep->declBit(c+37,"top LSU io_rf_we", false,-1);
        tracep->declBus(c+43,"top LSU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+49,"top LSU io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+51,"top LSU io_store_data", false,-1, 63,0);
        tracep->declBus(c+56,"top LSU io_load_type", false,-1, 2,0);
        tracep->declBit(c+53,"top LSU io_wen", false,-1);
        tracep->declBus(c+54,"top LSU io_wstrb", false,-1, 7,0);
        tracep->declBit(c+55,"top LSU io_ren", false,-1);
        tracep->declQuad(c+49,"top LSU io_maddr", false,-1, 63,0);
        tracep->declQuad(c+57,"top LSU io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+59,"top LSU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+41,"top LSU io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+61,"top LSU io_to_ws_rf_we", false,-1);
        tracep->declBus(c+44,"top LSU io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+41,"top LSU io_ms_valid", false,-1);
        tracep->declBit(c+38,"top LSU io_ms_rf_we", false,-1);
        tracep->declBus(c+44,"top LSU io_ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+432,"top LSU Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+434,"top LSU Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+432,"top LSU Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+436,"top LSU Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+438,"top LSU Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+439,"top LSU Mem_modle_Write_en", false,-1);
        tracep->declBit(c+440,"top LSU Mem_modle_Read_en", false,-1);
        tracep->declBit(c+41,"top LSU ms_valid", false,-1);
        tracep->declQuad(c+57,"top LSU ms_pc", false,-1, 63,0);
        tracep->declBit(c+61,"top LSU ms_rf_we", false,-1);
        tracep->declBus(c+44,"top LSU ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+441,"top LSU ms_res", false,-1, 63,0);
        tracep->declQuad(c+436,"top LSU store_data", false,-1, 63,0);
        tracep->declBit(c+443,"top LSU wen", false,-1);
        tracep->declBus(c+438,"top LSU wstrb", false,-1, 7,0);
        tracep->declBit(c+440,"top LSU ren", false,-1);
        tracep->declQuad(c+432,"top LSU maddr", false,-1, 63,0);
        tracep->declBus(c+444,"top LSU load_type", false,-1, 2,0);
        tracep->declQuad(c+445,"top LSU rdata", false,-1, 63,0);
        tracep->declQuad(c+432,"top LSU Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+432,"top LSU Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+436,"top LSU Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+438,"top LSU Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+439,"top LSU Mem_modle Write_en", false,-1);
        tracep->declBit(c+440,"top LSU Mem_modle Read_en", false,-1);
        tracep->declQuad(c+434,"top LSU Mem_modle Rdata", false,-1, 63,0);
        tracep->declBit(c+447,"top WBU clock", false,-1);
        tracep->declBit(c+448,"top WBU reset", false,-1);
        tracep->declQuad(c+57,"top WBU io_pc", false,-1, 63,0);
        tracep->declBit(c+41,"top WBU io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+59,"top WBU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+61,"top WBU io_rf_we", false,-1);
        tracep->declBus(c+44,"top WBU io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU io_we", false,-1);
        tracep->declBus(c+8,"top WBU io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_wdata", false,-1, 63,0);
        tracep->declBit(c+42,"top WBU io_ws_valid", false,-1);
        tracep->declBit(c+39,"top WBU io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU io_ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+62,"top WBU io_ws_pc", false,-1, 63,0);
        tracep->declBit(c+42,"top WBU ws_valid", false,-1);
        tracep->declQuad(c+62,"top WBU ws_pc", false,-1, 63,0);
        tracep->declBit(c+39,"top WBU ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU ws_res", false,-1, 63,0);
        tracep->declBus(c+64,"top dpi flag", false,-1, 31,0);
        tracep->declBus(c+65,"top dpi ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+66,"top dpi pc", false,-1, 63,0);
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
    VlWide<4>/*127:0*/ __Vtemp191;
    VlWide<4>/*127:0*/ __Vtemp192;
    VlWide<4>/*127:0*/ __Vtemp193;
    VlWide<3>/*95:0*/ __Vtemp196;
    VlWide<3>/*95:0*/ __Vtemp197;
    VlWide<3>/*95:0*/ __Vtemp201;
    VlWide<3>/*95:0*/ __Vtemp205;
    VlWide<3>/*95:0*/ __Vtemp212;
    VlWide<4>/*127:0*/ __Vtemp213;
    VlWide<3>/*95:0*/ __Vtemp214;
    VlWide<4>/*127:0*/ __Vtemp215;
    VlWide<4>/*127:0*/ __Vtemp216;
    VlWide<4>/*127:0*/ __Vtemp222;
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
        tracep->fullBit(oldp+11,((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                        | ((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)) 
                                           & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))))));
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
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__IFU__DOT__fs_valid));
        tracep->fullIData(oldp+19,((IData)(vlSelf->top__DOT__IFU__DOT__inst_read_Rdata)),32);
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__IDU_io_ds_to_es_valid));
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__EXU__DOT__es_allowin));
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__IDU__DOT__ds_pc),64);
        tracep->fullIData(oldp+24,(vlSelf->top__DOT__IDU__DOT___ALUop_T_176),32);
        tracep->fullQData(oldp+25,(((1U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                     ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                                     : vlSelf->top__DOT__IDU__DOT__src1)),64);
        tracep->fullQData(oldp+27,(((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                     ? vlSelf->top__DOT__IDU__DOT__imm
                                     : vlSelf->top__DOT__Register_io_rdata2)),64);
        tracep->fullCData(oldp+29,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+30,(((0x3023U == (0x707fU 
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
        tracep->fullBit(oldp+32,(((0x100073U != vlSelf->top__DOT__IDU__DOT__inst) 
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
        tracep->fullBit(oldp+33,((0x44U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))));
        tracep->fullBit(oldp+34,(((0x3003U == (0x707fU 
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
        tracep->fullCData(oldp+35,(((0x3023U == (0x707fU 
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
        tracep->fullCData(oldp+36,(((0x2003U == (0x707fU 
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
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__EXU__DOT__es_rf_we));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__LSU_io_ms_rf_we));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__EXU__DOT__es_valid));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__LSU__DOT__ms_valid));
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__WBU__DOT__ws_valid));
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__EXU__DOT__es_rd),5);
        tracep->fullCData(oldp+44,(vlSelf->top__DOT__LSU__DOT__ms_rf_dst),5);
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__IDU__DOT__ds_valid));
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__EXU_io_es_to_ms_valid));
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
        tracep->fullQData(oldp+49,((((QData)((IData)(
                                                     vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__EXU__DOT__store_data),64);
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__EXU__DOT__st_we));
        tracep->fullCData(oldp+54,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__EXU__DOT__ld_we));
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__EXU__DOT__load_type),3);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__LSU__DOT__ms_pc),64);
        tracep->fullQData(oldp+59,(((IData)(vlSelf->top__DOT__LSU__DOT__ren)
                                     ? ((6U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata))))
                                         : ((5U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                             ? ((((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata 
                                                              >> 7U)))
                                                   ? 0xffffffffffffffULL
                                                   : 0ULL) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata)))))
                                             : ((4U 
                                                 == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                 ? 
                                                ((((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata 
                                                               >> 0xfU)))
                                                    ? 0xffffffffffffULL
                                                    : 0ULL) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata)))))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                  ? (QData)((IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata))))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata 
                                                                                >> 0x1fU)))
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata)))
                                                     : vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata)))))))
                                     : vlSelf->top__DOT__LSU__DOT__ms_res)),64);
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
        tracep->fullIData(oldp+64,((2U == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
        tracep->fullIData(oldp+65,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
        tracep->fullQData(oldp+66,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)
                                     ? vlSelf->top__DOT__WBU__DOT__ws_pc
                                     : ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)
                                         ? vlSelf->top__DOT__LSU__DOT__ms_pc
                                         : ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid)
                                             ? vlSelf->top__DOT__EXU__DOT__es_pc
                                             : ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                 ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                 : vlSelf->top__DOT__IFU__DOT__fs_pc))))),64);
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__diff_step));
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__Register__DOT__Reg
                                    [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__Register__DOT__Reg
                                    [vlSelf->top__DOT__IDU_io_raddr2]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0U]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__Register__DOT__Reg
                                    [1U]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__Register__DOT__Reg
                                    [2U]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__Register__DOT__Reg
                                    [3U]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__Register__DOT__Reg
                                    [4U]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__Register__DOT__Reg
                                    [5U]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__Register__DOT__Reg
                                    [6U]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__Register__DOT__Reg
                                    [7U]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__Register__DOT__Reg
                                    [8U]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__Register__DOT__Reg
                                    [9U]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xaU]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xbU]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xcU]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xdU]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xeU]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xfU]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x10U]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x11U]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x12U]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x13U]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x14U]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x15U]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x16U]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x17U]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x18U]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x19U]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1aU]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1bU]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1cU]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1dU]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1eU]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1fU]),64);
        tracep->fullBit(oldp+201,((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                    & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
                                   & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))));
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullQData(oldp+266,(vlSelf->top__DOT__IFU__DOT__inst_read_Rdata),64);
        tracep->fullQData(oldp+268,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
        tracep->fullBit(oldp+270,(vlSelf->top__DOT__IFU__DOT__fs_allowin));
        tracep->fullBit(oldp+271,(((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                   & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullBit(oldp+272,((((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                    >> 1U) & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
        tracep->fullCData(oldp+273,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 1U : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                               ? (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)
                                               : 0U))),2);
        tracep->fullQData(oldp+274,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
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
        tracep->fullCData(oldp+276,(((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                      ? 0U : ((0x3eU 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))
                                               ? 1U
                                               : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))),2);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data),64);
        tracep->fullIData(oldp+279,(vlSelf->top__DOT__IDU__DOT__inst),32);
        tracep->fullBit(oldp+280,(vlSelf->top__DOT__IDU__DOT__br_taken));
        tracep->fullBit(oldp+281,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
        tracep->fullIData(oldp+282,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
        tracep->fullCData(oldp+283,(vlSelf->top__DOT__IDU__DOT__csr_write),2);
        tracep->fullBit(oldp+284,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
        tracep->fullCData(oldp+285,(vlSelf->top__DOT__IDU__DOT__rs2),5);
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__IDU__DOT__conflict));
        tracep->fullBit(oldp+287,((1U & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)))));
        tracep->fullBit(oldp+288,(vlSelf->top__DOT__IDU__DOT__br_taken_cancel));
        tracep->fullBit(oldp+289,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
        tracep->fullSData(oldp+290,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+291,(((0x80000U & (vlSelf->top__DOT__IDU__DOT__inst 
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
        tracep->fullIData(oldp+292,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+293,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U)))),12);
        tracep->fullSData(oldp+294,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | ((0x400U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 8U)))))),12);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__IDU__DOT__imm),64);
        tracep->fullCData(oldp+297,(vlSelf->top__DOT__IDU__DOT__csr_index),2);
        tracep->fullQData(oldp+298,(((0x1073U == (0x707fU 
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
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__IDU__DOT__src1),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[0]),64);
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[1]),64);
        tracep->fullQData(oldp+306,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[2]),64);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[3]),64);
        tracep->fullQData(oldp+310,(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value),64);
        tracep->fullQData(oldp+312,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
        tracep->fullIData(oldp+314,(vlSelf->top__DOT__EXU__DOT__ALUop),32);
        tracep->fullBit(oldp+315,(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy));
        tracep->fullQData(oldp+316,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
        tracep->fullBit(oldp+318,((1U & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)))));
        tracep->fullBit(oldp+319,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid));
        tracep->fullBit(oldp+320,((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)));
        tracep->fullBit(oldp+321,(((0U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                   & ((1U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                      & (2U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))))));
        tracep->fullIData(oldp+322,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
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
        tracep->fullIData(oldp+323,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo),32);
        tracep->fullBit(oldp+324,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid));
        tracep->fullBit(oldp+325,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw));
        tracep->fullBit(oldp+326,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed));
        tracep->fullBit(oldp+327,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start) 
                                   & VL_GTES_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num))));
        tracep->fullQData(oldp+328,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient),64);
        tracep->fullQData(oldp+330,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder),64);
        tracep->fullBit(oldp+332,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid));
        tracep->fullBit(oldp+333,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid));
        tracep->fullQData(oldp+334,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res),64);
        tracep->fullQData(oldp+336,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res),64);
        tracep->fullQData(oldp+338,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res),64);
        tracep->fullQData(oldp+340,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),64);
        VL_EXTEND_WQ(127,64, __Vtemp191, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
        VL_SHIFTL_WWI(127,127,6, __Vtemp192, __Vtemp191, 
                      (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
        __Vtemp193[0U] = __Vtemp192[0U];
        __Vtemp193[1U] = __Vtemp192[1U];
        __Vtemp193[2U] = __Vtemp192[2U];
        __Vtemp193[3U] = (0x7fffffffU & __Vtemp192[3U]);
        tracep->fullWData(oldp+342,(__Vtemp193),127);
        tracep->fullIData(oldp+346,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
        tracep->fullIData(oldp+347,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res),32);
        tracep->fullQData(oldp+348,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res),63);
        tracep->fullQData(oldp+350,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     | vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+352,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     ^ vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+354,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     & vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+356,((((QData)((IData)(
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
        tracep->fullIData(oldp+358,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient)),32);
        tracep->fullIData(oldp+359,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder)),32);
        tracep->fullWData(oldp+360,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res),127);
        tracep->fullCData(oldp+364,((7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])),3);
        tracep->fullQData(oldp+365,((((QData)((IData)(
                                                      vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))),64);
        tracep->fullBit(oldp+367,(((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                   | ((5U == (7U & 
                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                      | (4U == (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))))));
        VL_EXTEND_WQ(65,64, __Vtemp196, (~ (((QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp197, (~ (((QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
        VL_EXTEND_WQ(65,64, __Vtemp201, ((2U == (7U 
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
        __Vtemp205[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
                               : __Vtemp201[1U]));
        __Vtemp212[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                           ? 0U : (1U & ((6U == (7U 
                                                 & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                          ? __Vtemp196[2U]
                                          : ((5U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                              ? __Vtemp197[2U]
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
                                                  __Vtemp201[2U]))))));
        tracep->fullQData(oldp+368,((((QData)((IData)(
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
                                                        __Vtemp196[1U]
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                          ? 
                                                         __Vtemp197[1U]
                                                          : 
                                                         __Vtemp205[1U]))))) 
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
                                                                    __Vtemp196[0U]
                                                                     : 
                                                                    ((5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                                      ? 
                                                                     __Vtemp197[0U]
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
                                                                       __Vtemp201[0U]))))))))),64);
        tracep->fullBit(oldp+370,((1U & ((IData)((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                  >> 0x3fU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__EXU__DOT__src2_value 
                                                    >> 0x3fU))))));
        tracep->fullQData(oldp+371,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res),64);
        tracep->fullCData(oldp+373,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state),2);
        tracep->fullWData(oldp+374,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1),128);
        tracep->fullWData(oldp+378,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2),65);
        tracep->fullQData(oldp+381,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32),64);
        tracep->fullQData(oldp+383,(((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
        __Vtemp213[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
        __Vtemp213[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                  >> 0x20U));
        __Vtemp213[2U] = (IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                 >> 0x3fU)))
                                   ? 0xffffffffffffffffULL
                                   : 0ULL));
        __Vtemp213[3U] = (IData)((((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                  >> 0x3fU)))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL) >> 0x20U));
        tracep->fullWData(oldp+385,(__Vtemp213),128);
        tracep->fullQData(oldp+389,((((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
        tracep->fullBit(oldp+391,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg));
        tracep->fullBit(oldp+392,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg));
        tracep->fullBit(oldp+393,((((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg) 
                                    & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg))) 
                                   | ((~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)) 
                                      & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)))));
        tracep->fullQData(oldp+394,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s),64);
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s),64);
        tracep->fullQData(oldp+398,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                      ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                      : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)),64);
        tracep->fullQData(oldp+400,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                      ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                      : vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+402,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                          : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))),64);
        tracep->fullQData(oldp+404,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                          : vlSelf->top__DOT__EXU__DOT__src2_value))),64);
        VL_EXTEND_WQ(65,64, __Vtemp214, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                          ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                              ? (1ULL 
                                                 + 
                                                 (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                              : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                          : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                              ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                              : vlSelf->top__DOT__EXU__DOT__src2_value)));
        tracep->fullWData(oldp+406,(__Vtemp214),65);
        tracep->fullWData(oldp+409,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand),128);
        tracep->fullBit(oldp+413,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start));
        tracep->fullQData(oldp+414,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient),64);
        tracep->fullIData(oldp+416,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num),32);
        VL_EXTEND_WQ(128,64, __Vtemp215, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                           ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                               ? (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                               : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                           : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                               ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                               : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
        tracep->fullWData(oldp+417,(__Vtemp215),128);
        tracep->fullWData(oldp+421,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res),65);
        __Vtemp216[0U] = 0U;
        __Vtemp216[1U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                          << 0x1fU);
        __Vtemp216[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                           >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                     << 0x1fU));
        __Vtemp216[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                           >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                     << 0x1fU));
        tracep->fullWData(oldp+424,(__Vtemp216),128);
        if ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])) {
            __Vtemp222[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp222[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U];
            __Vtemp222[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U];
            __Vtemp222[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U];
        } else {
            __Vtemp222[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
            __Vtemp222[1U] = ((0x7fffffffU & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                              | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                 << 0x1fU));
            __Vtemp222[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                               >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                         << 0x1fU));
            __Vtemp222[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                               >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                         << 0x1fU));
        }
        tracep->fullWData(oldp+428,(__Vtemp222),128);
        tracep->fullQData(oldp+432,(vlSelf->top__DOT__LSU__DOT__maddr),64);
        tracep->fullQData(oldp+434,(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata),64);
        tracep->fullQData(oldp+436,(vlSelf->top__DOT__LSU__DOT__store_data),64);
        tracep->fullCData(oldp+438,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
        tracep->fullBit(oldp+439,(((IData)(vlSelf->top__DOT__LSU__DOT__wen) 
                                   & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid))));
        tracep->fullBit(oldp+440,(vlSelf->top__DOT__LSU__DOT__ren));
        tracep->fullQData(oldp+441,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
        tracep->fullBit(oldp+443,(vlSelf->top__DOT__LSU__DOT__wen));
        tracep->fullCData(oldp+444,(vlSelf->top__DOT__LSU__DOT__load_type),3);
        tracep->fullQData(oldp+445,(((6U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata))))
                                      : ((5U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                          ? ((((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata 
                                                           >> 7U)))
                                                ? 0xffffffffffffffULL
                                                : 0ULL) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata)))))
                                          : ((4U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                              ? (((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata 
                                                               >> 0xfU)))
                                                    ? 0xffffffffffffULL
                                                    : 0ULL) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata)))))
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                  ? (QData)((IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata))))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata 
                                                                                >> 0x1fU)))
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata)))
                                                     : vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata)))))))),64);
        tracep->fullBit(oldp+447,(vlSelf->clock));
        tracep->fullBit(oldp+448,(vlSelf->reset));
        tracep->fullIData(oldp+449,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+450,(vlSelf->io_pc),64);
        tracep->fullBit(oldp+452,(vlSelf->io_step));
        tracep->fullBit(oldp+453,(1U));
        tracep->fullCData(oldp+454,(0U),5);
        tracep->fullCData(oldp+455,(1U),5);
        tracep->fullCData(oldp+456,(2U),5);
        tracep->fullCData(oldp+457,(3U),5);
        tracep->fullCData(oldp+458,(4U),5);
        tracep->fullCData(oldp+459,(5U),5);
        tracep->fullCData(oldp+460,(6U),5);
        tracep->fullCData(oldp+461,(7U),5);
        tracep->fullCData(oldp+462,(8U),5);
        tracep->fullCData(oldp+463,(9U),5);
        tracep->fullCData(oldp+464,(0xaU),5);
        tracep->fullCData(oldp+465,(0xbU),5);
        tracep->fullCData(oldp+466,(0xcU),5);
        tracep->fullCData(oldp+467,(0xdU),5);
        tracep->fullCData(oldp+468,(0xeU),5);
        tracep->fullCData(oldp+469,(0xfU),5);
        tracep->fullCData(oldp+470,(0x10U),5);
        tracep->fullCData(oldp+471,(0x11U),5);
        tracep->fullCData(oldp+472,(0x12U),5);
        tracep->fullCData(oldp+473,(0x13U),5);
        tracep->fullCData(oldp+474,(0x14U),5);
        tracep->fullCData(oldp+475,(0x15U),5);
        tracep->fullCData(oldp+476,(0x16U),5);
        tracep->fullCData(oldp+477,(0x17U),5);
        tracep->fullCData(oldp+478,(0x18U),5);
        tracep->fullCData(oldp+479,(0x19U),5);
        tracep->fullCData(oldp+480,(0x1aU),5);
        tracep->fullCData(oldp+481,(0x1bU),5);
        tracep->fullCData(oldp+482,(0x1cU),5);
        tracep->fullCData(oldp+483,(0x1dU),5);
        tracep->fullCData(oldp+484,(0x1eU),5);
        tracep->fullCData(oldp+485,(0x1fU),5);
        tracep->fullQData(oldp+486,(0ULL),64);
        tracep->fullCData(oldp+488,(0U),8);
        tracep->fullBit(oldp+489,(0U));
        tracep->fullCData(oldp+490,(3U),2);
    }
}
