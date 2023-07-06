package  mycpu

import chisel3._
import chisel3.util._
import  Constants._

class WBU extends Module{
    val io = IO(new Bundle{
        val pc = Input(UInt(64.W))
        val ms_to_ws_valid = Input(Bool())
        val ms_final_res = Input(UInt(64.W))
        val rf_we = Input(Bool())
        val rf_dst = Input(UInt(5.W))
        val we = Output(Bool())
        val waddr = Output(UInt(5.W))
        val wdata = Output(UInt(64.W))
    })
    val ws_valid = RegInit(false.B(Bool()))
    val ws_pc = RegInit(0.U(64.W))
    //val ms_to_ws_valid = Wire(Bool())
    val ws_ready_go = Wire(Bool())
    val ws_allowin = Wire(Bool())
    val ws_rf_we = RegInit(false.B(Bool()))
    val ws_rf_dst = RegInit(0.U(5.W))
    val ws_res = RegInit(0.U(64.W))
    //val ms_sel_rf_res = RegInit(false.B(Bool()))
    //val store_data = RegInit(0.U(64.W))
    //val wen = RegInit(false.B(Bool()))
    //val wstrb = RegInit(0.U(8.W))
    //val ren = RegInit(false.B(Bool()))
    

    when(ws_allowin){
        ws_valid := io.ms_to_ws_valid
    }
    when(io.ms_to_ws_valid&&ws_allowin){
        ws_pc := io.pc
        ws_rf_we := io.rf_we
        ws_rf_dst := io.rf_dst
        ws_res := io.ms_final_res
        //ms_sel_rf_res := io.sel_rf_res
        //store_data := io.store_data
        //wen := io.wen
        //wstrb := io.wstrb
        //ren := io.ren
    }

    ws_ready_go := true.B
    ws_allowin := !ws_valid || ms_ready_go
    //ms_to_ws_valid := ms_valid && ms_ready_go
    
    //io.ms_to_ws_valid := ms_to_ws_valid
    io.we := ws_rf_we
    io.waddr := ws_rf_dst
    io.wdata := ws_res
}