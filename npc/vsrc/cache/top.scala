package mycpu

import chisel3._
import chisel3.util._
import  Constants._

class top extends Module{
    val io = IO(new Bundle{
        val inst = Output(UInt(32.W))
        val pc = Output(UInt(64.W))
        val pc_next = Output(UInt(64.W))
        val outval = Output(UInt(64.W))
        val step = Output(Bool())
    })
    val pc_now = RegInit("x80000000".U(64.W))
    io.pc := pc_now
    val execute_end = RegInit(Bool(),false.B)
    val axi = Module(new AXI())
    val lsu_step = Module(new LSU())
    val arbiter = Module(new AXI_ARBITER())
    val ifu_step = Module(new IFU_AXI())
    ifu_step.io.pc := pc_now
    io.inst := ifu_step.io.inst
    arbiter.io.ifu_axi_in <> ifu_step.io.axi_out
    ifu_step.io.axi_in <> arbiter.io.ifu_axi_out
    arbiter.io.lsu_axi_in <> lsu_step.io.axi_out
    lsu_step.io.axi_in <> arbiter.io.lsu_axi_out
    arbiter.io.axi_in <> axi.io.axi_out
    axi.io.axi_in <> arbiter.io.axi_out

    
    val idu_step = Module(new IDU())
    idu_step.io.pc := pc_now
    
    //idu_step.io.inst_valid := ifu_step.io.inst_valid
    //ifu_step.io.inst_ready := idu_step.io.inst_ready
    val exu_step = Module(new EXU_AXI()) 
    exu_step.io.pc := pc_now
    exu_step.io.inst_now := idu_step.io.inst_now
    exu_step.io.ctrl_sign.reg_write := idu_step.io.ctrl_sign.reg_write
    exu_step.io.rs1 := idu_step.io.rs1
    exu_step.io.rs2 := idu_step.io.rs2
    exu_step.io.rd := idu_step.io.rd
    exu_step.io.imm := idu_step.io.imm
    exu_step.io.ctrl_sign := idu_step.io.ctrl_sign
    lsu_step.io.inst_load := exu_step.io.inst_load
    lsu_step.io.inst_store := exu_step.io.inst_store
    lsu_step.io.mem_addr := exu_step.io.Mem_addr
    lsu_step.io.mem_wdata := exu_step.io.Mem_wdata
    lsu_step.io.mem_wstrb := exu_step.io.Mem_wstrb
    exu_step.io.Mem_rdata := lsu_step.io.mem_rdata
    exu_step.io.rdata_valid := lsu_step.io.axi_in.rvalid

    exu_step.io.inst_valid := ifu_step.io.inst_valid
    io.outval := exu_step.io.res2rd
    
    //exu_step.io.inst_ready := idu_step.io.inst_ready

    val dpi = Module(new DPI())
    dpi.io.flag := Mux(idu_step.io.inst_now === EBREAK.U, 1.U, 0.U)
    dpi.io.ecall_flag := Mux(idu_step.io.inst_now === ECALL.U, 1.U, 0.U)
    //printf("%x\n", idu_step.io.inst_now)
    
    // val npc_step = RegInit(Bool(),false.B)
    // npc_step := (ifu_step.io.inst_ready && ifu_step.io.inst_valid && (~exu_step.io.mem_flag)) || (exu_step.io.mem_flag && exu_step.io.mem_end)
    

    //val pc_valid = RegInit(Bool(), true.B)
    //pc_valid := ~(exu_step.io.mem_end && ifu_step.io.inst_valid)
    //ifu_step.io.pc_valid := Mux(pc_now==="x80000000".U,1.U,~(exu_step.io.mem_end && ifu_step.io.inst_valid))
    execute_end := Mux(exu_step.io.inst_store,lsu_step.io.axi_in.bvalid,Mux(exu_step.io.inst_load, lsu_step.io.axi_in.rvalid,ifu_step.io.inst_valid))
    //printf("pc : %x inst:%x execute_end : %d\n\n",pc_now, idu_step.io.inst,execute_end)
    val pc_valid = RegInit(Bool(),true.B)
    pc_valid := execute_end
    ifu_step.io.pc_valid := pc_valid
    val diff_step = RegInit(Bool(),false.B)
    diff_step := execute_end
    io.step := diff_step
    pc_now := Mux(execute_end,exu_step.io.pc_next,pc_now)
    io.pc_next := exu_step.io.pc_next

    idu_step.io.inst := Mux(ifu_step.io.inst_valid===0.U&&pc_valid===0.U&&execute_end===0.U,ifu_step.io.inst_reg,ifu_step.io.inst)
    //idu_step.io.exu_arvalid := exu_step.io.exu_arvalid
    //idu_step.io.exu_awvalid := exu_step.io.exu_awvalid
}