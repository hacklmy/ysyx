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
    VlWide<16>/*511:0*/ __Vtemp826;
    VlWide<16>/*511:0*/ __Vtemp827;
    VlWide<16>/*511:0*/ __Vtemp831;
    VlWide<16>/*511:0*/ __Vtemp832;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0]),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1]),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2]),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3]),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4]),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5]),64);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6]),64);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7]),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8]),64);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9]),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[10]),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[11]),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[12]),64);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[13]),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[14]),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[15]),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[16]),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[17]),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[18]),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[19]),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[20]),64);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[21]),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[22]),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[23]),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[24]),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[25]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[26]),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[27]),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[28]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[29]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[30]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__IFU__DOT__fs_pc),64);
            tracep->chgIData(oldp+66,(vlSelf->top__DOT__IFU__DOT__fs_inst),32);
            if ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__IFU__DOT__fs_pc 
                                          >> 6U))))) {
                __Vtemp826[0U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0U];
                __Vtemp826[1U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[1U];
                __Vtemp826[2U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[2U];
                __Vtemp826[3U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[3U];
                __Vtemp826[4U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[4U];
                __Vtemp826[5U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[5U];
                __Vtemp826[6U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[6U];
                __Vtemp826[7U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[7U];
                __Vtemp826[8U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[8U];
                __Vtemp826[9U] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[9U];
                __Vtemp826[0xaU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xaU];
                __Vtemp826[0xbU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xbU];
                __Vtemp826[0xcU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xcU];
                __Vtemp826[0xdU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xdU];
                __Vtemp826[0xeU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xeU];
                __Vtemp826[0xfU] = vlSelf->top__DOT__i_cache__DOT__ram_0_15[0xfU];
            } else {
                __Vtemp826[0U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0U]);
                __Vtemp826[1U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[1U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1009[1U]);
                __Vtemp826[2U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[2U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1009[2U]);
                __Vtemp826[3U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[3U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1009[3U]);
                __Vtemp826[4U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[4U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1009[4U]);
                __Vtemp826[5U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[5U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1009[5U]);
                __Vtemp826[6U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[6U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1009[6U]);
                __Vtemp826[7U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[7U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1009[7U]);
                __Vtemp826[8U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[8U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1009[8U]);
                __Vtemp826[9U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[9U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1009[9U]);
                __Vtemp826[0xaU] = ((0xeU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                     ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xaU]
                                     : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xaU]);
                __Vtemp826[0xbU] = ((0xeU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                     ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xbU]
                                     : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xbU]);
                __Vtemp826[0xcU] = ((0xeU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                     ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xcU]
                                     : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xcU]);
                __Vtemp826[0xdU] = ((0xeU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                     ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xdU]
                                     : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xdU]);
                __Vtemp826[0xeU] = ((0xeU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                     ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xeU]
                                     : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xeU]);
                __Vtemp826[0xfU] = ((0xeU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                     ? vlSelf->top__DOT__i_cache__DOT__ram_0_14[0xfU]
                                     : vlSelf->top__DOT__i_cache__DOT___GEN_1009[0xfU]);
            }
            VL_SHIFTR_WWI(512,512,9, __Vtemp827, __Vtemp826, 
                          (0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                     << 3U)));
            if ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__IFU__DOT__fs_pc 
                                          >> 6U))))) {
                __Vtemp831[0U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0U];
                __Vtemp831[1U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[1U];
                __Vtemp831[2U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[2U];
                __Vtemp831[3U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[3U];
                __Vtemp831[4U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[4U];
                __Vtemp831[5U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[5U];
                __Vtemp831[6U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[6U];
                __Vtemp831[7U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[7U];
                __Vtemp831[8U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[8U];
                __Vtemp831[9U] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[9U];
                __Vtemp831[0xaU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xaU];
                __Vtemp831[0xbU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xbU];
                __Vtemp831[0xcU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xcU];
                __Vtemp831[0xdU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xdU];
                __Vtemp831[0xeU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xeU];
                __Vtemp831[0xfU] = vlSelf->top__DOT__i_cache__DOT__ram_1_15[0xfU];
            } else {
                __Vtemp831[0U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0U]);
                __Vtemp831[1U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[1U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1025[1U]);
                __Vtemp831[2U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[2U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1025[2U]);
                __Vtemp831[3U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[3U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1025[3U]);
                __Vtemp831[4U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[4U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1025[4U]);
                __Vtemp831[5U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[5U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1025[5U]);
                __Vtemp831[6U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[6U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1025[6U]);
                __Vtemp831[7U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[7U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1025[7U]);
                __Vtemp831[8U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[8U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1025[8U]);
                __Vtemp831[9U] = ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                            >> 6U))))
                                   ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[9U]
                                   : vlSelf->top__DOT__i_cache__DOT___GEN_1025[9U]);
                __Vtemp831[0xaU] = ((0xeU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                     ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xaU]
                                     : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xaU]);
                __Vtemp831[0xbU] = ((0xeU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                     ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xbU]
                                     : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xbU]);
                __Vtemp831[0xcU] = ((0xeU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                     ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xcU]
                                     : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xcU]);
                __Vtemp831[0xdU] = ((0xeU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                     ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xdU]
                                     : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xdU]);
                __Vtemp831[0xeU] = ((0xeU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                     ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xeU]
                                     : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xeU]);
                __Vtemp831[0xfU] = ((0xeU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                         >> 6U))))
                                     ? vlSelf->top__DOT__i_cache__DOT__ram_1_14[0xfU]
                                     : vlSelf->top__DOT__i_cache__DOT___GEN_1025[0xfU]);
            }
            VL_SHIFTR_WWI(512,512,9, __Vtemp832, __Vtemp831, 
                          (0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                     << 3U)));
            tracep->chgQData(oldp+67,((((QData)((IData)(
                                                        ((1U 
                                                          == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                          ? 
                                                         ((IData)(vlSelf->top__DOT__i_cache__DOT__way0_hit)
                                                           ? 
                                                          __Vtemp827[1U]
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__i_cache__DOT__way1_hit)
                                                            ? 
                                                           __Vtemp832[1U]
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
                                                                      __Vtemp827[0U]
                                                                       : 
                                                                      ((IData)(vlSelf->top__DOT__i_cache__DOT__way1_hit)
                                                                        ? 
                                                                       __Vtemp832[0U]
                                                                        : 
                                                                       Vtop__ConstPool__CONST_93e1b771_0[0U]))
                                                                      : 
                                                                     Vtop__ConstPool__CONST_93e1b771_0[0U]))))),64);
            tracep->chgBit(oldp+69,(((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                     & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1034))));
            tracep->chgBit(oldp+70,(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid));
            tracep->chgIData(oldp+71,((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc)),32);
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__IFU__DOT__fs_valid));
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__IFU__DOT__inst_ready));
            tracep->chgIData(oldp+74,((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1043)),32);
            tracep->chgCData(oldp+75,(vlSelf->top__DOT__i_cache__DOT___GEN_1044),8);
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__i_cache_io_to_axi_arvalid));
            tracep->chgBit(oldp+77,(vlSelf->top__DOT__i_cache_io_to_axi_rready));
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast));
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
            tracep->chgCData(oldp+82,(vlSelf->top__DOT__d_cache__DOT___GEN_2087),8);
            tracep->chgBit(oldp+83,(vlSelf->top__DOT__d_cache_io_to_axi_arvalid));
            tracep->chgBit(oldp+84,(vlSelf->top__DOT__d_cache_io_to_axi_rready));
            tracep->chgIData(oldp+85,(vlSelf->top__DOT__d_cache_io_to_axi_awaddr),32);
            tracep->chgCData(oldp+86,(vlSelf->top__DOT__d_cache_io_to_axi_awlen),8);
            tracep->chgBit(oldp+87,(vlSelf->top__DOT__d_cache_io_to_axi_awvalid));
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__d_cache_io_to_axi_wdata),64);
            tracep->chgCData(oldp+90,(vlSelf->top__DOT__d_cache_io_to_axi_wstrb),8);
            tracep->chgBit(oldp+91,(vlSelf->top__DOT__d_cache_io_to_axi_wvalid));
            tracep->chgBit(oldp+92,(vlSelf->top__DOT__d_cache_io_to_axi_bready));
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
            tracep->chgBit(oldp+95,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast));
            tracep->chgBit(oldp+96,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
            tracep->chgBit(oldp+97,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__axi_io_axi_out_rlast));
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__axi__DOT__axi_wready));
            tracep->chgBit(oldp+104,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
            tracep->chgIData(oldp+105,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                             ? 0U : 
                                            ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                              ? 0U : 
                                             ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                               ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1043)
                                               : 0U)))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1043)
                                             : 0U))),32);
            tracep->chgCData(oldp+106,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2087)
                                             : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2087)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1044)
                                                  : 0U)))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_1044)
                                             : ((2U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2087)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2087)
                                                  : 0U))))),8);
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
            tracep->chgIData(oldp+109,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgCData(oldp+110,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+111,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
            tracep->chgQData(oldp+112,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgCData(oldp+114,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
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
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
            tracep->chgQData(oldp+117,((4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)),64);
            tracep->chgBit(oldp+119,((1U & (~ (IData)(vlSelf->top__DOT__IFU__DOT__fs_valid)))));
            tracep->chgCData(oldp+120,(vlSelf->top__DOT__arbiter__DOT__state),2);
            tracep->chgWData(oldp+121,(vlSelf->top__DOT__i_cache__DOT__ram_0_0),512);
            tracep->chgWData(oldp+137,(vlSelf->top__DOT__i_cache__DOT__ram_0_1),512);
            tracep->chgWData(oldp+153,(vlSelf->top__DOT__i_cache__DOT__ram_0_2),512);
            tracep->chgWData(oldp+169,(vlSelf->top__DOT__i_cache__DOT__ram_0_3),512);
            tracep->chgWData(oldp+185,(vlSelf->top__DOT__i_cache__DOT__ram_0_4),512);
            tracep->chgWData(oldp+201,(vlSelf->top__DOT__i_cache__DOT__ram_0_5),512);
            tracep->chgWData(oldp+217,(vlSelf->top__DOT__i_cache__DOT__ram_0_6),512);
            tracep->chgWData(oldp+233,(vlSelf->top__DOT__i_cache__DOT__ram_0_7),512);
            tracep->chgWData(oldp+249,(vlSelf->top__DOT__i_cache__DOT__ram_0_8),512);
            tracep->chgWData(oldp+265,(vlSelf->top__DOT__i_cache__DOT__ram_0_9),512);
            tracep->chgWData(oldp+281,(vlSelf->top__DOT__i_cache__DOT__ram_0_10),512);
            tracep->chgWData(oldp+297,(vlSelf->top__DOT__i_cache__DOT__ram_0_11),512);
            tracep->chgWData(oldp+313,(vlSelf->top__DOT__i_cache__DOT__ram_0_12),512);
            tracep->chgWData(oldp+329,(vlSelf->top__DOT__i_cache__DOT__ram_0_13),512);
            tracep->chgWData(oldp+345,(vlSelf->top__DOT__i_cache__DOT__ram_0_14),512);
            tracep->chgWData(oldp+361,(vlSelf->top__DOT__i_cache__DOT__ram_0_15),512);
            tracep->chgWData(oldp+377,(vlSelf->top__DOT__i_cache__DOT__ram_1_0),512);
            tracep->chgWData(oldp+393,(vlSelf->top__DOT__i_cache__DOT__ram_1_1),512);
            tracep->chgWData(oldp+409,(vlSelf->top__DOT__i_cache__DOT__ram_1_2),512);
            tracep->chgWData(oldp+425,(vlSelf->top__DOT__i_cache__DOT__ram_1_3),512);
            tracep->chgWData(oldp+441,(vlSelf->top__DOT__i_cache__DOT__ram_1_4),512);
            tracep->chgWData(oldp+457,(vlSelf->top__DOT__i_cache__DOT__ram_1_5),512);
            tracep->chgWData(oldp+473,(vlSelf->top__DOT__i_cache__DOT__ram_1_6),512);
            tracep->chgWData(oldp+489,(vlSelf->top__DOT__i_cache__DOT__ram_1_7),512);
            tracep->chgWData(oldp+505,(vlSelf->top__DOT__i_cache__DOT__ram_1_8),512);
            tracep->chgWData(oldp+521,(vlSelf->top__DOT__i_cache__DOT__ram_1_9),512);
            tracep->chgWData(oldp+537,(vlSelf->top__DOT__i_cache__DOT__ram_1_10),512);
            tracep->chgWData(oldp+553,(vlSelf->top__DOT__i_cache__DOT__ram_1_11),512);
            tracep->chgWData(oldp+569,(vlSelf->top__DOT__i_cache__DOT__ram_1_12),512);
            tracep->chgWData(oldp+585,(vlSelf->top__DOT__i_cache__DOT__ram_1_13),512);
            tracep->chgWData(oldp+601,(vlSelf->top__DOT__i_cache__DOT__ram_1_14),512);
            tracep->chgWData(oldp+617,(vlSelf->top__DOT__i_cache__DOT__ram_1_15),512);
            tracep->chgIData(oldp+633,(vlSelf->top__DOT__i_cache__DOT__tag_0_0),32);
            tracep->chgIData(oldp+634,(vlSelf->top__DOT__i_cache__DOT__tag_0_1),32);
            tracep->chgIData(oldp+635,(vlSelf->top__DOT__i_cache__DOT__tag_0_2),32);
            tracep->chgIData(oldp+636,(vlSelf->top__DOT__i_cache__DOT__tag_0_3),32);
            tracep->chgIData(oldp+637,(vlSelf->top__DOT__i_cache__DOT__tag_0_4),32);
            tracep->chgIData(oldp+638,(vlSelf->top__DOT__i_cache__DOT__tag_0_5),32);
            tracep->chgIData(oldp+639,(vlSelf->top__DOT__i_cache__DOT__tag_0_6),32);
            tracep->chgIData(oldp+640,(vlSelf->top__DOT__i_cache__DOT__tag_0_7),32);
            tracep->chgIData(oldp+641,(vlSelf->top__DOT__i_cache__DOT__tag_0_8),32);
            tracep->chgIData(oldp+642,(vlSelf->top__DOT__i_cache__DOT__tag_0_9),32);
            tracep->chgIData(oldp+643,(vlSelf->top__DOT__i_cache__DOT__tag_0_10),32);
            tracep->chgIData(oldp+644,(vlSelf->top__DOT__i_cache__DOT__tag_0_11),32);
            tracep->chgIData(oldp+645,(vlSelf->top__DOT__i_cache__DOT__tag_0_12),32);
            tracep->chgIData(oldp+646,(vlSelf->top__DOT__i_cache__DOT__tag_0_13),32);
            tracep->chgIData(oldp+647,(vlSelf->top__DOT__i_cache__DOT__tag_0_14),32);
            tracep->chgIData(oldp+648,(vlSelf->top__DOT__i_cache__DOT__tag_0_15),32);
            tracep->chgIData(oldp+649,(vlSelf->top__DOT__i_cache__DOT__tag_1_0),32);
            tracep->chgIData(oldp+650,(vlSelf->top__DOT__i_cache__DOT__tag_1_1),32);
            tracep->chgIData(oldp+651,(vlSelf->top__DOT__i_cache__DOT__tag_1_2),32);
            tracep->chgIData(oldp+652,(vlSelf->top__DOT__i_cache__DOT__tag_1_3),32);
            tracep->chgIData(oldp+653,(vlSelf->top__DOT__i_cache__DOT__tag_1_4),32);
            tracep->chgIData(oldp+654,(vlSelf->top__DOT__i_cache__DOT__tag_1_5),32);
            tracep->chgIData(oldp+655,(vlSelf->top__DOT__i_cache__DOT__tag_1_6),32);
            tracep->chgIData(oldp+656,(vlSelf->top__DOT__i_cache__DOT__tag_1_7),32);
            tracep->chgIData(oldp+657,(vlSelf->top__DOT__i_cache__DOT__tag_1_8),32);
            tracep->chgIData(oldp+658,(vlSelf->top__DOT__i_cache__DOT__tag_1_9),32);
            tracep->chgIData(oldp+659,(vlSelf->top__DOT__i_cache__DOT__tag_1_10),32);
            tracep->chgIData(oldp+660,(vlSelf->top__DOT__i_cache__DOT__tag_1_11),32);
            tracep->chgIData(oldp+661,(vlSelf->top__DOT__i_cache__DOT__tag_1_12),32);
            tracep->chgIData(oldp+662,(vlSelf->top__DOT__i_cache__DOT__tag_1_13),32);
            tracep->chgIData(oldp+663,(vlSelf->top__DOT__i_cache__DOT__tag_1_14),32);
            tracep->chgIData(oldp+664,(vlSelf->top__DOT__i_cache__DOT__tag_1_15),32);
            tracep->chgBit(oldp+665,(vlSelf->top__DOT__i_cache__DOT__valid_0_0));
            tracep->chgBit(oldp+666,(vlSelf->top__DOT__i_cache__DOT__valid_0_1));
            tracep->chgBit(oldp+667,(vlSelf->top__DOT__i_cache__DOT__valid_0_2));
            tracep->chgBit(oldp+668,(vlSelf->top__DOT__i_cache__DOT__valid_0_3));
            tracep->chgBit(oldp+669,(vlSelf->top__DOT__i_cache__DOT__valid_0_4));
            tracep->chgBit(oldp+670,(vlSelf->top__DOT__i_cache__DOT__valid_0_5));
            tracep->chgBit(oldp+671,(vlSelf->top__DOT__i_cache__DOT__valid_0_6));
            tracep->chgBit(oldp+672,(vlSelf->top__DOT__i_cache__DOT__valid_0_7));
            tracep->chgBit(oldp+673,(vlSelf->top__DOT__i_cache__DOT__valid_0_8));
            tracep->chgBit(oldp+674,(vlSelf->top__DOT__i_cache__DOT__valid_0_9));
            tracep->chgBit(oldp+675,(vlSelf->top__DOT__i_cache__DOT__valid_0_10));
            tracep->chgBit(oldp+676,(vlSelf->top__DOT__i_cache__DOT__valid_0_11));
            tracep->chgBit(oldp+677,(vlSelf->top__DOT__i_cache__DOT__valid_0_12));
            tracep->chgBit(oldp+678,(vlSelf->top__DOT__i_cache__DOT__valid_0_13));
            tracep->chgBit(oldp+679,(vlSelf->top__DOT__i_cache__DOT__valid_0_14));
            tracep->chgBit(oldp+680,(vlSelf->top__DOT__i_cache__DOT__valid_0_15));
            tracep->chgBit(oldp+681,(vlSelf->top__DOT__i_cache__DOT__valid_1_0));
            tracep->chgBit(oldp+682,(vlSelf->top__DOT__i_cache__DOT__valid_1_1));
            tracep->chgBit(oldp+683,(vlSelf->top__DOT__i_cache__DOT__valid_1_2));
            tracep->chgBit(oldp+684,(vlSelf->top__DOT__i_cache__DOT__valid_1_3));
            tracep->chgBit(oldp+685,(vlSelf->top__DOT__i_cache__DOT__valid_1_4));
            tracep->chgBit(oldp+686,(vlSelf->top__DOT__i_cache__DOT__valid_1_5));
            tracep->chgBit(oldp+687,(vlSelf->top__DOT__i_cache__DOT__valid_1_6));
            tracep->chgBit(oldp+688,(vlSelf->top__DOT__i_cache__DOT__valid_1_7));
            tracep->chgBit(oldp+689,(vlSelf->top__DOT__i_cache__DOT__valid_1_8));
            tracep->chgBit(oldp+690,(vlSelf->top__DOT__i_cache__DOT__valid_1_9));
            tracep->chgBit(oldp+691,(vlSelf->top__DOT__i_cache__DOT__valid_1_10));
            tracep->chgBit(oldp+692,(vlSelf->top__DOT__i_cache__DOT__valid_1_11));
            tracep->chgBit(oldp+693,(vlSelf->top__DOT__i_cache__DOT__valid_1_12));
            tracep->chgBit(oldp+694,(vlSelf->top__DOT__i_cache__DOT__valid_1_13));
            tracep->chgBit(oldp+695,(vlSelf->top__DOT__i_cache__DOT__valid_1_14));
            tracep->chgBit(oldp+696,(vlSelf->top__DOT__i_cache__DOT__valid_1_15));
            tracep->chgBit(oldp+697,(vlSelf->top__DOT__i_cache__DOT__way0_hit));
            tracep->chgBit(oldp+698,(vlSelf->top__DOT__i_cache__DOT__way1_hit));
            tracep->chgCData(oldp+699,(vlSelf->top__DOT__i_cache__DOT__unuse_way),2);
            tracep->chgQData(oldp+700,(vlSelf->top__DOT__i_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+702,(vlSelf->top__DOT__i_cache__DOT__receive_data_1),64);
            tracep->chgQData(oldp+704,(vlSelf->top__DOT__i_cache__DOT__receive_data_2),64);
            tracep->chgQData(oldp+706,(vlSelf->top__DOT__i_cache__DOT__receive_data_3),64);
            tracep->chgQData(oldp+708,(vlSelf->top__DOT__i_cache__DOT__receive_data_4),64);
            tracep->chgQData(oldp+710,(vlSelf->top__DOT__i_cache__DOT__receive_data_5),64);
            tracep->chgQData(oldp+712,(vlSelf->top__DOT__i_cache__DOT__receive_data_6),64);
            tracep->chgQData(oldp+714,(vlSelf->top__DOT__i_cache__DOT__receive_data_7),64);
            tracep->chgCData(oldp+716,(vlSelf->top__DOT__i_cache__DOT__receive_num),3);
            tracep->chgBit(oldp+717,(vlSelf->top__DOT__i_cache__DOT__quene));
            tracep->chgCData(oldp+718,((0x3fU & (IData)(vlSelf->top__DOT__IFU__DOT__fs_pc))),6);
            tracep->chgCData(oldp+719,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                        >> 6U)))),4);
            tracep->chgIData(oldp+720,((0x3fffffU & (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__fs_pc 
                                                             >> 0xaU)))),22);
            tracep->chgSData(oldp+721,((0x1f8U & ((IData)(vlSelf->top__DOT__IFU__DOT__fs_pc) 
                                                  << 3U))),9);
            tracep->chgCData(oldp+722,(vlSelf->top__DOT__i_cache__DOT__state),3);
            tracep->chgWData(oldp+723,(vlSelf->top__DOT__d_cache__DOT__ram_0_0),512);
            tracep->chgWData(oldp+739,(vlSelf->top__DOT__d_cache__DOT__ram_1_0),512);
            tracep->chgBit(oldp+755,(vlSelf->top__DOT__d_cache__DOT__valid_0_0));
            tracep->chgBit(oldp+756,(vlSelf->top__DOT__d_cache__DOT__valid_1_0));
            tracep->chgBit(oldp+757,(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
            tracep->chgBit(oldp+758,(vlSelf->top__DOT__d_cache__DOT__dirty_1_0));
            tracep->chgBit(oldp+759,(vlSelf->top__DOT__d_cache__DOT__way0_hit));
            tracep->chgBit(oldp+760,(vlSelf->top__DOT__d_cache__DOT__way1_hit));
            tracep->chgWData(oldp+761,(vlSelf->top__DOT__d_cache__DOT__write_back_data),512);
            tracep->chgIData(oldp+777,(vlSelf->top__DOT__d_cache__DOT__write_back_addr),32);
            tracep->chgCData(oldp+778,(vlSelf->top__DOT__d_cache__DOT__unuse_way),2);
            tracep->chgQData(oldp+779,(vlSelf->top__DOT__d_cache__DOT__receive_data_0),64);
            tracep->chgQData(oldp+781,(vlSelf->top__DOT__d_cache__DOT__receive_data_1),64);
            tracep->chgQData(oldp+783,(vlSelf->top__DOT__d_cache__DOT__receive_data_2),64);
            tracep->chgQData(oldp+785,(vlSelf->top__DOT__d_cache__DOT__receive_data_3),64);
            tracep->chgQData(oldp+787,(vlSelf->top__DOT__d_cache__DOT__receive_data_4),64);
            tracep->chgQData(oldp+789,(vlSelf->top__DOT__d_cache__DOT__receive_data_5),64);
            tracep->chgQData(oldp+791,(vlSelf->top__DOT__d_cache__DOT__receive_data_6),64);
            tracep->chgQData(oldp+793,(vlSelf->top__DOT__d_cache__DOT__receive_data_7),64);
            tracep->chgCData(oldp+795,(vlSelf->top__DOT__d_cache__DOT__receive_num),3);
            tracep->chgBit(oldp+796,(vlSelf->top__DOT__d_cache__DOT__quene));
            tracep->chgCData(oldp+797,(vlSelf->top__DOT__d_cache__DOT__state),3);
            tracep->chgQData(oldp+798,(vlSelf->top__DOT__axi__DOT__araddr),64);
            tracep->chgQData(oldp+800,(vlSelf->top__DOT__axi__DOT__awaddr),64);
            tracep->chgCData(oldp+802,(vlSelf->top__DOT__axi__DOT__arlen),8);
            tracep->chgCData(oldp+803,(vlSelf->top__DOT__axi__DOT__awlen),8);
            tracep->chgCData(oldp+804,(vlSelf->top__DOT__axi__DOT__state),3);
        }
        tracep->chgBit(oldp+805,(vlSelf->clock));
        tracep->chgBit(oldp+806,(vlSelf->reset));
        tracep->chgIData(oldp+807,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+808,(vlSelf->io_pc),64);
        tracep->chgBit(oldp+810,(vlSelf->io_step));
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
