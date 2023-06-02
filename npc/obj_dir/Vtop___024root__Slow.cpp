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
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_140;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_155;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_170;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_185;
    CData/*6:0*/ top__DOT__IDU__DOT___ALUop_T_132;
    CData/*6:0*/ top__DOT__IDU__DOT___ALUop_T_147;
    CData/*6:0*/ top__DOT__IDU__DOT___ALUop_T_162;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp61;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp69;
    VlWide<3>/*95:0*/ __Vtemp76;
    VlWide<3>/*95:0*/ __Vtemp78;
    VlWide<3>/*95:0*/ __Vtemp79;
    VlWide<3>/*95:0*/ __Vtemp80;
    VlWide<4>/*127:0*/ __Vtemp84;
    VlWide<5>/*159:0*/ __Vtemp85;
    VlWide<5>/*159:0*/ __Vtemp88;
    VlWide<5>/*159:0*/ __Vtemp91;
    VlWide<4>/*127:0*/ __Vtemp97;
    VlWide<3>/*95:0*/ __Vtemp106;
    VlWide<3>/*95:0*/ __Vtemp109;
    VlWide<5>/*159:0*/ __Vtemp120;
    VlWide<5>/*159:0*/ __Vtemp123;
    VlWide<4>/*127:0*/ __Vtemp127;
    VlWide<4>/*127:0*/ __Vtemp128;
    VlWide<4>/*127:0*/ __Vtemp129;
    VlWide<4>/*127:0*/ __Vtemp130;
    VlWide<4>/*127:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp132;
    VlWide<4>/*127:0*/ __Vtemp133;
    VlWide<4>/*127:0*/ __Vtemp134;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_42;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_50;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_80;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_98;
    // Body
    vlSelf->io_step = vlSelf->top__DOT__diff_step;
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___step_num_T_1 
        = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num 
           - (IData)(1U));
    VL_EXTEND_WQ(65,64, __Vtemp60, (~ (((QData)((IData)(
                                                        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp61, (~ (((QData)((IData)(
                                                        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp65, ((2U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
    __Vtemp69[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                      ? (~ (((IData)((((QData)((IData)(
                                                       vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))) 
                             >> 0x1fU) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U]))) 
                                                   >> 0x20U)) 
                                          << 1U))) : 
                     ((3U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                       ? (((IData)((((QData)((IData)(
                                                     vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))) 
                           >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                   vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U]))) 
                                                 >> 0x20U)) 
                                        << 1U)) : __Vtemp65[1U]));
    __Vtemp76[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                      ? 0U : (1U & ((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                     ? __Vtemp60[2U]
                                     : ((5U == (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                         ? __Vtemp61[2U]
                                         : ((4U == 
                                             (7U & 
                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                             ? (~ ((IData)(
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
                                                __Vtemp65[2U]))))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_20 
        = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
            ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res
            : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                            | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                           | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                    ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res 
                        + (((QData)((IData)(((7U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                              ? 0U : 
                                             ((6U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                               ? __Vtemp60[1U]
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                   ? 
                                                  __Vtemp61[1U]
                                                   : 
                                                  __Vtemp69[1U]))))) 
                            << 0x20U) | (QData)((IData)(
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
                                                          __Vtemp60[0U]
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (7U 
                                                             & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                            ? 
                                                           __Vtemp61[0U]
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
                                                             __Vtemp65[0U]))))))))) 
                       + (QData)((IData)(((6U == (7U 
                                                  & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                          | ((5U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                             | (4U 
                                                == 
                                                (7U 
                                                 & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])))))))
                    : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res)
                : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res));
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
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo 
        = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
            ? 0U : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                     ? 0U : ((2U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                              ? (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res)
                              : 0U)));
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
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed 
        = ((0x14U == vlSelf->top__DOT__EXU__DOT__ALUop) 
           | ((0x34U == vlSelf->top__DOT__EXU__DOT__ALUop) 
              | ((0x13U == vlSelf->top__DOT__EXU__DOT__ALUop) 
                 | (0x31U == vlSelf->top__DOT__EXU__DOT__ALUop))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw 
        = ((0x32U == vlSelf->top__DOT__EXU__DOT__ALUop) 
           | ((0x14U == vlSelf->top__DOT__EXU__DOT__ALUop) 
              | ((0x35U == vlSelf->top__DOT__EXU__DOT__ALUop) 
                 | (0x13U == vlSelf->top__DOT__EXU__DOT__ALUop))));
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
    vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value = 
        ((6U == vlSelf->top__DOT__EXU__DOT__ALUop) ? vlSelf->top__DOT__EXU__DOT__es_pc
          : vlSelf->top__DOT__EXU__DOT__src1_value);
    vlSelf->io_pc = vlSelf->top__DOT__IFU__DOT__fs_pc;
    vlSelf->top__DOT__IFU__DOT__seq_pc = (4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc);
    vlSelf->top__DOT__Register_io_rdata1 = ((0U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 0xfU)))
                                             ? 0ULL
                                             : vlSelf->top__DOT__Register__DOT__Reg
                                            [(0x1fU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 0xfU))]);
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
    if (vlSelf->top__DOT__IFU__DOT__fs_valid) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__IFU__DOT__fs_pc, vlSelf->__Vtask_pmem_read__1__Rdata);
        vlSelf->top__DOT__IFU__DOT__inst_read_Rdata 
            = vlSelf->__Vtask_pmem_read__1__Rdata;
    }
    Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid 
        = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid) 
           & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid));
    vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy = (1U 
                                                   & ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid)
                                                       ? 
                                                      (~ 
                                                       ((0U 
                                                         != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                                        & ((1U 
                                                            != (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)) 
                                                           & (2U 
                                                              == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state)))))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid) 
                                                       & (~ 
                                                          ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start) 
                                                           & VL_GTES_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num))))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid 
        = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__div_valid) 
           & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid));
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
    vlSelf->top__DOT__IDU__DOT__src1 = ((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                                         ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                         : vlSelf->top__DOT__Register_io_rdata1);
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
    vlSelf->top__DOT__IDU_io_raddr2 = ((1U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                        ? 0x11U : (0x1fU 
                                                   & (vlSelf->top__DOT__IDU__DOT__inst 
                                                      >> 0x14U)));
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
    vlSelf->top__DOT__EXU_io_es_to_ms_valid = ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid) 
                                               & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)));
    vlSelf->top__DOT__EXU__DOT__es_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__EXU__DOT__es_valid)) 
                                               | (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3 
        = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid)
            ? 0x40U : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_0 
        = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid) 
           | (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2 
        = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid)
            ? 0ULL : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient);
    __Vtemp78[0U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U] 
                      << 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U] 
                                >> 0x1fU));
    __Vtemp78[1U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U] 
                      << 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U] 
                                >> 0x1fU));
    __Vtemp78[2U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U] 
                     >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp79, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                     ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                         ? (1ULL + 
                                            (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                         : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                     : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                         ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                         : vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_SUB_W(3, __Vtemp80, __Vtemp78, __Vtemp79);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
        = __Vtemp80[0U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
        = __Vtemp80[1U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
        = (1U & __Vtemp80[2U]);
    if (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid) {
        __Vtemp84[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
        __Vtemp84[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                 >> 0x20U));
        __Vtemp84[2U] = (IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                >> 0x3fU)))
                                  ? 0xffffffffffffffffULL
                                  : 0ULL));
        __Vtemp84[3U] = (IData)((((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                 >> 0x3fU)))
                                   ? 0xffffffffffffffffULL
                                   : 0ULL) >> 0x20U));
    } else {
        __Vtemp84[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U];
        __Vtemp84[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U];
        __Vtemp84[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U];
        __Vtemp84[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U];
    }
    VL_EXTEND_WW(130,128, __Vtemp85, __Vtemp84);
    VL_EXTEND_WW(130,128, __Vtemp88, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1);
    VL_EXTEND_WW(130,128, __Vtemp91, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[0U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[1U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[2U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[3U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[4U] = 0U;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[0U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp85[0U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                    ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                               | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                        ? (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
                                           << 2U) : 
                                       __Vtemp88[0U])
                                    : __Vtemp91[0U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[1U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp85[1U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                    ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                               | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                        ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
                                            >> 0x1eU) 
                                           | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
                                              << 2U))
                                        : __Vtemp88[1U])
                                    : __Vtemp91[1U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[2U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp85[2U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                    ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                               | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                        ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
                                            >> 0x1eU) 
                                           | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
                                              << 2U))
                                        : __Vtemp88[2U])
                                    : __Vtemp91[2U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[3U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp85[3U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                    ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                               | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                        ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
                                            >> 0x1eU) 
                                           | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
                                              << 2U))
                                        : __Vtemp88[3U])
                                    : __Vtemp91[3U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[4U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp85[4U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                    ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                               | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                        ? (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
                                           >> 0x1eU)
                                        : __Vtemp88[4U])
                                    : __Vtemp91[4U]));
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
    VL_EXTEND_WQ(128,64, __Vtemp97, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                          : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
    if (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1[0U] 
            = __Vtemp97[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1[1U] 
            = __Vtemp97[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1[2U] 
            = __Vtemp97[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1[3U] 
            = __Vtemp97[3U];
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1[0U] 
            = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1[1U] 
            = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1[2U] 
            = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1[3U] 
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
    vlSelf->top__DOT__Register_io_rdata2 = ((0U == (IData)(vlSelf->top__DOT__IDU_io_raddr2))
                                             ? 0ULL
                                             : vlSelf->top__DOT__Register__DOT__Reg
                                            [vlSelf->top__DOT__IDU_io_raddr2]);
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
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_14 
        = (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num) 
           & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_0));
    VL_EXTEND_WQ(65,64, __Vtemp106, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
    VL_EXTEND_WQ(65,64, __Vtemp109, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
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
                    : __Vtemp106[0U]) : __Vtemp109[0U]);
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
                                      << 1U))) : __Vtemp106[1U])
                : __Vtemp109[1U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[2U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU)
                        : ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU))
                    : __Vtemp106[2U]) : __Vtemp109[2U]);
    }
    VL_EXTEND_WW(129,128, __Vtemp120, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1);
    VL_EXTEND_WW(129,128, __Vtemp123, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[0U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[1U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[2U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[3U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[4U] = 0U;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[0U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                         ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U]
                         : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U]) 
                       << 1U) : __Vtemp120[0U]) : __Vtemp123[0U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[1U] 
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
                                     << 1U)) : __Vtemp120[1U])
                : __Vtemp123[1U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[2U] 
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
                          << 1U)) : __Vtemp120[2U])
                : __Vtemp123[2U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[3U] 
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
                                     << 1U)) : __Vtemp120[3U])
                : __Vtemp123[3U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[4U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                         ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U]
                         : ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                             >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                       << 0x1fU))) 
                       >> 0x1fU) : __Vtemp120[4U]) : 
               __Vtemp123[4U]);
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
                                                  (vlSelf->top__DOT__Register_io_rdata1 
                                                   != vlSelf->top__DOT__Register_io_rdata2)
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 
                                                   (vlSelf->top__DOT__Register_io_rdata1 
                                                    == vlSelf->top__DOT__Register_io_rdata2)
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 
                                                    VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__Register_io_rdata1, vlSelf->top__DOT__Register_io_rdata2)
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 
                                                     VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__Register_io_rdata1, vlSelf->top__DOT__Register_io_rdata2)
                                                      : 
                                                     ((0x6063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 
                                                      (vlSelf->top__DOT__Register_io_rdata1 
                                                       < vlSelf->top__DOT__Register_io_rdata2)
                                                       : 
                                                      ((0x7063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 
                                                       (vlSelf->top__DOT__Register_io_rdata1 
                                                        >= vlSelf->top__DOT__Register_io_rdata2)
                                                        : 
                                                       ((0x73U 
                                                         == vlSelf->top__DOT__IDU__DOT__inst) 
                                                        | (0x30200073U 
                                                           == vlSelf->top__DOT__IDU__DOT__inst))))))))));
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
    VL_EXTEND_WQ(127,64, __Vtemp127, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp128, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp129, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp130, (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                      >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))));
    VL_EXTEND_WQ(127,64, __Vtemp131, vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp132, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp133, __Vtemp132, 
                  (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp134, ((0x34U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
            = __Vtemp127[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = __Vtemp127[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = __Vtemp127[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = (0x7fffffffU & __Vtemp127[3U]);
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp128[0U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                     ? __Vtemp129[0U]
                                     : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                         ? __Vtemp130[0U]
                                         : ((0x39U 
                                             == vlSelf->top__DOT__EXU__DOT__ALUop)
                                             ? __Vtemp131[0U]
                                             : ((0x37U 
                                                 == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                 ? 
                                                __Vtemp133[0U]
                                                 : 
                                                __Vtemp134[0U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp128[1U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                     ? __Vtemp129[1U]
                                     : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                         ? __Vtemp130[1U]
                                         : ((0x39U 
                                             == vlSelf->top__DOT__EXU__DOT__ALUop)
                                             ? __Vtemp131[1U]
                                             : ((0x37U 
                                                 == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                 ? 
                                                __Vtemp133[1U]
                                                 : 
                                                __Vtemp134[1U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp128[2U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                     ? __Vtemp129[2U]
                                     : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                         ? __Vtemp130[2U]
                                         : ((0x39U 
                                             == vlSelf->top__DOT__EXU__DOT__ALUop)
                                             ? __Vtemp131[2U]
                                             : ((0x37U 
                                                 == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                 ? 
                                                __Vtemp133[2U]
                                                 : 
                                                __Vtemp134[2U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = (0x7fffffffU & ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                               ? __Vtemp128[3U] : (
                                                   (0x3fU 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? 
                                                   __Vtemp129[3U]
                                                    : 
                                                   ((0x38U 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? 
                                                    __Vtemp130[3U]
                                                     : 
                                                    ((0x39U 
                                                      == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                      ? 
                                                     __Vtemp131[3U]
                                                      : 
                                                     ((0x37U 
                                                       == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                       ? 
                                                      __Vtemp133[3U]
                                                       : 
                                                      __Vtemp134[3U]))))));
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
    vlSelf->top__DOT__IDU__DOT___br_target_T_1 = (vlSelf->top__DOT__IDU__DOT__src1 
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
    vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data 
        = vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg
        [((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
           ? 0U : ((0x3eU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))
                    ? 1U : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))];
    vlSelf->top__DOT__IDU_io_ds_to_es_valid = ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid) 
                                               & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)));
    vlSelf->top__DOT__IDU__DOT__ds_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                               | ((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)) 
                                                  & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))));
    vlSelf->top__DOT__IDU__DOT__br_taken_cancel = (
                                                   ((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                                    & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict))) 
                                                   & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid));
    vlSelf->top__DOT__IFU__DOT__fs_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__IFU__DOT__fs_valid)) 
                                               | ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                                  | ((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict)) 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin)))));
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
    vlSelf->top__DOT__IDU_io_raddr2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EXU_io_es_to_ms_valid = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT__IDU__DOT__br_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__src1_is_pc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___inst_type_T_188 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT__src2_is_imm = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__conflict = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__br_taken_cancel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__ds_allowin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__csr_write = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__IDU__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT___ALUop_T_176 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT__csr_index = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__IDU__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT___br_target_T_1 = VL_RAND_RESET_Q(64);
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
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_20 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(130, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___step_num_T_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_14 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23);
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
