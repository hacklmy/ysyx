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
        tracep->declBit(c+197,"clock", false,-1);
        tracep->declBit(c+198,"reset", false,-1);
        tracep->declBus(c+199,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+200,"io_pc", false,-1, 63,0);
        tracep->declBit(c+202,"io_step", false,-1);
        tracep->declBit(c+197,"top clock", false,-1);
        tracep->declBit(c+198,"top reset", false,-1);
        tracep->declBus(c+199,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+200,"top io_pc", false,-1, 63,0);
        tracep->declBit(c+202,"top io_step", false,-1);
        tracep->declBit(c+197,"top Register_clock", false,-1);
        tracep->declBus(c+1,"top Register_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register_io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register_io_we", false,-1);
        tracep->declBus(c+8,"top Register_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register_io_wdata", false,-1, 63,0);
        tracep->declBit(c+197,"top IFU_clock", false,-1);
        tracep->declBit(c+198,"top IFU_reset", false,-1);
        tracep->declBit(c+11,"top IFU_io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IFU_io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IFU_io_br_target", false,-1, 63,0);
        tracep->declBit(c+15,"top IFU_io_br_taken_cancel", false,-1);
        tracep->declQuad(c+16,"top IFU_io_to_ds_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IFU_io_fs_to_ds_valid", false,-1);
        tracep->declBus(c+19,"top IFU_io_inst", false,-1, 31,0);
        tracep->declBit(c+197,"top IDU_clock", false,-1);
        tracep->declBit(c+198,"top IDU_reset", false,-1);
        tracep->declQuad(c+16,"top IDU_io_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IDU_io_fs_to_ds_valid", false,-1);
        tracep->declBit(c+20,"top IDU_io_ds_to_es_valid", false,-1);
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
        tracep->declBit(c+7,"top IDU_io_ws_rf_we", false,-1);
        tracep->declBit(c+37,"top IDU_io_es_valid", false,-1);
        tracep->declBit(c+38,"top IDU_io_ms_valid", false,-1);
        tracep->declBit(c+39,"top IDU_io_ws_valid", false,-1);
        tracep->declBus(c+40,"top IDU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+41,"top IDU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+197,"top EXU_clock", false,-1);
        tracep->declBit(c+198,"top EXU_reset", false,-1);
        tracep->declQuad(c+21,"top EXU_io_pc", false,-1, 63,0);
        tracep->declBit(c+20,"top EXU_io_ds_to_es_valid", false,-1);
        tracep->declBus(c+23,"top EXU_io_inst_now", false,-1, 31,0);
        tracep->declBus(c+42,"top EXU_io_src1_value", false,-1, 4,0);
        tracep->declBus(c+43,"top EXU_io_src2_value", false,-1, 4,0);
        tracep->declBus(c+28,"top EXU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+29,"top EXU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+37,"top EXU_io_es_to_ms_valid", false,-1);
        tracep->declQuad(c+44,"top EXU_io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+46,"top EXU_io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+48,"top EXU_io_to_ms_wen", false,-1);
        tracep->declBus(c+49,"top EXU_io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+50,"top EXU_io_to_ms_ren", false,-1);
        tracep->declQuad(c+51,"top EXU_io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+40,"top EXU_io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+35,"top EXU_io_to_ms_rf_we", false,-1);
        tracep->declBit(c+31,"top EXU_io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+32,"top EXU_io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+33,"top EXU_io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+34,"top EXU_io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+37,"top EXU_io_es_valid", false,-1);
        tracep->declBit(c+35,"top EXU_io_es_rf_we", false,-1);
        tracep->declBus(c+40,"top EXU_io_es_rf_dst", false,-1, 4,0);
        tracep->declBit(c+197,"top LSU_clock", false,-1);
        tracep->declBit(c+198,"top LSU_reset", false,-1);
        tracep->declBit(c+37,"top LSU_io_es_to_ms_valid", false,-1);
        tracep->declBit(c+35,"top LSU_io_rf_we", false,-1);
        tracep->declBus(c+40,"top LSU_io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+44,"top LSU_io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+46,"top LSU_io_store_data", false,-1, 63,0);
        tracep->declBit(c+48,"top LSU_io_wen", false,-1);
        tracep->declBus(c+49,"top LSU_io_wstrb", false,-1, 7,0);
        tracep->declBit(c+50,"top LSU_io_ren", false,-1);
        tracep->declQuad(c+51,"top LSU_io_maddr", false,-1, 63,0);
        tracep->declQuad(c+53,"top LSU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+38,"top LSU_io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+36,"top LSU_io_to_ws_rf_we", false,-1);
        tracep->declBus(c+41,"top LSU_io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+38,"top LSU_io_ms_valid", false,-1);
        tracep->declBit(c+36,"top LSU_io_ms_rf_we", false,-1);
        tracep->declBus(c+41,"top LSU_io_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+197,"top WBU_clock", false,-1);
        tracep->declBit(c+198,"top WBU_reset", false,-1);
        tracep->declBit(c+38,"top WBU_io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+53,"top WBU_io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+36,"top WBU_io_rf_we", false,-1);
        tracep->declBus(c+41,"top WBU_io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU_io_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU_io_wdata", false,-1, 63,0);
        tracep->declBit(c+39,"top WBU_io_ws_valid", false,-1);
        tracep->declBit(c+7,"top WBU_io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU_io_ws_rf_dst", false,-1, 4,0);
        tracep->declBus(c+55,"top dpi_flag", false,-1, 31,0);
        tracep->declBus(c+56,"top dpi_ecall_flag", false,-1, 31,0);
        tracep->declBit(c+197,"top Register clock", false,-1);
        tracep->declBus(c+1,"top Register io_raddr1", false,-1, 4,0);
        tracep->declBus(c+2,"top Register io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top Register io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top Register io_rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"top Register io_we", false,-1);
        tracep->declBus(c+8,"top Register io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top Register io_wdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+57+i*2,"top Register Reg", true,(i+0), 63,0);}}
        tracep->declBit(c+203,"top Register Reg_io_rdata1_MPORT_en", false,-1);
        tracep->declBus(c+1,"top Register Reg_io_rdata1_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+121,"top Register Reg_io_rdata1_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+203,"top Register Reg_io_rdata2_MPORT_en", false,-1);
        tracep->declBus(c+2,"top Register Reg_io_rdata2_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+123,"top Register Reg_io_rdata2_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+9,"top Register Reg_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+8,"top Register Reg_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+203,"top Register Reg_MPORT_mask", false,-1);
        tracep->declBit(c+7,"top Register Reg_MPORT_en", false,-1);
        tracep->declBit(c+197,"top IFU clock", false,-1);
        tracep->declBit(c+198,"top IFU reset", false,-1);
        tracep->declBit(c+11,"top IFU io_ds_allowin", false,-1);
        tracep->declBit(c+12,"top IFU io_br_taken", false,-1);
        tracep->declQuad(c+13,"top IFU io_br_target", false,-1, 63,0);
        tracep->declBit(c+15,"top IFU io_br_taken_cancel", false,-1);
        tracep->declQuad(c+16,"top IFU io_to_ds_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IFU io_fs_to_ds_valid", false,-1);
        tracep->declBus(c+19,"top IFU io_inst", false,-1, 31,0);
        tracep->declQuad(c+16,"top IFU inst_read_Raddr", false,-1, 63,0);
        tracep->declQuad(c+125,"top IFU inst_read_Rdata", false,-1, 63,0);
        tracep->declQuad(c+204,"top IFU inst_read_Waddr", false,-1, 63,0);
        tracep->declQuad(c+204,"top IFU inst_read_Wdata", false,-1, 63,0);
        tracep->declBus(c+206,"top IFU inst_read_Wmask", false,-1, 7,0);
        tracep->declBit(c+207,"top IFU inst_read_Write_en", false,-1);
        tracep->declBit(c+18,"top IFU inst_read_Read_en", false,-1);
        tracep->declBit(c+18,"top IFU fs_valid", false,-1);
        tracep->declQuad(c+16,"top IFU fs_pc", false,-1, 63,0);
        tracep->declQuad(c+127,"top IFU seq_pc", false,-1, 63,0);
        tracep->declBit(c+129,"top IFU fs_allowin", false,-1);
        tracep->declQuad(c+16,"top IFU inst_read Raddr", false,-1, 63,0);
        tracep->declQuad(c+204,"top IFU inst_read Waddr", false,-1, 63,0);
        tracep->declQuad(c+204,"top IFU inst_read Wdata", false,-1, 63,0);
        tracep->declBus(c+206,"top IFU inst_read Wmask", false,-1, 7,0);
        tracep->declBit(c+207,"top IFU inst_read Write_en", false,-1);
        tracep->declBit(c+18,"top IFU inst_read Read_en", false,-1);
        tracep->declQuad(c+125,"top IFU inst_read Rdata", false,-1, 63,0);
        tracep->declBit(c+197,"top IDU clock", false,-1);
        tracep->declBit(c+198,"top IDU reset", false,-1);
        tracep->declQuad(c+16,"top IDU io_pc", false,-1, 63,0);
        tracep->declBit(c+18,"top IDU io_fs_to_ds_valid", false,-1);
        tracep->declBit(c+20,"top IDU io_ds_to_es_valid", false,-1);
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
        tracep->declBit(c+7,"top IDU io_ws_rf_we", false,-1);
        tracep->declBit(c+37,"top IDU io_es_valid", false,-1);
        tracep->declBit(c+38,"top IDU io_ms_valid", false,-1);
        tracep->declBit(c+39,"top IDU io_ws_valid", false,-1);
        tracep->declBus(c+40,"top IDU io_es_rf_dst", false,-1, 4,0);
        tracep->declBus(c+41,"top IDU io_ms_rf_dst", false,-1, 4,0);
        tracep->declBus(c+8,"top IDU io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+130,"top IDU ds_valid", false,-1);
        tracep->declQuad(c+21,"top IDU ds_pc", false,-1, 63,0);
        tracep->declBus(c+131,"top IDU inst", false,-1, 31,0);
        tracep->declBus(c+23,"top IDU inst_now", false,-1, 31,0);
        tracep->declBit(c+132,"top IDU br_taken", false,-1);
        tracep->declBit(c+133,"top IDU src1_is_pc", false,-1);
        tracep->declBus(c+1,"top IDU rs1", false,-1, 4,0);
        tracep->declBus(c+134,"top IDU inst_type", false,-1, 31,0);
        tracep->declBit(c+135,"top IDU src2_is_imm", false,-1);
        tracep->declBus(c+2,"top IDU rs2", false,-1, 4,0);
        tracep->declBit(c+136,"top IDU conflict", false,-1);
        tracep->declBit(c+137,"top IDU ds_ready_go", false,-1);
        tracep->declBit(c+15,"top IDU br_taken_cancel", false,-1);
        tracep->declBit(c+138,"top IDU ds_allowin", false,-1);
        tracep->declBus(c+28,"top IDU rd", false,-1, 4,0);
        tracep->declBus(c+139,"top IDU imm_imm", false,-1, 11,0);
        tracep->declBus(c+140,"top IDU imm_imm_1", false,-1, 19,0);
        tracep->declBus(c+141,"top IDU imm_imm_2", false,-1, 19,0);
        tracep->declBus(c+142,"top IDU imm_imm_3", false,-1, 11,0);
        tracep->declBus(c+143,"top IDU imm_imm_4", false,-1, 11,0);
        tracep->declQuad(c+144,"top IDU imm", false,-1, 63,0);
        tracep->declQuad(c+24,"top IDU src1", false,-1, 63,0);
        tracep->declQuad(c+26,"top IDU src2", false,-1, 63,0);
        tracep->declBit(c+197,"top EXU clock", false,-1);
        tracep->declBit(c+198,"top EXU reset", false,-1);
        tracep->declQuad(c+21,"top EXU io_pc", false,-1, 63,0);
        tracep->declBit(c+20,"top EXU io_ds_to_es_valid", false,-1);
        tracep->declBus(c+23,"top EXU io_inst_now", false,-1, 31,0);
        tracep->declBus(c+42,"top EXU io_src1_value", false,-1, 4,0);
        tracep->declBus(c+43,"top EXU io_src2_value", false,-1, 4,0);
        tracep->declBus(c+28,"top EXU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+29,"top EXU io_store_data", false,-1, 63,0);
        tracep->declBit(c+37,"top EXU io_es_to_ms_valid", false,-1);
        tracep->declQuad(c+44,"top EXU io_to_ms_alures", false,-1, 63,0);
        tracep->declQuad(c+46,"top EXU io_to_ms_store_data", false,-1, 63,0);
        tracep->declBit(c+48,"top EXU io_to_ms_wen", false,-1);
        tracep->declBus(c+49,"top EXU io_to_ms_wstrb", false,-1, 7,0);
        tracep->declBit(c+50,"top EXU io_to_ms_ren", false,-1);
        tracep->declQuad(c+51,"top EXU io_to_ms_maddr", false,-1, 63,0);
        tracep->declBus(c+40,"top EXU io_to_ms_rf_dst", false,-1, 4,0);
        tracep->declBit(c+35,"top EXU io_to_ms_rf_we", false,-1);
        tracep->declBit(c+31,"top EXU io_ctrl_sign_reg_write", false,-1);
        tracep->declBit(c+32,"top EXU io_ctrl_sign_Writemem_en", false,-1);
        tracep->declBit(c+33,"top EXU io_ctrl_sign_Readmem_en", false,-1);
        tracep->declBus(c+34,"top EXU io_ctrl_sign_Wmask", false,-1, 7,0);
        tracep->declBit(c+37,"top EXU io_es_valid", false,-1);
        tracep->declBit(c+35,"top EXU io_es_rf_we", false,-1);
        tracep->declBus(c+40,"top EXU io_es_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+146,"top EXU es_pc", false,-1, 63,0);
        tracep->declBit(c+37,"top EXU es_valid", false,-1);
        tracep->declBus(c+40,"top EXU es_rd", false,-1, 4,0);
        tracep->declBit(c+35,"top EXU es_rf_we", false,-1);
        tracep->declQuad(c+148,"top EXU src1_value", false,-1, 63,0);
        tracep->declQuad(c+150,"top EXU src2_value", false,-1, 63,0);
        tracep->declQuad(c+46,"top EXU store_data", false,-1, 63,0);
        tracep->declBus(c+49,"top EXU st_wstrb", false,-1, 7,0);
        tracep->declBit(c+48,"top EXU st_we", false,-1);
        tracep->declBit(c+50,"top EXU ld_we", false,-1);
        tracep->declQuad(c+51,"top EXU add_res", false,-1, 63,0);
        tracep->declQuad(c+152,"top EXU sub_res", false,-1, 63,0);
        tracep->declQuad(c+154,"top EXU sra_res", false,-1, 63,0);
        tracep->declQuad(c+156,"top EXU srl_res", false,-1, 63,0);
        tracep->declArray(c+158,"top EXU sll_res", false,-1, 126,0);
        tracep->declBus(c+162,"top EXU sraw_res", false,-1, 31,0);
        tracep->declBus(c+163,"top EXU srlw_res", false,-1, 31,0);
        tracep->declQuad(c+164,"top EXU sllw_res", false,-1, 62,0);
        tracep->declQuad(c+166,"top EXU or_res", false,-1, 63,0);
        tracep->declQuad(c+168,"top EXU xor_res", false,-1, 63,0);
        tracep->declQuad(c+170,"top EXU and_res", false,-1, 63,0);
        tracep->declQuad(c+172,"top EXU mlu_res", false,-1, 63,0);
        tracep->declBus(c+174,"top EXU mluw_res", false,-1, 31,0);
        tracep->declBus(c+175,"top EXU divw_res", false,-1, 31,0);
        tracep->declBus(c+176,"top EXU divuw_res", false,-1, 31,0);
        tracep->declBus(c+177,"top EXU remw_res", false,-1, 31,0);
        tracep->declBus(c+178,"top EXU remuw_res", false,-1, 31,0);
        tracep->declArray(c+179,"top EXU div_res", false,-1, 64,0);
        tracep->declQuad(c+182,"top EXU divu_res", false,-1, 63,0);
        tracep->declQuad(c+184,"top EXU rem_res", false,-1, 63,0);
        tracep->declQuad(c+186,"top EXU remu_res", false,-1, 63,0);
        tracep->declBit(c+197,"top LSU clock", false,-1);
        tracep->declBit(c+198,"top LSU reset", false,-1);
        tracep->declBit(c+37,"top LSU io_es_to_ms_valid", false,-1);
        tracep->declBit(c+35,"top LSU io_rf_we", false,-1);
        tracep->declBus(c+40,"top LSU io_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+44,"top LSU io_alu_res", false,-1, 63,0);
        tracep->declQuad(c+46,"top LSU io_store_data", false,-1, 63,0);
        tracep->declBit(c+48,"top LSU io_wen", false,-1);
        tracep->declBus(c+49,"top LSU io_wstrb", false,-1, 7,0);
        tracep->declBit(c+50,"top LSU io_ren", false,-1);
        tracep->declQuad(c+51,"top LSU io_maddr", false,-1, 63,0);
        tracep->declQuad(c+53,"top LSU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+38,"top LSU io_ms_to_ws_valid", false,-1);
        tracep->declBit(c+36,"top LSU io_to_ws_rf_we", false,-1);
        tracep->declBus(c+41,"top LSU io_to_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+38,"top LSU io_ms_valid", false,-1);
        tracep->declBit(c+36,"top LSU io_ms_rf_we", false,-1);
        tracep->declBus(c+41,"top LSU io_ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+51,"top LSU Mem_modle_Raddr", false,-1, 63,0);
        tracep->declQuad(c+188,"top LSU Mem_modle_Rdata", false,-1, 63,0);
        tracep->declQuad(c+51,"top LSU Mem_modle_Waddr", false,-1, 63,0);
        tracep->declQuad(c+190,"top LSU Mem_modle_Wdata", false,-1, 63,0);
        tracep->declBus(c+192,"top LSU Mem_modle_Wmask", false,-1, 7,0);
        tracep->declBit(c+193,"top LSU Mem_modle_Write_en", false,-1);
        tracep->declBit(c+194,"top LSU Mem_modle_Read_en", false,-1);
        tracep->declBit(c+38,"top LSU ms_valid", false,-1);
        tracep->declBit(c+36,"top LSU ms_rf_we", false,-1);
        tracep->declBus(c+41,"top LSU ms_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+195,"top LSU ms_res", false,-1, 63,0);
        tracep->declQuad(c+190,"top LSU store_data", false,-1, 63,0);
        tracep->declBit(c+193,"top LSU wen", false,-1);
        tracep->declBus(c+192,"top LSU wstrb", false,-1, 7,0);
        tracep->declBit(c+194,"top LSU ren", false,-1);
        tracep->declQuad(c+51,"top LSU Mem_modle Raddr", false,-1, 63,0);
        tracep->declQuad(c+51,"top LSU Mem_modle Waddr", false,-1, 63,0);
        tracep->declQuad(c+190,"top LSU Mem_modle Wdata", false,-1, 63,0);
        tracep->declBus(c+192,"top LSU Mem_modle Wmask", false,-1, 7,0);
        tracep->declBit(c+193,"top LSU Mem_modle Write_en", false,-1);
        tracep->declBit(c+194,"top LSU Mem_modle Read_en", false,-1);
        tracep->declQuad(c+188,"top LSU Mem_modle Rdata", false,-1, 63,0);
        tracep->declBit(c+197,"top WBU clock", false,-1);
        tracep->declBit(c+198,"top WBU reset", false,-1);
        tracep->declBit(c+38,"top WBU io_ms_to_ws_valid", false,-1);
        tracep->declQuad(c+53,"top WBU io_ms_final_res", false,-1, 63,0);
        tracep->declBit(c+36,"top WBU io_rf_we", false,-1);
        tracep->declBus(c+41,"top WBU io_rf_dst", false,-1, 4,0);
        tracep->declBit(c+7,"top WBU io_we", false,-1);
        tracep->declBus(c+8,"top WBU io_waddr", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU io_wdata", false,-1, 63,0);
        tracep->declBit(c+39,"top WBU io_ws_valid", false,-1);
        tracep->declBit(c+7,"top WBU io_ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU io_ws_rf_dst", false,-1, 4,0);
        tracep->declBit(c+39,"top WBU ws_valid", false,-1);
        tracep->declBit(c+7,"top WBU ws_rf_we", false,-1);
        tracep->declBus(c+8,"top WBU ws_rf_dst", false,-1, 4,0);
        tracep->declQuad(c+9,"top WBU ws_res", false,-1, 63,0);
        tracep->declBus(c+55,"top dpi flag", false,-1, 31,0);
        tracep->declBus(c+56,"top dpi ecall_flag", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp113;
    VlWide<4>/*127:0*/ __Vtemp114;
    VlWide<4>/*127:0*/ __Vtemp115;
    VlWide<4>/*127:0*/ __Vtemp116;
    VlWide<4>/*127:0*/ __Vtemp117;
    VlWide<4>/*127:0*/ __Vtemp118;
    VlWide<4>/*127:0*/ __Vtemp119;
    VlWide<3>/*95:0*/ __Vtemp122;
    VlWide<3>/*95:0*/ __Vtemp123;
    VlWide<3>/*95:0*/ __Vtemp125;
    VlWide<3>/*95:0*/ __Vtemp126;
    VlWide<3>/*95:0*/ __Vtemp127;
    VlWide<3>/*95:0*/ __Vtemp128;
    VlWide<4>/*127:0*/ __Vtemp129;
    VlWide<4>/*127:0*/ __Vtemp130;
    VlWide<4>/*127:0*/ __Vtemp151;
    VlWide<4>/*127:0*/ __Vtemp152;
    VlWide<4>/*127:0*/ __Vtemp153;
    VlWide<3>/*95:0*/ __Vtemp156;
    VlWide<3>/*95:0*/ __Vtemp157;
    VlWide<3>/*95:0*/ __Vtemp159;
    VlWide<3>/*95:0*/ __Vtemp160;
    VlWide<3>/*95:0*/ __Vtemp161;
    VlWide<3>/*95:0*/ __Vtemp162;
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
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
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
                                     ? vlSelf->top__DOT__IFU__DOT__fs_pc
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
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__EXU__DOT__es_valid));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__LSU__DOT__ms_valid));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__WBU__DOT__ws_valid));
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__EXU__DOT__es_rd),5);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__LSU__DOT__ms_rf_dst),5);
        tracep->fullCData(oldp+42,((0x1fU & (IData)(
                                                    ((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                                                      ? vlSelf->top__DOT__IFU__DOT__fs_pc
                                                      : vlSelf->top__DOT__Register_io_rdata1)))),5);
        tracep->fullCData(oldp+43,((0x1fU & (IData)(
                                                    ((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                                      ? vlSelf->top__DOT__IDU__DOT__imm
                                                      : vlSelf->top__DOT__Register_io_rdata2)))),5);
        VL_EXTEND_WQ(127,64, __Vtemp113, vlSelf->top__DOT__EXU__DOT__srl_res);
        VL_EXTEND_WQ(127,64, __Vtemp114, vlSelf->top__DOT__EXU__DOT__sra_res);
        VL_EXTEND_WQ(127,64, __Vtemp115, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
        VL_EXTEND_WQ(127,64, __Vtemp116, VL_MODDIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
        VL_EXTEND_WQ(127,64, __Vtemp117, (((QData)((IData)(
                                                           ((vlSelf->top__DOT__EXU__DOT__remuw_res 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__remuw_res))));
        VL_EXTEND_WQ(127,64, __Vtemp118, (((QData)((IData)(
                                                           ((vlSelf->top__DOT__EXU__DOT__remw_res 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__remw_res))));
        VL_EXTEND_WQ(127,64, __Vtemp119, (((QData)((IData)(
                                                           ((vlSelf->top__DOT__EXU__DOT__divuw_res 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__divuw_res))));
        VL_EXTENDS_WQ(65,64, __Vtemp122, vlSelf->top__DOT__EXU__DOT__src1_value);
        __Vtemp123[0U] = __Vtemp122[0U];
        __Vtemp123[1U] = __Vtemp122[1U];
        __Vtemp123[2U] = (1U & __Vtemp122[2U]);
        VL_EXTENDS_WQ(65,64, __Vtemp125, vlSelf->top__DOT__EXU__DOT__src2_value);
        __Vtemp126[0U] = __Vtemp125[0U];
        __Vtemp126[1U] = __Vtemp125[1U];
        __Vtemp126[2U] = (1U & __Vtemp125[2U]);
        VL_DIVS_WWW(65, __Vtemp127, __Vtemp123, __Vtemp126);
        __Vtemp128[0U] = __Vtemp127[0U];
        __Vtemp128[1U] = __Vtemp127[1U];
        __Vtemp128[2U] = (1U & __Vtemp127[2U]);
        VL_EXTEND_WW(127,65, __Vtemp129, __Vtemp128);
        VL_EXTEND_WQ(127,64, __Vtemp130, VL_DIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
        tracep->fullQData(oldp+44,((((QData)((IData)(
                                                     ((0x38U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp113[1U]
                                                       : 
                                                      ((0x39U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp114[1U]
                                                        : 
                                                       ((0x37U 
                                                         == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                         ? 
                                                        vlSelf->top__DOT__EXU__DOT__sll_res[1U]
                                                         : 
                                                        ((0x34U 
                                                          == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                          ? 
                                                         __Vtemp115[1U]
                                                          : 
                                                         ((0x33U 
                                                           == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                           ? 
                                                          __Vtemp116[1U]
                                                           : 
                                                          ((0x32U 
                                                            == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                            ? 
                                                           __Vtemp117[1U]
                                                            : 
                                                           ((0x14U 
                                                             == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                             ? 
                                                            __Vtemp118[1U]
                                                             : 
                                                            ((0x35U 
                                                              == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                              ? 
                                                             __Vtemp119[1U]
                                                              : 
                                                             ((0x31U 
                                                               == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                               ? 
                                                              __Vtemp129[1U]
                                                               : 
                                                              ((0x30U 
                                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                ? 
                                                               __Vtemp130[1U]
                                                                : 
                                                               vlSelf->top__DOT__EXU__DOT___alu_res_T_144[1U])))))))))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0x38U 
                                                                   == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                   ? 
                                                                  __Vtemp113[0U]
                                                                   : 
                                                                  ((0x39U 
                                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                    ? 
                                                                   __Vtemp114[0U]
                                                                    : 
                                                                   ((0x37U 
                                                                     == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                     ? 
                                                                    vlSelf->top__DOT__EXU__DOT__sll_res[0U]
                                                                     : 
                                                                    ((0x34U 
                                                                      == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                      ? 
                                                                     __Vtemp115[0U]
                                                                      : 
                                                                     ((0x33U 
                                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                       ? 
                                                                      __Vtemp116[0U]
                                                                       : 
                                                                      ((0x32U 
                                                                        == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                        ? 
                                                                       __Vtemp117[0U]
                                                                        : 
                                                                       ((0x14U 
                                                                         == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                         ? 
                                                                        __Vtemp118[0U]
                                                                         : 
                                                                        ((0x35U 
                                                                          == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                          ? 
                                                                         __Vtemp119[0U]
                                                                          : 
                                                                         ((0x31U 
                                                                           == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                           ? 
                                                                          __Vtemp129[0U]
                                                                           : 
                                                                          ((0x30U 
                                                                            == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                                            ? 
                                                                           __Vtemp130[0U]
                                                                            : 
                                                                           vlSelf->top__DOT__EXU__DOT___alu_res_T_144[0U])))))))))))))),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__EXU__DOT__store_data),64);
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__EXU__DOT__st_we));
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
        tracep->fullBit(oldp+50,(vlSelf->top__DOT__EXU__DOT__ld_we));
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__EXU_io_to_ms_maddr),64);
        tracep->fullQData(oldp+53,(((IData)(vlSelf->top__DOT__LSU__DOT__ren)
                                     ? vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata
                                     : vlSelf->top__DOT__LSU__DOT__ms_res)),64);
        tracep->fullIData(oldp+55,((2U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))),32);
        tracep->fullIData(oldp+56,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))),32);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__Register__DOT__Reg
                                    [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__Register__DOT__Reg
                                    [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__IFU__DOT__inst_read_Rdata),64);
        tracep->fullQData(oldp+127,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__IFU__DOT__fs_allowin));
        tracep->fullBit(oldp+130,(vlSelf->top__DOT__IDU__DOT__ds_valid));
        tracep->fullIData(oldp+131,(vlSelf->top__DOT__IDU__DOT__inst),32);
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__IDU__DOT__br_taken));
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
        tracep->fullIData(oldp+134,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__IDU__DOT__conflict));
        tracep->fullBit(oldp+137,((1U & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)))));
        tracep->fullBit(oldp+138,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
        tracep->fullSData(oldp+139,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+140,(((0x80000U & (vlSelf->top__DOT__IDU__DOT__inst 
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
        tracep->fullIData(oldp+141,((vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+142,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U)))),12);
        tracep->fullSData(oldp+143,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                     | ((0x400U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 8U)))))),12);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__IDU__DOT__imm),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__EXU__DOT__sub_res),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__EXU__DOT__sra_res),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__EXU__DOT__srl_res),64);
        tracep->fullWData(oldp+158,(vlSelf->top__DOT__EXU__DOT__sll_res),127);
        tracep->fullIData(oldp+162,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
        tracep->fullIData(oldp+163,(vlSelf->top__DOT__EXU__DOT__srlw_res),32);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__EXU__DOT__sllw_res),63);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__EXU__DOT__or_res),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__EXU__DOT__xor_res),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__EXU__DOT__and_res),64);
        VL_EXTEND_WQ(128,64, __Vtemp151, vlSelf->top__DOT__EXU__DOT__src1_value);
        VL_EXTEND_WQ(128,64, __Vtemp152, vlSelf->top__DOT__EXU__DOT__src2_value);
        VL_MUL_W(4, __Vtemp153, __Vtemp151, __Vtemp152);
        tracep->fullQData(oldp+172,((((QData)((IData)(
                                                      __Vtemp153[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp153[0U])))),64);
        tracep->fullIData(oldp+174,((IData)(vlSelf->top__DOT__EXU__DOT___mluw_res_T_2)),32);
        tracep->fullIData(oldp+175,((IData)(vlSelf->top__DOT__EXU__DOT___divw_res_T_4)),32);
        tracep->fullIData(oldp+176,(vlSelf->top__DOT__EXU__DOT__divuw_res),32);
        tracep->fullIData(oldp+177,(vlSelf->top__DOT__EXU__DOT__remw_res),32);
        tracep->fullIData(oldp+178,(vlSelf->top__DOT__EXU__DOT__remuw_res),32);
        VL_EXTENDS_WQ(65,64, __Vtemp156, vlSelf->top__DOT__EXU__DOT__src1_value);
        __Vtemp157[0U] = __Vtemp156[0U];
        __Vtemp157[1U] = __Vtemp156[1U];
        __Vtemp157[2U] = (1U & __Vtemp156[2U]);
        VL_EXTENDS_WQ(65,64, __Vtemp159, vlSelf->top__DOT__EXU__DOT__src2_value);
        __Vtemp160[0U] = __Vtemp159[0U];
        __Vtemp160[1U] = __Vtemp159[1U];
        __Vtemp160[2U] = (1U & __Vtemp159[2U]);
        VL_DIVS_WWW(65, __Vtemp161, __Vtemp157, __Vtemp160);
        __Vtemp162[0U] = __Vtemp161[0U];
        __Vtemp162[1U] = __Vtemp161[1U];
        __Vtemp162[2U] = (1U & __Vtemp161[2U]);
        tracep->fullWData(oldp+179,(__Vtemp162),65);
        tracep->fullQData(oldp+182,(VL_DIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+184,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+186,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__LSU__DOT__store_data),64);
        tracep->fullCData(oldp+192,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
        tracep->fullBit(oldp+193,(vlSelf->top__DOT__LSU__DOT__wen));
        tracep->fullBit(oldp+194,(vlSelf->top__DOT__LSU__DOT__ren));
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
        tracep->fullBit(oldp+197,(vlSelf->clock));
        tracep->fullBit(oldp+198,(vlSelf->reset));
        tracep->fullIData(oldp+199,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+200,(vlSelf->io_pc),64);
        tracep->fullBit(oldp+202,(vlSelf->io_step));
        tracep->fullBit(oldp+203,(1U));
        tracep->fullQData(oldp+204,(0ULL),64);
        tracep->fullCData(oldp+206,(0U),8);
        tracep->fullBit(oldp+207,(0U));
    }
}
