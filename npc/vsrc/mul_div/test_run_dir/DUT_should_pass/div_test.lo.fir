circuit div_test :
  module Div :
    input clock : Clock
    input reset : UInt<1>
    input io_dividend : UInt<64>
    input io_divisor : UInt<64>
    input io_div_valid : UInt<1>
    input io_divw : UInt<1>
    input io_div_signed : UInt<1>
    input io_flush : UInt<1>
    output io_div_ready : UInt<1>
    output io_out_valid : UInt<1>
    output io_quotient : UInt<64>
    output io_remainder : UInt<64>

    node _dend_neg_T = bits(io_dividend, 31, 31) @[div.scala 25:41]
    node _dend_neg_T_1 = bits(io_dividend, 63, 63) @[div.scala 25:58]
    node _dend_neg_T_2 = mux(io_divw, _dend_neg_T, _dend_neg_T_1) @[div.scala 25:20]
    node _sor_neg_T = bits(io_divisor, 31, 31) @[div.scala 26:39]
    node _sor_neg_T_1 = bits(io_divisor, 63, 63) @[div.scala 26:55]
    node _sor_neg_T_2 = mux(io_divw, _sor_neg_T, _sor_neg_T_1) @[div.scala 26:19]
    node sor_neg = _sor_neg_T_2 @[div.scala 21:23 26:13]
    node _quotient_neg_T = not(sor_neg) @[div.scala 27:33]
    node dend_neg = _dend_neg_T_2 @[div.scala 20:24 25:14]
    node _quotient_neg_T_1 = and(dend_neg, _quotient_neg_T) @[div.scala 27:31]
    node _quotient_neg_T_2 = not(dend_neg) @[div.scala 27:46]
    node _quotient_neg_T_3 = and(_quotient_neg_T_2, sor_neg) @[div.scala 27:56]
    node _quotient_neg_T_4 = or(_quotient_neg_T_1, _quotient_neg_T_3) @[div.scala 27:43]
    node _src1_32_s_T = bits(io_dividend, 31, 31) @[div.scala 35:53]
    node _src1_32_s_T_1 = bits(_src1_32_s_T, 0, 0) @[Bitwise.scala 74:15]
    node _src1_32_s_T_2 = mux(_src1_32_s_T_1, UInt<32>("hffffffff"), UInt<32>("h0")) @[Bitwise.scala 74:12]
    node _src1_32_s_T_3 = bits(io_dividend, 31, 0) @[div.scala 35:70]
    node _src1_32_s_T_4 = cat(_src1_32_s_T_2, _src1_32_s_T_3) @[Cat.scala 31:58]
    node _src1_32_s_T_5 = mux(io_divw, _src1_32_s_T_4, io_dividend) @[div.scala 35:21]
    node _src2_32_s_T = bits(io_divisor, 31, 31) @[div.scala 36:52]
    node _src2_32_s_T_1 = bits(_src2_32_s_T, 0, 0) @[Bitwise.scala 74:15]
    node _src2_32_s_T_2 = mux(_src2_32_s_T_1, UInt<32>("hffffffff"), UInt<32>("h0")) @[Bitwise.scala 74:12]
    node _src2_32_s_T_3 = bits(io_divisor, 31, 0) @[div.scala 36:68]
    node _src2_32_s_T_4 = cat(_src2_32_s_T_2, _src2_32_s_T_3) @[Cat.scala 31:58]
    node _src2_32_s_T_5 = mux(io_divw, _src2_32_s_T_4, io_divisor) @[div.scala 36:21]
    node _src1_32_T = bits(io_dividend, 31, 0) @[div.scala 37:39]
    node _src1_32_T_1 = mux(io_divw, _src1_32_T, io_dividend) @[div.scala 37:19]
    node _src2_32_T = bits(io_divisor, 31, 0) @[div.scala 38:38]
    node _src2_32_T_1 = mux(io_divw, _src2_32_T, io_divisor) @[div.scala 38:19]
    node _real_cand_T = eq(io_div_signed, UInt<1>("h1")) @[div.scala 42:35]
    node _real_cand_T_1 = eq(dend_neg, UInt<1>("h1")) @[div.scala 42:54]
    node src1_32_s = _src1_32_s_T_5 @[div.scala 30:25 35:15]
    node _real_cand_T_2 = not(src1_32_s) @[div.scala 42:61]
    node _real_cand_T_3 = add(_real_cand_T_2, UInt<1>("h1")) @[div.scala 42:71]
    node _real_cand_T_4 = tail(_real_cand_T_3, 1) @[div.scala 42:71]
    node _real_cand_T_5 = mux(_real_cand_T_1, _real_cand_T_4, src1_32_s) @[div.scala 42:45]
    node src1_32 = _src1_32_T_1 @[div.scala 32:23 37:13]
    node _real_cand_T_6 = mux(_real_cand_T, _real_cand_T_5, src1_32) @[div.scala 42:21]
    node _real_er_T = eq(io_div_signed, UInt<1>("h1")) @[div.scala 43:33]
    node _real_er_T_1 = eq(sor_neg, UInt<1>("h1")) @[div.scala 43:51]
    node src2_32_s = _src2_32_s_T_5 @[div.scala 31:25 36:15]
    node _real_er_T_2 = not(src2_32_s) @[div.scala 43:58]
    node _real_er_T_3 = add(_real_er_T_2, UInt<1>("h1")) @[div.scala 43:68]
    node _real_er_T_4 = tail(_real_er_T_3, 1) @[div.scala 43:68]
    node _real_er_T_5 = mux(_real_er_T_1, _real_er_T_4, src2_32_s) @[div.scala 43:43]
    node src2_32 = _src2_32_T_1 @[div.scala 33:23 38:13]
    node _real_er_T_6 = mux(_real_er_T, _real_er_T_5, src2_32) @[div.scala 43:19]
    node _src1_T = mux(UInt<1>("h0"), UInt<32>("hffffffff"), UInt<32>("h0")) @[Bitwise.scala 74:12]
    node real_cand = _real_cand_T_6 @[div.scala 40:25 42:15]
    node _src1_T_1 = cat(_src1_T, real_cand) @[Cat.scala 31:58]
    node real_er = _real_er_T_6 @[div.scala 41:23 43:13]
    node _src2_T = cat(UInt<1>("h0"), real_er) @[Cat.scala 31:58]
    reg div_cand : UInt<128>, clock with :
      reset => (UInt<1>("h0"), div_cand) @[div.scala 50:27]
    reg div_start : UInt<1>, clock with :
      reset => (UInt<1>("h0"), div_start) @[div.scala 51:28]
    reg quotient : UInt<64>, clock with :
      reset => (UInt<1>("h0"), quotient) @[div.scala 53:27]
    reg step_num : UInt<32>, clock with :
      reset => (UInt<1>("h0"), step_num) @[div.scala 55:27]
    node _io_div_ready_T = not(div_start) @[div.scala 56:21]
    node _GEN_0 = mux(io_div_valid, UInt<1>("h1"), div_start) @[div.scala 57:23 58:19 51:28]
    node src1 = pad(_src1_T_1, 128) @[div.scala 45:20 47:10]
    node _GEN_1 = mux(io_div_valid, src1, div_cand) @[div.scala 57:23 59:18 50:27]
    node _GEN_2 = mux(io_div_valid, UInt<1>("h0"), quotient) @[div.scala 57:23 60:18 53:27]
    node _GEN_3 = mux(io_div_valid, UInt<7>("h40"), step_num) @[div.scala 57:23 62:18 55:27]
    node _T = asSInt(step_num) @[div.scala 65:23]
    node _T_1 = gt(_T, asSInt(UInt<1>("h0"))) @[div.scala 65:30]
    node _sub_res_T = bits(div_cand, 127, 63) @[div.scala 69:32]
    node src2 = _src2_T @[div.scala 46:20 48:10]
    node _sub_res_T_1 = sub(_sub_res_T, src2) @[div.scala 69:41]
    node _sub_res_T_2 = tail(_sub_res_T_1, 1) @[div.scala 69:41]
    node sub_res = _sub_res_T_2 @[div.scala 66:31 69:21]
    node _quotient_T = bits(sub_res, 64, 64) @[div.scala 71:36]
    node _quotient_T_1 = eq(_quotient_T, UInt<1>("h1")) @[div.scala 71:40]
    node _quotient_T_2 = dshl(quotient, UInt<1>("h1")) @[div.scala 71:57]
    node _quotient_T_3 = dshl(quotient, UInt<1>("h1")) @[div.scala 71:74]
    node _quotient_T_4 = or(_quotient_T_3, UInt<64>("h1")) @[div.scala 71:81]
    node _quotient_T_5 = mux(_quotient_T_1, _quotient_T_2, _quotient_T_4) @[div.scala 71:28]
    node _update_cand_T = shl(sub_res, 63) @[div.scala 72:36]
    node _new_cand_T = bits(sub_res, 64, 64) @[div.scala 73:36]
    node _new_cand_T_1 = eq(_new_cand_T, UInt<1>("h1")) @[div.scala 73:40]
    node _new_cand_T_2 = and(div_cand, UInt<63>("h7fffffffffffffff")) @[div.scala 73:68]
    node update_cand = _update_cand_T @[div.scala 68:35 72:25]
    node _new_cand_T_3 = or(_new_cand_T_2, update_cand) @[div.scala 73:93]
    node _new_cand_T_4 = mux(_new_cand_T_1, div_cand, _new_cand_T_3) @[div.scala 73:28]
    node new_cand = _new_cand_T_4 @[div.scala 67:32 73:22]
    node _div_cand_T = shl(new_cand, 1) @[div.scala 74:34]
    node _step_num_T = sub(step_num, UInt<1>("h1")) @[div.scala 75:34]
    node _step_num_T_1 = tail(_step_num_T, 1) @[div.scala 75:34]
    node _io_remainder_T = eq(io_div_signed, UInt<1>("h1")) @[div.scala 81:46]
    node remainder_neg = dend_neg @[div.scala 23:29 28:19]
    node _io_remainder_T_1 = eq(remainder_neg, UInt<1>("h1")) @[div.scala 81:70]
    node _io_remainder_T_2 = bits(div_cand, 127, 64) @[div.scala 81:86]
    node _io_remainder_T_3 = not(_io_remainder_T_2) @[div.scala 81:77]
    node _io_remainder_T_4 = add(_io_remainder_T_3, UInt<1>("h1")) @[div.scala 81:94]
    node _io_remainder_T_5 = tail(_io_remainder_T_4, 1) @[div.scala 81:94]
    node _io_remainder_T_6 = bits(div_cand, 127, 64) @[div.scala 81:107]
    node _io_remainder_T_7 = mux(_io_remainder_T_1, _io_remainder_T_5, _io_remainder_T_6) @[div.scala 81:56]
    node _io_remainder_T_8 = bits(div_cand, 127, 64) @[div.scala 81:125]
    node _io_remainder_T_9 = mux(_io_remainder_T, _io_remainder_T_7, _io_remainder_T_8) @[div.scala 81:32]
    node _io_quotient_T = eq(io_div_signed, UInt<1>("h1")) @[div.scala 83:45]
    node quotient_neg = _quotient_neg_T_4 @[div.scala 22:28 27:18]
    node _io_quotient_T_1 = eq(quotient_neg, UInt<1>("h1")) @[div.scala 83:68]
    node _io_quotient_T_2 = not(quotient) @[div.scala 83:75]
    node _io_quotient_T_3 = add(_io_quotient_T_2, UInt<1>("h1")) @[div.scala 83:84]
    node _io_quotient_T_4 = tail(_io_quotient_T_3, 1) @[div.scala 83:84]
    node _io_quotient_T_5 = mux(_io_quotient_T_1, _io_quotient_T_4, quotient) @[div.scala 83:55]
    node _io_quotient_T_6 = mux(_io_quotient_T, _io_quotient_T_5, quotient) @[div.scala 83:31]
    node _GEN_4 = mux(_T_1, _quotient_T_5, _GEN_2) @[div.scala 65:36 71:22]
    node _GEN_5 = mux(_T_1, _div_cand_T, _GEN_1) @[div.scala 65:36 74:22]
    node _GEN_6 = mux(_T_1, _step_num_T_1, _GEN_3) @[div.scala 65:36 75:22]
    node _GEN_7 = mux(_T_1, UInt<1>("h0"), _io_remainder_T_9) @[div.scala 65:36 76:26 81:26]
    node _GEN_8 = mux(_T_1, UInt<1>("h0"), UInt<1>("h1")) @[div.scala 65:36 77:26 82:26]
    node _GEN_9 = mux(_T_1, UInt<1>("h0"), _io_quotient_T_6) @[div.scala 65:36 78:25 83:25]
    node _GEN_10 = mux(_T_1, _GEN_0, UInt<1>("h0")) @[div.scala 65:36 80:23]
    node _GEN_11 = mux(div_start, _GEN_4, _GEN_2) @[div.scala 64:20]
    node _GEN_12 = mux(div_start, _GEN_5, _GEN_1) @[div.scala 64:20]
    node _GEN_13 = mux(div_start, _GEN_6, _GEN_3) @[div.scala 64:20]
    node _GEN_14 = mux(div_start, _GEN_7, UInt<1>("h0")) @[div.scala 64:20 86:22]
    node _GEN_15 = mux(div_start, _GEN_8, UInt<1>("h0")) @[div.scala 64:20 87:22]
    node _GEN_16 = mux(div_start, _GEN_9, UInt<1>("h0")) @[div.scala 64:20 88:21]
    node _GEN_17 = mux(div_start, _GEN_10, _GEN_0) @[div.scala 64:20]
    io_div_ready <= _io_div_ready_T @[div.scala 56:18]
    io_out_valid <= _GEN_15
    io_quotient <= _GEN_16
    io_remainder <= _GEN_14
    div_cand <= bits(mux(reset, UInt<128>("h0"), _GEN_12), 127, 0) @[div.scala 50:{27,27}]
    div_start <= mux(reset, UInt<1>("h0"), _GEN_17) @[div.scala 51:{28,28}]
    quotient <= bits(mux(reset, UInt<64>("h0"), _GEN_11), 63, 0) @[div.scala 53:{27,27}]
    step_num <= mux(reset, UInt<32>("h0"), _GEN_13) @[div.scala 55:{27,27}]

  module div_test :
    input clock : Clock
    input reset : UInt<1>
    input io_a : UInt<64>
    input io_b : UInt<64>
    output io_out_q : UInt<64>
    output io_out_r : UInt<64>

    inst Div of Div @[div_test.scala 22:22]
    io_out_q <= Div.io_quotient @[div_test.scala 29:14]
    io_out_r <= Div.io_remainder @[div_test.scala 30:14]
    Div.clock <= clock
    Div.reset <= reset
    Div.io_dividend <= io_a @[div_test.scala 27:18]
    Div.io_divisor <= io_b @[div_test.scala 28:17]
    Div.io_div_valid <= UInt<1>("h1") @[div_test.scala 23:19]
    Div.io_divw <= UInt<1>("h1") @[div_test.scala 25:14]
    Div.io_div_signed <= UInt<1>("h1") @[div_test.scala 26:20]
    Div.io_flush <= UInt<1>("h0") @[div_test.scala 24:15]
