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
    VlWide<4>/*127:0*/ __Vtemp328;
    VlWide<4>/*127:0*/ __Vtemp329;
    VlWide<4>/*127:0*/ __Vtemp336;
    VlWide<4>/*127:0*/ __Vtemp337;
    VlWide<4>/*127:0*/ __Vtemp338;
    VlWide<3>/*95:0*/ __Vtemp342;
    VlWide<3>/*95:0*/ __Vtemp343;
    VlWide<3>/*95:0*/ __Vtemp347;
    VlWide<3>/*95:0*/ __Vtemp351;
    VlWide<3>/*95:0*/ __Vtemp358;
    VlWide<4>/*127:0*/ __Vtemp359;
    VlWide<3>/*95:0*/ __Vtemp360;
    VlWide<4>/*127:0*/ __Vtemp361;
    VlWide<4>/*127:0*/ __Vtemp362;
    VlWide<4>/*127:0*/ __Vtemp368;
    VlWide<4>/*127:0*/ __Vtemp369;
    VlWide<4>/*127:0*/ __Vtemp370;
    VlWide<4>/*127:0*/ __Vtemp371;
    VlWide<4>/*127:0*/ __Vtemp372;
    VlWide<6>/*191:0*/ __Vtemp374;
    VlWide<6>/*191:0*/ __Vtemp375;
    VlWide<6>/*191:0*/ __Vtemp380;
    VlWide<6>/*191:0*/ __Vtemp381;
    VlWide<4>/*127:0*/ __Vtemp386;
    VlWide<4>/*127:0*/ __Vtemp387;
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
            __Vtemp328[0U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][0U];
            __Vtemp328[1U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][1U];
            __Vtemp328[2U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][2U];
            __Vtemp328[3U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][3U];
            VL_SHIFTR_WWI(128,128,7, __Vtemp329, __Vtemp328, 
                          (0x78U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                    << 3U)));
            tracep->chgQData(oldp+21,((((QData)((IData)(
                                                        ((1U 
                                                          == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                          ? 
                                                         __Vtemp329[1U]
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((1U 
                                                                      == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                                      ? 
                                                                     __Vtemp329[0U]
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
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__EXU_io_es_allowin));
            tracep->chgQData(oldp+31,(vlSelf->top__DOT__IDU__DOT__ds_pc),64);
            tracep->chgIData(oldp+33,(vlSelf->top__DOT__IDU__DOT__ctrl_bus_0),32);
            tracep->chgQData(oldp+34,(((1U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                        ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                                        : vlSelf->top__DOT__IDU__DOT__src1)),64);
            tracep->chgQData(oldp+36,(((IData)(vlSelf->top__DOT__IDU__DOT__ctrl_bus_3)
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
            tracep->chgBit(oldp+41,((1U & (IData)(vlSelf->top__DOT__IDU__DOT__ctrl_bus_1))));
            tracep->chgBit(oldp+42,((0x44U == (IData)(vlSelf->top__DOT__IDU__DOT__ctrl_bus_1))));
            tracep->chgBit(oldp+43,(((0x13U != (0x707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst)) 
                                     & ((0x67U != (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                        & ((0x3013U 
                                            != (0x707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst)) 
                                           & ((0x1bU 
                                               != (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                              & ((0x40005013U 
                                                  != 
                                                  (0xfc00707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                 & ((0x4013U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                    & ((0x7013U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                       & ((0x1013U 
                                                           != 
                                                           (0xfc00707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                          & (IData)(vlSelf->top__DOT__IDU__DOT___ctrl_bus_T_498)))))))))));
            tracep->chgCData(oldp+44,(((2U == (7U & 
                                               (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0xcU)))
                                        ? 0xfU : ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__IDU__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__IDU__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__IDU__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 0xffU
                                                     : 0U))))),8);
            tracep->chgCData(oldp+45,((7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__EXU_io_es_ld));
            tracep->chgQData(oldp+47,((((QData)((IData)(
                                                        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__LSU_io_ms_fwd_res),64);
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__EXU_io_es_fwd_ready));
            tracep->chgBit(oldp+52,(vlSelf->top__DOT__LSU_io_ms_fwd_ready));
            tracep->chgBit(oldp+53,(vlSelf->top__DOT__EXU__DOT__es_rf_we));
            tracep->chgBit(oldp+54,(vlSelf->top__DOT__LSU_io_ms_rf_we));
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__EXU__DOT__es_valid));
            tracep->chgBit(oldp+57,(vlSelf->top__DOT__LSU__DOT__ms_valid));
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__WBU__DOT__ws_valid));
            tracep->chgCData(oldp+59,(vlSelf->top__DOT__EXU__DOT__es_rd),5);
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__LSU__DOT__ms_rf_dst),5);
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__LSU_io_ms_allowin));
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__EXU__DOT__store_data),64);
            tracep->chgBit(oldp+66,(vlSelf->top__DOT__EXU__DOT__st_we));
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
            tracep->chgBit(oldp+68,(vlSelf->top__DOT__EXU__DOT__ld_we));
            tracep->chgCData(oldp+69,(vlSelf->top__DOT__EXU__DOT__load_type),3);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__LSU__DOT__ms_pc),64);
            tracep->chgQData(oldp+72,(((7U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                        ? vlSelf->top__DOT__LSU__DOT__rdata
                                        : vlSelf->top__DOT__LSU__DOT__ms_res)),64);
            tracep->chgBit(oldp+74,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
            tracep->chgBit(oldp+75,(((0xa0000000ULL 
                                      <= vlSelf->top__DOT__LSU__DOT__maddr) 
                                     & ((IData)(vlSelf->top__DOT__LSU__DOT__ren) 
                                        | (IData)(vlSelf->top__DOT__LSU__DOT__wen)))));
            tracep->chgQData(oldp+76,((((QData)((IData)(
                                                        vlSelf->top__DOT__d_cache__DOT___GEN_421[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___GEN_421[0U])))),64);
            tracep->chgBit(oldp+78,(((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)
                                      : ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                         & ((3U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                            & ((4U 
                                                != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                               & ((6U 
                                                   != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                  & (((0U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                     & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)))))))));
            tracep->chgBit(oldp+79,(((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                     & ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)
                                         : ((3U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                            & ((4U 
                                                == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                                : (
                                                   (6U 
                                                    != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                   & (((0U 
                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                       & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                      & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)))))))));
            tracep->chgIData(oldp+80,((IData)(vlSelf->top__DOT__LSU__DOT__maddr)),32);
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__LSU_io_axi_out_arvalid));
            tracep->chgBit(oldp+82,(vlSelf->top__DOT__LSU_io_axi_out_awvalid));
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__LSU__DOT__store_data),64);
            tracep->chgCData(oldp+85,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
            tracep->chgBit(oldp+86,(vlSelf->top__DOT__LSU__DOT__wen));
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
            tracep->chgBit(oldp+89,(((IData)(vlSelf->top__DOT__WBU__DOT__device_access) 
                                     & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid))));
            tracep->chgIData(oldp+90,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_466)),32);
            tracep->chgCData(oldp+91,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid),8);
            tracep->chgBit(oldp+92,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
            tracep->chgBit(oldp+93,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
            tracep->chgBit(oldp+96,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
            tracep->chgBit(oldp+97,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
            tracep->chgIData(oldp+98,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)),32);
            tracep->chgCData(oldp+99,(vlSelf->top__DOT__d_cache_io_to_axi_arlen),8);
            tracep->chgBit(oldp+100,(vlSelf->top__DOT__d_cache_io_to_axi_arvalid));
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__d_cache_io_to_axi_rready));
            tracep->chgIData(oldp+102,(vlSelf->top__DOT__d_cache_io_to_axi_awaddr),32);
            tracep->chgCData(oldp+103,(vlSelf->top__DOT__d_cache_io_to_axi_awlen),8);
            tracep->chgBit(oldp+104,(vlSelf->top__DOT__d_cache_io_to_axi_awvalid));
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__d_cache_io_to_axi_wdata),64);
            tracep->chgCData(oldp+107,(vlSelf->top__DOT__d_cache_io_to_axi_wstrb),8);
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__d_cache_io_to_axi_wvalid));
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__d_cache_io_to_axi_bready));
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast));
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
            tracep->chgBit(oldp+114,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__axi_io_axi_out_rlast));
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__axi__DOT__axi_wready));
            tracep->chgBit(oldp+121,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
            tracep->chgIData(oldp+122,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
                                             : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_466)
                                                  : 0U)))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_466)
                                             : ((2U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
                                                  : 0U))))),32);
            tracep->chgCData(oldp+123,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
            tracep->chgIData(oldp+126,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgCData(oldp+127,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
            tracep->chgQData(oldp+129,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgCData(oldp+131,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
            tracep->chgBit(oldp+133,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
            tracep->chgIData(oldp+134,((2U == (IData)(vlSelf->top__DOT__IDU__DOT__ctrl_bus_0))),32);
            tracep->chgIData(oldp+135,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT__ctrl_bus_0))),32);
            tracep->chgQData(oldp+136,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)
                                         ? vlSelf->top__DOT__WBU__DOT__ws_pc
                                         : ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)
                                             ? vlSelf->top__DOT__LSU__DOT__ms_pc
                                             : ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid)
                                                 ? vlSelf->top__DOT__EXU__DOT__es_pc
                                                 : 
                                                ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                  ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                  : vlSelf->top__DOT__IFU__DOT__fs_pc))))),64);
            tracep->chgBit(oldp+138,(vlSelf->top__DOT__diff_step));
            tracep->chgBit(oldp+139,(vlSelf->top__DOT__skip));
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__Register__DOT__Reg
                                       [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0xfU))]),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__Register__DOT__Reg
                                       [vlSelf->top__DOT__IDU_io_raddr2]),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0U]),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__Register__DOT__Reg
                                       [1U]),64);
            tracep->chgQData(oldp+212,(vlSelf->top__DOT__Register__DOT__Reg
                                       [2U]),64);
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__Register__DOT__Reg
                                       [3U]),64);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__Register__DOT__Reg
                                       [4U]),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__Register__DOT__Reg
                                       [5U]),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__Register__DOT__Reg
                                       [6U]),64);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__Register__DOT__Reg
                                       [7U]),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__Register__DOT__Reg
                                       [8U]),64);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__Register__DOT__Reg
                                       [9U]),64);
            tracep->chgQData(oldp+228,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xaU]),64);
            tracep->chgQData(oldp+230,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xbU]),64);
            tracep->chgQData(oldp+232,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xcU]),64);
            tracep->chgQData(oldp+234,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xdU]),64);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xeU]),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xfU]),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x10U]),64);
            tracep->chgQData(oldp+242,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x11U]),64);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x12U]),64);
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x13U]),64);
            tracep->chgQData(oldp+248,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x14U]),64);
            tracep->chgQData(oldp+250,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x15U]),64);
            tracep->chgQData(oldp+252,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x16U]),64);
            tracep->chgQData(oldp+254,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x17U]),64);
            tracep->chgQData(oldp+256,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x18U]),64);
            tracep->chgQData(oldp+258,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x19U]),64);
            tracep->chgQData(oldp+260,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1aU]),64);
            tracep->chgQData(oldp+262,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1bU]),64);
            tracep->chgQData(oldp+264,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1cU]),64);
            tracep->chgQData(oldp+266,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1dU]),64);
            tracep->chgQData(oldp+268,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1eU]),64);
            tracep->chgQData(oldp+270,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1fU]),64);
            tracep->chgBit(oldp+272,((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                       & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
                                      & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))));
            tracep->chgQData(oldp+273,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
            tracep->chgQData(oldp+275,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
            tracep->chgQData(oldp+277,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
            tracep->chgQData(oldp+279,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
            tracep->chgQData(oldp+285,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
            tracep->chgQData(oldp+287,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
            tracep->chgQData(oldp+295,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
            tracep->chgQData(oldp+297,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
            tracep->chgQData(oldp+305,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
            tracep->chgQData(oldp+307,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
            tracep->chgQData(oldp+309,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
            tracep->chgQData(oldp+311,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
            tracep->chgQData(oldp+313,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
            tracep->chgQData(oldp+315,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
            tracep->chgQData(oldp+317,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
            tracep->chgQData(oldp+319,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
            tracep->chgQData(oldp+321,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
            tracep->chgQData(oldp+323,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
            tracep->chgQData(oldp+325,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
            tracep->chgQData(oldp+327,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
            tracep->chgQData(oldp+329,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
            tracep->chgQData(oldp+331,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
            tracep->chgQData(oldp+333,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
            tracep->chgQData(oldp+335,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
            tracep->chgQData(oldp+337,(vlSelf->top__DOT__IFU__DOT__br_target),64);
            tracep->chgQData(oldp+339,(vlSelf->top__DOT__IFU__DOT__fs_pc_next),64);
            tracep->chgBit(oldp+341,(vlSelf->top__DOT__IFU__DOT__cache_init));
            tracep->chgQData(oldp+342,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
            tracep->chgQData(oldp+344,(((IData)(vlSelf->top__DOT__IDU_io_br_taken)
                                         ? ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                             ? vlSelf->top__DOT__IDU_io_br_target
                                             : vlSelf->top__DOT__IFU__DOT__br_target)
                                         : (4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc))),64);
            tracep->chgBit(oldp+346,(((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                      & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
            tracep->chgBit(oldp+347,((((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                       >> 1U) & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
            tracep->chgCData(oldp+348,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                         ? 1U : ((1U 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                                  ? (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)
                                                  : 0U))),2);
            tracep->chgQData(oldp+349,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                         ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                         : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                             ? ((3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__IDU__DOT__inst 
                                                     >> 0xcU)))
                                                 ? 
                                                (vlSelf->top__DOT__IDU__DOT__rdata1 
                                                 & (~ vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data))
                                                 : 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__IDU__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 
                                                 (vlSelf->top__DOT__IDU__DOT__rdata1 
                                                  | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__IDU__DOT__inst 
                                                       >> 0xcU)))
                                                   ? vlSelf->top__DOT__IDU__DOT__rdata1
                                                   : 0ULL)))
                                             : 0ULL))),64);
            tracep->chgQData(oldp+351,(((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))
                                         : vlSelf->top__DOT__IDU__DOT___rdata2_T_1)),64);
            tracep->chgCData(oldp+353,(((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                         ? 0U : ((0x3eU 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT__ctrl_bus_0))
                                                  ? 1U
                                                  : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))),2);
            tracep->chgQData(oldp+354,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data),64);
            tracep->chgIData(oldp+356,(vlSelf->top__DOT__IDU__DOT__inst),32);
            tracep->chgBit(oldp+357,(vlSelf->top__DOT__IDU__DOT__br_taken_cancel));
            tracep->chgBit(oldp+358,(vlSelf->top__DOT__IDU__DOT__ctrl_bus_4));
            tracep->chgCData(oldp+359,(vlSelf->top__DOT__IDU__DOT__ctrl_bus_1),7);
            tracep->chgIData(oldp+360,(vlSelf->top__DOT__IDU__DOT__ctrl_bus_1),32);
            tracep->chgCData(oldp+361,((0x7fU & vlSelf->top__DOT__IDU__DOT__inst)),7);
            tracep->chgCData(oldp+362,(vlSelf->top__DOT__IDU__DOT__ctrl_bus_0),7);
            tracep->chgCData(oldp+363,(vlSelf->top__DOT__IDU__DOT__csr_write),2);
            tracep->chgBit(oldp+364,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1));
            tracep->chgBit(oldp+365,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1));
            tracep->chgBit(oldp+366,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1));
            tracep->chgBit(oldp+367,(vlSelf->top__DOT__IDU__DOT__ctrl_bus_3));
            tracep->chgCData(oldp+368,(vlSelf->top__DOT__IDU__DOT__rs2),5);
            tracep->chgBit(oldp+369,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2));
            tracep->chgBit(oldp+370,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2));
            tracep->chgBit(oldp+371,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2));
            tracep->chgBit(oldp+372,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
            tracep->chgQData(oldp+373,(vlSelf->top__DOT__IDU__DOT__rdata1),64);
            tracep->chgQData(oldp+375,(vlSelf->top__DOT__IDU__DOT__rdata2),64);
            tracep->chgBit(oldp+377,((vlSelf->top__DOT__IDU__DOT___bne_res_T 
                                      != vlSelf->top__DOT__IDU__DOT___bne_res_T_1)));
            tracep->chgBit(oldp+378,((vlSelf->top__DOT__IDU__DOT___bne_res_T 
                                      == vlSelf->top__DOT__IDU__DOT___bne_res_T_1)));
            tracep->chgBit(oldp+379,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__IDU__DOT___bne_res_T, vlSelf->top__DOT__IDU__DOT___bne_res_T_1)));
            tracep->chgBit(oldp+380,(VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__IDU__DOT___bne_res_T, vlSelf->top__DOT__IDU__DOT___bne_res_T_1)));
            tracep->chgBit(oldp+381,((vlSelf->top__DOT__IDU__DOT__rdata1 
                                      < vlSelf->top__DOT__IDU__DOT__rdata2)));
            tracep->chgBit(oldp+382,((vlSelf->top__DOT__IDU__DOT__rdata1 
                                      >= vlSelf->top__DOT__IDU__DOT__rdata2)));
            tracep->chgBit(oldp+383,(vlSelf->top__DOT__IDU__DOT__ctrl_bus_6));
            tracep->chgSData(oldp+384,((vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U)),12);
            tracep->chgIData(oldp+385,(((0x80000U & 
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
            tracep->chgIData(oldp+386,((vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+387,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 7U)))),12);
            tracep->chgSData(oldp+388,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
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
            tracep->chgQData(oldp+389,(vlSelf->top__DOT__IDU__DOT__imm),64);
            tracep->chgCData(oldp+391,(vlSelf->top__DOT__IDU__DOT__csr_index),2);
            tracep->chgQData(oldp+392,(((3U == (7U 
                                                & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   >> 0xcU)))
                                         ? (vlSelf->top__DOT__IDU__DOT__rdata1 
                                            & (~ vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data))
                                         : ((2U == 
                                             (7U & 
                                              (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xcU)))
                                             ? (vlSelf->top__DOT__IDU__DOT__rdata1 
                                                | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                             : ((5U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__IDU__DOT__inst 
                                                     >> 0xcU)))
                                                 ? vlSelf->top__DOT__IDU__DOT__rdata1
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+394,(vlSelf->top__DOT__IDU__DOT__src1),64);
            tracep->chgQData(oldp+396,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[0]),64);
            tracep->chgQData(oldp+398,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[1]),64);
            tracep->chgQData(oldp+400,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[2]),64);
            tracep->chgQData(oldp+402,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[3]),64);
            tracep->chgQData(oldp+404,(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value),64);
            tracep->chgQData(oldp+406,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
            tracep->chgIData(oldp+408,(vlSelf->top__DOT__EXU__DOT__ALUop),32);
            tracep->chgBit(oldp+409,(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy));
            tracep->chgQData(oldp+410,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
            tracep->chgBit(oldp+412,((1U & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)))));
            tracep->chgBit(oldp+413,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid));
            tracep->chgBit(oldp+414,((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)));
            tracep->chgBit(oldp+415,(((0U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                      & ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                         & (0U == (
                                                   (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                    | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                   | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))))));
            tracep->chgIData(oldp+416,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                         ? 0U : ((1U 
                                                  == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                                  ? 
                                                 ((0U 
                                                   != 
                                                   ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                     | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                    | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                                   ? 0U
                                                   : 
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
                                                                 >> 0x20U)))))
                                                  : 0U))),32);
            tracep->chgIData(oldp+417,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo),32);
            tracep->chgBit(oldp+418,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid));
            tracep->chgBit(oldp+419,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw));
            tracep->chgBit(oldp+420,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed));
            tracep->chgBit(oldp+421,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start) 
                                      & VL_GTES_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num))));
            tracep->chgQData(oldp+422,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient),64);
            tracep->chgQData(oldp+424,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder),64);
            tracep->chgBit(oldp+426,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid));
            tracep->chgBit(oldp+427,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid));
            tracep->chgQData(oldp+428,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res),64);
            tracep->chgQData(oldp+430,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res),64);
            tracep->chgQData(oldp+432,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res),64);
            tracep->chgQData(oldp+434,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),64);
            VL_EXTEND_WQ(127,64, __Vtemp336, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
            VL_SHIFTL_WWI(127,127,6, __Vtemp337, __Vtemp336, 
                          (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
            __Vtemp338[0U] = __Vtemp337[0U];
            __Vtemp338[1U] = __Vtemp337[1U];
            __Vtemp338[2U] = __Vtemp337[2U];
            __Vtemp338[3U] = (0x7fffffffU & __Vtemp337[3U]);
            tracep->chgWData(oldp+436,(__Vtemp338),127);
            tracep->chgIData(oldp+440,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
            tracep->chgIData(oldp+441,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res),32);
            tracep->chgQData(oldp+442,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res),63);
            tracep->chgQData(oldp+444,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        | vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+446,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        ^ vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+448,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        & vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+450,((((QData)((IData)(
                                                         ((0U 
                                                           == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                                           ? 0U
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                                            ? 
                                                           ((0U 
                                                             != 
                                                             ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                               | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                              | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                                             ? 0U
                                                             : 
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
                                                                           >> 0x20U)))))
                                                            : 0U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo)))),64);
            tracep->chgIData(oldp+452,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient)),32);
            tracep->chgIData(oldp+453,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder)),32);
            tracep->chgWData(oldp+454,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res),127);
            tracep->chgCData(oldp+458,((7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])),3);
            tracep->chgQData(oldp+459,((((QData)((IData)(
                                                         vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))),64);
            tracep->chgBit(oldp+461,(((6U == (7U & 
                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                      | ((5U == (7U 
                                                 & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                         | (4U == (7U 
                                                   & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))))));
            VL_EXTEND_WQ(65,64, __Vtemp342, (~ (((QData)((IData)(
                                                                 vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
            VL_EXTEND_WQ(65,64, __Vtemp343, (~ (((QData)((IData)(
                                                                 vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
            VL_EXTEND_WQ(65,64, __Vtemp347, ((2U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                              ? (((QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))
                                                  : 0ULL)));
            __Vtemp351[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
                                       >> 0x1fU) | 
                                      ((IData)(((((QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U]))) 
                                                >> 0x20U)) 
                                       << 1U)) : __Vtemp347[1U]));
            __Vtemp358[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                               ? 0U : (1U & ((6U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                              ? __Vtemp342[2U]
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                  ? 
                                                 __Vtemp343[2U]
                                                  : 
                                                 ((4U 
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
                                                   __Vtemp347[2U]))))));
            tracep->chgQData(oldp+462,((((QData)((IData)(
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
                                                           __Vtemp342[1U]
                                                            : 
                                                           ((5U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                             ? 
                                                            __Vtemp343[1U]
                                                             : 
                                                            __Vtemp351[1U]))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
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
                                                            __Vtemp342[0U]
                                                             : 
                                                            ((5U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                              ? 
                                                             __Vtemp343[0U]
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
                                                               __Vtemp347[0U]))))))))),64);
            tracep->chgBit(oldp+464,((1U & ((IData)(
                                                    (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                     >> 0x3fU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__EXU__DOT__src2_value 
                                                       >> 0x3fU))))));
            tracep->chgQData(oldp+465,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res),64);
            tracep->chgCData(oldp+467,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state),2);
            tracep->chgWData(oldp+468,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1),128);
            tracep->chgWData(oldp+472,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2),65);
            tracep->chgQData(oldp+475,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32),64);
            tracep->chgQData(oldp+477,(((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
            __Vtemp359[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
            __Vtemp359[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                      >> 0x20U));
            __Vtemp359[2U] = (IData)(((1U & (IData)(
                                                    (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                     >> 0x3fU)))
                                       ? 0xffffffffffffffffULL
                                       : 0ULL));
            __Vtemp359[3U] = (IData)((((1U & (IData)(
                                                     (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                      >> 0x3fU)))
                                        ? 0xffffffffffffffffULL
                                        : 0ULL) >> 0x20U));
            tracep->chgWData(oldp+479,(__Vtemp359),128);
            tracep->chgQData(oldp+483,((((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
            tracep->chgBit(oldp+485,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg));
            tracep->chgBit(oldp+486,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg));
            tracep->chgBit(oldp+487,((((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg) 
                                       & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg))) 
                                      | ((~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)) 
                                         & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)))));
            tracep->chgQData(oldp+488,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s),64);
            tracep->chgQData(oldp+490,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s),64);
            tracep->chgQData(oldp+492,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                         ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                         : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)),64);
            tracep->chgQData(oldp+494,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                         ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                         : vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+496,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                         ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                             : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                         : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                             ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                             : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))),64);
            tracep->chgQData(oldp+498,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                         ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                             : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                         : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                             ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                             : vlSelf->top__DOT__EXU__DOT__src2_value))),64);
            VL_EXTEND_WQ(65,64, __Vtemp360, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                              ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                                  ? 
                                                 (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                                  : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                              : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                                  ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                                  : vlSelf->top__DOT__EXU__DOT__src2_value)));
            tracep->chgWData(oldp+500,(__Vtemp360),65);
            tracep->chgWData(oldp+503,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand),128);
            tracep->chgBit(oldp+507,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start));
            tracep->chgQData(oldp+508,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient),64);
            tracep->chgIData(oldp+510,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num),32);
            VL_EXTEND_WQ(128,64, __Vtemp361, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                               ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                                   ? 
                                                  (1ULL 
                                                   + 
                                                   (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                                   : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                               : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                                   ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                                   : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
            tracep->chgWData(oldp+511,(__Vtemp361),128);
            tracep->chgWData(oldp+515,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res),65);
            __Vtemp362[0U] = 0U;
            __Vtemp362[1U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                              << 0x1fU);
            __Vtemp362[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                               >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                         << 0x1fU));
            __Vtemp362[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                               >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                         << 0x1fU));
            tracep->chgWData(oldp+518,(__Vtemp362),128);
            if ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])) {
                __Vtemp368[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
                __Vtemp368[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U];
                __Vtemp368[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U];
                __Vtemp368[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U];
            } else {
                __Vtemp368[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
                __Vtemp368[1U] = ((0x7fffffffU & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                                  | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                     << 0x1fU));
                __Vtemp368[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                   >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                             << 0x1fU));
                __Vtemp368[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                   >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                             << 0x1fU));
            }
            tracep->chgWData(oldp+522,(__Vtemp368),128);
            tracep->chgQData(oldp+526,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
            tracep->chgBit(oldp+528,(vlSelf->top__DOT__LSU__DOT__ren));
            tracep->chgQData(oldp+529,(vlSelf->top__DOT__LSU__DOT__maddr),64);
            tracep->chgCData(oldp+531,(vlSelf->top__DOT__LSU__DOT__load_type),3);
            tracep->chgBit(oldp+532,(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
            tracep->chgQData(oldp+533,(vlSelf->top__DOT__LSU__DOT__rdata),64);
            tracep->chgBit(oldp+535,(vlSelf->top__DOT__WBU__DOT__device_access));
            tracep->chgCData(oldp+536,(vlSelf->top__DOT__arbiter__DOT__state),2);
            tracep->chgBit(oldp+537,((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))));
            tracep->chgCData(oldp+538,((0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                       ? 3U
                                                       : 0U)))) 
                                                  << 6U) 
                                                 + 
                                                 (0x3fU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 4U))))),8);
            __Vtemp369[0U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][0U];
            __Vtemp369[1U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][1U];
            __Vtemp369[2U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][2U];
            __Vtemp369[3U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][3U];
            tracep->chgWData(oldp+539,(__Vtemp369),128);
            __Vtemp370[0U] = (IData)(vlSelf->top__DOT__i_cache__DOT__receive_data_0);
            __Vtemp370[1U] = (IData)((vlSelf->top__DOT__i_cache__DOT__receive_data_0 
                                      >> 0x20U));
            __Vtemp370[2U] = (IData)(vlSelf->top__DOT__i_cache__DOT__receive_data_1);
            __Vtemp370[3U] = (IData)((vlSelf->top__DOT__i_cache__DOT__receive_data_1 
                                      >> 0x20U));
            tracep->chgWData(oldp+543,(__Vtemp370),128);
            tracep->chgCData(oldp+547,((0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__unvalidIndex))),8);
            tracep->chgBit(oldp+548,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_284))));
            tracep->chgCData(oldp+549,((0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2))),8);
            tracep->chgBit(oldp+550,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_294))));
            tracep->chgCData(oldp+551,((0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                 >> 4U))),8);
            tracep->chgBit(oldp+552,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_0_MPORT_data));
            tracep->chgCData(oldp+553,((0xffU & ((IData)(0x40U) 
                                                 + 
                                                 (0x3fU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 4U))))),8);
            tracep->chgBit(oldp+554,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data));
            tracep->chgCData(oldp+555,((0xffU & ((IData)(0x80U) 
                                                 + 
                                                 (0x3fU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 4U))))),8);
            tracep->chgBit(oldp+556,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data));
            tracep->chgCData(oldp+557,((0xffU & ((IData)(0xc0U) 
                                                 + 
                                                 (0x3fU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 4U))))),8);
            tracep->chgBit(oldp+558,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data));
            tracep->chgBit(oldp+559,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))));
            tracep->chgIData(oldp+560,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                       [(0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                  >> 4U))]),32);
            tracep->chgIData(oldp+561,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                       [(0xffU & ((IData)(0x40U) 
                                                  + 
                                                  (0x3fU 
                                                   & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 4U))))]),32);
            tracep->chgIData(oldp+562,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                       [(0xffU & ((IData)(0x80U) 
                                                  + 
                                                  (0x3fU 
                                                   & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 4U))))]),32);
            tracep->chgIData(oldp+563,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                       [(0xffU & ((IData)(0xc0U) 
                                                  + 
                                                  (0x3fU 
                                                   & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 4U))))]),32);
            tracep->chgIData(oldp+564,((vlSelf->top__DOT__i_cache__DOT__addr 
                                        >> 0xaU)),32);
            tracep->chgCData(oldp+565,((0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                 >> 4U))),6);
            tracep->chgCData(oldp+566,(vlSelf->top__DOT__i_cache__DOT__quene_replace_way_MPORT_data),8);
            tracep->chgCData(oldp+567,(vlSelf->top__DOT__i_cache__DOT__quene
                                       [(0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                  >> 4U))]),8);
            tracep->chgCData(oldp+568,((0xffU & ((vlSelf->top__DOT__i_cache__DOT__quene
                                                  [
                                                  (0x3fU 
                                                   & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 4U))] 
                                                  << 2U) 
                                                 | (IData)(vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex)))),8);
            tracep->chgCData(oldp+569,((0xffU & ((vlSelf->top__DOT__i_cache__DOT__quene
                                                  [
                                                  (0x3fU 
                                                   & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 4U))] 
                                                  << 2U) 
                                                 | (3U 
                                                    & ((IData)(vlSelf->top__DOT__i_cache__DOT__quene_replace_way_MPORT_data) 
                                                       >> 6U))))),8);
            tracep->chgIData(oldp+570,(vlSelf->top__DOT__i_cache__DOT__addr),32);
            tracep->chgCData(oldp+571,((0xfU & vlSelf->top__DOT__i_cache__DOT__addr)),4);
            tracep->chgIData(oldp+572,((vlSelf->top__DOT__i_cache__DOT__addr 
                                        >> 0xaU)),22);
            tracep->chgCData(oldp+573,((0x78U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                 << 3U))),7);
            tracep->chgBit(oldp+574,(vlSelf->top__DOT__i_cache__DOT__allvalid));
            tracep->chgCData(oldp+575,(vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex),2);
            tracep->chgSData(oldp+576,(vlSelf->top__DOT__i_cache__DOT__unvalidIndex),9);
            tracep->chgBit(oldp+577,(vlSelf->top__DOT__i_cache__DOT__tagMatch_0));
            tracep->chgBit(oldp+578,(vlSelf->top__DOT__i_cache__DOT__tagMatch_1));
            tracep->chgBit(oldp+579,(vlSelf->top__DOT__i_cache__DOT__tagMatch_2));
            tracep->chgBit(oldp+580,(vlSelf->top__DOT__i_cache__DOT__tagMatch_3));
            tracep->chgBit(oldp+581,(vlSelf->top__DOT__i_cache__DOT__anyMatch));
            tracep->chgCData(oldp+582,(((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                                         ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U))))),2);
            tracep->chgSData(oldp+583,((0x1ffU & ((
                                                   ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                        ? 3U
                                                        : 0U)))) 
                                                   << 6U) 
                                                  + 
                                                  (0x3fU 
                                                   & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 4U))))),9);
            tracep->chgQData(oldp+584,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+586,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
            tracep->chgCData(oldp+588,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
            tracep->chgCData(oldp+589,((3U & ((IData)(vlSelf->top__DOT__i_cache__DOT__quene_replace_way_MPORT_data) 
                                              >> 6U))),2);
            tracep->chgCData(oldp+590,(vlSelf->top__DOT__i_cache__DOT__state),3);
            tracep->chgIData(oldp+591,(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2),32);
            tracep->chgBit(oldp+592,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_209))));
            tracep->chgCData(oldp+593,((0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))),8);
            __Vtemp371[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U];
            __Vtemp371[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U];
            __Vtemp371[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U];
            __Vtemp371[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U];
            tracep->chgWData(oldp+594,(__Vtemp371),128);
            tracep->chgBit(oldp+598,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_239))));
            tracep->chgCData(oldp+599,((0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))),8);
            __Vtemp372[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0U];
            __Vtemp372[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][1U];
            __Vtemp372[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][2U];
            __Vtemp372[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][3U];
            tracep->chgWData(oldp+600,(__Vtemp372),128);
            tracep->chgBit(oldp+604,((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))));
            VL_EXTEND_WQ(191,64, __Vtemp374, (vlSelf->top__DOT__LSU__DOT__store_data 
                                              & vlSelf->top__DOT__d_cache__DOT__wmask));
            VL_SHIFTL_WWI(191,191,7, __Vtemp375, __Vtemp374, 
                          (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                    << 3U)));
            VL_EXTEND_WQ(191,64, __Vtemp380, vlSelf->top__DOT__d_cache__DOT__wmask);
            VL_SHIFTL_WWI(191,191,7, __Vtemp381, __Vtemp380, 
                          (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                    << 3U)));
            __Vtemp386[0U] = (__Vtemp375[0U] | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0xffU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U] 
                                                & (~ 
                                                   __Vtemp381[0U])));
            __Vtemp386[1U] = (__Vtemp375[1U] | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0xffU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U] 
                                                & (~ 
                                                   __Vtemp381[1U])));
            __Vtemp386[2U] = (__Vtemp375[2U] | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0xffU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U] 
                                                & (~ 
                                                   __Vtemp381[2U])));
            __Vtemp386[3U] = (__Vtemp375[3U] | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0xffU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U] 
                                                & (~ 
                                                   __Vtemp381[3U])));
            tracep->chgWData(oldp+605,(__Vtemp386),128);
            __Vtemp387[0U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_0);
            __Vtemp387[1U] = (IData)((vlSelf->top__DOT__d_cache__DOT__receive_data_0 
                                      >> 0x20U));
            __Vtemp387[2U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_1);
            __Vtemp387[3U] = (IData)((vlSelf->top__DOT__d_cache__DOT__receive_data_1 
                                      >> 0x20U));
            tracep->chgWData(oldp+609,(__Vtemp387),128);
            tracep->chgCData(oldp+613,((0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__unvalidIndex))),8);
            tracep->chgBit(oldp+614,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_218))));
            tracep->chgBit(oldp+615,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_228))));
            tracep->chgCData(oldp+616,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__LSU__DOT__maddr 
                                                         >> 4U)))),8);
            tracep->chgBit(oldp+617,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data));
            tracep->chgCData(oldp+618,((0xffU & ((IData)(0x40U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))))),8);
            tracep->chgBit(oldp+619,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data));
            tracep->chgCData(oldp+620,((0xffU & ((IData)(0x80U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))))),8);
            tracep->chgBit(oldp+621,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data));
            tracep->chgCData(oldp+622,((0xffU & ((IData)(0xc0U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))))),8);
            tracep->chgBit(oldp+623,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data));
            tracep->chgIData(oldp+624,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))]),32);
            tracep->chgIData(oldp+625,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                       [(0xffU & ((IData)(0x40U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__maddr 
                                                              >> 4U)))))]),32);
            tracep->chgIData(oldp+626,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                       [(0xffU & ((IData)(0x80U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__maddr 
                                                              >> 4U)))))]),32);
            tracep->chgIData(oldp+627,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                       [(0xffU & ((IData)(0xc0U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__maddr 
                                                              >> 4U)))))]),32);
            tracep->chgIData(oldp+628,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                       [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))]),32);
            tracep->chgIData(oldp+629,((0x3fffffU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 0xaU)))),32);
            tracep->chgBit(oldp+630,(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_13_data));
            tracep->chgCData(oldp+631,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__LSU__DOT__maddr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+632,(vlSelf->top__DOT__d_cache__DOT__quene_replace_way_MPORT_data),8);
            tracep->chgCData(oldp+633,(vlSelf->top__DOT__d_cache__DOT__quene
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))]),8);
            tracep->chgCData(oldp+634,((0xffU & ((vlSelf->top__DOT__d_cache__DOT__quene
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__maddr 
                                                              >> 4U)))] 
                                                  << 2U) 
                                                 | (IData)(vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex)))),8);
            tracep->chgCData(oldp+635,((0xffU & ((vlSelf->top__DOT__d_cache__DOT__quene
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__maddr 
                                                              >> 4U)))] 
                                                  << 2U) 
                                                 | (3U 
                                                    & ((IData)(vlSelf->top__DOT__d_cache__DOT__quene_replace_way_MPORT_data) 
                                                       >> 6U))))),8);
            tracep->chgCData(oldp+636,((0xfU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),4);
            tracep->chgIData(oldp+637,((0x3fffffU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 0xaU)))),22);
            tracep->chgBit(oldp+638,(vlSelf->top__DOT__d_cache__DOT__allvalid));
            tracep->chgCData(oldp+639,(vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex),2);
            tracep->chgSData(oldp+640,(vlSelf->top__DOT__d_cache__DOT__unvalidIndex),9);
            tracep->chgBit(oldp+641,(vlSelf->top__DOT__d_cache__DOT__tagMatch_0));
            tracep->chgBit(oldp+642,(vlSelf->top__DOT__d_cache__DOT__tagMatch_1));
            tracep->chgBit(oldp+643,(vlSelf->top__DOT__d_cache__DOT__tagMatch_2));
            tracep->chgBit(oldp+644,(vlSelf->top__DOT__d_cache__DOT__tagMatch_3));
            tracep->chgBit(oldp+645,(vlSelf->top__DOT__d_cache__DOT__anyMatch));
            tracep->chgCData(oldp+646,(((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_0)
                                         ? 0U : ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_1)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_2)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U))))),2);
            tracep->chgSData(oldp+647,(vlSelf->top__DOT__d_cache__DOT__tagIndex),9);
            tracep->chgWData(oldp+648,(vlSelf->top__DOT__d_cache__DOT__write_back_data),128);
            tracep->chgIData(oldp+652,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
            tracep->chgQData(oldp+653,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+655,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
            tracep->chgCData(oldp+657,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
            tracep->chgCData(oldp+658,((3U & ((IData)(vlSelf->top__DOT__d_cache__DOT__quene_replace_way_MPORT_data) 
                                              >> 6U))),2);
            tracep->chgCData(oldp+659,((0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                                 << 3U))),7);
            tracep->chgQData(oldp+660,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
            tracep->chgCData(oldp+662,(vlSelf->top__DOT__d_cache__DOT__state),3);
            tracep->chgIData(oldp+663,(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2),32);
            tracep->chgQData(oldp+664,(vlSelf->top__DOT__axi__DOT__araddr),64);
            tracep->chgQData(oldp+666,(vlSelf->top__DOT__axi__DOT__awaddr),64);
            tracep->chgCData(oldp+668,(vlSelf->top__DOT__axi__DOT__arlen),8);
            tracep->chgCData(oldp+669,(vlSelf->top__DOT__axi__DOT__awlen),8);
            tracep->chgCData(oldp+670,(vlSelf->top__DOT__axi__DOT__state),3);
        }
        tracep->chgBit(oldp+671,(vlSelf->clock));
        tracep->chgBit(oldp+672,(vlSelf->reset));
        tracep->chgIData(oldp+673,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+674,(vlSelf->io_pc),64);
        tracep->chgBit(oldp+676,(vlSelf->io_step));
        tracep->chgBit(oldp+677,(vlSelf->io_skip));
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
