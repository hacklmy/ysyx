// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);

void Vtop___024root___settle__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__6\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp4727;
    VlWide<3>/*95:0*/ __Vtemp4730;
    VlWide<4>/*127:0*/ __Vtemp5935;
    VlWide<4>/*127:0*/ __Vtemp5941;
    // Body
    if ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        vlSelf->top__DOT__i_cache__DOT___GEN_2189[0U] 
            = ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[0U]
                : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[0U]
                    : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[0U]
                        : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__i_cache__DOT___GEN_363[0U]
                            : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                             >> 6U)))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[0U]
                                : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                 >> 6U)))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[0U]
                                    : ((2U == (3U & 
                                               ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[0U]
                                        : vlSelf->top__DOT__i_cache__DOT___GEN_363[0U])))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2189[1U] 
            = ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[1U]
                : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[1U]
                    : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[1U]
                        : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__i_cache__DOT___GEN_363[1U]
                            : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                             >> 6U)))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[1U]
                                : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                 >> 6U)))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[1U]
                                    : ((2U == (3U & 
                                               ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[1U]
                                        : vlSelf->top__DOT__i_cache__DOT___GEN_363[1U])))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2189[2U] 
            = ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[2U]
                : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[2U]
                    : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[2U]
                        : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__i_cache__DOT___GEN_363[2U]
                            : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                             >> 6U)))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[2U]
                                : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                 >> 6U)))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[2U]
                                    : ((2U == (3U & 
                                               ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[2U]
                                        : vlSelf->top__DOT__i_cache__DOT___GEN_363[2U])))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2189[3U] 
            = ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[3U]
                : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[3U]
                    : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[3U]
                        : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__i_cache__DOT___GEN_363[3U]
                            : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                             >> 6U)))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[3U]
                                : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                 >> 6U)))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[3U]
                                    : ((2U == (3U & 
                                               ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_13[3U]
                                        : vlSelf->top__DOT__i_cache__DOT___GEN_363[3U])))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2190[0U] 
            = ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[0U]
                : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[0U]
                    : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[0U]
                        : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__i_cache__DOT___GEN_364[0U]
                            : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                             >> 6U)))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[0U]
                                : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                 >> 6U)))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[0U]
                                    : ((2U == (3U & 
                                               ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[0U]
                                        : vlSelf->top__DOT__i_cache__DOT___GEN_364[0U])))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2190[1U] 
            = ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[1U]
                : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[1U]
                    : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[1U]
                        : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__i_cache__DOT___GEN_364[1U]
                            : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                             >> 6U)))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[1U]
                                : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                 >> 6U)))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[1U]
                                    : ((2U == (3U & 
                                               ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[1U]
                                        : vlSelf->top__DOT__i_cache__DOT___GEN_364[1U])))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2190[2U] 
            = ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[2U]
                : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[2U]
                    : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[2U]
                        : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__i_cache__DOT___GEN_364[2U]
                            : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                             >> 6U)))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[2U]
                                : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                 >> 6U)))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[2U]
                                    : ((2U == (3U & 
                                               ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[2U]
                                        : vlSelf->top__DOT__i_cache__DOT___GEN_364[2U])))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2190[3U] 
            = ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[3U]
                : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[3U]
                    : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[3U]
                        : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__i_cache__DOT___GEN_364[3U]
                            : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                             >> 6U)))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[3U]
                                : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                 >> 6U)))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[3U]
                                    : ((2U == (3U & 
                                               ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_14[3U]
                                        : vlSelf->top__DOT__i_cache__DOT___GEN_364[3U])))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2191[0U] 
            = ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[0U]
                : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[0U]
                    : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[0U]
                        : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__i_cache__DOT___GEN_365[0U]
                            : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                             >> 6U)))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[0U]
                                : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                 >> 6U)))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[0U]
                                    : ((2U == (3U & 
                                               ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[0U]
                                        : vlSelf->top__DOT__i_cache__DOT___GEN_365[0U])))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2191[1U] 
            = ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[1U]
                : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[1U]
                    : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[1U]
                        : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__i_cache__DOT___GEN_365[1U]
                            : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                             >> 6U)))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[1U]
                                : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                 >> 6U)))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[1U]
                                    : ((2U == (3U & 
                                               ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[1U]
                                        : vlSelf->top__DOT__i_cache__DOT___GEN_365[1U])))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2191[2U] 
            = ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[2U]
                : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[2U]
                    : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[2U]
                        : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__i_cache__DOT___GEN_365[2U]
                            : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                             >> 6U)))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[2U]
                                : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                 >> 6U)))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[2U]
                                    : ((2U == (3U & 
                                               ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[2U]
                                        : vlSelf->top__DOT__i_cache__DOT___GEN_365[2U])))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2191[3U] 
            = ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[3U]
                : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[3U]
                    : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[3U]
                        : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__i_cache__DOT___GEN_365[3U]
                            : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                             >> 6U)))
                                ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[3U]
                                : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                 >> 6U)))
                                    ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[3U]
                                    : ((2U == (3U & 
                                               ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__i_cache__DOT__ram_3_15[3U]
                                        : vlSelf->top__DOT__i_cache__DOT___GEN_365[3U])))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2192 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_0
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_0
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_0
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_366
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_0
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_0
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_0
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_366)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2193 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_1
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_1
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_1
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_367
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_1
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_1
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_1
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_367)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2194 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_2
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_2
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_2
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_368
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_2
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_2
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_2
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_368)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2195 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_3
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_3
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_3
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_369
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_3
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_3
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_3
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_369)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2196 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_4
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_4
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_4
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_370
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_4
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_4
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_4
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_370)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2197 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_5
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_5
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_5
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_371
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_5
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_5
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_5
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_371)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2198 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_6
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_6
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_6
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_372
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_6
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_6
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_6
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_372)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2199 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_7
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_7
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_7
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_373
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_7
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_7
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_7
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_373)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2200 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_8
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_8
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_8
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_374
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_8
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_8
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_8
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_374)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2201 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_9
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_9
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_9
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_375
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_9
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_9
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_9
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_375)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2202 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_10
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_10
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_10
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_376
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_10
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_10
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_10
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_376)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2203 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_11
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_11
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_11
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_377
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_11
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_11
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_11
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_377)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2204 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_12
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_12
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_12
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_378
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_12
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_12
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_12
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_378)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2205 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_13
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_13
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_13
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_379
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_13
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_13
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_13
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_379)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2206 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_14
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_14
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_14
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_380
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_14
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_14
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_14
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_380)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2207 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? vlSelf->top__DOT__i_cache__DOT__tag_3_15
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_15
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_15
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__i_cache__DOT___GEN_381
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? vlSelf->top__DOT__i_cache__DOT__tag_3_15
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__i_cache__DOT__tag_3_15
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__i_cache__DOT__tag_3_15
                                      : vlSelf->top__DOT__i_cache__DOT___GEN_381)))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2208 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_0)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_0)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_0)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_382)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_0)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_0)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_0)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_382))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2209 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_1)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_1)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_1)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_383)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_1)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_1)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_1)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_383))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2210 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_2)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_2)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_2)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_384)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_2)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_2)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_2)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_384))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2211 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_3)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_3)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_3)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_385)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_3)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_3)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_3)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_385))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2212 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_4)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_4)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_4)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_386)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_4)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_4)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_4)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_386))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2213 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_5)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_5)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_5)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_387)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_5)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_5)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_5)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_387))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2214 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_6)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_6)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_6)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_388)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_6)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_6)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_6)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_388))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2215 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_7)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_7)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_7)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_389)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_7)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_7)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_7)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_389))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2216 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_8)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_8)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_8)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_390)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_8)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_8)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_8)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_390))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2217 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_9)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_9)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_9)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_391)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_9)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_9)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_9)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_391))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2218 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_10)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_10)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_10)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_392)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_10)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_10)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_10)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_392))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2219 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_11)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_11)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_11)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_393)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_11)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_11)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_11)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_393))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2220 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_12)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_12)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_12)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_394)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_12)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_12)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_12)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_394))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2221 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_13)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_13)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_13)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_395)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_13)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_13)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_13)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_395))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2222 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_14)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_14)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_14)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_396)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_14)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_14)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_14)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_396))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2223 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_15)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_15)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_15)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_397)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_15)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_15)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__valid_3_15)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_397))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2064 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_206)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_270)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_334)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_398)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_206)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_270)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_334)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_398))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2065 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_207)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_271)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_335)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_399)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_207)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_271)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_335)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_399))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2066 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_208)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_272)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_336)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_208)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_272)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_336)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2067 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_209)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_273)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_337)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_401)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_209)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_273)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_337)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_401))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2068 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_210)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_274)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_338)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_402)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_210)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_274)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_338)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_402))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2069 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_211)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_275)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_339)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_403)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_211)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_275)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_339)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_403))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2070 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_212)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_276)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_340)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_404)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_212)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_276)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_340)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_404))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2071 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_213)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_277)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_341)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_405)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_213)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_277)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_341)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_405))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2072 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_214)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_278)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_342)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_406)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_214)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_278)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_342)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_406))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2073 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_215)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_279)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_343)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_407)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_215)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_279)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_343)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_407))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2074 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_216)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_280)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_344)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_408)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_216)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_280)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_344)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_408))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2075 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_217)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_281)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_345)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_409)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_217)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_281)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_345)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_409))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2076 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_218)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_282)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_346)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_410)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_218)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_282)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_346)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_410))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2077 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_219)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_283)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_347)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_411)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_219)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_283)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_347)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_411))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2078 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_220)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_284)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_348)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_412)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_220)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_284)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_348)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_412))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2079 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_221)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_285)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_349)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_413)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_221)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_285)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_349)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_413))))))));
    } else {
        vlSelf->top__DOT__i_cache__DOT___GEN_2189[0U] 
            = vlSelf->top__DOT__i_cache__DOT__ram_3_13[0U];
        vlSelf->top__DOT__i_cache__DOT___GEN_2189[1U] 
            = vlSelf->top__DOT__i_cache__DOT__ram_3_13[1U];
        vlSelf->top__DOT__i_cache__DOT___GEN_2189[2U] 
            = vlSelf->top__DOT__i_cache__DOT__ram_3_13[2U];
        vlSelf->top__DOT__i_cache__DOT___GEN_2189[3U] 
            = vlSelf->top__DOT__i_cache__DOT__ram_3_13[3U];
        vlSelf->top__DOT__i_cache__DOT___GEN_2190[0U] 
            = vlSelf->top__DOT__i_cache__DOT__ram_3_14[0U];
        vlSelf->top__DOT__i_cache__DOT___GEN_2190[1U] 
            = vlSelf->top__DOT__i_cache__DOT__ram_3_14[1U];
        vlSelf->top__DOT__i_cache__DOT___GEN_2190[2U] 
            = vlSelf->top__DOT__i_cache__DOT__ram_3_14[2U];
        vlSelf->top__DOT__i_cache__DOT___GEN_2190[3U] 
            = vlSelf->top__DOT__i_cache__DOT__ram_3_14[3U];
        vlSelf->top__DOT__i_cache__DOT___GEN_2191[0U] 
            = vlSelf->top__DOT__i_cache__DOT__ram_3_15[0U];
        vlSelf->top__DOT__i_cache__DOT___GEN_2191[1U] 
            = vlSelf->top__DOT__i_cache__DOT__ram_3_15[1U];
        vlSelf->top__DOT__i_cache__DOT___GEN_2191[2U] 
            = vlSelf->top__DOT__i_cache__DOT__ram_3_15[2U];
        vlSelf->top__DOT__i_cache__DOT___GEN_2191[3U] 
            = vlSelf->top__DOT__i_cache__DOT__ram_3_15[3U];
        vlSelf->top__DOT__i_cache__DOT___GEN_2192 = vlSelf->top__DOT__i_cache__DOT__tag_3_0;
        vlSelf->top__DOT__i_cache__DOT___GEN_2193 = vlSelf->top__DOT__i_cache__DOT__tag_3_1;
        vlSelf->top__DOT__i_cache__DOT___GEN_2194 = vlSelf->top__DOT__i_cache__DOT__tag_3_2;
        vlSelf->top__DOT__i_cache__DOT___GEN_2195 = vlSelf->top__DOT__i_cache__DOT__tag_3_3;
        vlSelf->top__DOT__i_cache__DOT___GEN_2196 = vlSelf->top__DOT__i_cache__DOT__tag_3_4;
        vlSelf->top__DOT__i_cache__DOT___GEN_2197 = vlSelf->top__DOT__i_cache__DOT__tag_3_5;
        vlSelf->top__DOT__i_cache__DOT___GEN_2198 = vlSelf->top__DOT__i_cache__DOT__tag_3_6;
        vlSelf->top__DOT__i_cache__DOT___GEN_2199 = vlSelf->top__DOT__i_cache__DOT__tag_3_7;
        vlSelf->top__DOT__i_cache__DOT___GEN_2200 = vlSelf->top__DOT__i_cache__DOT__tag_3_8;
        vlSelf->top__DOT__i_cache__DOT___GEN_2201 = vlSelf->top__DOT__i_cache__DOT__tag_3_9;
        vlSelf->top__DOT__i_cache__DOT___GEN_2202 = vlSelf->top__DOT__i_cache__DOT__tag_3_10;
        vlSelf->top__DOT__i_cache__DOT___GEN_2203 = vlSelf->top__DOT__i_cache__DOT__tag_3_11;
        vlSelf->top__DOT__i_cache__DOT___GEN_2204 = vlSelf->top__DOT__i_cache__DOT__tag_3_12;
        vlSelf->top__DOT__i_cache__DOT___GEN_2205 = vlSelf->top__DOT__i_cache__DOT__tag_3_13;
        vlSelf->top__DOT__i_cache__DOT___GEN_2206 = vlSelf->top__DOT__i_cache__DOT__tag_3_14;
        vlSelf->top__DOT__i_cache__DOT___GEN_2207 = vlSelf->top__DOT__i_cache__DOT__tag_3_15;
        vlSelf->top__DOT__i_cache__DOT___GEN_2208 = vlSelf->top__DOT__i_cache__DOT__valid_3_0;
        vlSelf->top__DOT__i_cache__DOT___GEN_2209 = vlSelf->top__DOT__i_cache__DOT__valid_3_1;
        vlSelf->top__DOT__i_cache__DOT___GEN_2210 = vlSelf->top__DOT__i_cache__DOT__valid_3_2;
        vlSelf->top__DOT__i_cache__DOT___GEN_2211 = vlSelf->top__DOT__i_cache__DOT__valid_3_3;
        vlSelf->top__DOT__i_cache__DOT___GEN_2212 = vlSelf->top__DOT__i_cache__DOT__valid_3_4;
        vlSelf->top__DOT__i_cache__DOT___GEN_2213 = vlSelf->top__DOT__i_cache__DOT__valid_3_5;
        vlSelf->top__DOT__i_cache__DOT___GEN_2214 = vlSelf->top__DOT__i_cache__DOT__valid_3_6;
        vlSelf->top__DOT__i_cache__DOT___GEN_2215 = vlSelf->top__DOT__i_cache__DOT__valid_3_7;
        vlSelf->top__DOT__i_cache__DOT___GEN_2216 = vlSelf->top__DOT__i_cache__DOT__valid_3_8;
        vlSelf->top__DOT__i_cache__DOT___GEN_2217 = vlSelf->top__DOT__i_cache__DOT__valid_3_9;
        vlSelf->top__DOT__i_cache__DOT___GEN_2218 = vlSelf->top__DOT__i_cache__DOT__valid_3_10;
        vlSelf->top__DOT__i_cache__DOT___GEN_2219 = vlSelf->top__DOT__i_cache__DOT__valid_3_11;
        vlSelf->top__DOT__i_cache__DOT___GEN_2220 = vlSelf->top__DOT__i_cache__DOT__valid_3_12;
        vlSelf->top__DOT__i_cache__DOT___GEN_2221 = vlSelf->top__DOT__i_cache__DOT__valid_3_13;
        vlSelf->top__DOT__i_cache__DOT___GEN_2222 = vlSelf->top__DOT__i_cache__DOT__valid_3_14;
        vlSelf->top__DOT__i_cache__DOT___GEN_2223 = vlSelf->top__DOT__i_cache__DOT__valid_3_15;
        vlSelf->top__DOT__i_cache__DOT___GEN_2064 = vlSelf->top__DOT__i_cache__DOT__quene_0;
        vlSelf->top__DOT__i_cache__DOT___GEN_2065 = vlSelf->top__DOT__i_cache__DOT__quene_1;
        vlSelf->top__DOT__i_cache__DOT___GEN_2066 = vlSelf->top__DOT__i_cache__DOT__quene_2;
        vlSelf->top__DOT__i_cache__DOT___GEN_2067 = vlSelf->top__DOT__i_cache__DOT__quene_3;
        vlSelf->top__DOT__i_cache__DOT___GEN_2068 = vlSelf->top__DOT__i_cache__DOT__quene_4;
        vlSelf->top__DOT__i_cache__DOT___GEN_2069 = vlSelf->top__DOT__i_cache__DOT__quene_5;
        vlSelf->top__DOT__i_cache__DOT___GEN_2070 = vlSelf->top__DOT__i_cache__DOT__quene_6;
        vlSelf->top__DOT__i_cache__DOT___GEN_2071 = vlSelf->top__DOT__i_cache__DOT__quene_7;
        vlSelf->top__DOT__i_cache__DOT___GEN_2072 = vlSelf->top__DOT__i_cache__DOT__quene_8;
        vlSelf->top__DOT__i_cache__DOT___GEN_2073 = vlSelf->top__DOT__i_cache__DOT__quene_9;
        vlSelf->top__DOT__i_cache__DOT___GEN_2074 = vlSelf->top__DOT__i_cache__DOT__quene_10;
        vlSelf->top__DOT__i_cache__DOT___GEN_2075 = vlSelf->top__DOT__i_cache__DOT__quene_11;
        vlSelf->top__DOT__i_cache__DOT___GEN_2076 = vlSelf->top__DOT__i_cache__DOT__quene_12;
        vlSelf->top__DOT__i_cache__DOT___GEN_2077 = vlSelf->top__DOT__i_cache__DOT__quene_13;
        vlSelf->top__DOT__i_cache__DOT___GEN_2078 = vlSelf->top__DOT__i_cache__DOT__quene_14;
        vlSelf->top__DOT__i_cache__DOT___GEN_2079 = vlSelf->top__DOT__i_cache__DOT__quene_15;
    }
    if ((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))) {
        vlSelf->top__DOT__arbiter_io_axi_out_awvalid 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                   & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)));
        vlSelf->top__DOT__arbiter_io_axi_out_bready 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_bready)
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                   & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_bready)));
        vlSelf->top__DOT__arbiter_io_axi_out_wvalid 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wvalid)
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                   & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wvalid)));
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? (IData)(vlSelf->top__DOT__axi_io_axi_out_rlast)
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                   & (IData)(vlSelf->top__DOT__axi_io_axi_out_rlast)));
    } else {
        vlSelf->top__DOT__arbiter_io_axi_out_awvalid 
            = ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
               & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                   ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                   : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                      & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid))));
        vlSelf->top__DOT__arbiter_io_axi_out_bready 
            = ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
               & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                   ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_bready)
                   : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                      & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_bready))));
        vlSelf->top__DOT__arbiter_io_axi_out_wvalid 
            = ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
               & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                   ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wvalid)
                   : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                      & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wvalid))));
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast 
            = ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
               & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                   ? (IData)(vlSelf->top__DOT__axi_io_axi_out_rlast)
                   : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                      & (IData)(vlSelf->top__DOT__axi_io_axi_out_rlast))));
    }
    if (vlSelf->top__DOT__axi__DOT__axi_rvalid) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__axi__DOT__araddr, vlSelf->__Vtask_pmem_read__1__Rdata);
        vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata 
            = vlSelf->__Vtask_pmem_read__1__Rdata;
    }
    if (vlSelf->top__DOT__axi__DOT__axi_wready) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__axi__DOT__awaddr, 
                                                               ((0U 
                                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                 ? 
                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                                  ? vlSelf->top__DOT__d_cache_io_to_axi_wdata
                                                                  : 
                                                                 ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                                   ? vlSelf->top__DOT__d_cache_io_to_axi_wdata
                                                                   : 0ULL))
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                  ? 0ULL
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                   ? vlSelf->top__DOT__d_cache_io_to_axi_wdata
                                                                   : 
                                                                  ((3U 
                                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                    ? vlSelf->top__DOT__d_cache_io_to_axi_wdata
                                                                    : 0ULL)))), 
                                                               ((0U 
                                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                 ? 
                                                                ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                                  ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                                  : 
                                                                 ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                                   ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                                   : 0U))
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                  ? 0U
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                   ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                                   : 
                                                                  ((3U 
                                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                    ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wstrb)
                                                                    : 0U)))));
    }
    if ((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))) {
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid)
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                   & (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid)));
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? (IData)(vlSelf->top__DOT__axi__DOT__axi_bvalid)
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                   & (IData)(vlSelf->top__DOT__axi__DOT__axi_bvalid)));
        vlSelf->top__DOT__arbiter_io_axi_out_arvalid 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                    ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                    : (IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)));
        vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast 
            = ((~ (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)) 
               & ((~ (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)) 
                  & ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid) 
                     & (IData)(vlSelf->top__DOT__axi_io_axi_out_rlast))));
        vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid 
            = ((~ (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)) 
               & ((~ (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)) 
                  & ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid) 
                     & (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid))));
    } else {
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid 
            = ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
               & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                   ? (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid)
                   : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                      & (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid))));
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid 
            = ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
               & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                   ? (IData)(vlSelf->top__DOT__axi__DOT__axi_bvalid)
                   : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                      & (IData)(vlSelf->top__DOT__axi__DOT__axi_bvalid))));
        vlSelf->top__DOT__arbiter_io_axi_out_arvalid 
            = ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                ? (IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                    ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                    : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                       & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid))));
        vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast 
            = ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
               & (IData)(vlSelf->top__DOT__axi_io_axi_out_rlast));
        vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid 
            = ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
               & (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid));
    }
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_14 
        = (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num) 
           & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_0));
    VL_EXTEND_WQ(65,64, __Vtemp4727, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
    VL_EXTEND_WQ(65,64, __Vtemp4730, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[0U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[1U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[2U] = 0U;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[0U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient) 
                           << 1U) : (1U | ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient) 
                                           << 1U)))
                    : __Vtemp4727[0U]) : __Vtemp4730[0U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[1U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? (((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient) 
                            >> 0x1fU) | ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                                  >> 0x20U)) 
                                         << 1U)) : 
                       (((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient) 
                         >> 0x1fU) | ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                               >> 0x20U)) 
                                      << 1U))) : __Vtemp4727[1U])
                : __Vtemp4730[1U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[2U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU)
                        : ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU))
                    : __Vtemp4727[2U]) : __Vtemp4730[2U]);
    }
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_3654[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3654[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3654[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3654[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3655[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3655[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3655[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3655[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3656[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3656[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3656[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3656[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3657[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3657[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3657[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3657[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3658[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3658[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3658[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3658[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3659[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3659[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3659[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3659[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3660[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3660[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3660[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3660[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3661[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3661[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3661[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3661[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3662[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3662[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3662[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3662[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3663[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3663[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3663[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3663[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3664[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3664[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3664[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3664[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3665[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3665[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3665[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3665[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3666[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3666[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3666[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3666[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3667[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3667[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3667[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3667[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3668[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3668[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3668[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3668[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3669[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3669[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3669[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3669[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3670 = vlSelf->top__DOT__d_cache__DOT__tag_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_3671 = vlSelf->top__DOT__d_cache__DOT__tag_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_3672 = vlSelf->top__DOT__d_cache__DOT__tag_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_3673 = vlSelf->top__DOT__d_cache__DOT__tag_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_3674 = vlSelf->top__DOT__d_cache__DOT__tag_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_3675 = vlSelf->top__DOT__d_cache__DOT__tag_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_3676 = vlSelf->top__DOT__d_cache__DOT__tag_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_3677 = vlSelf->top__DOT__d_cache__DOT__tag_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_3678 = vlSelf->top__DOT__d_cache__DOT__tag_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_3679 = vlSelf->top__DOT__d_cache__DOT__tag_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_3680 = vlSelf->top__DOT__d_cache__DOT__tag_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_3681 = vlSelf->top__DOT__d_cache__DOT__tag_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_3682 = vlSelf->top__DOT__d_cache__DOT__tag_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_3683 = vlSelf->top__DOT__d_cache__DOT__tag_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_3684 = vlSelf->top__DOT__d_cache__DOT__tag_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_3685 = vlSelf->top__DOT__d_cache__DOT__tag_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_3686 = vlSelf->top__DOT__d_cache__DOT__valid_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_3687 = vlSelf->top__DOT__d_cache__DOT__valid_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_3688 = vlSelf->top__DOT__d_cache__DOT__valid_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_3689 = vlSelf->top__DOT__d_cache__DOT__valid_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_3690 = vlSelf->top__DOT__d_cache__DOT__valid_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_3691 = vlSelf->top__DOT__d_cache__DOT__valid_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_3692 = vlSelf->top__DOT__d_cache__DOT__valid_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_3693 = vlSelf->top__DOT__d_cache__DOT__valid_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_3694 = vlSelf->top__DOT__d_cache__DOT__valid_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_3695 = vlSelf->top__DOT__d_cache__DOT__valid_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_3696 = vlSelf->top__DOT__d_cache__DOT__valid_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_3697 = vlSelf->top__DOT__d_cache__DOT__valid_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_3698 = vlSelf->top__DOT__d_cache__DOT__valid_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_3699 = vlSelf->top__DOT__d_cache__DOT__valid_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_3700 = vlSelf->top__DOT__d_cache__DOT__valid_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_3701 = vlSelf->top__DOT__d_cache__DOT__valid_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_3718[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3718[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3718[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3718[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3719[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3719[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3719[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3719[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3720[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3720[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3720[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3720[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3721[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3721[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3721[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3721[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3722[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3722[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3722[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3722[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3723[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3723[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3723[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3723[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3724[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3724[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3724[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3724[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3725[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3725[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3725[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3725[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3726[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3726[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3726[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3726[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3727[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3727[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3727[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3727[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3728[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3728[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3728[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3728[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3729[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3729[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3729[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3729[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3730[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3730[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3730[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3730[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3731[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3731[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3731[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3731[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3732[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3732[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3732[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3732[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3733[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3733[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3733[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3733[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3734 = vlSelf->top__DOT__d_cache__DOT__tag_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_3735 = vlSelf->top__DOT__d_cache__DOT__tag_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_3736 = vlSelf->top__DOT__d_cache__DOT__tag_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_3737 = vlSelf->top__DOT__d_cache__DOT__tag_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_3738 = vlSelf->top__DOT__d_cache__DOT__tag_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_3739 = vlSelf->top__DOT__d_cache__DOT__tag_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_3740 = vlSelf->top__DOT__d_cache__DOT__tag_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_3741 = vlSelf->top__DOT__d_cache__DOT__tag_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_3742 = vlSelf->top__DOT__d_cache__DOT__tag_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_3743 = vlSelf->top__DOT__d_cache__DOT__tag_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_3744 = vlSelf->top__DOT__d_cache__DOT__tag_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_3745 = vlSelf->top__DOT__d_cache__DOT__tag_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_3746 = vlSelf->top__DOT__d_cache__DOT__tag_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_3747 = vlSelf->top__DOT__d_cache__DOT__tag_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_3748 = vlSelf->top__DOT__d_cache__DOT__tag_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_3749 = vlSelf->top__DOT__d_cache__DOT__tag_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_3750 = vlSelf->top__DOT__d_cache__DOT__valid_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_3751 = vlSelf->top__DOT__d_cache__DOT__valid_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_3752 = vlSelf->top__DOT__d_cache__DOT__valid_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_3753 = vlSelf->top__DOT__d_cache__DOT__valid_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_3754 = vlSelf->top__DOT__d_cache__DOT__valid_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_3755 = vlSelf->top__DOT__d_cache__DOT__valid_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_3756 = vlSelf->top__DOT__d_cache__DOT__valid_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_3757 = vlSelf->top__DOT__d_cache__DOT__valid_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_3758 = vlSelf->top__DOT__d_cache__DOT__valid_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_3759 = vlSelf->top__DOT__d_cache__DOT__valid_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_3760 = vlSelf->top__DOT__d_cache__DOT__valid_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_3761 = vlSelf->top__DOT__d_cache__DOT__valid_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_3762 = vlSelf->top__DOT__d_cache__DOT__valid_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_3763 = vlSelf->top__DOT__d_cache__DOT__valid_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_3764 = vlSelf->top__DOT__d_cache__DOT__valid_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_3765 = vlSelf->top__DOT__d_cache__DOT__valid_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_3766[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_0[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3766[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_0[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3766[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_0[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3766[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_0[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3767[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_1[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3767[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_1[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3767[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_1[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3767[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_1[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3768[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_2[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3768[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_2[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3768[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_2[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3768[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_2[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3769[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_3[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3769[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_3[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3769[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_3[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3769[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_3[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3770[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_4[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3770[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_4[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3770[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_4[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3770[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_4[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3771[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_5[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3771[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_5[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3771[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_5[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3771[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_5[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3772[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_6[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3772[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_6[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3772[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_6[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3772[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_6[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3773[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_7[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3773[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_7[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3773[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_7[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3773[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_7[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3774[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_8[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3774[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_8[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3774[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_8[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3774[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_8[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3775[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_9[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3775[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_9[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3775[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_9[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3775[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_9[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3776[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_10[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3776[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_10[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3776[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_10[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3776[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_10[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3777[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_11[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3777[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_11[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3777[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_11[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3777[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_11[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3778[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_12[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3778[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_12[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3778[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_12[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3778[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_12[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3779[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_13[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3779[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_13[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3779[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_13[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3779[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_13[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3780[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_14[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3780[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_14[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3780[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_14[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3780[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_14[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3781[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_15[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3781[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_15[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3781[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_15[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3781[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_2_15[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3782 = vlSelf->top__DOT__d_cache__DOT__tag_2_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_3783 = vlSelf->top__DOT__d_cache__DOT__tag_2_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_3784 = vlSelf->top__DOT__d_cache__DOT__tag_2_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_3785 = vlSelf->top__DOT__d_cache__DOT__tag_2_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_3786 = vlSelf->top__DOT__d_cache__DOT__tag_2_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_3787 = vlSelf->top__DOT__d_cache__DOT__tag_2_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_3788 = vlSelf->top__DOT__d_cache__DOT__tag_2_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_3789 = vlSelf->top__DOT__d_cache__DOT__tag_2_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_3790 = vlSelf->top__DOT__d_cache__DOT__tag_2_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_3791 = vlSelf->top__DOT__d_cache__DOT__tag_2_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_3792 = vlSelf->top__DOT__d_cache__DOT__tag_2_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_3793 = vlSelf->top__DOT__d_cache__DOT__tag_2_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_3794 = vlSelf->top__DOT__d_cache__DOT__tag_2_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_3795 = vlSelf->top__DOT__d_cache__DOT__tag_2_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_3796 = vlSelf->top__DOT__d_cache__DOT__tag_2_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_3797 = vlSelf->top__DOT__d_cache__DOT__tag_2_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_3798 = vlSelf->top__DOT__d_cache__DOT__valid_2_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_3799 = vlSelf->top__DOT__d_cache__DOT__valid_2_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_3800 = vlSelf->top__DOT__d_cache__DOT__valid_2_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_3801 = vlSelf->top__DOT__d_cache__DOT__valid_2_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_3802 = vlSelf->top__DOT__d_cache__DOT__valid_2_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_3803 = vlSelf->top__DOT__d_cache__DOT__valid_2_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_3804 = vlSelf->top__DOT__d_cache__DOT__valid_2_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_3805 = vlSelf->top__DOT__d_cache__DOT__valid_2_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_3806 = vlSelf->top__DOT__d_cache__DOT__valid_2_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_3807 = vlSelf->top__DOT__d_cache__DOT__valid_2_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_3808 = vlSelf->top__DOT__d_cache__DOT__valid_2_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_3809 = vlSelf->top__DOT__d_cache__DOT__valid_2_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_3810 = vlSelf->top__DOT__d_cache__DOT__valid_2_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_3811 = vlSelf->top__DOT__d_cache__DOT__valid_2_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_3812 = vlSelf->top__DOT__d_cache__DOT__valid_2_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_3813 = vlSelf->top__DOT__d_cache__DOT__valid_2_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_3814[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_0[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3814[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_0[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3814[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_0[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3814[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_0[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3815[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_1[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3815[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_1[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3815[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_1[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3815[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_1[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3816[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_2[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3816[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_2[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3816[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_2[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3816[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_2[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3817[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_3[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3817[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_3[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3817[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_3[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3817[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_3[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3818[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_4[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3818[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_4[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3818[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_4[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3818[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_4[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3819[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_5[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3819[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_5[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3819[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_5[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3819[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_5[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3820[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_6[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3820[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_6[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3820[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_6[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3820[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_6[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3821[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_7[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3821[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_7[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3821[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_7[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3821[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_7[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3822[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_8[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3822[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_8[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3822[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_8[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3822[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_8[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3823[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_9[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3823[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_9[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3823[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_9[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3823[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_9[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3824[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_10[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3824[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_10[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3824[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_10[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3824[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_10[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3825[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_11[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3825[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_11[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3825[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_11[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3825[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_11[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3826[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_12[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3826[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_12[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3826[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_12[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3826[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_12[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3827[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_13[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3827[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_13[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3827[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_13[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3827[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_13[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3828[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_14[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3828[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_14[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3828[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_14[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3828[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_14[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3829[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_15[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3829[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_15[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3829[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_15[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3829[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_3_15[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_3830 = vlSelf->top__DOT__d_cache__DOT__tag_3_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_3831 = vlSelf->top__DOT__d_cache__DOT__tag_3_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_3832 = vlSelf->top__DOT__d_cache__DOT__tag_3_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_3833 = vlSelf->top__DOT__d_cache__DOT__tag_3_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_3834 = vlSelf->top__DOT__d_cache__DOT__tag_3_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_3835 = vlSelf->top__DOT__d_cache__DOT__tag_3_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_3836 = vlSelf->top__DOT__d_cache__DOT__tag_3_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_3837 = vlSelf->top__DOT__d_cache__DOT__tag_3_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_3838 = vlSelf->top__DOT__d_cache__DOT__tag_3_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_3839 = vlSelf->top__DOT__d_cache__DOT__tag_3_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_3840 = vlSelf->top__DOT__d_cache__DOT__tag_3_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_3841 = vlSelf->top__DOT__d_cache__DOT__tag_3_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_3842 = vlSelf->top__DOT__d_cache__DOT__tag_3_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_3843 = vlSelf->top__DOT__d_cache__DOT__tag_3_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_3844 = vlSelf->top__DOT__d_cache__DOT__tag_3_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_3845 = vlSelf->top__DOT__d_cache__DOT__tag_3_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_3846 = vlSelf->top__DOT__d_cache__DOT__valid_3_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_3847 = vlSelf->top__DOT__d_cache__DOT__valid_3_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_3848 = vlSelf->top__DOT__d_cache__DOT__valid_3_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_3849 = vlSelf->top__DOT__d_cache__DOT__valid_3_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_3850 = vlSelf->top__DOT__d_cache__DOT__valid_3_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_3851 = vlSelf->top__DOT__d_cache__DOT__valid_3_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_3852 = vlSelf->top__DOT__d_cache__DOT__valid_3_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_3853 = vlSelf->top__DOT__d_cache__DOT__valid_3_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_3854 = vlSelf->top__DOT__d_cache__DOT__valid_3_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_3855 = vlSelf->top__DOT__d_cache__DOT__valid_3_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_3856 = vlSelf->top__DOT__d_cache__DOT__valid_3_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_3857 = vlSelf->top__DOT__d_cache__DOT__valid_3_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_3858 = vlSelf->top__DOT__d_cache__DOT__valid_3_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_3859 = vlSelf->top__DOT__d_cache__DOT__valid_3_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_3860 = vlSelf->top__DOT__d_cache__DOT__valid_3_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_3861 = vlSelf->top__DOT__d_cache__DOT__valid_3_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_3864 = vlSelf->top__DOT__d_cache__DOT__dirty_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_3865 = vlSelf->top__DOT__d_cache__DOT__dirty_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_3866 = vlSelf->top__DOT__d_cache__DOT__dirty_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_3867 = vlSelf->top__DOT__d_cache__DOT__dirty_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_3868 = vlSelf->top__DOT__d_cache__DOT__dirty_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_3869 = vlSelf->top__DOT__d_cache__DOT__dirty_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_3870 = vlSelf->top__DOT__d_cache__DOT__dirty_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_3871 = vlSelf->top__DOT__d_cache__DOT__dirty_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_3872 = vlSelf->top__DOT__d_cache__DOT__dirty_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_3873 = vlSelf->top__DOT__d_cache__DOT__dirty_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_3874 = vlSelf->top__DOT__d_cache__DOT__dirty_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_3875 = vlSelf->top__DOT__d_cache__DOT__dirty_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_3876 = vlSelf->top__DOT__d_cache__DOT__dirty_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_3877 = vlSelf->top__DOT__d_cache__DOT__dirty_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_3878 = vlSelf->top__DOT__d_cache__DOT__dirty_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_3879 = vlSelf->top__DOT__d_cache__DOT__dirty_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_3912 = vlSelf->top__DOT__d_cache__DOT__dirty_3_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_3913 = vlSelf->top__DOT__d_cache__DOT__dirty_3_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_3914 = vlSelf->top__DOT__d_cache__DOT__dirty_3_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_3915 = vlSelf->top__DOT__d_cache__DOT__dirty_3_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_3916 = vlSelf->top__DOT__d_cache__DOT__dirty_3_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_3917 = vlSelf->top__DOT__d_cache__DOT__dirty_3_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_3918 = vlSelf->top__DOT__d_cache__DOT__dirty_3_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_3919 = vlSelf->top__DOT__d_cache__DOT__dirty_3_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_3920 = vlSelf->top__DOT__d_cache__DOT__dirty_3_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_3921 = vlSelf->top__DOT__d_cache__DOT__dirty_3_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_3922 = vlSelf->top__DOT__d_cache__DOT__dirty_3_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_3923 = vlSelf->top__DOT__d_cache__DOT__dirty_3_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_3924 = vlSelf->top__DOT__d_cache__DOT__dirty_3_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_3925 = vlSelf->top__DOT__d_cache__DOT__dirty_3_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_3926 = vlSelf->top__DOT__d_cache__DOT__dirty_3_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_3927 = vlSelf->top__DOT__d_cache__DOT__dirty_3_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_3702 = vlSelf->top__DOT__d_cache__DOT__quene_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_3703 = vlSelf->top__DOT__d_cache__DOT__quene_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_3704 = vlSelf->top__DOT__d_cache__DOT__quene_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_3705 = vlSelf->top__DOT__d_cache__DOT__quene_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_3706 = vlSelf->top__DOT__d_cache__DOT__quene_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_3707 = vlSelf->top__DOT__d_cache__DOT__quene_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_3708 = vlSelf->top__DOT__d_cache__DOT__quene_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_3709 = vlSelf->top__DOT__d_cache__DOT__quene_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_3710 = vlSelf->top__DOT__d_cache__DOT__quene_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_3711 = vlSelf->top__DOT__d_cache__DOT__quene_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_3712 = vlSelf->top__DOT__d_cache__DOT__quene_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_3713 = vlSelf->top__DOT__d_cache__DOT__quene_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_3714 = vlSelf->top__DOT__d_cache__DOT__quene_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_3715 = vlSelf->top__DOT__d_cache__DOT__quene_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_3716 = vlSelf->top__DOT__d_cache__DOT__quene_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_3717 = vlSelf->top__DOT__d_cache__DOT__quene_15;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_3654[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_659[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_659[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3654[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_659[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_659[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3654[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_659[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_659[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3654[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_659[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_659[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3655[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_660[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_660[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3655[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_660[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_660[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3655[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_660[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_660[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3655[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_660[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_660[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3656[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_661[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_661[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3656[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_661[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_661[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3656[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_661[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_661[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3656[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_661[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_661[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3657[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_662[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_662[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3657[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_662[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_662[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3657[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_662[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_662[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3657[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_662[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_662[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3658[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_663[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_663[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3658[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_663[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_663[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3658[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_663[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_663[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3658[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_663[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_663[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3659[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_664[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_664[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3659[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_664[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_664[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3659[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_664[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_664[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3659[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_664[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_664[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3660[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_665[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_665[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3660[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_665[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_665[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3660[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_665[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_665[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3660[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_665[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_665[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3661[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_666[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_666[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3661[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_666[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_666[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3661[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_666[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_666[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3661[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_666[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_666[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3662[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_667[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_667[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3662[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_667[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_667[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3662[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_667[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_667[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3662[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_667[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_667[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3663[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_668[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_668[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3663[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_668[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_668[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3663[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_668[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_668[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3663[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_668[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_668[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3664[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_669[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_669[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3664[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_669[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_669[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3664[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_669[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_669[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3664[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_669[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_669[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3665[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_670[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_670[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3665[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_670[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_670[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3665[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_670[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_670[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3665[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_670[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_670[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3666[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_671[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_671[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3666[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_671[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_671[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3666[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_671[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_671[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3666[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_671[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_671[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3667[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_672[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_672[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3667[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_672[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_672[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3667[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_672[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_672[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3667[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_672[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_672[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3668[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_673[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_673[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3668[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_673[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_673[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3668[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_673[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_673[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3668[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_673[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_673[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3669[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_674[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_674[0U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3669[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_674[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_674[1U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3669[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_674[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_674[2U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3669[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_674[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT___GEN_674[3U]
                                        : vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U])))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3670 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_0
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_675
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_0
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_0
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_0
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_675
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_0)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_3671 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_1
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_676
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_1
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_1
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_1
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_676
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_1)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_3672 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_2
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_677
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_2
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_2
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_2
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_677
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_2)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_3673 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_3
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_678
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_3
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_3
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_3
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_678
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_3)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_3674 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_4
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_679
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_4
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_4
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_4
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_679
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_4)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_3675 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_5
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_680
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_5
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_5
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_5
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_680
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_5)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_3676 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_6
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_681
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_6
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_6
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_6
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_681
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_6)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_3677 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_7
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_682
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_7
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_7
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_7
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_682
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_7)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_3678 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_8
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_683
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_8
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_8
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_8
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_683
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_8)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_3679 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_9
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_684
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_9
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_9
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_9
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_684
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_9)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_3680 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_10
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_685
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_10
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_10
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_10
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_685
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_10)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_3681 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_11
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_686
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_11
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_11
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_11
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_686
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_11)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_3682 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_12
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_687
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_12
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_12
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_12
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_687
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_12)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_3683 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_13
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_688
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_13
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_13
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_13
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_688
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_13)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_3684 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_14
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_689
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_14
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_14
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_14
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_689
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_14)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_3685 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_15
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_690
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_15
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_15
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_0_15
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT___GEN_690
                                      : vlSelf->top__DOT__d_cache__DOT__tag_0_15)))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_3686 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_691)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_691)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3687 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_692)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_692)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3688 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_693)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_693)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3689 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_694)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_694)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3690 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_695)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_695)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3691 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_696)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_696)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3692 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_697)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_697)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3693 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_698)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_698)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3694 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_699)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_699)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3695 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_700)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_700)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3696 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_701)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_701)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3697 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_702)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_702)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3698 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_703)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_703)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3699 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_704)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_704)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3700 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_705)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_705)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3701 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_706)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_706)
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3718[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_739[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_739[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3718[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_739[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_739[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3718[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_739[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_739[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3718[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_739[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_739[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3719[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_740[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_740[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3719[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_740[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_740[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3719[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_740[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_740[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3719[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_740[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_740[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3720[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_741[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_741[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3720[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_741[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_741[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3720[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_741[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_741[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3720[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_741[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_741[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3721[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_742[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_742[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3721[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_742[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_742[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3721[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_742[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_742[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3721[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_742[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_742[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3722[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_743[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_743[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3722[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_743[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_743[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3722[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_743[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_743[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3722[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_743[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_743[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3723[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_744[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_744[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3723[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_744[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_744[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3723[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_744[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_744[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3723[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_744[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_744[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3724[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_745[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_745[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3724[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_745[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_745[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3724[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_745[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_745[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3724[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_745[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_745[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3725[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_746[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_746[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3725[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_746[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_746[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3725[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_746[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_746[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3725[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_746[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_746[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3726[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_747[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_747[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3726[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_747[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_747[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3726[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_747[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_747[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3726[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_747[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_747[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3727[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_748[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_748[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3727[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_748[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_748[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3727[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_748[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_748[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3727[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_748[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_748[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3728[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_749[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_749[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3728[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_749[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_749[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3728[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_749[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_749[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3728[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_749[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_749[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3729[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_750[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_750[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3729[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_750[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_750[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3729[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_750[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_750[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3729[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_750[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_750[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3730[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_751[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_751[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3730[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_751[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_751[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3730[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_751[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_751[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3730[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_751[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_751[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3731[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_752[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_752[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3731[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_752[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_752[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3731[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_752[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_752[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3731[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_752[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_752[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3732[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_753[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_753[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3732[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_753[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_753[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3732[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_753[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_753[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3732[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_753[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_753[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3733[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_754[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_754[0U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3733[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_754[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_754[1U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3733[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_754[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_754[2U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3733[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_754[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT___GEN_754[3U]
                                            : vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U]))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3734 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_0
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_0
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_755
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_0
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_0
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_0
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_755
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_0))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_3735 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_1
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_1
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_756
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_1
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_1
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_1
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_756
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_1))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_3736 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_2
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_2
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_757
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_2
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_2
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_2
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_757
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_2))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_3737 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_3
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_3
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_758
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_3
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_3
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_3
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_758
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_3))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_3738 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_4
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_4
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_759
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_4
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_4
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_4
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_759
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_4))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_3739 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_5
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_5
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_760
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_5
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_5
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_5
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_760
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_5))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_3740 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_6
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_6
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_761
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_6
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_6
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_6
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_761
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_6))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_3741 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_7
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_7
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_762
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_7
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_7
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_7
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_762
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_7))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_3742 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_8
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_8
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_763
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_8
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_8
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_8
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_763
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_8))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_3743 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_9
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_9
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_764
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_9
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_9
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_9
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_764
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_9))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_3744 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_10
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_10
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_765
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_10
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_10
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_10
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_765
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_10))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_3745 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_11
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_11
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_766
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_11
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_11
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_11
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_766
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_11))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_3746 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_12
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_12
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_767
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_12
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_12
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_12
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_767
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_12))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_3747 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_13
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_13
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_768
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_13
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_13
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_13
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_768
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_13))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_3748 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_14
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_14
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_769
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_14
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_14
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_14
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_769
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_14))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_3749 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_15
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_15
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_770
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_1_15
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_1_15
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_15
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT___GEN_770
                                          : vlSelf->top__DOT__d_cache__DOT__tag_1_15))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_3750 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_771)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_771)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3751 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_772)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_772)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3752 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_773)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_773)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3753 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_774)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_774)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3754 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_775)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_775)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3755 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_776)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_776)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3756 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_777)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_777)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3757 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_778)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_778)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3758 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_779)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_779)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3759 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_780)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_780)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3760 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_781)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_781)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3761 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_782)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_782)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3762 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_783)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_783)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3763 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_784)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_784)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3764 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_785)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_785)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3765 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_786)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_786)
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3766[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_803[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_803[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_0[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_0[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3766[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_803[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_803[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_0[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_0[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3766[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_803[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_803[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_0[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_0[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3766[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_803[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_0[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_803[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_0[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_0[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3767[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_804[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_804[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_1[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_1[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3767[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_804[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_804[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_1[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_1[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3767[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_804[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_804[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_1[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_1[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3767[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_804[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_1[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_804[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_1[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_1[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3768[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_805[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_805[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_2[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_2[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3768[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_805[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_805[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_2[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_2[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3768[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_805[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_805[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_2[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_2[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3768[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_805[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_2[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_805[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_2[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_2[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3769[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_806[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_806[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_3[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_3[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3769[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_806[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_806[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_3[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_3[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3769[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_806[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_806[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_3[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_3[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3769[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_806[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_3[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_806[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_3[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_3[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3770[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_807[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_807[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_4[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_4[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3770[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_807[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_807[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_4[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_4[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3770[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_807[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_807[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_4[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_4[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3770[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_807[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_4[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_807[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_4[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_4[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3771[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_808[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_808[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_5[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_5[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3771[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_808[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_808[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_5[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_5[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3771[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_808[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_808[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_5[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_5[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3771[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_808[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_5[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_808[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_5[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_5[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3772[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_809[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_809[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_6[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_6[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3772[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_809[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_809[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_6[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_6[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3772[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_809[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_809[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_6[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_6[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3772[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_809[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_6[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_809[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_6[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_6[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3773[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_810[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_810[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_7[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_7[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3773[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_810[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_810[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_7[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_7[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3773[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_810[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_810[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_7[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_7[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3773[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_810[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_7[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_810[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_7[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_7[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3774[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_811[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_811[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_8[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_8[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3774[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_811[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_811[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_8[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_8[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3774[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_811[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_811[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_8[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_8[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3774[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_811[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_8[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_811[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_8[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_8[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3775[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_812[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_812[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_9[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_9[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3775[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_812[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_812[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_9[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_9[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3775[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_812[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_812[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_9[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_9[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3775[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_812[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_9[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_812[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_9[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_9[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3776[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_813[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_813[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_10[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_10[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3776[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_813[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_813[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_10[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_10[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3776[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_813[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_813[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_10[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_10[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3776[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_813[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_10[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_813[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_10[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_10[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3777[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_814[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_814[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_11[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_11[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3777[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_814[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_814[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_11[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_11[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3777[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_814[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_814[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_11[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_11[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3777[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_814[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_11[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_814[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_11[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_11[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3778[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_815[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_815[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_12[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_12[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3778[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_815[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_815[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_12[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_12[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3778[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_815[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_815[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_12[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_12[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3778[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_815[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_12[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_815[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_12[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_12[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3779[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_816[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_816[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_13[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_13[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3779[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_816[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_816[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_13[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_13[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3779[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_816[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_816[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_13[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_13[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3779[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_816[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_13[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_816[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_13[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_13[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3780[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_817[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_817[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_14[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_14[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3780[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_817[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_817[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_14[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_14[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3780[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_817[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_817[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_14[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_14[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3780[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_817[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_14[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_817[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_14[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_14[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3781[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_818[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_818[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_15[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_15[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3781[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_818[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_818[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_15[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_15[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3781[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_818[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_818[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_15[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_15[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3781[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_818[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_2_15[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_818[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__ram_2_15[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_2_15[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3782 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_0
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_0
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_0
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_819
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_0
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_0
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_0
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_819
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_0)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_3783 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_1
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_1
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_1
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_820
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_1
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_1
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_1
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_820
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_1)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_3784 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_2
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_2
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_2
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_821
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_2
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_2
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_2
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_821
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_2)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_3785 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_3
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_3
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_3
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_822
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_3
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_3
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_3
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_822
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_3)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_3786 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_4
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_4
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_4
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_823
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_4
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_4
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_4
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_823
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_4)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_3787 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_5
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_5
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_5
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_824
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_5
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_5
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_5
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_824
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_5)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_3788 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_6
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_6
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_6
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_825
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_6
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_6
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_6
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_825
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_6)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_3789 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_7
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_7
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_7
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_826
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_7
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_7
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_7
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_826
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_7)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_3790 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_8
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_8
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_8
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_827
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_8
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_8
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_8
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_827
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_8)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_3791 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_9
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_9
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_9
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_828
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_9
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_9
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_9
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_828
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_9)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_3792 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_10
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_10
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_10
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_829
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_10
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_10
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_10
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_829
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_10)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_3793 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_11
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_11
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_11
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_830
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_11
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_11
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_11
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_830
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_11)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_3794 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_12
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_12
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_12
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_831
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_12
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_12
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_12
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_831
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_12)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_3795 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_13
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_13
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_13
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_832
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_13
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_13
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_13
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_832
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_13)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_3796 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_14
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_14
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_14
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_833
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_14
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_14
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_14
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_833
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_14)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_3797 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_2_15
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_15
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_15
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_834
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT__tag_2_15
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_2_15
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_2_15
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT___GEN_834
                                              : vlSelf->top__DOT__d_cache__DOT__tag_2_15)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_2_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_3798 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_0)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_0)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_835)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_0)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_0)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_0)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_835)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_0))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3799 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_1)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_1)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_836)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_1)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_1)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_1)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_836)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_1))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3800 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_2)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_2)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_837)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_2)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_2)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_2)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_837)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_2))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3801 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_3)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_3)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_838)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_3)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_3)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_3)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_838)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_3))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3802 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_4)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_4)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_839)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_4)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_4)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_4)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_839)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_4))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3803 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_5)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_5)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_840)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_5)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_5)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_5)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_840)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_5))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3804 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_6)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_6)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_841)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_6)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_6)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_6)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_841)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_6))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3805 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_7)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_7)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_842)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_7)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_7)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_7)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_842)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_7))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3806 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_8)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_8)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_843)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_8)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_8)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_8)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_843)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_8))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3807 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_9)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_9)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_844)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_9)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_9)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_9)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_844)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_9))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3808 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_10)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_10)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_845)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_10)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_10)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_10)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_845)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_10))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3809 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_11)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_11)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_846)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_11)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_11)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_11)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_846)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_11))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3810 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_12)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_12)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_847)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_12)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_12)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_12)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_847)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_12))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3811 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_13)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_13)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_848)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_13)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_13)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_13)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_848)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_13))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3812 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_14)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_14)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_849)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_14)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_14)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_14)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_849)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_14))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3813 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_15)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_15)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_850)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_15)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_15)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_15)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_850)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_15))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_2_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3814[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_867[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_867[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_0[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3814[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_867[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_867[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_0[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3814[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_867[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_867[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_0[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3814[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_867[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_0[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_867[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_0[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3815[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_868[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_868[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_1[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3815[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_868[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_868[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_1[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3815[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_868[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_868[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_1[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3815[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_868[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_1[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_868[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_1[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3816[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_869[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_869[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_2[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3816[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_869[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_869[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_2[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3816[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_869[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_869[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_2[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3816[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_869[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_2[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_869[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_2[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3817[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_870[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_870[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_3[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3817[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_870[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_870[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_3[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3817[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_870[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_870[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_3[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3817[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_870[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_3[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_870[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_3[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3818[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_871[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_871[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_4[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3818[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_871[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_871[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_4[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3818[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_871[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_871[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_4[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3818[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_871[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_4[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_871[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_4[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3819[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_872[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_872[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_5[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3819[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_872[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_872[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_5[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3819[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_872[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_872[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_5[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3819[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_872[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_5[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_872[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_5[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3820[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_873[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_873[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_6[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3820[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_873[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_873[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_6[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3820[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_873[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_873[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_6[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3820[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_873[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_6[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_873[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_6[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3821[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_874[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_874[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_7[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3821[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_874[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_874[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_7[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3821[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_874[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_874[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_7[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3821[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_874[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_7[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_874[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_7[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3822[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_875[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_875[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_8[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3822[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_875[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_875[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_8[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3822[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_875[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_875[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_8[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3822[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_875[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_8[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_875[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_8[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3823[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_876[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_876[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_9[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3823[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_876[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_876[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_9[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3823[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_876[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_876[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_9[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3823[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_876[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_9[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_876[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_9[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3824[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_877[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_877[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_10[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3824[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_877[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_877[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_10[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3824[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_877[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_877[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_10[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3824[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_877[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_10[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_877[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_10[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3825[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_878[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_878[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_11[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3825[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_878[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_878[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_11[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3825[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_878[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_878[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_11[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3825[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_878[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_11[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_878[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_11[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3826[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_879[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_879[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_12[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3826[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_879[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_879[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_12[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3826[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_879[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_879[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_12[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3826[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_879[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_12[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_879[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_12[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3827[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_880[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_880[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_13[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3827[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_880[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_880[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_13[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3827[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_880[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_880[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_13[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3827[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_880[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_13[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_880[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_13[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3828[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_881[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_881[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_14[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3828[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_881[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_881[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_14[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3828[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_881[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_881[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_14[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3828[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_881[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_14[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_881[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_14[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3829[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[0U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[0U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_882[0U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[0U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[0U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[0U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_882[0U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_15[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3829[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[1U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[1U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_882[1U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[1U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[1U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[1U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_882[1U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_15[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3829[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[2U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[2U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_882[2U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[2U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[2U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[2U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_882[2U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_15[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3829[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[3U]
                        : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[3U]
                            : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_882[3U]
                                    : ((0U == (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                        ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[3U]
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[3U]
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? vlSelf->top__DOT__d_cache__DOT__ram_3_15[3U]
                                                : vlSelf->top__DOT__d_cache__DOT___GEN_882[3U])))))))
                    : vlSelf->top__DOT__d_cache__DOT__ram_3_15[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_3830 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_0
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_0
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_0
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_0
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_883
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_0
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_0
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_0
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_883)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_3831 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_1
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_1
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_1
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_1
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_884
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_1
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_1
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_1
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_884)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_3832 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_2
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_2
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_2
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_2
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_885
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_2
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_2
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_2
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_885)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_3833 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_3
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_3
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_3
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_3
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_886
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_3
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_3
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_3
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_886)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_3834 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_4
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_4
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_4
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_4
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_887
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_4
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_4
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_4
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_887)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_3835 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_5
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_5
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_5
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_5
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_888
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_5
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_5
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_5
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_888)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_3836 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_6
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_6
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_6
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_6
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_889
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_6
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_6
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_6
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_889)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_3837 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_7
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_7
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_7
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_7
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_890
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_7
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_7
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_7
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_890)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_3838 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_8
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_8
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_8
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_8
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_891
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_8
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_8
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_8
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_891)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_3839 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_9
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_9
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_9
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_9
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_892
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_9
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_9
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_9
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_892)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_3840 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_10
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_10
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_10
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_10
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_893
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_10
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_10
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_10
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_893)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_3841 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_11
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_11
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_11
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_11
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_894
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_11
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_11
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_11
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_894)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_3842 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_12
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_12
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_12
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_12
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_895
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_12
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_12
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_12
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_895)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_3843 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_13
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_13
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_13
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_13
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_896
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_13
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_13
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_13
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_896)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_3844 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_14
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_14
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_14
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_14
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_897
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_14
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_14
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_14
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_897)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_3845 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_3_15
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_15
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_15
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_15
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? vlSelf->top__DOT__d_cache__DOT___GEN_898
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__d_cache__DOT__tag_3_15
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? vlSelf->top__DOT__d_cache__DOT__tag_3_15
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? vlSelf->top__DOT__d_cache__DOT__tag_3_15
                                              : vlSelf->top__DOT__d_cache__DOT___GEN_898)))))))
                  : vlSelf->top__DOT__d_cache__DOT__tag_3_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_3846 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_0)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_0)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_0)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_899)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_0)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_0)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_0)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_899))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3847 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_1)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_1)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_1)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_900)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_1)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_1)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_1)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_900))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3848 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_2)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_2)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_2)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_901)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_2)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_2)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_2)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_901))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3849 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_3)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_3)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_3)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_902)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_3)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_3)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_3)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_902))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3850 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_4)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_4)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_4)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_903)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_4)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_4)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_4)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_903))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3851 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_5)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_5)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_5)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_904)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_5)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_5)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_5)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_904))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3852 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_6)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_6)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_6)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_905)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_6)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_6)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_6)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_905))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3853 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_7)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_7)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_7)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_906)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_7)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_7)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_7)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_906))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3854 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_8)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_8)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_8)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_907)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_8)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_8)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_8)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_907))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3855 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_9)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_9)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_9)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_908)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_9)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_9)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_9)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_908))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3856 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_10)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_10)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_10)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_909)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_10)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_10)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_10)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_909))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3857 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_11)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_11)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_11)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_910)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_11)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_11)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_11)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_910))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3858 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_12)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_12)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_12)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_911)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_12)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_12)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_12)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_911))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3859 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_13)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_13)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_13)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_912)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_13)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_13)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_13)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_912))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3860 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_14)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_14)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_14)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_913)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_14)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_14)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_14)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_913))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3861 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_15)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_15)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_15)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_914)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_15)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_15)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_15)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_914))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_3_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3864 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3865 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((1U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3866 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((2U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3867 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((3U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3868 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((4U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3869 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((5U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3870 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((6U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3871 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((7U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3872 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((8U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3873 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((9U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3874 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((0xaU 
                                              != (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3875 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((0xbU 
                                              != (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3876 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((0xcU 
                                              != (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3877 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((0xdU 
                                              != (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3878 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((0xeU 
                                              != (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3879 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                          ? ((0xfU 
                                              != (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                             & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15))
                                          : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15))
                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3912 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_0)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_0)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_0)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_0)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_0)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_0)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_0)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((0U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_0))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_0)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3913 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_1)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_1)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_1)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_1)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_1)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_1)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_1)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((1U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_1))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_1)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3914 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_2)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_2)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_2)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_2)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_2)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_2)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_2)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((2U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_2))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_2)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3915 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_3)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_3)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_3)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_3)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_3)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_3)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_3)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((3U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_3))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_3)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3916 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_4)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_4)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_4)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_4)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_4)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_4)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_4)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((4U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_4))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_4)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3917 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_5)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_5)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_5)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_5)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_5)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_5)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_5)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((5U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_5))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_5)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3918 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_6)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_6)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_6)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_6)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_6)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_6)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_6)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((6U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_6))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_6)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3919 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_7)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_7)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_7)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_7)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_7)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_7)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_7)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((7U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_7))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_7)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3920 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_8)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_8)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_8)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_8)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_8)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_8)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_8)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((8U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_8))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_8)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3921 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_9)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_9)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_9)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_9)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_9)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_9)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_9)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((9U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_9))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_9)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3922 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_10)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_10)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_10)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_10)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_10)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_10)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_10)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((0xaU 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_10))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_10)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3923 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_11)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_11)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_11)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_11)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_11)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_11)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_11)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((0xbU 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_11))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_11)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3924 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_12)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_12)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_12)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_12)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_12)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_12)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_12)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((0xcU 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_12))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_12)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3925 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_13)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_13)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_13)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_13)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_13)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_13)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_13)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((0xdU 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_13))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_13)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3926 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_14)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_14)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_14)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_14)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_14)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_14)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_14)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((0xeU 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_14))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_14)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3927 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_15)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_15)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_15)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_15)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_15)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_15)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_15)
                                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                  ? 
                                                 ((0xfU 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_15))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_15)))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_3_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3702 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_723)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_787)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_851)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_915)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_723)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_787)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_851)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_915))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3703 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_724)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_788)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_852)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_916)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_724)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_788)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_852)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_916))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3704 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_725)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_789)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_853)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_917)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_725)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_789)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_853)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_917))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3705 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_726)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_790)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_854)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_918)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_726)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_790)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_854)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_918))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3706 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_727)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_791)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_855)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_919)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_727)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_791)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_855)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_919))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3707 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_728)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_792)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_856)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_920)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_728)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_792)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_856)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_920))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3708 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_729)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_793)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_857)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_921)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_729)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_793)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_857)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_921))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3709 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_730)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_794)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_858)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_922)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_730)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_794)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_858)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_922))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3710 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_731)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_795)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_859)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_923)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_731)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_795)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_859)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_923))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3711 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_732)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_796)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_860)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_924)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_732)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_796)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_860)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_924))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3712 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_733)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_797)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_861)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_925)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_733)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_797)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_861)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_925))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3713 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_734)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_798)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_862)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_926)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_734)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_798)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_862)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_926))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3714 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_735)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_799)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_863)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_927)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_735)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_799)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_863)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_927))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3715 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_736)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_800)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_864)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_928)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_736)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_800)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_864)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_928))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3716 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_737)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_801)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_865)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_929)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_737)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_801)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_865)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_929))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_3717 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_738)
                      : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_802)
                          : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_866)
                              : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                  ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_930)
                                  : ((0U == (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_738)
                                      : ((1U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_802)
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                >> 6U)))
                                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_866)
                                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_930))))))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15)));
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_3027 = ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                                  ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                                   ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                                    ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                                     ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                          >> 6U)))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                                       ? 
                                                      (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15)) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xf0U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                                >> 4U)) 
                                                                             << 4U)))))
                                                       : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                           >> 6U)))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                                        ? 
                                                       (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_47)) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0xf0U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                                >> 4U)) 
                                                                              << 4U)))))
                                                        : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                            >> 6U)))
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                                         ? 
                                                        (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_79)) 
                                                          << 8U) 
                                                         | (QData)((IData)(
                                                                           (0xf0U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                                >> 4U)) 
                                                                               << 4U)))))
                                                         : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                         ? 
                                                        (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_111)) 
                                                          << 8U) 
                                                         | (QData)((IData)(
                                                                           (0xf0U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                                >> 4U)) 
                                                                               << 4U)))))
                                                         : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))))))))));
    VL_EXTEND_WQ(128,64, __Vtemp5935, (((QData)((IData)(
                                                        vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]))));
    if ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        __Vtemp5941[0U] = ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]
                            : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]
                                    : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                        ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]
                                        : ((0U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_150[0U]
                                                : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                                    ? 
                                                   vlSelf->top__DOT__d_cache__DOT___GEN_198[0U]
                                                    : 
                                                   vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                        >> 6U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                                     ? 
                                                    vlSelf->top__DOT__d_cache__DOT___GEN_246[0U]
                                                     : 
                                                    vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                     ? 
                                                    vlSelf->top__DOT__d_cache__DOT___GEN_294[0U]
                                                     : 
                                                    vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]))))))));
        __Vtemp5941[1U] = ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]
                            : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]
                                    : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                        ? vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]
                                        : ((0U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_150[1U]
                                                : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                                    ? 
                                                   vlSelf->top__DOT__d_cache__DOT___GEN_198[1U]
                                                    : 
                                                   vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                        >> 6U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                                     ? 
                                                    vlSelf->top__DOT__d_cache__DOT___GEN_246[1U]
                                                     : 
                                                    vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                     ? 
                                                    vlSelf->top__DOT__d_cache__DOT___GEN_294[1U]
                                                     : 
                                                    vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]))))))));
        __Vtemp5941[2U] = ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]
                            : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]
                                    : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                        ? vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]
                                        : ((0U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_150[2U]
                                                : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                                    ? 
                                                   vlSelf->top__DOT__d_cache__DOT___GEN_198[2U]
                                                    : 
                                                   vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                        >> 6U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                                     ? 
                                                    vlSelf->top__DOT__d_cache__DOT___GEN_246[2U]
                                                     : 
                                                    vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                     ? 
                                                    vlSelf->top__DOT__d_cache__DOT___GEN_294[2U]
                                                     : 
                                                    vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]))))))));
        __Vtemp5941[3U] = ((1U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                            ? vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]
                            : ((2U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]
                                : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                    ? vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]
                                    : ((3U == (3U & (IData)(vlSelf->top__DOT__d_cache__DOT___unuse_way_T_7)))
                                        ? vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]
                                        : ((0U == (3U 
                                                   & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                      >> 6U)))
                                            ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                                ? vlSelf->top__DOT__d_cache__DOT___GEN_150[3U]
                                                : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                    >> 6U)))
                                                ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                                    ? 
                                                   vlSelf->top__DOT__d_cache__DOT___GEN_198[3U]
                                                    : 
                                                   vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_722) 
                                                        >> 6U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1010)
                                                     ? 
                                                    vlSelf->top__DOT__d_cache__DOT___GEN_246[3U]
                                                     : 
                                                    vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_1323)
                                                     ? 
                                                    vlSelf->top__DOT__d_cache__DOT___GEN_294[3U]
                                                     : 
                                                    vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]))))))));
    } else {
        __Vtemp5941[0U] = ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                            ? (((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                 ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                     ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                     : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                        & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))
                                 : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                    & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                        : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                           & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))))
                                ? __Vtemp5935[0U] : 
                               vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]);
        __Vtemp5941[1U] = ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                            ? (((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                 ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                     ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                     : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                        & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))
                                 : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                    & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                        : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                           & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))))
                                ? __Vtemp5935[1U] : 
                               vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]);
        __Vtemp5941[2U] = ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                            ? (((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                 ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                     ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                     : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                        & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))
                                 : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                    & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                        : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                           & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))))
                                ? __Vtemp5935[2U] : 
                               vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]);
        __Vtemp5941[3U] = ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                            ? (((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                 ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                     ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                     : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                                        & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))
                                 : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                    & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                        ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                        : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                           & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))))
                                ? __Vtemp5935[3U] : 
                               vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]);
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_3309[0U] = 
        __Vtemp5941[0U];
    vlSelf->top__DOT__d_cache__DOT___GEN_3309[1U] = 
        __Vtemp5941[1U];
    vlSelf->top__DOT__d_cache__DOT___GEN_3309[2U] = 
        __Vtemp5941[2U];
    vlSelf->top__DOT__d_cache__DOT___GEN_3309[3U] = 
        __Vtemp5941[3U];
    if (vlSelf->top__DOT__d_cache__DOT__way0_hit) {
        vlSelf->top__DOT__d_cache__DOT___GEN_539 = 
            ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_540 = 
            ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_541 = 
            ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_542 = 
            ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_543 = 
            ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_544 = 
            ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_545 = 
            ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_546 = 
            ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_547 = 
            ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_548 = 
            ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_549 = 
            ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_539 = vlSelf->top__DOT__d_cache__DOT__dirty_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_540 = vlSelf->top__DOT__d_cache__DOT__dirty_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_541 = vlSelf->top__DOT__d_cache__DOT__dirty_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_542 = vlSelf->top__DOT__d_cache__DOT__dirty_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_543 = vlSelf->top__DOT__d_cache__DOT__dirty_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_544 = vlSelf->top__DOT__d_cache__DOT__dirty_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_545 = vlSelf->top__DOT__d_cache__DOT__dirty_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_546 = vlSelf->top__DOT__d_cache__DOT__dirty_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_547 = vlSelf->top__DOT__d_cache__DOT__dirty_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_548 = vlSelf->top__DOT__d_cache__DOT__dirty_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_549 = vlSelf->top__DOT__d_cache__DOT__dirty_0_10;
    }
}
