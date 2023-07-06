package mycpu

import chisel3._
import chisel3.util._
import  Constants._

class top extends Module{
    val io = IO(new Bundle{
        val inst = Output(UInt(32.W))
        val pc = Output(UInt(64.W))
        val pc_next = Output(UInt(64.W))
        val outval = Output(UInt(64.W))
        val step = Output(Bool())
    })
    val regfile = Module(new Register).io
    val ifu = Module(new IFU).io
    val idu = Module(new IDU).io
    val exu = Module(new EXU).io
    val mem = Module(new LSU).io
    val wbu = Module(new WBU).io
    val pre_if_to_if_valid = Wire(Bool())
    pre_if_to_if_valid := true.B
    ifu.to_fs_valid := pre_if_to_if_valid
    ifu.ds_allowin := idu.ds_allowin
    ifu.br_taken := idu.br_taken
    ifu.br_target := idu.br_target
    ifu.br_taken_cancel := idu.br_taken_cancel
    
    idu.pc := ifu.to_ds_pc
    idu.fs_to_ds_valid := ifu.fs_to_ds_valid
    idu.es_allowin := exu.es_allowin
    idu.from_fs_inst := ifu.inst
    regfile.raddr1 := idu.raddr1
    regfile.raddr2 := idu.raddr2
    idu.rdata1 := regfile.rdata1
    idu.rdata2 := regfile.rdata2
    
    exu.pc := idu.to_es_pc
    exu.ds_to_es_valid := idu.ds_to_es_valid
    exu.ms_allowin := mem.ms_allowin
    exu.inst_now := idu.inst_now
    exu.src1_value := idu.src1
    exu.src2_value := idu.src2
    exu.rf_dst := idu.rf_dst
    exu.store_data := idu.store_data
    exu.ctrl_sign := idu.ctrl_sign

    mem.pc := exu.to_ms_pc
    mem.es_to_ms_valid := exu.es_to_ms_valid
    mem.ws_allowin := wbu.ws_allowin
    mem.rf_we := exu.to_ms_rf_we
    mem.rf_dst := exu.to_ms_rf_dst
    mem.alu_res := exu.to_ms_alures
    mem.store_data := exu.to_ms_store_data
    mem.wen := exu.to_ms_wen
    mem.wstrb := exu.to_ms_wstrb
    mem.ren := exu.to_ms_ren
    mem.maddr := exu.to_ms_maddr

    wbu.pc := mem.to_ws_pc
    wbu.ms_to_ws_valid := mem.ms_to_ws_valid
    wbu.ms_final_res := mem.ms_final_res
    wbu.rf_we := mem.to_ws_rf_we
    wbu.rf_dst := mem.to_ws_rf_dst
    regfile.we := wbu.we
    regfile.waddr := wbu.waddr
    regfile.wdata := wbu.wdata
}