// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);
void Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &Regfile);
void Vtop___024unit____Vdpiimwrap_set_csr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 4> &Regfile);
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_136;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_147;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_158;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_169;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_type_T_180;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_now_T_140;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_now_T_151;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_now_T_162;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_now_T_173;
    CData/*6:0*/ top__DOT__idu_step__DOT___inst_now_T_184;
    CData/*0:0*/ top__DOT__exu_step__DOT___io_res2rd_T_4;
    CData/*0:0*/ top__DOT__exu_step__DOT___io_res2rd_T_10;
    CData/*0:0*/ __Vdly__top__DOT__axi_pc_valid;
    CData/*0:0*/ __Vdly__top__DOT__ifu_step__DOT__axi__DOT__state;
    CData/*0:0*/ __Vdly__top__DOT__idu_step__DOT__axi_inst_ready;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__exu_step__DOT__Regfile__v0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__exu_step__DOT__CSR_Reg__v2;
    VlWide<4>/*126:0*/ top__DOT__exu_step__DOT___io_res2rd_T_186;
    VlWide<4>/*127:0*/ __Vtemp86;
    VlWide<4>/*127:0*/ __Vtemp87;
    VlWide<3>/*95:0*/ __Vtemp91;
    VlWide<3>/*95:0*/ __Vtemp92;
    VlWide<3>/*95:0*/ __Vtemp94;
    VlWide<3>/*95:0*/ __Vtemp95;
    VlWide<3>/*95:0*/ __Vtemp96;
    VlWide<3>/*95:0*/ __Vtemp97;
    VlWide<4>/*127:0*/ __Vtemp98;
    VlWide<4>/*127:0*/ __Vtemp99;
    VlWide<4>/*127:0*/ __Vtemp100;
    VlWide<4>/*127:0*/ __Vtemp101;
    VlWide<4>/*127:0*/ __Vtemp102;
    VlWide<4>/*127:0*/ __Vtemp103;
    VlWide<4>/*127:0*/ __Vtemp104;
    VlWide<4>/*127:0*/ __Vtemp105;
    VlWide<4>/*127:0*/ __Vtemp106;
    VlWide<4>/*127:0*/ __Vtemp107;
    VlWide<4>/*127:0*/ __Vtemp108;
    VlWide<4>/*127:0*/ __Vtemp109;
    VlWide<4>/*127:0*/ __Vtemp110;
    VlWide<4>/*127:0*/ __Vtemp111;
    VlWide<4>/*127:0*/ __Vtemp112;
    VlWide<4>/*127:0*/ __Vtemp137;
    VlWide<4>/*127:0*/ __Vtemp138;
    VlWide<4>/*127:0*/ __Vtemp139;
    VlWide<4>/*127:0*/ __Vtemp140;
    VlWide<4>/*127:0*/ __Vtemp141;
    VlWide<4>/*127:0*/ __Vtemp142;
    VlWide<4>/*127:0*/ __Vtemp143;
    VlWide<4>/*127:0*/ __Vtemp144;
    VlWide<4>/*127:0*/ __Vtemp145;
    VlWide<4>/*127:0*/ __Vtemp146;
    QData/*63:0*/ top__DOT__exu_step__DOT___src1_value_T_1;
    QData/*63:0*/ top__DOT__exu_step__DOT___src2_value_T_1;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_44;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_59;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_69;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_74;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_132;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_162;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_pc_next_T_56;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_pc_next_T_62;
    QData/*63:0*/ __Vdlyvval__top__DOT__exu_step__DOT__Regfile__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__exu_step__DOT__CSR_Reg__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__exu_step__DOT__CSR_Reg__v1;
    QData/*63:0*/ __Vdlyvval__top__DOT__exu_step__DOT__CSR_Reg__v2;
    // Body
    __Vdly__top__DOT__ifu_step__DOT__axi__DOT__state 
        = vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state;
    __Vdly__top__DOT__idu_step__DOT__axi_inst_ready 
        = vlSelf->top__DOT__idu_step__DOT__axi_inst_ready;
    __Vdly__top__DOT__axi_pc_valid = vlSelf->top__DOT__axi_pc_valid;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"%x %x %x\n",32,(IData)(vlSelf->top__DOT__pc_now),
                   64,vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata,
                   64,vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata);
    }
    __Vdly__top__DOT__idu_step__DOT__axi_inst_ready 
        = (1U & ((~ (IData)(vlSelf->reset)) & (~ ((IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rvalid) 
                                                  & (IData)(vlSelf->top__DOT__idu_step__DOT__axi_inst_ready)))));
    __Vdly__top__DOT__axi_pc_valid = (1U & ((~ (IData)(vlSelf->reset)) 
                                            & (~ ((IData)(vlSelf->top__DOT__axi_pc_valid) 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready)))));
    __Vdlyvval__top__DOT__exu_step__DOT__CSR_Reg__v0 
        = vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_1_data;
    __Vdlyvval__top__DOT__exu_step__DOT__CSR_Reg__v1 
        = vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_3_data;
    __Vdlyvval__top__DOT__exu_step__DOT__CSR_Reg__v2 
        = vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_6_data;
    __Vdlyvdim0__top__DOT__exu_step__DOT__CSR_Reg__v2 
        = ((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
            ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5));
    __Vdlyvval__top__DOT__exu_step__DOT__Regfile__v0 
        = vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data;
    __Vdlyvdim0__top__DOT__exu_step__DOT__Regfile__v0 
        = (0x1fU & (IData)((vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                            >> 7U)));
    vlSelf->top__DOT__exu_step__DOT__CSR_Reg[1U] = __Vdlyvval__top__DOT__exu_step__DOT__CSR_Reg__v0;
    vlSelf->top__DOT__exu_step__DOT__CSR_Reg[3U] = __Vdlyvval__top__DOT__exu_step__DOT__CSR_Reg__v1;
    vlSelf->top__DOT__exu_step__DOT__CSR_Reg[__Vdlyvdim0__top__DOT__exu_step__DOT__CSR_Reg__v2] 
        = __Vdlyvval__top__DOT__exu_step__DOT__CSR_Reg__v2;
    vlSelf->top__DOT__exu_step__DOT__Regfile[__Vdlyvdim0__top__DOT__exu_step__DOT__Regfile__v0] 
        = __Vdlyvval__top__DOT__exu_step__DOT__Regfile__v0;
    if (vlSelf->reset) {
        vlSelf->top__DOT__pc_now = 0x80000000ULL;
    } else if (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready) {
        vlSelf->top__DOT__pc_now = vlSelf->top__DOT__exu_step_io_pc_next;
    }
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[0U] 
        = vlSelf->top__DOT__exu_step__DOT__CSR_Reg[0U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[1U] 
        = vlSelf->top__DOT__exu_step__DOT__CSR_Reg[1U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[2U] 
        = vlSelf->top__DOT__exu_step__DOT__CSR_Reg[2U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[1U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[2U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[3U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[4U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[5U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[6U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[7U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[8U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[9U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0xaU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0xaU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0xbU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0xbU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0xcU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0xcU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0xdU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0xdU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0xeU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0xeU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0xfU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0xfU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x10U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x10U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x11U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x11U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x12U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x12U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x13U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x13U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x14U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x14U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x15U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x15U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x16U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x16U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x17U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x17U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x18U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x18U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x19U] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x19U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x1aU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x1aU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x1bU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x1bU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x1cU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x1cU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x1dU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x1dU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x1eU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x1eU];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0x1fU] 
        = vlSelf->top__DOT__exu_step__DOT__Regfile[0x1fU];
    if (vlSelf->reset) {
        vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready = 0U;
    } else if (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state) {
        if (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state) {
            vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready 
                = vlSelf->top__DOT__ifu_step__DOT__axi__DOT___GEN_4;
        }
    } else if (vlSelf->top__DOT__axi_pc_valid) {
        vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rvalid = 0U;
    } else if (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state) {
        if (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state) {
            if (vlSelf->top__DOT__idu_step__DOT__axi_inst_ready) {
                vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rvalid = 0U;
            }
        }
    } else {
        vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rvalid 
            = vlSelf->top__DOT__ifu_step__DOT__axi__DOT___GEN_2;
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__ifu_step__DOT__axi__DOT__state = 0U;
    } else if (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state) {
        if (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state) {
            if (vlSelf->top__DOT__idu_step__DOT__axi_inst_ready) {
                __Vdly__top__DOT__ifu_step__DOT__axi__DOT__state = 0U;
            }
        }
    } else {
        __Vdly__top__DOT__ifu_step__DOT__axi__DOT__state 
            = vlSelf->top__DOT__ifu_step__DOT__axi__DOT___GEN_0;
    }
    Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(vlSelf->top__DOT__pc_now);
    Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs);
    Vtop___024unit____Vdpiimwrap_set_csr_ptr__Vdpioc2_TOP____024unit(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs);
    vlSelf->io_pc = vlSelf->top__DOT__pc_now;
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit((QData)((IData)(vlSelf->top__DOT__pc_now)), vlSelf->__Vtask_pmem_read__0__Rdata);
    vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
        = vlSelf->__Vtask_pmem_read__0__Rdata;
    vlSelf->top__DOT__idu_step__DOT__axi_inst_ready 
        = __Vdly__top__DOT__idu_step__DOT__axi_inst_ready;
    vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state 
        = __Vdly__top__DOT__ifu_step__DOT__axi__DOT__state;
    vlSelf->top__DOT__axi_pc_valid = __Vdly__top__DOT__axi_pc_valid;
    vlSelf->io_inst = (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata);
    vlSelf->top__DOT__idu_step__DOT___reg_write_T_37 
        = ((0x3023U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
           & ((0x1023U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
              & ((0x23U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                 & ((0x2023U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                    & ((0x1063U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                       & ((0x63U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                          & ((0x5063U != (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                             & ((0x4063U != (0x707fU 
                                             & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                                & ((0x6063U != (0x707fU 
                                                & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                                   & ((0x7063U != (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                                      & ((0x73U != (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)) 
                                         & (0x30200073U 
                                            != (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))))))))))));
    top__DOT__exu_step__DOT___src2_value_T_1 = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                             >> 0x14U))))
                                                 ? 0ULL
                                                 : 
                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                [(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                             >> 0x14U)))]);
    vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc 
        = ((0x6fU == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
           | ((0x17U == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
              | ((0x1063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                 | ((0x63U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                    | ((0x5063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                       | ((0x4063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                          | ((0x6063U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                             | (0x7063U == (0x707fU 
                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))))))))));
    top__DOT__exu_step__DOT___src1_value_T_1 = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                             >> 0xfU))))
                                                 ? 0ULL
                                                 : 
                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                [(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                             >> 0xfU)))]);
    top__DOT__idu_step__DOT___inst_now_T_140 = ((0x5033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                 ? 0x38U
                                                 : 
                                                ((0x40005033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                  ? 0x39U
                                                  : 
                                                 ((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                   ? 0x36U
                                                   : 
                                                  ((0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                    ? 0x3aU
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                     ? 0x3bU
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                      ? 0x3cU
                                                      : 
                                                     ((0x73U 
                                                       == (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))
                                                       ? 0x3dU
                                                       : 
                                                      ((0x30200073U 
                                                        == (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))
                                                        ? 0x3eU
                                                        : 
                                                       ((0x1073U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                         ? 0x3fU
                                                         : 
                                                        ((0x2073U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                          ? 0x46U
                                                          : 
                                                         ((0x3073U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                           ? 0x47U
                                                           : 0U)))))))))));
    top__DOT__idu_step__DOT___inst_type_T_136 = ((0x1033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                  ? 0x41U
                                                  : 
                                                 ((0x5033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                   ? 0x41U
                                                   : 
                                                  ((0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                    ? 0x41U
                                                    : 
                                                   ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                     ? 0x40U
                                                     : 
                                                    ((0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                      ? 0x40U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                       ? 0x40U
                                                       : 
                                                      ((0x7063U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                        ? 0x45U
                                                        : 
                                                       ((0x73U 
                                                         == (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))
                                                         ? 0x40U
                                                         : 
                                                        ((0x1073U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                          ? 0x40U
                                                          : 
                                                         ((0x2073U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                           ? 0x40U
                                                           : 
                                                          ((0x3073U 
                                                            == 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                            ? 0x40U
                                                            : 0U)))))))))));
    vlSelf->top__DOT__ifu_step__DOT__axi__DOT___GEN_4 
        = ((IData)(vlSelf->top__DOT__idu_step__DOT__axi_inst_ready) 
           | (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready));
    vlSelf->top__DOT__ifu_step__DOT__axi__DOT___GEN_0 
        = ((IData)(vlSelf->top__DOT__axi_pc_valid) 
           | (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state));
    vlSelf->top__DOT__ifu_step__DOT__axi__DOT___GEN_2 
        = ((IData)(vlSelf->top__DOT__axi_pc_valid) 
           | (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rvalid));
    vlSelf->top__DOT__exu_step__DOT__src1_value = ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc)
                                                    ? vlSelf->top__DOT__pc_now
                                                    : top__DOT__exu_step__DOT___src1_value_T_1);
    top__DOT__idu_step__DOT___inst_now_T_151 = ((0x200403bU 
                                                 == 
                                                 (0xfe00707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                 ? 0x13U
                                                 : 
                                                ((0x200603bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                  ? 0x14U
                                                  : 
                                                 ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                   ? 0x2eU
                                                   : 
                                                  ((0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                    ? 0x2fU
                                                    : 
                                                   ((0x2005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                     ? 0x30U
                                                     : 
                                                    ((0x2004033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                      ? 0x31U
                                                      : 
                                                     ((0x200503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                       ? 0x35U
                                                       : 
                                                      ((0x200703bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                        ? 0x32U
                                                        : 
                                                       ((0x2007033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                         ? 0x33U
                                                         : 
                                                        ((0x2006033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                          ? 0x34U
                                                          : 
                                                         ((0x1033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                           ? 0x37U
                                                           : (IData)(top__DOT__idu_step__DOT___inst_now_T_140))))))))))));
    top__DOT__idu_step__DOT___inst_type_T_147 = ((0x200003bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                  ? 0x41U
                                                  : 
                                                 ((0x200403bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                   ? 0x41U
                                                   : 
                                                  ((0x200603bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                    ? 0x41U
                                                    : 
                                                   ((0x4033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                     ? 0x41U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                      ? 0x40U
                                                      : 
                                                     ((0x2005033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                       ? 0x41U
                                                       : 
                                                      ((0x2004033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                        ? 0x41U
                                                        : 
                                                       ((0x200503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                         ? 0x41U
                                                         : 
                                                        ((0x200703bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                          ? 0x41U
                                                          : 
                                                         ((0x2007033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                           ? 0x41U
                                                           : 
                                                          ((0x2006033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                            ? 0x41U
                                                            : (IData)(top__DOT__idu_step__DOT___inst_type_T_136))))))))))));
    top__DOT__idu_step__DOT___inst_now_T_162 = ((0x503bU 
                                                 == 
                                                 (0xfe00707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                 ? 0x1dU
                                                 : 
                                                ((0x3033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                  ? 0x1eU
                                                  : 
                                                 ((0x2033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                   ? 0x1fU
                                                   : 
                                                  ((0x5063U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                    ? 0x2bU
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                     ? 0x2cU
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                      ? 0x2dU
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                       ? 0x27U
                                                       : 
                                                      ((0x1003U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                        ? 0x24U
                                                        : 
                                                       ((0x5003U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                         ? 0x25U
                                                         : 
                                                        ((0x2000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                          ? 0x11U
                                                          : 
                                                         ((0x200003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                           ? 0x12U
                                                           : (IData)(top__DOT__idu_step__DOT___inst_now_T_151))))))))))));
    top__DOT__idu_step__DOT___inst_type_T_158 = ((0x4000503bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                  ? 0x41U
                                                  : 
                                                 ((0x503bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                   ? 0x41U
                                                   : 
                                                  ((0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                    ? 0x41U
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                     ? 0x41U
                                                     : 
                                                    ((0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                      ? 0x45U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                       ? 0x45U
                                                       : 
                                                      ((0x6063U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                        ? 0x45U
                                                        : 
                                                       ((0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                         ? 0x44U
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                          ? 0x40U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                           ? 0x40U
                                                           : 
                                                          ((0x2000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                            ? 0x41U
                                                            : (IData)(top__DOT__idu_step__DOT___inst_type_T_147))))))))))));
    top__DOT__idu_step__DOT___inst_now_T_173 = ((0x4013U 
                                                 == 
                                                 (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                 ? 0xaU
                                                 : 
                                                ((0x7033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                  ? 8U
                                                  : 
                                                 ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                   ? 9U
                                                   : 
                                                  ((0x4000003bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                    ? 0xdU
                                                    : 
                                                   ((0x103bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                     ? 0x16U
                                                     : 
                                                    ((0x1013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                      ? 0x17U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                       ? 0x18U
                                                       : 
                                                      ((0x101bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                        ? 0x19U
                                                        : 
                                                       ((0x4000501bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                         ? 0x1aU
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                          ? 0x1bU
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                           ? 0x1cU
                                                           : (IData)(top__DOT__idu_step__DOT___inst_now_T_162))))))))))));
    top__DOT__idu_step__DOT___inst_type_T_169 = ((0x6033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                  ? 0x41U
                                                  : 
                                                 ((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                   ? 0x40U
                                                   : 
                                                  ((0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                    ? 0x41U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                     ? 0x40U
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                      ? 0x41U
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                       ? 0x41U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                        ? 0x40U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                         ? 0x40U
                                                         : 
                                                        ((0x101bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                          ? 0x40U
                                                          : 
                                                         ((0x4000501bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                           ? 0x40U
                                                           : 
                                                          ((0x501bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                            ? 0x40U
                                                            : (IData)(top__DOT__idu_step__DOT___inst_type_T_158))))))))))));
    top__DOT__idu_step__DOT___inst_now_T_184 = ((0x40000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                 ? 0xeU
                                                 : 
                                                ((0x1063U 
                                                  == 
                                                  (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                  ? 0x2aU
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                   ? 0x29U
                                                   : 
                                                  ((0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                    ? 0x22U
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                     ? 0x10U
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                      ? 0xfU
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                       ? 0x15U
                                                       : 
                                                      ((0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                        ? 0x23U
                                                        : 
                                                       ((0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                         ? 0x26U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                          ? 0x28U
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                           ? 0xbU
                                                           : (IData)(top__DOT__idu_step__DOT___inst_now_T_173))))))))))));
    top__DOT__idu_step__DOT___inst_type_T_180 = ((0x3bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                  ? 0x41U
                                                  : 
                                                 ((0x40000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                   ? 0x41U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                    ? 0x45U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                     ? 0x45U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                      ? 0x40U
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                       ? 0x40U
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                        ? 0x41U
                                                        : 
                                                       ((0x40005013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                         ? 0x40U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                          ? 0x40U
                                                          : 
                                                         ((0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                           ? 0x44U
                                                           : 
                                                          ((0x23U 
                                                            == 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                            ? 0x44U
                                                            : (IData)(top__DOT__idu_step__DOT___inst_type_T_169))))))))))));
    if ((0x13U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))) {
        vlSelf->top__DOT__idu_step__DOT___inst_now_T_194 = 1U;
        vlSelf->top__DOT__idu_step__DOT___inst_type_T_188 = 0x40U;
    } else {
        vlSelf->top__DOT__idu_step__DOT___inst_now_T_194 
            = ((0x100073U == (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))
                ? 2U : ((0x17U == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                         ? 3U : ((0x37U == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                  ? 4U : ((0x6fU == 
                                           (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                           ? 5U : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                    ? 6U
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                     ? 7U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                      ? 0x20U
                                                      : 
                                                     ((0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                       ? 0x21U
                                                       : 
                                                      ((0x3bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                        ? 0xcU
                                                        : (IData)(top__DOT__idu_step__DOT___inst_now_T_184))))))))));
        vlSelf->top__DOT__idu_step__DOT___inst_type_T_188 
            = ((0x17U == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                ? 0x42U : ((0x37U == (0x7fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                            ? 0x42U : ((0x6fU == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                        ? 0x43U : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                    ? 0x40U
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                     ? 0x44U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                      ? 0x40U
                                                      : 
                                                     ((0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                       ? 0x40U
                                                       : (IData)(top__DOT__idu_step__DOT___inst_type_T_180))))))));
    }
    Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(
                                                              (2U 
                                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194)));
    Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit(
                                                             (0x3dU 
                                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194)));
    if ((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))) {
        vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_1_data 
            = vlSelf->top__DOT__pc_now;
        vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_3_data 
            = vlSelf->top__DOT__exu_step__DOT__Regfile
            [0x11U];
    } else {
        vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_1_data 
            = vlSelf->top__DOT__exu_step__DOT__CSR_Reg
            [1U];
        vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_3_data 
            = vlSelf->top__DOT__exu_step__DOT__CSR_Reg
            [3U];
    }
    vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm 
        = ((0x45U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188)) 
           | ((0x43U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188)) 
              | ((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188)) 
                 | ((0x42U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188)) 
                    | (0x40U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))))));
    vlSelf->top__DOT__idu_step_io_imm = ((0x45U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))
                                          ? ((((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                           >> 0x1fU)))
                                                ? 0x7ffffffffffffULL
                                                : 0ULL) 
                                              << 0xdU) 
                                             | (QData)((IData)(
                                                               ((0x1000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                             >> 0x1fU)) 
                                                                    << 0xcU)) 
                                                                | ((0x800U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 7U)) 
                                                                       << 0xbU)) 
                                                                   | ((0x7e0U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x19U)) 
                                                                          << 5U)) 
                                                                      | (0x1eU 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 8U)) 
                                                                            << 1U))))))))
                                          : ((0x44U 
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))
                                              ? (((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                               >> 0x1fU)))
                                                    ? 0xfffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x19U)) 
                                                                        << 5U)) 
                                                                    | (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 7U)))))))
                                              : ((0x42U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x1fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((IData)(
                                                                             (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                              >> 0xcU)) 
                                                                     << 0xcU))))
                                                  : 
                                                 ((0x43U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))
                                                   ? 
                                                  ((((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                 >> 0x1fU)))
                                                      ? 0x7ffffffffffULL
                                                      : 0ULL) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x1fU)) 
                                                                          << 0x14U)) 
                                                                      | ((0xff000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0xcU)) 
                                                                             << 0xcU)) 
                                                                         | ((0x800U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                            | (0x7feU 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x15U)) 
                                                                                << 1U))))))))
                                                   : 
                                                  ((0x40U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                  >> 0x1fU)))
                                                       ? 0xfffffffffffffULL
                                                       : 0ULL) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))))
                                                    : 0ULL)))));
    vlSelf->top__DOT__exu_step__DOT___csr_index_T_5 
        = ((0x300U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
            ? 2U : (0x341U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm))));
    vlSelf->top__DOT__exu_step__DOT__src2_value = ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm)
                                                    ? vlSelf->top__DOT__idu_step_io_imm
                                                    : top__DOT__exu_step__DOT___src2_value_T_1);
    vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_6_data 
        = (((0x1073U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
            | ((0x2073U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
               | (0x3073U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))))
            ? ((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                   & (~ vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                      [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                         ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]))
                : ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                    ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                       | vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                       [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                          ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])
                    : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                        ? vlSelf->top__DOT__exu_step__DOT__src1_value
                        : 0ULL))) : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
           [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
              ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    vlSelf->top__DOT__exu_step__DOT__divuw_res = VL_DIV_III(32, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value));
    vlSelf->top__DOT__exu_step__DOT__remw_res = VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value));
    vlSelf->top__DOT__exu_step__DOT__remuw_res = VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value));
    vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2 
        = ((QData)((IData)(vlSelf->top__DOT__exu_step__DOT__src1_value)) 
           * (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    vlSelf->top__DOT__exu_step__DOT___divw_res_T_4 
        = (0x1ffffffffULL & VL_DIVS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,32, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value))), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,32, (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))));
    top__DOT__exu_step__DOT___io_res2rd_T_69 = (((QData)((IData)(
                                                                 ((VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))) 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))))));
    vlSelf->top__DOT__exu_step__DOT__srl_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp86, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp87, __Vtemp86, 
                  (0x3fU & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    vlSelf->top__DOT__exu_step__DOT__sll_res[0U] = 
        __Vtemp87[0U];
    vlSelf->top__DOT__exu_step__DOT__sll_res[1U] = 
        __Vtemp87[1U];
    vlSelf->top__DOT__exu_step__DOT__sll_res[2U] = 
        __Vtemp87[2U];
    vlSelf->top__DOT__exu_step__DOT__sll_res[3U] = 
        (0x7fffffffU & __Vtemp87[3U]);
    vlSelf->top__DOT__exu_step__DOT__srlw_res = ((IData)(vlSelf->top__DOT__exu_step__DOT__src1_value) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    vlSelf->top__DOT__exu_step__DOT__sub_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                - vlSelf->top__DOT__exu_step__DOT__src2_value);
    vlSelf->top__DOT__exu_step__DOT__or_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                               | vlSelf->top__DOT__exu_step__DOT__src2_value);
    vlSelf->top__DOT__exu_step__DOT__xor_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                ^ vlSelf->top__DOT__exu_step__DOT__src2_value);
    vlSelf->top__DOT__exu_step__DOT__and_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                & vlSelf->top__DOT__exu_step__DOT__src2_value);
    vlSelf->top__DOT__exu_step__DOT__sra_res = VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exu_step__DOT__src1_value, 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    top__DOT__exu_step__DOT___io_res2rd_T_4 = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                               < vlSelf->top__DOT__exu_step__DOT__src2_value);
    top__DOT__exu_step__DOT___io_res2rd_T_10 = VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value);
    vlSelf->top__DOT__exu_step__DOT__sllw_res = (0x7fffffffffffffffULL 
                                                 & ((QData)((IData)(vlSelf->top__DOT__exu_step__DOT__src1_value)) 
                                                    << 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value))));
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                          (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                           + vlSelf->top__DOT__exu_step__DOT__src2_value), vlSelf->__Vtask_pmem_read__1__Rdata);
    vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata 
        = vlSelf->__Vtask_pmem_read__1__Rdata;
    if ((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                               (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                                + vlSelf->top__DOT__exu_step__DOT__src2_value), 
                                                               ((0x27U 
                                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                                 ? (QData)((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U)))])))
                                                                 : 
                                                                ((0x28U 
                                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                                  ? (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U)))])))))
                                                                  : 
                                                                 ((0x26U 
                                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                                   ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U)))])))))
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                                    ? 
                                                                   ((0U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U))))
                                                                     ? 0ULL
                                                                     : 
                                                                    vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                    [
                                                                    (0x1fU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                                >> 0x14U)))])
                                                                    : 0ULL)))), 
                                                               ((0x3023U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                                 ? 0xffU
                                                                 : 
                                                                ((0x1023U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                                  ? 3U
                                                                  : 
                                                                 ((0x23U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                                   ? 1U
                                                                   : 
                                                                  ((0x2023U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))
                                                                    ? 0xfU
                                                                    : 0U)))));
    }
    vlSelf->top__DOT__exu_step__DOT__add_res = (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                + vlSelf->top__DOT__exu_step__DOT__src2_value);
    top__DOT__exu_step__DOT___io_res2rd_T_74 = (((QData)((IData)(
                                                                 ((vlSelf->top__DOT__exu_step__DOT__srlw_res 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__srlw_res)));
    top__DOT__exu_step__DOT___io_res2rd_T_59 = (((QData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu_step__DOT__sllw_res 
                                                                              >> 0x1fU)))
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__sllw_res)));
    top__DOT__exu_step__DOT___io_pc_next_T_56 = ((0x2bU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 (VL_GTES_IQQ(1,64,64, 
                                                              ((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                            >> 0xfU))))
                                                                ? 0ULL
                                                                : 
                                                               vlSelf->top__DOT__exu_step__DOT__Regfile
                                                               [
                                                               (0x1fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                           >> 0xfU)))]), 
                                                              ((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                            >> 0x14U))))
                                                                ? 0ULL
                                                                : 
                                                               vlSelf->top__DOT__exu_step__DOT__Regfile
                                                               [
                                                               (0x1fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                           >> 0x14U)))]))
                                                   ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->top__DOT__pc_now))
                                                  : 
                                                 ((0x29U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  ((((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                  >> 0xfU))))
                                                      ? 0ULL
                                                      : 
                                                     vlSelf->top__DOT__exu_step__DOT__Regfile
                                                     [
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                 >> 0xfU)))]) 
                                                    == 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                  >> 0x14U))))
                                                      ? 0ULL
                                                      : 
                                                     vlSelf->top__DOT__exu_step__DOT__Regfile
                                                     [
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                 >> 0x14U)))]))
                                                    ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->top__DOT__pc_now))
                                                   : 
                                                  ((0x2aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   ((((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                   >> 0xfU))))
                                                       ? 0ULL
                                                       : 
                                                      vlSelf->top__DOT__exu_step__DOT__Regfile
                                                      [
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                  >> 0xfU)))]) 
                                                     != 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                   >> 0x14U))))
                                                       ? 0ULL
                                                       : 
                                                      vlSelf->top__DOT__exu_step__DOT__Regfile
                                                      [
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                  >> 0x14U)))]))
                                                     ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->top__DOT__pc_now))
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    (0xfffffffffffffffeULL 
                                                     & vlSelf->top__DOT__exu_step__DOT__add_res)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                      : 
                                                     (4ULL 
                                                      + vlSelf->top__DOT__pc_now))))));
    top__DOT__exu_step__DOT___io_res2rd_T_44 = (((QData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                              >> 0x1fU)))
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__add_res)));
    top__DOT__exu_step__DOT___io_res2rd_T_132 = ((0x24U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 ((((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata 
                                                                >> 0xfU)))
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata)))))
                                                  : 
                                                 ((0x3aU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata))
                                                   : 
                                                  ((0x23U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata))))
                                                    : 
                                                   ((0x22U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata
                                                     : 
                                                    ((0x21U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata 
                                                                                >> 0x1fU)))
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata)))
                                                      : 
                                                     ((0x1fU 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? (QData)((IData)(top__DOT__exu_step__DOT___io_res2rd_T_10))
                                                       : 
                                                      ((0x36U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? (QData)((IData)(top__DOT__exu_step__DOT___io_res2rd_T_10))
                                                        : 
                                                       ((0x1eU 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? (QData)((IData)(top__DOT__exu_step__DOT___io_res2rd_T_4))
                                                         : 
                                                        ((0x20U 
                                                          == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                          ? (QData)((IData)(top__DOT__exu_step__DOT___io_res2rd_T_4))
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                           ? 
                                                          (4ULL 
                                                           + vlSelf->top__DOT__pc_now)
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                            ? 
                                                           (4ULL 
                                                            + vlSelf->top__DOT__pc_now)
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                             ? vlSelf->top__DOT__idu_step_io_imm
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                              ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                               ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                               : 0ULL))))))))))))));
    top__DOT__exu_step__DOT___io_pc_next_T_62 = ((0x3cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 ((((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                 >> 0xfU))))
                                                     ? 0ULL
                                                     : 
                                                    vlSelf->top__DOT__exu_step__DOT__Regfile
                                                    [
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                >> 0xfU)))]) 
                                                   >= 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                 >> 0x14U))))
                                                     ? 0ULL
                                                     : 
                                                    vlSelf->top__DOT__exu_step__DOT__Regfile
                                                    [
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                >> 0x14U)))]))
                                                   ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->top__DOT__pc_now))
                                                  : 
                                                 ((0x2dU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  ((((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                  >> 0xfU))))
                                                      ? 0ULL
                                                      : 
                                                     vlSelf->top__DOT__exu_step__DOT__Regfile
                                                     [
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                 >> 0xfU)))]) 
                                                    < 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                  >> 0x14U))))
                                                      ? 0ULL
                                                      : 
                                                     vlSelf->top__DOT__exu_step__DOT__Regfile
                                                     [
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                 >> 0x14U)))]))
                                                    ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->top__DOT__pc_now))
                                                   : 
                                                  ((0x2cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   (VL_LTS_IQQ(1,64,64, 
                                                               ((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                             >> 0xfU))))
                                                                 ? 0ULL
                                                                 : 
                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                [
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                            >> 0xfU)))]), 
                                                               ((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                             >> 0x14U))))
                                                                 ? 0ULL
                                                                 : 
                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                [
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                                                            >> 0x14U)))]))
                                                     ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->top__DOT__pc_now))
                                                    : top__DOT__exu_step__DOT___io_pc_next_T_56)));
    top__DOT__exu_step__DOT___io_res2rd_T_162 = ((0x16U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? top__DOT__exu_step__DOT___io_res2rd_T_59
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__exu_step__DOT__sub_res 
                                                                                >> 0x1fU)))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__sub_res)))
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? vlSelf->top__DOT__exu_step__DOT__and_res
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? vlSelf->top__DOT__exu_step__DOT__and_res
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? vlSelf->top__DOT__exu_step__DOT__xor_res
                                                      : 
                                                     ((0x2eU 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? vlSelf->top__DOT__exu_step__DOT__xor_res
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? vlSelf->top__DOT__exu_step__DOT__or_res
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? vlSelf->top__DOT__exu_step__DOT__or_res
                                                         : 
                                                        ((0x15U 
                                                          == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                          ? vlSelf->top__DOT__exu_step__DOT__sra_res
                                                          : 
                                                         ((0xfU 
                                                           == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                           ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                           : 
                                                          ((0x10U 
                                                            == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                            ? top__DOT__exu_step__DOT___io_res2rd_T_44
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                             ? vlSelf->top__DOT__exu_step__DOT__sub_res
                                                             : 
                                                            ((0xcU 
                                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                              ? top__DOT__exu_step__DOT___io_res2rd_T_44
                                                              : 
                                                             ((0x25U 
                                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                               ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata))))
                                                               : 
                                                              ((0x3bU 
                                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                                ? 
                                                               ((((1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata 
                                                                              >> 7U)))
                                                                   ? 0xffffffffffffffULL
                                                                   : 0ULL) 
                                                                 << 8U) 
                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata)))))
                                                                : top__DOT__exu_step__DOT___io_res2rd_T_132)))))))))))))));
    vlSelf->top__DOT__exu_step_io_pc_next = ((0x3eU 
                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                              ? (4ULL 
                                                 + 
                                                 vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                                 [1U])
                                              : ((0x3dU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                                 [0U]
                                                  : top__DOT__exu_step__DOT___io_pc_next_T_62));
    VL_EXTENDS_WQ(65,64, __Vtemp91, vlSelf->top__DOT__exu_step__DOT__src1_value);
    __Vtemp92[0U] = __Vtemp91[0U];
    __Vtemp92[1U] = __Vtemp91[1U];
    __Vtemp92[2U] = (1U & __Vtemp91[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp94, vlSelf->top__DOT__exu_step__DOT__src2_value);
    __Vtemp95[0U] = __Vtemp94[0U];
    __Vtemp95[1U] = __Vtemp94[1U];
    __Vtemp95[2U] = (1U & __Vtemp94[2U]);
    VL_DIVS_WWW(65, __Vtemp96, __Vtemp92, __Vtemp95);
    __Vtemp97[0U] = __Vtemp96[0U];
    __Vtemp97[1U] = __Vtemp96[1U];
    __Vtemp97[2U] = (1U & __Vtemp96[2U]);
    VL_EXTEND_WW(127,65, __Vtemp98, __Vtemp97);
    VL_EXTEND_WQ(127,64, __Vtemp99, VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp100, (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT___divw_res_T_4 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4))));
    VL_EXTEND_WQ(127,64, __Vtemp101, (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2))));
    VL_EXTEND_WQ(128,64, __Vtemp102, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_EXTEND_WQ(128,64, __Vtemp103, vlSelf->top__DOT__exu_step__DOT__src2_value);
    VL_MUL_W(4, __Vtemp104, __Vtemp102, __Vtemp103);
    VL_EXTEND_WQ(127,64, __Vtemp105, (((QData)((IData)(
                                                       __Vtemp104[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vtemp104[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp106, top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp107, top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp108, top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp109, top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp110, top__DOT__exu_step__DOT___io_res2rd_T_59);
    VL_EXTEND_WQ(127,64, __Vtemp111, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp112, top__DOT__exu_step__DOT___io_res2rd_T_162);
    if ((0x31U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))) {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = __Vtemp98[0U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = __Vtemp98[1U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = __Vtemp98[2U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = __Vtemp98[3U];
    } else {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp99[0U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp100[0U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp101[0U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp105[0U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? __Vtemp106[0U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp107[0U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp108[0U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp109[0U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp110[0U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp111[0U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                                         : 
                                                        __Vtemp112[0U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp99[1U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp100[1U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp101[1U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp105[1U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? __Vtemp106[1U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp107[1U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp108[1U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp109[1U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp110[1U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp111[1U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                                         : 
                                                        __Vtemp112[1U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp99[2U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp100[2U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp101[2U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp105[2U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? __Vtemp106[2U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp107[2U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp108[2U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp109[2U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp110[2U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp111[2U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                                         : 
                                                        __Vtemp112[2U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp99[3U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp100[3U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp101[3U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp105[3U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? __Vtemp106[3U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp107[3U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp108[3U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp109[3U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp110[3U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp111[3U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                                         : 
                                                        __Vtemp112[3U])))))))))));
    }
    vlSelf->io_pc_next = vlSelf->top__DOT__exu_step_io_pc_next;
    VL_EXTEND_WQ(127,64, __Vtemp137, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp138, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp139, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp140, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp141, vlSelf->top__DOT__exu_step__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp142, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp143, VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp144, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__remuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remuw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp145, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__remw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp146, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__divuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__divuw_res))));
    if ((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))) {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U] 
            = __Vtemp137[0U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U] 
            = __Vtemp137[1U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[2U] 
            = __Vtemp137[2U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[3U] 
            = __Vtemp137[3U];
    } else {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp138[0U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp139[0U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp140[0U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp141[0U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp142[0U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp143[0U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp144[0U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp145[0U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp146[0U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[0U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp138[1U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp139[1U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp140[1U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp141[1U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp142[1U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp143[1U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp144[1U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp145[1U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp146[1U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[1U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[2U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp138[2U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp139[2U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp140[2U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp141[2U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp142[2U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp143[2U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp144[2U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp145[2U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp146[2U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[2U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[3U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp138[3U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp139[3U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp140[3U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp141[3U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp142[3U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp143[3U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp144[3U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp145[3U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp146[3U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[3U]))))))))));
    }
    vlSelf->io_outval = (((QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])));
    vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data 
        = ((((0x100073U != (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)) 
             & (IData)(vlSelf->top__DOT__idu_step__DOT___reg_write_T_37)) 
            & (0U != (0x1fU & (IData)((vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                       >> 7U))))) ? 
           (((QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
             << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))
            : ((0U == (0x1fU & (IData)((vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                        >> 7U)))) ? 0ULL
                : vlSelf->top__DOT__exu_step__DOT__Regfile
               [(0x1fU & (IData)((vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                  >> 7U)))]));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
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
