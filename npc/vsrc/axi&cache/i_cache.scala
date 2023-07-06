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
    //printf("enter cache\n")
    val idle :: lookup ::  miss :: reload :: lookup_wait :: Nil = Enum(5)
    //val w_idle :: write :: Nil = Enum(2)
    val ram_0 = RegInit(VecInit(Seq.fill(128)(0.U(64.W))))
    val ram_1 = RegInit(VecInit(Seq.fill(128)(0.U(64.W))))
    val tag_0 = RegInit(VecInit(Seq.fill(128)(0.U(32.W))))
    val tag_1 = RegInit(VecInit(Seq.fill(128)(0.U(32.W))))
    val valid_0 = RegInit(VecInit(Seq.fill(128)(0.U(1.W))))
    val valid_1 = RegInit(VecInit(Seq.fill(128)(0.U(1.W))))
    val way0_hit = RegInit(Bool(),false.B)
    val way1_hit = RegInit(Bool(),false.B)

    val unuse_way = RegInit(0.U(2.W))
    val receive_data = RegInit(0.U(64.W)) 
    val quene = RegInit(0.U(1.W))
    
    //val offset = io.from_ifu.araddr(5,0)
    val index = io.from_ifu.araddr(6,0)
    val tag = io.from_ifu.araddr(31,7)

    when((tag_0(index) === tag) && valid_0(index)===1.U){
         way0_hit := 1.U
    }.otherwise{
        way0_hit := 0.U
    }
    when((tag_1(index) === tag) && valid_1(index)===1.U){
        way1_hit := 1.U
    }.otherwise{
        way1_hit := 0.U
    }

    when(valid_0(index)===0.U){
        unuse_way := 1.U
    }.elsewhen(valid_1(index)===0.U){
        unuse_way := 2.U
    }.otherwise{
        unuse_way := 0.U
    }

    val state = RegInit(idle)
    //printf("i_cache state:%d\n",state)
    switch(state){
        is(idle){
            when(io.from_ifu.arvalid){
                state := lookup
            }
            
        }
        is(lookup){
            when(way0_hit){
                when(io.from_ifu.rready){
                    state := idle
                }
                
            }.elsewhen(way1_hit){
                when(io.from_ifu.rready){
                    state := idle
                }
            }.otherwise{
                state := miss
            }
        }
        is(miss){
            when(io.from_axi.rvalid){
                state := reload
            }
            when(io.from_axi.rvalid){
                receive_data := io.from_axi.rdata
            }
        }
        is(reload){
            state := lookup_wait
            when(unuse_way===1.U){
                ram_0(index) := receive_data
                tag_0(index) := tag
                valid_0(index) := 1.U
                quene := 1.U
            }.elsewhen(unuse_way===2.U){
                ram_1(index) := receive_data
                tag_1(index) := tag
                valid_1(index) := 1.U
                quene := 0.U
            }.otherwise{
                when(quene===0.U){
                    ram_0(index) := receive_data
                    tag_0(index) := tag
                    valid_0(index) := 1.U
                    quene := 1.U
                }.otherwise{
                    ram_1(index) := receive_data
                    tag_1(index) := tag
                    valid_1(index) := 1.U
                    quene := 0.U
                }
            }
        }
        is(lookup_wait){
            state := lookup
        }
    }
    when(state===idle){
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
    }.elsewhen(state===lookup){
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
                io.to_ifu.rdata := ram_0(index)
                io.to_ifu.arready := true.B
                io.to_ifu.rvalid := true.B
                io.to_ifu.wready := false.B
                io.to_ifu.awready := false.B
                io.to_ifu.bvalid := false.B
                
            }.elsewhen(way1_hit){
                io.to_ifu.rdata := ram_1(index)
                io.to_ifu.arready := true.B
                io.to_ifu.rvalid := true.B
                io.to_ifu.wready := false.B
                io.to_ifu.bvalid := false.B
                io.to_ifu.awready := false.B
            }.otherwise{
                io.to_ifu.rdata := 0.U
                io.to_ifu.arready := true.B
                io.to_ifu.rvalid := false.B
                io.to_ifu.wready := false.B
                io.to_ifu.bvalid := false.B
                io.to_ifu.awready := false.B
            }
    }.elsewhen(state===miss){
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
    }.elsewhen(state===reload){
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
    }.otherwise{
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
    //printf("to ifu rdata:%x\n",io.to_ifu.rdata)
}