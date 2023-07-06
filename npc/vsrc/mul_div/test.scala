package my_alu

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class TestMain extends AnyFlatSpec with ChiselScalatestTester{
    "DUT" should "pass" in {
        test(new mul_test).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
            println("mul_test--------")
            dut.io.a.poke(2.U(64.W))
            dut.io.b.poke(1.U(64.W))
            dut.clock.step(35)
            dut.io.out.expect(2.U(64.W))
        }
        // test(new div_test).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
        //     println("div_test--------")
        //     dut.io.a.poke("hfffffffffffffff1".U(64.W))
        //     dut.io.b.poke(14.U(64.W))
        //     dut.clock.step(65)
        //     dut.io.out_q.expect("hffffffffffffffff".U(64.W))
        //     dut.io.out_r.expect(1.U(64.W))
        // }
    }
}