package  mycpu

import chisel3._
import chisel3.util._
import  Constants._

class LSU extends Module{
    val io = IO(new Bundle{
        val pc = Input(UInt(64.W))
        val es_to_ms_valid = Input(Bool())
        val ws_allowin = Input(Bool())
        val ms_allowin = Output(Bool())
        val rf_we = Input(Bool())
        val rf_dst = Input(UInt(5.W))
        val alu_res = Input(UInt(64.W))
        val store_data = Input(UInt(64.W))
        val wen = Input(Bool())
        val wstrb = Input(UInt(8.W))
        val ren = Input(Bool())
        val maddr = Input(UInt(64.W))
        val to_ws_pc = Output(UInt(64.W))
        val ms_final_res = Output(UInt(64.W))
        val ms_to_ws_valid = Output(Bool())
        val to_ws_rf_we = Output(Bool())
        val to_ws_rf_dst = Output(UInt(5.W))
    })
    val ms_valid = RegInit(false.B(Bool()))
    val ms_pc = RegInit(0.U(64.W))
    val ms_to_ws_valid = Wire(Bool())
    val ms_ready_go = Wire(Bool())
    val ms_allowin = Wire(Bool())
    val ms_rf_we = RegInit(false.B(Bool()))
    val ms_rf_dst = RegInit(0.U(5.W))
    val ms_res = RegInit(0.U(64.W))
    //val ms_sel_rf_res = RegInit(false.B(Bool()))
    val store_data = RegInit(0.U(64.W))
    val wen = RegInit(false.B(Bool()))
    val wstrb = RegInit(0.U(8.W))
    val ren = RegInit(false.B(Bool()))
    

    when(ms_allowin){
        ms_valid := io.es_to_ms_valid
    }
    when(io.es_to_ms_valid&&ms_allowin){
        ms_pc := io.pc
        ms_rf_we := io.rf_we
        ms_rf_dst := io.rf_dst
        ms_res := io.alu_res
        //ms_sel_rf_res := io.sel_rf_res
        store_data := io.store_data
        wen := io.wen
        wstrb := io.wstrb
        ren := io.ren
    }

    ms_ready_go := true.B
    ms_allowin := !ms_valid || (ms_ready_go&&ws_allowin)
    ms_to_ws_valid := ms_valid && ms_ready_go
    
    val ms_final_res = Mux(ren,mem_rdata,ms_res)
    Mem_modle.io.Raddr := io.maddr
    Mem_modle.io.Waddr := io.maddr
    Mem_modle.io.Wdata := store_data
    Mem_modle.io.Wmask := wstrb
    Mem_modle.io.Write_en := wen
    Mem_modle.io.Read_en := ren
    val mem_rdata = Mem_modle.io.Rdata
    val ms_final_res = Mux(ms_sel_rf_res,mem_rdata,ms_res)
    io.ms_final_res := ms_final_res
    io.ms_to_ws_valid := ms_to_ws_valid
    io.to_ws_rf_dst := ms_rf_dst
    io.to_ws_rf_we := ms_rf_we
}