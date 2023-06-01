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
    CData/*6:0*/ top__DOT__IDU__DOT___ALUop_T_144;
    CData/*6:0*/ top__DOT__IDU__DOT___ALUop_T_159;
    CData/*6:0*/ top__DOT__IDU__DOT___ALUop_T_174;
    CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_4;
    CData/*0:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_10;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__Register__DOT__Reg__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Register__DOT__Reg__v0;
    VlWide<4>/*126:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_154;
    VlWide<4>/*126:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_174;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp3;
    VlWide<4>/*127:0*/ __Vtemp5;
    VlWide<4>/*127:0*/ __Vtemp6;
    VlWide<4>/*127:0*/ __Vtemp7;
    VlWide<4>/*127:0*/ __Vtemp8;
    VlWide<4>/*127:0*/ __Vtemp17;
    VlWide<4>/*127:0*/ __Vtemp18;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp24;
    VlWide<3>/*95:0*/ __Vtemp25;
    VlWide<3>/*95:0*/ __Vtemp26;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<4>/*127:0*/ __Vtemp28;
    VlWide<4>/*127:0*/ __Vtemp29;
    VlWide<4>/*127:0*/ __Vtemp30;
    VlWide<4>/*127:0*/ __Vtemp31;
    VlWide<4>/*127:0*/ __Vtemp32;
    VlWide<4>/*127:0*/ __Vtemp33;
    VlWide<4>/*127:0*/ __Vtemp34;
    VlWide<4>/*127:0*/ __Vtemp35;
    VlWide<4>/*127:0*/ __Vtemp36;
    VlWide<4>/*127:0*/ __Vtemp37;
    VlWide<4>/*127:0*/ __Vtemp38;
    VlWide<4>/*127:0*/ __Vtemp59;
    VlWide<4>/*127:0*/ __Vtemp60;
    VlWide<4>/*127:0*/ __Vtemp61;
    VlWide<4>/*127:0*/ __Vtemp62;
    VlWide<4>/*127:0*/ __Vtemp63;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_20;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_35;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_45;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_50;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_118;
    QData/*63:0*/ __Vdlyvval__top__DOT__Register__DOT__Reg__v0;
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"fs_pc:%x fa_valid:%1#\n",
                   64,vlSelf->top__DOT__IFU__DOT__fs_pc,
                   1,(IData)(vlSelf->top__DOT__IFU__DOT__fs_valid));
    }
    __Vdlyvset__top__DOT__Register__DOT__Reg__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"ds_pc:%x ds_valid:%1# br_taken:%1# src1:%x src2:%x  wen:%1# wmask:%x\n",
                   64,vlSelf->top__DOT__IDU__DOT__ds_pc,
                   1,(IData)(vlSelf->top__DOT__IDU__DOT__ds_valid),
                   1,vlSelf->top__DOT__IDU__DOT__br_taken,
                   64,((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                        ? vlSelf->top__DOT__IDU__DOT__ds_pc
                        : vlSelf->top__DOT__Register_io_rdata1),
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
        VL_FWRITEF(0x80000002U,"ms_pc:%x ms_valid:%1# wstrb:%x wdata:%x\n",
                   64,vlSelf->top__DOT__LSU__DOT__ms_pc,
                   1,(IData)(vlSelf->top__DOT__LSU__DOT__ms_valid),
                   8,vlSelf->top__DOT__LSU__DOT__wstrb,
                   64,vlSelf->top__DOT__LSU__DOT__store_data);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"ws_pc:%x ws_valid:%1# rf_dst:%2# rf_we:%1# wdata:%x\n\n",
                   64,vlSelf->top__DOT__WBU__DOT__ws_pc,
                   1,(IData)(vlSelf->top__DOT__WBU__DOT__ws_valid),
                   5,vlSelf->top__DOT__WBU__DOT__ws_rf_dst,
                   1,((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
                      & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)),
                   64,vlSelf->top__DOT__WBU__DOT__ws_res);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"es_pc:%x es_valid:%1# alu_res:%x src1_value:%x  src2_value:%x\n",
                   64,vlSelf->top__DOT__EXU__DOT__es_pc,
                   1,(IData)(vlSelf->top__DOT__EXU__DOT__es_valid),
                   64,(((QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U]))),
                   64,vlSelf->top__DOT__EXU__DOT__src1_value,
                   64,vlSelf->top__DOT__EXU__DOT__src2_value);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__maddr = 0ULL;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__maddr = (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__wen = 0U;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__wen = vlSelf->top__DOT__EXU__DOT__st_we;
    }
    vlSelf->top__DOT__diff_step = ((~ (IData)(vlSelf->reset)) 
                                   & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid));
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALUop = 0U;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__ALUop = ((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                              ? 1U : 
                                             ((0x100073U 
                                               == vlSelf->top__DOT__IDU__DOT__inst)
                                               ? 2U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 3U
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
                                                     : (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_189))))));
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
    if (__Vdlyvset__top__DOT__Register__DOT__Reg__v0) {
        vlSelf->top__DOT__Register__DOT__Reg[__Vdlyvdim0__top__DOT__Register__DOT__Reg__v0] 
            = __Vdlyvval__top__DOT__Register__DOT__Reg__v0;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__wstrb = 0U;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__wstrb = vlSelf->top__DOT__EXU__DOT__st_wstrb;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__store_data = 0ULL;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__store_data = vlSelf->top__DOT__EXU__DOT__store_data;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_pc = 0ULL;
    } else if (vlSelf->top__DOT__LSU__DOT__ms_valid) {
        vlSelf->top__DOT__WBU__DOT__ws_pc = vlSelf->top__DOT__LSU__DOT__ms_pc;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__src2_value = 0ULL;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__src2_value = ((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                                   ? vlSelf->top__DOT__IDU__DOT__imm
                                                   : vlSelf->top__DOT__Register_io_rdata2);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__src1_value = 0ULL;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__src1_value = ((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                                                   ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                                   : vlSelf->top__DOT__Register_io_rdata1);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__st_we = 0U;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__st_we = (0x44U 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188));
    }
    vlSelf->io_step = vlSelf->top__DOT__diff_step;
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
    Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__st_wstrb = 0U;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__st_wstrb = ((0x3023U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0xffU
                                                 : (IData)(vlSelf->top__DOT__IDU__DOT___Wmask_T_10));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__store_data = 0ULL;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
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
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__ms_pc = vlSelf->top__DOT__EXU__DOT__es_pc;
    }
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__remuw_res 
        = VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), (IData)(vlSelf->top__DOT__EXU__DOT__src2_value));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT___mluw_res_T_2 
        = ((QData)((IData)(vlSelf->top__DOT__EXU__DOT__src1_value)) 
           * (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT___divw_res_T_4 
        = (0x1ffffffffULL & VL_DIVS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,32, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value))), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,32, (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__divuw_res 
        = VL_DIV_III(32, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), (IData)(vlSelf->top__DOT__EXU__DOT__src2_value));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__remw_res 
        = VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__EXU__DOT__src1_value), (IData)(vlSelf->top__DOT__EXU__DOT__src2_value));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res 
        = ((IData)(vlSelf->top__DOT__EXU__DOT__src1_value) 
           >> (0x1fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res = 
        (vlSelf->top__DOT__EXU__DOT__src1_value - vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__or_res = 
        (vlSelf->top__DOT__EXU__DOT__src1_value | vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__xor_res = 
        (vlSelf->top__DOT__EXU__DOT__src1_value ^ vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__and_res = 
        (vlSelf->top__DOT__EXU__DOT__src1_value & vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res = 
        VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__EXU__DOT__src1_value, 
                       (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__srl_res = 
        (vlSelf->top__DOT__EXU__DOT__src1_value >> 
         (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp2, vlSelf->top__DOT__EXU__DOT__src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp3, __Vtemp2, (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sll_res[0U] 
        = __Vtemp3[0U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sll_res[1U] 
        = __Vtemp3[1U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sll_res[2U] 
        = __Vtemp3[2U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sll_res[3U] 
        = (0x7fffffffU & __Vtemp3[3U]);
    top__DOT__EXU__DOT__ALU__DOT___alu_res_T_45 = (
                                                   ((QData)((IData)(
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
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res 
        = (0x7fffffffffffffffULL & ((QData)((IData)(vlSelf->top__DOT__EXU__DOT__src1_value)) 
                                    << (0x1fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))));
    top__DOT__EXU__DOT__ALU__DOT___alu_res_T_4 = (vlSelf->top__DOT__EXU__DOT__src1_value 
                                                  < vlSelf->top__DOT__EXU__DOT__src2_value);
    top__DOT__EXU__DOT__ALU__DOT___alu_res_T_10 = VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res = 
        (vlSelf->top__DOT__EXU__DOT__src1_value + vlSelf->top__DOT__EXU__DOT__src2_value);
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_dst = 0U;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_dst = vlSelf->top__DOT__EXU__DOT__es_rd;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_we = 0U;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_we = vlSelf->top__DOT__EXU__DOT__es_rf_we;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_res = 0ULL;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__ms_res = (((QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
    }
    vlSelf->top__DOT__LSU__DOT__ms_valid = ((~ (IData)(vlSelf->reset)) 
                                            & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid));
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__load_type = 0U;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__load_type = vlSelf->top__DOT__EXU__DOT__load_type;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ren = 0U;
    } else if (vlSelf->top__DOT__EXU__DOT__es_valid) {
        vlSelf->top__DOT__LSU__DOT__ren = vlSelf->top__DOT__EXU__DOT__ld_we;
    }
    top__DOT__EXU__DOT__ALU__DOT___alu_res_T_50 = (
                                                   ((QData)((IData)(
                                                                    ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res 
                                                                      >> 0x1fU)
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__srlw_res)));
    top__DOT__EXU__DOT__ALU__DOT___alu_res_T_35 = (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res 
                                                                                >> 0x1fU)))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sllw_res)));
    top__DOT__EXU__DOT__ALU__DOT___alu_res_T_20 = (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res 
                                                                                >> 0x1fU)))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res)));
    top__DOT__EXU__DOT__ALU__DOT___alu_res_T_118 = 
        ((0x36U == vlSelf->top__DOT__EXU__DOT__ALUop)
          ? (QData)((IData)(top__DOT__EXU__DOT__ALU__DOT___alu_res_T_10))
          : ((0x1eU == vlSelf->top__DOT__EXU__DOT__ALUop)
              ? (QData)((IData)(top__DOT__EXU__DOT__ALU__DOT___alu_res_T_4))
              : ((0x20U == vlSelf->top__DOT__EXU__DOT__ALUop)
                  ? (QData)((IData)(top__DOT__EXU__DOT__ALU__DOT___alu_res_T_4))
                  : ((6U == vlSelf->top__DOT__EXU__DOT__ALUop)
                      ? (4ULL + vlSelf->top__DOT__EXU__DOT__src1_value)
                      : ((5U == vlSelf->top__DOT__EXU__DOT__ALUop)
                          ? (4ULL + vlSelf->top__DOT__EXU__DOT__src1_value)
                          : ((4U == vlSelf->top__DOT__EXU__DOT__ALUop)
                              ? vlSelf->top__DOT__EXU__DOT__src2_value
                              : ((3U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                  ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res
                                  : ((1U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                      ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res
                                      : ((0x23U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                          ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res
                                          : ((0x3bU 
                                              == vlSelf->top__DOT__EXU__DOT__ALUop)
                                              ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res
                                              : ((0x25U 
                                                  == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                  ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res
                                                  : 
                                                 ((0x24U 
                                                   == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                   ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res
                                                   : 
                                                  ((0x3aU 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res
                                                    : 
                                                   ((0x21U 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res
                                                     : 
                                                    ((0x22U 
                                                      == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                      ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res
                                                      : 
                                                     ((7U 
                                                       == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                       ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res
                                                       : 
                                                      ((0x27U 
                                                        == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                        ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res
                                                        : 
                                                       ((0x26U 
                                                         == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                         ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res
                                                         : 
                                                        ((0x28U 
                                                          == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                          ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res
                                                          : 0ULL)))))))))))))))))));
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_pc = 0ULL;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__es_pc = vlSelf->top__DOT__IDU__DOT__ds_pc;
    }
    VL_EXTEND_WQ(127,64, __Vtemp5, top__DOT__EXU__DOT__ALU__DOT___alu_res_T_45);
    VL_EXTEND_WQ(127,64, __Vtemp6, top__DOT__EXU__DOT__ALU__DOT___alu_res_T_35);
    VL_EXTEND_WQ(127,64, __Vtemp7, vlSelf->top__DOT__EXU__DOT__ALU__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp8, ((0x16U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                     ? top__DOT__EXU__DOT__ALU__DOT___alu_res_T_35
                                     : ((0xdU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                         ? (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res 
                                                                          >> 0x1fU)))
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res)))
                                         : ((9U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                             ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__and_res
                                             : ((8U 
                                                 == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                 ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__and_res
                                                 : 
                                                ((0xaU 
                                                  == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                  ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__xor_res
                                                  : 
                                                 ((0x2eU 
                                                   == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                   ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__xor_res
                                                   : 
                                                  ((0x2fU 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__or_res
                                                    : 
                                                   ((0xbU 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__or_res
                                                     : 
                                                    ((0x15U 
                                                      == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                      ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res
                                                      : 
                                                     ((0xfU 
                                                       == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                       ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__add_res
                                                       : 
                                                      ((0x10U 
                                                        == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                        ? top__DOT__EXU__DOT__ALU__DOT___alu_res_T_20
                                                        : 
                                                       ((0xeU 
                                                         == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                         ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__sub_res
                                                         : 
                                                        ((0xcU 
                                                          == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                          ? top__DOT__EXU__DOT__ALU__DOT___alu_res_T_20
                                                          : 
                                                         ((0x1fU 
                                                           == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                           ? (QData)((IData)(top__DOT__EXU__DOT__ALU__DOT___alu_res_T_10))
                                                           : top__DOT__EXU__DOT__ALU__DOT___alu_res_T_118)))))))))))))));
    if ((0x1aU == vlSelf->top__DOT__EXU__DOT__ALUop)) {
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_154[0U] 
            = __Vtemp5[0U];
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_154[1U] 
            = __Vtemp5[1U];
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_154[2U] 
            = __Vtemp5[2U];
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_154[3U] 
            = __Vtemp5[3U];
    } else {
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_154[0U] 
            = ((0x19U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp6[0U] : ((0x18U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                   ? __Vtemp7[0U] : 
                                  ((0x17U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__sll_res[0U]
                                    : __Vtemp8[0U])));
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_154[1U] 
            = ((0x19U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp6[1U] : ((0x18U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                   ? __Vtemp7[1U] : 
                                  ((0x17U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__sll_res[1U]
                                    : __Vtemp8[1U])));
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_154[2U] 
            = ((0x19U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp6[2U] : ((0x18U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                   ? __Vtemp7[2U] : 
                                  ((0x17U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__sll_res[2U]
                                    : __Vtemp8[2U])));
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_154[3U] 
            = ((0x19U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp6[3U] : ((0x18U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                   ? __Vtemp7[3U] : 
                                  ((0x17U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__sll_res[3U]
                                    : __Vtemp8[3U])));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_rd = 0U;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
        vlSelf->top__DOT__EXU__DOT__es_rd = (0x1fU 
                                             & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 7U));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_rf_we = 0U;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
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
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
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
    vlSelf->top__DOT__EXU__DOT__es_valid = ((~ (IData)(vlSelf->reset)) 
                                            & (IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid));
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ld_we = 0U;
    } else if (vlSelf->top__DOT__IDU_io_ds_to_es_valid) {
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
    VL_EXTEND_WQ(127,64, __Vtemp17, (((QData)((IData)(
                                                      ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__remw_res 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__remw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp18, (((QData)((IData)(
                                                      ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__divuw_res 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__divuw_res))));
    VL_EXTENDS_WQ(65,64, __Vtemp21, vlSelf->top__DOT__EXU__DOT__src1_value);
    __Vtemp22[0U] = __Vtemp21[0U];
    __Vtemp22[1U] = __Vtemp21[1U];
    __Vtemp22[2U] = (1U & __Vtemp21[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp24, vlSelf->top__DOT__EXU__DOT__src2_value);
    __Vtemp25[0U] = __Vtemp24[0U];
    __Vtemp25[1U] = __Vtemp24[1U];
    __Vtemp25[2U] = (1U & __Vtemp24[2U]);
    VL_DIVS_WWW(65, __Vtemp26, __Vtemp22, __Vtemp25);
    __Vtemp27[0U] = __Vtemp26[0U];
    __Vtemp27[1U] = __Vtemp26[1U];
    __Vtemp27[2U] = (1U & __Vtemp26[2U]);
    VL_EXTEND_WW(127,65, __Vtemp28, __Vtemp27);
    VL_EXTEND_WQ(127,64, __Vtemp29, VL_DIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp30, (((QData)((IData)(
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__EXU__DOT__ALU__DOT___divw_res_T_4 
                                                                   >> 0x1fU)))
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT___divw_res_T_4))));
    VL_EXTEND_WQ(127,64, __Vtemp31, (((QData)((IData)(
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__EXU__DOT__ALU__DOT___mluw_res_T_2 
                                                                   >> 0x1fU)))
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT___mluw_res_T_2))));
    VL_EXTEND_WQ(128,64, __Vtemp32, vlSelf->top__DOT__EXU__DOT__src1_value);
    VL_EXTEND_WQ(128,64, __Vtemp33, vlSelf->top__DOT__EXU__DOT__src2_value);
    VL_MUL_W(4, __Vtemp34, __Vtemp32, __Vtemp33);
    VL_EXTEND_WQ(127,64, __Vtemp35, (((QData)((IData)(
                                                      __Vtemp34[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp34[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp36, top__DOT__EXU__DOT__ALU__DOT___alu_res_T_50);
    VL_EXTEND_WQ(127,64, __Vtemp37, top__DOT__EXU__DOT__ALU__DOT___alu_res_T_45);
    VL_EXTEND_WQ(127,64, __Vtemp38, top__DOT__EXU__DOT__ALU__DOT___alu_res_T_50);
    if ((0x14U == vlSelf->top__DOT__EXU__DOT__ALUop)) {
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_174[0U] 
            = __Vtemp17[0U];
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_174[1U] 
            = __Vtemp17[1U];
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_174[2U] 
            = __Vtemp17[2U];
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_174[3U] 
            = __Vtemp17[3U];
    } else {
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_174[0U] 
            = ((0x35U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp18[0U] : ((0x31U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? __Vtemp28[0U]
                                    : ((0x30U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp29[0U]
                                        : ((0x13U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp30[0U]
                                            : ((0x12U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp31[0U]
                                                : (
                                                   (0x11U 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? 
                                                   __Vtemp35[0U]
                                                    : 
                                                   ((0x1dU 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? 
                                                    __Vtemp36[0U]
                                                     : 
                                                    ((0x1cU 
                                                      == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                      ? 
                                                     __Vtemp37[0U]
                                                      : 
                                                     ((0x1bU 
                                                       == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                       ? 
                                                      __Vtemp38[0U]
                                                       : 
                                                      top__DOT__EXU__DOT__ALU__DOT___alu_res_T_154[0U])))))))));
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_174[1U] 
            = ((0x35U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp18[1U] : ((0x31U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? __Vtemp28[1U]
                                    : ((0x30U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp29[1U]
                                        : ((0x13U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp30[1U]
                                            : ((0x12U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp31[1U]
                                                : (
                                                   (0x11U 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? 
                                                   __Vtemp35[1U]
                                                    : 
                                                   ((0x1dU 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? 
                                                    __Vtemp36[1U]
                                                     : 
                                                    ((0x1cU 
                                                      == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                      ? 
                                                     __Vtemp37[1U]
                                                      : 
                                                     ((0x1bU 
                                                       == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                       ? 
                                                      __Vtemp38[1U]
                                                       : 
                                                      top__DOT__EXU__DOT__ALU__DOT___alu_res_T_154[1U])))))))));
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_174[2U] 
            = ((0x35U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp18[2U] : ((0x31U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? __Vtemp28[2U]
                                    : ((0x30U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp29[2U]
                                        : ((0x13U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp30[2U]
                                            : ((0x12U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp31[2U]
                                                : (
                                                   (0x11U 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? 
                                                   __Vtemp35[2U]
                                                    : 
                                                   ((0x1dU 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? 
                                                    __Vtemp36[2U]
                                                     : 
                                                    ((0x1cU 
                                                      == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                      ? 
                                                     __Vtemp37[2U]
                                                      : 
                                                     ((0x1bU 
                                                       == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                       ? 
                                                      __Vtemp38[2U]
                                                       : 
                                                      top__DOT__EXU__DOT__ALU__DOT___alu_res_T_154[2U])))))))));
        top__DOT__EXU__DOT__ALU__DOT___alu_res_T_174[3U] 
            = ((0x35U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp18[3U] : ((0x31U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? __Vtemp28[3U]
                                    : ((0x30U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp29[3U]
                                        : ((0x13U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp30[3U]
                                            : ((0x12U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp31[3U]
                                                : (
                                                   (0x11U 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? 
                                                   __Vtemp35[3U]
                                                    : 
                                                   ((0x1dU 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? 
                                                    __Vtemp36[3U]
                                                     : 
                                                    ((0x1cU 
                                                      == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                      ? 
                                                     __Vtemp37[3U]
                                                      : 
                                                     ((0x1bU 
                                                       == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                       ? 
                                                      __Vtemp38[3U]
                                                       : 
                                                      top__DOT__EXU__DOT__ALU__DOT___alu_res_T_154[3U])))))))));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__IDU__DOT__ds_pc = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__IFU__DOT__fs_valid) 
                & (IData)(vlSelf->top__DOT__IDU__DOT__ds_allowin))) {
        vlSelf->top__DOT__IDU__DOT__ds_pc = vlSelf->top__DOT__IFU__DOT__fs_pc;
    }
    VL_EXTEND_WQ(127,64, __Vtemp59, vlSelf->top__DOT__EXU__DOT__ALU__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp60, vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp61, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp62, VL_MODDIV_QQQ(64, vlSelf->top__DOT__EXU__DOT__src1_value, vlSelf->top__DOT__EXU__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp63, (((QData)((IData)(
                                                      ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__remuw_res 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__remuw_res))));
    if ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U] 
            = __Vtemp59[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = __Vtemp59[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = __Vtemp59[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = __Vtemp59[3U];
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U] 
            = ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp60[0U] : ((0x37U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__sll_res[0U]
                                    : ((0x34U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp61[0U]
                                        : ((0x33U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp62[0U]
                                            : ((0x32U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp63[0U]
                                                : top__DOT__EXU__DOT__ALU__DOT___alu_res_T_174[0U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp60[1U] : ((0x37U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__sll_res[1U]
                                    : ((0x34U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp61[1U]
                                        : ((0x33U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp62[1U]
                                            : ((0x32U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp63[1U]
                                                : top__DOT__EXU__DOT__ALU__DOT___alu_res_T_174[1U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp60[2U] : ((0x37U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__sll_res[2U]
                                    : ((0x34U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp61[2U]
                                        : ((0x33U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp62[2U]
                                            : ((0x32U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp63[2U]
                                                : top__DOT__EXU__DOT__ALU__DOT___alu_res_T_174[2U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp60[3U] : ((0x37U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__sll_res[3U]
                                    : ((0x34U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp61[3U]
                                        : ((0x33U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp62[3U]
                                            : ((0x32U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp63[3U]
                                                : top__DOT__EXU__DOT__ALU__DOT___alu_res_T_174[3U])))));
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
    vlSelf->io_pc = vlSelf->top__DOT__IFU__DOT__fs_pc;
    vlSelf->top__DOT__IFU__DOT__seq_pc = (4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc);
    if (vlSelf->reset) {
        vlSelf->top__DOT__IDU__DOT__ds_valid = 0U;
    } else if (vlSelf->top__DOT__IDU__DOT__br_taken_cancel) {
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
    top__DOT__IDU__DOT___ALUop_T_144 = ((0x200703bU 
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
                                           ? 0x34U : 
                                          ((0x1033U 
                                            == (0xfe00707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst))
                                            ? 0x37U
                                            : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                                ? 0x38U
                                                : (
                                                   (0x40005033U 
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
    top__DOT__IDU__DOT___ALUop_T_159 = ((0x5063U == 
                                         (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
                                         ? 0x2bU : 
                                        ((0x4063U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__IDU__DOT__inst))
                                          ? 0x2cU : 
                                         ((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__IDU__DOT__inst))
                                           ? 0x2dU : 
                                          ((0x2023U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__IDU__DOT__inst))
                                            ? 0x27U
                                            : ((0x1003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                                ? 0x24U
                                                : (
                                                   (0x5003U 
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
                                                             : (IData)(top__DOT__IDU__DOT___ALUop_T_144))))))))))))))));
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
    top__DOT__IDU__DOT___ALUop_T_174 = ((0x6033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                         ? 0xbU : (
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 0xaU
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
                                                                 : (IData)(top__DOT__IDU__DOT___ALUop_T_159))))))))))))))));
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
    vlSelf->top__DOT__IDU__DOT___ALUop_T_189 = ((0x67U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 6U
                                                 : 
                                                ((0x3023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 7U
                                                  : 
                                                 ((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 0x20U
                                                   : 
                                                  ((0x2003U 
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
                                                               : (IData)(top__DOT__IDU__DOT___ALUop_T_174))))))))))))))));
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
    Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(
                                                              (2U 
                                                               == 
                                                               ((0x13U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                                 ? 1U
                                                                 : 
                                                                ((0x100073U 
                                                                  == vlSelf->top__DOT__IDU__DOT__inst)
                                                                  ? 2U
                                                                  : 
                                                                 ((0x17U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                                   ? 3U
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
                                                                     : (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_189))))))));
    Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit(
                                                             (0x3dU 
                                                              == 
                                                              ((0x13U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__IDU__DOT__inst))
                                                                ? 1U
                                                                : 
                                                               ((0x100073U 
                                                                 == vlSelf->top__DOT__IDU__DOT__inst)
                                                                 ? 2U
                                                                 : 
                                                                ((0x17U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                                  ? 3U
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
                                                                    : (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_189))))))));
    Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(vlSelf->top__DOT__WBU__DOT__ws_pc);
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
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
