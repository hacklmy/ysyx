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
    VlWide<4>/*127:0*/ __Vtemp181;
    VlWide<4>/*127:0*/ __Vtemp182;
    VlWide<4>/*127:0*/ __Vtemp183;
    VlWide<3>/*95:0*/ __Vtemp186;
    VlWide<3>/*95:0*/ __Vtemp187;
    VlWide<3>/*95:0*/ __Vtemp189;
    VlWide<3>/*95:0*/ __Vtemp190;
    VlWide<3>/*95:0*/ __Vtemp191;
    VlWide<3>/*95:0*/ __Vtemp192;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->top__DOT__arbiter_io_axi_out_arvalid));
            tracep->chgBit(oldp+1,(vlSelf->top__DOT__arbiter_io_axi_out_rready));
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__arbiter_io_axi_out_awvalid));
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__arbiter_io_axi_out_wvalid));
            tracep->chgBit(oldp+4,(vlSelf->top__DOT__arbiter_io_axi_out_bready));
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__axi__DOT__axi_arready));
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__axi__DOT__axi_rvalid));
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__axi__DOT__axi_awready));
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__axi__DOT__axi_wready));
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__axi__DOT__axi_bvalid));
            tracep->chgBit(oldp+10,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__axi__DOT__axi_arready)
                                          : ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid) 
                                             & (IData)(vlSelf->top__DOT__axi__DOT__axi_arready)))
                                      : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                         & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? (IData)(vlSelf->top__DOT__axi__DOT__axi_arready)
                                             : ((3U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                                & (IData)(vlSelf->top__DOT__axi__DOT__axi_arready)))))));
            tracep->chgBit(oldp+11,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rvalid));
            tracep->chgBit(oldp+12,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)
                                          : ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid) 
                                             & (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)))
                                      : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                         & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)
                                             : ((3U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                                & (IData)(vlSelf->top__DOT__axi__DOT__axi_awready)))))));
            tracep->chgBit(oldp+13,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                      ? ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                          ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                          : ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid) 
                                             & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))
                                      : ((1U != (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                         & ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)
                                             : ((3U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state)) 
                                                & (IData)(vlSelf->top__DOT__axi__DOT__axi_wready)))))));
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_bvalid));
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid));
            tracep->chgBit(oldp+16,(vlSelf->top__DOT__lsu_step__DOT__axi_rready));
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid));
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__lsu_step__DOT__axi_wvalid));
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__lsu_step__DOT__axi_bready));
            tracep->chgIData(oldp+20,((IData)(vlSelf->top__DOT__pc_now)),32);
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__pc_valid));
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__ifu_step__DOT__inst_ready));
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid));
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__pc_now),64);
            tracep->chgIData(oldp+26,(vlSelf->top__DOT__ifu_step__DOT__inst_reg),32);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__exu_step__DOT__pc_next),64);
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__execute_end));
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__diff_step));
            tracep->chgBit(oldp+31,(((IData)(vlSelf->top__DOT__axi__DOT__axi_wready) 
                                     & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_wvalid))));
            tracep->chgBit(oldp+32,(((IData)(vlSelf->top__DOT__axi__DOT__axi_arready) 
                                     & (IData)(vlSelf->top__DOT__arbiter_io_axi_out_arvalid))));
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__axi__DOT__state),3);
            tracep->chgCData(oldp+34,(vlSelf->top__DOT__lsu_step__DOT__state),2);
            tracep->chgCData(oldp+35,(vlSelf->top__DOT__arbiter__DOT__state),2);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__exu_step__DOT__Regfile[0]),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__exu_step__DOT__Regfile[1]),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__exu_step__DOT__Regfile[2]),64);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__exu_step__DOT__Regfile[3]),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__exu_step__DOT__Regfile[4]),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__exu_step__DOT__Regfile[5]),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__exu_step__DOT__Regfile[6]),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__exu_step__DOT__Regfile[7]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__exu_step__DOT__Regfile[8]),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__exu_step__DOT__Regfile[9]),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__exu_step__DOT__Regfile[10]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__exu_step__DOT__Regfile[11]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__exu_step__DOT__Regfile[12]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__exu_step__DOT__Regfile[13]),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__exu_step__DOT__Regfile[14]),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__exu_step__DOT__Regfile[15]),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__exu_step__DOT__Regfile[16]),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__exu_step__DOT__Regfile[17]),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__exu_step__DOT__Regfile[18]),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__exu_step__DOT__Regfile[19]),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__exu_step__DOT__Regfile[20]),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__exu_step__DOT__Regfile[21]),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__exu_step__DOT__Regfile[22]),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__exu_step__DOT__Regfile[23]),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__exu_step__DOT__Regfile[24]),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__exu_step__DOT__Regfile[25]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__exu_step__DOT__Regfile[26]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__exu_step__DOT__Regfile[27]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__exu_step__DOT__Regfile[28]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__exu_step__DOT__Regfile[29]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__exu_step__DOT__Regfile[30]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__exu_step__DOT__Regfile[31]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x11U]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0U]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [1U]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [2U]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [3U]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [4U]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [5U]),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [6U]),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [7U]),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [8U]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [9U]),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xaU]),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xbU]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xcU]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xdU]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xeU]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0xfU]),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x10U]),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x12U]),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x13U]),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x14U]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x15U]),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x16U]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x17U]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x18U]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x19U]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1aU]),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1bU]),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1cU]),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1dU]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1eU]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [0x1fU]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[0]),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[1]),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[2]),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg[3]),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [1U]),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [3U]),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [0U]),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [2U]),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[0]),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[1]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[2]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[3]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[4]),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[5]),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[6]),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[7]),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[8]),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[9]),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[10]),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[11]),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[12]),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[13]),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[14]),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[15]),64);
            tracep->chgQData(oldp+212,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[16]),64);
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[17]),64);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[18]),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[19]),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[20]),64);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[21]),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[22]),64);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[23]),64);
            tracep->chgQData(oldp+228,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[24]),64);
            tracep->chgQData(oldp+230,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[25]),64);
            tracep->chgQData(oldp+232,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[26]),64);
            tracep->chgQData(oldp+234,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[27]),64);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[28]),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[29]),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[30]),64);
            tracep->chgQData(oldp+242,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__traceregs[31]),64);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[0]),64);
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[1]),64);
            tracep->chgQData(oldp+248,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[2]),64);
            tracep->chgQData(oldp+250,(vlSelf->top__DOT__exu_step__DOT__reg_trace__DOT__csr_regs[3]),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgIData(oldp+252,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                             ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                             : ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid)
                                                 ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__pc_valid)
                                                  ? (IData)(vlSelf->top__DOT__pc_now)
                                                  : 0U)))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? (IData)(vlSelf->top__DOT__pc_now)
                                             : ((2U 
                                                 == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                 ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                  : 0U))))),32);
            tracep->chgIData(oldp+253,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                             ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                             : ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid)
                                                 ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                 : 0U))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? 0U : 
                                            ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                  : 0U))))),32);
            tracep->chgIData(oldp+254,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                             ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                             : ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid)
                                                 ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                                 : 0U))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? 0U : 
                                            ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                                  : 0U))))),32);
            tracep->chgCData(oldp+255,(((0U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                         ? ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                             ? (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask)
                                             : ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid)
                                                 ? (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask)
                                                 : 0U))
                                         : ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                             ? 0U : 
                                            ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                              ? (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask)
                                                  : 0U))))),8);
            tracep->chgQData(oldp+256,((QData)((IData)(
                                                       ((0U 
                                                         == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                         ? 
                                                        ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                                          ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid)
                                                           ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__pc_valid)
                                                            ? (IData)(vlSelf->top__DOT__pc_now)
                                                            : 0U)))
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                          ? (IData)(vlSelf->top__DOT__pc_now)
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                           ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                            ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                            : 0U))))))),64);
            tracep->chgQData(oldp+258,((QData)((IData)(
                                                       ((0U 
                                                         == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                         ? 
                                                        ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                                          ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid)
                                                           ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                           : 0U))
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                           ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                            ? (IData)(vlSelf->top__DOT__exu_step__DOT__add_res)
                                                            : 0U))))))),64);
            tracep->chgQData(oldp+260,((QData)((IData)(
                                                       ((0U 
                                                         == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                         ? 
                                                        ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_awvalid)
                                                          ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__lsu_step__DOT__axi_arvalid)
                                                           ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                                           : 0U))
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                           ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->top__DOT__arbiter__DOT__state))
                                                            ? (IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)
                                                            : 0U))))))),64);
            tracep->chgQData(oldp+262,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                  >> 0xfU))]),64);
            tracep->chgQData(oldp+264,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                  >> 0x14U))]),64);
            tracep->chgQData(oldp+266,(vlSelf->top__DOT__exu_step__DOT__Regfile
                                       [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                  >> 7U))]),64);
            tracep->chgQData(oldp+268,((((((0x100073U 
                                            != vlSelf->top__DOT__idu_step_io_inst) 
                                           & ((0x3023U 
                                               != (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst)) 
                                              & ((0x1023U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst)) 
                                                 & ((0x23U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__idu_step_io_inst)) 
                                                    & ((0x2023U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__idu_step_io_inst)) 
                                                       & ((0x1063U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__idu_step_io_inst)) 
                                                          & ((0x63U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__idu_step_io_inst)) 
                                                             & ((0x5063U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__idu_step_io_inst)) 
                                                                & ((0x4063U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__idu_step_io_inst)) 
                                                                   & ((0x6063U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->top__DOT__idu_step_io_inst)) 
                                                                      & ((0x7063U 
                                                                          != 
                                                                          (0x707fU 
                                                                           & vlSelf->top__DOT__idu_step_io_inst)) 
                                                                         & ((0x73U 
                                                                             != vlSelf->top__DOT__idu_step_io_inst) 
                                                                            & (0x30200073U 
                                                                               != vlSelf->top__DOT__idu_step_io_inst))))))))))))) 
                                          & (0U != 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__idu_step_io_inst 
                                                 >> 7U)))) 
                                         & (IData)(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid))
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__idu_step_io_inst 
                                                 >> 7U)))
                                             ? 0ULL
                                             : vlSelf->top__DOT__exu_step__DOT__Regfile
                                            [(0x1fU 
                                              & (vlSelf->top__DOT__idu_step_io_inst 
                                                 >> 7U))]))),64);
            tracep->chgQData(oldp+270,(vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                       [((0x342U == 
                                          (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                          ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]),64);
            tracep->chgQData(oldp+272,(((IData)(vlSelf->top__DOT__exu_step__DOT___T_5)
                                         ? vlSelf->top__DOT__pc_now
                                         : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [1U])),64);
            tracep->chgQData(oldp+274,(((IData)(vlSelf->top__DOT__exu_step__DOT___T_5)
                                         ? vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [0x11U] : vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                                        [3U])),64);
            tracep->chgQData(oldp+276,(((((0x1073U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__idu_step_io_inst)) 
                                          | ((0x2073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__idu_step_io_inst)) 
                                             | (0x3073U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__idu_step_io_inst)))) 
                                         & (IData)(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rvalid))
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
            tracep->chgQData(oldp+278,(((0U == (0x1fU 
                                                & (vlSelf->top__DOT__idu_step_io_inst 
                                                   >> 7U)))
                                         ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
                                        [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                   >> 7U))])),64);
            tracep->chgQData(oldp+280,(((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
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
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+282,(vlSelf->top__DOT__axi__DOT__Mem_modle_Rdata),64);
            tracep->chgBit(oldp+284,((0x44U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188))));
            tracep->chgBit(oldp+285,(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en));
            tracep->chgIData(oldp+286,((IData)(vlSelf->top__DOT__exu_step__DOT__add_res)),32);
            tracep->chgQData(oldp+287,(vlSelf->top__DOT__exu_step_io_Mem_wdata),64);
            tracep->chgCData(oldp+289,(vlSelf->top__DOT__idu_step_io_ctrl_sign_Wmask),8);
            tracep->chgQData(oldp+290,(vlSelf->top__DOT__arbiter_io_lsu_axi_out_rdata),64);
            tracep->chgIData(oldp+292,((IData)(vlSelf->top__DOT__exu_step_io_Mem_wdata)),32);
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata),64);
            tracep->chgIData(oldp+295,((IData)(vlSelf->top__DOT__arbiter_io_ifu_axi_out_rdata)),32);
            tracep->chgIData(oldp+296,(vlSelf->top__DOT__idu_step_io_inst),32);
            tracep->chgIData(oldp+297,(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194),32);
            tracep->chgCData(oldp+298,((0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+299,((0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+300,((0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                                 >> 7U))),5);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__idu_step_io_imm),64);
            tracep->chgBit(oldp+303,(((0x100073U != vlSelf->top__DOT__idu_step_io_inst) 
                                      & ((0x3023U != 
                                          (0x707fU 
                                           & vlSelf->top__DOT__idu_step_io_inst)) 
                                         & ((0x1023U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__idu_step_io_inst)) 
                                            & ((0x23U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__idu_step_io_inst)) 
                                               & ((0x2023U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu_step_io_inst)) 
                                                  & ((0x1063U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__idu_step_io_inst)) 
                                                     & ((0x63U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__idu_step_io_inst)) 
                                                        & ((0x5063U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__idu_step_io_inst)) 
                                                           & ((0x4063U 
                                                               != 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__idu_step_io_inst)) 
                                                              & ((0x6063U 
                                                                  != 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__idu_step_io_inst)) 
                                                                 & ((0x7063U 
                                                                     != 
                                                                     (0x707fU 
                                                                      & vlSelf->top__DOT__idu_step_io_inst)) 
                                                                    & ((0x73U 
                                                                        != vlSelf->top__DOT__idu_step_io_inst) 
                                                                       & (0x30200073U 
                                                                          != vlSelf->top__DOT__idu_step_io_inst)))))))))))))));
            tracep->chgBit(oldp+304,(((0x1073U == (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst)) 
                                      | ((0x2073U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__idu_step_io_inst)) 
                                         | (0x3073U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__idu_step_io_inst))))));
            tracep->chgBit(oldp+305,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src2_is_imm));
            tracep->chgBit(oldp+306,(vlSelf->top__DOT__idu_step_io_ctrl_sign_src1_is_pc));
            tracep->chgQData(oldp+307,((((QData)((IData)(
                                                         vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))),64);
            tracep->chgIData(oldp+309,((2U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
            tracep->chgIData(oldp+310,((0x3dU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))),32);
            tracep->chgSData(oldp+311,((vlSelf->top__DOT__idu_step_io_inst 
                                        >> 0x14U)),12);
            tracep->chgIData(oldp+312,(((0x80000U & 
                                         (vlSelf->top__DOT__idu_step_io_inst 
                                          >> 0xcU)) 
                                        | ((0x7f800U 
                                            & (vlSelf->top__DOT__idu_step_io_inst 
                                               >> 1U)) 
                                           | ((0x400U 
                                               & (vlSelf->top__DOT__idu_step_io_inst 
                                                  >> 0xaU)) 
                                              | (0x3ffU 
                                                 & (vlSelf->top__DOT__idu_step_io_inst 
                                                    >> 0x15U)))))),20);
            tracep->chgIData(oldp+313,((vlSelf->top__DOT__idu_step_io_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+314,(((0xfe0U & (vlSelf->top__DOT__idu_step_io_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->top__DOT__idu_step_io_inst 
                                            >> 7U)))),12);
            tracep->chgSData(oldp+315,(((0x800U & (vlSelf->top__DOT__idu_step_io_inst 
                                                   >> 0x14U)) 
                                        | ((0x400U 
                                            & (vlSelf->top__DOT__idu_step_io_inst 
                                               << 3U)) 
                                           | ((0x3f0U 
                                               & (vlSelf->top__DOT__idu_step_io_inst 
                                                  >> 0x15U)) 
                                              | (0xfU 
                                                 & (vlSelf->top__DOT__idu_step_io_inst 
                                                    >> 8U)))))),12);
            tracep->chgIData(oldp+316,(vlSelf->top__DOT__idu_step__DOT___inst_type_T_188),32);
            tracep->chgCData(oldp+317,(((0x342U == 
                                         (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                                         ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))),2);
            tracep->chgSData(oldp+318,((0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm))),12);
            tracep->chgQData(oldp+319,(vlSelf->top__DOT__exu_step__DOT__src1_value),64);
            tracep->chgQData(oldp+321,(vlSelf->top__DOT__exu_step__DOT__src2_value),64);
            tracep->chgQData(oldp+323,(vlSelf->top__DOT__exu_step__DOT__add_res),64);
            tracep->chgQData(oldp+325,(vlSelf->top__DOT__exu_step__DOT__sub_res),64);
            tracep->chgQData(oldp+327,(vlSelf->top__DOT__exu_step__DOT__sra_res),64);
            tracep->chgQData(oldp+329,(vlSelf->top__DOT__exu_step__DOT__srl_res),64);
            tracep->chgWData(oldp+331,(vlSelf->top__DOT__exu_step__DOT__sll_res),127);
            tracep->chgIData(oldp+335,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_step__DOT__src1_value), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__exu_step__DOT__src2_value)))),32);
            tracep->chgIData(oldp+336,(vlSelf->top__DOT__exu_step__DOT__srlw_res),32);
            tracep->chgQData(oldp+337,(vlSelf->top__DOT__exu_step__DOT__sllw_res),63);
            tracep->chgQData(oldp+339,(vlSelf->top__DOT__exu_step__DOT__or_res),64);
            tracep->chgQData(oldp+341,(vlSelf->top__DOT__exu_step__DOT__xor_res),64);
            tracep->chgQData(oldp+343,(vlSelf->top__DOT__exu_step__DOT__and_res),64);
            VL_EXTEND_WQ(128,64, __Vtemp181, vlSelf->top__DOT__exu_step__DOT__src1_value);
            VL_EXTEND_WQ(128,64, __Vtemp182, vlSelf->top__DOT__exu_step__DOT__src2_value);
            VL_MUL_W(4, __Vtemp183, __Vtemp181, __Vtemp182);
            tracep->chgQData(oldp+345,((((QData)((IData)(
                                                         __Vtemp183[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp183[0U])))),64);
            tracep->chgIData(oldp+347,((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2)),32);
            tracep->chgIData(oldp+348,((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4)),32);
            tracep->chgIData(oldp+349,(vlSelf->top__DOT__exu_step__DOT__divuw_res),32);
            tracep->chgIData(oldp+350,(vlSelf->top__DOT__exu_step__DOT__remw_res),32);
            tracep->chgIData(oldp+351,(vlSelf->top__DOT__exu_step__DOT__remuw_res),32);
            VL_EXTENDS_WQ(65,64, __Vtemp186, vlSelf->top__DOT__exu_step__DOT__src1_value);
            __Vtemp187[0U] = __Vtemp186[0U];
            __Vtemp187[1U] = __Vtemp186[1U];
            __Vtemp187[2U] = (1U & __Vtemp186[2U]);
            VL_EXTENDS_WQ(65,64, __Vtemp189, vlSelf->top__DOT__exu_step__DOT__src2_value);
            __Vtemp190[0U] = __Vtemp189[0U];
            __Vtemp190[1U] = __Vtemp189[1U];
            __Vtemp190[2U] = (1U & __Vtemp189[2U]);
            VL_DIVS_WWW(65, __Vtemp191, __Vtemp187, __Vtemp190);
            __Vtemp192[0U] = __Vtemp191[0U];
            __Vtemp192[1U] = __Vtemp191[1U];
            __Vtemp192[2U] = (1U & __Vtemp191[2U]);
            tracep->chgWData(oldp+352,(__Vtemp192),65);
            tracep->chgQData(oldp+355,(VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+357,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
            tracep->chgQData(oldp+359,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value)),64);
        }
        tracep->chgBit(oldp+361,(vlSelf->clock));
        tracep->chgBit(oldp+362,(vlSelf->reset));
        tracep->chgIData(oldp+363,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+364,(vlSelf->io_pc),64);
        tracep->chgQData(oldp+366,(vlSelf->io_pc_next),64);
        tracep->chgQData(oldp+368,(vlSelf->io_outval),64);
        tracep->chgBit(oldp+370,(vlSelf->io_step));
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
