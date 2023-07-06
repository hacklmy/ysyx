package  mycpu

import chisel3._
import chisel3.util._
import  Constants._

class AXI_IFU extends Module{
    val io = IO(new Bundle{
        val araddr = Input(UInt(32.W))
        val arvalid = Input(Bool())
        val rready = Input(Bool())
        val arready = Output(Bool())
        val rvalid = Output(Bool())
        val rdata = Output(UInt(64.W))
    })
   
    val axi_arready = RegInit(0.U(1.W))
    val axi_rvalid = RegInit(0.U(1.W))

    val idle :: ar_state :: Nil = Enum(2)
    val state = RegInit(idle)

    val inst_read = Module(new MEM())
    inst_read.io.Raddr := Cat(Fill(32,0.U),io.araddr)
    inst_read.io.Read_en := axi_arready.asBool && io.arvalid

    switch(state){
        is(idle){
            when(io.arvalid){
                state := ar_state
                axi_arready := 0.U
                axi_rvalid := 1.U
            }
        }
        is(ar_state){
            when(io.rready){
                state := idle
                axi_arready := 1.U
                axi_rvalid := 0.U
            }
        }
    }
    io.arready := axi_arready
    io.rvalid := axi_rvalid
    io.rdata := inst_read.io.Rdata
    //printf("%x %x %x\n", io.araddr, io.rdata, inst_read.io.Rdata)
}