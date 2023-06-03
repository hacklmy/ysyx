module WBU(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_ms_to_ws_valid,
  input  [63:0] io_ms_final_res,
  input         io_rf_we,
  input  [4:0]  io_rf_dst,
  output        io_we,
  output [4:0]  io_waddr,
  output [63:0] io_wdata,
  output        io_ws_valid,
  output        io_ws_rf_we,
  output [4:0]  io_ws_rf_dst,
  output [63:0] io_ws_pc
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg  ws_valid; // @[WBU.scala 23:27]
  reg [63:0] ws_pc; // @[WBU.scala 24:24]
  reg  ws_rf_we; // @[WBU.scala 28:27]
  reg [4:0] ws_rf_dst; // @[WBU.scala 29:28]
  reg [63:0] ws_res; // @[WBU.scala 30:25]
  assign io_we = ws_rf_we & ws_valid; // @[WBU.scala 59:22]
  assign io_waddr = ws_rf_dst; // @[WBU.scala 60:14]
  assign io_wdata = ws_res; // @[WBU.scala 61:14]
  assign io_ws_valid = ws_valid; // @[WBU.scala 62:17]
  assign io_ws_rf_we = ws_rf_we; // @[WBU.scala 64:17]
  assign io_ws_rf_dst = ws_rf_dst; // @[WBU.scala 63:18]
  assign io_ws_pc = ws_pc; // @[WBU.scala 65:14]
  always @(posedge clock) begin
    if (reset) begin // @[WBU.scala 23:27]
      ws_valid <= 1'h0; // @[WBU.scala 23:27]
    end else begin
      ws_valid <= io_ms_to_ws_valid;
    end
    if (reset) begin // @[WBU.scala 24:24]
      ws_pc <= 64'h0; // @[WBU.scala 24:24]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 41:40]
      ws_pc <= io_pc; // @[WBU.scala 42:15]
    end
    if (reset) begin // @[WBU.scala 28:27]
      ws_rf_we <= 1'h0; // @[WBU.scala 28:27]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 41:40]
      ws_rf_we <= io_rf_we; // @[WBU.scala 43:18]
    end
    if (reset) begin // @[WBU.scala 29:28]
      ws_rf_dst <= 5'h0; // @[WBU.scala 29:28]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 41:40]
      ws_rf_dst <= io_rf_dst; // @[WBU.scala 44:19]
    end
    if (reset) begin // @[WBU.scala 30:25]
      ws_res <= 64'h0; // @[WBU.scala 30:25]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 41:40]
      ws_res <= io_ms_final_res; // @[WBU.scala 45:16]
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
  _RAND_0 = {1{`RANDOM}};
  ws_valid = _RAND_0[0:0];
  _RAND_1 = {2{`RANDOM}};
  ws_pc = _RAND_1[63:0];
  _RAND_2 = {1{`RANDOM}};
  ws_rf_we = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  ws_rf_dst = _RAND_3[4:0];
  _RAND_4 = {2{`RANDOM}};
  ws_res = _RAND_4[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule