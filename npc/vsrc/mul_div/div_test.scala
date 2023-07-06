package my_alu

import chisel3._
import chisel3.util._
import chiseltest._
import chisel3.experimental.BundleLiterals._
import chiseltest.formal._
import chiseltest.formal.BoundedCheck
import utest._

class div_test extends Module {
    val io = IO(new Bundle{
        val a = Input(UInt(64.W))
        val b = Input(UInt(64.W))
        val out_q = Output(UInt(64.W))
        val out_r = Output(UInt(64.W))
    })
    val div_valid = true.B
    val flush = false.B
    val divw = true.B
    val div_signed  = 1.U(1.W)
    val div = (Module(new Div).io)
    div.div_valid := div_valid
    div.flush := flush
    div.divw := divw
    div.div_signed := div_signed
    div.dividend := io.a
    div.divisor := io.b
    io.out_q := div.quotient
    io.out_r := div.remainder
    //printf("%d %d\n",div.result_hi,div.result_lo)
    //val ref = io.a * io.b
    //chisel3.assert(io.out === ref)
}