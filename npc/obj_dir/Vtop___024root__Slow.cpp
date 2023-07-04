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

void Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &Regfile);
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);
extern const VlWide<18>/*575:0*/ Vtop__ConstPool__CONST_ee9aa94f_0;
void Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Variables
    CData/*0:0*/ top__DOT__IFU__DOT___T_1;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_140;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_155;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_170;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_185;
    CData/*0:0*/ top__DOT__IDU__DOT___conflict_es_rs1_T_4;
    CData/*0:0*/ top__DOT__IDU__DOT___conflict_es_rs2_T_6;
    CData/*0:0*/ top__DOT__IDU__DOT___ds_ready_go_T_33;
    CData/*6:0*/ top__DOT__IDU__DOT___ALUop_T_132;
    CData/*6:0*/ top__DOT__IDU__DOT___ALUop_T_147;
    CData/*6:0*/ top__DOT__IDU__DOT___ALUop_T_162;
    CData/*7:0*/ top__DOT__i_cache__DOT___GEN_13;
    CData/*7:0*/ top__DOT__d_cache__DOT___GEN_13;
    SData/*10:0*/ top__DOT__i_cache__DOT___quene_T_1;
    SData/*10:0*/ top__DOT__i_cache__DOT___quene_T_3;
    SData/*10:0*/ top__DOT__d_cache__DOT___quene_T_1;
    SData/*10:0*/ top__DOT__d_cache__DOT___quene_T_3;
    VlWide<3>/*95:0*/ __Vtemp109;
    VlWide<3>/*95:0*/ __Vtemp110;
    VlWide<3>/*95:0*/ __Vtemp114;
    VlWide<3>/*95:0*/ __Vtemp118;
    VlWide<3>/*95:0*/ __Vtemp125;
    VlWide<3>/*95:0*/ __Vtemp135;
    VlWide<3>/*95:0*/ __Vtemp136;
    VlWide<3>/*95:0*/ __Vtemp137;
    VlWide<4>/*127:0*/ __Vtemp141;
    VlWide<5>/*159:0*/ __Vtemp142;
    VlWide<5>/*159:0*/ __Vtemp145;
    VlWide<5>/*159:0*/ __Vtemp148;
    VlWide<4>/*127:0*/ __Vtemp154;
    VlWide<3>/*95:0*/ __Vtemp164;
    VlWide<3>/*95:0*/ __Vtemp167;
    VlWide<18>/*575:0*/ __Vtemp170;
    VlWide<18>/*575:0*/ __Vtemp171;
    VlWide<16>/*511:0*/ __Vtemp172;
    VlWide<18>/*575:0*/ __Vtemp173;
    VlWide<18>/*575:0*/ __Vtemp174;
    VlWide<18>/*575:0*/ __Vtemp175;
    VlWide<5>/*159:0*/ __Vtemp188;
    VlWide<5>/*159:0*/ __Vtemp191;
    VlWide<14>/*447:0*/ __Vtemp197;
    VlWide<16>/*511:0*/ __Vtemp198;
    VlWide<16>/*511:0*/ __Vtemp210;
    VlWide<16>/*511:0*/ __Vtemp211;
    VlWide<16>/*511:0*/ __Vtemp212;
    VlWide<4>/*127:0*/ __Vtemp216;
    VlWide<4>/*127:0*/ __Vtemp217;
    VlWide<4>/*127:0*/ __Vtemp218;
    VlWide<4>/*127:0*/ __Vtemp219;
    VlWide<4>/*127:0*/ __Vtemp220;
    VlWide<4>/*127:0*/ __Vtemp221;
    VlWide<4>/*127:0*/ __Vtemp222;
    VlWide<4>/*127:0*/ __Vtemp223;
    QData/*63:0*/ top__DOT__IDU__DOT___rdata1_T_1;
    QData/*63:0*/ top__DOT__IDU__DOT___br_taken_T;
    QData/*63:0*/ top__DOT__IDU__DOT___br_taken_T_1;
    QData/*63:0*/ top__DOT__IDU__DOT___br_target_T_1;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_42;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_50;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_80;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_98;
    // Body
    vlSelf->io_step = vlSelf->top__DOT__diff_step;
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___step_num_T_1 
        = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num 
           - (IData)(1U));
    if ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache_io_to_axi_arlen = 0U;
        vlSelf->top__DOT__d_cache_io_to_axi_awlen = 0U;
    } else {
        vlSelf->top__DOT__d_cache_io_to_axi_arlen = 
            ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? 0U : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? 7U : 0U));
        vlSelf->top__DOT__d_cache_io_to_axi_awlen = 
            ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? 0U : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? 0U : ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                ? 0U : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                         ? 7U : 0U))));
    }
    vlSelf->top__DOT__axi__DOT___GEN_18 = ((0U == (IData)(vlSelf->top__DOT__axi__DOT__awlen)) 
                                           | (IData)(vlSelf->top__DOT__axi__DOT__axi_bvalid));
    VL_EXTEND_WQ(65,64, __Vtemp109, (~ (((QData)((IData)(
                                                         vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp110, (~ (((QData)((IData)(
                                                         vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp114, ((2U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))
                                      : ((1U == (7U 
                                                 & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                          ? (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))
                                          : 0ULL)));
    __Vtemp118[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                       ? (~ (((IData)((((QData)((IData)(
                                                        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                        << 0x20U) | (QData)((IData)(
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
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U]))) 
                                                     >> 0x20U)) 
                                            << 1U))
                           : __Vtemp114[1U]));
    __Vtemp125[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                       ? 0U : (1U & ((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                      ? __Vtemp109[2U]
                                      : ((5U == (7U 
                                                 & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                          ? __Vtemp110[2U]
                                          : ((4U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                              ? (~ 
                                                 ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U]))) 
                                                           >> 0x20U)) 
                                                  >> 0x1fU))
                                              : ((3U 
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
                                                 __Vtemp114[2U]))))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___res_T_3 
        = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res 
            + (((QData)((IData)(((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                  ? 0U : ((6U == (7U 
                                                  & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                           ? __Vtemp109[1U]
                                           : ((5U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                               ? __Vtemp110[1U]
                                               : __Vtemp118[1U]))))) 
                << 0x20U) | (QData)((IData)(((7U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                              ? 0U : 
                                             ((6U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                               ? __Vtemp109[0U]
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                   ? 
                                                  __Vtemp110[0U]
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
                                                    __Vtemp114[0U]))))))))) 
           + (QData)((IData)(((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                              | ((5U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                 | (4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])))))));
    vlSelf->top__DOT__d_cache__DOT__lo[0U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_0);
    vlSelf->top__DOT__d_cache__DOT__lo[1U] = (IData)(
                                                     (vlSelf->top__DOT__d_cache__DOT__receive_data_0 
                                                      >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__lo[2U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_1);
    vlSelf->top__DOT__d_cache__DOT__lo[3U] = (IData)(
                                                     (vlSelf->top__DOT__d_cache__DOT__receive_data_1 
                                                      >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__lo[4U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_2);
    vlSelf->top__DOT__d_cache__DOT__lo[5U] = (IData)(
                                                     (vlSelf->top__DOT__d_cache__DOT__receive_data_2 
                                                      >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__lo[6U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_3);
    vlSelf->top__DOT__d_cache__DOT__lo[7U] = (IData)(
                                                     (vlSelf->top__DOT__d_cache__DOT__receive_data_3 
                                                      >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__hi[0U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_4);
    vlSelf->top__DOT__d_cache__DOT__hi[1U] = (IData)(
                                                     (vlSelf->top__DOT__d_cache__DOT__receive_data_4 
                                                      >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__hi[2U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_5);
    vlSelf->top__DOT__d_cache__DOT__hi[3U] = (IData)(
                                                     (vlSelf->top__DOT__d_cache__DOT__receive_data_5 
                                                      >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__hi[4U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_6);
    vlSelf->top__DOT__d_cache__DOT__hi[5U] = (IData)(
                                                     (vlSelf->top__DOT__d_cache__DOT__receive_data_6 
                                                      >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__hi[6U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_7);
    vlSelf->top__DOT__d_cache__DOT__hi[7U] = (IData)(
                                                     (vlSelf->top__DOT__d_cache__DOT__receive_data_7 
                                                      >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__wmask = ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__wstrb))
                                              ? 0xffULL
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__wstrb))
                                                  ? 0xffffULL
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__wstrb))
                                                   ? 0xffffffffULL
                                                   : 
                                                  ((0xffU 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__wstrb))
                                                    ? 0xffffffffffffffffULL
                                                    : 0ULL))));
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
    vlSelf->top__DOT__axi_io_axi_out_rlast = ((1U == (IData)(vlSelf->top__DOT__axi__DOT__state)) 
                                              & (0U 
                                                 == (IData)(vlSelf->top__DOT__axi__DOT__arlen)));
    vlSelf->top__DOT__d_cache_io_to_axi_rready = ((1U 
                                                   != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                     & ((3U 
                                                         == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                        | ((4U 
                                                            == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                           | (6U 
                                                              != (IData)(vlSelf->top__DOT__d_cache__DOT__state))))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo 
        = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
            ? 0U : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                         ? 0U : (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res))
                     : 0U));
    vlSelf->top__DOT__LSU_io_axi_out_arvalid = ((IData)(vlSelf->top__DOT__LSU__DOT__ren) 
                                                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid));
    vlSelf->top__DOT__LSU_io_axi_out_awvalid = ((IData)(vlSelf->top__DOT__LSU__DOT__wen) 
                                                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid));
    vlSelf->top__DOT__d_cache__DOT___GEN_571 = ((1U 
                                                 == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                 ? (QData)((IData)(vlSelf->top__DOT__LSU__DOT__maddr))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (QData)((IData)(vlSelf->top__DOT__LSU__DOT__maddr))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? 
                                                  (0xffffffffffffffc0ULL 
                                                   & (QData)((IData)(vlSelf->top__DOT__LSU__DOT__maddr)))
                                                   : (QData)((IData)(
                                                                     ((4U 
                                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                       ? 0U
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelf->top__DOT__LSU__DOT__maddr))))))));
    top__DOT__d_cache__DOT___GEN_13 = ((0xdU == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U))))
                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13)
                                        : ((0xcU == 
                                            (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 6U))))
                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12)
                                            : ((0xbU 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U))))
                                                ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11)
                                                : (
                                                   (0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                >> 6U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10)
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 6U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9)
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                  >> 6U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8)
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                   >> 6U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7)
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                    >> 6U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6)
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                     >> 6U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5)
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                      >> 6U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4)
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                       >> 6U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3)
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                        >> 6U))))
                                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2)
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                         >> 6U))))
                                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1)
                                                             : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0))))))))))))));
    vlSelf->top__DOT__EXU_io_es_ld = ((IData)(vlSelf->top__DOT__EXU__DOT__ld_we) 
                                      & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed 
        = ((0x14U == vlSelf->top__DOT__EXU__DOT__ALUop) 
           | ((0x34U == vlSelf->top__DOT__EXU__DOT__ALUop) 
              | ((0x13U == vlSelf->top__DOT__EXU__DOT__ALUop) 
                 | (0x31U == vlSelf->top__DOT__EXU__DOT__ALUop))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid 
        = ((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop) 
           | (0x11U == vlSelf->top__DOT__EXU__DOT__ALUop));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid 
        = ((0x32U == vlSelf->top__DOT__EXU__DOT__ALUop) 
           | ((0x14U == vlSelf->top__DOT__EXU__DOT__ALUop) 
              | ((0x33U == vlSelf->top__DOT__EXU__DOT__ALUop) 
                 | ((0x34U == vlSelf->top__DOT__EXU__DOT__ALUop) 
                    | ((0x35U == vlSelf->top__DOT__EXU__DOT__ALUop) 
                       | ((0x13U == vlSelf->top__DOT__EXU__DOT__ALUop) 
                          | ((0x30U == vlSelf->top__DOT__EXU__DOT__ALUop) 
                             | (0x31U == vlSelf->top__DOT__EXU__DOT__ALUop))))))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw 
        = ((0x32U == vlSelf->top__DOT__EXU__DOT__ALUop) 
           | ((0x14U == vlSelf->top__DOT__EXU__DOT__ALUop) 
              | ((0x35U == vlSelf->top__DOT__EXU__DOT__ALUop) 
                 | (0x13U == vlSelf->top__DOT__EXU__DOT__ALUop))));
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                         >> 6U)))];
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0x3fU & ((IData)(0x10U) + (0xfU & (IData)(
                                                   (vlSelf->top__DOT__LSU__DOT__maddr 
                                                    >> 6U)))))];
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0x3fU & ((IData)(0x20U) + (0xfU & (IData)(
                                                   (vlSelf->top__DOT__LSU__DOT__maddr 
                                                    >> 6U)))))];
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0x3fU & ((IData)(0x30U) + (0xfU & (IData)(
                                                   (vlSelf->top__DOT__LSU__DOT__maddr 
                                                    >> 6U)))))];
    vlSelf->top__DOT__LSU_io_ms_rf_we = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_we) 
                                         & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid));
    vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value = 
        ((6U == vlSelf->top__DOT__EXU__DOT__ALUop) ? vlSelf->top__DOT__EXU__DOT__es_pc
          : vlSelf->top__DOT__EXU__DOT__src1_value);
    vlSelf->io_pc = vlSelf->top__DOT__IFU__DOT__fs_pc;
    top__DOT__IDU__DOT___ALUop_T_132 = ((0x200503bU 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                         ? 0x35U : 
                                        ((0x200703bU 
                                          == (0xfe00707fU 
                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                          ? 0x32U : 
                                         ((0x2007033U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                           ? 0x33U : 
                                          ((0x2006033U 
                                            == (0xfe00707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst))
                                            ? 0x34U
                                            : ((0x1033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                                ? 0x37U
                                                : (
                                                   (0x5033U 
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
                                                      ? 0x1fU
                                                      : 
                                                     ((0x6003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0xfU
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0xfU
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
    vlSelf->top__DOT__IDU__DOT__csr_write = ((0x73U 
                                              == vlSelf->top__DOT__IDU__DOT__inst)
                                              ? 3U : 
                                             ((0x1073U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                              | ((0x2073U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                 | (0x3073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst)))));
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
    vlSelf->io_inst = vlSelf->top__DOT__IFU__DOT__fs_inst;
    vlSelf->top__DOT__i_cache__DOT___GEN_161 = ((3U 
                                                 == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                 ? 1U
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                  ? 0U
                                                  : (IData)(vlSelf->top__DOT__i_cache__DOT__state)));
    vlSelf->top__DOT__i_cache__DOT___GEN_400 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                & ((2U 
                                                    != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                   & ((3U 
                                                       != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                      & (4U 
                                                         == (IData)(vlSelf->top__DOT__i_cache__DOT__state)))));
    vlSelf->top__DOT__i_cache__DOT___GEN_574 = ((1U 
                                                 == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                 ? (QData)((IData)(vlSelf->top__DOT__i_cache__DOT__addr))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                  ? 
                                                 (0xfffffffffffffff0ULL 
                                                  & (QData)((IData)(vlSelf->top__DOT__i_cache__DOT__addr)))
                                                  : (QData)((IData)(vlSelf->top__DOT__i_cache__DOT__addr))));
    vlSelf->top__DOT__i_cache_io_to_axi_arvalid = (
                                                   (1U 
                                                    != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                   & (2U 
                                                      == (IData)(vlSelf->top__DOT__i_cache__DOT__state)));
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_0_MPORT_data 
        = vlSelf->top__DOT__i_cache__DOT__validMem[
        (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                 >> 4U))];
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data 
        = vlSelf->top__DOT__i_cache__DOT__validMem[
        (0x3fU & ((IData)(0x10U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U))))];
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data 
        = vlSelf->top__DOT__i_cache__DOT__validMem[
        (0x3fU & ((IData)(0x20U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U))))];
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data 
        = vlSelf->top__DOT__i_cache__DOT__validMem[
        (0x3fU & ((IData)(0x30U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U))))];
    top__DOT__i_cache__DOT___GEN_13 = ((0xdU == (0xfU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 4U)))
                                        ? (IData)(vlSelf->top__DOT__i_cache__DOT__quene_13)
                                        : ((0xcU == 
                                            (0xfU & 
                                             (vlSelf->top__DOT__i_cache__DOT__addr 
                                              >> 4U)))
                                            ? (IData)(vlSelf->top__DOT__i_cache__DOT__quene_12)
                                            : ((0xbU 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->top__DOT__i_cache__DOT__quene_11)
                                                : (
                                                   (0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->top__DOT__i_cache__DOT__quene_10)
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->top__DOT__i_cache__DOT__quene_9)
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT__quene_8)
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                           >> 4U)))
                                                       ? (IData)(vlSelf->top__DOT__i_cache__DOT__quene_7)
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                            >> 4U)))
                                                        ? (IData)(vlSelf->top__DOT__i_cache__DOT__quene_6)
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0xfU 
                                                          & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                             >> 4U)))
                                                         ? (IData)(vlSelf->top__DOT__i_cache__DOT__quene_5)
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                              >> 4U)))
                                                          ? (IData)(vlSelf->top__DOT__i_cache__DOT__quene_4)
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0xfU 
                                                            & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                               >> 4U)))
                                                           ? (IData)(vlSelf->top__DOT__i_cache__DOT__quene_3)
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0xfU 
                                                             & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                                >> 4U)))
                                                            ? (IData)(vlSelf->top__DOT__i_cache__DOT__quene_2)
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0xfU 
                                                              & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                                 >> 4U)))
                                                             ? (IData)(vlSelf->top__DOT__i_cache__DOT__quene_1)
                                                             : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_0))))))))))))));
    Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs);
    vlSelf->top__DOT__d_cache__DOT___GEN_16 = ((IData)(vlSelf->top__DOT__LSU_io_axi_out_awvalid)
                                                ? 2U
                                                : (IData)(vlSelf->top__DOT__d_cache__DOT__state));
    vlSelf->top__DOT__d_cache__DOT___T_3 = (((IData)(vlSelf->top__DOT__LSU_io_axi_out_arvalid) 
                                             | (IData)(vlSelf->top__DOT__LSU_io_axi_out_awvalid)) 
                                            & (0xa0000000U 
                                               <= (IData)(vlSelf->top__DOT__LSU__DOT__maddr)));
    vlSelf->top__DOT__d_cache__DOT___GEN_15 = ((0xfU 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U))))
                                                ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15)
                                                : (
                                                   (0xeU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                >> 6U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14)
                                                    : (IData)(top__DOT__d_cache__DOT___GEN_13)));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid 
        = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid) 
           & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid 
        = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid) 
           & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid));
    vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy = (1U 
                                                   & ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid)
                                                       ? 
                                                      (~ 
                                                       ((0U 
                                                         != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                                        & ((1U 
                                                            == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                                           & (0U 
                                                              == 
                                                              ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                               | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U])))))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid) 
                                                       & (~ 
                                                          ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start) 
                                                           & VL_GTES_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num))))));
    if (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s 
            = (((QData)((IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__src2_value 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg 
            = (1U & (IData)((vlSelf->top__DOT__EXU__DOT__src2_value 
                             >> 0x1fU)));
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s 
            = vlSelf->top__DOT__EXU__DOT__src2_value;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg 
            = (1U & (IData)((vlSelf->top__DOT__EXU__DOT__src2_value 
                             >> 0x3fU)));
    }
    vlSelf->top__DOT__d_cache__DOT__tagMatch_0 = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data) 
                                                  & (vlSelf->top__DOT__d_cache__DOT__tagMem
                                                     [
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 6U)))] 
                                                     == 
                                                     (0x3fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 0xaU)))));
    vlSelf->top__DOT__d_cache__DOT__tagMatch_1 = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data) 
                                                  & (vlSelf->top__DOT__d_cache__DOT__tagMem
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x10U) 
                                                         + 
                                                         (0xfU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                     >> 6U)))))] 
                                                     == 
                                                     (0x3fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 0xaU)))));
    vlSelf->top__DOT__d_cache__DOT__tagMatch_2 = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data) 
                                                  & (vlSelf->top__DOT__d_cache__DOT__tagMem
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0xfU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                     >> 6U)))))] 
                                                     == 
                                                     (0x3fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 0xaU)))));
    vlSelf->top__DOT__d_cache__DOT__allvalid = ((((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data)) 
                                                 & (IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data)) 
                                                & (IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data));
    vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex 
        = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data)
            ? ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data)
                ? ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data)
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data)
                        ? 0U : 3U) : 2U) : 1U) : 0U);
    vlSelf->top__DOT__d_cache__DOT__tagMatch_3 = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data) 
                                                  & (vlSelf->top__DOT__d_cache__DOT__tagMem
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x30U) 
                                                         + 
                                                         (0xfU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                     >> 6U)))))] 
                                                     == 
                                                     (0x3fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 0xaU)))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
        = ((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
            ? (((QData)((IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)))
            : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s 
        = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
            ? (((QData)((IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)))
            : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res 
        = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value) 
           >> (0x1fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res 
        = (0x7fffffffffffffffULL & ((QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)) 
                                    << (0x1fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res = 
        (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
         + vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res = 
        (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
         - vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res = 
        VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, 
                       (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg 
        = (1U & ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                  ? (IData)((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                             >> 0x1fU)) : (IData)((vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                   >> 0x3fU))));
    top__DOT__IDU__DOT___ALUop_T_147 = ((0x4000503bU 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                         ? 0x1cU : 
                                        ((0x503bU == 
                                          (0xfe00707fU 
                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                          ? 0x1dU : 
                                         ((0x3033U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                           ? 0x1eU : 
                                          ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst))
                                            ? 0x1fU
                                            : ((0x2023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                                ? 0xfU
                                                : (
                                                   (0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0xfU
                                                    : 
                                                   ((0x5003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0xfU
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
                                                           ? 0xbU
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
                                                             : (IData)(top__DOT__IDU__DOT___ALUop_T_132))))))))))))))));
    if ((1U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))) {
        vlSelf->top__DOT__IDU_io_raddr2 = 0x11U;
        vlSelf->top__DOT__IDU__DOT__rs2 = 0x11U;
    } else {
        vlSelf->top__DOT__IDU_io_raddr2 = (0x1fU & 
                                           (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x14U));
        vlSelf->top__DOT__IDU__DOT__rs2 = (0x1fU & 
                                           (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x14U));
    }
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
    vlSelf->top__DOT__arbiter__DOT___GEN_0 = ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                               ? 1U
                                               : (IData)(vlSelf->top__DOT__arbiter__DOT__state));
    vlSelf->top__DOT__i_cache__DOT__tagMatch_0 = ((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_0_MPORT_data) 
                                                  & (vlSelf->top__DOT__i_cache__DOT__tagMem
                                                     [
                                                     (0xfU 
                                                      & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                         >> 4U))] 
                                                     == 
                                                     (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 8U)));
    vlSelf->top__DOT__i_cache__DOT__tagMatch_1 = ((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data) 
                                                  & (vlSelf->top__DOT__i_cache__DOT__tagMem
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x10U) 
                                                         + 
                                                         (0xfU 
                                                          & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                             >> 4U))))] 
                                                     == 
                                                     (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 8U)));
    vlSelf->top__DOT__i_cache__DOT__tagMatch_2 = ((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data) 
                                                  & (vlSelf->top__DOT__i_cache__DOT__tagMem
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0xfU 
                                                          & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                             >> 4U))))] 
                                                     == 
                                                     (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 8U)));
    vlSelf->top__DOT__i_cache__DOT__tagMatch_3 = ((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data) 
                                                  & (vlSelf->top__DOT__i_cache__DOT__tagMem
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x30U) 
                                                         + 
                                                         (0xfU 
                                                          & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                             >> 4U))))] 
                                                     == 
                                                     (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 8U)));
    vlSelf->top__DOT__i_cache__DOT__allvalid = ((((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_0_MPORT_data) 
                                                  & (IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data)) 
                                                 & (IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data)) 
                                                & (IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data));
    vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex 
        = ((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_0_MPORT_data)
            ? ((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data)
                ? ((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data)
                    ? ((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data)
                        ? 0U : 3U) : 2U) : 1U) : 0U);
    vlSelf->top__DOT__i_cache__DOT___GEN_15 = ((0xfU 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->top__DOT__i_cache__DOT__quene_15)
                                                : (
                                                   (0xeU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->top__DOT__i_cache__DOT__quene_14)
                                                    : (IData)(top__DOT__i_cache__DOT___GEN_13)));
    vlSelf->top__DOT__d_cache_io_to_axi_awaddr = ((1U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__LSU__DOT__maddr)
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                       ? vlSelf->top__DOT__d_cache__DOT__write_back_addr
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                        & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3))
                                                        ? (IData)(vlSelf->top__DOT__LSU__DOT__maddr)
                                                        : 0U))))));
    vlSelf->top__DOT__d_cache_io_to_axi_bready = ((1U 
                                                   != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                        & ((4U 
                                                            == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                           | ((6U 
                                                               == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                              | ((0U 
                                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                 & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)))))));
    vlSelf->top__DOT__d_cache_io_to_axi_wvalid = ((1U 
                                                   != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                        & ((4U 
                                                            == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                            ? (IData)(vlSelf->top__DOT__LSU__DOT__wen)
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                            | (((0U 
                                                                 == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                               & (IData)(vlSelf->top__DOT__LSU__DOT__wen)))))));
    if ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache_io_to_axi_wstrb = 0U;
        vlSelf->top__DOT__d_cache_io_to_axi_wdata = 0ULL;
    } else {
        vlSelf->top__DOT__d_cache_io_to_axi_wstrb = 
            ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? 0U : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? 0U : ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                ? (IData)(vlSelf->top__DOT__LSU__DOT__wstrb)
                                : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                    ? 0xffU : (((0U 
                                                 == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3))
                                                ? (IData)(vlSelf->top__DOT__LSU__DOT__wstrb)
                                                : 0U)))));
        vlSelf->top__DOT__d_cache_io_to_axi_wdata = 
            ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? 0ULL : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                         ? 0ULL : ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                    ? vlSelf->top__DOT__LSU__DOT__store_data
                                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                        ? (((QData)((IData)(
                                                            vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])))
                                        : (((0U == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                            & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3))
                                            ? vlSelf->top__DOT__LSU__DOT__store_data
                                            : 0ULL)))));
    }
    vlSelf->top__DOT__d_cache_io_to_axi_arvalid = (
                                                   (1U 
                                                    != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                      & ((3U 
                                                          == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                         | ((4U 
                                                             != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                            & ((6U 
                                                                != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                               & (((0U 
                                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                   & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                                  & (IData)(vlSelf->top__DOT__LSU_io_axi_out_arvalid)))))));
    vlSelf->top__DOT__d_cache_io_to_axi_awvalid = (
                                                   (1U 
                                                    != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                         & ((4U 
                                                             == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                             ? (IData)(vlSelf->top__DOT__LSU_io_axi_out_awvalid)
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                             | (((0U 
                                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                 & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                                & (IData)(vlSelf->top__DOT__LSU_io_axi_out_awvalid)))))));
    vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2 
        = (0x1ffU & ((0x30U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15) 
                               >> 2U)) + (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U)))));
    top__DOT__d_cache__DOT___quene_T_3 = (((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15) 
                                           << 2U) | 
                                          (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15) 
                                                 >> 6U)));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1 
        = (((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid) 
            & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start))) 
           | ((~ ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start) 
                  & VL_GTES_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num))) 
              & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)));
    if (((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid) 
         & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)))) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_4 = 0x40U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3 = 0ULL;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_4 
            = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3 
            = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient;
    }
    vlSelf->top__DOT__EXU_io_es_to_ms_valid = ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid) 
                                               & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)));
    vlSelf->top__DOT__EXU_io_es_fwd_ready = ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid) 
                                             & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)));
    __Vtemp135[0U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U] 
                       << 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U] 
                                 >> 0x1fU));
    __Vtemp135[1U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U] 
                       << 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U] 
                                 >> 0x1fU));
    __Vtemp135[2U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U] 
                      >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp136, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                          : vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_SUB_W(3, __Vtemp137, __Vtemp135, __Vtemp136);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
        = __Vtemp137[0U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
        = __Vtemp137[1U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
        = (1U & __Vtemp137[2U]);
    vlSelf->top__DOT__d_cache__DOT___GEN_356 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                & ((2U 
                                                    != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                   & ((3U 
                                                       != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                      & ((4U 
                                                          != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                         & ((5U 
                                                             == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                            & (~ (IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)))))));
    vlSelf->top__DOT__d_cache__DOT___GEN_380 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                & ((2U 
                                                    != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                   & ((3U 
                                                       != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                      & ((4U 
                                                          != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                         & ((5U 
                                                             == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                            & (IData)(vlSelf->top__DOT__d_cache__DOT__allvalid))))));
    vlSelf->top__DOT__d_cache__DOT__unvalidIndex = 
        (0x1ffU & (((IData)(vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex) 
                    << 4U) + (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                              >> 6U)))));
    top__DOT__d_cache__DOT___quene_T_1 = (((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15) 
                                           << 2U) | (IData)(vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex));
    vlSelf->top__DOT__d_cache__DOT__tagIndex = (0x1ffU 
                                                & ((((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_0)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_1)
                                                       ? 1U
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_2)
                                                        ? 2U
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_3)
                                                         ? 3U
                                                         : 0U)))) 
                                                    << 4U) 
                                                   + 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 6U)))));
    vlSelf->top__DOT__d_cache__DOT__anyMatch = ((((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_0) 
                                                  | (IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_1)) 
                                                 | (IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_2)) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_3));
    if (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid) {
        __Vtemp141[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
        __Vtemp141[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                  >> 0x20U));
        __Vtemp141[2U] = (IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                 >> 0x3fU)))
                                   ? 0xffffffffffffffffULL
                                   : 0ULL));
        __Vtemp141[3U] = (IData)((((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                  >> 0x3fU)))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL) >> 0x20U));
    } else {
        __Vtemp141[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U];
        __Vtemp141[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U];
        __Vtemp141[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U];
        __Vtemp141[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U];
    }
    VL_EXTEND_WW(130,128, __Vtemp142, __Vtemp141);
    VL_EXTEND_WW(130,128, __Vtemp145, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1);
    VL_EXTEND_WW(130,128, __Vtemp148, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[0U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[1U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[2U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[3U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[4U] = 0U;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[0U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp142[0U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
                                            << 2U) : 
                                        __Vtemp145[0U])
                                     : __Vtemp148[0U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[1U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp142[1U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
                                             >> 0x1eU) 
                                            | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
                                               << 2U))
                                         : __Vtemp145[1U])
                                     : __Vtemp148[1U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[2U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp142[2U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
                                             >> 0x1eU) 
                                            | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
                                               << 2U))
                                         : __Vtemp145[2U])
                                     : __Vtemp148[2U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[3U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp142[3U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
                                             >> 0x1eU) 
                                            | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
                                               << 2U))
                                         : __Vtemp145[3U])
                                     : __Vtemp148[3U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[4U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp142[4U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
                                            >> 0x1eU)
                                         : __Vtemp145[4U])
                                     : __Vtemp148[4U]));
    }
    top__DOT__EXU__DOT__ALU__DOT___alu_res_T_80 = (
                                                   (0xdU 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res 
                                                                                >> 0x1fU)))
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res)))
                                                    : 
                                                   ((8U 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? 
                                                    (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                     & vlSelf->top__DOT__EXU__DOT__src2_value)
                                                     : 
                                                    ((0x2eU 
                                                      == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                      ? 
                                                     (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                      ^ vlSelf->top__DOT__EXU__DOT__src2_value)
                                                      : 
                                                     ((0xbU 
                                                       == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                       ? 
                                                      (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                       | vlSelf->top__DOT__EXU__DOT__src2_value)
                                                       : 
                                                      ((0x15U 
                                                        == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                        ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res
                                                        : 
                                                       ((0xeU 
                                                         == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                         ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res
                                                         : 
                                                        ((0xcU 
                                                          == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           ((1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res 
                                                                                >> 0x1fU)))
                                                                             ? 0xffffffffU
                                                                             : 0U))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res)))
                                                          : 
                                                         ((0x1fU 
                                                           == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                           ? (QData)((IData)(
                                                                             VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value, vlSelf->top__DOT__EXU__DOT__src2_value)))
                                                           : 
                                                          ((0x1eU 
                                                            == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                            ? (QData)((IData)(
                                                                              (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                                                               < vlSelf->top__DOT__EXU__DOT__src2_value)))
                                                            : 
                                                           ((6U 
                                                             == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                             ? 
                                                            (4ULL 
                                                             + vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)
                                                             : 
                                                            ((5U 
                                                              == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                              ? 
                                                             (4ULL 
                                                              + vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)
                                                              : 
                                                             ((4U 
                                                               == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                               ? vlSelf->top__DOT__EXU__DOT__src2_value
                                                               : 
                                                              ((0xfU 
                                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                                ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res
                                                                : 0ULL)))))))))))));
    VL_EXTEND_WQ(128,64, __Vtemp154, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                       ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                           ? (1ULL 
                                              + (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                           : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                       : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                           ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                           : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
    if (((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid) 
         & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)))) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[0U] 
            = __Vtemp154[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[1U] 
            = __Vtemp154[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[2U] 
            = __Vtemp154[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[3U] 
            = __Vtemp154[3U];
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[0U] 
            = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[1U] 
            = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[2U] 
            = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[3U] 
            = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U];
    }
    if (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder 
            = (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                ? 0ULL : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                           ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                               ? (1ULL + (~ (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U])))))
                               : (((QData)((IData)(
                                                   vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U]))))
                           : (((QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient 
            = (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                ? 0ULL : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                           ? ((((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg) 
                                & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg))) 
                               | ((~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)) 
                                  & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)))
                               ? (1ULL + (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient))
                               : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient)
                           : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient));
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder = 0ULL;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient = 0ULL;
    }
    top__DOT__IDU__DOT___ALUop_T_162 = ((0x40005013U 
                                         == (0xfc00707fU 
                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                         ? 0x15U : 
                                        ((0x4003U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                          ? 0xfU : 
                                         ((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                           ? 0xfU : 
                                          ((0x23U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                            ? 0xfU : 
                                           ((0x6033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                             ? 0xbU
                                             : ((0x4013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0x2eU
                                                 : 
                                                ((0x7033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 8U
                                                  : 
                                                 ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 8U
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
                                                      ? 0x37U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0x38U
                                                       : 
                                                      ((0x101bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x16U
                                                        : 
                                                       ((0x4000501bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0x1cU
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                                          ? 0x1dU
                                                          : (IData)(top__DOT__IDU__DOT___ALUop_T_147))))))))))))))));
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
    vlSelf->top__DOT__i_cache__DOT__anyMatch = ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0) 
                                                  | (IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)) 
                                                 | (IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)) 
                                                | (IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3));
    vlSelf->top__DOT__i_cache__DOT___GEN_368 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                & ((2U 
                                                    != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                   & ((3U 
                                                       == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                      & (~ (IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)))));
    vlSelf->top__DOT__i_cache__DOT___GEN_392 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                & ((2U 
                                                    != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                   & ((3U 
                                                       == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                      & (IData)(vlSelf->top__DOT__i_cache__DOT__allvalid))));
    vlSelf->top__DOT__i_cache__DOT__unvalidIndex = 
        (0x1ffU & (((IData)(vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex) 
                    << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                      >> 4U))));
    vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2 
        = (0x1ffU & ((0x30U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_15) 
                               >> 2U)) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                  >> 4U))));
    top__DOT__i_cache__DOT___quene_T_3 = (((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_15) 
                                           << 2U) | 
                                          (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_15) 
                                                 >> 6U)));
    top__DOT__i_cache__DOT___quene_T_1 = (((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_15) 
                                           << 2U) | (IData)(vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex));
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
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? (IData)(vlSelf->top__DOT__axi_io_axi_out_rlast)
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                   & (IData)(vlSelf->top__DOT__axi_io_axi_out_rlast)));
        vlSelf->top__DOT__arbiter_io_axi_out_wvalid 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wvalid)
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                   & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wvalid)));
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
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast 
            = ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
               & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                   ? (IData)(vlSelf->top__DOT__axi_io_axi_out_rlast)
                   : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                      & (IData)(vlSelf->top__DOT__axi_io_axi_out_rlast))));
        vlSelf->top__DOT__arbiter_io_axi_out_wvalid 
            = ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
               & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                   ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wvalid)
                   : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                      & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wvalid))));
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
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? (IData)(vlSelf->top__DOT__axi__DOT__axi_bvalid)
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                   & (IData)(vlSelf->top__DOT__axi__DOT__axi_bvalid)));
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid)
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                   & (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid)));
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
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid 
            = ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
               & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                   ? (IData)(vlSelf->top__DOT__axi__DOT__axi_bvalid)
                   : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                      & (IData)(vlSelf->top__DOT__axi__DOT__axi_bvalid))));
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid 
            = ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
               & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                   ? (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid)
                   : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                      & (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid))));
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
    vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data 
        = vlSelf->top__DOT__d_cache__DOT__dirtyMem[
        (0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))];
    VL_EXTEND_WQ(65,64, __Vtemp164, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3);
    VL_EXTEND_WQ(65,64, __Vtemp167, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[0U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[1U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[2U] = 0U;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[0U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient) 
                           << 1U) : (1U | ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient) 
                                           << 1U)))
                    : __Vtemp164[0U]) : __Vtemp167[0U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[1U] 
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
                                      << 1U))) : __Vtemp164[1U])
                : __Vtemp167[1U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[2U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU)
                        : ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU))
                    : __Vtemp164[2U]) : __Vtemp167[2U]);
    }
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_244 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_245 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_246 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_247 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_248 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_249 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_250 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_251 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_252 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_253 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_254 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_255 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_256 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_257 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_258 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_259 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15));
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_244 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0))
                               : ((0U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0))));
        vlSelf->top__DOT__d_cache__DOT___GEN_245 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((1U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1))
                               : ((1U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1))));
        vlSelf->top__DOT__d_cache__DOT___GEN_246 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2))
                               : ((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2))));
        vlSelf->top__DOT__d_cache__DOT___GEN_247 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((3U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3))
                               : ((3U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3))));
        vlSelf->top__DOT__d_cache__DOT___GEN_248 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((4U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4))
                               : ((4U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4))));
        vlSelf->top__DOT__d_cache__DOT___GEN_249 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((5U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5))
                               : ((5U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5))));
        vlSelf->top__DOT__d_cache__DOT___GEN_250 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((6U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6))
                               : ((6U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6))));
        vlSelf->top__DOT__d_cache__DOT___GEN_251 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((7U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7))
                               : ((7U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7))));
        vlSelf->top__DOT__d_cache__DOT___GEN_252 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((8U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8))
                               : ((8U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8))));
        vlSelf->top__DOT__d_cache__DOT___GEN_253 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((9U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9))
                               : ((9U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9))));
        vlSelf->top__DOT__d_cache__DOT___GEN_254 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10))
                               : ((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10))));
        vlSelf->top__DOT__d_cache__DOT___GEN_255 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xbU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11))
                               : ((0xbU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11))));
        vlSelf->top__DOT__d_cache__DOT___GEN_256 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xcU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12))
                               : ((0xcU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12))));
        vlSelf->top__DOT__d_cache__DOT___GEN_257 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xdU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13))
                               : ((0xdU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13))));
        vlSelf->top__DOT__d_cache__DOT___GEN_258 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14))
                               : ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14))));
        vlSelf->top__DOT__d_cache__DOT___GEN_259 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15))
                               : ((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 6U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15))));
    }
    VL_EXTEND_WQ(575,64, __Vtemp170, (vlSelf->top__DOT__LSU__DOT__store_data 
                                      & vlSelf->top__DOT__d_cache__DOT__wmask));
    VL_SHIFTL_WWI(575,575,9, __Vtemp171, __Vtemp170, 
                  (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                             << 3U)));
    __Vtemp172[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U];
    __Vtemp172[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U];
    __Vtemp172[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U];
    __Vtemp172[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U];
    __Vtemp172[4U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][4U];
    __Vtemp172[5U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][5U];
    __Vtemp172[6U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][6U];
    __Vtemp172[7U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][7U];
    __Vtemp172[8U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][8U];
    __Vtemp172[9U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][9U];
    __Vtemp172[0xaU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xaU];
    __Vtemp172[0xbU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xbU];
    __Vtemp172[0xcU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xcU];
    __Vtemp172[0xdU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xdU];
    __Vtemp172[0xeU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xeU];
    __Vtemp172[0xfU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xfU];
    VL_EXTEND_WW(575,512, __Vtemp173, __Vtemp172);
    VL_EXTEND_WQ(575,64, __Vtemp174, vlSelf->top__DOT__d_cache__DOT__wmask);
    VL_SHIFTL_WWI(575,575,9, __Vtemp175, __Vtemp174, 
                  (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                             << 3U)));
    vlSelf->top__DOT__d_cache__DOT___T_13[0U] = (Vtop__ConstPool__CONST_ee9aa94f_0[0U] 
                                                 & (__Vtemp171[0U] 
                                                    | (__Vtemp173[0U] 
                                                       & (~ 
                                                          __Vtemp175[0U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[1U] = (Vtop__ConstPool__CONST_ee9aa94f_0[1U] 
                                                 & (__Vtemp171[1U] 
                                                    | (__Vtemp173[1U] 
                                                       & (~ 
                                                          __Vtemp175[1U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[2U] = (Vtop__ConstPool__CONST_ee9aa94f_0[2U] 
                                                 & (__Vtemp171[2U] 
                                                    | (__Vtemp173[2U] 
                                                       & (~ 
                                                          __Vtemp175[2U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[3U] = (Vtop__ConstPool__CONST_ee9aa94f_0[3U] 
                                                 & (__Vtemp171[3U] 
                                                    | (__Vtemp173[3U] 
                                                       & (~ 
                                                          __Vtemp175[3U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[4U] = (Vtop__ConstPool__CONST_ee9aa94f_0[4U] 
                                                 & (__Vtemp171[4U] 
                                                    | (__Vtemp173[4U] 
                                                       & (~ 
                                                          __Vtemp175[4U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[5U] = (Vtop__ConstPool__CONST_ee9aa94f_0[5U] 
                                                 & (__Vtemp171[5U] 
                                                    | (__Vtemp173[5U] 
                                                       & (~ 
                                                          __Vtemp175[5U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[6U] = (Vtop__ConstPool__CONST_ee9aa94f_0[6U] 
                                                 & (__Vtemp171[6U] 
                                                    | (__Vtemp173[6U] 
                                                       & (~ 
                                                          __Vtemp175[6U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[7U] = (Vtop__ConstPool__CONST_ee9aa94f_0[7U] 
                                                 & (__Vtemp171[7U] 
                                                    | (__Vtemp173[7U] 
                                                       & (~ 
                                                          __Vtemp175[7U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[8U] = (Vtop__ConstPool__CONST_ee9aa94f_0[8U] 
                                                 & (__Vtemp171[8U] 
                                                    | (__Vtemp173[8U] 
                                                       & (~ 
                                                          __Vtemp175[8U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[9U] = (Vtop__ConstPool__CONST_ee9aa94f_0[9U] 
                                                 & (__Vtemp171[9U] 
                                                    | (__Vtemp173[9U] 
                                                       & (~ 
                                                          __Vtemp175[9U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0xaU] = (
                                                   Vtop__ConstPool__CONST_ee9aa94f_0[0xaU] 
                                                   & (__Vtemp171[0xaU] 
                                                      | (__Vtemp173[0xaU] 
                                                         & (~ 
                                                            __Vtemp175[0xaU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0xbU] = (
                                                   Vtop__ConstPool__CONST_ee9aa94f_0[0xbU] 
                                                   & (__Vtemp171[0xbU] 
                                                      | (__Vtemp173[0xbU] 
                                                         & (~ 
                                                            __Vtemp175[0xbU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0xcU] = (
                                                   Vtop__ConstPool__CONST_ee9aa94f_0[0xcU] 
                                                   & (__Vtemp171[0xcU] 
                                                      | (__Vtemp173[0xcU] 
                                                         & (~ 
                                                            __Vtemp175[0xcU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0xdU] = (
                                                   Vtop__ConstPool__CONST_ee9aa94f_0[0xdU] 
                                                   & (__Vtemp171[0xdU] 
                                                      | (__Vtemp173[0xdU] 
                                                         & (~ 
                                                            __Vtemp175[0xdU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0xeU] = (
                                                   Vtop__ConstPool__CONST_ee9aa94f_0[0xeU] 
                                                   & (__Vtemp171[0xeU] 
                                                      | (__Vtemp173[0xeU] 
                                                         & (~ 
                                                            __Vtemp175[0xeU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0xfU] = (
                                                   Vtop__ConstPool__CONST_ee9aa94f_0[0xfU] 
                                                   & (__Vtemp171[0xfU] 
                                                      | (__Vtemp173[0xfU] 
                                                         & (~ 
                                                            __Vtemp175[0xfU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x10U] = 
        (Vtop__ConstPool__CONST_ee9aa94f_0[0x10U] & 
         (__Vtemp171[0x10U] | (__Vtemp173[0x10U] & 
                               (~ __Vtemp175[0x10U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x11U] = 
        (Vtop__ConstPool__CONST_ee9aa94f_0[0x11U] & 
         (__Vtemp171[0x11U] | (__Vtemp173[0x11U] & 
                               (~ __Vtemp175[0x11U]))));
    vlSelf->top__DOT__d_cache__DOT___GEN_341 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                & ((2U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                   & (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)));
    VL_EXTEND_WW(129,128, __Vtemp188, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
    VL_EXTEND_WW(129,128, __Vtemp191, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[0U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[1U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[2U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[3U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[4U] = 0U;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[0U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                         ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U]
                         : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U]) 
                       << 1U) : __Vtemp188[0U]) : __Vtemp191[0U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[1U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                          ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U]
                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U]) 
                        >> 0x1fU) | (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                                       ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]
                                       : ((0x7fffffffU 
                                           & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                                          | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                             << 0x1fU))) 
                                     << 1U)) : __Vtemp188[1U])
                : __Vtemp191[1U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[2U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                          ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]
                          : ((0x7fffffffU & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U]) 
                             | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                << 0x1fU))) >> 0x1fU) 
                       | (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                            ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U]
                            : ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                                >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                          << 0x1fU))) 
                          << 1U)) : __Vtemp188[2U])
                : __Vtemp191[2U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[3U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                          ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U]
                          : ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
                              >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                        << 0x1fU))) 
                        >> 0x1fU) | (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                                       ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U]
                                       : ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                                           >> 1U) | 
                                          (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                           << 0x1fU))) 
                                     << 1U)) : __Vtemp188[3U])
                : __Vtemp191[3U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[4U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                         ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U]
                         : ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                             >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                       << 0x1fU))) 
                       >> 0x1fU) : __Vtemp188[4U]) : 
               __Vtemp191[4U]);
    }
    top__DOT__EXU__DOT__ALU__DOT___alu_res_T_50 = (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder 
                                                                                >> 0x1fU)))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder)));
    top__DOT__EXU__DOT__ALU__DOT___alu_res_T_42 = (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient 
                                                                                >> 0x1fU)))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient)));
    vlSelf->top__DOT__IDU__DOT___ALUop_T_176 = ((0x13U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0xfU
                                                 : 
                                                ((0x100073U 
                                                  == vlSelf->top__DOT__IDU__DOT__inst)
                                                  ? 2U
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0xfU
                                                   : 
                                                  ((0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 4U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 5U
                                                     : 
                                                    ((0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 6U
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 0xfU
                                                       : 
                                                      ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 0x1eU
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                         ? 0xfU
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
                                                          ((0x3003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__IDU__DOT__inst))
                                                            ? 0xfU
                                                            : 
                                                           ((0x1bU 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__IDU__DOT__inst))
                                                             ? 0xcU
                                                             : 
                                                            ((0x33U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                                              ? 0xfU
                                                              : (IData)(top__DOT__IDU__DOT___ALUop_T_162)))))))))))))));
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
    vlSelf->top__DOT__i_cache_io_to_ifu_rvalid = ((1U 
                                                   == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                  & (IData)(vlSelf->top__DOT__i_cache__DOT__anyMatch));
    if ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        vlSelf->top__DOT__i_cache__DOT___GEN_170 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((0U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_0))
                       : ((0U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_0))));
        vlSelf->top__DOT__i_cache__DOT___GEN_171 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((1U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_1))
                       : ((1U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_1))));
        vlSelf->top__DOT__i_cache__DOT___GEN_172 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((2U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_2))
                       : ((2U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_2))));
        vlSelf->top__DOT__i_cache__DOT___GEN_173 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((3U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_3))
                       : ((3U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_3))));
        vlSelf->top__DOT__i_cache__DOT___GEN_174 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((4U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_4))
                       : ((4U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_4))));
        vlSelf->top__DOT__i_cache__DOT___GEN_175 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((5U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_5))
                       : ((5U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_5))));
        vlSelf->top__DOT__i_cache__DOT___GEN_176 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((6U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_6))
                       : ((6U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_6))));
        vlSelf->top__DOT__i_cache__DOT___GEN_177 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((7U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_7))
                       : ((7U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_7))));
        vlSelf->top__DOT__i_cache__DOT___GEN_178 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((8U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_8))
                       : ((8U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_8))));
        vlSelf->top__DOT__i_cache__DOT___GEN_179 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((9U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_9))
                       : ((9U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_9))));
        vlSelf->top__DOT__i_cache__DOT___GEN_180 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((0xaU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_10))
                       : ((0xaU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_10))));
        vlSelf->top__DOT__i_cache__DOT___GEN_181 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((0xbU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_11))
                       : ((0xbU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_11))));
        vlSelf->top__DOT__i_cache__DOT___GEN_182 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((0xcU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_12))
                       : ((0xcU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_12))));
        vlSelf->top__DOT__i_cache__DOT___GEN_183 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((0xdU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_13))
                       : ((0xdU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_13))));
        vlSelf->top__DOT__i_cache__DOT___GEN_184 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((0xeU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_14))
                       : ((0xeU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_14))));
        vlSelf->top__DOT__i_cache__DOT___GEN_185 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((0xfU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_3)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_15))
                       : ((0xfU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_1)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_15))));
    } else {
        vlSelf->top__DOT__i_cache__DOT___GEN_170 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_0));
        vlSelf->top__DOT__i_cache__DOT___GEN_171 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_1));
        vlSelf->top__DOT__i_cache__DOT___GEN_172 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_2));
        vlSelf->top__DOT__i_cache__DOT___GEN_173 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_3));
        vlSelf->top__DOT__i_cache__DOT___GEN_174 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_4));
        vlSelf->top__DOT__i_cache__DOT___GEN_175 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_5));
        vlSelf->top__DOT__i_cache__DOT___GEN_176 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_6));
        vlSelf->top__DOT__i_cache__DOT___GEN_177 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_7));
        vlSelf->top__DOT__i_cache__DOT___GEN_178 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_8));
        vlSelf->top__DOT__i_cache__DOT___GEN_179 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_9));
        vlSelf->top__DOT__i_cache__DOT___GEN_180 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_10));
        vlSelf->top__DOT__i_cache__DOT___GEN_181 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_11));
        vlSelf->top__DOT__i_cache__DOT___GEN_182 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_12));
        vlSelf->top__DOT__i_cache__DOT___GEN_183 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_13));
        vlSelf->top__DOT__i_cache__DOT___GEN_184 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_14));
        vlSelf->top__DOT__i_cache__DOT___GEN_185 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_15));
    }
    if ((3U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        vlSelf->top__DOT__axi__DOT___GEN_35 = ((IData)(vlSelf->top__DOT__arbiter_io_axi_out_bready)
                                                ? 0U
                                                : (IData)(vlSelf->top__DOT__axi__DOT__state));
        vlSelf->top__DOT__axi__DOT___GEN_36 = ((~ (IData)(vlSelf->top__DOT__arbiter_io_axi_out_bready)) 
                                               & (IData)(vlSelf->top__DOT__axi__DOT__axi_bvalid));
    } else {
        vlSelf->top__DOT__axi__DOT___GEN_35 = vlSelf->top__DOT__axi__DOT__state;
        vlSelf->top__DOT__axi__DOT___GEN_36 = vlSelf->top__DOT__axi__DOT__axi_bvalid;
    }
    vlSelf->top__DOT__axi__DOT___GEN_7 = (((IData)(vlSelf->top__DOT__arbiter_io_axi_out_awvalid) 
                                           & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_wvalid)) 
                                          | (IData)(vlSelf->top__DOT__axi__DOT__axi_wready));
    if (((IData)(vlSelf->top__DOT__arbiter_io_axi_out_wvalid) 
         & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready))) {
        vlSelf->top__DOT__axi__DOT___GEN_14 = (8ULL 
                                               + vlSelf->top__DOT__axi__DOT__awaddr);
        vlSelf->top__DOT__axi__DOT___GEN_15 = (0xffU 
                                               & ((IData)(vlSelf->top__DOT__axi__DOT__awlen) 
                                                  - (IData)(1U)));
    } else {
        vlSelf->top__DOT__axi__DOT___GEN_14 = vlSelf->top__DOT__axi__DOT__awaddr;
        vlSelf->top__DOT__axi__DOT___GEN_15 = (0xffU 
                                               & (IData)(vlSelf->top__DOT__axi__DOT__awlen));
    }
    if ((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))) {
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                    ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                    : 0ULL));
        vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? 0ULL : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                           ? 0ULL : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                      ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                      : 0ULL)));
    } else {
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata 
            = ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                ? 0ULL : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                           ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                           : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                               ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                               : 0ULL)));
        vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata 
            = ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                : 0ULL);
    }
    vlSelf->top__DOT__arbiter__DOT___GEN_126 = ((3U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 ? 
                                                (((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid) 
                                                  & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_bready))
                                                  ? 0U
                                                  : (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 : (IData)(vlSelf->top__DOT__arbiter__DOT__state));
    vlSelf->top__DOT__d_cache__DOT___GEN_234 = (7U 
                                                & ((3U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                                                     : (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num)));
    vlSelf->top__DOT__arbiter__DOT___GEN_94 = ((((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid) 
                                                 & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_rready)) 
                                                & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast))
                                                ? 0U
                                                : (IData)(vlSelf->top__DOT__arbiter__DOT__state));
    vlSelf->top__DOT__LSU__DOT__ms_ready_go = (1U & 
                                               ((((IData)(vlSelf->top__DOT__LSU__DOT__wen) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                     & ((2U 
                                                         == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)
                                                         : 
                                                        ((3U 
                                                          != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                         & ((4U 
                                                             == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                             ? (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                                             : 
                                                            ((6U 
                                                              != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                             & (((0U 
                                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                 & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                                & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)))))))) 
                                                 | ((IData)(vlSelf->top__DOT__LSU__DOT__ren) 
                                                    & ((1U 
                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)
                                                        : 
                                                       ((2U 
                                                         != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                        & ((3U 
                                                            != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                           & ((4U 
                                                               != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                              & ((6U 
                                                                  != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                 & (((0U 
                                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                     & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                                    & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid))))))))) 
                                                | (~ 
                                                   ((IData)(vlSelf->top__DOT__LSU__DOT__wen) 
                                                    | (IData)(vlSelf->top__DOT__LSU__DOT__ren)))));
    vlSelf->top__DOT__axi__DOT___GEN_4 = ((IData)(vlSelf->top__DOT__arbiter_io_axi_out_arvalid) 
                                          | (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid));
    if (vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid) {
        vlSelf->top__DOT__i_cache__DOT___GEN_28 = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num)));
        vlSelf->top__DOT__i_cache__DOT___GEN_29 = ((IData)(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast)
                                                    ? 3U
                                                    : (IData)(vlSelf->top__DOT__i_cache__DOT__state));
    } else {
        vlSelf->top__DOT__i_cache__DOT___GEN_28 = (7U 
                                                   & (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num));
        vlSelf->top__DOT__i_cache__DOT___GEN_29 = vlSelf->top__DOT__i_cache__DOT__state;
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_389 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                & ((2U 
                                                    != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                   & ((3U 
                                                       != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                      & ((4U 
                                                          != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                         & ((5U 
                                                             == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                            & ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid) 
                                                               & (IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)))))));
    vlSelf->top__DOT__d_cache__DOT___GEN_235 = ((3U 
                                                 == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast)
                                                   ? 5U
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                                   ? 0U
                                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                                                     ? 6U
                                                     : 1U)
                                                    : 1U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                                     ? 1U
                                                     : (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__state)))));
    vlSelf->top__DOT__d_cache__DOT___GEN_518 = ((IData)(vlSelf->reset)
                                                 ? 0ULL
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                     ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                      ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlSelf->top__DOT__d_cache__DOT__tagMem
                                                                          [
                                                                          (0x3fU 
                                                                           & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))])) 
                                                          << 0xaU) 
                                                         | (QData)((IData)(
                                                                           (0x3c0U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                                >> 6U)) 
                                                                               << 6U)))))
                                                         : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                                        : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                                       : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))))))));
    __Vtemp197[0U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[2U];
    __Vtemp197[1U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[3U];
    __Vtemp197[2U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[4U];
    __Vtemp197[3U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[5U];
    __Vtemp197[4U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[6U];
    __Vtemp197[5U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[7U];
    __Vtemp197[6U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[8U];
    __Vtemp197[7U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[9U];
    __Vtemp197[8U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xaU];
    __Vtemp197[9U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xbU];
    __Vtemp197[0xaU] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xcU];
    __Vtemp197[0xbU] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xdU];
    __Vtemp197[0xcU] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xeU];
    __Vtemp197[0xdU] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xfU];
    VL_EXTEND_WW(512,448, __Vtemp198, __Vtemp197);
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_272[0U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_272[1U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_272[2U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_272[3U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_272[4U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[4U];
        vlSelf->top__DOT__d_cache__DOT___GEN_272[5U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[5U];
        vlSelf->top__DOT__d_cache__DOT___GEN_272[6U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[6U];
        vlSelf->top__DOT__d_cache__DOT___GEN_272[7U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[7U];
        vlSelf->top__DOT__d_cache__DOT___GEN_272[8U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[8U];
        vlSelf->top__DOT__d_cache__DOT___GEN_272[9U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[9U];
        vlSelf->top__DOT__d_cache__DOT___GEN_272[0xaU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xaU];
        vlSelf->top__DOT__d_cache__DOT___GEN_272[0xbU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xbU];
        vlSelf->top__DOT__d_cache__DOT___GEN_272[0xcU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xcU];
        vlSelf->top__DOT__d_cache__DOT___GEN_272[0xdU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xdU];
        vlSelf->top__DOT__d_cache__DOT___GEN_272[0xeU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xeU];
        vlSelf->top__DOT__d_cache__DOT___GEN_272[0xfU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xfU];
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_272[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[0U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_272[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][1U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[1U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_272[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][2U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[2U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_272[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][3U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[3U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_272[4U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[4U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][4U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[4U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[4U])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[4U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[4U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[4U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_272[5U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[5U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][5U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[5U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[5U])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[5U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[5U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[5U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_272[6U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[6U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][6U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[6U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[6U])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[6U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[6U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[6U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_272[7U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[7U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][7U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[7U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[7U])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[7U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[7U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[7U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_272[8U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[8U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][8U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[8U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[8U])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[8U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[8U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[8U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_272[9U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[9U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][9U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[9U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[9U])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[9U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[9U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[9U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_272[0xaU] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0xaU]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0xaU]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xaU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xaU])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[0xaU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xaU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xaU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_272[0xbU] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0xbU]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0xbU]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xbU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xbU])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[0xbU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xbU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xbU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_272[0xcU] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0xcU]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0xcU]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xcU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xcU])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[0xcU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xcU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xcU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_272[0xdU] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0xdU]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0xdU]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xdU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xdU])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[0xdU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xdU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xdU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_272[0xeU] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0xeU]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0xeU]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xeU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xeU])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[0xeU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xeU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xeU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_272[0xfU] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0xfU]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0xfU]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xfU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xfU])
                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
                            ? __Vtemp198[0xfU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xfU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xfU])));
    }
    top__DOT__EXU__DOT__ALU__DOT___alu_res_T_98 = (
                                                   (0x35U 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? top__DOT__EXU__DOT__ALU__DOT___alu_res_T_42
                                                    : 
                                                   ((0x31U 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient
                                                     : 
                                                    ((0x30U 
                                                      == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                      ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient
                                                      : 
                                                     ((0x13U 
                                                       == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                       ? top__DOT__EXU__DOT__ALU__DOT___alu_res_T_42
                                                       : 
                                                      ((0x12U 
                                                        == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                        ? 
                                                       (((QData)((IData)(
                                                                         ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo 
                                                                           >> 0x1fU)
                                                                           ? 0xffffffffU
                                                                           : 0U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo)))
                                                        : 
                                                       ((0x11U 
                                                         == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                         ? 
                                                        (((QData)((IData)(
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
                                                         | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo)))
                                                         : 
                                                        ((0x1dU 
                                                          == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res 
                                                                             >> 0x1fU)
                                                                             ? 0xffffffffU
                                                                             : 0U))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res)))
                                                          : 
                                                         ((0x1cU 
                                                           == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            ((VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))) 
                                                                              >> 0x1fU)
                                                                              ? 0xffffffffU
                                                                              : 0U))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value), 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))))))
                                                           : 
                                                          ((0x16U 
                                                            == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                            ? 
                                                           (((QData)((IData)(
                                                                             ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res 
                                                                                >> 0x1fU)))
                                                                               ? 0xffffffffU
                                                                               : 0U))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res)))
                                                            : top__DOT__EXU__DOT__ALU__DOT___alu_res_T_80)))))))));
    Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(
                                                              (2U 
                                                               == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176)));
    Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit(
                                                             (0x3dU 
                                                              == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176)));
    Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(
                                                       ((IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)
                                                         ? vlSelf->top__DOT__WBU__DOT__ws_pc
                                                         : 
                                                        ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)
                                                          ? vlSelf->top__DOT__LSU__DOT__ms_pc
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid)
                                                           ? vlSelf->top__DOT__EXU__DOT__es_pc
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                            ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                            : vlSelf->top__DOT__IFU__DOT__fs_pc)))));
    vlSelf->top__DOT__IDU__DOT___inst_type_T_188 = 
        ((0x13U == (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
          ? 0x40U : ((0x17U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                      ? 0x42U : ((0x37U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                                  ? 0x42U : (IData)(top__DOT__IDU__DOT___inst_type_T_185))));
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_226 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((0U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_0)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_0);
        vlSelf->top__DOT__d_cache__DOT___GEN_227 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_1)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_1);
        vlSelf->top__DOT__d_cache__DOT___GEN_228 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_2)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_2);
        vlSelf->top__DOT__d_cache__DOT___GEN_229 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_3)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_3);
        vlSelf->top__DOT__d_cache__DOT___GEN_230 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_4)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_4);
        vlSelf->top__DOT__d_cache__DOT___GEN_231 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_5)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_5);
        vlSelf->top__DOT__d_cache__DOT___GEN_232 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_6)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_6);
        vlSelf->top__DOT__d_cache__DOT___GEN_233 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((7U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_7)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_7);
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_226 = vlSelf->top__DOT__d_cache__DOT__receive_data_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_227 = vlSelf->top__DOT__d_cache__DOT__receive_data_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_228 = vlSelf->top__DOT__d_cache__DOT__receive_data_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_229 = vlSelf->top__DOT__d_cache__DOT__receive_data_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_230 = vlSelf->top__DOT__d_cache__DOT__receive_data_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_231 = vlSelf->top__DOT__d_cache__DOT__receive_data_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_232 = vlSelf->top__DOT__d_cache__DOT__receive_data_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_233 = vlSelf->top__DOT__d_cache__DOT__receive_data_7;
    }
    __Vtemp210[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U];
    __Vtemp210[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U];
    __Vtemp210[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U];
    __Vtemp210[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U];
    __Vtemp210[4U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][4U];
    __Vtemp210[5U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][5U];
    __Vtemp210[6U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][6U];
    __Vtemp210[7U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][7U];
    __Vtemp210[8U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][8U];
    __Vtemp210[9U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][9U];
    __Vtemp210[0xaU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xaU];
    __Vtemp210[0xbU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xbU];
    __Vtemp210[0xcU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xcU];
    __Vtemp210[0xdU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xdU];
    __Vtemp210[0xeU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xeU];
    __Vtemp210[0xfU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xfU];
    VL_SHIFTR_WWI(512,512,9, __Vtemp211, __Vtemp210, 
                  (0x1f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                             << 3U)));
    VL_EXTEND_WQ(512,64, __Vtemp212, ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                       ? 0ULL : ((3U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? 0ULL
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? 0ULL
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 0ULL
                                                    : 
                                                   (((0U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                     & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3))
                                                     ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                                                     : 0ULL))))));
    if ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_589[0U] 
            = __Vtemp211[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[1U] 
            = __Vtemp211[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[2U] 
            = __Vtemp211[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[3U] 
            = __Vtemp211[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[4U] 
            = __Vtemp211[4U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[5U] 
            = __Vtemp211[5U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[6U] 
            = __Vtemp211[6U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[7U] 
            = __Vtemp211[7U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[8U] 
            = __Vtemp211[8U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[9U] 
            = __Vtemp211[9U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[0xaU] 
            = __Vtemp211[0xaU];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[0xbU] 
            = __Vtemp211[0xbU];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[0xcU] 
            = __Vtemp211[0xcU];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[0xdU] 
            = __Vtemp211[0xdU];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[0xeU] 
            = __Vtemp211[0xeU];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[0xfU] 
            = __Vtemp211[0xfU];
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_589[0U] 
            = __Vtemp212[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[1U] 
            = __Vtemp212[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[2U] 
            = __Vtemp212[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[3U] 
            = __Vtemp212[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[4U] 
            = __Vtemp212[4U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[5U] 
            = __Vtemp212[5U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[6U] 
            = __Vtemp212[6U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[7U] 
            = __Vtemp212[7U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[8U] 
            = __Vtemp212[8U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[9U] 
            = __Vtemp212[9U];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[0xaU] 
            = __Vtemp212[0xaU];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[0xbU] 
            = __Vtemp212[0xbU];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[0xcU] 
            = __Vtemp212[0xcU];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[0xdU] 
            = __Vtemp212[0xdU];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[0xeU] 
            = __Vtemp212[0xeU];
        vlSelf->top__DOT__d_cache__DOT___GEN_589[0xfU] 
            = __Vtemp212[0xfU];
    }
    if (vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid) {
        vlSelf->top__DOT__i_cache__DOT___GEN_26 = (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num))
                                                    ? vlSelf->top__DOT__i_cache__DOT__receive_data_0
                                                    : vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata);
        vlSelf->top__DOT__i_cache__DOT___GEN_27 = (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num))
                                                    ? vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata
                                                    : vlSelf->top__DOT__i_cache__DOT__receive_data_1);
    } else {
        vlSelf->top__DOT__i_cache__DOT___GEN_26 = vlSelf->top__DOT__i_cache__DOT__receive_data_0;
        vlSelf->top__DOT__i_cache__DOT___GEN_27 = vlSelf->top__DOT__i_cache__DOT__receive_data_1;
    }
    vlSelf->top__DOT__LSU_io_ms_to_ws_valid = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid) 
                                               & (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
    vlSelf->top__DOT__LSU__DOT__ms_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)) 
                                               | (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go)));
    vlSelf->top__DOT__LSU_io_ms_fwd_ready = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid) 
                                             & (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
    VL_EXTEND_WQ(127,64, __Vtemp216, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp217, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp218, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp219, (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                      >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))));
    VL_EXTEND_WQ(127,64, __Vtemp220, vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp221, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp222, __Vtemp221, 
                  (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp223, ((0x34U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                       ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder
                                       : ((0x33U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                           ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder
                                           : ((0x32U 
                                               == vlSelf->top__DOT__EXU__DOT__ALUop)
                                               ? top__DOT__EXU__DOT__ALU__DOT___alu_res_T_50
                                               : ((0x14U 
                                                   == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                   ? top__DOT__EXU__DOT__ALU__DOT___alu_res_T_50
                                                   : top__DOT__EXU__DOT__ALU__DOT___alu_res_T_98)))));
    if ((0x47U == vlSelf->top__DOT__EXU__DOT__ALUop)) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U] 
            = __Vtemp216[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = __Vtemp216[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = __Vtemp216[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = (0x7fffffffU & __Vtemp216[3U]);
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp217[0U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                     ? __Vtemp218[0U]
                                     : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                         ? __Vtemp219[0U]
                                         : ((0x39U 
                                             == vlSelf->top__DOT__EXU__DOT__ALUop)
                                             ? __Vtemp220[0U]
                                             : ((0x37U 
                                                 == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                 ? 
                                                __Vtemp222[0U]
                                                 : 
                                                __Vtemp223[0U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp217[1U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                     ? __Vtemp218[1U]
                                     : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                         ? __Vtemp219[1U]
                                         : ((0x39U 
                                             == vlSelf->top__DOT__EXU__DOT__ALUop)
                                             ? __Vtemp220[1U]
                                             : ((0x37U 
                                                 == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                 ? 
                                                __Vtemp222[1U]
                                                 : 
                                                __Vtemp223[1U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp217[2U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                     ? __Vtemp218[2U]
                                     : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                         ? __Vtemp219[2U]
                                         : ((0x39U 
                                             == vlSelf->top__DOT__EXU__DOT__ALUop)
                                             ? __Vtemp220[2U]
                                             : ((0x37U 
                                                 == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                 ? 
                                                __Vtemp222[2U]
                                                 : 
                                                __Vtemp223[2U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = (0x7fffffffU & ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                               ? __Vtemp217[3U] : (
                                                   (0x3fU 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? 
                                                   __Vtemp218[3U]
                                                    : 
                                                   ((0x38U 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? 
                                                    __Vtemp219[3U]
                                                     : 
                                                    ((0x39U 
                                                      == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                      ? 
                                                     __Vtemp220[3U]
                                                      : 
                                                     ((0x37U 
                                                       == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                       ? 
                                                      __Vtemp222[3U]
                                                       : 
                                                      __Vtemp223[3U]))))));
    }
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
    vlSelf->top__DOT__IDU__DOT__conflict_es_rs1 = (
                                                   (((~ (IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)) 
                                                     | (0x45U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                                    | (1U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))) 
                                                   & (((((0x1fU 
                                                          & (vlSelf->top__DOT__IDU__DOT__inst 
                                                             >> 0xfU)) 
                                                         == (IData)(vlSelf->top__DOT__EXU__DOT__es_rd)) 
                                                        & (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                                               >> 0xfU)))) 
                                                       & (IData)(vlSelf->top__DOT__EXU__DOT__es_rf_we)) 
                                                      & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid)));
    top__DOT__IDU__DOT___conflict_es_rs1_T_4 = (1U 
                                                & (((~ (IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)) 
                                                    | (0x45U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                                   | (1U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))));
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
    vlSelf->top__DOT__LSU__DOT__rdata = ((7U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                          ? (QData)((IData)(
                                                            (0xffffU 
                                                             & vlSelf->top__DOT__d_cache__DOT___GEN_589[0U])))
                                          : ((6U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                              ? (((
                                                   (0x80U 
                                                    & vlSelf->top__DOT__d_cache__DOT___GEN_589[0U])
                                                    ? 0xffffffffffffffULL
                                                    : 0ULL) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelf->top__DOT__d_cache__DOT___GEN_589[0U]))))
                                              : ((5U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                  ? 
                                                 ((((0x8000U 
                                                     & vlSelf->top__DOT__d_cache__DOT___GEN_589[0U])
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSelf->top__DOT__d_cache__DOT___GEN_589[0U]))))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                   ? (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___GEN_589[0U]))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & vlSelf->top__DOT__d_cache__DOT___GEN_589[0U])))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__d_cache__DOT___GEN_589[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__d_cache__DOT___GEN_589[0U])))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((vlSelf->top__DOT__d_cache__DOT___GEN_589[0U] 
                                                                         >> 0x1fU)
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__d_cache__DOT___GEN_589[0U])))
                                                      : 
                                                     (((QData)((IData)(
                                                                       vlSelf->top__DOT__d_cache__DOT___GEN_589[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__d_cache__DOT___GEN_589[0U]))))))))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_4 
        = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_allowin)
            ? 0U : (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state));
    vlSelf->top__DOT__EXU__DOT__es_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__EXU__DOT__es_valid)) 
                                               | ((~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)) 
                                                  & (IData)(vlSelf->top__DOT__LSU__DOT__ms_allowin))));
    vlSelf->top__DOT__IDU__DOT__csr_index = ((0x342U 
                                              == (0xfffU 
                                                  & (IData)(vlSelf->top__DOT__IDU__DOT__imm)))
                                              ? 3U : 
                                             ((0x300U 
                                               == (0xfffU 
                                                   & (IData)(vlSelf->top__DOT__IDU__DOT__imm)))
                                               ? 2U
                                               : (0x341U 
                                                  == 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->top__DOT__IDU__DOT__imm)))));
    vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1 = ((IData)(top__DOT__IDU__DOT___conflict_es_rs1_T_4) 
                                                   & (((((0x1fU 
                                                          & (vlSelf->top__DOT__IDU__DOT__inst 
                                                             >> 0xfU)) 
                                                         == (IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_dst)) 
                                                        & (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                                               >> 0xfU)))) 
                                                       & (IData)(vlSelf->top__DOT__LSU_io_ms_rf_we)) 
                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)));
    vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1 = ((IData)(top__DOT__IDU__DOT___conflict_es_rs1_T_4) 
                                                   & (((((0x1fU 
                                                          & (vlSelf->top__DOT__IDU__DOT__inst 
                                                             >> 0xfU)) 
                                                         == (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)) 
                                                        & (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                                               >> 0xfU)))) 
                                                       & (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we)) 
                                                      & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)));
    vlSelf->top__DOT__IDU__DOT__conflict_es_rs2 = (
                                                   ((((~ (IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)) 
                                                      | (0x44U 
                                                         == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                                     | (0x45U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                                    | (3U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))) 
                                                   & (((((IData)(vlSelf->top__DOT__IDU__DOT__rs2) 
                                                         == (IData)(vlSelf->top__DOT__EXU__DOT__es_rd)) 
                                                        & (0U 
                                                           != (IData)(vlSelf->top__DOT__IDU__DOT__rs2))) 
                                                       & (IData)(vlSelf->top__DOT__EXU__DOT__es_rf_we)) 
                                                      & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid)));
    top__DOT__IDU__DOT___conflict_es_rs2_T_6 = (1U 
                                                & ((((~ (IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)) 
                                                     | (0x44U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                                    | (0x45U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188))) 
                                                   | (3U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))));
    vlSelf->top__DOT__LSU_io_ms_fwd_res = ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                            ? vlSelf->top__DOT__LSU__DOT__rdata
                                            : vlSelf->top__DOT__LSU__DOT__ms_res);
    vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data 
        = vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg
        [((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
           ? 0U : ((0x3eU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))
                    ? 1U : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))];
    vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2 = ((IData)(top__DOT__IDU__DOT___conflict_es_rs2_T_6) 
                                                   & (((((IData)(vlSelf->top__DOT__IDU__DOT__rs2) 
                                                         == (IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_dst)) 
                                                        & (0U 
                                                           != (IData)(vlSelf->top__DOT__IDU__DOT__rs2))) 
                                                       & (IData)(vlSelf->top__DOT__LSU_io_ms_rf_we)) 
                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)));
    vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2 = ((IData)(top__DOT__IDU__DOT___conflict_es_rs2_T_6) 
                                                   & (((((IData)(vlSelf->top__DOT__IDU__DOT__rs2) 
                                                         == (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)) 
                                                        & (0U 
                                                           != (IData)(vlSelf->top__DOT__IDU__DOT__rs2))) 
                                                       & (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we)) 
                                                      & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)));
    top__DOT__IDU__DOT___rdata1_T_1 = ((IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1)
                                        ? vlSelf->top__DOT__LSU_io_ms_fwd_res
                                        : ((IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1)
                                            ? vlSelf->top__DOT__WBU__DOT__ws_res
                                            : ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0xfU)))
                                                ? 0ULL
                                                : vlSelf->top__DOT__Register__DOT__Reg
                                               [(0x1fU 
                                                 & (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0xfU))])));
    vlSelf->top__DOT__IDU__DOT___rdata2_T_1 = ((IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2)
                                                ? vlSelf->top__DOT__LSU_io_ms_fwd_res
                                                : ((IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2)
                                                    ? vlSelf->top__DOT__WBU__DOT__ws_res
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__IDU_io_raddr2))
                                                     ? 0ULL
                                                     : 
                                                    vlSelf->top__DOT__Register__DOT__Reg
                                                    [vlSelf->top__DOT__IDU_io_raddr2])));
    top__DOT__IDU__DOT___ds_ready_go_T_33 = (1U & (
                                                   ((((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2) 
                                                      & ((IData)(vlSelf->top__DOT__EXU_io_es_fwd_ready) 
                                                         & (~ (IData)(vlSelf->top__DOT__EXU_io_es_ld)))) 
                                                     | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)) 
                                                         & (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2)) 
                                                        & (IData)(vlSelf->top__DOT__LSU_io_ms_fwd_ready))) 
                                                    | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)) 
                                                        & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2))) 
                                                       & (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2))) 
                                                   | (~ 
                                                      (((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2)))));
    if (vlSelf->top__DOT__IDU__DOT__conflict_es_rs1) {
        top__DOT__IDU__DOT___br_taken_T = (((QData)((IData)(
                                                            vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
        vlSelf->top__DOT__IDU__DOT__rdata1 = (((QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
    } else {
        top__DOT__IDU__DOT___br_taken_T = top__DOT__IDU__DOT___rdata1_T_1;
        vlSelf->top__DOT__IDU__DOT__rdata1 = top__DOT__IDU__DOT___rdata1_T_1;
    }
    if (vlSelf->top__DOT__IDU__DOT__conflict_es_rs2) {
        top__DOT__IDU__DOT___br_taken_T_1 = (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
        vlSelf->top__DOT__IDU__DOT__rdata2 = (((QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
    } else {
        top__DOT__IDU__DOT___br_taken_T_1 = vlSelf->top__DOT__IDU__DOT___rdata2_T_1;
        vlSelf->top__DOT__IDU__DOT__rdata2 = vlSelf->top__DOT__IDU__DOT___rdata2_T_1;
    }
    vlSelf->top__DOT__IDU_io_ds_ready_go = ((((((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1) 
                                                & ((IData)(vlSelf->top__DOT__EXU_io_es_fwd_ready) 
                                                   & (~ (IData)(vlSelf->top__DOT__EXU_io_es_ld)))) 
                                               | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1)) 
                                                   & (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1)) 
                                                  & (IData)(vlSelf->top__DOT__LSU_io_ms_fwd_ready))) 
                                              | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1)) 
                                                  & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1))) 
                                                 & (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1))) 
                                             | (~ (
                                                   ((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1)))) 
                                            & (IData)(top__DOT__IDU__DOT___ds_ready_go_T_33));
    vlSelf->top__DOT__IDU__DOT__src1 = ((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                                         ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                         : vlSelf->top__DOT__IDU__DOT__rdata1);
    vlSelf->top__DOT__IDU__DOT__br_taken = ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst)) 
                                            | ((0x67U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst)) 
                                               | ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 
                                                  (top__DOT__IDU__DOT___br_taken_T 
                                                   != top__DOT__IDU__DOT___br_taken_T_1)
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 
                                                   (top__DOT__IDU__DOT___br_taken_T 
                                                    == top__DOT__IDU__DOT___br_taken_T_1)
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 
                                                    VL_GTES_IQQ(1,64,64, top__DOT__IDU__DOT___br_taken_T, top__DOT__IDU__DOT___br_taken_T_1)
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 
                                                     VL_LTS_IQQ(1,64,64, top__DOT__IDU__DOT___br_taken_T, top__DOT__IDU__DOT___br_taken_T_1)
                                                      : 
                                                     ((0x6063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 
                                                      (vlSelf->top__DOT__IDU__DOT__rdata1 
                                                       < vlSelf->top__DOT__IDU__DOT__rdata2)
                                                       : 
                                                      ((0x7063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 
                                                       (vlSelf->top__DOT__IDU__DOT__rdata1 
                                                        >= vlSelf->top__DOT__IDU__DOT__rdata2)
                                                        : 
                                                       ((0x73U 
                                                         == vlSelf->top__DOT__IDU__DOT__inst) 
                                                        | (0x30200073U 
                                                           == vlSelf->top__DOT__IDU__DOT__inst))))))))));
    vlSelf->top__DOT__IDU_io_ds_to_es_valid = ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid) 
                                               & (IData)(vlSelf->top__DOT__IDU_io_ds_ready_go));
    vlSelf->top__DOT__IDU__DOT__ds_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                               | ((IData)(vlSelf->top__DOT__IDU_io_ds_ready_go) 
                                                  & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))));
    vlSelf->top__DOT__IDU_io_ds_allowin = (1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                                 | ((IData)(vlSelf->top__DOT__IDU_io_ds_ready_go) 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))));
    top__DOT__IDU__DOT___br_target_T_1 = (vlSelf->top__DOT__IDU__DOT__src1 
                                          + ((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                              ? vlSelf->top__DOT__IDU__DOT__imm
                                              : vlSelf->top__DOT__IDU__DOT__rdata2));
    vlSelf->top__DOT__IDU__DOT___T_7 = ((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                        & (~ (IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel)));
    vlSelf->top__DOT__IDU_io_br_taken = (((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                          & (IData)(vlSelf->top__DOT__IDU_io_ds_ready_go)) 
                                         & (~ (IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel)));
    vlSelf->top__DOT__IDU__DOT___GEN_1 = (((((IData)(vlSelf->top__DOT__IDU__DOT__ds_allowin) 
                                             & (IData)(vlSelf->top__DOT__IFU__DOT__fs_valid)) 
                                            & (IData)(vlSelf->top__DOT__IDU__DOT__br_taken)) 
                                           & (~ (IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel))) 
                                          | ((~ (((IData)(vlSelf->top__DOT__IDU__DOT__ds_allowin) 
                                                  & (IData)(vlSelf->top__DOT__IFU__DOT__fs_valid)) 
                                                 & (IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel))) 
                                             & (IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel)));
    vlSelf->top__DOT__IFU__DOT___GEN_2 = ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                          | ((~ (((IData)(vlSelf->top__DOT__IFU__DOT__fs_valid) 
                                                  & (IData)(vlSelf->top__DOT__IDU_io_ds_allowin)) 
                                                 & (IData)(vlSelf->top__DOT__IFU__DOT__cache_init))) 
                                             & (IData)(vlSelf->top__DOT__IFU__DOT__cache_init)));
    top__DOT__IFU__DOT___T_1 = ((IData)(vlSelf->top__DOT__IFU__DOT__fs_valid) 
                                & (IData)(vlSelf->top__DOT__IDU_io_ds_allowin));
    vlSelf->top__DOT__IDU_io_br_target = ((0x67U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                           ? (0xfffffffffffffffeULL 
                                              & top__DOT__IDU__DOT___br_target_T_1)
                                           : ((0x73U 
                                               == vlSelf->top__DOT__IDU__DOT__inst)
                                               ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                                               : ((0x30200073U 
                                                   == vlSelf->top__DOT__IDU__DOT__inst)
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                                                   : top__DOT__IDU__DOT___br_target_T_1)));
    vlSelf->top__DOT__IFU_io_axi_out_rready = (1U & 
                                               ((~ (IData)(vlSelf->top__DOT__IFU__DOT__fs_valid)) 
                                                | (IData)(top__DOT__IFU__DOT___T_1)));
    vlSelf->top__DOT__i_cache__DOT___GEN_20 = ((IData)(vlSelf->top__DOT__IFU_io_axi_out_rready)
                                                ? 0U
                                                : (IData)(vlSelf->top__DOT__i_cache__DOT__state));
    vlSelf->top__DOT__i_cache_io_to_axi_rready = ((1U 
                                                   != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                  & ((2U 
                                                      == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                     | (IData)(vlSelf->top__DOT__IFU_io_axi_out_rready)));
    vlSelf->top__DOT__arbiter_io_axi_out_rready = (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                     ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_rready)
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                      ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_rready)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid) 
                                                      & (IData)(vlSelf->top__DOT__i_cache_io_to_axi_rready))))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__i_cache_io_to_axi_rready)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                      ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_rready)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                                      & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_rready)))));
    if ((0U == (IData)(vlSelf->top__DOT__axi__DOT__arlen))) {
        vlSelf->top__DOT__axi__DOT___GEN_31 = (0xffU 
                                               & (IData)(vlSelf->top__DOT__axi__DOT__arlen));
        vlSelf->top__DOT__axi__DOT___GEN_27 = ((IData)(vlSelf->top__DOT__arbiter_io_axi_out_rready)
                                                ? 0U
                                                : (IData)(vlSelf->top__DOT__axi__DOT__state));
        vlSelf->top__DOT__axi__DOT___GEN_29 = ((~ (IData)(vlSelf->top__DOT__arbiter_io_axi_out_rready)) 
                                               & (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid));
        vlSelf->top__DOT__axi__DOT___GEN_30 = vlSelf->top__DOT__axi__DOT__araddr;
    } else {
        vlSelf->top__DOT__axi__DOT___GEN_31 = (0xffU 
                                               & ((IData)(vlSelf->top__DOT__arbiter_io_axi_out_rready)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__axi__DOT__arlen) 
                                                   - (IData)(1U))
                                                   : (IData)(vlSelf->top__DOT__axi__DOT__arlen)));
        vlSelf->top__DOT__axi__DOT___GEN_27 = vlSelf->top__DOT__axi__DOT__state;
        vlSelf->top__DOT__axi__DOT___GEN_29 = vlSelf->top__DOT__axi__DOT__axi_rvalid;
        vlSelf->top__DOT__axi__DOT___GEN_30 = ((IData)(vlSelf->top__DOT__arbiter_io_axi_out_rready)
                                                ? (8ULL 
                                                   + vlSelf->top__DOT__axi__DOT__araddr)
                                                : vlSelf->top__DOT__axi__DOT__araddr);
    }
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
    vlSelf->top__DOT__IFU_io_axi_out_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_io_ds_to_es_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_io_br_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_io_br_target = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU_io_ds_allowin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_io_ds_ready_go = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_io_raddr2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EXU_io_es_to_ms_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU_io_es_fwd_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU_io_es_ld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_io_ms_to_ws_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_io_ms_rf_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_io_ms_fwd_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_io_ms_fwd_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__LSU_io_axi_out_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_io_axi_out_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_axi_out_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_axi_out_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_axi_out_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_axi_out_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_io_axi_out_bready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache_io_to_ifu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache_io_to_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache_io_to_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache_io_to_axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache_io_to_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache_io_to_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache_io_to_axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache_io_to_axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache_io_to_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache_io_to_axi_wdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache_io_to_axi_wstrb = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache_io_to_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache_io_to_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi_io_axi_out_rlast = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__diff_step = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__Register__DOT__Reg[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__IFU__DOT__br_target = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU__DOT__fs_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__fs_pc_next = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU__DOT__cache_init = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__fs_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU__DOT__fs_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__ds_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__ds_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__br_taken_cancel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__src1_is_pc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___inst_type_T_188 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT__csr_write = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__IDU__DOT__conflict_es_rs1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__src2_is_imm = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IDU__DOT__conflict_es_rs2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__conflict_ws_rs2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__ds_allowin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__rdata1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT___rdata2_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT__rdata2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT__br_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT___ALUop_T_176 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT__csr_index = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__IDU__DOT__src1 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT__EXU__DOT__ALUop = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__load_type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__EXU__DOT__es_allowin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_quotient = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res = VL_RAND_RESET_Q(63);
    VL_RAND_RESET_W(127, vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___res_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_4 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(130, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_4 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___step_num_T_1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(129, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22);
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
    vlSelf->top__DOT__LSU__DOT__ms_ready_go = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__ms_allowin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__WBU__DOT__ws_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT__ws_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__WBU__DOT__ws_rf_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT__ws_rf_dst = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__WBU__DOT__ws_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__arbiter__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__arbiter__DOT___GEN_0 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__arbiter__DOT___GEN_94 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__arbiter__DOT___GEN_126 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__cacheLine[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__i_cache__DOT__validMem[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_0_MPORT_data = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__i_cache__DOT__tagMem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__i_cache__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__allvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__i_cache__DOT__unvalidIndex = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__i_cache__DOT__tagMatch_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__tagMatch_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__tagMatch_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__tagMatch_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__anyMatch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__receive_data_0 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i_cache__DOT__receive_data_1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i_cache__DOT__receive_num = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT__quene_0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_6 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_7 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_8 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_9 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_10 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_11 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_12 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_13 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_14 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT__quene_15 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_15 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2 = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__i_cache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT___GEN_20 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT___GEN_26 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i_cache__DOT___GEN_27 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i_cache__DOT___GEN_28 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT___GEN_29 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT___GEN_161 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT___GEN_170 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_171 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_172 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_173 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_174 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_175 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_176 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_177 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_178 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_179 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_180 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_181 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_182 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_183 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_184 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_185 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_368 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_392 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_400 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_574 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__d_cache__DOT__validMem[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__d_cache__DOT__tagMem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__d_cache__DOT__dirtyMem[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__allvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__d_cache__DOT__unvalidIndex = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__d_cache__DOT__tagMatch_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__tagMatch_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__tagMatch_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__tagMatch_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__anyMatch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__tagIndex = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__d_cache__DOT__write_back_data);
    vlSelf->top__DOT__d_cache__DOT__write_back_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__receive_data_0 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT__receive_data_1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT__receive_data_2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT__receive_data_3 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT__receive_data_4 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT__receive_data_5 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT__receive_data_6 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT__receive_data_7 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT__receive_num = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__d_cache__DOT__quene_0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT__quene_1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT__quene_2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT__quene_3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT__quene_4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT__quene_5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT__quene_6 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT__quene_7 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT__quene_8 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT__quene_9 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT__quene_10 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT__quene_11 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT__quene_12 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT__quene_13 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT__quene_14 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT__quene_15 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_15 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2 = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__d_cache__DOT__wmask = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__d_cache__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_16 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(575, vlSelf->top__DOT__d_cache__DOT___T_13);
    VL_RAND_RESET_W(256, vlSelf->top__DOT__d_cache__DOT__lo);
    VL_RAND_RESET_W(256, vlSelf->top__DOT__d_cache__DOT__hi);
    vlSelf->top__DOT__d_cache__DOT___GEN_226 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_227 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_228 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_229 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_230 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_231 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_232 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_233 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_234 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__d_cache__DOT___GEN_235 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__d_cache__DOT___GEN_244 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_245 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_246 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_247 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_248 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_249 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_250 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_251 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_252 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_253 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_254 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_255 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_256 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_257 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_258 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_259 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__d_cache__DOT___GEN_272);
    vlSelf->top__DOT__d_cache__DOT___GEN_341 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_356 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_380 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_389 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_571 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__d_cache__DOT___GEN_589);
    vlSelf->top__DOT__d_cache__DOT___GEN_518 = VL_RAND_RESET_Q(42);
    vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axi__DOT__axi_wready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi__DOT__axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi__DOT__axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi__DOT__arlen = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__axi__DOT__awlen = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__axi__DOT__araddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axi__DOT__awaddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axi__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__axi__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi__DOT___GEN_14 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axi__DOT___GEN_15 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__axi__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi__DOT___GEN_27 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__axi__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi__DOT___GEN_30 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axi__DOT___GEN_31 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__axi__DOT___GEN_35 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__axi__DOT___GEN_36 = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_pmem_read__1__Rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
