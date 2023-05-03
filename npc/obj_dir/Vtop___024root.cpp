// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_684193e7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_271e1f4c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_8aad6a5f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_944bd75b_0;
void Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);
void Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &Regfile);
void Vtop___024unit____Vdpiimwrap_set_csr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 4> &Regfile);
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ top__DOT__exu_step__DOT___io_res2rd_T_4;
    CData/*0:0*/ top__DOT__exu_step__DOT___io_res2rd_T_10;
    CData/*6:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdly__top__DOT__idu_step__DOT__axi_inst_ready;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__exu_step__DOT__Regfile__v0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__exu_step__DOT__CSR_Reg__v2;
    VlWide<4>/*126:0*/ top__DOT__exu_step__DOT___io_res2rd_T_186;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<4>/*127:0*/ __Vtemp14;
    VlWide<4>/*127:0*/ __Vtemp15;
    VlWide<4>/*127:0*/ __Vtemp16;
    VlWide<4>/*127:0*/ __Vtemp17;
    VlWide<4>/*127:0*/ __Vtemp18;
    VlWide<4>/*127:0*/ __Vtemp19;
    VlWide<4>/*127:0*/ __Vtemp20;
    VlWide<4>/*127:0*/ __Vtemp21;
    VlWide<4>/*127:0*/ __Vtemp22;
    VlWide<4>/*127:0*/ __Vtemp23;
    VlWide<4>/*127:0*/ __Vtemp24;
    VlWide<4>/*127:0*/ __Vtemp25;
    VlWide<4>/*127:0*/ __Vtemp26;
    VlWide<4>/*127:0*/ __Vtemp27;
    VlWide<4>/*127:0*/ __Vtemp28;
    VlWide<4>/*127:0*/ __Vtemp53;
    VlWide<4>/*127:0*/ __Vtemp54;
    VlWide<4>/*127:0*/ __Vtemp55;
    VlWide<4>/*127:0*/ __Vtemp56;
    VlWide<4>/*127:0*/ __Vtemp57;
    VlWide<4>/*127:0*/ __Vtemp58;
    VlWide<4>/*127:0*/ __Vtemp59;
    VlWide<4>/*127:0*/ __Vtemp60;
    VlWide<4>/*127:0*/ __Vtemp61;
    VlWide<4>/*127:0*/ __Vtemp62;
    QData/*63:0*/ top__DOT__exu_step__DOT___src1_value_T_1;
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
    __Vdly__top__DOT__idu_step__DOT__axi_inst_ready 
        = vlSelf->top__DOT__idu_step__DOT__axi_inst_ready;
    __Vdly__top__DOT__idu_step__DOT__axi_inst_ready 
        = (1U & ((IData)(vlSelf->reset) | (~ ((IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rvalid) 
                                              & (IData)(vlSelf->top__DOT__idu_step__DOT__axi_inst_ready)))));
    __Vdlyvval__top__DOT__exu_step__DOT__CSR_Reg__v0 
        = vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_1_data;
    __Vdlyvval__top__DOT__exu_step__DOT__CSR_Reg__v1 
        = vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_3_data;
    __Vdlyvval__top__DOT__exu_step__DOT__CSR_Reg__v2 
        = vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_6_data;
    __Vdlyvdim0__top__DOT__exu_step__DOT__CSR_Reg__v2 
        = ((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
            ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5));
    if (vlSelf->reset) {
        vlSelf->top__DOT__pc_now = 0x80000000ULL;
    } else if (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready) {
        vlSelf->top__DOT__pc_now = vlSelf->top__DOT__exu_step_io_pc_next;
    }
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
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[0U] 
        = vlSelf->top__DOT__exu_step__DOT__CSR_Reg[0U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[1U] 
        = vlSelf->top__DOT__exu_step__DOT__CSR_Reg[1U];
    vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[2U] 
        = vlSelf->top__DOT__exu_step__DOT__CSR_Reg[2U];
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT___GEN_0) 
                     << 6U) | (((IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT___GEN_2) 
                                << 5U) | (((IData)(vlSelf->top__DOT__idu_step__DOT__axi_inst_ready) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT__axi_pc_valid) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT___GEN_4) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->reset)))))));
    if ((1U & Vtop__ConstPool__TABLE_684193e7_0[__Vtableidx1])) {
        vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready 
            = Vtop__ConstPool__TABLE_271e1f4c_0[__Vtableidx1];
    }
    if ((2U & Vtop__ConstPool__TABLE_684193e7_0[__Vtableidx1])) {
        vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rvalid 
            = Vtop__ConstPool__TABLE_8aad6a5f_0[__Vtableidx1];
    }
    if ((4U & Vtop__ConstPool__TABLE_684193e7_0[__Vtableidx1])) {
        vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state 
            = Vtop__ConstPool__TABLE_944bd75b_0[__Vtableidx1];
    }
    vlSelf->io_pc = vlSelf->top__DOT__pc_now;
    vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_1_data 
        = ((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
            ? vlSelf->top__DOT__pc_now : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
           [1U]);
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
    vlSelf->top__DOT__exu_step__DOT___src2_value_T_1 
        = ((0U == (0x1fU & (IData)((vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                                    >> 0x14U)))) ? 0ULL
            : vlSelf->top__DOT__exu_step__DOT__Regfile
           [(0x1fU & (IData)((vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata 
                              >> 0x14U)))]);
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
    vlSelf->top__DOT__exu_step__DOT__CSR_Reg_MPORT_3_data 
        = ((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
            ? vlSelf->top__DOT__exu_step__DOT__Regfile
           [0x11U] : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
           [3U]);
    vlSelf->top__DOT__idu_step__DOT__axi_inst_ready 
        = __Vdly__top__DOT__idu_step__DOT__axi_inst_ready;
    Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(vlSelf->top__DOT__pc_now);
    Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs);
    Vtop___024unit____Vdpiimwrap_set_csr_ptr__Vdpioc2_TOP____024unit(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs);
    vlSelf->top__DOT__exu_step__DOT__src2_value = ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm)
                                                    ? vlSelf->top__DOT__idu_step_io_imm
                                                    : vlSelf->top__DOT__exu_step__DOT___src2_value_T_1);
    vlSelf->top__DOT__exu_step__DOT__src1_value = ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc)
                                                    ? vlSelf->top__DOT__pc_now
                                                    : top__DOT__exu_step__DOT___src1_value_T_1);
    vlSelf->top__DOT__ifu_step__DOT__axi__DOT___GEN_4 
        = ((IData)(vlSelf->top__DOT__idu_step__DOT__axi_inst_ready) 
           | (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready));
    vlSelf->top__DOT__axi_pc_valid = (1U & (~ (IData)(vlSelf->reset)));
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
    VL_EXTEND_WQ(127,64, __Vtemp2, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp3, __Vtemp2, (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)));
    vlSelf->top__DOT__exu_step__DOT__sll_res[0U] = 
        __Vtemp3[0U];
    vlSelf->top__DOT__exu_step__DOT__sll_res[1U] = 
        __Vtemp3[1U];
    vlSelf->top__DOT__exu_step__DOT__sll_res[2U] = 
        __Vtemp3[2U];
    vlSelf->top__DOT__exu_step__DOT__sll_res[3U] = 
        (0x7fffffffU & __Vtemp3[3U]);
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
    if (((0x3003U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
         | ((0x2003U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
            | ((0x6003U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
               | ((0x1003U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                  | ((0x5003U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                     | ((3U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata))) 
                        | (0x4003U == (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__inst_read_Rdata)))))))))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                              (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                               + vlSelf->top__DOT__exu_step__DOT__src2_value), vlSelf->__Vtask_pmem_read__0__Rdata);
        vlSelf->top__DOT__exu_step__DOT__Mem_modle_Rdata 
            = vlSelf->__Vtask_pmem_read__0__Rdata;
    }
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
    vlSelf->top__DOT__ifu_step__DOT__axi__DOT___GEN_0 
        = ((IData)(vlSelf->top__DOT__axi_pc_valid) 
           | (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state));
    vlSelf->top__DOT__ifu_step__DOT__axi__DOT___GEN_2 
        = ((IData)(vlSelf->top__DOT__axi_pc_valid) 
           | (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rvalid));
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
    VL_EXTENDS_WQ(65,64, __Vtemp7, vlSelf->top__DOT__exu_step__DOT__src1_value);
    __Vtemp8[0U] = __Vtemp7[0U];
    __Vtemp8[1U] = __Vtemp7[1U];
    __Vtemp8[2U] = (1U & __Vtemp7[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp10, vlSelf->top__DOT__exu_step__DOT__src2_value);
    __Vtemp11[0U] = __Vtemp10[0U];
    __Vtemp11[1U] = __Vtemp10[1U];
    __Vtemp11[2U] = (1U & __Vtemp10[2U]);
    VL_DIVS_WWW(65, __Vtemp12, __Vtemp8, __Vtemp11);
    __Vtemp13[0U] = __Vtemp12[0U];
    __Vtemp13[1U] = __Vtemp12[1U];
    __Vtemp13[2U] = (1U & __Vtemp12[2U]);
    VL_EXTEND_WW(127,65, __Vtemp14, __Vtemp13);
    VL_EXTEND_WQ(127,64, __Vtemp15, VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp16, (((QData)((IData)(
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT___divw_res_T_4 
                                                                   >> 0x1fU)))
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4))));
    VL_EXTEND_WQ(127,64, __Vtemp17, (((QData)((IData)(
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2 
                                                                   >> 0x1fU)))
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2))));
    VL_EXTEND_WQ(128,64, __Vtemp18, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_EXTEND_WQ(128,64, __Vtemp19, vlSelf->top__DOT__exu_step__DOT__src2_value);
    VL_MUL_W(4, __Vtemp20, __Vtemp18, __Vtemp19);
    VL_EXTEND_WQ(127,64, __Vtemp21, (((QData)((IData)(
                                                      __Vtemp20[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp20[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp22, top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp23, top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp24, top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp25, top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp26, top__DOT__exu_step__DOT___io_res2rd_T_59);
    VL_EXTEND_WQ(127,64, __Vtemp27, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp28, top__DOT__exu_step__DOT___io_res2rd_T_162);
    if ((0x31U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))) {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = __Vtemp14[0U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = __Vtemp14[1U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = __Vtemp14[2U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = __Vtemp14[3U];
    } else {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp15[0U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp16[0U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp17[0U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp21[0U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? __Vtemp22[0U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp23[0U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp24[0U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp25[0U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp26[0U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp27[0U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                                         : 
                                                        __Vtemp28[0U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp15[1U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp16[1U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp17[1U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp21[1U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? __Vtemp22[1U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp23[1U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp24[1U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp25[1U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp26[1U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp27[1U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                                         : 
                                                        __Vtemp28[1U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp15[2U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp16[2U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp17[2U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp21[2U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? __Vtemp22[2U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp23[2U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp24[2U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp25[2U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp26[2U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp27[2U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                                         : 
                                                        __Vtemp28[2U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp15[3U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp16[3U]
                                    : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp17[3U]
                                        : ((0x11U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp21[3U]
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? __Vtemp22[3U]
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp23[3U]
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp24[3U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp25[3U]
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp26[3U]
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp27[3U]
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? 
                                                        vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                                         : 
                                                        __Vtemp28[3U])))))))))));
    }
    vlSelf->io_pc_next = vlSelf->top__DOT__exu_step_io_pc_next;
    VL_EXTEND_WQ(127,64, __Vtemp53, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp54, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp55, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp56, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp57, vlSelf->top__DOT__exu_step__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp58, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp59, VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp60, (((QData)((IData)(
                                                      ((vlSelf->top__DOT__exu_step__DOT__remuw_res 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remuw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp61, (((QData)((IData)(
                                                      ((vlSelf->top__DOT__exu_step__DOT__remw_res 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp62, (((QData)((IData)(
                                                      ((vlSelf->top__DOT__exu_step__DOT__divuw_res 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__divuw_res))));
    if ((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))) {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U] 
            = __Vtemp53[0U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U] 
            = __Vtemp53[1U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[2U] 
            = __Vtemp53[2U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[3U] 
            = __Vtemp53[3U];
    } else {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp54[0U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp55[0U]
                                    : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp56[0U]
                                        : ((0x39U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp57[0U]
                                            : ((0x37U 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                                : (
                                                   (0x34U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp58[0U]
                                                    : 
                                                   ((0x33U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp59[0U]
                                                     : 
                                                    ((0x32U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp60[0U]
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp61[0U]
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp62[0U]
                                                        : 
                                                       top__DOT__exu_step__DOT___io_res2rd_T_186[0U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp54[1U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp55[1U]
                                    : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp56[1U]
                                        : ((0x39U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp57[1U]
                                            : ((0x37U 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                                : (
                                                   (0x34U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp58[1U]
                                                    : 
                                                   ((0x33U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp59[1U]
                                                     : 
                                                    ((0x32U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp60[1U]
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp61[1U]
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp62[1U]
                                                        : 
                                                       top__DOT__exu_step__DOT___io_res2rd_T_186[1U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[2U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp54[2U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp55[2U]
                                    : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp56[2U]
                                        : ((0x39U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp57[2U]
                                            : ((0x37U 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                                : (
                                                   (0x34U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp58[2U]
                                                    : 
                                                   ((0x33U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp59[2U]
                                                     : 
                                                    ((0x32U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp60[2U]
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp61[2U]
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp62[2U]
                                                        : 
                                                       top__DOT__exu_step__DOT___io_res2rd_T_186[2U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[3U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp54[3U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                    ? __Vtemp55[3U]
                                    : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                        ? __Vtemp56[3U]
                                        : ((0x39U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                            ? __Vtemp57[3U]
                                            : ((0x37U 
                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                ? vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                                : (
                                                   (0x34U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp58[3U]
                                                    : 
                                                   ((0x33U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp59[3U]
                                                     : 
                                                    ((0x32U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp60[3U]
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      __Vtemp61[3U]
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? 
                                                       __Vtemp62[3U]
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
