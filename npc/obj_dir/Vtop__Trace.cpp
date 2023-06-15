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
    VlWide<16>/*511:0*/ __Vtemp2474;
    VlWide<16>/*511:0*/ __Vtemp2475;
    VlWide<16>/*511:0*/ __Vtemp2479;
    VlWide<16>/*511:0*/ __Vtemp2480;
    VlWide<16>/*511:0*/ __Vtemp2485;
    VlWide<16>/*511:0*/ __Vtemp2486;
    VlWide<16>/*511:0*/ __Vtemp2489;
    VlWide<4>/*127:0*/ __Vtemp2493;
    VlWide<4>/*127:0*/ __Vtemp2494;
    VlWide<4>/*127:0*/ __Vtemp2495;
    VlWide<3>/*95:0*/ __Vtemp2498;
    VlWide<3>/*95:0*/ __Vtemp2499;
    VlWide<3>/*95:0*/ __Vtemp2503;
    VlWide<3>/*95:0*/ __Vtemp2507;
    VlWide<3>/*95:0*/ __Vtemp2514;
    VlWide<4>/*127:0*/ __Vtemp2515;
    VlWide<3>/*95:0*/ __Vtemp2516;
    VlWide<4>/*127:0*/ __Vtemp2517;
    VlWide<4>/*127:0*/ __Vtemp2518;
    VlWide<4>/*127:0*/ __Vtemp2524;
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
                __Vtemp2474[0U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0U];
                __Vtemp2474[1U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[1U];
                __Vtemp2474[2U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[2U];
                __Vtemp2474[3U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[3U];
                __Vtemp2474[4U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[4U];
                __Vtemp2474[5U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[5U];
                __Vtemp2474[6U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[6U];
                __Vtemp2474[7U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[7U];
                __Vtemp2474[8U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[8U];
                __Vtemp2474[9U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[9U];
                __Vtemp2474[0xaU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xaU];
                __Vtemp2474[0xbU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xbU];
                __Vtemp2474[0xcU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xcU];
                __Vtemp2474[0xdU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xdU];
                __Vtemp2474[0xeU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xeU];
                __Vtemp2474[0xfU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xfU];
            } else {
                __Vtemp2474[0U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0U]);
                __Vtemp2474[1U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[1U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[1U]);
                __Vtemp2474[2U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[2U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[2U]);
                __Vtemp2474[3U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[3U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[3U]);
                __Vtemp2474[4U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[4U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[4U]);
                __Vtemp2474[5U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[5U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[5U]);
                __Vtemp2474[6U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[6U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[6U]);
                __Vtemp2474[7U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[7U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[7U]);
                __Vtemp2474[8U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[8U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[8U]);
                __Vtemp2474[9U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[9U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1223[9U]);
                __Vtemp2474[0xaU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xaU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xaU]);
                __Vtemp2474[0xbU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xbU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xbU]);
                __Vtemp2474[0xcU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xcU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xcU]);
                __Vtemp2474[0xdU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xdU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xdU]);
                __Vtemp2474[0xeU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xeU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xeU]);
                __Vtemp2474[0xfU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xfU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1223[0xfU]);
            }
            VL_SHIFTR_WWI(512,512,9, __Vtemp2475, __Vtemp2474, 
                          (0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                     << 3U)));
            if ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__IFU__DOT__fs_pc 
                                          >> 6U))))) {
                __Vtemp2479[0U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0U];
                __Vtemp2479[1U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[1U];
                __Vtemp2479[2U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[2U];
                __Vtemp2479[3U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[3U];
                __Vtemp2479[4U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[4U];
                __Vtemp2479[5U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[5U];
                __Vtemp2479[6U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[6U];
                __Vtemp2479[7U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[7U];
                __Vtemp2479[8U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[8U];
                __Vtemp2479[9U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[9U];
                __Vtemp2479[0xaU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xaU];
                __Vtemp2479[0xbU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xbU];
                __Vtemp2479[0xcU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xcU];
                __Vtemp2479[0xdU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xdU];
                __Vtemp2479[0xeU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xeU];
                __Vtemp2479[0xfU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xfU];
            } else {
                __Vtemp2479[0U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0U]);
                __Vtemp2479[1U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[1U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[1U]);
                __Vtemp2479[2U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[2U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[2U]);
                __Vtemp2479[3U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[3U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[3U]);
                __Vtemp2479[4U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[4U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[4U]);
                __Vtemp2479[5U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[5U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[5U]);
                __Vtemp2479[6U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[6U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[6U]);
                __Vtemp2479[7U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[7U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[7U]);
                __Vtemp2479[8U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[8U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[8U]);
                __Vtemp2479[9U] = ((0xeU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 6U))))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[9U]
                                    : vlSelf->top__DOT__i_cache__DOT___GEN_1239[9U]);
                __Vtemp2479[0xaU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xaU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xaU]);
                __Vtemp2479[0xbU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xbU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xbU]);
                __Vtemp2479[0xcU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xcU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xcU]);
                __Vtemp2479[0xdU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xdU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xdU]);
                __Vtemp2479[0xeU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xeU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xeU]);
                __Vtemp2479[0xfU] = ((0xeU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                          >> 6U))))
                                      ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xfU]
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_1239[0xfU]);
            }
            VL_SHIFTR_WWI(512,512,9, __Vtemp2480, __Vtemp2479, 
                          (0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                     << 3U)));
            tracep->chgQData(oldp+18,((((QData)((IData)(
                                                        ((1U 
                                                          == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                          ? 
                                                         ((IData)(vlSelf->top__DOT__i_cache__DOT__way0_hit)
                                                           ? 
                                                          __Vtemp2475[1U]
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__i_cache__DOT__way1_hit)
                                                            ? 
                                                           __Vtemp2480[1U]
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
                                                                      __Vtemp2475[0U]
                                                                       : 
                                                                      ((IData)(vlSelf->top__DOT__i_cache__DOT__way1_hit)
                                                                        ? 
                                                                       __Vtemp2480[0U]
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
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__EXU_io_es_allowin));
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__IDU__DOT__ds_pc),64);
            tracep->chgIData(oldp+32,(vlSelf->top__DOT__IDU__DOT___ALUop_T_176),32);
            tracep->chgQData(oldp+33,(((1U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                        ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                                        : vlSelf->top__DOT__IDU__DOT__src1)),64);
            tracep->chgQData(oldp+35,(((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                        ? vlSelf->top__DOT__IDU__DOT__imm
                                        : vlSelf->top__DOT__IDU__DOT___br_taken_T_1)),64);
            tracep->chgCData(oldp+37,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 7U))),5);
            tracep->chgQData(oldp+38,(((0x3023U == 
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
            tracep->chgBit(oldp+45,(((IData)(vlSelf->top__DOT__EXU__DOT__ld_we) 
                                     & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid))));
            tracep->chgQData(oldp+46,((((QData)((IData)(
                                                        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__LSU_io_ms_fwd_res),64);
            tracep->chgBit(oldp+50,(((IData)(vlSelf->top__DOT__EXU__DOT__es_valid) 
                                     & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)))));
            tracep->chgBit(oldp+51,(((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid) 
                                     & (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go))));
            tracep->chgBit(oldp+52,(vlSelf->top__DOT__EXU__DOT__es_rf_we));
            tracep->chgBit(oldp+53,(vlSelf->top__DOT__LSU_io_ms_rf_we));
            tracep->chgBit(oldp+54,(vlSelf->top__DOT__WBU__DOT__ws_rf_we));
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__EXU__DOT__es_valid));
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__LSU__DOT__ms_valid));
            tracep->chgBit(oldp+57,(vlSelf->top__DOT__WBU__DOT__ws_valid));
            tracep->chgCData(oldp+58,(vlSelf->top__DOT__EXU__DOT__es_rd),5);
            tracep->chgCData(oldp+59,(vlSelf->top__DOT__LSU__DOT__ms_rf_dst),5);
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__IDU__DOT__ds_valid));
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__LSU_io_ms_allowin));
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__EXU_io_es_to_ms_valid));
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__EXU__DOT__es_pc),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__EXU__DOT__store_data),64);
            tracep->chgBit(oldp+67,(vlSelf->top__DOT__EXU__DOT__st_we));
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__EXU__DOT__st_wstrb),8);
            tracep->chgBit(oldp+69,(vlSelf->top__DOT__EXU__DOT__ld_we));
            tracep->chgCData(oldp+70,(vlSelf->top__DOT__EXU__DOT__load_type),3);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__LSU__DOT__ms_pc),64);
            tracep->chgQData(oldp+73,(((0U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                        ? vlSelf->top__DOT__LSU__DOT__rdata
                                        : vlSelf->top__DOT__LSU__DOT__ms_res)),64);
            tracep->chgBit(oldp+75,(vlSelf->top__DOT__LSU_io_ms_to_ws_valid));
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__LSU__DOT__ms_rf_we));
            VL_SHIFTR_WWI(512,512,9, __Vtemp2485, vlSelf->top__DOT__d_cache__DOT___GEN_88, 
                          (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                     << 3U)));
            VL_SHIFTR_WWI(512,512,9, __Vtemp2486, vlSelf->top__DOT__d_cache__DOT___GEN_136, 
                          (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                     << 3U)));
            VL_EXTEND_WQ(512,64, __Vtemp2489, ((2U 
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
            tracep->chgQData(oldp+77,((((QData)((IData)(
                                                        ((1U 
                                                          == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                          ? 
                                                         ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                           ? 
                                                          __Vtemp2485[1U]
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                            ? 
                                                           __Vtemp2486[1U]
                                                            : 
                                                           Vtop__ConstPool__CONST_93e1b771_0[1U]))
                                                          : 
                                                         __Vtemp2489[1U]))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((1U 
                                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                      ? 
                                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                                                                       ? 
                                                                      __Vtemp2485[0U]
                                                                       : 
                                                                      ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                                        ? 
                                                                       __Vtemp2486[0U]
                                                                        : 
                                                                       Vtop__ConstPool__CONST_93e1b771_0[0U]))
                                                                      : 
                                                                     __Vtemp2489[0U]))))),64);
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__d_cache_io_to_lsu_rvalid));
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__d_cache_io_to_lsu_wready));
            tracep->chgIData(oldp+81,((IData)(vlSelf->top__DOT__LSU__DOT__maddr)),32);
            tracep->chgBit(oldp+82,(vlSelf->top__DOT__LSU_io_axi_out_arvalid));
            tracep->chgBit(oldp+83,(vlSelf->top__DOT__LSU_io_axi_out_awvalid));
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__LSU__DOT__store_data),64);
            tracep->chgCData(oldp+86,(vlSelf->top__DOT__LSU__DOT__wstrb),8);
            tracep->chgBit(oldp+87,(vlSelf->top__DOT__LSU__DOT__wen));
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__WBU__DOT__ws_pc),64);
            tracep->chgIData(oldp+90,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1257)),32);
            tracep->chgCData(oldp+91,(vlSelf->top__DOT__i_cache__DOT___GEN_1258),8);
            tracep->chgBit(oldp+92,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
            tracep->chgBit(oldp+93,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
            tracep->chgBit(oldp+96,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
            tracep->chgBit(oldp+97,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
            tracep->chgIData(oldp+98,((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2409)),32);
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
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_wready));
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__axi_io_axi_out_rlast));
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__axi__DOT__axi_wready));
            tracep->chgBit(oldp+121,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
            tracep->chgIData(oldp+122,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgCData(oldp+123,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgIData(oldp+134,((2U == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
            tracep->chgIData(oldp+135,((0x3dU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))),32);
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
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__Register__DOT__Reg[0]),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__Register__DOT__Reg[1]),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__Register__DOT__Reg[2]),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__Register__DOT__Reg[3]),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__Register__DOT__Reg[4]),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__Register__DOT__Reg[5]),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__Register__DOT__Reg[6]),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__Register__DOT__Reg[7]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__Register__DOT__Reg[8]),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__Register__DOT__Reg[9]),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__Register__DOT__Reg[10]),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__Register__DOT__Reg[11]),64);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__Register__DOT__Reg[12]),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__Register__DOT__Reg[13]),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__Register__DOT__Reg[14]),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__Register__DOT__Reg[15]),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__Register__DOT__Reg[16]),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__Register__DOT__Reg[17]),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__Register__DOT__Reg[18]),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__Register__DOT__Reg[19]),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__Register__DOT__Reg[20]),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__Register__DOT__Reg[21]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__Register__DOT__Reg[22]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__Register__DOT__Reg[23]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__Register__DOT__Reg[24]),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__Register__DOT__Reg[25]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__Register__DOT__Reg[26]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__Register__DOT__Reg[27]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__Register__DOT__Reg[28]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__Register__DOT__Reg[29]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__Register__DOT__Reg[30]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__Register__DOT__Reg[31]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__Register__DOT__Reg
                                       [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0xfU))]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__Register__DOT__Reg
                                       [vlSelf->top__DOT__IDU_io_raddr2]),64);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0U]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__Register__DOT__Reg
                                       [1U]),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__Register__DOT__Reg
                                       [2U]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__Register__DOT__Reg
                                       [3U]),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__Register__DOT__Reg
                                       [4U]),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__Register__DOT__Reg
                                       [5U]),64);
            tracep->chgQData(oldp+219,(vlSelf->top__DOT__Register__DOT__Reg
                                       [6U]),64);
            tracep->chgQData(oldp+221,(vlSelf->top__DOT__Register__DOT__Reg
                                       [7U]),64);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__Register__DOT__Reg
                                       [8U]),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__Register__DOT__Reg
                                       [9U]),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xaU]),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xbU]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xcU]),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xdU]),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xeU]),64);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0xfU]),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x10U]),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x11U]),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x12U]),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x13U]),64);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x14U]),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x15U]),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x16U]),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x17U]),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x18U]),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x19U]),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1aU]),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1bU]),64);
            tracep->chgQData(oldp+263,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1cU]),64);
            tracep->chgQData(oldp+265,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1dU]),64);
            tracep->chgQData(oldp+267,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1eU]),64);
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__Register__DOT__Reg
                                       [0x1fU]),64);
            tracep->chgBit(oldp+271,((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                                       & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
                                      & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))));
            tracep->chgQData(oldp+272,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
            tracep->chgQData(oldp+274,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
            tracep->chgQData(oldp+276,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
            tracep->chgQData(oldp+278,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
            tracep->chgQData(oldp+280,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
            tracep->chgQData(oldp+282,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
            tracep->chgQData(oldp+284,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
            tracep->chgQData(oldp+286,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
            tracep->chgQData(oldp+288,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
            tracep->chgQData(oldp+290,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
            tracep->chgQData(oldp+292,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
            tracep->chgQData(oldp+294,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
            tracep->chgQData(oldp+296,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
            tracep->chgQData(oldp+298,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
            tracep->chgQData(oldp+300,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
            tracep->chgQData(oldp+302,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
            tracep->chgQData(oldp+304,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
            tracep->chgQData(oldp+306,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
            tracep->chgQData(oldp+308,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
            tracep->chgQData(oldp+310,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
            tracep->chgQData(oldp+312,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
            tracep->chgQData(oldp+314,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
            tracep->chgQData(oldp+316,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
            tracep->chgQData(oldp+318,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
            tracep->chgQData(oldp+320,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
            tracep->chgQData(oldp+326,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
            tracep->chgQData(oldp+328,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
            tracep->chgQData(oldp+330,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
            tracep->chgQData(oldp+332,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
            tracep->chgQData(oldp+334,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
            tracep->chgBit(oldp+336,(vlSelf->top__DOT__IFU__DOT__fs_valid));
            tracep->chgBit(oldp+337,(vlSelf->top__DOT__IFU__DOT__fs_ready_go));
            tracep->chgBit(oldp+338,(vlSelf->top__DOT__IFU__DOT__cache_init));
            tracep->chgBit(oldp+339,(vlSelf->top__DOT__IFU__DOT__fs_to_ds_valid));
            tracep->chgQData(oldp+340,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
            tracep->chgBit(oldp+342,(vlSelf->top__DOT__IFU__DOT__fs_allowin));
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
            tracep->chgBit(oldp+359,(vlSelf->top__DOT__IDU__DOT__src2_is_imm));
            tracep->chgCData(oldp+360,(vlSelf->top__DOT__IDU__DOT__rs2),5);
            tracep->chgBit(oldp+361,(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2));
            tracep->chgBit(oldp+362,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1));
            tracep->chgBit(oldp+363,(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2));
            tracep->chgBit(oldp+364,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1));
            tracep->chgBit(oldp+365,(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2));
            tracep->chgBit(oldp+366,(vlSelf->top__DOT__IDU__DOT__ds_ready_go));
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
                                      & ((1U != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                         & (2U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))))));
            tracep->chgIData(oldp+405,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                         ? 0U : ((1U 
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
                                                   : 0U)))),32);
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
            VL_EXTEND_WQ(127,64, __Vtemp2493, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
            VL_SHIFTL_WWI(127,127,6, __Vtemp2494, __Vtemp2493, 
                          (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
            __Vtemp2495[0U] = __Vtemp2494[0U];
            __Vtemp2495[1U] = __Vtemp2494[1U];
            __Vtemp2495[2U] = __Vtemp2494[2U];
            __Vtemp2495[3U] = (0x7fffffffU & __Vtemp2494[3U]);
            tracep->chgWData(oldp+425,(__Vtemp2495),127);
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
            VL_EXTEND_WQ(65,64, __Vtemp2498, (~ (((QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
            VL_EXTEND_WQ(65,64, __Vtemp2499, (~ (((QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
            VL_EXTEND_WQ(65,64, __Vtemp2503, ((2U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
            __Vtemp2507[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                ? (~ (((IData)((((QData)((IData)(
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
                                       << 1U))) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                    ? 
                                                   (((IData)(
                                                             (((QData)((IData)(
                                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))) 
                                                     >> 0x1fU) 
                                                    | ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U]))) 
                                                                >> 0x20U)) 
                                                       << 1U))
                                                    : 
                                                   __Vtemp2503[1U]));
            __Vtemp2514[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                ? 0U : (1U & ((6U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                               ? __Vtemp2498[2U]
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                   ? 
                                                  __Vtemp2499[2U]
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
                                                    __Vtemp2503[2U]))))));
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
                                                           __Vtemp2498[1U]
                                                            : 
                                                           ((5U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                             ? 
                                                            __Vtemp2499[1U]
                                                             : 
                                                            __Vtemp2507[1U]))))) 
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
                                                            __Vtemp2498[0U]
                                                             : 
                                                            ((5U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                              ? 
                                                             __Vtemp2499[0U]
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
                                                               __Vtemp2503[0U]))))))))),64);
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
            __Vtemp2515[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
            __Vtemp2515[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                       >> 0x20U));
            __Vtemp2515[2U] = (IData)(((1U & (IData)(
                                                     (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                      >> 0x3fU)))
                                        ? 0xffffffffffffffffULL
                                        : 0ULL));
            __Vtemp2515[3U] = (IData)((((1U & (IData)(
                                                      (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                       >> 0x3fU)))
                                         ? 0xffffffffffffffffULL
                                         : 0ULL) >> 0x20U));
            tracep->chgWData(oldp+468,(__Vtemp2515),128);
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
            VL_EXTEND_WQ(65,64, __Vtemp2516, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                               ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                                   ? 
                                                  (1ULL 
                                                   + 
                                                   (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                                   : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                               : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                                   ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                                   : vlSelf->top__DOT__EXU__DOT__src2_value)));
            tracep->chgWData(oldp+489,(__Vtemp2516),65);
            tracep->chgWData(oldp+492,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand),128);
            tracep->chgBit(oldp+496,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start));
            tracep->chgQData(oldp+497,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient),64);
            tracep->chgIData(oldp+499,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num),32);
            VL_EXTEND_WQ(128,64, __Vtemp2517, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                                ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                                    : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                                : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                                    ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                                    : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
            tracep->chgWData(oldp+500,(__Vtemp2517),128);
            tracep->chgWData(oldp+504,(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res),65);
            __Vtemp2518[0U] = 0U;
            __Vtemp2518[1U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                               << 0x1fU);
            __Vtemp2518[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                          << 0x1fU));
            __Vtemp2518[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                          << 0x1fU));
            tracep->chgWData(oldp+507,(__Vtemp2518),128);
            if ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])) {
                __Vtemp2524[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
                __Vtemp2524[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U];
                __Vtemp2524[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U];
                __Vtemp2524[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U];
            } else {
                __Vtemp2524[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
                __Vtemp2524[1U] = ((0x7fffffffU & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                                   | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                      << 0x1fU));
                __Vtemp2524[2U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                    >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                              << 0x1fU));
                __Vtemp2524[3U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                    >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                              << 0x1fU));
            }
            tracep->chgWData(oldp+511,(__Vtemp2524),128);
            tracep->chgBit(oldp+515,(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
            tracep->chgQData(oldp+516,(vlSelf->top__DOT__LSU__DOT__ms_res),64);
            tracep->chgBit(oldp+518,(vlSelf->top__DOT__LSU__DOT__ren));
            tracep->chgQData(oldp+519,(vlSelf->top__DOT__LSU__DOT__maddr),64);
            tracep->chgCData(oldp+521,(vlSelf->top__DOT__LSU__DOT__load_type),3);
            tracep->chgQData(oldp+522,(vlSelf->top__DOT__LSU__DOT__mem_rdata),64);
            tracep->chgQData(oldp+524,(vlSelf->top__DOT__LSU__DOT__rdata),64);
            tracep->chgCData(oldp+526,(vlSelf->top__DOT__arbiter__DOT__state),2);
            tracep->chgWData(oldp+527,(vlSelf->top__DOT__i_cache__DOT__ram_0_0),512);
            tracep->chgWData(oldp+543,(vlSelf->top__DOT__i_cache__DOT__ram_0_1),512);
            tracep->chgWData(oldp+559,(vlSelf->top__DOT__i_cache__DOT__ram_0_2),512);
            tracep->chgWData(oldp+575,(vlSelf->top__DOT__i_cache__DOT__ram_0_3),512);
            tracep->chgWData(oldp+591,(vlSelf->top__DOT__i_cache__DOT__ram_0_4),512);
            tracep->chgWData(oldp+607,(vlSelf->top__DOT__i_cache__DOT__ram_0_5),512);
            tracep->chgWData(oldp+623,(vlSelf->top__DOT__i_cache__DOT__ram_0_6),512);
            tracep->chgWData(oldp+639,(vlSelf->top__DOT__i_cache__DOT__ram_0_7),512);
            tracep->chgWData(oldp+655,(vlSelf->top__DOT__i_cache__DOT__ram_0_8),512);
            tracep->chgWData(oldp+671,(vlSelf->top__DOT__i_cache__DOT__ram_0_9),512);
            tracep->chgWData(oldp+687,(vlSelf->top__DOT__i_cache__DOT__ram_0_10),512);
            tracep->chgWData(oldp+703,(vlSelf->top__DOT__i_cache__DOT__ram_0_11),512);
            tracep->chgWData(oldp+719,(vlSelf->top__DOT__i_cache__DOT__ram_0_12),512);
            tracep->chgWData(oldp+735,(vlSelf->top__DOT__i_cache__DOT__ram_0_13),512);
            tracep->chgWData(oldp+751,(vlSelf->top__DOT__i_cache__DOT__ram_0_14),512);
            tracep->chgWData(oldp+767,(vlSelf->top__DOT__i_cache__DOT__ram_0_15),512);
            tracep->chgWData(oldp+783,(vlSelf->top__DOT__i_cache__DOT__ram_1_0),512);
            tracep->chgWData(oldp+799,(vlSelf->top__DOT__i_cache__DOT__ram_1_1),512);
            tracep->chgWData(oldp+815,(vlSelf->top__DOT__i_cache__DOT__ram_1_2),512);
            tracep->chgWData(oldp+831,(vlSelf->top__DOT__i_cache__DOT__ram_1_3),512);
            tracep->chgWData(oldp+847,(vlSelf->top__DOT__i_cache__DOT__ram_1_4),512);
            tracep->chgWData(oldp+863,(vlSelf->top__DOT__i_cache__DOT__ram_1_5),512);
            tracep->chgWData(oldp+879,(vlSelf->top__DOT__i_cache__DOT__ram_1_6),512);
            tracep->chgWData(oldp+895,(vlSelf->top__DOT__i_cache__DOT__ram_1_7),512);
            tracep->chgWData(oldp+911,(vlSelf->top__DOT__i_cache__DOT__ram_1_8),512);
            tracep->chgWData(oldp+927,(vlSelf->top__DOT__i_cache__DOT__ram_1_9),512);
            tracep->chgWData(oldp+943,(vlSelf->top__DOT__i_cache__DOT__ram_1_10),512);
            tracep->chgWData(oldp+959,(vlSelf->top__DOT__i_cache__DOT__ram_1_11),512);
            tracep->chgWData(oldp+975,(vlSelf->top__DOT__i_cache__DOT__ram_1_12),512);
            tracep->chgWData(oldp+991,(vlSelf->top__DOT__i_cache__DOT__ram_1_13),512);
            tracep->chgWData(oldp+1007,(vlSelf->top__DOT__i_cache__DOT__ram_1_14),512);
            tracep->chgWData(oldp+1023,(vlSelf->top__DOT__i_cache__DOT__ram_1_15),512);
            tracep->chgIData(oldp+1039,(vlSelf->top__DOT__i_cache__DOT__tag_0_0),32);
            tracep->chgIData(oldp+1040,(vlSelf->top__DOT__i_cache__DOT__tag_0_1),32);
            tracep->chgIData(oldp+1041,(vlSelf->top__DOT__i_cache__DOT__tag_0_2),32);
            tracep->chgIData(oldp+1042,(vlSelf->top__DOT__i_cache__DOT__tag_0_3),32);
            tracep->chgIData(oldp+1043,(vlSelf->top__DOT__i_cache__DOT__tag_0_4),32);
            tracep->chgIData(oldp+1044,(vlSelf->top__DOT__i_cache__DOT__tag_0_5),32);
            tracep->chgIData(oldp+1045,(vlSelf->top__DOT__i_cache__DOT__tag_0_6),32);
            tracep->chgIData(oldp+1046,(vlSelf->top__DOT__i_cache__DOT__tag_0_7),32);
            tracep->chgIData(oldp+1047,(vlSelf->top__DOT__i_cache__DOT__tag_0_8),32);
            tracep->chgIData(oldp+1048,(vlSelf->top__DOT__i_cache__DOT__tag_0_9),32);
            tracep->chgIData(oldp+1049,(vlSelf->top__DOT__i_cache__DOT__tag_0_10),32);
            tracep->chgIData(oldp+1050,(vlSelf->top__DOT__i_cache__DOT__tag_0_11),32);
            tracep->chgIData(oldp+1051,(vlSelf->top__DOT__i_cache__DOT__tag_0_12),32);
            tracep->chgIData(oldp+1052,(vlSelf->top__DOT__i_cache__DOT__tag_0_13),32);
            tracep->chgIData(oldp+1053,(vlSelf->top__DOT__i_cache__DOT__tag_0_14),32);
            tracep->chgIData(oldp+1054,(vlSelf->top__DOT__i_cache__DOT__tag_0_15),32);
            tracep->chgIData(oldp+1055,(vlSelf->top__DOT__i_cache__DOT__tag_1_0),32);
            tracep->chgIData(oldp+1056,(vlSelf->top__DOT__i_cache__DOT__tag_1_1),32);
            tracep->chgIData(oldp+1057,(vlSelf->top__DOT__i_cache__DOT__tag_1_2),32);
            tracep->chgIData(oldp+1058,(vlSelf->top__DOT__i_cache__DOT__tag_1_3),32);
            tracep->chgIData(oldp+1059,(vlSelf->top__DOT__i_cache__DOT__tag_1_4),32);
            tracep->chgIData(oldp+1060,(vlSelf->top__DOT__i_cache__DOT__tag_1_5),32);
            tracep->chgIData(oldp+1061,(vlSelf->top__DOT__i_cache__DOT__tag_1_6),32);
            tracep->chgIData(oldp+1062,(vlSelf->top__DOT__i_cache__DOT__tag_1_7),32);
            tracep->chgIData(oldp+1063,(vlSelf->top__DOT__i_cache__DOT__tag_1_8),32);
            tracep->chgIData(oldp+1064,(vlSelf->top__DOT__i_cache__DOT__tag_1_9),32);
            tracep->chgIData(oldp+1065,(vlSelf->top__DOT__i_cache__DOT__tag_1_10),32);
            tracep->chgIData(oldp+1066,(vlSelf->top__DOT__i_cache__DOT__tag_1_11),32);
            tracep->chgIData(oldp+1067,(vlSelf->top__DOT__i_cache__DOT__tag_1_12),32);
            tracep->chgIData(oldp+1068,(vlSelf->top__DOT__i_cache__DOT__tag_1_13),32);
            tracep->chgIData(oldp+1069,(vlSelf->top__DOT__i_cache__DOT__tag_1_14),32);
            tracep->chgIData(oldp+1070,(vlSelf->top__DOT__i_cache__DOT__tag_1_15),32);
            tracep->chgBit(oldp+1071,(vlSelf->top__DOT__i_cache__DOT__valid_0_0));
            tracep->chgBit(oldp+1072,(vlSelf->top__DOT__i_cache__DOT__valid_0_1));
            tracep->chgBit(oldp+1073,(vlSelf->top__DOT__i_cache__DOT__valid_0_2));
            tracep->chgBit(oldp+1074,(vlSelf->top__DOT__i_cache__DOT__valid_0_3));
            tracep->chgBit(oldp+1075,(vlSelf->top__DOT__i_cache__DOT__valid_0_4));
            tracep->chgBit(oldp+1076,(vlSelf->top__DOT__i_cache__DOT__valid_0_5));
            tracep->chgBit(oldp+1077,(vlSelf->top__DOT__i_cache__DOT__valid_0_6));
            tracep->chgBit(oldp+1078,(vlSelf->top__DOT__i_cache__DOT__valid_0_7));
            tracep->chgBit(oldp+1079,(vlSelf->top__DOT__i_cache__DOT__valid_0_8));
            tracep->chgBit(oldp+1080,(vlSelf->top__DOT__i_cache__DOT__valid_0_9));
            tracep->chgBit(oldp+1081,(vlSelf->top__DOT__i_cache__DOT__valid_0_10));
            tracep->chgBit(oldp+1082,(vlSelf->top__DOT__i_cache__DOT__valid_0_11));
            tracep->chgBit(oldp+1083,(vlSelf->top__DOT__i_cache__DOT__valid_0_12));
            tracep->chgBit(oldp+1084,(vlSelf->top__DOT__i_cache__DOT__valid_0_13));
            tracep->chgBit(oldp+1085,(vlSelf->top__DOT__i_cache__DOT__valid_0_14));
            tracep->chgBit(oldp+1086,(vlSelf->top__DOT__i_cache__DOT__valid_0_15));
            tracep->chgBit(oldp+1087,(vlSelf->top__DOT__i_cache__DOT__valid_1_0));
            tracep->chgBit(oldp+1088,(vlSelf->top__DOT__i_cache__DOT__valid_1_1));
            tracep->chgBit(oldp+1089,(vlSelf->top__DOT__i_cache__DOT__valid_1_2));
            tracep->chgBit(oldp+1090,(vlSelf->top__DOT__i_cache__DOT__valid_1_3));
            tracep->chgBit(oldp+1091,(vlSelf->top__DOT__i_cache__DOT__valid_1_4));
            tracep->chgBit(oldp+1092,(vlSelf->top__DOT__i_cache__DOT__valid_1_5));
            tracep->chgBit(oldp+1093,(vlSelf->top__DOT__i_cache__DOT__valid_1_6));
            tracep->chgBit(oldp+1094,(vlSelf->top__DOT__i_cache__DOT__valid_1_7));
            tracep->chgBit(oldp+1095,(vlSelf->top__DOT__i_cache__DOT__valid_1_8));
            tracep->chgBit(oldp+1096,(vlSelf->top__DOT__i_cache__DOT__valid_1_9));
            tracep->chgBit(oldp+1097,(vlSelf->top__DOT__i_cache__DOT__valid_1_10));
            tracep->chgBit(oldp+1098,(vlSelf->top__DOT__i_cache__DOT__valid_1_11));
            tracep->chgBit(oldp+1099,(vlSelf->top__DOT__i_cache__DOT__valid_1_12));
            tracep->chgBit(oldp+1100,(vlSelf->top__DOT__i_cache__DOT__valid_1_13));
            tracep->chgBit(oldp+1101,(vlSelf->top__DOT__i_cache__DOT__valid_1_14));
            tracep->chgBit(oldp+1102,(vlSelf->top__DOT__i_cache__DOT__valid_1_15));
            tracep->chgQData(oldp+1103,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+1105,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
            tracep->chgQData(oldp+1107,(vlSelf->top__DOT__i_cache__DOT__receive_data_2),64);
            tracep->chgQData(oldp+1109,(vlSelf->top__DOT__i_cache__DOT__receive_data_3),64);
            tracep->chgQData(oldp+1111,(vlSelf->top__DOT__i_cache__DOT__receive_data_4),64);
            tracep->chgQData(oldp+1113,(vlSelf->top__DOT__i_cache__DOT__receive_data_5),64);
            tracep->chgQData(oldp+1115,(vlSelf->top__DOT__i_cache__DOT__receive_data_6),64);
            tracep->chgQData(oldp+1117,(vlSelf->top__DOT__i_cache__DOT__receive_data_7),64);
            tracep->chgCData(oldp+1119,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
            tracep->chgCData(oldp+1120,(vlSelf->top__DOT__i_cache__DOT__quene_0),2);
            tracep->chgCData(oldp+1121,(vlSelf->top__DOT__i_cache__DOT__quene_1),2);
            tracep->chgCData(oldp+1122,(vlSelf->top__DOT__i_cache__DOT__quene_2),2);
            tracep->chgCData(oldp+1123,(vlSelf->top__DOT__i_cache__DOT__quene_3),2);
            tracep->chgCData(oldp+1124,(vlSelf->top__DOT__i_cache__DOT__quene_4),2);
            tracep->chgCData(oldp+1125,(vlSelf->top__DOT__i_cache__DOT__quene_5),2);
            tracep->chgCData(oldp+1126,(vlSelf->top__DOT__i_cache__DOT__quene_6),2);
            tracep->chgCData(oldp+1127,(vlSelf->top__DOT__i_cache__DOT__quene_7),2);
            tracep->chgCData(oldp+1128,(vlSelf->top__DOT__i_cache__DOT__quene_8),2);
            tracep->chgCData(oldp+1129,(vlSelf->top__DOT__i_cache__DOT__quene_9),2);
            tracep->chgCData(oldp+1130,(vlSelf->top__DOT__i_cache__DOT__quene_10),2);
            tracep->chgCData(oldp+1131,(vlSelf->top__DOT__i_cache__DOT__quene_11),2);
            tracep->chgCData(oldp+1132,(vlSelf->top__DOT__i_cache__DOT__quene_12),2);
            tracep->chgCData(oldp+1133,(vlSelf->top__DOT__i_cache__DOT__quene_13),2);
            tracep->chgCData(oldp+1134,(vlSelf->top__DOT__i_cache__DOT__quene_14),2);
            tracep->chgCData(oldp+1135,(vlSelf->top__DOT__i_cache__DOT__quene_15),2);
            tracep->chgCData(oldp+1136,((0x3fU & (IData)(vlSelf->top__DOT__IFU__DOT__fs_pc))),6);
            tracep->chgCData(oldp+1137,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U)))),4);
            tracep->chgIData(oldp+1138,((0x3fffffU 
                                         & (IData)(
                                                   (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                    >> 0xaU)))),22);
            tracep->chgSData(oldp+1139,((0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                                   << 3U))),9);
            tracep->chgBit(oldp+1140,(vlSelf->top__DOT__i_cache__DOT__way0_hit));
            tracep->chgBit(oldp+1141,(vlSelf->top__DOT__i_cache__DOT__way1_hit));
            tracep->chgCData(oldp+1142,(vlSelf->top__DOT__i_cache__DOT__unuse_way),2);
            tracep->chgCData(oldp+1143,(vlSelf->top__DOT__i_cache__DOT__state),3);
            tracep->chgWData(oldp+1144,(vlSelf->top__DOT__d_cache__DOT__ram_0_0),512);
            tracep->chgWData(oldp+1160,(vlSelf->top__DOT__d_cache__DOT__ram_0_1),512);
            tracep->chgWData(oldp+1176,(vlSelf->top__DOT__d_cache__DOT__ram_0_2),512);
            tracep->chgWData(oldp+1192,(vlSelf->top__DOT__d_cache__DOT__ram_0_3),512);
            tracep->chgWData(oldp+1208,(vlSelf->top__DOT__d_cache__DOT__ram_0_4),512);
            tracep->chgWData(oldp+1224,(vlSelf->top__DOT__d_cache__DOT__ram_0_5),512);
            tracep->chgWData(oldp+1240,(vlSelf->top__DOT__d_cache__DOT__ram_0_6),512);
            tracep->chgWData(oldp+1256,(vlSelf->top__DOT__d_cache__DOT__ram_0_7),512);
            tracep->chgWData(oldp+1272,(vlSelf->top__DOT__d_cache__DOT__ram_0_8),512);
            tracep->chgWData(oldp+1288,(vlSelf->top__DOT__d_cache__DOT__ram_0_9),512);
            tracep->chgWData(oldp+1304,(vlSelf->top__DOT__d_cache__DOT__ram_0_10),512);
            tracep->chgWData(oldp+1320,(vlSelf->top__DOT__d_cache__DOT__ram_0_11),512);
            tracep->chgWData(oldp+1336,(vlSelf->top__DOT__d_cache__DOT__ram_0_12),512);
            tracep->chgWData(oldp+1352,(vlSelf->top__DOT__d_cache__DOT__ram_0_13),512);
            tracep->chgWData(oldp+1368,(vlSelf->top__DOT__d_cache__DOT__ram_0_14),512);
            tracep->chgWData(oldp+1384,(vlSelf->top__DOT__d_cache__DOT__ram_0_15),512);
            tracep->chgWData(oldp+1400,(vlSelf->top__DOT__d_cache__DOT__ram_1_0),512);
            tracep->chgWData(oldp+1416,(vlSelf->top__DOT__d_cache__DOT__ram_1_1),512);
            tracep->chgWData(oldp+1432,(vlSelf->top__DOT__d_cache__DOT__ram_1_2),512);
            tracep->chgWData(oldp+1448,(vlSelf->top__DOT__d_cache__DOT__ram_1_3),512);
            tracep->chgWData(oldp+1464,(vlSelf->top__DOT__d_cache__DOT__ram_1_4),512);
            tracep->chgWData(oldp+1480,(vlSelf->top__DOT__d_cache__DOT__ram_1_5),512);
            tracep->chgWData(oldp+1496,(vlSelf->top__DOT__d_cache__DOT__ram_1_6),512);
            tracep->chgWData(oldp+1512,(vlSelf->top__DOT__d_cache__DOT__ram_1_7),512);
            tracep->chgWData(oldp+1528,(vlSelf->top__DOT__d_cache__DOT__ram_1_8),512);
            tracep->chgWData(oldp+1544,(vlSelf->top__DOT__d_cache__DOT__ram_1_9),512);
            tracep->chgWData(oldp+1560,(vlSelf->top__DOT__d_cache__DOT__ram_1_10),512);
            tracep->chgWData(oldp+1576,(vlSelf->top__DOT__d_cache__DOT__ram_1_11),512);
            tracep->chgWData(oldp+1592,(vlSelf->top__DOT__d_cache__DOT__ram_1_12),512);
            tracep->chgWData(oldp+1608,(vlSelf->top__DOT__d_cache__DOT__ram_1_13),512);
            tracep->chgWData(oldp+1624,(vlSelf->top__DOT__d_cache__DOT__ram_1_14),512);
            tracep->chgWData(oldp+1640,(vlSelf->top__DOT__d_cache__DOT__ram_1_15),512);
            tracep->chgIData(oldp+1656,(vlSelf->top__DOT__d_cache__DOT__tag_0_0),32);
            tracep->chgIData(oldp+1657,(vlSelf->top__DOT__d_cache__DOT__tag_0_1),32);
            tracep->chgIData(oldp+1658,(vlSelf->top__DOT__d_cache__DOT__tag_0_2),32);
            tracep->chgIData(oldp+1659,(vlSelf->top__DOT__d_cache__DOT__tag_0_3),32);
            tracep->chgIData(oldp+1660,(vlSelf->top__DOT__d_cache__DOT__tag_0_4),32);
            tracep->chgIData(oldp+1661,(vlSelf->top__DOT__d_cache__DOT__tag_0_5),32);
            tracep->chgIData(oldp+1662,(vlSelf->top__DOT__d_cache__DOT__tag_0_6),32);
            tracep->chgIData(oldp+1663,(vlSelf->top__DOT__d_cache__DOT__tag_0_7),32);
            tracep->chgIData(oldp+1664,(vlSelf->top__DOT__d_cache__DOT__tag_0_8),32);
            tracep->chgIData(oldp+1665,(vlSelf->top__DOT__d_cache__DOT__tag_0_9),32);
            tracep->chgIData(oldp+1666,(vlSelf->top__DOT__d_cache__DOT__tag_0_10),32);
            tracep->chgIData(oldp+1667,(vlSelf->top__DOT__d_cache__DOT__tag_0_11),32);
            tracep->chgIData(oldp+1668,(vlSelf->top__DOT__d_cache__DOT__tag_0_12),32);
            tracep->chgIData(oldp+1669,(vlSelf->top__DOT__d_cache__DOT__tag_0_13),32);
            tracep->chgIData(oldp+1670,(vlSelf->top__DOT__d_cache__DOT__tag_0_14),32);
            tracep->chgIData(oldp+1671,(vlSelf->top__DOT__d_cache__DOT__tag_0_15),32);
            tracep->chgIData(oldp+1672,(vlSelf->top__DOT__d_cache__DOT__tag_1_0),32);
            tracep->chgIData(oldp+1673,(vlSelf->top__DOT__d_cache__DOT__tag_1_1),32);
            tracep->chgIData(oldp+1674,(vlSelf->top__DOT__d_cache__DOT__tag_1_2),32);
            tracep->chgIData(oldp+1675,(vlSelf->top__DOT__d_cache__DOT__tag_1_3),32);
            tracep->chgIData(oldp+1676,(vlSelf->top__DOT__d_cache__DOT__tag_1_4),32);
            tracep->chgIData(oldp+1677,(vlSelf->top__DOT__d_cache__DOT__tag_1_5),32);
            tracep->chgIData(oldp+1678,(vlSelf->top__DOT__d_cache__DOT__tag_1_6),32);
            tracep->chgIData(oldp+1679,(vlSelf->top__DOT__d_cache__DOT__tag_1_7),32);
            tracep->chgIData(oldp+1680,(vlSelf->top__DOT__d_cache__DOT__tag_1_8),32);
            tracep->chgIData(oldp+1681,(vlSelf->top__DOT__d_cache__DOT__tag_1_9),32);
            tracep->chgIData(oldp+1682,(vlSelf->top__DOT__d_cache__DOT__tag_1_10),32);
            tracep->chgIData(oldp+1683,(vlSelf->top__DOT__d_cache__DOT__tag_1_11),32);
            tracep->chgIData(oldp+1684,(vlSelf->top__DOT__d_cache__DOT__tag_1_12),32);
            tracep->chgIData(oldp+1685,(vlSelf->top__DOT__d_cache__DOT__tag_1_13),32);
            tracep->chgIData(oldp+1686,(vlSelf->top__DOT__d_cache__DOT__tag_1_14),32);
            tracep->chgIData(oldp+1687,(vlSelf->top__DOT__d_cache__DOT__tag_1_15),32);
            tracep->chgBit(oldp+1688,(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
            tracep->chgBit(oldp+1689,(vlSelf->top__DOT__d_cache__DOT__valid_0_1));
            tracep->chgBit(oldp+1690,(vlSelf->top__DOT__d_cache__DOT__valid_0_2));
            tracep->chgBit(oldp+1691,(vlSelf->top__DOT__d_cache__DOT__valid_0_3));
            tracep->chgBit(oldp+1692,(vlSelf->top__DOT__d_cache__DOT__valid_0_4));
            tracep->chgBit(oldp+1693,(vlSelf->top__DOT__d_cache__DOT__valid_0_5));
            tracep->chgBit(oldp+1694,(vlSelf->top__DOT__d_cache__DOT__valid_0_6));
            tracep->chgBit(oldp+1695,(vlSelf->top__DOT__d_cache__DOT__valid_0_7));
            tracep->chgBit(oldp+1696,(vlSelf->top__DOT__d_cache__DOT__valid_0_8));
            tracep->chgBit(oldp+1697,(vlSelf->top__DOT__d_cache__DOT__valid_0_9));
            tracep->chgBit(oldp+1698,(vlSelf->top__DOT__d_cache__DOT__valid_0_10));
            tracep->chgBit(oldp+1699,(vlSelf->top__DOT__d_cache__DOT__valid_0_11));
            tracep->chgBit(oldp+1700,(vlSelf->top__DOT__d_cache__DOT__valid_0_12));
            tracep->chgBit(oldp+1701,(vlSelf->top__DOT__d_cache__DOT__valid_0_13));
            tracep->chgBit(oldp+1702,(vlSelf->top__DOT__d_cache__DOT__valid_0_14));
            tracep->chgBit(oldp+1703,(vlSelf->top__DOT__d_cache__DOT__valid_0_15));
            tracep->chgBit(oldp+1704,(vlSelf->top__DOT__d_cache__DOT__valid_1_0));
            tracep->chgBit(oldp+1705,(vlSelf->top__DOT__d_cache__DOT__valid_1_1));
            tracep->chgBit(oldp+1706,(vlSelf->top__DOT__d_cache__DOT__valid_1_2));
            tracep->chgBit(oldp+1707,(vlSelf->top__DOT__d_cache__DOT__valid_1_3));
            tracep->chgBit(oldp+1708,(vlSelf->top__DOT__d_cache__DOT__valid_1_4));
            tracep->chgBit(oldp+1709,(vlSelf->top__DOT__d_cache__DOT__valid_1_5));
            tracep->chgBit(oldp+1710,(vlSelf->top__DOT__d_cache__DOT__valid_1_6));
            tracep->chgBit(oldp+1711,(vlSelf->top__DOT__d_cache__DOT__valid_1_7));
            tracep->chgBit(oldp+1712,(vlSelf->top__DOT__d_cache__DOT__valid_1_8));
            tracep->chgBit(oldp+1713,(vlSelf->top__DOT__d_cache__DOT__valid_1_9));
            tracep->chgBit(oldp+1714,(vlSelf->top__DOT__d_cache__DOT__valid_1_10));
            tracep->chgBit(oldp+1715,(vlSelf->top__DOT__d_cache__DOT__valid_1_11));
            tracep->chgBit(oldp+1716,(vlSelf->top__DOT__d_cache__DOT__valid_1_12));
            tracep->chgBit(oldp+1717,(vlSelf->top__DOT__d_cache__DOT__valid_1_13));
            tracep->chgBit(oldp+1718,(vlSelf->top__DOT__d_cache__DOT__valid_1_14));
            tracep->chgBit(oldp+1719,(vlSelf->top__DOT__d_cache__DOT__valid_1_15));
            tracep->chgBit(oldp+1720,(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
            tracep->chgBit(oldp+1721,(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
            tracep->chgBit(oldp+1722,(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
            tracep->chgBit(oldp+1723,(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
            tracep->chgBit(oldp+1724,(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
            tracep->chgBit(oldp+1725,(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
            tracep->chgBit(oldp+1726,(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
            tracep->chgBit(oldp+1727,(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
            tracep->chgBit(oldp+1728,(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
            tracep->chgBit(oldp+1729,(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
            tracep->chgBit(oldp+1730,(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
            tracep->chgBit(oldp+1731,(vlSelf->top__DOT__d_cache__DOT__dirty_0_11));
            tracep->chgBit(oldp+1732,(vlSelf->top__DOT__d_cache__DOT__dirty_0_12));
            tracep->chgBit(oldp+1733,(vlSelf->top__DOT__d_cache__DOT__dirty_0_13));
            tracep->chgBit(oldp+1734,(vlSelf->top__DOT__d_cache__DOT__dirty_0_14));
            tracep->chgBit(oldp+1735,(vlSelf->top__DOT__d_cache__DOT__dirty_0_15));
            tracep->chgBit(oldp+1736,(vlSelf->top__DOT__d_cache__DOT__dirty_1_0));
            tracep->chgBit(oldp+1737,(vlSelf->top__DOT__d_cache__DOT__dirty_1_1));
            tracep->chgBit(oldp+1738,(vlSelf->top__DOT__d_cache__DOT__dirty_1_2));
            tracep->chgBit(oldp+1739,(vlSelf->top__DOT__d_cache__DOT__dirty_1_3));
            tracep->chgBit(oldp+1740,(vlSelf->top__DOT__d_cache__DOT__dirty_1_4));
            tracep->chgBit(oldp+1741,(vlSelf->top__DOT__d_cache__DOT__dirty_1_5));
            tracep->chgBit(oldp+1742,(vlSelf->top__DOT__d_cache__DOT__dirty_1_6));
            tracep->chgBit(oldp+1743,(vlSelf->top__DOT__d_cache__DOT__dirty_1_7));
            tracep->chgBit(oldp+1744,(vlSelf->top__DOT__d_cache__DOT__dirty_1_8));
            tracep->chgBit(oldp+1745,(vlSelf->top__DOT__d_cache__DOT__dirty_1_9));
            tracep->chgBit(oldp+1746,(vlSelf->top__DOT__d_cache__DOT__dirty_1_10));
            tracep->chgBit(oldp+1747,(vlSelf->top__DOT__d_cache__DOT__dirty_1_11));
            tracep->chgBit(oldp+1748,(vlSelf->top__DOT__d_cache__DOT__dirty_1_12));
            tracep->chgBit(oldp+1749,(vlSelf->top__DOT__d_cache__DOT__dirty_1_13));
            tracep->chgBit(oldp+1750,(vlSelf->top__DOT__d_cache__DOT__dirty_1_14));
            tracep->chgBit(oldp+1751,(vlSelf->top__DOT__d_cache__DOT__dirty_1_15));
            tracep->chgWData(oldp+1752,(vlSelf->top__DOT__d_cache__DOT__write_back_data),512);
            tracep->chgIData(oldp+1768,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
            tracep->chgQData(oldp+1769,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+1771,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
            tracep->chgQData(oldp+1773,(vlSelf->top__DOT__d_cache__DOT__receive_data_2),64);
            tracep->chgQData(oldp+1775,(vlSelf->top__DOT__d_cache__DOT__receive_data_3),64);
            tracep->chgQData(oldp+1777,(vlSelf->top__DOT__d_cache__DOT__receive_data_4),64);
            tracep->chgQData(oldp+1779,(vlSelf->top__DOT__d_cache__DOT__receive_data_5),64);
            tracep->chgQData(oldp+1781,(vlSelf->top__DOT__d_cache__DOT__receive_data_6),64);
            tracep->chgQData(oldp+1783,(vlSelf->top__DOT__d_cache__DOT__receive_data_7),64);
            tracep->chgCData(oldp+1785,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
            tracep->chgCData(oldp+1786,(vlSelf->top__DOT__d_cache__DOT__quene_0),2);
            tracep->chgCData(oldp+1787,(vlSelf->top__DOT__d_cache__DOT__quene_1),2);
            tracep->chgCData(oldp+1788,(vlSelf->top__DOT__d_cache__DOT__quene_2),2);
            tracep->chgCData(oldp+1789,(vlSelf->top__DOT__d_cache__DOT__quene_3),2);
            tracep->chgCData(oldp+1790,(vlSelf->top__DOT__d_cache__DOT__quene_4),2);
            tracep->chgCData(oldp+1791,(vlSelf->top__DOT__d_cache__DOT__quene_5),2);
            tracep->chgCData(oldp+1792,(vlSelf->top__DOT__d_cache__DOT__quene_6),2);
            tracep->chgCData(oldp+1793,(vlSelf->top__DOT__d_cache__DOT__quene_7),2);
            tracep->chgCData(oldp+1794,(vlSelf->top__DOT__d_cache__DOT__quene_8),2);
            tracep->chgCData(oldp+1795,(vlSelf->top__DOT__d_cache__DOT__quene_9),2);
            tracep->chgCData(oldp+1796,(vlSelf->top__DOT__d_cache__DOT__quene_10),2);
            tracep->chgCData(oldp+1797,(vlSelf->top__DOT__d_cache__DOT__quene_11),2);
            tracep->chgCData(oldp+1798,(vlSelf->top__DOT__d_cache__DOT__quene_12),2);
            tracep->chgCData(oldp+1799,(vlSelf->top__DOT__d_cache__DOT__quene_13),2);
            tracep->chgCData(oldp+1800,(vlSelf->top__DOT__d_cache__DOT__quene_14),2);
            tracep->chgCData(oldp+1801,(vlSelf->top__DOT__d_cache__DOT__quene_15),2);
            tracep->chgCData(oldp+1802,((0x3fU & (IData)(vlSelf->top__DOT__LSU__DOT__maddr))),6);
            tracep->chgCData(oldp+1803,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__LSU__DOT__maddr 
                                                         >> 6U)))),4);
            tracep->chgIData(oldp+1804,((0x3fffffU 
                                         & (IData)(
                                                   (vlSelf->top__DOT__LSU__DOT__maddr 
                                                    >> 0xaU)))),22);
            tracep->chgSData(oldp+1805,((0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                                                   << 3U))),9);
            tracep->chgQData(oldp+1806,(vlSelf->top__DOT__d_cache__DOT__wmask),64);
            tracep->chgBit(oldp+1808,(vlSelf->top__DOT__d_cache__DOT__way0_hit));
            tracep->chgBit(oldp+1809,(vlSelf->top__DOT__d_cache__DOT__way1_hit));
            tracep->chgCData(oldp+1810,(vlSelf->top__DOT__d_cache__DOT__unuse_way),2);
            tracep->chgCData(oldp+1811,(vlSelf->top__DOT__d_cache__DOT__state),4);
            tracep->chgQData(oldp+1812,(vlSelf->top__DOT__axi__DOT__araddr),64);
            tracep->chgQData(oldp+1814,(vlSelf->top__DOT__axi__DOT__awaddr),64);
            tracep->chgCData(oldp+1816,(vlSelf->top__DOT__axi__DOT__arlen),8);
            tracep->chgCData(oldp+1817,(vlSelf->top__DOT__axi__DOT__awlen),8);
            tracep->chgCData(oldp+1818,(vlSelf->top__DOT__axi__DOT__state),3);
        }
        tracep->chgBit(oldp+1819,(vlSelf->clock));
        tracep->chgBit(oldp+1820,(vlSelf->reset));
        tracep->chgIData(oldp+1821,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+1822,(vlSelf->io_pc),64);
        tracep->chgBit(oldp+1824,(vlSelf->io_step));
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
