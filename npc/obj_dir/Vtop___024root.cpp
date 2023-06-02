// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &Regfile);
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);
void Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_140;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_155;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_170;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_185;
    CData/*6:0*/ top__DOT__IDU__DOT___ALUop_T_132;
    CData/*6:0*/ top__DOT__IDU__DOT___ALUop_T_147;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__Register__DOT__Reg__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Register__DOT__Reg__v0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1;
    CData/*1:0*/ __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state;
    CData/*0:0*/ __Vdly__top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start;
    VlWide<3>/*64:0*/ __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp16;
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp30;
    VlWide<3>/*95:0*/ __Vtemp31;
    VlWide<4>/*127:0*/ __Vtemp33;
    VlWide<4>/*127:0*/ __Vtemp36;
    VlWide<4>/*127:0*/ __Vtemp37;
    VlWide<4>/*127:0*/ __Vtemp38;
    VlWide<4>/*127:0*/ __Vtemp39;
    VlWide<4>/*127:0*/ __Vtemp40;
    VlWide<4>/*127:0*/ __Vtemp41;
    VlWide<4>/*127:0*/ __Vtemp42;
    VlWide<4>/*127:0*/ __Vtemp43;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_42;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_50;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_80;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_98;
    QData/*63:0*/ __Vdlyvval__top__DOT__Register__DOT__Reg__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1;
    // Body
    __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U];
    __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U];
    __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U];
    __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state;
    __Vdly__top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"mul_valid:%1# mul_w:%1# mlu_res:%x\n",
                   1,vlSelf->top__DOT__EXU__DOT__ALU__DOT__mul_valid,
                   1,(0x12U == vlSelf->top__DOT__EXU__DOT__ALUop),
                   64,(((QData)((IData)(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
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
                                                    : 0U))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo))));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"fs_pc:%x fa_valid:%1#\n",
                   64,vlSelf->top__DOT__IFU__DOT__fs_pc,
                   1,(IData)(vlSelf->top__DOT__IFU__DOT__fs_valid));
    }
    __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0 = 0U;
    __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1 = 0U;
    __Vdlyvset__top__DOT__Register__DOT__Reg__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"ds_pc:%x ds_valid:%1# br_taken:%1# src1:%x src2:%x  wen:%1# wmask:%x\n",
                   64,vlSelf->top__DOT__IDU__DOT__ds_pc,
                   1,(IData)(vlSelf->top__DOT__IDU__DOT__ds_valid),
                   1,vlSelf->top__DOT__IDU__DOT__br_taken,
                   64,((1U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                        ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                        : vlSelf->top__DOT__IDU__DOT__src1),
                   64,((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                        ? vlSelf->top__DOT__IDU__DOT__imm
                        : vlSelf->top__DOT__Register_io_rdata2),
                   1,(0x44U == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188)),
                   8,((0x3023U == (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
                       ? 0xffU : (IData)(vlSelf->top__DOT__IDU__DOT___Wmask_T_10)));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"conflict:%1# es_rf_we:%1# rs2:%2# es_rf_dst:%2#\n",
                   1,vlSelf->top__DOT__IDU__DOT__conflict,
                   1,(IData)(vlSelf->top__DOT__EXU__DOT__es_rf_we),
                   5,(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                               >> 0x14U)),5,(IData)(vlSelf->top__DOT__EXU__DOT__es_rd));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"es_pc:%x es_valid:%1# es_allowin:%1#  alu_res:%x src1_value:%x  src2_value:%x\n\n",
                   64,vlSelf->top__DOT__EXU__DOT__es_pc,
                   1,(IData)(vlSelf->top__DOT__EXU__DOT__es_valid),
                   1,vlSelf->top__DOT__EXU__DOT__es_allowin,
                   64,(((QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U]))),
                   64,vlSelf->top__DOT__EXU__DOT__src1_value,
                   64,vlSelf->top__DOT__EXU__DOT__src2_value);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"ms_pc:%x ms_valid:%1# wstrb:%x wdata:%x\n",
                   64,vlSelf->top__DOT__LSU__DOT__ms_pc,
                   1,(IData)(vlSelf->top__DOT__LSU__DOT__ms_valid),
                   8,vlSelf->top__DOT__LSU__DOT__wstrb,
                   64,vlSelf->top__DOT__LSU__DOT__store_data);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"ws_pc:%x ws_valid:%1# rf_dst:%2# rf_we:%1# wdata:%x\n",
                   64,vlSelf->top__DOT__WBU__DOT__ws_pc,
                   1,(IData)(vlSelf->top__DOT__WBU__DOT__ws_valid),
                   5,vlSelf->top__DOT__WBU__DOT__ws_rf_dst,
                   1,((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                      & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)),
                   64,vlSelf->top__DOT__WBU__DOT__ws_res);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__maddr = 0ULL;
    } else if (vlSelf->top__DOT__EXU_io_es_to_ms_valid) {
        vlSelf->top__DOT__LSU__DOT__maddr = (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
    }
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[0U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[1U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[2U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[3U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
        = (((QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[0U])));
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__wen = 0U;
    } else if (vlSelf->top__DOT__EXU_io_es_to_ms_valid) {
        vlSelf->top__DOT__LSU__DOT__wen = vlSelf->top__DOT__EXU__DOT__st_we;
    }
    vlSelf->top__DOT__diff_step = ((~ (IData)(vlSelf->reset)) 
                                   & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid));
    __Vdly__top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                                          ? (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_14)
                                          : (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_0)));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                                           ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                                               ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___step_num_T_1
                                               : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3)
                                           : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3));
    if ((1U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))) {
        __Vdlyvval__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0 
            = ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                ? vlSelf->top__DOT__IDU__DOT__ds_pc
                : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                    ? ((0x1073U == (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
                        ? vlSelf->top__DOT__Register_io_rdata1
                        : ((0x2073U == (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
                            ? (vlSelf->top__DOT__Register_io_rdata1 
                               | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                            : ((0x3073U == (0x707fU 
                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                ? (vlSelf->top__DOT__Register_io_rdata1 
                                   & (~ vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data))
                                : 0ULL))) : 0ULL));
        __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0 = 1U;
        __Vdlyvdim0__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0 
            = ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                ? 1U : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                         ? ((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__IDU__DOT__imm)))
                             ? 3U : (IData)(vlSelf->top__DOT__IDU__DOT___csr_index_T_6))
                         : 0U));
    }
    if ((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))) {
        __Vdlyvval__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1 
            = vlSelf->top__DOT__Register_io_rdata2;
        __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1 = 1U;
    }
    if ((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
          & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
         & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))) {
        __Vdlyvval__top__DOT__Register__DOT__Reg__v0 
            = vlSelf->top__DOT__WBU__DOT__ws_res;
        __Vdlyvset__top__DOT__Register__DOT__Reg__v0 = 1U;
        __Vdlyvdim0__top__DOT__Register__DOT__Reg__v0 
            = vlSelf->top__DOT__WBU__DOT__ws_rf_dst;
    }
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start 
        = __Vdly__top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start;
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res 
        = ((IData)(vlSelf->reset) ? 0ULL : ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                             ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_20
                                             : ((1U 
                                                 == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                                 ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_20
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                                  ? 0ULL
                                                  : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_20))));
    if (vlSelf->reset) {
        __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))) {
        if (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid) {
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))) {
        if ((0U == ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                     | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                    | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))) {
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))) {
        __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state = 0U;
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] = 0U;
        __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U] = 0U;
        __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))) {
        if (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid) {
            VL_EXTEND_WQ(65,64, __Vtemp4, (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2_32 
                                           << 1U));
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                = __Vtemp4[0U];
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U] 
                = __Vtemp4[1U];
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U] 
                = __Vtemp4[2U];
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))) {
        if ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                     | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                    | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))) {
            VL_EXTEND_WQ(65,63, __Vtemp6, (0x7fffffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U])) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                                    >> 2U)))));
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                = __Vtemp6[0U];
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U] 
                = __Vtemp6[1U];
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U] 
                = __Vtemp6[2U];
        }
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"state:%1#  src1_32:%x  src2_32:%x src1:%x  src2:%x\n",
                   2,vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state,
                   64,vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32,
                   64,vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2_32,
                   128,vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1.data(),
                   65,vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2.data());
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALUop = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__ALUop = ((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                              ? 0xfU
                                              : ((0x100073U 
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
                                                              : (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_162)))))))))))))));
    }
    if (__Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0) {
        vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[__Vdlyvdim0__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0] 
            = __Vdlyvval__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0;
    }
    if (__Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1) {
        vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg[3U] 
            = __Vdlyvval__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1;
    }
    if (__Vdlyvset__top__DOT__Register__DOT__Reg__v0) {
        vlSelf->top__DOT__Register__DOT__Reg[__Vdlyvdim0__top__DOT__Register__DOT__Reg__v0] 
            = __Vdlyvval__top__DOT__Register__DOT__Reg__v0;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_valid = 0U;
    } else if (vlSelf->top__DOT__EXU__DOT__es_allowin) {
        vlSelf->top__DOT__EXU__DOT__es_valid = vlSelf->top__DOT__IDU_io_ds_to_es_valid;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__src2_value = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__src2_value = ((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                                   ? vlSelf->top__DOT__IDU__DOT__imm
                                                   : vlSelf->top__DOT__Register_io_rdata2);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__src1_value = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__src1_value = ((1U 
                                                   & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                                   ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                                                   : vlSelf->top__DOT__IDU__DOT__src1);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__wstrb = 0U;
    } else if (vlSelf->top__DOT__EXU_io_es_to_ms_valid) {
        vlSelf->top__DOT__LSU__DOT__wstrb = vlSelf->top__DOT__EXU__DOT__st_wstrb;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__store_data = 0ULL;
    } else if (vlSelf->top__DOT__EXU_io_es_to_ms_valid) {
        vlSelf->top__DOT__LSU__DOT__store_data = vlSelf->top__DOT__EXU__DOT__store_data;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_pc = 0ULL;
    } else if (vlSelf->top__DOT__LSU__DOT__ms_valid) {
        vlSelf->top__DOT__WBU__DOT__ws_pc = vlSelf->top__DOT__LSU__DOT__ms_pc;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__st_we = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__st_we = (0x44U 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188));
    }
    vlSelf->io_step = vlSelf->top__DOT__diff_step;
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___step_num_T_1 
        = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num 
           - (IData)(1U));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
        = __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U] 
        = __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U] 
        = __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state 
        = __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state;
    vlSelf->top__DOT__WBU__DOT__ws_valid = ((~ (IData)(vlSelf->reset)) 
                                            & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid));
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
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_dst = 0U;
    } else if (vlSelf->top__DOT__LSU__DOT__ms_valid) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_dst = vlSelf->top__DOT__LSU__DOT__ms_rf_dst;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_we = 0U;
    } else if (vlSelf->top__DOT__LSU__DOT__ms_valid) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_we = vlSelf->top__DOT__LSU__DOT__ms_rf_we;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_res = 0ULL;
    } else if (vlSelf->top__DOT__LSU__DOT__ms_valid) {
        vlSelf->top__DOT__WBU__DOT__ws_res = ((IData)(vlSelf->top__DOT__LSU__DOT__ren)
                                               ? ((6U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                   ? (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata))))
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata 
                                                                  >> 7U)))
                                                       ? 0xffffffffffffffULL
                                                       : 0ULL) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata)))))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                     ? 
                                                    ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata 
                                                                   >> 0xfU)))
                                                        ? 0xffffffffffffULL
                                                        : 0ULL) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata)))))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                      ? (QData)((IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                       ? (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata))))
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                        ? vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata 
                                                                                >> 0x1fU)))
                                                                            ? 0xffffffffU
                                                                            : 0U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata)))
                                                         : vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata)))))))
                                               : vlSelf->top__DOT__LSU__DOT__ms_res);
    }
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[0U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[1U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[2U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[3U];
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
    Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2_32 
        = ((0x12U == vlSelf->top__DOT__EXU__DOT__ALUop)
            ? (((QData)((IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__src2_value 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))
            : vlSelf->top__DOT__EXU__DOT__src2_value);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__st_wstrb = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__st_wstrb = ((0x3023U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0xffU
                                                 : (IData)(vlSelf->top__DOT__IDU__DOT___Wmask_T_10));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__store_data = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__store_data = ((0x3023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
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
                                                                         : 0U))))));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_pc = 0ULL;
    } else if (vlSelf->top__DOT__EXU_io_es_to_ms_valid) {
        vlSelf->top__DOT__LSU__DOT__ms_pc = vlSelf->top__DOT__EXU__DOT__es_pc;
    }
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
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_dst = 0U;
    } else if (vlSelf->top__DOT__EXU_io_es_to_ms_valid) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_dst = vlSelf->top__DOT__EXU__DOT__es_rd;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_we = 0U;
    } else if (vlSelf->top__DOT__EXU_io_es_to_ms_valid) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_we = vlSelf->top__DOT__EXU__DOT__es_rf_we;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_res = 0ULL;
    } else if (vlSelf->top__DOT__EXU_io_es_to_ms_valid) {
        vlSelf->top__DOT__LSU__DOT__ms_res = (((QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
    }
    vlSelf->top__DOT__LSU__DOT__ms_valid = ((~ (IData)(vlSelf->reset)) 
                                            & (IData)(vlSelf->top__DOT__EXU_io_es_to_ms_valid));
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__load_type = 0U;
    } else if (vlSelf->top__DOT__EXU_io_es_to_ms_valid) {
        vlSelf->top__DOT__LSU__DOT__load_type = vlSelf->top__DOT__EXU__DOT__load_type;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ren = 0U;
    } else if (vlSelf->top__DOT__EXU_io_es_to_ms_valid) {
        vlSelf->top__DOT__LSU__DOT__ren = vlSelf->top__DOT__EXU__DOT__ld_we;
    }
    VL_EXTEND_WQ(65,64, __Vtemp11, (~ (((QData)((IData)(
                                                        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp12, (~ (((QData)((IData)(
                                                        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp16, ((2U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
    __Vtemp20[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
                                        << 1U)) : __Vtemp16[1U]));
    __Vtemp27[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                      ? 0U : (1U & ((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                     ? __Vtemp11[2U]
                                     : ((5U == (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                         ? __Vtemp12[2U]
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
                                                __Vtemp16[2U]))))));
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
                                               ? __Vtemp11[1U]
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                   ? 
                                                  __Vtemp12[1U]
                                                   : 
                                                  __Vtemp20[1U]))))) 
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
                                                          __Vtemp11[0U]
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (7U 
                                                             & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                            ? 
                                                           __Vtemp12[0U]
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
                                                             __Vtemp16[0U]))))))))) 
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
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3 
        = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid)
            ? 0x40U : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_0 
        = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid) 
           | (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2 
        = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid)
            ? 0ULL : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient);
    __Vtemp29[0U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U] 
                      << 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U] 
                                >> 0x1fU));
    __Vtemp29[1U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U] 
                      << 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U] 
                                >> 0x1fU));
    __Vtemp29[2U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U] 
                     >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp30, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                     ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                         ? (1ULL + 
                                            (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                         : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                     : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                         ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                         : vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_SUB_W(3, __Vtemp31, __Vtemp29, __Vtemp30);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
        = __Vtemp31[0U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
        = __Vtemp31[1U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
        = (1U & __Vtemp31[2U]);
    vlSelf->top__DOT__EXU_io_es_to_ms_valid = ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid) 
                                               & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)));
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_pc = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__es_pc = vlSelf->top__DOT__IDU__DOT__ds_pc;
    }
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_14 
        = (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num) 
           & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_0));
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_rd = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__es_rd = (0x1fU 
                                             & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 7U));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_rf_we = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__es_rf_we = ((0x100073U 
                                                 != vlSelf->top__DOT__IDU__DOT__inst) 
                                                & ((0x3023U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                   & ((0x1023U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                      & ((0x23U 
                                                          != 
                                                          (0x707fU 
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
                                                                                & (0x30200073U 
                                                                                != vlSelf->top__DOT__IDU__DOT__inst)))))))))))));
    }
    vlSelf->top__DOT__LSU_io_ms_rf_we = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_we) 
                                         & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid));
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__load_type = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__load_type = ((0x2003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 0U
                                                  : 
                                                 ((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 1U
                                                   : 
                                                  ((0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 2U
                                                    : 
                                                   ((0x6003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 3U
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 4U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 5U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 6U
                                                        : 0U)))))));
    }
    if (vlSelf->top__DOT__LSU__DOT__ren) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__LSU__DOT__maddr, vlSelf->__Vtask_pmem_read__2__Rdata);
        vlSelf->top__DOT__LSU__DOT__Mem_modle_Rdata 
            = vlSelf->__Vtask_pmem_read__2__Rdata;
    }
    if (((IData)(vlSelf->top__DOT__LSU__DOT__wen) & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__LSU__DOT__maddr, vlSelf->top__DOT__LSU__DOT__store_data, (IData)(vlSelf->top__DOT__LSU__DOT__wstrb));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ld_we = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__ld_we = ((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst)) 
                                             | ((0x2003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                | ((0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst)) 
                                                   | ((0x1003U 
                                                       == 
                                                       (0x707fU 
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
                                                                & vlSelf->top__DOT__IDU__DOT__inst))))))));
    }
    vlSelf->top__DOT__EXU__DOT__es_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__EXU__DOT__es_valid)) 
                                               | (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy))));
    vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value = 
        ((6U == vlSelf->top__DOT__EXU__DOT__ALUop) ? vlSelf->top__DOT__EXU__DOT__es_pc
          : vlSelf->top__DOT__EXU__DOT__src1_value);
    if (vlSelf->reset) {
        vlSelf->top__DOT__IDU__DOT__ds_pc = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__IFU__DOT__fs_valid) 
                & (IData)(vlSelf->top__DOT__IDU__DOT__ds_allowin))) {
        vlSelf->top__DOT__IDU__DOT__ds_pc = vlSelf->top__DOT__IFU__DOT__fs_pc;
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
    VL_EXTEND_WQ(128,64, __Vtemp33, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                          : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
    if (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1[0U] 
            = __Vtemp33[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1[1U] 
            = __Vtemp33[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1[2U] 
            = __Vtemp33[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1[3U] 
            = __Vtemp33[3U];
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
    if (vlSelf->reset) {
        vlSelf->top__DOT__IFU__DOT__fs_pc = 0x7ffffffcULL;
    } else if (vlSelf->top__DOT__IFU__DOT__fs_allowin) {
        vlSelf->top__DOT__IFU__DOT__fs_pc = (((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                                              & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))
                                              ? ((0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 
                                                 (0xfffffffffffffffeULL 
                                                  & vlSelf->top__DOT__IDU__DOT___br_target_T_1)
                                                  : vlSelf->top__DOT__IDU__DOT___br_target_T_1)
                                              : vlSelf->top__DOT__IFU__DOT__seq_pc);
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
    vlSelf->io_pc = vlSelf->top__DOT__IFU__DOT__fs_pc;
    vlSelf->top__DOT__IFU__DOT__seq_pc = (4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc);
    if (vlSelf->reset) {
        vlSelf->top__DOT__IDU__DOT__ds_valid = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel) 
                & (IData)(vlSelf->top__DOT__IDU__DOT__ds_allowin))) {
        vlSelf->top__DOT__IDU__DOT__ds_valid = 0U;
    } else if (vlSelf->top__DOT__IDU__DOT__ds_allowin) {
        vlSelf->top__DOT__IDU__DOT__ds_valid = vlSelf->top__DOT__IFU__DOT__fs_valid;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__IDU__DOT__inst = 0U;
    } else if (((IData)(vlSelf->top__DOT__IFU__DOT__fs_valid) 
                & (IData)(vlSelf->top__DOT__IDU__DOT__ds_allowin))) {
        vlSelf->top__DOT__IDU__DOT__inst = (IData)(vlSelf->top__DOT__IFU__DOT__inst_read_Rdata);
    }
    VL_EXTEND_WQ(127,64, __Vtemp36, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp37, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp38, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp39, (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))));
    VL_EXTEND_WQ(127,64, __Vtemp40, vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp41, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp42, __Vtemp41, 
                  (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp43, ((0x34U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
            = __Vtemp36[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = __Vtemp36[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = __Vtemp36[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = (0x7fffffffU & __Vtemp36[3U]);
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp37[0U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? __Vtemp38[0U]
                                    : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp39[0U]
                                        : ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp40[0U]
                                            : ((0x37U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp42[0U]
                                                : __Vtemp43[0U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp37[1U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? __Vtemp38[1U]
                                    : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp39[1U]
                                        : ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp40[1U]
                                            : ((0x37U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp42[1U]
                                                : __Vtemp43[1U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp37[2U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? __Vtemp38[2U]
                                    : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp39[2U]
                                        : ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp40[2U]
                                            : ((0x37U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp42[2U]
                                                : __Vtemp43[2U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = (0x7fffffffU & ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                               ? __Vtemp37[3U] : ((0x3fU 
                                                   == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                   ? 
                                                  __Vtemp38[3U]
                                                   : 
                                                  ((0x38U 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? 
                                                   __Vtemp39[3U]
                                                    : 
                                                   ((0x39U 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? 
                                                    __Vtemp40[3U]
                                                     : 
                                                    ((0x37U 
                                                      == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                      ? 
                                                     __Vtemp42[3U]
                                                      : 
                                                     __Vtemp43[3U]))))));
    }
    vlSelf->top__DOT__IFU__DOT__fs_valid = ((~ (IData)(vlSelf->reset)) 
                                            & (IData)(vlSelf->top__DOT__IFU__DOT___GEN_1));
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
    vlSelf->top__DOT__IDU__DOT__src1 = ((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                                         ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                         : vlSelf->top__DOT__Register_io_rdata1);
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
    if (vlSelf->top__DOT__IFU__DOT__fs_valid) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__IFU__DOT__fs_pc, vlSelf->__Vtask_pmem_read__1__Rdata);
        vlSelf->top__DOT__IFU__DOT__inst_read_Rdata 
            = vlSelf->__Vtask_pmem_read__1__Rdata;
    }
    vlSelf->top__DOT__IDU__DOT___ALUop_T_162 = ((0x40005013U 
                                                 == 
                                                 (0xfc00707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0x15U
                                                 : 
                                                ((0x4003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 0xfU
                                                  : 
                                                 ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0xfU
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0xfU
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 0xbU
                                                     : 
                                                    ((0x4013U 
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
    vlSelf->io_inst = (IData)(vlSelf->top__DOT__IFU__DOT__inst_read_Rdata);
    Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(
                                                              (2U 
                                                               == 
                                                               ((0x13U 
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
                                                                              : (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_162)))))))))))))))));
    Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit(
                                                             (0x3dU 
                                                              == 
                                                              ((0x13U 
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
                                                                             : (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_162)))))))))))))))));
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
    vlSelf->top__DOT__IDU__DOT___inst_type_T_188 = 
        ((0x13U == (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
          ? 0x40U : ((0x17U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                      ? 0x42U : ((0x37U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                                  ? 0x42U : (IData)(top__DOT__IDU__DOT___inst_type_T_185))));
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
    vlSelf->top__DOT__IDU__DOT___csr_index_T_6 = ((0x300U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->top__DOT__IDU__DOT__imm)))
                                                   ? 2U
                                                   : 
                                                  (0x341U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->top__DOT__IDU__DOT__imm))));
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
        [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__IDU__DOT__imm)))
           ? 3U : (IData)(vlSelf->top__DOT__IDU__DOT___csr_index_T_6))];
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

VL_INLINE_OPT void Vtop___024root___combo__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp155;
    VlWide<3>/*95:0*/ __Vtemp158;
    VlWide<4>/*127:0*/ __Vtemp163;
    VlWide<5>/*159:0*/ __Vtemp164;
    VlWide<5>/*159:0*/ __Vtemp167;
    VlWide<5>/*159:0*/ __Vtemp170;
    VlWide<5>/*159:0*/ __Vtemp184;
    VlWide<5>/*159:0*/ __Vtemp187;
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp155, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
    VL_EXTEND_WQ(65,64, __Vtemp158, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
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
                    : __Vtemp155[0U]) : __Vtemp158[0U]);
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
                                      << 1U))) : __Vtemp155[1U])
                : __Vtemp158[1U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_23[2U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU)
                        : ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU))
                    : __Vtemp155[2U]) : __Vtemp158[2U]);
    }
    if (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid) {
        __Vtemp163[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
        __Vtemp163[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                  >> 0x20U));
        __Vtemp163[2U] = (IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                 >> 0x3fU)))
                                   ? 0xffffffffffffffffULL
                                   : 0ULL));
        __Vtemp163[3U] = (IData)((((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                  >> 0x3fU)))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL) >> 0x20U));
    } else {
        __Vtemp163[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U];
        __Vtemp163[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U];
        __Vtemp163[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U];
        __Vtemp163[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U];
    }
    VL_EXTEND_WW(130,128, __Vtemp164, __Vtemp163);
    VL_EXTEND_WW(130,128, __Vtemp167, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1);
    VL_EXTEND_WW(130,128, __Vtemp170, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[0U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[1U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[2U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[3U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[4U] = 0U;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[0U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp164[0U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
                                            << 2U) : 
                                        __Vtemp167[0U])
                                     : __Vtemp170[0U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[1U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp164[1U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
                                             >> 0x1eU) 
                                            | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
                                               << 2U))
                                         : __Vtemp167[1U])
                                     : __Vtemp170[1U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[2U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp164[2U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
                                             >> 0x1eU) 
                                            | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
                                               << 2U))
                                         : __Vtemp167[2U])
                                     : __Vtemp170[2U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[3U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp164[3U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
                                             >> 0x1eU) 
                                            | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
                                               << 2U))
                                         : __Vtemp167[3U])
                                     : __Vtemp170[3U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_30[4U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp164[4U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
                                            >> 0x1eU)
                                         : __Vtemp167[4U])
                                     : __Vtemp170[4U]));
    }
    VL_EXTEND_WW(129,128, __Vtemp184, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1);
    VL_EXTEND_WW(129,128, __Vtemp187, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1);
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
                       << 1U) : __Vtemp184[0U]) : __Vtemp187[0U]);
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
                                     << 1U)) : __Vtemp184[1U])
                : __Vtemp187[1U]);
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
                          << 1U)) : __Vtemp184[2U])
                : __Vtemp187[2U]);
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
                                     << 1U)) : __Vtemp184[3U])
                : __Vtemp187[3U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[4U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                         ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U]
                         : ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                             >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                       << 0x1fU))) 
                       >> 0x1fU) : __Vtemp184[4U]) : 
               __Vtemp187[4U]);
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__3(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
