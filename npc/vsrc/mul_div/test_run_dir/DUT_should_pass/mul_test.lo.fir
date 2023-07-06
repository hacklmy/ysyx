circuit mul_test :
  module partial_product :
    input clock : Clock
    input reset : UInt<1>
    input io_y : UInt<3>
    input io_x : UInt<64>
    output io_c : UInt<1>
    output io_p : UInt<64>

    node _io_p_T = shl(io_x, 1) @[mul.scala 24:18]
    node _io_p_T_1 = shl(io_x, 1) @[mul.scala 25:19]
    node _io_p_T_2 = not(_io_p_T_1) @[mul.scala 25:12]
    node _io_p_T_3 = not(io_x) @[mul.scala 26:12]
    node _io_p_T_4 = not(io_x) @[mul.scala 27:12]
    node _io_p_T_5 = eq(UInt<1>("h1"), io_y) @[Mux.scala 81:61]
    node _io_p_T_6 = mux(_io_p_T_5, io_x, UInt<1>("h0")) @[Mux.scala 81:58]
    node _io_p_T_7 = eq(UInt<2>("h2"), io_y) @[Mux.scala 81:61]
    node _io_p_T_8 = mux(_io_p_T_7, io_x, _io_p_T_6) @[Mux.scala 81:58]
    node _io_p_T_9 = eq(UInt<2>("h3"), io_y) @[Mux.scala 81:61]
    node _io_p_T_10 = mux(_io_p_T_9, _io_p_T, _io_p_T_8) @[Mux.scala 81:58]
    node _io_p_T_11 = eq(UInt<3>("h4"), io_y) @[Mux.scala 81:61]
    node _io_p_T_12 = mux(_io_p_T_11, _io_p_T_2, _io_p_T_10) @[Mux.scala 81:58]
    node _io_p_T_13 = eq(UInt<3>("h5"), io_y) @[Mux.scala 81:61]
    node _io_p_T_14 = mux(_io_p_T_13, _io_p_T_3, _io_p_T_12) @[Mux.scala 81:58]
    node _io_p_T_15 = eq(UInt<3>("h6"), io_y) @[Mux.scala 81:61]
    node _io_p_T_16 = mux(_io_p_T_15, _io_p_T_4, _io_p_T_14) @[Mux.scala 81:58]
    node _io_p_T_17 = eq(UInt<3>("h7"), io_y) @[Mux.scala 81:61]
    node _io_p_T_18 = mux(_io_p_T_17, UInt<1>("h0"), _io_p_T_16) @[Mux.scala 81:58]
    node _io_c_T = eq(UInt<3>("h4"), io_y) @[Mux.scala 81:61]
    node _io_c_T_1 = mux(_io_c_T, UInt<1>("h1"), UInt<1>("h0")) @[Mux.scala 81:58]
    node _io_c_T_2 = eq(UInt<3>("h5"), io_y) @[Mux.scala 81:61]
    node _io_c_T_3 = mux(_io_c_T_2, UInt<1>("h1"), _io_c_T_1) @[Mux.scala 81:58]
    node _io_c_T_4 = eq(UInt<3>("h6"), io_y) @[Mux.scala 81:61]
    node _io_c_T_5 = mux(_io_c_T_4, UInt<1>("h1"), _io_c_T_3) @[Mux.scala 81:58]
    io_c <= _io_c_T_5 @[mul.scala 30:8]
    io_p <= bits(_io_p_T_18, 63, 0) @[mul.scala 20:8]

  module Mul :
    input clock : Clock
    input reset : UInt<1>
    input io_mul_valid : UInt<1>
    input io_flush : UInt<1>
    input io_mulw : UInt<1>
    input io_mul_signed : UInt<2>
    input io_multiplicand : UInt<64>
    input io_multiplier : UInt<64>
    output io_mul_ready : UInt<1>
    output io_out_valid : UInt<1>
    output io_result_hi : UInt<32>
    output io_result_lo : UInt<32>

    inst booth_partial of partial_product @[mul.scala 89:43]
    reg res : UInt<64>, clock with :
      reset => (UInt<1>("h0"), res) @[mul.scala 51:22]
    reg state : UInt<2>, clock with :
      reset => (UInt<1>("h0"), state) @[mul.scala 53:24]
    reg src1 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), src1) @[mul.scala 55:23]
    reg src2 : UInt<65>, clock with :
      reset => (UInt<1>("h0"), src2) @[mul.scala 56:23]
    node _src1_32_T = bits(io_multiplicand, 31, 31) @[mul.scala 63:55]
    node _src1_32_T_1 = bits(_src1_32_T, 0, 0) @[Bitwise.scala 74:15]
    node _src1_32_T_2 = mux(_src1_32_T_1, UInt<32>("hffffffff"), UInt<32>("h0")) @[Bitwise.scala 74:12]
    node _src1_32_T_3 = bits(io_multiplicand, 31, 0) @[mul.scala 63:76]
    node _src1_32_T_4 = cat(_src1_32_T_2, _src1_32_T_3) @[Cat.scala 31:58]
    node _src1_32_T_5 = mux(io_mulw, _src1_32_T_4, io_multiplicand) @[mul.scala 63:19]
    node _src2_32_T = bits(io_multiplier, 31, 31) @[mul.scala 64:53]
    node _src2_32_T_1 = bits(_src2_32_T, 0, 0) @[Bitwise.scala 74:15]
    node _src2_32_T_2 = mux(_src2_32_T_1, UInt<32>("hffffffff"), UInt<32>("h0")) @[Bitwise.scala 74:12]
    node _src2_32_T_3 = bits(io_multiplier, 31, 0) @[mul.scala 64:72]
    node _src2_32_T_4 = cat(_src2_32_T_2, _src2_32_T_3) @[Cat.scala 31:58]
    node _src2_32_T_5 = mux(io_mulw, _src2_32_T_4, io_multiplier) @[mul.scala 64:19]
    node _real_cand_T = eq(io_mul_signed, UInt<2>("h3")) @[mul.scala 66:35]
    node _real_cand_T_1 = eq(io_mul_signed, UInt<2>("h2")) @[mul.scala 66:56]
    node _real_cand_T_2 = or(_real_cand_T, _real_cand_T_1) @[mul.scala 66:41]
    node src1_32 = _src1_32_T_5 @[mul.scala 61:23 63:13]
    node _real_cand_T_3 = bits(src1_32, 63, 63) @[mul.scala 66:83]
    node _real_cand_T_4 = bits(_real_cand_T_3, 0, 0) @[Bitwise.scala 74:15]
    node _real_cand_T_5 = mux(_real_cand_T_4, UInt<64>("hffffffffffffffff"), UInt<64>("h0")) @[Bitwise.scala 74:12]
    node _real_cand_T_6 = cat(_real_cand_T_5, src1_32) @[Cat.scala 31:58]
    node _real_cand_T_7 = mux(_real_cand_T_2, _real_cand_T_6, src1_32) @[mul.scala 66:21]
    node src2_32 = _src2_32_T_5 @[mul.scala 62:23 64:13]
    node _real_er_T = cat(src2_32, UInt<1>("h0")) @[Cat.scala 31:58]
    node _T = eq(UInt<2>("h0"), state) @[mul.scala 69:18]
    node _T_1 = not(io_flush) @[mul.scala 75:18]
    node _GEN_0 = mux(_T_1, UInt<2>("h1"), state) @[mul.scala 75:28 76:23 53:24]
    node real_cand = _real_cand_T_7 @[mul.scala 58:25 66:15]
    node _GEN_1 = mux(_T_1, real_cand, src1) @[mul.scala 75:28 77:22 55:23]
    node real_er = bits(_real_er_T, 63, 0) @[mul.scala 59:23 67:13]
    node _GEN_2 = mux(_T_1, real_er, src2) @[mul.scala 75:28 78:22 56:23]
    node _T_2 = eq(UInt<2>("h1"), state) @[mul.scala 69:18]
    node _booth_partial_io_y_T = bits(src2, 2, 0) @[mul.scala 90:43]
    node _T_3 = neq(src2, UInt<1>("h0")) @[mul.scala 92:26]
    node _res_T = add(res, booth_partial.io_p) @[mul.scala 93:32]
    node _res_T_1 = tail(_res_T, 1) @[mul.scala 93:32]
    node _res_T_2 = add(_res_T_1, booth_partial.io_c) @[mul.scala 93:53]
    node _res_T_3 = tail(_res_T_2, 1) @[mul.scala 93:53]
    node _src2_T = shr(src2, 2) @[mul.scala 94:34]
    node _src1_T = shl(src1, 2) @[mul.scala 95:34]
    node _GEN_3 = mux(_T_3, _res_T_3, res) @[mul.scala 51:22 92:33 93:25]
    node _GEN_4 = mux(_T_3, _src2_T, src2) @[mul.scala 56:23 92:33 94:26]
    node _GEN_5 = mux(_T_3, _src1_T, src1) @[mul.scala 55:23 92:33 95:26]
    node _GEN_6 = mux(_T_3, state, UInt<2>("h2")) @[mul.scala 53:24 92:33 97:27]
    node _GEN_7 = mux(io_flush, UInt<2>("h0"), _GEN_6) @[mul.scala 86:27 87:23]
    node _GEN_8 = mux(io_flush, res, _GEN_3) @[mul.scala 51:22 86:27]
    node _GEN_9 = mux(io_flush, src2, _GEN_4) @[mul.scala 56:23 86:27]
    node _GEN_10 = mux(io_flush, src1, _GEN_5) @[mul.scala 55:23 86:27]
    node _T_4 = eq(UInt<2>("h2"), state) @[mul.scala 69:18]
    node _GEN_11 = mux(io_flush, UInt<2>("h0"), UInt<2>("h0")) @[mul.scala 103:27 104:23 110:23]
    node _GEN_12 = mux(_T_4, _GEN_11, state) @[mul.scala 69:18 53:24]
    node _GEN_13 = mux(_T_2, _GEN_7, _GEN_12) @[mul.scala 69:18]
    node _GEN_14 = mux(_T_2, _GEN_8, res) @[mul.scala 69:18 51:22]
    node _GEN_15 = mux(_T_2, _GEN_9, src2) @[mul.scala 69:18 56:23]
    node _GEN_16 = mux(_T_2, _GEN_10, src1) @[mul.scala 69:18 55:23]
    node _GEN_17 = mux(_T, _GEN_0, _GEN_13) @[mul.scala 69:18]
    node _GEN_18 = mux(_T, _GEN_1, _GEN_16) @[mul.scala 69:18]
    node _GEN_19 = mux(_T, _GEN_2, _GEN_15) @[mul.scala 69:18]
    node _GEN_20 = mux(_T, res, _GEN_14) @[mul.scala 69:18 51:22]
    node _T_5 = eq(state, UInt<2>("h0")) @[mul.scala 120:15]
    node _T_6 = eq(state, UInt<2>("h1")) @[mul.scala 125:21]
    node _T_7 = eq(state, UInt<2>("h2")) @[mul.scala 130:21]
    node _io_result_hi_T = bits(res, 63, 32) @[mul.scala 138:32]
    node _io_result_lo_T = bits(res, 31, 0) @[mul.scala 139:32]
    node _GEN_21 = mux(io_flush, UInt<1>("h0"), UInt<1>("h0")) @[mul.scala 131:23 132:26 141:26]
    node _GEN_22 = mux(io_flush, UInt<1>("h0"), UInt<1>("h1")) @[mul.scala 131:23 133:26 140:26]
    node _GEN_23 = mux(io_flush, UInt<1>("h0"), _io_result_hi_T) @[mul.scala 131:23 134:26 138:26]
    node _GEN_24 = mux(io_flush, UInt<1>("h0"), _io_result_lo_T) @[mul.scala 131:23 135:26 139:26]
    node _GEN_25 = mux(_T_7, _GEN_21, UInt<1>("h0")) @[mul.scala 130:35 145:22]
    node _GEN_26 = mux(_T_7, _GEN_22, UInt<1>("h0")) @[mul.scala 130:35 146:22]
    node _GEN_27 = mux(_T_7, _GEN_23, UInt<1>("h0")) @[mul.scala 130:35 147:22]
    node _GEN_28 = mux(_T_7, _GEN_24, UInt<1>("h0")) @[mul.scala 130:35 148:22]
    node _GEN_29 = mux(_T_7, _GEN_21, _GEN_20) @[mul.scala 130:35]
    node _GEN_30 = mux(_T_6, UInt<1>("h0"), _GEN_25) @[mul.scala 125:33 126:22]
    node _GEN_31 = mux(_T_6, UInt<1>("h0"), _GEN_26) @[mul.scala 125:33 127:22]
    node _GEN_32 = mux(_T_6, UInt<1>("h0"), _GEN_27) @[mul.scala 125:33 128:22]
    node _GEN_33 = mux(_T_6, UInt<1>("h0"), _GEN_28) @[mul.scala 125:33 129:22]
    node _GEN_34 = mux(_T_6, _GEN_20, _GEN_29) @[mul.scala 125:33]
    node _GEN_35 = mux(_T_5, UInt<1>("h1"), _GEN_30) @[mul.scala 120:23 121:22]
    node _GEN_36 = mux(_T_5, UInt<1>("h0"), _GEN_31) @[mul.scala 120:23 122:22]
    node _GEN_37 = mux(_T_5, UInt<1>("h0"), _GEN_32) @[mul.scala 120:23 123:22]
    node _GEN_38 = mux(_T_5, UInt<1>("h0"), _GEN_33) @[mul.scala 120:23 124:22]
    node _GEN_39 = mux(_T_5, _GEN_20, _GEN_34) @[mul.scala 120:23]
    io_mul_ready <= _GEN_35
    io_out_valid <= _GEN_36
    io_result_hi <= _GEN_37
    io_result_lo <= _GEN_38
    res <= mux(reset, UInt<64>("h0"), _GEN_39) @[mul.scala 51:{22,22}]
    state <= mux(reset, UInt<2>("h0"), _GEN_17) @[mul.scala 53:{24,24}]
    src1 <= bits(mux(reset, UInt<64>("h0"), _GEN_18), 63, 0) @[mul.scala 55:{23,23}]
    src2 <= mux(reset, UInt<65>("h0"), _GEN_19) @[mul.scala 56:{23,23}]
    booth_partial.clock <= clock
    booth_partial.reset <= reset
    booth_partial.io_y <= _booth_partial_io_y_T @[mul.scala 90:36]
    booth_partial.io_x <= src1 @[mul.scala 91:36]

  module mul_test :
    input clock : Clock
    input reset : UInt<1>
    input io_a : UInt<64>
    input io_b : UInt<64>
    output io_out : UInt<64>

    inst Mul of Mul @[mul_test.scala 21:22]
    node _io_out_T = cat(Mul.io_result_hi, Mul.io_result_lo) @[Cat.scala 31:58]
    node _T = bits(reset, 0, 0) @[mul_test.scala 29:11]
    node _T_1 = eq(_T, UInt<1>("h0")) @[mul_test.scala 29:11]
    io_out <= _io_out_T @[mul_test.scala 28:12]
    Mul.clock <= clock
    Mul.reset <= reset
    Mul.io_mul_valid <= UInt<1>("h1") @[mul_test.scala 22:19]
    Mul.io_flush <= UInt<1>("h0") @[mul_test.scala 23:15]
    Mul.io_mulw <= UInt<1>("h1") @[mul_test.scala 24:14]
    Mul.io_mul_signed <= UInt<2>("h3") @[mul_test.scala 25:20]
    Mul.io_multiplicand <= io_a @[mul_test.scala 26:22]
    Mul.io_multiplier <= io_b @[mul_test.scala 27:20]
    printf(clock, and(and(UInt<1>("h1"), _T_1), UInt<1>("h1")), "%d %d\n", Mul.io_result_hi, Mul.io_result_lo) : printf @[mul_test.scala 29:11]
