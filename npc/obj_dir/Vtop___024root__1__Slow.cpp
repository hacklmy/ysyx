// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);
void Vtop___024unit____Vdpiimwrap_ebreak_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_ecall_handle_TOP____024unit(IData/*31:0*/ flag);
void Vtop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);

void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__5\n"); );
    // Variables
    CData/*0:0*/ top__DOT__IFU__DOT___T_1;
    CData/*6:0*/ top__DOT__IDU__DOT___inst_type_T_185;
    CData/*0:0*/ top__DOT__IDU__DOT___conflict_es_rs1_T_4;
    CData/*0:0*/ top__DOT__IDU__DOT___conflict_es_rs2_T_6;
    CData/*0:0*/ top__DOT__IDU__DOT___ds_ready_go_T_33;
    CData/*3:0*/ top__DOT__d_cache__DOT___GEN_274;
    VlWide<3>/*95:0*/ __Vtemp3388;
    VlWide<3>/*95:0*/ __Vtemp3391;
    VlWide<4>/*127:0*/ __Vtemp3786;
    VlWide<5>/*159:0*/ __Vtemp3949;
    VlWide<5>/*159:0*/ __Vtemp3952;
    VlWide<4>/*127:0*/ __Vtemp3956;
    VlWide<4>/*127:0*/ __Vtemp3957;
    VlWide<4>/*127:0*/ __Vtemp3961;
    VlWide<4>/*127:0*/ __Vtemp3965;
    VlWide<4>/*127:0*/ __Vtemp3966;
    VlWide<4>/*127:0*/ __Vtemp3967;
    VlWide<4>/*127:0*/ __Vtemp3968;
    VlWide<4>/*127:0*/ __Vtemp3969;
    VlWide<4>/*127:0*/ __Vtemp3970;
    VlWide<4>/*127:0*/ __Vtemp3971;
    VlWide<4>/*127:0*/ __Vtemp3972;
    QData/*63:0*/ top__DOT__IDU__DOT___rdata1_T_1;
    QData/*63:0*/ top__DOT__IDU__DOT___br_taken_T;
    QData/*63:0*/ top__DOT__IDU__DOT___br_taken_T_1;
    QData/*63:0*/ top__DOT__IDU__DOT___br_target_T_1;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_42;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_50;
    QData/*63:0*/ top__DOT__EXU__DOT__ALU__DOT___alu_res_T_98;
    // Body
    if ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__state))) {
        vlSelf->top__DOT__i_cache__DOT___GEN_2078 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_220)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_284)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_348)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_412)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_220)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_284)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_348)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_412))))))));
        vlSelf->top__DOT__i_cache__DOT___GEN_2079 = 
            ((1U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_221)
              : ((2U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_285)
                  : ((3U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_349)
                      : ((4U == (IData)(vlSelf->top__DOT__i_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_413)
                          : ((0U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                           >> 6U)))
                              ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_221)
                              : ((1U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                               >> 6U)))
                                  ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_285)
                                  : ((2U == (3U & ((IData)(vlSelf->top__DOT__i_cache__DOT___GEN_205) 
                                                   >> 6U)))
                                      ? (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_349)
                                      : (IData)(vlSelf->top__DOT__i_cache__DOT___GEN_413))))))));
    } else {
        vlSelf->top__DOT__i_cache__DOT___GEN_2078 = vlSelf->top__DOT__i_cache__DOT__quene_14;
        vlSelf->top__DOT__i_cache__DOT___GEN_2079 = vlSelf->top__DOT__i_cache__DOT__quene_15;
    }
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
        vlSelf->top__DOT__arbiter_io_axi_out_wvalid 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wvalid)
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                   & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wvalid)));
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast 
            = ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_awvalid)
                ? (IData)(vlSelf->top__DOT__axi_io_axi_out_rlast)
                : ((IData)(vlSelf->top__DOT__d_cache_io_to_axi_arvalid) 
                   & (IData)(vlSelf->top__DOT__axi_io_axi_out_rlast)));
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
        vlSelf->top__DOT__arbiter_io_axi_out_wvalid 
            = ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
               & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                   ? (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wvalid)
                   : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                      & (IData)(vlSelf->top__DOT__d_cache_io_to_axi_wvalid))));
        vlSelf->top__DOT__arbiter_io_lsu_axi_out_rlast 
            = ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
               & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                   ? (IData)(vlSelf->top__DOT__axi_io_axi_out_rlast)
                   : ((3U == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                      & (IData)(vlSelf->top__DOT__axi_io_axi_out_rlast))));
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
    VL_EXTEND_WQ(65,64, __Vtemp3388, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3);
    VL_EXTEND_WQ(65,64, __Vtemp3391, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_3);
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
                    : __Vtemp3388[0U]) : __Vtemp3391[0U]);
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
                                      << 1U))) : __Vtemp3388[1U])
                : __Vtemp3391[1U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_22[2U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? ((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                        ? ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU)
                        : ((IData)((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__quotient 
                                    >> 0x20U)) >> 0x1fU))
                    : __Vtemp3388[2U]) : __Vtemp3391[2U]);
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_69 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                                ? (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num)
                                                : 0U);
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_1652[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1652[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1652[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1652[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1653[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1653[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1653[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1653[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1668 = vlSelf->top__DOT__d_cache__DOT__tag_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1669 = vlSelf->top__DOT__d_cache__DOT__tag_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1670 = vlSelf->top__DOT__d_cache__DOT__tag_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1671 = vlSelf->top__DOT__d_cache__DOT__tag_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1672 = vlSelf->top__DOT__d_cache__DOT__tag_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1673 = vlSelf->top__DOT__d_cache__DOT__tag_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1674 = vlSelf->top__DOT__d_cache__DOT__tag_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1675 = vlSelf->top__DOT__d_cache__DOT__tag_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1676 = vlSelf->top__DOT__d_cache__DOT__tag_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1677 = vlSelf->top__DOT__d_cache__DOT__tag_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1678 = vlSelf->top__DOT__d_cache__DOT__tag_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1679 = vlSelf->top__DOT__d_cache__DOT__tag_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1680 = vlSelf->top__DOT__d_cache__DOT__tag_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1681 = vlSelf->top__DOT__d_cache__DOT__tag_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1682 = vlSelf->top__DOT__d_cache__DOT__tag_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1683 = vlSelf->top__DOT__d_cache__DOT__tag_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1684 = vlSelf->top__DOT__d_cache__DOT__valid_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1685 = vlSelf->top__DOT__d_cache__DOT__valid_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1686 = vlSelf->top__DOT__d_cache__DOT__valid_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1687 = vlSelf->top__DOT__d_cache__DOT__valid_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1688 = vlSelf->top__DOT__d_cache__DOT__valid_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1689 = vlSelf->top__DOT__d_cache__DOT__valid_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1690 = vlSelf->top__DOT__d_cache__DOT__valid_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1691 = vlSelf->top__DOT__d_cache__DOT__valid_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1692 = vlSelf->top__DOT__d_cache__DOT__valid_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1693 = vlSelf->top__DOT__d_cache__DOT__valid_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1694 = vlSelf->top__DOT__d_cache__DOT__valid_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1695 = vlSelf->top__DOT__d_cache__DOT__valid_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1696 = vlSelf->top__DOT__d_cache__DOT__valid_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1697 = vlSelf->top__DOT__d_cache__DOT__valid_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1698 = vlSelf->top__DOT__d_cache__DOT__valid_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1699 = vlSelf->top__DOT__d_cache__DOT__valid_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1732 = vlSelf->top__DOT__d_cache__DOT__tag_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1733 = vlSelf->top__DOT__d_cache__DOT__tag_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1734 = vlSelf->top__DOT__d_cache__DOT__tag_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1735 = vlSelf->top__DOT__d_cache__DOT__tag_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1736 = vlSelf->top__DOT__d_cache__DOT__tag_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1737 = vlSelf->top__DOT__d_cache__DOT__tag_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1738 = vlSelf->top__DOT__d_cache__DOT__tag_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1739 = vlSelf->top__DOT__d_cache__DOT__tag_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1740 = vlSelf->top__DOT__d_cache__DOT__tag_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1741 = vlSelf->top__DOT__d_cache__DOT__tag_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1742 = vlSelf->top__DOT__d_cache__DOT__tag_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1743 = vlSelf->top__DOT__d_cache__DOT__tag_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1744 = vlSelf->top__DOT__d_cache__DOT__tag_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1745 = vlSelf->top__DOT__d_cache__DOT__tag_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1746 = vlSelf->top__DOT__d_cache__DOT__tag_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1747 = vlSelf->top__DOT__d_cache__DOT__tag_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1748 = vlSelf->top__DOT__d_cache__DOT__valid_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1749 = vlSelf->top__DOT__d_cache__DOT__valid_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1750 = vlSelf->top__DOT__d_cache__DOT__valid_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1751 = vlSelf->top__DOT__d_cache__DOT__valid_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1752 = vlSelf->top__DOT__d_cache__DOT__valid_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1753 = vlSelf->top__DOT__d_cache__DOT__valid_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1754 = vlSelf->top__DOT__d_cache__DOT__valid_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1755 = vlSelf->top__DOT__d_cache__DOT__valid_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1756 = vlSelf->top__DOT__d_cache__DOT__valid_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1757 = vlSelf->top__DOT__d_cache__DOT__valid_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1758 = vlSelf->top__DOT__d_cache__DOT__valid_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1759 = vlSelf->top__DOT__d_cache__DOT__valid_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1760 = vlSelf->top__DOT__d_cache__DOT__valid_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1761 = vlSelf->top__DOT__d_cache__DOT__valid_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1762 = vlSelf->top__DOT__d_cache__DOT__valid_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1763 = vlSelf->top__DOT__d_cache__DOT__valid_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1700 = vlSelf->top__DOT__d_cache__DOT__quene_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1701 = vlSelf->top__DOT__d_cache__DOT__quene_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1702 = vlSelf->top__DOT__d_cache__DOT__quene_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1703 = vlSelf->top__DOT__d_cache__DOT__quene_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1704 = vlSelf->top__DOT__d_cache__DOT__quene_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1705 = vlSelf->top__DOT__d_cache__DOT__quene_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1706 = vlSelf->top__DOT__d_cache__DOT__quene_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1707 = vlSelf->top__DOT__d_cache__DOT__quene_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1708 = vlSelf->top__DOT__d_cache__DOT__quene_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1709 = vlSelf->top__DOT__d_cache__DOT__quene_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1710 = vlSelf->top__DOT__d_cache__DOT__quene_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1711 = vlSelf->top__DOT__d_cache__DOT__quene_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1712 = vlSelf->top__DOT__d_cache__DOT__quene_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1713 = vlSelf->top__DOT__d_cache__DOT__quene_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1714 = vlSelf->top__DOT__d_cache__DOT__quene_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1715 = vlSelf->top__DOT__d_cache__DOT__quene_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1766 = vlSelf->top__DOT__d_cache__DOT__dirty_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1767 = vlSelf->top__DOT__d_cache__DOT__dirty_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1768 = vlSelf->top__DOT__d_cache__DOT__dirty_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1769 = vlSelf->top__DOT__d_cache__DOT__dirty_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1770 = vlSelf->top__DOT__d_cache__DOT__dirty_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1771 = vlSelf->top__DOT__d_cache__DOT__dirty_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1772 = vlSelf->top__DOT__d_cache__DOT__dirty_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1773 = vlSelf->top__DOT__d_cache__DOT__dirty_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1774 = vlSelf->top__DOT__d_cache__DOT__dirty_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1775 = vlSelf->top__DOT__d_cache__DOT__dirty_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1776 = vlSelf->top__DOT__d_cache__DOT__dirty_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1777 = vlSelf->top__DOT__d_cache__DOT__dirty_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1778 = vlSelf->top__DOT__d_cache__DOT__dirty_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1779 = vlSelf->top__DOT__d_cache__DOT__dirty_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1780 = vlSelf->top__DOT__d_cache__DOT__dirty_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1781 = vlSelf->top__DOT__d_cache__DOT__dirty_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_1782 = vlSelf->top__DOT__d_cache__DOT__dirty_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1783 = vlSelf->top__DOT__d_cache__DOT__dirty_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_1784 = vlSelf->top__DOT__d_cache__DOT__dirty_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_1785 = vlSelf->top__DOT__d_cache__DOT__dirty_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_1786 = vlSelf->top__DOT__d_cache__DOT__dirty_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_1787 = vlSelf->top__DOT__d_cache__DOT__dirty_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_1788 = vlSelf->top__DOT__d_cache__DOT__dirty_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_1789 = vlSelf->top__DOT__d_cache__DOT__dirty_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_1790 = vlSelf->top__DOT__d_cache__DOT__dirty_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_1791 = vlSelf->top__DOT__d_cache__DOT__dirty_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_1792 = vlSelf->top__DOT__d_cache__DOT__dirty_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_1793 = vlSelf->top__DOT__d_cache__DOT__dirty_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_1794 = vlSelf->top__DOT__d_cache__DOT__dirty_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_1795 = vlSelf->top__DOT__d_cache__DOT__dirty_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_1796 = vlSelf->top__DOT__d_cache__DOT__dirty_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_1797 = vlSelf->top__DOT__d_cache__DOT__dirty_1_15;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_1652[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_275[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_275[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1652[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_275[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_275[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1652[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_275[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_275[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1652[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_275[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_275[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1653[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_276[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_276[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1653[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_276[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_276[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1653[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_276[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_276[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1653[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_276[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_276[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_277[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_277[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_277[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_277[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_277[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_277[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1654[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_277[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_277[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_278[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_278[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_278[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_278[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_278[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_278[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1655[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_278[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_278[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_279[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_279[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_279[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_279[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_279[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_279[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1656[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_279[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_279[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_280[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_280[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_280[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_280[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_280[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_280[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1657[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_280[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_280[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_281[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_281[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_281[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_281[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_281[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_281[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1658[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_281[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_281[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_282[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_282[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_282[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_282[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_282[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_282[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1659[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_282[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_282[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_283[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_283[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_283[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_283[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_283[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_283[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1660[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_283[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_283[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_284[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_284[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_284[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_284[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_284[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_284[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1661[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_284[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_284[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_285[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_285[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_285[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_285[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_285[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_285[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1662[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_285[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_285[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_286[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_286[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_286[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_286[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_286[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_286[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1663[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_286[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_286[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_287[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_287[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_287[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_287[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_287[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_287[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1664[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_287[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_287[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_288[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_288[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_288[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_288[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_288[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_288[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1665[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_288[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_288[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_289[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_289[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_289[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_289[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_289[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_289[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1666[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_289[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_289[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_290[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_290[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_290[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_290[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_290[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_290[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1667[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT___GEN_290[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U]
                                : vlSelf->top__DOT__d_cache__DOT___GEN_290[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1668 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_0
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_291
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_0
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_0
                              : vlSelf->top__DOT__d_cache__DOT___GEN_291)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_1669 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_1
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_292
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_1
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_1
                              : vlSelf->top__DOT__d_cache__DOT___GEN_292)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_1670 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_2
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_293
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_2
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_2
                              : vlSelf->top__DOT__d_cache__DOT___GEN_293)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_1671 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_3
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_294
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_3
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_3
                              : vlSelf->top__DOT__d_cache__DOT___GEN_294)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_1672 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_4
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_295
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_4
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_4
                              : vlSelf->top__DOT__d_cache__DOT___GEN_295)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_1673 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_5
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_296
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_5
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_5
                              : vlSelf->top__DOT__d_cache__DOT___GEN_296)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_1674 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_6
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_297
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_6
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_6
                              : vlSelf->top__DOT__d_cache__DOT___GEN_297)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_1675 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_7
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_298
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_7
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_7
                              : vlSelf->top__DOT__d_cache__DOT___GEN_298)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_1676 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_8
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_299
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_8
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_8
                              : vlSelf->top__DOT__d_cache__DOT___GEN_299)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_1677 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_9
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_300
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_9
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_9
                              : vlSelf->top__DOT__d_cache__DOT___GEN_300)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_1678 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_10
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_301
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_10
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_10
                              : vlSelf->top__DOT__d_cache__DOT___GEN_301)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_1679 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_11
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_302
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_11
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_11
                              : vlSelf->top__DOT__d_cache__DOT___GEN_302)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_1680 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_12
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_303
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_12
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_12
                              : vlSelf->top__DOT__d_cache__DOT___GEN_303)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_1681 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_13
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_304
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_13
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_13
                              : vlSelf->top__DOT__d_cache__DOT___GEN_304)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_1682 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_14
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_305
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_14
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_14
                              : vlSelf->top__DOT__d_cache__DOT___GEN_305)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_1683 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_0_15
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT___GEN_306
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT__tag_0_15
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT__tag_0_15
                              : vlSelf->top__DOT__d_cache__DOT___GEN_306)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_0_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_1684 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_307)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_307))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1685 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_308)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_308))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1686 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_309)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_309))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1687 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_310)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_310))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1688 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_311)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_311))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1689 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_312)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_312))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1690 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_313)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_313))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1691 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_314)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_314))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1692 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_315)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_315))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1693 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_316)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_316))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1694 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_317)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_317))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1695 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_318)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_318))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1696 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_319)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_319))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1697 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_320)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_320))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1698 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_321)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_321))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1699 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_322)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_322))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_0_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_355[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_355[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_355[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_355[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_355[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_355[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1716[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_355[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_355[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_356[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_356[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_356[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_356[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_356[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_356[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1717[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_356[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_356[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_357[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_357[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_357[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_357[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_357[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_357[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1718[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_357[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_357[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_358[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_358[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_358[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_358[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_358[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_358[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1719[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_358[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_358[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_359[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_359[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_359[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_359[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_359[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_359[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1720[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_359[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_359[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_360[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_360[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_360[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_360[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_360[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_360[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1721[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_360[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_360[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_361[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_361[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_361[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_361[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_361[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_361[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1722[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_361[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_361[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_362[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_362[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_362[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_362[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_362[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_362[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1723[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_362[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_362[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_363[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_363[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_363[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_363[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_363[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_363[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1724[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_363[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_363[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_364[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_364[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_364[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_364[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_364[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_364[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1725[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_364[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_364[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_365[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_365[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_365[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_365[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_365[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_365[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1726[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_365[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_365[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_366[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_366[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_366[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_366[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_366[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_366[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1727[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_366[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_366[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_367[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_367[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_367[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_367[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_367[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_367[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1728[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_367[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_367[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_368[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_368[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_368[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_368[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_368[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_368[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1729[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_368[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_368[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_369[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_369[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_369[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_369[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_369[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_369[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1730[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_369[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_369[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_370[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_370[0U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_370[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_370[1U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_370[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_370[2U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1731[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT___GEN_370[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? vlSelf->top__DOT__d_cache__DOT___GEN_370[3U]
                                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U])))
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U]));
        vlSelf->top__DOT__d_cache__DOT___GEN_1732 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_0
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_0
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_371
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_371
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_0)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_1733 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_1
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_1
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_372
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_372
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_1)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_1734 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_2
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_2
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_373
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_373
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_2)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_1735 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_3
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_3
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_374
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_374
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_3)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_1736 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_4
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_4
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_375
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_375
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_4)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_1737 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_5
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_5
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_376
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_376
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_5)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_1738 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_6
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_6
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_377
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_377
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_6)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_1739 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_7
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_7
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_378
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_378
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_7)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_1740 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_8
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_8
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_379
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_379
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_8)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_1741 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_9
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_9
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_380
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_380
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_9)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_1742 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_10
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_10
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_381
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_381
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_10)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_1743 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_11
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_11
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_382
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_382
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_11)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_1744 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_12
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_12
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_383
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_383
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_12)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_1745 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_13
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_13
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_384
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_384
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_13)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_1746 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_14
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_14
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_385
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_385
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_14)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_1747 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? vlSelf->top__DOT__d_cache__DOT__tag_1_15
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? vlSelf->top__DOT__d_cache__DOT__tag_1_15
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? vlSelf->top__DOT__d_cache__DOT___GEN_386
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? vlSelf->top__DOT__d_cache__DOT___GEN_386
                              : vlSelf->top__DOT__d_cache__DOT__tag_1_15)))
                  : vlSelf->top__DOT__d_cache__DOT__tag_1_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_1748 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_387)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_387)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1749 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_388)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_388)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1750 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_389)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_389)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1751 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_390)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1752 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_391)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_391)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1753 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_392)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_392)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1754 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_393)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_393)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1755 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_394)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_394)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1756 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_395)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_395)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1757 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_396)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_396)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1758 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_397)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_397)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1759 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_398)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_398)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1760 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_399)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_399)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1761 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_400)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_400)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1762 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_401)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_401)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1763 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_402)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_402)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__valid_1_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1700 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_339)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_403)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_339))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1701 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_340)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_404)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_404)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_340))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1702 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_341)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_405)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_405)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_341))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1703 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_342)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_406)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_406)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_342))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1704 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_343)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_407)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_407)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_343))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1705 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_344)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_408)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_408)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_344))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1706 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_345)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_409)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_409)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_345))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1707 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_346)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_410)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_410)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_346))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1708 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_347)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_411)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_411)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_347))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1709 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_348)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_412)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_412)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_348))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1710 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_349)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_413)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_413)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_349))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1711 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_350)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_414)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_414)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_350))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1712 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_351)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_415)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_415)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_351))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1713 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_352)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_416)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_416)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_352))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1714 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_353)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_417)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_417)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_353))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1715 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_354)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_418)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_418)
                              : (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_354))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__quene_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1766 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((0U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1767 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((1U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1768 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((2U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1769 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((3U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1770 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((4U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1771 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((5U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1772 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((6U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1773 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((7U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1774 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((8U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1775 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((9U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1776 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((0xaU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1777 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((0xbU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1778 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((0xcU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1779 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((0xdU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1780 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((0xeU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1781 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)
                              : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                  ? ((0xfU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1782 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((0U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1783 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((1U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1784 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((2U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1785 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((3U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1786 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((4U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1787 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((5U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1788 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((6U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1789 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((7U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1790 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((8U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1791 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((9U != (0xfU & (IData)(
                                                            (vlSelf->top__DOT__LSU__DOT__maddr 
                                                             >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1792 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((0xaU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1793 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((0xbU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1794 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((0xcU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1795 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((0xdU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1796 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((0xeU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14)));
        vlSelf->top__DOT__d_cache__DOT___GEN_1797 = 
            ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
              ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15)
              : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                  ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                      ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15)
                      : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                          ? (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15)
                          : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                              ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                  ? ((0xfU != (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__LSU__DOT__maddr 
                                                          >> 4U)))) 
                                     & (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15))
                                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15))
                              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15))))
                  : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15)));
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_2486 = ((IData)(vlSelf->reset)
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
                                                       ((1U 
                                                         == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                         ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                          ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                                           ? 
                                                          ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                                            ? 
                                                           (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_47)) 
                                                             << 8U) 
                                                            | (QData)((IData)(
                                                                              (0xf0U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                                >> 4U)) 
                                                                                << 4U)))))
                                                            : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                                            ? 
                                                           (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_15)) 
                                                             << 8U) 
                                                            | (QData)((IData)(
                                                                              (0xf0U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__LSU__DOT__maddr 
                                                                                >> 4U)) 
                                                                                << 4U)))))
                                                            : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))))))
                                                        : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))))))));
    VL_EXTEND_WQ(128,64, __Vtemp3786, (((QData)((IData)(
                                                        vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]))));
    if ((3U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))) {
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[0U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[1U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[2U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[3U] 
            = vlSelf->top__DOT__d_cache__DOT__write_back_data[3U];
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[0U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_136[0U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])
                                : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_88[0U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U]))))
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
                            ? __Vtemp3786[0U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[0U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[1U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_136[1U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])
                                : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_88[1U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U]))))
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
                            ? __Vtemp3786[1U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[1U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[2U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_136[2U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])
                                : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_88[2U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U]))))
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
                            ? __Vtemp3786[2U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[2U])));
        vlSelf->top__DOT__d_cache__DOT___GEN_1764[3U] 
            = ((4U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                ? vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]
                : ((5U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                    ? ((1U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                        ? vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]
                        : ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                            ? vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]
                            : ((2U & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                ? ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_136[3U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])
                                : ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                    ? vlSelf->top__DOT__d_cache__DOT___GEN_88[3U]
                                    : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U]))))
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
                            ? __Vtemp3786[3U] : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])
                        : vlSelf->top__DOT__d_cache__DOT__write_back_data[3U])));
    }
    if (vlSelf->top__DOT__d_cache__DOT__way0_hit) {
        vlSelf->top__DOT__d_cache__DOT___GEN_219 = 
            ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_220 = 
            ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_221 = 
            ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_222 = 
            ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_223 = 
            ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_224 = 
            ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_225 = 
            ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_226 = 
            ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_227 = 
            ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_228 = 
            ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                     >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_229 = 
            ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_230 = 
            ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_231 = 
            ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_232 = 
            ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_233 = 
            ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_234 = 
            ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_0_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_203[0U] 
            = ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_203[1U] 
            = ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_203[2U] 
            = ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_203[3U] 
            = ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_204[0U] 
            = ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_204[1U] 
            = ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_204[2U] 
            = ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_204[3U] 
            = ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_205[0U] 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_205[1U] 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_205[2U] 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_205[3U] 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_206[0U] 
            = ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_206[1U] 
            = ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_206[2U] 
            = ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_206[3U] 
            = ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_207[0U] 
            = ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_207[1U] 
            = ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_207[2U] 
            = ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_207[3U] 
            = ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_208[0U] 
            = ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_208[1U] 
            = ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_208[2U] 
            = ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_208[3U] 
            = ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_209[0U] 
            = ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_209[1U] 
            = ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_209[2U] 
            = ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_209[3U] 
            = ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_210[0U] 
            = ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_210[1U] 
            = ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_210[2U] 
            = ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_210[3U] 
            = ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_211[0U] 
            = ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_211[1U] 
            = ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_211[2U] 
            = ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_211[3U] 
            = ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_212[0U] 
            = ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_212[1U] 
            = ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_212[2U] 
            = ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_212[3U] 
            = ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                       >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_213[0U] 
            = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_213[1U] 
            = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_213[2U] 
            = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_213[3U] 
            = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_214[0U] 
            = ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_214[1U] 
            = ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_214[2U] 
            = ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_214[3U] 
            = ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_215[0U] 
            = ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_215[1U] 
            = ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_215[2U] 
            = ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_215[3U] 
            = ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_216[0U] 
            = ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_216[1U] 
            = ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_216[2U] 
            = ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_216[3U] 
            = ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_217[0U] 
            = ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_217[1U] 
            = ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_217[2U] 
            = ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_217[3U] 
            = ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_218[0U] 
            = ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[0U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_218[1U] 
            = ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[1U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_218[2U] 
            = ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[2U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_218[3U] 
            = ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) ? 
               vlSelf->top__DOT__d_cache__DOT___ram_0_T_5[3U]
                : vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_251 = vlSelf->top__DOT__d_cache__DOT__dirty_1_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_252 = vlSelf->top__DOT__d_cache__DOT__dirty_1_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_253 = vlSelf->top__DOT__d_cache__DOT__dirty_1_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_254 = vlSelf->top__DOT__d_cache__DOT__dirty_1_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_255 = vlSelf->top__DOT__d_cache__DOT__dirty_1_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_256 = vlSelf->top__DOT__d_cache__DOT__dirty_1_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_257 = vlSelf->top__DOT__d_cache__DOT__dirty_1_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_258 = vlSelf->top__DOT__d_cache__DOT__dirty_1_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_259 = vlSelf->top__DOT__d_cache__DOT__dirty_1_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_260 = vlSelf->top__DOT__d_cache__DOT__dirty_1_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_261 = vlSelf->top__DOT__d_cache__DOT__dirty_1_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_262 = vlSelf->top__DOT__d_cache__DOT__dirty_1_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_263 = vlSelf->top__DOT__d_cache__DOT__dirty_1_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_264 = vlSelf->top__DOT__d_cache__DOT__dirty_1_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_265 = vlSelf->top__DOT__d_cache__DOT__dirty_1_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_266 = vlSelf->top__DOT__d_cache__DOT__dirty_1_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_235[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_235[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_235[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_235[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_236[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_236[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_236[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_236[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_237[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_237[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_237[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_237[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_238[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_238[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_238[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_238[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_239[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_239[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_239[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_239[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_240[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_240[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_240[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_240[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_241[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_241[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_241[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_241[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_242[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_242[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_242[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_242[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_243[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_243[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_243[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_243[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_244[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_244[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_244[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_244[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_245[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_245[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_245[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_245[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_246[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_246[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_246[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_246[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_247[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_247[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_247[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_247[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_248[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_248[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_248[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_248[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_249[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_249[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_249[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_249[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_250[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_250[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_250[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_250[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U];
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_219 = vlSelf->top__DOT__d_cache__DOT__dirty_0_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_220 = vlSelf->top__DOT__d_cache__DOT__dirty_0_1;
        vlSelf->top__DOT__d_cache__DOT___GEN_221 = vlSelf->top__DOT__d_cache__DOT__dirty_0_2;
        vlSelf->top__DOT__d_cache__DOT___GEN_222 = vlSelf->top__DOT__d_cache__DOT__dirty_0_3;
        vlSelf->top__DOT__d_cache__DOT___GEN_223 = vlSelf->top__DOT__d_cache__DOT__dirty_0_4;
        vlSelf->top__DOT__d_cache__DOT___GEN_224 = vlSelf->top__DOT__d_cache__DOT__dirty_0_5;
        vlSelf->top__DOT__d_cache__DOT___GEN_225 = vlSelf->top__DOT__d_cache__DOT__dirty_0_6;
        vlSelf->top__DOT__d_cache__DOT___GEN_226 = vlSelf->top__DOT__d_cache__DOT__dirty_0_7;
        vlSelf->top__DOT__d_cache__DOT___GEN_227 = vlSelf->top__DOT__d_cache__DOT__dirty_0_8;
        vlSelf->top__DOT__d_cache__DOT___GEN_228 = vlSelf->top__DOT__d_cache__DOT__dirty_0_9;
        vlSelf->top__DOT__d_cache__DOT___GEN_229 = vlSelf->top__DOT__d_cache__DOT__dirty_0_10;
        vlSelf->top__DOT__d_cache__DOT___GEN_230 = vlSelf->top__DOT__d_cache__DOT__dirty_0_11;
        vlSelf->top__DOT__d_cache__DOT___GEN_231 = vlSelf->top__DOT__d_cache__DOT__dirty_0_12;
        vlSelf->top__DOT__d_cache__DOT___GEN_232 = vlSelf->top__DOT__d_cache__DOT__dirty_0_13;
        vlSelf->top__DOT__d_cache__DOT___GEN_233 = vlSelf->top__DOT__d_cache__DOT__dirty_0_14;
        vlSelf->top__DOT__d_cache__DOT___GEN_234 = vlSelf->top__DOT__d_cache__DOT__dirty_0_15;
        vlSelf->top__DOT__d_cache__DOT___GEN_203[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_203[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_203[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_203[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_0[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_204[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_204[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_204[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_204[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_1[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_205[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_205[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_205[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_205[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_2[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_206[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_206[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_206[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_206[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_3[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_207[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_207[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_207[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_207[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_4[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_208[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_208[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_208[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_208[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_5[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_209[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_209[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_209[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_209[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_6[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_210[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_210[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_210[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_210[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_7[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_211[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_211[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_211[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_211[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_8[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_212[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_212[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_212[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_212[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_9[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_213[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_213[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_213[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_213[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_10[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_214[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_214[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_214[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_214[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_11[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_215[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_215[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_215[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_215[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_12[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_216[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_216[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_216[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_216[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_13[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_217[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_217[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_217[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_217[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_14[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_218[0U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_218[1U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_218[2U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_218[3U] 
            = vlSelf->top__DOT__d_cache__DOT__ram_0_15[3U];
        vlSelf->top__DOT__d_cache__DOT___GEN_251 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_0));
        vlSelf->top__DOT__d_cache__DOT___GEN_252 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_1));
        vlSelf->top__DOT__d_cache__DOT___GEN_253 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_2));
        vlSelf->top__DOT__d_cache__DOT___GEN_254 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_3));
        vlSelf->top__DOT__d_cache__DOT___GEN_255 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_4));
        vlSelf->top__DOT__d_cache__DOT___GEN_256 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_5));
        vlSelf->top__DOT__d_cache__DOT___GEN_257 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_6));
        vlSelf->top__DOT__d_cache__DOT___GEN_258 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_7));
        vlSelf->top__DOT__d_cache__DOT___GEN_259 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_8));
        vlSelf->top__DOT__d_cache__DOT___GEN_260 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                         >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_9));
        vlSelf->top__DOT__d_cache__DOT___GEN_261 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_10));
        vlSelf->top__DOT__d_cache__DOT___GEN_262 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_11));
        vlSelf->top__DOT__d_cache__DOT___GEN_263 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_12));
        vlSelf->top__DOT__d_cache__DOT___GEN_264 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_13));
        vlSelf->top__DOT__d_cache__DOT___GEN_265 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_14));
        vlSelf->top__DOT__d_cache__DOT___GEN_266 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U)))) 
                 | (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15))
              : (IData)(vlSelf->top__DOT__d_cache__DOT__dirty_1_15));
        vlSelf->top__DOT__d_cache__DOT___GEN_235[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_235[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_235[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_235[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_0[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_236[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_236[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_236[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_236[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((1U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_1[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_237[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_237[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_237[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_237[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((2U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_2[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_238[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_238[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_238[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_238[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((3U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_3[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_239[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_239[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_239[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_239[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((4U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_4[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_240[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_240[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_240[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_240[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((5U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_5[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_241[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_241[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_241[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_241[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((6U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_6[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_242[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_242[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_242[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_242[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((7U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_7[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_243[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_243[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_243[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_243[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((8U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_8[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_244[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_244[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_244[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_244[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((9U == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                           >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_9[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_245[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_245[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_245[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_245[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_10[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_246[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_246[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_246[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_246[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xbU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_11[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_247[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_247[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_247[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_247[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xcU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_12[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_248[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_248[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_248[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_248[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xdU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_13[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_249[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_249[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_249[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_249[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xeU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_14[3U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_250[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[0U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_250[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[1U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_250[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[2U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[2U]);
        vlSelf->top__DOT__d_cache__DOT___GEN_250[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                ? ((0xfU == (0xfU & (IData)((vlSelf->top__DOT__LSU__DOT__maddr 
                                             >> 4U))))
                    ? vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[3U]
                    : vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U])
                : vlSelf->top__DOT__d_cache__DOT__ram_1_15[3U]);
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_2253 = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit) 
                                                 | (IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit));
    VL_EXTEND_WW(129,128, __Vtemp3949, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
    VL_EXTEND_WW(129,128, __Vtemp3952, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_2);
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
                       << 1U) : __Vtemp3949[0U]) : 
               __Vtemp3952[0U]);
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
                                     << 1U)) : __Vtemp3949[1U])
                : __Vtemp3952[1U]);
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
                          << 1U)) : __Vtemp3949[2U])
                : __Vtemp3952[2U]);
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
                                     << 1U)) : __Vtemp3949[3U])
                : __Vtemp3952[3U]);
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT___GEN_21[4U] 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_start)
                ? (VL_LTS_III(1,32,32, 0U, vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__step_num)
                    ? (((1U & vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U])
                         ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__div_cand[3U]
                         : ((vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[1U] 
                             >> 1U) | (vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div__DOT__sub_res[2U] 
                                       << 0x1fU))) 
                       >> 0x1fU) : __Vtemp3949[4U])
                : __Vtemp3952[4U]);
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
                                                              : (IData)(vlSelf->top__DOT__IDU__DOT___ALUop_T_162)))))))))))))));
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
                                                              : (IData)(vlSelf->top__DOT__IDU__DOT___inst_type_T_170))))))))))))))));
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
    vlSelf->top__DOT__d_cache__DOT___GEN_1650 = (7U 
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
    top__DOT__d_cache__DOT___GEN_274 = ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid)
                                         ? 0U : (IData)(vlSelf->top__DOT__d_cache__DOT__state));
    vlSelf->top__DOT__axi__DOT___GEN_4 = ((IData)(vlSelf->top__DOT__arbiter_io_axi_out_arvalid) 
                                          | (IData)(vlSelf->top__DOT__axi__DOT__axi_rvalid));
    if (vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid) {
        vlSelf->top__DOT__i_cache__DOT___GEN_140 = 
            (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num)));
        vlSelf->top__DOT__i_cache__DOT___GEN_141 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rlast)
              ? 3U : (IData)(vlSelf->top__DOT__i_cache__DOT__state));
    } else {
        vlSelf->top__DOT__i_cache__DOT___GEN_140 = 
            (7U & (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num));
        vlSelf->top__DOT__i_cache__DOT___GEN_141 = vlSelf->top__DOT__i_cache__DOT__state;
    }
    vlSelf->top__DOT__LSU__DOT__ms_ready_go = (1U & 
                                               ((((IData)(vlSelf->top__DOT__LSU__DOT__wen) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->top__DOT__d_cache__DOT__state)) 
                                                     & ((2U 
                                                         == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                         ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2253)
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
                                                        ? (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2253)
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
                                                            : vlSelf->top__DOT__EXU__DOT__ALU__DOT___alu_res_T_80)))))))));
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
        vlSelf->top__DOT__d_cache__DOT___GEN_1648 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((1U & (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__d_cache__DOT__receive_data_0
                  : vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_0);
        vlSelf->top__DOT__d_cache__DOT___GEN_1649 = 
            ((IData)(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid)
              ? ((1U & (IData)(vlSelf->top__DOT__d_cache__DOT__receive_num))
                  ? vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata
                  : vlSelf->top__DOT__d_cache__DOT__receive_data_1)
              : vlSelf->top__DOT__d_cache__DOT__receive_data_1);
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_1648 = vlSelf->top__DOT__d_cache__DOT__receive_data_0;
        vlSelf->top__DOT__d_cache__DOT___GEN_1649 = vlSelf->top__DOT__d_cache__DOT__receive_data_1;
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp3956, vlSelf->top__DOT__d_cache__DOT___GEN_88, 
                  (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                            << 3U)));
    VL_SHIFTR_WWI(128,128,7, __Vtemp3957, vlSelf->top__DOT__d_cache__DOT___GEN_136, 
                  (0x78U & ((IData)(vlSelf->top__DOT__LSU__DOT__maddr) 
                            << 3U)));
    VL_EXTEND_WQ(128,64, __Vtemp3961, ((2U == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
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
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                ? __Vtemp3956[0U] : ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                      ? __Vtemp3957[0U]
                                      : 0U));
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[1U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                ? __Vtemp3956[1U] : ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                      ? __Vtemp3957[1U]
                                      : 0U));
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[2U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                ? __Vtemp3956[2U] : ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                      ? __Vtemp3957[2U]
                                      : 0U));
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[3U] 
            = ((IData)(vlSelf->top__DOT__d_cache__DOT__way0_hit)
                ? __Vtemp3956[3U] : ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
                                      ? __Vtemp3957[3U]
                                      : 0U));
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U] 
            = __Vtemp3961[0U];
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[1U] 
            = __Vtemp3961[1U];
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[2U] 
            = __Vtemp3961[2U];
        vlSelf->top__DOT__d_cache__DOT___GEN_2408[3U] 
            = __Vtemp3961[3U];
    }
    if (vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid) {
        vlSelf->top__DOT__i_cache__DOT___GEN_138 = 
            ((1U & (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num))
              ? vlSelf->top__DOT__i_cache__DOT__receive_data_0
              : vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata);
        vlSelf->top__DOT__i_cache__DOT___GEN_139 = 
            ((1U & (IData)(vlSelf->top__DOT__i_cache__DOT__receive_num))
              ? vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata
              : vlSelf->top__DOT__i_cache__DOT__receive_data_1);
    } else {
        vlSelf->top__DOT__i_cache__DOT___GEN_138 = vlSelf->top__DOT__i_cache__DOT__receive_data_0;
        vlSelf->top__DOT__i_cache__DOT___GEN_139 = vlSelf->top__DOT__i_cache__DOT__receive_data_1;
    }
    vlSelf->top__DOT__d_cache__DOT___GEN_1651 = ((3U 
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
                                                   ? (IData)(top__DOT__d_cache__DOT___GEN_274)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                      ? 1U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__d_cache__DOT___GEN_338))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_677)
                                                        ? 6U
                                                        : 1U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_434)
                                                        ? 6U
                                                        : 1U))))
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
                                                       ? (IData)(top__DOT__d_cache__DOT___GEN_274)
                                                       : (IData)(vlSelf->top__DOT__d_cache__DOT__state)))))));
    vlSelf->top__DOT__LSU__DOT__ms_allowin = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__LSU__DOT__ms_valid)) 
                                               | (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go)));
    vlSelf->top__DOT__LSU_io_ms_to_ws_valid = ((IData)(vlSelf->top__DOT__LSU__DOT__ms_valid) 
                                               & (IData)(vlSelf->top__DOT__LSU__DOT__ms_ready_go));
    VL_EXTEND_WQ(127,64, __Vtemp3965, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp3966, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp3967, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_EXTEND_WQ(127,64, __Vtemp3968, (vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value 
                                       >> (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value))));
    VL_EXTEND_WQ(127,64, __Vtemp3969, vlSelf->top__DOT__EXU__DOT__ALU__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp3970, vlSelf->top__DOT__EXU__DOT__ALU_io_src1_value);
    VL_SHIFTL_WWI(127,127,6, __Vtemp3971, __Vtemp3970, 
                  (0x3fU & (IData)(vlSelf->top__DOT__EXU__DOT__src2_value)));
    VL_EXTEND_WQ(127,64, __Vtemp3972, ((0x34U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                        ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder
                                        : ((0x33U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                            ? vlSelf->top__DOT__EXU__DOT__ALU__DOT__Div_io_remainder
                                            : ((0x32U 
                                                == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                ? top__DOT__EXU__DOT__ALU__DOT___alu_res_T_50
                                                : (
                                                   (0x14U 
                                                    == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                    ? top__DOT__EXU__DOT__ALU__DOT___alu_res_T_50
                                                    : top__DOT__EXU__DOT__ALU__DOT___alu_res_T_98)))));
    if ((0x47U == vlSelf->top__DOT__EXU__DOT__ALUop)) {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U] 
            = __Vtemp3965[0U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = __Vtemp3965[1U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = __Vtemp3965[2U];
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = (0x7fffffffU & __Vtemp3965[3U]);
    } else {
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[0U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp3966[0U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                      ? __Vtemp3967[0U]
                                      : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                          ? __Vtemp3968[0U]
                                          : ((0x39U 
                                              == vlSelf->top__DOT__EXU__DOT__ALUop)
                                              ? __Vtemp3969[0U]
                                              : ((0x37U 
                                                  == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                  ? 
                                                 __Vtemp3971[0U]
                                                  : 
                                                 __Vtemp3972[0U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[1U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp3966[1U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                      ? __Vtemp3967[1U]
                                      : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                          ? __Vtemp3968[1U]
                                          : ((0x39U 
                                              == vlSelf->top__DOT__EXU__DOT__ALUop)
                                              ? __Vtemp3969[1U]
                                              : ((0x37U 
                                                  == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                  ? 
                                                 __Vtemp3971[1U]
                                                  : 
                                                 __Vtemp3972[1U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[2U] 
            = ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                ? __Vtemp3966[2U] : ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                      ? __Vtemp3967[2U]
                                      : ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                          ? __Vtemp3968[2U]
                                          : ((0x39U 
                                              == vlSelf->top__DOT__EXU__DOT__ALUop)
                                              ? __Vtemp3969[2U]
                                              : ((0x37U 
                                                  == vlSelf->top__DOT__EXU__DOT__ALUop)
                                                  ? 
                                                 __Vtemp3971[2U]
                                                  : 
                                                 __Vtemp3972[2U])))));
        vlSelf->top__DOT__EXU__DOT__ALU__DOT__alu_res[3U] 
            = (0x7fffffffU & ((0x46U == vlSelf->top__DOT__EXU__DOT__ALUop)
                               ? __Vtemp3966[3U] : 
                              ((0x3fU == vlSelf->top__DOT__EXU__DOT__ALUop)
                                ? __Vtemp3967[3U] : 
                               ((0x38U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                 ? __Vtemp3968[3U] : 
                                ((0x39U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                  ? __Vtemp3969[3U]
                                  : ((0x37U == vlSelf->top__DOT__EXU__DOT__ALUop)
                                      ? __Vtemp3971[3U]
                                      : __Vtemp3972[3U]))))));
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
                                                             & vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U])))
                                          : ((6U == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                              ? (((
                                                   (0x80U 
                                                    & vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U])
                                                    ? 0xffffffffffffffULL
                                                    : 0ULL) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U]))))
                                              : ((5U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                  ? 
                                                 ((((0x8000U 
                                                     & vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U])
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U]))))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                   ? (QData)((IData)(
                                                                     vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U]))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U])))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__d_cache__DOT___GEN_2408[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U])))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->top__DOT__LSU__DOT__load_type))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U] 
                                                                         >> 0x1fU)
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U])))
                                                      : 
                                                     (((QData)((IData)(
                                                                       vlSelf->top__DOT__d_cache__DOT___GEN_2408[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__d_cache__DOT___GEN_2408[0U]))))))))));
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
