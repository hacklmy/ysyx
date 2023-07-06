circuit EXU :
  module EXU :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip insttype : UInt<32>, flip src1 : UInt<5>, flip src2 : UInt<5>, flip rd : UInt<5>, flip imm : UInt<64>, flip reg_write : UInt<1>, res2rd : UInt<64>}

    cmem Regfile : UInt<64> [32] @[EXU.scala 17:22]
    node _src1_value_T = eq(io.src1, UInt<1>("h0")) @[EXU.scala 19:18]
    infer mport src1_value_MPORT = Regfile[io.src1], clock @[EXU.scala 19:39]
    node src1_value = mux(_src1_value_T, UInt<1>("h0"), src1_value_MPORT) @[EXU.scala 19:12]
    node _src2_value_T = eq(io.src2, UInt<1>("h0")) @[EXU.scala 19:18]
    infer mport src2_value_MPORT = Regfile[io.src2], clock @[EXU.scala 19:39]
    node src2_value = mux(_src2_value_T, UInt<1>("h0"), src2_value_MPORT) @[EXU.scala 19:12]
    node _I_res_T = add(src1_value, io.imm) @[EXU.scala 23:28]
    node I_res = tail(_I_res_T, 1) @[EXU.scala 23:28]
    node _io_res2rd_T = eq(UInt<1>("h1"), io.insttype) @[Mux.scala 81:61]
    node _io_res2rd_T_1 = mux(_io_res2rd_T, I_res, UInt<1>("h0")) @[Mux.scala 81:58]
    io.res2rd <= _io_res2rd_T_1 @[EXU.scala 24:15]
    node _reg_value_T = eq(io.rd, UInt<1>("h0")) @[EXU.scala 19:18]
    infer mport reg_value_MPORT = Regfile[io.rd], clock @[EXU.scala 19:39]
    node reg_value = mux(_reg_value_T, UInt<1>("h0"), reg_value_MPORT) @[EXU.scala 19:12]
    infer mport MPORT = Regfile[io.rd], clock @[EXU.scala 28:12]
    node _T = mux(io.reg_write, io.res2rd, reg_value) @[EXU.scala 28:26]
    MPORT <= _T @[EXU.scala 28:20]

