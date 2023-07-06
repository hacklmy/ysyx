package  mycpu

import chisel3._
import chisel3.util._
import  Constants._

class AXI_EXU extends Module{
    val io = IO(new Bundle{
        val axi_in = Input(new master_out())
        val axi_out = Output(new master_in())
    })
    //val axi_awaddr = RegInit(0.U(32.W))
    val axi_awready = RegInit(1.U(1.W))
    val axi_wready = RegInit(1.U(1.W))
    //val axi_wdata = RegInit(0.U(64.W))
    //val axi_wstrb = RegInit(0.U(8.W))
    val axi_bvalid = RegInit(0.U(1.W))
    //val axi_araddr = RegInit(0.U(32.W))
    val axi_arready = RegInit(1.U(1.W))
    //val axi_rdata = RegInit(0.U(64.W))
    val axi_rvalid = RegInit(0.U(1.W))

    val idle :: aw_state :: w_state :: bv_state :: ar_state :: Nil = Enum(5)
    val state = RegInit(idle)

    val Mem_modle = Module(new MEM())
    Mem_modle.io.Raddr := io.axi_in.araddr
    Mem_modle.io.Waddr := io.axi_in.awaddr
    Mem_modle.io.Wdata := io.axi_in.wdata
    Mem_modle.io.Wmask := io.axi_in.wstrb
    Mem_modle.io.Write_en := axi_wready.asBool && io.axi_in.wvalid
    Mem_modle.io.Read_en := axi_arready.asBool && io.axi_in.arvalid
    val mem_rdata = Mem_modle.io.Rdata

    switch(state){
        is(idle){
            when(io.axi_in.awvalid && io.axi_in.wvalid){
                state := bv_state
                axi_awready := 0.U
                axi_wready := 0.U
                axi_bvalid := 1.U
                
                //axi_awaddr := io.axi_in.araddr
                //axi_wdata := io.axi_in.wdata
                //axi_wstrb := io.axi_in.wstrb

            }.elsewhen(io.axi_in.arvalid){
                state := ar_state
                axi_arready := 0.U
                axi_rvalid := 1.U
            }
        }
        is(bv_state){
            when(io.axi_in.bready){
                state := idle
                axi_bvalid := 0.U
                axi_awready := 1.U
                axi_wready := 1.U
            }
        }
        is(ar_state){
            when(io.axi_in.rready){
                state := idle
                axi_arready := 1.U
                axi_rvalid := 0.U
            }
        }
    }
    io.axi_out.arready := axi_arready
    io.axi_out.rdata := mem_rdata
    io.axi_out.rvalid := axi_rvalid
    io.axi_out.awready := axi_awready
    io.axi_out.wready := axi_wready
    io.axi_out.bvalid := axi_bvalid
}