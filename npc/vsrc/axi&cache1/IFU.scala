package  mycpu

import chisel3._
import chisel3.util._

class IFU extends Module{
    val io = IO(new Bundle{
        val pc = Input(UInt(64.W))
        val inst = Output(UInt(32.W))
    })
    val inst_read = Module(new MEM())
    inst_read.io.Raddr := io.pc
    io.inst := inst_read.io.Rdata(31,0)
}