package  mycpu

import chisel3._
import chisel3.util._
import  Constants._

class  LSU extends Module{
    val io = IO(new Bundle{
        val inst_store = Input(Bool())
        val inst_load = Input(Bool())
        val mem_addr = Input(UInt(32.W))
        val mem_wdata = Input(UInt(64.W))
        val mem_wstrb = Input(UInt(8.W))
        val mem_rdata = Output(UInt(64.W))
        val axi_in = Input(new master_in())
        val axi_out = Output(new master_out())
    })

    val axi_arvalid = RegInit(0.U(1.W))
    //val axi_araddr = RegInit(0.U(32.W))
    //val axi_awaddr = RegInit(0.U(32.W))
    val axi_rready = RegInit(Bool(), true.B)
    val axi_awvalid = RegInit(0.U(1.W))
    val axi_wvalid = RegInit(0.U(1.W))
    val axi_bready = RegInit(Bool(), true.B)

    val idle :: bvalid :: arvalid ::Nil = Enum(3)
    val state = RegInit(idle)

    switch(state){
        is(idle){
            when(io.inst_load){
                state := arvalid
                axi_arvalid := 1.U
                axi_rready := 1.U
            }.elsewhen(io.inst_store){
                state := bvalid
                axi_awvalid := 1.U
                axi_wvalid := 1.U
                axi_bready := 1.U
            }
        }
        is(bvalid){
            when(io.axi_in.bvalid){
                state := idle
                axi_bready := 0.U
            }
            when(io.axi_in.wready){
                axi_wvalid := 0.U
            }
            when(io.axi_in.awready){
                axi_awvalid := 0.U
            }
        }
        is(arvalid){
            when(io.axi_in.arready){
                axi_arvalid := 0.U
            }
            when(io.axi_in.rvalid){
                state := idle
                axi_rready := 0.U
            }
        }
    }
    //printf("bvalid: %d\n",io.axi_in.bvalid)

    // val idle :: aw_state :: w_state :: bv_state :: ar_state :: wait :: Nil = Enum(6)
    // val state = RegInit(idle)
    //printf("axi_arvalid : %d axi_arready : %d axi_awvalid : %d  axi_rready : %d\n\n", axi_arvalid, axi.io.axi_out.arready, axi_awvalid, axi_rready)
    //printf("Readmem_en : %d Writemem_en : %d\n", io.ctrl_sign.Readmem_en, io.ctrl_sign.Writemem_en)

    io.mem_rdata := io.axi_in.rdata
    io.axi_out.araddr := io.mem_addr
    io.axi_out.arvalid := axi_arvalid
    io.axi_out.arlen := 0.U
    io.axi_out.arsize := 6.U
    io.axi_out.arburst := 0.U
    io.axi_out.rready := axi_rready
    io.axi_out.awaddr := io.mem_addr
    io.axi_out.awvalid := axi_awvalid
    io.axi_out.awlen := 0.U
    io.axi_out.awsize := 6.U
    io.axi_out.awburst := 0.U
    io.axi_out.wdata := io.mem_wdata
    io.axi_out.wstrb := io.mem_wstrb
    io.axi_out.wlast := true.B
    io.axi_out.wvalid := axi_wvalid
    io.axi_out.bready := axi_bready
    //io.exu_arvalid := axi_arvalid
    //io.exu_awvalid := axi_awvalid

    //io.mem_flag := io.ctrl_sign.Readmem_en || io.ctrl_sign.Writemem_en
    //io.mem_end := (io.ctrl_sign.Readmem_en && axi_rready && axi.io.axi_out.rvalid) || (io.ctrl_sign.Writemem_en && axi_bready && axi.io.axi_out.bvalid)
}