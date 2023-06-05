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
    VlWide<4>/*127:0*/ __Vtemp2271;
    VlWide<4>/*127:0*/ __Vtemp2272;
    VlWide<4>/*127:0*/ __Vtemp2273;
    VlWide<3>/*95:0*/ __Vtemp2276;
    VlWide<3>/*95:0*/ __Vtemp2277;
    VlWide<3>/*95:0*/ __Vtemp2279;
    VlWide<3>/*95:0*/ __Vtemp2280;
    VlWide<3>/*95:0*/ __Vtemp2281;
    VlWide<3>/*95:0*/ __Vtemp2282;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                       ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2214)
                                           : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                               ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2214)
                                               : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                   ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1043)
                                                   : 0U)))
                                       : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                           ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1043)
                                           : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                               ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2214)
                                               : ((3U 
                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2214)
                                                   : 0U))))),32);
            tracep->chgCData(oldp+1,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                       ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2215)
                                           : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                               ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2215)
                                               : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                   ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1044)
                                                   : 0U)))
                                       : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                           ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1044)
                                           : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                               ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2215)
                                               : ((3U 
                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2215)
                                                   : 0U))))),8);
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
            tracep->chgIData(oldp+4,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                       ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                           ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                           : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                               ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                               : 0U))
                                       : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                           ? 0U : (
                                                   (2U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                     ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                     : 0U))))),32);
            tracep->chgCData(oldp+5,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                       ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                           ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                           : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                               ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                               : 0U))
                                       : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                           ? 0U : (
                                                   (2U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                                     : 0U))))),8);
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
            tracep->chgQData(oldp+7,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                       ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                           ? (((QData)((IData)(
                                                               vlSelf->top__DOT__d_cache__DOT___GEN_2224[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__d_cache__DOT___GEN_2224[0U])))
                                           : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                               ? (((QData)((IData)(
                                                                   vlSelf->top__DOT__d_cache__DOT___GEN_2224[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___GEN_2224[0U])))
                                               : 0ULL))
                                       : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                           ? 0ULL : 
                                          ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                            ? (((QData)((IData)(
                                                                vlSelf->top__DOT__d_cache__DOT___GEN_2224[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__d_cache__DOT___GEN_2224[0U])))
                                            : ((3U 
                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___GEN_2224[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___GEN_2224[0U])))
                                                : 0ULL))))),64);
            tracep->chgCData(oldp+9,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                       ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                           ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                           : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                               ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                               : 0U))
                                       : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                           ? 0U : (
                                                   (2U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                     : 0U))))),8);
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
            tracep->chgBit(oldp+11,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__axi_io_axi_out_rlast));
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
            tracep->chgBit(oldp+16,(vlSelf->top__DOT__axi__DOT__axi_awready));
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__axi__DOT__axi_wready));
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
            tracep->chgBit(oldp+19,((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))));
            tracep->chgBit(oldp+20,(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en));
            tracep->chgIData(oldp+21,((IData)(vlSelf->top__DOT__exu_step__DOT__add_res)),32);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__exu_step_io_Mem_wdata),64);
            tracep->chgCData(oldp+24,(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask),8);
            tracep->chgQData(oldp+25,((((QData)((IData)(
                                                        vlSelf->top__DOT__d_cache__DOT___GEN_2229[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___GEN_2229[0U])))),64);
            tracep->chgBit(oldp+27,((1U & ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                           | ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                               ? ((~ (IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)) 
                                                  & (~ (IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)))
                                               : ((3U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                  | ((4U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                     | (6U 
                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))))))));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__d_cache_io_to_lsu_rvalid));
            tracep->chgBit(oldp+29,(((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                     & ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2140)
                                         : ((3U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                            & ((4U 
                                                == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                               & ((0U 
                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                    ? (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                                    & (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)))
                                                   : 
                                                  ((1U 
                                                    != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                                   & ((2U 
                                                       == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                                       & (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)))))))))));
            tracep->chgBit(oldp+30,(((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                     & ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2140)
                                         : ((3U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                            & ((4U 
                                                == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                               & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_wready)))))));
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__d_cache_io_to_lsu_bvalid));
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid));
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__lsu_step__DOT__axi_rready));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__lsu_step__DOT__axi_wvalid));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__lsu_step__DOT__axi_bready));
            tracep->chgIData(oldp+37,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1043)),32);
            tracep->chgCData(oldp+38,(vlSelf->top__DOT__i_cache__DOT___GEN_1044),8);
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
            tracep->chgIData(oldp+45,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2214)),32);
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__d_cache__DOT___GEN_2215),8);
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__d_cache_io_to_axi_arvalid));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__d_cache_io_to_axi_rready));
            tracep->chgIData(oldp+49,(vlSelf->top__DOT__d_cache_io_to_axi_awaddr),32);
            tracep->chgCData(oldp+50,(vlSelf->top__DOT__d_cache_io_to_axi_awlen),8);
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__d_cache_io_to_axi_awvalid));
            tracep->chgQData(oldp+52,((((QData)((IData)(
                                                        vlSelf->top__DOT__d_cache__DOT___GEN_2224[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___GEN_2224[0U])))),64);
            tracep->chgCData(oldp+54,(vlSelf->top__DOT__d_cache_io_to_axi_wstrb),8);
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__d_cache_io_to_axi_wvalid));
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__d_cache_io_to_axi_bready));
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast));
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
            tracep->chgBit(oldp+61,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)
                                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                             & (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)))
                                      : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                         & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)
                                             : ((3U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                                & (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)))))));
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_wready));
            tracep->chgBit(oldp+63,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__pc_now),64);
            tracep->chgBit(oldp+66,(vlSelf->top__DOT__pc_valid));
            tracep->chgBit(oldp+67,(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid));
            tracep->chgIData(oldp+68,(vlSelf->top__DOT__i_cache__DOT___GEN_1048[0U]),32);
            tracep->chgIData(oldp+69,(vlSelf->top__DOT__ifu_step__DOT__inst_reg),32);
            tracep->chgQData(oldp+70,((((QData)((IData)(
                                                        vlSelf->top__DOT__i_cache__DOT___GEN_1048[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__i_cache__DOT___GEN_1048[0U])))),64);
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__i_cache_io_to_ifu_rlast));
            tracep->chgIData(oldp+73,((IData)(vlSelf->top__DOT__pc_now)),32);
            tracep->chgBit(oldp+74,(vlSelf->top__DOT__ifu_step__DOT__inst_ready));
            tracep->chgIData(oldp+75,(vlSelf->top__DOT__idu_step_io_inst),32);
            tracep->chgIData(oldp+76,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194),32);
            tracep->chgCData(oldp+77,((0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+78,((0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+79,((0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                >> 7U))),5);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__idu_step_io_imm),64);
            tracep->chgBit(oldp+82,(((0x100073U != vlSelf->top__DOT__idu_step_io_inst) 
                                     & ((0x3023U != 
                                         (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                                        & ((0x1023U 
                                            != (0x707fU 
                                                & vlSelf->top__DOT__idu_step_io_inst)) 
                                           & ((0x23U 
                                               != (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst)) 
                                              & ((0x2023U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst)) 
                                                 & ((0x1063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__idu_step_io_inst)) 
                                                    & ((0x63U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__idu_step_io_inst)) 
                                                       & ((0x5063U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__idu_step_io_inst)) 
                                                          & ((0x4063U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__idu_step_io_inst)) 
                                                             & ((0x6063U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__idu_step_io_inst)) 
                                                                & ((0x7063U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__idu_step_io_inst)) 
                                                                   & ((0x73U 
                                                                       != vlSelf->top__DOT__idu_step_io_inst) 
                                                                      & (0x30200073U 
                                                                         != vlSelf->top__DOT__idu_step_io_inst)))))))))))))));
            tracep->chgBit(oldp+83,(((0x1073U == (0x707fU 
                                                  & vlSelf->top__DOT__idu_step_io_inst)) 
                                     | ((0x2073U == 
                                         (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                                        | (0x3073U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__idu_step_io_inst))))));
            tracep->chgBit(oldp+84,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm));
            tracep->chgBit(oldp+85,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc));
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__exu_step__DOT__pc_next),64);
            tracep->chgQData(oldp+88,((((QData)((IData)(
                                                        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))),64);
            tracep->chgIData(oldp+90,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
            tracep->chgIData(oldp+91,((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
            tracep->chgBit(oldp+92,(vlSelf->top__DOT__execute_end));
            tracep->chgBit(oldp+93,(vlSelf->top__DOT__diff_step));
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__axi__DOT__araddr),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__axi__DOT__awaddr),64);
            tracep->chgCData(oldp+98,(vlSelf->top__DOT__axi__DOT__arlen),8);
            tracep->chgCData(oldp+99,(vlSelf->top__DOT__axi__DOT__awlen),8);
            tracep->chgCData(oldp+100,(vlSelf->top__DOT__axi__DOT__state),3);
            tracep->chgCData(oldp+101,(vlSelf->top__DOT__lsu_step__DOT__state),2);
            tracep->chgCData(oldp+102,(vlSelf->top__DOT__arbiter__DOT__state),2);
            tracep->chgWData(oldp+103,(vlSelf->top__DOT__i_cache__DOT__ram_0_0),512);
            tracep->chgWData(oldp+119,(vlSelf->top__DOT__i_cache__DOT__ram_0_1),512);
            tracep->chgWData(oldp+135,(vlSelf->top__DOT__i_cache__DOT__ram_0_2),512);
            tracep->chgWData(oldp+151,(vlSelf->top__DOT__i_cache__DOT__ram_0_3),512);
            tracep->chgWData(oldp+167,(vlSelf->top__DOT__i_cache__DOT__ram_0_4),512);
            tracep->chgWData(oldp+183,(vlSelf->top__DOT__i_cache__DOT__ram_0_5),512);
            tracep->chgWData(oldp+199,(vlSelf->top__DOT__i_cache__DOT__ram_0_6),512);
            tracep->chgWData(oldp+215,(vlSelf->top__DOT__i_cache__DOT__ram_0_7),512);
            tracep->chgWData(oldp+231,(vlSelf->top__DOT__i_cache__DOT__ram_0_8),512);
            tracep->chgWData(oldp+247,(vlSelf->top__DOT__i_cache__DOT__ram_0_9),512);
            tracep->chgWData(oldp+263,(vlSelf->top__DOT__i_cache__DOT__ram_0_10),512);
            tracep->chgWData(oldp+279,(vlSelf->top__DOT__i_cache__DOT__ram_0_11),512);
            tracep->chgWData(oldp+295,(vlSelf->top__DOT__i_cache__DOT__ram_0_12),512);
            tracep->chgWData(oldp+311,(vlSelf->top__DOT__i_cache__DOT__ram_0_13),512);
            tracep->chgWData(oldp+327,(vlSelf->top__DOT__i_cache__DOT__ram_0_14),512);
            tracep->chgWData(oldp+343,(vlSelf->top__DOT__i_cache__DOT__ram_0_15),512);
            tracep->chgWData(oldp+359,(vlSelf->top__DOT__i_cache__DOT__ram_1_0),512);
            tracep->chgWData(oldp+375,(vlSelf->top__DOT__i_cache__DOT__ram_1_1),512);
            tracep->chgWData(oldp+391,(vlSelf->top__DOT__i_cache__DOT__ram_1_2),512);
            tracep->chgWData(oldp+407,(vlSelf->top__DOT__i_cache__DOT__ram_1_3),512);
            tracep->chgWData(oldp+423,(vlSelf->top__DOT__i_cache__DOT__ram_1_4),512);
            tracep->chgWData(oldp+439,(vlSelf->top__DOT__i_cache__DOT__ram_1_5),512);
            tracep->chgWData(oldp+455,(vlSelf->top__DOT__i_cache__DOT__ram_1_6),512);
            tracep->chgWData(oldp+471,(vlSelf->top__DOT__i_cache__DOT__ram_1_7),512);
            tracep->chgWData(oldp+487,(vlSelf->top__DOT__i_cache__DOT__ram_1_8),512);
            tracep->chgWData(oldp+503,(vlSelf->top__DOT__i_cache__DOT__ram_1_9),512);
            tracep->chgWData(oldp+519,(vlSelf->top__DOT__i_cache__DOT__ram_1_10),512);
            tracep->chgWData(oldp+535,(vlSelf->top__DOT__i_cache__DOT__ram_1_11),512);
            tracep->chgWData(oldp+551,(vlSelf->top__DOT__i_cache__DOT__ram_1_12),512);
            tracep->chgWData(oldp+567,(vlSelf->top__DOT__i_cache__DOT__ram_1_13),512);
            tracep->chgWData(oldp+583,(vlSelf->top__DOT__i_cache__DOT__ram_1_14),512);
            tracep->chgWData(oldp+599,(vlSelf->top__DOT__i_cache__DOT__ram_1_15),512);
            tracep->chgIData(oldp+615,(vlSelf->top__DOT__i_cache__DOT__tag_0_0),32);
            tracep->chgIData(oldp+616,(vlSelf->top__DOT__i_cache__DOT__tag_0_1),32);
            tracep->chgIData(oldp+617,(vlSelf->top__DOT__i_cache__DOT__tag_0_2),32);
            tracep->chgIData(oldp+618,(vlSelf->top__DOT__i_cache__DOT__tag_0_3),32);
            tracep->chgIData(oldp+619,(vlSelf->top__DOT__i_cache__DOT__tag_0_4),32);
            tracep->chgIData(oldp+620,(vlSelf->top__DOT__i_cache__DOT__tag_0_5),32);
            tracep->chgIData(oldp+621,(vlSelf->top__DOT__i_cache__DOT__tag_0_6),32);
            tracep->chgIData(oldp+622,(vlSelf->top__DOT__i_cache__DOT__tag_0_7),32);
            tracep->chgIData(oldp+623,(vlSelf->top__DOT__i_cache__DOT__tag_0_8),32);
            tracep->chgIData(oldp+624,(vlSelf->top__DOT__i_cache__DOT__tag_0_9),32);
            tracep->chgIData(oldp+625,(vlSelf->top__DOT__i_cache__DOT__tag_0_10),32);
            tracep->chgIData(oldp+626,(vlSelf->top__DOT__i_cache__DOT__tag_0_11),32);
            tracep->chgIData(oldp+627,(vlSelf->top__DOT__i_cache__DOT__tag_0_12),32);
            tracep->chgIData(oldp+628,(vlSelf->top__DOT__i_cache__DOT__tag_0_13),32);
            tracep->chgIData(oldp+629,(vlSelf->top__DOT__i_cache__DOT__tag_0_14),32);
            tracep->chgIData(oldp+630,(vlSelf->top__DOT__i_cache__DOT__tag_0_15),32);
            tracep->chgIData(oldp+631,(vlSelf->top__DOT__i_cache__DOT__tag_1_0),32);
            tracep->chgIData(oldp+632,(vlSelf->top__DOT__i_cache__DOT__tag_1_1),32);
            tracep->chgIData(oldp+633,(vlSelf->top__DOT__i_cache__DOT__tag_1_2),32);
            tracep->chgIData(oldp+634,(vlSelf->top__DOT__i_cache__DOT__tag_1_3),32);
            tracep->chgIData(oldp+635,(vlSelf->top__DOT__i_cache__DOT__tag_1_4),32);
            tracep->chgIData(oldp+636,(vlSelf->top__DOT__i_cache__DOT__tag_1_5),32);
            tracep->chgIData(oldp+637,(vlSelf->top__DOT__i_cache__DOT__tag_1_6),32);
            tracep->chgIData(oldp+638,(vlSelf->top__DOT__i_cache__DOT__tag_1_7),32);
            tracep->chgIData(oldp+639,(vlSelf->top__DOT__i_cache__DOT__tag_1_8),32);
            tracep->chgIData(oldp+640,(vlSelf->top__DOT__i_cache__DOT__tag_1_9),32);
            tracep->chgIData(oldp+641,(vlSelf->top__DOT__i_cache__DOT__tag_1_10),32);
            tracep->chgIData(oldp+642,(vlSelf->top__DOT__i_cache__DOT__tag_1_11),32);
            tracep->chgIData(oldp+643,(vlSelf->top__DOT__i_cache__DOT__tag_1_12),32);
            tracep->chgIData(oldp+644,(vlSelf->top__DOT__i_cache__DOT__tag_1_13),32);
            tracep->chgIData(oldp+645,(vlSelf->top__DOT__i_cache__DOT__tag_1_14),32);
            tracep->chgIData(oldp+646,(vlSelf->top__DOT__i_cache__DOT__tag_1_15),32);
            tracep->chgBit(oldp+647,(vlSelf->top__DOT__i_cache__DOT__valid_0_0));
            tracep->chgBit(oldp+648,(vlSelf->top__DOT__i_cache__DOT__valid_0_1));
            tracep->chgBit(oldp+649,(vlSelf->top__DOT__i_cache__DOT__valid_0_2));
            tracep->chgBit(oldp+650,(vlSelf->top__DOT__i_cache__DOT__valid_0_3));
            tracep->chgBit(oldp+651,(vlSelf->top__DOT__i_cache__DOT__valid_0_4));
            tracep->chgBit(oldp+652,(vlSelf->top__DOT__i_cache__DOT__valid_0_5));
            tracep->chgBit(oldp+653,(vlSelf->top__DOT__i_cache__DOT__valid_0_6));
            tracep->chgBit(oldp+654,(vlSelf->top__DOT__i_cache__DOT__valid_0_7));
            tracep->chgBit(oldp+655,(vlSelf->top__DOT__i_cache__DOT__valid_0_8));
            tracep->chgBit(oldp+656,(vlSelf->top__DOT__i_cache__DOT__valid_0_9));
            tracep->chgBit(oldp+657,(vlSelf->top__DOT__i_cache__DOT__valid_0_10));
            tracep->chgBit(oldp+658,(vlSelf->top__DOT__i_cache__DOT__valid_0_11));
            tracep->chgBit(oldp+659,(vlSelf->top__DOT__i_cache__DOT__valid_0_12));
            tracep->chgBit(oldp+660,(vlSelf->top__DOT__i_cache__DOT__valid_0_13));
            tracep->chgBit(oldp+661,(vlSelf->top__DOT__i_cache__DOT__valid_0_14));
            tracep->chgBit(oldp+662,(vlSelf->top__DOT__i_cache__DOT__valid_0_15));
            tracep->chgBit(oldp+663,(vlSelf->top__DOT__i_cache__DOT__valid_1_0));
            tracep->chgBit(oldp+664,(vlSelf->top__DOT__i_cache__DOT__valid_1_1));
            tracep->chgBit(oldp+665,(vlSelf->top__DOT__i_cache__DOT__valid_1_2));
            tracep->chgBit(oldp+666,(vlSelf->top__DOT__i_cache__DOT__valid_1_3));
            tracep->chgBit(oldp+667,(vlSelf->top__DOT__i_cache__DOT__valid_1_4));
            tracep->chgBit(oldp+668,(vlSelf->top__DOT__i_cache__DOT__valid_1_5));
            tracep->chgBit(oldp+669,(vlSelf->top__DOT__i_cache__DOT__valid_1_6));
            tracep->chgBit(oldp+670,(vlSelf->top__DOT__i_cache__DOT__valid_1_7));
            tracep->chgBit(oldp+671,(vlSelf->top__DOT__i_cache__DOT__valid_1_8));
            tracep->chgBit(oldp+672,(vlSelf->top__DOT__i_cache__DOT__valid_1_9));
            tracep->chgBit(oldp+673,(vlSelf->top__DOT__i_cache__DOT__valid_1_10));
            tracep->chgBit(oldp+674,(vlSelf->top__DOT__i_cache__DOT__valid_1_11));
            tracep->chgBit(oldp+675,(vlSelf->top__DOT__i_cache__DOT__valid_1_12));
            tracep->chgBit(oldp+676,(vlSelf->top__DOT__i_cache__DOT__valid_1_13));
            tracep->chgBit(oldp+677,(vlSelf->top__DOT__i_cache__DOT__valid_1_14));
            tracep->chgBit(oldp+678,(vlSelf->top__DOT__i_cache__DOT__valid_1_15));
            tracep->chgBit(oldp+679,(vlSelf->top__DOT__i_cache__DOT__way0_hit));
            tracep->chgBit(oldp+680,(vlSelf->top__DOT__i_cache__DOT__way1_hit));
            tracep->chgCData(oldp+681,(vlSelf->top__DOT__i_cache__DOT__unuse_way),2);
            tracep->chgQData(oldp+682,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+684,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
            tracep->chgQData(oldp+686,(vlSelf->top__DOT__i_cache__DOT__receive_data_2),64);
            tracep->chgQData(oldp+688,(vlSelf->top__DOT__i_cache__DOT__receive_data_3),64);
            tracep->chgQData(oldp+690,(vlSelf->top__DOT__i_cache__DOT__receive_data_4),64);
            tracep->chgQData(oldp+692,(vlSelf->top__DOT__i_cache__DOT__receive_data_5),64);
            tracep->chgQData(oldp+694,(vlSelf->top__DOT__i_cache__DOT__receive_data_6),64);
            tracep->chgQData(oldp+696,(vlSelf->top__DOT__i_cache__DOT__receive_data_7),64);
            tracep->chgCData(oldp+698,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
            tracep->chgBit(oldp+699,(vlSelf->top__DOT__i_cache__DOT__quene));
            tracep->chgCData(oldp+700,((0x3fU & (IData)(vlSelf->top__DOT__pc_now))),6);
            tracep->chgCData(oldp+701,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__pc_now 
                                                        >> 6U)))),4);
            tracep->chgIData(oldp+702,((0x3fffffU & (IData)(
                                                            (vlSelf->top__DOT__pc_now 
                                                             >> 0xaU)))),22);
            tracep->chgSData(oldp+703,((0x1f8U & ((IData)(vlSelf->top__DOT__pc_now) 
                                                  << 3U))),9);
            tracep->chgCData(oldp+704,(vlSelf->top__DOT__i_cache__DOT__state),3);
            tracep->chgWData(oldp+705,(vlSelf->top__DOT__d_cache__DOT__ram_0_0),512);
            tracep->chgWData(oldp+721,(vlSelf->top__DOT__d_cache__DOT__ram_0_1),512);
            tracep->chgWData(oldp+737,(vlSelf->top__DOT__d_cache__DOT__ram_0_2),512);
            tracep->chgWData(oldp+753,(vlSelf->top__DOT__d_cache__DOT__ram_0_3),512);
            tracep->chgWData(oldp+769,(vlSelf->top__DOT__d_cache__DOT__ram_0_4),512);
            tracep->chgWData(oldp+785,(vlSelf->top__DOT__d_cache__DOT__ram_0_5),512);
            tracep->chgWData(oldp+801,(vlSelf->top__DOT__d_cache__DOT__ram_0_6),512);
            tracep->chgWData(oldp+817,(vlSelf->top__DOT__d_cache__DOT__ram_0_7),512);
            tracep->chgWData(oldp+833,(vlSelf->top__DOT__d_cache__DOT__ram_0_8),512);
            tracep->chgWData(oldp+849,(vlSelf->top__DOT__d_cache__DOT__ram_0_9),512);
            tracep->chgWData(oldp+865,(vlSelf->top__DOT__d_cache__DOT__ram_0_10),512);
            tracep->chgWData(oldp+881,(vlSelf->top__DOT__d_cache__DOT__ram_0_11),512);
            tracep->chgWData(oldp+897,(vlSelf->top__DOT__d_cache__DOT__ram_0_12),512);
            tracep->chgWData(oldp+913,(vlSelf->top__DOT__d_cache__DOT__ram_0_13),512);
            tracep->chgWData(oldp+929,(vlSelf->top__DOT__d_cache__DOT__ram_0_14),512);
            tracep->chgWData(oldp+945,(vlSelf->top__DOT__d_cache__DOT__ram_0_15),512);
            tracep->chgWData(oldp+961,(vlSelf->top__DOT__d_cache__DOT__ram_1_0),512);
            tracep->chgWData(oldp+977,(vlSelf->top__DOT__d_cache__DOT__ram_1_1),512);
            tracep->chgWData(oldp+993,(vlSelf->top__DOT__d_cache__DOT__ram_1_2),512);
            tracep->chgWData(oldp+1009,(vlSelf->top__DOT__d_cache__DOT__ram_1_3),512);
            tracep->chgWData(oldp+1025,(vlSelf->top__DOT__d_cache__DOT__ram_1_4),512);
            tracep->chgWData(oldp+1041,(vlSelf->top__DOT__d_cache__DOT__ram_1_5),512);
            tracep->chgWData(oldp+1057,(vlSelf->top__DOT__d_cache__DOT__ram_1_6),512);
            tracep->chgWData(oldp+1073,(vlSelf->top__DOT__d_cache__DOT__ram_1_7),512);
            tracep->chgWData(oldp+1089,(vlSelf->top__DOT__d_cache__DOT__ram_1_8),512);
            tracep->chgWData(oldp+1105,(vlSelf->top__DOT__d_cache__DOT__ram_1_9),512);
            tracep->chgWData(oldp+1121,(vlSelf->top__DOT__d_cache__DOT__ram_1_10),512);
            tracep->chgWData(oldp+1137,(vlSelf->top__DOT__d_cache__DOT__ram_1_11),512);
            tracep->chgWData(oldp+1153,(vlSelf->top__DOT__d_cache__DOT__ram_1_12),512);
            tracep->chgWData(oldp+1169,(vlSelf->top__DOT__d_cache__DOT__ram_1_13),512);
            tracep->chgWData(oldp+1185,(vlSelf->top__DOT__d_cache__DOT__ram_1_14),512);
            tracep->chgWData(oldp+1201,(vlSelf->top__DOT__d_cache__DOT__ram_1_15),512);
            tracep->chgIData(oldp+1217,(vlSelf->top__DOT__d_cache__DOT__tag_0_0),32);
            tracep->chgIData(oldp+1218,(vlSelf->top__DOT__d_cache__DOT__tag_0_1),32);
            tracep->chgIData(oldp+1219,(vlSelf->top__DOT__d_cache__DOT__tag_0_2),32);
            tracep->chgIData(oldp+1220,(vlSelf->top__DOT__d_cache__DOT__tag_0_3),32);
            tracep->chgIData(oldp+1221,(vlSelf->top__DOT__d_cache__DOT__tag_0_4),32);
            tracep->chgIData(oldp+1222,(vlSelf->top__DOT__d_cache__DOT__tag_0_5),32);
            tracep->chgIData(oldp+1223,(vlSelf->top__DOT__d_cache__DOT__tag_0_6),32);
            tracep->chgIData(oldp+1224,(vlSelf->top__DOT__d_cache__DOT__tag_0_7),32);
            tracep->chgIData(oldp+1225,(vlSelf->top__DOT__d_cache__DOT__tag_0_8),32);
            tracep->chgIData(oldp+1226,(vlSelf->top__DOT__d_cache__DOT__tag_0_9),32);
            tracep->chgIData(oldp+1227,(vlSelf->top__DOT__d_cache__DOT__tag_0_10),32);
            tracep->chgIData(oldp+1228,(vlSelf->top__DOT__d_cache__DOT__tag_0_11),32);
            tracep->chgIData(oldp+1229,(vlSelf->top__DOT__d_cache__DOT__tag_0_12),32);
            tracep->chgIData(oldp+1230,(vlSelf->top__DOT__d_cache__DOT__tag_0_13),32);
            tracep->chgIData(oldp+1231,(vlSelf->top__DOT__d_cache__DOT__tag_0_14),32);
            tracep->chgIData(oldp+1232,(vlSelf->top__DOT__d_cache__DOT__tag_0_15),32);
            tracep->chgIData(oldp+1233,(vlSelf->top__DOT__d_cache__DOT__tag_1_0),32);
            tracep->chgIData(oldp+1234,(vlSelf->top__DOT__d_cache__DOT__tag_1_1),32);
            tracep->chgIData(oldp+1235,(vlSelf->top__DOT__d_cache__DOT__tag_1_2),32);
            tracep->chgIData(oldp+1236,(vlSelf->top__DOT__d_cache__DOT__tag_1_3),32);
            tracep->chgIData(oldp+1237,(vlSelf->top__DOT__d_cache__DOT__tag_1_4),32);
            tracep->chgIData(oldp+1238,(vlSelf->top__DOT__d_cache__DOT__tag_1_5),32);
            tracep->chgIData(oldp+1239,(vlSelf->top__DOT__d_cache__DOT__tag_1_6),32);
            tracep->chgIData(oldp+1240,(vlSelf->top__DOT__d_cache__DOT__tag_1_7),32);
            tracep->chgIData(oldp+1241,(vlSelf->top__DOT__d_cache__DOT__tag_1_8),32);
            tracep->chgIData(oldp+1242,(vlSelf->top__DOT__d_cache__DOT__tag_1_9),32);
            tracep->chgIData(oldp+1243,(vlSelf->top__DOT__d_cache__DOT__tag_1_10),32);
            tracep->chgIData(oldp+1244,(vlSelf->top__DOT__d_cache__DOT__tag_1_11),32);
            tracep->chgIData(oldp+1245,(vlSelf->top__DOT__d_cache__DOT__tag_1_12),32);
            tracep->chgIData(oldp+1246,(vlSelf->top__DOT__d_cache__DOT__tag_1_13),32);
            tracep->chgIData(oldp+1247,(vlSelf->top__DOT__d_cache__DOT__tag_1_14),32);
            tracep->chgIData(oldp+1248,(vlSelf->top__DOT__d_cache__DOT__tag_1_15),32);
            tracep->chgBit(oldp+1249,(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
            tracep->chgBit(oldp+1250,(vlSelf->top__DOT__d_cache__DOT__valid_0_1));
            tracep->chgBit(oldp+1251,(vlSelf->top__DOT__d_cache__DOT__valid_0_2));
            tracep->chgBit(oldp+1252,(vlSelf->top__DOT__d_cache__DOT__valid_0_3));
            tracep->chgBit(oldp+1253,(vlSelf->top__DOT__d_cache__DOT__valid_0_4));
            tracep->chgBit(oldp+1254,(vlSelf->top__DOT__d_cache__DOT__valid_0_5));
            tracep->chgBit(oldp+1255,(vlSelf->top__DOT__d_cache__DOT__valid_0_6));
            tracep->chgBit(oldp+1256,(vlSelf->top__DOT__d_cache__DOT__valid_0_7));
            tracep->chgBit(oldp+1257,(vlSelf->top__DOT__d_cache__DOT__valid_0_8));
            tracep->chgBit(oldp+1258,(vlSelf->top__DOT__d_cache__DOT__valid_0_9));
            tracep->chgBit(oldp+1259,(vlSelf->top__DOT__d_cache__DOT__valid_0_10));
            tracep->chgBit(oldp+1260,(vlSelf->top__DOT__d_cache__DOT__valid_0_11));
            tracep->chgBit(oldp+1261,(vlSelf->top__DOT__d_cache__DOT__valid_0_12));
            tracep->chgBit(oldp+1262,(vlSelf->top__DOT__d_cache__DOT__valid_0_13));
            tracep->chgBit(oldp+1263,(vlSelf->top__DOT__d_cache__DOT__valid_0_14));
            tracep->chgBit(oldp+1264,(vlSelf->top__DOT__d_cache__DOT__valid_0_15));
            tracep->chgBit(oldp+1265,(vlSelf->top__DOT__d_cache__DOT__valid_1_0));
            tracep->chgBit(oldp+1266,(vlSelf->top__DOT__d_cache__DOT__valid_1_1));
            tracep->chgBit(oldp+1267,(vlSelf->top__DOT__d_cache__DOT__valid_1_2));
            tracep->chgBit(oldp+1268,(vlSelf->top__DOT__d_cache__DOT__valid_1_3));
            tracep->chgBit(oldp+1269,(vlSelf->top__DOT__d_cache__DOT__valid_1_4));
            tracep->chgBit(oldp+1270,(vlSelf->top__DOT__d_cache__DOT__valid_1_5));
            tracep->chgBit(oldp+1271,(vlSelf->top__DOT__d_cache__DOT__valid_1_6));
            tracep->chgBit(oldp+1272,(vlSelf->top__DOT__d_cache__DOT__valid_1_7));
            tracep->chgBit(oldp+1273,(vlSelf->top__DOT__d_cache__DOT__valid_1_8));
            tracep->chgBit(oldp+1274,(vlSelf->top__DOT__d_cache__DOT__valid_1_9));
            tracep->chgBit(oldp+1275,(vlSelf->top__DOT__d_cache__DOT__valid_1_10));
            tracep->chgBit(oldp+1276,(vlSelf->top__DOT__d_cache__DOT__valid_1_11));
            tracep->chgBit(oldp+1277,(vlSelf->top__DOT__d_cache__DOT__valid_1_12));
            tracep->chgBit(oldp+1278,(vlSelf->top__DOT__d_cache__DOT__valid_1_13));
            tracep->chgBit(oldp+1279,(vlSelf->top__DOT__d_cache__DOT__valid_1_14));
            tracep->chgBit(oldp+1280,(vlSelf->top__DOT__d_cache__DOT__valid_1_15));
            tracep->chgBit(oldp+1281,(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
            tracep->chgBit(oldp+1282,(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
            tracep->chgBit(oldp+1283,(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
            tracep->chgBit(oldp+1284,(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
            tracep->chgBit(oldp+1285,(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
            tracep->chgBit(oldp+1286,(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
            tracep->chgBit(oldp+1287,(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
            tracep->chgBit(oldp+1288,(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
            tracep->chgBit(oldp+1289,(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
            tracep->chgBit(oldp+1290,(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
            tracep->chgBit(oldp+1291,(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
            tracep->chgBit(oldp+1292,(vlSelf->top__DOT__d_cache__DOT__dirty_0_11));
            tracep->chgBit(oldp+1293,(vlSelf->top__DOT__d_cache__DOT__dirty_0_12));
            tracep->chgBit(oldp+1294,(vlSelf->top__DOT__d_cache__DOT__dirty_0_13));
            tracep->chgBit(oldp+1295,(vlSelf->top__DOT__d_cache__DOT__dirty_0_14));
            tracep->chgBit(oldp+1296,(vlSelf->top__DOT__d_cache__DOT__dirty_0_15));
            tracep->chgBit(oldp+1297,(vlSelf->top__DOT__d_cache__DOT__dirty_1_0));
            tracep->chgBit(oldp+1298,(vlSelf->top__DOT__d_cache__DOT__dirty_1_1));
            tracep->chgBit(oldp+1299,(vlSelf->top__DOT__d_cache__DOT__dirty_1_2));
            tracep->chgBit(oldp+1300,(vlSelf->top__DOT__d_cache__DOT__dirty_1_3));
            tracep->chgBit(oldp+1301,(vlSelf->top__DOT__d_cache__DOT__dirty_1_4));
            tracep->chgBit(oldp+1302,(vlSelf->top__DOT__d_cache__DOT__dirty_1_5));
            tracep->chgBit(oldp+1303,(vlSelf->top__DOT__d_cache__DOT__dirty_1_6));
            tracep->chgBit(oldp+1304,(vlSelf->top__DOT__d_cache__DOT__dirty_1_7));
            tracep->chgBit(oldp+1305,(vlSelf->top__DOT__d_cache__DOT__dirty_1_8));
            tracep->chgBit(oldp+1306,(vlSelf->top__DOT__d_cache__DOT__dirty_1_9));
            tracep->chgBit(oldp+1307,(vlSelf->top__DOT__d_cache__DOT__dirty_1_10));
            tracep->chgBit(oldp+1308,(vlSelf->top__DOT__d_cache__DOT__dirty_1_11));
            tracep->chgBit(oldp+1309,(vlSelf->top__DOT__d_cache__DOT__dirty_1_12));
            tracep->chgBit(oldp+1310,(vlSelf->top__DOT__d_cache__DOT__dirty_1_13));
            tracep->chgBit(oldp+1311,(vlSelf->top__DOT__d_cache__DOT__dirty_1_14));
            tracep->chgBit(oldp+1312,(vlSelf->top__DOT__d_cache__DOT__dirty_1_15));
            tracep->chgBit(oldp+1313,(vlSelf->top__DOT__d_cache__DOT__way0_hit));
            tracep->chgBit(oldp+1314,(vlSelf->top__DOT__d_cache__DOT__way1_hit));
            tracep->chgWData(oldp+1315,(vlSelf->top__DOT__d_cache__DOT__write_back_data),512);
            tracep->chgIData(oldp+1331,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
            tracep->chgCData(oldp+1332,(vlSelf->top__DOT__d_cache__DOT__unuse_way),2);
            tracep->chgQData(oldp+1333,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+1335,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
            tracep->chgQData(oldp+1337,(vlSelf->top__DOT__d_cache__DOT__receive_data_2),64);
            tracep->chgQData(oldp+1339,(vlSelf->top__DOT__d_cache__DOT__receive_data_3),64);
            tracep->chgQData(oldp+1341,(vlSelf->top__DOT__d_cache__DOT__receive_data_4),64);
            tracep->chgQData(oldp+1343,(vlSelf->top__DOT__d_cache__DOT__receive_data_5),64);
            tracep->chgQData(oldp+1345,(vlSelf->top__DOT__d_cache__DOT__receive_data_6),64);
            tracep->chgQData(oldp+1347,(vlSelf->top__DOT__d_cache__DOT__receive_data_7),64);
            tracep->chgCData(oldp+1349,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
            tracep->chgBit(oldp+1350,(vlSelf->top__DOT__d_cache__DOT__quene));
            tracep->chgCData(oldp+1351,((7U & (IData)(vlSelf->top__DOT__exu_step__DOT__add_res))),3);
            tracep->chgCData(oldp+1352,((0x7fU & (IData)(
                                                         (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                          >> 3U)))),7);
            tracep->chgIData(oldp+1353,((0x3fffffU 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                    >> 0xaU)))),22);
            tracep->chgCData(oldp+1354,((0x38U & ((IData)(vlSelf->top__DOT__exu_step__DOT__add_res) 
                                                  << 3U))),6);
            tracep->chgQData(oldp+1355,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
            tracep->chgCData(oldp+1357,(vlSelf->top__DOT__d_cache__DOT__state),3);
            tracep->chgSData(oldp+1358,((vlSelf->top__DOT__idu_step_io_inst 
                                         >> 0x14U)),12);
            tracep->chgIData(oldp+1359,(((0x80000U 
                                          & (vlSelf->top__DOT__idu_step_io_inst 
                                             >> 0xcU)) 
                                         | ((0x7f800U 
                                             & (vlSelf->top__DOT__idu_step_io_inst 
                                                >> 1U)) 
                                            | ((0x400U 
                                                & (vlSelf->top__DOT__idu_step_io_inst 
                                                   >> 0xaU)) 
                                               | (0x3ffU 
                                                  & (vlSelf->top__DOT__idu_step_io_inst 
                                                     >> 0x15U)))))),20);
            tracep->chgIData(oldp+1360,((vlSelf->top__DOT__idu_step_io_inst 
                                         >> 0xcU)),20);
            tracep->chgSData(oldp+1361,(((0xfe0U & 
                                          (vlSelf->top__DOT__idu_step_io_inst 
                                           >> 0x14U)) 
                                         | (0x1fU & 
                                            (vlSelf->top__DOT__idu_step_io_inst 
                                             >> 7U)))),12);
            tracep->chgSData(oldp+1362,(((0x800U & 
                                          (vlSelf->top__DOT__idu_step_io_inst 
                                           >> 0x14U)) 
                                         | ((0x400U 
                                             & (vlSelf->top__DOT__idu_step_io_inst 
                                                << 3U)) 
                                            | ((0x3f0U 
                                                & (vlSelf->top__DOT__idu_step_io_inst 
                                                   >> 0x15U)) 
                                               | (0xfU 
                                                  & (vlSelf->top__DOT__idu_step_io_inst 
                                                     >> 8U)))))),12);
            tracep->chgIData(oldp+1363,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188),32);
            tracep->chgQData(oldp+1364,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
            tracep->chgQData(oldp+1366,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
            tracep->chgQData(oldp+1368,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
            tracep->chgQData(oldp+1370,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
            tracep->chgQData(oldp+1372,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
            tracep->chgQData(oldp+1374,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
            tracep->chgQData(oldp+1376,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
            tracep->chgQData(oldp+1378,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
            tracep->chgQData(oldp+1380,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
            tracep->chgQData(oldp+1382,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
            tracep->chgQData(oldp+1384,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
            tracep->chgQData(oldp+1386,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
            tracep->chgQData(oldp+1388,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
            tracep->chgQData(oldp+1390,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
            tracep->chgQData(oldp+1392,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
            tracep->chgQData(oldp+1394,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
            tracep->chgQData(oldp+1396,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
            tracep->chgQData(oldp+1398,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
            tracep->chgQData(oldp+1400,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
            tracep->chgQData(oldp+1402,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
            tracep->chgQData(oldp+1404,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
            tracep->chgQData(oldp+1406,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
            tracep->chgQData(oldp+1408,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
            tracep->chgQData(oldp+1410,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
            tracep->chgQData(oldp+1412,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
            tracep->chgQData(oldp+1414,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
            tracep->chgQData(oldp+1416,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
            tracep->chgQData(oldp+1418,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
            tracep->chgQData(oldp+1420,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
            tracep->chgQData(oldp+1422,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
            tracep->chgQData(oldp+1424,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
            tracep->chgQData(oldp+1426,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
            tracep->chgQData(oldp+1428,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                   >> 0xfU))]),64);
            tracep->chgQData(oldp+1430,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                   >> 0x14U))]),64);
            tracep->chgQData(oldp+1432,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                   >> 7U))]),64);
            tracep->chgQData(oldp+1434,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x11U]),64);
            tracep->chgQData(oldp+1436,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0U]),64);
            tracep->chgQData(oldp+1438,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [1U]),64);
            tracep->chgQData(oldp+1440,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [2U]),64);
            tracep->chgQData(oldp+1442,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [3U]),64);
            tracep->chgQData(oldp+1444,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [4U]),64);
            tracep->chgQData(oldp+1446,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [5U]),64);
            tracep->chgQData(oldp+1448,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [6U]),64);
            tracep->chgQData(oldp+1450,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [7U]),64);
            tracep->chgQData(oldp+1452,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [8U]),64);
            tracep->chgQData(oldp+1454,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [9U]),64);
            tracep->chgQData(oldp+1456,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0xaU]),64);
            tracep->chgQData(oldp+1458,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0xbU]),64);
            tracep->chgQData(oldp+1460,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0xcU]),64);
            tracep->chgQData(oldp+1462,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0xdU]),64);
            tracep->chgQData(oldp+1464,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0xeU]),64);
            tracep->chgQData(oldp+1466,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0xfU]),64);
            tracep->chgQData(oldp+1468,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x10U]),64);
            tracep->chgQData(oldp+1470,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x12U]),64);
            tracep->chgQData(oldp+1472,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x13U]),64);
            tracep->chgQData(oldp+1474,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x14U]),64);
            tracep->chgQData(oldp+1476,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x15U]),64);
            tracep->chgQData(oldp+1478,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x16U]),64);
            tracep->chgQData(oldp+1480,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x17U]),64);
            tracep->chgQData(oldp+1482,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x18U]),64);
            tracep->chgQData(oldp+1484,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x19U]),64);
            tracep->chgQData(oldp+1486,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x1aU]),64);
            tracep->chgQData(oldp+1488,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x1bU]),64);
            tracep->chgQData(oldp+1490,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x1cU]),64);
            tracep->chgQData(oldp+1492,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x1dU]),64);
            tracep->chgQData(oldp+1494,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x1eU]),64);
            tracep->chgQData(oldp+1496,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x1fU]),64);
            tracep->chgQData(oldp+1498,(vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data),64);
            tracep->chgQData(oldp+1500,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[0]),64);
            tracep->chgQData(oldp+1502,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[1]),64);
            tracep->chgQData(oldp+1504,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[2]),64);
            tracep->chgQData(oldp+1506,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[3]),64);
            tracep->chgCData(oldp+1508,(((0x342U == 
                                          (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                          ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))),2);
            tracep->chgQData(oldp+1509,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [((0x342U == 
                                           (0xfffU 
                                            & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                           ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]),64);
            tracep->chgQData(oldp+1511,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [1U]),64);
            tracep->chgQData(oldp+1513,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [3U]),64);
            tracep->chgQData(oldp+1515,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [0U]),64);
            tracep->chgQData(oldp+1517,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [2U]),64);
            tracep->chgQData(oldp+1519,(((IData)(vlSelf->top__DOT__exu_step__DOT___T_9)
                                          ? vlSelf->top__DOT__pc_now
                                          : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                         [1U])),64);
            tracep->chgQData(oldp+1521,(((IData)(vlSelf->top__DOT__exu_step__DOT___T_9)
                                          ? vlSelf->top__DOT__exu_step__DOT__Regfile
                                         [0x11U] : 
                                         vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                         [3U])),64);
            tracep->chgQData(oldp+1523,(((((0x1073U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__idu_step_io_inst)) 
                                           | ((0x2073U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst)) 
                                              | (0x3073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__idu_step_io_inst)))) 
                                          & (IData)(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid))
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
                                                  [
                                                  ((0x342U 
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
                                         [((0x342U 
                                            == (0xfffU 
                                                & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                            ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])),64);
            tracep->chgSData(oldp+1525,((0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm))),12);
            tracep->chgQData(oldp+1526,(vlSelf->top__DOT__exu_step__DOT__src1_value),64);
            tracep->chgQData(oldp+1528,(vlSelf->top__DOT__exu_step__DOT__src2_value),64);
            tracep->chgQData(oldp+1530,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
            tracep->chgQData(oldp+1532,(vlSelf->top__DOT__exu_step__DOT__sub_res),64);
            tracep->chgQData(oldp+1534,(vlSelf->top__DOT__exu_step__DOT__sra_res),64);
            tracep->chgQData(oldp+1536,(vlSelf->top__DOT__exu_step__DOT__srl_res),64);
            tracep->chgWData(oldp+1538,(vlSelf->top__DOT__exu_step__DOT__sll_res),127);
            tracep->chgIData(oldp+1542,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),32);
            tracep->chgIData(oldp+1543,(vlSelf->top__DOT__exu_step__DOT__srlw_res),32);
            tracep->chgQData(oldp+1544,(vlSelf->top__DOT__exu_step__DOT__sllw_res),63);
            tracep->chgQData(oldp+1546,(vlSelf->top__DOT__exu_step__DOT__or_res),64);
            tracep->chgQData(oldp+1548,(vlSelf->top__DOT__exu_step__DOT__xor_res),64);
            tracep->chgQData(oldp+1550,(vlSelf->top__DOT__exu_step__DOT__and_res),64);
            VL_EXTEND_WQ(128,64, __Vtemp2271, vlSelf->top__DOT__exu_step__DOT__src1_value);
            VL_EXTEND_WQ(128,64, __Vtemp2272, vlSelf->top__DOT__exu_step__DOT__src2_value);
            VL_MUL_W(4, __Vtemp2273, __Vtemp2271, __Vtemp2272);
            tracep->chgQData(oldp+1552,((((QData)((IData)(
                                                          __Vtemp2273[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           __Vtemp2273[0U])))),64);
            tracep->chgIData(oldp+1554,((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2)),32);
            tracep->chgIData(oldp+1555,((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4)),32);
            tracep->chgIData(oldp+1556,(vlSelf->top__DOT__exu_step__DOT__divuw_res),32);
            tracep->chgIData(oldp+1557,(vlSelf->top__DOT__exu_step__DOT__remw_res),32);
            tracep->chgIData(oldp+1558,(vlSelf->top__DOT__exu_step__DOT__remuw_res),32);
            VL_EXTENDS_WQ(65,64, __Vtemp2276, vlSelf->top__DOT__exu_step__DOT__src1_value);
            __Vtemp2277[0U] = __Vtemp2276[0U];
            __Vtemp2277[1U] = __Vtemp2276[1U];
            __Vtemp2277[2U] = (1U & __Vtemp2276[2U]);
            VL_EXTENDS_WQ(65,64, __Vtemp2279, vlSelf->top__DOT__exu_step__DOT__src2_value);
            __Vtemp2280[0U] = __Vtemp2279[0U];
            __Vtemp2280[1U] = __Vtemp2279[1U];
            __Vtemp2280[2U] = (1U & __Vtemp2279[2U]);
            VL_DIVS_WWW(65, __Vtemp2281, __Vtemp2277, __Vtemp2280);
            __Vtemp2282[0U] = __Vtemp2281[0U];
            __Vtemp2282[1U] = __Vtemp2281[1U];
            __Vtemp2282[2U] = (1U & __Vtemp2281[2U]);
            tracep->chgWData(oldp+1559,(__Vtemp2282),65);
            tracep->chgQData(oldp+1562,(VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+1564,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+1566,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+1568,(((0U == (0x1fU 
                                                 & (vlSelf->top__DOT__idu_step_io_inst 
                                                    >> 7U)))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__exu_step__DOT__Regfile
                                         [(0x1fU & 
                                           (vlSelf->top__DOT__idu_step_io_inst 
                                            >> 7U))])),64);
            tracep->chgQData(oldp+1570,(((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
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
                                                 [(
                                                   (0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                                    ? 3U
                                                    : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])
                                              : ((0x3fU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? vlSelf->top__DOT__exu_step__DOT__src1_value
                                                  : 0ULL)))),64);
            tracep->chgQData(oldp+1572,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0]),64);
            tracep->chgQData(oldp+1574,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1]),64);
            tracep->chgQData(oldp+1576,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2]),64);
            tracep->chgQData(oldp+1578,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3]),64);
            tracep->chgQData(oldp+1580,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4]),64);
            tracep->chgQData(oldp+1582,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5]),64);
            tracep->chgQData(oldp+1584,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6]),64);
            tracep->chgQData(oldp+1586,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7]),64);
            tracep->chgQData(oldp+1588,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8]),64);
            tracep->chgQData(oldp+1590,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9]),64);
            tracep->chgQData(oldp+1592,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[10]),64);
            tracep->chgQData(oldp+1594,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[11]),64);
            tracep->chgQData(oldp+1596,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[12]),64);
            tracep->chgQData(oldp+1598,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[13]),64);
            tracep->chgQData(oldp+1600,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[14]),64);
            tracep->chgQData(oldp+1602,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[15]),64);
            tracep->chgQData(oldp+1604,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[16]),64);
            tracep->chgQData(oldp+1606,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[17]),64);
            tracep->chgQData(oldp+1608,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[18]),64);
            tracep->chgQData(oldp+1610,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[19]),64);
            tracep->chgQData(oldp+1612,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[20]),64);
            tracep->chgQData(oldp+1614,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[21]),64);
            tracep->chgQData(oldp+1616,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[22]),64);
            tracep->chgQData(oldp+1618,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[23]),64);
            tracep->chgQData(oldp+1620,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[24]),64);
            tracep->chgQData(oldp+1622,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[25]),64);
            tracep->chgQData(oldp+1624,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[26]),64);
            tracep->chgQData(oldp+1626,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[27]),64);
            tracep->chgQData(oldp+1628,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[28]),64);
            tracep->chgQData(oldp+1630,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[29]),64);
            tracep->chgQData(oldp+1632,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[30]),64);
            tracep->chgQData(oldp+1634,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[31]),64);
            tracep->chgQData(oldp+1636,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[0]),64);
            tracep->chgQData(oldp+1638,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[1]),64);
            tracep->chgQData(oldp+1640,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[2]),64);
            tracep->chgQData(oldp+1642,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[3]),64);
        }
        tracep->chgBit(oldp+1644,(vlSelf->clock));
        tracep->chgBit(oldp+1645,(vlSelf->reset));
        tracep->chgIData(oldp+1646,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+1647,(vlSelf->io_pc),64);
        tracep->chgQData(oldp+1649,(vlSelf->io_pc_next),64);
        tracep->chgQData(oldp+1651,(vlSelf->io_outval),64);
        tracep->chgBit(oldp+1653,(vlSelf->io_step));
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
