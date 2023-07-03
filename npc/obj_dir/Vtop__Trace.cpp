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
    VlWide<4>/*127:0*/ __Vtemp3956;
    VlWide<4>/*127:0*/ __Vtemp3957;
    VlWide<4>/*127:0*/ __Vtemp3958;
    VlWide<4>/*127:0*/ __Vtemp3959;
    VlWide<4>/*127:0*/ __Vtemp3960;
    VlWide<4>/*127:0*/ __Vtemp3961;
    VlWide<3>/*95:0*/ __Vtemp3964;
    VlWide<3>/*95:0*/ __Vtemp3965;
    VlWide<3>/*95:0*/ __Vtemp3967;
    VlWide<3>/*95:0*/ __Vtemp3968;
    VlWide<3>/*95:0*/ __Vtemp3969;
    VlWide<3>/*95:0*/ __Vtemp3970;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__IDU_io_raddr2),5);
            tracep->chgQData(oldp+2,(((0U == (0x1fU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 0xfU)))
                                       ? 0ULL : vlSelf->top__DOT__Register__DOT__Reg
                                      [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 0xfU))])),64);
            tracep->chgQData(oldp+4,(((0U == (IData)(vlSelf->top__DOT__IDU_io_raddr2))
                                       ? 0ULL : vlSelf->top__DOT__Register__DOT__Reg
                                      [vlSelf->top__DOT__IDU_io_raddr2])),64);
            tracep->chgBit(oldp+6,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                    & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid))));
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__WBU__DOT__ws_rf_dst),5);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__WBU__DOT__ws_res),64);
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__IDU_io_ds_allowin));
            tracep->chgBit(oldp+11,(vlSelf->top__DOT__IDU_io_ds_ready_go));
            tracep->chgBit(oldp+12,(vlSelf->top__DOT__IDU__DOT__ds_valid));
            tracep->chgBit(oldp+13,(vlSelf->top__DOT__IDU_io_br_taken));
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__IDU_io_br_target),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__IFU__DOT__fs_pc),64);
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__IFU__DOT__fs_valid));
            tracep->chgIData(oldp+19,(vlSelf->top__DOT__IFU__DOT__fs_inst),32);
            tracep->chgBit(oldp+20,(((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                     & ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                        & (0U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))))));
            tracep->chgQData(oldp+21,((((QData)((IData)(
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
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid));
            tracep->chgIData(oldp+24,((IData)(((IData)(vlSelf->top__DOT__IDU_io_br_taken)
                                                ? ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                    ? vlSelf->top__DOT__IDU_io_br_target
                                                    : vlSelf->top__DOT__IFU__DOT__br_target)
                                                : (4ULL 
                                                   + vlSelf->top__DOT__IFU__DOT__fs_pc)))),32);
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__IFU_io_axi_out_rready));
            tracep->chgBit(oldp+26,((0x100fU == vlSelf->top__DOT__IDU__DOT__inst)));
            tracep->chgBit(oldp+27,(((0x100fU == vlSelf->top__DOT__IDU__DOT__inst) 
                                     & (~ (IData)(vlSelf->top__DOT__IFU__DOT__cache_init)))));
            tracep->chgBit(oldp+28,((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))));
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__IDU_io_ds_to_es_valid));
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__EXU__DOT__es_allowin));
            tracep->chgQData(oldp+31,(vlSelf->top__DOT__IDU__DOT__ds_pc),64);
            tracep->chgIData(oldp+33,(vlSelf->top__DOT__IDU__DOT___ALUop_T_176),32);
            tracep->chgQData(oldp+34,(((1U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                        ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                                        : vlSelf->top__DOT__IDU__DOT__src1)),64);
            tracep->chgQData(oldp+36,(((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                        ? vlSelf->top__DOT__IDU__DOT__imm
                                        : vlSelf->top__DOT__IDU__DOT__rdata2)),64);
            tracep->chgCData(oldp+38,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 7U))),5);
            tracep->chgQData(oldp+39,(((0x3023U == 
                                        (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
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
            tracep->chgBit(oldp+41,(((0x100073U != vlSelf->top__DOT__IDU__DOT__inst) 
                                     & ((0x3023U != 
                                         (0x707fU & vlSelf->top__DOT__IDU__DOT__inst)) 
                                        & ((0x1023U 
                                            != (0x707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst)) 
                                           & ((0x23U 
                                               != (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                              & ((0x2023U 
                                                  != 
                                                  (0x707fU 
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
            tracep->chgBit(oldp+42,((0x44U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))));
            tracep->chgBit(oldp+43,(((0x3003U == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst)) 
                                     | ((0x2003U == 
                                         (0x707fU & vlSelf->top__DOT__IDU__DOT__inst)) 
                                        | ((0x6003U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst)) 
                                           | ((0x1003U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                              | ((0x5003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                 | ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                    | (0x4003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))))))))));
            tracep->chgCData(oldp+44,(((0x3023U == 
                                        (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
                                        ? 0xffU : (
                                                   (0x1023U 
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
            tracep->chgCData(oldp+45,(((0x2003U == 
                                        (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
                                        ? 1U : ((0x3003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 2U
                                                 : 
                                                ((0x4003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 3U
                                                  : 
                                                 ((0x6003U 
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
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__EXU_io_es_ld));
            tracep->chgQData(oldp+47,((((QData)((IData)(
                                                        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__LSU_io_ms_fwd_res),64);
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__EXU__DOT__es_valid));
            tracep->chgBit(oldp+52,(vlSelf->top__DOT__LSU_io_ms_to_ws_valid));
            tracep->chgBit(oldp+53,(vlSelf->top__DOT__EXU__DOT__es_rf_we));
            tracep->chgBit(oldp+54,(vlSelf->top__DOT__LSU_io_ms_rf_we));
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__LSU__DOT__ms_valid));
            tracep->chgBit(oldp+57,(vlSelf->top__DOT__WBU__DOT__ws_valid));
            tracep->chgCData(oldp+58,(vlSelf->top__DOT__EXU__DOT__es_rd),5);
            tracep->chgCData(oldp+59,(vlSelf->top__DOT__LSU__DOT__ms_rf_dst),5);
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__LSU__DOT__ms_allowin));
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__EXU__DOT__store_data),64);
            tracep->chgBit(oldp+65,(vlSelf->top__DOT__EXU__DOT__st_we));
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
            tracep->chgBit(oldp+67,(vlSelf->top__DOT__EXU__DOT__ld_we));
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__EXU__DOT__load_type),3);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__LSU__DOT__ms_pc),64);
            tracep->chgQData(oldp+71,(((0U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                        ? vlSelf->top__DOT__LSU__DOT__rdata
                                        : vlSelf->top__DOT__LSU__DOT__ms_res)),64);
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
            tracep->chgQData(oldp+74,((((QData)((IData)(
                                                        vlSelf->top__DOT__d_cache__DOT___GEN_2408[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U])))),64);
            tracep->chgBit(oldp+76,(((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2253)
                                      : ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                         & ((3U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                            & ((~ (
                                                   (4U 
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
            tracep->chgBit(oldp+77,(((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                     & ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2253)
                                         : ((3U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                            & (((4U 
                                                 == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                | (8U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))
                                                ? (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                                : (
                                                   (6U 
                                                    != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                   & ((7U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                        & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                       & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid))))))))));
            tracep->chgIData(oldp+78,((IData)(vlSelf->top__DOT__LSU__DOT__maddr)),32);
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__LSU_io_axi_out_arvalid));
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__LSU_io_axi_out_awvalid));
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__LSU__DOT__store_data),64);
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
            tracep->chgBit(oldp+84,(vlSelf->top__DOT__LSU__DOT__wen));
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
            tracep->chgIData(oldp+87,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_2932)),32);
            tracep->chgCData(oldp+88,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid),8);
            tracep->chgBit(oldp+89,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
            tracep->chgBit(oldp+90,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
            tracep->chgBit(oldp+93,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
            tracep->chgBit(oldp+94,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
            tracep->chgIData(oldp+95,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2393)),32);
            tracep->chgCData(oldp+96,(vlSelf->top__DOT__d_cache_io_to_axi_arlen),8);
            tracep->chgBit(oldp+97,(vlSelf->top__DOT__d_cache_io_to_axi_arvalid));
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__d_cache_io_to_axi_rready));
            tracep->chgIData(oldp+99,(vlSelf->top__DOT__d_cache_io_to_axi_awaddr),32);
            tracep->chgCData(oldp+100,(vlSelf->top__DOT__d_cache_io_to_axi_awlen),8);
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__d_cache_io_to_axi_awvalid));
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__d_cache_io_to_axi_wdata),64);
            tracep->chgCData(oldp+104,(vlSelf->top__DOT__d_cache_io_to_axi_wstrb),8);
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__d_cache_io_to_axi_wvalid));
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__d_cache_io_to_axi_bready));
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast));
            tracep->chgBit(oldp+110,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
            tracep->chgBit(oldp+111,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                       ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                           ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                           : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                              & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))
                                       : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                          & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                                 & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))))));
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__axi_io_axi_out_rlast));
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__axi__DOT__axi_wready));
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
            tracep->chgIData(oldp+119,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2393)
                                             : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2393)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_2932)
                                                  : 0U)))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_2932)
                                             : ((2U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2393)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2393)
                                                  : 0U))))),32);
            tracep->chgCData(oldp+120,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                             ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                             : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                 ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  : 0U)))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? (IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                             : ((2U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                                  : 0U))))),8);
            tracep->chgBit(oldp+121,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
            tracep->chgIData(oldp+123,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                             ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                             : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                 ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                 : 0U))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? 0U : 
                                            ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                  : 0U))))),32);
            tracep->chgCData(oldp+124,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                             ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                             : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                 ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                                 : 0U))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? 0U : 
                                            ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                                  : 0U))))),8);
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
            tracep->chgQData(oldp+126,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                             ? vlSelf->top__DOT__d_cache_io_to_axi_wdata
                                             : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                 ? vlSelf->top__DOT__d_cache_io_to_axi_wdata
                                                 : 0ULL))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? 0ULL
                                             : ((2U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 ? vlSelf->top__DOT__d_cache_io_to_axi_wdata
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? vlSelf->top__DOT__d_cache_io_to_axi_wdata
                                                  : 0ULL))))),64);
            tracep->chgCData(oldp+128,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                             ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                             : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                 ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                 : 0U))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? 0U : 
                                            ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                  : 0U))))),8);
            tracep->chgBit(oldp+129,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
            tracep->chgBit(oldp+130,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
            tracep->chgIData(oldp+131,((2U == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
            tracep->chgIData(oldp+132,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
            tracep->chgQData(oldp+133,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)
                                         ? vlSelf->top__DOT__WBU__DOT__ws_pc
                                         : ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)
                                             ? vlSelf->top__DOT__LSU__DOT__ms_pc
                                             : ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid)
                                                 ? vlSelf->top__DOT__EXU__DOT__es_pc
                                                 : 
                                                ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                  ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                  : vlSelf->top__DOT__IFU__DOT__fs_pc))))),64);
            tracep->chgBit(oldp+135,(vlSelf->top__DOT__diff_step));
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__Register__DOT__Reg
                                       [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0xfU))]),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__Register__DOT__Reg
                                       [vlSelf->top__DOT__IDU_io_raddr2]),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0U]),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__Register__DOT__Reg
                                       [1U]),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__Register__DOT__Reg
                                       [2U]),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__Register__DOT__Reg
                                       [3U]),64);
            tracep->chgQData(oldp+212,(vlSelf->top__DOT__Register__DOT__Reg
                                       [4U]),64);
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__Register__DOT__Reg
                                       [5U]),64);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__Register__DOT__Reg
                                       [6U]),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__Register__DOT__Reg
                                       [7U]),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__Register__DOT__Reg
                                       [8U]),64);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__Register__DOT__Reg
                                       [9U]),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xaU]),64);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xbU]),64);
            tracep->chgQData(oldp+228,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xcU]),64);
            tracep->chgQData(oldp+230,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xdU]),64);
            tracep->chgQData(oldp+232,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xeU]),64);
            tracep->chgQData(oldp+234,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xfU]),64);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x10U]),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x11U]),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x12U]),64);
            tracep->chgQData(oldp+242,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x13U]),64);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x14U]),64);
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x15U]),64);
            tracep->chgQData(oldp+248,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x16U]),64);
            tracep->chgQData(oldp+250,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x17U]),64);
            tracep->chgQData(oldp+252,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x18U]),64);
            tracep->chgQData(oldp+254,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x19U]),64);
            tracep->chgQData(oldp+256,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1aU]),64);
            tracep->chgQData(oldp+258,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1bU]),64);
            tracep->chgQData(oldp+260,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1cU]),64);
            tracep->chgQData(oldp+262,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1dU]),64);
            tracep->chgQData(oldp+264,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1eU]),64);
            tracep->chgQData(oldp+266,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1fU]),64);
            tracep->chgBit(oldp+268,((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                       & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
                                      & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))));
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
            tracep->chgQData(oldp+271,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
            tracep->chgQData(oldp+273,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
            tracep->chgQData(oldp+275,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
            tracep->chgQData(oldp+277,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
            tracep->chgQData(oldp+279,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
            tracep->chgQData(oldp+285,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
            tracep->chgQData(oldp+287,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
            tracep->chgQData(oldp+295,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
            tracep->chgQData(oldp+297,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
            tracep->chgQData(oldp+305,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
            tracep->chgQData(oldp+307,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
            tracep->chgQData(oldp+309,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
            tracep->chgQData(oldp+311,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
            tracep->chgQData(oldp+313,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
            tracep->chgQData(oldp+315,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
            tracep->chgQData(oldp+317,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
            tracep->chgQData(oldp+319,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
            tracep->chgQData(oldp+321,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
            tracep->chgQData(oldp+323,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
            tracep->chgQData(oldp+325,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
            tracep->chgQData(oldp+327,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
            tracep->chgQData(oldp+329,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
            tracep->chgQData(oldp+331,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
            tracep->chgQData(oldp+333,(vlSelf->top__DOT__IFU__DOT__br_target),64);
            tracep->chgQData(oldp+335,(vlSelf->top__DOT__IFU__DOT__fs_pc_next),64);
            tracep->chgBit(oldp+337,(vlSelf->top__DOT__IFU__DOT__cache_init));
            tracep->chgQData(oldp+338,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
            tracep->chgQData(oldp+340,(((IData)(vlSelf->top__DOT__IDU_io_br_taken)
                                         ? ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                             ? vlSelf->top__DOT__IDU_io_br_target
                                             : vlSelf->top__DOT__IFU__DOT__br_target)
                                         : (4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc))),64);
            tracep->chgBit(oldp+342,(((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                      & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
            tracep->chgBit(oldp+343,((((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                       >> 1U) & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
            tracep->chgCData(oldp+344,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                         ? 1U : ((1U 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                                  ? (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)
                                                  : 0U))),2);
            tracep->chgQData(oldp+345,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                         ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                         : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                             ? ((0x1073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? vlSelf->top__DOT__IDU__DOT__rdata1
                                                 : 
                                                ((0x2073U 
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
            tracep->chgQData(oldp+347,(((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))
                                         : vlSelf->top__DOT__IDU__DOT___rdata2_T_1)),64);
            tracep->chgCData(oldp+349,(((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                         ? 0U : ((0x3eU 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))
                                                  ? 1U
                                                  : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))),2);
            tracep->chgQData(oldp+350,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data),64);
            tracep->chgIData(oldp+352,(vlSelf->top__DOT__IDU__DOT__inst),32);
            tracep->chgBit(oldp+353,(vlSelf->top__DOT__IDU__DOT__br_taken_cancel));
            tracep->chgBit(oldp+354,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
            tracep->chgIData(oldp+355,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
            tracep->chgCData(oldp+356,(vlSelf->top__DOT__IDU__DOT__csr_write),2);
            tracep->chgBit(oldp+357,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1));
            tracep->chgBit(oldp+358,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1));
            tracep->chgBit(oldp+359,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1));
            tracep->chgBit(oldp+360,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
            tracep->chgCData(oldp+361,(vlSelf->top__DOT__IDU__DOT__rs2),5);
            tracep->chgBit(oldp+362,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2));
            tracep->chgBit(oldp+363,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2));
            tracep->chgBit(oldp+364,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2));
            tracep->chgBit(oldp+365,(vlSelf->top__DOT__IDU__DOT__ds_ready_go));
            tracep->chgBit(oldp+366,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
            tracep->chgQData(oldp+367,(vlSelf->top__DOT__IDU__DOT__rdata1),64);
            tracep->chgQData(oldp+369,(vlSelf->top__DOT__IDU__DOT__rdata2),64);
            tracep->chgBit(oldp+371,(vlSelf->top__DOT__IDU__DOT__br_taken));
            tracep->chgSData(oldp+372,((vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U)),12);
            tracep->chgIData(oldp+373,(((0x80000U & 
                                         (vlSelf->top__DOT__IDU__DOT__inst 
                                          >> 0xcU)) 
                                        | ((0x7f800U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 1U)) 
                                           | ((0x400U 
                                               & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0xaU)) 
                                              | (0x3ffU 
                                                 & (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0x15U)))))),20);
            tracep->chgIData(oldp+374,((vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+375,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 7U)))),12);
            tracep->chgSData(oldp+376,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   >> 0x14U)) 
                                        | ((0x400U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               << 3U)) 
                                           | ((0x3f0U 
                                               & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0x15U)) 
                                              | (0xfU 
                                                 & (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 8U)))))),12);
            tracep->chgQData(oldp+377,(vlSelf->top__DOT__IDU__DOT__imm),64);
            tracep->chgCData(oldp+379,(vlSelf->top__DOT__IDU__DOT__csr_index),2);
            tracep->chgQData(oldp+380,(((0x1073U == 
                                         (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
                                         ? vlSelf->top__DOT__IDU__DOT__rdata1
                                         : ((0x2073U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? (vlSelf->top__DOT__IDU__DOT__rdata1 
                                                | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                             : ((0x3073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 
                                                (vlSelf->top__DOT__IDU__DOT__rdata1 
                                                 & (~ vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data))
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+382,(vlSelf->top__DOT__IDU__DOT__src1),64);
            tracep->chgQData(oldp+384,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[0]),64);
            tracep->chgQData(oldp+386,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[1]),64);
            tracep->chgQData(oldp+388,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[2]),64);
            tracep->chgQData(oldp+390,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[3]),64);
            tracep->chgQData(oldp+392,(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value),64);
            tracep->chgQData(oldp+394,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
            tracep->chgIData(oldp+396,(vlSelf->top__DOT__EXU__DOT__ALUop),32);
            tracep->chgQData(oldp+397,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
            tracep->chgQData(oldp+399,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res),64);
            tracep->chgQData(oldp+401,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res),64);
            tracep->chgQData(oldp+403,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res),64);
            tracep->chgQData(oldp+405,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),64);
            VL_EXTEND_WQ(127,64, __Vtemp3956, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
            VL_SHIFTL_WWI(127,127,6, __Vtemp3957, __Vtemp3956, 
                          (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
            __Vtemp3958[0U] = __Vtemp3957[0U];
            __Vtemp3958[1U] = __Vtemp3957[1U];
            __Vtemp3958[2U] = __Vtemp3957[2U];
            __Vtemp3958[3U] = (0x7fffffffU & __Vtemp3957[3U]);
            tracep->chgWData(oldp+407,(__Vtemp3958),127);
            tracep->chgIData(oldp+411,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
            tracep->chgIData(oldp+412,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res),32);
            tracep->chgQData(oldp+413,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res),63);
            tracep->chgQData(oldp+415,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        | vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+417,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        ^ vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+419,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        & vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            VL_EXTEND_WQ(128,64, __Vtemp3959, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
            VL_EXTEND_WQ(128,64, __Vtemp3960, vlSelf->top__DOT__EXU__DOT__src2_value);
            VL_MUL_W(4, __Vtemp3961, __Vtemp3959, __Vtemp3960);
            tracep->chgQData(oldp+421,((((QData)((IData)(
                                                         __Vtemp3961[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp3961[0U])))),64);
            tracep->chgIData(oldp+423,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT___mluw_res_T_2)),32);
            tracep->chgIData(oldp+424,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT___divw_res_T_4)),32);
            tracep->chgIData(oldp+425,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__divuw_res),32);
            tracep->chgIData(oldp+426,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__remw_res),32);
            tracep->chgIData(oldp+427,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__remuw_res),32);
            VL_EXTENDS_WQ(65,64, __Vtemp3964, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
            __Vtemp3965[0U] = __Vtemp3964[0U];
            __Vtemp3965[1U] = __Vtemp3964[1U];
            __Vtemp3965[2U] = (1U & __Vtemp3964[2U]);
            VL_EXTENDS_WQ(65,64, __Vtemp3967, vlSelf->top__DOT__EXU__DOT__src2_value);
            __Vtemp3968[0U] = __Vtemp3967[0U];
            __Vtemp3968[1U] = __Vtemp3967[1U];
            __Vtemp3968[2U] = (1U & __Vtemp3967[2U]);
            VL_DIVS_WWW(65, __Vtemp3969, __Vtemp3965, __Vtemp3968);
            __Vtemp3970[0U] = __Vtemp3969[0U];
            __Vtemp3970[1U] = __Vtemp3969[1U];
            __Vtemp3970[2U] = (1U & __Vtemp3969[2U]);
            tracep->chgWData(oldp+428,(__Vtemp3970),65);
            tracep->chgQData(oldp+431,(VL_DIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+433,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+435,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgWData(oldp+437,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res),127);
            tracep->chgQData(oldp+441,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
            tracep->chgBit(oldp+443,(vlSelf->top__DOT__LSU__DOT__ren));
            tracep->chgQData(oldp+444,(vlSelf->top__DOT__LSU__DOT__maddr),64);
            tracep->chgCData(oldp+446,(vlSelf->top__DOT__LSU__DOT__load_type),3);
            tracep->chgBit(oldp+447,(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
            tracep->chgQData(oldp+448,(vlSelf->top__DOT__LSU__DOT__rdata),64);
            tracep->chgCData(oldp+450,(vlSelf->top__DOT__arbiter__DOT__state),2);
            tracep->chgWData(oldp+451,(vlSelf->top__DOT__i_cache__DOT__ram_0_0),128);
            tracep->chgWData(oldp+455,(vlSelf->top__DOT__i_cache__DOT__ram_0_1),128);
            tracep->chgWData(oldp+459,(vlSelf->top__DOT__i_cache__DOT__ram_0_2),128);
            tracep->chgWData(oldp+463,(vlSelf->top__DOT__i_cache__DOT__ram_0_3),128);
            tracep->chgWData(oldp+467,(vlSelf->top__DOT__i_cache__DOT__ram_0_4),128);
            tracep->chgWData(oldp+471,(vlSelf->top__DOT__i_cache__DOT__ram_0_5),128);
            tracep->chgWData(oldp+475,(vlSelf->top__DOT__i_cache__DOT__ram_0_6),128);
            tracep->chgWData(oldp+479,(vlSelf->top__DOT__i_cache__DOT__ram_0_7),128);
            tracep->chgWData(oldp+483,(vlSelf->top__DOT__i_cache__DOT__ram_0_8),128);
            tracep->chgWData(oldp+487,(vlSelf->top__DOT__i_cache__DOT__ram_0_9),128);
            tracep->chgWData(oldp+491,(vlSelf->top__DOT__i_cache__DOT__ram_0_10),128);
            tracep->chgWData(oldp+495,(vlSelf->top__DOT__i_cache__DOT__ram_0_11),128);
            tracep->chgWData(oldp+499,(vlSelf->top__DOT__i_cache__DOT__ram_0_12),128);
            tracep->chgWData(oldp+503,(vlSelf->top__DOT__i_cache__DOT__ram_0_13),128);
            tracep->chgWData(oldp+507,(vlSelf->top__DOT__i_cache__DOT__ram_0_14),128);
            tracep->chgWData(oldp+511,(vlSelf->top__DOT__i_cache__DOT__ram_0_15),128);
            tracep->chgWData(oldp+515,(vlSelf->top__DOT__i_cache__DOT__ram_1_0),128);
            tracep->chgWData(oldp+519,(vlSelf->top__DOT__i_cache__DOT__ram_1_1),128);
            tracep->chgWData(oldp+523,(vlSelf->top__DOT__i_cache__DOT__ram_1_2),128);
            tracep->chgWData(oldp+527,(vlSelf->top__DOT__i_cache__DOT__ram_1_3),128);
            tracep->chgWData(oldp+531,(vlSelf->top__DOT__i_cache__DOT__ram_1_4),128);
            tracep->chgWData(oldp+535,(vlSelf->top__DOT__i_cache__DOT__ram_1_5),128);
            tracep->chgWData(oldp+539,(vlSelf->top__DOT__i_cache__DOT__ram_1_6),128);
            tracep->chgWData(oldp+543,(vlSelf->top__DOT__i_cache__DOT__ram_1_7),128);
            tracep->chgWData(oldp+547,(vlSelf->top__DOT__i_cache__DOT__ram_1_8),128);
            tracep->chgWData(oldp+551,(vlSelf->top__DOT__i_cache__DOT__ram_1_9),128);
            tracep->chgWData(oldp+555,(vlSelf->top__DOT__i_cache__DOT__ram_1_10),128);
            tracep->chgWData(oldp+559,(vlSelf->top__DOT__i_cache__DOT__ram_1_11),128);
            tracep->chgWData(oldp+563,(vlSelf->top__DOT__i_cache__DOT__ram_1_12),128);
            tracep->chgWData(oldp+567,(vlSelf->top__DOT__i_cache__DOT__ram_1_13),128);
            tracep->chgWData(oldp+571,(vlSelf->top__DOT__i_cache__DOT__ram_1_14),128);
            tracep->chgWData(oldp+575,(vlSelf->top__DOT__i_cache__DOT__ram_1_15),128);
            tracep->chgWData(oldp+579,(vlSelf->top__DOT__i_cache__DOT__ram_2_0),128);
            tracep->chgWData(oldp+583,(vlSelf->top__DOT__i_cache__DOT__ram_2_1),128);
            tracep->chgWData(oldp+587,(vlSelf->top__DOT__i_cache__DOT__ram_2_2),128);
            tracep->chgWData(oldp+591,(vlSelf->top__DOT__i_cache__DOT__ram_2_3),128);
            tracep->chgWData(oldp+595,(vlSelf->top__DOT__i_cache__DOT__ram_2_4),128);
            tracep->chgWData(oldp+599,(vlSelf->top__DOT__i_cache__DOT__ram_2_5),128);
            tracep->chgWData(oldp+603,(vlSelf->top__DOT__i_cache__DOT__ram_2_6),128);
            tracep->chgWData(oldp+607,(vlSelf->top__DOT__i_cache__DOT__ram_2_7),128);
            tracep->chgWData(oldp+611,(vlSelf->top__DOT__i_cache__DOT__ram_2_8),128);
            tracep->chgWData(oldp+615,(vlSelf->top__DOT__i_cache__DOT__ram_2_9),128);
            tracep->chgWData(oldp+619,(vlSelf->top__DOT__i_cache__DOT__ram_2_10),128);
            tracep->chgWData(oldp+623,(vlSelf->top__DOT__i_cache__DOT__ram_2_11),128);
            tracep->chgWData(oldp+627,(vlSelf->top__DOT__i_cache__DOT__ram_2_12),128);
            tracep->chgWData(oldp+631,(vlSelf->top__DOT__i_cache__DOT__ram_2_13),128);
            tracep->chgWData(oldp+635,(vlSelf->top__DOT__i_cache__DOT__ram_2_14),128);
            tracep->chgWData(oldp+639,(vlSelf->top__DOT__i_cache__DOT__ram_2_15),128);
            tracep->chgWData(oldp+643,(vlSelf->top__DOT__i_cache__DOT__ram_3_0),128);
            tracep->chgWData(oldp+647,(vlSelf->top__DOT__i_cache__DOT__ram_3_1),128);
            tracep->chgWData(oldp+651,(vlSelf->top__DOT__i_cache__DOT__ram_3_2),128);
            tracep->chgWData(oldp+655,(vlSelf->top__DOT__i_cache__DOT__ram_3_3),128);
            tracep->chgWData(oldp+659,(vlSelf->top__DOT__i_cache__DOT__ram_3_4),128);
            tracep->chgWData(oldp+663,(vlSelf->top__DOT__i_cache__DOT__ram_3_5),128);
            tracep->chgWData(oldp+667,(vlSelf->top__DOT__i_cache__DOT__ram_3_6),128);
            tracep->chgWData(oldp+671,(vlSelf->top__DOT__i_cache__DOT__ram_3_7),128);
            tracep->chgWData(oldp+675,(vlSelf->top__DOT__i_cache__DOT__ram_3_8),128);
            tracep->chgWData(oldp+679,(vlSelf->top__DOT__i_cache__DOT__ram_3_9),128);
            tracep->chgWData(oldp+683,(vlSelf->top__DOT__i_cache__DOT__ram_3_10),128);
            tracep->chgWData(oldp+687,(vlSelf->top__DOT__i_cache__DOT__ram_3_11),128);
            tracep->chgWData(oldp+691,(vlSelf->top__DOT__i_cache__DOT__ram_3_12),128);
            tracep->chgWData(oldp+695,(vlSelf->top__DOT__i_cache__DOT__ram_3_13),128);
            tracep->chgWData(oldp+699,(vlSelf->top__DOT__i_cache__DOT__ram_3_14),128);
            tracep->chgWData(oldp+703,(vlSelf->top__DOT__i_cache__DOT__ram_3_15),128);
            tracep->chgIData(oldp+707,(vlSelf->top__DOT__i_cache__DOT__tag_0_0),32);
            tracep->chgIData(oldp+708,(vlSelf->top__DOT__i_cache__DOT__tag_0_1),32);
            tracep->chgIData(oldp+709,(vlSelf->top__DOT__i_cache__DOT__tag_0_2),32);
            tracep->chgIData(oldp+710,(vlSelf->top__DOT__i_cache__DOT__tag_0_3),32);
            tracep->chgIData(oldp+711,(vlSelf->top__DOT__i_cache__DOT__tag_0_4),32);
            tracep->chgIData(oldp+712,(vlSelf->top__DOT__i_cache__DOT__tag_0_5),32);
            tracep->chgIData(oldp+713,(vlSelf->top__DOT__i_cache__DOT__tag_0_6),32);
            tracep->chgIData(oldp+714,(vlSelf->top__DOT__i_cache__DOT__tag_0_7),32);
            tracep->chgIData(oldp+715,(vlSelf->top__DOT__i_cache__DOT__tag_0_8),32);
            tracep->chgIData(oldp+716,(vlSelf->top__DOT__i_cache__DOT__tag_0_9),32);
            tracep->chgIData(oldp+717,(vlSelf->top__DOT__i_cache__DOT__tag_0_10),32);
            tracep->chgIData(oldp+718,(vlSelf->top__DOT__i_cache__DOT__tag_0_11),32);
            tracep->chgIData(oldp+719,(vlSelf->top__DOT__i_cache__DOT__tag_0_12),32);
            tracep->chgIData(oldp+720,(vlSelf->top__DOT__i_cache__DOT__tag_0_13),32);
            tracep->chgIData(oldp+721,(vlSelf->top__DOT__i_cache__DOT__tag_0_14),32);
            tracep->chgIData(oldp+722,(vlSelf->top__DOT__i_cache__DOT__tag_0_15),32);
            tracep->chgIData(oldp+723,(vlSelf->top__DOT__i_cache__DOT__tag_1_0),32);
            tracep->chgIData(oldp+724,(vlSelf->top__DOT__i_cache__DOT__tag_1_1),32);
            tracep->chgIData(oldp+725,(vlSelf->top__DOT__i_cache__DOT__tag_1_2),32);
            tracep->chgIData(oldp+726,(vlSelf->top__DOT__i_cache__DOT__tag_1_3),32);
            tracep->chgIData(oldp+727,(vlSelf->top__DOT__i_cache__DOT__tag_1_4),32);
            tracep->chgIData(oldp+728,(vlSelf->top__DOT__i_cache__DOT__tag_1_5),32);
            tracep->chgIData(oldp+729,(vlSelf->top__DOT__i_cache__DOT__tag_1_6),32);
            tracep->chgIData(oldp+730,(vlSelf->top__DOT__i_cache__DOT__tag_1_7),32);
            tracep->chgIData(oldp+731,(vlSelf->top__DOT__i_cache__DOT__tag_1_8),32);
            tracep->chgIData(oldp+732,(vlSelf->top__DOT__i_cache__DOT__tag_1_9),32);
            tracep->chgIData(oldp+733,(vlSelf->top__DOT__i_cache__DOT__tag_1_10),32);
            tracep->chgIData(oldp+734,(vlSelf->top__DOT__i_cache__DOT__tag_1_11),32);
            tracep->chgIData(oldp+735,(vlSelf->top__DOT__i_cache__DOT__tag_1_12),32);
            tracep->chgIData(oldp+736,(vlSelf->top__DOT__i_cache__DOT__tag_1_13),32);
            tracep->chgIData(oldp+737,(vlSelf->top__DOT__i_cache__DOT__tag_1_14),32);
            tracep->chgIData(oldp+738,(vlSelf->top__DOT__i_cache__DOT__tag_1_15),32);
            tracep->chgIData(oldp+739,(vlSelf->top__DOT__i_cache__DOT__tag_2_0),32);
            tracep->chgIData(oldp+740,(vlSelf->top__DOT__i_cache__DOT__tag_2_1),32);
            tracep->chgIData(oldp+741,(vlSelf->top__DOT__i_cache__DOT__tag_2_2),32);
            tracep->chgIData(oldp+742,(vlSelf->top__DOT__i_cache__DOT__tag_2_3),32);
            tracep->chgIData(oldp+743,(vlSelf->top__DOT__i_cache__DOT__tag_2_4),32);
            tracep->chgIData(oldp+744,(vlSelf->top__DOT__i_cache__DOT__tag_2_5),32);
            tracep->chgIData(oldp+745,(vlSelf->top__DOT__i_cache__DOT__tag_2_6),32);
            tracep->chgIData(oldp+746,(vlSelf->top__DOT__i_cache__DOT__tag_2_7),32);
            tracep->chgIData(oldp+747,(vlSelf->top__DOT__i_cache__DOT__tag_2_8),32);
            tracep->chgIData(oldp+748,(vlSelf->top__DOT__i_cache__DOT__tag_2_9),32);
            tracep->chgIData(oldp+749,(vlSelf->top__DOT__i_cache__DOT__tag_2_10),32);
            tracep->chgIData(oldp+750,(vlSelf->top__DOT__i_cache__DOT__tag_2_11),32);
            tracep->chgIData(oldp+751,(vlSelf->top__DOT__i_cache__DOT__tag_2_12),32);
            tracep->chgIData(oldp+752,(vlSelf->top__DOT__i_cache__DOT__tag_2_13),32);
            tracep->chgIData(oldp+753,(vlSelf->top__DOT__i_cache__DOT__tag_2_14),32);
            tracep->chgIData(oldp+754,(vlSelf->top__DOT__i_cache__DOT__tag_2_15),32);
            tracep->chgIData(oldp+755,(vlSelf->top__DOT__i_cache__DOT__tag_3_0),32);
            tracep->chgIData(oldp+756,(vlSelf->top__DOT__i_cache__DOT__tag_3_1),32);
            tracep->chgIData(oldp+757,(vlSelf->top__DOT__i_cache__DOT__tag_3_2),32);
            tracep->chgIData(oldp+758,(vlSelf->top__DOT__i_cache__DOT__tag_3_3),32);
            tracep->chgIData(oldp+759,(vlSelf->top__DOT__i_cache__DOT__tag_3_4),32);
            tracep->chgIData(oldp+760,(vlSelf->top__DOT__i_cache__DOT__tag_3_5),32);
            tracep->chgIData(oldp+761,(vlSelf->top__DOT__i_cache__DOT__tag_3_6),32);
            tracep->chgIData(oldp+762,(vlSelf->top__DOT__i_cache__DOT__tag_3_7),32);
            tracep->chgIData(oldp+763,(vlSelf->top__DOT__i_cache__DOT__tag_3_8),32);
            tracep->chgIData(oldp+764,(vlSelf->top__DOT__i_cache__DOT__tag_3_9),32);
            tracep->chgIData(oldp+765,(vlSelf->top__DOT__i_cache__DOT__tag_3_10),32);
            tracep->chgIData(oldp+766,(vlSelf->top__DOT__i_cache__DOT__tag_3_11),32);
            tracep->chgIData(oldp+767,(vlSelf->top__DOT__i_cache__DOT__tag_3_12),32);
            tracep->chgIData(oldp+768,(vlSelf->top__DOT__i_cache__DOT__tag_3_13),32);
            tracep->chgIData(oldp+769,(vlSelf->top__DOT__i_cache__DOT__tag_3_14),32);
            tracep->chgIData(oldp+770,(vlSelf->top__DOT__i_cache__DOT__tag_3_15),32);
            tracep->chgBit(oldp+771,(vlSelf->top__DOT__i_cache__DOT__valid_0_0));
            tracep->chgBit(oldp+772,(vlSelf->top__DOT__i_cache__DOT__valid_0_1));
            tracep->chgBit(oldp+773,(vlSelf->top__DOT__i_cache__DOT__valid_0_2));
            tracep->chgBit(oldp+774,(vlSelf->top__DOT__i_cache__DOT__valid_0_3));
            tracep->chgBit(oldp+775,(vlSelf->top__DOT__i_cache__DOT__valid_0_4));
            tracep->chgBit(oldp+776,(vlSelf->top__DOT__i_cache__DOT__valid_0_5));
            tracep->chgBit(oldp+777,(vlSelf->top__DOT__i_cache__DOT__valid_0_6));
            tracep->chgBit(oldp+778,(vlSelf->top__DOT__i_cache__DOT__valid_0_7));
            tracep->chgBit(oldp+779,(vlSelf->top__DOT__i_cache__DOT__valid_0_8));
            tracep->chgBit(oldp+780,(vlSelf->top__DOT__i_cache__DOT__valid_0_9));
            tracep->chgBit(oldp+781,(vlSelf->top__DOT__i_cache__DOT__valid_0_10));
            tracep->chgBit(oldp+782,(vlSelf->top__DOT__i_cache__DOT__valid_0_11));
            tracep->chgBit(oldp+783,(vlSelf->top__DOT__i_cache__DOT__valid_0_12));
            tracep->chgBit(oldp+784,(vlSelf->top__DOT__i_cache__DOT__valid_0_13));
            tracep->chgBit(oldp+785,(vlSelf->top__DOT__i_cache__DOT__valid_0_14));
            tracep->chgBit(oldp+786,(vlSelf->top__DOT__i_cache__DOT__valid_0_15));
            tracep->chgBit(oldp+787,(vlSelf->top__DOT__i_cache__DOT__valid_1_0));
            tracep->chgBit(oldp+788,(vlSelf->top__DOT__i_cache__DOT__valid_1_1));
            tracep->chgBit(oldp+789,(vlSelf->top__DOT__i_cache__DOT__valid_1_2));
            tracep->chgBit(oldp+790,(vlSelf->top__DOT__i_cache__DOT__valid_1_3));
            tracep->chgBit(oldp+791,(vlSelf->top__DOT__i_cache__DOT__valid_1_4));
            tracep->chgBit(oldp+792,(vlSelf->top__DOT__i_cache__DOT__valid_1_5));
            tracep->chgBit(oldp+793,(vlSelf->top__DOT__i_cache__DOT__valid_1_6));
            tracep->chgBit(oldp+794,(vlSelf->top__DOT__i_cache__DOT__valid_1_7));
            tracep->chgBit(oldp+795,(vlSelf->top__DOT__i_cache__DOT__valid_1_8));
            tracep->chgBit(oldp+796,(vlSelf->top__DOT__i_cache__DOT__valid_1_9));
            tracep->chgBit(oldp+797,(vlSelf->top__DOT__i_cache__DOT__valid_1_10));
            tracep->chgBit(oldp+798,(vlSelf->top__DOT__i_cache__DOT__valid_1_11));
            tracep->chgBit(oldp+799,(vlSelf->top__DOT__i_cache__DOT__valid_1_12));
            tracep->chgBit(oldp+800,(vlSelf->top__DOT__i_cache__DOT__valid_1_13));
            tracep->chgBit(oldp+801,(vlSelf->top__DOT__i_cache__DOT__valid_1_14));
            tracep->chgBit(oldp+802,(vlSelf->top__DOT__i_cache__DOT__valid_1_15));
            tracep->chgBit(oldp+803,(vlSelf->top__DOT__i_cache__DOT__valid_2_0));
            tracep->chgBit(oldp+804,(vlSelf->top__DOT__i_cache__DOT__valid_2_1));
            tracep->chgBit(oldp+805,(vlSelf->top__DOT__i_cache__DOT__valid_2_2));
            tracep->chgBit(oldp+806,(vlSelf->top__DOT__i_cache__DOT__valid_2_3));
            tracep->chgBit(oldp+807,(vlSelf->top__DOT__i_cache__DOT__valid_2_4));
            tracep->chgBit(oldp+808,(vlSelf->top__DOT__i_cache__DOT__valid_2_5));
            tracep->chgBit(oldp+809,(vlSelf->top__DOT__i_cache__DOT__valid_2_6));
            tracep->chgBit(oldp+810,(vlSelf->top__DOT__i_cache__DOT__valid_2_7));
            tracep->chgBit(oldp+811,(vlSelf->top__DOT__i_cache__DOT__valid_2_8));
            tracep->chgBit(oldp+812,(vlSelf->top__DOT__i_cache__DOT__valid_2_9));
            tracep->chgBit(oldp+813,(vlSelf->top__DOT__i_cache__DOT__valid_2_10));
            tracep->chgBit(oldp+814,(vlSelf->top__DOT__i_cache__DOT__valid_2_11));
            tracep->chgBit(oldp+815,(vlSelf->top__DOT__i_cache__DOT__valid_2_12));
            tracep->chgBit(oldp+816,(vlSelf->top__DOT__i_cache__DOT__valid_2_13));
            tracep->chgBit(oldp+817,(vlSelf->top__DOT__i_cache__DOT__valid_2_14));
            tracep->chgBit(oldp+818,(vlSelf->top__DOT__i_cache__DOT__valid_2_15));
            tracep->chgBit(oldp+819,(vlSelf->top__DOT__i_cache__DOT__valid_3_0));
            tracep->chgBit(oldp+820,(vlSelf->top__DOT__i_cache__DOT__valid_3_1));
            tracep->chgBit(oldp+821,(vlSelf->top__DOT__i_cache__DOT__valid_3_2));
            tracep->chgBit(oldp+822,(vlSelf->top__DOT__i_cache__DOT__valid_3_3));
            tracep->chgBit(oldp+823,(vlSelf->top__DOT__i_cache__DOT__valid_3_4));
            tracep->chgBit(oldp+824,(vlSelf->top__DOT__i_cache__DOT__valid_3_5));
            tracep->chgBit(oldp+825,(vlSelf->top__DOT__i_cache__DOT__valid_3_6));
            tracep->chgBit(oldp+826,(vlSelf->top__DOT__i_cache__DOT__valid_3_7));
            tracep->chgBit(oldp+827,(vlSelf->top__DOT__i_cache__DOT__valid_3_8));
            tracep->chgBit(oldp+828,(vlSelf->top__DOT__i_cache__DOT__valid_3_9));
            tracep->chgBit(oldp+829,(vlSelf->top__DOT__i_cache__DOT__valid_3_10));
            tracep->chgBit(oldp+830,(vlSelf->top__DOT__i_cache__DOT__valid_3_11));
            tracep->chgBit(oldp+831,(vlSelf->top__DOT__i_cache__DOT__valid_3_12));
            tracep->chgBit(oldp+832,(vlSelf->top__DOT__i_cache__DOT__valid_3_13));
            tracep->chgBit(oldp+833,(vlSelf->top__DOT__i_cache__DOT__valid_3_14));
            tracep->chgBit(oldp+834,(vlSelf->top__DOT__i_cache__DOT__valid_3_15));
            tracep->chgIData(oldp+835,(vlSelf->top__DOT__i_cache__DOT__addr),32);
            tracep->chgQData(oldp+836,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+838,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
            tracep->chgCData(oldp+840,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
            tracep->chgCData(oldp+841,(vlSelf->top__DOT__i_cache__DOT__quene_0),8);
            tracep->chgCData(oldp+842,(vlSelf->top__DOT__i_cache__DOT__quene_1),8);
            tracep->chgCData(oldp+843,(vlSelf->top__DOT__i_cache__DOT__quene_2),8);
            tracep->chgCData(oldp+844,(vlSelf->top__DOT__i_cache__DOT__quene_3),8);
            tracep->chgCData(oldp+845,(vlSelf->top__DOT__i_cache__DOT__quene_4),8);
            tracep->chgCData(oldp+846,(vlSelf->top__DOT__i_cache__DOT__quene_5),8);
            tracep->chgCData(oldp+847,(vlSelf->top__DOT__i_cache__DOT__quene_6),8);
            tracep->chgCData(oldp+848,(vlSelf->top__DOT__i_cache__DOT__quene_7),8);
            tracep->chgCData(oldp+849,(vlSelf->top__DOT__i_cache__DOT__quene_8),8);
            tracep->chgCData(oldp+850,(vlSelf->top__DOT__i_cache__DOT__quene_9),8);
            tracep->chgCData(oldp+851,(vlSelf->top__DOT__i_cache__DOT__quene_10),8);
            tracep->chgCData(oldp+852,(vlSelf->top__DOT__i_cache__DOT__quene_11),8);
            tracep->chgCData(oldp+853,(vlSelf->top__DOT__i_cache__DOT__quene_12),8);
            tracep->chgCData(oldp+854,(vlSelf->top__DOT__i_cache__DOT__quene_13),8);
            tracep->chgCData(oldp+855,(vlSelf->top__DOT__i_cache__DOT__quene_14),8);
            tracep->chgCData(oldp+856,(vlSelf->top__DOT__i_cache__DOT__quene_15),8);
            tracep->chgCData(oldp+857,((0xfU & vlSelf->top__DOT__i_cache__DOT__addr)),4);
            tracep->chgCData(oldp+858,((0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                >> 4U))),4);
            tracep->chgIData(oldp+859,((vlSelf->top__DOT__i_cache__DOT__addr 
                                        >> 8U)),24);
            tracep->chgCData(oldp+860,((0x78U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                 << 3U))),7);
            tracep->chgBit(oldp+861,(vlSelf->top__DOT__i_cache__DOT__way0_hit));
            tracep->chgBit(oldp+862,(vlSelf->top__DOT__i_cache__DOT__way1_hit));
            tracep->chgBit(oldp+863,(vlSelf->top__DOT__i_cache__DOT__way2_hit));
            tracep->chgBit(oldp+864,(vlSelf->top__DOT__i_cache__DOT__way3_hit));
            tracep->chgCData(oldp+865,(vlSelf->top__DOT__i_cache__DOT__unuse_way),3);
            tracep->chgCData(oldp+866,(vlSelf->top__DOT__i_cache__DOT__state),3);
            tracep->chgWData(oldp+867,(vlSelf->top__DOT__d_cache__DOT__ram_0_0),128);
            tracep->chgWData(oldp+871,(vlSelf->top__DOT__d_cache__DOT__ram_0_1),128);
            tracep->chgWData(oldp+875,(vlSelf->top__DOT__d_cache__DOT__ram_0_2),128);
            tracep->chgWData(oldp+879,(vlSelf->top__DOT__d_cache__DOT__ram_0_3),128);
            tracep->chgWData(oldp+883,(vlSelf->top__DOT__d_cache__DOT__ram_0_4),128);
            tracep->chgWData(oldp+887,(vlSelf->top__DOT__d_cache__DOT__ram_0_5),128);
            tracep->chgWData(oldp+891,(vlSelf->top__DOT__d_cache__DOT__ram_0_6),128);
            tracep->chgWData(oldp+895,(vlSelf->top__DOT__d_cache__DOT__ram_0_7),128);
            tracep->chgWData(oldp+899,(vlSelf->top__DOT__d_cache__DOT__ram_0_8),128);
            tracep->chgWData(oldp+903,(vlSelf->top__DOT__d_cache__DOT__ram_0_9),128);
            tracep->chgWData(oldp+907,(vlSelf->top__DOT__d_cache__DOT__ram_0_10),128);
            tracep->chgWData(oldp+911,(vlSelf->top__DOT__d_cache__DOT__ram_0_11),128);
            tracep->chgWData(oldp+915,(vlSelf->top__DOT__d_cache__DOT__ram_0_12),128);
            tracep->chgWData(oldp+919,(vlSelf->top__DOT__d_cache__DOT__ram_0_13),128);
            tracep->chgWData(oldp+923,(vlSelf->top__DOT__d_cache__DOT__ram_0_14),128);
            tracep->chgWData(oldp+927,(vlSelf->top__DOT__d_cache__DOT__ram_0_15),128);
            tracep->chgWData(oldp+931,(vlSelf->top__DOT__d_cache__DOT__ram_1_0),128);
            tracep->chgWData(oldp+935,(vlSelf->top__DOT__d_cache__DOT__ram_1_1),128);
            tracep->chgWData(oldp+939,(vlSelf->top__DOT__d_cache__DOT__ram_1_2),128);
            tracep->chgWData(oldp+943,(vlSelf->top__DOT__d_cache__DOT__ram_1_3),128);
            tracep->chgWData(oldp+947,(vlSelf->top__DOT__d_cache__DOT__ram_1_4),128);
            tracep->chgWData(oldp+951,(vlSelf->top__DOT__d_cache__DOT__ram_1_5),128);
            tracep->chgWData(oldp+955,(vlSelf->top__DOT__d_cache__DOT__ram_1_6),128);
            tracep->chgWData(oldp+959,(vlSelf->top__DOT__d_cache__DOT__ram_1_7),128);
            tracep->chgWData(oldp+963,(vlSelf->top__DOT__d_cache__DOT__ram_1_8),128);
            tracep->chgWData(oldp+967,(vlSelf->top__DOT__d_cache__DOT__ram_1_9),128);
            tracep->chgWData(oldp+971,(vlSelf->top__DOT__d_cache__DOT__ram_1_10),128);
            tracep->chgWData(oldp+975,(vlSelf->top__DOT__d_cache__DOT__ram_1_11),128);
            tracep->chgWData(oldp+979,(vlSelf->top__DOT__d_cache__DOT__ram_1_12),128);
            tracep->chgWData(oldp+983,(vlSelf->top__DOT__d_cache__DOT__ram_1_13),128);
            tracep->chgWData(oldp+987,(vlSelf->top__DOT__d_cache__DOT__ram_1_14),128);
            tracep->chgWData(oldp+991,(vlSelf->top__DOT__d_cache__DOT__ram_1_15),128);
            tracep->chgIData(oldp+995,(vlSelf->top__DOT__d_cache__DOT__tag_0_0),32);
            tracep->chgIData(oldp+996,(vlSelf->top__DOT__d_cache__DOT__tag_0_1),32);
            tracep->chgIData(oldp+997,(vlSelf->top__DOT__d_cache__DOT__tag_0_2),32);
            tracep->chgIData(oldp+998,(vlSelf->top__DOT__d_cache__DOT__tag_0_3),32);
            tracep->chgIData(oldp+999,(vlSelf->top__DOT__d_cache__DOT__tag_0_4),32);
            tracep->chgIData(oldp+1000,(vlSelf->top__DOT__d_cache__DOT__tag_0_5),32);
            tracep->chgIData(oldp+1001,(vlSelf->top__DOT__d_cache__DOT__tag_0_6),32);
            tracep->chgIData(oldp+1002,(vlSelf->top__DOT__d_cache__DOT__tag_0_7),32);
            tracep->chgIData(oldp+1003,(vlSelf->top__DOT__d_cache__DOT__tag_0_8),32);
            tracep->chgIData(oldp+1004,(vlSelf->top__DOT__d_cache__DOT__tag_0_9),32);
            tracep->chgIData(oldp+1005,(vlSelf->top__DOT__d_cache__DOT__tag_0_10),32);
            tracep->chgIData(oldp+1006,(vlSelf->top__DOT__d_cache__DOT__tag_0_11),32);
            tracep->chgIData(oldp+1007,(vlSelf->top__DOT__d_cache__DOT__tag_0_12),32);
            tracep->chgIData(oldp+1008,(vlSelf->top__DOT__d_cache__DOT__tag_0_13),32);
            tracep->chgIData(oldp+1009,(vlSelf->top__DOT__d_cache__DOT__tag_0_14),32);
            tracep->chgIData(oldp+1010,(vlSelf->top__DOT__d_cache__DOT__tag_0_15),32);
            tracep->chgIData(oldp+1011,(vlSelf->top__DOT__d_cache__DOT__tag_1_0),32);
            tracep->chgIData(oldp+1012,(vlSelf->top__DOT__d_cache__DOT__tag_1_1),32);
            tracep->chgIData(oldp+1013,(vlSelf->top__DOT__d_cache__DOT__tag_1_2),32);
            tracep->chgIData(oldp+1014,(vlSelf->top__DOT__d_cache__DOT__tag_1_3),32);
            tracep->chgIData(oldp+1015,(vlSelf->top__DOT__d_cache__DOT__tag_1_4),32);
            tracep->chgIData(oldp+1016,(vlSelf->top__DOT__d_cache__DOT__tag_1_5),32);
            tracep->chgIData(oldp+1017,(vlSelf->top__DOT__d_cache__DOT__tag_1_6),32);
            tracep->chgIData(oldp+1018,(vlSelf->top__DOT__d_cache__DOT__tag_1_7),32);
            tracep->chgIData(oldp+1019,(vlSelf->top__DOT__d_cache__DOT__tag_1_8),32);
            tracep->chgIData(oldp+1020,(vlSelf->top__DOT__d_cache__DOT__tag_1_9),32);
            tracep->chgIData(oldp+1021,(vlSelf->top__DOT__d_cache__DOT__tag_1_10),32);
            tracep->chgIData(oldp+1022,(vlSelf->top__DOT__d_cache__DOT__tag_1_11),32);
            tracep->chgIData(oldp+1023,(vlSelf->top__DOT__d_cache__DOT__tag_1_12),32);
            tracep->chgIData(oldp+1024,(vlSelf->top__DOT__d_cache__DOT__tag_1_13),32);
            tracep->chgIData(oldp+1025,(vlSelf->top__DOT__d_cache__DOT__tag_1_14),32);
            tracep->chgIData(oldp+1026,(vlSelf->top__DOT__d_cache__DOT__tag_1_15),32);
            tracep->chgBit(oldp+1027,(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
            tracep->chgBit(oldp+1028,(vlSelf->top__DOT__d_cache__DOT__valid_0_1));
            tracep->chgBit(oldp+1029,(vlSelf->top__DOT__d_cache__DOT__valid_0_2));
            tracep->chgBit(oldp+1030,(vlSelf->top__DOT__d_cache__DOT__valid_0_3));
            tracep->chgBit(oldp+1031,(vlSelf->top__DOT__d_cache__DOT__valid_0_4));
            tracep->chgBit(oldp+1032,(vlSelf->top__DOT__d_cache__DOT__valid_0_5));
            tracep->chgBit(oldp+1033,(vlSelf->top__DOT__d_cache__DOT__valid_0_6));
            tracep->chgBit(oldp+1034,(vlSelf->top__DOT__d_cache__DOT__valid_0_7));
            tracep->chgBit(oldp+1035,(vlSelf->top__DOT__d_cache__DOT__valid_0_8));
            tracep->chgBit(oldp+1036,(vlSelf->top__DOT__d_cache__DOT__valid_0_9));
            tracep->chgBit(oldp+1037,(vlSelf->top__DOT__d_cache__DOT__valid_0_10));
            tracep->chgBit(oldp+1038,(vlSelf->top__DOT__d_cache__DOT__valid_0_11));
            tracep->chgBit(oldp+1039,(vlSelf->top__DOT__d_cache__DOT__valid_0_12));
            tracep->chgBit(oldp+1040,(vlSelf->top__DOT__d_cache__DOT__valid_0_13));
            tracep->chgBit(oldp+1041,(vlSelf->top__DOT__d_cache__DOT__valid_0_14));
            tracep->chgBit(oldp+1042,(vlSelf->top__DOT__d_cache__DOT__valid_0_15));
            tracep->chgBit(oldp+1043,(vlSelf->top__DOT__d_cache__DOT__valid_1_0));
            tracep->chgBit(oldp+1044,(vlSelf->top__DOT__d_cache__DOT__valid_1_1));
            tracep->chgBit(oldp+1045,(vlSelf->top__DOT__d_cache__DOT__valid_1_2));
            tracep->chgBit(oldp+1046,(vlSelf->top__DOT__d_cache__DOT__valid_1_3));
            tracep->chgBit(oldp+1047,(vlSelf->top__DOT__d_cache__DOT__valid_1_4));
            tracep->chgBit(oldp+1048,(vlSelf->top__DOT__d_cache__DOT__valid_1_5));
            tracep->chgBit(oldp+1049,(vlSelf->top__DOT__d_cache__DOT__valid_1_6));
            tracep->chgBit(oldp+1050,(vlSelf->top__DOT__d_cache__DOT__valid_1_7));
            tracep->chgBit(oldp+1051,(vlSelf->top__DOT__d_cache__DOT__valid_1_8));
            tracep->chgBit(oldp+1052,(vlSelf->top__DOT__d_cache__DOT__valid_1_9));
            tracep->chgBit(oldp+1053,(vlSelf->top__DOT__d_cache__DOT__valid_1_10));
            tracep->chgBit(oldp+1054,(vlSelf->top__DOT__d_cache__DOT__valid_1_11));
            tracep->chgBit(oldp+1055,(vlSelf->top__DOT__d_cache__DOT__valid_1_12));
            tracep->chgBit(oldp+1056,(vlSelf->top__DOT__d_cache__DOT__valid_1_13));
            tracep->chgBit(oldp+1057,(vlSelf->top__DOT__d_cache__DOT__valid_1_14));
            tracep->chgBit(oldp+1058,(vlSelf->top__DOT__d_cache__DOT__valid_1_15));
            tracep->chgBit(oldp+1059,(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
            tracep->chgBit(oldp+1060,(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
            tracep->chgBit(oldp+1061,(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
            tracep->chgBit(oldp+1062,(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
            tracep->chgBit(oldp+1063,(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
            tracep->chgBit(oldp+1064,(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
            tracep->chgBit(oldp+1065,(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
            tracep->chgBit(oldp+1066,(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
            tracep->chgBit(oldp+1067,(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
            tracep->chgBit(oldp+1068,(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
            tracep->chgBit(oldp+1069,(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
            tracep->chgBit(oldp+1070,(vlSelf->top__DOT__d_cache__DOT__dirty_0_11));
            tracep->chgBit(oldp+1071,(vlSelf->top__DOT__d_cache__DOT__dirty_0_12));
            tracep->chgBit(oldp+1072,(vlSelf->top__DOT__d_cache__DOT__dirty_0_13));
            tracep->chgBit(oldp+1073,(vlSelf->top__DOT__d_cache__DOT__dirty_0_14));
            tracep->chgBit(oldp+1074,(vlSelf->top__DOT__d_cache__DOT__dirty_0_15));
            tracep->chgBit(oldp+1075,(vlSelf->top__DOT__d_cache__DOT__dirty_1_0));
            tracep->chgBit(oldp+1076,(vlSelf->top__DOT__d_cache__DOT__dirty_1_1));
            tracep->chgBit(oldp+1077,(vlSelf->top__DOT__d_cache__DOT__dirty_1_2));
            tracep->chgBit(oldp+1078,(vlSelf->top__DOT__d_cache__DOT__dirty_1_3));
            tracep->chgBit(oldp+1079,(vlSelf->top__DOT__d_cache__DOT__dirty_1_4));
            tracep->chgBit(oldp+1080,(vlSelf->top__DOT__d_cache__DOT__dirty_1_5));
            tracep->chgBit(oldp+1081,(vlSelf->top__DOT__d_cache__DOT__dirty_1_6));
            tracep->chgBit(oldp+1082,(vlSelf->top__DOT__d_cache__DOT__dirty_1_7));
            tracep->chgBit(oldp+1083,(vlSelf->top__DOT__d_cache__DOT__dirty_1_8));
            tracep->chgBit(oldp+1084,(vlSelf->top__DOT__d_cache__DOT__dirty_1_9));
            tracep->chgBit(oldp+1085,(vlSelf->top__DOT__d_cache__DOT__dirty_1_10));
            tracep->chgBit(oldp+1086,(vlSelf->top__DOT__d_cache__DOT__dirty_1_11));
            tracep->chgBit(oldp+1087,(vlSelf->top__DOT__d_cache__DOT__dirty_1_12));
            tracep->chgBit(oldp+1088,(vlSelf->top__DOT__d_cache__DOT__dirty_1_13));
            tracep->chgBit(oldp+1089,(vlSelf->top__DOT__d_cache__DOT__dirty_1_14));
            tracep->chgBit(oldp+1090,(vlSelf->top__DOT__d_cache__DOT__dirty_1_15));
            tracep->chgWData(oldp+1091,(vlSelf->top__DOT__d_cache__DOT__write_back_data),128);
            tracep->chgIData(oldp+1095,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
            tracep->chgQData(oldp+1096,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+1098,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
            tracep->chgCData(oldp+1100,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
            tracep->chgCData(oldp+1101,(vlSelf->top__DOT__d_cache__DOT__quene_0),2);
            tracep->chgCData(oldp+1102,(vlSelf->top__DOT__d_cache__DOT__quene_1),2);
            tracep->chgCData(oldp+1103,(vlSelf->top__DOT__d_cache__DOT__quene_2),2);
            tracep->chgCData(oldp+1104,(vlSelf->top__DOT__d_cache__DOT__quene_3),2);
            tracep->chgCData(oldp+1105,(vlSelf->top__DOT__d_cache__DOT__quene_4),2);
            tracep->chgCData(oldp+1106,(vlSelf->top__DOT__d_cache__DOT__quene_5),2);
            tracep->chgCData(oldp+1107,(vlSelf->top__DOT__d_cache__DOT__quene_6),2);
            tracep->chgCData(oldp+1108,(vlSelf->top__DOT__d_cache__DOT__quene_7),2);
            tracep->chgCData(oldp+1109,(vlSelf->top__DOT__d_cache__DOT__quene_8),2);
            tracep->chgCData(oldp+1110,(vlSelf->top__DOT__d_cache__DOT__quene_9),2);
            tracep->chgCData(oldp+1111,(vlSelf->top__DOT__d_cache__DOT__quene_10),2);
            tracep->chgCData(oldp+1112,(vlSelf->top__DOT__d_cache__DOT__quene_11),2);
            tracep->chgCData(oldp+1113,(vlSelf->top__DOT__d_cache__DOT__quene_12),2);
            tracep->chgCData(oldp+1114,(vlSelf->top__DOT__d_cache__DOT__quene_13),2);
            tracep->chgCData(oldp+1115,(vlSelf->top__DOT__d_cache__DOT__quene_14),2);
            tracep->chgCData(oldp+1116,(vlSelf->top__DOT__d_cache__DOT__quene_15),2);
            tracep->chgCData(oldp+1117,((0xfU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),4);
            tracep->chgCData(oldp+1118,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__LSU__DOT__maddr 
                                                         >> 4U)))),4);
            tracep->chgIData(oldp+1119,((0xffffffU 
                                         & (IData)(
                                                   (vlSelf->top__DOT__LSU__DOT__maddr 
                                                    >> 8U)))),24);
            tracep->chgCData(oldp+1120,((0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                                  << 3U))),7);
            tracep->chgQData(oldp+1121,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
            tracep->chgBit(oldp+1123,(vlSelf->top__DOT__d_cache__DOT__way0_hit));
            tracep->chgBit(oldp+1124,(vlSelf->top__DOT__d_cache__DOT__way1_hit));
            tracep->chgCData(oldp+1125,(vlSelf->top__DOT__d_cache__DOT__unuse_way),2);
            tracep->chgCData(oldp+1126,(vlSelf->top__DOT__d_cache__DOT__state),4);
            tracep->chgQData(oldp+1127,(vlSelf->top__DOT__axi__DOT__araddr),64);
            tracep->chgQData(oldp+1129,(vlSelf->top__DOT__axi__DOT__awaddr),64);
            tracep->chgCData(oldp+1131,(vlSelf->top__DOT__axi__DOT__arlen),8);
            tracep->chgCData(oldp+1132,(vlSelf->top__DOT__axi__DOT__awlen),8);
            tracep->chgCData(oldp+1133,(vlSelf->top__DOT__axi__DOT__state),3);
        }
        tracep->chgBit(oldp+1134,(vlSelf->clock));
        tracep->chgBit(oldp+1135,(vlSelf->reset));
        tracep->chgIData(oldp+1136,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+1137,(vlSelf->io_pc),64);
        tracep->chgBit(oldp+1139,(vlSelf->io_step));
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
