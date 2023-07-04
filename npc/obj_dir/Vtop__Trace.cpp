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

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_9e67c271_0;
extern const VlWide<10>/*319:0*/ Vtop__ConstPool__CONST_bc9d891d_0;

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<8>/*255:0*/ __Vtemp331;
    VlWide<8>/*255:0*/ __Vtemp332;
    VlWide<4>/*127:0*/ __Vtemp338;
    VlWide<4>/*127:0*/ __Vtemp339;
    VlWide<4>/*127:0*/ __Vtemp340;
    VlWide<3>/*95:0*/ __Vtemp344;
    VlWide<3>/*95:0*/ __Vtemp345;
    VlWide<3>/*95:0*/ __Vtemp349;
    VlWide<3>/*95:0*/ __Vtemp353;
    VlWide<3>/*95:0*/ __Vtemp360;
    VlWide<4>/*127:0*/ __Vtemp361;
    VlWide<3>/*95:0*/ __Vtemp362;
    VlWide<4>/*127:0*/ __Vtemp363;
    VlWide<4>/*127:0*/ __Vtemp364;
    VlWide<4>/*127:0*/ __Vtemp370;
    VlWide<8>/*255:0*/ __Vtemp371;
    VlWide<8>/*255:0*/ __Vtemp372;
    VlWide<8>/*255:0*/ __Vtemp373;
    VlWide<8>/*255:0*/ __Vtemp374;
    VlWide<10>/*319:0*/ __Vtemp375;
    VlWide<10>/*319:0*/ __Vtemp376;
    VlWide<10>/*319:0*/ __Vtemp380;
    VlWide<10>/*319:0*/ __Vtemp381;
    VlWide<8>/*255:0*/ __Vtemp386;
    VlWide<8>/*255:0*/ __Vtemp387;
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
            __Vtemp331[0U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][0U];
            __Vtemp331[1U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][1U];
            __Vtemp331[2U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][2U];
            __Vtemp331[3U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][3U];
            __Vtemp331[4U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][4U];
            __Vtemp331[5U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][5U];
            __Vtemp331[6U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][6U];
            __Vtemp331[7U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][7U];
            VL_SHIFTR_WWI(256,256,8, __Vtemp332, __Vtemp331, 
                          (0xf8U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                    << 3U)));
            tracep->chgQData(oldp+21,((((QData)((IData)(
                                                        ((1U 
                                                          == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                          ? 
                                                         __Vtemp332[1U]
                                                          : 
                                                         Vtop__ConstPool__CONST_9e67c271_0[1U]))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((1U 
                                                                      == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                                      ? 
                                                                     __Vtemp332[0U]
                                                                      : 
                                                                     Vtop__ConstPool__CONST_9e67c271_0[0U]))))),64);
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
            tracep->chgBit(oldp+74,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
            tracep->chgQData(oldp+75,((((QData)((IData)(
                                                        vlSelf->top__DOT__d_cache__DOT___GEN_592[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT___GEN_592[0U])))),64);
            tracep->chgBit(oldp+77,(((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)
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
            tracep->chgBit(oldp+78,(((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                     & ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)
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
            tracep->chgIData(oldp+79,((IData)(vlSelf->top__DOT__LSU__DOT__maddr)),32);
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__LSU_io_axi_out_arvalid));
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__LSU_io_axi_out_awvalid));
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__LSU__DOT__store_data),64);
            tracep->chgCData(oldp+84,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
            tracep->chgBit(oldp+85,(vlSelf->top__DOT__LSU__DOT__wen));
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
            tracep->chgIData(oldp+88,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_585)),32);
            tracep->chgCData(oldp+89,(vlSelf->top__DOT__i_cache__DOT___GEN_586),8);
            tracep->chgBit(oldp+90,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
            tracep->chgBit(oldp+91,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
            tracep->chgBit(oldp+94,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
            tracep->chgBit(oldp+95,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
            tracep->chgIData(oldp+96,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_574)),32);
            tracep->chgCData(oldp+97,(vlSelf->top__DOT__d_cache_io_to_axi_arlen),8);
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__d_cache_io_to_axi_arvalid));
            tracep->chgBit(oldp+99,(vlSelf->top__DOT__d_cache_io_to_axi_rready));
            tracep->chgIData(oldp+100,(vlSelf->top__DOT__d_cache_io_to_axi_awaddr),32);
            tracep->chgCData(oldp+101,(vlSelf->top__DOT__d_cache_io_to_axi_awlen),8);
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__d_cache_io_to_axi_awvalid));
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__d_cache_io_to_axi_wdata),64);
            tracep->chgCData(oldp+105,(vlSelf->top__DOT__d_cache_io_to_axi_wstrb),8);
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__d_cache_io_to_axi_wvalid));
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__d_cache_io_to_axi_bready));
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
            tracep->chgBit(oldp+110,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast));
            tracep->chgBit(oldp+111,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
            tracep->chgBit(oldp+112,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__axi_io_axi_out_rlast));
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__axi__DOT__axi_wready));
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
            tracep->chgIData(oldp+120,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_574)
                                             : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_574)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_585)
                                                  : 0U)))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_585)
                                             : ((2U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_574)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_574)
                                                  : 0U))))),32);
            tracep->chgCData(oldp+121,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                             ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                             : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                 ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_586)
                                                  : 0U)))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_586)
                                             : ((2U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                                  : 0U))))),8);
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
            tracep->chgIData(oldp+124,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgCData(oldp+125,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
            tracep->chgQData(oldp+127,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgCData(oldp+129,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+130,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
            tracep->chgBit(oldp+131,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
            tracep->chgIData(oldp+132,((2U == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
            tracep->chgIData(oldp+133,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
            tracep->chgQData(oldp+134,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)
                                         ? vlSelf->top__DOT__WBU__DOT__ws_pc
                                         : ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)
                                             ? vlSelf->top__DOT__LSU__DOT__ms_pc
                                             : ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid)
                                                 ? vlSelf->top__DOT__EXU__DOT__es_pc
                                                 : 
                                                ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                  ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                  : vlSelf->top__DOT__IFU__DOT__fs_pc))))),64);
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__diff_step));
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__Register__DOT__Reg
                                       [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0xfU))]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__Register__DOT__Reg
                                       [vlSelf->top__DOT__IDU_io_raddr2]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0U]),64);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__Register__DOT__Reg
                                       [1U]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__Register__DOT__Reg
                                       [2U]),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__Register__DOT__Reg
                                       [3U]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__Register__DOT__Reg
                                       [4U]),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__Register__DOT__Reg
                                       [5U]),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__Register__DOT__Reg
                                       [6U]),64);
            tracep->chgQData(oldp+219,(vlSelf->top__DOT__Register__DOT__Reg
                                       [7U]),64);
            tracep->chgQData(oldp+221,(vlSelf->top__DOT__Register__DOT__Reg
                                       [8U]),64);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__Register__DOT__Reg
                                       [9U]),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xaU]),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xbU]),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xcU]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xdU]),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xeU]),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xfU]),64);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x10U]),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x11U]),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x12U]),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x13U]),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x14U]),64);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x15U]),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x16U]),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x17U]),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x18U]),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x19U]),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1aU]),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1bU]),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1cU]),64);
            tracep->chgQData(oldp+263,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1dU]),64);
            tracep->chgQData(oldp+265,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1eU]),64);
            tracep->chgQData(oldp+267,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1fU]),64);
            tracep->chgBit(oldp+269,((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                       & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
                                      & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))));
            tracep->chgQData(oldp+270,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
            tracep->chgQData(oldp+272,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
            tracep->chgQData(oldp+274,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
            tracep->chgQData(oldp+276,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
            tracep->chgQData(oldp+278,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
            tracep->chgQData(oldp+280,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
            tracep->chgQData(oldp+282,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
            tracep->chgQData(oldp+284,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
            tracep->chgQData(oldp+286,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
            tracep->chgQData(oldp+288,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
            tracep->chgQData(oldp+290,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
            tracep->chgQData(oldp+292,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
            tracep->chgQData(oldp+294,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
            tracep->chgQData(oldp+296,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
            tracep->chgQData(oldp+298,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
            tracep->chgQData(oldp+300,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
            tracep->chgQData(oldp+302,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
            tracep->chgQData(oldp+304,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
            tracep->chgQData(oldp+306,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
            tracep->chgQData(oldp+308,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
            tracep->chgQData(oldp+310,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
            tracep->chgQData(oldp+312,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
            tracep->chgQData(oldp+314,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
            tracep->chgQData(oldp+316,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
            tracep->chgQData(oldp+318,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
            tracep->chgQData(oldp+320,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
            tracep->chgQData(oldp+326,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
            tracep->chgQData(oldp+328,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
            tracep->chgQData(oldp+330,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
            tracep->chgQData(oldp+332,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
            tracep->chgQData(oldp+334,(vlSelf->top__DOT__IFU__DOT__br_target),64);
            tracep->chgQData(oldp+336,(vlSelf->top__DOT__IFU__DOT__fs_pc_next),64);
            tracep->chgBit(oldp+338,(vlSelf->top__DOT__IFU__DOT__cache_init));
            tracep->chgQData(oldp+339,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
            tracep->chgQData(oldp+341,(((IData)(vlSelf->top__DOT__IDU_io_br_taken)
                                         ? ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                             ? vlSelf->top__DOT__IDU_io_br_target
                                             : vlSelf->top__DOT__IFU__DOT__br_target)
                                         : (4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc))),64);
            tracep->chgBit(oldp+343,(((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                      & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
            tracep->chgBit(oldp+344,((((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                       >> 1U) & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
            tracep->chgCData(oldp+345,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                         ? 1U : ((1U 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                                  ? (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)
                                                  : 0U))),2);
            tracep->chgQData(oldp+346,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
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
            tracep->chgQData(oldp+348,(((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))
                                         : vlSelf->top__DOT__IDU__DOT___rdata2_T_1)),64);
            tracep->chgCData(oldp+350,(((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                         ? 0U : ((0x3eU 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))
                                                  ? 1U
                                                  : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))),2);
            tracep->chgQData(oldp+351,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data),64);
            tracep->chgIData(oldp+353,(vlSelf->top__DOT__IDU__DOT__inst),32);
            tracep->chgBit(oldp+354,(vlSelf->top__DOT__IDU__DOT__br_taken_cancel));
            tracep->chgBit(oldp+355,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
            tracep->chgIData(oldp+356,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
            tracep->chgCData(oldp+357,(vlSelf->top__DOT__IDU__DOT__csr_write),2);
            tracep->chgBit(oldp+358,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1));
            tracep->chgBit(oldp+359,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1));
            tracep->chgBit(oldp+360,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1));
            tracep->chgBit(oldp+361,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
            tracep->chgCData(oldp+362,(vlSelf->top__DOT__IDU__DOT__rs2),5);
            tracep->chgBit(oldp+363,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2));
            tracep->chgBit(oldp+364,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2));
            tracep->chgBit(oldp+365,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2));
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
            tracep->chgBit(oldp+397,(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy));
            tracep->chgQData(oldp+398,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
            tracep->chgBit(oldp+400,((1U & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)))));
            tracep->chgBit(oldp+401,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid));
            tracep->chgBit(oldp+402,((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)));
            tracep->chgBit(oldp+403,(((0U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                      & ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                         & (0U == (
                                                   (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                    | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                   | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))))));
            tracep->chgIData(oldp+404,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
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
            tracep->chgIData(oldp+405,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo),32);
            tracep->chgBit(oldp+406,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid));
            tracep->chgBit(oldp+407,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw));
            tracep->chgBit(oldp+408,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed));
            tracep->chgBit(oldp+409,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start) 
                                      & VL_GTES_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num))));
            tracep->chgQData(oldp+410,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient),64);
            tracep->chgQData(oldp+412,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder),64);
            tracep->chgBit(oldp+414,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid));
            tracep->chgBit(oldp+415,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid));
            tracep->chgQData(oldp+416,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res),64);
            tracep->chgQData(oldp+418,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res),64);
            tracep->chgQData(oldp+420,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res),64);
            tracep->chgQData(oldp+422,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),64);
            VL_EXTEND_WQ(127,64, __Vtemp338, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
            VL_SHIFTL_WWI(127,127,6, __Vtemp339, __Vtemp338, 
                          (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
            __Vtemp340[0U] = __Vtemp339[0U];
            __Vtemp340[1U] = __Vtemp339[1U];
            __Vtemp340[2U] = __Vtemp339[2U];
            __Vtemp340[3U] = (0x7fffffffU & __Vtemp339[3U]);
            tracep->chgWData(oldp+424,(__Vtemp340),127);
            tracep->chgIData(oldp+428,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
            tracep->chgIData(oldp+429,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res),32);
            tracep->chgQData(oldp+430,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res),63);
            tracep->chgQData(oldp+432,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        | vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+434,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        ^ vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+436,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        & vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+438,((((QData)((IData)(
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
            tracep->chgIData(oldp+440,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient)),32);
            tracep->chgIData(oldp+441,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder)),32);
            tracep->chgWData(oldp+442,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res),127);
            tracep->chgCData(oldp+446,((7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])),3);
            tracep->chgQData(oldp+447,((((QData)((IData)(
                                                         vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))),64);
            tracep->chgBit(oldp+449,(((6U == (7U & 
                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                      | ((5U == (7U 
                                                 & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                         | (4U == (7U 
                                                   & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))))));
            VL_EXTEND_WQ(65,64, __Vtemp344, (~ (((QData)((IData)(
                                                                 vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
            VL_EXTEND_WQ(65,64, __Vtemp345, (~ (((QData)((IData)(
                                                                 vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
            VL_EXTEND_WQ(65,64, __Vtemp349, ((2U == 
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
            __Vtemp353[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
                                       << 1U)) : __Vtemp349[1U]));
            __Vtemp360[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                               ? 0U : (1U & ((6U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                              ? __Vtemp344[2U]
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                  ? 
                                                 __Vtemp345[2U]
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
                                                   __Vtemp349[2U]))))));
            tracep->chgQData(oldp+450,((((QData)((IData)(
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
                                                           __Vtemp344[1U]
                                                            : 
                                                           ((5U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                             ? 
                                                            __Vtemp345[1U]
                                                             : 
                                                            __Vtemp353[1U]))))) 
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
                                                            __Vtemp344[0U]
                                                             : 
                                                            ((5U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                              ? 
                                                             __Vtemp345[0U]
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
                                                               __Vtemp349[0U]))))))))),64);
            tracep->chgBit(oldp+452,((1U & ((IData)(
                                                    (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                     >> 0x3fU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__EXU__DOT__src2_value 
                                                       >> 0x3fU))))));
            tracep->chgQData(oldp+453,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res),64);
            tracep->chgCData(oldp+455,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state),2);
            tracep->chgWData(oldp+456,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1),128);
            tracep->chgWData(oldp+460,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2),65);
            tracep->chgQData(oldp+463,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32),64);
            tracep->chgQData(oldp+465,(((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
            __Vtemp361[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
            __Vtemp361[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                      >> 0x20U));
            __Vtemp361[2U] = (IData)(((1U & (IData)(
                                                    (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                     >> 0x3fU)))
                                       ? 0xffffffffffffffffULL
                                       : 0ULL));
            __Vtemp361[3U] = (IData)((((1U & (IData)(
                                                     (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                      >> 0x3fU)))
                                        ? 0xffffffffffffffffULL
                                        : 0ULL) >> 0x20U));
            tracep->chgWData(oldp+467,(__Vtemp361),128);
            tracep->chgQData(oldp+471,((((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
            tracep->chgBit(oldp+473,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg));
            tracep->chgBit(oldp+474,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg));
            tracep->chgBit(oldp+475,((((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg) 
                                       & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg))) 
                                      | ((~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)) 
                                         & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)))));
            tracep->chgQData(oldp+476,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s),64);
            tracep->chgQData(oldp+478,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s),64);
            tracep->chgQData(oldp+480,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                         ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                         : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)),64);
            tracep->chgQData(oldp+482,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                         ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                         : vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+484,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                         ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                             : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                         : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                             ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                             : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))),64);
            tracep->chgQData(oldp+486,(((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                         ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                             : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                         : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                             ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                             : vlSelf->top__DOT__EXU__DOT__src2_value))),64);
            VL_EXTEND_WQ(65,64, __Vtemp362, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                              ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                                  ? 
                                                 (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                                  : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                              : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                                  ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                                  : vlSelf->top__DOT__EXU__DOT__src2_value)));
            tracep->chgWData(oldp+488,(__Vtemp362),65);
            tracep->chgWData(oldp+491,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand),128);
            tracep->chgBit(oldp+495,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start));
            tracep->chgQData(oldp+496,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient),64);
            tracep->chgIData(oldp+498,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num),32);
            VL_EXTEND_WQ(128,64, __Vtemp363, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                               ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                                   ? 
                                                  (1ULL 
                                                   + 
                                                   (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                                   : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                               : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                                   ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                                   : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
            tracep->chgWData(oldp+499,(__Vtemp363),128);
            tracep->chgWData(oldp+503,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res),65);
            __Vtemp364[0U] = 0U;
            __Vtemp364[1U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                              << 0x1fU);
            __Vtemp364[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                               >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                         << 0x1fU));
            __Vtemp364[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                               >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                         << 0x1fU));
            tracep->chgWData(oldp+506,(__Vtemp364),128);
            if ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])) {
                __Vtemp370[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
                __Vtemp370[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U];
                __Vtemp370[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U];
                __Vtemp370[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U];
            } else {
                __Vtemp370[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
                __Vtemp370[1U] = ((0x7fffffffU & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                                  | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                     << 0x1fU));
                __Vtemp370[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                   >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                             << 0x1fU));
                __Vtemp370[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                   >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                             << 0x1fU));
            }
            tracep->chgWData(oldp+510,(__Vtemp370),128);
            tracep->chgQData(oldp+514,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
            tracep->chgBit(oldp+516,(vlSelf->top__DOT__LSU__DOT__ren));
            tracep->chgQData(oldp+517,(vlSelf->top__DOT__LSU__DOT__maddr),64);
            tracep->chgCData(oldp+519,(vlSelf->top__DOT__LSU__DOT__load_type),3);
            tracep->chgBit(oldp+520,(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
            tracep->chgQData(oldp+521,(vlSelf->top__DOT__LSU__DOT__rdata),64);
            tracep->chgCData(oldp+523,(vlSelf->top__DOT__arbiter__DOT__state),2);
            tracep->chgBit(oldp+524,((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))));
            tracep->chgCData(oldp+525,((0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
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
                                                  << 4U) 
                                                 + 
                                                 (0xfU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 5U))))),6);
            __Vtemp371[0U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][0U];
            __Vtemp371[1U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][1U];
            __Vtemp371[2U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][2U];
            __Vtemp371[3U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][3U];
            __Vtemp371[4U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][4U];
            __Vtemp371[5U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][5U];
            __Vtemp371[6U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][6U];
            __Vtemp371[7U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
                [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                              ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                       ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                ? 2U
                                                : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U)))) 
                            << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 5U))))][7U];
            tracep->chgWData(oldp+526,(__Vtemp371),256);
            __Vtemp372[0U] = vlSelf->top__DOT__i_cache__DOT__lo[0U];
            __Vtemp372[1U] = vlSelf->top__DOT__i_cache__DOT__lo[1U];
            __Vtemp372[2U] = vlSelf->top__DOT__i_cache__DOT__lo[2U];
            __Vtemp372[3U] = vlSelf->top__DOT__i_cache__DOT__lo[3U];
            __Vtemp372[4U] = vlSelf->top__DOT__i_cache__DOT__hi[0U];
            __Vtemp372[5U] = vlSelf->top__DOT__i_cache__DOT__hi[1U];
            __Vtemp372[6U] = vlSelf->top__DOT__i_cache__DOT__hi[2U];
            __Vtemp372[7U] = vlSelf->top__DOT__i_cache__DOT__hi[3U];
            tracep->chgWData(oldp+534,(__Vtemp372),256);
            tracep->chgCData(oldp+542,((0x3fU & (IData)(vlSelf->top__DOT__i_cache__DOT__unvalidIndex))),6);
            tracep->chgBit(oldp+543,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_376))));
            tracep->chgCData(oldp+544,((0x3fU & (IData)(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2))),6);
            tracep->chgBit(oldp+545,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))));
            tracep->chgCData(oldp+546,((0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                >> 5U))),6);
            tracep->chgBit(oldp+547,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_0_MPORT_data));
            tracep->chgCData(oldp+548,((0x3fU & ((IData)(0x10U) 
                                                 + 
                                                 (0xfU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 5U))))),6);
            tracep->chgBit(oldp+549,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data));
            tracep->chgCData(oldp+550,((0x3fU & ((IData)(0x20U) 
                                                 + 
                                                 (0xfU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 5U))))),6);
            tracep->chgBit(oldp+551,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data));
            tracep->chgCData(oldp+552,((0x3fU & ((IData)(0x30U) 
                                                 + 
                                                 (0xfU 
                                                  & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                     >> 5U))))),6);
            tracep->chgBit(oldp+553,(vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data));
            tracep->chgBit(oldp+554,(((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_408))));
            tracep->chgIData(oldp+555,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                       [(0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                 >> 5U))]),32);
            tracep->chgIData(oldp+556,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                       [(0x3fU & ((IData)(0x10U) 
                                                  + 
                                                  (0xfU 
                                                   & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 5U))))]),32);
            tracep->chgIData(oldp+557,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                       [(0x3fU & ((IData)(0x20U) 
                                                  + 
                                                  (0xfU 
                                                   & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 5U))))]),32);
            tracep->chgIData(oldp+558,(vlSelf->top__DOT__i_cache__DOT__tagMem
                                       [(0x3fU & ((IData)(0x30U) 
                                                  + 
                                                  (0xfU 
                                                   & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 5U))))]),32);
            tracep->chgIData(oldp+559,((vlSelf->top__DOT__i_cache__DOT__addr 
                                        >> 9U)),32);
            tracep->chgIData(oldp+560,(vlSelf->top__DOT__i_cache__DOT__addr),32);
            tracep->chgCData(oldp+561,((0x1fU & vlSelf->top__DOT__i_cache__DOT__addr)),5);
            tracep->chgCData(oldp+562,((0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                >> 5U))),4);
            tracep->chgIData(oldp+563,((vlSelf->top__DOT__i_cache__DOT__addr 
                                        >> 9U)),23);
            tracep->chgCData(oldp+564,((0xf8U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                 << 3U))),8);
            tracep->chgBit(oldp+565,(vlSelf->top__DOT__i_cache__DOT__allvalid));
            tracep->chgCData(oldp+566,(vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex),2);
            tracep->chgSData(oldp+567,(vlSelf->top__DOT__i_cache__DOT__unvalidIndex),9);
            tracep->chgBit(oldp+568,(vlSelf->top__DOT__i_cache__DOT__tagMatch_0));
            tracep->chgBit(oldp+569,(vlSelf->top__DOT__i_cache__DOT__tagMatch_1));
            tracep->chgBit(oldp+570,(vlSelf->top__DOT__i_cache__DOT__tagMatch_2));
            tracep->chgBit(oldp+571,(vlSelf->top__DOT__i_cache__DOT__tagMatch_3));
            tracep->chgBit(oldp+572,(vlSelf->top__DOT__i_cache__DOT__anyMatch));
            tracep->chgCData(oldp+573,(((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                                         ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U))))),2);
            tracep->chgSData(oldp+574,((0x1ffU & ((
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
                                                   << 4U) 
                                                  + 
                                                  (0xfU 
                                                   & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 5U))))),9);
            tracep->chgQData(oldp+575,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+577,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
            tracep->chgQData(oldp+579,(vlSelf->top__DOT__i_cache__DOT__receive_data_2),64);
            tracep->chgQData(oldp+581,(vlSelf->top__DOT__i_cache__DOT__receive_data_3),64);
            tracep->chgCData(oldp+583,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
            tracep->chgCData(oldp+584,(vlSelf->top__DOT__i_cache__DOT__quene_0),8);
            tracep->chgCData(oldp+585,(vlSelf->top__DOT__i_cache__DOT__quene_1),8);
            tracep->chgCData(oldp+586,(vlSelf->top__DOT__i_cache__DOT__quene_2),8);
            tracep->chgCData(oldp+587,(vlSelf->top__DOT__i_cache__DOT__quene_3),8);
            tracep->chgCData(oldp+588,(vlSelf->top__DOT__i_cache__DOT__quene_4),8);
            tracep->chgCData(oldp+589,(vlSelf->top__DOT__i_cache__DOT__quene_5),8);
            tracep->chgCData(oldp+590,(vlSelf->top__DOT__i_cache__DOT__quene_6),8);
            tracep->chgCData(oldp+591,(vlSelf->top__DOT__i_cache__DOT__quene_7),8);
            tracep->chgCData(oldp+592,(vlSelf->top__DOT__i_cache__DOT__quene_8),8);
            tracep->chgCData(oldp+593,(vlSelf->top__DOT__i_cache__DOT__quene_9),8);
            tracep->chgCData(oldp+594,(vlSelf->top__DOT__i_cache__DOT__quene_10),8);
            tracep->chgCData(oldp+595,(vlSelf->top__DOT__i_cache__DOT__quene_11),8);
            tracep->chgCData(oldp+596,(vlSelf->top__DOT__i_cache__DOT__quene_12),8);
            tracep->chgCData(oldp+597,(vlSelf->top__DOT__i_cache__DOT__quene_13),8);
            tracep->chgCData(oldp+598,(vlSelf->top__DOT__i_cache__DOT__quene_14),8);
            tracep->chgCData(oldp+599,(vlSelf->top__DOT__i_cache__DOT__quene_15),8);
            tracep->chgCData(oldp+600,((3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_15) 
                                              >> 6U))),2);
            tracep->chgCData(oldp+601,(vlSelf->top__DOT__i_cache__DOT__state),3);
            tracep->chgWData(oldp+602,(vlSelf->top__DOT__i_cache__DOT__lo),128);
            tracep->chgWData(oldp+606,(vlSelf->top__DOT__i_cache__DOT__hi),128);
            tracep->chgIData(oldp+610,(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2),32);
            tracep->chgBit(oldp+611,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_329))));
            tracep->chgCData(oldp+612,((0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))),6);
            __Vtemp373[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U];
            __Vtemp373[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U];
            __Vtemp373[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U];
            __Vtemp373[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U];
            __Vtemp373[4U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][4U];
            __Vtemp373[5U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][5U];
            __Vtemp373[6U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][6U];
            __Vtemp373[7U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][7U];
            tracep->chgWData(oldp+613,(__Vtemp373),256);
            tracep->chgBit(oldp+621,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_373))));
            tracep->chgCData(oldp+622,((0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))),6);
            __Vtemp374[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0U];
            __Vtemp374[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][1U];
            __Vtemp374[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][2U];
            __Vtemp374[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][3U];
            __Vtemp374[4U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][4U];
            __Vtemp374[5U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][5U];
            __Vtemp374[6U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][6U];
            __Vtemp374[7U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
                [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][7U];
            tracep->chgWData(oldp+623,(__Vtemp374),256);
            tracep->chgBit(oldp+631,((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))));
            VL_EXTEND_WQ(319,64, __Vtemp375, (vlSelf->top__DOT__LSU__DOT__store_data 
                                              & vlSelf->top__DOT__d_cache__DOT__wmask));
            VL_SHIFTL_WWI(319,319,8, __Vtemp376, __Vtemp375, 
                          (0xf8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                    << 3U)));
            VL_EXTEND_WQ(319,64, __Vtemp380, vlSelf->top__DOT__d_cache__DOT__wmask);
            VL_SHIFTL_WWI(319,319,8, __Vtemp381, __Vtemp380, 
                          (0xf8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                    << 3U)));
            __Vtemp386[0U] = ((Vtop__ConstPool__CONST_bc9d891d_0[0U] 
                               & __Vtemp376[0U]) | 
                              (vlSelf->top__DOT__d_cache__DOT__cacheLine
                               [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U] 
                               & (~ (Vtop__ConstPool__CONST_bc9d891d_0[0U] 
                                     & __Vtemp381[0U]))));
            __Vtemp386[1U] = ((Vtop__ConstPool__CONST_bc9d891d_0[1U] 
                               & __Vtemp376[1U]) | 
                              (vlSelf->top__DOT__d_cache__DOT__cacheLine
                               [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U] 
                               & (~ (Vtop__ConstPool__CONST_bc9d891d_0[1U] 
                                     & __Vtemp381[1U]))));
            __Vtemp386[2U] = ((Vtop__ConstPool__CONST_bc9d891d_0[2U] 
                               & __Vtemp376[2U]) | 
                              (vlSelf->top__DOT__d_cache__DOT__cacheLine
                               [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U] 
                               & (~ (Vtop__ConstPool__CONST_bc9d891d_0[2U] 
                                     & __Vtemp381[2U]))));
            __Vtemp386[3U] = ((Vtop__ConstPool__CONST_bc9d891d_0[3U] 
                               & __Vtemp376[3U]) | 
                              (vlSelf->top__DOT__d_cache__DOT__cacheLine
                               [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U] 
                               & (~ (Vtop__ConstPool__CONST_bc9d891d_0[3U] 
                                     & __Vtemp381[3U]))));
            __Vtemp386[4U] = ((Vtop__ConstPool__CONST_bc9d891d_0[4U] 
                               & __Vtemp376[4U]) | 
                              (vlSelf->top__DOT__d_cache__DOT__cacheLine
                               [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][4U] 
                               & (~ (Vtop__ConstPool__CONST_bc9d891d_0[4U] 
                                     & __Vtemp381[4U]))));
            __Vtemp386[5U] = ((Vtop__ConstPool__CONST_bc9d891d_0[5U] 
                               & __Vtemp376[5U]) | 
                              (vlSelf->top__DOT__d_cache__DOT__cacheLine
                               [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][5U] 
                               & (~ (Vtop__ConstPool__CONST_bc9d891d_0[5U] 
                                     & __Vtemp381[5U]))));
            __Vtemp386[6U] = ((Vtop__ConstPool__CONST_bc9d891d_0[6U] 
                               & __Vtemp376[6U]) | 
                              (vlSelf->top__DOT__d_cache__DOT__cacheLine
                               [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][6U] 
                               & (~ (Vtop__ConstPool__CONST_bc9d891d_0[6U] 
                                     & __Vtemp381[6U]))));
            __Vtemp386[7U] = ((Vtop__ConstPool__CONST_bc9d891d_0[7U] 
                               & __Vtemp376[7U]) | 
                              (vlSelf->top__DOT__d_cache__DOT__cacheLine
                               [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][7U] 
                               & (~ (Vtop__ConstPool__CONST_bc9d891d_0[7U] 
                                     & __Vtemp381[7U]))));
            tracep->chgWData(oldp+632,(__Vtemp386),256);
            __Vtemp387[0U] = vlSelf->top__DOT__d_cache__DOT__lo[0U];
            __Vtemp387[1U] = vlSelf->top__DOT__d_cache__DOT__lo[1U];
            __Vtemp387[2U] = vlSelf->top__DOT__d_cache__DOT__lo[2U];
            __Vtemp387[3U] = vlSelf->top__DOT__d_cache__DOT__lo[3U];
            __Vtemp387[4U] = vlSelf->top__DOT__d_cache__DOT__hi[0U];
            __Vtemp387[5U] = vlSelf->top__DOT__d_cache__DOT__hi[1U];
            __Vtemp387[6U] = vlSelf->top__DOT__d_cache__DOT__hi[2U];
            __Vtemp387[7U] = vlSelf->top__DOT__d_cache__DOT__hi[3U];
            tracep->chgWData(oldp+640,(__Vtemp387),256);
            tracep->chgCData(oldp+648,((0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__unvalidIndex))),6);
            tracep->chgBit(oldp+649,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_340))));
            tracep->chgBit(oldp+650,(((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_364))));
            tracep->chgCData(oldp+651,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__LSU__DOT__maddr 
                                                        >> 5U)))),6);
            tracep->chgBit(oldp+652,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data));
            tracep->chgCData(oldp+653,((0x3fU & ((IData)(0x10U) 
                                                 + 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 5U)))))),6);
            tracep->chgBit(oldp+654,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data));
            tracep->chgCData(oldp+655,((0x3fU & ((IData)(0x20U) 
                                                 + 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 5U)))))),6);
            tracep->chgBit(oldp+656,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data));
            tracep->chgCData(oldp+657,((0x3fU & ((IData)(0x30U) 
                                                 + 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 5U)))))),6);
            tracep->chgBit(oldp+658,(vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data));
            tracep->chgIData(oldp+659,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                       [(0xfU & (IData)(
                                                        (vlSelf->top__DOT__LSU__DOT__maddr 
                                                         >> 5U)))]),32);
            tracep->chgIData(oldp+660,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                       [(0x3fU & ((IData)(0x10U) 
                                                  + 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__maddr 
                                                              >> 5U)))))]),32);
            tracep->chgIData(oldp+661,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                       [(0x3fU & ((IData)(0x20U) 
                                                  + 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__maddr 
                                                              >> 5U)))))]),32);
            tracep->chgIData(oldp+662,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                       [(0x3fU & ((IData)(0x30U) 
                                                  + 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__maddr 
                                                              >> 5U)))))]),32);
            tracep->chgIData(oldp+663,(vlSelf->top__DOT__d_cache__DOT__tagMem
                                       [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))]),32);
            tracep->chgIData(oldp+664,((0x7fffffU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 9U)))),32);
            tracep->chgBit(oldp+665,(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data));
            tracep->chgCData(oldp+666,((0x1fU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),5);
            tracep->chgCData(oldp+667,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__LSU__DOT__maddr 
                                                        >> 5U)))),4);
            tracep->chgIData(oldp+668,((0x7fffffU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 9U)))),23);
            tracep->chgBit(oldp+669,(vlSelf->top__DOT__d_cache__DOT__allvalid));
            tracep->chgCData(oldp+670,(vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex),2);
            tracep->chgSData(oldp+671,(vlSelf->top__DOT__d_cache__DOT__unvalidIndex),9);
            tracep->chgBit(oldp+672,(vlSelf->top__DOT__d_cache__DOT__tagMatch_0));
            tracep->chgBit(oldp+673,(vlSelf->top__DOT__d_cache__DOT__tagMatch_1));
            tracep->chgBit(oldp+674,(vlSelf->top__DOT__d_cache__DOT__tagMatch_2));
            tracep->chgBit(oldp+675,(vlSelf->top__DOT__d_cache__DOT__tagMatch_3));
            tracep->chgBit(oldp+676,(vlSelf->top__DOT__d_cache__DOT__anyMatch));
            tracep->chgCData(oldp+677,(((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_0)
                                         ? 0U : ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_1)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_2)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_3)
                                                    ? 3U
                                                    : 0U))))),2);
            tracep->chgSData(oldp+678,(vlSelf->top__DOT__d_cache__DOT__tagIndex),9);
            tracep->chgWData(oldp+679,(vlSelf->top__DOT__d_cache__DOT__write_back_data),256);
            tracep->chgIData(oldp+687,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
            tracep->chgQData(oldp+688,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+690,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
            tracep->chgQData(oldp+692,(vlSelf->top__DOT__d_cache__DOT__receive_data_2),64);
            tracep->chgQData(oldp+694,(vlSelf->top__DOT__d_cache__DOT__receive_data_3),64);
            tracep->chgCData(oldp+696,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
            tracep->chgCData(oldp+697,(vlSelf->top__DOT__d_cache__DOT__quene_0),8);
            tracep->chgCData(oldp+698,(vlSelf->top__DOT__d_cache__DOT__quene_1),8);
            tracep->chgCData(oldp+699,(vlSelf->top__DOT__d_cache__DOT__quene_2),8);
            tracep->chgCData(oldp+700,(vlSelf->top__DOT__d_cache__DOT__quene_3),8);
            tracep->chgCData(oldp+701,(vlSelf->top__DOT__d_cache__DOT__quene_4),8);
            tracep->chgCData(oldp+702,(vlSelf->top__DOT__d_cache__DOT__quene_5),8);
            tracep->chgCData(oldp+703,(vlSelf->top__DOT__d_cache__DOT__quene_6),8);
            tracep->chgCData(oldp+704,(vlSelf->top__DOT__d_cache__DOT__quene_7),8);
            tracep->chgCData(oldp+705,(vlSelf->top__DOT__d_cache__DOT__quene_8),8);
            tracep->chgCData(oldp+706,(vlSelf->top__DOT__d_cache__DOT__quene_9),8);
            tracep->chgCData(oldp+707,(vlSelf->top__DOT__d_cache__DOT__quene_10),8);
            tracep->chgCData(oldp+708,(vlSelf->top__DOT__d_cache__DOT__quene_11),8);
            tracep->chgCData(oldp+709,(vlSelf->top__DOT__d_cache__DOT__quene_12),8);
            tracep->chgCData(oldp+710,(vlSelf->top__DOT__d_cache__DOT__quene_13),8);
            tracep->chgCData(oldp+711,(vlSelf->top__DOT__d_cache__DOT__quene_14),8);
            tracep->chgCData(oldp+712,(vlSelf->top__DOT__d_cache__DOT__quene_15),8);
            tracep->chgCData(oldp+713,((3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15) 
                                              >> 6U))),2);
            tracep->chgCData(oldp+714,((0xf8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                                 << 3U))),8);
            tracep->chgQData(oldp+715,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
            tracep->chgCData(oldp+717,(vlSelf->top__DOT__d_cache__DOT__state),4);
            tracep->chgWData(oldp+718,(vlSelf->top__DOT__d_cache__DOT__lo),128);
            tracep->chgWData(oldp+722,(vlSelf->top__DOT__d_cache__DOT__hi),128);
            tracep->chgIData(oldp+726,(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2),32);
            tracep->chgQData(oldp+727,(vlSelf->top__DOT__axi__DOT__araddr),64);
            tracep->chgQData(oldp+729,(vlSelf->top__DOT__axi__DOT__awaddr),64);
            tracep->chgCData(oldp+731,(vlSelf->top__DOT__axi__DOT__arlen),8);
            tracep->chgCData(oldp+732,(vlSelf->top__DOT__axi__DOT__awlen),8);
            tracep->chgCData(oldp+733,(vlSelf->top__DOT__axi__DOT__state),3);
        }
        tracep->chgBit(oldp+734,(vlSelf->clock));
        tracep->chgBit(oldp+735,(vlSelf->reset));
        tracep->chgIData(oldp+736,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+737,(vlSelf->io_pc),64);
        tracep->chgBit(oldp+739,(vlSelf->io_step));
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
