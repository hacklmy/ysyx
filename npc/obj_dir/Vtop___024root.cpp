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
extern const VlWide<34>/*1087:0*/ Vtop__ConstPool__CONST_34626a84_0;
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
    CData/*7:0*/ top__DOT__i_cache__DOT___GEN_13;
    CData/*7:0*/ top__DOT__d_cache__DOT___GEN_13;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__Register__DOT__Reg__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Register__DOT__Reg__v0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1;
    CData/*1:0*/ __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state;
    CData/*1:0*/ __Vdly__top__DOT__arbiter__DOT__state;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__i_cache__DOT__cacheLine__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__cacheLine__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__i_cache__DOT__cacheLine__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__cacheLine__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__i_cache__DOT__validMem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__validMem__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__i_cache__DOT__validMem__v1;
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
    CData/*5:0*/ __Vdlyvdim0__top__DOT__i_cache__DOT__tagMem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__tagMem__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__i_cache__DOT__tagMem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__i_cache__DOT__tagMem__v1;
    CData/*2:0*/ __Vdly__top__DOT__i_cache__DOT__state;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__dirtyMem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__dirtyMem__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__dirtyMem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__dirtyMem__v1;
    CData/*2:0*/ __Vdly__top__DOT__d_cache__DOT__state;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v2;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__validMem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__validMem__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__validMem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__validMem__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__tagMem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__tagMem__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__d_cache__DOT__tagMem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__d_cache__DOT__tagMem__v1;
    CData/*7:0*/ __Vdly__top__DOT__axi__DOT__awlen;
    CData/*2:0*/ __Vdly__top__DOT__axi__DOT__state;
    SData/*10:0*/ top__DOT__i_cache__DOT___quene_T_1;
    SData/*10:0*/ top__DOT__i_cache__DOT___quene_T_3;
    SData/*10:0*/ top__DOT__d_cache__DOT___quene_T_1;
    SData/*10:0*/ top__DOT__d_cache__DOT___quene_T_3;
    VlWide<3>/*64:0*/ __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__i_cache__DOT__cacheLine__v1;
    IData/*31:0*/ __Vdlyvval__top__DOT__i_cache__DOT__tagMem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__i_cache__DOT__tagMem__v1;
    IData/*31:0*/ __Vdly__top__DOT__i_cache__DOT__addr;
    VlWide<32>/*1023:0*/ __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0;
    VlWide<32>/*1023:0*/ __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1;
    VlWide<32>/*1023:0*/ __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2;
    IData/*31:0*/ __Vdlyvval__top__DOT__d_cache__DOT__tagMem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__d_cache__DOT__tagMem__v1;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp16;
    VlWide<3>/*95:0*/ __Vtemp17;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp25;
    VlWide<3>/*95:0*/ __Vtemp32;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<3>/*95:0*/ __Vtemp52;
    VlWide<34>/*1087:0*/ __Vtemp54;
    VlWide<34>/*1087:0*/ __Vtemp55;
    VlWide<32>/*1023:0*/ __Vtemp56;
    VlWide<34>/*1087:0*/ __Vtemp57;
    VlWide<34>/*1087:0*/ __Vtemp58;
    VlWide<34>/*1087:0*/ __Vtemp59;
    VlWide<4>/*127:0*/ __Vtemp64;
    VlWide<30>/*959:0*/ __Vtemp70;
    VlWide<32>/*1023:0*/ __Vtemp71;
    VlWide<32>/*1023:0*/ __Vtemp82;
    VlWide<32>/*1023:0*/ __Vtemp83;
    VlWide<32>/*1023:0*/ __Vtemp84;
    VlWide<4>/*127:0*/ __Vtemp88;
    VlWide<4>/*127:0*/ __Vtemp89;
    VlWide<4>/*127:0*/ __Vtemp94;
    VlWide<4>/*127:0*/ __Vtemp95;
    VlWide<4>/*127:0*/ __Vtemp96;
    VlWide<4>/*127:0*/ __Vtemp97;
    VlWide<4>/*127:0*/ __Vtemp98;
    VlWide<4>/*127:0*/ __Vtemp99;
    VlWide<4>/*127:0*/ __Vtemp100;
    VlWide<4>/*127:0*/ __Vtemp101;
    QData/*63:0*/ top__DOT__IDU__DOT___rdata1_T_1;
    QData/*63:0*/ top__DOT__IDU__DOT___br_taken_T;
    QData/*63:0*/ top__DOT__IDU__DOT___br_taken_T_1;
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
    __Vdly__top__DOT__IFU__DOT__fs_pc_next = vlSelf->top__DOT__IFU__DOT__fs_pc_next;
    __Vdlyvset__top__DOT__i_cache__DOT__tagMem__v0 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__tagMem__v1 = 0U;
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
    __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v0 = 0U;
    __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v1 = 0U;
    __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v2 = 0U;
    __Vdlyvset__top__DOT__d_cache__DOT__validMem__v0 = 0U;
    __Vdlyvset__top__DOT__d_cache__DOT__validMem__v1 = 0U;
    __Vdly__top__DOT__d_cache__DOT__state = vlSelf->top__DOT__d_cache__DOT__state;
    __Vdly__top__DOT__i_cache__DOT__state = vlSelf->top__DOT__i_cache__DOT__state;
    __Vdly__top__DOT__i_cache__DOT__addr = vlSelf->top__DOT__i_cache__DOT__addr;
    __Vdlyvset__top__DOT__d_cache__DOT__tagMem__v0 = 0U;
    __Vdlyvset__top__DOT__d_cache__DOT__tagMem__v1 = 0U;
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
    __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0 = 0U;
    __Vdlyvset__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v1 = 0U;
    __Vdlyvset__top__DOT__Register__DOT__Reg__v0 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__cacheLine__v0 = 0U;
    __Vdlyvset__top__DOT__i_cache__DOT__cacheLine__v1 = 0U;
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[0U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[1U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[2U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[2U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[3U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_25[3U];
    vlSelf->top__DOT__d_cache__DOT__write_back_addr 
        = (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_588);
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
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[0U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[0U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[1U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[2U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U] 
        = vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[3U];
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_368))) {
        __Vdlyvval__top__DOT__i_cache__DOT__tagMem__v0 
            = (vlSelf->top__DOT__i_cache__DOT__addr 
               >> 8U);
        __Vdlyvset__top__DOT__i_cache__DOT__tagMem__v0 = 1U;
        __Vdlyvdim0__top__DOT__i_cache__DOT__tagMem__v0 
            = (0x3fU & (IData)(vlSelf->top__DOT__i_cache__DOT__unvalidIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_392))) {
        __Vdlyvval__top__DOT__i_cache__DOT__tagMem__v1 
            = (vlSelf->top__DOT__i_cache__DOT__addr 
               >> 8U);
        __Vdlyvset__top__DOT__i_cache__DOT__tagMem__v1 = 1U;
        __Vdlyvdim0__top__DOT__i_cache__DOT__tagMem__v1 
            = (0x3fU & (IData)(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2));
    }
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
        = (((QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[0U])));
    vlSelf->top__DOT__diff_step = ((~ (IData)(vlSelf->reset)) 
                                   & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid));
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_valid = 0U;
    } else if (vlSelf->top__DOT__EXU__DOT__es_allowin) {
        vlSelf->top__DOT__EXU__DOT__es_valid = vlSelf->top__DOT__IDU_io_ds_to_es_valid;
    }
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                                           ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                                               ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___step_num_T_1
                                               : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_4)
                                           : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_4));
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_pc = 0ULL;
    } else if (vlSelf->top__DOT__LSU_io_ms_to_ws_valid) {
        vlSelf->top__DOT__WBU__DOT__ws_pc = vlSelf->top__DOT__LSU__DOT__ms_pc;
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
                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_619)
                                            : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid)
                                                ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_619)
                                                : ((IData)(vlSelf->top__DOT__i_cache_io_to_axi_arvalid)
                                                    ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_574)
                                                    : 0U)))
                                        : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                            ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_574)
                                            : ((2U 
                                                == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_619)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_619)
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
                                                  ? (IData)(vlSelf->top__DOT__arbiter__DOT___GEN_94)
                                                  : (IData)(vlSelf->top__DOT__arbiter__DOT___GEN_126));
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
            VL_EXTEND_WQ(65,64, __Vtemp6, (((0x12U 
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
                = __Vtemp6[0U];
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U] 
                = __Vtemp6[1U];
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U] 
                = __Vtemp6[2U];
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state))) {
        if ((0U != ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U] 
                     | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U]) 
                    | vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U]))) {
            VL_EXTEND_WQ(65,63, __Vtemp8, (0x7fffffffffffffffULL 
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
                = __Vtemp8[0U];
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[1U] 
                = __Vtemp8[1U];
            __Vdly__top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[2U] 
                = __Vtemp8[2U];
        }
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_373))) {
        __Vdlyvset__top__DOT__d_cache__DOT__dirtyMem__v0 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__dirtyMem__v0 
            = (0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_429))) {
        __Vdlyvset__top__DOT__d_cache__DOT__dirtyMem__v1 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__dirtyMem__v1 
            = (0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2));
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_373))) {
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[1U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[1U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[2U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[2U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[3U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[3U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[4U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[4U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[5U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[5U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[6U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[6U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[7U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[7U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[8U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[8U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[9U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[9U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0xaU] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0xaU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0xbU] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0xbU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0xcU] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0xcU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0xdU] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0xdU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0xeU] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0xeU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0xfU] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0xfU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x10U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x10U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x11U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x11U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x12U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x12U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x13U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x13U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x14U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x14U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x15U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x15U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x16U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x16U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x17U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x17U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x18U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x18U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x19U] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x19U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x1aU] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x1aU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x1bU] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x1bU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x1cU] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x1cU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x1dU] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x1dU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x1eU] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x1eU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x1fU] 
            = vlSelf->top__DOT__d_cache__DOT___T_13[0x1fU];
        __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v0 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0 
            = (0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_396))) {
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[0U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[1U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[1U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[2U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[2U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[3U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[3U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[4U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[4U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[5U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[5U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[6U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[6U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[7U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[7U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[8U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[8U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[9U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[9U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0xaU] 
            = vlSelf->top__DOT__d_cache__DOT__lo[0xaU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0xbU] 
            = vlSelf->top__DOT__d_cache__DOT__lo[0xbU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0xcU] 
            = vlSelf->top__DOT__d_cache__DOT__lo[0xcU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0xdU] 
            = vlSelf->top__DOT__d_cache__DOT__lo[0xdU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0xeU] 
            = vlSelf->top__DOT__d_cache__DOT__lo[0xeU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0xfU] 
            = vlSelf->top__DOT__d_cache__DOT__lo[0xfU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x10U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[0U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x11U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[1U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x12U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[2U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x13U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[3U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x14U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[4U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x15U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[5U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x16U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[6U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x17U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[7U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x18U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[8U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x19U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[9U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x1aU] 
            = vlSelf->top__DOT__d_cache__DOT__hi[0xaU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x1bU] 
            = vlSelf->top__DOT__d_cache__DOT__hi[0xbU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x1cU] 
            = vlSelf->top__DOT__d_cache__DOT__hi[0xcU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x1dU] 
            = vlSelf->top__DOT__d_cache__DOT__hi[0xdU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x1eU] 
            = vlSelf->top__DOT__d_cache__DOT__hi[0xeU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x1fU] 
            = vlSelf->top__DOT__d_cache__DOT__hi[0xfU];
        __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v1 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1 
            = (0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__unvalidIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_420))) {
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[0U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[1U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[1U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[2U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[2U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[3U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[3U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[4U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[4U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[5U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[5U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[6U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[6U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[7U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[7U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[8U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[8U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[9U] 
            = vlSelf->top__DOT__d_cache__DOT__lo[9U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0xaU] 
            = vlSelf->top__DOT__d_cache__DOT__lo[0xaU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0xbU] 
            = vlSelf->top__DOT__d_cache__DOT__lo[0xbU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0xcU] 
            = vlSelf->top__DOT__d_cache__DOT__lo[0xcU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0xdU] 
            = vlSelf->top__DOT__d_cache__DOT__lo[0xdU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0xeU] 
            = vlSelf->top__DOT__d_cache__DOT__lo[0xeU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0xfU] 
            = vlSelf->top__DOT__d_cache__DOT__lo[0xfU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x10U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[0U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x11U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[1U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x12U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[2U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x13U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[3U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x14U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[4U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x15U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[5U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x16U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[6U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x17U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[7U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x18U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[8U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x19U] 
            = vlSelf->top__DOT__d_cache__DOT__hi[9U];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x1aU] 
            = vlSelf->top__DOT__d_cache__DOT__hi[0xaU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x1bU] 
            = vlSelf->top__DOT__d_cache__DOT__hi[0xbU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x1cU] 
            = vlSelf->top__DOT__d_cache__DOT__hi[0xcU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x1dU] 
            = vlSelf->top__DOT__d_cache__DOT__hi[0xdU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x1eU] 
            = vlSelf->top__DOT__d_cache__DOT__hi[0xeU];
        __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x1fU] 
            = vlSelf->top__DOT__d_cache__DOT__hi[0xfU];
        __Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v2 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2 
            = (0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__wen = 0U;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_to_ms_valid) 
                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__wen = vlSelf->top__DOT__EXU__DOT__st_we;
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_396))) {
        __Vdlyvset__top__DOT__d_cache__DOT__validMem__v0 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__validMem__v0 
            = (0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__unvalidIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_420))) {
        __Vdlyvset__top__DOT__d_cache__DOT__validMem__v1 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__validMem__v1 
            = (0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[1U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[2U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[3U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[4U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[5U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[6U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[7U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[8U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[9U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0xaU] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0xbU] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0xcU] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0xdU] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0xeU] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0xfU] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x10U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x11U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x12U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x13U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x14U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x15U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x16U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x17U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x18U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x19U] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1aU] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1bU] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1cU] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1dU] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1eU] = 0U;
        vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1fU] = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[1U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[1U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[2U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[2U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[3U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[3U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[4U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[4U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[5U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[5U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[6U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[6U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[7U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[7U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[8U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[8U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[9U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[9U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0xaU] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0xaU];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0xbU] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0xbU];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0xcU] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0xcU];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0xdU] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0xdU];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0xeU] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0xeU];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0xfU] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0xfU];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x10U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x10U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x11U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x11U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x12U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x12U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x13U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x13U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x14U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x14U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x15U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x15U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x16U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x16U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x17U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x17U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x18U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x18U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x19U] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x19U];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1aU] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1aU];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1bU] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1bU];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1cU] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1cU];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1dU] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1dU];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1eU] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1eU];
                vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1fU] 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1fU];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_0 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_0 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_242;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_1 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_1 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_243;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_2 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_2 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_244;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_3 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_3 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_245;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_4 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_4 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_246;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_5 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_5 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_247;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_6 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_6 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_248;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_7 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_7 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_249;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_8 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_8 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_250;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_9 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_9 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_251;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_10 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_10 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_252;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_11 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_11 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_253;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_12 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_12 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_254;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_13 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_13 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_255;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_14 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_14 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_256;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__receive_data_15 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__receive_data_15 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_257;
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
                = vlSelf->top__DOT__d_cache__DOT___GEN_258;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_0 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_0 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_268;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_1 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_1 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_269;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_2 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_2 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_270;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_3 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_3 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_271;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_4 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_4 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_272;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_5 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_5 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_273;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_6 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_6 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_274;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_7 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_7 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_275;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_8 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_8 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_276;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_9 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_9 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_277;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_10 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_10 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_278;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_11 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_11 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_279;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_12 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_12 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_280;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_13 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_13 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_281;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_14 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_14 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_282;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__d_cache__DOT__quene_15 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
                vlSelf->top__DOT__d_cache__DOT__quene_15 
                    = vlSelf->top__DOT__d_cache__DOT___GEN_283;
            }
        }
    }
    __Vdly__top__DOT__d_cache__DOT__state = ((IData)(vlSelf->reset)
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
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_16)))
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
                                                    : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_259)))));
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_valid = 0U;
    } else if (vlSelf->top__DOT__LSU__DOT__ms_allowin) {
        vlSelf->top__DOT__LSU__DOT__ms_valid = vlSelf->top__DOT__EXU_io_es_to_ms_valid;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__wstrb = 0U;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_to_ms_valid) 
                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__wstrb = vlSelf->top__DOT__EXU__DOT__st_wstrb;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__store_data = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_to_ms_valid) 
                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__store_data = vlSelf->top__DOT__EXU__DOT__store_data;
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_396))) {
        __Vdlyvval__top__DOT__d_cache__DOT__tagMem__v0 
            = (0x1fffffU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                    >> 0xbU)));
        __Vdlyvset__top__DOT__d_cache__DOT__tagMem__v0 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__tagMem__v0 
            = (0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__unvalidIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_420))) {
        __Vdlyvval__top__DOT__d_cache__DOT__tagMem__v1 
            = (0x1fffffU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                    >> 0xbU)));
        __Vdlyvset__top__DOT__d_cache__DOT__tagMem__v1 = 1U;
        __Vdlyvdim0__top__DOT__d_cache__DOT__tagMem__v1 
            = (0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2));
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_368))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v0 = 1U;
        __Vdlyvdim0__top__DOT__i_cache__DOT__validMem__v0 
            = (0x3fU & (IData)(vlSelf->top__DOT__i_cache__DOT__unvalidIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_392))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v1 = 1U;
        __Vdlyvdim0__top__DOT__i_cache__DOT__validMem__v1 
            = (0x3fU & (IData)(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2));
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v2 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v3 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v4 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v5 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v6 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v7 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v8 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v9 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v10 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v11 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v12 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v13 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v14 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v15 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v16 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v17 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v18 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v19 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v20 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v21 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v22 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v23 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v24 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v25 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v26 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v27 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v28 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v29 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v30 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v31 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v32 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v33 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v34 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v35 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v36 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v37 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v38 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v39 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v40 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v41 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v42 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v43 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v44 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v45 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v46 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v47 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v48 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v49 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v50 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v51 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v52 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v53 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v54 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v55 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v56 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v57 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v58 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v59 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v60 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v61 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v62 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v63 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v64 = 1U;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_400))) {
        __Vdlyvset__top__DOT__i_cache__DOT__validMem__v65 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ren = 0U;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_to_ms_valid) 
                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__ren = vlSelf->top__DOT__EXU__DOT__ld_we;
    }
    if (((IData)(vlSelf->top__DOT__IDU__DOT__csr_write) 
         & (IData)(vlSelf->top__DOT__IDU__DOT__ds_valid))) {
        __Vdlyvval__top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg__v0 
            = ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                ? vlSelf->top__DOT__IDU__DOT__ds_pc
                : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__csr_write))
                    ? ((0x1073U == (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
                        ? vlSelf->top__DOT__IDU__DOT__rdata1
                        : ((0x2073U == (0x707fU & vlSelf->top__DOT__IDU__DOT__inst))
                            ? (vlSelf->top__DOT__IDU__DOT__rdata1 
                               | vlSelf->top__DOT__IDU__DOT__csr_reg__DOT__CSR_Reg_io_rdata_MPORT_data)
                            : ((0x3073U == (0x707fU 
                                            & vlSelf->top__DOT__IDU__DOT__inst))
                                ? (vlSelf->top__DOT__IDU__DOT__rdata1 
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
    if ((((IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_we) 
          & (IData)(vlSelf->top__DOT__WBU__DOT__ws_valid)) 
         & (0U != (IData)(vlSelf->top__DOT__WBU__DOT__ws_rf_dst)))) {
        __Vdlyvval__top__DOT__Register__DOT__Reg__v0 
            = vlSelf->top__DOT__WBU__DOT__ws_res;
        __Vdlyvset__top__DOT__Register__DOT__Reg__v0 = 1U;
        __Vdlyvdim0__top__DOT__Register__DOT__Reg__v0 
            = vlSelf->top__DOT__WBU__DOT__ws_rf_dst;
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_368))) {
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
            = (0x3fU & (IData)(vlSelf->top__DOT__i_cache__DOT__unvalidIndex));
    }
    if (((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_392))) {
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
            = (0x3fU & (IData)(vlSelf->top__DOT__i_cache__DOT___replaceIndex_T_2));
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
    if (__Vdlyvset__top__DOT__d_cache__DOT__cacheLine__v0) {
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][1U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[1U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][2U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[2U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][3U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[3U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][4U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[4U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][5U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[5U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][6U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[6U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][7U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[7U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][8U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[8U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][9U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[9U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0xaU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0xaU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0xbU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0xbU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0xcU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0xcU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0xdU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0xdU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0xeU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0xeU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0xfU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0xfU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x10U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x10U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x11U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x11U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x12U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x12U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x13U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x13U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x14U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x14U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x15U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x15U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x16U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x16U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x17U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x17U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x18U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x18U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x19U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x19U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x1aU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x1aU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x1bU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x1bU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x1cU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x1cU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x1dU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x1dU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x1eU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x1eU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v0][0x1fU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v0[0x1fU];
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
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][4U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[4U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][5U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[5U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][6U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[6U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][7U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[7U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][8U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[8U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][9U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[9U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0xaU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0xaU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0xbU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0xbU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0xcU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0xcU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0xdU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0xdU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0xeU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0xeU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0xfU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0xfU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x10U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x10U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x11U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x11U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x12U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x12U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x13U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x13U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x14U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x14U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x15U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x15U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x16U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x16U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x17U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x17U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x18U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x18U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x19U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x19U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x1aU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x1aU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x1bU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x1bU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x1cU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x1cU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x1dU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x1dU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x1eU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x1eU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v1][0x1fU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v1[0x1fU];
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
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][4U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[4U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][5U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[5U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][6U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[6U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][7U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[7U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][8U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[8U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][9U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[9U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0xaU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0xaU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0xbU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0xbU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0xcU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0xcU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0xdU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0xdU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0xeU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0xeU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0xfU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0xfU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x10U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x10U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x11U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x11U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x12U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x12U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x13U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x13U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x14U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x14U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x15U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x15U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x16U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x16U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x17U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x17U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x18U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x18U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x19U] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x19U];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x1aU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x1aU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x1bU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x1bU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x1cU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x1cU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x1dU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x1dU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x1eU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x1eU];
        vlSelf->top__DOT__d_cache__DOT__cacheLine[__Vdlyvdim0__top__DOT__d_cache__DOT__cacheLine__v2][0x1fU] 
            = __Vdlyvval__top__DOT__d_cache__DOT__cacheLine__v2[0x1fU];
    }
    if (__Vdlyvset__top__DOT__d_cache__DOT__validMem__v0) {
        vlSelf->top__DOT__d_cache__DOT__validMem[__Vdlyvdim0__top__DOT__d_cache__DOT__validMem__v0] = 1U;
    }
    if (__Vdlyvset__top__DOT__d_cache__DOT__validMem__v1) {
        vlSelf->top__DOT__d_cache__DOT__validMem[__Vdlyvdim0__top__DOT__d_cache__DOT__validMem__v1] = 1U;
    }
    if (__Vdlyvset__top__DOT__d_cache__DOT__tagMem__v0) {
        vlSelf->top__DOT__d_cache__DOT__tagMem[__Vdlyvdim0__top__DOT__d_cache__DOT__tagMem__v0] 
            = __Vdlyvval__top__DOT__d_cache__DOT__tagMem__v0;
    }
    if (__Vdlyvset__top__DOT__d_cache__DOT__tagMem__v1) {
        vlSelf->top__DOT__d_cache__DOT__tagMem[__Vdlyvdim0__top__DOT__d_cache__DOT__tagMem__v1] 
            = __Vdlyvval__top__DOT__d_cache__DOT__tagMem__v1;
    }
    vlSelf->top__DOT__d_cache__DOT__state = __Vdly__top__DOT__d_cache__DOT__state;
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
    vlSelf->io_step = vlSelf->top__DOT__diff_step;
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___step_num_T_1 
        = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num 
           - (IData)(1U));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_1));
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_pc = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_to_ms_valid) 
                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__ms_pc = vlSelf->top__DOT__EXU__DOT__es_pc;
    }
    vlSelf->top__DOT__axi_io_axi_out_rlast = ((1U == (IData)(vlSelf->top__DOT__axi__DOT__state)) 
                                              & (0U 
                                                 == (IData)(vlSelf->top__DOT__axi__DOT__arlen)));
    vlSelf->top__DOT__axi__DOT___GEN_18 = ((0U == (IData)(vlSelf->top__DOT__axi__DOT__awlen)) 
                                           | (IData)(vlSelf->top__DOT__axi__DOT__axi_bvalid));
    VL_EXTEND_WQ(65,64, __Vtemp16, (~ (((QData)((IData)(
                                                        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp17, (~ (((QData)((IData)(
                                                        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src1[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp21, ((2U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
    __Vtemp25[1U] = ((4U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
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
                                        << 1U)) : __Vtemp21[1U]));
    __Vtemp32[2U] = ((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                      ? 0U : (1U & ((6U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                     ? __Vtemp16[2U]
                                     : ((5U == (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                         ? __Vtemp17[2U]
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
                                                __Vtemp21[2U]))))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___res_T_3 
        = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__res 
            + (((QData)((IData)(((7U == (7U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                  ? 0U : ((6U == (7U 
                                                  & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                           ? __Vtemp16[1U]
                                           : ((5U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                               ? __Vtemp17[1U]
                                               : __Vtemp25[1U]))))) 
                << 0x20U) | (QData)((IData)(((7U == 
                                              (7U & 
                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                              ? 0U : 
                                             ((6U == 
                                               (7U 
                                                & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                               ? __Vtemp16[0U]
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__src2[0U]))
                                                   ? 
                                                  __Vtemp17[0U]
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
                                                    __Vtemp21[0U]))))))))) 
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
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__src2_value = ((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                                   ? vlSelf->top__DOT__IDU__DOT__imm
                                                   : vlSelf->top__DOT__IDU__DOT__rdata2);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__ALUop = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__ALUop = vlSelf->top__DOT__IDU__DOT___ALUop_T_176;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__st_we = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__st_we = (0x44U 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_188));
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_250 = vlSelf->top__DOT__d_cache__DOT__receive_data_8;
    vlSelf->top__DOT__d_cache__DOT___GEN_251 = vlSelf->top__DOT__d_cache__DOT__receive_data_9;
    vlSelf->top__DOT__d_cache__DOT___GEN_252 = vlSelf->top__DOT__d_cache__DOT__receive_data_10;
    vlSelf->top__DOT__d_cache__DOT___GEN_253 = vlSelf->top__DOT__d_cache__DOT__receive_data_11;
    vlSelf->top__DOT__d_cache__DOT___GEN_254 = vlSelf->top__DOT__d_cache__DOT__receive_data_12;
    vlSelf->top__DOT__d_cache__DOT___GEN_255 = vlSelf->top__DOT__d_cache__DOT__receive_data_13;
    vlSelf->top__DOT__d_cache__DOT___GEN_256 = vlSelf->top__DOT__d_cache__DOT__receive_data_14;
    vlSelf->top__DOT__d_cache__DOT___GEN_257 = vlSelf->top__DOT__d_cache__DOT__receive_data_15;
    vlSelf->top__DOT__d_cache__DOT__hi[0U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_8);
    vlSelf->top__DOT__d_cache__DOT__hi[1U] = (IData)(
                                                     (vlSelf->top__DOT__d_cache__DOT__receive_data_8 
                                                      >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__hi[2U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_9);
    vlSelf->top__DOT__d_cache__DOT__hi[3U] = (IData)(
                                                     (vlSelf->top__DOT__d_cache__DOT__receive_data_9 
                                                      >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__hi[4U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_10);
    vlSelf->top__DOT__d_cache__DOT__hi[5U] = (IData)(
                                                     (vlSelf->top__DOT__d_cache__DOT__receive_data_10 
                                                      >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__hi[6U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_11);
    vlSelf->top__DOT__d_cache__DOT__hi[7U] = (IData)(
                                                     (vlSelf->top__DOT__d_cache__DOT__receive_data_11 
                                                      >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__hi[8U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_12);
    vlSelf->top__DOT__d_cache__DOT__hi[9U] = (IData)(
                                                     (vlSelf->top__DOT__d_cache__DOT__receive_data_12 
                                                      >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__hi[0xaU] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_13);
    vlSelf->top__DOT__d_cache__DOT__hi[0xbU] = (IData)(
                                                       (vlSelf->top__DOT__d_cache__DOT__receive_data_13 
                                                        >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__hi[0xcU] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_14);
    vlSelf->top__DOT__d_cache__DOT__hi[0xdU] = (IData)(
                                                       (vlSelf->top__DOT__d_cache__DOT__receive_data_14 
                                                        >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__hi[0xeU] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_15);
    vlSelf->top__DOT__d_cache__DOT__hi[0xfU] = (IData)(
                                                       (vlSelf->top__DOT__d_cache__DOT__receive_data_15 
                                                        >> 0x20U));
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
    vlSelf->top__DOT__d_cache__DOT__lo[8U] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_4);
    vlSelf->top__DOT__d_cache__DOT__lo[9U] = (IData)(
                                                     (vlSelf->top__DOT__d_cache__DOT__receive_data_4 
                                                      >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__lo[0xaU] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_5);
    vlSelf->top__DOT__d_cache__DOT__lo[0xbU] = (IData)(
                                                       (vlSelf->top__DOT__d_cache__DOT__receive_data_5 
                                                        >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__lo[0xcU] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_6);
    vlSelf->top__DOT__d_cache__DOT__lo[0xdU] = (IData)(
                                                       (vlSelf->top__DOT__d_cache__DOT__receive_data_6 
                                                        >> 0x20U));
    vlSelf->top__DOT__d_cache__DOT__lo[0xeU] = (IData)(vlSelf->top__DOT__d_cache__DOT__receive_data_7);
    vlSelf->top__DOT__d_cache__DOT__lo[0xfU] = (IData)(
                                                       (vlSelf->top__DOT__d_cache__DOT__receive_data_7 
                                                        >> 0x20U));
    vlSelf->top__DOT__LSU_io_axi_out_awvalid = ((IData)(vlSelf->top__DOT__LSU__DOT__wen) 
                                                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid));
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
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
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
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__store_data = ((0x3023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__IDU__DOT__inst))
                                                   ? vlSelf->top__DOT__IDU__DOT__rdata2
                                                   : (QData)((IData)(
                                                                     ((0x1023U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->top__DOT__IDU__DOT__inst))
                                                                       ? 
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->top__DOT__IDU__DOT__rdata2))
                                                                       : 
                                                                      ((0x23U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top__DOT__IDU__DOT__inst))
                                                                        ? 
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->top__DOT__IDU__DOT__rdata2))
                                                                        : 
                                                                       ((0x2023U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->top__DOT__IDU__DOT__inst))
                                                                         ? (IData)(vlSelf->top__DOT__IDU__DOT__rdata2)
                                                                         : 0U))))));
    }
    if ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache_io_to_axi_arlen = 0U;
        vlSelf->top__DOT__d_cache_io_to_axi_awlen = 0U;
    } else {
        vlSelf->top__DOT__d_cache_io_to_axi_arlen = 
            ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? 0U : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? 0xfU : 0U));
        vlSelf->top__DOT__d_cache_io_to_axi_awlen = 
            ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? 0U : ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? 0U : ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                ? 0U : ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                         ? 0xfU : 0U))));
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
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_to_ms_valid) 
                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__maddr = (((QData)((IData)(
                                                              vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
    }
    vlSelf->top__DOT__LSU_io_axi_out_arvalid = ((IData)(vlSelf->top__DOT__LSU__DOT__ren) 
                                                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid));
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
                                            & (IData)(vlSelf->top__DOT__LSU_io_ms_to_ws_valid));
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_res = 0ULL;
    } else if (vlSelf->top__DOT__LSU_io_ms_to_ws_valid) {
        vlSelf->top__DOT__WBU__DOT__ws_res = ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                               ? vlSelf->top__DOT__LSU__DOT__rdata
                                               : vlSelf->top__DOT__LSU__DOT__ms_res);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_dst = 0U;
    } else if (vlSelf->top__DOT__LSU_io_ms_to_ws_valid) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_dst = vlSelf->top__DOT__LSU__DOT__ms_rf_dst;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_we = 0U;
    } else if (vlSelf->top__DOT__LSU_io_ms_to_ws_valid) {
        vlSelf->top__DOT__WBU__DOT__ws_rf_we = vlSelf->top__DOT__LSU__DOT__ms_rf_we;
    }
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
                    = vlSelf->top__DOT__i_cache__DOT___GEN_26;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__receive_data_1 = 0ULL;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__receive_data_1 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_27;
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
                = vlSelf->top__DOT__i_cache__DOT___GEN_28;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_0 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_0 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_170;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_1 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_1 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_171;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_2 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_2 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_172;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_3 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_3 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_173;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_4 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_4 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_174;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_5 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_5 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_175;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_6 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_6 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_176;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_7 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_7 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_177;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_8 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_8 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_178;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_9 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_9 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_179;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_10 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_10 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_180;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_11 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_11 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_181;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_12 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_12 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_182;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_13 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_13 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_183;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_14 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_14 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_184;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__i_cache__DOT__quene_15 = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
                vlSelf->top__DOT__i_cache__DOT__quene_15 
                    = vlSelf->top__DOT__i_cache__DOT___GEN_185;
            }
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
                                                   ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_20)
                                                   : 2U)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                   ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_29)
                                                   : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_161)));
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_16 = ((IData)(vlSelf->top__DOT__LSU_io_axi_out_awvalid)
                                                ? 2U
                                                : (IData)(vlSelf->top__DOT__d_cache__DOT__state));
    Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->top__DOT__Register__DOT__reg_trace__DOT__traceregs);
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__es_pc = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__es_pc = vlSelf->top__DOT__IDU__DOT__ds_pc;
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
    vlSelf->top__DOT__d_cache__DOT___GEN_619 = ((1U 
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
                                                  (0xffffffffffffff80ULL 
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
                                                            >> 7U))))
                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13)
                                        : ((0xcU == 
                                            (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 7U))))
                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12)
                                            : ((0xbU 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 7U))))
                                                ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11)
                                                : (
                                                   (0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                >> 7U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10)
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 7U))))
                                                     ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9)
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                  >> 7U))))
                                                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8)
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                   >> 7U))))
                                                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7)
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                    >> 7U))))
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6)
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                     >> 7U))))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5)
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                      >> 7U))))
                                                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4)
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                       >> 7U))))
                                                           ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3)
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                        >> 7U))))
                                                            ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2)
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                         >> 7U))))
                                                             ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1)
                                                             : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0))))))))))))));
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                         >> 7U)))];
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0x3fU & ((IData)(0x10U) + (0xfU & (IData)(
                                                   (vlSelf->top__DOT__LSU__DOT__maddr 
                                                    >> 7U)))))];
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0x3fU & ((IData)(0x20U) + (0xfU & (IData)(
                                                   (vlSelf->top__DOT__LSU__DOT__maddr 
                                                    >> 7U)))))];
    vlSelf->top__DOT__d_cache__DOT__validMem_valid_3_MPORT_data 
        = vlSelf->top__DOT__d_cache__DOT__validMem[
        (0x3fU & ((IData)(0x30U) + (0xfU & (IData)(
                                                   (vlSelf->top__DOT__LSU__DOT__maddr 
                                                    >> 7U)))))];
    vlSelf->top__DOT__d_cache__DOT___T_3 = (((IData)(vlSelf->top__DOT__LSU_io_axi_out_arvalid) 
                                             | (IData)(vlSelf->top__DOT__LSU_io_axi_out_awvalid)) 
                                            & (0xa0000000U 
                                               <= (IData)(vlSelf->top__DOT__LSU__DOT__maddr)));
    vlSelf->top__DOT__EXU_io_es_ld = ((IData)(vlSelf->top__DOT__EXU__DOT__ld_we) 
                                      & (IData)(vlSelf->top__DOT__EXU__DOT__es_valid));
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_res = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_to_ms_valid) 
                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__ms_res = (((QData)((IData)(
                                                               vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U])));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__load_type = 0U;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_to_ms_valid) 
                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__load_type = vlSelf->top__DOT__EXU__DOT__load_type;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_dst = 0U;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_to_ms_valid) 
                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_dst = vlSelf->top__DOT__EXU__DOT__es_rd;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_we = 0U;
    } else if (((IData)(vlSelf->top__DOT__EXU_io_es_to_ms_valid) 
                & (IData)(vlSelf->top__DOT__LSU__DOT__ms_allowin))) {
        vlSelf->top__DOT__LSU__DOT__ms_rf_we = vlSelf->top__DOT__EXU__DOT__es_rf_we;
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
    vlSelf->top__DOT__d_cache__DOT___GEN_15 = ((0xfU 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 7U))))
                                                ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15)
                                                : (
                                                   (0xeU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                >> 7U))))
                                                    ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14)
                                                    : (IData)(top__DOT__d_cache__DOT___GEN_13)));
    vlSelf->top__DOT__d_cache__DOT__tagMatch_0 = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_0_MPORT_data) 
                                                  & (vlSelf->top__DOT__d_cache__DOT__tagMem
                                                     [
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 7U)))] 
                                                     == 
                                                     (0x1fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 0xbU)))));
    vlSelf->top__DOT__d_cache__DOT__tagMatch_1 = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_1_MPORT_data) 
                                                  & (vlSelf->top__DOT__d_cache__DOT__tagMem
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x10U) 
                                                         + 
                                                         (0xfU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                     >> 7U)))))] 
                                                     == 
                                                     (0x1fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 0xbU)))));
    vlSelf->top__DOT__d_cache__DOT__tagMatch_2 = ((IData)(vlSelf->top__DOT__d_cache__DOT__validMem_valid_2_MPORT_data) 
                                                  & (vlSelf->top__DOT__d_cache__DOT__tagMem
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0xfU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                     >> 7U)))))] 
                                                     == 
                                                     (0x1fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 0xbU)))));
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
                                                                     >> 7U)))))] 
                                                     == 
                                                     (0x1fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                 >> 0xbU)))));
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
    __Vtemp50[0U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U] 
                      << 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[1U] 
                                >> 0x1fU));
    __Vtemp50[1U] = ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U] 
                      << 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[2U] 
                                >> 0x1fU));
    __Vtemp50[2U] = (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U] 
                     >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp51, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
                                     ? ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sor_neg)
                                         ? (1ULL + 
                                            (~ vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s))
                                         : vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__src2_32_s)
                                     : ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_divw)
                                         ? (QData)((IData)(vlSelf->top__DOT__EXU__DOT__src2_value))
                                         : vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_SUB_W(3, __Vtemp52, __Vtemp50, __Vtemp51);
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[0U] 
        = __Vtemp52[0U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
        = __Vtemp52[1U];
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
        = (1U & __Vtemp52[2U]);
    vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2 
        = (0x1ffU & ((0x30U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15) 
                               >> 2U)) + (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U)))));
    top__DOT__d_cache__DOT___quene_T_3 = (((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15) 
                                           << 2U) | 
                                          (3U & ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15) 
                                                 >> 6U)));
    vlSelf->top__DOT__d_cache__DOT___GEN_396 = ((1U 
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
    vlSelf->top__DOT__d_cache__DOT___GEN_420 = ((1U 
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
                                              >> 7U)))));
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
                                                               >> 7U)))));
    vlSelf->top__DOT__d_cache__DOT__anyMatch = ((((IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_0) 
                                                  | (IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_1)) 
                                                 | (IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_2)) 
                                                | (IData)(vlSelf->top__DOT__d_cache__DOT__tagMatch_3));
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
    if (vlSelf->reset) {
        vlSelf->top__DOT__EXU__DOT__load_type = 0U;
    } else if (((IData)(vlSelf->top__DOT__IDU_io_ds_to_es_valid) 
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
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
                & (IData)(vlSelf->top__DOT__EXU__DOT__es_allowin))) {
        vlSelf->top__DOT__EXU__DOT__es_rd = (0x1fU 
                                             & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 7U));
    }
    vlSelf->top__DOT__LSU_io_ms_rf_we = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_rf_we) 
                                         & (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid));
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
                                                                                & ((0x30200073U 
                                                                                != vlSelf->top__DOT__IDU__DOT__inst) 
                                                                                & (0x100fU 
                                                                                != vlSelf->top__DOT__IDU__DOT__inst))))))))))))));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__IDU__DOT__ds_valid = 0U;
    } else if ((((IData)(vlSelf->top__DOT__IDU__DOT__br_taken) 
                 & (~ (IData)(vlSelf->top__DOT__IDU__DOT__br_taken_cancel))) 
                & (IData)(vlSelf->top__DOT__IDU__DOT__ds_allowin))) {
        vlSelf->top__DOT__IDU__DOT__ds_valid = 0U;
    } else if (vlSelf->top__DOT__IDU__DOT__ds_allowin) {
        vlSelf->top__DOT__IDU__DOT__ds_valid = vlSelf->top__DOT__IFU__DOT__fs_valid;
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
    vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data 
        = vlSelf->top__DOT__d_cache__DOT__dirtyMem[
        (0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))];
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_268 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_269 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_270 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_271 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_272 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_273 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_274 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_275 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_276 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_277 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_278 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_279 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_280 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_281 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_282 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_283 = 
            (0xffU & (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15));
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_268 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0))
                               : ((0U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0))));
        vlSelf->top__DOT__d_cache__DOT___GEN_269 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((1U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1))
                               : ((1U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1))));
        vlSelf->top__DOT__d_cache__DOT___GEN_270 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2))
                               : ((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2))));
        vlSelf->top__DOT__d_cache__DOT___GEN_271 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((3U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3))
                               : ((3U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3))));
        vlSelf->top__DOT__d_cache__DOT___GEN_272 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((4U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4))
                               : ((4U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4))));
        vlSelf->top__DOT__d_cache__DOT___GEN_273 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((5U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5))
                               : ((5U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5))));
        vlSelf->top__DOT__d_cache__DOT___GEN_274 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((6U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6))
                               : ((6U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6))));
        vlSelf->top__DOT__d_cache__DOT___GEN_275 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((7U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7))
                               : ((7U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7))));
        vlSelf->top__DOT__d_cache__DOT___GEN_276 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((8U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8))
                               : ((8U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8))));
        vlSelf->top__DOT__d_cache__DOT___GEN_277 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((9U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9))
                               : ((9U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9))));
        vlSelf->top__DOT__d_cache__DOT___GEN_278 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10))
                               : ((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10))));
        vlSelf->top__DOT__d_cache__DOT___GEN_279 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xbU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11))
                               : ((0xbU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11))));
        vlSelf->top__DOT__d_cache__DOT___GEN_280 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xcU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12))
                               : ((0xcU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12))));
        vlSelf->top__DOT__d_cache__DOT___GEN_281 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xdU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13))
                               : ((0xdU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13))));
        vlSelf->top__DOT__d_cache__DOT___GEN_282 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14))
                               : ((0xeU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14))));
        vlSelf->top__DOT__d_cache__DOT___GEN_283 = 
            (0xffU & ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                       ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15)
                       : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                               ? ((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_3)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15))
                               : ((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__LSU__DOT__maddr 
                                                            >> 7U))))
                                   ? (IData)(top__DOT__d_cache__DOT___quene_T_1)
                                   : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15)))
                           : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15))));
    }
    VL_EXTEND_WQ(1087,64, __Vtemp54, (vlSelf->top__DOT__LSU__DOT__store_data 
                                      & vlSelf->top__DOT__d_cache__DOT__wmask));
    VL_SHIFTL_WWI(1087,1087,10, __Vtemp55, __Vtemp54, 
                  (0x3f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                             << 3U)));
    __Vtemp56[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U];
    __Vtemp56[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U];
    __Vtemp56[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U];
    __Vtemp56[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U];
    __Vtemp56[4U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][4U];
    __Vtemp56[5U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][5U];
    __Vtemp56[6U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][6U];
    __Vtemp56[7U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][7U];
    __Vtemp56[8U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][8U];
    __Vtemp56[9U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][9U];
    __Vtemp56[0xaU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xaU];
    __Vtemp56[0xbU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xbU];
    __Vtemp56[0xcU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xcU];
    __Vtemp56[0xdU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xdU];
    __Vtemp56[0xeU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xeU];
    __Vtemp56[0xfU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xfU];
    __Vtemp56[0x10U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x10U];
    __Vtemp56[0x11U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x11U];
    __Vtemp56[0x12U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x12U];
    __Vtemp56[0x13U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x13U];
    __Vtemp56[0x14U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x14U];
    __Vtemp56[0x15U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x15U];
    __Vtemp56[0x16U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x16U];
    __Vtemp56[0x17U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x17U];
    __Vtemp56[0x18U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x18U];
    __Vtemp56[0x19U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x19U];
    __Vtemp56[0x1aU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x1aU];
    __Vtemp56[0x1bU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x1bU];
    __Vtemp56[0x1cU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x1cU];
    __Vtemp56[0x1dU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x1dU];
    __Vtemp56[0x1eU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x1eU];
    __Vtemp56[0x1fU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x1fU];
    VL_EXTEND_WW(1087,1024, __Vtemp57, __Vtemp56);
    VL_EXTEND_WQ(1087,64, __Vtemp58, vlSelf->top__DOT__d_cache__DOT__wmask);
    VL_SHIFTL_WWI(1087,1087,10, __Vtemp59, __Vtemp58, 
                  (0x3f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                             << 3U)));
    vlSelf->top__DOT__d_cache__DOT___T_13[0U] = (Vtop__ConstPool__CONST_34626a84_0[0U] 
                                                 & (__Vtemp55[0U] 
                                                    | (__Vtemp57[0U] 
                                                       & (~ 
                                                          __Vtemp59[0U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[1U] = (Vtop__ConstPool__CONST_34626a84_0[1U] 
                                                 & (__Vtemp55[1U] 
                                                    | (__Vtemp57[1U] 
                                                       & (~ 
                                                          __Vtemp59[1U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[2U] = (Vtop__ConstPool__CONST_34626a84_0[2U] 
                                                 & (__Vtemp55[2U] 
                                                    | (__Vtemp57[2U] 
                                                       & (~ 
                                                          __Vtemp59[2U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[3U] = (Vtop__ConstPool__CONST_34626a84_0[3U] 
                                                 & (__Vtemp55[3U] 
                                                    | (__Vtemp57[3U] 
                                                       & (~ 
                                                          __Vtemp59[3U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[4U] = (Vtop__ConstPool__CONST_34626a84_0[4U] 
                                                 & (__Vtemp55[4U] 
                                                    | (__Vtemp57[4U] 
                                                       & (~ 
                                                          __Vtemp59[4U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[5U] = (Vtop__ConstPool__CONST_34626a84_0[5U] 
                                                 & (__Vtemp55[5U] 
                                                    | (__Vtemp57[5U] 
                                                       & (~ 
                                                          __Vtemp59[5U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[6U] = (Vtop__ConstPool__CONST_34626a84_0[6U] 
                                                 & (__Vtemp55[6U] 
                                                    | (__Vtemp57[6U] 
                                                       & (~ 
                                                          __Vtemp59[6U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[7U] = (Vtop__ConstPool__CONST_34626a84_0[7U] 
                                                 & (__Vtemp55[7U] 
                                                    | (__Vtemp57[7U] 
                                                       & (~ 
                                                          __Vtemp59[7U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[8U] = (Vtop__ConstPool__CONST_34626a84_0[8U] 
                                                 & (__Vtemp55[8U] 
                                                    | (__Vtemp57[8U] 
                                                       & (~ 
                                                          __Vtemp59[8U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[9U] = (Vtop__ConstPool__CONST_34626a84_0[9U] 
                                                 & (__Vtemp55[9U] 
                                                    | (__Vtemp57[9U] 
                                                       & (~ 
                                                          __Vtemp59[9U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0xaU] = (
                                                   Vtop__ConstPool__CONST_34626a84_0[0xaU] 
                                                   & (__Vtemp55[0xaU] 
                                                      | (__Vtemp57[0xaU] 
                                                         & (~ 
                                                            __Vtemp59[0xaU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0xbU] = (
                                                   Vtop__ConstPool__CONST_34626a84_0[0xbU] 
                                                   & (__Vtemp55[0xbU] 
                                                      | (__Vtemp57[0xbU] 
                                                         & (~ 
                                                            __Vtemp59[0xbU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0xcU] = (
                                                   Vtop__ConstPool__CONST_34626a84_0[0xcU] 
                                                   & (__Vtemp55[0xcU] 
                                                      | (__Vtemp57[0xcU] 
                                                         & (~ 
                                                            __Vtemp59[0xcU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0xdU] = (
                                                   Vtop__ConstPool__CONST_34626a84_0[0xdU] 
                                                   & (__Vtemp55[0xdU] 
                                                      | (__Vtemp57[0xdU] 
                                                         & (~ 
                                                            __Vtemp59[0xdU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0xeU] = (
                                                   Vtop__ConstPool__CONST_34626a84_0[0xeU] 
                                                   & (__Vtemp55[0xeU] 
                                                      | (__Vtemp57[0xeU] 
                                                         & (~ 
                                                            __Vtemp59[0xeU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0xfU] = (
                                                   Vtop__ConstPool__CONST_34626a84_0[0xfU] 
                                                   & (__Vtemp55[0xfU] 
                                                      | (__Vtemp57[0xfU] 
                                                         & (~ 
                                                            __Vtemp59[0xfU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x10U] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x10U] & 
         (__Vtemp55[0x10U] | (__Vtemp57[0x10U] & (~ 
                                                  __Vtemp59[0x10U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x11U] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x11U] & 
         (__Vtemp55[0x11U] | (__Vtemp57[0x11U] & (~ 
                                                  __Vtemp59[0x11U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x12U] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x12U] & 
         (__Vtemp55[0x12U] | (__Vtemp57[0x12U] & (~ 
                                                  __Vtemp59[0x12U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x13U] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x13U] & 
         (__Vtemp55[0x13U] | (__Vtemp57[0x13U] & (~ 
                                                  __Vtemp59[0x13U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x14U] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x14U] & 
         (__Vtemp55[0x14U] | (__Vtemp57[0x14U] & (~ 
                                                  __Vtemp59[0x14U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x15U] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x15U] & 
         (__Vtemp55[0x15U] | (__Vtemp57[0x15U] & (~ 
                                                  __Vtemp59[0x15U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x16U] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x16U] & 
         (__Vtemp55[0x16U] | (__Vtemp57[0x16U] & (~ 
                                                  __Vtemp59[0x16U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x17U] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x17U] & 
         (__Vtemp55[0x17U] | (__Vtemp57[0x17U] & (~ 
                                                  __Vtemp59[0x17U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x18U] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x18U] & 
         (__Vtemp55[0x18U] | (__Vtemp57[0x18U] & (~ 
                                                  __Vtemp59[0x18U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x19U] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x19U] & 
         (__Vtemp55[0x19U] | (__Vtemp57[0x19U] & (~ 
                                                  __Vtemp59[0x19U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x1aU] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x1aU] & 
         (__Vtemp55[0x1aU] | (__Vtemp57[0x1aU] & (~ 
                                                  __Vtemp59[0x1aU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x1bU] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x1bU] & 
         (__Vtemp55[0x1bU] | (__Vtemp57[0x1bU] & (~ 
                                                  __Vtemp59[0x1bU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x1cU] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x1cU] & 
         (__Vtemp55[0x1cU] | (__Vtemp57[0x1cU] & (~ 
                                                  __Vtemp59[0x1cU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x1dU] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x1dU] & 
         (__Vtemp55[0x1dU] | (__Vtemp57[0x1dU] & (~ 
                                                  __Vtemp59[0x1dU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x1eU] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x1eU] & 
         (__Vtemp55[0x1eU] | (__Vtemp57[0x1eU] & (~ 
                                                  __Vtemp59[0x1eU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x1fU] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x1fU] & 
         (__Vtemp55[0x1fU] | (__Vtemp57[0x1fU] & (~ 
                                                  __Vtemp59[0x1fU]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x20U] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x20U] & 
         (__Vtemp55[0x20U] | (__Vtemp57[0x20U] & (~ 
                                                  __Vtemp59[0x20U]))));
    vlSelf->top__DOT__d_cache__DOT___T_13[0x21U] = 
        (Vtop__ConstPool__CONST_34626a84_0[0x21U] & 
         (__Vtemp55[0x21U] | (__Vtemp57[0x21U] & (~ 
                                                  __Vtemp59[0x21U]))));
    vlSelf->top__DOT__d_cache__DOT___GEN_373 = ((1U 
                                                 != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                & ((2U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                   & (IData)(vlSelf->top__DOT__d_cache__DOT__anyMatch)));
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
    vlSelf->top__DOT__arbiter__DOT___GEN_126 = ((3U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 ? 
                                                (((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid) 
                                                  & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_bready))
                                                  ? 0U
                                                  : (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 : (IData)(vlSelf->top__DOT__arbiter__DOT__state));
    vlSelf->top__DOT__d_cache__DOT___GEN_258 = (7U 
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
    VL_EXTEND_WQ(128,64, __Vtemp64, ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_div_signed)
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
            = __Vtemp64[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[1U] 
            = __Vtemp64[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[2U] 
            = __Vtemp64[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2[3U] 
            = __Vtemp64[3U];
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
    vlSelf->top__DOT__d_cache__DOT___GEN_429 = ((1U 
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
    vlSelf->top__DOT__d_cache__DOT___GEN_259 = ((3U 
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
    __Vtemp70[0U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[2U];
    __Vtemp70[1U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[3U];
    __Vtemp70[2U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[4U];
    __Vtemp70[3U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[5U];
    __Vtemp70[4U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[6U];
    __Vtemp70[5U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[7U];
    __Vtemp70[6U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[8U];
    __Vtemp70[7U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[9U];
    __Vtemp70[8U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xaU];
    __Vtemp70[9U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xbU];
    __Vtemp70[0xaU] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xcU];
    __Vtemp70[0xbU] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xdU];
    __Vtemp70[0xcU] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xeU];
    __Vtemp70[0xdU] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xfU];
    __Vtemp70[0xeU] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x10U];
    __Vtemp70[0xfU] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x11U];
    __Vtemp70[0x10U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x12U];
    __Vtemp70[0x11U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x13U];
    __Vtemp70[0x12U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x14U];
    __Vtemp70[0x13U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x15U];
    __Vtemp70[0x14U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x16U];
    __Vtemp70[0x15U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x17U];
    __Vtemp70[0x16U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x18U];
    __Vtemp70[0x17U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x19U];
    __Vtemp70[0x18U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1aU];
    __Vtemp70[0x19U] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1bU];
    __Vtemp70[0x1aU] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1cU];
    __Vtemp70[0x1bU] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1dU];
    __Vtemp70[0x1cU] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1eU];
    __Vtemp70[0x1dU] = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1fU];
    VL_EXTEND_WW(1024,960, __Vtemp71, __Vtemp70);
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[1U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[2U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[3U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[4U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[4U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[5U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[5U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[6U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[6U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[7U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[7U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[8U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[8U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[9U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[9U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0xaU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xaU];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0xbU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xbU];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0xcU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xcU];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0xdU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xdU];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0xeU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xeU];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0xfU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0xfU];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x10U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x10U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x11U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x11U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x12U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x12U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x13U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x13U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x14U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x14U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x15U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x15U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x16U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x16U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x17U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x17U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x18U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x18U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x19U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x19U];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1aU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1aU];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1bU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1bU];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1cU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1cU];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1dU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1dU];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1eU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1eU];
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1fU] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1fU];
        vlSelf->top__DOT__d_cache__DOT___GEN_242 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((0U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_0)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_0);
        vlSelf->top__DOT__d_cache__DOT___GEN_243 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_1)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_1);
        vlSelf->top__DOT__d_cache__DOT___GEN_244 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_2)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_2);
        vlSelf->top__DOT__d_cache__DOT___GEN_245 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_3)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_3);
        vlSelf->top__DOT__d_cache__DOT___GEN_246 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_4)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_4);
        vlSelf->top__DOT__d_cache__DOT___GEN_247 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_5)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_5);
        vlSelf->top__DOT__d_cache__DOT___GEN_248 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((6U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_6)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_6);
        vlSelf->top__DOT__d_cache__DOT___GEN_249 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((7U == (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_7)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_7);
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0U] 
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
                            ? __Vtemp71[0U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[1U] 
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
                            ? __Vtemp71[1U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[2U] 
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
                            ? __Vtemp71[2U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[3U] 
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
                            ? __Vtemp71[3U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[4U] 
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
                            ? __Vtemp71[4U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[4U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[4U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[5U] 
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
                            ? __Vtemp71[5U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[5U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[5U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[6U] 
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
                            ? __Vtemp71[6U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[6U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[6U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[7U] 
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
                            ? __Vtemp71[7U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[7U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[7U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[8U] 
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
                            ? __Vtemp71[8U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[8U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[8U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[9U] 
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
                            ? __Vtemp71[9U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[9U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[9U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0xaU] 
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
                            ? __Vtemp71[0xaU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xaU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xaU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0xbU] 
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
                            ? __Vtemp71[0xbU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xbU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xbU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0xcU] 
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
                            ? __Vtemp71[0xcU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xcU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xcU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0xdU] 
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
                            ? __Vtemp71[0xdU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xdU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xdU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0xeU] 
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
                            ? __Vtemp71[0xeU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xeU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xeU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0xfU] 
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
                            ? __Vtemp71[0xfU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xfU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0xfU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x10U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x10U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x10U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x10U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x10U])
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
                            ? __Vtemp71[0x10U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x10U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x10U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x11U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x11U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x11U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x11U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x11U])
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
                            ? __Vtemp71[0x11U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x11U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x11U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x12U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x12U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x12U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x12U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x12U])
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
                            ? __Vtemp71[0x12U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x12U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x12U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x13U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x13U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x13U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x13U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x13U])
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
                            ? __Vtemp71[0x13U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x13U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x13U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x14U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x14U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x14U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x14U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x14U])
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
                            ? __Vtemp71[0x14U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x14U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x14U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x15U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x15U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x15U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x15U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x15U])
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
                            ? __Vtemp71[0x15U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x15U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x15U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x16U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x16U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x16U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x16U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x16U])
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
                            ? __Vtemp71[0x16U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x16U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x16U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x17U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x17U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x17U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x17U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x17U])
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
                            ? __Vtemp71[0x17U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x17U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x17U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x18U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x18U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x18U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x18U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x18U])
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
                            ? __Vtemp71[0x18U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x18U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x18U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x19U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x19U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x19U]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x19U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x19U])
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
                            ? __Vtemp71[0x19U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x19U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x19U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1aU] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1aU]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x1aU]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1aU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1aU])
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
                            ? __Vtemp71[0x1aU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1aU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1aU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1bU] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1bU]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x1bU]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1bU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1bU])
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
                            ? __Vtemp71[0x1bU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1bU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1bU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1cU] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1cU]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x1cU]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1cU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1cU])
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
                            ? __Vtemp71[0x1cU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1cU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1cU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1dU] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1dU]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x1dU]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1dU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1dU])
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
                            ? __Vtemp71[0x1dU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1dU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1dU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1eU] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1eU]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x1eU]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1eU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1eU])
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
                            ? __Vtemp71[0x1eU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1eU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1eU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_296[0x1fU] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1fU]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((IData)(vlSelf->top__DOT__d_cache__DOT__allvalid)
                        ? ((IData)(vlSelf->top__DOT__d_cache__DOT__dirtyMem_MPORT_9_data)
                            ? vlSelf->top__DOT__d_cache__DOT__cacheLine
                           [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT___replaceIndex_T_2))][0x1fU]
                            : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1fU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1fU])
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
                            ? __Vtemp71[0x1fU] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1fU])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0x1fU])));
        vlSelf->top__DOT__d_cache__DOT___GEN_242 = vlSelf->top__DOT__d_cache__DOT__receive_data_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_243 = vlSelf->top__DOT__d_cache__DOT__receive_data_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_244 = vlSelf->top__DOT__d_cache__DOT__receive_data_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_245 = vlSelf->top__DOT__d_cache__DOT__receive_data_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_246 = vlSelf->top__DOT__d_cache__DOT__receive_data_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_247 = vlSelf->top__DOT__d_cache__DOT__receive_data_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_248 = vlSelf->top__DOT__d_cache__DOT__receive_data_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_249 = vlSelf->top__DOT__d_cache__DOT__receive_data_7;
    }
    __Vtemp82[0U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0U];
    __Vtemp82[1U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][1U];
    __Vtemp82[2U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][2U];
    __Vtemp82[3U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][3U];
    __Vtemp82[4U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][4U];
    __Vtemp82[5U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][5U];
    __Vtemp82[6U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][6U];
    __Vtemp82[7U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][7U];
    __Vtemp82[8U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][8U];
    __Vtemp82[9U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][9U];
    __Vtemp82[0xaU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xaU];
    __Vtemp82[0xbU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xbU];
    __Vtemp82[0xcU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xcU];
    __Vtemp82[0xdU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xdU];
    __Vtemp82[0xeU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xeU];
    __Vtemp82[0xfU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0xfU];
    __Vtemp82[0x10U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x10U];
    __Vtemp82[0x11U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x11U];
    __Vtemp82[0x12U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x12U];
    __Vtemp82[0x13U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x13U];
    __Vtemp82[0x14U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x14U];
    __Vtemp82[0x15U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x15U];
    __Vtemp82[0x16U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x16U];
    __Vtemp82[0x17U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x17U];
    __Vtemp82[0x18U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x18U];
    __Vtemp82[0x19U] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x19U];
    __Vtemp82[0x1aU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x1aU];
    __Vtemp82[0x1bU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x1bU];
    __Vtemp82[0x1cU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x1cU];
    __Vtemp82[0x1dU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x1dU];
    __Vtemp82[0x1eU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x1eU];
    __Vtemp82[0x1fU] = vlSelf->top__DOT__d_cache__DOT__cacheLine
        [(0x3fU & (IData)(vlSelf->top__DOT__d_cache__DOT__tagIndex))][0x1fU];
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp83, __Vtemp82, 
                  (0x3f8U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                             << 3U)));
    VL_EXTEND_WQ(1024,64, __Vtemp84, ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0U] 
            = __Vtemp83[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[1U] 
            = __Vtemp83[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[2U] 
            = __Vtemp83[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[3U] 
            = __Vtemp83[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[4U] 
            = __Vtemp83[4U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[5U] 
            = __Vtemp83[5U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[6U] 
            = __Vtemp83[6U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[7U] 
            = __Vtemp83[7U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[8U] 
            = __Vtemp83[8U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[9U] 
            = __Vtemp83[9U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0xaU] 
            = __Vtemp83[0xaU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0xbU] 
            = __Vtemp83[0xbU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0xcU] 
            = __Vtemp83[0xcU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0xdU] 
            = __Vtemp83[0xdU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0xeU] 
            = __Vtemp83[0xeU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0xfU] 
            = __Vtemp83[0xfU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x10U] 
            = __Vtemp83[0x10U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x11U] 
            = __Vtemp83[0x11U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x12U] 
            = __Vtemp83[0x12U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x13U] 
            = __Vtemp83[0x13U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x14U] 
            = __Vtemp83[0x14U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x15U] 
            = __Vtemp83[0x15U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x16U] 
            = __Vtemp83[0x16U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x17U] 
            = __Vtemp83[0x17U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x18U] 
            = __Vtemp83[0x18U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x19U] 
            = __Vtemp83[0x19U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x1aU] 
            = __Vtemp83[0x1aU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x1bU] 
            = __Vtemp83[0x1bU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x1cU] 
            = __Vtemp83[0x1cU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x1dU] 
            = __Vtemp83[0x1dU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x1eU] 
            = __Vtemp83[0x1eU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x1fU] 
            = __Vtemp83[0x1fU];
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0U] 
            = __Vtemp84[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[1U] 
            = __Vtemp84[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[2U] 
            = __Vtemp84[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[3U] 
            = __Vtemp84[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[4U] 
            = __Vtemp84[4U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[5U] 
            = __Vtemp84[5U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[6U] 
            = __Vtemp84[6U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[7U] 
            = __Vtemp84[7U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[8U] 
            = __Vtemp84[8U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[9U] 
            = __Vtemp84[9U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0xaU] 
            = __Vtemp84[0xaU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0xbU] 
            = __Vtemp84[0xbU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0xcU] 
            = __Vtemp84[0xcU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0xdU] 
            = __Vtemp84[0xdU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0xeU] 
            = __Vtemp84[0xeU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0xfU] 
            = __Vtemp84[0xfU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x10U] 
            = __Vtemp84[0x10U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x11U] 
            = __Vtemp84[0x11U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x12U] 
            = __Vtemp84[0x12U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x13U] 
            = __Vtemp84[0x13U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x14U] 
            = __Vtemp84[0x14U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x15U] 
            = __Vtemp84[0x15U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x16U] 
            = __Vtemp84[0x16U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x17U] 
            = __Vtemp84[0x17U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x18U] 
            = __Vtemp84[0x18U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x19U] 
            = __Vtemp84[0x19U];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x1aU] 
            = __Vtemp84[0x1aU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x1bU] 
            = __Vtemp84[0x1bU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x1cU] 
            = __Vtemp84[0x1cU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x1dU] 
            = __Vtemp84[0x1dU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x1eU] 
            = __Vtemp84[0x1eU];
        vlSelf->top__DOT__d_cache__DOT___GEN_637[0x1fU] 
            = __Vtemp84[0x1fU];
    }
    vlSelf->top__DOT__LSU_io_ms_to_ws_valid = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid) 
                                               & (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
    vlSelf->top__DOT__LSU__DOT__ms_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)) 
                                               | (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go)));
    vlSelf->top__DOT__LSU_io_ms_fwd_ready = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid) 
                                             & (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
    if (vlSelf->reset) {
        vlSelf->top__DOT__IDU__DOT__inst = 0U;
    } else if ((((IData)(vlSelf->top__DOT__IFU__DOT__fs_valid) 
                 & (IData)(vlSelf->top__DOT__IDU__DOT__ds_allowin)) 
                & (~ (IData)(vlSelf->top__DOT__IDU__DOT___T_7)))) {
        vlSelf->top__DOT__IDU__DOT__inst = vlSelf->top__DOT__IFU__DOT__fs_inst;
    }
    vlSelf->top__DOT__IDU__DOT__br_taken_cancel = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (IData)(vlSelf->top__DOT__IDU__DOT___GEN_1));
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
    vlSelf->top__DOT__LSU__DOT__rdata = ((7U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                          ? (QData)((IData)(
                                                            (0xffffU 
                                                             & vlSelf->top__DOT__d_cache__DOT___GEN_637[0U])))
                                          : ((6U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                              ? (((
                                                   (0x80U 
                                                    & vlSelf->top__DOT__d_cache__DOT___GEN_637[0U])
                                                    ? 0xffffffffffffffULL
                                                    : 0ULL) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelf->top__DOT__d_cache__DOT___GEN_637[0U]))))
                                              : ((5U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                  ? 
                                                 ((((0x8000U 
                                                     & vlSelf->top__DOT__d_cache__DOT___GEN_637[0U])
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSelf->top__DOT__d_cache__DOT___GEN_637[0U]))))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                   ? (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___GEN_637[0U]))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & vlSelf->top__DOT__d_cache__DOT___GEN_637[0U])))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__d_cache__DOT___GEN_637[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__d_cache__DOT___GEN_637[0U])))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((vlSelf->top__DOT__d_cache__DOT___GEN_637[0U] 
                                                                         >> 0x1fU)
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__d_cache__DOT___GEN_637[0U])))
                                                      : 
                                                     (((QData)((IData)(
                                                                       vlSelf->top__DOT__d_cache__DOT___GEN_637[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__d_cache__DOT___GEN_637[0U]))))))))));
    vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT___GEN_4 
        = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_allowin)
            ? 0U : (IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Mul__DOT__state));
    vlSelf->top__DOT__EXU__DOT__es_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__EXU__DOT__es_valid)) 
                                               | ((~ (IData)(vlSelf->top__DOT__EXU__DOT__ALU_io_alu_busy)) 
                                                  & (IData)(vlSelf->top__DOT__LSU__DOT__ms_allowin))));
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
    vlSelf->top__DOT__LSU_io_ms_fwd_res = ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                            ? vlSelf->top__DOT__LSU__DOT__rdata
                                            : vlSelf->top__DOT__LSU__DOT__ms_res);
    if (vlSelf->reset) {
        vlSelf->top__DOT__IFU__DOT__fs_valid = 0U;
    } else if (vlSelf->top__DOT__IFU_io_axi_out_rready) {
        vlSelf->top__DOT__IFU__DOT__fs_valid = vlSelf->top__DOT__i_cache_io_to_ifu_rvalid;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__IFU__DOT__fs_inst = 0U;
    } else if (((IData)(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid) 
                & (IData)(vlSelf->top__DOT__IFU_io_axi_out_rready))) {
        __Vtemp88[0U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))))][0U];
        __Vtemp88[1U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))))][1U];
        __Vtemp88[2U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))))][2U];
        __Vtemp88[3U] = vlSelf->top__DOT__i_cache__DOT__cacheLine
            [(0x3fU & ((((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_0)
                          ? 0U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_1)
                                   ? 1U : ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_2)
                                            ? 2U : 
                                           ((IData)(vlSelf->top__DOT__i_cache__DOT__tagMatch_3)
                                             ? 3U : 0U)))) 
                        << 4U) + (0xfU & (vlSelf->top__DOT__i_cache__DOT__addr 
                                          >> 4U))))][3U];
        VL_SHIFTR_WWI(128,128,7, __Vtemp89, __Vtemp88, 
                      (0x78U & (vlSelf->top__DOT__i_cache__DOT__addr 
                                << 3U)));
        vlSelf->top__DOT__IFU__DOT__fs_inst = ((1U 
                                                == (IData)(vlSelf->top__DOT__i_cache__DOT__state))
                                                ? __Vtemp89[0U]
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
    VL_EXTEND_WQ(127,64, __Vtemp94, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp95, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp96, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp97, (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))));
    VL_EXTEND_WQ(127,64, __Vtemp98, vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp99, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp100, __Vtemp99, 
                  (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp101, ((0x34U == vlSelf->top__DOT__EXU__DOT__ALUop)
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
            = __Vtemp94[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = __Vtemp94[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = __Vtemp94[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = (0x7fffffffU & __Vtemp94[3U]);
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp95[0U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? __Vtemp96[0U]
                                    : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp97[0U]
                                        : ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp98[0U]
                                            : ((0x37U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp100[0U]
                                                : __Vtemp101[0U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp95[1U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? __Vtemp96[1U]
                                    : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp97[1U]
                                        : ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp98[1U]
                                            : ((0x37U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp100[1U]
                                                : __Vtemp101[1U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp95[2U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                    ? __Vtemp96[2U]
                                    : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? __Vtemp97[2U]
                                        : ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? __Vtemp98[2U]
                                            : ((0x37U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? __Vtemp100[2U]
                                                : __Vtemp101[2U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = (0x7fffffffU & ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                               ? __Vtemp95[3U] : ((0x3fU 
                                                   == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                   ? 
                                                  __Vtemp96[3U]
                                                   : 
                                                  ((0x38U 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? 
                                                   __Vtemp97[3U]
                                                    : 
                                                   ((0x39U 
                                                     == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                     ? 
                                                    __Vtemp98[3U]
                                                     : 
                                                    ((0x37U 
                                                      == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                      ? 
                                                     __Vtemp100[3U]
                                                      : 
                                                     __Vtemp101[3U]))))));
    }
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
    vlSelf->top__DOT__i_cache_io_to_axi_arvalid = (
                                                   (1U 
                                                    != (IData)(vlSelf->top__DOT__i_cache__DOT__state)) 
                                                   & (2U 
                                                      == (IData)(vlSelf->top__DOT__i_cache__DOT__state)));
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
        vlSelf->top__DOT__i_cache__DOT___GEN_28 = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num)));
        vlSelf->top__DOT__i_cache__DOT___GEN_29 = ((IData)(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast)
                                                    ? 3U
                                                    : (IData)(vlSelf->top__DOT__i_cache__DOT__state));
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
        vlSelf->top__DOT__i_cache__DOT___GEN_28 = (7U 
                                                   & (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num));
        vlSelf->top__DOT__i_cache__DOT___GEN_29 = vlSelf->top__DOT__i_cache__DOT__state;
        vlSelf->top__DOT__i_cache__DOT___GEN_26 = vlSelf->top__DOT__i_cache__DOT__receive_data_0;
        vlSelf->top__DOT__i_cache__DOT___GEN_27 = vlSelf->top__DOT__i_cache__DOT__receive_data_1;
    }
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
                                         : vlSelf->top__DOT__IDU__DOT__rdata1);
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
    top__DOT__IDU__DOT___br_target_T_1 = (vlSelf->top__DOT__IDU__DOT__src1 
                                          + ((IData)(vlSelf->top__DOT__IDU__DOT__src2_is_imm)
                                              ? vlSelf->top__DOT__IDU__DOT__imm
                                              : vlSelf->top__DOT__IDU__DOT__rdata2));
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
