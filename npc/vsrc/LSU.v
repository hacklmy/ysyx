module LSU(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_es_to_ms_valid,
  input         io_rf_we,
  input  [4:0]  io_rf_dst,
  input  [63:0] io_alu_res,
  input  [63:0] io_store_data,
  input         io_wen,
  input  [7:0]  io_wstrb,
  input         io_ren,
  input  [63:0] io_maddr,
  output [63:0] io_to_ws_pc,
  output [63:0] io_ms_final_res,
  output        io_ms_to_ws_valid,
  output        io_to_ws_rf_we,
  output [4:0]  io_to_ws_rf_dst,
  output        io_ms_valid,
  output        io_ms_rf_we,
  output [4:0]  io_ms_rf_dst
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [63:0] _RAND_9;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] Mem_modle_Raddr; // @[LSU.scala 68:27]
  wire [63:0] Mem_modle_Rdata; // @[LSU.scala 68:27]
  wire [63:0] Mem_modle_Waddr; // @[LSU.scala 68:27]
  wire [63:0] Mem_modle_Wdata; // @[LSU.scala 68:27]
  wire [7:0] Mem_modle_Wmask; // @[LSU.scala 68:27]
  wire  Mem_modle_Write_en; // @[LSU.scala 68:27]
  wire  Mem_modle_Read_en; // @[LSU.scala 68:27]
  reg  ms_valid; // @[LSU.scala 31:27]
  reg [63:0] ms_pc; // @[LSU.scala 32:24]
  reg  ms_rf_we; // @[LSU.scala 36:27]
  reg [4:0] ms_rf_dst; // @[LSU.scala 37:28]
  reg [63:0] ms_res; // @[LSU.scala 38:25]
  reg [63:0] store_data; // @[LSU.scala 40:29]
  reg  wen; // @[LSU.scala 41:22]
  reg [7:0] wstrb; // @[LSU.scala 42:24]
  reg  ren; // @[LSU.scala 43:22]
  reg [63:0] maddr; // @[LSU.scala 44:24]
  MEM Mem_modle ( // @[LSU.scala 68:27]
    .Raddr(Mem_modle_Raddr),
    .Rdata(Mem_modle_Rdata),
    .Waddr(Mem_modle_Waddr),
    .Wdata(Mem_modle_Wdata),
    .Wmask(Mem_modle_Wmask),
    .Write_en(Mem_modle_Write_en),
    .Read_en(Mem_modle_Read_en)
  );
  assign io_to_ws_pc = ms_pc; // @[LSU.scala 80:17]
  assign io_ms_final_res = ren ? Mem_modle_Rdata : ms_res; // @[LSU.scala 76:27]
  assign io_ms_to_ws_valid = ms_valid; // @[LSU.scala 65:32]
  assign io_to_ws_rf_we = ms_rf_we; // @[LSU.scala 79:20]
  assign io_to_ws_rf_dst = ms_rf_dst; // @[LSU.scala 78:21]
  assign io_ms_valid = ms_valid; // @[LSU.scala 82:17]
  assign io_ms_rf_we = ms_rf_we & ms_valid; // @[LSU.scala 84:28]
  assign io_ms_rf_dst = ms_rf_dst; // @[LSU.scala 83:18]
  assign Mem_modle_Raddr = maddr; // @[LSU.scala 69:24]
  assign Mem_modle_Waddr = maddr; // @[LSU.scala 70:24]
  assign Mem_modle_Wdata = store_data; // @[LSU.scala 71:24]
  assign Mem_modle_Wmask = wstrb; // @[LSU.scala 72:24]
  assign Mem_modle_Write_en = wen & ms_valid; // @[LSU.scala 73:34]
  assign Mem_modle_Read_en = ren; // @[LSU.scala 74:26]
  always @(posedge clock) begin
    if (reset) begin // @[LSU.scala 31:27]
      ms_valid <= 1'h0; // @[LSU.scala 31:27]
    end else begin
      ms_valid <= io_es_to_ms_valid;
    end
    if (reset) begin // @[LSU.scala 32:24]
      ms_pc <= 64'h0; // @[LSU.scala 32:24]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 50:40]
      ms_pc <= io_pc; // @[LSU.scala 51:15]
    end
    if (reset) begin // @[LSU.scala 36:27]
      ms_rf_we <= 1'h0; // @[LSU.scala 36:27]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 50:40]
      ms_rf_we <= io_rf_we; // @[LSU.scala 52:18]
    end
    if (reset) begin // @[LSU.scala 37:28]
      ms_rf_dst <= 5'h0; // @[LSU.scala 37:28]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 50:40]
      ms_rf_dst <= io_rf_dst; // @[LSU.scala 53:19]
    end
    if (reset) begin // @[LSU.scala 38:25]
      ms_res <= 64'h0; // @[LSU.scala 38:25]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 50:40]
      ms_res <= io_alu_res; // @[LSU.scala 54:16]
    end
    if (reset) begin // @[LSU.scala 40:29]
      store_data <= 64'h0; // @[LSU.scala 40:29]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 50:40]
      store_data <= io_store_data; // @[LSU.scala 56:20]
    end
    if (reset) begin // @[LSU.scala 41:22]
      wen <= 1'h0; // @[LSU.scala 41:22]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 50:40]
      wen <= io_wen; // @[LSU.scala 57:13]
    end
    if (reset) begin // @[LSU.scala 42:24]
      wstrb <= 8'h0; // @[LSU.scala 42:24]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 50:40]
      wstrb <= io_wstrb; // @[LSU.scala 58:15]
    end
    if (reset) begin // @[LSU.scala 43:22]
      ren <= 1'h0; // @[LSU.scala 43:22]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 50:40]
      ren <= io_ren; // @[LSU.scala 59:13]
    end
    if (reset) begin // @[LSU.scala 44:24]
      maddr <= 64'h0; // @[LSU.scala 44:24]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 50:40]
      maddr <= io_maddr; // @[LSU.scala 60:15]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"ms_pc:%x ms_valid:%d\n",ms_pc,ms_valid); // @[LSU.scala 86:11]
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
  _RAND_0 = {1{`RANDOM}};
  ms_valid = _RAND_0[0:0];
  _RAND_1 = {2{`RANDOM}};
  ms_pc = _RAND_1[63:0];
  _RAND_2 = {1{`RANDOM}};
  ms_rf_we = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  ms_rf_dst = _RAND_3[4:0];
  _RAND_4 = {2{`RANDOM}};
  ms_res = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  store_data = _RAND_5[63:0];
  _RAND_6 = {1{`RANDOM}};
  wen = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  wstrb = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  ren = _RAND_8[0:0];
  _RAND_9 = {2{`RANDOM}};
  maddr = _RAND_9[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
