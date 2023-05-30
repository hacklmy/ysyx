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
        tracep->declBit(c+336,"clock", false,-1);
        tracep->declBit(c+337,"reset", false,-1);
        tracep->declBus(c+338,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+339,"io_pc", false,-1, 63,0);
        tracep->declBit(c+341,"io_step", false,-1);
        tracep->declBit(c+336,"top clock", false,-1);
        tracep->declBit(c+337,"top reset", false,-1);
        tracep->declBus(c+338,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+339,"top io_pc", false,-1, 63,0);
        tracep->declBit(c+341,"top io_step", false,-1);
        tracep->declBit(c+336,"top Register_clock", false,-1);
        tracep->declBus(c+1,"top Register_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register_io_we", false,-1);
        tracep->declBus(c+8,"top Register_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register_io_wdata", false,-1, 63,0);
        tracep->declBit(c+336,"top IFU_clock", false,-1);
        tracep->declBit(c+337,"top IFU_reset", false,-1);
        tracep->declBit(c+11,"top IFU_io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IFU_io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IFU_io_br_target", false,-1, 63,0);
        tracep->declBit(c+15,"top IFU_io_br_taken_cancel", false,-1);
        tracep->declQuad(c+16,"top IFU_io_to_ds_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IFU_io_fs_to_ds_valid", false,-1);
        tracep->declBus(c+19,"top IFU_io_inst", false,-1, 31,0);
        tracep->declBit(c+336,"top IDU_clock", false,-1);
        tracep->declBit(c+337,"top IDU_reset", false,-1);
        tracep->declQuad(c+16,"top IDU_io_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IDU_io_fs_to_ds_valid", false,-1);
        tracep->declBit(c+20,"top IDU_io_ds_to_es_valid", false,-1);
        tracep->declBus(c+19,"top IDU_io_from_fs_inst", false,-1, 31,0);
        tracep->declBit(c+12,"top IDU_io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IDU_io_br_target", false,-1, 63,0);
        tracep->declBit(c+15,"top IDU_io_br_taken_cancel", false,-1);
        tracep->declBit(c+11,"top IDU_io_ds_allowin", false,-1);
        tracep->declBus(c+1,"top IDU_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top IDU_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top IDU_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU_io_rdata2", false,-1, 63,0);
        tracep->declQuad(c+21,"top IDU_io_to_es_pc", false,-1, 63,0);
        tracep->declBus(c+23,"top IDU_io_inst_now", false,-1, 31,0);
        tracep->declQuad(c+24,"top IDU_io_src1", false,-1, 63,0);
        tracep->declQuad(c+26,"top IDU_io_src2", false,-1, 63,0);
        tracep->declBus(c+28,"top IDU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+29,"top IDU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+31,"top IDU_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+32,"top IDU_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+33,"top IDU_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+34,"top IDU_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+35,"top IDU_io_es_rf_we", false,-1);
        tracep->declBit(c+36,"top IDU_io_ms_rf_we", false,-1);
        tracep->declBit(c+37,"top IDU_io_ws_rf_we", false,-1);
        tracep->declBit(c+38,"top IDU_io_es_valid", false,-1);
        tracep->declBit(c+39,"top IDU_io_ms_valid", false,-1);
        tracep->declBit(c+40,"top IDU_io_ws_valid", false,-1);
        tracep->declBus(c+41,"top IDU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+42,"top IDU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+336,"top EXU_clock", false,-1);
        tracep->declBit(c+337,"top EXU_reset", false,-1);
        tracep->declQuad(c+21,"top EXU_io_pc", false,-1, 63,0);
        tracep->declBit(c+20,"top EXU_io_ds_to_es_valid", false,-1);
        tracep->declBus(c+23,"top EXU_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+43,"top EXU_io_src1_value", false,-1, 4,0);
        tracep->declBus(c+44,"top EXU_io_src2_value", false,-1, 4,0);
        tracep->declBus(c+28,"top EXU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+29,"top EXU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+38,"top EXU_io_es_to_ms_valid", false,-1);
        tracep->declQuad(c+45,"top EXU_io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+47,"top EXU_io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+49,"top EXU_io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+51,"top EXU_io_to_ms_wen", false,-1);
        tracep->declBus(c+52,"top EXU_io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+53,"top EXU_io_to_ms_ren", false,-1);
        tracep->declQuad(c+54,"top EXU_io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+41,"top EXU_io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+35,"top EXU_io_to_ms_rf_we", false,-1);
        tracep->declBit(c+31,"top EXU_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+32,"top EXU_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+33,"top EXU_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+34,"top EXU_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+38,"top EXU_io_es_valid", false,-1);
        tracep->declBit(c+35,"top EXU_io_es_rf_we", false,-1);
        tracep->declBus(c+41,"top EXU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBit(c+336,"top LSU_clock", false,-1);
        tracep->declBit(c+337,"top LSU_reset", false,-1);
        tracep->declQuad(c+45,"top LSU_io_pc", false,-1, 63,0);
        tracep->declBit(c+38,"top LSU_io_es_to_ms_valid", false,-1);
        tracep->declBit(c+35,"top LSU_io_rf_we", false,-1);
        tracep->declBus(c+41,"top LSU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+47,"top LSU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+49,"top LSU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+51,"top LSU_io_wen", false,-1);
        tracep->declBus(c+52,"top LSU_io_wstrb", false,-1, 7,0);
        tracep->declBit(c+53,"top LSU_io_ren", false,-1);
        tracep->declQuad(c+54,"top LSU_io_maddr", false,-1, 63,0);
        tracep->declQuad(c+56,"top LSU_io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+58,"top LSU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+39,"top LSU_io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+60,"top LSU_io_to_ws_rf_we", false,-1);
        tracep->declBus(c+42,"top LSU_io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+39,"top LSU_io_ms_valid", false,-1);
        tracep->declBit(c+36,"top LSU_io_ms_rf_we", false,-1);
        tracep->declBus(c+42,"top LSU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+56,"top LSU_io_ms_pc", false,-1, 63,0);
        tracep->declBit(c+336,"top WBU_clock", false,-1);
        tracep->declBit(c+337,"top WBU_reset", false,-1);
        tracep->declQuad(c+56,"top WBU_io_pc", false,-1, 63,0);
        tracep->declBit(c+39,"top WBU_io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+58,"top WBU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+60,"top WBU_io_rf_we", false,-1);
        tracep->declBus(c+42,"top WBU_io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU_io_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_wdata", false,-1, 63,0);
        tracep->declBit(c+40,"top WBU_io_ws_valid", false,-1);
        tracep->declBit(c+37,"top WBU_io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declBus(c+61,"top dpi_flag", false,-1, 31,0);
        tracep->declBus(c+62,"top dpi_ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+56,"top dpi_pc", false,-1, 63,0);
        tracep->declBit(c+336,"top Register clock", false,-1);
        tracep->declBus(c+1,"top Register io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register io_we", false,-1);
        tracep->declBus(c+8,"top Register io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register io_wdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+63+i*2,"top Register Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+342,"top Register Reg_io_rdata1_MPORT_en", false,-1);
        tracep->declBus(c+1,"top Register Reg_io_rdata1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+127,"top Register Reg_io_rdata1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_io_rdata2_MPORT_en", false,-1);
        tracep->declBus(c+2,"top Register Reg_io_rdata2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+129,"top Register Reg_io_rdata2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_0_MPORT_en", false,-1);
        tracep->declBus(c+343,"top Register Reg_reg_trace_io_input_reg_0_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+131,"top Register Reg_reg_trace_io_input_reg_0_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_1_MPORT_en", false,-1);
        tracep->declBus(c+344,"top Register Reg_reg_trace_io_input_reg_1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+133,"top Register Reg_reg_trace_io_input_reg_1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_2_MPORT_en", false,-1);
        tracep->declBus(c+345,"top Register Reg_reg_trace_io_input_reg_2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+135,"top Register Reg_reg_trace_io_input_reg_2_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_3_MPORT_en", false,-1);
        tracep->declBus(c+346,"top Register Reg_reg_trace_io_input_reg_3_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+137,"top Register Reg_reg_trace_io_input_reg_3_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_4_MPORT_en", false,-1);
        tracep->declBus(c+347,"top Register Reg_reg_trace_io_input_reg_4_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+139,"top Register Reg_reg_trace_io_input_reg_4_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_5_MPORT_en", false,-1);
        tracep->declBus(c+348,"top Register Reg_reg_trace_io_input_reg_5_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+141,"top Register Reg_reg_trace_io_input_reg_5_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_6_MPORT_en", false,-1);
        tracep->declBus(c+349,"top Register Reg_reg_trace_io_input_reg_6_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+143,"top Register Reg_reg_trace_io_input_reg_6_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_7_MPORT_en", false,-1);
        tracep->declBus(c+350,"top Register Reg_reg_trace_io_input_reg_7_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+145,"top Register Reg_reg_trace_io_input_reg_7_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_8_MPORT_en", false,-1);
        tracep->declBus(c+351,"top Register Reg_reg_trace_io_input_reg_8_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+147,"top Register Reg_reg_trace_io_input_reg_8_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_9_MPORT_en", false,-1);
        tracep->declBus(c+352,"top Register Reg_reg_trace_io_input_reg_9_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+149,"top Register Reg_reg_trace_io_input_reg_9_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_10_MPORT_en", false,-1);
        tracep->declBus(c+353,"top Register Reg_reg_trace_io_input_reg_10_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+151,"top Register Reg_reg_trace_io_input_reg_10_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_11_MPORT_en", false,-1);
        tracep->declBus(c+354,"top Register Reg_reg_trace_io_input_reg_11_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+153,"top Register Reg_reg_trace_io_input_reg_11_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_12_MPORT_en", false,-1);
        tracep->declBus(c+355,"top Register Reg_reg_trace_io_input_reg_12_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+155,"top Register Reg_reg_trace_io_input_reg_12_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_13_MPORT_en", false,-1);
        tracep->declBus(c+356,"top Register Reg_reg_trace_io_input_reg_13_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+157,"top Register Reg_reg_trace_io_input_reg_13_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_14_MPORT_en", false,-1);
        tracep->declBus(c+357,"top Register Reg_reg_trace_io_input_reg_14_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+159,"top Register Reg_reg_trace_io_input_reg_14_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_15_MPORT_en", false,-1);
        tracep->declBus(c+358,"top Register Reg_reg_trace_io_input_reg_15_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+161,"top Register Reg_reg_trace_io_input_reg_15_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_16_MPORT_en", false,-1);
        tracep->declBus(c+359,"top Register Reg_reg_trace_io_input_reg_16_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+163,"top Register Reg_reg_trace_io_input_reg_16_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_17_MPORT_en", false,-1);
        tracep->declBus(c+360,"top Register Reg_reg_trace_io_input_reg_17_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+165,"top Register Reg_reg_trace_io_input_reg_17_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_18_MPORT_en", false,-1);
        tracep->declBus(c+361,"top Register Reg_reg_trace_io_input_reg_18_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+167,"top Register Reg_reg_trace_io_input_reg_18_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_19_MPORT_en", false,-1);
        tracep->declBus(c+362,"top Register Reg_reg_trace_io_input_reg_19_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+169,"top Register Reg_reg_trace_io_input_reg_19_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_20_MPORT_en", false,-1);
        tracep->declBus(c+363,"top Register Reg_reg_trace_io_input_reg_20_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+171,"top Register Reg_reg_trace_io_input_reg_20_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_21_MPORT_en", false,-1);
        tracep->declBus(c+364,"top Register Reg_reg_trace_io_input_reg_21_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+173,"top Register Reg_reg_trace_io_input_reg_21_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_22_MPORT_en", false,-1);
        tracep->declBus(c+365,"top Register Reg_reg_trace_io_input_reg_22_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+175,"top Register Reg_reg_trace_io_input_reg_22_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_23_MPORT_en", false,-1);
        tracep->declBus(c+366,"top Register Reg_reg_trace_io_input_reg_23_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+177,"top Register Reg_reg_trace_io_input_reg_23_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_24_MPORT_en", false,-1);
        tracep->declBus(c+367,"top Register Reg_reg_trace_io_input_reg_24_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+179,"top Register Reg_reg_trace_io_input_reg_24_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_25_MPORT_en", false,-1);
        tracep->declBus(c+368,"top Register Reg_reg_trace_io_input_reg_25_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+181,"top Register Reg_reg_trace_io_input_reg_25_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_26_MPORT_en", false,-1);
        tracep->declBus(c+369,"top Register Reg_reg_trace_io_input_reg_26_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+183,"top Register Reg_reg_trace_io_input_reg_26_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_27_MPORT_en", false,-1);
        tracep->declBus(c+370,"top Register Reg_reg_trace_io_input_reg_27_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+185,"top Register Reg_reg_trace_io_input_reg_27_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_28_MPORT_en", false,-1);
        tracep->declBus(c+371,"top Register Reg_reg_trace_io_input_reg_28_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+187,"top Register Reg_reg_trace_io_input_reg_28_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_29_MPORT_en", false,-1);
        tracep->declBus(c+372,"top Register Reg_reg_trace_io_input_reg_29_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+189,"top Register Reg_reg_trace_io_input_reg_29_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_30_MPORT_en", false,-1);
        tracep->declBus(c+373,"top Register Reg_reg_trace_io_input_reg_30_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+191,"top Register Reg_reg_trace_io_input_reg_30_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+342,"top Register Reg_reg_trace_io_input_reg_31_MPORT_en", false,-1);
        tracep->declBus(c+374,"top Register Reg_reg_trace_io_input_reg_31_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+193,"top Register Reg_reg_trace_io_input_reg_31_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+9,"top Register Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+8,"top Register Reg_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+342,"top Register Reg_MPORT_mask", false,-1);
        tracep->declBit(c+7,"top Register Reg_MPORT_en", false,-1);
        tracep->declQuad(c+131,"top Register reg_trace_input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+133,"top Register reg_trace_input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+135,"top Register reg_trace_input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+137,"top Register reg_trace_input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+139,"top Register reg_trace_input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+141,"top Register reg_trace_input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+143,"top Register reg_trace_input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+145,"top Register reg_trace_input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+147,"top Register reg_trace_input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+149,"top Register reg_trace_input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+151,"top Register reg_trace_input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+153,"top Register reg_trace_input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+155,"top Register reg_trace_input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+157,"top Register reg_trace_input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+159,"top Register reg_trace_input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+161,"top Register reg_trace_input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+163,"top Register reg_trace_input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+165,"top Register reg_trace_input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+167,"top Register reg_trace_input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+169,"top Register reg_trace_input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+171,"top Register reg_trace_input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+173,"top Register reg_trace_input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+175,"top Register reg_trace_input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+177,"top Register reg_trace_input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+179,"top Register reg_trace_input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+181,"top Register reg_trace_input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+183,"top Register reg_trace_input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+185,"top Register reg_trace_input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+187,"top Register reg_trace_input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+189,"top Register reg_trace_input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+191,"top Register reg_trace_input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+193,"top Register reg_trace_input_reg_31", false,-1, 63,0);
        tracep->declQuad(c+131,"top Register reg_trace input_reg_0", false,-1, 63,0);
        tracep->declQuad(c+133,"top Register reg_trace input_reg_1", false,-1, 63,0);
        tracep->declQuad(c+135,"top Register reg_trace input_reg_2", false,-1, 63,0);
        tracep->declQuad(c+137,"top Register reg_trace input_reg_3", false,-1, 63,0);
        tracep->declQuad(c+139,"top Register reg_trace input_reg_4", false,-1, 63,0);
        tracep->declQuad(c+141,"top Register reg_trace input_reg_5", false,-1, 63,0);
        tracep->declQuad(c+143,"top Register reg_trace input_reg_6", false,-1, 63,0);
        tracep->declQuad(c+145,"top Register reg_trace input_reg_7", false,-1, 63,0);
        tracep->declQuad(c+147,"top Register reg_trace input_reg_8", false,-1, 63,0);
        tracep->declQuad(c+149,"top Register reg_trace input_reg_9", false,-1, 63,0);
        tracep->declQuad(c+151,"top Register reg_trace input_reg_10", false,-1, 63,0);
        tracep->declQuad(c+153,"top Register reg_trace input_reg_11", false,-1, 63,0);
        tracep->declQuad(c+155,"top Register reg_trace input_reg_12", false,-1, 63,0);
        tracep->declQuad(c+157,"top Register reg_trace input_reg_13", false,-1, 63,0);
        tracep->declQuad(c+159,"top Register reg_trace input_reg_14", false,-1, 63,0);
        tracep->declQuad(c+161,"top Register reg_trace input_reg_15", false,-1, 63,0);
        tracep->declQuad(c+163,"top Register reg_trace input_reg_16", false,-1, 63,0);
        tracep->declQuad(c+165,"top Register reg_trace input_reg_17", false,-1, 63,0);
        tracep->declQuad(c+167,"top Register reg_trace input_reg_18", false,-1, 63,0);
        tracep->declQuad(c+169,"top Register reg_trace input_reg_19", false,-1, 63,0);
        tracep->declQuad(c+171,"top Register reg_trace input_reg_20", false,-1, 63,0);
        tracep->declQuad(c+173,"top Register reg_trace input_reg_21", false,-1, 63,0);
        tracep->declQuad(c+175,"top Register reg_trace input_reg_22", false,-1, 63,0);
        tracep->declQuad(c+177,"top Register reg_trace input_reg_23", false,-1, 63,0);
        tracep->declQuad(c+179,"top Register reg_trace input_reg_24", false,-1, 63,0);
        tracep->declQuad(c+181,"top Register reg_trace input_reg_25", false,-1, 63,0);
        tracep->declQuad(c+183,"top Register reg_trace input_reg_26", false,-1, 63,0);
        tracep->declQuad(c+185,"top Register reg_trace input_reg_27", false,-1, 63,0);
        tracep->declQuad(c+187,"top Register reg_trace input_reg_28", false,-1, 63,0);
        tracep->declQuad(c+189,"top Register reg_trace input_reg_29", false,-1, 63,0);
        tracep->declQuad(c+191,"top Register reg_trace input_reg_30", false,-1, 63,0);
        tracep->declQuad(c+193,"top Register reg_trace input_reg_31", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+195+i*2,"top Register reg_trace traceregs", true,(i+0), 63,0);}}
        tracep->declBit(c+336,"top IFU clock", false,-1);
        tracep->declBit(c+337,"top IFU reset", false,-1);
        tracep->declBit(c+11,"top IFU io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IFU io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IFU io_br_target", false,-1, 63,0);
        tracep->declBit(c+15,"top IFU io_br_taken_cancel", false,-1);
        tracep->declQuad(c+16,"top IFU io_to_ds_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IFU io_fs_to_ds_valid", false,-1);
        tracep->declBus(c+19,"top IFU io_inst", false,-1, 31,0);
        tracep->declQuad(c+16,"top IFU inst_read_Raddr", false,-1, 63,0);
        tracep->declQuad(c+259,"top IFU inst_read_Rdata", false,-1, 63,0);
        tracep->declQuad(c+375,"top IFU inst_read_Waddr", false,-1, 63,0);
        tracep->declQuad(c+375,"top IFU inst_read_Wdata", false,-1, 63,0);
        tracep->declBus(c+377,"top IFU inst_read_Wmask", false,-1, 7,0);
        tracep->declBit(c+378,"top IFU inst_read_Write_en", false,-1);
        tracep->declBit(c+18,"top IFU inst_read_Read_en", false,-1);
        tracep->declBit(c+18,"top IFU fs_valid", false,-1);
        tracep->declQuad(c+16,"top IFU fs_pc", false,-1, 63,0);
        tracep->declQuad(c+261,"top IFU seq_pc", false,-1, 63,0);
        tracep->declBit(c+263,"top IFU fs_allowin", false,-1);
        tracep->declQuad(c+16,"top IFU inst_read Raddr", false,-1, 63,0);
        tracep->declQuad(c+375,"top IFU inst_read Waddr", false,-1, 63,0);
        tracep->declQuad(c+375,"top IFU inst_read Wdata", false,-1, 63,0);
        tracep->declBus(c+377,"top IFU inst_read Wmask", false,-1, 7,0);
        tracep->declBit(c+378,"top IFU inst_read Write_en", false,-1);
        tracep->declBit(c+18,"top IFU inst_read Read_en", false,-1);
        tracep->declQuad(c+259,"top IFU inst_read Rdata", false,-1, 63,0);
        tracep->declBit(c+336,"top IDU clock", false,-1);
        tracep->declBit(c+337,"top IDU reset", false,-1);
        tracep->declQuad(c+16,"top IDU io_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IDU io_fs_to_ds_valid", false,-1);
        tracep->declBit(c+20,"top IDU io_ds_to_es_valid", false,-1);
        tracep->declBus(c+19,"top IDU io_from_fs_inst", false,-1, 31,0);
        tracep->declBit(c+12,"top IDU io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IDU io_br_target", false,-1, 63,0);
        tracep->declBit(c+15,"top IDU io_br_taken_cancel", false,-1);
        tracep->declBit(c+11,"top IDU io_ds_allowin", false,-1);
        tracep->declBus(c+1,"top IDU io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top IDU io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top IDU io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top IDU io_rdata2", false,-1, 63,0);
        tracep->declQuad(c+21,"top IDU io_to_es_pc", false,-1, 63,0);
        tracep->declBus(c+23,"top IDU io_inst_now", false,-1, 31,0);
        tracep->declQuad(c+24,"top IDU io_src1", false,-1, 63,0);
        tracep->declQuad(c+26,"top IDU io_src2", false,-1, 63,0);
        tracep->declBus(c+28,"top IDU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+29,"top IDU io_store_data", false,-1, 63,0);
        tracep->declBit(c+31,"top IDU io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+32,"top IDU io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+33,"top IDU io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+34,"top IDU io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+35,"top IDU io_es_rf_we", false,-1);
        tracep->declBit(c+36,"top IDU io_ms_rf_we", false,-1);
        tracep->declBit(c+37,"top IDU io_ws_rf_we", false,-1);
        tracep->declBit(c+38,"top IDU io_es_valid", false,-1);
        tracep->declBit(c+39,"top IDU io_ms_valid", false,-1);
        tracep->declBit(c+40,"top IDU io_ws_valid", false,-1);
        tracep->declBus(c+41,"top IDU io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+42,"top IDU io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+264,"top IDU ds_valid", false,-1);
        tracep->declQuad(c+21,"top IDU ds_pc", false,-1, 63,0);
        tracep->declBus(c+265,"top IDU inst", false,-1, 31,0);
        tracep->declBus(c+23,"top IDU inst_now", false,-1, 31,0);
        tracep->declBit(c+266,"top IDU br_taken", false,-1);
        tracep->declBit(c+267,"top IDU src1_is_pc", false,-1);
        tracep->declBus(c+1,"top IDU rs1", false,-1, 4,0);
        tracep->declBus(c+268,"top IDU inst_type", false,-1, 31,0);
        tracep->declBit(c+269,"top IDU src2_is_imm", false,-1);
        tracep->declBus(c+2,"top IDU rs2", false,-1, 4,0);
        tracep->declBit(c+270,"top IDU conflict", false,-1);
        tracep->declBit(c+271,"top IDU ds_ready_go", false,-1);
        tracep->declBit(c+15,"top IDU br_taken_cancel", false,-1);
        tracep->declBit(c+272,"top IDU ds_allowin", false,-1);
        tracep->declBus(c+28,"top IDU rd", false,-1, 4,0);
        tracep->declBus(c+273,"top IDU imm_imm", false,-1, 11,0);
        tracep->declBus(c+274,"top IDU imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+275,"top IDU imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+276,"top IDU imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+277,"top IDU imm_imm_4", false,-1, 11,0);
        tracep->declQuad(c+278,"top IDU imm", false,-1, 63,0);
        tracep->declQuad(c+24,"top IDU src1", false,-1, 63,0);
        tracep->declQuad(c+26,"top IDU src2", false,-1, 63,0);
        tracep->declBit(c+336,"top EXU clock", false,-1);
        tracep->declBit(c+337,"top EXU reset", false,-1);
        tracep->declQuad(c+21,"top EXU io_pc", false,-1, 63,0);
        tracep->declBit(c+20,"top EXU io_ds_to_es_valid", false,-1);
        tracep->declBus(c+23,"top EXU io_inst_now", false,-1, 31,0);
        tracep->declBus(c+43,"top EXU io_src1_value", false,-1, 4,0);
        tracep->declBus(c+44,"top EXU io_src2_value", false,-1, 4,0);
        tracep->declBus(c+28,"top EXU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+29,"top EXU io_store_data", false,-1, 63,0);
        tracep->declBit(c+38,"top EXU io_es_to_ms_valid", false,-1);
        tracep->declQuad(c+45,"top EXU io_to_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+47,"top EXU io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+49,"top EXU io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+51,"top EXU io_to_ms_wen", false,-1);
        tracep->declBus(c+52,"top EXU io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+53,"top EXU io_to_ms_ren", false,-1);
        tracep->declQuad(c+54,"top EXU io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+41,"top EXU io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+35,"top EXU io_to_ms_rf_we", false,-1);
        tracep->declBit(c+31,"top EXU io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+32,"top EXU io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+33,"top EXU io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+34,"top EXU io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+38,"top EXU io_es_valid", false,-1);
        tracep->declBit(c+35,"top EXU io_es_rf_we", false,-1);
        tracep->declBus(c+41,"top EXU io_es_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+45,"top EXU es_pc", false,-1, 63,0);
        tracep->declBit(c+38,"top EXU es_valid", false,-1);
        tracep->declBus(c+41,"top EXU es_rd", false,-1, 4,0);
        tracep->declBit(c+35,"top EXU es_rf_we", false,-1);
        tracep->declQuad(c+280,"top EXU src1_value", false,-1, 63,0);
        tracep->declQuad(c+282,"top EXU src2_value", false,-1, 63,0);
        tracep->declQuad(c+49,"top EXU store_data", false,-1, 63,0);
        tracep->declBus(c+52,"top EXU st_wstrb", false,-1, 7,0);
        tracep->declBit(c+51,"top EXU st_we", false,-1);
        tracep->declBit(c+53,"top EXU ld_we", false,-1);
        tracep->declBus(c+284,"top EXU inst_now", false,-1, 31,0);
        tracep->declQuad(c+285,"top EXU add_res", false,-1, 63,0);
        tracep->declQuad(c+287,"top EXU sub_res", false,-1, 63,0);
        tracep->declQuad(c+289,"top EXU sra_res", false,-1, 63,0);
        tracep->declQuad(c+291,"top EXU srl_res", false,-1, 63,0);
        tracep->declArray(c+293,"top EXU sll_res", false,-1, 126,0);
        tracep->declBus(c+297,"top EXU sraw_res", false,-1, 31,0);
        tracep->declBus(c+298,"top EXU srlw_res", false,-1, 31,0);
        tracep->declQuad(c+299,"top EXU sllw_res", false,-1, 62,0);
        tracep->declQuad(c+301,"top EXU or_res", false,-1, 63,0);
        tracep->declQuad(c+303,"top EXU xor_res", false,-1, 63,0);
        tracep->declQuad(c+305,"top EXU and_res", false,-1, 63,0);
        tracep->declQuad(c+307,"top EXU mlu_res", false,-1, 63,0);
        tracep->declBus(c+309,"top EXU mluw_res", false,-1, 31,0);
        tracep->declBus(c+310,"top EXU divw_res", false,-1, 31,0);
        tracep->declBus(c+311,"top EXU divuw_res", false,-1, 31,0);
        tracep->declBus(c+312,"top EXU remw_res", false,-1, 31,0);
        tracep->declBus(c+313,"top EXU remuw_res", false,-1, 31,0);
        tracep->declArray(c+314,"top EXU div_res", false,-1, 64,0);
        tracep->declQuad(c+317,"top EXU divu_res", false,-1, 63,0);
        tracep->declQuad(c+319,"top EXU rem_res", false,-1, 63,0);
        tracep->declQuad(c+321,"top EXU remu_res", false,-1, 63,0);
        tracep->declQuad(c+47,"top EXU alu_res", false,-1, 63,0);
        tracep->declBit(c+336,"top LSU clock", false,-1);
        tracep->declBit(c+337,"top LSU reset", false,-1);
        tracep->declQuad(c+45,"top LSU io_pc", false,-1, 63,0);
        tracep->declBit(c+38,"top LSU io_es_to_ms_valid", false,-1);
        tracep->declBit(c+35,"top LSU io_rf_we", false,-1);
        tracep->declBus(c+41,"top LSU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+47,"top LSU io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+49,"top LSU io_store_data", false,-1, 63,0);
        tracep->declBit(c+51,"top LSU io_wen", false,-1);
        tracep->declBus(c+52,"top LSU io_wstrb", false,-1, 7,0);
        tracep->declBit(c+53,"top LSU io_ren", false,-1);
        tracep->declQuad(c+54,"top LSU io_maddr", false,-1, 63,0);
        tracep->declQuad(c+56,"top LSU io_to_ws_pc", false,-1, 63,0);
        tracep->declQuad(c+58,"top LSU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+39,"top LSU io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+60,"top LSU io_to_ws_rf_we", false,-1);
        tracep->declBus(c+42,"top LSU io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+39,"top LSU io_ms_valid", false,-1);
        tracep->declBit(c+36,"top LSU io_ms_rf_we", false,-1);
        tracep->declBus(c+42,"top LSU io_ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+56,"top LSU io_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+323,"top LSU Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+325,"top LSU Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+323,"top LSU Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+327,"top LSU Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+329,"top LSU Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+330,"top LSU Mem_modle_Write_en", false,-1);
        tracep->declBit(c+331,"top LSU Mem_modle_Read_en", false,-1);
        tracep->declBit(c+39,"top LSU ms_valid", false,-1);
        tracep->declQuad(c+56,"top LSU ms_pc", false,-1, 63,0);
        tracep->declBit(c+60,"top LSU ms_rf_we", false,-1);
        tracep->declBus(c+42,"top LSU ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+332,"top LSU ms_res", false,-1, 63,0);
        tracep->declQuad(c+327,"top LSU store_data", false,-1, 63,0);
        tracep->declBit(c+330,"top LSU wen", false,-1);
        tracep->declBus(c+329,"top LSU wstrb", false,-1, 7,0);
        tracep->declBit(c+331,"top LSU ren", false,-1);
        tracep->declQuad(c+323,"top LSU maddr", false,-1, 63,0);
        tracep->declQuad(c+323,"top LSU Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+323,"top LSU Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+327,"top LSU Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+329,"top LSU Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+330,"top LSU Mem_modle Write_en", false,-1);
        tracep->declBit(c+331,"top LSU Mem_modle Read_en", false,-1);
        tracep->declQuad(c+325,"top LSU Mem_modle Rdata", false,-1, 63,0);
        tracep->declBit(c+336,"top WBU clock", false,-1);
        tracep->declBit(c+337,"top WBU reset", false,-1);
        tracep->declQuad(c+56,"top WBU io_pc", false,-1, 63,0);
        tracep->declBit(c+39,"top WBU io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+58,"top WBU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+60,"top WBU io_rf_we", false,-1);
        tracep->declBus(c+42,"top WBU io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU io_we", false,-1);
        tracep->declBus(c+8,"top WBU io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_wdata", false,-1, 63,0);
        tracep->declBit(c+40,"top WBU io_ws_valid", false,-1);
        tracep->declBit(c+37,"top WBU io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+40,"top WBU ws_valid", false,-1);
        tracep->declQuad(c+334,"top WBU ws_pc", false,-1, 63,0);
        tracep->declBit(c+37,"top WBU ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU ws_res", false,-1, 63,0);
        tracep->declBus(c+61,"top dpi flag", false,-1, 31,0);
        tracep->declBus(c+62,"top dpi ecall_flag", false,-1, 31,0);
        tracep->declQuad(c+56,"top dpi pc", false,-1, 63,0);
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
    VlWide<4>/*127:0*/ __Vtemp151;
    VlWide<4>/*127:0*/ __Vtemp152;
    VlWide<4>/*127:0*/ __Vtemp153;
    VlWide<4>/*127:0*/ __Vtemp154;
    VlWide<4>/*127:0*/ __Vtemp155;
    VlWide<4>/*127:0*/ __Vtemp156;
    VlWide<4>/*127:0*/ __Vtemp157;
    VlWide<3>/*95:0*/ __Vtemp160;
    VlWide<3>/*95:0*/ __Vtemp161;
    VlWide<3>/*95:0*/ __Vtemp163;
    VlWide<3>/*95:0*/ __Vtemp164;
    VlWide<3>/*95:0*/ __Vtemp165;
    VlWide<3>/*95:0*/ __Vtemp166;
    VlWide<4>/*127:0*/ __Vtemp167;
    VlWide<4>/*127:0*/ __Vtemp168;
    VlWide<4>/*127:0*/ __Vtemp189;
    VlWide<4>/*127:0*/ __Vtemp190;
    VlWide<4>/*127:0*/ __Vtemp191;
    VlWide<3>/*95:0*/ __Vtemp194;
    VlWide<3>/*95:0*/ __Vtemp195;
    VlWide<3>/*95:0*/ __Vtemp197;
    VlWide<3>/*95:0*/ __Vtemp198;
    VlWide<3>/*95:0*/ __Vtemp199;
    VlWide<3>/*95:0*/ __Vtemp200;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0xfU))),5);
        tracep->fullCData(oldp+2,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x14U))),5);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__Register_io_rdata1),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__Register_io_rdata2),64);
        tracep->fullBit(oldp+7,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                 & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid))));
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__WBU__DOT__ws_rf_dst),5);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__WBU__DOT__ws_res),64);
        tracep->fullBit(oldp+11,((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                        | (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict))))));
        tracep->fullBit(oldp+12,(((0x3eU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)) 
                                  | ((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)) 
                                     | (IData)(vlSelf->top__DOT__IDU__DOT___br_taken_T_35)))));
        tracep->fullQData(oldp+13,(((6U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                     ? (0xfffffffffffffffeULL 
                                        & vlSelf->top__DOT__IDU__DOT___br_target_T_1)
                                     : vlSelf->top__DOT__IDU__DOT___br_target_T_1)),64);
        tracep->fullBit(oldp+15,(((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                  & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)))));
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__IFU__DOT__fs_pc),64);
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__IFU__DOT__fs_valid));
        tracep->fullIData(oldp+19,((IData)(vlSelf->top__DOT__IFU__DOT__inst_read_Rdata)),32);
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__IDU_io_ds_to_es_valid));
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__IDU__DOT__ds_pc),64);
        tracep->fullIData(oldp+23,(vlSelf->top__DOT__IDU__DOT___inst_now_T_194),32);
        tracep->fullQData(oldp+24,(((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                                     ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                     : vlSelf->top__DOT__Register_io_rdata1)),64);
        tracep->fullQData(oldp+26,(((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                     ? vlSelf->top__DOT__IDU__DOT__imm
                                     : vlSelf->top__DOT__Register_io_rdata2)),64);
        tracep->fullCData(oldp+28,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+29,(((0x27U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                     ? (QData)((IData)(vlSelf->top__DOT__Register_io_rdata2))
                                     : ((0x28U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(vlSelf->top__DOT__Register_io_rdata2))))
                                         : ((0x26U 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                             ? (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top__DOT__Register_io_rdata2))))
                                             : ((7U 
                                                 == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                 ? vlSelf->top__DOT__Register_io_rdata2
                                                 : 0ULL))))),64);
        tracep->fullBit(oldp+31,(((0x100073U != vlSelf->top__DOT__IDU__DOT__inst) 
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
        tracep->fullBit(oldp+32,((0x44U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))));
        tracep->fullBit(oldp+33,(((0x3003U == (0x707fU 
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
        tracep->fullCData(oldp+34,(((0x3023U == (0x707fU 
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
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__EXU__DOT__es_rf_we));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__LSU_io_ms_rf_we));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__EXU__DOT__es_valid));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__LSU__DOT__ms_valid));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__WBU__DOT__ws_valid));
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__EXU__DOT__es_rd),5);
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__LSU__DOT__ms_rf_dst),5);
        tracep->fullCData(oldp+43,((0x1fU & (IData)(
                                                    ((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                                                      ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                      : vlSelf->top__DOT__Register_io_rdata1)))),5);
        tracep->fullCData(oldp+44,((0x1fU & (IData)(
                                                    ((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                                      ? vlSelf->top__DOT__IDU__DOT__imm
                                                      : vlSelf->top__DOT__Register_io_rdata2)))),5);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
        VL_EXTEND_WQ(127,64, __Vtemp151, vlSelf->top__DOT__EXU__DOT__srl_res);
        VL_EXTEND_WQ(127,64, __Vtemp152, vlSelf->top__DOT__EXU__DOT__sra_res);
        VL_EXTEND_WQ(127,64, __Vtemp153, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
        VL_EXTEND_WQ(127,64, __Vtemp154, VL_MODDIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
        VL_EXTEND_WQ(127,64, __Vtemp155, (((QData)((IData)(
                                                           ((vlSelf->top__DOT__EXU__DOT__remuw_res 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__remuw_res))));
        VL_EXTEND_WQ(127,64, __Vtemp156, (((QData)((IData)(
                                                           ((vlSelf->top__DOT__EXU__DOT__remw_res 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__remw_res))));
        VL_EXTEND_WQ(127,64, __Vtemp157, (((QData)((IData)(
                                                           ((vlSelf->top__DOT__EXU__DOT__divuw_res 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__divuw_res))));
        VL_EXTENDS_WQ(65,64, __Vtemp160, vlSelf->top__DOT__EXU__DOT__src1_value);
        __Vtemp161[0U] = __Vtemp160[0U];
        __Vtemp161[1U] = __Vtemp160[1U];
        __Vtemp161[2U] = (1U & __Vtemp160[2U]);
        VL_EXTENDS_WQ(65,64, __Vtemp163, vlSelf->top__DOT__EXU__DOT__src2_value);
        __Vtemp164[0U] = __Vtemp163[0U];
        __Vtemp164[1U] = __Vtemp163[1U];
        __Vtemp164[2U] = (1U & __Vtemp163[2U]);
        VL_DIVS_WWW(65, __Vtemp165, __Vtemp161, __Vtemp164);
        __Vtemp166[0U] = __Vtemp165[0U];
        __Vtemp166[1U] = __Vtemp165[1U];
        __Vtemp166[2U] = (1U & __Vtemp165[2U]);
        VL_EXTEND_WW(127,65, __Vtemp167, __Vtemp166);
        VL_EXTEND_WQ(127,64, __Vtemp168, VL_DIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
        tracep->fullQData(oldp+47,((((QData)((IData)(
                                                     ((0x38U 
                                                       == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                       ? 
                                                      __Vtemp151[1U]
                                                       : 
                                                      ((0x39U 
                                                        == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                        ? 
                                                       __Vtemp152[1U]
                                                        : 
                                                       ((0x37U 
                                                         == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                         ? 
                                                        vlSelf->top__DOT__EXU__DOT__sll_res[1U]
                                                         : 
                                                        ((0x34U 
                                                          == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                          ? 
                                                         __Vtemp153[1U]
                                                          : 
                                                         ((0x33U 
                                                           == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                           ? 
                                                          __Vtemp154[1U]
                                                           : 
                                                          ((0x32U 
                                                            == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                            ? 
                                                           __Vtemp155[1U]
                                                            : 
                                                           ((0x14U 
                                                             == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                             ? 
                                                            __Vtemp156[1U]
                                                             : 
                                                            ((0x35U 
                                                              == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                              ? 
                                                             __Vtemp157[1U]
                                                              : 
                                                             ((0x31U 
                                                               == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                               ? 
                                                              __Vtemp167[1U]
                                                               : 
                                                              ((0x30U 
                                                                == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                ? 
                                                               __Vtemp168[1U]
                                                                : 
                                                               vlSelf->top__DOT__EXU__DOT___alu_res_T_144[1U])))))))))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0x38U 
                                                                   == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                   ? 
                                                                  __Vtemp151[0U]
                                                                   : 
                                                                  ((0x39U 
                                                                    == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                    ? 
                                                                   __Vtemp152[0U]
                                                                    : 
                                                                   ((0x37U 
                                                                     == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                     ? 
                                                                    vlSelf->top__DOT__EXU__DOT__sll_res[0U]
                                                                     : 
                                                                    ((0x34U 
                                                                      == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                      ? 
                                                                     __Vtemp153[0U]
                                                                      : 
                                                                     ((0x33U 
                                                                       == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                       ? 
                                                                      __Vtemp154[0U]
                                                                       : 
                                                                      ((0x32U 
                                                                        == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                        ? 
                                                                       __Vtemp155[0U]
                                                                        : 
                                                                       ((0x14U 
                                                                         == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                         ? 
                                                                        __Vtemp156[0U]
                                                                         : 
                                                                        ((0x35U 
                                                                          == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                          ? 
                                                                         __Vtemp157[0U]
                                                                          : 
                                                                         ((0x31U 
                                                                           == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                           ? 
                                                                          __Vtemp167[0U]
                                                                           : 
                                                                          ((0x30U 
                                                                            == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                            ? 
                                                                           __Vtemp168[0U]
                                                                            : 
                                                                           vlSelf->top__DOT__EXU__DOT___alu_res_T_144[0U])))))))))))))),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__EXU__DOT__store_data),64);
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__EXU__DOT__st_we));
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__EXU__DOT__ld_we));
        tracep->fullQData(oldp+54,((vlSelf->top__DOT__EXU__DOT__src1_value 
                                    + vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__LSU__DOT__ms_pc),64);
        tracep->fullQData(oldp+58,(((IData)(vlSelf->top__DOT__LSU__DOT__ren)
                                     ? vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata
                                     : vlSelf->top__DOT__LSU__DOT__ms_res)),64);
        tracep->fullBit(oldp+60,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
        tracep->fullIData(oldp+61,((2U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))),32);
        tracep->fullIData(oldp+62,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))),32);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__Register__DOT__Reg
                                    [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__Register__DOT__Reg
                                    [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0U]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__Register__DOT__Reg
                                    [1U]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__Register__DOT__Reg
                                    [2U]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__Register__DOT__Reg
                                    [3U]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__Register__DOT__Reg
                                    [4U]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__Register__DOT__Reg
                                    [5U]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__Register__DOT__Reg
                                    [6U]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__Register__DOT__Reg
                                    [7U]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__Register__DOT__Reg
                                    [8U]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__Register__DOT__Reg
                                    [9U]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xaU]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xbU]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xcU]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xdU]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xeU]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0xfU]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x10U]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x11U]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x12U]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x13U]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x14U]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x15U]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x16U]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x17U]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x18U]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x19U]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1aU]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1bU]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1cU]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1dU]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1eU]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__Register__DOT__Reg
                                    [0x1fU]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
        tracep->fullQData(oldp+259,(vlSelf->top__DOT__IFU__DOT__inst_read_Rdata),64);
        tracep->fullQData(oldp+261,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__IFU__DOT__fs_allowin));
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__IDU__DOT__ds_valid));
        tracep->fullIData(oldp+265,(vlSelf->top__DOT__IDU__DOT__inst),32);
        tracep->fullBit(oldp+266,(vlSelf->top__DOT__IDU__DOT__br_taken));
        tracep->fullBit(oldp+267,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
        tracep->fullIData(oldp+268,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
        tracep->fullBit(oldp+269,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
        tracep->fullBit(oldp+270,(vlSelf->top__DOT__IDU__DOT__conflict));
        tracep->fullBit(oldp+271,((1U & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)))));
        tracep->fullBit(oldp+272,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
        tracep->fullSData(oldp+273,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+274,(((0x80000U & (vlSelf->top__DOT__IDU__DOT__inst 
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
        tracep->fullIData(oldp+275,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+276,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U)))),12);
        tracep->fullSData(oldp+277,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | ((0x400U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 8U)))))),12);
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__IDU__DOT__imm),64);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
        tracep->fullIData(oldp+284,(vlSelf->top__DOT__EXU__DOT__inst_now),32);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__EXU__DOT__add_res),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__EXU__DOT__sub_res),64);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__EXU__DOT__sra_res),64);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__EXU__DOT__srl_res),64);
        tracep->fullWData(oldp+293,(vlSelf->top__DOT__EXU__DOT__sll_res),127);
        tracep->fullIData(oldp+297,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
        tracep->fullIData(oldp+298,(vlSelf->top__DOT__EXU__DOT__srlw_res),32);
        tracep->fullQData(oldp+299,(vlSelf->top__DOT__EXU__DOT__sllw_res),63);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__EXU__DOT__or_res),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__EXU__DOT__xor_res),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__EXU__DOT__and_res),64);
        VL_EXTEND_WQ(128,64, __Vtemp189, vlSelf->top__DOT__EXU__DOT__src1_value);
        VL_EXTEND_WQ(128,64, __Vtemp190, vlSelf->top__DOT__EXU__DOT__src2_value);
        VL_MUL_W(4, __Vtemp191, __Vtemp189, __Vtemp190);
        tracep->fullQData(oldp+307,((((QData)((IData)(
                                                      __Vtemp191[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp191[0U])))),64);
        tracep->fullIData(oldp+309,((IData)(vlSelf->top__DOT__EXU__DOT___mluw_res_T_2)),32);
        tracep->fullIData(oldp+310,((IData)(vlSelf->top__DOT__EXU__DOT___divw_res_T_4)),32);
        tracep->fullIData(oldp+311,(vlSelf->top__DOT__EXU__DOT__divuw_res),32);
        tracep->fullIData(oldp+312,(vlSelf->top__DOT__EXU__DOT__remw_res),32);
        tracep->fullIData(oldp+313,(vlSelf->top__DOT__EXU__DOT__remuw_res),32);
        VL_EXTENDS_WQ(65,64, __Vtemp194, vlSelf->top__DOT__EXU__DOT__src1_value);
        __Vtemp195[0U] = __Vtemp194[0U];
        __Vtemp195[1U] = __Vtemp194[1U];
        __Vtemp195[2U] = (1U & __Vtemp194[2U]);
        VL_EXTENDS_WQ(65,64, __Vtemp197, vlSelf->top__DOT__EXU__DOT__src2_value);
        __Vtemp198[0U] = __Vtemp197[0U];
        __Vtemp198[1U] = __Vtemp197[1U];
        __Vtemp198[2U] = (1U & __Vtemp197[2U]);
        VL_DIVS_WWW(65, __Vtemp199, __Vtemp195, __Vtemp198);
        __Vtemp200[0U] = __Vtemp199[0U];
        __Vtemp200[1U] = __Vtemp199[1U];
        __Vtemp200[2U] = (1U & __Vtemp199[2U]);
        tracep->fullWData(oldp+314,(__Vtemp200),65);
        tracep->fullQData(oldp+317,(VL_DIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+319,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+321,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__LSU__DOT__maddr),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__LSU__DOT__store_data),64);
        tracep->fullCData(oldp+329,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
        tracep->fullBit(oldp+330,(vlSelf->top__DOT__LSU__DOT__wen));
        tracep->fullBit(oldp+331,(vlSelf->top__DOT__LSU__DOT__ren));
        tracep->fullQData(oldp+332,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
        tracep->fullQData(oldp+334,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
        tracep->fullBit(oldp+336,(vlSelf->clock));
        tracep->fullBit(oldp+337,(vlSelf->reset));
        tracep->fullIData(oldp+338,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+339,(vlSelf->io_pc),64);
        tracep->fullBit(oldp+341,(vlSelf->io_step));
        tracep->fullBit(oldp+342,(1U));
        tracep->fullCData(oldp+343,(0U),5);
        tracep->fullCData(oldp+344,(1U),5);
        tracep->fullCData(oldp+345,(2U),5);
        tracep->fullCData(oldp+346,(3U),5);
        tracep->fullCData(oldp+347,(4U),5);
        tracep->fullCData(oldp+348,(5U),5);
        tracep->fullCData(oldp+349,(6U),5);
        tracep->fullCData(oldp+350,(7U),5);
        tracep->fullCData(oldp+351,(8U),5);
        tracep->fullCData(oldp+352,(9U),5);
        tracep->fullCData(oldp+353,(0xaU),5);
        tracep->fullCData(oldp+354,(0xbU),5);
        tracep->fullCData(oldp+355,(0xcU),5);
        tracep->fullCData(oldp+356,(0xdU),5);
        tracep->fullCData(oldp+357,(0xeU),5);
        tracep->fullCData(oldp+358,(0xfU),5);
        tracep->fullCData(oldp+359,(0x10U),5);
        tracep->fullCData(oldp+360,(0x11U),5);
        tracep->fullCData(oldp+361,(0x12U),5);
        tracep->fullCData(oldp+362,(0x13U),5);
        tracep->fullCData(oldp+363,(0x14U),5);
        tracep->fullCData(oldp+364,(0x15U),5);
        tracep->fullCData(oldp+365,(0x16U),5);
        tracep->fullCData(oldp+366,(0x17U),5);
        tracep->fullCData(oldp+367,(0x18U),5);
        tracep->fullCData(oldp+368,(0x19U),5);
        tracep->fullCData(oldp+369,(0x1aU),5);
        tracep->fullCData(oldp+370,(0x1bU),5);
        tracep->fullCData(oldp+371,(0x1cU),5);
        tracep->fullCData(oldp+372,(0x1dU),5);
        tracep->fullCData(oldp+373,(0x1eU),5);
        tracep->fullCData(oldp+374,(0x1fU),5);
        tracep->fullQData(oldp+375,(0ULL),64);
        tracep->fullCData(oldp+377,(0U),8);
        tracep->fullBit(oldp+378,(0U));
    }
}
