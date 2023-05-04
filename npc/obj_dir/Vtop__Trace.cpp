// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp183;
    VlWide<4>/*127:0*/ __Vtemp184;
    VlWide<4>/*127:0*/ __Vtemp185;
    VlWide<3>/*95:0*/ __Vtemp188;
    VlWide<3>/*95:0*/ __Vtemp189;
    VlWide<3>/*95:0*/ __Vtemp191;
    VlWide<3>/*95:0*/ __Vtemp192;
    VlWide<3>/*95:0*/ __Vtemp193;
    VlWide<3>/*95:0*/ __Vtemp194;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__pc_now),64);
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rvalid));
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__idu_step__DOT__axi_inst_ready));
            tracep->chgIData(oldp+4,((IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)),32);
            tracep->chgIData(oldp+5,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194),32);
            tracep->chgCData(oldp+6,((0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                       >> 0xfU)))),5);
            tracep->chgCData(oldp+7,((0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                       >> 0x14U)))),5);
            tracep->chgCData(oldp+8,((0x1fU & (IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                       >> 7U)))),5);
            tracep->chgQData(oldp+9,(vlSelf->top__DOT__idu_step_io_imm),64);
            tracep->chgBit(oldp+11,(((0x100073U != (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)) 
                                     & (IData)(vlSelf->top__DOT__idu_step__DOT___reg_write_T_37))));
            tracep->chgBit(oldp+12,(((0x1073U == (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                     | ((0x2073U == 
                                         (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                        | (0x3073U 
                                           == (0x707fU 
                                               & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))))));
            tracep->chgBit(oldp+13,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm));
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc));
            tracep->chgBit(oldp+15,((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))));
            tracep->chgBit(oldp+16,(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en));
            tracep->chgCData(oldp+17,(((0x3023U == 
                                        (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))
                                        ? 0xffU : (
                                                   (0x1023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))
                                                    ? 3U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))
                                                     ? 1U
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))
                                                      ? 0xfU
                                                      : 0U))))),8);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__exu_step_io_pc_next),64);
            tracep->chgQData(oldp+20,((((QData)((IData)(
                                                        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))),64);
            tracep->chgBit(oldp+22,(vlSelf->top__DOT___exu_step_io_inst_valid_T));
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__exu_step_io_mem_end));
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__exu_step_io_mem_flag));
            tracep->chgIData(oldp+25,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
            tracep->chgIData(oldp+26,((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
            tracep->chgBit(oldp+27,(vlSelf->top__DOT__npc_step));
            tracep->chgIData(oldp+28,((IData)(vlSelf->top__DOT__pc_now)),32);
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata),64);
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_bvalid));
            tracep->chgQData(oldp+32,((QData)((IData)(vlSelf->top__DOT__pc_now))),64);
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_wready));
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state),3);
            tracep->chgSData(oldp+37,((0xfffU & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 0x14U)))),12);
            tracep->chgIData(oldp+38,(((0x80000U & 
                                        ((IData)((vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                  >> 0x1fU)) 
                                         << 0x13U)) 
                                       | ((0x7f800U 
                                           & ((IData)(
                                                      (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                       >> 0xcU)) 
                                              << 0xbU)) 
                                          | ((0x400U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                          >> 0x14U)) 
                                                 << 0xaU)) 
                                             | (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                           >> 0x15U))))))),20);
            tracep->chgIData(oldp+39,((0xfffffU & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                           >> 0xcU)))),20);
            tracep->chgSData(oldp+40,(((0xfe0U & ((IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                       | (0x1fU & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                           >> 7U))))),12);
            tracep->chgSData(oldp+41,(((0x800U & ((IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                           >> 0x1fU)) 
                                                  << 0xbU)) 
                                       | ((0x400U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                     >> 7U)) 
                                            << 0xaU)) 
                                          | ((0x3f0U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                          >> 0x19U)) 
                                                 << 4U)) 
                                             | (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                           >> 8U))))))),12);
            tracep->chgIData(oldp+42,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188),32);
            tracep->chgBit(oldp+43,(((0x3003U == (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                     | ((0x2003U == 
                                         (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                        | ((0x6003U 
                                            == (0x707fU 
                                                & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                           | ((0x1003U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                              | ((0x5003U 
                                                  == 
                                                  (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                                 | ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                                    | (0x4003U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))))))))));
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [(0x1fU & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                          >> 0xfU)))]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [(0x1fU & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                          >> 0x14U)))]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [(0x1fU & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                          >> 7U)))]),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x11U]),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0U]),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [1U]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [2U]),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [3U]),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [4U]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [5U]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [6U]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [7U]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [8U]),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [9U]),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xaU]),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xbU]),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xcU]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xdU]),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xeU]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xfU]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x10U]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x12U]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x13U]),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x14U]),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x15U]),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x16U]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x17U]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x18U]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x19U]),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1aU]),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1bU]),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1cU]),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1dU]),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1eU]),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1fU]),64);
            tracep->chgQData(oldp+178,((((((0x100073U 
                                            != (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)) 
                                           & (IData)(vlSelf->top__DOT__idu_step__DOT___reg_write_T_37)) 
                                          & (0U != 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 7U))))) 
                                         & (IData)(vlSelf->top__DOT___exu_step_io_inst_valid_T))
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))
                                         : ((0U == 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 7U))))
                                             ? 0ULL
                                             : vlSelf->top__DOT__exu_step__DOT__Regfile
                                            [(0x1fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 7U)))]))),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[0]),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[1]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[2]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[3]),64);
            tracep->chgCData(oldp+188,(((0x342U == 
                                         (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                         ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))),2);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [((0x342U == 
                                          (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                          ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [1U]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [3U]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [0U]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [2U]),64);
            tracep->chgQData(oldp+199,(((IData)(vlSelf->top__DOT__exu_step__DOT___T_7)
                                         ? vlSelf->top__DOT__pc_now
                                         : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [1U])),64);
            tracep->chgQData(oldp+201,(((IData)(vlSelf->top__DOT__exu_step__DOT___T_7)
                                         ? vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x11U] : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [3U])),64);
            tracep->chgQData(oldp+203,(((((0x1073U 
                                           == (0x707fU 
                                               & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                          | ((0x2073U 
                                              == (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                             | (0x3073U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))))) 
                                         & (IData)(vlSelf->top__DOT___exu_step_io_inst_valid_T))
                                         ? ((0x47U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                & (~ 
                                                   vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                                   [
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                                     ? 3U
                                                     : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]))
                                             : ((0x46U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                 | vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                                 [(
                                                   (0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                                    ? 3U
                                                    : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])
                                                 : 
                                                ((0x3fU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? vlSelf->top__DOT__exu_step__DOT__src1_value
                                                  : 0ULL)))
                                         : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [((0x342U == 
                                           (0xfffU 
                                            & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                           ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])),64);
            tracep->chgIData(oldp+205,((IData)(vlSelf->top__DOT__exu_step__DOT__add_res)),32);
            tracep->chgBit(oldp+206,(vlSelf->top__DOT__exu_step__DOT__axi_arvalid));
            tracep->chgBit(oldp+207,(vlSelf->top__DOT__exu_step__DOT__axi_rready));
            tracep->chgBit(oldp+208,(vlSelf->top__DOT__exu_step__DOT__axi_awvalid));
            tracep->chgIData(oldp+209,((IData)(((0x27U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? (QData)((IData)(
                                                                   ((0U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                     ? 0ULL
                                                                     : 
                                                                    vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                    [
                                                                    (0x1fU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U)))])))
                                                 : 
                                                ((0x28U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U)))])))))
                                                  : 
                                                 ((0x26U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U)))])))))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                 >> 0x14U))))
                                                     ? 0ULL
                                                     : 
                                                    vlSelf->top__DOT__exu_step__DOT__Regfile
                                                    [
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                >> 0x14U)))])
                                                    : 0ULL)))))),32);
            tracep->chgBit(oldp+210,(vlSelf->top__DOT__exu_step__DOT__axi_bready));
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__Mem_modle_Rdata),64);
            tracep->chgBit(oldp+213,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_rvalid));
            tracep->chgBit(oldp+214,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_bvalid));
            tracep->chgSData(oldp+215,((0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm))),12);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__exu_step__DOT__src1_value),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__exu_step__DOT__src2_value),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__exu_step__DOT__sub_res),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__exu_step__DOT__sra_res),64);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__exu_step__DOT__srl_res),64);
            tracep->chgWData(oldp+228,(vlSelf->top__DOT__exu_step__DOT__sll_res),127);
            tracep->chgIData(oldp+232,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),32);
            tracep->chgIData(oldp+233,(vlSelf->top__DOT__exu_step__DOT__srlw_res),32);
            tracep->chgQData(oldp+234,(vlSelf->top__DOT__exu_step__DOT__sllw_res),63);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__exu_step__DOT__or_res),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__exu_step__DOT__xor_res),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__exu_step__DOT__and_res),64);
            VL_EXTEND_WQ(128,64, __Vtemp183, vlSelf->top__DOT__exu_step__DOT__src1_value);
            VL_EXTEND_WQ(128,64, __Vtemp184, vlSelf->top__DOT__exu_step__DOT__src2_value);
            VL_MUL_W(4, __Vtemp185, __Vtemp183, __Vtemp184);
            tracep->chgQData(oldp+242,((((QData)((IData)(
                                                         __Vtemp185[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp185[0U])))),64);
            tracep->chgIData(oldp+244,((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2)),32);
            tracep->chgIData(oldp+245,((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4)),32);
            tracep->chgIData(oldp+246,(vlSelf->top__DOT__exu_step__DOT__divuw_res),32);
            tracep->chgIData(oldp+247,(vlSelf->top__DOT__exu_step__DOT__remw_res),32);
            tracep->chgIData(oldp+248,(vlSelf->top__DOT__exu_step__DOT__remuw_res),32);
            VL_EXTENDS_WQ(65,64, __Vtemp188, vlSelf->top__DOT__exu_step__DOT__src1_value);
            __Vtemp189[0U] = __Vtemp188[0U];
            __Vtemp189[1U] = __Vtemp188[1U];
            __Vtemp189[2U] = (1U & __Vtemp188[2U]);
            VL_EXTENDS_WQ(65,64, __Vtemp191, vlSelf->top__DOT__exu_step__DOT__src2_value);
            __Vtemp192[0U] = __Vtemp191[0U];
            __Vtemp192[1U] = __Vtemp191[1U];
            __Vtemp192[2U] = (1U & __Vtemp191[2U]);
            VL_DIVS_WWW(65, __Vtemp193, __Vtemp189, __Vtemp192);
            __Vtemp194[0U] = __Vtemp193[0U];
            __Vtemp194[1U] = __Vtemp193[1U];
            __Vtemp194[2U] = (1U & __Vtemp193[2U]);
            tracep->chgWData(oldp+249,(__Vtemp194),65);
            tracep->chgQData(oldp+252,(VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+254,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+256,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+258,(((0U == (0x1fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                           >> 7U))))
                                         ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [(0x1fU & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                           >> 7U)))])),64);
            tracep->chgQData(oldp+260,(((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                            & (~ vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                               [((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                                  ? 3U
                                                  : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]))
                                         : ((0x46U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                | vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                                [((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                                   ? 3U
                                                   : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])
                                             : ((0x3fU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? vlSelf->top__DOT__exu_step__DOT__src1_value
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+262,(((0x27U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? (QData)((IData)(
                                                           ((0U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                         >> 0x14U))))
                                                             ? 0ULL
                                                             : 
                                                            vlSelf->top__DOT__exu_step__DOT__Regfile
                                                            [
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                        >> 0x14U)))])))
                                         : ((0x28U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          ((0U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                            ? 0ULL
                                                                            : 
                                                                           vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                           [
                                                                           (0x1fU 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U)))])))))
                                             : ((0x26U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(
                                                                              ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                                ? 0ULL
                                                                                : 
                                                                               vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                               [
                                                                               (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U)))])))))
                                                 : 
                                                ((7U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                               >> 0x14U))))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__exu_step__DOT__Regfile
                                                  [
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                              >> 0x14U)))])
                                                  : 0ULL))))),64);
            tracep->chgQData(oldp+264,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0]),64);
            tracep->chgQData(oldp+266,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1]),64);
            tracep->chgQData(oldp+268,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2]),64);
            tracep->chgQData(oldp+270,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3]),64);
            tracep->chgQData(oldp+272,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4]),64);
            tracep->chgQData(oldp+274,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5]),64);
            tracep->chgQData(oldp+276,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6]),64);
            tracep->chgQData(oldp+278,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7]),64);
            tracep->chgQData(oldp+280,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8]),64);
            tracep->chgQData(oldp+282,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9]),64);
            tracep->chgQData(oldp+284,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[10]),64);
            tracep->chgQData(oldp+286,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[11]),64);
            tracep->chgQData(oldp+288,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[12]),64);
            tracep->chgQData(oldp+290,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[13]),64);
            tracep->chgQData(oldp+292,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[14]),64);
            tracep->chgQData(oldp+294,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[15]),64);
            tracep->chgQData(oldp+296,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[16]),64);
            tracep->chgQData(oldp+298,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[17]),64);
            tracep->chgQData(oldp+300,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[18]),64);
            tracep->chgQData(oldp+302,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[19]),64);
            tracep->chgQData(oldp+304,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[20]),64);
            tracep->chgQData(oldp+306,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[21]),64);
            tracep->chgQData(oldp+308,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[22]),64);
            tracep->chgQData(oldp+310,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[23]),64);
            tracep->chgQData(oldp+312,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[24]),64);
            tracep->chgQData(oldp+314,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[25]),64);
            tracep->chgQData(oldp+316,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[26]),64);
            tracep->chgQData(oldp+318,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[27]),64);
            tracep->chgQData(oldp+320,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[28]),64);
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[29]),64);
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[30]),64);
            tracep->chgQData(oldp+326,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[31]),64);
            tracep->chgQData(oldp+328,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[0]),64);
            tracep->chgQData(oldp+330,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[1]),64);
            tracep->chgQData(oldp+332,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[2]),64);
            tracep->chgQData(oldp+334,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[3]),64);
            tracep->chgQData(oldp+336,((QData)((IData)(vlSelf->top__DOT__exu_step__DOT__add_res))),64);
            tracep->chgQData(oldp+338,((QData)((IData)(
                                                       ((0x27U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? (QData)((IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                             ? 0ULL
                                                                             : 
                                                                            vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                            [
                                                                            (0x1fU 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U)))])))
                                                         : 
                                                        ((0x28U 
                                                          == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                          ? (QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U)))])))))
                                                          : 
                                                         ((0x26U 
                                                           == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                           ? (QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U)))])))))
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                            ? 
                                                           ((0U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                         >> 0x14U))))
                                                             ? 0ULL
                                                             : 
                                                            vlSelf->top__DOT__exu_step__DOT__Regfile
                                                            [
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                        >> 0x14U)))])
                                                            : 0ULL))))))),64);
            tracep->chgBit(oldp+340,(((IData)(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_wready) 
                                      & (IData)(vlSelf->top__DOT__exu_step__DOT__axi_awvalid))));
            tracep->chgBit(oldp+341,(((IData)(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_arready) 
                                      & (IData)(vlSelf->top__DOT__exu_step__DOT__axi_arvalid))));
            tracep->chgBit(oldp+342,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_wready));
            tracep->chgBit(oldp+343,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_arready));
            tracep->chgCData(oldp+344,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__state),3);
        }
        tracep->chgBit(oldp+345,(vlSelf->clock));
        tracep->chgBit(oldp+346,(vlSelf->reset));
        tracep->chgIData(oldp+347,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+348,(vlSelf->io_pc),64);
        tracep->chgQData(oldp+350,(vlSelf->io_pc_next),64);
        tracep->chgQData(oldp+352,(vlSelf->io_outval),64);
        tracep->chgBit(oldp+354,(vlSelf->io_step));
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
