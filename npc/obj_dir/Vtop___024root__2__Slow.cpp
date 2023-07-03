// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024root___settle__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__7\n"); );
    // Variables
    CData/*0:0*/ top__DOT__IFU__DOT___T_1;
    CData/*0:0*/ top__DOT__IDU__DOT___conflict_es_rs1_T_4;
    CData/*0:0*/ top__DOT__IDU__DOT___conflict_es_rs2_T_6;
    CData/*0:0*/ top__DOT__IDU__DOT___ds_ready_go_T_33;
    QData/*63:0*/ top__DOT__IDU__DOT___rdata1_T_1;
    QData/*63:0*/ top__DOT__IDU__DOT___br_taken_T;
    QData/*63:0*/ top__DOT__IDU__DOT___br_taken_T_1;
    QData/*63:0*/ top__DOT__IDU__DOT___br_target_T_1;
    // Body
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
                                                             & vlSelf->top__DOT__d_cache__DOT___GEN_4916[0U])))
                                          : ((6U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                              ? (((
                                                   (0x80U 
                                                    & vlSelf->top__DOT__d_cache__DOT___GEN_4916[0U])
                                                    ? 0xffffffffffffffULL
                                                    : 0ULL) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelf->top__DOT__d_cache__DOT___GEN_4916[0U]))))
                                              : ((5U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                  ? 
                                                 ((((0x8000U 
                                                     & vlSelf->top__DOT__d_cache__DOT___GEN_4916[0U])
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSelf->top__DOT__d_cache__DOT___GEN_4916[0U]))))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                   ? (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___GEN_4916[0U]))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & vlSelf->top__DOT__d_cache__DOT___GEN_4916[0U])))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__d_cache__DOT___GEN_4916[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__d_cache__DOT___GEN_4916[0U])))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((vlSelf->top__DOT__d_cache__DOT___GEN_4916[0U] 
                                                                         >> 0x1fU)
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__d_cache__DOT___GEN_4916[0U])))
                                                      : 
                                                     (((QData)((IData)(
                                                                       vlSelf->top__DOT__d_cache__DOT___GEN_4916[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__d_cache__DOT___GEN_4916[0U]))))))))));
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
                                                      & ((IData)(vlSelf->top__DOT__EXU_io_es_to_ms_valid) 
                                                         & (~ (IData)(vlSelf->top__DOT__EXU_io_es_ld)))) 
                                                     | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)) 
                                                         & (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2)) 
                                                        & (IData)(vlSelf->top__DOT__LSU_io_ms_to_ws_valid))) 
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
                                                & ((IData)(vlSelf->top__DOT__EXU_io_es_to_ms_valid) 
                                                   & (~ (IData)(vlSelf->top__DOT__EXU_io_es_ld)))) 
                                               | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1)) 
                                                   & (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1)) 
                                                  & (IData)(vlSelf->top__DOT__LSU_io_ms_to_ws_valid))) 
                                              | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1)) 
                                                  & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1))) 
                                                 & (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1))) 
                                             | (~ (
                                                   ((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1)))) 
                                            & (IData)(top__DOT__IDU__DOT___ds_ready_go_T_33));
    vlSelf->top__DOT__IDU__DOT__ds_ready_go = ((((((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1) 
                                                   & ((IData)(vlSelf->top__DOT__EXU_io_es_to_ms_valid) 
                                                      & (~ (IData)(vlSelf->top__DOT__EXU_io_es_ld)))) 
                                                  | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1)) 
                                                      & (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1)) 
                                                     & (IData)(vlSelf->top__DOT__LSU_io_ms_to_ws_valid))) 
                                                 | (((~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1)) 
                                                     & (~ (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1))) 
                                                    & (IData)(vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1))) 
                                                | (~ 
                                                   (((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1) 
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
                                               & (IData)(vlSelf->top__DOT__IDU__DOT__ds_ready_go));
    vlSelf->top__DOT__IDU__DOT__ds_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                               | ((IData)(vlSelf->top__DOT__IDU__DOT__ds_ready_go) 
                                                  & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))));
    vlSelf->top__DOT__IDU_io_ds_allowin = (1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                                 | ((IData)(vlSelf->top__DOT__IDU__DOT__ds_ready_go) 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))));
    top__DOT__IDU__DOT___br_target_T_1 = (vlSelf->top__DOT__IDU__DOT__src1 
                                          + ((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                              ? vlSelf->top__DOT__IDU__DOT__imm
                                              : vlSelf->top__DOT__IDU__DOT__rdata2));
    vlSelf->top__DOT__IDU__DOT___T_7 = ((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                        & (~ (IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel)));
    vlSelf->top__DOT__IDU_io_br_taken = (((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                          & (IData)(vlSelf->top__DOT__IDU__DOT__ds_ready_go)) 
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
    vlSelf->top__DOT__i_cache__DOT___GEN_132 = ((IData)(vlSelf->top__DOT__IFU_io_axi_out_rready)
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

void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) VL_ATTR_COLD;
void Vtop___024root___settle__TOP__6(Vtop___024root* vlSelf) VL_ATTR_COLD;

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__6(vlSelf);
    Vtop___024root___settle__TOP__7(vlSelf);
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
    vlSelf->top__DOT__EXU_io_es_ld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_io_ms_to_ws_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_io_ms_rf_we = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT__IDU__DOT___inst_type_T_155 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT___inst_type_T_170 = VL_RAND_RESET_I(7);
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
    vlSelf->top__DOT__IDU__DOT__ds_ready_go = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__ds_allowin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__rdata1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT___rdata2_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT__rdata2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT__br_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT___ALUop_T_147 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT___ALUop_T_162 = VL_RAND_RESET_I(7);
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
    vlSelf->top__DOT__EXU__DOT__ALU__DOT___alu_res_T_80 = VL_RAND_RESET_Q(64);
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
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_0);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_6);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_9);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_10);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_11);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_12);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_13);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_14);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_0_15);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_0);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_6);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_9);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_10);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_11);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_12);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_13);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_14);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_1_15);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_0);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_6);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_9);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_10);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_11);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_12);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_13);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_14);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_2_15);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_0);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_6);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_9);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_10);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_11);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_12);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_13);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_14);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT__ram_3_15);
    vlSelf->top__DOT__i_cache__DOT__tag_0_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_0_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_1_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_2_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__tag_3_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT__valid_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_0_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_1_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_2_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__valid_3_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__addr = VL_RAND_RESET_I(32);
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
    vlSelf->top__DOT__i_cache__DOT__way0_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__way1_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__way2_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__way3_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__unuse_way = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT___GEN_132 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT___GEN_138 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i_cache__DOT___GEN_139 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i_cache__DOT___GEN_140 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT___GEN_141 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_142);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_143);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_144);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_145);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_146);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_147);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_148);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_149);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_150);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_151);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_152);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_153);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_154);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_155);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_156);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_157);
    vlSelf->top__DOT__i_cache__DOT___GEN_158 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_159 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_160 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_161 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_162 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_163 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_164 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_165 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_166 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_167 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_168 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_169 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_170 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_171 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_172 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_173 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_174 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_175 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_176 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_177 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_178 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_179 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_180 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_181 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_182 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_183 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_184 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_185 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_186 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_187 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_188 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_189 = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT__i_cache__DOT___GEN_218 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_219 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_220 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_221 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_222);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_223);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_224);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_225);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_226);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_227);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_228);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_229);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_230);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_231);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_232);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_233);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_234);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_235);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_236);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_237);
    vlSelf->top__DOT__i_cache__DOT___GEN_238 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_239 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_240 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_241 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_242 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_243 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_244 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_245 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_246 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_247 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_248 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_249 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_250 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_251 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_252 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_253 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_254 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_255 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_256 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_257 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_258 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_259 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_260 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_261 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_262 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_263 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_264 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_265 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_266 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_267 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_268 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_269 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_270 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_271 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_272 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_273 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_274 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_275 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_276 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_277 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_278 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_279 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_280 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_281 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_282 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_283 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_284 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_285 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_286);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_287);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_288);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_289);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_290);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_291);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_292);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_293);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_294);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_295);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_296);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_297);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_298);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_299);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_300);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_301);
    vlSelf->top__DOT__i_cache__DOT___GEN_302 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_303 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_304 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_305 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_306 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_307 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_308 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_309 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_310 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_311 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_312 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_313 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_314 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_315 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_316 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_317 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_318 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_319 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_320 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_321 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_322 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_323 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_324 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_325 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_326 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_327 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_328 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_329 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_330 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_331 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_332 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_333 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_334 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_335 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_336 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_337 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_338 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_339 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_340 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_341 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_342 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_343 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_344 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_345 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_346 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_347 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_348 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_349 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_350);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_351);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_352);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_353);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_354);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_355);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_356);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_357);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_358);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_359);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_360);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_361);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_362);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_363);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_364);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_365);
    vlSelf->top__DOT__i_cache__DOT___GEN_366 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_367 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_368 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_369 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_370 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_371 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_372 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_373 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_374 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_375 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_376 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_377 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_378 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_379 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_380 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_381 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_382 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_383 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_384 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_385 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_386 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_387 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_388 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_389 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_390 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_391 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_392 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_393 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_394 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_395 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_396 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_397 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_398 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_399 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_400 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_401 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_402 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_403 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_404 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_405 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_406 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_407 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_408 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_409 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_410 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_411 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_412 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_413 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2015 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2016);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2017);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2018);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2019);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2020);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2021);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2022);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2023);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2024);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2025);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2026);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2027);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2028);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2029);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2030);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2031);
    vlSelf->top__DOT__i_cache__DOT___GEN_2032 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2033 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2034 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2035 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2036 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2037 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2038 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2039 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2040 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2041 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2042 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2043 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2044 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2045 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2046 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2047 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2048 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2049 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2050 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2051 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2052 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2053 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2054 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2055 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2056 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2057 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2058 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2059 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2060 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2061 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2062 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2063 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2064 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2065 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2066 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2067 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2068 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2069 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2070 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2071 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2072 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2073 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2074 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2075 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2076 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2077 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2078 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__i_cache__DOT___GEN_2079 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2080);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2081);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2082);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2083);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2084);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2085);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2086);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2087);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2088);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2089);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2090);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2091);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2092);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2093);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2094);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2095);
    vlSelf->top__DOT__i_cache__DOT___GEN_2096 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2097 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2098 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2099 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2100 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2101 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2102 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2103 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2104 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2105 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2106 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2107 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2108 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2109 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2110 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2111 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2112 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2113 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2114 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2115 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2116 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2117 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2118 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2119 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2120 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2121 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2122 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2123 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2124 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2125 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2126 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2127 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2128);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2129);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2130);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2131);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2132);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2133);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2134);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2135);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2136);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2137);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2138);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2139);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2140);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2141);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2142);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2143);
    vlSelf->top__DOT__i_cache__DOT___GEN_2144 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2145 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2146 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2147 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2148 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2149 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2150 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2151 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2152 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2153 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2154 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2155 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2156 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2157 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2158 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2159 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2160 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2161 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2162 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2163 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2164 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2165 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2166 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2167 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2168 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2169 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2170 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2171 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2172 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2173 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2174 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2175 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2176);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2177);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2178);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2179);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2180);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2181);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2182);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2183);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2184);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2185);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2186);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2187);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2188);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2189);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2190);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2191);
    vlSelf->top__DOT__i_cache__DOT___GEN_2192 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2193 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2194 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2195 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2196 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2197 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2198 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2199 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2200 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2201 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2202 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2203 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2204 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2205 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2206 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2207 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_2208 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2209 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2210 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2211 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2212 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2213 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2214 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2215 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2216 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2217 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2218 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2219 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2220 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2221 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2222 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_2223 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2874);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2890);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2906);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_2922);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___io_to_ifu_rdata_T_6);
    vlSelf->top__DOT__i_cache__DOT___GEN_2932 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_0);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_6);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_9);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_10);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_11);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_12);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_13);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_14);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_0_15);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_0);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_6);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_9);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_10);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_11);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_12);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_13);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_14);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_1_15);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_0);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_6);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_9);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_10);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_11);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_12);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_13);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_14);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_2_15);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_0);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_6);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_9);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_10);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_11);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_12);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_13);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_14);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__ram_3_15);
    vlSelf->top__DOT__d_cache__DOT__tag_0_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_0_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_1_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_2_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__tag_3_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__valid_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_0_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_1_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_2_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__valid_3_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_0_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__dirty_3_15 = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT__d_cache__DOT__wmask = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__way0_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_47 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__way1_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_79 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__way2_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_111 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT__way3_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__unuse_way = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__d_cache__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__d_cache__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_128 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__d_cache__DOT___T_7 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_150);
    VL_RAND_RESET_W(191, vlSelf->top__DOT__d_cache__DOT___ram_0_T_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_198);
    VL_RAND_RESET_W(191, vlSelf->top__DOT__d_cache__DOT___ram_1_T_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_246);
    VL_RAND_RESET_W(191, vlSelf->top__DOT__d_cache__DOT___ram_2_T_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_294);
    VL_RAND_RESET_W(191, vlSelf->top__DOT__d_cache__DOT___ram_3_T_5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_523);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_524);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_525);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_526);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_527);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_528);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_529);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_530);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_531);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_532);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_533);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_534);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_535);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_536);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_537);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_538);
    vlSelf->top__DOT__d_cache__DOT___GEN_539 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_540 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_541 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_542 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_543 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_544 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_545 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_546 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_547 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_548 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_549 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_550 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_551 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_552 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_553 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_554 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_555);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_556);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_557);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_558);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_559);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_560);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_561);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_562);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_563);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_564);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_565);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_566);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_567);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_568);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_569);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_570);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_587);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_588);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_589);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_590);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_591);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_592);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_593);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_594);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_595);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_596);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_597);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_598);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_599);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_600);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_601);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_602);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_619);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_620);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_621);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_622);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_623);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_624);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_625);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_626);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_627);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_628);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_629);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_630);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_631);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_632);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_633);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_634);
    vlSelf->top__DOT__d_cache__DOT___GEN_635 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_636 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_637 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_638 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_639 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_640 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_641 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_642 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_643 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_644 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_645 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_646 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_647 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_648 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_649 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_650 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_659);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_660);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_661);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_662);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_663);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_664);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_665);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_666);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_667);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_668);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_669);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_670);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_671);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_672);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_673);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_674);
    vlSelf->top__DOT__d_cache__DOT___GEN_675 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_676 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_677 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_678 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_679 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_680 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_681 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_682 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_683 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_684 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_685 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_686 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_687 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_688 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_689 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_690 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_691 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_692 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_693 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_694 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_695 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_696 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_697 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_698 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_699 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_700 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_701 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_702 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_703 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_704 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_705 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_706 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_722 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_723 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_724 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_725 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_726 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_727 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_728 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_729 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_730 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_731 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_732 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_733 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_734 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_735 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_736 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_737 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_738 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_739);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_740);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_741);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_742);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_743);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_744);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_745);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_746);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_747);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_748);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_749);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_750);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_751);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_752);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_753);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_754);
    vlSelf->top__DOT__d_cache__DOT___GEN_755 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_756 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_757 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_758 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_759 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_760 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_761 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_762 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_763 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_764 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_765 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_766 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_767 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_768 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_769 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_770 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_771 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_772 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_773 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_774 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_775 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_776 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_777 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_778 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_779 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_780 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_781 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_782 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_783 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_784 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_785 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_786 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_787 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_788 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_789 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_790 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_791 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_792 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_793 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_794 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_795 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_796 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_797 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_798 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_799 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_800 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_801 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_802 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_803);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_804);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_805);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_806);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_807);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_808);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_809);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_810);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_811);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_812);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_813);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_814);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_815);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_816);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_817);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_818);
    vlSelf->top__DOT__d_cache__DOT___GEN_819 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_820 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_821 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_822 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_823 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_824 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_825 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_826 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_827 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_828 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_829 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_830 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_831 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_832 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_833 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_834 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_835 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_836 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_837 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_838 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_839 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_840 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_841 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_842 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_843 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_844 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_845 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_846 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_847 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_848 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_849 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_850 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_851 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_852 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_853 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_854 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_855 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_856 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_857 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_858 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_859 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_860 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_861 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_862 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_863 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_864 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_865 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_866 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_867);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_868);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_869);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_870);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_871);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_872);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_873);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_874);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_875);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_876);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_877);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_878);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_879);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_880);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_881);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_882);
    vlSelf->top__DOT__d_cache__DOT___GEN_883 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_884 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_885 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_886 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_887 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_888 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_889 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_890 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_891 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_892 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_893 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_894 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_895 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_896 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_897 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_898 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_899 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_900 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_901 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_902 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_903 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_904 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_905 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_906 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_907 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_908 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_909 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_910 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_911 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_912 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_913 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_914 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_915 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_916 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_917 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_918 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_919 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_920 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_921 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_922 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_923 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_924 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_925 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_926 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_927 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_928 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_929 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_930 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_1010 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_1323 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3585 = VL_RAND_RESET_Q(40);
    vlSelf->top__DOT__d_cache__DOT___GEN_3650 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_3651 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_3652 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__d_cache__DOT___GEN_3653 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3654);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3655);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3656);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3657);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3658);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3659);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3660);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3661);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3662);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3663);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3664);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3665);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3666);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3667);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3668);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3669);
    vlSelf->top__DOT__d_cache__DOT___GEN_3670 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3671 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3672 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3673 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3674 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3675 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3676 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3677 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3678 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3679 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3680 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3681 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3682 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3683 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3684 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3685 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3686 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3687 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3688 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3689 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3690 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3691 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3692 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3693 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3694 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3695 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3696 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3697 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3698 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3699 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3700 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3701 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3702 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_3703 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_3704 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_3705 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_3706 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_3707 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_3708 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_3709 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_3710 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_3711 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_3712 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_3713 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_3714 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_3715 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_3716 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_3717 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3718);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3719);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3720);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3721);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3722);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3723);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3724);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3725);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3726);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3727);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3728);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3729);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3730);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3731);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3732);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3733);
    vlSelf->top__DOT__d_cache__DOT___GEN_3734 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3735 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3736 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3737 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3738 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3739 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3740 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3741 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3742 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3743 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3744 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3745 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3746 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3747 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3748 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3749 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3750 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3751 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3752 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3753 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3754 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3755 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3756 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3757 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3758 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3759 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3760 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3761 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3762 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3763 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3764 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3765 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3766);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3767);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3768);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3769);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3770);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3771);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3772);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3773);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3774);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3775);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3776);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3777);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3778);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3779);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3780);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3781);
    vlSelf->top__DOT__d_cache__DOT___GEN_3782 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3783 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3784 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3785 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3786 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3787 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3788 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3789 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3790 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3791 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3792 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3793 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3794 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3795 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3796 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3797 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3798 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3799 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3800 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3801 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3802 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3803 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3804 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3805 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3806 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3807 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3808 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3809 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3810 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3811 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3812 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3813 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3814);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3815);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3816);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3817);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3818);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3819);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3820);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3821);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3822);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3823);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3824);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3825);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3826);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3827);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3828);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3829);
    vlSelf->top__DOT__d_cache__DOT___GEN_3830 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3831 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3832 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3833 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3834 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3835 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3836 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3837 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3838 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3839 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3840 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3841 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3842 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3843 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3844 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3845 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__d_cache__DOT___GEN_3846 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3847 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3848 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3849 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3850 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3851 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3852 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3853 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3854 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3855 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3856 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3857 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3858 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3859 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3860 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3861 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_3862);
    vlSelf->top__DOT__d_cache__DOT___GEN_3864 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3865 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3866 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3867 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3868 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3869 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3870 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3871 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3872 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3873 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3874 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3875 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3876 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3877 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3878 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3879 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3912 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3913 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3914 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3915 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3916 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3917 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3918 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3919 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3920 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3921 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3922 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3923 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3924 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3925 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3926 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_3927 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_4901 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_4916);
    vlSelf->top__DOT__d_cache__DOT___GEN_1427 = VL_RAND_RESET_Q(40);
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
    vlSelf->__Vdlyvset__top__DOT__Register__DOT__Reg__v0 = 0;
    vlSelf->__Vdly__top__DOT__IFU__DOT__fs_pc_next = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1 = 0;
    vlSelf->__Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(65, vlSelf->__Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2);
    vlSelf->__Vdly__top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__arbiter__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__top__DOT__i_cache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__top__DOT__axi__DOT__awlen = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__top__DOT__axi__DOT__state = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
