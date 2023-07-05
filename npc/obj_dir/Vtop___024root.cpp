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
    CData/*4:0*/ __Vdlyvdim0__top__DOT__Register__DOT__Reg__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Register__DOT__Reg__v0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1;
    CData/*1:0*/ __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state;
    CData/*1:0*/ __Vdly__top__DOT__arbiter__DOT__state;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__i_cache__DOT__cacheLine__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__cacheLine__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__i_cache__DOT__cacheLine__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__cacheLine__v1;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__i_cache__DOT__validMem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__i_cache__DOT__validMem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v8;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v11;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v12;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v13;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v14;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v15;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v16;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v17;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v18;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v20;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v21;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v22;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v23;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v24;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v25;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v26;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v27;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v28;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v29;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v30;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v31;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v32;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v33;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v34;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v35;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v36;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v37;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v38;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v39;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v40;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v41;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v42;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v43;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v44;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v45;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v46;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v47;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v48;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v49;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v50;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v51;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v52;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v53;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v54;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v55;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v56;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v57;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v58;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v59;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v60;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v61;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v62;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v63;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v64;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v65;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__i_cache__DOT__tagMem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__tagMem__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__i_cache__DOT__tagMem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__tagMem__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__i_cache__DOT__quene__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__i_cache__DOT__quene__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__quene__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__i_cache__DOT__quene__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__i_cache__DOT__quene__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__quene__v1;
    CData/*2:0*/ __Vdly__top__DOT__i_cache__DOT__state;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__tagMem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__tagMem__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__tagMem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__tagMem__v1;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__validMem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__validMem__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__validMem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__validMem__v1;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__dirtyMem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__dirtyMem__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__dirtyMem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__dirtyMem__v1;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v1;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v2;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__quene__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__d_cache__DOT__quene__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__quene__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__quene__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__d_cache__DOT__quene__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__quene__v1;
    CData/*7:0*/ __Vdly__top__DOT__axi__DOT__awlen;
    CData/*2:0*/ __Vdly__top__DOT__axi__DOT__state;
    VlWide<3>/*64:0*/ __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v1;
    IData/*31:0*/ __Vdlyvval__top__DOT__i_cache__DOT__tagMem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__i_cache__DOT__tagMem__v1;
    IData/*31:0*/ __Vdly__top__DOT__i_cache__DOT__addr;
    IData/*31:0*/ __Vdlyvval__top__DOT__d_cache__DOT__tagMem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__d_cache__DOT__tagMem__v1;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2;
    VlWide<4>/*127:0*/ __Vtemp1;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp26;
    VlWide<3>/*95:0*/ __Vtemp30;
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<3>/*95:0*/ __Vtemp43;
    VlWide<3>/*95:0*/ __Vtemp44;
    VlWide<4>/*127:0*/ __Vtemp49;
    VlWide<6>/*191:0*/ __Vtemp61;
    VlWide<6>/*191:0*/ __Vtemp62;
    VlWide<4>/*127:0*/ __Vtemp63;
    VlWide<6>/*191:0*/ __Vtemp64;
    VlWide<6>/*191:0*/ __Vtemp65;
    VlWide<6>/*191:0*/ __Vtemp66;
    VlWide<4>/*127:0*/ __Vtemp71;
    VlWide<4>/*127:0*/ __Vtemp74;
    VlWide<4>/*127:0*/ __Vtemp75;
    VlWide<4>/*127:0*/ __Vtemp79;
    VlWide<4>/*127:0*/ __Vtemp80;
    VlWide<4>/*127:0*/ __Vtemp81;
    VlWide<4>/*127:0*/ __Vtemp86;
    VlWide<4>/*127:0*/ __Vtemp87;
    VlWide<4>/*127:0*/ __Vtemp88;
    VlWide<4>/*127:0*/ __Vtemp89;
    VlWide<4>/*127:0*/ __Vtemp90;
    VlWide<4>/*127:0*/ __Vtemp91;
    VlWide<4>/*127:0*/ __Vtemp92;
    VlWide<4>/*127:0*/ __Vtemp93;
    QData/*63:0*/ top__DOT__IDU__DOT___rdata1_T_1;
    QData/*63:0*/ top__DOT__IDU__DOT___br_target_T_1;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_42;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_50;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_80;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_98;
    QData/*63:0*/ __Vdlyvval__top__DOT__Register__DOT__Reg__v0;
    QData/*63:0*/ __Vdly__top__DOT__IFU__DOT__fs_pc_next;
    QData/*63:0*/ __Vdlyvval__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1;
    // Body
    __Vdlyvset__top__DOT__i_cache__DOT__quene__v0 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__quene__v1 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__tagMem__v0 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__tagMem__v1 = 0U;
    __Vdly__top__DOT__IFU__DOT__fs_pc_next = vlSelf->top__DOT__IFU__DOT__fs_pc_next;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        __Vtemp1[0U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][0U];
        __Vtemp1[1U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][1U];
        __Vtemp1[2U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][2U];
        __Vtemp1[3U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][3U];
        VL_SHIFTR_WWI(128,128,7, __Vtemp2, __Vtemp1, 
                      (0x78U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                << 3U)));
        VL_FWRITEF(0x80000002U,"fs_pc:%x fs_valid:%1# fs_allowin:%1# fs_inst:%x arvalid:%1# rvalid:%1# rdata:%x next_pc:%x br_taken:%1# fs_ds_valid:%1#\n",
                   64,vlSelf->top__DOT__IFU__DOT__fs_pc,
                   1,(IData)(vlSelf->top__DOT__IFU__DOT__fs_valid),
                   1,vlSelf->top__DOT__IFU_io_axi_out_rready,
                   32,vlSelf->top__DOT__IFU__DOT__fs_inst,
                   1,(IData)(vlSelf->top__DOT__IDU_io_ds_ready_go),
                   1,vlSelf->top__DOT__i_cache_io_to_ifu_rvalid,
                   32,((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                        ? __Vtemp2[0U] : 0U),64,((IData)(vlSelf->top__DOT__IDU_io_br_taken)
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                   ? vlSelf->top__DOT__IDU_io_br_target
                                                   : vlSelf->top__DOT__IFU__DOT__br_target)
                                                  : 
                                                 (4ULL 
                                                  + vlSelf->top__DOT__IFU__DOT__fs_pc)),
                   1,(IData)(vlSelf->top__DOT__IDU_io_br_taken),
                   1,vlSelf->top__DOT__IFU__DOT__fs_valid);
    }
    __Vdly__top__DOT__axi__DOT__awlen = vlSelf->top__DOT__axi__DOT__awlen;
    __Vdly__top__DOT__axi__DOT__state = vlSelf->top__DOT__axi__DOT__state;
    __Vdly__top__DOT__arbiter__DOT__state = vlSelf->top__DOT__arbiter__DOT__state;
    __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state;
    __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U];
    __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U];
    __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U];
    __Vdlyvset__top__DOT__d_cache__DOT__dirtyMem__v0 = 0U;
    __Vdlyvset__top__DOT__d_cache__DOT__dirtyMem__v1 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v0 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v1 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v2 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v3 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v4 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v5 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v6 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v7 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v8 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v9 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v10 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v11 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v12 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v13 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v14 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v15 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v16 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v17 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v18 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v19 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v20 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v21 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v22 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v23 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v24 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v25 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v26 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v27 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v28 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v29 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v30 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v31 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v32 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v33 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v34 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v35 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v36 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v37 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v38 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v39 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v40 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v41 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v42 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v43 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v44 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v45 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v46 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v47 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v48 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v49 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v50 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v51 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v52 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v53 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v54 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v55 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v56 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v57 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v58 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v59 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v60 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v61 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v62 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v63 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v64 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__validMem__v65 = 0U;
    __Vdlyvset__top__DOT__d_cache__DOT__validMem__v0 = 0U;
    __Vdlyvset__top__DOT__d_cache__DOT__validMem__v1 = 0U;
    __Vdlyvset__top__DOT__d_cache__DOT__quene__v0 = 0U;
    __Vdlyvset__top__DOT__d_cache__DOT__quene__v1 = 0U;
    __Vdly__top__DOT__i_cache__DOT__state = vlSelf->top__DOT__i_cache__DOT__state;
    __Vdly__top__DOT__i_cache__DOT__addr = vlSelf->top__DOT__i_cache__DOT__addr;
    __Vdlyvset__top__DOT__d_cache__DOT__tagMem__v0 = 0U;
    __Vdlyvset__top__DOT__d_cache__DOT__tagMem__v1 = 0U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"ds_pc:%x ds_valid:%1# ds_allowin:%1# ds_ready_go:%1# inst:%x br_taken:%1# src1:%x src2:%x conflict_es_rs1:%1# conflict_es_rs2:%1# conflict_ms1:%1# conflict_ms2:%1#\n",
                   64,vlSelf->top__DOT__IDU__DOT__ds_pc,
                   1,(IData)(vlSelf->top__DOT__IDU__DOT__ds_valid),
                   1,vlSelf->top__DOT__IDU__DOT__ds_allowin,
                   1,(IData)(vlSelf->top__DOT__IDU_io_ds_ready_go),
                   32,vlSelf->top__DOT__IDU__DOT__inst,
                   1,(IData)(vlSelf->top__DOT__IDU__DOT__br_taken),
                   64,((1U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                        ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                        : vlSelf->top__DOT__IDU__DOT__src1),
                   64,((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                        ? vlSelf->top__DOT__IDU__DOT__imm
                        : vlSelf->top__DOT__IDU__DOT___br_taken_T_1),
                   1,(IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1),
                   1,vlSelf->top__DOT__IDU__DOT__conflict_es_rs2,
                   1,(IData)(vlSelf->top__DOT__IDU__DOT__conflict_ms_rs1),
                   1,vlSelf->top__DOT__IDU__DOT__conflict_ms_rs2);
    }
    __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0 = 0U;
    __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1 = 0U;
    __Vdlyvset__top__DOT__Register__DOT__Reg__v0 = 0U;
    __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v0 = 0U;
    __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v1 = 0U;
    __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v2 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__cacheLine__v0 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__cacheLine__v1 = 0U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"es_pc:%x es_valid:%1# es_allowin:%1# ld_we:%1# alu_res:%x src1_value:%x  src2_value:%x\n",
                   64,vlSelf->top__DOT__EXU__DOT__es_pc,
                   1,(IData)(vlSelf->top__DOT__EXU__DOT__es_valid),
                   1,vlSelf->top__DOT__EXU_io_es_allowin,
                   1,(IData)(vlSelf->top__DOT__EXU__DOT__ld_we),
                   64,(((QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U]))),
                   64,vlSelf->top__DOT__EXU__DOT__src1_value,
                   64,vlSelf->top__DOT__EXU__DOT__src2_value);
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"ms_pc:%x ms_valid:%1# rdata:%x rvalid:%1# maddr:%x wstrb:%x wdata:%x\n\n",
                   64,vlSelf->top__DOT__LSU__DOT__ms_pc,
                   1,(IData)(vlSelf->top__DOT__LSU__DOT__ms_valid),
                   64,(((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_421[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top__DOT__d_cache__DOT___GEN_421[0U]))),
                   1,((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)
                       : ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                          & ((3U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                             & ((4U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                & ((6U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                   & (((0U == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                       & (IData)(vlSelf->top__DOT__d_cache__DOT___T_3)) 
                                      & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid))))))),
                   64,vlSelf->top__DOT__LSU__DOT__maddr,
                   8,(IData)(vlSelf->top__DOT__LSU__DOT__wstrb),
                   64,vlSelf->top__DOT__LSU__DOT__store_data);
    }
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[0U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[1U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[2U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[3U];
    vlSelf->top__DOT__d_cache__DOT__write_back_addr 
        = (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_350);
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_284))) {
        __Vdlyvval__top__DOT__i_cache__DOT__quene__v0 
            = (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT___T_11));
        __Vdlyvset__top__DOT__i_cache__DOT__quene__v0 = 1U;
        __Vdlyvdim0__top__DOT__i_cache__DOT__quene__v0 
            = (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                        >> 4U));
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_294))) {
        __Vdlyvval__top__DOT__i_cache__DOT__quene__v1 
            = (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT___T_17));
        __Vdlyvset__top__DOT__i_cache__DOT__quene__v1 = 1U;
        __Vdlyvdim0__top__DOT__i_cache__DOT__quene__v1 
            = (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                        >> 4U));
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_284))) {
        __Vdlyvval__top__DOT__i_cache__DOT__tagMem__v0 
            = (vlSelf->top__DOT__i_cache__DOT__addr 
               >> 0xaU);
        __Vdlyvset__top__DOT__i_cache__DOT__tagMem__v0 = 1U;
        __Vdlyvdim0__top__DOT__i_cache__DOT__tagMem__v0 
            = (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__unvalidIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_294))) {
        __Vdlyvval__top__DOT__i_cache__DOT__tagMem__v1 
            = (vlSelf->top__DOT__i_cache__DOT__addr 
               >> 0xaU);
        __Vdlyvset__top__DOT__i_cache__DOT__tagMem__v1 = 1U;
        __Vdlyvdim0__top__DOT__i_cache__DOT__tagMem__v1 
            = (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2));
    }
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[0U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[1U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[2U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[3U];
    if (vlSelf->reset) {
        __Vdly__top__DOT__IFU__DOT__fs_pc_next = 0ULL;
    } else if ((((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                 & ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                    & (0U == (IData)(vlSelf->top__DOT__i_cache__DOT__state)))) 
                & (IData)(vlSelf->top__DOT__IDU_io_ds_ready_go))) {
        __Vdly__top__DOT__IFU__DOT__fs_pc_next = ((IData)(vlSelf->top__DOT__IDU_io_br_taken)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                                    ? vlSelf->top__DOT__IDU_io_br_target
                                                    : vlSelf->top__DOT__IFU__DOT__br_target)
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->top__DOT__IFU__DOT__fs_pc));
    }
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
        = (((QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[0U])));
    vlSelf->top__DOT__diff_step = ((~ (IData)(vlSelf->reset)) 
                                   & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                                           ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                                               ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___step_num_T_1
                                               : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_4)
                                           : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_4));
    if (vlSelf->reset) {
        vlSelf->top__DOT__axi__DOT__axi_wready = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        vlSelf->top__DOT__axi__DOT__axi_wready = vlSelf->top__DOT__axi__DOT___GEN_7;
    } else if ((2U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        if ((0U == (IData)(vlSelf->top__DOT__axi__DOT__awlen))) {
            vlSelf->top__DOT__axi__DOT__axi_wready = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__axi__DOT__axi_bvalid = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        if ((2U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
            vlSelf->top__DOT__axi__DOT__axi_bvalid 
                = vlSelf->top__DOT__axi__DOT___GEN_18;
        } else if ((1U != (IData)(vlSelf->top__DOT__axi__DOT__state))) {
            vlSelf->top__DOT__axi__DOT__axi_bvalid 
                = vlSelf->top__DOT__axi__DOT___GEN_36;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__axi__DOT__axi_rvalid = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__arbiter_io_axi_out_awvalid) 
                      & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_wvalid))))) {
            vlSelf->top__DOT__axi__DOT__axi_rvalid 
                = vlSelf->top__DOT__axi__DOT___GEN_4;
        }
    } else if ((2U != (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        if ((1U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
            vlSelf->top__DOT__axi__DOT__axi_rvalid 
                = vlSelf->top__DOT__axi__DOT___GEN_29;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__axi__DOT__arlen = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__arbiter_io_axi_out_awvalid) 
                      & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_wvalid))))) {
            if (vlSelf->top__DOT__arbiter_io_axi_out_arvalid) {
                vlSelf->top__DOT__axi__DOT__arlen = 
                    ((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                      ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                          ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                          : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                              ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                              : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                  ? (IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                  : 0U))) : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                              : ((2U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arlen)
                                                   : 0U))));
            }
        }
    } else if ((2U != (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        if ((1U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
            vlSelf->top__DOT__axi__DOT__arlen = vlSelf->top__DOT__axi__DOT___GEN_31;
        }
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__axi__DOT__awlen = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        if (((IData)(vlSelf->top__DOT__arbiter_io_axi_out_awvalid) 
             & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_wvalid))) {
            __Vdly__top__DOT__axi__DOT__awlen = ((0U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                   ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                    ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                                    : 0U))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                     ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awlen)
                                                     : 0U))));
        }
    } else if ((2U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        if ((0U != (IData)(vlSelf->top__DOT__axi__DOT__awlen))) {
            __Vdly__top__DOT__axi__DOT__awlen = vlSelf->top__DOT__axi__DOT___GEN_15;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__axi__DOT__araddr = 0ULL;
    } else if ((0U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__arbiter_io_axi_out_awvalid) 
                      & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_wvalid))))) {
            if (vlSelf->top__DOT__arbiter_io_axi_out_arvalid) {
                vlSelf->top__DOT__axi__DOT__araddr 
                    = (QData)((IData)(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                        ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
                                            : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
                                                : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                    ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_466)
                                                    : 0U)))
                                        : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                            ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_466)
                                            : ((2U 
                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
                                                    : 0U))))));
            }
        }
    } else if ((2U != (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        if ((1U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
            vlSelf->top__DOT__axi__DOT__araddr = vlSelf->top__DOT__axi__DOT___GEN_30;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__axi__DOT__awaddr = 0ULL;
    } else if ((0U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        if (((IData)(vlSelf->top__DOT__arbiter_io_axi_out_awvalid) 
             & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_wvalid))) {
            vlSelf->top__DOT__axi__DOT__awaddr = (QData)((IData)(
                                                                 ((0U 
                                                                   == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                   ? 
                                                                  ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                                    ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                                     ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                                     : 0U))
                                                                   : 
                                                                  ((1U 
                                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                    ? 0U
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                     ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                                     : 
                                                                    ((3U 
                                                                      == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                                      ? vlSelf->top__DOT__d_cache_io_to_axi_awaddr
                                                                      : 0U))))));
        }
    } else if ((2U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        if ((0U != (IData)(vlSelf->top__DOT__axi__DOT__awlen))) {
            vlSelf->top__DOT__axi__DOT__awaddr = vlSelf->top__DOT__axi__DOT___GEN_14;
        }
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__axi__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        if (((IData)(vlSelf->top__DOT__arbiter_io_axi_out_awvalid) 
             & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_wvalid))) {
            __Vdly__top__DOT__axi__DOT__state = 2U;
        } else if (vlSelf->top__DOT__arbiter_io_axi_out_arvalid) {
            __Vdly__top__DOT__axi__DOT__state = 1U;
        }
    } else if ((2U == (IData)(vlSelf->top__DOT__axi__DOT__state))) {
        if ((0U == (IData)(vlSelf->top__DOT__axi__DOT__awlen))) {
            __Vdly__top__DOT__axi__DOT__state = 3U;
        }
    } else {
        __Vdly__top__DOT__axi__DOT__state = ((1U == (IData)(vlSelf->top__DOT__axi__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__axi__DOT___GEN_27)
                                              : (IData)(vlSelf->top__DOT__axi__DOT___GEN_35));
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__arbiter__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))) {
        __Vdly__top__DOT__arbiter__DOT__state = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                                                  ? 3U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                   ? 2U
                                                   : (IData)(vlSelf->top__DOT__arbiter__DOT___GEN_0)));
    } else if ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))) {
        if ((((IData)(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid) 
              & (IData)(vlSelf->top__DOT__i_cache_io_to_axi_rready)) 
             & (IData)(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast))) {
            __Vdly__top__DOT__arbiter__DOT__state = 0U;
        }
    } else {
        __Vdly__top__DOT__arbiter__DOT__state = ((2U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__arbiter__DOT___GEN_87)
                                                  : (IData)(vlSelf->top__DOT__arbiter__DOT___GEN_112));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res = 0ULL;
    } else if ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))) {
        if (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid) {
            vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res = 0ULL;
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))) {
        if ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                     | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                    | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))) {
            vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res 
                = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___res_T_3;
        }
    }
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
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state 
                = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_4;
        }
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] = 0U;
        __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U] = 0U;
        __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))) {
        if (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid) {
            VL_EXTEND_WQ(65,64, __Vtemp11, (((0x12U 
                                              == vlSelf->top__DOT__EXU__DOT__ALUop)
                                              ? (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__EXU__DOT__src2_value 
                                                                               >> 0x1fU)))
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value)))
                                              : vlSelf->top__DOT__EXU__DOT__src2_value) 
                                            << 1U));
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                = __Vtemp11[0U];
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U] 
                = __Vtemp11[1U];
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U] 
                = __Vtemp11[2U];
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))) {
        if ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                     | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                    | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))) {
            VL_EXTEND_WQ(65,63, __Vtemp13, (0x7fffffffffffffffULL 
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
                = __Vtemp13[0U];
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U] 
                = __Vtemp13[1U];
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U] 
                = __Vtemp13[2U];
        }
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_209))) {
        __Vdlyvset__top__DOT__d_cache__DOT__dirtyMem__v0 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__dirtyMem__v0 
            = (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_239))) {
        __Vdlyvset__top__DOT__d_cache__DOT__dirtyMem__v1 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__dirtyMem__v1 
            = (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2));
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_284))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v0 = 1U;
        __Vdlyvdim0__top__DOT__i_cache__DOT__validMem__v0 
            = (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__unvalidIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_294))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v1 = 1U;
        __Vdlyvdim0__top__DOT__i_cache__DOT__validMem__v1 
            = (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2));
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v2 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v3 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v4 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v5 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v6 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v7 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v8 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v9 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v10 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v11 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v12 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v13 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v14 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v15 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v16 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v17 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v18 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v19 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v20 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v21 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v22 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v23 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v24 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v25 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v26 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v27 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v28 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v29 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v30 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v31 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v32 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v33 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v34 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v35 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v36 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v37 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v38 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v39 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v40 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v41 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v42 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v43 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v44 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v45 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v46 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v47 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v48 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v49 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v50 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v51 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v52 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v53 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v54 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v55 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v56 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v57 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v58 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v59 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v60 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v61 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v62 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v63 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v64 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_304))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v65 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_218))) {
        __Vdlyvset__top__DOT__d_cache__DOT__validMem__v0 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__validMem__v0 
            = (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__unvalidIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_228))) {
        __Vdlyvset__top__DOT__d_cache__DOT__validMem__v1 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__validMem__v1 
            = (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2));
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_218))) {
        __Vdlyvval__top__DOT__d_cache__DOT__quene__v0 
            = (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___T_26));
        __Vdlyvset__top__DOT__d_cache__DOT__quene__v0 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__quene__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                >> 4U)));
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_228))) {
        __Vdlyvval__top__DOT__d_cache__DOT__quene__v1 
            = (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___T_32));
        __Vdlyvset__top__DOT__d_cache__DOT__quene__v1 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__quene__v1 
            = (0x3fU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                >> 4U)));
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_218))) {
        __Vdlyvval__top__DOT__d_cache__DOT__tagMem__v0 
            = (0x3fffffU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                    >> 0xaU)));
        __Vdlyvset__top__DOT__d_cache__DOT__tagMem__v0 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__tagMem__v0 
            = (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__unvalidIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_228))) {
        __Vdlyvval__top__DOT__d_cache__DOT__tagMem__v1 
            = (0x3fffffU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                    >> 0xaU)));
        __Vdlyvset__top__DOT__d_cache__DOT__tagMem__v1 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__tagMem__v1 
            = (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2));
    }
    if (((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
         & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))) {
        __Vdlyvval__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0 
            = ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                ? vlSelf->top__DOT__IDU__DOT__ds_pc
                : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                    ? ((0x1073U == (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
                        ? vlSelf->top__DOT__IDU__DOT___br_taken_T
                        : ((0x2073U == (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
                            ? (vlSelf->top__DOT__IDU__DOT___br_taken_T 
                               | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                            : ((0x3073U == (0x707fU 
                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                ? (vlSelf->top__DOT__IDU__DOT___br_taken_T 
                                   & (~ vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data))
                                : 0ULL))) : 0ULL));
        __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0 = 1U;
        __Vdlyvdim0__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0 
            = ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                ? 1U : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                         ? (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)
                         : 0U));
    }
    if ((((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
          >> 1U) & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))) {
        __Vdlyvval__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1 
            = ((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)
                ? (((QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))
                : vlSelf->top__DOT__IDU__DOT___rdata2_T_1);
        __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1 = 1U;
    }
    vlSelf->top__DOT__skip = ((~ (IData)(vlSelf->reset)) 
                              & ((IData)(vlSelf->top__DOT__WBU__DOT__device_access) 
                                 & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)));
    if ((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
          & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
         & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))) {
        __Vdlyvval__top__DOT__Register__DOT__Reg__v0 
            = vlSelf->top__DOT__WBU__DOT__ws_res;
        __Vdlyvset__top__DOT__Register__DOT__Reg__v0 = 1U;
        __Vdlyvdim0__top__DOT__Register__DOT__Reg__v0 
            = vlSelf->top__DOT__WBU__DOT__ws_rf_dst;
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_209))) {
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[1U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[1U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[2U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[2U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[3U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[3U];
        __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v0 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0 
            = (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_218))) {
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0U] 
            = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_0);
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[1U] 
            = (IData)((vlSelf->top__DOT__d_cache__DOT__receive_data_0 
                       >> 0x20U));
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[2U] 
            = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_1);
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[3U] 
            = (IData)((vlSelf->top__DOT__d_cache__DOT__receive_data_1 
                       >> 0x20U));
        __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v1 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1 
            = (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__unvalidIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_228))) {
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0U] 
            = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_0);
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[1U] 
            = (IData)((vlSelf->top__DOT__d_cache__DOT__receive_data_0 
                       >> 0x20U));
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[2U] 
            = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_1);
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[3U] 
            = (IData)((vlSelf->top__DOT__d_cache__DOT__receive_data_1 
                       >> 0x20U));
        __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v2 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2 
            = (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2));
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_284))) {
        __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v0[0U] 
            = (IData)(vlSelf->top__DOT__i_cache__DOT__receive_data_0);
        __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v0[1U] 
            = (IData)((vlSelf->top__DOT__i_cache__DOT__receive_data_0 
                       >> 0x20U));
        __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v0[2U] 
            = (IData)(vlSelf->top__DOT__i_cache__DOT__receive_data_1);
        __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v0[3U] 
            = (IData)((vlSelf->top__DOT__i_cache__DOT__receive_data_1 
                       >> 0x20U));
        __Vdlyvset__top__DOT__i_cache__DOT__cacheLine__v0 = 1U;
        __Vdlyvdim0__top__DOT__i_cache__DOT__cacheLine__v0 
            = (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT__unvalidIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_294))) {
        __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v1[0U] 
            = (IData)(vlSelf->top__DOT__i_cache__DOT__receive_data_0);
        __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v1[1U] 
            = (IData)((vlSelf->top__DOT__i_cache__DOT__receive_data_0 
                       >> 0x20U));
        __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v1[2U] 
            = (IData)(vlSelf->top__DOT__i_cache__DOT__receive_data_1);
        __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v1[3U] 
            = (IData)((vlSelf->top__DOT__i_cache__DOT__receive_data_1 
                       >> 0x20U));
        __Vdlyvset__top__DOT__i_cache__DOT__cacheLine__v1 = 1U;
        __Vdlyvdim0__top__DOT__i_cache__DOT__cacheLine__v1 
            = (0xffU & (IData)(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2));
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__quene__v0) {
        vlSelf->top__DOT__i_cache__DOT__quene[__Vdlyvdim0__top__DOT__i_cache__DOT__quene__v0] 
            = __Vdlyvval__top__DOT__i_cache__DOT__quene__v0;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__quene__v1) {
        vlSelf->top__DOT__i_cache__DOT__quene[__Vdlyvdim0__top__DOT__i_cache__DOT__quene__v1] 
            = __Vdlyvval__top__DOT__i_cache__DOT__quene__v1;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__tagMem__v0) {
        vlSelf->top__DOT__i_cache__DOT__tagMem[__Vdlyvdim0__top__DOT__i_cache__DOT__tagMem__v0] 
            = __Vdlyvval__top__DOT__i_cache__DOT__tagMem__v0;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__tagMem__v1) {
        vlSelf->top__DOT__i_cache__DOT__tagMem[__Vdlyvdim0__top__DOT__i_cache__DOT__tagMem__v1] 
            = __Vdlyvval__top__DOT__i_cache__DOT__tagMem__v1;
    }
    vlSelf->top__DOT__axi__DOT__awlen = __Vdly__top__DOT__axi__DOT__awlen;
    vlSelf->top__DOT__axi__DOT__state = __Vdly__top__DOT__axi__DOT__state;
    vlSelf->top__DOT__arbiter__DOT__state = __Vdly__top__DOT__arbiter__DOT__state;
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state 
        = __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state;
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
        = __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U] 
        = __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U] 
        = __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U];
    if (__Vdlyvset__top__DOT__d_cache__DOT__dirtyMem__v0) {
        vlSelf->top__DOT__d_cache__DOT__dirtyMem[__Vdlyvdim0__top__DOT__d_cache__DOT__dirtyMem__v0] = 1U;
    }
    if (__Vdlyvset__top__DOT__d_cache__DOT__dirtyMem__v1) {
        vlSelf->top__DOT__d_cache__DOT__dirtyMem[__Vdlyvdim0__top__DOT__d_cache__DOT__dirtyMem__v1] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v0) {
        vlSelf->top__DOT__i_cache__DOT__validMem[__Vdlyvdim0__top__DOT__i_cache__DOT__validMem__v0] = 1U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v1) {
        vlSelf->top__DOT__i_cache__DOT__validMem[__Vdlyvdim0__top__DOT__i_cache__DOT__validMem__v1] = 1U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v2) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v3) {
        vlSelf->top__DOT__i_cache__DOT__validMem[1U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v4) {
        vlSelf->top__DOT__i_cache__DOT__validMem[2U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v5) {
        vlSelf->top__DOT__i_cache__DOT__validMem[3U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v6) {
        vlSelf->top__DOT__i_cache__DOT__validMem[4U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v7) {
        vlSelf->top__DOT__i_cache__DOT__validMem[5U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v8) {
        vlSelf->top__DOT__i_cache__DOT__validMem[6U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v9) {
        vlSelf->top__DOT__i_cache__DOT__validMem[7U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v10) {
        vlSelf->top__DOT__i_cache__DOT__validMem[8U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v11) {
        vlSelf->top__DOT__i_cache__DOT__validMem[9U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v12) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0xaU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v13) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0xbU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v14) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0xcU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v15) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0xdU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v16) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0xeU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v17) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0xfU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v18) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x10U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v19) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x11U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v20) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x12U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v21) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x13U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v22) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x14U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v23) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x15U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v24) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x16U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v25) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x17U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v26) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x18U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v27) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x19U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v28) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x1aU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v29) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x1bU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v30) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x1cU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v31) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x1dU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v32) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x1eU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v33) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x1fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v34) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x20U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v35) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x21U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v36) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x22U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v37) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x23U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v38) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x24U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v39) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x25U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v40) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x26U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v41) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x27U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v42) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x28U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v43) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x29U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v44) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x2aU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v45) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x2bU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v46) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x2cU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v47) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x2dU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v48) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x2eU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v49) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x2fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v50) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x30U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v51) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x31U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v52) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x32U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v53) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x33U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v54) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x34U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v55) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x35U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v56) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x36U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v57) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x37U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v58) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x38U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v59) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x39U] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v60) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x3aU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v61) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x3bU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v62) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x3cU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v63) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x3dU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v64) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x3eU] = 0U;
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__validMem__v65) {
        vlSelf->top__DOT__i_cache__DOT__validMem[0x3fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__d_cache__DOT__validMem__v0) {
        vlSelf->top__DOT__d_cache__DOT__validMem[__Vdlyvdim0__top__DOT__d_cache__DOT__validMem__v0] = 1U;
    }
    if (__Vdlyvset__top__DOT__d_cache__DOT__validMem__v1) {
        vlSelf->top__DOT__d_cache__DOT__validMem[__Vdlyvdim0__top__DOT__d_cache__DOT__validMem__v1] = 1U;
    }
    if (__Vdlyvset__top__DOT__d_cache__DOT__quene__v0) {
        vlSelf->top__DOT__d_cache__DOT__quene[__Vdlyvdim0__top__DOT__d_cache__DOT__quene__v0] 
            = __Vdlyvval__top__DOT__d_cache__DOT__quene__v0;
    }
    if (__Vdlyvset__top__DOT__d_cache__DOT__quene__v1) {
        vlSelf->top__DOT__d_cache__DOT__quene[__Vdlyvdim0__top__DOT__d_cache__DOT__quene__v1] 
            = __Vdlyvval__top__DOT__d_cache__DOT__quene__v1;
    }
    if (__Vdlyvset__top__DOT__d_cache__DOT__tagMem__v0) {
        vlSelf->top__DOT__d_cache__DOT__tagMem[__Vdlyvdim0__top__DOT__d_cache__DOT__tagMem__v0] 
            = __Vdlyvval__top__DOT__d_cache__DOT__tagMem__v0;
    }
    if (__Vdlyvset__top__DOT__d_cache__DOT__tagMem__v1) {
        vlSelf->top__DOT__d_cache__DOT__tagMem[__Vdlyvdim0__top__DOT__d_cache__DOT__tagMem__v1] 
            = __Vdlyvval__top__DOT__d_cache__DOT__tagMem__v1;
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
    if (__Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v0) {
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][1U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[1U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][2U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[2U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][3U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[3U];
    }
    if (__Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v1) {
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][1U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[1U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][2U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[2U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][3U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[3U];
    }
    if (__Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v2) {
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][1U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[1U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][2U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[2U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][3U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[3U];
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_valid = 0U;
    } else if (vlSelf->top__DOT__EXU_io_es_allowin) {
        vlSelf->top__DOT__EXU__DOT__es_valid = vlSelf->top__DOT__IDU_io_ds_to_es_valid;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__src1_value = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU_io_es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__src1_value = ((1U 
                                                   & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                                                   ? vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data
                                                   : vlSelf->top__DOT__IDU__DOT__src1);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_pc = 0ULL;
    } else if (vlSelf->top__DOT__LSU_io_ms_fwd_ready) {
        vlSelf->top__DOT__WBU__DOT__ws_pc = vlSelf->top__DOT__LSU__DOT__ms_pc;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_valid = 0U;
    } else if (vlSelf->top__DOT__LSU_io_ms_allowin) {
        vlSelf->top__DOT__LSU__DOT__ms_valid = vlSelf->top__DOT__EXU_io_es_fwd_ready;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__wstrb = 0U;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_fwd_ready) 
                & (IData)(vlSelf->top__DOT__LSU_io_ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__wstrb = vlSelf->top__DOT__EXU__DOT__st_wstrb;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__store_data = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_fwd_ready) 
                & (IData)(vlSelf->top__DOT__LSU_io_ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__store_data = vlSelf->top__DOT__EXU__DOT__store_data;
    }
    vlSelf->io_step = vlSelf->top__DOT__diff_step;
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___step_num_T_1 
        = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num 
           - (IData)(1U));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1));
    vlSelf->top__DOT__axi_io_axi_out_rlast = ((1U == (IData)(vlSelf->top__DOT__axi__DOT__state)) 
                                              & (0U 
                                                 == (IData)(vlSelf->top__DOT__axi__DOT__arlen)));
    vlSelf->top__DOT__axi__DOT___GEN_18 = ((0U == (IData)(vlSelf->top__DOT__axi__DOT__awlen)) 
                                           | (IData)(vlSelf->top__DOT__axi__DOT__axi_bvalid));
    VL_EXTEND_WQ(65,64, __Vtemp21, (~ (((QData)((IData)(
                                                        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp22, (~ (((QData)((IData)(
                                                        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp26, ((2U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
    __Vtemp30[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
                                        << 1U)) : __Vtemp26[1U]));
    __Vtemp37[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                      ? 0U : (1U & ((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                     ? __Vtemp21[2U]
                                     : ((5U == (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                         ? __Vtemp22[2U]
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
                                                __Vtemp26[2U]))))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___res_T_3 
        = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res 
            + (((QData)((IData)(((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                  ? 0U : ((6U == (7U 
                                                  & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                           ? __Vtemp21[1U]
                                           : ((5U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                               ? __Vtemp22[1U]
                                               : __Vtemp30[1U]))))) 
                << 0x20U) | (QData)((IData)(((7U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                              ? 0U : 
                                             ((6U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                               ? __Vtemp21[0U]
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                   ? 
                                                  __Vtemp22[0U]
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
                                                    __Vtemp26[0U]))))))))) 
           + (QData)((IData)(((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                              | ((5U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])) 
                                 | (4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U])))))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_result_lo 
        = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
            ? 0U : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                         ? 0U : (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res))
                     : 0U));
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__src2_value = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU_io_es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__src2_value = ((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                                   ? vlSelf->top__DOT__IDU__DOT__imm
                                                   : vlSelf->top__DOT__IDU__DOT___br_taken_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALUop = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU_io_es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__ALUop = vlSelf->top__DOT__IDU__DOT___ALUop_T_176;
    }
    vlSelf->io_skip = vlSelf->top__DOT__skip;
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__device_access = 0U;
    } else if (vlSelf->top__DOT__LSU_io_ms_fwd_ready) {
        vlSelf->top__DOT__WBU__DOT__device_access = 
            ((0xa0000000ULL <= vlSelf->top__DOT__LSU__DOT__maddr) 
             & ((IData)(vlSelf->top__DOT__LSU__DOT__ren) 
                | (IData)(vlSelf->top__DOT__LSU__DOT__wen)));
    }
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
    vlSelf->top__DOT__WBU__DOT__ws_valid = ((~ (IData)(vlSelf->reset)) 
                                            & (IData)(vlSelf->top__DOT__LSU_io_ms_fwd_ready));
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_res = 0ULL;
    } else if (vlSelf->top__DOT__LSU_io_ms_fwd_ready) {
        vlSelf->top__DOT__WBU__DOT__ws_res = ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                               ? vlSelf->top__DOT__LSU__DOT__rdata
                                               : vlSelf->top__DOT__LSU__DOT__ms_res);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_dst = 0U;
    } else if (vlSelf->top__DOT__LSU_io_ms_fwd_ready) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_dst = vlSelf->top__DOT__LSU__DOT__ms_rf_dst;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_we = 0U;
    } else if (vlSelf->top__DOT__LSU_io_ms_fwd_ready) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_we = vlSelf->top__DOT__LSU__DOT__ms_rf_we;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[1U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[2U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[3U] = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_158[0U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[1U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_158[1U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[2U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_158[2U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[3U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_158[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_0 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_0 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_130;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_1 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_1 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_131;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_num = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)))) {
                vlSelf->top__DOT__d_cache__DOT__receive_num = 0U;
            }
        } else if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            vlSelf->top__DOT__d_cache__DOT__receive_num 
                = vlSelf->top__DOT__d_cache__DOT___GEN_132;
        }
    }
    vlSelf->top__DOT__d_cache__DOT__state = ((IData)(vlSelf->reset)
                                              ? 0U : 
                                             ((0U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                               ? ((
                                                   ((IData)(vlSelf->top__DOT__LSU_io_axi_out_arvalid) 
                                                    | (IData)(vlSelf->top__DOT__LSU_io_axi_out_awvalid)) 
                                                   & (0xa0000000U 
                                                      <= (IData)(vlSelf->top__DOT__LSU__DOT__maddr)))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__LSU_io_axi_out_arvalid)
                                                    ? 1U
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_0)))
                                               : ((1U 
                                                   == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)
                                                    ? 0U
                                                    : 3U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)
                                                     ? 0U
                                                     : 4U)
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_133)))));
    if (vlSelf->reset) {
        __Vdly__top__DOT__i_cache__DOT__addr = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U & (~ ((0x100fU == vlSelf->top__DOT__IDU__DOT__inst) 
                      & (~ (IData)(vlSelf->top__DOT__IFU__DOT__cache_init)))))) {
            if (vlSelf->top__DOT__IDU_io_ds_ready_go) {
                __Vdly__top__DOT__i_cache__DOT__addr 
                    = (IData)(((IData)(vlSelf->top__DOT__IDU_io_br_taken)
                                ? ((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)
                                    ? vlSelf->top__DOT__IDU_io_br_target
                                    : vlSelf->top__DOT__IFU__DOT__br_target)
                                : (4ULL + vlSelf->top__DOT__IFU__DOT__fs_pc)));
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__receive_data_0 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__receive_data_0 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_10;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__receive_data_1 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__receive_data_1 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_11;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__receive_num = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__i_cache__DOT__anyMatch)))) {
                vlSelf->top__DOT__i_cache__DOT__receive_num = 0U;
            }
        } else if ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            vlSelf->top__DOT__i_cache__DOT__receive_num 
                = vlSelf->top__DOT__i_cache__DOT___GEN_12;
        }
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__i_cache__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if (((0x100fU == vlSelf->top__DOT__IDU__DOT__inst) 
             & (~ (IData)(vlSelf->top__DOT__IFU__DOT__cache_init)))) {
            __Vdly__top__DOT__i_cache__DOT__state = 4U;
        } else if (vlSelf->top__DOT__IDU_io_ds_ready_go) {
            __Vdly__top__DOT__i_cache__DOT__state = 1U;
        }
    } else {
        __Vdly__top__DOT__i_cache__DOT__state = ((1U 
                                                  == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__i_cache__DOT__anyMatch)
                                                   ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_4)
                                                   : 2U)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_13)
                                                   : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_101)));
    }
    Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs);
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_pc = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_fwd_ready) 
                & (IData)(vlSelf->top__DOT__LSU_io_ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__ms_pc = vlSelf->top__DOT__EXU__DOT__es_pc;
    }
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
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__st_wstrb = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU_io_es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__st_wstrb = ((0x3023U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst))
                                                 ? 0xffU
                                                 : 
                                                ((0x1023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 3U
                                                  : 
                                                 ((0x23U 
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
                                                    : 0U))));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__store_data = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU_io_es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__store_data = ((0x3023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? vlSelf->top__DOT__IDU__DOT___br_taken_T_1
                                                   : (QData)((IData)(
                                                                     ((0x1023U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                                       ? 
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->top__DOT__IDU__DOT___br_taken_T_1))
                                                                       : 
                                                                      ((0x23U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                                        ? 
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->top__DOT__IDU__DOT___br_taken_T_1))
                                                                        : 
                                                                       ((0x2023U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                                         ? (IData)(vlSelf->top__DOT__IDU__DOT___br_taken_T_1)
                                                                         : 0U))))));
    }
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
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__wen = 0U;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_fwd_ready) 
                & (IData)(vlSelf->top__DOT__LSU_io_ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__wen = vlSelf->top__DOT__EXU__DOT__st_we;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ren = 0U;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_fwd_ready) 
                & (IData)(vlSelf->top__DOT__LSU_io_ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__ren = vlSelf->top__DOT__EXU__DOT__ld_we;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_res = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_fwd_ready) 
                & (IData)(vlSelf->top__DOT__LSU_io_ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__ms_res = (((QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__load_type = 0U;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_fwd_ready) 
                & (IData)(vlSelf->top__DOT__LSU_io_ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__load_type = vlSelf->top__DOT__EXU__DOT__load_type;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_dst = 0U;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_fwd_ready) 
                & (IData)(vlSelf->top__DOT__LSU_io_ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_dst = vlSelf->top__DOT__EXU__DOT__es_rd;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_we = 0U;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_fwd_ready) 
                & (IData)(vlSelf->top__DOT__LSU_io_ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_we = vlSelf->top__DOT__EXU__DOT__es_rf_we;
    }
    if ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache_io_to_axi_arlen = 0U;
        vlSelf->top__DOT__d_cache_io_to_axi_awlen = 0U;
    } else {
        vlSelf->top__DOT__d_cache_io_to_axi_arlen = 
            ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? 0U : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? 1U : 0U));
        vlSelf->top__DOT__d_cache_io_to_axi_awlen = 
            ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? 0U : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? 0U : ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                ? 0U : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                         ? 1U : 0U))));
    }
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
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__maddr = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_fwd_ready) 
                & (IData)(vlSelf->top__DOT__LSU_io_ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__maddr = (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
    }
    vlSelf->top__DOT__IFU__DOT__cache_init = ((~ (IData)(vlSelf->reset)) 
                                              & (IData)(vlSelf->top__DOT__IFU__DOT___GEN_2));
    if (vlSelf->reset) {
        vlSelf->top__DOT__IFU__DOT__br_target = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__IDU__DOT__ds_valid) 
                & (IData)(vlSelf->top__DOT__IDU_io_ds_ready_go))) {
        vlSelf->top__DOT__IFU__DOT__br_target = vlSelf->top__DOT__IDU_io_br_target;
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
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_pc = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU_io_es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__es_pc = vlSelf->top__DOT__IDU__DOT__ds_pc;
    }
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
    vlSelf->top__DOT__EXU_io_es_fwd_ready = ((IData)(vlSelf->top__DOT__EXU__DOT__es_valid) 
                                             & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)));
    __Vtemp42[0U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U] 
                      << 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U] 
                                >> 0x1fU));
    __Vtemp42[1U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U] 
                      << 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U] 
                                >> 0x1fU));
    __Vtemp42[2U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U] 
                     >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp43, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                     ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                         ? (1ULL + 
                                            (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                         : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                     : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                         ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                         : vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_SUB_W(3, __Vtemp44, __Vtemp42, __Vtemp43);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
        = __Vtemp44[0U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
        = __Vtemp44[1U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
        = (1U & __Vtemp44[2U]);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__st_we = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU_io_es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__st_we = (0x44U 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188));
    }
    vlSelf->top__DOT__LSU_io_axi_out_awvalid = ((IData)(vlSelf->top__DOT__LSU__DOT__wen) 
                                                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid));
    vlSelf->top__DOT__LSU_io_axi_out_arvalid = ((IData)(vlSelf->top__DOT__LSU__DOT__ren) 
                                                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid));
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ld_we = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU_io_es_allowin))) {
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
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__load_type = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU_io_es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__load_type = ((0x2003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__IDU__DOT__inst))
                                                  ? 1U
                                                  : 
                                                 ((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? 2U
                                                   : 
                                                  ((0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 3U
                                                    : 
                                                   ((0x6003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 4U
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 5U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 6U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 7U
                                                        : 0U)))))));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_rd = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU_io_es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__es_rd = (0x1fU 
                                             & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 7U));
    }
    vlSelf->top__DOT__LSU_io_ms_rf_we = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_we) 
                                         & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid));
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_rf_we = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU_io_es_allowin))) {
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
                                                                                & ((0x30200073U 
                                                                                != vlSelf->top__DOT__IDU__DOT__inst) 
                                                                                & (0x100fU 
                                                                                != vlSelf->top__DOT__IDU__DOT__inst))))))))))))));
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_403 = ((1U 
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
                                                                     ((4U 
                                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                       ? 0U
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelf->top__DOT__LSU__DOT__maddr))))))));
    vlSelf->top__DOT__d_cache__DOT__quene_replace_way_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__quene[(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 4U)))];
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0x3fU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                          >> 4U)))];
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0xffU & ((IData)(0x40U) + (0x3fU & (IData)(
                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                     >> 4U)))))];
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0xffU & ((IData)(0x80U) + (0x3fU & (IData)(
                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                     >> 4U)))))];
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0xffU & ((IData)(0xc0U) + (0x3fU & (IData)(
                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                     >> 4U)))))];
    if (vlSelf->reset) {
        vlSelf->top__DOT__IDU__DOT__ds_valid = 0U;
    } else if ((((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                 & (~ (IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel))) 
                & (IData)(vlSelf->top__DOT__IDU__DOT__ds_allowin))) {
        vlSelf->top__DOT__IDU__DOT__ds_valid = 0U;
    } else if (vlSelf->top__DOT__IDU__DOT__ds_allowin) {
        vlSelf->top__DOT__IDU__DOT__ds_valid = vlSelf->top__DOT__IFU__DOT__fs_valid;
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_0 = ((IData)(vlSelf->top__DOT__LSU_io_axi_out_awvalid)
                                               ? 2U
                                               : (IData)(vlSelf->top__DOT__d_cache__DOT__state));
    vlSelf->top__DOT__d_cache__DOT___T_3 = (((IData)(vlSelf->top__DOT__LSU_io_axi_out_arvalid) 
                                             | (IData)(vlSelf->top__DOT__LSU_io_axi_out_awvalid)) 
                                            & (0xa0000000U 
                                               <= (IData)(vlSelf->top__DOT__LSU__DOT__maddr)));
    vlSelf->top__DOT__d_cache__DOT___T_32 = ((vlSelf->top__DOT__d_cache__DOT__quene
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__LSU__DOT__maddr 
                                                           >> 4U)))] 
                                              << 2U) 
                                             | (3U 
                                                & ((IData)(vlSelf->top__DOT__d_cache__DOT__quene_replace_way_MPORT_data) 
                                                   >> 6U)));
    vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2 
        = (0x1ffU & ((0xc0U & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_replace_way_MPORT_data)) 
                     + (0x3fU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))));
    vlSelf->top__DOT__d_cache__DOT__tagMatch_0 = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data) 
                                                  & (vlSelf->top__DOT__d_cache__DOT__tagMem
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 4U)))] 
                                                     == 
                                                     (0x3fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 0xaU)))));
    vlSelf->top__DOT__d_cache__DOT__tagMatch_1 = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data) 
                                                  & (vlSelf->top__DOT__d_cache__DOT__tagMem
                                                     [
                                                     (0xffU 
                                                      & ((IData)(0x40U) 
                                                         + 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                     >> 4U)))))] 
                                                     == 
                                                     (0x3fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 0xaU)))));
    vlSelf->top__DOT__d_cache__DOT__tagMatch_2 = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data) 
                                                  & (vlSelf->top__DOT__d_cache__DOT__tagMem
                                                     [
                                                     (0xffU 
                                                      & ((IData)(0x80U) 
                                                         + 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                     >> 4U)))))] 
                                                     == 
                                                     (0x3fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 0xaU)))));
    vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex 
        = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data)
            ? ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data)
                ? ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data)
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data)
                        ? 0U : 3U) : 2U) : 1U) : 0U);
    vlSelf->top__DOT__d_cache__DOT__allvalid = ((((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data) 
                                                  & (IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data)) 
                                                 & (IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data)) 
                                                & (IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data));
    vlSelf->top__DOT__d_cache__DOT__tagMatch_3 = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data) 
                                                  & (vlSelf->top__DOT__d_cache__DOT__tagMem
                                                     [
                                                     (0xffU 
                                                      & ((IData)(0xc0U) 
                                                         + 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                     >> 4U)))))] 
                                                     == 
                                                     (0x3fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 0xaU)))));
    if (vlSelf->reset) {
        vlSelf->top__DOT__IDU__DOT__ds_pc = 0ULL;
    } else if ((((IData)(vlSelf->top__DOT__IFU__DOT__fs_valid) 
                 & (IData)(vlSelf->top__DOT__IDU__DOT__ds_allowin)) 
                & (~ (IData)(vlSelf->top__DOT__IDU__DOT___T_7)))) {
        vlSelf->top__DOT__IDU__DOT__ds_pc = vlSelf->top__DOT__IFU__DOT__fs_pc;
    }
    vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value = 
        ((6U == vlSelf->top__DOT__EXU__DOT__ALUop) ? vlSelf->top__DOT__EXU__DOT__es_pc
          : vlSelf->top__DOT__EXU__DOT__src1_value);
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
    vlSelf->top__DOT__EXU_io_es_ld = ((IData)(vlSelf->top__DOT__EXU__DOT__ld_we) 
                                      & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid));
    if (vlSelf->reset) {
        vlSelf->top__DOT__IDU__DOT__inst = 0U;
    } else if ((((IData)(vlSelf->top__DOT__IFU__DOT__fs_valid) 
                 & (IData)(vlSelf->top__DOT__IDU__DOT__ds_allowin)) 
                & (~ (IData)(vlSelf->top__DOT__IDU__DOT___T_7)))) {
        vlSelf->top__DOT__IDU__DOT__inst = vlSelf->top__DOT__IFU__DOT__fs_inst;
    }
    vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_13_data 
        = vlSelf->top__DOT__d_cache__DOT__dirtyMem[
        (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))];
    vlSelf->top__DOT__d_cache__DOT__unvalidIndex = 
        (0x1ffU & (((IData)(vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex) 
                    << 6U) + (0x3fU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                               >> 4U)))));
    vlSelf->top__DOT__d_cache__DOT___T_26 = ((vlSelf->top__DOT__d_cache__DOT__quene
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__LSU__DOT__maddr 
                                                           >> 4U)))] 
                                              << 2U) 
                                             | (IData)(vlSelf->top__DOT__d_cache__DOT__foundUnvalidIndex));
    vlSelf->top__DOT__d_cache__DOT___GEN_218 = ((1U 
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
    vlSelf->top__DOT__d_cache__DOT___GEN_228 = ((1U 
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
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__LSU__DOT__maddr 
                                                               >> 4U)))));
    vlSelf->top__DOT__d_cache__DOT__anyMatch = ((((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_0) 
                                                  | (IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_1)) 
                                                 | (IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_2)) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_3));
    vlSelf->top__DOT__IDU__DOT__br_taken_cancel = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (IData)(vlSelf->top__DOT__IDU__DOT___GEN_1));
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
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_239 = ((1U 
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
                                                               & (IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_13_data)))))));
    VL_EXTEND_WQ(128,64, __Vtemp49, (((QData)((IData)(
                                                      vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]))));
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_158[0U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_158[1U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_158[2U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_158[3U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[3U];
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_158[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_13_data)
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
                            ? __Vtemp49[0U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_158[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_13_data)
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
                            ? __Vtemp49[1U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_158[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_13_data)
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
                            ? __Vtemp49[2U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_158[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_13_data)
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
                            ? __Vtemp49[3U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])));
    }
    VL_EXTEND_WQ(191,64, __Vtemp61, (vlSelf->top__DOT__LSU__DOT__store_data 
                                     & vlSelf->top__DOT__d_cache__DOT__wmask));
    VL_SHIFTL_WWI(191,191,7, __Vtemp62, __Vtemp61, 
                  (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                            << 3U)));
    __Vtemp63[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U];
    __Vtemp63[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U];
    __Vtemp63[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U];
    __Vtemp63[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U];
    VL_EXTEND_WW(191,128, __Vtemp64, __Vtemp63);
    VL_EXTEND_WQ(191,64, __Vtemp65, vlSelf->top__DOT__d_cache__DOT__wmask);
    VL_SHIFTL_WWI(191,191,7, __Vtemp66, __Vtemp65, 
                  (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                            << 3U)));
    vlSelf->top__DOT__d_cache__DOT___T_13[0U] = (__Vtemp62[0U] 
                                                 | (__Vtemp64[0U] 
                                                    & (~ 
                                                       __Vtemp66[0U])));
    vlSelf->top__DOT__d_cache__DOT___T_13[1U] = (__Vtemp62[1U] 
                                                 | (__Vtemp64[1U] 
                                                    & (~ 
                                                       __Vtemp66[1U])));
    vlSelf->top__DOT__d_cache__DOT___T_13[2U] = (__Vtemp62[2U] 
                                                 | (__Vtemp64[2U] 
                                                    & (~ 
                                                       __Vtemp66[2U])));
    vlSelf->top__DOT__d_cache__DOT___T_13[3U] = (__Vtemp62[3U] 
                                                 | (__Vtemp64[3U] 
                                                    & (~ 
                                                       __Vtemp66[3U])));
    vlSelf->top__DOT__d_cache__DOT___T_13[4U] = (__Vtemp62[4U] 
                                                 | (__Vtemp64[4U] 
                                                    & (~ 
                                                       __Vtemp66[4U])));
    vlSelf->top__DOT__d_cache__DOT___T_13[5U] = (0x7fffffffU 
                                                 & (__Vtemp62[5U] 
                                                    | (__Vtemp64[5U] 
                                                       & (~ 
                                                          __Vtemp66[5U]))));
    vlSelf->top__DOT__d_cache__DOT___GEN_209 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                & ((2U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                   & (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)));
    if (vlSelf->reset) {
        vlSelf->top__DOT__IFU__DOT__fs_pc = 0x7ffffffcULL;
    } else if (((IData)(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid) 
                & (IData)(vlSelf->top__DOT__IFU_io_axi_out_rready))) {
        vlSelf->top__DOT__IFU__DOT__fs_pc = vlSelf->top__DOT__IFU__DOT__fs_pc_next;
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
    VL_EXTEND_WQ(128,64, __Vtemp71, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                      ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__dend_neg)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s))
                                          : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src1_32_s)
                                      : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                          ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value))
                                          : vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value)));
    if (((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_valid) 
         & (~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)))) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[0U] 
            = __Vtemp71[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[1U] 
            = __Vtemp71[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[2U] 
            = __Vtemp71[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[3U] 
            = __Vtemp71[3U];
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
    vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata 
        = ((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
            ? ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                    ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                    : 0ULL)) : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                 ? 0ULL : ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                            ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                            : ((3U 
                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                                : 0ULL))));
    vlSelf->top__DOT__arbiter__DOT___GEN_112 = ((3U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 ? 
                                                (((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid) 
                                                  & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_bready))
                                                  ? 0U
                                                  : (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 : (IData)(vlSelf->top__DOT__arbiter__DOT__state));
    vlSelf->top__DOT__d_cache__DOT___GEN_132 = (7U 
                                                & ((3U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                                                     : (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num)));
    vlSelf->top__DOT__arbiter__DOT___GEN_87 = ((((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid) 
                                                 & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_rready)) 
                                                & (IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast))
                                                ? 0U
                                                : (IData)(vlSelf->top__DOT__arbiter__DOT__state));
    vlSelf->top__DOT__d_cache__DOT___GEN_133 = ((3U 
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
                                                   ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_13_data)
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
    if (vlSelf->reset) {
        vlSelf->top__DOT__IFU__DOT__fs_valid = 0U;
    } else if (vlSelf->top__DOT__IFU_io_axi_out_rready) {
        vlSelf->top__DOT__IFU__DOT__fs_valid = vlSelf->top__DOT__i_cache_io_to_ifu_rvalid;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__IFU__DOT__fs_inst = 0U;
    } else if (((IData)(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid) 
                & (IData)(vlSelf->top__DOT__IFU_io_axi_out_rready))) {
        __Vtemp74[0U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][0U];
        __Vtemp74[1U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][1U];
        __Vtemp74[2U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][2U];
        __Vtemp74[3U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0xffU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                           >> 4U))))][3U];
        VL_SHIFTR_WWI(128,128,7, __Vtemp75, __Vtemp74, 
                      (0x78U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                << 3U)));
        vlSelf->top__DOT__IFU__DOT__fs_inst = ((1U 
                                                == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                ? __Vtemp75[0U]
                                                : 0U);
    }
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
    vlSelf->top__DOT__IFU__DOT__fs_pc_next = __Vdly__top__DOT__IFU__DOT__fs_pc_next;
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
        vlSelf->top__DOT__d_cache__DOT___GEN_130 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((1U & (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__d_cache__DOT__receive_data_0
                  : vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_0);
        vlSelf->top__DOT__d_cache__DOT___GEN_131 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((1U & (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_1)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_1);
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_130 = vlSelf->top__DOT__d_cache__DOT__receive_data_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_131 = vlSelf->top__DOT__d_cache__DOT__receive_data_1;
    }
    __Vtemp79[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U];
    __Vtemp79[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U];
    __Vtemp79[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U];
    __Vtemp79[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U];
    VL_SHIFTR_WWI(128,128,7, __Vtemp80, __Vtemp79, 
                  (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                            << 3U)));
    VL_EXTEND_WQ(128,64, __Vtemp81, ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
        vlSelf->top__DOT__d_cache__DOT___GEN_421[0U] 
            = __Vtemp80[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_421[1U] 
            = __Vtemp80[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_421[2U] 
            = __Vtemp80[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_421[3U] 
            = __Vtemp80[3U];
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_421[0U] 
            = __Vtemp81[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_421[1U] 
            = __Vtemp81[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_421[2U] 
            = __Vtemp81[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_421[3U] 
            = __Vtemp81[3U];
    }
    vlSelf->top__DOT__LSU_io_ms_allowin = (1U & ((~ (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)) 
                                                 | (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go)));
    vlSelf->top__DOT__LSU_io_ms_fwd_ready = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid) 
                                             & (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
    if (__Vdlyvset__top__DOT__i_cache__DOT__cacheLine__v0) {
        vlSelf->top__DOT__i_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__i_cache__DOT__cacheLine__v0][0U] 
            = __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v0[0U];
        vlSelf->top__DOT__i_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__i_cache__DOT__cacheLine__v0][1U] 
            = __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v0[1U];
        vlSelf->top__DOT__i_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__i_cache__DOT__cacheLine__v0][2U] 
            = __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v0[2U];
        vlSelf->top__DOT__i_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__i_cache__DOT__cacheLine__v0][3U] 
            = __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v0[3U];
    }
    if (__Vdlyvset__top__DOT__i_cache__DOT__cacheLine__v1) {
        vlSelf->top__DOT__i_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__i_cache__DOT__cacheLine__v1][0U] 
            = __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v1[0U];
        vlSelf->top__DOT__i_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__i_cache__DOT__cacheLine__v1][1U] 
            = __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v1[1U];
        vlSelf->top__DOT__i_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__i_cache__DOT__cacheLine__v1][2U] 
            = __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v1[2U];
        vlSelf->top__DOT__i_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__i_cache__DOT__cacheLine__v1][3U] 
            = __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v1[3U];
    }
    vlSelf->top__DOT__i_cache__DOT__state = __Vdly__top__DOT__i_cache__DOT__state;
    vlSelf->top__DOT__i_cache__DOT__addr = __Vdly__top__DOT__i_cache__DOT__addr;
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
    vlSelf->io_pc = vlSelf->top__DOT__IFU__DOT__fs_pc;
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
    vlSelf->top__DOT__LSU__DOT__rdata = ((7U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                          ? (QData)((IData)(
                                                            (0xffffU 
                                                             & vlSelf->top__DOT__d_cache__DOT___GEN_421[0U])))
                                          : ((6U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                              ? (((
                                                   (0x80U 
                                                    & vlSelf->top__DOT__d_cache__DOT___GEN_421[0U])
                                                    ? 0xffffffffffffffULL
                                                    : 0ULL) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelf->top__DOT__d_cache__DOT___GEN_421[0U]))))
                                              : ((5U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                  ? 
                                                 ((((0x8000U 
                                                     & vlSelf->top__DOT__d_cache__DOT___GEN_421[0U])
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSelf->top__DOT__d_cache__DOT___GEN_421[0U]))))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                   ? (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___GEN_421[0U]))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & vlSelf->top__DOT__d_cache__DOT___GEN_421[0U])))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__d_cache__DOT___GEN_421[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__d_cache__DOT___GEN_421[0U])))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((vlSelf->top__DOT__d_cache__DOT___GEN_421[0U] 
                                                                         >> 0x1fU)
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__d_cache__DOT___GEN_421[0U])))
                                                      : 
                                                     (((QData)((IData)(
                                                                       vlSelf->top__DOT__d_cache__DOT___GEN_421[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__d_cache__DOT___GEN_421[0U]))))))))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_4 
        = ((IData)(vlSelf->top__DOT__LSU_io_ms_allowin)
            ? 0U : (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state));
    vlSelf->top__DOT__EXU_io_es_allowin = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__es_valid)) 
                                                 | ((~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)) 
                                                    & (IData)(vlSelf->top__DOT__LSU_io_ms_allowin))));
    vlSelf->io_inst = vlSelf->top__DOT__IFU__DOT__fs_inst;
    vlSelf->top__DOT__i_cache__DOT___GEN_101 = ((3U 
                                                 == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                 ? 1U
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                  ? 0U
                                                  : (IData)(vlSelf->top__DOT__i_cache__DOT__state)));
    vlSelf->top__DOT__i_cache__DOT___GEN_304 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                & ((2U 
                                                    != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                   & ((3U 
                                                       != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                      & (4U 
                                                         == (IData)(vlSelf->top__DOT__i_cache__DOT__state)))));
    vlSelf->top__DOT__i_cache_io_to_axi_arvalid = (
                                                   (1U 
                                                    != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                   & (2U 
                                                      == (IData)(vlSelf->top__DOT__i_cache__DOT__state)));
    vlSelf->top__DOT__i_cache__DOT___GEN_466 = ((1U 
                                                 == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                 ? (QData)((IData)(vlSelf->top__DOT__i_cache__DOT__addr))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                  ? 
                                                 (0xfffffffffffffff0ULL 
                                                  & (QData)((IData)(vlSelf->top__DOT__i_cache__DOT__addr)))
                                                  : (QData)((IData)(vlSelf->top__DOT__i_cache__DOT__addr))));
    vlSelf->top__DOT__i_cache__DOT__quene_replace_way_MPORT_data 
        = vlSelf->top__DOT__i_cache__DOT__quene[(0x3fU 
                                                 & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                    >> 4U))];
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_0_MPORT_data 
        = vlSelf->top__DOT__i_cache__DOT__validMem[
        (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                  >> 4U))];
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data 
        = vlSelf->top__DOT__i_cache__DOT__validMem[
        (0xffU & ((IData)(0x40U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                             >> 4U))))];
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data 
        = vlSelf->top__DOT__i_cache__DOT__validMem[
        (0xffU & ((IData)(0x80U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                             >> 4U))))];
    vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data 
        = vlSelf->top__DOT__i_cache__DOT__validMem[
        (0xffU & ((IData)(0xc0U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                             >> 4U))))];
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
    VL_EXTEND_WQ(127,64, __Vtemp86, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp87, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp88, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp89, (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))));
    VL_EXTEND_WQ(127,64, __Vtemp90, vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp91, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp92, __Vtemp91, 
                  (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp93, ((0x34U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
            = __Vtemp86[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = __Vtemp86[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = __Vtemp86[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = (0x7fffffffU & __Vtemp86[3U]);
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp87[0U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? __Vtemp88[0U]
                                    : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp89[0U]
                                        : ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp90[0U]
                                            : ((0x37U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp92[0U]
                                                : __Vtemp93[0U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp87[1U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? __Vtemp88[1U]
                                    : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp89[1U]
                                        : ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp90[1U]
                                            : ((0x37U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp92[1U]
                                                : __Vtemp93[1U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp87[2U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? __Vtemp88[2U]
                                    : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp89[2U]
                                        : ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp90[2U]
                                            : ((0x37U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp92[2U]
                                                : __Vtemp93[2U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = (0x7fffffffU & ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                               ? __Vtemp87[3U] : ((0x3fU 
                                                   == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                   ? 
                                                  __Vtemp88[3U]
                                                   : 
                                                  ((0x38U 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? 
                                                   __Vtemp89[3U]
                                                    : 
                                                   ((0x39U 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? 
                                                    __Vtemp90[3U]
                                                     : 
                                                    ((0x37U 
                                                      == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                      ? 
                                                     __Vtemp92[3U]
                                                      : 
                                                     __Vtemp93[3U]))))));
    }
    vlSelf->top__DOT__LSU_io_ms_fwd_res = ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                            ? vlSelf->top__DOT__LSU__DOT__rdata
                                            : vlSelf->top__DOT__LSU__DOT__ms_res);
    vlSelf->top__DOT__arbiter__DOT___GEN_0 = ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                               ? 1U
                                               : (IData)(vlSelf->top__DOT__arbiter__DOT__state));
    if ((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))) {
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
        vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? 0ULL : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                           ? 0ULL : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                      ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                                      : 0ULL)));
        vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid 
            = ((~ (IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)) 
               & ((~ (IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)) 
                  & ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid) 
                     & (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid))));
    } else {
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
        vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata 
            = ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                ? vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata
                : 0ULL);
        vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid 
            = ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
               & (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid));
    }
    vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2 
        = (0x1ffU & ((0xc0U & (IData)(vlSelf->top__DOT__i_cache__DOT__quene_replace_way_MPORT_data)) 
                     + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                 >> 4U))));
    vlSelf->top__DOT__i_cache__DOT___T_17 = ((vlSelf->top__DOT__i_cache__DOT__quene
                                              [(0x3fU 
                                                & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                   >> 4U))] 
                                              << 2U) 
                                             | (3U 
                                                & ((IData)(vlSelf->top__DOT__i_cache__DOT__quene_replace_way_MPORT_data) 
                                                   >> 6U)));
    vlSelf->top__DOT__i_cache__DOT__tagMatch_0 = ((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_0_MPORT_data) 
                                                  & (vlSelf->top__DOT__i_cache__DOT__tagMem
                                                     [
                                                     (0x3fU 
                                                      & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                         >> 4U))] 
                                                     == 
                                                     (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 0xaU)));
    vlSelf->top__DOT__i_cache__DOT__tagMatch_1 = ((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_1_MPORT_data) 
                                                  & (vlSelf->top__DOT__i_cache__DOT__tagMem
                                                     [
                                                     (0xffU 
                                                      & ((IData)(0x40U) 
                                                         + 
                                                         (0x3fU 
                                                          & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                             >> 4U))))] 
                                                     == 
                                                     (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 0xaU)));
    vlSelf->top__DOT__i_cache__DOT__tagMatch_2 = ((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_2_MPORT_data) 
                                                  & (vlSelf->top__DOT__i_cache__DOT__tagMem
                                                     [
                                                     (0xffU 
                                                      & ((IData)(0x80U) 
                                                         + 
                                                         (0x3fU 
                                                          & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                             >> 4U))))] 
                                                     == 
                                                     (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 0xaU)));
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
    vlSelf->top__DOT__i_cache__DOT__tagMatch_3 = ((IData)(vlSelf->top__DOT__i_cache__DOT__validMem_valid_3_MPORT_data) 
                                                  & (vlSelf->top__DOT__i_cache__DOT__tagMem
                                                     [
                                                     (0xffU 
                                                      & ((IData)(0xc0U) 
                                                         + 
                                                         (0x3fU 
                                                          & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                             >> 4U))))] 
                                                     == 
                                                     (vlSelf->top__DOT__i_cache__DOT__addr 
                                                      >> 0xaU)));
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
    vlSelf->top__DOT__axi__DOT___GEN_4 = ((IData)(vlSelf->top__DOT__arbiter_io_axi_out_arvalid) 
                                          | (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid));
    if (vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid) {
        vlSelf->top__DOT__i_cache__DOT___GEN_12 = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num)));
        vlSelf->top__DOT__i_cache__DOT___GEN_13 = ((IData)(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast)
                                                    ? 3U
                                                    : (IData)(vlSelf->top__DOT__i_cache__DOT__state));
        vlSelf->top__DOT__i_cache__DOT___GEN_10 = (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num))
                                                    ? vlSelf->top__DOT__i_cache__DOT__receive_data_0
                                                    : vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata);
        vlSelf->top__DOT__i_cache__DOT___GEN_11 = (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num))
                                                    ? vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata
                                                    : vlSelf->top__DOT__i_cache__DOT__receive_data_1);
    } else {
        vlSelf->top__DOT__i_cache__DOT___GEN_12 = (7U 
                                                   & (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num));
        vlSelf->top__DOT__i_cache__DOT___GEN_13 = vlSelf->top__DOT__i_cache__DOT__state;
        vlSelf->top__DOT__i_cache__DOT___GEN_10 = vlSelf->top__DOT__i_cache__DOT__receive_data_0;
        vlSelf->top__DOT__i_cache__DOT___GEN_11 = vlSelf->top__DOT__i_cache__DOT__receive_data_1;
    }
    vlSelf->top__DOT__i_cache__DOT___GEN_284 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                & ((2U 
                                                    != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                   & ((3U 
                                                       == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                      & (~ (IData)(vlSelf->top__DOT__i_cache__DOT__allvalid)))));
    vlSelf->top__DOT__i_cache__DOT___GEN_294 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                & ((2U 
                                                    != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                   & ((3U 
                                                       == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                      & (IData)(vlSelf->top__DOT__i_cache__DOT__allvalid))));
    vlSelf->top__DOT__i_cache__DOT__unvalidIndex = 
        (0x1ffU & (((IData)(vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex) 
                    << 6U) + (0x3fU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                       >> 4U))));
    vlSelf->top__DOT__i_cache__DOT___T_11 = ((vlSelf->top__DOT__i_cache__DOT__quene
                                              [(0x3fU 
                                                & (vlSelf->top__DOT__i_cache__DOT__addr 
                                                   >> 4U))] 
                                              << 2U) 
                                             | (IData)(vlSelf->top__DOT__i_cache__DOT__foundUnvalidIndex));
    vlSelf->top__DOT__i_cache__DOT__anyMatch = ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0) 
                                                  | (IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)) 
                                                 | (IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)) 
                                                | (IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3));
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
    vlSelf->top__DOT__i_cache_io_to_ifu_rvalid = ((1U 
                                                   == (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                  & (IData)(vlSelf->top__DOT__i_cache__DOT__anyMatch));
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
    vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data 
        = vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg
        [((2U & (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
           ? 0U : ((0x3eU == (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_176))
                    ? 1U : (IData)(vlSelf->top__DOT__IDU__DOT__csr_index)))];
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
    vlSelf->top__DOT__IDU__DOT___br_taken_T = ((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs1)
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))
                                                : top__DOT__IDU__DOT___rdata1_T_1);
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
    vlSelf->top__DOT__IDU__DOT__src1 = ((IData)(vlSelf->top__DOT__IDU__DOT__src1_is_pc)
                                         ? vlSelf->top__DOT__IDU__DOT__ds_pc
                                         : vlSelf->top__DOT__IDU__DOT___br_taken_T);
    vlSelf->top__DOT__IDU__DOT___br_taken_T_1 = ((IData)(vlSelf->top__DOT__IDU__DOT__conflict_es_rs2)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])))
                                                  : vlSelf->top__DOT__IDU__DOT___rdata2_T_1);
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
    top__DOT__IDU__DOT___br_target_T_1 = (vlSelf->top__DOT__IDU__DOT__src1 
                                          + ((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                              ? vlSelf->top__DOT__IDU__DOT__imm
                                              : vlSelf->top__DOT__IDU__DOT___br_taken_T_1));
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
                                                  (vlSelf->top__DOT__IDU__DOT___br_taken_T 
                                                   != vlSelf->top__DOT__IDU__DOT___br_taken_T_1)
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IDU__DOT__inst))
                                                    ? 
                                                   (vlSelf->top__DOT__IDU__DOT___br_taken_T 
                                                    == vlSelf->top__DOT__IDU__DOT___br_taken_T_1)
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__IDU__DOT__inst))
                                                     ? 
                                                    VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__IDU__DOT___br_taken_T, vlSelf->top__DOT__IDU__DOT___br_taken_T_1)
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__IDU__DOT__inst))
                                                      ? 
                                                     VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__IDU__DOT___br_taken_T, vlSelf->top__DOT__IDU__DOT___br_taken_T_1)
                                                      : 
                                                     ((0x6063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                       ? 
                                                      (vlSelf->top__DOT__IDU__DOT___br_taken_T 
                                                       < vlSelf->top__DOT__IDU__DOT___br_taken_T_1)
                                                       : 
                                                      ((0x7063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                        ? 
                                                       (vlSelf->top__DOT__IDU__DOT___br_taken_T 
                                                        >= vlSelf->top__DOT__IDU__DOT___br_taken_T_1)
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
                                                  & (IData)(vlSelf->top__DOT__EXU_io_es_allowin))));
    vlSelf->top__DOT__IDU_io_ds_allowin = (1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid)) 
                                                 | ((IData)(vlSelf->top__DOT__IDU_io_ds_ready_go) 
                                                    & (IData)(vlSelf->top__DOT__EXU_io_es_allowin))));
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
    vlSelf->top__DOT__IFU_io_axi_out_rready = (1U & 
                                               ((~ (IData)(vlSelf->top__DOT__IFU__DOT__fs_valid)) 
                                                | (IData)(top__DOT__IFU__DOT___T_1)));
    vlSelf->top__DOT__i_cache__DOT___GEN_4 = ((IData)(vlSelf->top__DOT__IFU_io_axi_out_rready)
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

VL_INLINE_OPT void Vtop___024root___combo__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp238;
    VlWide<3>/*95:0*/ __Vtemp241;
    VlWide<4>/*127:0*/ __Vtemp246;
    VlWide<5>/*159:0*/ __Vtemp247;
    VlWide<5>/*159:0*/ __Vtemp250;
    VlWide<5>/*159:0*/ __Vtemp253;
    VlWide<5>/*159:0*/ __Vtemp267;
    VlWide<5>/*159:0*/ __Vtemp270;
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp238, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3);
    VL_EXTEND_WQ(65,64, __Vtemp241, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[0U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[1U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[2U] = 0U;
        vlSelf->top__DOT__d_cache__DOT___GEN_350 = 0ULL;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[0U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient) 
                           << 1U) : (1U | ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient) 
                                           << 1U)))
                    : __Vtemp238[0U]) : __Vtemp241[0U]);
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
                                      << 1U))) : __Vtemp238[1U])
                : __Vtemp241[1U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[2U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU)
                        : ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU))
                    : __Vtemp238[2U]) : __Vtemp241[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_350 = 
            ((0U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
              : ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                  : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                      ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                      : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                          ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                          : ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                              ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                  ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                                      ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_13_data)
                                          ? (((QData)((IData)(
                                                              vlSelf->top__DOT__d_cache__DOT__tagMem
                                                              [
                                                              (0xffU 
                                                               & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))])) 
                                              << 0xaU) 
                                             | (QData)((IData)(
                                                               (0x3f0U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                            >> 4U)) 
                                                                   << 4U)))))
                                          : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                      : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                  : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))))))));
    }
    if (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul_io_mul_valid) {
        __Vtemp246[0U] = (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32);
        __Vtemp246[1U] = (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                  >> 0x20U));
        __Vtemp246[2U] = (IData)(((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                 >> 0x3fU)))
                                   ? 0xffffffffffffffffULL
                                   : 0ULL));
        __Vtemp246[3U] = (IData)((((1U & (IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1_32 
                                                  >> 0x3fU)))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL) >> 0x20U));
    } else {
        __Vtemp246[0U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U];
        __Vtemp246[1U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U];
        __Vtemp246[2U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U];
        __Vtemp246[3U] = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U];
    }
    VL_EXTEND_WW(130,128, __Vtemp247, __Vtemp246);
    VL_EXTEND_WW(130,128, __Vtemp250, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1);
    VL_EXTEND_WW(130,128, __Vtemp253, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[0U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[1U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[2U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[3U] = 0U;
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[4U] = 0U;
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[0U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp247[0U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
                                            << 2U) : 
                                        __Vtemp250[0U])
                                     : __Vtemp253[0U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[1U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp247[1U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
                                             >> 0x1eU) 
                                            | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
                                               << 2U))
                                         : __Vtemp250[1U])
                                     : __Vtemp253[1U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[2U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp247[2U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
                                             >> 0x1eU) 
                                            | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
                                               << 2U))
                                         : __Vtemp250[2U])
                                     : __Vtemp253[2U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[3U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp247[3U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
                                             >> 0x1eU) 
                                            | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
                                               << 2U))
                                         : __Vtemp250[3U])
                                     : __Vtemp253[3U]));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[4U] 
            = ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                ? __Vtemp247[4U] : ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))
                                     ? ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                                                 | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                                                | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))
                                         ? (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
                                            >> 0x1eU)
                                         : __Vtemp250[4U])
                                     : __Vtemp253[4U]));
    }
    VL_EXTEND_WW(129,128, __Vtemp267, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
    VL_EXTEND_WW(129,128, __Vtemp270, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
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
                       << 1U) : __Vtemp267[0U]) : __Vtemp270[0U]);
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
                                     << 1U)) : __Vtemp267[1U])
                : __Vtemp270[1U]);
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
                          << 1U)) : __Vtemp267[2U])
                : __Vtemp270[2U]);
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
                                     << 1U)) : __Vtemp267[3U])
                : __Vtemp270[3U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[4U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                         ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U]
                         : ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                             >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                       << 0x1fU))) 
                       >> 0x1fU) : __Vtemp267[4U]) : 
               __Vtemp270[4U]);
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
