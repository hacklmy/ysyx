module AXI(
  input         clock,
  input         reset,
  input  [31:0] io_axi_in_araddr,
  input         io_axi_in_arvalid,
  input         io_axi_in_rready,
  input  [31:0] io_axi_in_awaddr,
  input         io_axi_in_awvalid,
  input  [31:0] io_axi_in_wdata,
  input  [7:0]  io_axi_in_wstrb,
  input         io_axi_in_wvalid,
  input         io_axi_in_bready,
  output        io_axi_out_arready,
  output [63:0] io_axi_out_rdata,
  output        io_axi_out_rvalid,
  output        io_axi_out_awready,
  output        io_axi_out_wready,
  output        io_axi_out_bvalid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] Mem_modle_Raddr; // @[AXI.scala 26:27]
  wire [63:0] Mem_modle_Rdata; // @[AXI.scala 26:27]
  wire [63:0] Mem_modle_Waddr; // @[AXI.scala 26:27]
  wire [63:0] Mem_modle_Wdata; // @[AXI.scala 26:27]
  wire [7:0] Mem_modle_Wmask; // @[AXI.scala 26:27]
  wire  Mem_modle_Write_en; // @[AXI.scala 26:27]
  wire  Mem_modle_Read_en; // @[AXI.scala 26:27]
  reg  axi_awready; // @[AXI.scala 13:30]
  reg  axi_wready; // @[AXI.scala 14:29]
  reg  axi_bvalid; // @[AXI.scala 17:29]
  reg  axi_arready; // @[AXI.scala 19:30]
  reg  axi_rvalid; // @[AXI.scala 21:29]
  reg [2:0] state; // @[AXI.scala 24:24]
  wire  _T_1 = ~reset; // @[AXI.scala 34:11]
  wire  _GEN_1 = io_axi_in_arvalid ? 1'h0 : axi_arready; // @[AXI.scala 49:42 51:29 19:30]
  wire  _GEN_2 = io_axi_in_arvalid | axi_rvalid; // @[AXI.scala 49:42 52:28 21:29]
  wire  _GEN_4 = io_axi_in_awvalid & io_axi_in_wvalid ? 1'h0 : axi_awready; // @[AXI.scala 39:56 41:29 13:30]
  wire  _GEN_5 = io_axi_in_awvalid & io_axi_in_wvalid ? 1'h0 : axi_wready; // @[AXI.scala 39:56 42:28 14:29]
  wire  _GEN_6 = io_axi_in_awvalid & io_axi_in_wvalid | axi_bvalid; // @[AXI.scala 39:56 43:28 17:29]
  wire  _GEN_7 = io_axi_in_awvalid & io_axi_in_wvalid ? axi_arready : _GEN_1; // @[AXI.scala 19:30 39:56]
  wire  _GEN_11 = io_axi_in_bready | axi_awready; // @[AXI.scala 56:35 59:29 13:30]
  wire  _GEN_12 = io_axi_in_bready | axi_wready; // @[AXI.scala 56:35 60:28 14:29]
  wire [2:0] _GEN_13 = io_axi_in_rready ? 3'h0 : state; // @[AXI.scala 64:35 65:23 24:24]
  wire  _GEN_14 = io_axi_in_rready | axi_arready; // @[AXI.scala 64:35 66:29 19:30]
  wire  _GEN_15 = io_axi_in_rready ? 1'h0 : axi_rvalid; // @[AXI.scala 64:35 67:28 21:29]
  wire  _GEN_17 = 3'h4 == state ? _GEN_14 : axi_arready; // @[AXI.scala 37:18 19:30]
  wire  _GEN_21 = 3'h3 == state ? _GEN_11 : axi_awready; // @[AXI.scala 37:18 13:30]
  wire  _GEN_22 = 3'h3 == state ? _GEN_12 : axi_wready; // @[AXI.scala 37:18 14:29]
  wire  _GEN_23 = 3'h3 == state ? axi_arready : _GEN_17; // @[AXI.scala 37:18 19:30]
  wire  _GEN_26 = 3'h0 == state ? _GEN_4 : _GEN_21; // @[AXI.scala 37:18]
  wire  _GEN_27 = 3'h0 == state ? _GEN_5 : _GEN_22; // @[AXI.scala 37:18]
  wire  _GEN_29 = 3'h0 == state ? _GEN_7 : _GEN_23; // @[AXI.scala 37:18]
  MEM Mem_modle ( // @[AXI.scala 26:27]
    .Raddr(Mem_modle_Raddr),
    .Rdata(Mem_modle_Rdata),
    .Waddr(Mem_modle_Waddr),
    .Wdata(Mem_modle_Wdata),
    .Wmask(Mem_modle_Wmask),
    .Write_en(Mem_modle_Write_en),
    .Read_en(Mem_modle_Read_en)
  );
  assign io_axi_out_arready = axi_arready; // @[AXI.scala 71:24]
  assign io_axi_out_rdata = Mem_modle_Rdata; // @[AXI.scala 72:22]
  assign io_axi_out_rvalid = axi_rvalid; // @[AXI.scala 73:23]
  assign io_axi_out_awready = axi_awready; // @[AXI.scala 74:24]
  assign io_axi_out_wready = axi_wready; // @[AXI.scala 75:23]
  assign io_axi_out_bvalid = axi_bvalid; // @[AXI.scala 76:23]
  assign Mem_modle_Raddr = {32'h0,io_axi_in_araddr}; // @[Cat.scala 31:58]
  assign Mem_modle_Waddr = {{32'd0}, io_axi_in_awaddr}; // @[AXI.scala 28:24]
  assign Mem_modle_Wdata = {{32'd0}, io_axi_in_wdata}; // @[AXI.scala 29:24]
  assign Mem_modle_Wmask = io_axi_in_wstrb; // @[AXI.scala 30:24]
  assign Mem_modle_Write_en = axi_wready & io_axi_in_wvalid; // @[AXI.scala 31:48]
  assign Mem_modle_Read_en = axi_arready & io_axi_in_arvalid; // @[AXI.scala 32:48]
  always @(posedge clock) begin
    axi_awready <= reset | _GEN_26; // @[AXI.scala 13:{30,30}]
    axi_wready <= reset | _GEN_27; // @[AXI.scala 14:{29,29}]
    if (reset) begin // @[AXI.scala 17:29]
      axi_bvalid <= 1'h0; // @[AXI.scala 17:29]
    end else if (3'h0 == state) begin // @[AXI.scala 37:18]
      axi_bvalid <= _GEN_6;
    end else if (3'h3 == state) begin // @[AXI.scala 37:18]
      if (io_axi_in_bready) begin // @[AXI.scala 56:35]
        axi_bvalid <= 1'h0; // @[AXI.scala 58:28]
      end
    end
    axi_arready <= reset | _GEN_29; // @[AXI.scala 19:{30,30}]
    if (reset) begin // @[AXI.scala 21:29]
      axi_rvalid <= 1'h0; // @[AXI.scala 21:29]
    end else if (3'h0 == state) begin // @[AXI.scala 37:18]
      if (!(io_axi_in_awvalid & io_axi_in_wvalid)) begin // @[AXI.scala 39:56]
        axi_rvalid <= _GEN_2;
      end
    end else if (!(3'h3 == state)) begin // @[AXI.scala 37:18]
      if (3'h4 == state) begin // @[AXI.scala 37:18]
        axi_rvalid <= _GEN_15;
      end
    end
    if (reset) begin // @[AXI.scala 24:24]
      state <= 3'h0; // @[AXI.scala 24:24]
    end else if (3'h0 == state) begin // @[AXI.scala 37:18]
      if (io_axi_in_awvalid & io_axi_in_wvalid) begin // @[AXI.scala 39:56]
        state <= 3'h3; // @[AXI.scala 40:23]
      end else if (io_axi_in_arvalid) begin // @[AXI.scala 49:42]
        state <= 3'h4; // @[AXI.scala 50:23]
      end
    end else if (3'h3 == state) begin // @[AXI.scala 37:18]
      if (io_axi_in_bready) begin // @[AXI.scala 56:35]
        state <= 3'h0; // @[AXI.scala 57:23]
      end
    end else if (3'h4 == state) begin // @[AXI.scala 37:18]
      state <= _GEN_13;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"axi_arready:%d axi_arvalid:%d\n",axi_arready,io_axi_in_arvalid); // @[AXI.scala 34:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1) begin
          $fwrite(32'h80000002,"read_en:%d read_addr :%x rvalid:%d read_data:%x\n",Mem_modle_Read_en,Mem_modle_Raddr,
            axi_rvalid,Mem_modle_Rdata); // @[AXI.scala 35:11]
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
  axi_awready = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  axi_wready = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  axi_bvalid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  axi_arready = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  axi_rvalid = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  state = _RAND_5[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module LSU(
  input         clock,
  input         reset,
  input         io_inst_store,
  input         io_inst_load,
  input  [31:0] io_mem_addr,
  input  [63:0] io_mem_wdata,
  input  [7:0]  io_mem_wstrb,
  output [63:0] io_mem_rdata,
  input         io_axi_in_arready,
  input  [63:0] io_axi_in_rdata,
  input         io_axi_in_rvalid,
  input         io_axi_in_awready,
  input         io_axi_in_wready,
  input         io_axi_in_bvalid,
  output [31:0] io_axi_out_araddr,
  output        io_axi_out_arvalid,
  output        io_axi_out_rready,
  output [31:0] io_axi_out_awaddr,
  output        io_axi_out_awvalid,
  output [31:0] io_axi_out_wdata,
  output [7:0]  io_axi_out_wstrb,
  output        io_axi_out_wvalid,
  output        io_axi_out_bready
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg  axi_arvalid; // @[LSU.scala 19:30]
  reg  axi_rready; // @[LSU.scala 22:29]
  reg  axi_awvalid; // @[LSU.scala 23:30]
  reg  axi_wvalid; // @[LSU.scala 24:29]
  reg  axi_bready; // @[LSU.scala 25:29]
  reg [1:0] state; // @[LSU.scala 28:24]
  wire  _GEN_1 = io_inst_store | axi_awvalid; // @[LSU.scala 36:38 38:29 23:30]
  wire  _GEN_2 = io_inst_store | axi_wvalid; // @[LSU.scala 36:38 39:28 24:29]
  wire  _GEN_3 = io_inst_store | axi_bready; // @[LSU.scala 36:38 40:28 25:29]
  wire  _GEN_5 = io_inst_load | axi_arvalid; // @[LSU.scala 32:31 34:29 19:30]
  wire  _GEN_6 = io_inst_load | axi_rready; // @[LSU.scala 32:31 35:28 22:29]
  wire  _GEN_9 = io_inst_load ? axi_bready : _GEN_3; // @[LSU.scala 25:29 32:31]
  wire  _GEN_11 = io_axi_in_bvalid ? 1'h0 : axi_bready; // @[LSU.scala 44:35 46:28 25:29]
  wire  _GEN_14 = io_axi_in_arready ? 1'h0 : axi_arvalid; // @[LSU.scala 56:36 57:29 19:30]
  wire [1:0] _GEN_15 = io_axi_in_rvalid ? 2'h0 : state; // @[LSU.scala 59:35 60:23 28:24]
  wire  _GEN_16 = io_axi_in_rvalid ? 1'h0 : axi_rready; // @[LSU.scala 59:35 61:28 22:29]
  wire  _GEN_19 = 2'h2 == state ? _GEN_16 : axi_rready; // @[LSU.scala 30:18 22:29]
  wire  _GEN_21 = 2'h1 == state ? _GEN_11 : axi_bready; // @[LSU.scala 30:18 25:29]
  wire  _GEN_25 = 2'h1 == state ? axi_rready : _GEN_19; // @[LSU.scala 30:18 22:29]
  wire  _GEN_28 = 2'h0 == state ? _GEN_6 : _GEN_25; // @[LSU.scala 30:18]
  wire  _GEN_31 = 2'h0 == state ? _GEN_9 : _GEN_21; // @[LSU.scala 30:18]
  assign io_mem_rdata = io_axi_in_rdata; // @[LSU.scala 72:18]
  assign io_axi_out_araddr = io_mem_addr; // @[LSU.scala 73:23]
  assign io_axi_out_arvalid = axi_arvalid; // @[LSU.scala 74:24]
  assign io_axi_out_rready = axi_rready; // @[LSU.scala 75:23]
  assign io_axi_out_awaddr = io_mem_addr; // @[LSU.scala 76:23]
  assign io_axi_out_awvalid = axi_awvalid; // @[LSU.scala 77:24]
  assign io_axi_out_wdata = io_mem_wdata[31:0]; // @[LSU.scala 78:22]
  assign io_axi_out_wstrb = io_mem_wstrb; // @[LSU.scala 79:22]
  assign io_axi_out_wvalid = axi_wvalid; // @[LSU.scala 80:23]
  assign io_axi_out_bready = axi_bready; // @[LSU.scala 81:23]
  always @(posedge clock) begin
    if (reset) begin // @[LSU.scala 19:30]
      axi_arvalid <= 1'h0; // @[LSU.scala 19:30]
    end else if (2'h0 == state) begin // @[LSU.scala 30:18]
      axi_arvalid <= _GEN_5;
    end else if (!(2'h1 == state)) begin // @[LSU.scala 30:18]
      if (2'h2 == state) begin // @[LSU.scala 30:18]
        axi_arvalid <= _GEN_14;
      end
    end
    axi_rready <= reset | _GEN_28; // @[LSU.scala 22:{29,29}]
    if (reset) begin // @[LSU.scala 23:30]
      axi_awvalid <= 1'h0; // @[LSU.scala 23:30]
    end else if (2'h0 == state) begin // @[LSU.scala 30:18]
      if (!(io_inst_load)) begin // @[LSU.scala 32:31]
        axi_awvalid <= _GEN_1;
      end
    end else if (2'h1 == state) begin // @[LSU.scala 30:18]
      if (io_axi_in_awready) begin // @[LSU.scala 51:36]
        axi_awvalid <= 1'h0; // @[LSU.scala 52:29]
      end
    end
    if (reset) begin // @[LSU.scala 24:29]
      axi_wvalid <= 1'h0; // @[LSU.scala 24:29]
    end else if (2'h0 == state) begin // @[LSU.scala 30:18]
      if (!(io_inst_load)) begin // @[LSU.scala 32:31]
        axi_wvalid <= _GEN_2;
      end
    end else if (2'h1 == state) begin // @[LSU.scala 30:18]
      if (io_axi_in_wready) begin // @[LSU.scala 48:35]
        axi_wvalid <= 1'h0; // @[LSU.scala 49:28]
      end
    end
    axi_bready <= reset | _GEN_31; // @[LSU.scala 25:{29,29}]
    if (reset) begin // @[LSU.scala 28:24]
      state <= 2'h0; // @[LSU.scala 28:24]
    end else if (2'h0 == state) begin // @[LSU.scala 30:18]
      if (io_inst_load) begin // @[LSU.scala 32:31]
        state <= 2'h2; // @[LSU.scala 33:23]
      end else if (io_inst_store) begin // @[LSU.scala 36:38]
        state <= 2'h1; // @[LSU.scala 37:23]
      end
    end else if (2'h1 == state) begin // @[LSU.scala 30:18]
      if (io_axi_in_bvalid) begin // @[LSU.scala 44:35]
        state <= 2'h0; // @[LSU.scala 45:23]
      end
    end else if (2'h2 == state) begin // @[LSU.scala 30:18]
      state <= _GEN_15;
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
  axi_arvalid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  axi_rready = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  axi_awvalid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  axi_wvalid = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  axi_bready = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  state = _RAND_5[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module AXI_ARBITER(
  input         clock,
  input         reset,
  input  [31:0] io_ifu_axi_in_araddr,
  input         io_ifu_axi_in_arvalid,
  input         io_ifu_axi_in_rready,
  output [63:0] io_ifu_axi_out_rdata,
  output        io_ifu_axi_out_rvalid,
  input  [31:0] io_lsu_axi_in_araddr,
  input         io_lsu_axi_in_arvalid,
  input         io_lsu_axi_in_rready,
  input  [31:0] io_lsu_axi_in_awaddr,
  input         io_lsu_axi_in_awvalid,
  input  [31:0] io_lsu_axi_in_wdata,
  input  [7:0]  io_lsu_axi_in_wstrb,
  input         io_lsu_axi_in_wvalid,
  input         io_lsu_axi_in_bready,
  output        io_lsu_axi_out_arready,
  output [63:0] io_lsu_axi_out_rdata,
  output        io_lsu_axi_out_rvalid,
  output        io_lsu_axi_out_awready,
  output        io_lsu_axi_out_wready,
  output        io_lsu_axi_out_bvalid,
  input         io_axi_in_arready,
  input  [63:0] io_axi_in_rdata,
  input         io_axi_in_rvalid,
  input         io_axi_in_awready,
  input         io_axi_in_wready,
  input         io_axi_in_bvalid,
  output [31:0] io_axi_out_araddr,
  output        io_axi_out_arvalid,
  output        io_axi_out_rready,
  output [31:0] io_axi_out_awaddr,
  output        io_axi_out_awvalid,
  output [31:0] io_axi_out_wdata,
  output [7:0]  io_axi_out_wstrb,
  output        io_axi_out_wvalid,
  output        io_axi_out_bready
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] state; // @[axi_arbiter.scala 18:24]
  wire [1:0] _GEN_0 = io_ifu_axi_in_arvalid ? 2'h1 : state; // @[axi_arbiter.scala 50:46 51:23 18:24]
  wire [31:0] _GEN_1 = io_ifu_axi_in_arvalid ? io_ifu_axi_in_araddr : 32'h0; // @[axi_arbiter.scala 50:46 52:28 56:28]
  wire  _GEN_3 = io_ifu_axi_in_arvalid & io_ifu_axi_in_rready; // @[axi_arbiter.scala 50:46 52:28 56:28]
  wire [63:0] _GEN_11 = io_ifu_axi_in_arvalid ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 50:46 53:32 58:32]
  wire  _GEN_12 = io_ifu_axi_in_arvalid & io_axi_in_rvalid; // @[axi_arbiter.scala 50:46 53:32 58:32]
  wire [31:0] _GEN_23 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_araddr : _GEN_1; // @[axi_arbiter.scala 45:46 47:28]
  wire  _GEN_24 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_arvalid : io_ifu_axi_in_arvalid; // @[axi_arbiter.scala 45:46 47:28]
  wire  _GEN_25 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_rready : _GEN_3; // @[axi_arbiter.scala 45:46 47:28]
  wire [31:0] _GEN_26 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_awaddr : 32'h0; // @[axi_arbiter.scala 45:46 47:28]
  wire  _GEN_27 = io_lsu_axi_in_arvalid & io_lsu_axi_in_awvalid; // @[axi_arbiter.scala 45:46 47:28]
  wire [31:0] _GEN_28 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_wdata : 32'h0; // @[axi_arbiter.scala 45:46 47:28]
  wire [7:0] _GEN_29 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_wstrb : 8'h0; // @[axi_arbiter.scala 45:46 47:28]
  wire  _GEN_30 = io_lsu_axi_in_arvalid & io_lsu_axi_in_wvalid; // @[axi_arbiter.scala 45:46 47:28]
  wire  _GEN_31 = io_lsu_axi_in_arvalid & io_lsu_axi_in_bready; // @[axi_arbiter.scala 45:46 47:28]
  wire  _GEN_32 = io_lsu_axi_in_arvalid & io_axi_in_arready; // @[axi_arbiter.scala 45:46 48:32]
  wire [63:0] _GEN_33 = io_lsu_axi_in_arvalid ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 45:46 48:32]
  wire  _GEN_34 = io_lsu_axi_in_arvalid & io_axi_in_rvalid; // @[axi_arbiter.scala 45:46 48:32]
  wire  _GEN_35 = io_lsu_axi_in_arvalid & io_axi_in_awready; // @[axi_arbiter.scala 45:46 48:32]
  wire  _GEN_36 = io_lsu_axi_in_arvalid & io_axi_in_wready; // @[axi_arbiter.scala 45:46 48:32]
  wire  _GEN_37 = io_lsu_axi_in_arvalid & io_axi_in_bvalid; // @[axi_arbiter.scala 45:46 48:32]
  wire [63:0] _GEN_39 = io_lsu_axi_in_arvalid ? 64'h0 : _GEN_11; // @[axi_arbiter.scala 45:46 49:32]
  wire  _GEN_40 = io_lsu_axi_in_arvalid ? 1'h0 : _GEN_12; // @[axi_arbiter.scala 45:46 49:32]
  wire [31:0] _GEN_45 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_araddr : _GEN_23; // @[axi_arbiter.scala 40:40 42:28]
  wire  _GEN_46 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_arvalid : _GEN_24; // @[axi_arbiter.scala 40:40 42:28]
  wire  _GEN_47 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_rready : _GEN_25; // @[axi_arbiter.scala 40:40 42:28]
  wire [31:0] _GEN_48 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_awaddr : _GEN_26; // @[axi_arbiter.scala 40:40 42:28]
  wire  _GEN_49 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_awvalid : _GEN_27; // @[axi_arbiter.scala 40:40 42:28]
  wire [31:0] _GEN_50 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_wdata : _GEN_28; // @[axi_arbiter.scala 40:40 42:28]
  wire [7:0] _GEN_51 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_wstrb : _GEN_29; // @[axi_arbiter.scala 40:40 42:28]
  wire  _GEN_52 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_wvalid : _GEN_30; // @[axi_arbiter.scala 40:40 42:28]
  wire  _GEN_53 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_bready : _GEN_31; // @[axi_arbiter.scala 40:40 42:28]
  wire  _GEN_54 = io_lsu_axi_in_awvalid ? io_axi_in_arready : _GEN_32; // @[axi_arbiter.scala 40:40 43:32]
  wire [63:0] _GEN_55 = io_lsu_axi_in_awvalid ? io_axi_in_rdata : _GEN_33; // @[axi_arbiter.scala 40:40 43:32]
  wire  _GEN_56 = io_lsu_axi_in_awvalid ? io_axi_in_rvalid : _GEN_34; // @[axi_arbiter.scala 40:40 43:32]
  wire  _GEN_57 = io_lsu_axi_in_awvalid ? io_axi_in_awready : _GEN_35; // @[axi_arbiter.scala 40:40 43:32]
  wire  _GEN_58 = io_lsu_axi_in_awvalid ? io_axi_in_wready : _GEN_36; // @[axi_arbiter.scala 40:40 43:32]
  wire  _GEN_59 = io_lsu_axi_in_awvalid ? io_axi_in_bvalid : _GEN_37; // @[axi_arbiter.scala 40:40 43:32]
  wire [63:0] _GEN_61 = io_lsu_axi_in_awvalid ? 64'h0 : _GEN_39; // @[axi_arbiter.scala 40:40 44:32]
  wire  _GEN_62 = io_lsu_axi_in_awvalid ? 1'h0 : _GEN_40; // @[axi_arbiter.scala 40:40 44:32]
  wire [1:0] _GEN_67 = io_lsu_axi_out_rvalid & io_lsu_axi_in_rready ? 2'h0 : state; // @[axi_arbiter.scala 73:64 74:23 18:24]
  wire [1:0] _GEN_68 = io_lsu_axi_out_bvalid & io_lsu_axi_in_bready ? 2'h0 : state; // @[axi_arbiter.scala 81:64 82:23 18:24]
  wire [31:0] _GEN_69 = state == 2'h3 ? io_lsu_axi_in_araddr : 32'h0; // @[axi_arbiter.scala 77:39 78:24 86:24]
  wire  _GEN_70 = state == 2'h3 & io_lsu_axi_in_arvalid; // @[axi_arbiter.scala 77:39 78:24 86:24]
  wire  _GEN_71 = state == 2'h3 & io_lsu_axi_in_rready; // @[axi_arbiter.scala 77:39 78:24 86:24]
  wire [31:0] _GEN_72 = state == 2'h3 ? io_lsu_axi_in_awaddr : 32'h0; // @[axi_arbiter.scala 77:39 78:24 86:24]
  wire  _GEN_73 = state == 2'h3 & io_lsu_axi_in_awvalid; // @[axi_arbiter.scala 77:39 78:24 86:24]
  wire [31:0] _GEN_74 = state == 2'h3 ? io_lsu_axi_in_wdata : 32'h0; // @[axi_arbiter.scala 77:39 78:24 86:24]
  wire [7:0] _GEN_75 = state == 2'h3 ? io_lsu_axi_in_wstrb : 8'h0; // @[axi_arbiter.scala 77:39 78:24 86:24]
  wire  _GEN_76 = state == 2'h3 & io_lsu_axi_in_wvalid; // @[axi_arbiter.scala 77:39 78:24 86:24]
  wire  _GEN_77 = state == 2'h3 & io_lsu_axi_in_bready; // @[axi_arbiter.scala 77:39 78:24 86:24]
  wire  _GEN_78 = state == 2'h3 & io_axi_in_arready; // @[axi_arbiter.scala 77:39 79:28 87:28]
  wire [63:0] _GEN_79 = state == 2'h3 ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 77:39 79:28 87:28]
  wire  _GEN_80 = state == 2'h3 & io_axi_in_rvalid; // @[axi_arbiter.scala 77:39 79:28 87:28]
  wire  _GEN_81 = state == 2'h3 & io_axi_in_awready; // @[axi_arbiter.scala 77:39 79:28 87:28]
  wire  _GEN_82 = state == 2'h3 & io_axi_in_wready; // @[axi_arbiter.scala 77:39 79:28 87:28]
  wire  _GEN_83 = state == 2'h3 & io_axi_in_bvalid; // @[axi_arbiter.scala 77:39 79:28 87:28]
  wire [1:0] _GEN_90 = state == 2'h3 ? _GEN_68 : state; // @[axi_arbiter.scala 18:24 77:39]
  wire [31:0] _GEN_91 = state == 2'h2 ? io_lsu_axi_in_araddr : _GEN_69; // @[axi_arbiter.scala 69:39 70:24]
  wire  _GEN_92 = state == 2'h2 ? io_lsu_axi_in_arvalid : _GEN_70; // @[axi_arbiter.scala 69:39 70:24]
  wire  _GEN_93 = state == 2'h2 ? io_lsu_axi_in_rready : _GEN_71; // @[axi_arbiter.scala 69:39 70:24]
  wire [31:0] _GEN_94 = state == 2'h2 ? io_lsu_axi_in_awaddr : _GEN_72; // @[axi_arbiter.scala 69:39 70:24]
  wire  _GEN_95 = state == 2'h2 ? io_lsu_axi_in_awvalid : _GEN_73; // @[axi_arbiter.scala 69:39 70:24]
  wire [31:0] _GEN_96 = state == 2'h2 ? io_lsu_axi_in_wdata : _GEN_74; // @[axi_arbiter.scala 69:39 70:24]
  wire [7:0] _GEN_97 = state == 2'h2 ? io_lsu_axi_in_wstrb : _GEN_75; // @[axi_arbiter.scala 69:39 70:24]
  wire  _GEN_98 = state == 2'h2 ? io_lsu_axi_in_wvalid : _GEN_76; // @[axi_arbiter.scala 69:39 70:24]
  wire  _GEN_99 = state == 2'h2 ? io_lsu_axi_in_bready : _GEN_77; // @[axi_arbiter.scala 69:39 70:24]
  wire  _GEN_100 = state == 2'h2 ? io_axi_in_arready : _GEN_78; // @[axi_arbiter.scala 69:39 71:28]
  wire [63:0] _GEN_101 = state == 2'h2 ? io_axi_in_rdata : _GEN_79; // @[axi_arbiter.scala 69:39 71:28]
  wire  _GEN_102 = state == 2'h2 ? io_axi_in_rvalid : _GEN_80; // @[axi_arbiter.scala 69:39 71:28]
  wire  _GEN_103 = state == 2'h2 ? io_axi_in_awready : _GEN_81; // @[axi_arbiter.scala 69:39 71:28]
  wire  _GEN_104 = state == 2'h2 ? io_axi_in_wready : _GEN_82; // @[axi_arbiter.scala 69:39 71:28]
  wire  _GEN_105 = state == 2'h2 ? io_axi_in_bvalid : _GEN_83; // @[axi_arbiter.scala 69:39 71:28]
  wire [31:0] _GEN_113 = state == 2'h1 ? io_ifu_axi_in_araddr : _GEN_91; // @[axi_arbiter.scala 61:39 62:24]
  wire  _GEN_114 = state == 2'h1 ? io_ifu_axi_in_arvalid : _GEN_92; // @[axi_arbiter.scala 61:39 62:24]
  wire  _GEN_115 = state == 2'h1 ? io_ifu_axi_in_rready : _GEN_93; // @[axi_arbiter.scala 61:39 62:24]
  wire [31:0] _GEN_116 = state == 2'h1 ? 32'h0 : _GEN_94; // @[axi_arbiter.scala 61:39 62:24]
  wire  _GEN_117 = state == 2'h1 ? 1'h0 : _GEN_95; // @[axi_arbiter.scala 61:39 62:24]
  wire [31:0] _GEN_118 = state == 2'h1 ? 32'h0 : _GEN_96; // @[axi_arbiter.scala 61:39 62:24]
  wire [7:0] _GEN_119 = state == 2'h1 ? 8'h0 : _GEN_97; // @[axi_arbiter.scala 61:39 62:24]
  wire  _GEN_120 = state == 2'h1 ? 1'h0 : _GEN_98; // @[axi_arbiter.scala 61:39 62:24]
  wire  _GEN_121 = state == 2'h1 ? 1'h0 : _GEN_99; // @[axi_arbiter.scala 61:39 62:24]
  wire [63:0] _GEN_123 = state == 2'h1 ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 61:39 63:28]
  wire  _GEN_124 = state == 2'h1 & io_axi_in_rvalid; // @[axi_arbiter.scala 61:39 63:28]
  wire  _GEN_128 = state == 2'h1 ? 1'h0 : _GEN_100; // @[axi_arbiter.scala 61:39 64:28]
  wire [63:0] _GEN_129 = state == 2'h1 ? 64'h0 : _GEN_101; // @[axi_arbiter.scala 61:39 64:28]
  wire  _GEN_130 = state == 2'h1 ? 1'h0 : _GEN_102; // @[axi_arbiter.scala 61:39 64:28]
  wire  _GEN_131 = state == 2'h1 ? 1'h0 : _GEN_103; // @[axi_arbiter.scala 61:39 64:28]
  wire  _GEN_132 = state == 2'h1 ? 1'h0 : _GEN_104; // @[axi_arbiter.scala 61:39 64:28]
  wire  _GEN_133 = state == 2'h1 ? 1'h0 : _GEN_105; // @[axi_arbiter.scala 61:39 64:28]
  assign io_ifu_axi_out_rdata = state == 2'h0 ? _GEN_61 : _GEN_123; // @[axi_arbiter.scala 39:27]
  assign io_ifu_axi_out_rvalid = state == 2'h0 ? _GEN_62 : _GEN_124; // @[axi_arbiter.scala 39:27]
  assign io_lsu_axi_out_arready = state == 2'h0 ? _GEN_54 : _GEN_128; // @[axi_arbiter.scala 39:27]
  assign io_lsu_axi_out_rdata = state == 2'h0 ? _GEN_55 : _GEN_129; // @[axi_arbiter.scala 39:27]
  assign io_lsu_axi_out_rvalid = state == 2'h0 ? _GEN_56 : _GEN_130; // @[axi_arbiter.scala 39:27]
  assign io_lsu_axi_out_awready = state == 2'h0 ? _GEN_57 : _GEN_131; // @[axi_arbiter.scala 39:27]
  assign io_lsu_axi_out_wready = state == 2'h0 ? _GEN_58 : _GEN_132; // @[axi_arbiter.scala 39:27]
  assign io_lsu_axi_out_bvalid = state == 2'h0 ? _GEN_59 : _GEN_133; // @[axi_arbiter.scala 39:27]
  assign io_axi_out_araddr = state == 2'h0 ? _GEN_45 : _GEN_113; // @[axi_arbiter.scala 39:27]
  assign io_axi_out_arvalid = state == 2'h0 ? _GEN_46 : _GEN_114; // @[axi_arbiter.scala 39:27]
  assign io_axi_out_rready = state == 2'h0 ? _GEN_47 : _GEN_115; // @[axi_arbiter.scala 39:27]
  assign io_axi_out_awaddr = state == 2'h0 ? _GEN_48 : _GEN_116; // @[axi_arbiter.scala 39:27]
  assign io_axi_out_awvalid = state == 2'h0 ? _GEN_49 : _GEN_117; // @[axi_arbiter.scala 39:27]
  assign io_axi_out_wdata = state == 2'h0 ? _GEN_50 : _GEN_118; // @[axi_arbiter.scala 39:27]
  assign io_axi_out_wstrb = state == 2'h0 ? _GEN_51 : _GEN_119; // @[axi_arbiter.scala 39:27]
  assign io_axi_out_wvalid = state == 2'h0 ? _GEN_52 : _GEN_120; // @[axi_arbiter.scala 39:27]
  assign io_axi_out_bready = state == 2'h0 ? _GEN_53 : _GEN_121; // @[axi_arbiter.scala 39:27]
  always @(posedge clock) begin
    if (reset) begin // @[axi_arbiter.scala 18:24]
      state <= 2'h0; // @[axi_arbiter.scala 18:24]
    end else if (state == 2'h0) begin // @[axi_arbiter.scala 39:27]
      if (io_lsu_axi_in_awvalid) begin // @[axi_arbiter.scala 40:40]
        state <= 2'h3; // @[axi_arbiter.scala 41:23]
      end else if (io_lsu_axi_in_arvalid) begin // @[axi_arbiter.scala 45:46]
        state <= 2'h2; // @[axi_arbiter.scala 46:23]
      end else begin
        state <= _GEN_0;
      end
    end else if (state == 2'h1) begin // @[axi_arbiter.scala 61:39]
      if (io_ifu_axi_out_rvalid & io_ifu_axi_in_rready) begin // @[axi_arbiter.scala 65:64]
        state <= 2'h0; // @[axi_arbiter.scala 66:23]
      end
    end else if (state == 2'h2) begin // @[axi_arbiter.scala 69:39]
      state <= _GEN_67;
    end else begin
      state <= _GEN_90;
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
  state = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IFU_AXI(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_pc_valid,
  output        io_inst_valid,
  output [31:0] io_inst,
  input  [63:0] io_axi_in_rdata,
  input         io_axi_in_rvalid,
  output [31:0] io_axi_out_araddr,
  output        io_axi_out_arvalid,
  output        io_axi_out_rready
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg  inst_ready; // @[IFU_AXI.scala 18:29]
  wire  _GEN_0 = io_axi_in_rvalid & inst_ready ? 1'h0 : 1'h1; // @[IFU_AXI.scala 19:41 20:20 22:20]
  assign io_inst_valid = io_axi_in_rvalid; // @[IFU_AXI.scala 35:19]
  assign io_inst = io_axi_in_rdata[31:0]; // @[IFU_AXI.scala 34:31]
  assign io_axi_out_araddr = io_pc[31:0]; // @[IFU_AXI.scala 24:31]
  assign io_axi_out_arvalid = io_pc_valid; // @[IFU_AXI.scala 25:24]
  assign io_axi_out_rready = inst_ready; // @[IFU_AXI.scala 26:23]
  always @(posedge clock) begin
    inst_ready <= reset | _GEN_0; // @[IFU_AXI.scala 18:{29,29}]
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"inst_valid : %d pc_ready: %d \n",io_inst_valid,io_pc_valid); // @[IFU_AXI.scala 36:11]
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
  inst_ready = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IDU(
  input  [31:0] io_inst,
  output [31:0] io_inst_now,
  output [4:0]  io_rs1,
  output [4:0]  io_rs2,
  output [4:0]  io_rd,
  output [63:0] io_imm,
  output        io_ctrl_sign_reg_write,
  output        io_ctrl_sign_csr_write,
  output        io_ctrl_sign_src2_is_imm,
  output        io_ctrl_sign_src1_is_pc,
  output        io_ctrl_sign_Writemem_en,
  output        io_ctrl_sign_Readmem_en,
  output [7:0]  io_ctrl_sign_Wmask
);
  wire [4:0] rd = io_inst[11:7]; // @[IDU.scala 150:15]
  wire [31:0] _inst_type_T = io_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_1 = 32'h13 == _inst_type_T; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_2 = io_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_3 = 32'h17 == _inst_type_T_2; // @[Lookup.scala 31:38]
  wire  _inst_type_T_5 = 32'h37 == _inst_type_T_2; // @[Lookup.scala 31:38]
  wire  _inst_type_T_7 = 32'h6f == _inst_type_T_2; // @[Lookup.scala 31:38]
  wire  _inst_type_T_9 = 32'h67 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_11 = 32'h3023 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_13 = 32'h3013 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_15 = 32'h2003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_16 = io_inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_17 = 32'h3b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_19 = 32'h40000033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_21 = 32'h1063 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_23 = 32'h63 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_25 = 32'h3003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_27 = 32'h1b == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_29 = 32'h33 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_30 = io_inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_31 = 32'h40005013 == _inst_type_T_30; // @[Lookup.scala 31:38]
  wire  _inst_type_T_33 = 32'h4003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_35 = 32'h1023 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_37 = 32'h23 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_39 = 32'h6033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_41 = 32'h4013 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_43 = 32'h7033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_45 = 32'h7013 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_47 = 32'h4000003b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_49 = 32'h103b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_51 = 32'h1013 == _inst_type_T_30; // @[Lookup.scala 31:38]
  wire  _inst_type_T_53 = 32'h5013 == _inst_type_T_30; // @[Lookup.scala 31:38]
  wire  _inst_type_T_55 = 32'h101b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_57 = 32'h4000501b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_59 = 32'h501b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_61 = 32'h4000503b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_63 = 32'h503b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_65 = 32'h3033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_67 = 32'h2033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_69 = 32'h5063 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_71 = 32'h4063 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_73 = 32'h6063 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_75 = 32'h2023 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_77 = 32'h1003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_79 = 32'h5003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_81 = 32'h2000033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_83 = 32'h200003b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_85 = 32'h200403b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_87 = 32'h200603b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_89 = 32'h4033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_91 = 32'h6013 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_93 = 32'h2005033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_95 = 32'h2004033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_97 = 32'h200503b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_99 = 32'h200703b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_101 = 32'h2007033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_103 = 32'h2006033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_105 = 32'h1033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_107 = 32'h5033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_109 = 32'h40005033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_111 = 32'h2013 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_113 = 32'h6003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_115 = 32'h3 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_117 = 32'h7063 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_119 = 32'h73 == io_inst; // @[Lookup.scala 31:38]
  wire  _inst_type_T_121 = 32'h1073 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_123 = 32'h2073 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_125 = 32'h3073 == _inst_type_T; // @[Lookup.scala 31:38]
  wire [6:0] _inst_type_T_126 = _inst_type_T_125 ? 7'h40 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_127 = _inst_type_T_123 ? 7'h40 : _inst_type_T_126; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_128 = _inst_type_T_121 ? 7'h40 : _inst_type_T_127; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_129 = _inst_type_T_119 ? 7'h40 : _inst_type_T_128; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_130 = _inst_type_T_117 ? 7'h45 : _inst_type_T_129; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_131 = _inst_type_T_115 ? 7'h40 : _inst_type_T_130; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_132 = _inst_type_T_113 ? 7'h40 : _inst_type_T_131; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_133 = _inst_type_T_111 ? 7'h40 : _inst_type_T_132; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_134 = _inst_type_T_109 ? 7'h41 : _inst_type_T_133; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_135 = _inst_type_T_107 ? 7'h41 : _inst_type_T_134; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_136 = _inst_type_T_105 ? 7'h41 : _inst_type_T_135; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_137 = _inst_type_T_103 ? 7'h41 : _inst_type_T_136; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_138 = _inst_type_T_101 ? 7'h41 : _inst_type_T_137; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_139 = _inst_type_T_99 ? 7'h41 : _inst_type_T_138; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_140 = _inst_type_T_97 ? 7'h41 : _inst_type_T_139; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_141 = _inst_type_T_95 ? 7'h41 : _inst_type_T_140; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_142 = _inst_type_T_93 ? 7'h41 : _inst_type_T_141; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_143 = _inst_type_T_91 ? 7'h40 : _inst_type_T_142; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_144 = _inst_type_T_89 ? 7'h41 : _inst_type_T_143; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_145 = _inst_type_T_87 ? 7'h41 : _inst_type_T_144; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_146 = _inst_type_T_85 ? 7'h41 : _inst_type_T_145; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_147 = _inst_type_T_83 ? 7'h41 : _inst_type_T_146; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_148 = _inst_type_T_81 ? 7'h41 : _inst_type_T_147; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_149 = _inst_type_T_79 ? 7'h40 : _inst_type_T_148; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_150 = _inst_type_T_77 ? 7'h40 : _inst_type_T_149; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_151 = _inst_type_T_75 ? 7'h44 : _inst_type_T_150; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_152 = _inst_type_T_73 ? 7'h45 : _inst_type_T_151; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_153 = _inst_type_T_71 ? 7'h45 : _inst_type_T_152; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_154 = _inst_type_T_69 ? 7'h45 : _inst_type_T_153; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_155 = _inst_type_T_67 ? 7'h41 : _inst_type_T_154; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_156 = _inst_type_T_65 ? 7'h41 : _inst_type_T_155; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_157 = _inst_type_T_63 ? 7'h41 : _inst_type_T_156; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_158 = _inst_type_T_61 ? 7'h41 : _inst_type_T_157; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_159 = _inst_type_T_59 ? 7'h40 : _inst_type_T_158; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_160 = _inst_type_T_57 ? 7'h40 : _inst_type_T_159; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_161 = _inst_type_T_55 ? 7'h40 : _inst_type_T_160; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_162 = _inst_type_T_53 ? 7'h40 : _inst_type_T_161; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_163 = _inst_type_T_51 ? 7'h40 : _inst_type_T_162; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_164 = _inst_type_T_49 ? 7'h41 : _inst_type_T_163; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_165 = _inst_type_T_47 ? 7'h41 : _inst_type_T_164; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_166 = _inst_type_T_45 ? 7'h40 : _inst_type_T_165; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_167 = _inst_type_T_43 ? 7'h41 : _inst_type_T_166; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_168 = _inst_type_T_41 ? 7'h40 : _inst_type_T_167; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_169 = _inst_type_T_39 ? 7'h41 : _inst_type_T_168; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_170 = _inst_type_T_37 ? 7'h44 : _inst_type_T_169; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_171 = _inst_type_T_35 ? 7'h44 : _inst_type_T_170; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_172 = _inst_type_T_33 ? 7'h40 : _inst_type_T_171; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_173 = _inst_type_T_31 ? 7'h40 : _inst_type_T_172; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_174 = _inst_type_T_29 ? 7'h41 : _inst_type_T_173; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_175 = _inst_type_T_27 ? 7'h40 : _inst_type_T_174; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_176 = _inst_type_T_25 ? 7'h40 : _inst_type_T_175; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_177 = _inst_type_T_23 ? 7'h45 : _inst_type_T_176; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_178 = _inst_type_T_21 ? 7'h45 : _inst_type_T_177; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_179 = _inst_type_T_19 ? 7'h41 : _inst_type_T_178; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_180 = _inst_type_T_17 ? 7'h41 : _inst_type_T_179; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_181 = _inst_type_T_15 ? 7'h40 : _inst_type_T_180; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_182 = _inst_type_T_13 ? 7'h40 : _inst_type_T_181; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_183 = _inst_type_T_11 ? 7'h44 : _inst_type_T_182; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_184 = _inst_type_T_9 ? 7'h40 : _inst_type_T_183; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_185 = _inst_type_T_7 ? 7'h43 : _inst_type_T_184; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_186 = _inst_type_T_5 ? 7'h42 : _inst_type_T_185; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_187 = _inst_type_T_3 ? 7'h42 : _inst_type_T_186; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_188 = _inst_type_T_1 ? 7'h40 : _inst_type_T_187; // @[Lookup.scala 34:39]
  wire [11:0] imm_imm = io_inst[31:20]; // @[IDU.scala 24:23]
  wire [51:0] _imm_T_2 = imm_imm[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_3 = {_imm_T_2,imm_imm}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_1 = {io_inst[31],io_inst[19:12],io_inst[20],io_inst[30:21]}; // @[Cat.scala 31:58]
  wire [42:0] _imm_T_6 = imm_imm_1[19] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_7 = {_imm_T_6,io_inst[31],io_inst[19:12],io_inst[20],io_inst[30:21],1'h0}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_2 = io_inst[31:12]; // @[IDU.scala 28:23]
  wire [31:0] _imm_T_10 = imm_imm_2[19] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_12 = {_imm_T_10,imm_imm_2,12'h0}; // @[Cat.scala 31:58]
  wire [11:0] imm_imm_3 = {io_inst[31:25],rd}; // @[Cat.scala 31:58]
  wire [51:0] _imm_T_15 = imm_imm_3[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_16 = {_imm_T_15,io_inst[31:25],rd}; // @[Cat.scala 31:58]
  wire [11:0] imm_imm_4 = {io_inst[31],io_inst[7],io_inst[30:25],io_inst[11:8]}; // @[Cat.scala 31:58]
  wire [50:0] _imm_T_19 = imm_imm_4[11] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_20 = {_imm_T_19,io_inst[31],io_inst[7],io_inst[30:25],io_inst[11:8],1'h0}; // @[Cat.scala 31:58]
  wire [31:0] inst_type = {{25'd0}, _inst_type_T_188}; // @[IDU.scala 133:25 152:15]
  wire [63:0] _imm_T_22 = 32'h40 == inst_type ? _imm_T_3 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_24 = 32'h43 == inst_type ? _imm_T_7 : _imm_T_22; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_26 = 32'h42 == inst_type ? _imm_T_12 : _imm_T_24; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_28 = 32'h44 == inst_type ? _imm_T_16 : _imm_T_26; // @[Mux.scala 81:58]
  wire  _inst_now_T_3 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
  wire  _inst_now_T_123 = 32'h30200073 == io_inst; // @[Lookup.scala 31:38]
  wire [6:0] _inst_now_T_130 = _inst_type_T_125 ? 7'h47 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_131 = _inst_type_T_123 ? 7'h46 : _inst_now_T_130; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_132 = _inst_type_T_121 ? 7'h3f : _inst_now_T_131; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_133 = _inst_now_T_123 ? 7'h3e : _inst_now_T_132; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_134 = _inst_type_T_119 ? 7'h3d : _inst_now_T_133; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_135 = _inst_type_T_117 ? 7'h3c : _inst_now_T_134; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_136 = _inst_type_T_115 ? 7'h3b : _inst_now_T_135; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_137 = _inst_type_T_113 ? 7'h3a : _inst_now_T_136; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_138 = _inst_type_T_111 ? 7'h36 : _inst_now_T_137; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_139 = _inst_type_T_109 ? 7'h39 : _inst_now_T_138; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_140 = _inst_type_T_107 ? 7'h38 : _inst_now_T_139; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_141 = _inst_type_T_105 ? 7'h37 : _inst_now_T_140; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_142 = _inst_type_T_103 ? 7'h34 : _inst_now_T_141; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_143 = _inst_type_T_101 ? 7'h33 : _inst_now_T_142; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_144 = _inst_type_T_99 ? 7'h32 : _inst_now_T_143; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_145 = _inst_type_T_97 ? 7'h35 : _inst_now_T_144; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_146 = _inst_type_T_95 ? 7'h31 : _inst_now_T_145; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_147 = _inst_type_T_93 ? 7'h30 : _inst_now_T_146; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_148 = _inst_type_T_91 ? 7'h2f : _inst_now_T_147; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_149 = _inst_type_T_89 ? 7'h2e : _inst_now_T_148; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_150 = _inst_type_T_87 ? 7'h14 : _inst_now_T_149; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_151 = _inst_type_T_85 ? 7'h13 : _inst_now_T_150; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_152 = _inst_type_T_83 ? 7'h12 : _inst_now_T_151; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_153 = _inst_type_T_81 ? 7'h11 : _inst_now_T_152; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_154 = _inst_type_T_79 ? 7'h25 : _inst_now_T_153; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_155 = _inst_type_T_77 ? 7'h24 : _inst_now_T_154; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_156 = _inst_type_T_75 ? 7'h27 : _inst_now_T_155; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_157 = _inst_type_T_73 ? 7'h2d : _inst_now_T_156; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_158 = _inst_type_T_71 ? 7'h2c : _inst_now_T_157; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_159 = _inst_type_T_69 ? 7'h2b : _inst_now_T_158; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_160 = _inst_type_T_67 ? 7'h1f : _inst_now_T_159; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_161 = _inst_type_T_65 ? 7'h1e : _inst_now_T_160; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_162 = _inst_type_T_63 ? 7'h1d : _inst_now_T_161; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_163 = _inst_type_T_61 ? 7'h1c : _inst_now_T_162; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_164 = _inst_type_T_59 ? 7'h1b : _inst_now_T_163; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_165 = _inst_type_T_57 ? 7'h1a : _inst_now_T_164; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_166 = _inst_type_T_55 ? 7'h19 : _inst_now_T_165; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_167 = _inst_type_T_53 ? 7'h18 : _inst_now_T_166; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_168 = _inst_type_T_51 ? 7'h17 : _inst_now_T_167; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_169 = _inst_type_T_49 ? 7'h16 : _inst_now_T_168; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_170 = _inst_type_T_47 ? 7'hd : _inst_now_T_169; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_171 = _inst_type_T_45 ? 7'h9 : _inst_now_T_170; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_172 = _inst_type_T_43 ? 7'h8 : _inst_now_T_171; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_173 = _inst_type_T_41 ? 7'ha : _inst_now_T_172; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_174 = _inst_type_T_39 ? 7'hb : _inst_now_T_173; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_175 = _inst_type_T_37 ? 7'h28 : _inst_now_T_174; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_176 = _inst_type_T_35 ? 7'h26 : _inst_now_T_175; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_177 = _inst_type_T_33 ? 7'h23 : _inst_now_T_176; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_178 = _inst_type_T_31 ? 7'h15 : _inst_now_T_177; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_179 = _inst_type_T_29 ? 7'hf : _inst_now_T_178; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_180 = _inst_type_T_27 ? 7'h10 : _inst_now_T_179; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_181 = _inst_type_T_25 ? 7'h22 : _inst_now_T_180; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_182 = _inst_type_T_23 ? 7'h29 : _inst_now_T_181; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_183 = _inst_type_T_21 ? 7'h2a : _inst_now_T_182; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_184 = _inst_type_T_19 ? 7'he : _inst_now_T_183; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_185 = _inst_type_T_17 ? 7'hc : _inst_now_T_184; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_186 = _inst_type_T_15 ? 7'h21 : _inst_now_T_185; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_187 = _inst_type_T_13 ? 7'h20 : _inst_now_T_186; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_188 = _inst_type_T_11 ? 7'h7 : _inst_now_T_187; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_189 = _inst_type_T_9 ? 7'h6 : _inst_now_T_188; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_190 = _inst_type_T_7 ? 7'h5 : _inst_now_T_189; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_191 = _inst_type_T_5 ? 7'h4 : _inst_now_T_190; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_192 = _inst_type_T_3 ? 7'h3 : _inst_now_T_191; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_193 = _inst_now_T_3 ? 7'h2 : _inst_now_T_192; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_194 = _inst_type_T_1 ? 7'h1 : _inst_now_T_193; // @[Lookup.scala 34:39]
  wire  _reg_write_T_26 = _inst_now_T_123 ? 1'h0 : 1'h1; // @[Lookup.scala 34:39]
  wire  _reg_write_T_27 = _inst_type_T_119 ? 1'h0 : _reg_write_T_26; // @[Lookup.scala 34:39]
  wire  _reg_write_T_28 = _inst_type_T_117 ? 1'h0 : _reg_write_T_27; // @[Lookup.scala 34:39]
  wire  _reg_write_T_29 = _inst_type_T_73 ? 1'h0 : _reg_write_T_28; // @[Lookup.scala 34:39]
  wire  _reg_write_T_30 = _inst_type_T_71 ? 1'h0 : _reg_write_T_29; // @[Lookup.scala 34:39]
  wire  _reg_write_T_31 = _inst_type_T_69 ? 1'h0 : _reg_write_T_30; // @[Lookup.scala 34:39]
  wire  _reg_write_T_32 = _inst_type_T_23 ? 1'h0 : _reg_write_T_31; // @[Lookup.scala 34:39]
  wire  _reg_write_T_33 = _inst_type_T_21 ? 1'h0 : _reg_write_T_32; // @[Lookup.scala 34:39]
  wire  _reg_write_T_34 = _inst_type_T_75 ? 1'h0 : _reg_write_T_33; // @[Lookup.scala 34:39]
  wire  _reg_write_T_35 = _inst_type_T_37 ? 1'h0 : _reg_write_T_34; // @[Lookup.scala 34:39]
  wire  _reg_write_T_36 = _inst_type_T_35 ? 1'h0 : _reg_write_T_35; // @[Lookup.scala 34:39]
  wire  _reg_write_T_37 = _inst_type_T_11 ? 1'h0 : _reg_write_T_36; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_8 = _inst_type_T_75 ? 4'hf : 4'h0; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_9 = _inst_type_T_37 ? 4'h1 : _Wmask_T_8; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_10 = _inst_type_T_35 ? 4'h3 : _Wmask_T_9; // @[Lookup.scala 34:39]
  assign io_inst_now = {{25'd0}, _inst_now_T_194}; // @[IDU.scala 132:24 226:14]
  assign io_rs1 = io_inst[19:15]; // @[IDU.scala 149:16]
  assign io_rs2 = io_inst[24:20]; // @[IDU.scala 148:16]
  assign io_rd = io_inst[11:7]; // @[IDU.scala 150:15]
  assign io_imm = 32'h45 == inst_type ? _imm_T_20 : _imm_T_28; // @[Mux.scala 81:58]
  assign io_ctrl_sign_reg_write = _inst_now_T_3 ? 1'h0 : _reg_write_T_37; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_csr_write = _inst_type_T_121 | (_inst_type_T_123 | _inst_type_T_125); // @[Lookup.scala 34:39]
  assign io_ctrl_sign_src2_is_imm = 32'h45 == inst_type | (32'h43 == inst_type | (32'h44 == inst_type | (32'h42 ==
    inst_type | 32'h40 == inst_type))); // @[Mux.scala 81:58]
  assign io_ctrl_sign_src1_is_pc = _inst_type_T_7 | (_inst_type_T_3 | (_inst_type_T_21 | (_inst_type_T_23 | (
    _inst_type_T_69 | (_inst_type_T_71 | (_inst_type_T_73 | _inst_type_T_117)))))); // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Writemem_en = 32'h44 == inst_type; // @[Mux.scala 81:61]
  assign io_ctrl_sign_Readmem_en = _inst_type_T_25 | (_inst_type_T_15 | (_inst_type_T_113 | (_inst_type_T_77 | (
    _inst_type_T_79 | (_inst_type_T_115 | _inst_type_T_33))))); // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Wmask = _inst_type_T_11 ? 8'hff : {{4'd0}, _Wmask_T_10}; // @[Lookup.scala 34:39]
endmodule
module EXU_AXI(
  input         clock,
  input  [63:0] io_pc,
  output [63:0] io_pc_next,
  input  [31:0] io_inst_now,
  input  [4:0]  io_rs1,
  input  [4:0]  io_rs2,
  input  [4:0]  io_rd,
  input  [63:0] io_imm,
  input         io_ctrl_sign_reg_write,
  input         io_ctrl_sign_csr_write,
  input         io_ctrl_sign_src2_is_imm,
  input         io_ctrl_sign_src1_is_pc,
  input         io_ctrl_sign_Writemem_en,
  input         io_ctrl_sign_Readmem_en,
  input  [7:0]  io_ctrl_sign_Wmask,
  output [63:0] io_res2rd,
  input         io_inst_valid,
  output        io_inst_store,
  output        io_inst_load,
  output [31:0] io_Mem_addr,
  input  [63:0] io_Mem_rdata,
  output [63:0] io_Mem_wdata,
  output [7:0]  io_Mem_wstrb
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] Regfile [0:31]; // @[EXU_AXI.scala 36:22]
  wire  Regfile_src1_value_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_src1_value_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_src1_value_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_src2_value_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_src2_value_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_src2_value_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_value_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_value_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_value_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_MPORT_4_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_MPORT_4_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_MPORT_4_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_io_pc_next_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_io_pc_next_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_io_pc_next_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_io_pc_next_MPORT_1_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_io_pc_next_MPORT_1_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_io_pc_next_MPORT_1_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_io_pc_next_MPORT_2_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_io_pc_next_MPORT_2_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_io_pc_next_MPORT_2_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_io_pc_next_MPORT_3_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_io_pc_next_MPORT_3_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_io_pc_next_MPORT_3_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_io_pc_next_MPORT_4_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_io_pc_next_MPORT_4_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_io_pc_next_MPORT_4_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_io_pc_next_MPORT_5_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_io_pc_next_MPORT_5_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_io_pc_next_MPORT_5_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_io_pc_next_MPORT_6_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_io_pc_next_MPORT_6_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_io_pc_next_MPORT_6_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_io_pc_next_MPORT_7_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_io_pc_next_MPORT_7_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_io_pc_next_MPORT_7_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_io_pc_next_MPORT_8_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_io_pc_next_MPORT_8_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_io_pc_next_MPORT_8_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_io_pc_next_MPORT_9_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_io_pc_next_MPORT_9_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_io_pc_next_MPORT_9_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_io_pc_next_MPORT_10_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_io_pc_next_MPORT_10_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_io_pc_next_MPORT_10_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_io_pc_next_MPORT_11_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_io_pc_next_MPORT_11_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_io_pc_next_MPORT_11_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_0_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_0_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_0_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_1_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_1_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_1_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_2_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_2_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_2_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_3_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_3_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_3_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_4_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_4_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_4_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_5_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_5_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_5_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_6_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_6_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_6_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_7_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_7_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_7_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_8_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_8_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_8_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_9_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_9_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_9_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_10_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_10_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_10_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_11_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_11_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_11_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_12_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_12_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_12_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_13_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_13_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_13_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_14_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_14_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_14_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_15_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_15_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_15_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_16_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_16_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_16_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_17_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_17_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_17_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_18_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_18_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_18_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_19_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_19_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_19_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_20_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_20_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_20_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_21_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_21_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_21_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_22_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_22_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_22_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_23_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_23_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_23_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_24_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_24_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_24_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_25_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_25_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_25_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_26_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_26_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_26_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_27_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_27_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_27_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_28_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_28_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_28_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_29_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_29_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_29_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_30_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_30_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_30_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_reg_trace_io_input_reg_31_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_31_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_31_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_mem_wdata_MPORT_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_mem_wdata_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_mem_wdata_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_mem_wdata_MPORT_1_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_mem_wdata_MPORT_1_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_mem_wdata_MPORT_1_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_mem_wdata_MPORT_2_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_mem_wdata_MPORT_2_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_mem_wdata_MPORT_2_data; // @[EXU_AXI.scala 36:22]
  wire  Regfile_mem_wdata_MPORT_3_en; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_mem_wdata_MPORT_3_addr; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_mem_wdata_MPORT_3_data; // @[EXU_AXI.scala 36:22]
  wire [63:0] Regfile_MPORT_data; // @[EXU_AXI.scala 36:22]
  wire [4:0] Regfile_MPORT_addr; // @[EXU_AXI.scala 36:22]
  wire  Regfile_MPORT_mask; // @[EXU_AXI.scala 36:22]
  wire  Regfile_MPORT_en; // @[EXU_AXI.scala 36:22]
  reg [63:0] CSR_Reg [0:3]; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_io_res2rd_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_io_res2rd_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_io_res2rd_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_io_res2rd_MPORT_1_en; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_io_res2rd_MPORT_1_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_io_res2rd_MPORT_1_data; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_io_res2rd_MPORT_2_en; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_io_res2rd_MPORT_2_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_io_res2rd_MPORT_2_data; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_csr_wdata_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_csr_wdata_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_csr_wdata_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_csr_wdata_MPORT_1_en; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_csr_wdata_MPORT_1_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_csr_wdata_MPORT_1_data; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_MPORT_2_en; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_MPORT_2_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_MPORT_2_data; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_MPORT_5_en; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_MPORT_5_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_MPORT_5_data; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_MPORT_7_en; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_MPORT_7_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_MPORT_7_data; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_io_pc_next_MPORT_12_en; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_io_pc_next_MPORT_12_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_io_pc_next_MPORT_12_data; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_io_pc_next_MPORT_13_en; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_io_pc_next_MPORT_13_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_io_pc_next_MPORT_13_data; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_reg_trace_io_csr_reg_0_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_reg_trace_io_csr_reg_1_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_reg_trace_io_csr_reg_2_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_MPORT_1_data; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_MPORT_1_addr; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_MPORT_1_mask; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_MPORT_1_en; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_MPORT_3_data; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_MPORT_3_addr; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_MPORT_3_mask; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_MPORT_3_en; // @[EXU_AXI.scala 37:22]
  wire [63:0] CSR_Reg_MPORT_6_data; // @[EXU_AXI.scala 37:22]
  wire [1:0] CSR_Reg_MPORT_6_addr; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_MPORT_6_mask; // @[EXU_AXI.scala 37:22]
  wire  CSR_Reg_MPORT_6_en; // @[EXU_AXI.scala 37:22]
  wire [63:0] reg_trace_input_reg_0; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_1; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_2; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_3; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_4; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_5; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_6; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_7; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_8; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_9; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_10; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_11; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_12; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_13; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_14; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_15; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_16; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_17; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_18; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_19; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_20; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_21; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_22; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_23; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_24; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_25; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_26; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_27; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_28; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_29; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_30; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_input_reg_31; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_csr_reg_0; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_csr_reg_1; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_csr_reg_2; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_csr_reg_3; // @[EXU_AXI.scala 157:27]
  wire [63:0] reg_trace_pc; // @[EXU_AXI.scala 157:27]
  wire [11:0] csr_addr = io_imm[11:0]; // @[EXU_AXI.scala 38:26]
  wire [1:0] _csr_index_T_5 = 12'h300 == csr_addr ? 2'h2 : {{1'd0}, 12'h341 == csr_addr}; // @[Mux.scala 81:58]
  wire  _csr_index_T_6 = 12'h342 == csr_addr; // @[Mux.scala 81:61]
  wire [63:0] _src1_value_T_1 = io_rs1 == 5'h0 ? 64'h0 : Regfile_src1_value_MPORT_data; // @[EXU_AXI.scala 46:12]
  wire [63:0] src1_value = io_ctrl_sign_src1_is_pc ? io_pc : _src1_value_T_1; // @[EXU_AXI.scala 48:25]
  wire [63:0] _src2_value_T_1 = io_rs2 == 5'h0 ? 64'h0 : Regfile_src2_value_MPORT_data; // @[EXU_AXI.scala 46:12]
  wire [63:0] src2_value = io_ctrl_sign_src2_is_imm ? io_imm : _src2_value_T_1; // @[EXU_AXI.scala 49:25]
  wire [63:0] add_res = src1_value + src2_value; // @[EXU_AXI.scala 50:30]
  wire [63:0] sub_res = src1_value - src2_value; // @[EXU_AXI.scala 51:30]
  wire [63:0] _sra_res_T = io_ctrl_sign_src1_is_pc ? io_pc : _src1_value_T_1; // @[EXU_AXI.scala 52:37]
  wire [63:0] sra_res = $signed(_sra_res_T) >>> src2_value[5:0]; // @[EXU_AXI.scala 52:60]
  wire [63:0] srl_res = src1_value >> src2_value[5:0]; // @[EXU_AXI.scala 53:30]
  wire [126:0] _GEN_0 = {{63'd0}, src1_value}; // @[EXU_AXI.scala 54:30]
  wire [126:0] sll_res = _GEN_0 << src2_value[5:0]; // @[EXU_AXI.scala 54:30]
  wire [31:0] _sraw_res_T_1 = src1_value[31:0]; // @[EXU_AXI.scala 55:43]
  wire [31:0] sraw_res = $signed(_sraw_res_T_1) >>> src2_value[4:0]; // @[EXU_AXI.scala 55:46]
  wire [31:0] srlw_res = src1_value[31:0] >> src2_value[4:0]; // @[EXU_AXI.scala 56:37]
  wire [62:0] _GEN_1 = {{31'd0}, src1_value[31:0]}; // @[EXU_AXI.scala 57:37]
  wire [62:0] sllw_res = _GEN_1 << src2_value[4:0]; // @[EXU_AXI.scala 57:37]
  wire [63:0] or_res = src1_value | src2_value; // @[EXU_AXI.scala 58:29]
  wire [63:0] xor_res = src1_value ^ src2_value; // @[EXU_AXI.scala 59:30]
  wire [63:0] and_res = src1_value & src2_value; // @[EXU_AXI.scala 60:30]
  wire [127:0] _mlu_res_T = src1_value * src2_value; // @[EXU_AXI.scala 61:31]
  wire [63:0] mlu_res = _mlu_res_T[63:0]; // @[EXU_AXI.scala 61:44]
  wire [63:0] _mluw_res_T_2 = src1_value[31:0] * src2_value[31:0]; // @[EXU_AXI.scala 62:38]
  wire [31:0] mluw_res = _mluw_res_T_2[31:0]; // @[EXU_AXI.scala 62:57]
  wire [31:0] _divw_res_T_3 = src2_value[31:0]; // @[EXU_AXI.scala 63:64]
  wire [32:0] _divw_res_T_4 = $signed(_sraw_res_T_1) / $signed(_divw_res_T_3); // @[EXU_AXI.scala 63:45]
  wire [31:0] divw_res = _divw_res_T_4[31:0]; // @[EXU_AXI.scala 63:71]
  wire [31:0] divuw_res = src1_value[31:0] / src2_value[31:0]; // @[EXU_AXI.scala 64:39]
  wire [31:0] remw_res = $signed(_sraw_res_T_1) % $signed(_divw_res_T_3); // @[EXU_AXI.scala 65:71]
  wire [31:0] remuw_res = src1_value[31:0] % src2_value[31:0]; // @[EXU_AXI.scala 66:39]
  wire [63:0] _div_res_T_1 = io_ctrl_sign_src2_is_imm ? io_imm : _src2_value_T_1; // @[EXU_AXI.scala 67:51]
  wire [64:0] div_res = $signed(_sra_res_T) / $signed(_div_res_T_1); // @[EXU_AXI.scala 67:59]
  wire [63:0] divu_res = src1_value / src2_value; // @[EXU_AXI.scala 68:31]
  wire [63:0] rem_res = $signed(_sra_res_T) % $signed(_div_res_T_1); // @[EXU_AXI.scala 69:59]
  wire [63:0] remu_res = src1_value % src2_value; // @[EXU_AXI.scala 70:31]
  wire [63:0] _io_res2rd_T_1 = io_pc + 64'h4; // @[EXU_AXI.scala 75:24]
  wire  _io_res2rd_T_4 = src1_value < src2_value; // @[EXU_AXI.scala 77:34]
  wire  _io_res2rd_T_10 = $signed(_sra_res_T) < $signed(_div_res_T_1); // @[EXU_AXI.scala 79:42]
  wire [31:0] _io_res2rd_T_18 = io_Mem_rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_20 = {_io_res2rd_T_18,io_Mem_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_23 = {56'h0,io_Mem_rdata[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_26 = {32'h0,io_Mem_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [47:0] _io_res2rd_T_29 = io_Mem_rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_31 = {_io_res2rd_T_29,io_Mem_rdata[15:0]}; // @[Cat.scala 31:58]
  wire [55:0] _io_res2rd_T_34 = io_Mem_rdata[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_36 = {_io_res2rd_T_34,io_Mem_rdata[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_39 = {48'h0,io_Mem_rdata[15:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_42 = add_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_44 = {_io_res2rd_T_42,add_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_52 = sub_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_54 = {_io_res2rd_T_52,sub_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_57 = sllw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_59 = {_io_res2rd_T_57,sllw_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_67 = sraw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _io_res2rd_T_68 = $signed(_sraw_res_T_1) >>> src2_value[4:0]; // @[EXU_AXI.scala 104:56]
  wire [63:0] _io_res2rd_T_69 = {_io_res2rd_T_67,_io_res2rd_T_68}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_72 = srlw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_74 = {_io_res2rd_T_72,srlw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_87 = mluw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_88 = {_io_res2rd_T_87,mluw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_91 = divw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_92 = {_io_res2rd_T_91,divw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_95 = divuw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_96 = {_io_res2rd_T_95,divuw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_99 = remw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_100 = {_io_res2rd_T_99,remw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_103 = remuw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_104 = {_io_res2rd_T_103,remuw_res}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_106 = 32'h1 == io_inst_now ? add_res : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_108 = 32'h3 == io_inst_now ? add_res : _io_res2rd_T_106; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_110 = 32'h4 == io_inst_now ? io_imm : _io_res2rd_T_108; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_112 = 32'h5 == io_inst_now ? _io_res2rd_T_1 : _io_res2rd_T_110; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_114 = 32'h6 == io_inst_now ? _io_res2rd_T_1 : _io_res2rd_T_112; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_116 = 32'h20 == io_inst_now ? {{63'd0}, _io_res2rd_T_4} : _io_res2rd_T_114; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_118 = 32'h1e == io_inst_now ? {{63'd0}, _io_res2rd_T_4} : _io_res2rd_T_116; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_120 = 32'h36 == io_inst_now ? {{63'd0}, _io_res2rd_T_10} : _io_res2rd_T_118; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_122 = 32'h1f == io_inst_now ? {{63'd0}, _io_res2rd_T_10} : _io_res2rd_T_120; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_124 = 32'h21 == io_inst_now ? _io_res2rd_T_20 : _io_res2rd_T_122; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_126 = 32'h22 == io_inst_now ? io_Mem_rdata : _io_res2rd_T_124; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_128 = 32'h23 == io_inst_now ? _io_res2rd_T_23 : _io_res2rd_T_126; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_130 = 32'h3a == io_inst_now ? _io_res2rd_T_26 : _io_res2rd_T_128; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_132 = 32'h24 == io_inst_now ? _io_res2rd_T_31 : _io_res2rd_T_130; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_134 = 32'h3b == io_inst_now ? _io_res2rd_T_36 : _io_res2rd_T_132; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_136 = 32'h25 == io_inst_now ? _io_res2rd_T_39 : _io_res2rd_T_134; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_138 = 32'hc == io_inst_now ? _io_res2rd_T_44 : _io_res2rd_T_136; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_140 = 32'he == io_inst_now ? sub_res : _io_res2rd_T_138; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_142 = 32'h10 == io_inst_now ? _io_res2rd_T_44 : _io_res2rd_T_140; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_144 = 32'hf == io_inst_now ? add_res : _io_res2rd_T_142; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_146 = 32'h15 == io_inst_now ? sra_res : _io_res2rd_T_144; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_148 = 32'hb == io_inst_now ? or_res : _io_res2rd_T_146; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_150 = 32'h2f == io_inst_now ? or_res : _io_res2rd_T_148; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_152 = 32'h2e == io_inst_now ? xor_res : _io_res2rd_T_150; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_154 = 32'ha == io_inst_now ? xor_res : _io_res2rd_T_152; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_156 = 32'h8 == io_inst_now ? and_res : _io_res2rd_T_154; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_158 = 32'h9 == io_inst_now ? and_res : _io_res2rd_T_156; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_160 = 32'hd == io_inst_now ? _io_res2rd_T_54 : _io_res2rd_T_158; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_162 = 32'h16 == io_inst_now ? _io_res2rd_T_59 : _io_res2rd_T_160; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_164 = 32'h17 == io_inst_now ? sll_res : {{63'd0}, _io_res2rd_T_162}; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_166 = 32'h18 == io_inst_now ? {{63'd0}, srl_res} : _io_res2rd_T_164; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_168 = 32'h19 == io_inst_now ? {{63'd0}, _io_res2rd_T_59} : _io_res2rd_T_166; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_170 = 32'h1a == io_inst_now ? {{63'd0}, _io_res2rd_T_69} : _io_res2rd_T_168; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_172 = 32'h1b == io_inst_now ? {{63'd0}, _io_res2rd_T_74} : _io_res2rd_T_170; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_174 = 32'h1c == io_inst_now ? {{63'd0}, _io_res2rd_T_69} : _io_res2rd_T_172; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_176 = 32'h1d == io_inst_now ? {{63'd0}, _io_res2rd_T_74} : _io_res2rd_T_174; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_178 = 32'h11 == io_inst_now ? {{63'd0}, mlu_res} : _io_res2rd_T_176; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_180 = 32'h12 == io_inst_now ? {{63'd0}, _io_res2rd_T_88} : _io_res2rd_T_178; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_182 = 32'h13 == io_inst_now ? {{63'd0}, _io_res2rd_T_92} : _io_res2rd_T_180; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_184 = 32'h30 == io_inst_now ? {{63'd0}, divu_res} : _io_res2rd_T_182; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_186 = 32'h31 == io_inst_now ? {{62'd0}, div_res} : _io_res2rd_T_184; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_188 = 32'h35 == io_inst_now ? {{63'd0}, _io_res2rd_T_96} : _io_res2rd_T_186; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_190 = 32'h14 == io_inst_now ? {{63'd0}, _io_res2rd_T_100} : _io_res2rd_T_188; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_192 = 32'h32 == io_inst_now ? {{63'd0}, _io_res2rd_T_104} : _io_res2rd_T_190; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_194 = 32'h33 == io_inst_now ? {{63'd0}, remu_res} : _io_res2rd_T_192; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_196 = 32'h34 == io_inst_now ? {{63'd0}, rem_res} : _io_res2rd_T_194; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_198 = 32'h37 == io_inst_now ? sll_res : _io_res2rd_T_196; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_200 = 32'h39 == io_inst_now ? {{63'd0}, sra_res} : _io_res2rd_T_198; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_202 = 32'h38 == io_inst_now ? {{63'd0}, srl_res} : _io_res2rd_T_200; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_204 = 32'h3f == io_inst_now ? {{63'd0}, CSR_Reg_io_res2rd_MPORT_data} : _io_res2rd_T_202; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_206 = 32'h46 == io_inst_now ? {{63'd0}, CSR_Reg_io_res2rd_MPORT_1_data} : _io_res2rd_T_204; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_208 = 32'h47 == io_inst_now ? {{63'd0}, CSR_Reg_io_res2rd_MPORT_2_data} : _io_res2rd_T_206; // @[Mux.scala 81:58]
  wire [63:0] reg_value = io_rd == 5'h0 ? 64'h0 : Regfile_reg_value_MPORT_data; // @[EXU_AXI.scala 46:12]
  wire  _T_2 = io_ctrl_sign_reg_write & io_rd != 5'h0 & io_inst_valid; // @[EXU_AXI.scala 128:63]
  wire [63:0] _csr_wdata_T = src1_value | CSR_Reg_csr_wdata_MPORT_data; // @[EXU_AXI.scala 133:32]
  wire [63:0] _csr_wdata_T_1 = ~CSR_Reg_csr_wdata_MPORT_1_data; // @[EXU_AXI.scala 134:35]
  wire [63:0] _csr_wdata_T_2 = src1_value & _csr_wdata_T_1; // @[EXU_AXI.scala 134:32]
  wire [63:0] _csr_wdata_T_4 = 32'h3f == io_inst_now ? src1_value : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _csr_wdata_T_6 = 32'h46 == io_inst_now ? _csr_wdata_T : _csr_wdata_T_4; // @[Mux.scala 81:58]
  wire [63:0] csr_wdata = 32'h47 == io_inst_now ? _csr_wdata_T_2 : _csr_wdata_T_6; // @[Mux.scala 81:58]
  wire  _T_5 = io_inst_now == 32'h3d & io_inst_valid; // @[EXU_AXI.scala 137:48]
  wire  _T_10 = io_ctrl_sign_csr_write & io_inst_valid; // @[EXU_AXI.scala 140:53]
  wire [63:0] _io_pc_next_T = add_res & 64'hfffffffffffffffe; // @[EXU_AXI.scala 147:28]
  wire [63:0] _io_pc_next_T_3 = io_rs1 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_data; // @[EXU_AXI.scala 148:39]
  wire [63:0] _io_pc_next_T_6 = io_rs2 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_1_data; // @[EXU_AXI.scala 148:67]
  wire [63:0] _io_pc_next_T_8 = $signed(_io_pc_next_T_3) != $signed(_io_pc_next_T_6) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 148:21]
  wire [63:0] _io_pc_next_T_11 = io_rs1 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_2_data; // @[EXU_AXI.scala 149:39]
  wire [63:0] _io_pc_next_T_14 = io_rs2 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_3_data; // @[EXU_AXI.scala 149:67]
  wire [63:0] _io_pc_next_T_16 = $signed(_io_pc_next_T_11) == $signed(_io_pc_next_T_14) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 149:21]
  wire [63:0] _io_pc_next_T_19 = io_rs1 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_4_data; // @[EXU_AXI.scala 150:39]
  wire [63:0] _io_pc_next_T_22 = io_rs2 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_5_data; // @[EXU_AXI.scala 150:66]
  wire [63:0] _io_pc_next_T_24 = $signed(_io_pc_next_T_19) >= $signed(_io_pc_next_T_22) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 150:21]
  wire [63:0] _io_pc_next_T_27 = io_rs1 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_6_data; // @[EXU_AXI.scala 151:39]
  wire [63:0] _io_pc_next_T_30 = io_rs2 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_7_data; // @[EXU_AXI.scala 151:65]
  wire [63:0] _io_pc_next_T_32 = $signed(_io_pc_next_T_27) < $signed(_io_pc_next_T_30) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 151:21]
  wire [63:0] _io_pc_next_T_34 = io_rs1 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_8_data; // @[EXU_AXI.scala 46:12]
  wire [63:0] _io_pc_next_T_36 = io_rs2 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_9_data; // @[EXU_AXI.scala 46:12]
  wire [63:0] _io_pc_next_T_38 = _io_pc_next_T_34 < _io_pc_next_T_36 ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 152:22]
  wire [63:0] _io_pc_next_T_40 = io_rs1 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_10_data; // @[EXU_AXI.scala 46:12]
  wire [63:0] _io_pc_next_T_42 = io_rs2 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_11_data; // @[EXU_AXI.scala 46:12]
  wire [63:0] _io_pc_next_T_44 = _io_pc_next_T_40 >= _io_pc_next_T_42 ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 153:22]
  wire [63:0] _io_pc_next_T_46 = CSR_Reg_io_pc_next_MPORT_13_data + 64'h4; // @[EXU_AXI.scala 155:33]
  wire [63:0] _io_pc_next_T_48 = 32'h5 == io_inst_now ? add_res : _io_res2rd_T_1; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_50 = 32'h6 == io_inst_now ? _io_pc_next_T : _io_pc_next_T_48; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_52 = 32'h2a == io_inst_now ? _io_pc_next_T_8 : _io_pc_next_T_50; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_54 = 32'h29 == io_inst_now ? _io_pc_next_T_16 : _io_pc_next_T_52; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_56 = 32'h2b == io_inst_now ? _io_pc_next_T_24 : _io_pc_next_T_54; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_58 = 32'h2c == io_inst_now ? _io_pc_next_T_32 : _io_pc_next_T_56; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_60 = 32'h2d == io_inst_now ? _io_pc_next_T_38 : _io_pc_next_T_58; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_62 = 32'h3c == io_inst_now ? _io_pc_next_T_44 : _io_pc_next_T_60; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_64 = 32'h3d == io_inst_now ? CSR_Reg_io_pc_next_MPORT_12_data : _io_pc_next_T_62; // @[Mux.scala 81:58]
  wire [63:0] _mem_wdata_T_1 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdata_MPORT_data; // @[EXU_AXI.scala 46:12]
  wire [63:0] _mem_wdata_T_3 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdata_MPORT_1_data; // @[EXU_AXI.scala 46:12]
  wire [63:0] _mem_wdata_T_6 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdata_MPORT_2_data; // @[EXU_AXI.scala 46:12]
  wire [63:0] _mem_wdata_T_9 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdata_MPORT_3_data; // @[EXU_AXI.scala 46:12]
  wire [63:0] _mem_wdata_T_12 = 32'h7 == io_inst_now ? _mem_wdata_T_1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _mem_wdata_T_14 = 32'h26 == io_inst_now ? {{48'd0}, _mem_wdata_T_3[15:0]} : _mem_wdata_T_12; // @[Mux.scala 81:58]
  wire [63:0] _mem_wdata_T_16 = 32'h28 == io_inst_now ? {{56'd0}, _mem_wdata_T_6[7:0]} : _mem_wdata_T_14; // @[Mux.scala 81:58]
  traceregs reg_trace ( // @[EXU_AXI.scala 157:27]
    .input_reg_0(reg_trace_input_reg_0),
    .input_reg_1(reg_trace_input_reg_1),
    .input_reg_2(reg_trace_input_reg_2),
    .input_reg_3(reg_trace_input_reg_3),
    .input_reg_4(reg_trace_input_reg_4),
    .input_reg_5(reg_trace_input_reg_5),
    .input_reg_6(reg_trace_input_reg_6),
    .input_reg_7(reg_trace_input_reg_7),
    .input_reg_8(reg_trace_input_reg_8),
    .input_reg_9(reg_trace_input_reg_9),
    .input_reg_10(reg_trace_input_reg_10),
    .input_reg_11(reg_trace_input_reg_11),
    .input_reg_12(reg_trace_input_reg_12),
    .input_reg_13(reg_trace_input_reg_13),
    .input_reg_14(reg_trace_input_reg_14),
    .input_reg_15(reg_trace_input_reg_15),
    .input_reg_16(reg_trace_input_reg_16),
    .input_reg_17(reg_trace_input_reg_17),
    .input_reg_18(reg_trace_input_reg_18),
    .input_reg_19(reg_trace_input_reg_19),
    .input_reg_20(reg_trace_input_reg_20),
    .input_reg_21(reg_trace_input_reg_21),
    .input_reg_22(reg_trace_input_reg_22),
    .input_reg_23(reg_trace_input_reg_23),
    .input_reg_24(reg_trace_input_reg_24),
    .input_reg_25(reg_trace_input_reg_25),
    .input_reg_26(reg_trace_input_reg_26),
    .input_reg_27(reg_trace_input_reg_27),
    .input_reg_28(reg_trace_input_reg_28),
    .input_reg_29(reg_trace_input_reg_29),
    .input_reg_30(reg_trace_input_reg_30),
    .input_reg_31(reg_trace_input_reg_31),
    .csr_reg_0(reg_trace_csr_reg_0),
    .csr_reg_1(reg_trace_csr_reg_1),
    .csr_reg_2(reg_trace_csr_reg_2),
    .csr_reg_3(reg_trace_csr_reg_3),
    .pc(reg_trace_pc)
  );
  assign Regfile_src1_value_MPORT_en = 1'h1;
  assign Regfile_src1_value_MPORT_addr = io_rs1;
  assign Regfile_src1_value_MPORT_data = Regfile[Regfile_src1_value_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_src2_value_MPORT_en = 1'h1;
  assign Regfile_src2_value_MPORT_addr = io_rs2;
  assign Regfile_src2_value_MPORT_data = Regfile[Regfile_src2_value_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_value_MPORT_en = 1'h1;
  assign Regfile_reg_value_MPORT_addr = io_rd;
  assign Regfile_reg_value_MPORT_data = Regfile[Regfile_reg_value_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_MPORT_4_en = 1'h1;
  assign Regfile_MPORT_4_addr = 5'h11;
  assign Regfile_MPORT_4_data = Regfile[Regfile_MPORT_4_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_io_pc_next_MPORT_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_addr = io_rs1;
  assign Regfile_io_pc_next_MPORT_data = Regfile[Regfile_io_pc_next_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_io_pc_next_MPORT_1_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_1_addr = io_rs2;
  assign Regfile_io_pc_next_MPORT_1_data = Regfile[Regfile_io_pc_next_MPORT_1_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_io_pc_next_MPORT_2_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_2_addr = io_rs1;
  assign Regfile_io_pc_next_MPORT_2_data = Regfile[Regfile_io_pc_next_MPORT_2_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_io_pc_next_MPORT_3_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_3_addr = io_rs2;
  assign Regfile_io_pc_next_MPORT_3_data = Regfile[Regfile_io_pc_next_MPORT_3_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_io_pc_next_MPORT_4_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_4_addr = io_rs1;
  assign Regfile_io_pc_next_MPORT_4_data = Regfile[Regfile_io_pc_next_MPORT_4_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_io_pc_next_MPORT_5_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_5_addr = io_rs2;
  assign Regfile_io_pc_next_MPORT_5_data = Regfile[Regfile_io_pc_next_MPORT_5_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_io_pc_next_MPORT_6_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_6_addr = io_rs1;
  assign Regfile_io_pc_next_MPORT_6_data = Regfile[Regfile_io_pc_next_MPORT_6_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_io_pc_next_MPORT_7_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_7_addr = io_rs2;
  assign Regfile_io_pc_next_MPORT_7_data = Regfile[Regfile_io_pc_next_MPORT_7_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_io_pc_next_MPORT_8_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_8_addr = io_rs1;
  assign Regfile_io_pc_next_MPORT_8_data = Regfile[Regfile_io_pc_next_MPORT_8_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_io_pc_next_MPORT_9_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_9_addr = io_rs2;
  assign Regfile_io_pc_next_MPORT_9_data = Regfile[Regfile_io_pc_next_MPORT_9_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_io_pc_next_MPORT_10_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_10_addr = io_rs1;
  assign Regfile_io_pc_next_MPORT_10_data = Regfile[Regfile_io_pc_next_MPORT_10_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_io_pc_next_MPORT_11_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_11_addr = io_rs2;
  assign Regfile_io_pc_next_MPORT_11_data = Regfile[Regfile_io_pc_next_MPORT_11_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_0_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_0_MPORT_addr = 5'h0;
  assign Regfile_reg_trace_io_input_reg_0_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_0_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_1_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_1_MPORT_addr = 5'h1;
  assign Regfile_reg_trace_io_input_reg_1_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_1_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_2_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_2_MPORT_addr = 5'h2;
  assign Regfile_reg_trace_io_input_reg_2_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_2_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_3_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_3_MPORT_addr = 5'h3;
  assign Regfile_reg_trace_io_input_reg_3_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_3_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_4_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_4_MPORT_addr = 5'h4;
  assign Regfile_reg_trace_io_input_reg_4_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_4_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_5_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_5_MPORT_addr = 5'h5;
  assign Regfile_reg_trace_io_input_reg_5_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_5_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_6_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_6_MPORT_addr = 5'h6;
  assign Regfile_reg_trace_io_input_reg_6_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_6_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_7_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_7_MPORT_addr = 5'h7;
  assign Regfile_reg_trace_io_input_reg_7_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_7_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_8_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_8_MPORT_addr = 5'h8;
  assign Regfile_reg_trace_io_input_reg_8_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_8_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_9_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_9_MPORT_addr = 5'h9;
  assign Regfile_reg_trace_io_input_reg_9_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_9_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_10_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_10_MPORT_addr = 5'ha;
  assign Regfile_reg_trace_io_input_reg_10_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_10_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_11_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_11_MPORT_addr = 5'hb;
  assign Regfile_reg_trace_io_input_reg_11_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_11_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_12_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_12_MPORT_addr = 5'hc;
  assign Regfile_reg_trace_io_input_reg_12_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_12_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_13_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_13_MPORT_addr = 5'hd;
  assign Regfile_reg_trace_io_input_reg_13_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_13_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_14_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_14_MPORT_addr = 5'he;
  assign Regfile_reg_trace_io_input_reg_14_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_14_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_15_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_15_MPORT_addr = 5'hf;
  assign Regfile_reg_trace_io_input_reg_15_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_15_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_16_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_16_MPORT_addr = 5'h10;
  assign Regfile_reg_trace_io_input_reg_16_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_16_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_17_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_17_MPORT_addr = 5'h11;
  assign Regfile_reg_trace_io_input_reg_17_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_17_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_18_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_18_MPORT_addr = 5'h12;
  assign Regfile_reg_trace_io_input_reg_18_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_18_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_19_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_19_MPORT_addr = 5'h13;
  assign Regfile_reg_trace_io_input_reg_19_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_19_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_20_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_20_MPORT_addr = 5'h14;
  assign Regfile_reg_trace_io_input_reg_20_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_20_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_21_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_21_MPORT_addr = 5'h15;
  assign Regfile_reg_trace_io_input_reg_21_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_21_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_22_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_22_MPORT_addr = 5'h16;
  assign Regfile_reg_trace_io_input_reg_22_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_22_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_23_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_23_MPORT_addr = 5'h17;
  assign Regfile_reg_trace_io_input_reg_23_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_23_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_24_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_24_MPORT_addr = 5'h18;
  assign Regfile_reg_trace_io_input_reg_24_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_24_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_25_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_25_MPORT_addr = 5'h19;
  assign Regfile_reg_trace_io_input_reg_25_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_25_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_26_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_26_MPORT_addr = 5'h1a;
  assign Regfile_reg_trace_io_input_reg_26_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_26_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_27_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_27_MPORT_addr = 5'h1b;
  assign Regfile_reg_trace_io_input_reg_27_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_27_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_28_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_28_MPORT_addr = 5'h1c;
  assign Regfile_reg_trace_io_input_reg_28_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_28_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_29_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_29_MPORT_addr = 5'h1d;
  assign Regfile_reg_trace_io_input_reg_29_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_29_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_30_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_30_MPORT_addr = 5'h1e;
  assign Regfile_reg_trace_io_input_reg_30_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_30_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_reg_trace_io_input_reg_31_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_31_MPORT_addr = 5'h1f;
  assign Regfile_reg_trace_io_input_reg_31_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_31_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_mem_wdata_MPORT_en = 1'h1;
  assign Regfile_mem_wdata_MPORT_addr = io_rs2;
  assign Regfile_mem_wdata_MPORT_data = Regfile[Regfile_mem_wdata_MPORT_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_mem_wdata_MPORT_1_en = 1'h1;
  assign Regfile_mem_wdata_MPORT_1_addr = io_rs2;
  assign Regfile_mem_wdata_MPORT_1_data = Regfile[Regfile_mem_wdata_MPORT_1_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_mem_wdata_MPORT_2_en = 1'h1;
  assign Regfile_mem_wdata_MPORT_2_addr = io_rs2;
  assign Regfile_mem_wdata_MPORT_2_data = Regfile[Regfile_mem_wdata_MPORT_2_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_mem_wdata_MPORT_3_en = 1'h1;
  assign Regfile_mem_wdata_MPORT_3_addr = io_rs2;
  assign Regfile_mem_wdata_MPORT_3_data = Regfile[Regfile_mem_wdata_MPORT_3_addr]; // @[EXU_AXI.scala 36:22]
  assign Regfile_MPORT_data = _T_2 ? io_res2rd : reg_value;
  assign Regfile_MPORT_addr = io_rd;
  assign Regfile_MPORT_mask = 1'h1;
  assign Regfile_MPORT_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_io_res2rd_MPORT_data = CSR_Reg[CSR_Reg_io_res2rd_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign CSR_Reg_io_res2rd_MPORT_1_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_1_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_io_res2rd_MPORT_1_data = CSR_Reg[CSR_Reg_io_res2rd_MPORT_1_addr]; // @[EXU_AXI.scala 37:22]
  assign CSR_Reg_io_res2rd_MPORT_2_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_2_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_io_res2rd_MPORT_2_data = CSR_Reg[CSR_Reg_io_res2rd_MPORT_2_addr]; // @[EXU_AXI.scala 37:22]
  assign CSR_Reg_csr_wdata_MPORT_en = 1'h1;
  assign CSR_Reg_csr_wdata_MPORT_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_csr_wdata_MPORT_data = CSR_Reg[CSR_Reg_csr_wdata_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign CSR_Reg_csr_wdata_MPORT_1_en = 1'h1;
  assign CSR_Reg_csr_wdata_MPORT_1_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_csr_wdata_MPORT_1_data = CSR_Reg[CSR_Reg_csr_wdata_MPORT_1_addr]; // @[EXU_AXI.scala 37:22]
  assign CSR_Reg_MPORT_2_en = 1'h1;
  assign CSR_Reg_MPORT_2_addr = 2'h1;
  assign CSR_Reg_MPORT_2_data = CSR_Reg[CSR_Reg_MPORT_2_addr]; // @[EXU_AXI.scala 37:22]
  assign CSR_Reg_MPORT_5_en = 1'h1;
  assign CSR_Reg_MPORT_5_addr = 2'h3;
  assign CSR_Reg_MPORT_5_data = CSR_Reg[CSR_Reg_MPORT_5_addr]; // @[EXU_AXI.scala 37:22]
  assign CSR_Reg_MPORT_7_en = 1'h1;
  assign CSR_Reg_MPORT_7_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_MPORT_7_data = CSR_Reg[CSR_Reg_MPORT_7_addr]; // @[EXU_AXI.scala 37:22]
  assign CSR_Reg_io_pc_next_MPORT_12_en = 1'h1;
  assign CSR_Reg_io_pc_next_MPORT_12_addr = 2'h0;
  assign CSR_Reg_io_pc_next_MPORT_12_data = CSR_Reg[CSR_Reg_io_pc_next_MPORT_12_addr]; // @[EXU_AXI.scala 37:22]
  assign CSR_Reg_io_pc_next_MPORT_13_en = 1'h1;
  assign CSR_Reg_io_pc_next_MPORT_13_addr = 2'h1;
  assign CSR_Reg_io_pc_next_MPORT_13_data = CSR_Reg[CSR_Reg_io_pc_next_MPORT_13_addr]; // @[EXU_AXI.scala 37:22]
  assign CSR_Reg_reg_trace_io_csr_reg_0_MPORT_en = 1'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr = 2'h0;
  assign CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data = CSR_Reg[CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign CSR_Reg_reg_trace_io_csr_reg_1_MPORT_en = 1'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr = 2'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data = CSR_Reg[CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign CSR_Reg_reg_trace_io_csr_reg_2_MPORT_en = 1'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr = 2'h2;
  assign CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data = CSR_Reg[CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign CSR_Reg_MPORT_1_data = _T_5 ? io_pc : CSR_Reg_MPORT_2_data;
  assign CSR_Reg_MPORT_1_addr = 2'h1;
  assign CSR_Reg_MPORT_1_mask = 1'h1;
  assign CSR_Reg_MPORT_1_en = 1'h1;
  assign CSR_Reg_MPORT_3_data = _T_5 ? Regfile_MPORT_4_data : CSR_Reg_MPORT_5_data;
  assign CSR_Reg_MPORT_3_addr = 2'h3;
  assign CSR_Reg_MPORT_3_mask = 1'h1;
  assign CSR_Reg_MPORT_3_en = 1'h1;
  assign CSR_Reg_MPORT_6_data = _T_10 ? csr_wdata : CSR_Reg_MPORT_7_data;
  assign CSR_Reg_MPORT_6_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_MPORT_6_mask = 1'h1;
  assign CSR_Reg_MPORT_6_en = 1'h1;
  assign io_pc_next = 32'h3e == io_inst_now ? _io_pc_next_T_46 : _io_pc_next_T_64; // @[Mux.scala 81:58]
  assign io_res2rd = _io_res2rd_T_208[63:0]; // @[EXU_AXI.scala 71:15]
  assign io_inst_store = io_ctrl_sign_Writemem_en; // @[EXU_AXI.scala 182:19]
  assign io_inst_load = io_ctrl_sign_Readmem_en; // @[EXU_AXI.scala 183:18]
  assign io_Mem_addr = add_res[31:0]; // @[EXU_AXI.scala 184:17]
  assign io_Mem_wdata = 32'h27 == io_inst_now ? {{32'd0}, _mem_wdata_T_9[31:0]} : _mem_wdata_T_16; // @[Mux.scala 81:58]
  assign io_Mem_wstrb = io_ctrl_sign_Wmask; // @[EXU_AXI.scala 186:18]
  assign reg_trace_input_reg_0 = Regfile_reg_trace_io_input_reg_0_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_1 = Regfile_reg_trace_io_input_reg_1_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_2 = Regfile_reg_trace_io_input_reg_2_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_3 = Regfile_reg_trace_io_input_reg_3_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_4 = Regfile_reg_trace_io_input_reg_4_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_5 = Regfile_reg_trace_io_input_reg_5_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_6 = Regfile_reg_trace_io_input_reg_6_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_7 = Regfile_reg_trace_io_input_reg_7_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_8 = Regfile_reg_trace_io_input_reg_8_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_9 = Regfile_reg_trace_io_input_reg_9_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_10 = Regfile_reg_trace_io_input_reg_10_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_11 = Regfile_reg_trace_io_input_reg_11_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_12 = Regfile_reg_trace_io_input_reg_12_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_13 = Regfile_reg_trace_io_input_reg_13_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_14 = Regfile_reg_trace_io_input_reg_14_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_15 = Regfile_reg_trace_io_input_reg_15_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_16 = Regfile_reg_trace_io_input_reg_16_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_17 = Regfile_reg_trace_io_input_reg_17_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_18 = Regfile_reg_trace_io_input_reg_18_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_19 = Regfile_reg_trace_io_input_reg_19_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_20 = Regfile_reg_trace_io_input_reg_20_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_21 = Regfile_reg_trace_io_input_reg_21_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_22 = Regfile_reg_trace_io_input_reg_22_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_23 = Regfile_reg_trace_io_input_reg_23_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_24 = Regfile_reg_trace_io_input_reg_24_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_25 = Regfile_reg_trace_io_input_reg_25_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_26 = Regfile_reg_trace_io_input_reg_26_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_27 = Regfile_reg_trace_io_input_reg_27_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_28 = Regfile_reg_trace_io_input_reg_28_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_29 = Regfile_reg_trace_io_input_reg_29_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_30 = Regfile_reg_trace_io_input_reg_30_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_input_reg_31 = Regfile_reg_trace_io_input_reg_31_MPORT_data; // @[EXU_AXI.scala 159:57]
  assign reg_trace_csr_reg_0 = CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data; // @[EXU_AXI.scala 162:54]
  assign reg_trace_csr_reg_1 = CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data; // @[EXU_AXI.scala 162:54]
  assign reg_trace_csr_reg_2 = CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data; // @[EXU_AXI.scala 162:54]
  assign reg_trace_csr_reg_3 = 64'h0; // @[EXU_AXI.scala 161:{36,36}]
  assign reg_trace_pc = io_pc; // @[EXU_AXI.scala 160:21]
  always @(posedge clock) begin
    if (Regfile_MPORT_en & Regfile_MPORT_mask) begin
      Regfile[Regfile_MPORT_addr] <= Regfile_MPORT_data; // @[EXU_AXI.scala 36:22]
    end
    if (CSR_Reg_MPORT_1_en & CSR_Reg_MPORT_1_mask) begin
      CSR_Reg[CSR_Reg_MPORT_1_addr] <= CSR_Reg_MPORT_1_data; // @[EXU_AXI.scala 37:22]
    end
    if (CSR_Reg_MPORT_3_en & CSR_Reg_MPORT_3_mask) begin
      CSR_Reg[CSR_Reg_MPORT_3_addr] <= CSR_Reg_MPORT_3_data; // @[EXU_AXI.scala 37:22]
    end
    if (CSR_Reg_MPORT_6_en & CSR_Reg_MPORT_6_mask) begin
      CSR_Reg[CSR_Reg_MPORT_6_addr] <= CSR_Reg_MPORT_6_data; // @[EXU_AXI.scala 37:22]
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
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    Regfile[initvar] = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    CSR_Reg[initvar] = _RAND_1[63:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module top(
  input         clock,
  input         reset,
  output [31:0] io_inst,
  output [63:0] io_pc,
  output [63:0] io_pc_next,
  output [63:0] io_outval,
  output        io_step
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire  axi_clock; // @[top.scala 18:21]
  wire  axi_reset; // @[top.scala 18:21]
  wire [31:0] axi_io_axi_in_araddr; // @[top.scala 18:21]
  wire  axi_io_axi_in_arvalid; // @[top.scala 18:21]
  wire  axi_io_axi_in_rready; // @[top.scala 18:21]
  wire [31:0] axi_io_axi_in_awaddr; // @[top.scala 18:21]
  wire  axi_io_axi_in_awvalid; // @[top.scala 18:21]
  wire [31:0] axi_io_axi_in_wdata; // @[top.scala 18:21]
  wire [7:0] axi_io_axi_in_wstrb; // @[top.scala 18:21]
  wire  axi_io_axi_in_wvalid; // @[top.scala 18:21]
  wire  axi_io_axi_in_bready; // @[top.scala 18:21]
  wire  axi_io_axi_out_arready; // @[top.scala 18:21]
  wire [63:0] axi_io_axi_out_rdata; // @[top.scala 18:21]
  wire  axi_io_axi_out_rvalid; // @[top.scala 18:21]
  wire  axi_io_axi_out_awready; // @[top.scala 18:21]
  wire  axi_io_axi_out_wready; // @[top.scala 18:21]
  wire  axi_io_axi_out_bvalid; // @[top.scala 18:21]
  wire  lsu_step_clock; // @[top.scala 19:26]
  wire  lsu_step_reset; // @[top.scala 19:26]
  wire  lsu_step_io_inst_store; // @[top.scala 19:26]
  wire  lsu_step_io_inst_load; // @[top.scala 19:26]
  wire [31:0] lsu_step_io_mem_addr; // @[top.scala 19:26]
  wire [63:0] lsu_step_io_mem_wdata; // @[top.scala 19:26]
  wire [7:0] lsu_step_io_mem_wstrb; // @[top.scala 19:26]
  wire [63:0] lsu_step_io_mem_rdata; // @[top.scala 19:26]
  wire  lsu_step_io_axi_in_arready; // @[top.scala 19:26]
  wire [63:0] lsu_step_io_axi_in_rdata; // @[top.scala 19:26]
  wire  lsu_step_io_axi_in_rvalid; // @[top.scala 19:26]
  wire  lsu_step_io_axi_in_awready; // @[top.scala 19:26]
  wire  lsu_step_io_axi_in_wready; // @[top.scala 19:26]
  wire  lsu_step_io_axi_in_bvalid; // @[top.scala 19:26]
  wire [31:0] lsu_step_io_axi_out_araddr; // @[top.scala 19:26]
  wire  lsu_step_io_axi_out_arvalid; // @[top.scala 19:26]
  wire  lsu_step_io_axi_out_rready; // @[top.scala 19:26]
  wire [31:0] lsu_step_io_axi_out_awaddr; // @[top.scala 19:26]
  wire  lsu_step_io_axi_out_awvalid; // @[top.scala 19:26]
  wire [31:0] lsu_step_io_axi_out_wdata; // @[top.scala 19:26]
  wire [7:0] lsu_step_io_axi_out_wstrb; // @[top.scala 19:26]
  wire  lsu_step_io_axi_out_wvalid; // @[top.scala 19:26]
  wire  lsu_step_io_axi_out_bready; // @[top.scala 19:26]
  wire  arbiter_clock; // @[top.scala 20:25]
  wire  arbiter_reset; // @[top.scala 20:25]
  wire [31:0] arbiter_io_ifu_axi_in_araddr; // @[top.scala 20:25]
  wire  arbiter_io_ifu_axi_in_arvalid; // @[top.scala 20:25]
  wire  arbiter_io_ifu_axi_in_rready; // @[top.scala 20:25]
  wire [63:0] arbiter_io_ifu_axi_out_rdata; // @[top.scala 20:25]
  wire  arbiter_io_ifu_axi_out_rvalid; // @[top.scala 20:25]
  wire [31:0] arbiter_io_lsu_axi_in_araddr; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_in_arvalid; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_in_rready; // @[top.scala 20:25]
  wire [31:0] arbiter_io_lsu_axi_in_awaddr; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_in_awvalid; // @[top.scala 20:25]
  wire [31:0] arbiter_io_lsu_axi_in_wdata; // @[top.scala 20:25]
  wire [7:0] arbiter_io_lsu_axi_in_wstrb; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_in_wvalid; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_in_bready; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_out_arready; // @[top.scala 20:25]
  wire [63:0] arbiter_io_lsu_axi_out_rdata; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_out_rvalid; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_out_awready; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_out_wready; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_out_bvalid; // @[top.scala 20:25]
  wire  arbiter_io_axi_in_arready; // @[top.scala 20:25]
  wire [63:0] arbiter_io_axi_in_rdata; // @[top.scala 20:25]
  wire  arbiter_io_axi_in_rvalid; // @[top.scala 20:25]
  wire  arbiter_io_axi_in_awready; // @[top.scala 20:25]
  wire  arbiter_io_axi_in_wready; // @[top.scala 20:25]
  wire  arbiter_io_axi_in_bvalid; // @[top.scala 20:25]
  wire [31:0] arbiter_io_axi_out_araddr; // @[top.scala 20:25]
  wire  arbiter_io_axi_out_arvalid; // @[top.scala 20:25]
  wire  arbiter_io_axi_out_rready; // @[top.scala 20:25]
  wire [31:0] arbiter_io_axi_out_awaddr; // @[top.scala 20:25]
  wire  arbiter_io_axi_out_awvalid; // @[top.scala 20:25]
  wire [31:0] arbiter_io_axi_out_wdata; // @[top.scala 20:25]
  wire [7:0] arbiter_io_axi_out_wstrb; // @[top.scala 20:25]
  wire  arbiter_io_axi_out_wvalid; // @[top.scala 20:25]
  wire  arbiter_io_axi_out_bready; // @[top.scala 20:25]
  wire  ifu_step_clock; // @[top.scala 21:26]
  wire  ifu_step_reset; // @[top.scala 21:26]
  wire [63:0] ifu_step_io_pc; // @[top.scala 21:26]
  wire  ifu_step_io_pc_valid; // @[top.scala 21:26]
  wire  ifu_step_io_inst_valid; // @[top.scala 21:26]
  wire [31:0] ifu_step_io_inst; // @[top.scala 21:26]
  wire [63:0] ifu_step_io_axi_in_rdata; // @[top.scala 21:26]
  wire  ifu_step_io_axi_in_rvalid; // @[top.scala 21:26]
  wire [31:0] ifu_step_io_axi_out_araddr; // @[top.scala 21:26]
  wire  ifu_step_io_axi_out_arvalid; // @[top.scala 21:26]
  wire  ifu_step_io_axi_out_rready; // @[top.scala 21:26]
  wire [31:0] idu_step_io_inst; // @[top.scala 32:26]
  wire [31:0] idu_step_io_inst_now; // @[top.scala 32:26]
  wire [4:0] idu_step_io_rs1; // @[top.scala 32:26]
  wire [4:0] idu_step_io_rs2; // @[top.scala 32:26]
  wire [4:0] idu_step_io_rd; // @[top.scala 32:26]
  wire [63:0] idu_step_io_imm; // @[top.scala 32:26]
  wire  idu_step_io_ctrl_sign_reg_write; // @[top.scala 32:26]
  wire  idu_step_io_ctrl_sign_csr_write; // @[top.scala 32:26]
  wire  idu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 32:26]
  wire  idu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 32:26]
  wire  idu_step_io_ctrl_sign_Writemem_en; // @[top.scala 32:26]
  wire  idu_step_io_ctrl_sign_Readmem_en; // @[top.scala 32:26]
  wire [7:0] idu_step_io_ctrl_sign_Wmask; // @[top.scala 32:26]
  wire  exu_step_clock; // @[top.scala 37:26]
  wire [63:0] exu_step_io_pc; // @[top.scala 37:26]
  wire [63:0] exu_step_io_pc_next; // @[top.scala 37:26]
  wire [31:0] exu_step_io_inst_now; // @[top.scala 37:26]
  wire [4:0] exu_step_io_rs1; // @[top.scala 37:26]
  wire [4:0] exu_step_io_rs2; // @[top.scala 37:26]
  wire [4:0] exu_step_io_rd; // @[top.scala 37:26]
  wire [63:0] exu_step_io_imm; // @[top.scala 37:26]
  wire  exu_step_io_ctrl_sign_reg_write; // @[top.scala 37:26]
  wire  exu_step_io_ctrl_sign_csr_write; // @[top.scala 37:26]
  wire  exu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 37:26]
  wire  exu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 37:26]
  wire  exu_step_io_ctrl_sign_Writemem_en; // @[top.scala 37:26]
  wire  exu_step_io_ctrl_sign_Readmem_en; // @[top.scala 37:26]
  wire [7:0] exu_step_io_ctrl_sign_Wmask; // @[top.scala 37:26]
  wire [63:0] exu_step_io_res2rd; // @[top.scala 37:26]
  wire  exu_step_io_inst_valid; // @[top.scala 37:26]
  wire  exu_step_io_inst_store; // @[top.scala 37:26]
  wire  exu_step_io_inst_load; // @[top.scala 37:26]
  wire [31:0] exu_step_io_Mem_addr; // @[top.scala 37:26]
  wire [63:0] exu_step_io_Mem_rdata; // @[top.scala 37:26]
  wire [63:0] exu_step_io_Mem_wdata; // @[top.scala 37:26]
  wire [7:0] exu_step_io_Mem_wstrb; // @[top.scala 37:26]
  wire [31:0] dpi_flag; // @[top.scala 58:21]
  wire [31:0] dpi_ecall_flag; // @[top.scala 58:21]
  reg [63:0] pc_now; // @[top.scala 15:25]
  reg  execute_end; // @[top.scala 17:30]
  reg  pc_valid; // @[top.scala 71:27]
  AXI axi ( // @[top.scala 18:21]
    .clock(axi_clock),
    .reset(axi_reset),
    .io_axi_in_araddr(axi_io_axi_in_araddr),
    .io_axi_in_arvalid(axi_io_axi_in_arvalid),
    .io_axi_in_rready(axi_io_axi_in_rready),
    .io_axi_in_awaddr(axi_io_axi_in_awaddr),
    .io_axi_in_awvalid(axi_io_axi_in_awvalid),
    .io_axi_in_wdata(axi_io_axi_in_wdata),
    .io_axi_in_wstrb(axi_io_axi_in_wstrb),
    .io_axi_in_wvalid(axi_io_axi_in_wvalid),
    .io_axi_in_bready(axi_io_axi_in_bready),
    .io_axi_out_arready(axi_io_axi_out_arready),
    .io_axi_out_rdata(axi_io_axi_out_rdata),
    .io_axi_out_rvalid(axi_io_axi_out_rvalid),
    .io_axi_out_awready(axi_io_axi_out_awready),
    .io_axi_out_wready(axi_io_axi_out_wready),
    .io_axi_out_bvalid(axi_io_axi_out_bvalid)
  );
  LSU lsu_step ( // @[top.scala 19:26]
    .clock(lsu_step_clock),
    .reset(lsu_step_reset),
    .io_inst_store(lsu_step_io_inst_store),
    .io_inst_load(lsu_step_io_inst_load),
    .io_mem_addr(lsu_step_io_mem_addr),
    .io_mem_wdata(lsu_step_io_mem_wdata),
    .io_mem_wstrb(lsu_step_io_mem_wstrb),
    .io_mem_rdata(lsu_step_io_mem_rdata),
    .io_axi_in_arready(lsu_step_io_axi_in_arready),
    .io_axi_in_rdata(lsu_step_io_axi_in_rdata),
    .io_axi_in_rvalid(lsu_step_io_axi_in_rvalid),
    .io_axi_in_awready(lsu_step_io_axi_in_awready),
    .io_axi_in_wready(lsu_step_io_axi_in_wready),
    .io_axi_in_bvalid(lsu_step_io_axi_in_bvalid),
    .io_axi_out_araddr(lsu_step_io_axi_out_araddr),
    .io_axi_out_arvalid(lsu_step_io_axi_out_arvalid),
    .io_axi_out_rready(lsu_step_io_axi_out_rready),
    .io_axi_out_awaddr(lsu_step_io_axi_out_awaddr),
    .io_axi_out_awvalid(lsu_step_io_axi_out_awvalid),
    .io_axi_out_wdata(lsu_step_io_axi_out_wdata),
    .io_axi_out_wstrb(lsu_step_io_axi_out_wstrb),
    .io_axi_out_wvalid(lsu_step_io_axi_out_wvalid),
    .io_axi_out_bready(lsu_step_io_axi_out_bready)
  );
  AXI_ARBITER arbiter ( // @[top.scala 20:25]
    .clock(arbiter_clock),
    .reset(arbiter_reset),
    .io_ifu_axi_in_araddr(arbiter_io_ifu_axi_in_araddr),
    .io_ifu_axi_in_arvalid(arbiter_io_ifu_axi_in_arvalid),
    .io_ifu_axi_in_rready(arbiter_io_ifu_axi_in_rready),
    .io_ifu_axi_out_rdata(arbiter_io_ifu_axi_out_rdata),
    .io_ifu_axi_out_rvalid(arbiter_io_ifu_axi_out_rvalid),
    .io_lsu_axi_in_araddr(arbiter_io_lsu_axi_in_araddr),
    .io_lsu_axi_in_arvalid(arbiter_io_lsu_axi_in_arvalid),
    .io_lsu_axi_in_rready(arbiter_io_lsu_axi_in_rready),
    .io_lsu_axi_in_awaddr(arbiter_io_lsu_axi_in_awaddr),
    .io_lsu_axi_in_awvalid(arbiter_io_lsu_axi_in_awvalid),
    .io_lsu_axi_in_wdata(arbiter_io_lsu_axi_in_wdata),
    .io_lsu_axi_in_wstrb(arbiter_io_lsu_axi_in_wstrb),
    .io_lsu_axi_in_wvalid(arbiter_io_lsu_axi_in_wvalid),
    .io_lsu_axi_in_bready(arbiter_io_lsu_axi_in_bready),
    .io_lsu_axi_out_arready(arbiter_io_lsu_axi_out_arready),
    .io_lsu_axi_out_rdata(arbiter_io_lsu_axi_out_rdata),
    .io_lsu_axi_out_rvalid(arbiter_io_lsu_axi_out_rvalid),
    .io_lsu_axi_out_awready(arbiter_io_lsu_axi_out_awready),
    .io_lsu_axi_out_wready(arbiter_io_lsu_axi_out_wready),
    .io_lsu_axi_out_bvalid(arbiter_io_lsu_axi_out_bvalid),
    .io_axi_in_arready(arbiter_io_axi_in_arready),
    .io_axi_in_rdata(arbiter_io_axi_in_rdata),
    .io_axi_in_rvalid(arbiter_io_axi_in_rvalid),
    .io_axi_in_awready(arbiter_io_axi_in_awready),
    .io_axi_in_wready(arbiter_io_axi_in_wready),
    .io_axi_in_bvalid(arbiter_io_axi_in_bvalid),
    .io_axi_out_araddr(arbiter_io_axi_out_araddr),
    .io_axi_out_arvalid(arbiter_io_axi_out_arvalid),
    .io_axi_out_rready(arbiter_io_axi_out_rready),
    .io_axi_out_awaddr(arbiter_io_axi_out_awaddr),
    .io_axi_out_awvalid(arbiter_io_axi_out_awvalid),
    .io_axi_out_wdata(arbiter_io_axi_out_wdata),
    .io_axi_out_wstrb(arbiter_io_axi_out_wstrb),
    .io_axi_out_wvalid(arbiter_io_axi_out_wvalid),
    .io_axi_out_bready(arbiter_io_axi_out_bready)
  );
  IFU_AXI ifu_step ( // @[top.scala 21:26]
    .clock(ifu_step_clock),
    .reset(ifu_step_reset),
    .io_pc(ifu_step_io_pc),
    .io_pc_valid(ifu_step_io_pc_valid),
    .io_inst_valid(ifu_step_io_inst_valid),
    .io_inst(ifu_step_io_inst),
    .io_axi_in_rdata(ifu_step_io_axi_in_rdata),
    .io_axi_in_rvalid(ifu_step_io_axi_in_rvalid),
    .io_axi_out_araddr(ifu_step_io_axi_out_araddr),
    .io_axi_out_arvalid(ifu_step_io_axi_out_arvalid),
    .io_axi_out_rready(ifu_step_io_axi_out_rready)
  );
  IDU idu_step ( // @[top.scala 32:26]
    .io_inst(idu_step_io_inst),
    .io_inst_now(idu_step_io_inst_now),
    .io_rs1(idu_step_io_rs1),
    .io_rs2(idu_step_io_rs2),
    .io_rd(idu_step_io_rd),
    .io_imm(idu_step_io_imm),
    .io_ctrl_sign_reg_write(idu_step_io_ctrl_sign_reg_write),
    .io_ctrl_sign_csr_write(idu_step_io_ctrl_sign_csr_write),
    .io_ctrl_sign_src2_is_imm(idu_step_io_ctrl_sign_src2_is_imm),
    .io_ctrl_sign_src1_is_pc(idu_step_io_ctrl_sign_src1_is_pc),
    .io_ctrl_sign_Writemem_en(idu_step_io_ctrl_sign_Writemem_en),
    .io_ctrl_sign_Readmem_en(idu_step_io_ctrl_sign_Readmem_en),
    .io_ctrl_sign_Wmask(idu_step_io_ctrl_sign_Wmask)
  );
  EXU_AXI exu_step ( // @[top.scala 37:26]
    .clock(exu_step_clock),
    .io_pc(exu_step_io_pc),
    .io_pc_next(exu_step_io_pc_next),
    .io_inst_now(exu_step_io_inst_now),
    .io_rs1(exu_step_io_rs1),
    .io_rs2(exu_step_io_rs2),
    .io_rd(exu_step_io_rd),
    .io_imm(exu_step_io_imm),
    .io_ctrl_sign_reg_write(exu_step_io_ctrl_sign_reg_write),
    .io_ctrl_sign_csr_write(exu_step_io_ctrl_sign_csr_write),
    .io_ctrl_sign_src2_is_imm(exu_step_io_ctrl_sign_src2_is_imm),
    .io_ctrl_sign_src1_is_pc(exu_step_io_ctrl_sign_src1_is_pc),
    .io_ctrl_sign_Writemem_en(exu_step_io_ctrl_sign_Writemem_en),
    .io_ctrl_sign_Readmem_en(exu_step_io_ctrl_sign_Readmem_en),
    .io_ctrl_sign_Wmask(exu_step_io_ctrl_sign_Wmask),
    .io_res2rd(exu_step_io_res2rd),
    .io_inst_valid(exu_step_io_inst_valid),
    .io_inst_store(exu_step_io_inst_store),
    .io_inst_load(exu_step_io_inst_load),
    .io_Mem_addr(exu_step_io_Mem_addr),
    .io_Mem_rdata(exu_step_io_Mem_rdata),
    .io_Mem_wdata(exu_step_io_Mem_wdata),
    .io_Mem_wstrb(exu_step_io_Mem_wstrb)
  );
  DPI dpi ( // @[top.scala 58:21]
    .flag(dpi_flag),
    .ecall_flag(dpi_ecall_flag)
  );
  assign io_inst = ifu_step_io_inst; // @[top.scala 23:13]
  assign io_pc = pc_now; // @[top.scala 16:11]
  assign io_pc_next = exu_step_io_pc_next; // @[top.scala 76:16]
  assign io_outval = exu_step_io_res2rd; // @[top.scala 54:15]
  assign io_step = execute_end; // @[top.scala 74:13]
  assign axi_clock = clock;
  assign axi_reset = reset;
  assign axi_io_axi_in_araddr = arbiter_io_axi_out_araddr; // @[top.scala 29:19]
  assign axi_io_axi_in_arvalid = arbiter_io_axi_out_arvalid; // @[top.scala 29:19]
  assign axi_io_axi_in_rready = arbiter_io_axi_out_rready; // @[top.scala 29:19]
  assign axi_io_axi_in_awaddr = arbiter_io_axi_out_awaddr; // @[top.scala 29:19]
  assign axi_io_axi_in_awvalid = arbiter_io_axi_out_awvalid; // @[top.scala 29:19]
  assign axi_io_axi_in_wdata = arbiter_io_axi_out_wdata; // @[top.scala 29:19]
  assign axi_io_axi_in_wstrb = arbiter_io_axi_out_wstrb; // @[top.scala 29:19]
  assign axi_io_axi_in_wvalid = arbiter_io_axi_out_wvalid; // @[top.scala 29:19]
  assign axi_io_axi_in_bready = arbiter_io_axi_out_bready; // @[top.scala 29:19]
  assign lsu_step_clock = clock;
  assign lsu_step_reset = reset;
  assign lsu_step_io_inst_store = exu_step_io_inst_store; // @[top.scala 47:28]
  assign lsu_step_io_inst_load = exu_step_io_inst_load; // @[top.scala 46:27]
  assign lsu_step_io_mem_addr = exu_step_io_Mem_addr; // @[top.scala 48:26]
  assign lsu_step_io_mem_wdata = exu_step_io_Mem_wdata; // @[top.scala 49:27]
  assign lsu_step_io_mem_wstrb = exu_step_io_Mem_wstrb; // @[top.scala 50:27]
  assign lsu_step_io_axi_in_arready = arbiter_io_lsu_axi_out_arready; // @[top.scala 27:24]
  assign lsu_step_io_axi_in_rdata = arbiter_io_lsu_axi_out_rdata; // @[top.scala 27:24]
  assign lsu_step_io_axi_in_rvalid = arbiter_io_lsu_axi_out_rvalid; // @[top.scala 27:24]
  assign lsu_step_io_axi_in_awready = arbiter_io_lsu_axi_out_awready; // @[top.scala 27:24]
  assign lsu_step_io_axi_in_wready = arbiter_io_lsu_axi_out_wready; // @[top.scala 27:24]
  assign lsu_step_io_axi_in_bvalid = arbiter_io_lsu_axi_out_bvalid; // @[top.scala 27:24]
  assign arbiter_clock = clock;
  assign arbiter_reset = reset;
  assign arbiter_io_ifu_axi_in_araddr = ifu_step_io_axi_out_araddr; // @[top.scala 24:27]
  assign arbiter_io_ifu_axi_in_arvalid = ifu_step_io_axi_out_arvalid; // @[top.scala 24:27]
  assign arbiter_io_ifu_axi_in_rready = ifu_step_io_axi_out_rready; // @[top.scala 24:27]
  assign arbiter_io_lsu_axi_in_araddr = lsu_step_io_axi_out_araddr; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_arvalid = lsu_step_io_axi_out_arvalid; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_rready = lsu_step_io_axi_out_rready; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_awaddr = lsu_step_io_axi_out_awaddr; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_awvalid = lsu_step_io_axi_out_awvalid; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_wdata = lsu_step_io_axi_out_wdata; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_wstrb = lsu_step_io_axi_out_wstrb; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_wvalid = lsu_step_io_axi_out_wvalid; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_bready = lsu_step_io_axi_out_bready; // @[top.scala 26:27]
  assign arbiter_io_axi_in_arready = axi_io_axi_out_arready; // @[top.scala 28:23]
  assign arbiter_io_axi_in_rdata = axi_io_axi_out_rdata; // @[top.scala 28:23]
  assign arbiter_io_axi_in_rvalid = axi_io_axi_out_rvalid; // @[top.scala 28:23]
  assign arbiter_io_axi_in_awready = axi_io_axi_out_awready; // @[top.scala 28:23]
  assign arbiter_io_axi_in_wready = axi_io_axi_out_wready; // @[top.scala 28:23]
  assign arbiter_io_axi_in_bvalid = axi_io_axi_out_bvalid; // @[top.scala 28:23]
  assign ifu_step_clock = clock;
  assign ifu_step_reset = reset;
  assign ifu_step_io_pc = pc_now; // @[top.scala 22:20]
  assign ifu_step_io_pc_valid = pc_valid; // @[top.scala 73:26]
  assign ifu_step_io_axi_in_rdata = arbiter_io_ifu_axi_out_rdata; // @[top.scala 25:24]
  assign ifu_step_io_axi_in_rvalid = arbiter_io_ifu_axi_out_rvalid; // @[top.scala 25:24]
  assign idu_step_io_inst = ifu_step_io_inst; // @[top.scala 34:22]
  assign exu_step_clock = clock;
  assign exu_step_io_pc = pc_now; // @[top.scala 38:20]
  assign exu_step_io_inst_now = idu_step_io_inst_now; // @[top.scala 39:26]
  assign exu_step_io_rs1 = idu_step_io_rs1; // @[top.scala 41:21]
  assign exu_step_io_rs2 = idu_step_io_rs2; // @[top.scala 42:21]
  assign exu_step_io_rd = idu_step_io_rd; // @[top.scala 43:20]
  assign exu_step_io_imm = idu_step_io_imm; // @[top.scala 44:21]
  assign exu_step_io_ctrl_sign_reg_write = idu_step_io_ctrl_sign_reg_write; // @[top.scala 45:27]
  assign exu_step_io_ctrl_sign_csr_write = idu_step_io_ctrl_sign_csr_write; // @[top.scala 45:27]
  assign exu_step_io_ctrl_sign_src2_is_imm = idu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 45:27]
  assign exu_step_io_ctrl_sign_src1_is_pc = idu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 45:27]
  assign exu_step_io_ctrl_sign_Writemem_en = idu_step_io_ctrl_sign_Writemem_en; // @[top.scala 45:27]
  assign exu_step_io_ctrl_sign_Readmem_en = idu_step_io_ctrl_sign_Readmem_en; // @[top.scala 45:27]
  assign exu_step_io_ctrl_sign_Wmask = idu_step_io_ctrl_sign_Wmask; // @[top.scala 45:27]
  assign exu_step_io_inst_valid = ifu_step_io_inst_valid; // @[top.scala 53:28]
  assign exu_step_io_Mem_rdata = lsu_step_io_mem_rdata; // @[top.scala 51:27]
  assign dpi_flag = {{31'd0}, idu_step_io_inst_now == 32'h2}; // @[top.scala 59:17]
  assign dpi_ecall_flag = {{31'd0}, idu_step_io_inst_now == 32'h3d}; // @[top.scala 60:23]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 15:25]
      pc_now <= 64'h80000000; // @[top.scala 15:25]
    end else if (execute_end) begin // @[top.scala 75:18]
      pc_now <= exu_step_io_pc_next;
    end
    if (reset) begin // @[top.scala 17:30]
      execute_end <= 1'h0; // @[top.scala 17:30]
    end else if (exu_step_io_inst_store) begin // @[top.scala 70:23]
      execute_end <= lsu_step_io_axi_in_bvalid;
    end else if (exu_step_io_inst_load) begin // @[top.scala 70:76]
      execute_end <= lsu_step_io_axi_in_rvalid;
    end else begin
      execute_end <= ifu_step_io_inst_valid;
    end
    pc_valid <= reset | execute_end; // @[top.scala 71:{27,27} 72:14]
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
  pc_now = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  execute_end = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  pc_valid = _RAND_2[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
