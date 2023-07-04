// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__4\n"); );
    // Variables
    CData/*0:0*/ top__DOT__IFU__DOT___T_1;
    CData/*0:0*/ top__DOT__IDU__DOT___conflict_es_rs2_T_6;
    CData/*0:0*/ top__DOT__IDU__DOT___ds_ready_go_T_33;
    QData/*63:0*/ top__DOT__IDU__DOT___rdata1_T_1;
    QData/*63:0*/ top__DOT__IDU__DOT___br_taken_T;
    QData/*63:0*/ top__DOT__IDU__DOT___br_taken_T_1;
    QData/*63:0*/ top__DOT__IDU__DOT___br_target_T_1;
    // Body
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
    vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1 = ((IData)(vlSelf->top__DOT__IDU__DOT___conflict_es_rs1_T_4) 
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
    vlSelf->top__DOT__IDU__DOT__conflict_ws_rs1 = ((IData)(vlSelf->top__DOT__IDU__DOT___conflict_es_rs1_T_4) 
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
    vlSelf->top__DOT__IFU__DOT__fs_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__IFU__DOT__fs_valid)) 
                                               | (IData)(top__DOT__IFU__DOT___T_1)));
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

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) VL_ATTR_COLD;

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__4(vlSelf);
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
    vlSelf->top__DOT__IFU__DOT__fs_allowin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__ds_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__ds_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__br_taken_cancel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__src1_is_pc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___inst_type_T_188 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT__csr_write = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__IDU__DOT___conflict_es_rs1_T_4 = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT__i_cache__DOT___GEN_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__way0_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_45 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_61 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__way1_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_77 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_93 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__way2_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT___GEN_109 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__i_cache__DOT___GEN_125 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__way3_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_cache__DOT__unuse_way = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT___GEN_132 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT___GEN_138 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i_cache__DOT___GEN_139 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i_cache__DOT___GEN_140 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__i_cache__DOT___GEN_141 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___ram_0_T);
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
    vlSelf->top__DOT__i_cache__DOT___GEN_203 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_222);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_223);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_224);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_225);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_226);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_227);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_228);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__i_cache__DOT___GEN_229);
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
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vi0]);
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
    vlSelf->top__DOT__d_cache__DOT__unvalidIndex = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__d_cache__DOT__tagMatch_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__tagMatch_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__tagMatch_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__tagMatch_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__anyMatch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT__tagIndex = VL_RAND_RESET_I(17);
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
    vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2 = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__d_cache__DOT__wmask = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__d_cache__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_16 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(191, vlSelf->top__DOT__d_cache__DOT___T_15);
    vlSelf->top__DOT__d_cache__DOT___GEN_218 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_219 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_cache__DOT___GEN_220 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__d_cache__DOT___GEN_221 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__d_cache__DOT___GEN_230 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_231 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_232 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_233 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_234 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_235 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_236 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_237 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_238 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_239 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_240 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_241 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_242 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_243 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_244 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__d_cache__DOT___GEN_245 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_258);
    vlSelf->top__DOT__d_cache__DOT___GEN_321 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_330 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_354 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_363 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_cache__DOT___GEN_562 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_cache__DOT___GEN_580);
    vlSelf->top__DOT__d_cache__DOT___GEN_472 = VL_RAND_RESET_Q(40);
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
    vlSelf->__Vdly__top__DOT__IFU__DOT__fs_pc_next = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__top__DOT__i_cache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__top__DOT__d_cache__DOT__state = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
