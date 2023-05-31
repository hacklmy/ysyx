module LSU(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_es_to_ms_valid,
  input         io_rf_we,
  input  [4:0]  io_rf_dst,
  input  [63:0] io_alu_res,
  input  [63:0] io_store_data,
  input  [2:0]  io_load_type,
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
  reg [31:0] _RAND_10;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] Mem_modle_Raddr; // @[LSU.scala 71:27]
  wire [63:0] Mem_modle_Rdata; // @[LSU.scala 71:27]
  wire [63:0] Mem_modle_Waddr; // @[LSU.scala 71:27]
  wire [63:0] Mem_modle_Wdata; // @[LSU.scala 71:27]
  wire [7:0] Mem_modle_Wmask; // @[LSU.scala 71:27]
  wire  Mem_modle_Write_en; // @[LSU.scala 71:27]
  wire  Mem_modle_Read_en; // @[LSU.scala 71:27]
  reg  ms_valid; // @[LSU.scala 32:27]
  reg [63:0] ms_pc; // @[LSU.scala 33:24]
  reg  ms_rf_we; // @[LSU.scala 37:27]
  reg [4:0] ms_rf_dst; // @[LSU.scala 38:28]
  reg [63:0] ms_res; // @[LSU.scala 39:25]
  reg [63:0] store_data; // @[LSU.scala 41:29]
  reg  wen; // @[LSU.scala 42:22]
  reg [7:0] wstrb; // @[LSU.scala 43:24]
  reg  ren; // @[LSU.scala 44:22]
  reg [63:0] maddr; // @[LSU.scala 45:24]
  reg [2:0] load_type; // @[LSU.scala 46:28]
  wire [31:0] _rdata_T_2 = Mem_modle_Rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _rdata_T_4 = {_rdata_T_2,Mem_modle_Rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_7 = {56'h0,Mem_modle_Rdata[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_10 = {32'h0,Mem_modle_Rdata[31:0]}; // @[Cat.scala 31:58]
  wire [47:0] _rdata_T_13 = Mem_modle_Rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _rdata_T_15 = {_rdata_T_13,Mem_modle_Rdata[15:0]}; // @[Cat.scala 31:58]
  wire [55:0] _rdata_T_18 = Mem_modle_Rdata[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _rdata_T_20 = {_rdata_T_18,Mem_modle_Rdata[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_23 = {48'h0,Mem_modle_Rdata[15:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_25 = 3'h0 == load_type ? _rdata_T_4 : Mem_modle_Rdata; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_27 = 3'h1 == load_type ? Mem_modle_Rdata : _rdata_T_25; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_29 = 3'h2 == load_type ? _rdata_T_7 : _rdata_T_27; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_31 = 3'h3 == load_type ? _rdata_T_10 : _rdata_T_29; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_33 = 3'h4 == load_type ? _rdata_T_15 : _rdata_T_31; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_35 = 3'h5 == load_type ? _rdata_T_20 : _rdata_T_33; // @[Mux.scala 81:58]
  wire [63:0] rdata = 3'h6 == load_type ? _rdata_T_23 : _rdata_T_35; // @[Mux.scala 81:58]
  MEM Mem_modle ( // @[LSU.scala 71:27]
    .Raddr(Mem_modle_Raddr),
    .Rdata(Mem_modle_Rdata),
    .Waddr(Mem_modle_Waddr),
    .Wdata(Mem_modle_Wdata),
    .Wmask(Mem_modle_Wmask),
    .Write_en(Mem_modle_Write_en),
    .Read_en(Mem_modle_Read_en)
  );
  assign io_to_ws_pc = ms_pc; // @[LSU.scala 92:17]
  assign io_ms_final_res = ren ? rdata : ms_res; // @[LSU.scala 88:27]
  assign io_ms_to_ws_valid = ms_valid; // @[LSU.scala 68:32]
  assign io_to_ws_rf_we = ms_rf_we; // @[LSU.scala 91:20]
  assign io_to_ws_rf_dst = ms_rf_dst; // @[LSU.scala 90:21]
  assign io_ms_valid = ms_valid; // @[LSU.scala 94:17]
  assign io_ms_rf_we = ms_rf_we & ms_valid; // @[LSU.scala 96:28]
  assign io_ms_rf_dst = ms_rf_dst; // @[LSU.scala 95:18]
  assign Mem_modle_Raddr = maddr; // @[LSU.scala 72:24]
  assign Mem_modle_Waddr = maddr; // @[LSU.scala 73:24]
  assign Mem_modle_Wdata = store_data; // @[LSU.scala 74:24]
  assign Mem_modle_Wmask = wstrb; // @[LSU.scala 75:24]
  assign Mem_modle_Write_en = wen & ms_valid; // @[LSU.scala 76:34]
  assign Mem_modle_Read_en = ren; // @[LSU.scala 77:26]
  always @(posedge clock) begin
    if (reset) begin // @[LSU.scala 32:27]
      ms_valid <= 1'h0; // @[LSU.scala 32:27]
    end else begin
      ms_valid <= io_es_to_ms_valid;
    end
    if (reset) begin // @[LSU.scala 33:24]
      ms_pc <= 64'h0; // @[LSU.scala 33:24]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      ms_pc <= io_pc; // @[LSU.scala 53:15]
    end
    if (reset) begin // @[LSU.scala 37:27]
      ms_rf_we <= 1'h0; // @[LSU.scala 37:27]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      ms_rf_we <= io_rf_we; // @[LSU.scala 54:18]
    end
    if (reset) begin // @[LSU.scala 38:28]
      ms_rf_dst <= 5'h0; // @[LSU.scala 38:28]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      ms_rf_dst <= io_rf_dst; // @[LSU.scala 55:19]
    end
    if (reset) begin // @[LSU.scala 39:25]
      ms_res <= 64'h0; // @[LSU.scala 39:25]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      ms_res <= io_alu_res; // @[LSU.scala 56:16]
    end
    if (reset) begin // @[LSU.scala 41:29]
      store_data <= 64'h0; // @[LSU.scala 41:29]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      store_data <= io_store_data; // @[LSU.scala 58:20]
    end
    if (reset) begin // @[LSU.scala 42:22]
      wen <= 1'h0; // @[LSU.scala 42:22]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      wen <= io_wen; // @[LSU.scala 59:13]
    end
    if (reset) begin // @[LSU.scala 43:24]
      wstrb <= 8'h0; // @[LSU.scala 43:24]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      wstrb <= io_wstrb; // @[LSU.scala 60:15]
    end
    if (reset) begin // @[LSU.scala 44:22]
      ren <= 1'h0; // @[LSU.scala 44:22]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      ren <= io_ren; // @[LSU.scala 61:13]
    end
    if (reset) begin // @[LSU.scala 45:24]
      maddr <= 64'h0; // @[LSU.scala 45:24]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      maddr <= io_maddr; // @[LSU.scala 62:15]
    end
    if (reset) begin // @[LSU.scala 46:28]
      load_type <= 3'h0; // @[LSU.scala 46:28]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      load_type <= io_load_type; // @[LSU.scala 63:19]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"ms_pc:%x ms_valid:%d wstrb:%x wdata:%x\n",ms_pc,ms_valid,wstrb,store_data); // @[LSU.scala 98:11]
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
  _RAND_10 = {1{`RANDOM}};
  load_type = _RAND_10[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
