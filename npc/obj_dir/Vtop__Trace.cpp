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

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_93e1b771_0;

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<16>/*511:0*/ __Vtemp2372;
    VlWide<16>/*511:0*/ __Vtemp2373;
    VlWide<16>/*511:0*/ __Vtemp2377;
    VlWide<16>/*511:0*/ __Vtemp2378;
    VlWide<16>/*511:0*/ __Vtemp2383;
    VlWide<16>/*511:0*/ __Vtemp2384;
    VlWide<16>/*511:0*/ __Vtemp2387;
    VlWide<4>/*127:0*/ __Vtemp2391;
    VlWide<4>/*127:0*/ __Vtemp2392;
    VlWide<4>/*127:0*/ __Vtemp2393;
    VlWide<4>/*127:0*/ __Vtemp2394;
    VlWide<4>/*127:0*/ __Vtemp2395;
    VlWide<4>/*127:0*/ __Vtemp2396;
    VlWide<3>/*95:0*/ __Vtemp2399;
    VlWide<3>/*95:0*/ __Vtemp2400;
    VlWide<3>/*95:0*/ __Vtemp2402;
    VlWide<3>/*95:0*/ __Vtemp2403;
    VlWide<3>/*95:0*/ __Vtemp2404;
    VlWide<3>/*95:0*/ __Vtemp2405;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__IDU_io_raddr2),5);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__Register_io_rdata1),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__Register_io_rdata2),64);
            tracep->chgBit(oldp+6,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                    & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid))));
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__WBU__DOT__ws_rf_dst),5);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__WBU__DOT__ws_res),64);
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__IDU_io_ds_allowin));
            tracep->chgBit(oldp+11,(((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                     & (~ (IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel)))));
            tracep->chgQData(oldp+12,(((0x67U == (0x707fU 
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
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__IFU__DOT__fs_pc),64);
            tracep->chgBit(oldp+16,(vlSelf->top__DOT__IFU_io_fs_to_ds_valid));
            tracep->chgIData(oldp+17,(vlSelf->top__DOT__IFU__DOT__fs_inst),32);
            if ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__IFU__DOT__fs_pc 
                                          >> 6U))))) {
                __Vtemp2372[0U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0U];
                __Vtemp2372[1U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[1U];
                __Vtemp2372[2U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[2U];
                __Vtemp2372[3U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[3U];
                __Vtemp2372[4U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[4U];
                __Vtemp2372[5U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[5U];
                __Vtemp2372[6U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[6U];
                __Vtemp2372[7U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[7U];
                __Vtemp2372[8U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[8U];
                __Vtemp2372[9U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[9U];
                __Vtemp2372[0xaU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xaU];
                __Vtemp2372[0xbU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xbU];
                __Vtemp2372[0xcU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xcU];
                __Vtemp2372[0xdU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xdU];
                __Vtemp2372[0xeU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xeU];
                __Vtemp2372[0xfU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xfU];
            } else {
                __Vtemp2372[0U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0U]);
                __Vtemp2372[1U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[1U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[1U]);
                __Vtemp2372[2U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[2U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[2U]);
                __Vtemp2372[3U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[3U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[3U]);
                __Vtemp2372[4U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[4U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[4U]);
                __Vtemp2372[5U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[5U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[5U]);
                __Vtemp2372[6U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[6U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[6U]);
                __Vtemp2372[7U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[7U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[7U]);
                __Vtemp2372[8U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[8U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[8U]);
                __Vtemp2372[9U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[9U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[9U]);
                __Vtemp2372[0xaU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xaU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xaU]);
                __Vtemp2372[0xbU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xbU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xbU]);
                __Vtemp2372[0xcU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xcU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xcU]);
                __Vtemp2372[0xdU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xdU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xdU]);
                __Vtemp2372[0xeU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xeU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xeU]);
                __Vtemp2372[0xfU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xfU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xfU]);
            }
            VL_SHIFTR_WWI(512,512,9, __Vtemp2373, __Vtemp2372, 
                          (0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                     << 3U)));
            if ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__IFU__DOT__fs_pc 
                                          >> 6U))))) {
                __Vtemp2377[0U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0U];
                __Vtemp2377[1U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[1U];
                __Vtemp2377[2U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[2U];
                __Vtemp2377[3U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[3U];
                __Vtemp2377[4U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[4U];
                __Vtemp2377[5U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[5U];
                __Vtemp2377[6U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[6U];
                __Vtemp2377[7U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[7U];
                __Vtemp2377[8U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[8U];
                __Vtemp2377[9U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[9U];
                __Vtemp2377[0xaU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xaU];
                __Vtemp2377[0xbU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xbU];
                __Vtemp2377[0xcU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xcU];
                __Vtemp2377[0xdU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xdU];
                __Vtemp2377[0xeU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xeU];
                __Vtemp2377[0xfU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xfU];
            } else {
                __Vtemp2377[0U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0U]);
                __Vtemp2377[1U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[1U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[1U]);
                __Vtemp2377[2U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[2U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[2U]);
                __Vtemp2377[3U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[3U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[3U]);
                __Vtemp2377[4U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[4U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[4U]);
                __Vtemp2377[5U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[5U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[5U]);
                __Vtemp2377[6U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[6U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[6U]);
                __Vtemp2377[7U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[7U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[7U]);
                __Vtemp2377[8U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[8U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[8U]);
                __Vtemp2377[9U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[9U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[9U]);
                __Vtemp2377[0xaU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xaU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xaU]);
                __Vtemp2377[0xbU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xbU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xbU]);
                __Vtemp2377[0xcU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xcU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xcU]);
                __Vtemp2377[0xdU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xdU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xdU]);
                __Vtemp2377[0xeU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xeU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xeU]);
                __Vtemp2377[0xfU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xfU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xfU]);
            }
            VL_SHIFTR_WWI(512,512,9, __Vtemp2378, __Vtemp2377, 
                          (0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                     << 3U)));
            tracep->chgQData(oldp+18,((((QData)((IData)(
                                                        ((1U 
                                                          == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                          ? 
                                                         ((IData)(vlSelf->top__DOT__i_cache__DOT__way0_hit)
                                                           ? 
                                                          __Vtemp2373[1U]
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__i_cache__DOT__way1_hit)
                                                            ? 
                                                           __Vtemp2378[1U]
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
                                                                      __Vtemp2373[0U]
                                                                       : 
                                                                      ((IData)(vlSelf->top__DOT__i_cache__DOT__way1_hit)
                                                                        ? 
                                                                       __Vtemp2378[0U]
                                                                        : 
                                                                       Vtop__ConstPool__CONST_93e1b771_0[0U]))
                                                                      : 
                                                                     Vtop__ConstPool__CONST_93e1b771_0[0U]))))),64);
            tracep->chgBit(oldp+20,(((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                     & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1248))));
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid));
            tracep->chgIData(oldp+22,((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc)),32);
            tracep->chgBit(oldp+23,(((IData)(vlSelf->top__DOT__IFU__DOT__fs_valid) 
                                     & (~ (IData)(vlSelf->top__DOT__IFU__DOT__fs_ready_go)))));
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__IFU__DOT__inst_ready));
            tracep->chgBit(oldp+25,((0x100fU == vlSelf->top__DOT__IDU__DOT__inst)));
            tracep->chgBit(oldp+26,(((0x100fU == vlSelf->top__DOT__IDU__DOT__inst) 
                                     & (~ (IData)(vlSelf->top__DOT__IFU__DOT__cache_init)))));
            tracep->chgBit(oldp+27,((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__IDU_io_ds_to_es_valid));
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__EXU__DOT__es_allowin));
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__IDU__DOT__ds_pc),64);
            tracep->chgIData(oldp+32,(vlSelf->top__DOT__IDU__DOT___ALUop_T_176),32);
            tracep->chgQData(oldp+33,(((1U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                        ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                                        : vlSelf->top__DOT__IDU__DOT__src1)),64);
            tracep->chgQData(oldp+35,(((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                        ? vlSelf->top__DOT__IDU__DOT__imm
                                        : vlSelf->top__DOT__Register_io_rdata2)),64);
            tracep->chgCData(oldp+37,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 7U))),5);
            tracep->chgQData(oldp+38,(((0x3023U == 
                                        (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
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
            tracep->chgBit(oldp+40,(((0x100073U != vlSelf->top__DOT__IDU__DOT__inst) 
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
            tracep->chgBit(oldp+41,((0x44U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))));
            tracep->chgBit(oldp+42,(((0x3003U == (0x707fU 
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
            tracep->chgCData(oldp+43,(((0x3023U == 
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
            tracep->chgCData(oldp+44,(((0x2003U == 
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
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__EXU__DOT__es_rf_we));
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__LSU_io_ms_rf_we));
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__EXU__DOT__es_valid));
            tracep->chgBit(oldp+49,(vlSelf->top__DOT__LSU__DOT__ms_valid));
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__WBU__DOT__ws_valid));
            tracep->chgCData(oldp+51,(vlSelf->top__DOT__EXU__DOT__es_rd),5);
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__LSU__DOT__ms_rf_dst),5);
            tracep->chgBit(oldp+53,(vlSelf->top__DOT__IDU__DOT__ds_valid));
            tracep->chgBit(oldp+54,(vlSelf->top__DOT__LSU_io_ms_allowin));
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
            tracep->chgQData(oldp+57,((((QData)((IData)(
                                                        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__EXU__DOT__store_data),64);
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__EXU__DOT__st_we));
            tracep->chgCData(oldp+62,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
            tracep->chgBit(oldp+63,(vlSelf->top__DOT__EXU__DOT__ld_we));
            tracep->chgCData(oldp+64,(vlSelf->top__DOT__EXU__DOT__load_type),3);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__LSU__DOT__ms_pc),64);
            tracep->chgQData(oldp+67,(((0U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                        ? ((7U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                            ? (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))))
                                            : ((6U 
                                                == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                ? (
                                                   (((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__mem_rdata 
                                                                 >> 7U)))
                                                      ? 0xffffffffffffffULL
                                                      : 0ULL) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata)))))
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__LSU__DOT__mem_rdata 
                                                                  >> 0xfU)))
                                                       ? 0xffffffffffffULL
                                                       : 0ULL) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata)))))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                     ? (QData)((IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                      ? (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                       ? vlSelf->top__DOT__LSU__DOT__mem_rdata
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__mem_rdata 
                                                                                >> 0x1fU)))
                                                                           ? 0xffffffffU
                                                                           : 0U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata)))
                                                        : vlSelf->top__DOT__LSU__DOT__mem_rdata)))))))
                                        : vlSelf->top__DOT__LSU__DOT__ms_res)),64);
            tracep->chgBit(oldp+69,(vlSelf->top__DOT__LSU_io_ms_to_ws_valid));
            tracep->chgBit(oldp+70,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
            VL_SHIFTR_WWI(512,512,9, __Vtemp2383, vlSelf->top__DOT__d_cache__DOT___GEN_88, 
                          (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                     << 3U)));
            VL_SHIFTR_WWI(512,512,9, __Vtemp2384, vlSelf->top__DOT__d_cache__DOT___GEN_136, 
                          (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                     << 3U)));
            VL_EXTEND_WQ(512,64, __Vtemp2387, ((2U 
                                                == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                ? 0ULL
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 0ULL
                                                    : 
                                                   (((4U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                     | (8U 
                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))
                                                     ? 0ULL
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                       ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                                                       : 0ULL))))));
            tracep->chgQData(oldp+71,((((QData)((IData)(
                                                        ((1U 
                                                          == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                          ? 
                                                         ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                           ? 
                                                          __Vtemp2383[1U]
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                            ? 
                                                           __Vtemp2384[1U]
                                                            : 
                                                           Vtop__ConstPool__CONST_93e1b771_0[1U]))
                                                          : 
                                                         __Vtemp2387[1U]))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((1U 
                                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                      ? 
                                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                                       ? 
                                                                      __Vtemp2383[0U]
                                                                       : 
                                                                      ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                                        ? 
                                                                       __Vtemp2384[0U]
                                                                        : 
                                                                       Vtop__ConstPool__CONST_93e1b771_0[0U]))
                                                                      : 
                                                                     __Vtemp2387[0U]))))),64);
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__d_cache_io_to_lsu_rvalid));
            tracep->chgBit(oldp+74,(vlSelf->top__DOT__d_cache_io_to_lsu_wready));
            tracep->chgIData(oldp+75,((IData)(vlSelf->top__DOT__LSU__DOT__maddr)),32);
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__LSU_io_axi_out_arvalid));
            tracep->chgBit(oldp+77,(vlSelf->top__DOT__LSU_io_axi_out_awvalid));
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__LSU__DOT__store_data),64);
            tracep->chgCData(oldp+80,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__LSU__DOT__wen));
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
            tracep->chgIData(oldp+84,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1257)),32);
            tracep->chgCData(oldp+85,(vlSelf->top__DOT__i_cache__DOT___GEN_1258),8);
            tracep->chgBit(oldp+86,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
            tracep->chgBit(oldp+87,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
            tracep->chgBit(oldp+90,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
            tracep->chgBit(oldp+91,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
            tracep->chgIData(oldp+92,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)),32);
            tracep->chgCData(oldp+93,(vlSelf->top__DOT__d_cache_io_to_axi_arlen),8);
            tracep->chgBit(oldp+94,(vlSelf->top__DOT__d_cache_io_to_axi_arvalid));
            tracep->chgBit(oldp+95,(vlSelf->top__DOT__d_cache_io_to_axi_rready));
            tracep->chgIData(oldp+96,(vlSelf->top__DOT__d_cache_io_to_axi_awaddr),32);
            tracep->chgCData(oldp+97,(vlSelf->top__DOT__d_cache_io_to_axi_awlen),8);
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__d_cache_io_to_axi_awvalid));
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__d_cache_io_to_axi_wdata),64);
            tracep->chgCData(oldp+101,(vlSelf->top__DOT__d_cache_io_to_axi_wstrb),8);
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__d_cache_io_to_axi_wvalid));
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__d_cache_io_to_axi_bready));
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast));
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_wready));
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__axi_io_axi_out_rlast));
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__axi__DOT__axi_wready));
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
            tracep->chgIData(oldp+116,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)
                                             : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1257)
                                                  : 0U)))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1257)
                                             : ((2U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)
                                                  : 0U))))),32);
            tracep->chgCData(oldp+117,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                             ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                             : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                 ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1258)
                                                  : 0U)))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1258)
                                             : ((2U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                                  : 0U))))),8);
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
            tracep->chgIData(oldp+120,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgCData(oldp+121,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
            tracep->chgQData(oldp+123,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgCData(oldp+125,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
            tracep->chgBit(oldp+127,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
            tracep->chgIData(oldp+128,((2U == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
            tracep->chgIData(oldp+129,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
            tracep->chgQData(oldp+130,(((IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)
                                         ? vlSelf->top__DOT__WBU__DOT__ws_pc
                                         : ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)
                                             ? vlSelf->top__DOT__LSU__DOT__ms_pc
                                             : ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid)
                                                 ? vlSelf->top__DOT__EXU__DOT__es_pc
                                                 : 
                                                ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                  ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                  : vlSelf->top__DOT__IFU__DOT__fs_pc))))),64);
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__diff_step));
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__Register__DOT__Reg
                                       [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0xfU))]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__Register__DOT__Reg
                                       [vlSelf->top__DOT__IDU_io_raddr2]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0U]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__Register__DOT__Reg
                                       [1U]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__Register__DOT__Reg
                                       [2U]),64);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__Register__DOT__Reg
                                       [3U]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__Register__DOT__Reg
                                       [4U]),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__Register__DOT__Reg
                                       [5U]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__Register__DOT__Reg
                                       [6U]),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__Register__DOT__Reg
                                       [7U]),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__Register__DOT__Reg
                                       [8U]),64);
            tracep->chgQData(oldp+219,(vlSelf->top__DOT__Register__DOT__Reg
                                       [9U]),64);
            tracep->chgQData(oldp+221,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xaU]),64);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xbU]),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xcU]),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xdU]),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xeU]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xfU]),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x10U]),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x11U]),64);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x12U]),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x13U]),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x14U]),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x15U]),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x16U]),64);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x17U]),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x18U]),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x19U]),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1aU]),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1bU]),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1cU]),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1dU]),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1eU]),64);
            tracep->chgQData(oldp+263,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1fU]),64);
            tracep->chgBit(oldp+265,((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                       & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
                                      & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))));
            tracep->chgQData(oldp+266,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
            tracep->chgQData(oldp+268,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
            tracep->chgQData(oldp+270,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
            tracep->chgQData(oldp+272,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
            tracep->chgQData(oldp+274,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
            tracep->chgQData(oldp+276,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
            tracep->chgQData(oldp+278,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
            tracep->chgQData(oldp+280,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
            tracep->chgQData(oldp+282,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
            tracep->chgQData(oldp+284,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
            tracep->chgQData(oldp+286,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
            tracep->chgQData(oldp+288,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
            tracep->chgQData(oldp+290,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
            tracep->chgQData(oldp+292,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
            tracep->chgQData(oldp+294,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
            tracep->chgQData(oldp+296,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
            tracep->chgQData(oldp+298,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
            tracep->chgQData(oldp+300,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
            tracep->chgQData(oldp+302,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
            tracep->chgQData(oldp+304,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
            tracep->chgQData(oldp+306,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
            tracep->chgQData(oldp+308,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
            tracep->chgQData(oldp+310,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
            tracep->chgQData(oldp+312,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
            tracep->chgQData(oldp+314,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
            tracep->chgQData(oldp+316,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
            tracep->chgQData(oldp+318,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
            tracep->chgQData(oldp+320,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
            tracep->chgQData(oldp+326,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
            tracep->chgQData(oldp+328,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
            tracep->chgBit(oldp+330,(vlSelf->top__DOT__IFU__DOT__fs_valid));
            tracep->chgBit(oldp+331,(vlSelf->top__DOT__IFU__DOT__fs_ready_go));
            tracep->chgBit(oldp+332,(vlSelf->top__DOT__IFU__DOT__cache_init));
            tracep->chgBit(oldp+333,(vlSelf->top__DOT__IFU__DOT__fs_to_ds_valid));
            tracep->chgQData(oldp+334,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
            tracep->chgBit(oldp+336,(vlSelf->top__DOT__IFU__DOT__fs_allowin));
            tracep->chgBit(oldp+337,(((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                      & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
            tracep->chgBit(oldp+338,((((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
                                       >> 1U) & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))));
            tracep->chgCData(oldp+339,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                         ? 1U : ((1U 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                                  ? (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)
                                                  : 0U))),2);
            tracep->chgQData(oldp+340,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                         ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                         : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                             ? ((0x1073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? vlSelf->top__DOT__Register_io_rdata1
                                                 : 
                                                ((0x2073U 
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
            tracep->chgCData(oldp+342,(((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                         ? 0U : ((0x3eU 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))
                                                  ? 1U
                                                  : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))),2);
            tracep->chgQData(oldp+343,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data),64);
            tracep->chgIData(oldp+345,(vlSelf->top__DOT__IDU__DOT__inst),32);
            tracep->chgBit(oldp+346,(vlSelf->top__DOT__IDU__DOT__br_taken_cancel));
            tracep->chgBit(oldp+347,(vlSelf->top__DOT__IDU__DOT__src1_is_pc));
            tracep->chgIData(oldp+348,(vlSelf->top__DOT__IDU__DOT___inst_type_T_188),32);
            tracep->chgCData(oldp+349,(vlSelf->top__DOT__IDU__DOT__csr_write),2);
            tracep->chgBit(oldp+350,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
            tracep->chgBit(oldp+351,(vlSelf->top__DOT__IDU__DOT__conflict));
            tracep->chgBit(oldp+352,(vlSelf->top__DOT__IDU__DOT__ds_ready_go));
            tracep->chgBit(oldp+353,(vlSelf->top__DOT__IDU__DOT__ds_allowin));
            tracep->chgBit(oldp+354,(vlSelf->top__DOT__IDU__DOT__br_taken));
            tracep->chgSData(oldp+355,((vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U)),12);
            tracep->chgIData(oldp+356,(((0x80000U & 
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
            tracep->chgIData(oldp+357,((vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+358,(((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 7U)))),12);
            tracep->chgSData(oldp+359,(((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
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
            tracep->chgQData(oldp+360,(vlSelf->top__DOT__IDU__DOT__imm),64);
            tracep->chgCData(oldp+362,(vlSelf->top__DOT__IDU__DOT__csr_index),2);
            tracep->chgQData(oldp+363,(((0x1073U == 
                                         (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
                                         ? vlSelf->top__DOT__Register_io_rdata1
                                         : ((0x2073U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? (vlSelf->top__DOT__Register_io_rdata1 
                                                | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                             : ((0x3073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 
                                                (vlSelf->top__DOT__Register_io_rdata1 
                                                 & (~ vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data))
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+365,(vlSelf->top__DOT__IDU__DOT__src1),64);
            tracep->chgQData(oldp+367,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[0]),64);
            tracep->chgQData(oldp+369,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[1]),64);
            tracep->chgQData(oldp+371,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[2]),64);
            tracep->chgQData(oldp+373,(vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[3]),64);
            tracep->chgQData(oldp+375,(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value),64);
            tracep->chgQData(oldp+377,(vlSelf->top__DOT__EXU__DOT__src2_value),64);
            tracep->chgIData(oldp+379,(vlSelf->top__DOT__EXU__DOT__ALUop),32);
            tracep->chgQData(oldp+380,(vlSelf->top__DOT__EXU__DOT__src1_value),64);
            tracep->chgQData(oldp+382,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res),64);
            tracep->chgQData(oldp+384,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res),64);
            tracep->chgQData(oldp+386,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res),64);
            tracep->chgQData(oldp+388,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),64);
            VL_EXTEND_WQ(127,64, __Vtemp2391, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
            VL_SHIFTL_WWI(127,127,6, __Vtemp2392, __Vtemp2391, 
                          (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
            __Vtemp2393[0U] = __Vtemp2392[0U];
            __Vtemp2393[1U] = __Vtemp2392[1U];
            __Vtemp2393[2U] = __Vtemp2392[2U];
            __Vtemp2393[3U] = (0x7fffffffU & __Vtemp2392[3U]);
            tracep->chgWData(oldp+390,(__Vtemp2393),127);
            tracep->chgIData(oldp+394,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))),32);
            tracep->chgIData(oldp+395,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res),32);
            tracep->chgQData(oldp+396,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res),63);
            tracep->chgQData(oldp+398,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        | vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+400,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        ^ vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+402,((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                        & vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            VL_EXTEND_WQ(128,64, __Vtemp2394, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
            VL_EXTEND_WQ(128,64, __Vtemp2395, vlSelf->top__DOT__EXU__DOT__src2_value);
            VL_MUL_W(4, __Vtemp2396, __Vtemp2394, __Vtemp2395);
            tracep->chgQData(oldp+404,((((QData)((IData)(
                                                         __Vtemp2396[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp2396[0U])))),64);
            tracep->chgIData(oldp+406,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT___mluw_res_T_2)),32);
            tracep->chgIData(oldp+407,((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT___divw_res_T_4)),32);
            tracep->chgIData(oldp+408,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__divuw_res),32);
            tracep->chgIData(oldp+409,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__remw_res),32);
            tracep->chgIData(oldp+410,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__remuw_res),32);
            VL_EXTENDS_WQ(65,64, __Vtemp2399, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
            __Vtemp2400[0U] = __Vtemp2399[0U];
            __Vtemp2400[1U] = __Vtemp2399[1U];
            __Vtemp2400[2U] = (1U & __Vtemp2399[2U]);
            VL_EXTENDS_WQ(65,64, __Vtemp2402, vlSelf->top__DOT__EXU__DOT__src2_value);
            __Vtemp2403[0U] = __Vtemp2402[0U];
            __Vtemp2403[1U] = __Vtemp2402[1U];
            __Vtemp2403[2U] = (1U & __Vtemp2402[2U]);
            VL_DIVS_WWW(65, __Vtemp2404, __Vtemp2400, __Vtemp2403);
            __Vtemp2405[0U] = __Vtemp2404[0U];
            __Vtemp2405[1U] = __Vtemp2404[1U];
            __Vtemp2405[2U] = (1U & __Vtemp2404[2U]);
            tracep->chgWData(oldp+411,(__Vtemp2405),65);
            tracep->chgQData(oldp+414,(VL_DIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+416,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgQData(oldp+418,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)),64);
            tracep->chgWData(oldp+420,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res),127);
            tracep->chgBit(oldp+424,(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
            tracep->chgQData(oldp+425,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
            tracep->chgBit(oldp+427,(vlSelf->top__DOT__LSU__DOT__ren));
            tracep->chgQData(oldp+428,(vlSelf->top__DOT__LSU__DOT__maddr),64);
            tracep->chgCData(oldp+430,(vlSelf->top__DOT__LSU__DOT__load_type),3);
            tracep->chgQData(oldp+431,(vlSelf->top__DOT__LSU__DOT__mem_rdata),64);
            tracep->chgQData(oldp+433,(((7U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))))
                                         : ((6U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                             ? ((((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__LSU__DOT__mem_rdata 
                                                              >> 7U)))
                                                   ? 0xffffffffffffffULL
                                                   : 0ULL) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata)))))
                                             : ((5U 
                                                 == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                 ? 
                                                ((((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__mem_rdata 
                                                               >> 0xfU)))
                                                    ? 0xffffffffffffULL
                                                    : 0ULL) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata)))))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                  ? (QData)((IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata))))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? vlSelf->top__DOT__LSU__DOT__mem_rdata
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__mem_rdata 
                                                                                >> 0x1fU)))
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__LSU__DOT__mem_rdata)))
                                                     : vlSelf->top__DOT__LSU__DOT__mem_rdata)))))))),64);
            tracep->chgCData(oldp+435,(vlSelf->top__DOT__arbiter__DOT__state),2);
            tracep->chgWData(oldp+436,(vlSelf->top__DOT__i_cache__DOT__ram_0_0),512);
            tracep->chgWData(oldp+452,(vlSelf->top__DOT__i_cache__DOT__ram_0_1),512);
            tracep->chgWData(oldp+468,(vlSelf->top__DOT__i_cache__DOT__ram_0_2),512);
            tracep->chgWData(oldp+484,(vlSelf->top__DOT__i_cache__DOT__ram_0_3),512);
            tracep->chgWData(oldp+500,(vlSelf->top__DOT__i_cache__DOT__ram_0_4),512);
            tracep->chgWData(oldp+516,(vlSelf->top__DOT__i_cache__DOT__ram_0_5),512);
            tracep->chgWData(oldp+532,(vlSelf->top__DOT__i_cache__DOT__ram_0_6),512);
            tracep->chgWData(oldp+548,(vlSelf->top__DOT__i_cache__DOT__ram_0_7),512);
            tracep->chgWData(oldp+564,(vlSelf->top__DOT__i_cache__DOT__ram_0_8),512);
            tracep->chgWData(oldp+580,(vlSelf->top__DOT__i_cache__DOT__ram_0_9),512);
            tracep->chgWData(oldp+596,(vlSelf->top__DOT__i_cache__DOT__ram_0_10),512);
            tracep->chgWData(oldp+612,(vlSelf->top__DOT__i_cache__DOT__ram_0_11),512);
            tracep->chgWData(oldp+628,(vlSelf->top__DOT__i_cache__DOT__ram_0_12),512);
            tracep->chgWData(oldp+644,(vlSelf->top__DOT__i_cache__DOT__ram_0_13),512);
            tracep->chgWData(oldp+660,(vlSelf->top__DOT__i_cache__DOT__ram_0_14),512);
            tracep->chgWData(oldp+676,(vlSelf->top__DOT__i_cache__DOT__ram_0_15),512);
            tracep->chgWData(oldp+692,(vlSelf->top__DOT__i_cache__DOT__ram_1_0),512);
            tracep->chgWData(oldp+708,(vlSelf->top__DOT__i_cache__DOT__ram_1_1),512);
            tracep->chgWData(oldp+724,(vlSelf->top__DOT__i_cache__DOT__ram_1_2),512);
            tracep->chgWData(oldp+740,(vlSelf->top__DOT__i_cache__DOT__ram_1_3),512);
            tracep->chgWData(oldp+756,(vlSelf->top__DOT__i_cache__DOT__ram_1_4),512);
            tracep->chgWData(oldp+772,(vlSelf->top__DOT__i_cache__DOT__ram_1_5),512);
            tracep->chgWData(oldp+788,(vlSelf->top__DOT__i_cache__DOT__ram_1_6),512);
            tracep->chgWData(oldp+804,(vlSelf->top__DOT__i_cache__DOT__ram_1_7),512);
            tracep->chgWData(oldp+820,(vlSelf->top__DOT__i_cache__DOT__ram_1_8),512);
            tracep->chgWData(oldp+836,(vlSelf->top__DOT__i_cache__DOT__ram_1_9),512);
            tracep->chgWData(oldp+852,(vlSelf->top__DOT__i_cache__DOT__ram_1_10),512);
            tracep->chgWData(oldp+868,(vlSelf->top__DOT__i_cache__DOT__ram_1_11),512);
            tracep->chgWData(oldp+884,(vlSelf->top__DOT__i_cache__DOT__ram_1_12),512);
            tracep->chgWData(oldp+900,(vlSelf->top__DOT__i_cache__DOT__ram_1_13),512);
            tracep->chgWData(oldp+916,(vlSelf->top__DOT__i_cache__DOT__ram_1_14),512);
            tracep->chgWData(oldp+932,(vlSelf->top__DOT__i_cache__DOT__ram_1_15),512);
            tracep->chgIData(oldp+948,(vlSelf->top__DOT__i_cache__DOT__tag_0_0),32);
            tracep->chgIData(oldp+949,(vlSelf->top__DOT__i_cache__DOT__tag_0_1),32);
            tracep->chgIData(oldp+950,(vlSelf->top__DOT__i_cache__DOT__tag_0_2),32);
            tracep->chgIData(oldp+951,(vlSelf->top__DOT__i_cache__DOT__tag_0_3),32);
            tracep->chgIData(oldp+952,(vlSelf->top__DOT__i_cache__DOT__tag_0_4),32);
            tracep->chgIData(oldp+953,(vlSelf->top__DOT__i_cache__DOT__tag_0_5),32);
            tracep->chgIData(oldp+954,(vlSelf->top__DOT__i_cache__DOT__tag_0_6),32);
            tracep->chgIData(oldp+955,(vlSelf->top__DOT__i_cache__DOT__tag_0_7),32);
            tracep->chgIData(oldp+956,(vlSelf->top__DOT__i_cache__DOT__tag_0_8),32);
            tracep->chgIData(oldp+957,(vlSelf->top__DOT__i_cache__DOT__tag_0_9),32);
            tracep->chgIData(oldp+958,(vlSelf->top__DOT__i_cache__DOT__tag_0_10),32);
            tracep->chgIData(oldp+959,(vlSelf->top__DOT__i_cache__DOT__tag_0_11),32);
            tracep->chgIData(oldp+960,(vlSelf->top__DOT__i_cache__DOT__tag_0_12),32);
            tracep->chgIData(oldp+961,(vlSelf->top__DOT__i_cache__DOT__tag_0_13),32);
            tracep->chgIData(oldp+962,(vlSelf->top__DOT__i_cache__DOT__tag_0_14),32);
            tracep->chgIData(oldp+963,(vlSelf->top__DOT__i_cache__DOT__tag_0_15),32);
            tracep->chgIData(oldp+964,(vlSelf->top__DOT__i_cache__DOT__tag_1_0),32);
            tracep->chgIData(oldp+965,(vlSelf->top__DOT__i_cache__DOT__tag_1_1),32);
            tracep->chgIData(oldp+966,(vlSelf->top__DOT__i_cache__DOT__tag_1_2),32);
            tracep->chgIData(oldp+967,(vlSelf->top__DOT__i_cache__DOT__tag_1_3),32);
            tracep->chgIData(oldp+968,(vlSelf->top__DOT__i_cache__DOT__tag_1_4),32);
            tracep->chgIData(oldp+969,(vlSelf->top__DOT__i_cache__DOT__tag_1_5),32);
            tracep->chgIData(oldp+970,(vlSelf->top__DOT__i_cache__DOT__tag_1_6),32);
            tracep->chgIData(oldp+971,(vlSelf->top__DOT__i_cache__DOT__tag_1_7),32);
            tracep->chgIData(oldp+972,(vlSelf->top__DOT__i_cache__DOT__tag_1_8),32);
            tracep->chgIData(oldp+973,(vlSelf->top__DOT__i_cache__DOT__tag_1_9),32);
            tracep->chgIData(oldp+974,(vlSelf->top__DOT__i_cache__DOT__tag_1_10),32);
            tracep->chgIData(oldp+975,(vlSelf->top__DOT__i_cache__DOT__tag_1_11),32);
            tracep->chgIData(oldp+976,(vlSelf->top__DOT__i_cache__DOT__tag_1_12),32);
            tracep->chgIData(oldp+977,(vlSelf->top__DOT__i_cache__DOT__tag_1_13),32);
            tracep->chgIData(oldp+978,(vlSelf->top__DOT__i_cache__DOT__tag_1_14),32);
            tracep->chgIData(oldp+979,(vlSelf->top__DOT__i_cache__DOT__tag_1_15),32);
            tracep->chgBit(oldp+980,(vlSelf->top__DOT__i_cache__DOT__valid_0_0));
            tracep->chgBit(oldp+981,(vlSelf->top__DOT__i_cache__DOT__valid_0_1));
            tracep->chgBit(oldp+982,(vlSelf->top__DOT__i_cache__DOT__valid_0_2));
            tracep->chgBit(oldp+983,(vlSelf->top__DOT__i_cache__DOT__valid_0_3));
            tracep->chgBit(oldp+984,(vlSelf->top__DOT__i_cache__DOT__valid_0_4));
            tracep->chgBit(oldp+985,(vlSelf->top__DOT__i_cache__DOT__valid_0_5));
            tracep->chgBit(oldp+986,(vlSelf->top__DOT__i_cache__DOT__valid_0_6));
            tracep->chgBit(oldp+987,(vlSelf->top__DOT__i_cache__DOT__valid_0_7));
            tracep->chgBit(oldp+988,(vlSelf->top__DOT__i_cache__DOT__valid_0_8));
            tracep->chgBit(oldp+989,(vlSelf->top__DOT__i_cache__DOT__valid_0_9));
            tracep->chgBit(oldp+990,(vlSelf->top__DOT__i_cache__DOT__valid_0_10));
            tracep->chgBit(oldp+991,(vlSelf->top__DOT__i_cache__DOT__valid_0_11));
            tracep->chgBit(oldp+992,(vlSelf->top__DOT__i_cache__DOT__valid_0_12));
            tracep->chgBit(oldp+993,(vlSelf->top__DOT__i_cache__DOT__valid_0_13));
            tracep->chgBit(oldp+994,(vlSelf->top__DOT__i_cache__DOT__valid_0_14));
            tracep->chgBit(oldp+995,(vlSelf->top__DOT__i_cache__DOT__valid_0_15));
            tracep->chgBit(oldp+996,(vlSelf->top__DOT__i_cache__DOT__valid_1_0));
            tracep->chgBit(oldp+997,(vlSelf->top__DOT__i_cache__DOT__valid_1_1));
            tracep->chgBit(oldp+998,(vlSelf->top__DOT__i_cache__DOT__valid_1_2));
            tracep->chgBit(oldp+999,(vlSelf->top__DOT__i_cache__DOT__valid_1_3));
            tracep->chgBit(oldp+1000,(vlSelf->top__DOT__i_cache__DOT__valid_1_4));
            tracep->chgBit(oldp+1001,(vlSelf->top__DOT__i_cache__DOT__valid_1_5));
            tracep->chgBit(oldp+1002,(vlSelf->top__DOT__i_cache__DOT__valid_1_6));
            tracep->chgBit(oldp+1003,(vlSelf->top__DOT__i_cache__DOT__valid_1_7));
            tracep->chgBit(oldp+1004,(vlSelf->top__DOT__i_cache__DOT__valid_1_8));
            tracep->chgBit(oldp+1005,(vlSelf->top__DOT__i_cache__DOT__valid_1_9));
            tracep->chgBit(oldp+1006,(vlSelf->top__DOT__i_cache__DOT__valid_1_10));
            tracep->chgBit(oldp+1007,(vlSelf->top__DOT__i_cache__DOT__valid_1_11));
            tracep->chgBit(oldp+1008,(vlSelf->top__DOT__i_cache__DOT__valid_1_12));
            tracep->chgBit(oldp+1009,(vlSelf->top__DOT__i_cache__DOT__valid_1_13));
            tracep->chgBit(oldp+1010,(vlSelf->top__DOT__i_cache__DOT__valid_1_14));
            tracep->chgBit(oldp+1011,(vlSelf->top__DOT__i_cache__DOT__valid_1_15));
            tracep->chgQData(oldp+1012,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+1014,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
            tracep->chgQData(oldp+1016,(vlSelf->top__DOT__i_cache__DOT__receive_data_2),64);
            tracep->chgQData(oldp+1018,(vlSelf->top__DOT__i_cache__DOT__receive_data_3),64);
            tracep->chgQData(oldp+1020,(vlSelf->top__DOT__i_cache__DOT__receive_data_4),64);
            tracep->chgQData(oldp+1022,(vlSelf->top__DOT__i_cache__DOT__receive_data_5),64);
            tracep->chgQData(oldp+1024,(vlSelf->top__DOT__i_cache__DOT__receive_data_6),64);
            tracep->chgQData(oldp+1026,(vlSelf->top__DOT__i_cache__DOT__receive_data_7),64);
            tracep->chgCData(oldp+1028,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
            tracep->chgCData(oldp+1029,(vlSelf->top__DOT__i_cache__DOT__quene_0),2);
            tracep->chgCData(oldp+1030,(vlSelf->top__DOT__i_cache__DOT__quene_1),2);
            tracep->chgCData(oldp+1031,(vlSelf->top__DOT__i_cache__DOT__quene_2),2);
            tracep->chgCData(oldp+1032,(vlSelf->top__DOT__i_cache__DOT__quene_3),2);
            tracep->chgCData(oldp+1033,(vlSelf->top__DOT__i_cache__DOT__quene_4),2);
            tracep->chgCData(oldp+1034,(vlSelf->top__DOT__i_cache__DOT__quene_5),2);
            tracep->chgCData(oldp+1035,(vlSelf->top__DOT__i_cache__DOT__quene_6),2);
            tracep->chgCData(oldp+1036,(vlSelf->top__DOT__i_cache__DOT__quene_7),2);
            tracep->chgCData(oldp+1037,(vlSelf->top__DOT__i_cache__DOT__quene_8),2);
            tracep->chgCData(oldp+1038,(vlSelf->top__DOT__i_cache__DOT__quene_9),2);
            tracep->chgCData(oldp+1039,(vlSelf->top__DOT__i_cache__DOT__quene_10),2);
            tracep->chgCData(oldp+1040,(vlSelf->top__DOT__i_cache__DOT__quene_11),2);
            tracep->chgCData(oldp+1041,(vlSelf->top__DOT__i_cache__DOT__quene_12),2);
            tracep->chgCData(oldp+1042,(vlSelf->top__DOT__i_cache__DOT__quene_13),2);
            tracep->chgCData(oldp+1043,(vlSelf->top__DOT__i_cache__DOT__quene_14),2);
            tracep->chgCData(oldp+1044,(vlSelf->top__DOT__i_cache__DOT__quene_15),2);
            tracep->chgCData(oldp+1045,((0x3fU & (IData)(vlSelf->top__DOT__IFU__DOT__fs_pc))),6);
            tracep->chgCData(oldp+1046,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U)))),4);
            tracep->chgIData(oldp+1047,((0x3fffffU 
                                         & (IData)(
                                                   (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                    >> 0xaU)))),22);
            tracep->chgSData(oldp+1048,((0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                                   << 3U))),9);
            tracep->chgBit(oldp+1049,(vlSelf->top__DOT__i_cache__DOT__way0_hit));
            tracep->chgBit(oldp+1050,(vlSelf->top__DOT__i_cache__DOT__way1_hit));
            tracep->chgCData(oldp+1051,(vlSelf->top__DOT__i_cache__DOT__unuse_way),2);
            tracep->chgCData(oldp+1052,(vlSelf->top__DOT__i_cache__DOT__state),3);
            tracep->chgWData(oldp+1053,(vlSelf->top__DOT__d_cache__DOT__ram_0_0),512);
            tracep->chgWData(oldp+1069,(vlSelf->top__DOT__d_cache__DOT__ram_0_1),512);
            tracep->chgWData(oldp+1085,(vlSelf->top__DOT__d_cache__DOT__ram_0_2),512);
            tracep->chgWData(oldp+1101,(vlSelf->top__DOT__d_cache__DOT__ram_0_3),512);
            tracep->chgWData(oldp+1117,(vlSelf->top__DOT__d_cache__DOT__ram_0_4),512);
            tracep->chgWData(oldp+1133,(vlSelf->top__DOT__d_cache__DOT__ram_0_5),512);
            tracep->chgWData(oldp+1149,(vlSelf->top__DOT__d_cache__DOT__ram_0_6),512);
            tracep->chgWData(oldp+1165,(vlSelf->top__DOT__d_cache__DOT__ram_0_7),512);
            tracep->chgWData(oldp+1181,(vlSelf->top__DOT__d_cache__DOT__ram_0_8),512);
            tracep->chgWData(oldp+1197,(vlSelf->top__DOT__d_cache__DOT__ram_0_9),512);
            tracep->chgWData(oldp+1213,(vlSelf->top__DOT__d_cache__DOT__ram_0_10),512);
            tracep->chgWData(oldp+1229,(vlSelf->top__DOT__d_cache__DOT__ram_0_11),512);
            tracep->chgWData(oldp+1245,(vlSelf->top__DOT__d_cache__DOT__ram_0_12),512);
            tracep->chgWData(oldp+1261,(vlSelf->top__DOT__d_cache__DOT__ram_0_13),512);
            tracep->chgWData(oldp+1277,(vlSelf->top__DOT__d_cache__DOT__ram_0_14),512);
            tracep->chgWData(oldp+1293,(vlSelf->top__DOT__d_cache__DOT__ram_0_15),512);
            tracep->chgWData(oldp+1309,(vlSelf->top__DOT__d_cache__DOT__ram_1_0),512);
            tracep->chgWData(oldp+1325,(vlSelf->top__DOT__d_cache__DOT__ram_1_1),512);
            tracep->chgWData(oldp+1341,(vlSelf->top__DOT__d_cache__DOT__ram_1_2),512);
            tracep->chgWData(oldp+1357,(vlSelf->top__DOT__d_cache__DOT__ram_1_3),512);
            tracep->chgWData(oldp+1373,(vlSelf->top__DOT__d_cache__DOT__ram_1_4),512);
            tracep->chgWData(oldp+1389,(vlSelf->top__DOT__d_cache__DOT__ram_1_5),512);
            tracep->chgWData(oldp+1405,(vlSelf->top__DOT__d_cache__DOT__ram_1_6),512);
            tracep->chgWData(oldp+1421,(vlSelf->top__DOT__d_cache__DOT__ram_1_7),512);
            tracep->chgWData(oldp+1437,(vlSelf->top__DOT__d_cache__DOT__ram_1_8),512);
            tracep->chgWData(oldp+1453,(vlSelf->top__DOT__d_cache__DOT__ram_1_9),512);
            tracep->chgWData(oldp+1469,(vlSelf->top__DOT__d_cache__DOT__ram_1_10),512);
            tracep->chgWData(oldp+1485,(vlSelf->top__DOT__d_cache__DOT__ram_1_11),512);
            tracep->chgWData(oldp+1501,(vlSelf->top__DOT__d_cache__DOT__ram_1_12),512);
            tracep->chgWData(oldp+1517,(vlSelf->top__DOT__d_cache__DOT__ram_1_13),512);
            tracep->chgWData(oldp+1533,(vlSelf->top__DOT__d_cache__DOT__ram_1_14),512);
            tracep->chgWData(oldp+1549,(vlSelf->top__DOT__d_cache__DOT__ram_1_15),512);
            tracep->chgIData(oldp+1565,(vlSelf->top__DOT__d_cache__DOT__tag_0_0),32);
            tracep->chgIData(oldp+1566,(vlSelf->top__DOT__d_cache__DOT__tag_0_1),32);
            tracep->chgIData(oldp+1567,(vlSelf->top__DOT__d_cache__DOT__tag_0_2),32);
            tracep->chgIData(oldp+1568,(vlSelf->top__DOT__d_cache__DOT__tag_0_3),32);
            tracep->chgIData(oldp+1569,(vlSelf->top__DOT__d_cache__DOT__tag_0_4),32);
            tracep->chgIData(oldp+1570,(vlSelf->top__DOT__d_cache__DOT__tag_0_5),32);
            tracep->chgIData(oldp+1571,(vlSelf->top__DOT__d_cache__DOT__tag_0_6),32);
            tracep->chgIData(oldp+1572,(vlSelf->top__DOT__d_cache__DOT__tag_0_7),32);
            tracep->chgIData(oldp+1573,(vlSelf->top__DOT__d_cache__DOT__tag_0_8),32);
            tracep->chgIData(oldp+1574,(vlSelf->top__DOT__d_cache__DOT__tag_0_9),32);
            tracep->chgIData(oldp+1575,(vlSelf->top__DOT__d_cache__DOT__tag_0_10),32);
            tracep->chgIData(oldp+1576,(vlSelf->top__DOT__d_cache__DOT__tag_0_11),32);
            tracep->chgIData(oldp+1577,(vlSelf->top__DOT__d_cache__DOT__tag_0_12),32);
            tracep->chgIData(oldp+1578,(vlSelf->top__DOT__d_cache__DOT__tag_0_13),32);
            tracep->chgIData(oldp+1579,(vlSelf->top__DOT__d_cache__DOT__tag_0_14),32);
            tracep->chgIData(oldp+1580,(vlSelf->top__DOT__d_cache__DOT__tag_0_15),32);
            tracep->chgIData(oldp+1581,(vlSelf->top__DOT__d_cache__DOT__tag_1_0),32);
            tracep->chgIData(oldp+1582,(vlSelf->top__DOT__d_cache__DOT__tag_1_1),32);
            tracep->chgIData(oldp+1583,(vlSelf->top__DOT__d_cache__DOT__tag_1_2),32);
            tracep->chgIData(oldp+1584,(vlSelf->top__DOT__d_cache__DOT__tag_1_3),32);
            tracep->chgIData(oldp+1585,(vlSelf->top__DOT__d_cache__DOT__tag_1_4),32);
            tracep->chgIData(oldp+1586,(vlSelf->top__DOT__d_cache__DOT__tag_1_5),32);
            tracep->chgIData(oldp+1587,(vlSelf->top__DOT__d_cache__DOT__tag_1_6),32);
            tracep->chgIData(oldp+1588,(vlSelf->top__DOT__d_cache__DOT__tag_1_7),32);
            tracep->chgIData(oldp+1589,(vlSelf->top__DOT__d_cache__DOT__tag_1_8),32);
            tracep->chgIData(oldp+1590,(vlSelf->top__DOT__d_cache__DOT__tag_1_9),32);
            tracep->chgIData(oldp+1591,(vlSelf->top__DOT__d_cache__DOT__tag_1_10),32);
            tracep->chgIData(oldp+1592,(vlSelf->top__DOT__d_cache__DOT__tag_1_11),32);
            tracep->chgIData(oldp+1593,(vlSelf->top__DOT__d_cache__DOT__tag_1_12),32);
            tracep->chgIData(oldp+1594,(vlSelf->top__DOT__d_cache__DOT__tag_1_13),32);
            tracep->chgIData(oldp+1595,(vlSelf->top__DOT__d_cache__DOT__tag_1_14),32);
            tracep->chgIData(oldp+1596,(vlSelf->top__DOT__d_cache__DOT__tag_1_15),32);
            tracep->chgBit(oldp+1597,(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
            tracep->chgBit(oldp+1598,(vlSelf->top__DOT__d_cache__DOT__valid_0_1));
            tracep->chgBit(oldp+1599,(vlSelf->top__DOT__d_cache__DOT__valid_0_2));
            tracep->chgBit(oldp+1600,(vlSelf->top__DOT__d_cache__DOT__valid_0_3));
            tracep->chgBit(oldp+1601,(vlSelf->top__DOT__d_cache__DOT__valid_0_4));
            tracep->chgBit(oldp+1602,(vlSelf->top__DOT__d_cache__DOT__valid_0_5));
            tracep->chgBit(oldp+1603,(vlSelf->top__DOT__d_cache__DOT__valid_0_6));
            tracep->chgBit(oldp+1604,(vlSelf->top__DOT__d_cache__DOT__valid_0_7));
            tracep->chgBit(oldp+1605,(vlSelf->top__DOT__d_cache__DOT__valid_0_8));
            tracep->chgBit(oldp+1606,(vlSelf->top__DOT__d_cache__DOT__valid_0_9));
            tracep->chgBit(oldp+1607,(vlSelf->top__DOT__d_cache__DOT__valid_0_10));
            tracep->chgBit(oldp+1608,(vlSelf->top__DOT__d_cache__DOT__valid_0_11));
            tracep->chgBit(oldp+1609,(vlSelf->top__DOT__d_cache__DOT__valid_0_12));
            tracep->chgBit(oldp+1610,(vlSelf->top__DOT__d_cache__DOT__valid_0_13));
            tracep->chgBit(oldp+1611,(vlSelf->top__DOT__d_cache__DOT__valid_0_14));
            tracep->chgBit(oldp+1612,(vlSelf->top__DOT__d_cache__DOT__valid_0_15));
            tracep->chgBit(oldp+1613,(vlSelf->top__DOT__d_cache__DOT__valid_1_0));
            tracep->chgBit(oldp+1614,(vlSelf->top__DOT__d_cache__DOT__valid_1_1));
            tracep->chgBit(oldp+1615,(vlSelf->top__DOT__d_cache__DOT__valid_1_2));
            tracep->chgBit(oldp+1616,(vlSelf->top__DOT__d_cache__DOT__valid_1_3));
            tracep->chgBit(oldp+1617,(vlSelf->top__DOT__d_cache__DOT__valid_1_4));
            tracep->chgBit(oldp+1618,(vlSelf->top__DOT__d_cache__DOT__valid_1_5));
            tracep->chgBit(oldp+1619,(vlSelf->top__DOT__d_cache__DOT__valid_1_6));
            tracep->chgBit(oldp+1620,(vlSelf->top__DOT__d_cache__DOT__valid_1_7));
            tracep->chgBit(oldp+1621,(vlSelf->top__DOT__d_cache__DOT__valid_1_8));
            tracep->chgBit(oldp+1622,(vlSelf->top__DOT__d_cache__DOT__valid_1_9));
            tracep->chgBit(oldp+1623,(vlSelf->top__DOT__d_cache__DOT__valid_1_10));
            tracep->chgBit(oldp+1624,(vlSelf->top__DOT__d_cache__DOT__valid_1_11));
            tracep->chgBit(oldp+1625,(vlSelf->top__DOT__d_cache__DOT__valid_1_12));
            tracep->chgBit(oldp+1626,(vlSelf->top__DOT__d_cache__DOT__valid_1_13));
            tracep->chgBit(oldp+1627,(vlSelf->top__DOT__d_cache__DOT__valid_1_14));
            tracep->chgBit(oldp+1628,(vlSelf->top__DOT__d_cache__DOT__valid_1_15));
            tracep->chgBit(oldp+1629,(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
            tracep->chgBit(oldp+1630,(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
            tracep->chgBit(oldp+1631,(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
            tracep->chgBit(oldp+1632,(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
            tracep->chgBit(oldp+1633,(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
            tracep->chgBit(oldp+1634,(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
            tracep->chgBit(oldp+1635,(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
            tracep->chgBit(oldp+1636,(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
            tracep->chgBit(oldp+1637,(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
            tracep->chgBit(oldp+1638,(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
            tracep->chgBit(oldp+1639,(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
            tracep->chgBit(oldp+1640,(vlSelf->top__DOT__d_cache__DOT__dirty_0_11));
            tracep->chgBit(oldp+1641,(vlSelf->top__DOT__d_cache__DOT__dirty_0_12));
            tracep->chgBit(oldp+1642,(vlSelf->top__DOT__d_cache__DOT__dirty_0_13));
            tracep->chgBit(oldp+1643,(vlSelf->top__DOT__d_cache__DOT__dirty_0_14));
            tracep->chgBit(oldp+1644,(vlSelf->top__DOT__d_cache__DOT__dirty_0_15));
            tracep->chgBit(oldp+1645,(vlSelf->top__DOT__d_cache__DOT__dirty_1_0));
            tracep->chgBit(oldp+1646,(vlSelf->top__DOT__d_cache__DOT__dirty_1_1));
            tracep->chgBit(oldp+1647,(vlSelf->top__DOT__d_cache__DOT__dirty_1_2));
            tracep->chgBit(oldp+1648,(vlSelf->top__DOT__d_cache__DOT__dirty_1_3));
            tracep->chgBit(oldp+1649,(vlSelf->top__DOT__d_cache__DOT__dirty_1_4));
            tracep->chgBit(oldp+1650,(vlSelf->top__DOT__d_cache__DOT__dirty_1_5));
            tracep->chgBit(oldp+1651,(vlSelf->top__DOT__d_cache__DOT__dirty_1_6));
            tracep->chgBit(oldp+1652,(vlSelf->top__DOT__d_cache__DOT__dirty_1_7));
            tracep->chgBit(oldp+1653,(vlSelf->top__DOT__d_cache__DOT__dirty_1_8));
            tracep->chgBit(oldp+1654,(vlSelf->top__DOT__d_cache__DOT__dirty_1_9));
            tracep->chgBit(oldp+1655,(vlSelf->top__DOT__d_cache__DOT__dirty_1_10));
            tracep->chgBit(oldp+1656,(vlSelf->top__DOT__d_cache__DOT__dirty_1_11));
            tracep->chgBit(oldp+1657,(vlSelf->top__DOT__d_cache__DOT__dirty_1_12));
            tracep->chgBit(oldp+1658,(vlSelf->top__DOT__d_cache__DOT__dirty_1_13));
            tracep->chgBit(oldp+1659,(vlSelf->top__DOT__d_cache__DOT__dirty_1_14));
            tracep->chgBit(oldp+1660,(vlSelf->top__DOT__d_cache__DOT__dirty_1_15));
            tracep->chgWData(oldp+1661,(vlSelf->top__DOT__d_cache__DOT__write_back_data),512);
            tracep->chgIData(oldp+1677,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
            tracep->chgQData(oldp+1678,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+1680,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
            tracep->chgQData(oldp+1682,(vlSelf->top__DOT__d_cache__DOT__receive_data_2),64);
            tracep->chgQData(oldp+1684,(vlSelf->top__DOT__d_cache__DOT__receive_data_3),64);
            tracep->chgQData(oldp+1686,(vlSelf->top__DOT__d_cache__DOT__receive_data_4),64);
            tracep->chgQData(oldp+1688,(vlSelf->top__DOT__d_cache__DOT__receive_data_5),64);
            tracep->chgQData(oldp+1690,(vlSelf->top__DOT__d_cache__DOT__receive_data_6),64);
            tracep->chgQData(oldp+1692,(vlSelf->top__DOT__d_cache__DOT__receive_data_7),64);
            tracep->chgCData(oldp+1694,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
            tracep->chgCData(oldp+1695,(vlSelf->top__DOT__d_cache__DOT__quene_0),2);
            tracep->chgCData(oldp+1696,(vlSelf->top__DOT__d_cache__DOT__quene_1),2);
            tracep->chgCData(oldp+1697,(vlSelf->top__DOT__d_cache__DOT__quene_2),2);
            tracep->chgCData(oldp+1698,(vlSelf->top__DOT__d_cache__DOT__quene_3),2);
            tracep->chgCData(oldp+1699,(vlSelf->top__DOT__d_cache__DOT__quene_4),2);
            tracep->chgCData(oldp+1700,(vlSelf->top__DOT__d_cache__DOT__quene_5),2);
            tracep->chgCData(oldp+1701,(vlSelf->top__DOT__d_cache__DOT__quene_6),2);
            tracep->chgCData(oldp+1702,(vlSelf->top__DOT__d_cache__DOT__quene_7),2);
            tracep->chgCData(oldp+1703,(vlSelf->top__DOT__d_cache__DOT__quene_8),2);
            tracep->chgCData(oldp+1704,(vlSelf->top__DOT__d_cache__DOT__quene_9),2);
            tracep->chgCData(oldp+1705,(vlSelf->top__DOT__d_cache__DOT__quene_10),2);
            tracep->chgCData(oldp+1706,(vlSelf->top__DOT__d_cache__DOT__quene_11),2);
            tracep->chgCData(oldp+1707,(vlSelf->top__DOT__d_cache__DOT__quene_12),2);
            tracep->chgCData(oldp+1708,(vlSelf->top__DOT__d_cache__DOT__quene_13),2);
            tracep->chgCData(oldp+1709,(vlSelf->top__DOT__d_cache__DOT__quene_14),2);
            tracep->chgCData(oldp+1710,(vlSelf->top__DOT__d_cache__DOT__quene_15),2);
            tracep->chgCData(oldp+1711,((0x3fU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),6);
            tracep->chgCData(oldp+1712,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__LSU__DOT__maddr 
                                                         >> 6U)))),4);
            tracep->chgIData(oldp+1713,((0x3fffffU 
                                         & (IData)(
                                                   (vlSelf->top__DOT__LSU__DOT__maddr 
                                                    >> 0xaU)))),22);
            tracep->chgSData(oldp+1714,((0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                                   << 3U))),9);
            tracep->chgQData(oldp+1715,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
            tracep->chgBit(oldp+1717,(vlSelf->top__DOT__d_cache__DOT__way0_hit));
            tracep->chgBit(oldp+1718,(vlSelf->top__DOT__d_cache__DOT__way1_hit));
            tracep->chgCData(oldp+1719,(vlSelf->top__DOT__d_cache__DOT__unuse_way),2);
            tracep->chgCData(oldp+1720,(vlSelf->top__DOT__d_cache__DOT__state),4);
            tracep->chgQData(oldp+1721,(vlSelf->top__DOT__axi__DOT__araddr),64);
            tracep->chgQData(oldp+1723,(vlSelf->top__DOT__axi__DOT__awaddr),64);
            tracep->chgCData(oldp+1725,(vlSelf->top__DOT__axi__DOT__arlen),8);
            tracep->chgCData(oldp+1726,(vlSelf->top__DOT__axi__DOT__awlen),8);
            tracep->chgCData(oldp+1727,(vlSelf->top__DOT__axi__DOT__state),3);
        }
        tracep->chgBit(oldp+1728,(vlSelf->clock));
        tracep->chgBit(oldp+1729,(vlSelf->reset));
        tracep->chgIData(oldp+1730,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+1731,(vlSelf->io_pc),64);
        tracep->chgBit(oldp+1733,(vlSelf->io_step));
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
