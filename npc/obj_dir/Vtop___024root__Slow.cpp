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
    CData/*3:0*/ top__DOT__d_cache__DOT___GEN_38;
    CData/*7:0*/ top__DOT__d_cache__DOT___GEN_533;
    SData/*10:0*/ top__DOT__i_cache__DOT___quene_T_2;
    SData/*10:0*/ top__DOT__i_cache__DOT___quene_T_5;
    SData/*10:0*/ top__DOT__d_cache__DOT___quene_T_2;
    SData/*10:0*/ top__DOT__d_cache__DOT___quene_T_5;
    VlWide<3>/*95:0*/ __Vtemp104;
    VlWide<3>/*95:0*/ __Vtemp105;
    VlWide<3>/*95:0*/ __Vtemp109;
    VlWide<3>/*95:0*/ __Vtemp113;
    VlWide<3>/*95:0*/ __Vtemp120;
    VlWide<3>/*95:0*/ __Vtemp124;
    VlWide<3>/*95:0*/ __Vtemp125;
    VlWide<3>/*95:0*/ __Vtemp126;
    VlWide<4>/*127:0*/ __Vtemp130;
    VlWide<5>/*159:0*/ __Vtemp131;
    VlWide<5>/*159:0*/ __Vtemp134;
    VlWide<5>/*159:0*/ __Vtemp137;
    VlWide<4>/*127:0*/ __Vtemp143;
    VlWide<3>/*95:0*/ __Vtemp153;
    VlWide<3>/*95:0*/ __Vtemp156;
    VlWide<5>/*159:0*/ __Vtemp167;
    VlWide<5>/*159:0*/ __Vtemp170;
    VlWide<6>/*191:0*/ __Vtemp174;
    VlWide<6>/*191:0*/ __Vtemp175;
    VlWide<4>/*127:0*/ __Vtemp176;
    VlWide<6>/*191:0*/ __Vtemp177;
    VlWide<6>/*191:0*/ __Vtemp178;
    VlWide<6>/*191:0*/ __Vtemp179;
    VlWide<4>/*127:0*/ __Vtemp187;
    VlWide<4>/*127:0*/ __Vtemp199;
    VlWide<4>/*127:0*/ __Vtemp200;
    VlWide<4>/*127:0*/ __Vtemp201;
    VlWide<4>/*127:0*/ __Vtemp205;
    VlWide<4>/*127:0*/ __Vtemp206;
    VlWide<4>/*127:0*/ __Vtemp207;
    VlWide<4>/*127:0*/ __Vtemp208;
    VlWide<4>/*127:0*/ __Vtemp209;
    VlWide<4>/*127:0*/ __Vtemp210;
    VlWide<4>/*127:0*/ __Vtemp211;
    VlWide<4>/*127:0*/ __Vtemp212;
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
    vlSelf->top__DOT__axi__DOT___GEN_18 = ((0U == (IData)(vlSelf->top__DOT__axi__DOT__awlen)) 
                                           | (IData)(vlSelf->top__DOT__axi__DOT__axi_bvalid));
    VL_EXTEND_WQ(65,64, __Vtemp104, (~ (((QData)((IData)(
                                                         vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp105, (~ (((QData)((IData)(
                                                         vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp109, ((2U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
    __Vtemp113[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
                           : __Vtemp109[1U]));
    __Vtemp120[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                       ? 0U : (1U & ((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                      ? __Vtemp104[2U]
                                      : ((5U == (7U 
                                                 & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                          ? __Vtemp105[2U]
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
                                                 __Vtemp109[2U]))))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___res_T_3 
        = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res 
            + (((QData)((IData)(((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                  ? 0U : ((6U == (7U 
                                                  & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                           ? __Vtemp104[1U]
                                           : ((5U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                               ? __Vtemp105[1U]
                                               : __Vtemp113[1U]))))) 
                << 0x20U) | (QData)((IData)(((7U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                              ? 0U : 
                                             ((6U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                               ? __Vtemp104[0U]
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                   ? 
                                                  __Vtemp105[0U]
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
                                                    __Vtemp109[0U]))))))))) 
           + (QData)((IData)(((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                              | ((5U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                 | (4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])))))));
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
    top__DOT__d_cache__DOT___GEN_533 = (((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                         | (8U == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))
                                         ? 0U : ((6U 
                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                  ? 1U
                                                  : 0U));
    vlSelf->top__DOT__d_cache_io_to_axi_rready = ((1U 
                                                   != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                     & ((3U 
                                                         == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                        | (((4U 
                                                             == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                            | (8U 
                                                               == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) 
                                                           | (6U 
                                                              != (IData)(vlSelf->top__DOT__d_cache__DOT__state))))));
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
    vlSelf->top__DOT__d_cache__DOT___GEN_594 = ((1U 
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
                                                  (0xfffffffffffffff0ULL 
                                                   & (QData)((IData)(vlSelf->top__DOT__LSU__DOT__maddr)))
                                                   : (QData)((IData)(
                                                                     (((4U 
                                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                       | (8U 
                                                                          == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))
                                                                       ? 0U
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelf->top__DOT__LSU__DOT__maddr))))))));
    top__DOT__d_cache__DOT___GEN_13 = ((0xdU == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U))))
                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13)
                                        : ((0xcU == 
                                            (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U))))
                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12)
                                            : ((0xbU 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U))))
                                                ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11)
                                                : (
                                                   (0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                >> 4U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10)
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 4U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9)
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                  >> 4U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8)
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                   >> 4U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7)
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                    >> 4U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6)
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                     >> 4U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5)
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                      >> 4U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4)
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                       >> 4U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3)
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                        >> 4U))))
                                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2)
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                         >> 4U))))
                                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1)
                                                             : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0))))))))))))));
    vlSelf->top__DOT__LSU_io_ms_rf_we = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_we) 
                                         & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid));
    vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value = 
        ((6U == vlSelf->top__DOT__EXU__DOT__ALUop) ? vlSelf->top__DOT__EXU__DOT__es_pc
          : vlSelf->top__DOT__EXU__DOT__src1_value);
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0x1fU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                          >> 4U)))];
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0xffU & ((IData)(0x40U) + (0x1fU & (IData)(
                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                     >> 4U)))))];
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0xffU & ((IData)(0x80U) + (0x1fU & (IData)(
                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                     >> 4U)))))];
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0xffU & ((IData)(0xc0U) + (0x1fU & (IData)(
                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                     >> 4U)))))];
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
    vlSelf->top__DOT__i_cache__DOT___GEN_193 = ((3U 
                                                 == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                 ? 1U
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                  ? 0U
                                                  : (IData)(vlSelf->top__DOT__i_cache__DOT__state)));
    vlSelf->top__DOT__i_cache__DOT___GEN_432 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                & ((2U 
                                                    != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                   & ((3U 
                                                       != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                      & (4U 
                                                         == (IData)(vlSelf->top__DOT__i_cache__DOT__state)))));
    vlSelf->top__DOT__i_cache__DOT___GEN_606 = ((1U 
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
        (0x1fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                  >> 4U))];
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data 
        = vlSelf->top__DOT__i_cache__DOT__validMem[
        (0xffU & ((IData)(0x40U) + (0x1fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                             >> 4U))))];
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data 
        = vlSelf->top__DOT__i_cache__DOT__validMem[
        (0xffU & ((IData)(0x80U) + (0x1fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                             >> 4U))))];
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data 
        = vlSelf->top__DOT__i_cache__DOT__validMem[
        (0xffU & ((IData)(0xc0U) + (0x1fU & (vlSelf->top__DOT__i_cache__DOT__addr 
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
    if ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache_io_to_axi_arlen = 0U;
        vlSelf->top__DOT__d_cache_io_to_axi_awlen = 0U;
    } else {
        vlSelf->top__DOT__d_cache_io_to_axi_arlen = 
            ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? 0U : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? 1U : (IData)(top__DOT__d_cache__DOT___GEN_533)));
        vlSelf->top__DOT__d_cache_io_to_axi_awlen = 
            ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? 0U : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? 0U : (IData)(top__DOT__d_cache__DOT___GEN_533)));
    }
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
    vlSelf->top__DOT__d_cache__DOT___GEN_15 = ((0xfU 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U))))
                                                ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15)
                                                : (
                                                   (0xeU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                >> 4U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14)
                                                    : (IData)(top__DOT__d_cache__DOT___GEN_13)));
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
    vlSelf->top__DOT__d_cache__DOT__tagMatch_0 = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data) 
                                                  & (vlSelf->top__DOT__d_cache__DOT__tagMem
                                                     [
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 4U)))] 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 9U)))));
    vlSelf->top__DOT__d_cache__DOT__tagMatch_1 = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data) 
                                                  & (vlSelf->top__DOT__d_cache__DOT__tagMem
                                                     [
                                                     (0xffU 
                                                      & ((IData)(0x40U) 
                                                         + 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                     >> 4U)))))] 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 9U)))));
    vlSelf->top__DOT__d_cache__DOT__tagMatch_2 = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data) 
                                                  & (vlSelf->top__DOT__d_cache__DOT__tagMem
                                                     [
                                                     (0xffU 
                                                      & ((IData)(0x80U) 
                                                         + 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                     >> 4U)))))] 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 9U)))));
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
                                                     (0xffU 
                                                      & ((IData)(0xc0U) 
                                                         + 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                     >> 4U)))))] 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 9U)))));
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
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                         >> 4U))] 
                                                     == 
                                                     (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 9U)));
    vlSelf->top__DOT__i_cache__DOT__tagMatch_1 = ((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data) 
                                                  & (vlSelf->top__DOT__i_cache__DOT__tagMem
                                                     [
                                                     (0xffU 
                                                      & ((IData)(0x40U) 
                                                         + 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                             >> 4U))))] 
                                                     == 
                                                     (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 9U)));
    vlSelf->top__DOT__i_cache__DOT__tagMatch_2 = ((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data) 
                                                  & (vlSelf->top__DOT__i_cache__DOT__tagMem
                                                     [
                                                     (0xffU 
                                                      & ((IData)(0x80U) 
                                                         + 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                             >> 4U))))] 
                                                     == 
                                                     (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 9U)));
    vlSelf->top__DOT__i_cache__DOT__tagMatch_3 = ((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data) 
                                                  & (vlSelf->top__DOT__i_cache__DOT__tagMem
                                                     [
                                                     (0xffU 
                                                      & ((IData)(0xc0U) 
                                                         + 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                             >> 4U))))] 
                                                     == 
                                                     (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 9U)));
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
                                                    (((4U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                      | (8U 
                                                         == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))
                                                      ? (IData)(vlSelf->top__DOT__LSU__DOT__maddr)
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                       ? vlSelf->top__DOT__d_cache__DOT__write_back_addr
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__LSU__DOT__maddr)
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                         & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3))
                                                         ? (IData)(vlSelf->top__DOT__LSU__DOT__maddr)
                                                         : 0U)))))));
    vlSelf->top__DOT__d_cache_io_to_axi_bready = ((1U 
                                                   != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                        & (((4U 
                                                             == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                            | (8U 
                                                               == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) 
                                                           | ((6U 
                                                               == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                              | ((7U 
                                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                 | ((0U 
                                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                    & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3))))))));
    vlSelf->top__DOT__d_cache_io_to_axi_wvalid = ((1U 
                                                   != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                        & (((4U 
                                                             == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                            | (8U 
                                                               == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))
                                                            ? (IData)(vlSelf->top__DOT__LSU__DOT__wen)
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                            | ((7U 
                                                                == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                ? (IData)(vlSelf->top__DOT__LSU__DOT__wen)
                                                                : 
                                                               (((0U 
                                                                  == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                 & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                                & (IData)(vlSelf->top__DOT__LSU__DOT__wen))))))));
    if ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache_io_to_axi_wstrb = 0U;
        vlSelf->top__DOT__d_cache_io_to_axi_wdata = 0ULL;
    } else {
        vlSelf->top__DOT__d_cache_io_to_axi_wstrb = 
            ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? 0U : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? 0U : (((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                | (8U == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))
                                ? (IData)(vlSelf->top__DOT__LSU__DOT__wstrb)
                                : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                    ? 0xffU : ((7U 
                                                == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__LSU__DOT__wstrb)
                                                : (
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                    & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3))
                                                    ? (IData)(vlSelf->top__DOT__LSU__DOT__wstrb)
                                                    : 0U))))));
        vlSelf->top__DOT__d_cache_io_to_axi_wdata = 
            ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? 0ULL : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                         ? 0ULL : (((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                    | (8U == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))
                                    ? vlSelf->top__DOT__LSU__DOT__store_data
                                    : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                        ? (((QData)((IData)(
                                                            vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])))
                                        : ((7U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                            ? vlSelf->top__DOT__LSU__DOT__store_data
                                            : (((0U 
                                                 == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3))
                                                ? vlSelf->top__DOT__LSU__DOT__store_data
                                                : 0ULL))))));
    }
    vlSelf->top__DOT__d_cache_io_to_axi_arvalid = (
                                                   (1U 
                                                    != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                      & ((3U 
                                                          == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                         | ((~ 
                                                             ((4U 
                                                               == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                              | (8U 
                                                                 == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))) 
                                                            & ((6U 
                                                                != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                               & ((7U 
                                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                   ? (IData)(vlSelf->top__DOT__LSU_io_axi_out_arvalid)
                                                                   : 
                                                                  (((0U 
                                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                    & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                                   & (IData)(vlSelf->top__DOT__LSU_io_axi_out_arvalid))))))));
    vlSelf->top__DOT__d_cache_io_to_axi_awvalid = (
                                                   (1U 
                                                    != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                         & (((4U 
                                                              == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                             | (8U 
                                                                == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))
                                                             ? (IData)(vlSelf->top__DOT__LSU_io_axi_out_awvalid)
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                             | ((7U 
                                                                 == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                 ? (IData)(vlSelf->top__DOT__LSU_io_axi_out_awvalid)
                                                                 : 
                                                                (((0U 
                                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                                 & (IData)(vlSelf->top__DOT__LSU_io_axi_out_awvalid))))))));
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
    __Vtemp124[0U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U] 
                       << 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U] 
                                 >> 0x1fU));
    __Vtemp124[1U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U] 
                       << 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U] 
                                 >> 0x1fU));
    __Vtemp124[2U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U] 
                      >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp125, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                          : vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_SUB_W(3, __Vtemp126, __Vtemp124, __Vtemp125);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
        = __Vtemp126[0U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
        = __Vtemp126[1U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
        = (1U & __Vtemp126[2U]);
    vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2 
        = (0x1ffU & ((0xc0U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15)) 
                     + (0x1fU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))));
    top__DOT__d_cache__DOT___quene_T_5 = (((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15) 
                                           << 2U) | 
                                          (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15) 
                                                 >> 6U)));
    if (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid) {
        __Vtemp130[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
        __Vtemp130[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                  >> 0x20U));
        __Vtemp130[2U] = (IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                 >> 0x3fU)))
                                   ? 0xffffffffffffffffULL
                                   : 0ULL));
        __Vtemp130[3U] = (IData)((((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                  >> 0x3fU)))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL) >> 0x20U));
    } else {
        __Vtemp130[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U];
        __Vtemp130[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U];
        __Vtemp130[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U];
        __Vtemp130[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U];
    }
    VL_EXTEND_WW(130,128, __Vtemp131, __Vtemp130);
    VL_EXTEND_WW(130,128, __Vtemp134, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1);
    VL_EXTEND_WW(130,128, __Vtemp137, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[0U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[1U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[2U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[3U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[4U] = 0U;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[0U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp131[0U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
                                            << 2U) : 
                                        __Vtemp134[0U])
                                     : __Vtemp137[0U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[1U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp131[1U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
                                             >> 0x1eU) 
                                            | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
                                               << 2U))
                                         : __Vtemp134[1U])
                                     : __Vtemp137[1U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[2U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp131[2U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
                                             >> 0x1eU) 
                                            | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
                                               << 2U))
                                         : __Vtemp134[2U])
                                     : __Vtemp137[2U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[3U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp131[3U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
                                             >> 0x1eU) 
                                            | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
                                               << 2U))
                                         : __Vtemp134[3U])
                                     : __Vtemp137[3U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[4U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp131[4U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
                                            >> 0x1eU)
                                         : __Vtemp134[4U])
                                     : __Vtemp137[4U]));
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
    VL_EXTEND_WQ(128,64, __Vtemp143, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
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
            = __Vtemp143[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[1U] 
            = __Vtemp143[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[2U] 
            = __Vtemp143[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[3U] 
            = __Vtemp143[3U];
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
    vlSelf->top__DOT__d_cache__DOT___GEN_362 = ((1U 
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
    vlSelf->top__DOT__d_cache__DOT___GEN_386 = ((1U 
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
                    << 6U) + (0x1fU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                               >> 4U)))));
    top__DOT__d_cache__DOT___quene_T_2 = (((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15) 
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
                                                    << 6U) 
                                                   + 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))));
    vlSelf->top__DOT__d_cache__DOT__anyMatch = ((((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_0) 
                                                  | (IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_1)) 
                                                 | (IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_2)) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_3));
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
    vlSelf->top__DOT__i_cache__DOT___GEN_400 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                & ((2U 
                                                    != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                   & ((3U 
                                                       == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                      & (~ (IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)))));
    vlSelf->top__DOT__i_cache__DOT___GEN_424 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                & ((2U 
                                                    != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                   & ((3U 
                                                       == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                      & (IData)(vlSelf->top__DOT__i_cache__DOT__allvalid))));
    vlSelf->top__DOT__i_cache__DOT__unvalidIndex = 
        (0x1ffU & (((IData)(vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex) 
                    << 6U) + (0x1fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                       >> 4U))));
    vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2 
        = (0x1ffU & ((0xc0U & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_15)) 
                     + (0x1fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                 >> 4U))));
    top__DOT__i_cache__DOT___quene_T_5 = (((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_15) 
                                           << 2U) | 
                                          (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_15) 
                                                 >> 6U)));
    top__DOT__i_cache__DOT___quene_T_2 = (((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_15) 
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
    VL_EXTEND_WQ(65,64, __Vtemp153, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3);
    VL_EXTEND_WQ(65,64, __Vtemp156, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3);
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
                    : __Vtemp153[0U]) : __Vtemp156[0U]);
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
                                      << 1U))) : __Vtemp153[1U])
                : __Vtemp156[1U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[2U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU)
                        : ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU))
                    : __Vtemp153[2U]) : __Vtemp156[2U]);
    }
    vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data 
        = vlSelf->top__DOT__d_cache__DOT__dirtyMem[
        (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))];
    VL_EXTEND_WW(129,128, __Vtemp167, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
    VL_EXTEND_WW(129,128, __Vtemp170, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
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
                       << 1U) : __Vtemp167[0U]) : __Vtemp170[0U]);
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
                                     << 1U)) : __Vtemp167[1U])
                : __Vtemp170[1U]);
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
                          << 1U)) : __Vtemp167[2U])
                : __Vtemp170[2U]);
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
                                     << 1U)) : __Vtemp167[3U])
                : __Vtemp170[3U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[4U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                         ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U]
                         : ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                             >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                       << 0x1fU))) 
                       >> 0x1fU) : __Vtemp167[4U]) : 
               __Vtemp170[4U]);
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
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_262 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_263 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_264 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_265 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_266 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_267 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_268 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_269 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_270 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_271 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_272 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_273 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_274 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_275 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_276 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_277 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15));
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_262 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0))
                               : ((0U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0))));
        vlSelf->top__DOT__d_cache__DOT___GEN_263 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((1U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1))
                               : ((1U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1))));
        vlSelf->top__DOT__d_cache__DOT___GEN_264 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2))
                               : ((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2))));
        vlSelf->top__DOT__d_cache__DOT___GEN_265 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((3U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3))
                               : ((3U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3))));
        vlSelf->top__DOT__d_cache__DOT___GEN_266 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((4U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4))
                               : ((4U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4))));
        vlSelf->top__DOT__d_cache__DOT___GEN_267 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((5U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5))
                               : ((5U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5))));
        vlSelf->top__DOT__d_cache__DOT___GEN_268 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((6U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6))
                               : ((6U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6))));
        vlSelf->top__DOT__d_cache__DOT___GEN_269 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((7U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7))
                               : ((7U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7))));
        vlSelf->top__DOT__d_cache__DOT___GEN_270 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((8U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8))
                               : ((8U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8))));
        vlSelf->top__DOT__d_cache__DOT___GEN_271 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((9U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9))
                               : ((9U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9))));
        vlSelf->top__DOT__d_cache__DOT___GEN_272 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10))
                               : ((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10))));
        vlSelf->top__DOT__d_cache__DOT___GEN_273 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xbU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11))
                               : ((0xbU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11))));
        vlSelf->top__DOT__d_cache__DOT___GEN_274 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xcU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12))
                               : ((0xcU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12))));
        vlSelf->top__DOT__d_cache__DOT___GEN_275 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xdU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13))
                               : ((0xdU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13))));
        vlSelf->top__DOT__d_cache__DOT___GEN_276 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14))
                               : ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14))));
        vlSelf->top__DOT__d_cache__DOT___GEN_277 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_5)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15))
                               : ((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_2)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15))));
    }
    VL_EXTEND_WQ(191,64, __Vtemp174, (vlSelf->top__DOT__LSU__DOT__store_data 
                                      & vlSelf->top__DOT__d_cache__DOT__wmask));
    VL_SHIFTL_WWI(191,191,7, __Vtemp175, __Vtemp174, 
                  (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                            << 3U)));
    __Vtemp176[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U];
    __Vtemp176[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U];
    __Vtemp176[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U];
    __Vtemp176[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U];
    VL_EXTEND_WW(191,128, __Vtemp177, __Vtemp176);
    VL_EXTEND_WQ(191,64, __Vtemp178, vlSelf->top__DOT__d_cache__DOT__wmask);
    VL_SHIFTL_WWI(191,191,7, __Vtemp179, __Vtemp178, 
                  (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                            << 3U)));
    vlSelf->top__DOT__d_cache__DOT___T_13[0U] = (__Vtemp175[0U] 
                                                 | (__Vtemp177[0U] 
                                                    & (~ 
                                                       __Vtemp179[0U])));
    vlSelf->top__DOT__d_cache__DOT___T_13[1U] = (__Vtemp175[1U] 
                                                 | (__Vtemp177[1U] 
                                                    & (~ 
                                                       __Vtemp179[1U])));
    vlSelf->top__DOT__d_cache__DOT___T_13[2U] = (__Vtemp175[2U] 
                                                 | (__Vtemp177[2U] 
                                                    & (~ 
                                                       __Vtemp179[2U])));
    vlSelf->top__DOT__d_cache__DOT___T_13[3U] = (__Vtemp175[3U] 
                                                 | (__Vtemp177[3U] 
                                                    & (~ 
                                                       __Vtemp179[3U])));
    vlSelf->top__DOT__d_cache__DOT___T_13[4U] = (__Vtemp175[4U] 
                                                 | (__Vtemp177[4U] 
                                                    & (~ 
                                                       __Vtemp179[4U])));
    vlSelf->top__DOT__d_cache__DOT___T_13[5U] = (0x7fffffffU 
                                                 & (__Vtemp175[5U] 
                                                    | (__Vtemp177[5U] 
                                                       & (~ 
                                                          __Vtemp179[5U]))));
    vlSelf->top__DOT__d_cache__DOT___GEN_353 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                & ((2U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                   & (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)));
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
        vlSelf->top__DOT__i_cache__DOT___GEN_202 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((0U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_0))
                       : ((0U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_0))));
        vlSelf->top__DOT__i_cache__DOT___GEN_203 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((1U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_1))
                       : ((1U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_1))));
        vlSelf->top__DOT__i_cache__DOT___GEN_204 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((2U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_2))
                       : ((2U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_2))));
        vlSelf->top__DOT__i_cache__DOT___GEN_205 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((3U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_3))
                       : ((3U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_3))));
        vlSelf->top__DOT__i_cache__DOT___GEN_206 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((4U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_4))
                       : ((4U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_4))));
        vlSelf->top__DOT__i_cache__DOT___GEN_207 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((5U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_5))
                       : ((5U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_5))));
        vlSelf->top__DOT__i_cache__DOT___GEN_208 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((6U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_6))
                       : ((6U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_6))));
        vlSelf->top__DOT__i_cache__DOT___GEN_209 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((7U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_7))
                       : ((7U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_7))));
        vlSelf->top__DOT__i_cache__DOT___GEN_210 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((8U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_8))
                       : ((8U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_8))));
        vlSelf->top__DOT__i_cache__DOT___GEN_211 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((9U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_9))
                       : ((9U == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))) ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_9))));
        vlSelf->top__DOT__i_cache__DOT___GEN_212 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((0xaU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_10))
                       : ((0xaU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_10))));
        vlSelf->top__DOT__i_cache__DOT___GEN_213 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((0xbU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_11))
                       : ((0xbU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_11))));
        vlSelf->top__DOT__i_cache__DOT___GEN_214 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((0xcU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_12))
                       : ((0xcU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_12))));
        vlSelf->top__DOT__i_cache__DOT___GEN_215 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((0xdU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_13))
                       : ((0xdU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_13))));
        vlSelf->top__DOT__i_cache__DOT___GEN_216 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((0xeU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_14))
                       : ((0xeU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_14))));
        vlSelf->top__DOT__i_cache__DOT___GEN_217 = 
            (0xffU & ((IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)
                       ? ((0xfU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_5)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_15))
                       : ((0xfU == (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                            >> 4U)))
                           ? (IData)(top__DOT__i_cache__DOT___quene_T_2)
                           : (IData)(vlSelf->top__DOT__i_cache__DOT__quene_15))));
    } else {
        vlSelf->top__DOT__i_cache__DOT___GEN_202 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_0));
        vlSelf->top__DOT__i_cache__DOT___GEN_203 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_1));
        vlSelf->top__DOT__i_cache__DOT___GEN_204 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_2));
        vlSelf->top__DOT__i_cache__DOT___GEN_205 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_3));
        vlSelf->top__DOT__i_cache__DOT___GEN_206 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_4));
        vlSelf->top__DOT__i_cache__DOT___GEN_207 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_5));
        vlSelf->top__DOT__i_cache__DOT___GEN_208 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_6));
        vlSelf->top__DOT__i_cache__DOT___GEN_209 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_7));
        vlSelf->top__DOT__i_cache__DOT___GEN_210 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_8));
        vlSelf->top__DOT__i_cache__DOT___GEN_211 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_9));
        vlSelf->top__DOT__i_cache__DOT___GEN_212 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_10));
        vlSelf->top__DOT__i_cache__DOT___GEN_213 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_11));
        vlSelf->top__DOT__i_cache__DOT___GEN_214 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_12));
        vlSelf->top__DOT__i_cache__DOT___GEN_215 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_13));
        vlSelf->top__DOT__i_cache__DOT___GEN_216 = 
            (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_14));
        vlSelf->top__DOT__i_cache__DOT___GEN_217 = 
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
    vlSelf->top__DOT__d_cache__DOT___GEN_252 = (7U 
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
    vlSelf->top__DOT__arbiter__DOT___GEN_126 = ((3U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 ? 
                                                (((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid) 
                                                  & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_bready))
                                                  ? 0U
                                                  : (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 : (IData)(vlSelf->top__DOT__arbiter__DOT__state));
    top__DOT__d_cache__DOT___GEN_38 = ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                        ? 0U : (IData)(vlSelf->top__DOT__d_cache__DOT__state));
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
                                                         & (((4U 
                                                              == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                             | (8U 
                                                                == (IData)(vlSelf->top__DOT__d_cache__DOT__state)))
                                                             ? (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                                             : 
                                                            ((6U 
                                                              != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                             & ((7U 
                                                                 == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                 ? (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                                                 : 
                                                                (((0U 
                                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                                                 & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid))))))))) 
                                                 | ((IData)(vlSelf->top__DOT__LSU__DOT__ren) 
                                                    & ((1U 
                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)
                                                        : 
                                                       ((2U 
                                                         != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                        & ((3U 
                                                            != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                           & ((~ 
                                                               ((4U 
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
                                                                     & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)))))))))) 
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
    vlSelf->top__DOT__d_cache__DOT___GEN_395 = ((1U 
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
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))])) 
                                                          << 9U) 
                                                         | (QData)((IData)(
                                                                           (0x1f0U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                                >> 4U)) 
                                                                               << 4U)))))
                                                         : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                                        : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                                       : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))))))));
    VL_EXTEND_WQ(128,64, __Vtemp187, (((QData)((IData)(
                                                       vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]))));
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_290[0U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_290[1U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_290[2U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_290[3U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[3U];
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_290[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0U]
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
                            ? __Vtemp187[0U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_290[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][1U]
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
                            ? __Vtemp187[1U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_290[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][2U]
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
                            ? __Vtemp187[2U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_290[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][3U]
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
                            ? __Vtemp187[3U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])));
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
        vlSelf->top__DOT__d_cache__DOT___GEN_250 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((1U & (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__d_cache__DOT__receive_data_0
                  : vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_0);
        vlSelf->top__DOT__d_cache__DOT___GEN_251 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((1U & (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_1)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_1);
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_250 = vlSelf->top__DOT__d_cache__DOT__receive_data_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_251 = vlSelf->top__DOT__d_cache__DOT__receive_data_1;
    }
    __Vtemp199[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U];
    __Vtemp199[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U];
    __Vtemp199[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U];
    __Vtemp199[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U];
    VL_SHIFTR_WWI(128,128,7, __Vtemp200, __Vtemp199, 
                  (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                            << 3U)));
    VL_EXTEND_WQ(128,64, __Vtemp201, ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                       ? 0ULL : ((3U 
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
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                      & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3))
                                                      ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                                                      : 0ULL)))))));
    if ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_612[0U] 
            = __Vtemp200[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_612[1U] 
            = __Vtemp200[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_612[2U] 
            = __Vtemp200[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_612[3U] 
            = __Vtemp200[3U];
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_612[0U] 
            = __Vtemp201[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_612[1U] 
            = __Vtemp201[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_612[2U] 
            = __Vtemp201[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_612[3U] 
            = __Vtemp201[3U];
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
    vlSelf->top__DOT__d_cache__DOT___GEN_253 = ((3U 
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
                                                  ? (IData)(top__DOT__d_cache__DOT___GEN_38)
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
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
                                                      ? 0U
                                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                      ? (IData)(top__DOT__d_cache__DOT___GEN_38)
                                                      : (IData)(vlSelf->top__DOT__d_cache__DOT__state)))))));
    vlSelf->top__DOT__LSU_io_ms_to_ws_valid = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid) 
                                               & (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
    vlSelf->top__DOT__LSU__DOT__ms_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)) 
                                               | (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go)));
    vlSelf->top__DOT__LSU_io_ms_fwd_ready = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid) 
                                             & (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
    VL_EXTEND_WQ(127,64, __Vtemp205, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp206, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp207, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp208, (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                      >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))));
    VL_EXTEND_WQ(127,64, __Vtemp209, vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp210, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp211, __Vtemp210, 
                  (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp212, ((0x34U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
            = __Vtemp205[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = __Vtemp205[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = __Vtemp205[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = (0x7fffffffU & __Vtemp205[3U]);
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp206[0U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                     ? __Vtemp207[0U]
                                     : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                         ? __Vtemp208[0U]
                                         : ((0x39U 
                                             == vlSelf->top__DOT__EXU__DOT__ALUop)
                                             ? __Vtemp209[0U]
                                             : ((0x37U 
                                                 == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                 ? 
                                                __Vtemp211[0U]
                                                 : 
                                                __Vtemp212[0U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp206[1U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                     ? __Vtemp207[1U]
                                     : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                         ? __Vtemp208[1U]
                                         : ((0x39U 
                                             == vlSelf->top__DOT__EXU__DOT__ALUop)
                                             ? __Vtemp209[1U]
                                             : ((0x37U 
                                                 == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                 ? 
                                                __Vtemp211[1U]
                                                 : 
                                                __Vtemp212[1U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp206[2U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                     ? __Vtemp207[2U]
                                     : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                         ? __Vtemp208[2U]
                                         : ((0x39U 
                                             == vlSelf->top__DOT__EXU__DOT__ALUop)
                                             ? __Vtemp209[2U]
                                             : ((0x37U 
                                                 == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                 ? 
                                                __Vtemp211[2U]
                                                 : 
                                                __Vtemp212[2U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = (0x7fffffffU & ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                               ? __Vtemp206[3U] : (
                                                   (0x3fU 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? 
                                                   __Vtemp207[3U]
                                                    : 
                                                   ((0x38U 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? 
                                                    __Vtemp208[3U]
                                                     : 
                                                    ((0x39U 
                                                      == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                      ? 
                                                     __Vtemp209[3U]
                                                      : 
                                                     ((0x37U 
                                                       == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                       ? 
                                                      __Vtemp211[3U]
                                                       : 
                                                      __Vtemp212[3U]))))));
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
                                                             & vlSelf->top__DOT__d_cache__DOT___GEN_612[0U])))
                                          : ((6U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                              ? (((
                                                   (0x80U 
                                                    & vlSelf->top__DOT__d_cache__DOT___GEN_612[0U])
                                                    ? 0xffffffffffffffULL
                                                    : 0ULL) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelf->top__DOT__d_cache__DOT___GEN_612[0U]))))
                                              : ((5U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                  ? 
                                                 ((((0x8000U 
                                                     & vlSelf->top__DOT__d_cache__DOT___GEN_612[0U])
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSelf->top__DOT__d_cache__DOT___GEN_612[0U]))))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                   ? (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___GEN_612[0U]))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & vlSelf->top__DOT__d_cache__DOT___GEN_612[0U])))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__d_cache__DOT___GEN_612[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__d_cache__DOT___GEN_612[0U])))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((vlSelf->top__DOT__d_cache__DOT___GEN_612[0U] 
                                                                         >> 0x1fU)
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__d_cache__DOT___GEN_612[0U])))
                                                      : 
                                                     (((QData)((IData)(
                                                                       vlSelf->top__DOT__d_cache__DOT___GEN_612[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__d_cache__DOT___GEN_612[0U]))))))))));
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
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__cacheLine[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__i_cache__DOT__validMem[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_0_MPORT_data = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
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
    vlSelf->top__DOT__i_cache__DOT___GEN_193 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT___GEN_202 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_203 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_204 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_205 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_206 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_207 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_208 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_209 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_210 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_211 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_212 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_213 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_214 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_215 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_216 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_217 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_400 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_424 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_432 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_606 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__d_cache__DOT__validMem[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__d_cache__DOT__tagMem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
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
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__write_back_data);
    vlSelf->top__DOT__d_cache__DOT__write_back_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__receive_data_0 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT__receive_data_1 = VL_RAND_RESET_Q(64);
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
    vlSelf->top__DOT__d_cache__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__d_cache__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_16 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(191, vlSelf->top__DOT__d_cache__DOT___T_13);
    vlSelf->top__DOT__d_cache__DOT___GEN_250 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_251 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_252 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__d_cache__DOT___GEN_253 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__d_cache__DOT___GEN_262 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_263 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_264 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_265 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_266 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_267 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_268 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_269 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_270 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_271 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_272 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_273 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_274 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_275 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_276 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_277 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_290);
    vlSelf->top__DOT__d_cache__DOT___GEN_353 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_362 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_386 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_395 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_594 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_612);
    vlSelf->top__DOT__d_cache__DOT___GEN_518 = VL_RAND_RESET_Q(41);
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
