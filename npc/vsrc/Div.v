module Div(
  input         clock,
  input         reset,
  input  [63:0] io_dividend,
  input  [63:0] io_divisor,
  input         io_div_valid,
  input         io_divw,
  input         io_div_signed,
  output        io_out_valid,
  output [63:0] io_quotient,
  output [63:0] io_remainder
);
`ifdef RANDOMIZE_REG_INIT
  reg [127:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire  dend_neg = io_divw ? io_dividend[31] : io_dividend[63]; // @[Div.scala 25:20]
  wire  sor_neg = io_divw ? io_divisor[31] : io_divisor[63]; // @[Div.scala 26:19]
  wire  quotient_neg = dend_neg & ~sor_neg | ~dend_neg & sor_neg; // @[Div.scala 27:43]
  wire [31:0] _src1_32_s_T_2 = io_dividend[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _src1_32_s_T_4 = {_src1_32_s_T_2,io_dividend[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] src1_32_s = io_divw ? _src1_32_s_T_4 : io_dividend; // @[Div.scala 35:21]
  wire [31:0] _src2_32_s_T_2 = io_divisor[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _src2_32_s_T_4 = {_src2_32_s_T_2,io_divisor[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] src2_32_s = io_divw ? _src2_32_s_T_4 : io_divisor; // @[Div.scala 36:21]
  wire [63:0] src1_32 = io_divw ? {{32'd0}, io_dividend[31:0]} : io_dividend; // @[Div.scala 37:19]
  wire [63:0] src2_32 = io_divw ? {{32'd0}, io_divisor[31:0]} : io_divisor; // @[Div.scala 38:19]
  wire [63:0] _real_cand_T_2 = ~src1_32_s; // @[Div.scala 42:61]
  wire [63:0] _real_cand_T_4 = _real_cand_T_2 + 64'h1; // @[Div.scala 42:71]
  wire [63:0] _real_cand_T_5 = dend_neg ? _real_cand_T_4 : src1_32_s; // @[Div.scala 42:45]
  wire [63:0] real_cand = io_div_signed ? _real_cand_T_5 : src1_32; // @[Div.scala 42:21]
  wire [63:0] _real_er_T_2 = ~src2_32_s; // @[Div.scala 43:58]
  wire [63:0] _real_er_T_4 = _real_er_T_2 + 64'h1; // @[Div.scala 43:68]
  wire [63:0] _real_er_T_5 = sor_neg ? _real_er_T_4 : src2_32_s; // @[Div.scala 43:43]
  wire [63:0] real_er = io_div_signed ? _real_er_T_5 : src2_32; // @[Div.scala 43:19]
  wire [95:0] _src1_T_1 = {32'h0,real_cand}; // @[Cat.scala 31:58]
  wire [64:0] src2 = {1'h0,real_er}; // @[Cat.scala 31:58]
  reg [127:0] div_cand; // @[Div.scala 50:27]
  reg  div_start; // @[Div.scala 51:28]
  reg [63:0] quotient; // @[Div.scala 53:27]
  reg [31:0] step_num; // @[Div.scala 55:27]
  wire  _GEN_0 = io_div_valid | div_start; // @[Div.scala 62:27 63:23 51:28]
  wire [127:0] src1 = {{32'd0}, _src1_T_1}; // @[Div.scala 45:20 47:10]
  wire [127:0] _GEN_1 = io_div_valid ? src1 : div_cand; // @[Div.scala 62:27 64:22 50:27]
  wire [63:0] _GEN_2 = io_div_valid ? 64'h0 : quotient; // @[Div.scala 62:27 65:22 53:27]
  wire [31:0] _GEN_3 = io_div_valid ? 32'h40 : step_num; // @[Div.scala 62:27 67:22 55:27]
  wire [64:0] sub_res = div_cand[127:63] - src2; // @[Div.scala 75:41]
  wire [64:0] _quotient_T_2 = {quotient, 1'h0}; // @[Div.scala 77:57]
  wire [64:0] _quotient_T_4 = _quotient_T_2 | 65'h1; // @[Div.scala 77:81]
  wire [64:0] _quotient_T_5 = sub_res[64] ? _quotient_T_2 : _quotient_T_4; // @[Div.scala 77:28]
  wire [127:0] update_cand = {sub_res, 63'h0}; // @[Div.scala 78:36]
  wire [127:0] _new_cand_T_2 = div_cand & 128'h7fffffffffffffff; // @[Div.scala 79:68]
  wire [127:0] _new_cand_T_3 = _new_cand_T_2 | update_cand; // @[Div.scala 79:93]
  wire [127:0] new_cand = sub_res[64] ? div_cand : _new_cand_T_3; // @[Div.scala 79:28]
  wire [128:0] _div_cand_T = {new_cand, 1'h0}; // @[Div.scala 80:34]
  wire [31:0] _step_num_T_1 = step_num - 32'h1; // @[Div.scala 81:34]
  wire [63:0] _io_remainder_T_3 = ~div_cand[127:64]; // @[Div.scala 87:77]
  wire [63:0] _io_remainder_T_5 = _io_remainder_T_3 + 64'h1; // @[Div.scala 87:94]
  wire [63:0] _io_remainder_T_7 = dend_neg ? _io_remainder_T_5 : div_cand[127:64]; // @[Div.scala 87:56]
  wire [63:0] _io_remainder_T_9 = io_div_signed ? _io_remainder_T_7 : div_cand[127:64]; // @[Div.scala 87:32]
  wire [63:0] _io_quotient_T_2 = ~quotient; // @[Div.scala 89:75]
  wire [63:0] _io_quotient_T_4 = _io_quotient_T_2 + 64'h1; // @[Div.scala 89:84]
  wire [63:0] _io_quotient_T_5 = quotient_neg ? _io_quotient_T_4 : quotient; // @[Div.scala 89:55]
  wire [63:0] _io_quotient_T_6 = io_div_signed ? _io_quotient_T_5 : quotient; // @[Div.scala 89:31]
  wire [64:0] _GEN_8 = $signed(step_num) > 32'sh0 ? _quotient_T_5 : {{1'd0}, _GEN_2}; // @[Div.scala 71:36 77:22]
  wire [128:0] _GEN_9 = $signed(step_num) > 32'sh0 ? _div_cand_T : {{1'd0}, _GEN_1}; // @[Div.scala 71:36 80:22]
  wire [63:0] _GEN_11 = $signed(step_num) > 32'sh0 ? 64'h0 : _io_remainder_T_9; // @[Div.scala 71:36 82:26 87:26]
  wire  _GEN_12 = $signed(step_num) > 32'sh0 ? 1'h0 : 1'h1; // @[Div.scala 71:36 83:26 88:26]
  wire [63:0] _GEN_13 = $signed(step_num) > 32'sh0 ? 64'h0 : _io_quotient_T_6; // @[Div.scala 71:36 84:25 89:25]
  wire  _GEN_14 = $signed(step_num) > 32'sh0 & _GEN_0; // @[Div.scala 71:36 86:23]
  wire [64:0] _GEN_15 = div_start ? _GEN_8 : {{1'd0}, _GEN_2}; // @[Div.scala 70:20]
  wire [128:0] _GEN_16 = div_start ? _GEN_9 : {{1'd0}, _GEN_1}; // @[Div.scala 70:20]
  wire [128:0] _GEN_22 = reset ? 129'h0 : _GEN_16; // @[Div.scala 50:{27,27}]
  wire [64:0] _GEN_23 = reset ? 65'h0 : _GEN_15; // @[Div.scala 53:{27,27}]
  assign io_out_valid = div_start & _GEN_12; // @[Div.scala 70:20 93:22]
  assign io_quotient = div_start ? _GEN_13 : 64'h0; // @[Div.scala 70:20 94:21]
  assign io_remainder = div_start ? _GEN_11 : 64'h0; // @[Div.scala 70:20 92:22]
  always @(posedge clock) begin
    div_cand <= _GEN_22[127:0]; // @[Div.scala 50:{27,27}]
    if (reset) begin // @[Div.scala 51:28]
      div_start <= 1'h0; // @[Div.scala 51:28]
    end else if (div_start) begin // @[Div.scala 70:20]
      div_start <= _GEN_14;
    end else begin
      div_start <= _GEN_0;
    end
    quotient <= _GEN_23[63:0]; // @[Div.scala 53:{27,27}]
    if (reset) begin // @[Div.scala 55:27]
      step_num <= 32'h0; // @[Div.scala 55:27]
    end else if (div_start) begin // @[Div.scala 70:20]
      if ($signed(step_num) > 32'sh0) begin // @[Div.scala 71:36]
        step_num <= _step_num_T_1; // @[Div.scala 81:22]
      end else begin
        step_num <= _GEN_3;
      end
    end else begin
      step_num <= _GEN_3;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {4{`RANDOM}};
  div_cand = _RAND_0[127:0];
  _RAND_1 = {1{`RANDOM}};
  div_start = _RAND_1[0:0];
  _RAND_2 = {2{`RANDOM}};
  quotient = _RAND_2[63:0];
  _RAND_3 = {1{`RANDOM}};
  step_num = _RAND_3[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
