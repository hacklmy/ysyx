package  mycpu

import chisel3._
import chisel3.util._

class IFU extends Module{
    val io = IO(new Bundle{
        //val pc = Input(UInt(64.W))
        val to_fs_valid = Input(Bool())
        val ds_allowin = Input(Bool())
        val br_taken = Input(Bool())
        val br_target =  Input(UInt(64.W))
        val br_taken_cancel = Input(Bool())
        val to_ds_pc = Output(UInt(64.W))
        val fs_to_ds_valid = Output(Bool())
        val inst = Output(UInt(32.W))
    })
    val fs_valid = RegInit(Bool(),false.B)
    val fs_ready_go = Wire(Bool())
    val fs_to_ds_valid = Wire(Bool())
    //val to_fs_valid = Wire(Bool())
    val fs_allowin = Wire(Bool())
    val pc_next = Wire(UInt(64.W))

    val fs_pc = RegInit("x7ffffffc".U(64.W))
    //val inst = RegInit(0.U(32.W))

    val inst_read = Module(new MEM())
    //val br_taken_cancel = Wire(Bool())
    val seq_pc = fs_pc + 4.U
    pc_next := Mux(io.br_taken,io.br_target, seq_pc)

    fs_ready_go := true.B
    fs_to_ds_valid := fs_valid  & fs_ready_go
    fs_allowin := !fs_valid || (fs_ready_go && io.ds_allowin)

    when(io.to_fs_valid&fs_allowin){
        fs_valid := true.B
        fs_pc := pc_next
    }.elsewhen(io.br_taken_cancel){
        fs_valid := false.B
    }

    inst_read.io.Raddr := fs_pc
    inst_read.io.Read_en := fs_valid
    io.fs_to_ds_valid := fs_to_ds_valid
    io.inst := inst_read.io.Rdata(31,0)
    io.to_ds_pc := fs_pc
    //inst := inst_read.io.Rdata(31,0)
    printf("fs_pc:%x fa_valid:%d\n",fs_pc,fs_valid)
}