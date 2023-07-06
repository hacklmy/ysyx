package  mycpu

import chisel3._
import chisel3.util._
import  Constants._

class D_CACHE extends Module{
    val io = IO(new Bundle{
        val pc_now = Input(UInt(64.W))
        val from_lsu = Input(new master_out())
        val to_lsu = Output(new master_in())
        val to_axi = Output(new master_out())
        val from_axi = Input(new master_in())
    })
    //printf("enter cache\n")
    //printf("read addr : %x  write addr : %x\n",io.from_lsu.araddr,io.from_lsu.awaddr)
    val idle :: r_lookup :: w_lookup ::  r_miss :: w_miss :: reload :: write_back :: lookup_wait :: Nil = Enum(8)
    //val w_idle :: write :: Nil = Enum(2)
    val ram_0 = RegInit(VecInit(Seq.fill(128)(0.U(64.W))))
    val ram_1 = RegInit(VecInit(Seq.fill(128)(0.U(64.W))))
    //val record_wdata1 = RegInit(VecInit(Seq.fill(128)(0.U(64.W))))
    //val record_wstrb1 = RegInit(VecInit(Seq.fill(128)(0.U(8.W))))
    //val record_pc = RegInit(VecInit(Seq.fill(128)(0.U(64.W))))
    //val record_addr = RegInit(VecInit(Seq.fill(128)(0.U(32.W))))
    //val record_olddata = RegInit(VecInit(Seq.fill(128)(0.U(64.W))))
    //val recent_wdata0 = RegInit(VecInit(Seq.fill(128)(0.U(64.W))))
    //val recent_wdata1 = RegInit(VecInit(Seq.fill(128)(0.U(64.W))))
    val tag_0 = RegInit(VecInit(Seq.fill(128)(0.U(32.W))))
    val tag_1 = RegInit(VecInit(Seq.fill(128)(0.U(32.W))))
    val valid_0 = RegInit(VecInit(Seq.fill(128)(0.U(1.W))))
    val valid_1 = RegInit(VecInit(Seq.fill(128)(0.U(1.W))))
    val dirty_0 = RegInit(VecInit(Seq.fill(128)(0.U(1.W))))
    val dirty_1 = RegInit(VecInit(Seq.fill(128)(0.U(1.W))))
    val way0_hit = RegInit(Bool(),false.B)
    val way1_hit = RegInit(Bool(),false.B)

    val write_back_data = RegInit(0.U(64.W))
    val write_back_addr = RegInit(0.U(32.W))
    //val write_back_strb = RegInit(0.U(8.W))

    val unuse_way = RegInit(0.U(2.W))
    val receive_data = RegInit(0.U(64.W)) 
    val quene = RegInit(0.U(1.W))
    //val index = Wire(UInt(32.W))
    val offset = io.from_lsu.araddr(2,0)
    val index = io.from_lsu.araddr(9,3)
    val tag = io.from_lsu.araddr(31,10)
    
    val shift_bit = Mux(offset===0.U, 0.U,
                    Mux(offset===1.U, 8.U,
                    Mux(offset===2.U, 16.U,
                    Mux(offset===3.U, 24.U,
                    Mux(offset===4.U, 32.U,
                    Mux(offset===5.U, 40.U,
                    Mux(offset===6.U, 48.U,
                    Mux(offset===7.U, 56.U,0.U))))))))
    val wmask = Wire(UInt(64.W))
    wmask :=    Mux(io.from_lsu.wstrb==="b1".U,"hff".U,
                Mux(io.from_lsu.wstrb==="b11".U,"hffff".U,
                Mux(io.from_lsu.wstrb==="hf".U,"hffffffff".U,
                Mux(io.from_lsu.wstrb==="hff".U,"hffffffffffffffff".U,0.U))))
    //printf("offset:%d\n",offset)
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
    //printf("d_cache state:%d\n",state)
    //printf("bvalid:%d\n",io.from_axi.bvalid)
    //printf("receive data:%x\n",receive_data)
    //printf("wstrb:%x\n",io.from_lsu.wstrb)
    switch(state){
        is(idle){
            when(io.from_lsu.arvalid){
                state := r_lookup
            }.elsewhen(io.from_lsu.awvalid){
                state := w_lookup
            }
            
        }
        is(r_lookup){
            when(way0_hit){
                when(io.from_lsu.rready){
                    //printf("dirty_0:%d\n",dirty_0(index))
                    state := idle
                }
                
            }.elsewhen(way1_hit){
                when(io.from_lsu.rready){
                    //printf("dirty_1:%d\n",dirty_1(index))
                    state := idle
                }
            }.otherwise{
                state := r_miss
            }
        }
        is(w_lookup){
            when(way0_hit){
                state := idle
                ram_0(index) := ((io.from_lsu.wdata & wmask) << shift_bit) | (ram_0(index) & ~(wmask << shift_bit))
                //recent_wdata0(index) := io.from_lsu.wdata & wmask
                    //((io.from_lsu.wdata & (io.from_lsu.wstrb << offset))) | (ram_0 & (~(io.from_lsu.wstrb<<offset)))
                //valid_0(index) := 1.U
                dirty_0(index) := 1.U
                //tag_0(index) := io.from_lsu.waddr(31,7)
            }.elsewhen(way1_hit){
                state := idle
                //record_olddata(index) := ram_1(index)
                ram_1(index) := ((io.from_lsu.wdata & wmask) << shift_bit) | (ram_1(index) & ~(wmask << shift_bit))
                //record_wdata1(index) := io.from_lsu.wdata
                //record_wstrb1(index) := io.from_lsu.wstrb
                //record_pc(index) := io.pc_now
                //record_addr(index) := io.from_lsu.awaddr
                //valid_1(index) := 1.U
                //recent_wdata1(index) := io.from_lsu.wdata & wmask
                dirty_1(index) := 1.U
            }.otherwise{
                state := w_miss
            }
        }
        is(r_miss){
            when(io.from_axi.rvalid){
                state := reload
            }
            when(io.from_axi.rvalid){
                receive_data := io.from_axi.rdata
            }
        }
        is(w_miss){
            when(io.from_axi.bvalid){
                state := idle
            }
        }
        is(reload){
            when(unuse_way===1.U){
                state := lookup_wait
                ram_0(index) := receive_data
                tag_0(index) := tag
                valid_0(index) := 1.U
                quene := 1.U
            }.elsewhen(unuse_way===2.U){
                state := lookup_wait
                ram_1(index) := receive_data
                tag_1(index) := tag
                valid_1(index) := 1.U
                quene := 0.U
            }.otherwise{
                when(quene===0.U){
                    //stae := write_back
                    when(dirty_0(index)===1.U){
                        write_back_data := ram_0(index)
                        write_back_addr := Cat(tag_0(index) , index, Fill(3,0.U))
                        ram_0(index) := receive_data
                        tag_0(index) := tag
                        dirty_0(index) := 0.U
                        valid_0(index) := 1.U
                        state := write_back
                        quene := 1.U
                    }.otherwise{
                        state := lookup_wait
                        ram_0(index) := receive_data
                        tag_0(index) := tag
                        valid_0(index) := 1.U
                        quene := 1.U
                    }
                }.otherwise{
                    when(dirty_1(index)===1.U){
                        write_back_data := ram_1(index)
                        write_back_addr := Cat(tag_1(index) , index, Fill(3,0.U))
                        ram_1(index) := receive_data
                        tag_1(index) := tag
                        dirty_1(index) := 0.U
                        valid_1(index) := 1.U
                        state := write_back
                        quene := 0.U
                    }.otherwise{
                        state := lookup_wait
                        ram_1(index) := receive_data
                        tag_1(index) := tag
                        valid_1(index) := 1.U
                        quene := 0.U
                    }
                }
            }
        }
        is(write_back){
            when(io.from_axi.bvalid){
                state := lookup_wait
            }
        }
        is(lookup_wait){
            state := r_lookup
        }
    }
    when(state===idle){
        io.to_lsu.rdata := 0.U
        io.to_lsu.arready := io.from_axi.arready
        io.to_lsu.rvalid := false.B
        io.to_lsu.wready := false.B
        io.to_lsu.bvalid := false.B
        io.to_lsu.awready := io.from_axi.awready
        io.to_axi.arvalid := false.B
        io.to_axi.araddr := io.from_lsu.araddr
        io.to_axi.rready := io.from_lsu.rready
        io.to_axi.awaddr := 0.U
        io.to_axi.awvalid := false.B
        io.to_axi.wdata := 0.U
        io.to_axi.wstrb := 0.U
        io.to_axi.wvalid := false.B
        io.to_axi.bready := io.from_lsu.bready   
    }.elsewhen(state===r_lookup){
        io.to_axi.arvalid := false.B
        io.to_axi.araddr := io.from_lsu.araddr
        io.to_axi.rready := io.from_lsu.rready
        io.to_axi.awaddr := 0.U
        io.to_axi.awvalid := false.B
        io.to_axi.wdata := 0.U
        io.to_axi.wstrb := 0.U
        io.to_axi.wvalid := false.B
        io.to_axi.bready := io.from_lsu.bready
        when(way0_hit){
                io.to_lsu.rdata := ram_0(index) >> shift_bit
                io.to_lsu.arready := true.B
                io.to_lsu.rvalid := true.B
                io.to_lsu.wready := false.B
                io.to_lsu.awready := false.B
                io.to_lsu.bvalid := false.B   
            }.elsewhen(way1_hit){
                io.to_lsu.rdata := ram_1(index) >> shift_bit
                io.to_lsu.arready := true.B
                io.to_lsu.rvalid := true.B
                io.to_lsu.wready := false.B
                io.to_lsu.bvalid := false.B
                io.to_lsu.awready := false.B
            }.otherwise{
                io.to_lsu.rdata := 0.U
                io.to_lsu.arready := true.B
                io.to_lsu.rvalid := false.B
                io.to_lsu.wready := false.B
                io.to_lsu.bvalid := false.B
                io.to_lsu.awready := false.B
            }
    }.elsewhen(state===w_lookup){
        io.to_axi.arvalid := false.B
        io.to_axi.araddr := io.from_lsu.araddr
        io.to_axi.rready := false.B
        io.to_axi.awaddr := 0.U
        io.to_axi.awvalid := false.B
        io.to_axi.wdata := 0.U
        io.to_axi.wstrb := 0.U
        io.to_axi.wvalid := false.B
        io.to_axi.bready := false.B
        when(way0_hit){
                io.to_lsu.rdata := 0.U
                io.to_lsu.arready := false.B
                io.to_lsu.rvalid := false.B
                io.to_lsu.wready := true.B
                io.to_lsu.awready := true.B
                io.to_lsu.bvalid := true.B   
            }.elsewhen(way1_hit){
                io.to_lsu.rdata := 0.U
                io.to_lsu.arready := false.B
                io.to_lsu.rvalid := false.B
                io.to_lsu.wready := true.B
                io.to_lsu.bvalid := true.B
                io.to_lsu.awready := true.B
            }.otherwise{
                io.to_lsu.rdata := 0.U
                io.to_lsu.arready := true.B
                io.to_lsu.rvalid := false.B
                io.to_lsu.wready := false.B
                io.to_lsu.bvalid := false.B
                io.to_lsu.awready := false.B
            }
    }.elsewhen(state===r_miss){
        io.to_lsu.rdata := 0.U
        io.to_lsu.arready := true.B
        io.to_lsu.rvalid := false.B
        io.to_lsu.wready := false.B
        io.to_lsu.bvalid := false.B
        io.to_lsu.awready := false.B
        io.to_axi.arvalid := true.B
        io.to_axi.araddr := io.from_lsu.araddr & "hfffffffffffffff8".U
        io.to_axi.rready := io.from_lsu.rready
        io.to_axi.awaddr := 0.U
        io.to_axi.awvalid := false.B
        io.to_axi.wdata := 0.U
        io.to_axi.wstrb := 0.U
        io.to_axi.wvalid := false.B
        io.to_axi.bready := false.B
    }.elsewhen(state===w_miss){
        io.to_lsu.rdata := 0.U
        io.to_lsu.arready := true.B
        io.to_lsu.rvalid := false.B
        io.to_lsu.wready := io.from_axi.wready
        io.to_lsu.bvalid := io.from_axi.bvalid
        io.to_lsu.awready := io.from_axi.awready
        io.to_axi.arvalid := false.B
        io.to_axi.araddr := 0.U
        io.to_axi.rready := io.from_lsu.rready
        io.to_axi.awaddr := io.from_lsu.awaddr
        io.to_axi.awvalid := io.from_lsu.awvalid
        io.to_axi.wdata := io.from_lsu.wdata
        io.to_axi.wstrb := io.from_lsu.wstrb
        io.to_axi.wvalid := io.from_lsu.wvalid
        io.to_axi.bready := io.from_lsu.bready
    
    }.elsewhen(state===reload){
        io.to_lsu.rdata := 0.U
        io.to_lsu.arready := true.B
        io.to_lsu.rvalid := false.B
        io.to_lsu.wready := false.B
        io.to_lsu.bvalid := false.B
        io.to_lsu.awready := false.B
        io.to_axi.arvalid := false.B
        io.to_axi.araddr := io.from_lsu.araddr
        io.to_axi.rready := io.from_lsu.rready
        io.to_axi.awaddr := 0.U
        io.to_axi.awvalid := false.B
        io.to_axi.wdata := 0.U
        io.to_axi.wstrb := 0.U
        io.to_axi.wvalid := false.B
        io.to_axi.bready := false.B
    }.elsewhen(state===write_back){
        io.to_lsu.rdata := 0.U
        io.to_lsu.arready := true.B
        io.to_lsu.rvalid := false.B
        io.to_lsu.wready := false.B
        io.to_lsu.bvalid := false.B
        io.to_lsu.awready := false.B
        io.to_axi.arvalid := false.B
        io.to_axi.araddr := 0.U
        io.to_axi.rready := false.B
        io.to_axi.awaddr := write_back_addr
        io.to_axi.awvalid := true.B
        io.to_axi.wdata := write_back_data
        io.to_axi.wstrb := "hff".U
        io.to_axi.wvalid := true.B
        io.to_axi.bready := true.B
    }.otherwise{
        io.to_lsu.rdata := 0.U
        io.to_lsu.arready := false.B
        io.to_lsu.rvalid := false.B
        io.to_lsu.wready := false.B
        io.to_lsu.bvalid := false.B
        io.to_lsu.awready := false.B
        io.to_axi.arvalid := false.B
        io.to_axi.araddr := io.from_lsu.araddr
        io.to_axi.rready := io.from_lsu.rready
        io.to_axi.awaddr := 0.U
        io.to_axi.awvalid := false.B
        io.to_axi.wdata := 0.U
        io.to_axi.wstrb := 0.U
        io.to_axi.wvalid := false.B
        io.to_axi.bready := false.B     
    }
    //printf("to lsu rdata:%x\n",io.to_lsu.rdata)
    //printf("cacheline0:%x   cacheline1:%x\n",ram_0(index),ram_1(index))
    //printf("record_wdata1:%x  record_wstrb1:%x record_pc:%x record_awaddr:%x record_olddata:%x\n",record_wdata1(index),record_wstrb1(index),record_pc(index),record_addr(index),record_olddata(index))
}