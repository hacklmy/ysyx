package  mycpu

import chisel3._
import chisel3.util._
import  Constants._

class EXU extends Module{
    val io = IO(new Bundle{
        val pc = Input(UInt(64.W))
        val pc_next = Output(UInt(64.W))
        val inst_now = Input(UInt(32.W))
        val rs1 = Input(UInt(5.W))
        val rs2 = Input(UInt(5.W))
        val rd = Input(UInt(5.W))
        val imm = Input(UInt(64.W))
        val ctrl_sign = new ctrl_in()
        val res2rd = Output(UInt(64.W))
    })


    val Mem_modle = Module(new MEM())
    val mem_rdata = Wire(UInt(64.W))
    val Regfile = Mem(32, UInt(64.W))
    val CSR_Reg = Mem(4, UInt(64.W))
    val csr_addr = io.imm(11,0)
    val csr_index = MuxLookup(csr_addr, 0.U, Array(
        "h305".U -> 0.U,
        "h341".U -> 1.U,
        "h300".U -> 2.U,
        "h342".U -> 3.U
    ))
    def Reg_read(addr : UInt): UInt = {
        Mux(addr === 0.U, 0.U, Regfile(addr))
    }
    val src1_value = Mux(io.ctrl_sign.src1_is_pc, io.pc, Reg_read(io.rs1))
    val src2_value = Mux(io.ctrl_sign.src2_is_imm, io.imm, Reg_read(io.rs2))
    val add_res = src1_value + src2_value
    val sub_res = src1_value - src2_value
    val sra_res = (src1_value.asSInt() >> src2_value(5,0)).asUInt
    val srl_res = src1_value >> src2_value(5,0)
    val sll_res = src1_value << src2_value(5,0)
    val sraw_res = src1_value(31,0).asSInt() >> src2_value(4,0)
    val srlw_res = src1_value(31,0) >> src2_value(4,0)
    val sllw_res = src1_value(31,0) << src2_value(4,0)
    val or_res = src1_value | src2_value
    val xor_res = src1_value ^ src2_value
    val and_res = src1_value & src2_value
    val mlu_res = (src1_value * src2_value)(63,0)
    val mluw_res = (src1_value(31,0) * src2_value(31,0))(31,0)
    val divw_res = (src1_value(31,0).asSInt / src2_value(31,0).asSInt)(31,0)
    val divuw_res = (src1_value(31,0) / src2_value(31,0))(31,0)
    val remw_res = (src1_value(31,0).asSInt % src2_value(31,0).asSInt)(31,0)
    val remuw_res = (src1_value(31,0) % src2_value(31,0))(31,0)
    val div_res = (src1_value.asSInt / src2_value.asSInt).asUInt
    val divu_res = src1_value / src2_value
    val rem_res = (src1_value.asSInt % src2_value.asSInt).asUInt
    val remu_res = src1_value % src2_value
    io.res2rd := MuxLookup(io.inst_now, 0.U, Array(
        ADDI.U -> add_res,
        AUIPC.U -> add_res,
        LUI.U -> io.imm,
        JAL.U -> (io.pc+4.U),
        JALR.U -> (io.pc+4.U),
        SLTIU.U -> Mux(src1_value<src2_value, 1.U, 0.U),
        SLTU.U -> Mux(src1_value<src2_value, 1.U, 0.U),
        SLTI.U -> Mux(src1_value.asSInt()<src2_value.asSInt(), 1.U, 0.U),
        SLT.U -> Mux(src1_value.asSInt()<src2_value.asSInt(), 1.U, 0.U),
        LW.U -> Cat( Fill(32, mem_rdata(31)), mem_rdata(31,0)),
        LD.U -> mem_rdata,
        LBU.U -> Cat( Fill(56, 0.U), mem_rdata(7,0)),
        LWU.U -> Cat( Fill(32, 0.U), mem_rdata(31,0)),
        LH.U -> Cat( Fill(48, mem_rdata(15)), mem_rdata(15,0)),
        LB.U -> Cat( Fill(56, mem_rdata(7)), mem_rdata(7,0)),
        LHU.U -> Cat( Fill(48, 0.U), mem_rdata(15,0)),
        ADDW.U -> Cat(Fill(32, add_res(31)), add_res(31,0)),
        SUB.U -> sub_res,
        ADDIW.U -> Cat( Fill(32, add_res(31)), add_res(31,0)),
        ADD.U -> add_res,
        SRAI.U -> sra_res,
        OR.U -> or_res,
        ORI.U -> or_res,
        XOR.U -> xor_res,
        XORI.U -> xor_res,
        AND.U -> and_res,
        ANDI.U -> and_res,
        SUBW.U -> Cat(Fill(32, sub_res(31)), sub_res(31,0)),
        SLLW.U -> Cat(Fill(32, sllw_res(31)), sllw_res(31,0)),
        SLLI.U -> sll_res,
        SRLI.U -> srl_res,
        SLLIW.U -> Cat(Fill(32, sllw_res(31)), sllw_res(31,0)),
        SRAIW.U -> Cat(Fill(32, sraw_res(31)), sraw_res(31,0)),
        SRLIW.U -> Cat(Fill(32, srlw_res(31)), srlw_res(31,0)),
        SRAW.U -> Cat(Fill(32, sraw_res(31)), sraw_res(31,0)),
        SRLW.U -> Cat(Fill(32, srlw_res(31)), srlw_res(31,0)),
        MLU.U -> mlu_res,
        MLUW.U -> Cat(Fill(32, mluw_res(31)), mluw_res),
        DIVW.U -> Cat(Fill(32, divw_res(31)), divw_res),
        DIVU.U -> divu_res,
        DIV.U -> div_res,
        DIVUW.U -> Cat(Fill(32, divuw_res(31)), divuw_res),
        REMW.U -> Cat(Fill(32, remw_res(31)), remw_res),
        REMUW.U -> Cat(Fill(32, remuw_res(31)), remuw_res),
        REMU.U -> remu_res,
        REM.U -> rem_res,
        SLL.U -> sll_res,
        SRA.U -> sra_res.asUInt,
        SRL.U -> srl_res,
        CSRRW.U -> CSR_Reg(csr_index),
        CSRRS.U -> CSR_Reg(csr_index),
        CSRRC.U -> CSR_Reg(csr_index)
    ) )
    
    val reg_value = Reg_read(io.rd)
    //printf("inst:%x add_res:%x sub_res:%x  %d %x %d\n",io.inst_now, add_res, sub_res, io.ctrl_sign.reg_write, io.res2rd, io.rd)
    Regfile(io.rd) := Mux((io.ctrl_sign.reg_write&&io.rd=/=0.U), io.res2rd, reg_value)
    //printf("%d\n", Regfile(io.rd))

    val csr_wdata = MuxLookup(io.inst_now, 0.U, Array(
        CSRRW.U -> src1_value,
        CSRRS.U -> (src1_value | CSR_Reg(csr_index)),
        CSRRC.U -> (src1_value & (~CSR_Reg(csr_index))),
    ))

    CSR_Reg(1.U) := Mux(io.inst_now === ECALL.U, io.pc, CSR_Reg(1.U))
    CSR_Reg(3.U) := Mux(io.inst_now === ECALL.U, Regfile(17), CSR_Reg(3.U))

    CSR_Reg(csr_index) := Mux(io.ctrl_sign.csr_write, csr_wdata, CSR_Reg(csr_index))
        
    

    val pc_add4 = io.pc + 4.U
    io.pc_next := MuxLookup(io.inst_now, pc_add4, Array(
        JAL.U -> add_res,   
        JALR.U -> (add_res & "hfffffffffffffffe".U),
        BNE.U -> Mux(Reg_read(io.rs1).asSInt =/= Reg_read(io.rs2).asSInt, add_res, pc_add4),
        BEQ.U -> Mux(Reg_read(io.rs1).asSInt === Reg_read(io.rs2).asSInt, add_res, pc_add4),
        BGE.U -> Mux(Reg_read(io.rs1).asSInt >= Reg_read(io.rs2).asSInt, add_res, pc_add4),
        BLT.U -> Mux(Reg_read(io.rs1).asSInt < Reg_read(io.rs2).asSInt, add_res, pc_add4),
        BLTU.U -> Mux(Reg_read(io.rs1) < Reg_read(io.rs2), add_res, pc_add4),
        BGEU.U -> Mux(Reg_read(io.rs1) >= Reg_read(io.rs2), add_res, pc_add4),
        ECALL.U -> CSR_Reg(0.U),
        MRET.U -> (CSR_Reg(1.U) + 4.U)
    ))
    val reg_trace = Module(new traceregs())
    reg_trace.io.input_reg := VecInit(Seq.fill(32)(0.U(64.W)))
    (0 until 32).foreach(i => reg_trace.io.input_reg(i) := Regfile(i))
    reg_trace.io.pc := io.pc
    reg_trace.io.csr_reg := VecInit(Seq.fill(4)(0.U(64.W)))
    (0 until 3).foreach(i => reg_trace.io.csr_reg(i) := CSR_Reg(i))
    //printf("%x\n", reg_trace.io.input_reg(2))
    Mem_modle.io.Raddr := add_res
    Mem_modle.io.Waddr := add_res
    Mem_modle.io.Wdata := MuxLookup(io.inst_now, 0.U, Array(
        SD.U -> Reg_read(io.rs2),
        SH.U -> Reg_read(io.rs2)(15,0),
        SB.U -> Reg_read(io.rs2)(7,0),
        SW.U -> Reg_read(io.rs2)(31,0)
    ))
    Mem_modle.io.Wmask := io.ctrl_sign.Wmask
    Mem_modle.io.Write_en := io.ctrl_sign.Writemem_en
    Mem_modle.io.Read_en := io.ctrl_sign.Readmem_en
    mem_rdata := Mem_modle.io.Rdata
    //printf(" %x   %x  %d\n",Mem_modle.io.Wdata, Mem_modle.io.Waddr, Mem_modle.io.Write_en)
}