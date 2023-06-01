/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
module EXU(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_ds_to_es_valid,
  input  [31:0] io_ALUop,
  input  [63:0] io_src1_value,
  input  [63:0] io_src2_value,
  input  [4:0]  io_rf_dst,
  input  [63:0] io_store_data,
  output        io_es_to_ms_valid,
  input  [2:0]  io_load_type,
  output [63:0] io_to_ms_pc,
  output [63:0] io_to_ms_alures,
  output [63:0] io_to_ms_store_data,
  output        io_to_ms_wen,
  output [7:0]  io_to_ms_wstrb,
  output        io_to_ms_ren,
  output [63:0] io_to_ms_maddr,
  output [4:0]  io_to_ms_rf_dst,
  output        io_to_ms_rf_we,
  output [2:0]  io_to_ms_load_type,
  input         io_ctrl_sign_reg_write,
  input         io_ctrl_sign_Writemem_en,
  input         io_ctrl_sign_Readmem_en,
  input  [7:0]  io_ctrl_sign_Wmask,
  output        io_es_valid,
  output        io_es_rf_we,
  output [4:0]  io_es_rf_dst
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] ALU_io_src1_value; // @[EXU.scala 37:21]
  wire [63:0] ALU_io_src2_value; // @[EXU.scala 37:21]
  wire [31:0] ALU_io_ALUop; // @[EXU.scala 37:21]
  wire [63:0] ALU_io_alu_res; // @[EXU.scala 37:21]
  reg [63:0] es_pc; // @[EXU.scala 39:24]
  reg  es_valid; // @[EXU.scala 40:27]
  reg [4:0] es_rd; // @[EXU.scala 44:24]
  reg  es_rf_we; // @[EXU.scala 45:27]
  reg [63:0] src1_value; // @[EXU.scala 47:29]
  reg [63:0] src2_value; // @[EXU.scala 48:29]
  reg [63:0] store_data; // @[EXU.scala 49:29]
  reg [7:0] st_wstrb; // @[EXU.scala 50:27]
  reg  st_we; // @[EXU.scala 51:24]
  reg  ld_we; // @[EXU.scala 52:24]
  reg [31:0] ALUop; // @[EXU.scala 54:24]
  reg [2:0] load_type; // @[EXU.scala 55:28]
  wire [63:0] alu_res = ALU_io_alu_res; // @[EXU.scala 53:23 95:13]
  ALU ALU ( // @[EXU.scala 37:21]
    .io_src1_value(ALU_io_src1_value),
    .io_src2_value(ALU_io_src2_value),
    .io_ALUop(ALU_io_ALUop),
    .io_alu_res(ALU_io_alu_res)
  );
  assign io_es_to_ms_valid = es_valid; // @[EXU.scala 76:32]
  assign io_to_ms_pc = es_pc; // @[EXU.scala 108:17]
  assign io_to_ms_alures = ALU_io_alu_res; // @[EXU.scala 53:23 95:13]
  assign io_to_ms_store_data = store_data; // @[EXU.scala 111:25]
  assign io_to_ms_wen = st_we; // @[EXU.scala 112:18]
  assign io_to_ms_wstrb = st_wstrb; // @[EXU.scala 113:20]
  assign io_to_ms_ren = ld_we; // @[EXU.scala 114:18]
  assign io_to_ms_maddr = ALU_io_alu_res; // @[EXU.scala 53:23 95:13]
  assign io_to_ms_rf_dst = es_rd; // @[EXU.scala 116:21]
  assign io_to_ms_rf_we = es_rf_we; // @[EXU.scala 117:20]
  assign io_to_ms_load_type = load_type; // @[EXU.scala 121:24]
  assign io_es_valid = es_valid; // @[EXU.scala 118:17]
  assign io_es_rf_we = es_rf_we; // @[EXU.scala 120:17]
  assign io_es_rf_dst = es_rd; // @[EXU.scala 119:18]
  assign ALU_io_src1_value = ALUop == 32'h6 ? es_pc : src1_value; // @[EXU.scala 91:26]
  assign ALU_io_src2_value = src2_value; // @[EXU.scala 92:20]
  assign ALU_io_ALUop = ALUop; // @[EXU.scala 93:15]
  always @(posedge clock) begin
    if (reset) begin // @[EXU.scala 39:24]
      es_pc <= 64'h0; // @[EXU.scala 39:24]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 60:42]
      es_pc <= io_pc; // @[EXU.scala 61:15]
    end
    if (reset) begin // @[EXU.scala 40:27]
      es_valid <= 1'h0; // @[EXU.scala 40:27]
    end else begin
      es_valid <= io_ds_to_es_valid;
    end
    if (reset) begin // @[EXU.scala 44:24]
      es_rd <= 5'h0; // @[EXU.scala 44:24]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 60:42]
      es_rd <= io_rf_dst; // @[EXU.scala 66:15]
    end
    if (reset) begin // @[EXU.scala 45:27]
      es_rf_we <= 1'h0; // @[EXU.scala 45:27]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 60:42]
      es_rf_we <= io_ctrl_sign_reg_write; // @[EXU.scala 62:18]
    end
    if (reset) begin // @[EXU.scala 47:29]
      src1_value <= 64'h0; // @[EXU.scala 47:29]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 60:42]
      src1_value <= io_src1_value; // @[EXU.scala 64:20]
    end
    if (reset) begin // @[EXU.scala 48:29]
      src2_value <= 64'h0; // @[EXU.scala 48:29]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 60:42]
      src2_value <= io_src2_value; // @[EXU.scala 65:20]
    end
    if (reset) begin // @[EXU.scala 49:29]
      store_data <= 64'h0; // @[EXU.scala 49:29]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 60:42]
      store_data <= io_store_data; // @[EXU.scala 67:20]
    end
    if (reset) begin // @[EXU.scala 50:27]
      st_wstrb <= 8'h0; // @[EXU.scala 50:27]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 60:42]
      st_wstrb <= io_ctrl_sign_Wmask; // @[EXU.scala 68:18]
    end
    if (reset) begin // @[EXU.scala 51:24]
      st_we <= 1'h0; // @[EXU.scala 51:24]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 60:42]
      st_we <= io_ctrl_sign_Writemem_en; // @[EXU.scala 69:15]
    end
    if (reset) begin // @[EXU.scala 52:24]
      ld_we <= 1'h0; // @[EXU.scala 52:24]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 60:42]
      ld_we <= io_ctrl_sign_Readmem_en; // @[EXU.scala 70:15]
    end
    if (reset) begin // @[EXU.scala 54:24]
      ALUop <= 32'h0; // @[EXU.scala 54:24]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 60:42]
      ALUop <= io_ALUop; // @[EXU.scala 71:15]
    end
    if (reset) begin // @[EXU.scala 55:28]
      load_type <= 3'h0; // @[EXU.scala 55:28]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 60:42]
      load_type <= io_load_type; // @[EXU.scala 72:19]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"es_pc:%x es_valid:%d alu_res:%x src1_value:%x  src2_value:%x\n\n",es_pc,es_valid,alu_res
            ,src1_value,src2_value); // @[EXU.scala 122:11]
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
  es_pc = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  es_valid = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  es_rd = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  es_rf_we = _RAND_3[0:0];
  _RAND_4 = {2{`RANDOM}};
  src1_value = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  src2_value = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  store_data = _RAND_6[63:0];
  _RAND_7 = {1{`RANDOM}};
  st_wstrb = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  st_we = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  ld_we = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  ALUop = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  load_type = _RAND_11[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
/* verilator lint_on WIDTH */
/* verilator lint_on UNUSED */
