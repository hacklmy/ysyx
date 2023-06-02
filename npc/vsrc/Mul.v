module Mul(
  input         clock,
  input         reset,
  input         io_mul_valid,
  input         io_mulw,
  input  [63:0] io_multiplicand,
  input  [63:0] io_multiplier,
  output        io_out_valid,
  output [31:0] io_result_hi,
  output [31:0] io_result_lo
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [127:0] _RAND_2;
  reg [95:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire [2:0] booth_partial_io_y; // @[Mul.scala 91:43]
  wire [63:0] booth_partial_io_x; // @[Mul.scala 91:43]
  wire  booth_partial_io_c; // @[Mul.scala 91:43]
  wire [63:0] booth_partial_io_p; // @[Mul.scala 91:43]
  wire  sign = io_multiplicand[63] ^ io_multiplier[63]; // @[Mul.scala 51:33]
  reg [63:0] res; // @[Mul.scala 53:22]
  reg [1:0] state; // @[Mul.scala 55:24]
  reg [127:0] src1; // @[Mul.scala 57:23]
  reg [64:0] src2; // @[Mul.scala 58:23]
  wire [31:0] _src1_32_T_2 = io_multiplicand[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _src1_32_T_4 = {_src1_32_T_2,io_multiplicand[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] src1_32 = io_mulw ? _src1_32_T_4 : io_multiplicand; // @[Mul.scala 65:19]
  wire [31:0] _src2_32_T_2 = io_multiplier[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _src2_32_T_4 = {_src2_32_T_2,io_multiplier[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] src2_32 = io_mulw ? _src2_32_T_4 : io_multiplier; // @[Mul.scala 66:19]
  wire [63:0] _real_cand_T_5 = src1_32[63] ? 64'hffffffffffffffff : 64'h0; // @[Bitwise.scala 74:12]
  wire [127:0] real_cand = {_real_cand_T_5,src1_32}; // @[Cat.scala 31:58]
  wire [64:0] _real_er_T = {src2_32,1'h0}; // @[Cat.scala 31:58]
  wire [127:0] _GEN_1 = io_mul_valid ? real_cand : src1; // @[Mul.scala 77:44 79:22 57:23]
  wire [63:0] real_er = _real_er_T[63:0]; // @[Mul.scala 61:23 69:13]
  wire [63:0] _res_T_1 = res + booth_partial_io_p; // @[Mul.scala 95:32]
  wire [63:0] _GEN_25 = {{63'd0}, booth_partial_io_c}; // @[Mul.scala 95:53]
  wire [63:0] _res_T_3 = _res_T_1 + _GEN_25; // @[Mul.scala 95:53]
  wire [129:0] _src1_T = {src1, 2'h0}; // @[Mul.scala 97:34]
  wire [63:0] _GEN_3 = src2 != 65'h0 ? _res_T_3 : res; // @[Mul.scala 53:22 94:33 95:25]
  wire [129:0] _GEN_5 = src2 != 65'h0 ? _src1_T : {{2'd0}, src1}; // @[Mul.scala 57:23 94:33 97:26]
  wire [63:0] _GEN_14 = 2'h1 == state ? _GEN_3 : res; // @[Mul.scala 71:18 53:22]
  wire [129:0] _GEN_16 = 2'h1 == state ? _GEN_5 : {{2'd0}, src1}; // @[Mul.scala 71:18 57:23]
  wire [129:0] _GEN_18 = 2'h0 == state ? {{2'd0}, _GEN_1} : _GEN_16; // @[Mul.scala 71:18]
  wire [63:0] _GEN_20 = 2'h0 == state ? res : _GEN_14; // @[Mul.scala 71:18 53:22]
  wire  _T_8 = state == 2'h2; // @[Mul.scala 132:21]
  wire [31:0] _io_result_hi_T_1 = {sign,res[62:32]}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_27 = state == 2'h2 ? _io_result_hi_T_1 : 32'h0; // @[Mul.scala 132:35 149:22]
  wire [31:0] _GEN_28 = state == 2'h2 ? res[31:0] : 32'h0; // @[Mul.scala 132:35 150:22]
  wire  _GEN_31 = state == 2'h1 ? 1'h0 : _T_8; // @[Mul.scala 127:33 129:22]
  wire [31:0] _GEN_32 = state == 2'h1 ? 32'h0 : _GEN_27; // @[Mul.scala 127:33 130:22]
  wire [31:0] _GEN_33 = state == 2'h1 ? 32'h0 : _GEN_28; // @[Mul.scala 127:33 131:22]
  wire [129:0] _GEN_30 = reset ? 130'h0 : _GEN_18; // @[Mul.scala 57:{23,23}]
  partial_product booth_partial ( // @[Mul.scala 91:43]
    .io_y(booth_partial_io_y),
    .io_x(booth_partial_io_x),
    .io_c(booth_partial_io_c),
    .io_p(booth_partial_io_p)
  );
  assign io_out_valid = state == 2'h0 ? 1'h0 : _GEN_31; // @[Mul.scala 122:23 124:22]
  assign io_result_hi = state == 2'h0 ? 32'h0 : _GEN_32; // @[Mul.scala 122:23 125:22]
  assign io_result_lo = state == 2'h0 ? 32'h0 : _GEN_33; // @[Mul.scala 122:23 126:22]
  assign booth_partial_io_y = src2[2:0]; // @[Mul.scala 92:43]
  assign booth_partial_io_x = src1[63:0]; // @[Mul.scala 93:36]
  always @(posedge clock) begin
    if (reset) begin // @[Mul.scala 53:22]
      res <= 64'h0; // @[Mul.scala 53:22]
    end else if (state == 2'h0) begin // @[Mul.scala 122:23]
      res <= _GEN_20;
    end else if (state == 2'h1) begin // @[Mul.scala 127:33]
      res <= _GEN_20;
    end else if (state == 2'h2) begin // @[Mul.scala 132:35]
      res <= 64'h0;
    end else begin
      res <= _GEN_20;
    end
    if (reset) begin // @[Mul.scala 55:24]
      state <= 2'h0; // @[Mul.scala 55:24]
    end else if (2'h0 == state) begin // @[Mul.scala 71:18]
      if (io_mul_valid) begin // @[Mul.scala 77:44]
        state <= 2'h1; // @[Mul.scala 78:23]
      end
    end else if (2'h1 == state) begin // @[Mul.scala 71:18]
      if (!(src2 != 65'h0)) begin // @[Mul.scala 94:33]
        state <= 2'h2; // @[Mul.scala 99:27]
      end
    end else if (2'h2 == state) begin // @[Mul.scala 71:18]
      state <= 2'h0;
    end
    src1 <= _GEN_30[127:0]; // @[Mul.scala 57:{23,23}]
    if (reset) begin // @[Mul.scala 58:23]
      src2 <= 65'h0; // @[Mul.scala 58:23]
    end else if (2'h0 == state) begin // @[Mul.scala 71:18]
      if (io_mul_valid) begin // @[Mul.scala 77:44]
        src2 <= {{1'd0}, real_er}; // @[Mul.scala 80:22]
      end
    end else if (2'h1 == state) begin // @[Mul.scala 71:18]
      if (src2 != 65'h0) begin // @[Mul.scala 94:33]
        src2 <= {{2'd0}, src2[64:2]}; // @[Mul.scala 96:26]
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"state:%d  src1_32:%x  src2_32:%x src1:%x  src2:%x\n",state,src1_32,src2_32,src1,src2); // @[Mul.scala 152:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
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
  _RAND_0 = {2{`RANDOM}};
  res = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  state = _RAND_1[1:0];
  _RAND_2 = {4{`RANDOM}};
  src1 = _RAND_2[127:0];
  _RAND_3 = {3{`RANDOM}};
  src2 = _RAND_3[64:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
