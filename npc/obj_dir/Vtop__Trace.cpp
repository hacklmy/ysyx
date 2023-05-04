// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp183;
    VlWide<4>/*127:0*/ __Vtemp184;
    VlWide<4>/*127:0*/ __Vtemp185;
    VlWide<3>/*95:0*/ __Vtemp188;
    VlWide<3>/*95:0*/ __Vtemp189;
    VlWide<3>/*95:0*/ __Vtemp191;
    VlWide<3>/*95:0*/ __Vtemp192;
    VlWide<3>/*95:0*/ __Vtemp193;
    VlWide<3>/*95:0*/ __Vtemp194;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__pc_now),64);
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_rvalid));
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__idu_step__DOT__axi_inst_ready));
            tracep->chgBit(oldp+4,(vlSelf->top__DOT__exu_step_io_inst_valid));
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__npc_step));
            tracep->chgIData(oldp+6,((IData)(vlSelf->top__DOT__pc_now)),32);
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_bvalid));
            tracep->chgQData(oldp+8,((QData)((IData)(vlSelf->top__DOT__pc_now))),64);
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_wready));
            tracep->chgBit(oldp+11,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready));
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__state),3);
            tracep->chgQData(oldp+13,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
            tracep->chgQData(oldp+15,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
            tracep->chgQData(oldp+23,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
            tracep->chgQData(oldp+31,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
            tracep->chgQData(oldp+33,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
            tracep->chgQData(oldp+37,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
            tracep->chgQData(oldp+39,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
            tracep->chgQData(oldp+43,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [0x11U]),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [0U]),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [1U]),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [2U]),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [3U]),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [4U]),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [5U]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [6U]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [7U]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [8U]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [9U]),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                      [0xaU]),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xbU]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xcU]),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xdU]),64);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xeU]),64);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xfU]),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x10U]),64);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x12U]),64);
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x13U]),64);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x14U]),64);
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x15U]),64);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x16U]),64);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x17U]),64);
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x18U]),64);
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x19U]),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1aU]),64);
            tracep->chgQData(oldp+131,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1bU]),64);
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1cU]),64);
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1dU]),64);
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1eU]),64);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1fU]),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[0]),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[1]),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[2]),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[3]),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [1U]),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [3U]),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [0U]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [2U]),64);
            tracep->chgBit(oldp+157,(vlSelf->top__DOT__exu_step__DOT__axi_arvalid));
            tracep->chgBit(oldp+158,(vlSelf->top__DOT__exu_step__DOT__axi_rready));
            tracep->chgBit(oldp+159,(vlSelf->top__DOT__exu_step__DOT__axi_awvalid));
            tracep->chgBit(oldp+160,(vlSelf->top__DOT__exu_step__DOT__axi_bready));
            tracep->chgBit(oldp+161,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_rvalid));
            tracep->chgBit(oldp+162,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_bvalid));
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0]),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1]),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2]),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3]),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4]),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5]),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6]),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7]),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8]),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[10]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[11]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[12]),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[13]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[14]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[15]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[16]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[17]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[18]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[19]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[20]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[21]),64);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[22]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[23]),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[24]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[25]),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[26]),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[27]),64);
            tracep->chgQData(oldp+219,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[28]),64);
            tracep->chgQData(oldp+221,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[29]),64);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[30]),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[31]),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[0]),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[1]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[2]),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[3]),64);
            tracep->chgBit(oldp+235,(((IData)(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_wready) 
                                      & (IData)(vlSelf->top__DOT__exu_step__DOT__axi_awvalid))));
            tracep->chgBit(oldp+236,(((IData)(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_arready) 
                                      & (IData)(vlSelf->top__DOT__exu_step__DOT__axi_arvalid))));
            tracep->chgBit(oldp+237,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_wready));
            tracep->chgBit(oldp+238,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__axi_arready));
            tracep->chgCData(oldp+239,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__state),3);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+240,(((IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__axi_arready) 
                                      & (IData)(vlSelf->top__DOT__exu_step_io_no_ifu))));
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [(0x1fU & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                          >> 0xfU)))]),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [(0x1fU & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                          >> 0x14U)))]),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [(0x1fU & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                          >> 7U)))]),64);
            tracep->chgQData(oldp+247,((((((0x100073U 
                                            != (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)) 
                                           & (IData)(vlSelf->top__DOT__idu_step__DOT___reg_write_T_37)) 
                                          & (0U != 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 7U))))) 
                                         & (IData)(vlSelf->top__DOT__exu_step_io_inst_valid))
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))
                                         : ((0U == 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 7U))))
                                             ? 0ULL
                                             : vlSelf->top__DOT__exu_step__DOT__Regfile
                                            [(0x1fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 7U)))]))),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [((0x342U == 
                                          (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                          ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]),64);
            tracep->chgQData(oldp+251,(((IData)(vlSelf->top__DOT__exu_step__DOT___T_7)
                                         ? vlSelf->top__DOT__pc_now
                                         : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [1U])),64);
            tracep->chgQData(oldp+253,(((IData)(vlSelf->top__DOT__exu_step__DOT___T_7)
                                         ? vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x11U] : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [3U])),64);
            tracep->chgQData(oldp+255,(((((0x1073U 
                                           == (0x707fU 
                                               & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                          | ((0x2073U 
                                              == (0x707fU 
                                                  & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                             | (0x3073U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))))) 
                                         & (IData)(vlSelf->top__DOT__exu_step_io_inst_valid))
                                         ? ((0x47U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                & (~ 
                                                   vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                                   [
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                                     ? 3U
                                                     : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]))
                                             : ((0x46U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                 | vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                                 [(
                                                   (0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                                    ? 3U
                                                    : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])
                                                 : 
                                                ((0x3fU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? vlSelf->top__DOT__exu_step__DOT__src1_value
                                                  : 0ULL)))
                                         : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [((0x342U == 
                                           (0xfffU 
                                            & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                           ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])),64);
            tracep->chgIData(oldp+257,((IData)(((0x27U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? (QData)((IData)(
                                                                   ((0U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                     ? 0ULL
                                                                     : 
                                                                    vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                    [
                                                                    (0x1fU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
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
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
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
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U)))])))))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                 >> 0x14U))))
                                                     ? 0ULL
                                                     : 
                                                    vlSelf->top__DOT__exu_step__DOT__Regfile
                                                    [
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                >> 0x14U)))])
                                                    : 0ULL)))))),32);
            tracep->chgQData(oldp+258,(((0U == (0x1fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                           >> 7U))))
                                         ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [(0x1fU & (IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                           >> 7U)))])),64);
            tracep->chgQData(oldp+260,(((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                            & (~ vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                               [((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                                  ? 3U
                                                  : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]))
                                         : ((0x46U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? (vlSelf->top__DOT__exu_step__DOT__src1_value 
                                                | vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                                [((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                                   ? 3U
                                                   : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))])
                                             : ((0x3fU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? vlSelf->top__DOT__exu_step__DOT__src1_value
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+262,(((0x27U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? (QData)((IData)(
                                                           ((0U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                         >> 0x14U))))
                                                             ? 0ULL
                                                             : 
                                                            vlSelf->top__DOT__exu_step__DOT__Regfile
                                                            [
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                        >> 0x14U)))])))
                                         : ((0x28U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          ((0U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                            ? 0ULL
                                                                            : 
                                                                           vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                           [
                                                                           (0x1fU 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U)))])))))
                                             : ((0x26U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(
                                                                              ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                                ? 0ULL
                                                                                : 
                                                                               vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                               [
                                                                               (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U)))])))))
                                                 : 
                                                ((7U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                               >> 0x14U))))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__exu_step__DOT__Regfile
                                                  [
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                              >> 0x14U)))])
                                                  : 0ULL))))),64);
            tracep->chgQData(oldp+264,((QData)((IData)(
                                                       ((0x27U 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? (QData)((IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                             ? 0ULL
                                                                             : 
                                                                            vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                            [
                                                                            (0x1fU 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
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
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
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
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__exu_step__DOT__Regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                                >> 0x14U)))])))))
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                            ? 
                                                           ((0U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                         >> 0x14U))))
                                                             ? 0ULL
                                                             : 
                                                            vlSelf->top__DOT__exu_step__DOT__Regfile
                                                            [
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                                        >> 0x14U)))])
                                                            : 0ULL))))))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+266,((IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)),32);
            tracep->chgBit(oldp+267,(vlSelf->top__DOT__exu_step_io_no_ifu));
            tracep->chgIData(oldp+268,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194),32);
            tracep->chgCData(oldp+269,((0x1fU & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 0xfU)))),5);
            tracep->chgCData(oldp+270,((0x1fU & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 0x14U)))),5);
            tracep->chgCData(oldp+271,((0x1fU & (IData)(
                                                        (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                         >> 7U)))),5);
            tracep->chgQData(oldp+272,(vlSelf->top__DOT__idu_step_io_imm),64);
            tracep->chgBit(oldp+274,(((0x100073U != (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)) 
                                      & (IData)(vlSelf->top__DOT__idu_step__DOT___reg_write_T_37))));
            tracep->chgBit(oldp+275,(((0x1073U == (0x707fU 
                                                   & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                      | ((0x2073U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata))) 
                                         | (0x3073U 
                                            == (0x707fU 
                                                & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))))));
            tracep->chgBit(oldp+276,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm));
            tracep->chgBit(oldp+277,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc));
            tracep->chgBit(oldp+278,((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))));
            tracep->chgBit(oldp+279,(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en));
            tracep->chgCData(oldp+280,(((0x3023U == 
                                         (0x707fU & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))
                                         ? 0xffU : 
                                        ((0x1023U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))
                                          ? 3U : ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))
                                                   ? 1U
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata)))
                                                    ? 0xfU
                                                    : 0U))))),8);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__exu_step_io_pc_next),64);
            tracep->chgQData(oldp+283,((((QData)((IData)(
                                                         vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))),64);
            tracep->chgBit(oldp+285,(vlSelf->top__DOT__exu_step_io_mem_end));
            tracep->chgBit(oldp+286,(vlSelf->top__DOT__exu_step_io_mem_flag));
            tracep->chgIData(oldp+287,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
            tracep->chgIData(oldp+288,((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata),64);
            tracep->chgSData(oldp+291,((0xfffU & (IData)(
                                                         (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                          >> 0x14U)))),12);
            tracep->chgIData(oldp+292,(((0x80000U & 
                                         ((IData)((vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                   >> 0x1fU)) 
                                          << 0x13U)) 
                                        | ((0x7f800U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                        >> 0xcU)) 
                                               << 0xbU)) 
                                           | ((0x400U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                           >> 0x14U)) 
                                                  << 0xaU)) 
                                              | (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                            >> 0x15U))))))),20);
            tracep->chgIData(oldp+293,((0xfffffU & (IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                            >> 0xcU)))),20);
            tracep->chgSData(oldp+294,(((0xfe0U & ((IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                            >> 0x19U)) 
                                                   << 5U)) 
                                        | (0x1fU & (IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                            >> 7U))))),12);
            tracep->chgSData(oldp+295,(((0x800U & ((IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                            >> 0x1fU)) 
                                                   << 0xbU)) 
                                        | ((0x400U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                        >> 7U)) 
                                               << 0xaU)) 
                                           | ((0x3f0U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                           >> 0x19U)) 
                                                  << 4U)) 
                                              | (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ifu_step__DOT__axi__DOT__Mem_modle_Rdata 
                                                            >> 8U))))))),12);
            tracep->chgIData(oldp+296,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188),32);
            tracep->chgCData(oldp+297,(((0x342U == 
                                         (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                         ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))),2);
            tracep->chgIData(oldp+298,((IData)(vlSelf->top__DOT__exu_step__DOT__add_res)),32);
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__exu_step__DOT__axi__DOT__Mem_modle_Rdata),64);
            tracep->chgSData(oldp+301,((0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm))),12);
            tracep->chgQData(oldp+302,(vlSelf->top__DOT__exu_step__DOT__src1_value),64);
            tracep->chgQData(oldp+304,(vlSelf->top__DOT__exu_step__DOT__src2_value),64);
            tracep->chgQData(oldp+306,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
            tracep->chgQData(oldp+308,(vlSelf->top__DOT__exu_step__DOT__sub_res),64);
            tracep->chgQData(oldp+310,(vlSelf->top__DOT__exu_step__DOT__sra_res),64);
            tracep->chgQData(oldp+312,(vlSelf->top__DOT__exu_step__DOT__srl_res),64);
            tracep->chgWData(oldp+314,(vlSelf->top__DOT__exu_step__DOT__sll_res),127);
            tracep->chgIData(oldp+318,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),32);
            tracep->chgIData(oldp+319,(vlSelf->top__DOT__exu_step__DOT__srlw_res),32);
            tracep->chgQData(oldp+320,(vlSelf->top__DOT__exu_step__DOT__sllw_res),63);
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__exu_step__DOT__or_res),64);
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__exu_step__DOT__xor_res),64);
            tracep->chgQData(oldp+326,(vlSelf->top__DOT__exu_step__DOT__and_res),64);
            VL_EXTEND_WQ(128,64, __Vtemp183, vlSelf->top__DOT__exu_step__DOT__src1_value);
            VL_EXTEND_WQ(128,64, __Vtemp184, vlSelf->top__DOT__exu_step__DOT__src2_value);
            VL_MUL_W(4, __Vtemp185, __Vtemp183, __Vtemp184);
            tracep->chgQData(oldp+328,((((QData)((IData)(
                                                         __Vtemp185[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp185[0U])))),64);
            tracep->chgIData(oldp+330,((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2)),32);
            tracep->chgIData(oldp+331,((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4)),32);
            tracep->chgIData(oldp+332,(vlSelf->top__DOT__exu_step__DOT__divuw_res),32);
            tracep->chgIData(oldp+333,(vlSelf->top__DOT__exu_step__DOT__remw_res),32);
            tracep->chgIData(oldp+334,(vlSelf->top__DOT__exu_step__DOT__remuw_res),32);
            VL_EXTENDS_WQ(65,64, __Vtemp188, vlSelf->top__DOT__exu_step__DOT__src1_value);
            __Vtemp189[0U] = __Vtemp188[0U];
            __Vtemp189[1U] = __Vtemp188[1U];
            __Vtemp189[2U] = (1U & __Vtemp188[2U]);
            VL_EXTENDS_WQ(65,64, __Vtemp191, vlSelf->top__DOT__exu_step__DOT__src2_value);
            __Vtemp192[0U] = __Vtemp191[0U];
            __Vtemp192[1U] = __Vtemp191[1U];
            __Vtemp192[2U] = (1U & __Vtemp191[2U]);
            VL_DIVS_WWW(65, __Vtemp193, __Vtemp189, __Vtemp192);
            __Vtemp194[0U] = __Vtemp193[0U];
            __Vtemp194[1U] = __Vtemp193[1U];
            __Vtemp194[2U] = (1U & __Vtemp193[2U]);
            tracep->chgWData(oldp+335,(__Vtemp194),65);
            tracep->chgQData(oldp+338,(VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+340,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+342,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+344,((QData)((IData)(vlSelf->top__DOT__exu_step__DOT__add_res))),64);
        }
        tracep->chgBit(oldp+346,(vlSelf->clock));
        tracep->chgBit(oldp+347,(vlSelf->reset));
        tracep->chgIData(oldp+348,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+349,(vlSelf->io_pc),64);
        tracep->chgQData(oldp+351,(vlSelf->io_pc_next),64);
        tracep->chgQData(oldp+353,(vlSelf->io_outval),64);
        tracep->chgBit(oldp+355,(vlSelf->io_step));
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
