package  mycpu

import chisel3._
import chisel3.util._
import  Constants._


class Register extends Module{
    val io = IO(new Bundle{
        val raddr1 = Input(UInt(5.W))
        val raddr2 = Input(UInt(5.W))
        val rdata1 = Output(UInt(64.W))
        val rdata2 = Output(UInt(64.W))
        val we = Input(Bool())
        val waddr = Input(UInt(5.W))
        val wdata = Input(UInt(64.W))
    })
    val Reg = Mem(32, UInt(64.W))
    when(io.we){
        Reg(waddr) := wdata
    }
    io.rdata1 := Mux(io.raddr1===0.U,0.U,Reg(io.raddr1))
    io.rdata2 := Mux(io.raddr2===0.U,0.U,Reg(io.raddr2))
}