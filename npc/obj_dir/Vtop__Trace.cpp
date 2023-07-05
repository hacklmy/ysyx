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
    VlWide<4>/*127:0*/ __Vtemp333;
    VlWide<4>/*127:0*/ __Vtemp334;
    VlWide<4>/*127:0*/ __Vtemp341;
    VlWide<4>/*127:0*/ __Vtemp342;
    VlWide<4>/*127:0*/ __Vtemp343;
    VlWide<3>/*95:0*/ __Vtemp347;
    VlWide<3>/*95:0*/ __Vtemp348;
    VlWide<3>/*95:0*/ __Vtemp352;
    VlWide<3>/*95:0*/ __Vtemp356;
    VlWide<3>/*95:0*/ __Vtemp363;
    VlWide<4>/*127:0*/ __Vtemp364;
    VlWide<3>/*95:0*/ __Vtemp365;
    VlWide<4>/*127:0*/ __Vtemp366;
    VlWide<4>/*127:0*/ __Vtemp367;
    VlWide<4>/*127:0*/ __Vtemp373;
    VlWide<4>/*127:0*/ __Vtemp374;
    VlWide<4>/*127:0*/ __Vtemp375;
    VlWide<4>/*127:0*/ __Vtemp376;
    VlWide<4>/*127:0*/ __Vtemp377;
    VlWide<6>/*191:0*/ __Vtemp379;
    VlWide<6>/*191:0*/ __Vtemp380;
    VlWide<6>/*191:0*/ __Vtemp385;
    VlWide<6>/*191:0*/ __Vtemp386;
    VlWide<4>/*127:0*/ __Vtemp391;
    VlWide<4>/*127:0*/ __Vtemp392;
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
            __Vtemp333[0U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][0U];
            __Vtemp333[1U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][1U];
            __Vtemp333[2U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][2U];
            __Vtemp333[3U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][3U];
            VL_SHIFTR_WWI(128,128,7, __Vtemp334, __Vtemp333, 
                          (0x78U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                    << 3U)));
            tracep->chgQData(oldp+21,((((QData)((IData)(
                                                        ((1U 
                                                          == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                          ? 
                                                         __Vtemp334[1U]
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((1U 
                                                                      == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                                      ? 
                                                                     __Vtemp334[0U]
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
            tracep->chgIData(oldp+33,(vlSelf->top__DOT__IDU__DOT___ALUop_T_167),32);
            tracep->chgQData(oldp+34,(((1U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                        ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                                        : vlSelf->top__DOT__IDU__DOT__src1)),64);
            tracep->chgQData(oldp+36,(((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                        ? vlSelf->top__DOT__IDU__DOT__imm
                                        : vlSelf->top__DOT__IDU__DOT___br_taken_T_1)),64);
            tracep->chgCData(oldp+38,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 7U))),5);
            tracep->chgQData(oldp+39,(((0x3023U == 
                                        (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
                                        ? vlSelf->top__DOT__IDU__DOT___br_taken_T_1
                                        : (QData)((IData)(
                                                          ((0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 
                                                           (0xffffU 
                                                            & (IData)(vlSelf->top__DOT__IDU__DOT___br_taken_T_1))
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 
                                                            (0xffU 
                                                             & (IData)(vlSelf->top__DOT__IDU__DOT___br_taken_T_1))
                                                             : 
                                                            ((0x2023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? (IData)(vlSelf->top__DOT__IDU__DOT___br_taken_T_1)
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
            tracep->chgQData(oldp+72,(((0U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                        ? vlSelf->top__DOT__LSU__DOT__rdata
                                        : vlSelf->top__DOT__LSU__DOT__ms_res)),64);
            tracep->chgBit(oldp+74,(vlSelf->top__DOT__LSU_io_ms_to_ws_valid));
            tracep->chgBit(oldp+75,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
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
            tracep->chgIData(oldp+89,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_466)),32);
            tracep->chgCData(oldp+90,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid),8);
            tracep->chgBit(oldp+91,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
            tracep->chgBit(oldp+92,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
            tracep->chgBit(oldp+95,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
            tracep->chgBit(oldp+96,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
            tracep->chgIData(oldp+97,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)),32);
            tracep->chgCData(oldp+98,(vlSelf->top__DOT__d_cache_io_to_axi_arlen),8);
            tracep->chgBit(oldp+99,(vlSelf->top__DOT__d_cache_io_to_axi_arvalid));
            tracep->chgBit(oldp+100,(vlSelf->top__DOT__d_cache_io_to_axi_rready));
            tracep->chgIData(oldp+101,(vlSelf->top__DOT__d_cache_io_to_axi_awaddr),32);
            tracep->chgCData(oldp+102,(vlSelf->top__DOT__d_cache_io_to_axi_awlen),8);
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__d_cache_io_to_axi_awvalid));
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__d_cache_io_to_axi_wdata),64);
            tracep->chgCData(oldp+106,(vlSelf->top__DOT__d_cache_io_to_axi_wstrb),8);
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__d_cache_io_to_axi_wvalid));
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__d_cache_io_to_axi_bready));
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
            tracep->chgBit(oldp+111,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast));
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
            tracep->chgBit(oldp+113,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__axi_io_axi_out_rlast));
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__axi__DOT__axi_wready));
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
            tracep->chgIData(oldp+121,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgCData(oldp+122,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
            tracep->chgIData(oldp+125,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgCData(oldp+126,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+127,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
            tracep->chgQData(oldp+128,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgCData(oldp+130,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+131,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
            tracep->chgIData(oldp+133,((2U == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_167))),32);
            tracep->chgIData(oldp+134,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_167))),32);
            tracep->chgQData(oldp+135,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)
                                         ? vlSelf->top__DOT__WBU__DOT__ws_pc
                                         : ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)
                                             ? vlSelf->top__DOT__LSU__DOT__ms_pc
                                             : ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid)
                                                 ? vlSelf->top__DOT__EXU__DOT__es_pc
                                                 : 
                                                ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                  ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                  : vlSelf->top__DOT__IFU__DOT__fs_pc))))),64);
            tracep->chgBit(oldp+137,(vlSelf->top__DOT__diff_step));
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__Register__DOT__Reg
                                       [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0xfU))]),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__Register__DOT__Reg
                                       [vlSelf->top__DOT__IDU_io_raddr2]),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0U]),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__Register__DOT__Reg
                                       [1U]),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__Register__DOT__Reg
                                       [2U]),64);
            tracep->chgQData(oldp+212,(vlSelf->top__DOT__Register__DOT__Reg
                                       [3U]),64);
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__Register__DOT__Reg
                                       [4U]),64);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__Register__DOT__Reg
                                       [5U]),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__Register__DOT__Reg
                                       [6U]),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__Register__DOT__Reg
                                       [7U]),64);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__Register__DOT__Reg
                                       [8U]),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__Register__DOT__Reg
                                       [9U]),64);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xaU]),64);
            tracep->chgQData(oldp+228,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xbU]),64);
            tracep->chgQData(oldp+230,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xcU]),64);
            tracep->chgQData(oldp+232,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xdU]),64);
            tracep->chgQData(oldp+234,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xeU]),64);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xfU]),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x10U]),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x11U]),64);
            tracep->chgQData(oldp+242,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x12U]),64);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x13U]),64);
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x14U]),64);
            tracep->chgQData(oldp+248,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x15U]),64);
            tracep->chgQData(oldp+250,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x16U]),64);
            tracep->chgQData(oldp+252,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x17U]),64);
            tracep->chgQData(oldp+254,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x18U]),64);
            tracep->chgQData(oldp+256,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x19U]),64);
            tracep->chgQData(oldp+258,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1aU]),64);
            tracep->chgQData(oldp+260,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1bU]),64);
            tracep->chgQData(oldp+262,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1cU]),64);
            tracep->chgQData(oldp+264,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1dU]),64);
            tracep->chgQData(oldp+266,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1eU]),64);
            tracep->chgQData(oldp+268,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1fU]),64);
            tracep->chgBit(oldp+270,((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                       & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
                                      & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))));
            tracep->chgQData(oldp+271,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
            tracep->chgQData(oldp+273,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
            tracep->chgQData(oldp+275,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
            tracep->chgQData(oldp+277,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
            tracep->chgQData(oldp+279,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
            tracep->chgQData(oldp+285,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
            tracep->chgQData(oldp+287,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
            tracep->chgQData(oldp+295,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
            tracep->chgQData(oldp+297,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
            tracep->chgQData(oldp+305,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
            tracep->chgQData(oldp+307,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
            tracep->chgQData(oldp+309,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
            tracep->chgQData(oldp+311,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
            tracep->chgQData(oldp+313,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
            tracep->chgQData(oldp+315,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
            tracep->chgQData(oldp+317,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
            tracep->chgQData(oldp+319,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
            tracep->chgQData(oldp+321,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
            tracep->chgQData(oldp+323,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
            tracep->chgQData(oldp+325,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
            tracep->chgQData(oldp+327,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
            tracep->chgQData(oldp+329,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
            tracep->chgQData(oldp+331,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
            tracep->chgQData(oldp+333,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
            tracep->chgQData(oldp+335,(vlSelf->top__DOT__IFU__DOT__br_target),64);
            tracep->chgQData(oldp+337,(vlSelf->top__DOT__IFU__DOT__fs_pc_next),64);
            tracep->chgBit(oldp+339,(vlSelf->top__DOT__IFU__DOT__cache_init));
            tracep->chgQData(oldp+340,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
            tracep->chgQData(oldp+342,(((IData)(vlSelf->top__DOT__IDU_io_br_taken)
                                         ? ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                             ? vlSelf->top__DOT__IDU_io_br_target
                                             : vlSelf->top__DOT__IFU__DOT__br_target)
                                         : (4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc))),64);
            tracep->chgBit(oldp+344,(((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                      & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
            tracep->chgBit(oldp+345,((((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                       >> 1U) & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
            tracep->chgCData(oldp+346,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                         ? 1U : ((1U 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                                  ? (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)
                                                  : 0U))),2);
            tracep->chgQData(oldp+347,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                         ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                         : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                             ? ((0x1073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? vlSelf->top__DOT__IDU__DOT___br_taken_T
                                                 : 
                                                ((0x2073U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 
                                                 (vlSelf->top__DOT__IDU__DOT___br_taken_T 
                                                  | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                                  : 
                                                 ((0x3073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 
                                                  (vlSelf->top__DOT__IDU__DOT___br_taken_T 
                                                   & (~ vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data))
                                                   : 0ULL)))
                                             : 0ULL))),64);
            tracep->chgQData(oldp+349,(((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))
                                         : vlSelf->top__DOT__IDU__DOT___rdata2_T_1)),64);
            tracep->chgCData(oldp+351,(((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                         ? 0U : ((0x3eU 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_167))
                                                  ? 1U
                                                  : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))),2);
            tracep->chgQData(oldp+352,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data),64);
            tracep->chgIData(oldp+354,(vlSelf->top__DOT__IDU__DOT__inst),32);
            tracep->chgBit(oldp+355,(vlSelf->top__DOT__IDU__DOT__br_taken_cancel));
            tracep->chgBit(oldp+356,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
            tracep->chgIData(oldp+357,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
            tracep->chgCData(oldp+358,(vlSelf->top__DOT__IDU__DOT__csr_write),2);
            tracep->chgBit(oldp+359,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1));
            tracep->chgBit(oldp+360,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1));
            tracep->chgBit(oldp+361,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1));
            tracep->chgBit(oldp+362,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
            tracep->chgCData(oldp+363,(vlSelf->top__DOT__IDU__DOT__rs2),5);
            tracep->chgBit(oldp+364,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2));
            tracep->chgBit(oldp+365,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2));
            tracep->chgBit(oldp+366,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2));
            tracep->chgBit(oldp+367,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
            tracep->chgQData(oldp+368,(vlSelf->top__DOT__IDU__DOT___br_taken_T),64);
            tracep->chgQData(oldp+370,(vlSelf->top__DOT__IDU__DOT___br_taken_T_1),64);
            tracep->chgBit(oldp+372,(vlSelf->top__DOT__IDU__DOT__br_taken));
            tracep->chgSData(oldp+373,((vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U)),12);
            tracep->chgIData(oldp+374,(((0x80000U & 
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
            tracep->chgIData(oldp+375,((vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+376,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 7U)))),12);
            tracep->chgSData(oldp+377,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
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
            tracep->chgQData(oldp+378,(vlSelf->top__DOT__IDU__DOT__imm),64);
            tracep->chgCData(oldp+380,(vlSelf->top__DOT__IDU__DOT__csr_index),2);
            tracep->chgQData(oldp+381,(((0x1073U == 
                                         (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
                                         ? vlSelf->top__DOT__IDU__DOT___br_taken_T
                                         : ((0x2073U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? (vlSelf->top__DOT__IDU__DOT___br_taken_T 
                                                | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                             : ((0x3073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 
                                                (vlSelf->top__DOT__IDU__DOT___br_taken_T 
                                                 & (~ vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data))
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+383,(vlSelf->top__DOT__IDU__DOT__src1),64);
            tracep->chgQData(oldp+385,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[0]),64);
            tracep->chgQData(oldp+387,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[1]),64);
            tracep->chgQData(oldp+389,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[2]),64);
            tracep->chgQData(oldp+391,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[3]),64);
            tracep->chgQData(oldp+393,(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value),64);
            tracep->chgQData(oldp+395,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
            tracep->chgIData(oldp+397,(vlSelf->top__DOT__EXU__DOT__ALUop),32);
            tracep->chgBit(oldp+398,(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy));
            tracep->chgQData(oldp+399,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
            tracep->chgBit(oldp+401,((1U & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)))));
            tracep->chgBit(oldp+402,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid));
            tracep->chgBit(oldp+403,((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)));
            tracep->chgBit(oldp+404,(((0U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                      & ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                         & (0U == (
                                                   (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                    | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                   | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))))));
            tracep->chgIData(oldp+405,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
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
            tracep->chgIData(oldp+406,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo),32);
            tracep->chgBit(oldp+407,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid));
            tracep->chgBit(oldp+408,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw));
            tracep->chgBit(oldp+409,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed));
            tracep->chgBit(oldp+410,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start) 
                                      & VL_GTES_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num))));
            tracep->chgQData(oldp+411,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient),64);
            tracep->chgQData(oldp+413,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder),64);
            tracep->chgBit(oldp+415,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid));
            tracep->chgBit(oldp+416,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid));
            tracep->chgQData(oldp+417,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res),64);
            tracep->chgQData(oldp+419,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res),64);
            tracep->chgQData(oldp+421,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res),64);
            tracep->chgQData(oldp+423,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),64);
            VL_EXTEND_WQ(127,64, __Vtemp341, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
            VL_SHIFTL_WWI(127,127,6, __Vtemp342, __Vtemp341, 
                          (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
            __Vtemp343[0U] = __Vtemp342[0U];
            __Vtemp343[1U] = __Vtemp342[1U];
            __Vtemp343[2U] = __Vtemp342[2U];
            __Vtemp343[3U] = (0x7fffffffU & __Vtemp342[3U]);
            tracep->chgWData(oldp+425,(__Vtemp343),127);
            tracep->chgIData(oldp+429,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
            tracep->chgIData(oldp+430,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res),32);
            tracep->chgQData(oldp+431,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res),63);
            tracep->chgQData(oldp+433,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        | vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+435,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        ^ vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+437,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        & vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+439,((((QData)((IData)(
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
            tracep->chgIData(oldp+441,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient)),32);
            tracep->chgIData(oldp+442,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder)),32);
            tracep->chgWData(oldp+443,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res),127);
            tracep->chgCData(oldp+447,((7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])),3);
            tracep->chgQData(oldp+448,((((QData)((IData)(
                                                         vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))),64);
            tracep->chgBit(oldp+450,(((6U == (7U & 
                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                      | ((5U == (7U 
                                                 & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                         | (4U == (7U 
                                                   & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))))));
            VL_EXTEND_WQ(65,64, __Vtemp347, (~ (((QData)((IData)(
                                                                 vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
            VL_EXTEND_WQ(65,64, __Vtemp348, (~ (((QData)((IData)(
                                                                 vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
            VL_EXTEND_WQ(65,64, __Vtemp352, ((2U == 
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
            __Vtemp356[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
                                       << 1U)) : __Vtemp352[1U]));
            __Vtemp363[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                               ? 0U : (1U & ((6U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                              ? __Vtemp347[2U]
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                  ? 
                                                 __Vtemp348[2U]
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
                                                   __Vtemp352[2U]))))));
            tracep->chgQData(oldp+451,((((QData)((IData)(
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
                                                           __Vtemp347[1U]
                                                            : 
                                                           ((5U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                             ? 
                                                            __Vtemp348[1U]
                                                             : 
                                                            __Vtemp356[1U]))))) 
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
                                                            __Vtemp347[0U]
                                                             : 
                                                            ((5U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                              ? 
                                                             __Vtemp348[0U]
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
                                                               __Vtemp352[0U]))))))))),64);
            tracep->chgBit(oldp+453,((1U & ((IData)(
                                                    (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                     >> 0x3fU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__EXU__DOT__src2_value 
                                                       >> 0x3fU))))));
            tracep->chgQData(oldp+454,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res),64);
            tracep->chgCData(oldp+456,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state),2);
            tracep->chgWData(oldp+457,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1),128);
            tracep->chgWData(oldp+461,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2),65);
            tracep->chgQData(oldp+464,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32),64);
            tracep->chgQData(oldp+466,(((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
            __Vtemp364[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
            __Vtemp364[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                      >> 0x20U));
            __Vtemp364[2U] = (IData)(((1U & (IData)(
                                                    (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                     >> 0x3fU)))
                                       ? 0xffffffffffffffffULL
                                       : 0ULL));
            __Vtemp364[3U] = (IData)((((1U & (IData)(
                                                     (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                      >> 0x3fU)))
                                        ? 0xffffffffffffffffULL
                                        : 0ULL) >> 0x20U));
            tracep->chgWData(oldp+468,(__Vtemp364),128);
            tracep->chgQData(oldp+472,((((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
            tracep->chgBit(oldp+474,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg));
            tracep->chgBit(oldp+475,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg));
            tracep->chgBit(oldp+476,((((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg) 
                                       & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg))) 
                                      | ((~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)) 
                                         & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)))));
            tracep->chgQData(oldp+477,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s),64);
            tracep->chgQData(oldp+479,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s),64);
            tracep->chgQData(oldp+481,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                         ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                         : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)),64);
            tracep->chgQData(oldp+483,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                         ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                         : vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+485,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                         ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                             : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                         : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                             ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                             : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))),64);
            tracep->chgQData(oldp+487,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                         ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                             : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                         : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                             ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                             : vlSelf->top__DOT__EXU__DOT__src2_value))),64);
            VL_EXTEND_WQ(65,64, __Vtemp365, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                              ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                                  ? 
                                                 (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                                  : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                              : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                                  ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                                  : vlSelf->top__DOT__EXU__DOT__src2_value)));
            tracep->chgWData(oldp+489,(__Vtemp365),65);
            tracep->chgWData(oldp+492,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand),128);
            tracep->chgBit(oldp+496,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start));
            tracep->chgQData(oldp+497,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient),64);
            tracep->chgIData(oldp+499,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num),32);
            VL_EXTEND_WQ(128,64, __Vtemp366, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                               ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                                   ? 
                                                  (1ULL 
                                                   + 
                                                   (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                                   : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                               : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                                   ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                                   : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
            tracep->chgWData(oldp+500,(__Vtemp366),128);
            tracep->chgWData(oldp+504,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res),65);
            __Vtemp367[0U] = 0U;
            __Vtemp367[1U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                              << 0x1fU);
            __Vtemp367[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                               >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                         << 0x1fU));
            __Vtemp367[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                               >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                         << 0x1fU));
            tracep->chgWData(oldp+507,(__Vtemp367),128);
            if ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])) {
                __Vtemp373[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
                __Vtemp373[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U];
                __Vtemp373[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U];
                __Vtemp373[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U];
            } else {
                __Vtemp373[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
                __Vtemp373[1U] = ((0x7fffffffU & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                                  | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                     << 0x1fU));
                __Vtemp373[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                   >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                             << 0x1fU));
                __Vtemp373[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                   >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                             << 0x1fU));
            }
            tracep->chgWData(oldp+511,(__Vtemp373),128);
            tracep->chgQData(oldp+515,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
            tracep->chgBit(oldp+517,(vlSelf->top__DOT__LSU__DOT__ren));
            tracep->chgQData(oldp+518,(vlSelf->top__DOT__LSU__DOT__maddr),64);
            tracep->chgCData(oldp+520,(vlSelf->top__DOT__LSU__DOT__load_type),3);
            tracep->chgBit(oldp+521,(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
            tracep->chgQData(oldp+522,(vlSelf->top__DOT__LSU__DOT__rdata),64);
            tracep->chgCData(oldp+524,(vlSelf->top__DOT__arbiter__DOT__state),2);
            tracep->chgBit(oldp+525,((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))));
            tracep->chgCData(oldp+526,((0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
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
            __Vtemp374[0U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][0U];
            __Vtemp374[1U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][1U];
            __Vtemp374[2U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][2U];
            __Vtemp374[3U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                               >> 4U))))][3U];
            tracep->chgWData(oldp+527,(__Vtemp374),128);
            __Vtemp375[0U] = (IData)(vlSelf->top__DOT__i_cache__DOT__receive_data_0);
            __Vtemp375[1U] = (IData)((vlSelf->top__DOT__i_cache__DOT__receive_data_0 
                                      >> 0x20U));
            __Vtemp375[2U] = (IData)(vlSelf->top__DOT__i_cache__DOT__receive_data_1);
            __Vtemp375[3U] = (IData)((vlSelf->top__DOT__i_cache__DOT__receive_data_1 
                                      >> 0x20U));
            tracep->chgWData(oldp+531,(__Vtemp375),128);
            tracep->chgCData(oldp+535,((0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__unvalidIndex))),8);
            tracep->chgBit(oldp+536,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_284))));
            tracep->chgCData(oldp+537,((0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2))),8);
            tracep->chgBit(oldp+538,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_294))));
            tracep->chgCData(oldp+539,((0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                 >> 4U))),8);
            tracep->chgBit(oldp+540,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_0_MPORT_data));
            tracep->chgCData(oldp+541,((0xffU & ((IData)(0x40U) 
                                                 + 
                                                 (0x3fU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 4U))))),8);
            tracep->chgBit(oldp+542,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data));
            tracep->chgCData(oldp+543,((0xffU & ((IData)(0x80U) 
                                                 + 
                                                 (0x3fU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 4U))))),8);
            tracep->chgBit(oldp+544,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data));
            tracep->chgCData(oldp+545,((0xffU & ((IData)(0xc0U) 
                                                 + 
                                                 (0x3fU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 4U))))),8);
            tracep->chgBit(oldp+546,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data));
            tracep->chgBit(oldp+547,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))));
            tracep->chgIData(oldp+548,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                       [(0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                  >> 4U))]),32);
            tracep->chgIData(oldp+549,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                       [(0xffU & ((IData)(0x40U) 
                                                  + 
                                                  (0x3fU 
                                                   & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 4U))))]),32);
            tracep->chgIData(oldp+550,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                       [(0xffU & ((IData)(0x80U) 
                                                  + 
                                                  (0x3fU 
                                                   & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 4U))))]),32);
            tracep->chgIData(oldp+551,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                       [(0xffU & ((IData)(0xc0U) 
                                                  + 
                                                  (0x3fU 
                                                   & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 4U))))]),32);
            tracep->chgIData(oldp+552,((vlSelf->top__DOT__i_cache__DOT__addr 
                                        >> 0xaU)),32);
            tracep->chgCData(oldp+553,((0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                 >> 4U))),6);
            tracep->chgCData(oldp+554,(vlSelf->top__DOT__i_cache__DOT__quene_replace_way_MPORT_data),8);
            tracep->chgCData(oldp+555,(vlSelf->top__DOT__i_cache__DOT__quene
                                       [(0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                  >> 4U))]),8);
            tracep->chgCData(oldp+556,((0xffU & ((vlSelf->top__DOT__i_cache__DOT__quene
                                                  [
                                                  (0x3fU 
                                                   & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 4U))] 
                                                  << 2U) 
                                                 | (IData)(vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex)))),8);
            tracep->chgCData(oldp+557,((0xffU & ((vlSelf->top__DOT__i_cache__DOT__quene
                                                  [
                                                  (0x3fU 
                                                   & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 4U))] 
                                                  << 2U) 
                                                 | (3U 
                                                    & ((IData)(vlSelf->top__DOT__i_cache__DOT__quene_replace_way_MPORT_data) 
                                                       >> 6U))))),8);
            tracep->chgIData(oldp+558,(vlSelf->top__DOT__i_cache__DOT__addr),32);
            tracep->chgCData(oldp+559,((0xfU & vlSelf->top__DOT__i_cache__DOT__addr)),4);
            tracep->chgIData(oldp+560,((vlSelf->top__DOT__i_cache__DOT__addr 
                                        >> 0xaU)),22);
            tracep->chgCData(oldp+561,((0x78U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                 << 3U))),7);
            tracep->chgBit(oldp+562,(vlSelf->top__DOT__i_cache__DOT__allvalid));
            tracep->chgCData(oldp+563,(vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex),2);
            tracep->chgSData(oldp+564,(vlSelf->top__DOT__i_cache__DOT__unvalidIndex),9);
            tracep->chgBit(oldp+565,(vlSelf->top__DOT__i_cache__DOT__tagMatch_0));
            tracep->chgBit(oldp+566,(vlSelf->top__DOT__i_cache__DOT__tagMatch_1));
            tracep->chgBit(oldp+567,(vlSelf->top__DOT__i_cache__DOT__tagMatch_2));
            tracep->chgBit(oldp+568,(vlSelf->top__DOT__i_cache__DOT__tagMatch_3));
            tracep->chgBit(oldp+569,(vlSelf->top__DOT__i_cache__DOT__anyMatch));
            tracep->chgCData(oldp+570,(((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                                         ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U))))),2);
            tracep->chgSData(oldp+571,((0x1ffU & ((
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
            tracep->chgQData(oldp+572,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+574,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
            tracep->chgCData(oldp+576,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
            tracep->chgCData(oldp+577,((3U & ((IData)(vlSelf->top__DOT__i_cache__DOT__quene_replace_way_MPORT_data) 
                                              >> 6U))),2);
            tracep->chgCData(oldp+578,(vlSelf->top__DOT__i_cache__DOT__state),3);
            tracep->chgIData(oldp+579,(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2),32);
            tracep->chgBit(oldp+580,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_209))));
            tracep->chgCData(oldp+581,((0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))),8);
            __Vtemp376[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U];
            __Vtemp376[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U];
            __Vtemp376[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U];
            __Vtemp376[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U];
            tracep->chgWData(oldp+582,(__Vtemp376),128);
            tracep->chgBit(oldp+586,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_239))));
            tracep->chgCData(oldp+587,((0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))),8);
            __Vtemp377[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0U];
            __Vtemp377[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][1U];
            __Vtemp377[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][2U];
            __Vtemp377[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][3U];
            tracep->chgWData(oldp+588,(__Vtemp377),128);
            tracep->chgBit(oldp+592,((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))));
            VL_EXTEND_WQ(191,64, __Vtemp379, (vlSelf->top__DOT__LSU__DOT__store_data 
                                              & vlSelf->top__DOT__d_cache__DOT__wmask));
            VL_SHIFTL_WWI(191,191,7, __Vtemp380, __Vtemp379, 
                          (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                    << 3U)));
            VL_EXTEND_WQ(191,64, __Vtemp385, vlSelf->top__DOT__d_cache__DOT__wmask);
            VL_SHIFTL_WWI(191,191,7, __Vtemp386, __Vtemp385, 
                          (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                    << 3U)));
            __Vtemp391[0U] = (__Vtemp380[0U] | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0xffU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U] 
                                                & (~ 
                                                   __Vtemp386[0U])));
            __Vtemp391[1U] = (__Vtemp380[1U] | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0xffU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U] 
                                                & (~ 
                                                   __Vtemp386[1U])));
            __Vtemp391[2U] = (__Vtemp380[2U] | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0xffU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U] 
                                                & (~ 
                                                   __Vtemp386[2U])));
            __Vtemp391[3U] = (__Vtemp380[3U] | (vlSelf->top__DOT__d_cache__DOT__cacheLine
                                                [(0xffU 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U] 
                                                & (~ 
                                                   __Vtemp386[3U])));
            tracep->chgWData(oldp+593,(__Vtemp391),128);
            __Vtemp392[0U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_0);
            __Vtemp392[1U] = (IData)((vlSelf->top__DOT__d_cache__DOT__receive_data_0 
                                      >> 0x20U));
            __Vtemp392[2U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_1);
            __Vtemp392[3U] = (IData)((vlSelf->top__DOT__d_cache__DOT__receive_data_1 
                                      >> 0x20U));
            tracep->chgWData(oldp+597,(__Vtemp392),128);
            tracep->chgCData(oldp+601,((0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__unvalidIndex))),8);
            tracep->chgBit(oldp+602,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_218))));
            tracep->chgBit(oldp+603,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_228))));
            tracep->chgCData(oldp+604,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__LSU__DOT__maddr 
                                                         >> 4U)))),8);
            tracep->chgBit(oldp+605,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data));
            tracep->chgCData(oldp+606,((0xffU & ((IData)(0x40U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))))),8);
            tracep->chgBit(oldp+607,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data));
            tracep->chgCData(oldp+608,((0xffU & ((IData)(0x80U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))))),8);
            tracep->chgBit(oldp+609,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data));
            tracep->chgCData(oldp+610,((0xffU & ((IData)(0xc0U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))))),8);
            tracep->chgBit(oldp+611,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data));
            tracep->chgIData(oldp+612,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))]),32);
            tracep->chgIData(oldp+613,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                       [(0xffU & ((IData)(0x40U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__maddr 
                                                              >> 4U)))))]),32);
            tracep->chgIData(oldp+614,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                       [(0xffU & ((IData)(0x80U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__maddr 
                                                              >> 4U)))))]),32);
            tracep->chgIData(oldp+615,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                       [(0xffU & ((IData)(0xc0U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__maddr 
                                                              >> 4U)))))]),32);
            tracep->chgIData(oldp+616,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                       [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))]),32);
            tracep->chgIData(oldp+617,((0x3fffffU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 0xaU)))),32);
            tracep->chgBit(oldp+618,(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_13_data));
            tracep->chgCData(oldp+619,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__LSU__DOT__maddr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+620,(vlSelf->top__DOT__d_cache__DOT__quene_replace_way_MPORT_data),8);
            tracep->chgCData(oldp+621,(vlSelf->top__DOT__d_cache__DOT__quene
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))]),8);
            tracep->chgCData(oldp+622,((0xffU & ((vlSelf->top__DOT__d_cache__DOT__quene
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__maddr 
                                                              >> 4U)))] 
                                                  << 2U) 
                                                 | (IData)(vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex)))),8);
            tracep->chgCData(oldp+623,((0xffU & ((vlSelf->top__DOT__d_cache__DOT__quene
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__maddr 
                                                              >> 4U)))] 
                                                  << 2U) 
                                                 | (3U 
                                                    & ((IData)(vlSelf->top__DOT__d_cache__DOT__quene_replace_way_MPORT_data) 
                                                       >> 6U))))),8);
            tracep->chgCData(oldp+624,((0xfU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),4);
            tracep->chgIData(oldp+625,((0x3fffffU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 0xaU)))),22);
            tracep->chgBit(oldp+626,(vlSelf->top__DOT__d_cache__DOT__allvalid));
            tracep->chgCData(oldp+627,(vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex),2);
            tracep->chgSData(oldp+628,(vlSelf->top__DOT__d_cache__DOT__unvalidIndex),9);
            tracep->chgBit(oldp+629,(vlSelf->top__DOT__d_cache__DOT__tagMatch_0));
            tracep->chgBit(oldp+630,(vlSelf->top__DOT__d_cache__DOT__tagMatch_1));
            tracep->chgBit(oldp+631,(vlSelf->top__DOT__d_cache__DOT__tagMatch_2));
            tracep->chgBit(oldp+632,(vlSelf->top__DOT__d_cache__DOT__tagMatch_3));
            tracep->chgBit(oldp+633,(vlSelf->top__DOT__d_cache__DOT__anyMatch));
            tracep->chgCData(oldp+634,(((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_0)
                                         ? 0U : ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_1)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_2)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U))))),2);
            tracep->chgSData(oldp+635,(vlSelf->top__DOT__d_cache__DOT__tagIndex),9);
            tracep->chgWData(oldp+636,(vlSelf->top__DOT__d_cache__DOT__write_back_data),128);
            tracep->chgIData(oldp+640,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
            tracep->chgQData(oldp+641,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+643,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
            tracep->chgCData(oldp+645,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
            tracep->chgCData(oldp+646,((3U & ((IData)(vlSelf->top__DOT__d_cache__DOT__quene_replace_way_MPORT_data) 
                                              >> 6U))),2);
            tracep->chgCData(oldp+647,((0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                                 << 3U))),7);
            tracep->chgQData(oldp+648,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
            tracep->chgCData(oldp+650,(vlSelf->top__DOT__d_cache__DOT__state),3);
            tracep->chgIData(oldp+651,(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2),32);
            tracep->chgQData(oldp+652,(vlSelf->top__DOT__axi__DOT__araddr),64);
            tracep->chgQData(oldp+654,(vlSelf->top__DOT__axi__DOT__awaddr),64);
            tracep->chgCData(oldp+656,(vlSelf->top__DOT__axi__DOT__arlen),8);
            tracep->chgCData(oldp+657,(vlSelf->top__DOT__axi__DOT__awlen),8);
            tracep->chgCData(oldp+658,(vlSelf->top__DOT__axi__DOT__state),3);
        }
        tracep->chgBit(oldp+659,(vlSelf->clock));
        tracep->chgBit(oldp+660,(vlSelf->reset));
        tracep->chgIData(oldp+661,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+662,(vlSelf->io_pc),64);
        tracep->chgBit(oldp+664,(vlSelf->io_step));
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
