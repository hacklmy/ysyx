package my_alu

import chisel3._
import chisel3.util._
import chiseltest._
import chisel3.experimental.BundleLiterals._
import chiseltest.formal._
import chiseltest.formal.BoundedCheck
import utest._

class mul_test extends Module {
    val io = IO(new Bundle{
        val a = Input(UInt(64.W))
        val b = Input(UInt(64.W))
        val out = Output(UInt(64.W))
    })
    val mul_valid = true.B
    val flush = false.B
    val mulw = true.B
    val mul_signed  = 3.U(2.W)
    val mul = (Module(new Mul).io)
    mul.mul_valid := mul_valid
    mul.flush := flush
    mul.mulw := mulw
    mul.mul_signed := mul_signed
    mul.multiplicand := io.a
    mul.multiplier := io.b
    io.out := Cat(mul.result_hi, mul.result_lo)
    printf("%d %d\n",mul.result_hi,mul.result_lo)
    //val ref = io.a * io.b
    //chisel3.assert(io.out === ref)
}