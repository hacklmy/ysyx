// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);
void Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &Regfile);
void Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Variables
    CData/*6:0*/ top__DOT__IDU__DOT___inst_now_T_144;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_now_T_159;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_now_T_174;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_now_T_189;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_140;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_155;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_170;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_185;
    CData/*0:0*/ top__DOT__EXU__DOT___alu_res_T_4;
    CData/*0:0*/ top__DOT__EXU__DOT___alu_res_T_10;
    VlWide<4>/*127:0*/ __Vtemp115;
    VlWide<4>/*127:0*/ __Vtemp116;
    VlWide<4>/*127:0*/ __Vtemp118;
    VlWide<4>/*127:0*/ __Vtemp119;
    VlWide<4>/*127:0*/ __Vtemp120;
    VlWide<4>/*127:0*/ __Vtemp121;
    VlWide<4>/*127:0*/ __Vtemp122;
    VlWide<4>/*127:0*/ __Vtemp123;
    VlWide<4>/*127:0*/ __Vtemp124;
    VlWide<4>/*127:0*/ __Vtemp125;
    VlWide<4>/*127:0*/ __Vtemp126;
    VlWide<4>/*127:0*/ __Vtemp127;
    VlWide<4>/*127:0*/ __Vtemp128;
    VlWide<4>/*127:0*/ __Vtemp129;
    VlWide<4>/*127:0*/ __Vtemp130;
    QData/*63:0*/ top__DOT__EXU__DOT___alu_res_T_20;
    QData/*63:0*/ top__DOT__EXU__DOT___alu_res_T_35;
    QData/*63:0*/ top__DOT__EXU__DOT___alu_res_T_45;
    QData/*63:0*/ top__DOT__EXU__DOT___alu_res_T_50;
    QData/*63:0*/ top__DOT__EXU__DOT___alu_res_T_118;
    // Body
    vlSelf->io_step = vlSelf->top__DOT__diff_step;
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0U] 
        = vlSelf->top__DOT__Register__DOT__Reg[0U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[1U] 
        = vlSelf->top__DOT__Register__DOT__Reg[1U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[2U] 
        = vlSelf->top__DOT__Register__DOT__Reg[2U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[3U] 
        = vlSelf->top__DOT__Register__DOT__Reg[3U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[4U] 
        = vlSelf->top__DOT__Register__DOT__Reg[4U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[5U] 
        = vlSelf->top__DOT__Register__DOT__Reg[5U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[6U] 
        = vlSelf->top__DOT__Register__DOT__Reg[6U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[7U] 
        = vlSelf->top__DOT__Register__DOT__Reg[7U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[8U] 
        = vlSelf->top__DOT__Register__DOT__Reg[8U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[9U] 
        = vlSelf->top__DOT__Register__DOT__Reg[9U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0xaU] 
        = vlSelf->top__DOT__Register__DOT__Reg[0xaU];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0xbU] 
        = vlSelf->top__DOT__Register__DOT__Reg[0xbU];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0xcU] 
        = vlSelf->top__DOT__Register__DOT__Reg[0xcU];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0xdU] 
        = vlSelf->top__DOT__Register__DOT__Reg[0xdU];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0xeU] 
        = vlSelf->top__DOT__Register__DOT__Reg[0xeU];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0xfU] 
        = vlSelf->top__DOT__Register__DOT__Reg[0xfU];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x10U] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x10U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x11U] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x11U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x12U] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x12U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x13U] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x13U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x14U] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x14U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x15U] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x15U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x16U] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x16U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x17U] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x17U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x18U] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x18U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x19U] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x19U];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x1aU] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x1aU];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x1bU] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x1bU];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x1cU] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x1cU];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x1dU] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x1dU];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x1eU] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x1eU];
    vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[0x1fU] 
        = vlSelf->top__DOT__Register__DOT__Reg[0x1fU];
    if (vlSelf->top__DOT__LSU__DOT__ren) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__LSU__DOT__maddr, vlSelf->__Vtask_pmem_read__2__Rdata);
        vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata 
            = vlSelf->__Vtask_pmem_read__2__Rdata;
    }
    if (((IData)(vlSelf->top__DOT__LSU__DOT__wen) & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__LSU__DOT__maddr, vlSelf->top__DOT__LSU__DOT__store_data, (IData)(vlSelf->top__DOT__LSU__DOT__wstrb));
    }
    vlSelf->top__DOT__LSU_io_ms_rf_we = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_we) 
                                         & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid));
    vlSelf->top__DOT__EXU__DOT__divuw_res = VL_DIV_III(32, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), (IData)(vlSelf->top__DOT__EXU__DOT__src2_value));
    vlSelf->top__DOT__EXU__DOT__remw_res = VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), (IData)(vlSelf->top__DOT__EXU__DOT__src2_value));
    vlSelf->top__DOT__EXU__DOT__remuw_res = VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), (IData)(vlSelf->top__DOT__EXU__DOT__src2_value));
    vlSelf->top__DOT__EXU__DOT__srl_res = (vlSelf->top__DOT__EXU__DOT__src1_value 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp115, vlSelf->top__DOT__EXU__DOT__src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp116, __Vtemp115, 
                  (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    vlSelf->top__DOT__EXU__DOT__sll_res[0U] = __Vtemp116[0U];
    vlSelf->top__DOT__EXU__DOT__sll_res[1U] = __Vtemp116[1U];
    vlSelf->top__DOT__EXU__DOT__sll_res[2U] = __Vtemp116[2U];
    vlSelf->top__DOT__EXU__DOT__sll_res[3U] = (0x7fffffffU 
                                               & __Vtemp116[3U]);
    vlSelf->top__DOT__EXU__DOT___mluw_res_T_2 = ((QData)((IData)(vlSelf->top__DOT__EXU__DOT__src1_value)) 
                                                 * (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    vlSelf->top__DOT__EXU__DOT___divw_res_T_4 = (0x1ffffffffULL 
                                                 & VL_DIVS_QQQ(33, 
                                                               (0x1ffffffffULL 
                                                                & VL_EXTENDS_QI(33,32, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value))), 
                                                               (0x1ffffffffULL 
                                                                & VL_EXTENDS_QI(33,32, (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))));
    top__DOT__EXU__DOT___alu_res_T_45 = (((QData)((IData)(
                                                          ((VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))) 
                                                            >> 0x1fU)
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))))));
    vlSelf->top__DOT__EXU__DOT__srlw_res = ((IData)(vlSelf->top__DOT__EXU__DOT__src1_value) 
                                            >> (0x1fU 
                                                & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    vlSelf->top__DOT__EXU__DOT__sllw_res = (0x7fffffffffffffffULL 
                                            & ((QData)((IData)(vlSelf->top__DOT__EXU__DOT__src1_value)) 
                                               << (0x1fU 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))));
    vlSelf->top__DOT__EXU__DOT__sra_res = VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__EXU__DOT__src1_value, 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    vlSelf->top__DOT__EXU__DOT__or_res = (vlSelf->top__DOT__EXU__DOT__src1_value 
                                          | vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__EXU__DOT__xor_res = (vlSelf->top__DOT__EXU__DOT__src1_value 
                                           ^ vlSelf->top__DOT__EXU__DOT__src2_value);
    top__DOT__EXU__DOT___alu_res_T_4 = (vlSelf->top__DOT__EXU__DOT__src1_value 
                                        < vlSelf->top__DOT__EXU__DOT__src2_value);
    top__DOT__EXU__DOT___alu_res_T_10 = VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__EXU__DOT__sub_res = (vlSelf->top__DOT__EXU__DOT__src1_value 
                                           - vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__EXU__DOT__and_res = (vlSelf->top__DOT__EXU__DOT__src1_value 
                                           & vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__EXU__DOT__add_res = (vlSelf->top__DOT__EXU__DOT__src1_value 
                                           + vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__IDU__DOT___Wmask_T_10 = ((0x1023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                                ? 3U
                                                : (
                                                   (0x23U 
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
                                                     : 0U)));
    vlSelf->top__DOT__Register_io_rdata1 = ((0U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 0xfU)))
                                             ? 0ULL
                                             : vlSelf->top__DOT__Register__DOT__Reg
                                            [(0x1fU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 0xfU))]);
    vlSelf->top__DOT__Register_io_rdata2 = ((0U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 0x14U)))
                                             ? 0ULL
                                             : vlSelf->top__DOT__Register__DOT__Reg
                                            [(0x1fU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 0x14U))]);
    vlSelf->top__DOT__IDU__DOT__src1_is_pc = ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                              | ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                 | ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                    | ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                       | ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                          | ((0x4063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                             | ((0x6063U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                                | (0x7063U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__IDU__DOT__inst)))))))));
    top__DOT__IDU__DOT___inst_now_T_144 = ((0x200703bU 
                                            == (0xfe00707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst))
                                            ? 0x32U
                                            : ((0x2007033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                                ? 0x33U
                                                : (
                                                   (0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0x34U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x37U
                                                     : 
                                                    ((0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x38U
                                                      : 
                                                     ((0x40005033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x39U
                                                       : 
                                                      ((0x2013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x36U
                                                        : 
                                                       ((0x6003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x3aU
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x3bU
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0x3cU
                                                           : 
                                                          ((0x73U 
                                                            == vlSelf->top__DOT__IDU__DOT__inst)
                                                            ? 0x3dU
                                                            : 
                                                           ((0x30200073U 
                                                             == vlSelf->top__DOT__IDU__DOT__inst)
                                                             ? 0x3eU
                                                             : 
                                                            ((0x1073U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? 0x3fU
                                                              : 
                                                             ((0x2073U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__IDU__DOT__inst))
                                                               ? 0x46U
                                                               : 
                                                              ((0x3073U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                                                ? 0x47U
                                                                : 0U)))))))))))))));
    top__DOT__IDU__DOT___inst_type_T_140 = ((0x200503bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? 0x41U
                                             : ((0x200703bU 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0x41U
                                                 : 
                                                ((0x2007033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 0x41U
                                                  : 
                                                 ((0x2006033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0x41U
                                                   : 
                                                  ((0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0x41U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x41U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x41U
                                                      : 
                                                     ((0x2013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x40U
                                                       : 
                                                      ((0x6003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x40U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x40U
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x45U
                                                          : 
                                                         ((0x73U 
                                                           == vlSelf->top__DOT__IDU__DOT__inst)
                                                           ? 0x40U
                                                           : 
                                                          ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0x40U
                                                            : 
                                                           ((0x2073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0x40U
                                                             : 
                                                            ((0x3073U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? 0x40U
                                                              : 0U)))))))))))))));
    vlSelf->io_pc = vlSelf->top__DOT__IFU__DOT__fs_pc;
    vlSelf->top__DOT__IFU__DOT__seq_pc = (4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc);
    if (vlSelf->top__DOT__IFU__DOT__fs_valid) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__IFU__DOT__fs_pc, vlSelf->__Vtask_pmem_read__1__Rdata);
        vlSelf->top__DOT__IFU__DOT__inst_read_Rdata 
            = vlSelf->__Vtask_pmem_read__1__Rdata;
    }
    Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs);
    top__DOT__EXU__DOT___alu_res_T_50 = (((QData)((IData)(
                                                          ((vlSelf->top__DOT__EXU__DOT__srlw_res 
                                                            >> 0x1fU)
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__srlw_res)));
    top__DOT__EXU__DOT___alu_res_T_35 = (((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__EXU__DOT__sllw_res 
                                                                       >> 0x1fU)))
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__sllw_res)));
    top__DOT__EXU__DOT___alu_res_T_20 = (((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__EXU__DOT__add_res 
                                                                       >> 0x1fU)))
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__add_res)));
    top__DOT__IDU__DOT___inst_now_T_159 = ((0x5063U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst))
                                            ? 0x2bU
                                            : ((0x4063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                                ? 0x2cU
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0x2dU
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x27U
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x24U
                                                      : 
                                                     ((0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x25U
                                                       : 
                                                      ((0x2000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x11U
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x12U
                                                         : 
                                                        ((0x200403bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x13U
                                                          : 
                                                         ((0x200603bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0x14U
                                                           : 
                                                          ((0x4033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0x2eU
                                                            : 
                                                           ((0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0x2fU
                                                             : 
                                                            ((0x2005033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? 0x30U
                                                              : 
                                                             ((0x2004033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__IDU__DOT__inst))
                                                               ? 0x31U
                                                               : 
                                                              ((0x200503bU 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                                                ? 0x35U
                                                                : (IData)(top__DOT__IDU__DOT___inst_now_T_144))))))))))))))));
    top__DOT__IDU__DOT___inst_type_T_155 = ((0x2033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? 0x41U
                                             : ((0x5063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0x45U
                                                 : 
                                                ((0x4063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 0x45U
                                                  : 
                                                 ((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0x45U
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0x44U
                                                    : 
                                                   ((0x1003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x40U
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x40U
                                                      : 
                                                     ((0x2000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x41U
                                                       : 
                                                      ((0x200003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x41U
                                                        : 
                                                       ((0x200403bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x41U
                                                         : 
                                                        ((0x200603bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x41U
                                                          : 
                                                         ((0x4033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0x41U
                                                           : 
                                                          ((0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0x40U
                                                            : 
                                                           ((0x2005033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0x41U
                                                             : 
                                                            ((0x2004033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? 0x41U
                                                              : (IData)(top__DOT__IDU__DOT___inst_type_T_140))))))))))))))));
    vlSelf->io_inst = (IData)(vlSelf->top__DOT__IFU__DOT__inst_read_Rdata);
    top__DOT__EXU__DOT___alu_res_T_118 = ((8U == vlSelf->top__DOT__EXU__DOT__inst_now)
                                           ? vlSelf->top__DOT__EXU__DOT__and_res
                                           : ((0xaU 
                                               == vlSelf->top__DOT__EXU__DOT__inst_now)
                                               ? vlSelf->top__DOT__EXU__DOT__xor_res
                                               : ((0x2eU 
                                                   == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                   ? vlSelf->top__DOT__EXU__DOT__xor_res
                                                   : 
                                                  ((0x2fU 
                                                    == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                    ? vlSelf->top__DOT__EXU__DOT__or_res
                                                    : 
                                                   ((0xbU 
                                                     == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                     ? vlSelf->top__DOT__EXU__DOT__or_res
                                                     : 
                                                    ((0x15U 
                                                      == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                      ? vlSelf->top__DOT__EXU__DOT__sra_res
                                                      : 
                                                     ((0xfU 
                                                       == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                       ? vlSelf->top__DOT__EXU__DOT__add_res
                                                       : 
                                                      ((0x10U 
                                                        == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                        ? top__DOT__EXU__DOT___alu_res_T_20
                                                        : 
                                                       ((0xeU 
                                                         == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                         ? vlSelf->top__DOT__EXU__DOT__sub_res
                                                         : 
                                                        ((0xcU 
                                                          == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                          ? top__DOT__EXU__DOT___alu_res_T_20
                                                          : 
                                                         ((0x1fU 
                                                           == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                           ? (QData)((IData)(top__DOT__EXU__DOT___alu_res_T_10))
                                                           : 
                                                          ((0x36U 
                                                            == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                            ? (QData)((IData)(top__DOT__EXU__DOT___alu_res_T_10))
                                                            : 
                                                           ((0x1eU 
                                                             == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                             ? (QData)((IData)(top__DOT__EXU__DOT___alu_res_T_4))
                                                             : 
                                                            ((0x20U 
                                                              == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                              ? (QData)((IData)(top__DOT__EXU__DOT___alu_res_T_4))
                                                              : 
                                                             ((6U 
                                                               == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                               ? 
                                                              (4ULL 
                                                               + vlSelf->top__DOT__EXU__DOT__es_pc)
                                                               : 
                                                              ((5U 
                                                                == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                ? 
                                                               (4ULL 
                                                                + vlSelf->top__DOT__EXU__DOT__es_pc)
                                                                : 
                                                               ((4U 
                                                                 == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                 ? vlSelf->top__DOT__EXU__DOT__src2_value
                                                                 : 
                                                                ((3U 
                                                                  == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                  ? vlSelf->top__DOT__EXU__DOT__add_res
                                                                  : 
                                                                 ((1U 
                                                                   == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                                   ? vlSelf->top__DOT__EXU__DOT__add_res
                                                                   : 0ULL)))))))))))))))))));
    top__DOT__IDU__DOT___inst_now_T_174 = ((0x6033U 
                                            == (0xfe00707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst))
                                            ? 0xbU : 
                                           ((0x4013U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? 0xaU
                                             : ((0x7033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 8U
                                                 : 
                                                ((0x7013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 9U
                                                  : 
                                                 ((0x4000003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0xdU
                                                   : 
                                                  ((0x103bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0x16U
                                                    : 
                                                   ((0x1013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x17U
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x18U
                                                      : 
                                                     ((0x101bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x19U
                                                       : 
                                                      ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x1aU
                                                        : 
                                                       ((0x501bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x1bU
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x1cU
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0x1dU
                                                           : 
                                                          ((0x3033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0x1eU
                                                            : 
                                                           ((0x2033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0x1fU
                                                             : (IData)(top__DOT__IDU__DOT___inst_now_T_159))))))))))))))));
    top__DOT__IDU__DOT___inst_type_T_170 = ((0x23U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? 0x44U
                                             : ((0x6033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0x41U
                                                 : 
                                                ((0x4013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 0x40U
                                                  : 
                                                 ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0x41U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0x40U
                                                    : 
                                                   ((0x4000003bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x41U
                                                     : 
                                                    ((0x103bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x41U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x40U
                                                       : 
                                                      ((0x5013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x40U
                                                        : 
                                                       ((0x101bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x40U
                                                         : 
                                                        ((0x4000501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x40U
                                                          : 
                                                         ((0x501bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0x40U
                                                           : 
                                                          ((0x4000503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0x41U
                                                            : 
                                                           ((0x503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0x41U
                                                             : 
                                                            ((0x3033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? 0x41U
                                                              : (IData)(top__DOT__IDU__DOT___inst_type_T_155))))))))))))))));
    VL_EXTEND_WQ(127,64, __Vtemp118, (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__EXU__DOT___divw_res_T_4 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT___divw_res_T_4))));
    VL_EXTEND_WQ(127,64, __Vtemp119, (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__EXU__DOT___mluw_res_T_2 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT___mluw_res_T_2))));
    VL_EXTEND_WQ(128,64, __Vtemp120, vlSelf->top__DOT__EXU__DOT__src1_value);
    VL_EXTEND_WQ(128,64, __Vtemp121, vlSelf->top__DOT__EXU__DOT__src2_value);
    VL_MUL_W(4, __Vtemp122, __Vtemp120, __Vtemp121);
    VL_EXTEND_WQ(127,64, __Vtemp123, (((QData)((IData)(
                                                       __Vtemp122[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vtemp122[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp124, top__DOT__EXU__DOT___alu_res_T_50);
    VL_EXTEND_WQ(127,64, __Vtemp125, top__DOT__EXU__DOT___alu_res_T_45);
    VL_EXTEND_WQ(127,64, __Vtemp126, top__DOT__EXU__DOT___alu_res_T_50);
    VL_EXTEND_WQ(127,64, __Vtemp127, top__DOT__EXU__DOT___alu_res_T_45);
    VL_EXTEND_WQ(127,64, __Vtemp128, top__DOT__EXU__DOT___alu_res_T_35);
    VL_EXTEND_WQ(127,64, __Vtemp129, vlSelf->top__DOT__EXU__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp130, ((0x16U == vlSelf->top__DOT__EXU__DOT__inst_now)
                                       ? top__DOT__EXU__DOT___alu_res_T_35
                                       : ((0xdU == vlSelf->top__DOT__EXU__DOT__inst_now)
                                           ? (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__EXU__DOT__sub_res 
                                                                            >> 0x1fU)))
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__sub_res)))
                                           : ((9U == vlSelf->top__DOT__EXU__DOT__inst_now)
                                               ? vlSelf->top__DOT__EXU__DOT__and_res
                                               : top__DOT__EXU__DOT___alu_res_T_118))));
    if ((0x13U == vlSelf->top__DOT__EXU__DOT__inst_now)) {
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[0U] 
            = __Vtemp118[0U];
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[1U] 
            = __Vtemp118[1U];
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[2U] 
            = __Vtemp118[2U];
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[3U] 
            = __Vtemp118[3U];
    } else {
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[0U] 
            = ((0x12U == vlSelf->top__DOT__EXU__DOT__inst_now)
                ? __Vtemp119[0U] : ((0x11U == vlSelf->top__DOT__EXU__DOT__inst_now)
                                     ? __Vtemp123[0U]
                                     : ((0x1dU == vlSelf->top__DOT__EXU__DOT__inst_now)
                                         ? __Vtemp124[0U]
                                         : ((0x1cU 
                                             == vlSelf->top__DOT__EXU__DOT__inst_now)
                                             ? __Vtemp125[0U]
                                             : ((0x1bU 
                                                 == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                 ? 
                                                __Vtemp126[0U]
                                                 : 
                                                ((0x1aU 
                                                  == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                  ? 
                                                 __Vtemp127[0U]
                                                  : 
                                                 ((0x19U 
                                                   == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                   ? 
                                                  __Vtemp128[0U]
                                                   : 
                                                  ((0x18U 
                                                    == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                    ? 
                                                   __Vtemp129[0U]
                                                    : 
                                                   ((0x17U 
                                                     == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                     ? 
                                                    vlSelf->top__DOT__EXU__DOT__sll_res[0U]
                                                     : 
                                                    __Vtemp130[0U])))))))));
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[1U] 
            = ((0x12U == vlSelf->top__DOT__EXU__DOT__inst_now)
                ? __Vtemp119[1U] : ((0x11U == vlSelf->top__DOT__EXU__DOT__inst_now)
                                     ? __Vtemp123[1U]
                                     : ((0x1dU == vlSelf->top__DOT__EXU__DOT__inst_now)
                                         ? __Vtemp124[1U]
                                         : ((0x1cU 
                                             == vlSelf->top__DOT__EXU__DOT__inst_now)
                                             ? __Vtemp125[1U]
                                             : ((0x1bU 
                                                 == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                 ? 
                                                __Vtemp126[1U]
                                                 : 
                                                ((0x1aU 
                                                  == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                  ? 
                                                 __Vtemp127[1U]
                                                  : 
                                                 ((0x19U 
                                                   == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                   ? 
                                                  __Vtemp128[1U]
                                                   : 
                                                  ((0x18U 
                                                    == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                    ? 
                                                   __Vtemp129[1U]
                                                    : 
                                                   ((0x17U 
                                                     == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                     ? 
                                                    vlSelf->top__DOT__EXU__DOT__sll_res[1U]
                                                     : 
                                                    __Vtemp130[1U])))))))));
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[2U] 
            = ((0x12U == vlSelf->top__DOT__EXU__DOT__inst_now)
                ? __Vtemp119[2U] : ((0x11U == vlSelf->top__DOT__EXU__DOT__inst_now)
                                     ? __Vtemp123[2U]
                                     : ((0x1dU == vlSelf->top__DOT__EXU__DOT__inst_now)
                                         ? __Vtemp124[2U]
                                         : ((0x1cU 
                                             == vlSelf->top__DOT__EXU__DOT__inst_now)
                                             ? __Vtemp125[2U]
                                             : ((0x1bU 
                                                 == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                 ? 
                                                __Vtemp126[2U]
                                                 : 
                                                ((0x1aU 
                                                  == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                  ? 
                                                 __Vtemp127[2U]
                                                  : 
                                                 ((0x19U 
                                                   == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                   ? 
                                                  __Vtemp128[2U]
                                                   : 
                                                  ((0x18U 
                                                    == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                    ? 
                                                   __Vtemp129[2U]
                                                    : 
                                                   ((0x17U 
                                                     == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                     ? 
                                                    vlSelf->top__DOT__EXU__DOT__sll_res[2U]
                                                     : 
                                                    __Vtemp130[2U])))))))));
        vlSelf->top__DOT__EXU__DOT___alu_res_T_144[3U] 
            = ((0x12U == vlSelf->top__DOT__EXU__DOT__inst_now)
                ? __Vtemp119[3U] : ((0x11U == vlSelf->top__DOT__EXU__DOT__inst_now)
                                     ? __Vtemp123[3U]
                                     : ((0x1dU == vlSelf->top__DOT__EXU__DOT__inst_now)
                                         ? __Vtemp124[3U]
                                         : ((0x1cU 
                                             == vlSelf->top__DOT__EXU__DOT__inst_now)
                                             ? __Vtemp125[3U]
                                             : ((0x1bU 
                                                 == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                 ? 
                                                __Vtemp126[3U]
                                                 : 
                                                ((0x1aU 
                                                  == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                  ? 
                                                 __Vtemp127[3U]
                                                  : 
                                                 ((0x19U 
                                                   == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                   ? 
                                                  __Vtemp128[3U]
                                                   : 
                                                  ((0x18U 
                                                    == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                    ? 
                                                   __Vtemp129[3U]
                                                    : 
                                                   ((0x17U 
                                                     == vlSelf->top__DOT__EXU__DOT__inst_now)
                                                     ? 
                                                    vlSelf->top__DOT__EXU__DOT__sll_res[3U]
                                                     : 
                                                    __Vtemp130[3U])))))))));
    }
    top__DOT__IDU__DOT___inst_now_T_189 = ((0x67U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                            ? 6U : 
                                           ((0x3023U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? 7U : 
                                            ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                              ? 0x20U
                                              : ((0x2003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 0x21U
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0xcU
                                                   : 
                                                  ((0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0xeU
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x2aU
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x29U
                                                      : 
                                                     ((0x3003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x22U
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x10U
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0xfU
                                                         : 
                                                        ((0x40005013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x15U
                                                          : 
                                                         ((0x4003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0x23U
                                                           : 
                                                          ((0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0x26U
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0x28U
                                                             : (IData)(top__DOT__IDU__DOT___inst_now_T_174))))))))))))))));
    top__DOT__IDU__DOT___inst_type_T_185 = ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? 0x43U
                                             : ((0x67U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0x40U
                                                 : 
                                                ((0x3023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 0x44U
                                                  : 
                                                 ((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0x40U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0x40U
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0x41U
                                                     : 
                                                    ((0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 0x41U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x45U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x45U
                                                        : 
                                                       ((0x3003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x40U
                                                         : 
                                                        ((0x1bU 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x40U
                                                          : 
                                                         ((0x33U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                                           ? 0x41U
                                                           : 
                                                          ((0x40005013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0x40U
                                                            : 
                                                           ((0x4003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0x40U
                                                             : 
                                                            ((0x1023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? 0x44U
                                                              : (IData)(top__DOT__IDU__DOT___inst_type_T_170))))))))))))))));
    if ((0x13U == (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))) {
        vlSelf->top__DOT__IDU__DOT___inst_now_T_194 = 1U;
        vlSelf->top__DOT__IDU__DOT___inst_type_T_188 = 0x40U;
    } else {
        vlSelf->top__DOT__IDU__DOT___inst_now_T_194 
            = ((0x100073U == vlSelf->top__DOT__IDU__DOT__inst)
                ? 2U : ((0x17U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                         ? 3U : ((0x37U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                                  ? 4U : ((0x6fU == 
                                           (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                                           ? 5U : (IData)(top__DOT__IDU__DOT___inst_now_T_189)))));
        vlSelf->top__DOT__IDU__DOT___inst_type_T_188 
            = ((0x17U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                ? 0x42U : ((0x37U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                            ? 0x42U : (IData)(top__DOT__IDU__DOT___inst_type_T_185)));
    }
    Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(
                                                              (2U 
                                                               == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)));
    Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit(
                                                             (0x3dU 
                                                              == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)));
    Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(vlSelf->top__DOT__WBU__DOT__ws_pc);
    vlSelf->top__DOT__IDU__DOT__br_taken = ((0x3eU 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)) 
                                            | ((0x3dU 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)) 
                                               | ((0x3cU 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                   ? 
                                                  (vlSelf->top__DOT__Register_io_rdata1 
                                                   >= vlSelf->top__DOT__Register_io_rdata2)
                                                   : 
                                                  ((0x2dU 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                    ? 
                                                   (vlSelf->top__DOT__Register_io_rdata1 
                                                    < vlSelf->top__DOT__Register_io_rdata2)
                                                    : 
                                                   ((0x2cU 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                     ? 
                                                    VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__Register_io_rdata1, vlSelf->top__DOT__Register_io_rdata2)
                                                     : 
                                                    ((0x2bU 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                      ? 
                                                     VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__Register_io_rdata1, vlSelf->top__DOT__Register_io_rdata2)
                                                      : 
                                                     ((0x29U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                       ? 
                                                      (vlSelf->top__DOT__Register_io_rdata1 
                                                       == vlSelf->top__DOT__Register_io_rdata2)
                                                       : 
                                                      ((0x2aU 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194))
                                                        ? 
                                                       (vlSelf->top__DOT__Register_io_rdata1 
                                                        != vlSelf->top__DOT__Register_io_rdata2)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)) 
                                                        | (5U 
                                                           == (IData)(vlSelf->top__DOT__IDU__DOT___inst_now_T_194)))))))))));
    vlSelf->top__DOT__IDU__DOT__imm = ((0x45U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))
                                        ? ((((vlSelf->top__DOT__IDU__DOT__inst 
                                              >> 0x1fU)
                                              ? 0x7ffffffffffffULL
                                              : 0ULL) 
                                            << 0xdU) 
                                           | (QData)((IData)(
                                                             ((0x1000U 
                                                               & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                  >> 0x13U)) 
                                                              | ((0x800U 
                                                                  & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                          >> 7U))))))))
                                        : ((0x44U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))
                                            ? ((((vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0x1fU)
                                                  ? 0xfffffffffffffULL
                                                  : 0ULL) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                        >> 7U))))))
                                            : ((0x42U 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))
                                                ? (
                                                   ((QData)((IData)(
                                                                    ((vlSelf->top__DOT__IDU__DOT__inst 
                                                                      >> 0x1fU)
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->top__DOT__IDU__DOT__inst))))
                                                : (
                                                   (0x43U 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))
                                                    ? 
                                                   ((((vlSelf->top__DOT__IDU__DOT__inst 
                                                       >> 0x1fU)
                                                       ? 0x7ffffffffffULL
                                                       : 0ULL) 
                                                     << 0x15U) 
                                                    | (QData)((IData)(
                                                                      ((0x100000U 
                                                                        & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                           >> 0xbU)) 
                                                                       | ((0xff000U 
                                                                           & vlSelf->top__DOT__IDU__DOT__inst) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                                >> 9U)) 
                                                                             | (0x7feU 
                                                                                & (vlSelf->top__DOT__IDU__DOT__inst 
                                                                                >> 0x14U))))))))
                                                    : 
                                                   ((0x40U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))
                                                     ? 
                                                    ((((vlSelf->top__DOT__IDU__DOT__inst 
                                                        >> 0x1fU)
                                                        ? 0xfffffffffffffULL
                                                        : 0ULL) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->top__DOT__IDU__DOT__inst 
                                                                        >> 0x14U))))
                                                     : 0ULL)))));
    vlSelf->top__DOT__IDU__DOT__src2_is_imm = ((0x45U 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188)) 
                                               | ((0x43U 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188)) 
                                                  | ((0x44U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188)) 
                                                     | ((0x42U 
                                                         == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188)) 
                                                        | (0x40U 
                                                           == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))))));
    vlSelf->top__DOT__IDU__DOT___br_target_T_1 = (((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                                                    ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                    : vlSelf->top__DOT__Register_io_rdata1) 
                                                  + 
                                                  ((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                                    ? vlSelf->top__DOT__IDU__DOT__imm
                                                    : vlSelf->top__DOT__Register_io_rdata2));
    vlSelf->top__DOT__IDU__DOT__conflict = ((((~ (IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)) 
                                              | (0x45U 
                                                 == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                             & (((((((0x1fU 
                                                      & (vlSelf->top__DOT__IDU__DOT__inst 
                                                         >> 0xfU)) 
                                                     == (IData)(vlSelf->top__DOT__EXU__DOT__es_rd)) 
                                                    & (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__IDU__DOT__inst 
                                                           >> 0xfU)))) 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__es_rf_we)) 
                                                  & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid)) 
                                                 | (((((0x1fU 
                                                        & (vlSelf->top__DOT__IDU__DOT__inst 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_dst)) 
                                                      & (0U 
                                                         != 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__IDU__DOT__inst 
                                                             >> 0xfU)))) 
                                                     & (IData)(vlSelf->top__DOT__LSU_io_ms_rf_we)) 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid))) 
                                                | (((((0x1fU 
                                                       & (vlSelf->top__DOT__IDU__DOT__inst 
                                                          >> 0xfU)) 
                                                      == (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)) 
                                                     & (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__IDU__DOT__inst 
                                                            >> 0xfU)))) 
                                                    & (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we)) 
                                                   & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)))) 
                                            | ((((~ (IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)) 
                                                 | (0x44U 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                                | (0x45U 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                               & (((((((0x1fU 
                                                        & (vlSelf->top__DOT__IDU__DOT__inst 
                                                           >> 0x14U)) 
                                                       == (IData)(vlSelf->top__DOT__EXU__DOT__es_rd)) 
                                                      & (0U 
                                                         != 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__IDU__DOT__inst 
                                                             >> 0x14U)))) 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__es_rf_we)) 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid)) 
                                                   | (((((0x1fU 
                                                          & (vlSelf->top__DOT__IDU__DOT__inst 
                                                             >> 0x14U)) 
                                                         == (IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_dst)) 
                                                        & (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                                               >> 0x14U)))) 
                                                       & (IData)(vlSelf->top__DOT__LSU_io_ms_rf_we)) 
                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid))) 
                                                  | (((((0x1fU 
                                                         & (vlSelf->top__DOT__IDU__DOT__inst 
                                                            >> 0x14U)) 
                                                        == (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)) 
                                                       & (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (vlSelf->top__DOT__IDU__DOT__inst 
                                                              >> 0x14U)))) 
                                                      & (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we)) 
                                                     & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)))));
    vlSelf->top__DOT__IDU__DOT__ds_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                               | (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict))));
    vlSelf->top__DOT__IDU_io_ds_to_es_valid = ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid) 
                                               & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)));
    vlSelf->top__DOT__IFU__DOT__fs_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__IFU__DOT__fs_valid)) 
                                               | ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                                  | (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)))));
    vlSelf->top__DOT__IDU__DOT__br_taken_cancel = (
                                                   ((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                                    & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict))) 
                                                   & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid));
    vlSelf->top__DOT__IFU__DOT___GEN_1 = ((IData)(vlSelf->top__DOT__IFU__DOT__fs_allowin) 
                                          | ((~ ((IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel) 
                                                 & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))) 
                                             & (IData)(vlSelf->top__DOT__IFU__DOT__fs_valid)));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->io_pc = VL_RAND_RESET_Q(64);
    vlSelf->io_step = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Register_io_rdata1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__Register_io_rdata2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU_io_ds_to_es_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_io_ms_rf_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__diff_step = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__Register__DOT__Reg[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__IFU__DOT__inst_read_Rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU__DOT__fs_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__fs_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU__DOT__seq_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU__DOT__fs_allowin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__ds_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__ds_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT___inst_now_T_194 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT__br_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__src1_is_pc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___inst_type_T_188 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT__src2_is_imm = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__conflict = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__br_taken_cancel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__ds_allowin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT___Wmask_T_10 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__IDU__DOT___br_target_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__es_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__es_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__es_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EXU__DOT__es_rf_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__src1_value = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__src2_value = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__store_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__st_wstrb = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__EXU__DOT__st_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ld_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__inst_now = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__load_type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__EXU__DOT__add_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__sub_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__sra_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__srl_res = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(127, vlSelf->top__DOT__EXU__DOT__sll_res);
    vlSelf->top__DOT__EXU__DOT__srlw_res = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__sllw_res = VL_RAND_RESET_Q(63);
    vlSelf->top__DOT__EXU__DOT__or_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__xor_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__and_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT___mluw_res_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT___divw_res_T_4 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__EXU__DOT__divuw_res = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__remw_res = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__remuw_res = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->top__DOT__EXU__DOT___alu_res_T_144);
    vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__LSU__DOT__ms_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__ms_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__LSU__DOT__ms_rf_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__ms_rf_dst = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__ms_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__LSU__DOT__store_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__LSU__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__wstrb = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__LSU__DOT__ren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__maddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__LSU__DOT__load_type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__WBU__DOT__ws_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT__ws_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__WBU__DOT__ws_rf_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT__ws_rf_dst = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__WBU__DOT__ws_res = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_pmem_read__1__Rdata = 0;
    vlSelf->__Vtask_pmem_read__2__Rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
