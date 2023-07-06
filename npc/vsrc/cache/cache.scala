package  mycpu

import chisel3._
import chisel3.util._
import  Constants._

class I_CACHE extends Module{
    val io = IO(new Bundle{
        val from_ifu = Input(new master_out())
        val to_ifu = Output(new master_in())
        val to_axi = Output(new master_out())
        val from_axi = Input(new master_in())
    })
    val idle :: lookup ::  miss :: reload :: Nil = Enum(5)
    val w_idle :: write :: Nil = Enum(2)
    val ram_0 = RegInit(VecInit(128,UInt(64.W)))
    val ram_1 = RegInit(VecInit(128,Uint(64.W)))
    val tag_0 = RegInit(VecInit(128,UInt(32.W)))
    val tag_1 = RegInit(VecInit(128,UInt(32.W)))
    val valid_0 = RegInit(VecInit(128,Bool(false.B)))
    val valid_1 = RegInit(VecInit(128,Bool(false.B)))
    val way0_hit = RegInit(false.B(Bool()))
    val way1_hit = RegInit(false.B(Bool()))

    val unuse_way = RegInit(0.U(2.W))
    val receive_data = RegInit(0.U(64.W)) 
    val quene = RegInit(0.U(1.W))
    
    val offset = io.from_ifu.araddr(5,0)
    val index = io.from_ifu.araddr(12,6)
    val tag = io.from_ifu.araddr(31,13)

    when((tag_0(index) === tag) && valid_0(index)){
         way0_hit := 1.U
    }
    when((tag_1(index) === tag) && valid_1(index)){
        way1_hit := 1.U
    }

    when(~valid_0(index)){
        unuse_way := 1.U
    }.elsewhen(~valid_1(index)){
        unuse_way := 2.U
    }.otherwise{
        unuse_way := 0.U
    }

    val state = RegInit(idle)
    switch(state){
        is(idle){
            when(io.from_ifu.arvalid){
                state := lookup
            }
            io.to_ifu.rdata := 0.U
            io.to_ifu.arready := false.B
            io.to_ifu.rvalid := false.B
            io.to_ifu.wready := false.B
            io.to_ifu.bvalid := false.B
            io.to_ifu.awready := false.B
            io.to_axi.arvalid := false.B
            io.to_axi.araddr := io.from_ifu.araddr
            io.to_axi.rready := io.from_ifu.rready
            io.to_axi.awaddr := 0.U
            io.to_axi.awvalid := false.B
            io.to_axi.wdata := 0.U
            io.to_axi.wstrb := 0.U
            io.to_axi.wvalid := false.B
            io.to_axi.bready := false.B
        }
        is(lookup){
            io.to_axi.arvalid := false.B
            io.to_axi.araddr := io.from_ifu.araddr
            io.to_axi.rready := false.B
            io.to_axi.awaddr := 0.U
            io.to_axi.awvalid := false.B
            io.to_axi.wdata := 0.U
            io.to_axi.wstrb := 0.U
            io.to_axi.wvalid := false.B
            io.to_axi.bready := false.B
            when(way0_hit){
                when(io.from_ifu.rready){
                    state := idle
                }
                io.to_ifu.rdata := ram_0(index)
                io.to_ifu.arready := true.B
                io.to_ifu.rvalid := true.B
                io.to_ifu.wready := false.B
                io.to_ifu.awready := false.B
                io.to_ifu.bvalid := false.B
                
            }.elsewhen(way1_hit){
                when(io.from_ifu.rready){
                    state := idle
                }
                io.to_ifu.rdata := ram_1(index)
                io.to_ifu.arready := true.B
                io.to_ifu.rvalid := true.B
                io.to_ifu.wready := false.B
                io.to_ifu.bvalid := false.B
                io.to_ifu.awready := false.B
            }.otherwise{
                state := miss
                io.to_ifu.rdata := 0.U
                io.to_ifu.arready := true.B
                io.to_ifu.rvalid := false.B
                io.to_ifu.wready := false.B
                io.to_ifu.bvalid := false.B
                io.to_ifu.awready := false.B
            }
        }
        is(miss){
            when(io.from_axi.rvalid){
                state := reload
            }
            io.to_ifu.rdata := 0.U
            io.to_ifu.arready := true.B
            io.to_ifu.rvalid := false.B
            io.to_ifu.wready := false.B
            io.to_ifu.bvalid := false.B
            io.to_ifu.awready := false.B
            io.to_axi.arvalid := true.B
            io.to_axi.araddr := io.from_ifu.araddr
            io.to_axi.rready := io.from_ifu.rready
            io.to_axi.awaddr := 0.U
            io.to_axi.awvalid := false.B
            io.to_axi.wdata := 0.U
            io.to_axi.wstrb := 0.U
            io.to_axi.wvalid := false.B
            io.to_axi.bready := false.B
            when(io.from_axi.rvalid){
                receive_data := io.from_axi.rdata
            }
        }
        is(reload){
            state := idle
            io.to_ifu.rdata := 0.U
            io.to_ifu.arready := true.B
            io.to_ifu.rvalid := false.B
            io.to_ifu.wready := false.B
            io.to_ifu.bvalid := false.B
            io.to_ifu.awready := false.B
            io.to_axi.arvalid := false.B
            io.to_axi.araddr := io.from_ifu.araddr
            io.to_axi.rready := io.from_ifu.rready
            io.to_axi.awaddr := 0.U
            io.to_axi.awvalid := false.B
            io.to_axi.wdata := 0.U
            io.to_axi.wstrb := 0.U
            io.to_axi.wvalid := false.B
            io.to_axi.bready := false.B
            when(unuse_way===1.U){
                ram_0(index) := receive_data
                tag_0(index) := tag
                valid_0(index) := true.B
                quene := 1.U
            }.elsewhen(unuse_way===2.U){
                ram_1(index) := receive_data
                tag_1(index) := tag
                valid_1(index) := true.B
                quene := 0.U
            }.otherwise{
                when(quene===0.U){
                    ram_0(index) := receive_data
                    tag_0(index) := tag
                    valid_0(index) := true.B
                    quene := 1.U
                }.otherwise{
                    ram_1(index) := receive_data
                    tag_1(index) := tag
                    valid_1(index) := true.B
                    quene := 0.U
                }
            }
        }
    }
    
    

}