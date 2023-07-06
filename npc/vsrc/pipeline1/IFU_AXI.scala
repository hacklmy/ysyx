package  mycpu

import chisel3._
import chisel3.util._
import  Constants._

class IFU_AXI extends Module{
    val io = IO(new Bundle{
        val pc = Input(UInt(64.W))
        val pc_ready = Output(Bool())
        val pc_valid = Input(Bool())
        val inst_valid = Output(Bool())
        //val inst_ready = Output(Bool())
        val inst = Output(UInt(32.W))
        val inst_reg = Output(UInt(32.W))
        val axi_in = Input(new master_in())
        val axi_out = Output(new master_out())
    })
    val inst_ready = RegInit(Bool(),true.B)
    when(io.axi_in.rvalid && inst_ready){
        inst_ready := 0.U
    }.otherwise{
        inst_ready := 1.U
    }
    val inst_reg = RegInit(0.U(32.W))
    when(io.axi_in.rvalid){
        inst_reg := io.axi_in.rdata(31,0)
    }.elsewhen(io.pc_valid){
        inst_reg := 0.U
    }
    io.axi_out.araddr := io.pc(31,0)
    io.axi_out.arvalid := io.pc_valid
    io.axi_out.rready := inst_ready
    io.axi_out.awaddr := 0.U
    io.axi_out.wdata := 0.U
    io.axi_out.awvalid := false.B
    io.axi_out.wstrb := 0.U
    io.axi_out.wvalid := false.B
    io.axi_out.bready := false.B
    io.pc_ready := io.axi_in.arready
    io.inst := io.axi_in.rdata(31,0)
    io.inst_reg := inst_reg 
    io.inst_valid := io.axi_in.rvalid
    //printf("inst_valid : %d pc_valid:%d\n",io.inst_valid,io.pc_valid)
    //printf("inst:%x\n",io.inst)
    //printf("%x %x\n", io.pc, io.inst)
}