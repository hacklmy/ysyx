package  mycpu

import chisel3._
import chisel3.util._
import  Constants._


class IDU extends Module{
    val io = IO(new Bundle{
        val pc = Input(UInt(64.W))
        val fs_to_ds_valid = Input(Bool())
        val es_allowin = Input(Bool())
        val from_fs_inst = Input(UInt(32.W))
        val br_taken = Output(Bool())
        val br_target = Output(UInt(64.W))
        val br_taken_cancel = Output(Bool())
        val ds_allowin = Output(UInt(Bool()))
        //
        val raddr1 = Output(UInt(5.W))
        val raddr2 = Output(UInt(5.W))
        val rdata1 = Input(UInt(64.W))
        val rdata2 = Input(UInt(64.W))
        //
        val to_es_pc = Output(UInt(64.W))
        val inst_now = Output(UInt(32.W))
        val src1 = Output(UInt(64.W))
        val src2 = Output(UInt(64.W))
        val rf_dst = Output(UInt(5.W))
        val store_data = Output(UInt(64.W))
        //val imm = Output(UInt(64.W))
        val ctrl_sign = new ctrl_out()
        // val exu_arvalid = Input(Bool())
        // val exu_awvalid = Input(Bool())
        val es_rf_we = Input(Bool())
        val ms_rf_we = Input(Bool())
        val ws_rf_we = Input(Bool())
        val es_valid = Input(Bool())
        val ms_valid = Input(Bool())
        val ws_valid = Input(Bool())
        val es_rf_dst = Input(UInt(5.W))
        val ms_rf_dst = Input(UInt(5.W))
        val ws_rf_dst = Input(UInt(5.W))
    })
    //val regfile = Module(new Register())

    def sext_type_I(inst : UInt): UInt = {
        val imm = inst(31,20)
        return Cat(Fill(52, imm(11)), imm)
    }
    def sext_type_U(inst: UInt): UInt = {
        val imm = inst(31,12)
        return Cat(Fill(32, imm(19)), imm, Fill(12, 0.U))
    }
    def sext_type_J(inst : UInt): UInt = {
        val imm = Cat(inst(31), inst(19,12), inst(20), inst(30,21))
        return Cat(Fill(43, imm(19)), imm, 0.U)
    }
    def sext_type_S(inst: UInt): UInt = {
        val imm = Cat(inst(31,25), inst(11,7))
        return Cat(Fill(52, imm(11)), imm)
    }
    def sext_type_B(inst: UInt): UInt = {
        val imm = Cat(inst(31), inst(7), inst(30,25), inst(11,8))
        return Cat(Fill(51, imm(11)), imm, 0.U)
    }
    def sext_imm(imm : UInt, itype : UInt): UInt = {
        val sext_mapping = Seq(
            (I_TYPE.U, sext_type_I(imm)),
            (J_TYPE.U, sext_type_J(imm)),
            (U_TYPE.U, sext_type_U(imm)),
            (S_TYPE.U, sext_type_S(imm))
        )
        return MuxLookup(itype, 0.U, sext_mapping)
    }
    
    val ds_valid = RegInit(false.B(Bool()))
    val ds_ready_go = Wire(Bool())
    val ds_to_es_valid = Wire(Bool())
    val ds_allowin = Wire(Bool())
    val ds_pc = RegInit(0.U(64.W))
    //val es_rf_we = RegInit(false.B(Bool()))//寄存器写信号
    val inst = RegInit(0.U(32.B))
    //val pc_add4 = Wire(UInt(64.W))
    val br_target = Wire(UInt(64.W))
    val br_taken = Wire(Bool())
    val br_taken_cancel = Wire(Bool()) 
    val conflict = Wire(Bool())
    //val pc_next = Wire(UInt(64.W))

    br_taken_cancel := br_taken && ds_ready_go

    when(br_taken_cancel){
        ds_valid := false.B
    }.elsewhen(ds_allowin){
        ds_valid := io.fs_to_ds_valid
    }
    when(fs_to_ds_valid&&ds_allowin){
        ds_pc := fs_pc
        inst := from_fs_inst
    }
    ds_ready_go := !conflict
    ds_to_es_valid := ds_valid && ds_ready_go
    ds_allowin := !ds_valid || (ds_ready_go && es_allowin)

    val addi = BitPat("b??????? ????? ????? 000 ????? 00100 11")
    val ebreak = BitPat("b0000000 00001 00000 000 00000 11100 11")
    val auipc = BitPat("b??????? ????? ????? ??? ????? 00101 11")
    val lui = BitPat("b??????? ????? ????? ??? ????? 01101 11")
    val jal = BitPat("b??????? ????? ????? ??? ????? 11011 11") 
    val jalr = BitPat("b??????? ????? ????? 000 ????? 11001 11")
    val sd = BitPat("b??????? ????? ????? 011 ????? 01000 11")
    val sltiu = BitPat("b??????? ????? ????? 011 ????? 00100 11")
    val lw = BitPat("b??????? ????? ????? 010 ????? 00000 11")
    val addw = BitPat("b0000000 ????? ????? 000 ????? 01110 11")
    val sub = BitPat("b0100000 ????? ????? 000 ????? 01100 11")
    val bne = BitPat("b??????? ????? ????? 001 ????? 11000 11")
    val beq = BitPat("b??????? ????? ????? 000 ????? 11000 11")
    val bge = BitPat("b??????? ????? ????? 101 ????? 11000 11")
    val blt = BitPat("b??????? ????? ????? 100 ????? 11000 11")
    val bltu = BitPat("b??????? ????? ????? 110 ????? 11000 11")
    val ld = BitPat("b??????? ????? ????? 011 ????? 00000 11")
    val addiw = BitPat("b??????? ????? ????? 000 ????? 00110 11")
    val add = BitPat("b0000000 ????? ????? 000 ????? 01100 11")
    val srai = BitPat("b010000? ????? ????? 101 ????? 00100 11")
    val lbu = BitPat("b??????? ????? ????? 100 ????? 00000 11")
    val sh = BitPat("b??????? ????? ????? 001 ????? 01000 11")
    val sb = BitPat("b??????? ????? ????? 000 ????? 01000 11")
    val or = BitPat("b0000000 ????? ????? 110 ????? 01100 11")
    val xori = BitPat("b??????? ????? ????? 100 ????? 00100 11")
    val and = BitPat("b0000000 ????? ????? 111 ????? 01100 11")
    val andi = BitPat("b??????? ????? ????? 111 ????? 00100 11")
    val subw = BitPat("b0100000 ????? ????? 000 ????? 01110 11")
    val sllw = BitPat("b0000000 ????? ????? 001 ????? 01110 11")
    val slli = BitPat("b000000? ????? ????? 001 ????? 00100 11")
    val srli = BitPat("b000000? ????? ????? 101 ????? 00100 11")
    val slliw = BitPat("b0000000 ????? ????? 001 ????? 00110 11")
    val sraiw = BitPat("b0100000 ????? ????? 101 ????? 00110 11")
    val srliw = BitPat("b0000000 ????? ????? 101 ????? 00110 11")
    val sraw = BitPat("b0100000 ????? ????? 101 ????? 01110 11")
    val srlw = BitPat("b0000000 ????? ????? 101 ????? 01110 11")
    val sltu = BitPat("b0000000 ????? ????? 011 ????? 01100 11")
    val slt = BitPat("b0000000 ????? ????? 010 ????? 01100 11")
    val lh = BitPat("b??????? ????? ????? 001 ????? 00000 11")
    val lhu = BitPat("b??????? ????? ????? 101 ????? 00000 11")
    val sw = BitPat("b??????? ????? ????? 010 ????? 01000 11")
    val mlu = BitPat("b0000001 ????? ????? 000 ????? 01100 11")
    val mluw = BitPat("b0000001 ????? ????? 000 ????? 01110 11")
    val divw = BitPat("b0000001 ????? ????? 100 ????? 01110 11")
    val remw = BitPat("b0000001 ????? ????? 110 ????? 01110 11")
    val xor = BitPat("b0000000 ????? ????? 100 ????? 01100 11")
    val ori = BitPat("b??????? ????? ????? 110 ????? 00100 11")
    val divu = BitPat("b0000001 ????? ????? 101 ????? 01100 11")
    val div = BitPat("b0000001 ????? ????? 100 ????? 01100 11")
    val divuw = BitPat("b0000001 ????? ????? 101 ????? 01110 11")
    val remuw = BitPat("b0000001 ????? ????? 111 ????? 01110 11")
    val remu = BitPat("b0000001 ????? ????? 111 ????? 01100 11")
    val rem = BitPat("b0000001 ????? ????? 110 ????? 01100 11")
    val sll = BitPat("b0000000 ????? ????? 001 ????? 01100 11")
    val srl = BitPat("b0000000 ????? ????? 101 ????? 01100 11")
    val sra = BitPat("b0100000 ????? ????? 101 ????? 01100 11")
    val slti = BitPat("b??????? ????? ????? 010 ????? 00100 11")
    val lwu = BitPat("b??????? ????? ????? 110 ????? 00000 11")
    val lb = BitPat("b??????? ????? ????? 000 ????? 00000 11")
    val bgeu = BitPat("b??????? ????? ????? 111 ????? 11000 11")
    val ecall = BitPat("b0000000 00000 00000 000 00000 11100 11")
    val mret = BitPat("b0011000 00010 00000 000 00000 11100 11")
    val csrrw = BitPat("b??????? ????? ????? 001 ????? 11100 11")
    val csrrs = BitPat("b??????? ????? ????? 010 ????? 11100 11")
    val csrrc = BitPat("b??????? ????? ????? 011 ????? 11100 11")
    

    //val inst = io.inst
    val opcode = Wire(UInt(7.W))
    val funct3 = Wire(UInt(3.W))
    val funct7 = Wire(UInt(7.W))
    val rs2 = Wire(UInt(5.W))
    val rs1 = Wire(UInt(5.W))
    val rd = Wire(UInt(5.W))
    val imm = Wire(UInt(64.W))
    val inst_now = Wire(UInt(32.W))
    val inst_type = Wire(UInt(32.W))

    val src1 = Wire(UInt(64.W))
    val src2 = Wire(UInt(64.W))
    
    val reg_write = Wire(Bool())
    val res_from_mem = Wire(Bool())
    val src2_is_imm = Wire(Bool())
    val src1_is_pc = Wire(Bool())
    val Writemem_en = Wire(Bool())
    val Readmem_en = Wire(Bool())
    val Wmask = Wire(UInt(8.W))
    val csr_write = Wire(Bool())
    
    
    
    opcode := inst(6,0)
    funct3 := inst(14,12)
    funct7 := inst(31,25)
    rs2 := inst(24,20)
    rs1 := inst(19,15)
    rd := inst(11,7)
    io.raddr1 := rs1
    io.raddr2 := rs2

    inst_type := Lookup(inst, 0.U, Array(
        addi -> I_TYPE.U,
        auipc -> U_TYPE.U,
        lui -> U_TYPE.U,
        jal -> J_TYPE.U,
        jalr -> I_TYPE.U,
        sd -> S_TYPE.U,
        sltiu -> I_TYPE.U,
        lw -> I_TYPE.U,
        addw -> R_TYPE.U,
        sub -> R_TYPE.U,
        bne -> B_TYPE.U,
        beq -> B_TYPE.U,
        ld -> I_TYPE.U,
        addiw -> I_TYPE.U,
        add -> R_TYPE.U,
        srai -> I_TYPE.U,
        lbu -> I_TYPE.U,
        sh -> S_TYPE.U,
        sb -> S_TYPE.U,
        or -> R_TYPE.U,
        xori -> I_TYPE.U,
        and -> R_TYPE.U,
        andi -> I_TYPE.U,
        subw -> R_TYPE.U,
        sllw -> R_TYPE.U,
        slli -> I_TYPE.U,
        srli -> I_TYPE.U,
        slliw -> I_TYPE.U,
        sraiw -> I_TYPE.U,
        srliw -> I_TYPE.U,
        sraw -> R_TYPE.U,
        srlw -> R_TYPE.U,
        sltu -> R_TYPE.U,
        slt -> R_TYPE.U,
        bge -> B_TYPE.U,
        blt -> B_TYPE.U,
        bltu -> B_TYPE.U,
        sw -> S_TYPE.U,
        lh -> I_TYPE.U,
        lhu -> I_TYPE.U,
        mlu -> R_TYPE.U,
        mluw -> R_TYPE.U,
        divw -> R_TYPE.U,
        remw -> R_TYPE.U,
        xor -> R_TYPE.U,
        ori -> I_TYPE.U,
        divu -> R_TYPE.U,
        div -> R_TYPE.U,
        divuw -> R_TYPE.U,
        remuw -> R_TYPE.U,
        remu -> R_TYPE.U,
        rem -> R_TYPE.U,
        sll -> R_TYPE.U,
        srl -> R_TYPE.U,
        sra -> R_TYPE.U,
        slti -> I_TYPE.U,
        lwu -> I_TYPE.U,
        lb -> I_TYPE.U,
        bgeu -> B_TYPE.U,
        ecall -> I_TYPE.U,
        csrrw -> I_TYPE.U,
        csrrs -> I_TYPE.U,
        csrrc -> I_TYPE.U
    ))

    imm := MuxLookup(inst_type, 0.U, Seq(
        (I_TYPE.U, sext_type_I(inst)),
        (J_TYPE.U, sext_type_J(inst)),
        (U_TYPE.U, sext_type_U(inst)),
        (S_TYPE.U, sext_type_S(inst)),
        (B_TYPE.U, sext_type_B(inst))
    ))

    inst_now := Lookup(inst, 0.U, Array(
        addi -> ADDI.U,
        ebreak -> EBREAK.U,
        auipc -> AUIPC.U,
        lui -> LUI.U,
        jal -> JAL.U,
        jalr -> JALR.U,
        sd -> SD.U,
        sltiu -> SLTIU.U,
        lw -> LW.U,
        addw -> ADDW.U,
        sub -> SUB.U,
        bne -> BNE.U,
        beq -> BEQ.U,
        ld -> LD.U,
        addiw -> ADDIW.U,
        add -> ADD.U,
        srai -> SRAI.U,
        lbu -> LBU.U,
        sh -> SH.U,
        sb-> SB.U,
        or -> OR.U,
        xori -> XORI.U,
        and -> AND.U,
        andi -> ANDI.U,
        subw -> SUBW.U,
        sllw -> SLLW.U,
        slli -> SLLI.U,
        srli -> SRLI.U,
        slliw -> SLLIW.U,
        sraiw -> SRAIW.U,
        srliw -> SRLIW.U,
        sraw -> SRAW.U,
        srlw -> SRLW.U,
        sltu -> SLTU.U,
        slt -> SLT.U,
        bge ->BGE.U,
        blt -> BLT.U,
        bltu -> BLTU.U,
        sw -> SW.U,
        lh -> LH.U,
        lhu ->LHU.U,
        mlu -> MLU.U,
        mluw -> MLUW.U,
        divw -> DIVW.U,
        remw -> REMW.U,
        xor -> XOR.U,
        ori -> ORI.U,
        divu -> DIVU.U,
        div -> DIV.U,
        divuw -> DIVUW.U,
        remuw -> REMUW.U,
        remu -> REMU.U,
        rem -> REM.U,
        sll -> SLL.U,
        srl -> SRL.U,
        sra -> SRA.U,
        slti -> SLTI.U,
        lwu -> LWU.U,
        lb -> LB.U,
        bgeu -> BGEU.U,
        ecall -> ECALL.U,
        mret -> MRET.U,
        csrrw -> CSRRW.U,
        csrrs -> CSRRS.U,
        csrrc -> CSRRC.U
    ))

    reg_write := Lookup(inst, true.B, Array(
        ebreak -> false.B,
        sd -> false.B,
        sh -> false.B,
        sb -> false.B,
        sw -> false.B,
        bne -> false.B,
        beq -> false.B,
        bge -> false.B,
        blt -> false.B,
        bltu -> false.B,
        bgeu -> false.B,
        ecall -> false.B,
        mret -> false.B
    ))

    csr_write := Lookup(inst, false.B, Array(
        csrrw -> true.B,
        csrrs -> true.B,
        csrrc -> true.B
    ))

    src2_is_imm := MuxLookup(inst_type, false.B, Seq(
        (I_TYPE.U, true.B),
        (U_TYPE.U, true.B),
        (S_TYPE.U, true.B),
        (J_TYPE.U, true.B),
        (B_TYPE.U, true.B)
    ))

    src1_is_pc := Lookup(inst, false.B, Array(
        jal -> true.B,
        auipc -> true.B,
        bne -> true.B,
        beq -> true.B,
        bge -> true.B,
        blt -> true.B,
        bltu -> true.B,
        bgeu -> true.B
    ))

    Writemem_en := MuxLookup(inst_type, false.B, Seq(
        (S_TYPE.U, true.B)
    ))

    Readmem_en := Lookup(inst, false.B, Array(
        ld -> true.B,
        lw -> true.B,
        lwu -> true.B,
        lh -> true.B,
        lhu -> true.B,
        lb -> true.B,
        lbu -> true.B
    ))

    Wmask := Lookup(inst, 0.U, Array(
        sd -> "hff".U,
        sh -> "b11".U,
        sb -> "b1".U,
        sw -> "hf".U
    ))

    src1 = Mux(src1_is_pc, io.pc, io.rdata1)
    src2 = Mux(src2_is_imm, imm, io.rdata2)
    //pc_add4 := io.pc + 4
    //br_target := (CSR_Reg(0.U),Mux(inst_now===JALR.U,(src1 + src2)&"hfffffffffffffffe".U,src1+src2))
    br_target := MuxLookup(inst_now, src1+src2, Array(
        JALR.U -> (src1 + src2)&"hfffffffffffffffe".U,
        ECALL.U -> CSR_Reg(0.U),
        MRET.U -> (CSR_Reg(1.U) + 4.U)
    ))
    br_taken := MuxLookup(inst_now, false.B, Array(
        JAL.U -> true.B ,
        JALR.U -> true.B ,
        BNE.U -> Mux(io.rdata1.asSInt =/= io.rdata2.asSInt, true.B , false.B),
        BEQ.U -> Mux(io.rdata1.asSInt === io.rdata2.asSInt, true.B , false.B),
        BGE.U -> Mux(io.rdata1.asSInt >= io.rdata2.asSInt, true.B , false.B),
        BLT.U -> Mux(io.rdata1.asSInt < io.rdata2.asSInt, true.B , false.B),
        BLTU.U -> Mux(io.rdata1 < io.rdata2, true.B , false.B),
        BGEU.U -> Mux(io.rdata1 >= io.rdata2, true.B , false.B),
        ECALL.U -> true.B,
        MRET.U -> true.B
    ))
    
    conflict := (!src1_is_pc && (((rs1===io.es_rf_dst)&&(rs1=/=0.U)&&io.es_rf_we&&io.es_valid)||((rs1===io.ms_rf_dst)&&(rs1=/=0.U)&&io.ms_rf_we&&io.ms_valid)||((rs1===io.ws_rf_dst)&&(rs1=/=0.U)&&io.ws_rf_we&&io.ws_valid)))||((!src2_is_imm||inst_type=/=B_TYPE.U) && (((rs2===io.es_rf_dst)&&(rs2=/=0.U)&&io.es_rf_we&&io.es_valid)||((rs2===io.ms_rf_dst)&&(rs2=/=0.U)&&io.ms_rf_we&&io.ms_valid)||((rs2===io.ws_rf_dst)&&(rs2=/=0.U)&&io.ws_rf_we&&io.ws_valid)))
    io.br_target := br_target
    io.br_taken := br_taken
    io.br_taken_cancel := br_taken_cancel
    //io.pc_next := Mux(ds_valid,pc_next,pc_add4)
    io.store_data := MuxLookup(io.inst_now, 0.U, Array(
        SD.U -> io.rdata2,
        SH.U -> io.rdata2(15,0),
        SB.U -> io.rdata2(7,0),
        SW.U -> io.rdata2(31,0)
    ))
    io.ds_allowin := ds_allowin
    //io.imm := imm
    io.src1 := src1
    io.src2 := src2
    io.rf_dst := rd
    io.inst_now := inst_now
    io.ctrl_sign.reg_write := reg_write
    //io.ctrl_sign.src1_is_pc := src1_is_pc
    //io.ctrl_sign.src2_is_imm := src2_is_imm
    io.ctrl_sign.Writemem_en := Writemem_en
    io.ctrl_sign.Readmem_en := Readmem_en
    io.ctrl_sign.Wmask := Wmask
    io.ctrl_sign.csr_write := csr_write
    // printf("Writemem_en:%d Readmem_en:%d\n",Writemem_en,Readmem_en)
    // val axi_inst_ready = RegInit(Bool(), true.B)
    // when(io.inst_valid && axi_inst_ready){
    //     axi_inst_ready := 0.U
    // }.elsewhen((Writemem_en||Readmem_en) && ~(io.exu_arvalid||io.exu_awvalid)){
    //     axi_inst_ready := 0.U
    // }.otherwise{
    //     axi_inst_ready := 1.U
    // }
    // io.inst_ready := axi_inst_ready
    // printf("inst_ready:%d\n",axi_inst_ready)
}