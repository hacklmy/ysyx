module AXI(
  input         clock,
  input         reset,
  input  [31:0] io_axi_in_araddr,
  input  [7:0]  io_axi_in_arlen,
  input         io_axi_in_arvalid,
  input         io_axi_in_rready,
  input  [31:0] io_axi_in_awaddr,
  input  [7:0]  io_axi_in_awlen,
  input         io_axi_in_awvalid,
  input  [63:0] io_axi_in_wdata,
  input  [7:0]  io_axi_in_wstrb,
  input         io_axi_in_wvalid,
  input         io_axi_in_bready,
  output [63:0] io_axi_out_rdata,
  output        io_axi_out_rlast,
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
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] Mem_modle_Raddr; // @[AXI.scala 30:27]
  wire [63:0] Mem_modle_Rdata; // @[AXI.scala 30:27]
  wire [63:0] Mem_modle_Waddr; // @[AXI.scala 30:27]
  wire [63:0] Mem_modle_Wdata; // @[AXI.scala 30:27]
  wire [7:0] Mem_modle_Wmask; // @[AXI.scala 30:27]
  wire  Mem_modle_Write_en; // @[AXI.scala 30:27]
  wire  Mem_modle_Read_en; // @[AXI.scala 30:27]
  reg  axi_awready; // @[AXI.scala 13:30]
  reg  axi_wready; // @[AXI.scala 14:29]
  reg  axi_bvalid; // @[AXI.scala 17:29]
  reg  axi_rvalid; // @[AXI.scala 21:29]
  reg [7:0] arlen; // @[AXI.scala 22:24]
  reg [7:0] awlen; // @[AXI.scala 23:24]
  reg [63:0] araddr; // @[AXI.scala 24:25]
  reg [63:0] awaddr; // @[AXI.scala 25:25]
  reg [2:0] state; // @[AXI.scala 28:24]
  wire  _GEN_4 = io_axi_in_arvalid | axi_rvalid; // @[AXI.scala 55:42 60:28 21:29]
  wire  _GEN_6 = io_axi_in_awvalid & io_axi_in_wvalid ? 1'h0 : axi_awready; // @[AXI.scala 43:56 45:29 13:30]
  wire  _GEN_7 = io_axi_in_awvalid & io_axi_in_wvalid | axi_wready; // @[AXI.scala 43:56 46:28 14:29]
  wire [63:0] _awaddr_T_1 = awaddr + 64'h8; // @[AXI.scala 72:38]
  wire [7:0] _awlen_T_1 = awlen - 8'h1; // @[AXI.scala 73:36]
  wire [63:0] _GEN_14 = io_axi_in_wvalid & axi_wready ? _awaddr_T_1 : awaddr; // @[AXI.scala 25:25 71:60 72:28]
  wire [7:0] _GEN_15 = io_axi_in_wvalid & axi_wready ? _awlen_T_1 : awlen; // @[AXI.scala 23:24 71:60 73:27]
  wire  _GEN_17 = awlen == 8'h0 ? 1'h0 : axi_awready; // @[AXI.scala 64:30 66:29 13:30]
  wire  _GEN_18 = awlen == 8'h0 | axi_bvalid; // @[AXI.scala 64:30 68:28 17:29]
  wire  _T_7 = arlen == 8'h0; // @[AXI.scala 78:23]
  wire [2:0] _GEN_22 = io_axi_in_rready ? 3'h0 : state; // @[AXI.scala 28:24 79:39 80:27]
  wire  _GEN_24 = io_axi_in_rready ? 1'h0 : axi_rvalid; // @[AXI.scala 21:29 79:39 82:32]
  wire [63:0] _araddr_T_1 = araddr + 64'h8; // @[AXI.scala 86:38]
  wire [7:0] _arlen_T_1 = arlen - 8'h1; // @[AXI.scala 87:36]
  wire [63:0] _GEN_25 = io_axi_in_rready ? _araddr_T_1 : araddr; // @[AXI.scala 24:25 85:39 86:28]
  wire [7:0] _GEN_26 = io_axi_in_rready ? _arlen_T_1 : arlen; // @[AXI.scala 22:24 85:39 87:27]
  wire [2:0] _GEN_27 = arlen == 8'h0 ? _GEN_22 : state; // @[AXI.scala 28:24 78:30]
  wire  _GEN_29 = arlen == 8'h0 ? _GEN_24 : axi_rvalid; // @[AXI.scala 21:29 78:30]
  wire [63:0] _GEN_30 = arlen == 8'h0 ? araddr : _GEN_25; // @[AXI.scala 24:25 78:30]
  wire [7:0] _GEN_31 = arlen == 8'h0 ? arlen : _GEN_26; // @[AXI.scala 22:24 78:30]
  wire [2:0] _GEN_32 = io_axi_in_bready ? 3'h0 : state; // @[AXI.scala 92:35 93:23 28:24]
  wire  _GEN_33 = io_axi_in_bready ? 1'h0 : axi_bvalid; // @[AXI.scala 92:35 94:28 17:29]
  wire  _GEN_34 = io_axi_in_bready | axi_awready; // @[AXI.scala 92:35 95:29 13:30]
  wire [2:0] _GEN_35 = 3'h3 == state ? _GEN_32 : state; // @[AXI.scala 41:18 28:24]
  wire  _GEN_36 = 3'h3 == state ? _GEN_33 : axi_bvalid; // @[AXI.scala 41:18 17:29]
  wire  _GEN_37 = 3'h3 == state ? _GEN_34 : axi_awready; // @[AXI.scala 41:18 13:30]
  wire  _GEN_44 = 3'h1 == state ? axi_awready : _GEN_37; // @[AXI.scala 41:18 13:30]
  wire  _GEN_46 = 3'h2 == state ? _GEN_17 : _GEN_44; // @[AXI.scala 41:18]
  wire  _GEN_56 = 3'h0 == state ? _GEN_6 : _GEN_46; // @[AXI.scala 41:18]
  MEM Mem_modle ( // @[AXI.scala 30:27]
    .Raddr(Mem_modle_Raddr),
    .Rdata(Mem_modle_Rdata),
    .Waddr(Mem_modle_Waddr),
    .Wdata(Mem_modle_Wdata),
    .Wmask(Mem_modle_Wmask),
    .Write_en(Mem_modle_Write_en),
    .Read_en(Mem_modle_Read_en)
  );
  assign io_axi_out_rdata = Mem_modle_Rdata; // @[AXI.scala 108:22]
  assign io_axi_out_rlast = state == 3'h1 & _T_7; // @[AXI.scala 110:41]
  assign io_axi_out_rvalid = axi_rvalid; // @[AXI.scala 109:23]
  assign io_axi_out_awready = axi_awready; // @[AXI.scala 111:24]
  assign io_axi_out_wready = axi_wready; // @[AXI.scala 112:23]
  assign io_axi_out_bvalid = axi_bvalid; // @[AXI.scala 113:23]
  assign Mem_modle_Raddr = araddr; // @[AXI.scala 31:24]
  assign Mem_modle_Waddr = awaddr; // @[AXI.scala 32:24]
  assign Mem_modle_Wdata = io_axi_in_wdata; // @[AXI.scala 33:24]
  assign Mem_modle_Wmask = io_axi_in_wstrb; // @[AXI.scala 34:24]
  assign Mem_modle_Write_en = axi_wready; // @[AXI.scala 35:27]
  assign Mem_modle_Read_en = axi_rvalid; // @[AXI.scala 36:26]
  always @(posedge clock) begin
    axi_awready <= reset | _GEN_56; // @[AXI.scala 13:{30,30}]
    if (reset) begin // @[AXI.scala 14:29]
      axi_wready <= 1'h0; // @[AXI.scala 14:29]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      axi_wready <= _GEN_7;
    end else if (3'h2 == state) begin // @[AXI.scala 41:18]
      if (awlen == 8'h0) begin // @[AXI.scala 64:30]
        axi_wready <= 1'h0; // @[AXI.scala 65:28]
      end
    end
    if (reset) begin // @[AXI.scala 17:29]
      axi_bvalid <= 1'h0; // @[AXI.scala 17:29]
    end else if (!(3'h0 == state)) begin // @[AXI.scala 41:18]
      if (3'h2 == state) begin // @[AXI.scala 41:18]
        axi_bvalid <= _GEN_18;
      end else if (!(3'h1 == state)) begin // @[AXI.scala 41:18]
        axi_bvalid <= _GEN_36;
      end
    end
    if (reset) begin // @[AXI.scala 21:29]
      axi_rvalid <= 1'h0; // @[AXI.scala 21:29]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (!(io_axi_in_awvalid & io_axi_in_wvalid)) begin // @[AXI.scala 43:56]
        axi_rvalid <= _GEN_4;
      end
    end else if (!(3'h2 == state)) begin // @[AXI.scala 41:18]
      if (3'h1 == state) begin // @[AXI.scala 41:18]
        axi_rvalid <= _GEN_29;
      end
    end
    if (reset) begin // @[AXI.scala 22:24]
      arlen <= 8'h0; // @[AXI.scala 22:24]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (!(io_axi_in_awvalid & io_axi_in_wvalid)) begin // @[AXI.scala 43:56]
        if (io_axi_in_arvalid) begin // @[AXI.scala 55:42]
          arlen <= io_axi_in_arlen; // @[AXI.scala 57:23]
        end
      end
    end else if (!(3'h2 == state)) begin // @[AXI.scala 41:18]
      if (3'h1 == state) begin // @[AXI.scala 41:18]
        arlen <= _GEN_31;
      end
    end
    if (reset) begin // @[AXI.scala 23:24]
      awlen <= 8'h0; // @[AXI.scala 23:24]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (io_axi_in_awvalid & io_axi_in_wvalid) begin // @[AXI.scala 43:56]
        awlen <= io_axi_in_awlen; // @[AXI.scala 48:23]
      end
    end else if (3'h2 == state) begin // @[AXI.scala 41:18]
      if (!(awlen == 8'h0)) begin // @[AXI.scala 64:30]
        awlen <= _GEN_15;
      end
    end
    if (reset) begin // @[AXI.scala 24:25]
      araddr <= 64'h0; // @[AXI.scala 24:25]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (!(io_axi_in_awvalid & io_axi_in_wvalid)) begin // @[AXI.scala 43:56]
        if (io_axi_in_arvalid) begin // @[AXI.scala 55:42]
          araddr <= {{32'd0}, io_axi_in_araddr}; // @[AXI.scala 58:24]
        end
      end
    end else if (!(3'h2 == state)) begin // @[AXI.scala 41:18]
      if (3'h1 == state) begin // @[AXI.scala 41:18]
        araddr <= _GEN_30;
      end
    end
    if (reset) begin // @[AXI.scala 25:25]
      awaddr <= 64'h0; // @[AXI.scala 25:25]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (io_axi_in_awvalid & io_axi_in_wvalid) begin // @[AXI.scala 43:56]
        awaddr <= {{32'd0}, io_axi_in_awaddr}; // @[AXI.scala 49:24]
      end
    end else if (3'h2 == state) begin // @[AXI.scala 41:18]
      if (!(awlen == 8'h0)) begin // @[AXI.scala 64:30]
        awaddr <= _GEN_14;
      end
    end
    if (reset) begin // @[AXI.scala 28:24]
      state <= 3'h0; // @[AXI.scala 28:24]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (io_axi_in_awvalid & io_axi_in_wvalid) begin // @[AXI.scala 43:56]
        state <= 3'h2; // @[AXI.scala 44:23]
      end else if (io_axi_in_arvalid) begin // @[AXI.scala 55:42]
        state <= 3'h1; // @[AXI.scala 56:23]
      end
    end else if (3'h2 == state) begin // @[AXI.scala 41:18]
      if (awlen == 8'h0) begin // @[AXI.scala 64:30]
        state <= 3'h3; // @[AXI.scala 69:23]
      end
    end else if (3'h1 == state) begin // @[AXI.scala 41:18]
      state <= _GEN_27;
    end else begin
      state <= _GEN_35;
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
  axi_awready = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  axi_wready = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  axi_bvalid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  axi_rvalid = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  arlen = _RAND_4[7:0];
  _RAND_5 = {1{`RANDOM}};
  awlen = _RAND_5[7:0];
  _RAND_6 = {2{`RANDOM}};
  araddr = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  awaddr = _RAND_7[63:0];
  _RAND_8 = {1{`RANDOM}};
  state = _RAND_8[2:0];
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
  output [63:0] io_axi_out_wdata,
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
  assign io_axi_out_rready = axi_rready; // @[LSU.scala 78:23]
  assign io_axi_out_awaddr = io_mem_addr; // @[LSU.scala 79:23]
  assign io_axi_out_awvalid = axi_awvalid; // @[LSU.scala 80:24]
  assign io_axi_out_wdata = io_mem_wdata; // @[LSU.scala 84:22]
  assign io_axi_out_wstrb = io_mem_wstrb; // @[LSU.scala 85:22]
  assign io_axi_out_wvalid = axi_wvalid; // @[LSU.scala 87:23]
  assign io_axi_out_bready = axi_bready; // @[LSU.scala 88:23]
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
  input  [7:0]  io_ifu_axi_in_arlen,
  input         io_ifu_axi_in_arvalid,
  input         io_ifu_axi_in_rready,
  output [63:0] io_ifu_axi_out_rdata,
  output        io_ifu_axi_out_rlast,
  output        io_ifu_axi_out_rvalid,
  input  [31:0] io_lsu_axi_in_araddr,
  input  [7:0]  io_lsu_axi_in_arlen,
  input         io_lsu_axi_in_arvalid,
  input         io_lsu_axi_in_rready,
  input  [31:0] io_lsu_axi_in_awaddr,
  input  [7:0]  io_lsu_axi_in_awlen,
  input         io_lsu_axi_in_awvalid,
  input  [63:0] io_lsu_axi_in_wdata,
  input  [7:0]  io_lsu_axi_in_wstrb,
  input         io_lsu_axi_in_wvalid,
  input         io_lsu_axi_in_bready,
  output [63:0] io_lsu_axi_out_rdata,
  output        io_lsu_axi_out_rlast,
  output        io_lsu_axi_out_rvalid,
  output        io_lsu_axi_out_awready,
  output        io_lsu_axi_out_wready,
  output        io_lsu_axi_out_bvalid,
  input  [63:0] io_axi_in_rdata,
  input         io_axi_in_rlast,
  input         io_axi_in_rvalid,
  input         io_axi_in_awready,
  input         io_axi_in_wready,
  input         io_axi_in_bvalid,
  output [31:0] io_axi_out_araddr,
  output [7:0]  io_axi_out_arlen,
  output        io_axi_out_arvalid,
  output        io_axi_out_rready,
  output [31:0] io_axi_out_awaddr,
  output [7:0]  io_axi_out_awlen,
  output        io_axi_out_awvalid,
  output [63:0] io_axi_out_wdata,
  output [7:0]  io_axi_out_wstrb,
  output        io_axi_out_wvalid,
  output        io_axi_out_bready
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] state; // @[axi_arbiter.scala 18:24]
  wire [1:0] _GEN_0 = io_ifu_axi_in_arvalid ? 2'h1 : state; // @[axi_arbiter.scala 59:46 60:23 18:24]
  wire [31:0] _GEN_1 = io_ifu_axi_in_arvalid ? io_ifu_axi_in_araddr : 32'h0; // @[axi_arbiter.scala 59:46 61:28 65:28]
  wire [7:0] _GEN_2 = io_ifu_axi_in_arvalid ? io_ifu_axi_in_arlen : 8'h0; // @[axi_arbiter.scala 59:46 61:28 65:28]
  wire  _GEN_6 = io_ifu_axi_in_arvalid & io_ifu_axi_in_rready; // @[axi_arbiter.scala 59:46 61:28 65:28]
  wire [63:0] _GEN_18 = io_ifu_axi_in_arvalid ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 59:46 62:32 67:32]
  wire  _GEN_19 = io_ifu_axi_in_arvalid & io_axi_in_rlast; // @[axi_arbiter.scala 59:46 62:32 67:32]
  wire  _GEN_20 = io_ifu_axi_in_arvalid & io_axi_in_rvalid; // @[axi_arbiter.scala 59:46 62:32 67:32]
  wire [31:0] _GEN_32 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_araddr : _GEN_1; // @[axi_arbiter.scala 54:46 56:28]
  wire [7:0] _GEN_33 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_arlen : _GEN_2; // @[axi_arbiter.scala 54:46 56:28]
  wire  _GEN_36 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_arvalid : io_ifu_axi_in_arvalid; // @[axi_arbiter.scala 54:46 56:28]
  wire  _GEN_37 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_rready : _GEN_6; // @[axi_arbiter.scala 54:46 56:28]
  wire [31:0] _GEN_38 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_awaddr : 32'h0; // @[axi_arbiter.scala 54:46 56:28]
  wire [7:0] _GEN_39 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_awlen : 8'h0; // @[axi_arbiter.scala 54:46 56:28]
  wire  _GEN_42 = io_lsu_axi_in_arvalid & io_lsu_axi_in_awvalid; // @[axi_arbiter.scala 54:46 56:28]
  wire [63:0] _GEN_43 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_wdata : 64'h0; // @[axi_arbiter.scala 54:46 56:28]
  wire [7:0] _GEN_44 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_wstrb : 8'h0; // @[axi_arbiter.scala 54:46 56:28]
  wire  _GEN_46 = io_lsu_axi_in_arvalid & io_lsu_axi_in_wvalid; // @[axi_arbiter.scala 54:46 56:28]
  wire  _GEN_47 = io_lsu_axi_in_arvalid & io_lsu_axi_in_bready; // @[axi_arbiter.scala 54:46 56:28]
  wire [63:0] _GEN_49 = io_lsu_axi_in_arvalid ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 54:46 57:32]
  wire  _GEN_50 = io_lsu_axi_in_arvalid & io_axi_in_rlast; // @[axi_arbiter.scala 54:46 57:32]
  wire  _GEN_51 = io_lsu_axi_in_arvalid & io_axi_in_rvalid; // @[axi_arbiter.scala 54:46 57:32]
  wire  _GEN_52 = io_lsu_axi_in_arvalid & io_axi_in_awready; // @[axi_arbiter.scala 54:46 57:32]
  wire  _GEN_53 = io_lsu_axi_in_arvalid & io_axi_in_wready; // @[axi_arbiter.scala 54:46 57:32]
  wire  _GEN_54 = io_lsu_axi_in_arvalid & io_axi_in_bvalid; // @[axi_arbiter.scala 54:46 57:32]
  wire [63:0] _GEN_56 = io_lsu_axi_in_arvalid ? 64'h0 : _GEN_18; // @[axi_arbiter.scala 54:46 58:32]
  wire  _GEN_57 = io_lsu_axi_in_arvalid ? 1'h0 : _GEN_19; // @[axi_arbiter.scala 54:46 58:32]
  wire  _GEN_58 = io_lsu_axi_in_arvalid ? 1'h0 : _GEN_20; // @[axi_arbiter.scala 54:46 58:32]
  wire [31:0] _GEN_63 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_araddr : _GEN_32; // @[axi_arbiter.scala 49:40 51:28]
  wire [7:0] _GEN_64 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_arlen : _GEN_33; // @[axi_arbiter.scala 49:40 51:28]
  wire  _GEN_67 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_arvalid : _GEN_36; // @[axi_arbiter.scala 49:40 51:28]
  wire  _GEN_68 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_rready : _GEN_37; // @[axi_arbiter.scala 49:40 51:28]
  wire [31:0] _GEN_69 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_awaddr : _GEN_38; // @[axi_arbiter.scala 49:40 51:28]
  wire [7:0] _GEN_70 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_awlen : _GEN_39; // @[axi_arbiter.scala 49:40 51:28]
  wire  _GEN_73 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_awvalid : _GEN_42; // @[axi_arbiter.scala 49:40 51:28]
  wire [63:0] _GEN_74 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_wdata : _GEN_43; // @[axi_arbiter.scala 49:40 51:28]
  wire [7:0] _GEN_75 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_wstrb : _GEN_44; // @[axi_arbiter.scala 49:40 51:28]
  wire  _GEN_77 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_wvalid : _GEN_46; // @[axi_arbiter.scala 49:40 51:28]
  wire  _GEN_78 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_bready : _GEN_47; // @[axi_arbiter.scala 49:40 51:28]
  wire [63:0] _GEN_80 = io_lsu_axi_in_awvalid ? io_axi_in_rdata : _GEN_49; // @[axi_arbiter.scala 49:40 52:32]
  wire  _GEN_81 = io_lsu_axi_in_awvalid ? io_axi_in_rlast : _GEN_50; // @[axi_arbiter.scala 49:40 52:32]
  wire  _GEN_82 = io_lsu_axi_in_awvalid ? io_axi_in_rvalid : _GEN_51; // @[axi_arbiter.scala 49:40 52:32]
  wire  _GEN_83 = io_lsu_axi_in_awvalid ? io_axi_in_awready : _GEN_52; // @[axi_arbiter.scala 49:40 52:32]
  wire  _GEN_84 = io_lsu_axi_in_awvalid ? io_axi_in_wready : _GEN_53; // @[axi_arbiter.scala 49:40 52:32]
  wire  _GEN_85 = io_lsu_axi_in_awvalid ? io_axi_in_bvalid : _GEN_54; // @[axi_arbiter.scala 49:40 52:32]
  wire [63:0] _GEN_87 = io_lsu_axi_in_awvalid ? 64'h0 : _GEN_56; // @[axi_arbiter.scala 49:40 53:32]
  wire  _GEN_88 = io_lsu_axi_in_awvalid ? 1'h0 : _GEN_57; // @[axi_arbiter.scala 49:40 53:32]
  wire  _GEN_89 = io_lsu_axi_in_awvalid ? 1'h0 : _GEN_58; // @[axi_arbiter.scala 49:40 53:32]
  wire [1:0] _GEN_94 = io_lsu_axi_out_rvalid & io_lsu_axi_in_rready & io_lsu_axi_out_rlast ? 2'h0 : state; // @[axi_arbiter.scala 82:88 83:23 18:24]
  wire [1:0] _GEN_95 = io_lsu_axi_out_bvalid & io_lsu_axi_in_bready ? 2'h0 : state; // @[axi_arbiter.scala 90:64 91:23 18:24]
  wire [31:0] _GEN_96 = state == 2'h3 ? io_lsu_axi_in_araddr : 32'h0; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire [7:0] _GEN_97 = state == 2'h3 ? io_lsu_axi_in_arlen : 8'h0; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire  _GEN_100 = state == 2'h3 & io_lsu_axi_in_arvalid; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire  _GEN_101 = state == 2'h3 & io_lsu_axi_in_rready; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire [31:0] _GEN_102 = state == 2'h3 ? io_lsu_axi_in_awaddr : 32'h0; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire [7:0] _GEN_103 = state == 2'h3 ? io_lsu_axi_in_awlen : 8'h0; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire  _GEN_106 = state == 2'h3 & io_lsu_axi_in_awvalid; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire [63:0] _GEN_107 = state == 2'h3 ? io_lsu_axi_in_wdata : 64'h0; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire [7:0] _GEN_108 = state == 2'h3 ? io_lsu_axi_in_wstrb : 8'h0; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire  _GEN_110 = state == 2'h3 & io_lsu_axi_in_wvalid; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire  _GEN_111 = state == 2'h3 & io_lsu_axi_in_bready; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire [63:0] _GEN_113 = state == 2'h3 ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 86:39 88:28 96:28]
  wire  _GEN_114 = state == 2'h3 & io_axi_in_rlast; // @[axi_arbiter.scala 86:39 88:28 96:28]
  wire  _GEN_115 = state == 2'h3 & io_axi_in_rvalid; // @[axi_arbiter.scala 86:39 88:28 96:28]
  wire  _GEN_116 = state == 2'h3 & io_axi_in_awready; // @[axi_arbiter.scala 86:39 88:28 96:28]
  wire  _GEN_117 = state == 2'h3 & io_axi_in_wready; // @[axi_arbiter.scala 86:39 88:28 96:28]
  wire  _GEN_118 = state == 2'h3 & io_axi_in_bvalid; // @[axi_arbiter.scala 86:39 88:28 96:28]
  wire [1:0] _GEN_126 = state == 2'h3 ? _GEN_95 : state; // @[axi_arbiter.scala 18:24 86:39]
  wire [31:0] _GEN_127 = state == 2'h2 ? io_lsu_axi_in_araddr : _GEN_96; // @[axi_arbiter.scala 78:39 79:24]
  wire [7:0] _GEN_128 = state == 2'h2 ? io_lsu_axi_in_arlen : _GEN_97; // @[axi_arbiter.scala 78:39 79:24]
  wire  _GEN_131 = state == 2'h2 ? io_lsu_axi_in_arvalid : _GEN_100; // @[axi_arbiter.scala 78:39 79:24]
  wire  _GEN_132 = state == 2'h2 ? io_lsu_axi_in_rready : _GEN_101; // @[axi_arbiter.scala 78:39 79:24]
  wire [31:0] _GEN_133 = state == 2'h2 ? io_lsu_axi_in_awaddr : _GEN_102; // @[axi_arbiter.scala 78:39 79:24]
  wire [7:0] _GEN_134 = state == 2'h2 ? io_lsu_axi_in_awlen : _GEN_103; // @[axi_arbiter.scala 78:39 79:24]
  wire  _GEN_137 = state == 2'h2 ? io_lsu_axi_in_awvalid : _GEN_106; // @[axi_arbiter.scala 78:39 79:24]
  wire [63:0] _GEN_138 = state == 2'h2 ? io_lsu_axi_in_wdata : _GEN_107; // @[axi_arbiter.scala 78:39 79:24]
  wire [7:0] _GEN_139 = state == 2'h2 ? io_lsu_axi_in_wstrb : _GEN_108; // @[axi_arbiter.scala 78:39 79:24]
  wire  _GEN_141 = state == 2'h2 ? io_lsu_axi_in_wvalid : _GEN_110; // @[axi_arbiter.scala 78:39 79:24]
  wire  _GEN_142 = state == 2'h2 ? io_lsu_axi_in_bready : _GEN_111; // @[axi_arbiter.scala 78:39 79:24]
  wire [63:0] _GEN_144 = state == 2'h2 ? io_axi_in_rdata : _GEN_113; // @[axi_arbiter.scala 78:39 80:28]
  wire  _GEN_145 = state == 2'h2 ? io_axi_in_rlast : _GEN_114; // @[axi_arbiter.scala 78:39 80:28]
  wire  _GEN_146 = state == 2'h2 ? io_axi_in_rvalid : _GEN_115; // @[axi_arbiter.scala 78:39 80:28]
  wire  _GEN_147 = state == 2'h2 ? io_axi_in_awready : _GEN_116; // @[axi_arbiter.scala 78:39 80:28]
  wire  _GEN_148 = state == 2'h2 ? io_axi_in_wready : _GEN_117; // @[axi_arbiter.scala 78:39 80:28]
  wire  _GEN_149 = state == 2'h2 ? io_axi_in_bvalid : _GEN_118; // @[axi_arbiter.scala 78:39 80:28]
  wire [31:0] _GEN_158 = state == 2'h1 ? io_ifu_axi_in_araddr : _GEN_127; // @[axi_arbiter.scala 70:39 71:24]
  wire [7:0] _GEN_159 = state == 2'h1 ? io_ifu_axi_in_arlen : _GEN_128; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_162 = state == 2'h1 ? io_ifu_axi_in_arvalid : _GEN_131; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_163 = state == 2'h1 ? io_ifu_axi_in_rready : _GEN_132; // @[axi_arbiter.scala 70:39 71:24]
  wire [31:0] _GEN_164 = state == 2'h1 ? 32'h0 : _GEN_133; // @[axi_arbiter.scala 70:39 71:24]
  wire [7:0] _GEN_165 = state == 2'h1 ? 8'h0 : _GEN_134; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_168 = state == 2'h1 ? 1'h0 : _GEN_137; // @[axi_arbiter.scala 70:39 71:24]
  wire [63:0] _GEN_169 = state == 2'h1 ? 64'h0 : _GEN_138; // @[axi_arbiter.scala 70:39 71:24]
  wire [7:0] _GEN_170 = state == 2'h1 ? 8'h0 : _GEN_139; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_172 = state == 2'h1 ? 1'h0 : _GEN_141; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_173 = state == 2'h1 ? 1'h0 : _GEN_142; // @[axi_arbiter.scala 70:39 71:24]
  wire [63:0] _GEN_175 = state == 2'h1 ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 70:39 72:28]
  wire  _GEN_176 = state == 2'h1 & io_axi_in_rlast; // @[axi_arbiter.scala 70:39 72:28]
  wire  _GEN_177 = state == 2'h1 & io_axi_in_rvalid; // @[axi_arbiter.scala 70:39 72:28]
  wire [63:0] _GEN_182 = state == 2'h1 ? 64'h0 : _GEN_144; // @[axi_arbiter.scala 70:39 73:28]
  wire  _GEN_183 = state == 2'h1 ? 1'h0 : _GEN_145; // @[axi_arbiter.scala 70:39 73:28]
  wire  _GEN_184 = state == 2'h1 ? 1'h0 : _GEN_146; // @[axi_arbiter.scala 70:39 73:28]
  wire  _GEN_185 = state == 2'h1 ? 1'h0 : _GEN_147; // @[axi_arbiter.scala 70:39 73:28]
  wire  _GEN_186 = state == 2'h1 ? 1'h0 : _GEN_148; // @[axi_arbiter.scala 70:39 73:28]
  wire  _GEN_187 = state == 2'h1 ? 1'h0 : _GEN_149; // @[axi_arbiter.scala 70:39 73:28]
  assign io_ifu_axi_out_rdata = state == 2'h0 ? _GEN_87 : _GEN_175; // @[axi_arbiter.scala 48:27]
  assign io_ifu_axi_out_rlast = state == 2'h0 ? _GEN_88 : _GEN_176; // @[axi_arbiter.scala 48:27]
  assign io_ifu_axi_out_rvalid = state == 2'h0 ? _GEN_89 : _GEN_177; // @[axi_arbiter.scala 48:27]
  assign io_lsu_axi_out_rdata = state == 2'h0 ? _GEN_80 : _GEN_182; // @[axi_arbiter.scala 48:27]
  assign io_lsu_axi_out_rlast = state == 2'h0 ? _GEN_81 : _GEN_183; // @[axi_arbiter.scala 48:27]
  assign io_lsu_axi_out_rvalid = state == 2'h0 ? _GEN_82 : _GEN_184; // @[axi_arbiter.scala 48:27]
  assign io_lsu_axi_out_awready = state == 2'h0 ? _GEN_83 : _GEN_185; // @[axi_arbiter.scala 48:27]
  assign io_lsu_axi_out_wready = state == 2'h0 ? _GEN_84 : _GEN_186; // @[axi_arbiter.scala 48:27]
  assign io_lsu_axi_out_bvalid = state == 2'h0 ? _GEN_85 : _GEN_187; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_araddr = state == 2'h0 ? _GEN_63 : _GEN_158; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_arlen = state == 2'h0 ? _GEN_64 : _GEN_159; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_arvalid = state == 2'h0 ? _GEN_67 : _GEN_162; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_rready = state == 2'h0 ? _GEN_68 : _GEN_163; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_awaddr = state == 2'h0 ? _GEN_69 : _GEN_164; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_awlen = state == 2'h0 ? _GEN_70 : _GEN_165; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_awvalid = state == 2'h0 ? _GEN_73 : _GEN_168; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_wdata = state == 2'h0 ? _GEN_74 : _GEN_169; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_wstrb = state == 2'h0 ? _GEN_75 : _GEN_170; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_wvalid = state == 2'h0 ? _GEN_77 : _GEN_172; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_bready = state == 2'h0 ? _GEN_78 : _GEN_173; // @[axi_arbiter.scala 48:27]
  always @(posedge clock) begin
    if (reset) begin // @[axi_arbiter.scala 18:24]
      state <= 2'h0; // @[axi_arbiter.scala 18:24]
    end else if (state == 2'h0) begin // @[axi_arbiter.scala 48:27]
      if (io_lsu_axi_in_awvalid) begin // @[axi_arbiter.scala 49:40]
        state <= 2'h3; // @[axi_arbiter.scala 50:23]
      end else if (io_lsu_axi_in_arvalid) begin // @[axi_arbiter.scala 54:46]
        state <= 2'h2; // @[axi_arbiter.scala 55:23]
      end else begin
        state <= _GEN_0;
      end
    end else if (state == 2'h1) begin // @[axi_arbiter.scala 70:39]
      if (io_ifu_axi_out_rvalid & io_ifu_axi_in_rready & io_ifu_axi_out_rlast) begin // @[axi_arbiter.scala 74:88]
        state <= 2'h0; // @[axi_arbiter.scala 75:23]
      end
    end else if (state == 2'h2) begin // @[axi_arbiter.scala 78:39]
      state <= _GEN_94;
    end else begin
      state <= _GEN_126;
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
  output [31:0] io_inst_reg,
  input  [63:0] io_axi_in_rdata,
  input         io_axi_in_rlast,
  input         io_axi_in_rvalid,
  output [31:0] io_axi_out_araddr,
  output        io_axi_out_arvalid,
  output        io_axi_out_rready
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  inst_ready; // @[IFU_AXI.scala 19:29]
  wire  _GEN_0 = io_axi_in_rvalid & inst_ready & io_axi_in_rlast ? 1'h0 : 1'h1; // @[IFU_AXI.scala 20:60 21:20 23:20]
  reg [31:0] inst_reg; // @[IFU_AXI.scala 25:27]
  assign io_inst_valid = io_axi_in_rvalid; // @[IFU_AXI.scala 50:19]
  assign io_inst = io_axi_in_rdata[31:0]; // @[IFU_AXI.scala 48:31]
  assign io_inst_reg = inst_reg; // @[IFU_AXI.scala 49:17]
  assign io_axi_out_araddr = io_pc[31:0]; // @[IFU_AXI.scala 31:31]
  assign io_axi_out_arvalid = io_pc_valid; // @[IFU_AXI.scala 32:24]
  assign io_axi_out_rready = inst_ready; // @[IFU_AXI.scala 36:23]
  always @(posedge clock) begin
    inst_ready <= reset | _GEN_0; // @[IFU_AXI.scala 19:{29,29}]
    if (reset) begin // @[IFU_AXI.scala 25:27]
      inst_reg <= 32'h0; // @[IFU_AXI.scala 25:27]
    end else if (io_axi_in_rvalid & io_axi_in_rlast) begin // @[IFU_AXI.scala 26:46]
      inst_reg <= io_axi_in_rdata[31:0]; // @[IFU_AXI.scala 27:18]
    end else if (io_pc_valid) begin // @[IFU_AXI.scala 28:28]
      inst_reg <= 32'h0; // @[IFU_AXI.scala 29:18]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"inst_valid : %d pc_valid:%d\n",io_inst_valid,io_pc_valid); // @[IFU_AXI.scala 51:11]
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
  _RAND_1 = {1{`RANDOM}};
  inst_reg = _RAND_1[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module I_CACHE(
  input         clock,
  input         reset,
  input  [31:0] io_from_ifu_araddr,
  input         io_from_ifu_arvalid,
  input         io_from_ifu_rready,
  output [63:0] io_to_ifu_rdata,
  output        io_to_ifu_rlast,
  output        io_to_ifu_rvalid,
  output [31:0] io_to_axi_araddr,
  output [7:0]  io_to_axi_arlen,
  output        io_to_axi_arvalid,
  output        io_to_axi_rready,
  input  [63:0] io_from_axi_rdata,
  input         io_from_axi_rlast,
  input         io_from_axi_rvalid
);
`ifdef RANDOMIZE_REG_INIT
  reg [511:0] _RAND_0;
  reg [511:0] _RAND_1;
  reg [511:0] _RAND_2;
  reg [511:0] _RAND_3;
  reg [511:0] _RAND_4;
  reg [511:0] _RAND_5;
  reg [511:0] _RAND_6;
  reg [511:0] _RAND_7;
  reg [511:0] _RAND_8;
  reg [511:0] _RAND_9;
  reg [511:0] _RAND_10;
  reg [511:0] _RAND_11;
  reg [511:0] _RAND_12;
  reg [511:0] _RAND_13;
  reg [511:0] _RAND_14;
  reg [511:0] _RAND_15;
  reg [511:0] _RAND_16;
  reg [511:0] _RAND_17;
  reg [511:0] _RAND_18;
  reg [511:0] _RAND_19;
  reg [511:0] _RAND_20;
  reg [511:0] _RAND_21;
  reg [511:0] _RAND_22;
  reg [511:0] _RAND_23;
  reg [511:0] _RAND_24;
  reg [511:0] _RAND_25;
  reg [511:0] _RAND_26;
  reg [511:0] _RAND_27;
  reg [511:0] _RAND_28;
  reg [511:0] _RAND_29;
  reg [511:0] _RAND_30;
  reg [511:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [31:0] _RAND_50;
  reg [31:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [31:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [31:0] _RAND_55;
  reg [31:0] _RAND_56;
  reg [31:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [31:0] _RAND_59;
  reg [31:0] _RAND_60;
  reg [31:0] _RAND_61;
  reg [31:0] _RAND_62;
  reg [31:0] _RAND_63;
  reg [31:0] _RAND_64;
  reg [31:0] _RAND_65;
  reg [31:0] _RAND_66;
  reg [31:0] _RAND_67;
  reg [31:0] _RAND_68;
  reg [31:0] _RAND_69;
  reg [31:0] _RAND_70;
  reg [31:0] _RAND_71;
  reg [31:0] _RAND_72;
  reg [31:0] _RAND_73;
  reg [31:0] _RAND_74;
  reg [31:0] _RAND_75;
  reg [31:0] _RAND_76;
  reg [31:0] _RAND_77;
  reg [31:0] _RAND_78;
  reg [31:0] _RAND_79;
  reg [31:0] _RAND_80;
  reg [31:0] _RAND_81;
  reg [31:0] _RAND_82;
  reg [31:0] _RAND_83;
  reg [31:0] _RAND_84;
  reg [31:0] _RAND_85;
  reg [31:0] _RAND_86;
  reg [31:0] _RAND_87;
  reg [31:0] _RAND_88;
  reg [31:0] _RAND_89;
  reg [31:0] _RAND_90;
  reg [31:0] _RAND_91;
  reg [31:0] _RAND_92;
  reg [31:0] _RAND_93;
  reg [31:0] _RAND_94;
  reg [31:0] _RAND_95;
  reg [31:0] _RAND_96;
  reg [31:0] _RAND_97;
  reg [31:0] _RAND_98;
  reg [63:0] _RAND_99;
  reg [63:0] _RAND_100;
  reg [63:0] _RAND_101;
  reg [63:0] _RAND_102;
  reg [63:0] _RAND_103;
  reg [63:0] _RAND_104;
  reg [63:0] _RAND_105;
  reg [63:0] _RAND_106;
  reg [31:0] _RAND_107;
  reg [31:0] _RAND_108;
  reg [31:0] _RAND_109;
`endif // RANDOMIZE_REG_INIT
  reg [511:0] ram_0_0; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_1; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_2; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_3; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_4; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_5; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_6; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_7; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_8; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_9; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_10; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_11; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_12; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_13; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_14; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_15; // @[i_cache.scala 17:24]
  reg [511:0] ram_1_0; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_1; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_2; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_3; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_4; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_5; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_6; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_7; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_8; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_9; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_10; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_11; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_12; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_13; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_14; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_15; // @[i_cache.scala 18:24]
  reg [31:0] tag_0_0; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_1; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_2; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_3; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_4; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_5; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_6; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_7; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_8; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_9; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_10; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_11; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_12; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_13; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_14; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_15; // @[i_cache.scala 19:24]
  reg [31:0] tag_1_0; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_1; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_2; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_3; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_4; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_5; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_6; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_7; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_8; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_9; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_10; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_11; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_12; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_13; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_14; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_15; // @[i_cache.scala 20:24]
  reg  valid_0_0; // @[i_cache.scala 21:26]
  reg  valid_0_1; // @[i_cache.scala 21:26]
  reg  valid_0_2; // @[i_cache.scala 21:26]
  reg  valid_0_3; // @[i_cache.scala 21:26]
  reg  valid_0_4; // @[i_cache.scala 21:26]
  reg  valid_0_5; // @[i_cache.scala 21:26]
  reg  valid_0_6; // @[i_cache.scala 21:26]
  reg  valid_0_7; // @[i_cache.scala 21:26]
  reg  valid_0_8; // @[i_cache.scala 21:26]
  reg  valid_0_9; // @[i_cache.scala 21:26]
  reg  valid_0_10; // @[i_cache.scala 21:26]
  reg  valid_0_11; // @[i_cache.scala 21:26]
  reg  valid_0_12; // @[i_cache.scala 21:26]
  reg  valid_0_13; // @[i_cache.scala 21:26]
  reg  valid_0_14; // @[i_cache.scala 21:26]
  reg  valid_0_15; // @[i_cache.scala 21:26]
  reg  valid_1_0; // @[i_cache.scala 22:26]
  reg  valid_1_1; // @[i_cache.scala 22:26]
  reg  valid_1_2; // @[i_cache.scala 22:26]
  reg  valid_1_3; // @[i_cache.scala 22:26]
  reg  valid_1_4; // @[i_cache.scala 22:26]
  reg  valid_1_5; // @[i_cache.scala 22:26]
  reg  valid_1_6; // @[i_cache.scala 22:26]
  reg  valid_1_7; // @[i_cache.scala 22:26]
  reg  valid_1_8; // @[i_cache.scala 22:26]
  reg  valid_1_9; // @[i_cache.scala 22:26]
  reg  valid_1_10; // @[i_cache.scala 22:26]
  reg  valid_1_11; // @[i_cache.scala 22:26]
  reg  valid_1_12; // @[i_cache.scala 22:26]
  reg  valid_1_13; // @[i_cache.scala 22:26]
  reg  valid_1_14; // @[i_cache.scala 22:26]
  reg  valid_1_15; // @[i_cache.scala 22:26]
  reg  way0_hit; // @[i_cache.scala 23:27]
  reg  way1_hit; // @[i_cache.scala 24:27]
  reg [1:0] unuse_way; // @[i_cache.scala 26:28]
  reg [63:0] receive_data_0; // @[i_cache.scala 27:31]
  reg [63:0] receive_data_1; // @[i_cache.scala 27:31]
  reg [63:0] receive_data_2; // @[i_cache.scala 27:31]
  reg [63:0] receive_data_3; // @[i_cache.scala 27:31]
  reg [63:0] receive_data_4; // @[i_cache.scala 27:31]
  reg [63:0] receive_data_5; // @[i_cache.scala 27:31]
  reg [63:0] receive_data_6; // @[i_cache.scala 27:31]
  reg [63:0] receive_data_7; // @[i_cache.scala 27:31]
  reg [2:0] receive_num; // @[i_cache.scala 28:30]
  reg  quene; // @[i_cache.scala 29:24]
  wire [5:0] offset = io_from_ifu_araddr[5:0]; // @[i_cache.scala 31:36]
  wire [3:0] index = io_from_ifu_araddr[9:6]; // @[i_cache.scala 32:35]
  wire [21:0] tag = io_from_ifu_araddr[31:10]; // @[i_cache.scala 33:33]
  wire [8:0] shift_bit = {offset, 3'h0}; // @[i_cache.scala 34:28]
  wire [31:0] _GEN_1 = 4'h1 == index ? tag_0_1 : tag_0_0; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_2 = 4'h2 == index ? tag_0_2 : _GEN_1; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_3 = 4'h3 == index ? tag_0_3 : _GEN_2; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_4 = 4'h4 == index ? tag_0_4 : _GEN_3; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_5 = 4'h5 == index ? tag_0_5 : _GEN_4; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_6 = 4'h6 == index ? tag_0_6 : _GEN_5; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_7 = 4'h7 == index ? tag_0_7 : _GEN_6; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_8 = 4'h8 == index ? tag_0_8 : _GEN_7; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_9 = 4'h9 == index ? tag_0_9 : _GEN_8; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_10 = 4'ha == index ? tag_0_10 : _GEN_9; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_11 = 4'hb == index ? tag_0_11 : _GEN_10; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_12 = 4'hc == index ? tag_0_12 : _GEN_11; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_13 = 4'hd == index ? tag_0_13 : _GEN_12; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_14 = 4'he == index ? tag_0_14 : _GEN_13; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_15 = 4'hf == index ? tag_0_15 : _GEN_14; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_1029 = {{10'd0}, tag}; // @[i_cache.scala 36:24]
  wire  _GEN_17 = 4'h1 == index ? valid_0_1 : valid_0_0; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_18 = 4'h2 == index ? valid_0_2 : _GEN_17; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_19 = 4'h3 == index ? valid_0_3 : _GEN_18; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_20 = 4'h4 == index ? valid_0_4 : _GEN_19; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_21 = 4'h5 == index ? valid_0_5 : _GEN_20; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_22 = 4'h6 == index ? valid_0_6 : _GEN_21; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_23 = 4'h7 == index ? valid_0_7 : _GEN_22; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_24 = 4'h8 == index ? valid_0_8 : _GEN_23; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_25 = 4'h9 == index ? valid_0_9 : _GEN_24; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_26 = 4'ha == index ? valid_0_10 : _GEN_25; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_27 = 4'hb == index ? valid_0_11 : _GEN_26; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_28 = 4'hc == index ? valid_0_12 : _GEN_27; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_29 = 4'hd == index ? valid_0_13 : _GEN_28; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_30 = 4'he == index ? valid_0_14 : _GEN_29; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_31 = 4'hf == index ? valid_0_15 : _GEN_30; // @[i_cache.scala 36:{50,50}]
  wire  _T_2 = _GEN_15 == _GEN_1029 & _GEN_31; // @[i_cache.scala 36:33]
  wire [31:0] _GEN_34 = 4'h1 == index ? tag_1_1 : tag_1_0; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_35 = 4'h2 == index ? tag_1_2 : _GEN_34; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_36 = 4'h3 == index ? tag_1_3 : _GEN_35; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_37 = 4'h4 == index ? tag_1_4 : _GEN_36; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_38 = 4'h5 == index ? tag_1_5 : _GEN_37; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_39 = 4'h6 == index ? tag_1_6 : _GEN_38; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_40 = 4'h7 == index ? tag_1_7 : _GEN_39; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_41 = 4'h8 == index ? tag_1_8 : _GEN_40; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_42 = 4'h9 == index ? tag_1_9 : _GEN_41; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_43 = 4'ha == index ? tag_1_10 : _GEN_42; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_44 = 4'hb == index ? tag_1_11 : _GEN_43; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_45 = 4'hc == index ? tag_1_12 : _GEN_44; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_46 = 4'hd == index ? tag_1_13 : _GEN_45; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_47 = 4'he == index ? tag_1_14 : _GEN_46; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_48 = 4'hf == index ? tag_1_15 : _GEN_47; // @[i_cache.scala 41:{24,24}]
  wire  _GEN_50 = 4'h1 == index ? valid_1_1 : valid_1_0; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_51 = 4'h2 == index ? valid_1_2 : _GEN_50; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_52 = 4'h3 == index ? valid_1_3 : _GEN_51; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_53 = 4'h4 == index ? valid_1_4 : _GEN_52; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_54 = 4'h5 == index ? valid_1_5 : _GEN_53; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_55 = 4'h6 == index ? valid_1_6 : _GEN_54; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_56 = 4'h7 == index ? valid_1_7 : _GEN_55; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_57 = 4'h8 == index ? valid_1_8 : _GEN_56; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_58 = 4'h9 == index ? valid_1_9 : _GEN_57; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_59 = 4'ha == index ? valid_1_10 : _GEN_58; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_60 = 4'hb == index ? valid_1_11 : _GEN_59; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_61 = 4'hc == index ? valid_1_12 : _GEN_60; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_62 = 4'hd == index ? valid_1_13 : _GEN_61; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_63 = 4'he == index ? valid_1_14 : _GEN_62; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_64 = 4'hf == index ? valid_1_15 : _GEN_63; // @[i_cache.scala 41:{50,50}]
  wire  _T_5 = _GEN_48 == _GEN_1029 & _GEN_64; // @[i_cache.scala 41:33]
  reg [2:0] state; // @[i_cache.scala 55:24]
  wire [2:0] _GEN_69 = io_from_ifu_rready ? 3'h0 : state; // @[i_cache.scala 55:24 66:41 67:27]
  wire [2:0] _GEN_70 = way1_hit ? _GEN_69 : 3'h2; // @[i_cache.scala 70:33 75:23]
  wire [2:0] _GEN_71 = way1_hit ? receive_num : 3'h0; // @[i_cache.scala 28:30 70:33 77:29]
  wire [63:0] _GEN_74 = 3'h0 == receive_num ? io_from_axi_rdata : receive_data_0; // @[i_cache.scala 27:31 82:{43,43}]
  wire [63:0] _GEN_75 = 3'h1 == receive_num ? io_from_axi_rdata : receive_data_1; // @[i_cache.scala 27:31 82:{43,43}]
  wire [63:0] _GEN_76 = 3'h2 == receive_num ? io_from_axi_rdata : receive_data_2; // @[i_cache.scala 27:31 82:{43,43}]
  wire [63:0] _GEN_77 = 3'h3 == receive_num ? io_from_axi_rdata : receive_data_3; // @[i_cache.scala 27:31 82:{43,43}]
  wire [63:0] _GEN_78 = 3'h4 == receive_num ? io_from_axi_rdata : receive_data_4; // @[i_cache.scala 27:31 82:{43,43}]
  wire [63:0] _GEN_79 = 3'h5 == receive_num ? io_from_axi_rdata : receive_data_5; // @[i_cache.scala 27:31 82:{43,43}]
  wire [63:0] _GEN_80 = 3'h6 == receive_num ? io_from_axi_rdata : receive_data_6; // @[i_cache.scala 27:31 82:{43,43}]
  wire [63:0] _GEN_81 = 3'h7 == receive_num ? io_from_axi_rdata : receive_data_7; // @[i_cache.scala 27:31 82:{43,43}]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[i_cache.scala 83:44]
  wire [2:0] _GEN_82 = io_from_axi_rlast ? 3'h3 : state; // @[i_cache.scala 55:24 84:40 85:27]
  wire [63:0] _GEN_83 = io_from_axi_rvalid ? _GEN_74 : receive_data_0; // @[i_cache.scala 27:31 81:37]
  wire [63:0] _GEN_84 = io_from_axi_rvalid ? _GEN_75 : receive_data_1; // @[i_cache.scala 27:31 81:37]
  wire [63:0] _GEN_85 = io_from_axi_rvalid ? _GEN_76 : receive_data_2; // @[i_cache.scala 27:31 81:37]
  wire [63:0] _GEN_86 = io_from_axi_rvalid ? _GEN_77 : receive_data_3; // @[i_cache.scala 27:31 81:37]
  wire [63:0] _GEN_87 = io_from_axi_rvalid ? _GEN_78 : receive_data_4; // @[i_cache.scala 27:31 81:37]
  wire [63:0] _GEN_88 = io_from_axi_rvalid ? _GEN_79 : receive_data_5; // @[i_cache.scala 27:31 81:37]
  wire [63:0] _GEN_89 = io_from_axi_rvalid ? _GEN_80 : receive_data_6; // @[i_cache.scala 27:31 81:37]
  wire [63:0] _GEN_90 = io_from_axi_rvalid ? _GEN_81 : receive_data_7; // @[i_cache.scala 27:31 81:37]
  wire [2:0] _GEN_91 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[i_cache.scala 81:37 83:29 28:30]
  wire [2:0] _GEN_92 = io_from_axi_rvalid ? _GEN_82 : state; // @[i_cache.scala 55:24 81:37]
  wire [511:0] _ram_0_T = {receive_data_7,receive_data_6,receive_data_5,receive_data_4,receive_data_3,receive_data_2,
    receive_data_1,receive_data_0}; // @[Cat.scala 31:58]
  wire [511:0] _GEN_93 = 4'h0 == index ? _ram_0_T : ram_0_0; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_94 = 4'h1 == index ? _ram_0_T : ram_0_1; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_95 = 4'h2 == index ? _ram_0_T : ram_0_2; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_96 = 4'h3 == index ? _ram_0_T : ram_0_3; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_97 = 4'h4 == index ? _ram_0_T : ram_0_4; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_98 = 4'h5 == index ? _ram_0_T : ram_0_5; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_99 = 4'h6 == index ? _ram_0_T : ram_0_6; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_100 = 4'h7 == index ? _ram_0_T : ram_0_7; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_101 = 4'h8 == index ? _ram_0_T : ram_0_8; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_102 = 4'h9 == index ? _ram_0_T : ram_0_9; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_103 = 4'ha == index ? _ram_0_T : ram_0_10; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_104 = 4'hb == index ? _ram_0_T : ram_0_11; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_105 = 4'hc == index ? _ram_0_T : ram_0_12; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_106 = 4'hd == index ? _ram_0_T : ram_0_13; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_107 = 4'he == index ? _ram_0_T : ram_0_14; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_108 = 4'hf == index ? _ram_0_T : ram_0_15; // @[i_cache.scala 17:24 92:{30,30}]
  wire [31:0] _GEN_109 = 4'h0 == index ? _GEN_1029 : tag_0_0; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_110 = 4'h1 == index ? _GEN_1029 : tag_0_1; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_111 = 4'h2 == index ? _GEN_1029 : tag_0_2; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_112 = 4'h3 == index ? _GEN_1029 : tag_0_3; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_113 = 4'h4 == index ? _GEN_1029 : tag_0_4; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_114 = 4'h5 == index ? _GEN_1029 : tag_0_5; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_115 = 4'h6 == index ? _GEN_1029 : tag_0_6; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_116 = 4'h7 == index ? _GEN_1029 : tag_0_7; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_117 = 4'h8 == index ? _GEN_1029 : tag_0_8; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_118 = 4'h9 == index ? _GEN_1029 : tag_0_9; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_119 = 4'ha == index ? _GEN_1029 : tag_0_10; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_120 = 4'hb == index ? _GEN_1029 : tag_0_11; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_121 = 4'hc == index ? _GEN_1029 : tag_0_12; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_122 = 4'hd == index ? _GEN_1029 : tag_0_13; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_123 = 4'he == index ? _GEN_1029 : tag_0_14; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_124 = 4'hf == index ? _GEN_1029 : tag_0_15; // @[i_cache.scala 19:24 93:{30,30}]
  wire  _GEN_1033 = 4'h0 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_125 = 4'h0 == index | valid_0_0; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1035 = 4'h1 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_126 = 4'h1 == index | valid_0_1; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1040 = 4'h2 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_127 = 4'h2 == index | valid_0_2; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1045 = 4'h3 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_128 = 4'h3 == index | valid_0_3; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1049 = 4'h4 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_129 = 4'h4 == index | valid_0_4; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1051 = 4'h5 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_130 = 4'h5 == index | valid_0_5; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1052 = 4'h6 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_131 = 4'h6 == index | valid_0_6; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1053 = 4'h7 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_132 = 4'h7 == index | valid_0_7; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1054 = 4'h8 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_133 = 4'h8 == index | valid_0_8; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1055 = 4'h9 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_134 = 4'h9 == index | valid_0_9; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1056 = 4'ha == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_135 = 4'ha == index | valid_0_10; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1057 = 4'hb == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_136 = 4'hb == index | valid_0_11; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1058 = 4'hc == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_137 = 4'hc == index | valid_0_12; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1059 = 4'hd == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_138 = 4'hd == index | valid_0_13; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1060 = 4'he == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_139 = 4'he == index | valid_0_14; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1061 = 4'hf == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_140 = 4'hf == index | valid_0_15; // @[i_cache.scala 21:26 94:{32,32}]
  wire [511:0] _GEN_141 = 4'h0 == index ? _ram_0_T : ram_1_0; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_142 = 4'h1 == index ? _ram_0_T : ram_1_1; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_143 = 4'h2 == index ? _ram_0_T : ram_1_2; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_144 = 4'h3 == index ? _ram_0_T : ram_1_3; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_145 = 4'h4 == index ? _ram_0_T : ram_1_4; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_146 = 4'h5 == index ? _ram_0_T : ram_1_5; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_147 = 4'h6 == index ? _ram_0_T : ram_1_6; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_148 = 4'h7 == index ? _ram_0_T : ram_1_7; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_149 = 4'h8 == index ? _ram_0_T : ram_1_8; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_150 = 4'h9 == index ? _ram_0_T : ram_1_9; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_151 = 4'ha == index ? _ram_0_T : ram_1_10; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_152 = 4'hb == index ? _ram_0_T : ram_1_11; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_153 = 4'hc == index ? _ram_0_T : ram_1_12; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_154 = 4'hd == index ? _ram_0_T : ram_1_13; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_155 = 4'he == index ? _ram_0_T : ram_1_14; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_156 = 4'hf == index ? _ram_0_T : ram_1_15; // @[i_cache.scala 18:24 97:{30,30}]
  wire [31:0] _GEN_157 = 4'h0 == index ? _GEN_1029 : tag_1_0; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_158 = 4'h1 == index ? _GEN_1029 : tag_1_1; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_159 = 4'h2 == index ? _GEN_1029 : tag_1_2; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_160 = 4'h3 == index ? _GEN_1029 : tag_1_3; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_161 = 4'h4 == index ? _GEN_1029 : tag_1_4; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_162 = 4'h5 == index ? _GEN_1029 : tag_1_5; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_163 = 4'h6 == index ? _GEN_1029 : tag_1_6; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_164 = 4'h7 == index ? _GEN_1029 : tag_1_7; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_165 = 4'h8 == index ? _GEN_1029 : tag_1_8; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_166 = 4'h9 == index ? _GEN_1029 : tag_1_9; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_167 = 4'ha == index ? _GEN_1029 : tag_1_10; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_168 = 4'hb == index ? _GEN_1029 : tag_1_11; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_169 = 4'hc == index ? _GEN_1029 : tag_1_12; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_170 = 4'hd == index ? _GEN_1029 : tag_1_13; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_171 = 4'he == index ? _GEN_1029 : tag_1_14; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_172 = 4'hf == index ? _GEN_1029 : tag_1_15; // @[i_cache.scala 20:24 98:{30,30}]
  wire  _GEN_173 = _GEN_1033 | valid_1_0; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_174 = _GEN_1035 | valid_1_1; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_175 = _GEN_1040 | valid_1_2; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_176 = _GEN_1045 | valid_1_3; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_177 = _GEN_1049 | valid_1_4; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_178 = _GEN_1051 | valid_1_5; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_179 = _GEN_1052 | valid_1_6; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_180 = _GEN_1053 | valid_1_7; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_181 = _GEN_1054 | valid_1_8; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_182 = _GEN_1055 | valid_1_9; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_183 = _GEN_1056 | valid_1_10; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_184 = _GEN_1057 | valid_1_11; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_185 = _GEN_1058 | valid_1_12; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_186 = _GEN_1059 | valid_1_13; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_187 = _GEN_1060 | valid_1_14; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_188 = _GEN_1061 | valid_1_15; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _T_14 = ~quene; // @[i_cache.scala 102:27]
  wire [511:0] _GEN_285 = ~quene ? _GEN_93 : ram_0_0; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_286 = ~quene ? _GEN_94 : ram_0_1; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_287 = ~quene ? _GEN_95 : ram_0_2; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_288 = ~quene ? _GEN_96 : ram_0_3; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_289 = ~quene ? _GEN_97 : ram_0_4; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_290 = ~quene ? _GEN_98 : ram_0_5; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_291 = ~quene ? _GEN_99 : ram_0_6; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_292 = ~quene ? _GEN_100 : ram_0_7; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_293 = ~quene ? _GEN_101 : ram_0_8; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_294 = ~quene ? _GEN_102 : ram_0_9; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_295 = ~quene ? _GEN_103 : ram_0_10; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_296 = ~quene ? _GEN_104 : ram_0_11; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_297 = ~quene ? _GEN_105 : ram_0_12; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_298 = ~quene ? _GEN_106 : ram_0_13; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_299 = ~quene ? _GEN_107 : ram_0_14; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_300 = ~quene ? _GEN_108 : ram_0_15; // @[i_cache.scala 102:34 17:24]
  wire [31:0] _GEN_301 = ~quene ? _GEN_109 : tag_0_0; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_302 = ~quene ? _GEN_110 : tag_0_1; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_303 = ~quene ? _GEN_111 : tag_0_2; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_304 = ~quene ? _GEN_112 : tag_0_3; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_305 = ~quene ? _GEN_113 : tag_0_4; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_306 = ~quene ? _GEN_114 : tag_0_5; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_307 = ~quene ? _GEN_115 : tag_0_6; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_308 = ~quene ? _GEN_116 : tag_0_7; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_309 = ~quene ? _GEN_117 : tag_0_8; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_310 = ~quene ? _GEN_118 : tag_0_9; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_311 = ~quene ? _GEN_119 : tag_0_10; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_312 = ~quene ? _GEN_120 : tag_0_11; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_313 = ~quene ? _GEN_121 : tag_0_12; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_314 = ~quene ? _GEN_122 : tag_0_13; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_315 = ~quene ? _GEN_123 : tag_0_14; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_316 = ~quene ? _GEN_124 : tag_0_15; // @[i_cache.scala 102:34 19:24]
  wire  _GEN_317 = ~quene ? _GEN_125 : valid_0_0; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_318 = ~quene ? _GEN_126 : valid_0_1; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_319 = ~quene ? _GEN_127 : valid_0_2; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_320 = ~quene ? _GEN_128 : valid_0_3; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_321 = ~quene ? _GEN_129 : valid_0_4; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_322 = ~quene ? _GEN_130 : valid_0_5; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_323 = ~quene ? _GEN_131 : valid_0_6; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_324 = ~quene ? _GEN_132 : valid_0_7; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_325 = ~quene ? _GEN_133 : valid_0_8; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_326 = ~quene ? _GEN_134 : valid_0_9; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_327 = ~quene ? _GEN_135 : valid_0_10; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_328 = ~quene ? _GEN_136 : valid_0_11; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_329 = ~quene ? _GEN_137 : valid_0_12; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_330 = ~quene ? _GEN_138 : valid_0_13; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_331 = ~quene ? _GEN_139 : valid_0_14; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_332 = ~quene ? _GEN_140 : valid_0_15; // @[i_cache.scala 102:34 21:26]
  wire [511:0] _GEN_334 = ~quene ? ram_1_0 : _GEN_141; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_335 = ~quene ? ram_1_1 : _GEN_142; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_336 = ~quene ? ram_1_2 : _GEN_143; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_337 = ~quene ? ram_1_3 : _GEN_144; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_338 = ~quene ? ram_1_4 : _GEN_145; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_339 = ~quene ? ram_1_5 : _GEN_146; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_340 = ~quene ? ram_1_6 : _GEN_147; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_341 = ~quene ? ram_1_7 : _GEN_148; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_342 = ~quene ? ram_1_8 : _GEN_149; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_343 = ~quene ? ram_1_9 : _GEN_150; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_344 = ~quene ? ram_1_10 : _GEN_151; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_345 = ~quene ? ram_1_11 : _GEN_152; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_346 = ~quene ? ram_1_12 : _GEN_153; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_347 = ~quene ? ram_1_13 : _GEN_154; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_348 = ~quene ? ram_1_14 : _GEN_155; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_349 = ~quene ? ram_1_15 : _GEN_156; // @[i_cache.scala 102:34 18:24]
  wire [31:0] _GEN_350 = ~quene ? tag_1_0 : _GEN_157; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_351 = ~quene ? tag_1_1 : _GEN_158; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_352 = ~quene ? tag_1_2 : _GEN_159; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_353 = ~quene ? tag_1_3 : _GEN_160; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_354 = ~quene ? tag_1_4 : _GEN_161; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_355 = ~quene ? tag_1_5 : _GEN_162; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_356 = ~quene ? tag_1_6 : _GEN_163; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_357 = ~quene ? tag_1_7 : _GEN_164; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_358 = ~quene ? tag_1_8 : _GEN_165; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_359 = ~quene ? tag_1_9 : _GEN_166; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_360 = ~quene ? tag_1_10 : _GEN_167; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_361 = ~quene ? tag_1_11 : _GEN_168; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_362 = ~quene ? tag_1_12 : _GEN_169; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_363 = ~quene ? tag_1_13 : _GEN_170; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_364 = ~quene ? tag_1_14 : _GEN_171; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_365 = ~quene ? tag_1_15 : _GEN_172; // @[i_cache.scala 102:34 20:24]
  wire  _GEN_366 = ~quene ? valid_1_0 : _GEN_173; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_367 = ~quene ? valid_1_1 : _GEN_174; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_368 = ~quene ? valid_1_2 : _GEN_175; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_369 = ~quene ? valid_1_3 : _GEN_176; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_370 = ~quene ? valid_1_4 : _GEN_177; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_371 = ~quene ? valid_1_5 : _GEN_178; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_372 = ~quene ? valid_1_6 : _GEN_179; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_373 = ~quene ? valid_1_7 : _GEN_180; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_374 = ~quene ? valid_1_8 : _GEN_181; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_375 = ~quene ? valid_1_9 : _GEN_182; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_376 = ~quene ? valid_1_10 : _GEN_183; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_377 = ~quene ? valid_1_11 : _GEN_184; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_378 = ~quene ? valid_1_12 : _GEN_185; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_379 = ~quene ? valid_1_13 : _GEN_186; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_380 = ~quene ? valid_1_14 : _GEN_187; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_381 = ~quene ? valid_1_15 : _GEN_188; // @[i_cache.scala 102:34 22:26]
  wire [511:0] _GEN_382 = unuse_way == 2'h2 ? _GEN_141 : _GEN_334; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_383 = unuse_way == 2'h2 ? _GEN_142 : _GEN_335; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_384 = unuse_way == 2'h2 ? _GEN_143 : _GEN_336; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_385 = unuse_way == 2'h2 ? _GEN_144 : _GEN_337; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_386 = unuse_way == 2'h2 ? _GEN_145 : _GEN_338; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_387 = unuse_way == 2'h2 ? _GEN_146 : _GEN_339; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_388 = unuse_way == 2'h2 ? _GEN_147 : _GEN_340; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_389 = unuse_way == 2'h2 ? _GEN_148 : _GEN_341; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_390 = unuse_way == 2'h2 ? _GEN_149 : _GEN_342; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_391 = unuse_way == 2'h2 ? _GEN_150 : _GEN_343; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_392 = unuse_way == 2'h2 ? _GEN_151 : _GEN_344; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_393 = unuse_way == 2'h2 ? _GEN_152 : _GEN_345; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_394 = unuse_way == 2'h2 ? _GEN_153 : _GEN_346; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_395 = unuse_way == 2'h2 ? _GEN_154 : _GEN_347; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_396 = unuse_way == 2'h2 ? _GEN_155 : _GEN_348; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_397 = unuse_way == 2'h2 ? _GEN_156 : _GEN_349; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_398 = unuse_way == 2'h2 ? _GEN_157 : _GEN_350; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_399 = unuse_way == 2'h2 ? _GEN_158 : _GEN_351; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_400 = unuse_way == 2'h2 ? _GEN_159 : _GEN_352; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_401 = unuse_way == 2'h2 ? _GEN_160 : _GEN_353; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_402 = unuse_way == 2'h2 ? _GEN_161 : _GEN_354; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_403 = unuse_way == 2'h2 ? _GEN_162 : _GEN_355; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_404 = unuse_way == 2'h2 ? _GEN_163 : _GEN_356; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_405 = unuse_way == 2'h2 ? _GEN_164 : _GEN_357; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_406 = unuse_way == 2'h2 ? _GEN_165 : _GEN_358; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_407 = unuse_way == 2'h2 ? _GEN_166 : _GEN_359; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_408 = unuse_way == 2'h2 ? _GEN_167 : _GEN_360; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_409 = unuse_way == 2'h2 ? _GEN_168 : _GEN_361; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_410 = unuse_way == 2'h2 ? _GEN_169 : _GEN_362; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_411 = unuse_way == 2'h2 ? _GEN_170 : _GEN_363; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_412 = unuse_way == 2'h2 ? _GEN_171 : _GEN_364; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_413 = unuse_way == 2'h2 ? _GEN_172 : _GEN_365; // @[i_cache.scala 96:40]
  wire  _GEN_414 = unuse_way == 2'h2 ? _GEN_173 : _GEN_366; // @[i_cache.scala 96:40]
  wire  _GEN_415 = unuse_way == 2'h2 ? _GEN_174 : _GEN_367; // @[i_cache.scala 96:40]
  wire  _GEN_416 = unuse_way == 2'h2 ? _GEN_175 : _GEN_368; // @[i_cache.scala 96:40]
  wire  _GEN_417 = unuse_way == 2'h2 ? _GEN_176 : _GEN_369; // @[i_cache.scala 96:40]
  wire  _GEN_418 = unuse_way == 2'h2 ? _GEN_177 : _GEN_370; // @[i_cache.scala 96:40]
  wire  _GEN_419 = unuse_way == 2'h2 ? _GEN_178 : _GEN_371; // @[i_cache.scala 96:40]
  wire  _GEN_420 = unuse_way == 2'h2 ? _GEN_179 : _GEN_372; // @[i_cache.scala 96:40]
  wire  _GEN_421 = unuse_way == 2'h2 ? _GEN_180 : _GEN_373; // @[i_cache.scala 96:40]
  wire  _GEN_422 = unuse_way == 2'h2 ? _GEN_181 : _GEN_374; // @[i_cache.scala 96:40]
  wire  _GEN_423 = unuse_way == 2'h2 ? _GEN_182 : _GEN_375; // @[i_cache.scala 96:40]
  wire  _GEN_424 = unuse_way == 2'h2 ? _GEN_183 : _GEN_376; // @[i_cache.scala 96:40]
  wire  _GEN_425 = unuse_way == 2'h2 ? _GEN_184 : _GEN_377; // @[i_cache.scala 96:40]
  wire  _GEN_426 = unuse_way == 2'h2 ? _GEN_185 : _GEN_378; // @[i_cache.scala 96:40]
  wire  _GEN_427 = unuse_way == 2'h2 ? _GEN_186 : _GEN_379; // @[i_cache.scala 96:40]
  wire  _GEN_428 = unuse_way == 2'h2 ? _GEN_187 : _GEN_380; // @[i_cache.scala 96:40]
  wire  _GEN_429 = unuse_way == 2'h2 ? _GEN_188 : _GEN_381; // @[i_cache.scala 96:40]
  wire  _GEN_430 = unuse_way == 2'h2 ? 1'h0 : _T_14; // @[i_cache.scala 100:23 96:40]
  wire [511:0] _GEN_431 = unuse_way == 2'h2 ? ram_0_0 : _GEN_285; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_432 = unuse_way == 2'h2 ? ram_0_1 : _GEN_286; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_433 = unuse_way == 2'h2 ? ram_0_2 : _GEN_287; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_434 = unuse_way == 2'h2 ? ram_0_3 : _GEN_288; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_435 = unuse_way == 2'h2 ? ram_0_4 : _GEN_289; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_436 = unuse_way == 2'h2 ? ram_0_5 : _GEN_290; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_437 = unuse_way == 2'h2 ? ram_0_6 : _GEN_291; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_438 = unuse_way == 2'h2 ? ram_0_7 : _GEN_292; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_439 = unuse_way == 2'h2 ? ram_0_8 : _GEN_293; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_440 = unuse_way == 2'h2 ? ram_0_9 : _GEN_294; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_441 = unuse_way == 2'h2 ? ram_0_10 : _GEN_295; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_442 = unuse_way == 2'h2 ? ram_0_11 : _GEN_296; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_443 = unuse_way == 2'h2 ? ram_0_12 : _GEN_297; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_444 = unuse_way == 2'h2 ? ram_0_13 : _GEN_298; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_445 = unuse_way == 2'h2 ? ram_0_14 : _GEN_299; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_446 = unuse_way == 2'h2 ? ram_0_15 : _GEN_300; // @[i_cache.scala 17:24 96:40]
  wire [31:0] _GEN_447 = unuse_way == 2'h2 ? tag_0_0 : _GEN_301; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_448 = unuse_way == 2'h2 ? tag_0_1 : _GEN_302; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_449 = unuse_way == 2'h2 ? tag_0_2 : _GEN_303; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_450 = unuse_way == 2'h2 ? tag_0_3 : _GEN_304; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_451 = unuse_way == 2'h2 ? tag_0_4 : _GEN_305; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_452 = unuse_way == 2'h2 ? tag_0_5 : _GEN_306; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_453 = unuse_way == 2'h2 ? tag_0_6 : _GEN_307; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_454 = unuse_way == 2'h2 ? tag_0_7 : _GEN_308; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_455 = unuse_way == 2'h2 ? tag_0_8 : _GEN_309; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_456 = unuse_way == 2'h2 ? tag_0_9 : _GEN_310; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_457 = unuse_way == 2'h2 ? tag_0_10 : _GEN_311; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_458 = unuse_way == 2'h2 ? tag_0_11 : _GEN_312; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_459 = unuse_way == 2'h2 ? tag_0_12 : _GEN_313; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_460 = unuse_way == 2'h2 ? tag_0_13 : _GEN_314; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_461 = unuse_way == 2'h2 ? tag_0_14 : _GEN_315; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_462 = unuse_way == 2'h2 ? tag_0_15 : _GEN_316; // @[i_cache.scala 19:24 96:40]
  wire  _GEN_463 = unuse_way == 2'h2 ? valid_0_0 : _GEN_317; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_464 = unuse_way == 2'h2 ? valid_0_1 : _GEN_318; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_465 = unuse_way == 2'h2 ? valid_0_2 : _GEN_319; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_466 = unuse_way == 2'h2 ? valid_0_3 : _GEN_320; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_467 = unuse_way == 2'h2 ? valid_0_4 : _GEN_321; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_468 = unuse_way == 2'h2 ? valid_0_5 : _GEN_322; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_469 = unuse_way == 2'h2 ? valid_0_6 : _GEN_323; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_470 = unuse_way == 2'h2 ? valid_0_7 : _GEN_324; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_471 = unuse_way == 2'h2 ? valid_0_8 : _GEN_325; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_472 = unuse_way == 2'h2 ? valid_0_9 : _GEN_326; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_473 = unuse_way == 2'h2 ? valid_0_10 : _GEN_327; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_474 = unuse_way == 2'h2 ? valid_0_11 : _GEN_328; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_475 = unuse_way == 2'h2 ? valid_0_12 : _GEN_329; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_476 = unuse_way == 2'h2 ? valid_0_13 : _GEN_330; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_477 = unuse_way == 2'h2 ? valid_0_14 : _GEN_331; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_478 = unuse_way == 2'h2 ? valid_0_15 : _GEN_332; // @[i_cache.scala 21:26 96:40]
  wire [511:0] _GEN_479 = unuse_way == 2'h1 ? _GEN_93 : _GEN_431; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_480 = unuse_way == 2'h1 ? _GEN_94 : _GEN_432; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_481 = unuse_way == 2'h1 ? _GEN_95 : _GEN_433; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_482 = unuse_way == 2'h1 ? _GEN_96 : _GEN_434; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_483 = unuse_way == 2'h1 ? _GEN_97 : _GEN_435; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_484 = unuse_way == 2'h1 ? _GEN_98 : _GEN_436; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_485 = unuse_way == 2'h1 ? _GEN_99 : _GEN_437; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_486 = unuse_way == 2'h1 ? _GEN_100 : _GEN_438; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_487 = unuse_way == 2'h1 ? _GEN_101 : _GEN_439; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_488 = unuse_way == 2'h1 ? _GEN_102 : _GEN_440; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_489 = unuse_way == 2'h1 ? _GEN_103 : _GEN_441; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_490 = unuse_way == 2'h1 ? _GEN_104 : _GEN_442; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_491 = unuse_way == 2'h1 ? _GEN_105 : _GEN_443; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_492 = unuse_way == 2'h1 ? _GEN_106 : _GEN_444; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_493 = unuse_way == 2'h1 ? _GEN_107 : _GEN_445; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_494 = unuse_way == 2'h1 ? _GEN_108 : _GEN_446; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_495 = unuse_way == 2'h1 ? _GEN_109 : _GEN_447; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_496 = unuse_way == 2'h1 ? _GEN_110 : _GEN_448; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_497 = unuse_way == 2'h1 ? _GEN_111 : _GEN_449; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_498 = unuse_way == 2'h1 ? _GEN_112 : _GEN_450; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_499 = unuse_way == 2'h1 ? _GEN_113 : _GEN_451; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_500 = unuse_way == 2'h1 ? _GEN_114 : _GEN_452; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_501 = unuse_way == 2'h1 ? _GEN_115 : _GEN_453; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_502 = unuse_way == 2'h1 ? _GEN_116 : _GEN_454; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_503 = unuse_way == 2'h1 ? _GEN_117 : _GEN_455; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_504 = unuse_way == 2'h1 ? _GEN_118 : _GEN_456; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_505 = unuse_way == 2'h1 ? _GEN_119 : _GEN_457; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_506 = unuse_way == 2'h1 ? _GEN_120 : _GEN_458; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_507 = unuse_way == 2'h1 ? _GEN_121 : _GEN_459; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_508 = unuse_way == 2'h1 ? _GEN_122 : _GEN_460; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_509 = unuse_way == 2'h1 ? _GEN_123 : _GEN_461; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_510 = unuse_way == 2'h1 ? _GEN_124 : _GEN_462; // @[i_cache.scala 91:34]
  wire  _GEN_511 = unuse_way == 2'h1 ? _GEN_125 : _GEN_463; // @[i_cache.scala 91:34]
  wire  _GEN_512 = unuse_way == 2'h1 ? _GEN_126 : _GEN_464; // @[i_cache.scala 91:34]
  wire  _GEN_513 = unuse_way == 2'h1 ? _GEN_127 : _GEN_465; // @[i_cache.scala 91:34]
  wire  _GEN_514 = unuse_way == 2'h1 ? _GEN_128 : _GEN_466; // @[i_cache.scala 91:34]
  wire  _GEN_515 = unuse_way == 2'h1 ? _GEN_129 : _GEN_467; // @[i_cache.scala 91:34]
  wire  _GEN_516 = unuse_way == 2'h1 ? _GEN_130 : _GEN_468; // @[i_cache.scala 91:34]
  wire  _GEN_517 = unuse_way == 2'h1 ? _GEN_131 : _GEN_469; // @[i_cache.scala 91:34]
  wire  _GEN_518 = unuse_way == 2'h1 ? _GEN_132 : _GEN_470; // @[i_cache.scala 91:34]
  wire  _GEN_519 = unuse_way == 2'h1 ? _GEN_133 : _GEN_471; // @[i_cache.scala 91:34]
  wire  _GEN_520 = unuse_way == 2'h1 ? _GEN_134 : _GEN_472; // @[i_cache.scala 91:34]
  wire  _GEN_521 = unuse_way == 2'h1 ? _GEN_135 : _GEN_473; // @[i_cache.scala 91:34]
  wire  _GEN_522 = unuse_way == 2'h1 ? _GEN_136 : _GEN_474; // @[i_cache.scala 91:34]
  wire  _GEN_523 = unuse_way == 2'h1 ? _GEN_137 : _GEN_475; // @[i_cache.scala 91:34]
  wire  _GEN_524 = unuse_way == 2'h1 ? _GEN_138 : _GEN_476; // @[i_cache.scala 91:34]
  wire  _GEN_525 = unuse_way == 2'h1 ? _GEN_139 : _GEN_477; // @[i_cache.scala 91:34]
  wire  _GEN_526 = unuse_way == 2'h1 ? _GEN_140 : _GEN_478; // @[i_cache.scala 91:34]
  wire  _GEN_527 = unuse_way == 2'h1 | _GEN_430; // @[i_cache.scala 91:34 95:23]
  wire [511:0] _GEN_528 = unuse_way == 2'h1 ? ram_1_0 : _GEN_382; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_529 = unuse_way == 2'h1 ? ram_1_1 : _GEN_383; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_530 = unuse_way == 2'h1 ? ram_1_2 : _GEN_384; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_531 = unuse_way == 2'h1 ? ram_1_3 : _GEN_385; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_532 = unuse_way == 2'h1 ? ram_1_4 : _GEN_386; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_533 = unuse_way == 2'h1 ? ram_1_5 : _GEN_387; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_534 = unuse_way == 2'h1 ? ram_1_6 : _GEN_388; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_535 = unuse_way == 2'h1 ? ram_1_7 : _GEN_389; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_536 = unuse_way == 2'h1 ? ram_1_8 : _GEN_390; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_537 = unuse_way == 2'h1 ? ram_1_9 : _GEN_391; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_538 = unuse_way == 2'h1 ? ram_1_10 : _GEN_392; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_539 = unuse_way == 2'h1 ? ram_1_11 : _GEN_393; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_540 = unuse_way == 2'h1 ? ram_1_12 : _GEN_394; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_541 = unuse_way == 2'h1 ? ram_1_13 : _GEN_395; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_542 = unuse_way == 2'h1 ? ram_1_14 : _GEN_396; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_543 = unuse_way == 2'h1 ? ram_1_15 : _GEN_397; // @[i_cache.scala 18:24 91:34]
  wire [31:0] _GEN_544 = unuse_way == 2'h1 ? tag_1_0 : _GEN_398; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_545 = unuse_way == 2'h1 ? tag_1_1 : _GEN_399; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_546 = unuse_way == 2'h1 ? tag_1_2 : _GEN_400; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_547 = unuse_way == 2'h1 ? tag_1_3 : _GEN_401; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_548 = unuse_way == 2'h1 ? tag_1_4 : _GEN_402; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_549 = unuse_way == 2'h1 ? tag_1_5 : _GEN_403; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_550 = unuse_way == 2'h1 ? tag_1_6 : _GEN_404; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_551 = unuse_way == 2'h1 ? tag_1_7 : _GEN_405; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_552 = unuse_way == 2'h1 ? tag_1_8 : _GEN_406; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_553 = unuse_way == 2'h1 ? tag_1_9 : _GEN_407; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_554 = unuse_way == 2'h1 ? tag_1_10 : _GEN_408; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_555 = unuse_way == 2'h1 ? tag_1_11 : _GEN_409; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_556 = unuse_way == 2'h1 ? tag_1_12 : _GEN_410; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_557 = unuse_way == 2'h1 ? tag_1_13 : _GEN_411; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_558 = unuse_way == 2'h1 ? tag_1_14 : _GEN_412; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_559 = unuse_way == 2'h1 ? tag_1_15 : _GEN_413; // @[i_cache.scala 20:24 91:34]
  wire  _GEN_560 = unuse_way == 2'h1 ? valid_1_0 : _GEN_414; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_561 = unuse_way == 2'h1 ? valid_1_1 : _GEN_415; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_562 = unuse_way == 2'h1 ? valid_1_2 : _GEN_416; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_563 = unuse_way == 2'h1 ? valid_1_3 : _GEN_417; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_564 = unuse_way == 2'h1 ? valid_1_4 : _GEN_418; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_565 = unuse_way == 2'h1 ? valid_1_5 : _GEN_419; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_566 = unuse_way == 2'h1 ? valid_1_6 : _GEN_420; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_567 = unuse_way == 2'h1 ? valid_1_7 : _GEN_421; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_568 = unuse_way == 2'h1 ? valid_1_8 : _GEN_422; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_569 = unuse_way == 2'h1 ? valid_1_9 : _GEN_423; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_570 = unuse_way == 2'h1 ? valid_1_10 : _GEN_424; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_571 = unuse_way == 2'h1 ? valid_1_11 : _GEN_425; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_572 = unuse_way == 2'h1 ? valid_1_12 : _GEN_426; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_573 = unuse_way == 2'h1 ? valid_1_13 : _GEN_427; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_574 = unuse_way == 2'h1 ? valid_1_14 : _GEN_428; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_575 = unuse_way == 2'h1 ? valid_1_15 : _GEN_429; // @[i_cache.scala 22:26 91:34]
  wire [2:0] _GEN_576 = 3'h4 == state ? 3'h1 : state; // @[i_cache.scala 57:18 116:19 55:24]
  wire [2:0] _GEN_577 = 3'h3 == state ? 3'h4 : _GEN_576; // @[i_cache.scala 57:18 90:19]
  wire [511:0] _GEN_578 = 3'h3 == state ? _GEN_479 : ram_0_0; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_579 = 3'h3 == state ? _GEN_480 : ram_0_1; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_580 = 3'h3 == state ? _GEN_481 : ram_0_2; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_581 = 3'h3 == state ? _GEN_482 : ram_0_3; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_582 = 3'h3 == state ? _GEN_483 : ram_0_4; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_583 = 3'h3 == state ? _GEN_484 : ram_0_5; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_584 = 3'h3 == state ? _GEN_485 : ram_0_6; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_585 = 3'h3 == state ? _GEN_486 : ram_0_7; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_586 = 3'h3 == state ? _GEN_487 : ram_0_8; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_587 = 3'h3 == state ? _GEN_488 : ram_0_9; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_588 = 3'h3 == state ? _GEN_489 : ram_0_10; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_589 = 3'h3 == state ? _GEN_490 : ram_0_11; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_590 = 3'h3 == state ? _GEN_491 : ram_0_12; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_591 = 3'h3 == state ? _GEN_492 : ram_0_13; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_592 = 3'h3 == state ? _GEN_493 : ram_0_14; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_593 = 3'h3 == state ? _GEN_494 : ram_0_15; // @[i_cache.scala 57:18 17:24]
  wire [31:0] _GEN_594 = 3'h3 == state ? _GEN_495 : tag_0_0; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_595 = 3'h3 == state ? _GEN_496 : tag_0_1; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_596 = 3'h3 == state ? _GEN_497 : tag_0_2; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_597 = 3'h3 == state ? _GEN_498 : tag_0_3; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_598 = 3'h3 == state ? _GEN_499 : tag_0_4; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_599 = 3'h3 == state ? _GEN_500 : tag_0_5; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_600 = 3'h3 == state ? _GEN_501 : tag_0_6; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_601 = 3'h3 == state ? _GEN_502 : tag_0_7; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_602 = 3'h3 == state ? _GEN_503 : tag_0_8; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_603 = 3'h3 == state ? _GEN_504 : tag_0_9; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_604 = 3'h3 == state ? _GEN_505 : tag_0_10; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_605 = 3'h3 == state ? _GEN_506 : tag_0_11; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_606 = 3'h3 == state ? _GEN_507 : tag_0_12; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_607 = 3'h3 == state ? _GEN_508 : tag_0_13; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_608 = 3'h3 == state ? _GEN_509 : tag_0_14; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_609 = 3'h3 == state ? _GEN_510 : tag_0_15; // @[i_cache.scala 57:18 19:24]
  wire  _GEN_610 = 3'h3 == state ? _GEN_511 : valid_0_0; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_611 = 3'h3 == state ? _GEN_512 : valid_0_1; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_612 = 3'h3 == state ? _GEN_513 : valid_0_2; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_613 = 3'h3 == state ? _GEN_514 : valid_0_3; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_614 = 3'h3 == state ? _GEN_515 : valid_0_4; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_615 = 3'h3 == state ? _GEN_516 : valid_0_5; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_616 = 3'h3 == state ? _GEN_517 : valid_0_6; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_617 = 3'h3 == state ? _GEN_518 : valid_0_7; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_618 = 3'h3 == state ? _GEN_519 : valid_0_8; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_619 = 3'h3 == state ? _GEN_520 : valid_0_9; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_620 = 3'h3 == state ? _GEN_521 : valid_0_10; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_621 = 3'h3 == state ? _GEN_522 : valid_0_11; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_622 = 3'h3 == state ? _GEN_523 : valid_0_12; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_623 = 3'h3 == state ? _GEN_524 : valid_0_13; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_624 = 3'h3 == state ? _GEN_525 : valid_0_14; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_625 = 3'h3 == state ? _GEN_526 : valid_0_15; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_626 = 3'h3 == state ? _GEN_527 : quene; // @[i_cache.scala 57:18 29:24]
  wire [511:0] _GEN_627 = 3'h3 == state ? _GEN_528 : ram_1_0; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_628 = 3'h3 == state ? _GEN_529 : ram_1_1; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_629 = 3'h3 == state ? _GEN_530 : ram_1_2; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_630 = 3'h3 == state ? _GEN_531 : ram_1_3; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_631 = 3'h3 == state ? _GEN_532 : ram_1_4; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_632 = 3'h3 == state ? _GEN_533 : ram_1_5; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_633 = 3'h3 == state ? _GEN_534 : ram_1_6; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_634 = 3'h3 == state ? _GEN_535 : ram_1_7; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_635 = 3'h3 == state ? _GEN_536 : ram_1_8; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_636 = 3'h3 == state ? _GEN_537 : ram_1_9; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_637 = 3'h3 == state ? _GEN_538 : ram_1_10; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_638 = 3'h3 == state ? _GEN_539 : ram_1_11; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_639 = 3'h3 == state ? _GEN_540 : ram_1_12; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_640 = 3'h3 == state ? _GEN_541 : ram_1_13; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_641 = 3'h3 == state ? _GEN_542 : ram_1_14; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_642 = 3'h3 == state ? _GEN_543 : ram_1_15; // @[i_cache.scala 57:18 18:24]
  wire [31:0] _GEN_643 = 3'h3 == state ? _GEN_544 : tag_1_0; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_644 = 3'h3 == state ? _GEN_545 : tag_1_1; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_645 = 3'h3 == state ? _GEN_546 : tag_1_2; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_646 = 3'h3 == state ? _GEN_547 : tag_1_3; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_647 = 3'h3 == state ? _GEN_548 : tag_1_4; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_648 = 3'h3 == state ? _GEN_549 : tag_1_5; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_649 = 3'h3 == state ? _GEN_550 : tag_1_6; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_650 = 3'h3 == state ? _GEN_551 : tag_1_7; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_651 = 3'h3 == state ? _GEN_552 : tag_1_8; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_652 = 3'h3 == state ? _GEN_553 : tag_1_9; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_653 = 3'h3 == state ? _GEN_554 : tag_1_10; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_654 = 3'h3 == state ? _GEN_555 : tag_1_11; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_655 = 3'h3 == state ? _GEN_556 : tag_1_12; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_656 = 3'h3 == state ? _GEN_557 : tag_1_13; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_657 = 3'h3 == state ? _GEN_558 : tag_1_14; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_658 = 3'h3 == state ? _GEN_559 : tag_1_15; // @[i_cache.scala 57:18 20:24]
  wire  _GEN_659 = 3'h3 == state ? _GEN_560 : valid_1_0; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_660 = 3'h3 == state ? _GEN_561 : valid_1_1; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_661 = 3'h3 == state ? _GEN_562 : valid_1_2; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_662 = 3'h3 == state ? _GEN_563 : valid_1_3; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_663 = 3'h3 == state ? _GEN_564 : valid_1_4; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_664 = 3'h3 == state ? _GEN_565 : valid_1_5; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_665 = 3'h3 == state ? _GEN_566 : valid_1_6; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_666 = 3'h3 == state ? _GEN_567 : valid_1_7; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_667 = 3'h3 == state ? _GEN_568 : valid_1_8; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_668 = 3'h3 == state ? _GEN_569 : valid_1_9; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_669 = 3'h3 == state ? _GEN_570 : valid_1_10; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_670 = 3'h3 == state ? _GEN_571 : valid_1_11; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_671 = 3'h3 == state ? _GEN_572 : valid_1_12; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_672 = 3'h3 == state ? _GEN_573 : valid_1_13; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_673 = 3'h3 == state ? _GEN_574 : valid_1_14; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_674 = 3'h3 == state ? _GEN_575 : valid_1_15; // @[i_cache.scala 57:18 22:26]
  wire [511:0] _GEN_997 = 4'h1 == index ? ram_0_1 : ram_0_0; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_998 = 4'h2 == index ? ram_0_2 : _GEN_997; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_999 = 4'h3 == index ? ram_0_3 : _GEN_998; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1000 = 4'h4 == index ? ram_0_4 : _GEN_999; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1001 = 4'h5 == index ? ram_0_5 : _GEN_1000; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1002 = 4'h6 == index ? ram_0_6 : _GEN_1001; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1003 = 4'h7 == index ? ram_0_7 : _GEN_1002; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1004 = 4'h8 == index ? ram_0_8 : _GEN_1003; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1005 = 4'h9 == index ? ram_0_9 : _GEN_1004; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1006 = 4'ha == index ? ram_0_10 : _GEN_1005; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1007 = 4'hb == index ? ram_0_11 : _GEN_1006; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1008 = 4'hc == index ? ram_0_12 : _GEN_1007; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1009 = 4'hd == index ? ram_0_13 : _GEN_1008; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1010 = 4'he == index ? ram_0_14 : _GEN_1009; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1011 = 4'hf == index ? ram_0_15 : _GEN_1010; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _io_to_ifu_rdata_T = _GEN_1011 >> shift_bit; // @[i_cache.scala 161:49]
  wire [511:0] _GEN_1013 = 4'h1 == index ? ram_1_1 : ram_1_0; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1014 = 4'h2 == index ? ram_1_2 : _GEN_1013; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1015 = 4'h3 == index ? ram_1_3 : _GEN_1014; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1016 = 4'h4 == index ? ram_1_4 : _GEN_1015; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1017 = 4'h5 == index ? ram_1_5 : _GEN_1016; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1018 = 4'h6 == index ? ram_1_6 : _GEN_1017; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1019 = 4'h7 == index ? ram_1_7 : _GEN_1018; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1020 = 4'h8 == index ? ram_1_8 : _GEN_1019; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1021 = 4'h9 == index ? ram_1_9 : _GEN_1020; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1022 = 4'ha == index ? ram_1_10 : _GEN_1021; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1023 = 4'hb == index ? ram_1_11 : _GEN_1022; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1024 = 4'hc == index ? ram_1_12 : _GEN_1023; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1025 = 4'hd == index ? ram_1_13 : _GEN_1024; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1026 = 4'he == index ? ram_1_14 : _GEN_1025; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1027 = 4'hf == index ? ram_1_15 : _GEN_1026; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _io_to_ifu_rdata_T_1 = _GEN_1027 >> shift_bit; // @[i_cache.scala 170:49]
  wire [511:0] _GEN_1028 = way1_hit ? _io_to_ifu_rdata_T_1 : 512'h0; // @[i_cache.scala 169:33 170:33 178:33]
  wire [511:0] _GEN_1032 = way0_hit ? _io_to_ifu_rdata_T : _GEN_1028; // @[i_cache.scala 160:23 161:33]
  wire  _GEN_1034 = way0_hit | way1_hit; // @[i_cache.scala 160:23 163:34]
  wire  _T_17 = state == 3'h2; // @[i_cache.scala 186:21]
  wire [63:0] _GEN_1110 = {{32'd0}, io_from_ifu_araddr}; // @[i_cache.scala 195:49]
  wire [63:0] _io_to_axi_araddr_T = _GEN_1110 & 64'hffffffffffffffc0; // @[i_cache.scala 195:49]
  wire [63:0] _GEN_1038 = state == 3'h2 ? _io_to_axi_araddr_T : {{32'd0}, io_from_ifu_araddr}; // @[i_cache.scala 186:29 195:26 235:26]
  wire [2:0] _GEN_1039 = state == 3'h2 ? 3'h7 : 3'h0; // @[i_cache.scala 186:29 196:25 237:25]
  wire [63:0] _GEN_1043 = state == 3'h1 ? {{32'd0}, io_from_ifu_araddr} : _GEN_1038; // @[i_cache.scala 143:25 145:26]
  wire [2:0] _GEN_1044 = state == 3'h1 ? 3'h0 : _GEN_1039; // @[i_cache.scala 143:25 146:25]
  wire [511:0] _GEN_1048 = state == 3'h1 ? _GEN_1032 : 512'h0; // @[i_cache.scala 143:25]
  assign io_to_ifu_rdata = _GEN_1048[63:0];
  assign io_to_ifu_rlast = state == 3'h1 & _GEN_1034; // @[i_cache.scala 143:25]
  assign io_to_ifu_rvalid = state == 3'h1 & _GEN_1034; // @[i_cache.scala 143:25]
  assign io_to_axi_araddr = _GEN_1043[31:0];
  assign io_to_axi_arlen = {{5'd0}, _GEN_1044};
  assign io_to_axi_arvalid = state == 3'h1 ? 1'h0 : _T_17; // @[i_cache.scala 143:25 144:27]
  assign io_to_axi_rready = state == 3'h1 ? 1'h0 : io_from_ifu_rready; // @[i_cache.scala 143:25 149:26]
  always @(posedge clock) begin
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_0 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_0 <= _GEN_578;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_1 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_1 <= _GEN_579;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_2 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_2 <= _GEN_580;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_3 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_3 <= _GEN_581;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_4 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_4 <= _GEN_582;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_5 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_5 <= _GEN_583;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_6 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_6 <= _GEN_584;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_7 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_7 <= _GEN_585;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_8 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_8 <= _GEN_586;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_9 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_9 <= _GEN_587;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_10 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_10 <= _GEN_588;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_11 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_11 <= _GEN_589;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_12 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_12 <= _GEN_590;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_13 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_13 <= _GEN_591;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_14 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_14 <= _GEN_592;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_15 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_15 <= _GEN_593;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_0 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_0 <= _GEN_627;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_1 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_1 <= _GEN_628;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_2 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_2 <= _GEN_629;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_3 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_3 <= _GEN_630;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_4 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_4 <= _GEN_631;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_5 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_5 <= _GEN_632;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_6 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_6 <= _GEN_633;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_7 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_7 <= _GEN_634;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_8 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_8 <= _GEN_635;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_9 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_9 <= _GEN_636;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_10 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_10 <= _GEN_637;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_11 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_11 <= _GEN_638;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_12 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_12 <= _GEN_639;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_13 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_13 <= _GEN_640;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_14 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_14 <= _GEN_641;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_15 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_15 <= _GEN_642;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_0 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_0 <= _GEN_594;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_1 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_1 <= _GEN_595;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_2 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_2 <= _GEN_596;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_3 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_3 <= _GEN_597;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_4 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_4 <= _GEN_598;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_5 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_5 <= _GEN_599;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_6 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_6 <= _GEN_600;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_7 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_7 <= _GEN_601;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_8 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_8 <= _GEN_602;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_9 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_9 <= _GEN_603;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_10 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_10 <= _GEN_604;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_11 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_11 <= _GEN_605;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_12 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_12 <= _GEN_606;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_13 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_13 <= _GEN_607;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_14 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_14 <= _GEN_608;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_15 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_15 <= _GEN_609;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_0 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_0 <= _GEN_643;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_1 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_1 <= _GEN_644;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_2 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_2 <= _GEN_645;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_3 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_3 <= _GEN_646;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_4 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_4 <= _GEN_647;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_5 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_5 <= _GEN_648;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_6 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_6 <= _GEN_649;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_7 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_7 <= _GEN_650;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_8 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_8 <= _GEN_651;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_9 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_9 <= _GEN_652;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_10 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_10 <= _GEN_653;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_11 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_11 <= _GEN_654;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_12 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_12 <= _GEN_655;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_13 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_13 <= _GEN_656;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_14 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_14 <= _GEN_657;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_15 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_15 <= _GEN_658;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_0 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_0 <= _GEN_610;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_1 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_1 <= _GEN_611;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_2 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_2 <= _GEN_612;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_3 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_3 <= _GEN_613;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_4 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_4 <= _GEN_614;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_5 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_5 <= _GEN_615;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_6 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_6 <= _GEN_616;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_7 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_7 <= _GEN_617;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_8 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_8 <= _GEN_618;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_9 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_9 <= _GEN_619;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_10 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_10 <= _GEN_620;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_11 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_11 <= _GEN_621;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_12 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_12 <= _GEN_622;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_13 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_13 <= _GEN_623;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_14 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_14 <= _GEN_624;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_15 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_15 <= _GEN_625;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_0 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_0 <= _GEN_659;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_1 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_1 <= _GEN_660;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_2 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_2 <= _GEN_661;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_3 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_3 <= _GEN_662;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_4 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_4 <= _GEN_663;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_5 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_5 <= _GEN_664;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_6 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_6 <= _GEN_665;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_7 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_7 <= _GEN_666;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_8 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_8 <= _GEN_667;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_9 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_9 <= _GEN_668;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_10 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_10 <= _GEN_669;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_11 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_11 <= _GEN_670;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_12 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_12 <= _GEN_671;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_13 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_13 <= _GEN_672;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_14 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_14 <= _GEN_673;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_15 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_15 <= _GEN_674;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:27]
      way0_hit <= 1'h0; // @[i_cache.scala 23:27]
    end else begin
      way0_hit <= _T_2;
    end
    if (reset) begin // @[i_cache.scala 24:27]
      way1_hit <= 1'h0; // @[i_cache.scala 24:27]
    end else begin
      way1_hit <= _T_5;
    end
    if (reset) begin // @[i_cache.scala 26:28]
      unuse_way <= 2'h0; // @[i_cache.scala 26:28]
    end else if (~_GEN_31) begin // @[i_cache.scala 47:31]
      unuse_way <= 2'h1; // @[i_cache.scala 48:19]
    end else if (~_GEN_64) begin // @[i_cache.scala 49:37]
      unuse_way <= 2'h2; // @[i_cache.scala 50:19]
    end else begin
      unuse_way <= 2'h0; // @[i_cache.scala 52:19]
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_0 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_0 <= _GEN_83;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_1 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_1 <= _GEN_84;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_2 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_2 <= _GEN_85;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_3 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_3 <= _GEN_86;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_4 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_4 <= _GEN_87;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_5 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_5 <= _GEN_88;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_6 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_6 <= _GEN_89;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_7 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_7 <= _GEN_90;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 28:30]
      receive_num <= 3'h0; // @[i_cache.scala 28:30]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (3'h1 == state) begin // @[i_cache.scala 57:18]
        if (!(way0_hit)) begin // @[i_cache.scala 65:27]
          receive_num <= _GEN_71;
        end
      end else if (3'h2 == state) begin // @[i_cache.scala 57:18]
        receive_num <= _GEN_91;
      end
    end
    if (reset) begin // @[i_cache.scala 29:24]
      quene <= 1'h0; // @[i_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          quene <= _GEN_626;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 55:24]
      state <= 3'h0; // @[i_cache.scala 55:24]
    end else if (3'h0 == state) begin // @[i_cache.scala 57:18]
      if (io_from_ifu_arvalid) begin // @[i_cache.scala 59:38]
        state <= 3'h1; // @[i_cache.scala 60:23]
      end
    end else if (3'h1 == state) begin // @[i_cache.scala 57:18]
      if (way0_hit) begin // @[i_cache.scala 65:27]
        state <= _GEN_69;
      end else begin
        state <= _GEN_70;
      end
    end else if (3'h2 == state) begin // @[i_cache.scala 57:18]
      state <= _GEN_92;
    end else begin
      state <= _GEN_577;
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
  _RAND_0 = {16{`RANDOM}};
  ram_0_0 = _RAND_0[511:0];
  _RAND_1 = {16{`RANDOM}};
  ram_0_1 = _RAND_1[511:0];
  _RAND_2 = {16{`RANDOM}};
  ram_0_2 = _RAND_2[511:0];
  _RAND_3 = {16{`RANDOM}};
  ram_0_3 = _RAND_3[511:0];
  _RAND_4 = {16{`RANDOM}};
  ram_0_4 = _RAND_4[511:0];
  _RAND_5 = {16{`RANDOM}};
  ram_0_5 = _RAND_5[511:0];
  _RAND_6 = {16{`RANDOM}};
  ram_0_6 = _RAND_6[511:0];
  _RAND_7 = {16{`RANDOM}};
  ram_0_7 = _RAND_7[511:0];
  _RAND_8 = {16{`RANDOM}};
  ram_0_8 = _RAND_8[511:0];
  _RAND_9 = {16{`RANDOM}};
  ram_0_9 = _RAND_9[511:0];
  _RAND_10 = {16{`RANDOM}};
  ram_0_10 = _RAND_10[511:0];
  _RAND_11 = {16{`RANDOM}};
  ram_0_11 = _RAND_11[511:0];
  _RAND_12 = {16{`RANDOM}};
  ram_0_12 = _RAND_12[511:0];
  _RAND_13 = {16{`RANDOM}};
  ram_0_13 = _RAND_13[511:0];
  _RAND_14 = {16{`RANDOM}};
  ram_0_14 = _RAND_14[511:0];
  _RAND_15 = {16{`RANDOM}};
  ram_0_15 = _RAND_15[511:0];
  _RAND_16 = {16{`RANDOM}};
  ram_1_0 = _RAND_16[511:0];
  _RAND_17 = {16{`RANDOM}};
  ram_1_1 = _RAND_17[511:0];
  _RAND_18 = {16{`RANDOM}};
  ram_1_2 = _RAND_18[511:0];
  _RAND_19 = {16{`RANDOM}};
  ram_1_3 = _RAND_19[511:0];
  _RAND_20 = {16{`RANDOM}};
  ram_1_4 = _RAND_20[511:0];
  _RAND_21 = {16{`RANDOM}};
  ram_1_5 = _RAND_21[511:0];
  _RAND_22 = {16{`RANDOM}};
  ram_1_6 = _RAND_22[511:0];
  _RAND_23 = {16{`RANDOM}};
  ram_1_7 = _RAND_23[511:0];
  _RAND_24 = {16{`RANDOM}};
  ram_1_8 = _RAND_24[511:0];
  _RAND_25 = {16{`RANDOM}};
  ram_1_9 = _RAND_25[511:0];
  _RAND_26 = {16{`RANDOM}};
  ram_1_10 = _RAND_26[511:0];
  _RAND_27 = {16{`RANDOM}};
  ram_1_11 = _RAND_27[511:0];
  _RAND_28 = {16{`RANDOM}};
  ram_1_12 = _RAND_28[511:0];
  _RAND_29 = {16{`RANDOM}};
  ram_1_13 = _RAND_29[511:0];
  _RAND_30 = {16{`RANDOM}};
  ram_1_14 = _RAND_30[511:0];
  _RAND_31 = {16{`RANDOM}};
  ram_1_15 = _RAND_31[511:0];
  _RAND_32 = {1{`RANDOM}};
  tag_0_0 = _RAND_32[31:0];
  _RAND_33 = {1{`RANDOM}};
  tag_0_1 = _RAND_33[31:0];
  _RAND_34 = {1{`RANDOM}};
  tag_0_2 = _RAND_34[31:0];
  _RAND_35 = {1{`RANDOM}};
  tag_0_3 = _RAND_35[31:0];
  _RAND_36 = {1{`RANDOM}};
  tag_0_4 = _RAND_36[31:0];
  _RAND_37 = {1{`RANDOM}};
  tag_0_5 = _RAND_37[31:0];
  _RAND_38 = {1{`RANDOM}};
  tag_0_6 = _RAND_38[31:0];
  _RAND_39 = {1{`RANDOM}};
  tag_0_7 = _RAND_39[31:0];
  _RAND_40 = {1{`RANDOM}};
  tag_0_8 = _RAND_40[31:0];
  _RAND_41 = {1{`RANDOM}};
  tag_0_9 = _RAND_41[31:0];
  _RAND_42 = {1{`RANDOM}};
  tag_0_10 = _RAND_42[31:0];
  _RAND_43 = {1{`RANDOM}};
  tag_0_11 = _RAND_43[31:0];
  _RAND_44 = {1{`RANDOM}};
  tag_0_12 = _RAND_44[31:0];
  _RAND_45 = {1{`RANDOM}};
  tag_0_13 = _RAND_45[31:0];
  _RAND_46 = {1{`RANDOM}};
  tag_0_14 = _RAND_46[31:0];
  _RAND_47 = {1{`RANDOM}};
  tag_0_15 = _RAND_47[31:0];
  _RAND_48 = {1{`RANDOM}};
  tag_1_0 = _RAND_48[31:0];
  _RAND_49 = {1{`RANDOM}};
  tag_1_1 = _RAND_49[31:0];
  _RAND_50 = {1{`RANDOM}};
  tag_1_2 = _RAND_50[31:0];
  _RAND_51 = {1{`RANDOM}};
  tag_1_3 = _RAND_51[31:0];
  _RAND_52 = {1{`RANDOM}};
  tag_1_4 = _RAND_52[31:0];
  _RAND_53 = {1{`RANDOM}};
  tag_1_5 = _RAND_53[31:0];
  _RAND_54 = {1{`RANDOM}};
  tag_1_6 = _RAND_54[31:0];
  _RAND_55 = {1{`RANDOM}};
  tag_1_7 = _RAND_55[31:0];
  _RAND_56 = {1{`RANDOM}};
  tag_1_8 = _RAND_56[31:0];
  _RAND_57 = {1{`RANDOM}};
  tag_1_9 = _RAND_57[31:0];
  _RAND_58 = {1{`RANDOM}};
  tag_1_10 = _RAND_58[31:0];
  _RAND_59 = {1{`RANDOM}};
  tag_1_11 = _RAND_59[31:0];
  _RAND_60 = {1{`RANDOM}};
  tag_1_12 = _RAND_60[31:0];
  _RAND_61 = {1{`RANDOM}};
  tag_1_13 = _RAND_61[31:0];
  _RAND_62 = {1{`RANDOM}};
  tag_1_14 = _RAND_62[31:0];
  _RAND_63 = {1{`RANDOM}};
  tag_1_15 = _RAND_63[31:0];
  _RAND_64 = {1{`RANDOM}};
  valid_0_0 = _RAND_64[0:0];
  _RAND_65 = {1{`RANDOM}};
  valid_0_1 = _RAND_65[0:0];
  _RAND_66 = {1{`RANDOM}};
  valid_0_2 = _RAND_66[0:0];
  _RAND_67 = {1{`RANDOM}};
  valid_0_3 = _RAND_67[0:0];
  _RAND_68 = {1{`RANDOM}};
  valid_0_4 = _RAND_68[0:0];
  _RAND_69 = {1{`RANDOM}};
  valid_0_5 = _RAND_69[0:0];
  _RAND_70 = {1{`RANDOM}};
  valid_0_6 = _RAND_70[0:0];
  _RAND_71 = {1{`RANDOM}};
  valid_0_7 = _RAND_71[0:0];
  _RAND_72 = {1{`RANDOM}};
  valid_0_8 = _RAND_72[0:0];
  _RAND_73 = {1{`RANDOM}};
  valid_0_9 = _RAND_73[0:0];
  _RAND_74 = {1{`RANDOM}};
  valid_0_10 = _RAND_74[0:0];
  _RAND_75 = {1{`RANDOM}};
  valid_0_11 = _RAND_75[0:0];
  _RAND_76 = {1{`RANDOM}};
  valid_0_12 = _RAND_76[0:0];
  _RAND_77 = {1{`RANDOM}};
  valid_0_13 = _RAND_77[0:0];
  _RAND_78 = {1{`RANDOM}};
  valid_0_14 = _RAND_78[0:0];
  _RAND_79 = {1{`RANDOM}};
  valid_0_15 = _RAND_79[0:0];
  _RAND_80 = {1{`RANDOM}};
  valid_1_0 = _RAND_80[0:0];
  _RAND_81 = {1{`RANDOM}};
  valid_1_1 = _RAND_81[0:0];
  _RAND_82 = {1{`RANDOM}};
  valid_1_2 = _RAND_82[0:0];
  _RAND_83 = {1{`RANDOM}};
  valid_1_3 = _RAND_83[0:0];
  _RAND_84 = {1{`RANDOM}};
  valid_1_4 = _RAND_84[0:0];
  _RAND_85 = {1{`RANDOM}};
  valid_1_5 = _RAND_85[0:0];
  _RAND_86 = {1{`RANDOM}};
  valid_1_6 = _RAND_86[0:0];
  _RAND_87 = {1{`RANDOM}};
  valid_1_7 = _RAND_87[0:0];
  _RAND_88 = {1{`RANDOM}};
  valid_1_8 = _RAND_88[0:0];
  _RAND_89 = {1{`RANDOM}};
  valid_1_9 = _RAND_89[0:0];
  _RAND_90 = {1{`RANDOM}};
  valid_1_10 = _RAND_90[0:0];
  _RAND_91 = {1{`RANDOM}};
  valid_1_11 = _RAND_91[0:0];
  _RAND_92 = {1{`RANDOM}};
  valid_1_12 = _RAND_92[0:0];
  _RAND_93 = {1{`RANDOM}};
  valid_1_13 = _RAND_93[0:0];
  _RAND_94 = {1{`RANDOM}};
  valid_1_14 = _RAND_94[0:0];
  _RAND_95 = {1{`RANDOM}};
  valid_1_15 = _RAND_95[0:0];
  _RAND_96 = {1{`RANDOM}};
  way0_hit = _RAND_96[0:0];
  _RAND_97 = {1{`RANDOM}};
  way1_hit = _RAND_97[0:0];
  _RAND_98 = {1{`RANDOM}};
  unuse_way = _RAND_98[1:0];
  _RAND_99 = {2{`RANDOM}};
  receive_data_0 = _RAND_99[63:0];
  _RAND_100 = {2{`RANDOM}};
  receive_data_1 = _RAND_100[63:0];
  _RAND_101 = {2{`RANDOM}};
  receive_data_2 = _RAND_101[63:0];
  _RAND_102 = {2{`RANDOM}};
  receive_data_3 = _RAND_102[63:0];
  _RAND_103 = {2{`RANDOM}};
  receive_data_4 = _RAND_103[63:0];
  _RAND_104 = {2{`RANDOM}};
  receive_data_5 = _RAND_104[63:0];
  _RAND_105 = {2{`RANDOM}};
  receive_data_6 = _RAND_105[63:0];
  _RAND_106 = {2{`RANDOM}};
  receive_data_7 = _RAND_106[63:0];
  _RAND_107 = {1{`RANDOM}};
  receive_num = _RAND_107[2:0];
  _RAND_108 = {1{`RANDOM}};
  quene = _RAND_108[0:0];
  _RAND_109 = {1{`RANDOM}};
  state = _RAND_109[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module D_CACHE(
  input         clock,
  input         reset,
  input  [31:0] io_from_lsu_araddr,
  input         io_from_lsu_arvalid,
  input         io_from_lsu_rready,
  input  [31:0] io_from_lsu_awaddr,
  input         io_from_lsu_awvalid,
  input  [63:0] io_from_lsu_wdata,
  input  [7:0]  io_from_lsu_wstrb,
  input         io_from_lsu_wvalid,
  input         io_from_lsu_bready,
  output        io_to_lsu_arready,
  output [63:0] io_to_lsu_rdata,
  output        io_to_lsu_rvalid,
  output        io_to_lsu_awready,
  output        io_to_lsu_wready,
  output        io_to_lsu_bvalid,
  output [31:0] io_to_axi_araddr,
  output [7:0]  io_to_axi_arlen,
  output        io_to_axi_arvalid,
  output        io_to_axi_rready,
  output [31:0] io_to_axi_awaddr,
  output [7:0]  io_to_axi_awlen,
  output        io_to_axi_awvalid,
  output [63:0] io_to_axi_wdata,
  output [7:0]  io_to_axi_wstrb,
  output        io_to_axi_wvalid,
  output        io_to_axi_bready,
  input  [63:0] io_from_axi_rdata,
  input         io_from_axi_rlast,
  input         io_from_axi_rvalid,
  input         io_from_axi_awready,
  input         io_from_axi_wready,
  input         io_from_axi_bvalid
);
`ifdef RANDOMIZE_REG_INIT
  reg [511:0] _RAND_0;
  reg [511:0] _RAND_1;
  reg [511:0] _RAND_2;
  reg [511:0] _RAND_3;
  reg [511:0] _RAND_4;
  reg [511:0] _RAND_5;
  reg [511:0] _RAND_6;
  reg [511:0] _RAND_7;
  reg [511:0] _RAND_8;
  reg [511:0] _RAND_9;
  reg [511:0] _RAND_10;
  reg [511:0] _RAND_11;
  reg [511:0] _RAND_12;
  reg [511:0] _RAND_13;
  reg [511:0] _RAND_14;
  reg [511:0] _RAND_15;
  reg [511:0] _RAND_16;
  reg [511:0] _RAND_17;
  reg [511:0] _RAND_18;
  reg [511:0] _RAND_19;
  reg [511:0] _RAND_20;
  reg [511:0] _RAND_21;
  reg [511:0] _RAND_22;
  reg [511:0] _RAND_23;
  reg [511:0] _RAND_24;
  reg [511:0] _RAND_25;
  reg [511:0] _RAND_26;
  reg [511:0] _RAND_27;
  reg [511:0] _RAND_28;
  reg [511:0] _RAND_29;
  reg [511:0] _RAND_30;
  reg [511:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [31:0] _RAND_50;
  reg [31:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [31:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [31:0] _RAND_55;
  reg [31:0] _RAND_56;
  reg [31:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [31:0] _RAND_59;
  reg [31:0] _RAND_60;
  reg [31:0] _RAND_61;
  reg [31:0] _RAND_62;
  reg [31:0] _RAND_63;
  reg [31:0] _RAND_64;
  reg [31:0] _RAND_65;
  reg [31:0] _RAND_66;
  reg [31:0] _RAND_67;
  reg [31:0] _RAND_68;
  reg [31:0] _RAND_69;
  reg [31:0] _RAND_70;
  reg [31:0] _RAND_71;
  reg [31:0] _RAND_72;
  reg [31:0] _RAND_73;
  reg [31:0] _RAND_74;
  reg [31:0] _RAND_75;
  reg [31:0] _RAND_76;
  reg [31:0] _RAND_77;
  reg [31:0] _RAND_78;
  reg [31:0] _RAND_79;
  reg [31:0] _RAND_80;
  reg [31:0] _RAND_81;
  reg [31:0] _RAND_82;
  reg [31:0] _RAND_83;
  reg [31:0] _RAND_84;
  reg [31:0] _RAND_85;
  reg [31:0] _RAND_86;
  reg [31:0] _RAND_87;
  reg [31:0] _RAND_88;
  reg [31:0] _RAND_89;
  reg [31:0] _RAND_90;
  reg [31:0] _RAND_91;
  reg [31:0] _RAND_92;
  reg [31:0] _RAND_93;
  reg [31:0] _RAND_94;
  reg [31:0] _RAND_95;
  reg [31:0] _RAND_96;
  reg [31:0] _RAND_97;
  reg [31:0] _RAND_98;
  reg [31:0] _RAND_99;
  reg [31:0] _RAND_100;
  reg [31:0] _RAND_101;
  reg [31:0] _RAND_102;
  reg [31:0] _RAND_103;
  reg [31:0] _RAND_104;
  reg [31:0] _RAND_105;
  reg [31:0] _RAND_106;
  reg [31:0] _RAND_107;
  reg [31:0] _RAND_108;
  reg [31:0] _RAND_109;
  reg [31:0] _RAND_110;
  reg [31:0] _RAND_111;
  reg [31:0] _RAND_112;
  reg [31:0] _RAND_113;
  reg [31:0] _RAND_114;
  reg [31:0] _RAND_115;
  reg [31:0] _RAND_116;
  reg [31:0] _RAND_117;
  reg [31:0] _RAND_118;
  reg [31:0] _RAND_119;
  reg [31:0] _RAND_120;
  reg [31:0] _RAND_121;
  reg [31:0] _RAND_122;
  reg [31:0] _RAND_123;
  reg [31:0] _RAND_124;
  reg [31:0] _RAND_125;
  reg [31:0] _RAND_126;
  reg [31:0] _RAND_127;
  reg [31:0] _RAND_128;
  reg [31:0] _RAND_129;
  reg [511:0] _RAND_130;
  reg [31:0] _RAND_131;
  reg [31:0] _RAND_132;
  reg [63:0] _RAND_133;
  reg [63:0] _RAND_134;
  reg [63:0] _RAND_135;
  reg [63:0] _RAND_136;
  reg [63:0] _RAND_137;
  reg [63:0] _RAND_138;
  reg [63:0] _RAND_139;
  reg [63:0] _RAND_140;
  reg [31:0] _RAND_141;
  reg [31:0] _RAND_142;
  reg [31:0] _RAND_143;
`endif // RANDOMIZE_REG_INIT
  reg [511:0] ram_0_0; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_1; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_2; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_3; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_4; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_5; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_6; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_7; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_8; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_9; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_10; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_11; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_12; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_13; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_14; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_15; // @[d_cache.scala 19:24]
  reg [511:0] ram_1_0; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_1; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_2; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_3; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_4; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_5; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_6; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_7; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_8; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_9; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_10; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_11; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_12; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_13; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_14; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_15; // @[d_cache.scala 20:24]
  reg [31:0] tag_0_0; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_1; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_2; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_3; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_4; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_5; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_6; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_7; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_8; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_9; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_10; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_11; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_12; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_13; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_14; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_15; // @[d_cache.scala 28:24]
  reg [31:0] tag_1_0; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_1; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_2; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_3; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_4; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_5; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_6; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_7; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_8; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_9; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_10; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_11; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_12; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_13; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_14; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_15; // @[d_cache.scala 29:24]
  reg  valid_0_0; // @[d_cache.scala 30:26]
  reg  valid_0_1; // @[d_cache.scala 30:26]
  reg  valid_0_2; // @[d_cache.scala 30:26]
  reg  valid_0_3; // @[d_cache.scala 30:26]
  reg  valid_0_4; // @[d_cache.scala 30:26]
  reg  valid_0_5; // @[d_cache.scala 30:26]
  reg  valid_0_6; // @[d_cache.scala 30:26]
  reg  valid_0_7; // @[d_cache.scala 30:26]
  reg  valid_0_8; // @[d_cache.scala 30:26]
  reg  valid_0_9; // @[d_cache.scala 30:26]
  reg  valid_0_10; // @[d_cache.scala 30:26]
  reg  valid_0_11; // @[d_cache.scala 30:26]
  reg  valid_0_12; // @[d_cache.scala 30:26]
  reg  valid_0_13; // @[d_cache.scala 30:26]
  reg  valid_0_14; // @[d_cache.scala 30:26]
  reg  valid_0_15; // @[d_cache.scala 30:26]
  reg  valid_1_0; // @[d_cache.scala 31:26]
  reg  valid_1_1; // @[d_cache.scala 31:26]
  reg  valid_1_2; // @[d_cache.scala 31:26]
  reg  valid_1_3; // @[d_cache.scala 31:26]
  reg  valid_1_4; // @[d_cache.scala 31:26]
  reg  valid_1_5; // @[d_cache.scala 31:26]
  reg  valid_1_6; // @[d_cache.scala 31:26]
  reg  valid_1_7; // @[d_cache.scala 31:26]
  reg  valid_1_8; // @[d_cache.scala 31:26]
  reg  valid_1_9; // @[d_cache.scala 31:26]
  reg  valid_1_10; // @[d_cache.scala 31:26]
  reg  valid_1_11; // @[d_cache.scala 31:26]
  reg  valid_1_12; // @[d_cache.scala 31:26]
  reg  valid_1_13; // @[d_cache.scala 31:26]
  reg  valid_1_14; // @[d_cache.scala 31:26]
  reg  valid_1_15; // @[d_cache.scala 31:26]
  reg  dirty_0_0; // @[d_cache.scala 32:26]
  reg  dirty_0_1; // @[d_cache.scala 32:26]
  reg  dirty_0_2; // @[d_cache.scala 32:26]
  reg  dirty_0_3; // @[d_cache.scala 32:26]
  reg  dirty_0_4; // @[d_cache.scala 32:26]
  reg  dirty_0_5; // @[d_cache.scala 32:26]
  reg  dirty_0_6; // @[d_cache.scala 32:26]
  reg  dirty_0_7; // @[d_cache.scala 32:26]
  reg  dirty_0_8; // @[d_cache.scala 32:26]
  reg  dirty_0_9; // @[d_cache.scala 32:26]
  reg  dirty_0_10; // @[d_cache.scala 32:26]
  reg  dirty_0_11; // @[d_cache.scala 32:26]
  reg  dirty_0_12; // @[d_cache.scala 32:26]
  reg  dirty_0_13; // @[d_cache.scala 32:26]
  reg  dirty_0_14; // @[d_cache.scala 32:26]
  reg  dirty_0_15; // @[d_cache.scala 32:26]
  reg  dirty_1_0; // @[d_cache.scala 33:26]
  reg  dirty_1_1; // @[d_cache.scala 33:26]
  reg  dirty_1_2; // @[d_cache.scala 33:26]
  reg  dirty_1_3; // @[d_cache.scala 33:26]
  reg  dirty_1_4; // @[d_cache.scala 33:26]
  reg  dirty_1_5; // @[d_cache.scala 33:26]
  reg  dirty_1_6; // @[d_cache.scala 33:26]
  reg  dirty_1_7; // @[d_cache.scala 33:26]
  reg  dirty_1_8; // @[d_cache.scala 33:26]
  reg  dirty_1_9; // @[d_cache.scala 33:26]
  reg  dirty_1_10; // @[d_cache.scala 33:26]
  reg  dirty_1_11; // @[d_cache.scala 33:26]
  reg  dirty_1_12; // @[d_cache.scala 33:26]
  reg  dirty_1_13; // @[d_cache.scala 33:26]
  reg  dirty_1_14; // @[d_cache.scala 33:26]
  reg  dirty_1_15; // @[d_cache.scala 33:26]
  reg  way0_hit; // @[d_cache.scala 34:27]
  reg  way1_hit; // @[d_cache.scala 35:27]
  reg [511:0] write_back_data; // @[d_cache.scala 37:34]
  reg [31:0] write_back_addr; // @[d_cache.scala 38:34]
  reg [1:0] unuse_way; // @[d_cache.scala 41:28]
  reg [63:0] receive_data_0; // @[d_cache.scala 42:31]
  reg [63:0] receive_data_1; // @[d_cache.scala 42:31]
  reg [63:0] receive_data_2; // @[d_cache.scala 42:31]
  reg [63:0] receive_data_3; // @[d_cache.scala 42:31]
  reg [63:0] receive_data_4; // @[d_cache.scala 42:31]
  reg [63:0] receive_data_5; // @[d_cache.scala 42:31]
  reg [63:0] receive_data_6; // @[d_cache.scala 42:31]
  reg [63:0] receive_data_7; // @[d_cache.scala 42:31]
  reg [2:0] receive_num; // @[d_cache.scala 43:30]
  reg  quene; // @[d_cache.scala 44:24]
  wire [2:0] offset = io_from_lsu_araddr[2:0]; // @[d_cache.scala 46:36]
  wire [6:0] index = io_from_lsu_araddr[9:3]; // @[d_cache.scala 47:35]
  wire [21:0] tag = io_from_lsu_araddr[31:10]; // @[d_cache.scala 48:33]
  wire [5:0] shift_bit = {offset, 3'h0}; // @[d_cache.scala 50:28]
  wire [63:0] _wmask_T_4 = io_from_lsu_wstrb == 8'hff ? 64'hffffffffffffffff : 64'h0; // @[d_cache.scala 63:20]
  wire [63:0] _wmask_T_5 = io_from_lsu_wstrb == 8'hf ? 64'hffffffff : _wmask_T_4; // @[d_cache.scala 62:20]
  wire [63:0] _wmask_T_6 = io_from_lsu_wstrb == 8'h3 ? 64'hffff : _wmask_T_5; // @[d_cache.scala 61:20]
  wire [63:0] wmask = io_from_lsu_wstrb == 8'h1 ? 64'hff : _wmask_T_6; // @[d_cache.scala 60:20]
  wire [31:0] _GEN_1 = 4'h1 == index[3:0] ? tag_0_1 : tag_0_0; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_2 = 4'h2 == index[3:0] ? tag_0_2 : _GEN_1; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_3 = 4'h3 == index[3:0] ? tag_0_3 : _GEN_2; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_4 = 4'h4 == index[3:0] ? tag_0_4 : _GEN_3; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_5 = 4'h5 == index[3:0] ? tag_0_5 : _GEN_4; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_6 = 4'h6 == index[3:0] ? tag_0_6 : _GEN_5; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_7 = 4'h7 == index[3:0] ? tag_0_7 : _GEN_6; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_8 = 4'h8 == index[3:0] ? tag_0_8 : _GEN_7; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_9 = 4'h9 == index[3:0] ? tag_0_9 : _GEN_8; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_10 = 4'ha == index[3:0] ? tag_0_10 : _GEN_9; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_11 = 4'hb == index[3:0] ? tag_0_11 : _GEN_10; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_12 = 4'hc == index[3:0] ? tag_0_12 : _GEN_11; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_13 = 4'hd == index[3:0] ? tag_0_13 : _GEN_12; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_14 = 4'he == index[3:0] ? tag_0_14 : _GEN_13; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_15 = 4'hf == index[3:0] ? tag_0_15 : _GEN_14; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_2148 = {{10'd0}, tag}; // @[d_cache.scala 65:24]
  wire  _GEN_17 = 4'h1 == index[3:0] ? valid_0_1 : valid_0_0; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_18 = 4'h2 == index[3:0] ? valid_0_2 : _GEN_17; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_19 = 4'h3 == index[3:0] ? valid_0_3 : _GEN_18; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_20 = 4'h4 == index[3:0] ? valid_0_4 : _GEN_19; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_21 = 4'h5 == index[3:0] ? valid_0_5 : _GEN_20; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_22 = 4'h6 == index[3:0] ? valid_0_6 : _GEN_21; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_23 = 4'h7 == index[3:0] ? valid_0_7 : _GEN_22; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_24 = 4'h8 == index[3:0] ? valid_0_8 : _GEN_23; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_25 = 4'h9 == index[3:0] ? valid_0_9 : _GEN_24; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_26 = 4'ha == index[3:0] ? valid_0_10 : _GEN_25; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_27 = 4'hb == index[3:0] ? valid_0_11 : _GEN_26; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_28 = 4'hc == index[3:0] ? valid_0_12 : _GEN_27; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_29 = 4'hd == index[3:0] ? valid_0_13 : _GEN_28; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_30 = 4'he == index[3:0] ? valid_0_14 : _GEN_29; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_31 = 4'hf == index[3:0] ? valid_0_15 : _GEN_30; // @[d_cache.scala 65:{50,50}]
  wire  _T_4 = _GEN_15 == _GEN_2148 & _GEN_31; // @[d_cache.scala 65:33]
  wire [31:0] _GEN_34 = 4'h1 == index[3:0] ? tag_1_1 : tag_1_0; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_35 = 4'h2 == index[3:0] ? tag_1_2 : _GEN_34; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_36 = 4'h3 == index[3:0] ? tag_1_3 : _GEN_35; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_37 = 4'h4 == index[3:0] ? tag_1_4 : _GEN_36; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_38 = 4'h5 == index[3:0] ? tag_1_5 : _GEN_37; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_39 = 4'h6 == index[3:0] ? tag_1_6 : _GEN_38; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_40 = 4'h7 == index[3:0] ? tag_1_7 : _GEN_39; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_41 = 4'h8 == index[3:0] ? tag_1_8 : _GEN_40; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_42 = 4'h9 == index[3:0] ? tag_1_9 : _GEN_41; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_43 = 4'ha == index[3:0] ? tag_1_10 : _GEN_42; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_44 = 4'hb == index[3:0] ? tag_1_11 : _GEN_43; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_45 = 4'hc == index[3:0] ? tag_1_12 : _GEN_44; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_46 = 4'hd == index[3:0] ? tag_1_13 : _GEN_45; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_47 = 4'he == index[3:0] ? tag_1_14 : _GEN_46; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_48 = 4'hf == index[3:0] ? tag_1_15 : _GEN_47; // @[d_cache.scala 70:{24,24}]
  wire  _GEN_50 = 4'h1 == index[3:0] ? valid_1_1 : valid_1_0; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_51 = 4'h2 == index[3:0] ? valid_1_2 : _GEN_50; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_52 = 4'h3 == index[3:0] ? valid_1_3 : _GEN_51; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_53 = 4'h4 == index[3:0] ? valid_1_4 : _GEN_52; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_54 = 4'h5 == index[3:0] ? valid_1_5 : _GEN_53; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_55 = 4'h6 == index[3:0] ? valid_1_6 : _GEN_54; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_56 = 4'h7 == index[3:0] ? valid_1_7 : _GEN_55; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_57 = 4'h8 == index[3:0] ? valid_1_8 : _GEN_56; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_58 = 4'h9 == index[3:0] ? valid_1_9 : _GEN_57; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_59 = 4'ha == index[3:0] ? valid_1_10 : _GEN_58; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_60 = 4'hb == index[3:0] ? valid_1_11 : _GEN_59; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_61 = 4'hc == index[3:0] ? valid_1_12 : _GEN_60; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_62 = 4'hd == index[3:0] ? valid_1_13 : _GEN_61; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_63 = 4'he == index[3:0] ? valid_1_14 : _GEN_62; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_64 = 4'hf == index[3:0] ? valid_1_15 : _GEN_63; // @[d_cache.scala 70:{50,50}]
  wire  _T_9 = _GEN_48 == _GEN_2148 & _GEN_64; // @[d_cache.scala 70:33]
  reg [2:0] state; // @[d_cache.scala 84:24]
  wire [2:0] _GEN_102 = io_from_lsu_rready ? 3'h0 : state; // @[d_cache.scala 100:41 102:27 84:24]
  wire [2:0] _GEN_103 = way1_hit ? _GEN_102 : 3'h3; // @[d_cache.scala 105:33 111:23]
  wire [2:0] _GEN_104 = way1_hit ? receive_num : 3'h0; // @[d_cache.scala 105:33 112:29 43:30]
  wire [63:0] _ram_0_T = io_from_lsu_wdata & wmask; // @[d_cache.scala 118:53]
  wire [126:0] _GEN_2353 = {{63'd0}, _ram_0_T}; // @[d_cache.scala 118:62]
  wire [126:0] _ram_0_T_1 = _GEN_2353 << shift_bit; // @[d_cache.scala 118:62]
  wire [126:0] _GEN_2354 = {{63'd0}, wmask}; // @[d_cache.scala 118:102]
  wire [126:0] _ram_0_T_3 = _GEN_2354 << shift_bit; // @[d_cache.scala 118:102]
  wire [126:0] _ram_0_T_4 = ~_ram_0_T_3; // @[d_cache.scala 118:94]
  wire [511:0] _GEN_108 = 4'h1 == index[3:0] ? ram_0_1 : ram_0_0; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_109 = 4'h2 == index[3:0] ? ram_0_2 : _GEN_108; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_110 = 4'h3 == index[3:0] ? ram_0_3 : _GEN_109; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_111 = 4'h4 == index[3:0] ? ram_0_4 : _GEN_110; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_112 = 4'h5 == index[3:0] ? ram_0_5 : _GEN_111; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_113 = 4'h6 == index[3:0] ? ram_0_6 : _GEN_112; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_114 = 4'h7 == index[3:0] ? ram_0_7 : _GEN_113; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_115 = 4'h8 == index[3:0] ? ram_0_8 : _GEN_114; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_116 = 4'h9 == index[3:0] ? ram_0_9 : _GEN_115; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_117 = 4'ha == index[3:0] ? ram_0_10 : _GEN_116; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_118 = 4'hb == index[3:0] ? ram_0_11 : _GEN_117; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_119 = 4'hc == index[3:0] ? ram_0_12 : _GEN_118; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_120 = 4'hd == index[3:0] ? ram_0_13 : _GEN_119; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_121 = 4'he == index[3:0] ? ram_0_14 : _GEN_120; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_122 = 4'hf == index[3:0] ? ram_0_15 : _GEN_121; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_2165 = {{385'd0}, _ram_0_T_4}; // @[d_cache.scala 118:92]
  wire [511:0] _ram_0_T_5 = _GEN_122 & _GEN_2165; // @[d_cache.scala 118:92]
  wire [511:0] _GEN_2166 = {{385'd0}, _ram_0_T_1}; // @[d_cache.scala 118:76]
  wire [511:0] _ram_0_T_6 = _GEN_2166 | _ram_0_T_5; // @[d_cache.scala 118:76]
  wire [511:0] _GEN_123 = 4'h0 == index[3:0] ? _ram_0_T_6 : ram_0_0; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_124 = 4'h1 == index[3:0] ? _ram_0_T_6 : ram_0_1; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_125 = 4'h2 == index[3:0] ? _ram_0_T_6 : ram_0_2; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_126 = 4'h3 == index[3:0] ? _ram_0_T_6 : ram_0_3; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_127 = 4'h4 == index[3:0] ? _ram_0_T_6 : ram_0_4; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_128 = 4'h5 == index[3:0] ? _ram_0_T_6 : ram_0_5; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_129 = 4'h6 == index[3:0] ? _ram_0_T_6 : ram_0_6; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_130 = 4'h7 == index[3:0] ? _ram_0_T_6 : ram_0_7; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_131 = 4'h8 == index[3:0] ? _ram_0_T_6 : ram_0_8; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_132 = 4'h9 == index[3:0] ? _ram_0_T_6 : ram_0_9; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_133 = 4'ha == index[3:0] ? _ram_0_T_6 : ram_0_10; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_134 = 4'hb == index[3:0] ? _ram_0_T_6 : ram_0_11; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_135 = 4'hc == index[3:0] ? _ram_0_T_6 : ram_0_12; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_136 = 4'hd == index[3:0] ? _ram_0_T_6 : ram_0_13; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_137 = 4'he == index[3:0] ? _ram_0_T_6 : ram_0_14; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_138 = 4'hf == index[3:0] ? _ram_0_T_6 : ram_0_15; // @[d_cache.scala 118:{30,30} 19:24]
  wire  _GEN_2169 = 4'h0 == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_139 = 4'h0 == index[3:0] | dirty_0_0; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2180 = 4'h1 == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_140 = 4'h1 == index[3:0] | dirty_0_1; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2185 = 4'h2 == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_141 = 4'h2 == index[3:0] | dirty_0_2; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2186 = 4'h3 == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_142 = 4'h3 == index[3:0] | dirty_0_3; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2189 = 4'h4 == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_143 = 4'h4 == index[3:0] | dirty_0_4; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2195 = 4'h5 == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_144 = 4'h5 == index[3:0] | dirty_0_5; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2196 = 4'h6 == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_145 = 4'h6 == index[3:0] | dirty_0_6; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2201 = 4'h7 == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_146 = 4'h7 == index[3:0] | dirty_0_7; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2202 = 4'h8 == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_147 = 4'h8 == index[3:0] | dirty_0_8; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2205 = 4'h9 == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_148 = 4'h9 == index[3:0] | dirty_0_9; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2216 = 4'ha == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_149 = 4'ha == index[3:0] | dirty_0_10; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2217 = 4'hb == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_150 = 4'hb == index[3:0] | dirty_0_11; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2222 = 4'hc == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_151 = 4'hc == index[3:0] | dirty_0_12; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2223 = 4'hd == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_152 = 4'hd == index[3:0] | dirty_0_13; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2226 = 4'he == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_153 = 4'he == index[3:0] | dirty_0_14; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2235 = 4'hf == index[3:0]; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_154 = 4'hf == index[3:0] | dirty_0_15; // @[d_cache.scala 122:{32,32} 32:26]
  wire [511:0] _GEN_156 = 4'h1 == index[3:0] ? ram_1_1 : ram_1_0; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_157 = 4'h2 == index[3:0] ? ram_1_2 : _GEN_156; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_158 = 4'h3 == index[3:0] ? ram_1_3 : _GEN_157; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_159 = 4'h4 == index[3:0] ? ram_1_4 : _GEN_158; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_160 = 4'h5 == index[3:0] ? ram_1_5 : _GEN_159; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_161 = 4'h6 == index[3:0] ? ram_1_6 : _GEN_160; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_162 = 4'h7 == index[3:0] ? ram_1_7 : _GEN_161; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_163 = 4'h8 == index[3:0] ? ram_1_8 : _GEN_162; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_164 = 4'h9 == index[3:0] ? ram_1_9 : _GEN_163; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_165 = 4'ha == index[3:0] ? ram_1_10 : _GEN_164; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_166 = 4'hb == index[3:0] ? ram_1_11 : _GEN_165; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_167 = 4'hc == index[3:0] ? ram_1_12 : _GEN_166; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_168 = 4'hd == index[3:0] ? ram_1_13 : _GEN_167; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_169 = 4'he == index[3:0] ? ram_1_14 : _GEN_168; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_170 = 4'hf == index[3:0] ? ram_1_15 : _GEN_169; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _ram_1_T_5 = _GEN_170 & _GEN_2165; // @[d_cache.scala 127:92]
  wire [511:0] _ram_1_T_6 = _GEN_2166 | _ram_1_T_5; // @[d_cache.scala 127:76]
  wire [511:0] _GEN_171 = 4'h0 == index[3:0] ? _ram_1_T_6 : ram_1_0; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_172 = 4'h1 == index[3:0] ? _ram_1_T_6 : ram_1_1; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_173 = 4'h2 == index[3:0] ? _ram_1_T_6 : ram_1_2; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_174 = 4'h3 == index[3:0] ? _ram_1_T_6 : ram_1_3; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_175 = 4'h4 == index[3:0] ? _ram_1_T_6 : ram_1_4; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_176 = 4'h5 == index[3:0] ? _ram_1_T_6 : ram_1_5; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_177 = 4'h6 == index[3:0] ? _ram_1_T_6 : ram_1_6; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_178 = 4'h7 == index[3:0] ? _ram_1_T_6 : ram_1_7; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_179 = 4'h8 == index[3:0] ? _ram_1_T_6 : ram_1_8; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_180 = 4'h9 == index[3:0] ? _ram_1_T_6 : ram_1_9; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_181 = 4'ha == index[3:0] ? _ram_1_T_6 : ram_1_10; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_182 = 4'hb == index[3:0] ? _ram_1_T_6 : ram_1_11; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_183 = 4'hc == index[3:0] ? _ram_1_T_6 : ram_1_12; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_184 = 4'hd == index[3:0] ? _ram_1_T_6 : ram_1_13; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_185 = 4'he == index[3:0] ? _ram_1_T_6 : ram_1_14; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_186 = 4'hf == index[3:0] ? _ram_1_T_6 : ram_1_15; // @[d_cache.scala 127:{30,30} 20:24]
  wire  _GEN_187 = _GEN_2169 | dirty_1_0; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_188 = _GEN_2180 | dirty_1_1; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_189 = _GEN_2185 | dirty_1_2; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_190 = _GEN_2186 | dirty_1_3; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_191 = _GEN_2189 | dirty_1_4; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_192 = _GEN_2195 | dirty_1_5; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_193 = _GEN_2196 | dirty_1_6; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_194 = _GEN_2201 | dirty_1_7; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_195 = _GEN_2202 | dirty_1_8; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_196 = _GEN_2205 | dirty_1_9; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_197 = _GEN_2216 | dirty_1_10; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_198 = _GEN_2217 | dirty_1_11; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_199 = _GEN_2222 | dirty_1_12; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_200 = _GEN_2223 | dirty_1_13; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_201 = _GEN_2226 | dirty_1_14; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_202 = _GEN_2235 | dirty_1_15; // @[d_cache.scala 134:{32,32} 33:26]
  wire [2:0] _GEN_203 = way1_hit ? 3'h0 : 3'h4; // @[d_cache.scala 124:33 125:23 136:23]
  wire [511:0] _GEN_204 = way1_hit ? _GEN_171 : ram_1_0; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_205 = way1_hit ? _GEN_172 : ram_1_1; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_206 = way1_hit ? _GEN_173 : ram_1_2; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_207 = way1_hit ? _GEN_174 : ram_1_3; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_208 = way1_hit ? _GEN_175 : ram_1_4; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_209 = way1_hit ? _GEN_176 : ram_1_5; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_210 = way1_hit ? _GEN_177 : ram_1_6; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_211 = way1_hit ? _GEN_178 : ram_1_7; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_212 = way1_hit ? _GEN_179 : ram_1_8; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_213 = way1_hit ? _GEN_180 : ram_1_9; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_214 = way1_hit ? _GEN_181 : ram_1_10; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_215 = way1_hit ? _GEN_182 : ram_1_11; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_216 = way1_hit ? _GEN_183 : ram_1_12; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_217 = way1_hit ? _GEN_184 : ram_1_13; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_218 = way1_hit ? _GEN_185 : ram_1_14; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_219 = way1_hit ? _GEN_186 : ram_1_15; // @[d_cache.scala 124:33 20:24]
  wire  _GEN_220 = way1_hit ? _GEN_187 : dirty_1_0; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_221 = way1_hit ? _GEN_188 : dirty_1_1; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_222 = way1_hit ? _GEN_189 : dirty_1_2; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_223 = way1_hit ? _GEN_190 : dirty_1_3; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_224 = way1_hit ? _GEN_191 : dirty_1_4; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_225 = way1_hit ? _GEN_192 : dirty_1_5; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_226 = way1_hit ? _GEN_193 : dirty_1_6; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_227 = way1_hit ? _GEN_194 : dirty_1_7; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_228 = way1_hit ? _GEN_195 : dirty_1_8; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_229 = way1_hit ? _GEN_196 : dirty_1_9; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_230 = way1_hit ? _GEN_197 : dirty_1_10; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_231 = way1_hit ? _GEN_198 : dirty_1_11; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_232 = way1_hit ? _GEN_199 : dirty_1_12; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_233 = way1_hit ? _GEN_200 : dirty_1_13; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_234 = way1_hit ? _GEN_201 : dirty_1_14; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_235 = way1_hit ? _GEN_202 : dirty_1_15; // @[d_cache.scala 124:33 33:26]
  wire [2:0] _GEN_236 = way0_hit ? 3'h0 : _GEN_203; // @[d_cache.scala 116:27 117:23]
  wire [511:0] _GEN_237 = way0_hit ? _GEN_123 : ram_0_0; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_238 = way0_hit ? _GEN_124 : ram_0_1; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_239 = way0_hit ? _GEN_125 : ram_0_2; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_240 = way0_hit ? _GEN_126 : ram_0_3; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_241 = way0_hit ? _GEN_127 : ram_0_4; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_242 = way0_hit ? _GEN_128 : ram_0_5; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_243 = way0_hit ? _GEN_129 : ram_0_6; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_244 = way0_hit ? _GEN_130 : ram_0_7; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_245 = way0_hit ? _GEN_131 : ram_0_8; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_246 = way0_hit ? _GEN_132 : ram_0_9; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_247 = way0_hit ? _GEN_133 : ram_0_10; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_248 = way0_hit ? _GEN_134 : ram_0_11; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_249 = way0_hit ? _GEN_135 : ram_0_12; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_250 = way0_hit ? _GEN_136 : ram_0_13; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_251 = way0_hit ? _GEN_137 : ram_0_14; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_252 = way0_hit ? _GEN_138 : ram_0_15; // @[d_cache.scala 116:27 19:24]
  wire  _GEN_253 = way0_hit ? _GEN_139 : dirty_0_0; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_254 = way0_hit ? _GEN_140 : dirty_0_1; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_255 = way0_hit ? _GEN_141 : dirty_0_2; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_256 = way0_hit ? _GEN_142 : dirty_0_3; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_257 = way0_hit ? _GEN_143 : dirty_0_4; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_258 = way0_hit ? _GEN_144 : dirty_0_5; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_259 = way0_hit ? _GEN_145 : dirty_0_6; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_260 = way0_hit ? _GEN_146 : dirty_0_7; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_261 = way0_hit ? _GEN_147 : dirty_0_8; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_262 = way0_hit ? _GEN_148 : dirty_0_9; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_263 = way0_hit ? _GEN_149 : dirty_0_10; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_264 = way0_hit ? _GEN_150 : dirty_0_11; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_265 = way0_hit ? _GEN_151 : dirty_0_12; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_266 = way0_hit ? _GEN_152 : dirty_0_13; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_267 = way0_hit ? _GEN_153 : dirty_0_14; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_268 = way0_hit ? _GEN_154 : dirty_0_15; // @[d_cache.scala 116:27 32:26]
  wire [511:0] _GEN_269 = way0_hit ? ram_1_0 : _GEN_204; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_270 = way0_hit ? ram_1_1 : _GEN_205; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_271 = way0_hit ? ram_1_2 : _GEN_206; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_272 = way0_hit ? ram_1_3 : _GEN_207; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_273 = way0_hit ? ram_1_4 : _GEN_208; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_274 = way0_hit ? ram_1_5 : _GEN_209; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_275 = way0_hit ? ram_1_6 : _GEN_210; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_276 = way0_hit ? ram_1_7 : _GEN_211; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_277 = way0_hit ? ram_1_8 : _GEN_212; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_278 = way0_hit ? ram_1_9 : _GEN_213; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_279 = way0_hit ? ram_1_10 : _GEN_214; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_280 = way0_hit ? ram_1_11 : _GEN_215; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_281 = way0_hit ? ram_1_12 : _GEN_216; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_282 = way0_hit ? ram_1_13 : _GEN_217; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_283 = way0_hit ? ram_1_14 : _GEN_218; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_284 = way0_hit ? ram_1_15 : _GEN_219; // @[d_cache.scala 116:27 20:24]
  wire  _GEN_285 = way0_hit ? dirty_1_0 : _GEN_220; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_286 = way0_hit ? dirty_1_1 : _GEN_221; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_287 = way0_hit ? dirty_1_2 : _GEN_222; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_288 = way0_hit ? dirty_1_3 : _GEN_223; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_289 = way0_hit ? dirty_1_4 : _GEN_224; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_290 = way0_hit ? dirty_1_5 : _GEN_225; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_291 = way0_hit ? dirty_1_6 : _GEN_226; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_292 = way0_hit ? dirty_1_7 : _GEN_227; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_293 = way0_hit ? dirty_1_8 : _GEN_228; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_294 = way0_hit ? dirty_1_9 : _GEN_229; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_295 = way0_hit ? dirty_1_10 : _GEN_230; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_296 = way0_hit ? dirty_1_11 : _GEN_231; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_297 = way0_hit ? dirty_1_12 : _GEN_232; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_298 = way0_hit ? dirty_1_13 : _GEN_233; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_299 = way0_hit ? dirty_1_14 : _GEN_234; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_300 = way0_hit ? dirty_1_15 : _GEN_235; // @[d_cache.scala 116:27 33:26]
  wire [63:0] _GEN_301 = 3'h0 == receive_num ? io_from_axi_rdata : receive_data_0; // @[d_cache.scala 141:{43,43} 42:31]
  wire [63:0] _GEN_302 = 3'h1 == receive_num ? io_from_axi_rdata : receive_data_1; // @[d_cache.scala 141:{43,43} 42:31]
  wire [63:0] _GEN_303 = 3'h2 == receive_num ? io_from_axi_rdata : receive_data_2; // @[d_cache.scala 141:{43,43} 42:31]
  wire [63:0] _GEN_304 = 3'h3 == receive_num ? io_from_axi_rdata : receive_data_3; // @[d_cache.scala 141:{43,43} 42:31]
  wire [63:0] _GEN_305 = 3'h4 == receive_num ? io_from_axi_rdata : receive_data_4; // @[d_cache.scala 141:{43,43} 42:31]
  wire [63:0] _GEN_306 = 3'h5 == receive_num ? io_from_axi_rdata : receive_data_5; // @[d_cache.scala 141:{43,43} 42:31]
  wire [63:0] _GEN_307 = 3'h6 == receive_num ? io_from_axi_rdata : receive_data_6; // @[d_cache.scala 141:{43,43} 42:31]
  wire [63:0] _GEN_308 = 3'h7 == receive_num ? io_from_axi_rdata : receive_data_7; // @[d_cache.scala 141:{43,43} 42:31]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[d_cache.scala 142:44]
  wire [2:0] _GEN_309 = io_from_axi_rlast ? 3'h5 : state; // @[d_cache.scala 143:40 144:27 84:24]
  wire [63:0] _GEN_310 = io_from_axi_rvalid ? _GEN_301 : receive_data_0; // @[d_cache.scala 140:37 42:31]
  wire [63:0] _GEN_311 = io_from_axi_rvalid ? _GEN_302 : receive_data_1; // @[d_cache.scala 140:37 42:31]
  wire [63:0] _GEN_312 = io_from_axi_rvalid ? _GEN_303 : receive_data_2; // @[d_cache.scala 140:37 42:31]
  wire [63:0] _GEN_313 = io_from_axi_rvalid ? _GEN_304 : receive_data_3; // @[d_cache.scala 140:37 42:31]
  wire [63:0] _GEN_314 = io_from_axi_rvalid ? _GEN_305 : receive_data_4; // @[d_cache.scala 140:37 42:31]
  wire [63:0] _GEN_315 = io_from_axi_rvalid ? _GEN_306 : receive_data_5; // @[d_cache.scala 140:37 42:31]
  wire [63:0] _GEN_316 = io_from_axi_rvalid ? _GEN_307 : receive_data_6; // @[d_cache.scala 140:37 42:31]
  wire [63:0] _GEN_317 = io_from_axi_rvalid ? _GEN_308 : receive_data_7; // @[d_cache.scala 140:37 42:31]
  wire [2:0] _GEN_318 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[d_cache.scala 140:37 142:29 43:30]
  wire [2:0] _GEN_319 = io_from_axi_rvalid ? _GEN_309 : state; // @[d_cache.scala 140:37 84:24]
  wire [2:0] _GEN_320 = io_from_axi_bvalid ? 3'h0 : state; // @[d_cache.scala 149:37 150:23 84:24]
  wire [511:0] _ram_0_T_7 = {receive_data_7,receive_data_6,receive_data_5,receive_data_4,receive_data_3,receive_data_2,
    receive_data_1,receive_data_0}; // @[Cat.scala 31:58]
  wire [511:0] _GEN_321 = 4'h0 == index[3:0] ? _ram_0_T_7 : ram_0_0; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_322 = 4'h1 == index[3:0] ? _ram_0_T_7 : ram_0_1; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_323 = 4'h2 == index[3:0] ? _ram_0_T_7 : ram_0_2; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_324 = 4'h3 == index[3:0] ? _ram_0_T_7 : ram_0_3; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_325 = 4'h4 == index[3:0] ? _ram_0_T_7 : ram_0_4; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_326 = 4'h5 == index[3:0] ? _ram_0_T_7 : ram_0_5; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_327 = 4'h6 == index[3:0] ? _ram_0_T_7 : ram_0_6; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_328 = 4'h7 == index[3:0] ? _ram_0_T_7 : ram_0_7; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_329 = 4'h8 == index[3:0] ? _ram_0_T_7 : ram_0_8; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_330 = 4'h9 == index[3:0] ? _ram_0_T_7 : ram_0_9; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_331 = 4'ha == index[3:0] ? _ram_0_T_7 : ram_0_10; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_332 = 4'hb == index[3:0] ? _ram_0_T_7 : ram_0_11; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_333 = 4'hc == index[3:0] ? _ram_0_T_7 : ram_0_12; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_334 = 4'hd == index[3:0] ? _ram_0_T_7 : ram_0_13; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_335 = 4'he == index[3:0] ? _ram_0_T_7 : ram_0_14; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_336 = 4'hf == index[3:0] ? _ram_0_T_7 : ram_0_15; // @[d_cache.scala 156:{30,30} 19:24]
  wire [31:0] _GEN_337 = 4'h0 == index[3:0] ? _GEN_2148 : tag_0_0; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_338 = 4'h1 == index[3:0] ? _GEN_2148 : tag_0_1; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_339 = 4'h2 == index[3:0] ? _GEN_2148 : tag_0_2; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_340 = 4'h3 == index[3:0] ? _GEN_2148 : tag_0_3; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_341 = 4'h4 == index[3:0] ? _GEN_2148 : tag_0_4; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_342 = 4'h5 == index[3:0] ? _GEN_2148 : tag_0_5; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_343 = 4'h6 == index[3:0] ? _GEN_2148 : tag_0_6; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_344 = 4'h7 == index[3:0] ? _GEN_2148 : tag_0_7; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_345 = 4'h8 == index[3:0] ? _GEN_2148 : tag_0_8; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_346 = 4'h9 == index[3:0] ? _GEN_2148 : tag_0_9; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_347 = 4'ha == index[3:0] ? _GEN_2148 : tag_0_10; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_348 = 4'hb == index[3:0] ? _GEN_2148 : tag_0_11; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_349 = 4'hc == index[3:0] ? _GEN_2148 : tag_0_12; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_350 = 4'hd == index[3:0] ? _GEN_2148 : tag_0_13; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_351 = 4'he == index[3:0] ? _GEN_2148 : tag_0_14; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_352 = 4'hf == index[3:0] ? _GEN_2148 : tag_0_15; // @[d_cache.scala 157:{30,30} 28:24]
  wire  _GEN_353 = _GEN_2169 | valid_0_0; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_354 = _GEN_2180 | valid_0_1; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_355 = _GEN_2185 | valid_0_2; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_356 = _GEN_2186 | valid_0_3; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_357 = _GEN_2189 | valid_0_4; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_358 = _GEN_2195 | valid_0_5; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_359 = _GEN_2196 | valid_0_6; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_360 = _GEN_2201 | valid_0_7; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_361 = _GEN_2202 | valid_0_8; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_362 = _GEN_2205 | valid_0_9; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_363 = _GEN_2216 | valid_0_10; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_364 = _GEN_2217 | valid_0_11; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_365 = _GEN_2222 | valid_0_12; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_366 = _GEN_2223 | valid_0_13; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_367 = _GEN_2226 | valid_0_14; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_368 = _GEN_2235 | valid_0_15; // @[d_cache.scala 158:{32,32} 30:26]
  wire [511:0] _GEN_369 = 4'h0 == index[3:0] ? _ram_0_T_7 : ram_1_0; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_370 = 4'h1 == index[3:0] ? _ram_0_T_7 : ram_1_1; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_371 = 4'h2 == index[3:0] ? _ram_0_T_7 : ram_1_2; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_372 = 4'h3 == index[3:0] ? _ram_0_T_7 : ram_1_3; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_373 = 4'h4 == index[3:0] ? _ram_0_T_7 : ram_1_4; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_374 = 4'h5 == index[3:0] ? _ram_0_T_7 : ram_1_5; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_375 = 4'h6 == index[3:0] ? _ram_0_T_7 : ram_1_6; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_376 = 4'h7 == index[3:0] ? _ram_0_T_7 : ram_1_7; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_377 = 4'h8 == index[3:0] ? _ram_0_T_7 : ram_1_8; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_378 = 4'h9 == index[3:0] ? _ram_0_T_7 : ram_1_9; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_379 = 4'ha == index[3:0] ? _ram_0_T_7 : ram_1_10; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_380 = 4'hb == index[3:0] ? _ram_0_T_7 : ram_1_11; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_381 = 4'hc == index[3:0] ? _ram_0_T_7 : ram_1_12; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_382 = 4'hd == index[3:0] ? _ram_0_T_7 : ram_1_13; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_383 = 4'he == index[3:0] ? _ram_0_T_7 : ram_1_14; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_384 = 4'hf == index[3:0] ? _ram_0_T_7 : ram_1_15; // @[d_cache.scala 162:{30,30} 20:24]
  wire [31:0] _GEN_385 = 4'h0 == index[3:0] ? _GEN_2148 : tag_1_0; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_386 = 4'h1 == index[3:0] ? _GEN_2148 : tag_1_1; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_387 = 4'h2 == index[3:0] ? _GEN_2148 : tag_1_2; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_388 = 4'h3 == index[3:0] ? _GEN_2148 : tag_1_3; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_389 = 4'h4 == index[3:0] ? _GEN_2148 : tag_1_4; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_390 = 4'h5 == index[3:0] ? _GEN_2148 : tag_1_5; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_391 = 4'h6 == index[3:0] ? _GEN_2148 : tag_1_6; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_392 = 4'h7 == index[3:0] ? _GEN_2148 : tag_1_7; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_393 = 4'h8 == index[3:0] ? _GEN_2148 : tag_1_8; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_394 = 4'h9 == index[3:0] ? _GEN_2148 : tag_1_9; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_395 = 4'ha == index[3:0] ? _GEN_2148 : tag_1_10; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_396 = 4'hb == index[3:0] ? _GEN_2148 : tag_1_11; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_397 = 4'hc == index[3:0] ? _GEN_2148 : tag_1_12; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_398 = 4'hd == index[3:0] ? _GEN_2148 : tag_1_13; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_399 = 4'he == index[3:0] ? _GEN_2148 : tag_1_14; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_400 = 4'hf == index[3:0] ? _GEN_2148 : tag_1_15; // @[d_cache.scala 163:{30,30} 29:24]
  wire  _GEN_401 = _GEN_2169 | valid_1_0; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_402 = _GEN_2180 | valid_1_1; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_403 = _GEN_2185 | valid_1_2; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_404 = _GEN_2186 | valid_1_3; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_405 = _GEN_2189 | valid_1_4; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_406 = _GEN_2195 | valid_1_5; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_407 = _GEN_2196 | valid_1_6; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_408 = _GEN_2201 | valid_1_7; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_409 = _GEN_2202 | valid_1_8; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_410 = _GEN_2205 | valid_1_9; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_411 = _GEN_2216 | valid_1_10; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_412 = _GEN_2217 | valid_1_11; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_413 = _GEN_2222 | valid_1_12; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_414 = _GEN_2223 | valid_1_13; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_415 = _GEN_2226 | valid_1_14; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_416 = _GEN_2235 | valid_1_15; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _T_32 = ~quene; // @[d_cache.scala 167:27]
  wire  _GEN_418 = 4'h1 == index[3:0] ? dirty_0_1 : dirty_0_0; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_419 = 4'h2 == index[3:0] ? dirty_0_2 : _GEN_418; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_420 = 4'h3 == index[3:0] ? dirty_0_3 : _GEN_419; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_421 = 4'h4 == index[3:0] ? dirty_0_4 : _GEN_420; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_422 = 4'h5 == index[3:0] ? dirty_0_5 : _GEN_421; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_423 = 4'h6 == index[3:0] ? dirty_0_6 : _GEN_422; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_424 = 4'h7 == index[3:0] ? dirty_0_7 : _GEN_423; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_425 = 4'h8 == index[3:0] ? dirty_0_8 : _GEN_424; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_426 = 4'h9 == index[3:0] ? dirty_0_9 : _GEN_425; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_427 = 4'ha == index[3:0] ? dirty_0_10 : _GEN_426; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_428 = 4'hb == index[3:0] ? dirty_0_11 : _GEN_427; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_429 = 4'hc == index[3:0] ? dirty_0_12 : _GEN_428; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_430 = 4'hd == index[3:0] ? dirty_0_13 : _GEN_429; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_431 = 4'he == index[3:0] ? dirty_0_14 : _GEN_430; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_432 = 4'hf == index[3:0] ? dirty_0_15 : _GEN_431; // @[d_cache.scala 169:{40,40}]
  wire [44:0] _write_back_addr_T_2 = {_GEN_15,index,6'h0}; // @[Cat.scala 31:58]
  wire  _GEN_497 = 4'h0 == index[3:0] ? 1'h0 : dirty_0_0; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_498 = 4'h1 == index[3:0] ? 1'h0 : dirty_0_1; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_499 = 4'h2 == index[3:0] ? 1'h0 : dirty_0_2; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_500 = 4'h3 == index[3:0] ? 1'h0 : dirty_0_3; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_501 = 4'h4 == index[3:0] ? 1'h0 : dirty_0_4; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_502 = 4'h5 == index[3:0] ? 1'h0 : dirty_0_5; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_503 = 4'h6 == index[3:0] ? 1'h0 : dirty_0_6; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_504 = 4'h7 == index[3:0] ? 1'h0 : dirty_0_7; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_505 = 4'h8 == index[3:0] ? 1'h0 : dirty_0_8; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_506 = 4'h9 == index[3:0] ? 1'h0 : dirty_0_9; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_507 = 4'ha == index[3:0] ? 1'h0 : dirty_0_10; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_508 = 4'hb == index[3:0] ? 1'h0 : dirty_0_11; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_509 = 4'hc == index[3:0] ? 1'h0 : dirty_0_12; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_510 = 4'hd == index[3:0] ? 1'h0 : dirty_0_13; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_511 = 4'he == index[3:0] ? 1'h0 : dirty_0_14; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_512 = 4'hf == index[3:0] ? 1'h0 : dirty_0_15; // @[d_cache.scala 174:{40,40} 32:26]
  wire [511:0] _GEN_577 = _GEN_432 ? _GEN_122 : write_back_data; // @[d_cache.scala 169:47 170:41 37:34]
  wire [44:0] _GEN_578 = _GEN_432 ? _write_back_addr_T_2 : {{13'd0}, write_back_addr}; // @[d_cache.scala 169:47 171:41 38:34]
  wire [511:0] _GEN_579 = _GEN_432 ? _GEN_321 : _GEN_321; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_580 = _GEN_432 ? _GEN_322 : _GEN_322; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_581 = _GEN_432 ? _GEN_323 : _GEN_323; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_582 = _GEN_432 ? _GEN_324 : _GEN_324; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_583 = _GEN_432 ? _GEN_325 : _GEN_325; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_584 = _GEN_432 ? _GEN_326 : _GEN_326; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_585 = _GEN_432 ? _GEN_327 : _GEN_327; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_586 = _GEN_432 ? _GEN_328 : _GEN_328; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_587 = _GEN_432 ? _GEN_329 : _GEN_329; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_588 = _GEN_432 ? _GEN_330 : _GEN_330; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_589 = _GEN_432 ? _GEN_331 : _GEN_331; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_590 = _GEN_432 ? _GEN_332 : _GEN_332; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_591 = _GEN_432 ? _GEN_333 : _GEN_333; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_592 = _GEN_432 ? _GEN_334 : _GEN_334; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_593 = _GEN_432 ? _GEN_335 : _GEN_335; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_594 = _GEN_432 ? _GEN_336 : _GEN_336; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_595 = _GEN_432 ? _GEN_337 : _GEN_337; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_596 = _GEN_432 ? _GEN_338 : _GEN_338; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_597 = _GEN_432 ? _GEN_339 : _GEN_339; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_598 = _GEN_432 ? _GEN_340 : _GEN_340; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_599 = _GEN_432 ? _GEN_341 : _GEN_341; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_600 = _GEN_432 ? _GEN_342 : _GEN_342; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_601 = _GEN_432 ? _GEN_343 : _GEN_343; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_602 = _GEN_432 ? _GEN_344 : _GEN_344; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_603 = _GEN_432 ? _GEN_345 : _GEN_345; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_604 = _GEN_432 ? _GEN_346 : _GEN_346; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_605 = _GEN_432 ? _GEN_347 : _GEN_347; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_606 = _GEN_432 ? _GEN_348 : _GEN_348; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_607 = _GEN_432 ? _GEN_349 : _GEN_349; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_608 = _GEN_432 ? _GEN_350 : _GEN_350; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_609 = _GEN_432 ? _GEN_351 : _GEN_351; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_610 = _GEN_432 ? _GEN_352 : _GEN_352; // @[d_cache.scala 169:47]
  wire  _GEN_611 = _GEN_432 ? _GEN_497 : dirty_0_0; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_612 = _GEN_432 ? _GEN_498 : dirty_0_1; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_613 = _GEN_432 ? _GEN_499 : dirty_0_2; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_614 = _GEN_432 ? _GEN_500 : dirty_0_3; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_615 = _GEN_432 ? _GEN_501 : dirty_0_4; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_616 = _GEN_432 ? _GEN_502 : dirty_0_5; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_617 = _GEN_432 ? _GEN_503 : dirty_0_6; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_618 = _GEN_432 ? _GEN_504 : dirty_0_7; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_619 = _GEN_432 ? _GEN_505 : dirty_0_8; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_620 = _GEN_432 ? _GEN_506 : dirty_0_9; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_621 = _GEN_432 ? _GEN_507 : dirty_0_10; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_622 = _GEN_432 ? _GEN_508 : dirty_0_11; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_623 = _GEN_432 ? _GEN_509 : dirty_0_12; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_624 = _GEN_432 ? _GEN_510 : dirty_0_13; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_625 = _GEN_432 ? _GEN_511 : dirty_0_14; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_626 = _GEN_432 ? _GEN_512 : dirty_0_15; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_627 = _GEN_432 ? _GEN_353 : _GEN_353; // @[d_cache.scala 169:47]
  wire  _GEN_628 = _GEN_432 ? _GEN_354 : _GEN_354; // @[d_cache.scala 169:47]
  wire  _GEN_629 = _GEN_432 ? _GEN_355 : _GEN_355; // @[d_cache.scala 169:47]
  wire  _GEN_630 = _GEN_432 ? _GEN_356 : _GEN_356; // @[d_cache.scala 169:47]
  wire  _GEN_631 = _GEN_432 ? _GEN_357 : _GEN_357; // @[d_cache.scala 169:47]
  wire  _GEN_632 = _GEN_432 ? _GEN_358 : _GEN_358; // @[d_cache.scala 169:47]
  wire  _GEN_633 = _GEN_432 ? _GEN_359 : _GEN_359; // @[d_cache.scala 169:47]
  wire  _GEN_634 = _GEN_432 ? _GEN_360 : _GEN_360; // @[d_cache.scala 169:47]
  wire  _GEN_635 = _GEN_432 ? _GEN_361 : _GEN_361; // @[d_cache.scala 169:47]
  wire  _GEN_636 = _GEN_432 ? _GEN_362 : _GEN_362; // @[d_cache.scala 169:47]
  wire  _GEN_637 = _GEN_432 ? _GEN_363 : _GEN_363; // @[d_cache.scala 169:47]
  wire  _GEN_638 = _GEN_432 ? _GEN_364 : _GEN_364; // @[d_cache.scala 169:47]
  wire  _GEN_639 = _GEN_432 ? _GEN_365 : _GEN_365; // @[d_cache.scala 169:47]
  wire  _GEN_640 = _GEN_432 ? _GEN_366 : _GEN_366; // @[d_cache.scala 169:47]
  wire  _GEN_641 = _GEN_432 ? _GEN_367 : _GEN_367; // @[d_cache.scala 169:47]
  wire  _GEN_642 = _GEN_432 ? _GEN_368 : _GEN_368; // @[d_cache.scala 169:47]
  wire [2:0] _GEN_643 = _GEN_432 ? 3'h6 : 3'h7; // @[d_cache.scala 169:47 176:31 179:31]
  wire  _GEN_646 = 4'h1 == index[3:0] ? dirty_1_1 : dirty_1_0; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_647 = 4'h2 == index[3:0] ? dirty_1_2 : _GEN_646; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_648 = 4'h3 == index[3:0] ? dirty_1_3 : _GEN_647; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_649 = 4'h4 == index[3:0] ? dirty_1_4 : _GEN_648; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_650 = 4'h5 == index[3:0] ? dirty_1_5 : _GEN_649; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_651 = 4'h6 == index[3:0] ? dirty_1_6 : _GEN_650; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_652 = 4'h7 == index[3:0] ? dirty_1_7 : _GEN_651; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_653 = 4'h8 == index[3:0] ? dirty_1_8 : _GEN_652; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_654 = 4'h9 == index[3:0] ? dirty_1_9 : _GEN_653; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_655 = 4'ha == index[3:0] ? dirty_1_10 : _GEN_654; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_656 = 4'hb == index[3:0] ? dirty_1_11 : _GEN_655; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_657 = 4'hc == index[3:0] ? dirty_1_12 : _GEN_656; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_658 = 4'hd == index[3:0] ? dirty_1_13 : _GEN_657; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_659 = 4'he == index[3:0] ? dirty_1_14 : _GEN_658; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_660 = 4'hf == index[3:0] ? dirty_1_15 : _GEN_659; // @[d_cache.scala 186:{40,40}]
  wire [44:0] _write_back_addr_T_5 = {_GEN_48,index,6'h0}; // @[Cat.scala 31:58]
  wire  _GEN_725 = 4'h0 == index[3:0] ? 1'h0 : dirty_1_0; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_726 = 4'h1 == index[3:0] ? 1'h0 : dirty_1_1; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_727 = 4'h2 == index[3:0] ? 1'h0 : dirty_1_2; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_728 = 4'h3 == index[3:0] ? 1'h0 : dirty_1_3; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_729 = 4'h4 == index[3:0] ? 1'h0 : dirty_1_4; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_730 = 4'h5 == index[3:0] ? 1'h0 : dirty_1_5; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_731 = 4'h6 == index[3:0] ? 1'h0 : dirty_1_6; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_732 = 4'h7 == index[3:0] ? 1'h0 : dirty_1_7; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_733 = 4'h8 == index[3:0] ? 1'h0 : dirty_1_8; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_734 = 4'h9 == index[3:0] ? 1'h0 : dirty_1_9; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_735 = 4'ha == index[3:0] ? 1'h0 : dirty_1_10; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_736 = 4'hb == index[3:0] ? 1'h0 : dirty_1_11; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_737 = 4'hc == index[3:0] ? 1'h0 : dirty_1_12; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_738 = 4'hd == index[3:0] ? 1'h0 : dirty_1_13; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_739 = 4'he == index[3:0] ? 1'h0 : dirty_1_14; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_740 = 4'hf == index[3:0] ? 1'h0 : dirty_1_15; // @[d_cache.scala 191:{40,40} 33:26]
  wire [511:0] _GEN_805 = _GEN_660 ? _GEN_170 : write_back_data; // @[d_cache.scala 186:47 187:41 37:34]
  wire [44:0] _GEN_806 = _GEN_660 ? _write_back_addr_T_5 : {{13'd0}, write_back_addr}; // @[d_cache.scala 186:47 188:41 38:34]
  wire [511:0] _GEN_807 = _GEN_660 ? _GEN_369 : _GEN_369; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_808 = _GEN_660 ? _GEN_370 : _GEN_370; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_809 = _GEN_660 ? _GEN_371 : _GEN_371; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_810 = _GEN_660 ? _GEN_372 : _GEN_372; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_811 = _GEN_660 ? _GEN_373 : _GEN_373; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_812 = _GEN_660 ? _GEN_374 : _GEN_374; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_813 = _GEN_660 ? _GEN_375 : _GEN_375; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_814 = _GEN_660 ? _GEN_376 : _GEN_376; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_815 = _GEN_660 ? _GEN_377 : _GEN_377; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_816 = _GEN_660 ? _GEN_378 : _GEN_378; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_817 = _GEN_660 ? _GEN_379 : _GEN_379; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_818 = _GEN_660 ? _GEN_380 : _GEN_380; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_819 = _GEN_660 ? _GEN_381 : _GEN_381; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_820 = _GEN_660 ? _GEN_382 : _GEN_382; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_821 = _GEN_660 ? _GEN_383 : _GEN_383; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_822 = _GEN_660 ? _GEN_384 : _GEN_384; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_823 = _GEN_660 ? _GEN_385 : _GEN_385; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_824 = _GEN_660 ? _GEN_386 : _GEN_386; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_825 = _GEN_660 ? _GEN_387 : _GEN_387; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_826 = _GEN_660 ? _GEN_388 : _GEN_388; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_827 = _GEN_660 ? _GEN_389 : _GEN_389; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_828 = _GEN_660 ? _GEN_390 : _GEN_390; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_829 = _GEN_660 ? _GEN_391 : _GEN_391; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_830 = _GEN_660 ? _GEN_392 : _GEN_392; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_831 = _GEN_660 ? _GEN_393 : _GEN_393; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_832 = _GEN_660 ? _GEN_394 : _GEN_394; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_833 = _GEN_660 ? _GEN_395 : _GEN_395; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_834 = _GEN_660 ? _GEN_396 : _GEN_396; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_835 = _GEN_660 ? _GEN_397 : _GEN_397; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_836 = _GEN_660 ? _GEN_398 : _GEN_398; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_837 = _GEN_660 ? _GEN_399 : _GEN_399; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_838 = _GEN_660 ? _GEN_400 : _GEN_400; // @[d_cache.scala 186:47]
  wire  _GEN_839 = _GEN_660 ? _GEN_725 : dirty_1_0; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_840 = _GEN_660 ? _GEN_726 : dirty_1_1; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_841 = _GEN_660 ? _GEN_727 : dirty_1_2; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_842 = _GEN_660 ? _GEN_728 : dirty_1_3; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_843 = _GEN_660 ? _GEN_729 : dirty_1_4; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_844 = _GEN_660 ? _GEN_730 : dirty_1_5; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_845 = _GEN_660 ? _GEN_731 : dirty_1_6; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_846 = _GEN_660 ? _GEN_732 : dirty_1_7; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_847 = _GEN_660 ? _GEN_733 : dirty_1_8; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_848 = _GEN_660 ? _GEN_734 : dirty_1_9; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_849 = _GEN_660 ? _GEN_735 : dirty_1_10; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_850 = _GEN_660 ? _GEN_736 : dirty_1_11; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_851 = _GEN_660 ? _GEN_737 : dirty_1_12; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_852 = _GEN_660 ? _GEN_738 : dirty_1_13; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_853 = _GEN_660 ? _GEN_739 : dirty_1_14; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_854 = _GEN_660 ? _GEN_740 : dirty_1_15; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_855 = _GEN_660 ? _GEN_401 : _GEN_401; // @[d_cache.scala 186:47]
  wire  _GEN_856 = _GEN_660 ? _GEN_402 : _GEN_402; // @[d_cache.scala 186:47]
  wire  _GEN_857 = _GEN_660 ? _GEN_403 : _GEN_403; // @[d_cache.scala 186:47]
  wire  _GEN_858 = _GEN_660 ? _GEN_404 : _GEN_404; // @[d_cache.scala 186:47]
  wire  _GEN_859 = _GEN_660 ? _GEN_405 : _GEN_405; // @[d_cache.scala 186:47]
  wire  _GEN_860 = _GEN_660 ? _GEN_406 : _GEN_406; // @[d_cache.scala 186:47]
  wire  _GEN_861 = _GEN_660 ? _GEN_407 : _GEN_407; // @[d_cache.scala 186:47]
  wire  _GEN_862 = _GEN_660 ? _GEN_408 : _GEN_408; // @[d_cache.scala 186:47]
  wire  _GEN_863 = _GEN_660 ? _GEN_409 : _GEN_409; // @[d_cache.scala 186:47]
  wire  _GEN_864 = _GEN_660 ? _GEN_410 : _GEN_410; // @[d_cache.scala 186:47]
  wire  _GEN_865 = _GEN_660 ? _GEN_411 : _GEN_411; // @[d_cache.scala 186:47]
  wire  _GEN_866 = _GEN_660 ? _GEN_412 : _GEN_412; // @[d_cache.scala 186:47]
  wire  _GEN_867 = _GEN_660 ? _GEN_413 : _GEN_413; // @[d_cache.scala 186:47]
  wire  _GEN_868 = _GEN_660 ? _GEN_414 : _GEN_414; // @[d_cache.scala 186:47]
  wire  _GEN_869 = _GEN_660 ? _GEN_415 : _GEN_415; // @[d_cache.scala 186:47]
  wire  _GEN_870 = _GEN_660 ? _GEN_416 : _GEN_416; // @[d_cache.scala 186:47]
  wire [2:0] _GEN_871 = _GEN_660 ? 3'h6 : 3'h7; // @[d_cache.scala 186:47 193:31 196:31]
  wire [511:0] _GEN_873 = ~quene ? _GEN_577 : _GEN_805; // @[d_cache.scala 167:34]
  wire [44:0] _GEN_874 = ~quene ? _GEN_578 : _GEN_806; // @[d_cache.scala 167:34]
  wire [511:0] _GEN_875 = ~quene ? _GEN_579 : ram_0_0; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_876 = ~quene ? _GEN_580 : ram_0_1; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_877 = ~quene ? _GEN_581 : ram_0_2; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_878 = ~quene ? _GEN_582 : ram_0_3; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_879 = ~quene ? _GEN_583 : ram_0_4; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_880 = ~quene ? _GEN_584 : ram_0_5; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_881 = ~quene ? _GEN_585 : ram_0_6; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_882 = ~quene ? _GEN_586 : ram_0_7; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_883 = ~quene ? _GEN_587 : ram_0_8; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_884 = ~quene ? _GEN_588 : ram_0_9; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_885 = ~quene ? _GEN_589 : ram_0_10; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_886 = ~quene ? _GEN_590 : ram_0_11; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_887 = ~quene ? _GEN_591 : ram_0_12; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_888 = ~quene ? _GEN_592 : ram_0_13; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_889 = ~quene ? _GEN_593 : ram_0_14; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_890 = ~quene ? _GEN_594 : ram_0_15; // @[d_cache.scala 167:34 19:24]
  wire [31:0] _GEN_891 = ~quene ? _GEN_595 : tag_0_0; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_892 = ~quene ? _GEN_596 : tag_0_1; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_893 = ~quene ? _GEN_597 : tag_0_2; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_894 = ~quene ? _GEN_598 : tag_0_3; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_895 = ~quene ? _GEN_599 : tag_0_4; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_896 = ~quene ? _GEN_600 : tag_0_5; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_897 = ~quene ? _GEN_601 : tag_0_6; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_898 = ~quene ? _GEN_602 : tag_0_7; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_899 = ~quene ? _GEN_603 : tag_0_8; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_900 = ~quene ? _GEN_604 : tag_0_9; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_901 = ~quene ? _GEN_605 : tag_0_10; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_902 = ~quene ? _GEN_606 : tag_0_11; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_903 = ~quene ? _GEN_607 : tag_0_12; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_904 = ~quene ? _GEN_608 : tag_0_13; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_905 = ~quene ? _GEN_609 : tag_0_14; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_906 = ~quene ? _GEN_610 : tag_0_15; // @[d_cache.scala 167:34 28:24]
  wire  _GEN_907 = ~quene ? _GEN_611 : dirty_0_0; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_908 = ~quene ? _GEN_612 : dirty_0_1; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_909 = ~quene ? _GEN_613 : dirty_0_2; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_910 = ~quene ? _GEN_614 : dirty_0_3; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_911 = ~quene ? _GEN_615 : dirty_0_4; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_912 = ~quene ? _GEN_616 : dirty_0_5; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_913 = ~quene ? _GEN_617 : dirty_0_6; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_914 = ~quene ? _GEN_618 : dirty_0_7; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_915 = ~quene ? _GEN_619 : dirty_0_8; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_916 = ~quene ? _GEN_620 : dirty_0_9; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_917 = ~quene ? _GEN_621 : dirty_0_10; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_918 = ~quene ? _GEN_622 : dirty_0_11; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_919 = ~quene ? _GEN_623 : dirty_0_12; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_920 = ~quene ? _GEN_624 : dirty_0_13; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_921 = ~quene ? _GEN_625 : dirty_0_14; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_922 = ~quene ? _GEN_626 : dirty_0_15; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_923 = ~quene ? _GEN_627 : valid_0_0; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_924 = ~quene ? _GEN_628 : valid_0_1; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_925 = ~quene ? _GEN_629 : valid_0_2; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_926 = ~quene ? _GEN_630 : valid_0_3; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_927 = ~quene ? _GEN_631 : valid_0_4; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_928 = ~quene ? _GEN_632 : valid_0_5; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_929 = ~quene ? _GEN_633 : valid_0_6; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_930 = ~quene ? _GEN_634 : valid_0_7; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_931 = ~quene ? _GEN_635 : valid_0_8; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_932 = ~quene ? _GEN_636 : valid_0_9; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_933 = ~quene ? _GEN_637 : valid_0_10; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_934 = ~quene ? _GEN_638 : valid_0_11; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_935 = ~quene ? _GEN_639 : valid_0_12; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_936 = ~quene ? _GEN_640 : valid_0_13; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_937 = ~quene ? _GEN_641 : valid_0_14; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_938 = ~quene ? _GEN_642 : valid_0_15; // @[d_cache.scala 167:34 30:26]
  wire [2:0] _GEN_939 = ~quene ? _GEN_643 : _GEN_871; // @[d_cache.scala 167:34]
  wire [511:0] _GEN_941 = ~quene ? ram_1_0 : _GEN_807; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_942 = ~quene ? ram_1_1 : _GEN_808; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_943 = ~quene ? ram_1_2 : _GEN_809; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_944 = ~quene ? ram_1_3 : _GEN_810; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_945 = ~quene ? ram_1_4 : _GEN_811; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_946 = ~quene ? ram_1_5 : _GEN_812; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_947 = ~quene ? ram_1_6 : _GEN_813; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_948 = ~quene ? ram_1_7 : _GEN_814; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_949 = ~quene ? ram_1_8 : _GEN_815; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_950 = ~quene ? ram_1_9 : _GEN_816; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_951 = ~quene ? ram_1_10 : _GEN_817; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_952 = ~quene ? ram_1_11 : _GEN_818; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_953 = ~quene ? ram_1_12 : _GEN_819; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_954 = ~quene ? ram_1_13 : _GEN_820; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_955 = ~quene ? ram_1_14 : _GEN_821; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_956 = ~quene ? ram_1_15 : _GEN_822; // @[d_cache.scala 167:34 20:24]
  wire [31:0] _GEN_957 = ~quene ? tag_1_0 : _GEN_823; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_958 = ~quene ? tag_1_1 : _GEN_824; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_959 = ~quene ? tag_1_2 : _GEN_825; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_960 = ~quene ? tag_1_3 : _GEN_826; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_961 = ~quene ? tag_1_4 : _GEN_827; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_962 = ~quene ? tag_1_5 : _GEN_828; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_963 = ~quene ? tag_1_6 : _GEN_829; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_964 = ~quene ? tag_1_7 : _GEN_830; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_965 = ~quene ? tag_1_8 : _GEN_831; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_966 = ~quene ? tag_1_9 : _GEN_832; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_967 = ~quene ? tag_1_10 : _GEN_833; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_968 = ~quene ? tag_1_11 : _GEN_834; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_969 = ~quene ? tag_1_12 : _GEN_835; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_970 = ~quene ? tag_1_13 : _GEN_836; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_971 = ~quene ? tag_1_14 : _GEN_837; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_972 = ~quene ? tag_1_15 : _GEN_838; // @[d_cache.scala 167:34 29:24]
  wire  _GEN_973 = ~quene ? dirty_1_0 : _GEN_839; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_974 = ~quene ? dirty_1_1 : _GEN_840; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_975 = ~quene ? dirty_1_2 : _GEN_841; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_976 = ~quene ? dirty_1_3 : _GEN_842; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_977 = ~quene ? dirty_1_4 : _GEN_843; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_978 = ~quene ? dirty_1_5 : _GEN_844; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_979 = ~quene ? dirty_1_6 : _GEN_845; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_980 = ~quene ? dirty_1_7 : _GEN_846; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_981 = ~quene ? dirty_1_8 : _GEN_847; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_982 = ~quene ? dirty_1_9 : _GEN_848; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_983 = ~quene ? dirty_1_10 : _GEN_849; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_984 = ~quene ? dirty_1_11 : _GEN_850; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_985 = ~quene ? dirty_1_12 : _GEN_851; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_986 = ~quene ? dirty_1_13 : _GEN_852; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_987 = ~quene ? dirty_1_14 : _GEN_853; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_988 = ~quene ? dirty_1_15 : _GEN_854; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_989 = ~quene ? valid_1_0 : _GEN_855; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_990 = ~quene ? valid_1_1 : _GEN_856; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_991 = ~quene ? valid_1_2 : _GEN_857; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_992 = ~quene ? valid_1_3 : _GEN_858; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_993 = ~quene ? valid_1_4 : _GEN_859; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_994 = ~quene ? valid_1_5 : _GEN_860; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_995 = ~quene ? valid_1_6 : _GEN_861; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_996 = ~quene ? valid_1_7 : _GEN_862; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_997 = ~quene ? valid_1_8 : _GEN_863; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_998 = ~quene ? valid_1_9 : _GEN_864; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_999 = ~quene ? valid_1_10 : _GEN_865; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_1000 = ~quene ? valid_1_11 : _GEN_866; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_1001 = ~quene ? valid_1_12 : _GEN_867; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_1002 = ~quene ? valid_1_13 : _GEN_868; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_1003 = ~quene ? valid_1_14 : _GEN_869; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_1004 = ~quene ? valid_1_15 : _GEN_870; // @[d_cache.scala 167:34 31:26]
  wire [2:0] _GEN_1005 = unuse_way == 2'h2 ? 3'h7 : _GEN_939; // @[d_cache.scala 160:40 161:23]
  wire [511:0] _GEN_1006 = unuse_way == 2'h2 ? _GEN_369 : _GEN_941; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_1007 = unuse_way == 2'h2 ? _GEN_370 : _GEN_942; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_1008 = unuse_way == 2'h2 ? _GEN_371 : _GEN_943; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_1009 = unuse_way == 2'h2 ? _GEN_372 : _GEN_944; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_1010 = unuse_way == 2'h2 ? _GEN_373 : _GEN_945; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_1011 = unuse_way == 2'h2 ? _GEN_374 : _GEN_946; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_1012 = unuse_way == 2'h2 ? _GEN_375 : _GEN_947; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_1013 = unuse_way == 2'h2 ? _GEN_376 : _GEN_948; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_1014 = unuse_way == 2'h2 ? _GEN_377 : _GEN_949; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_1015 = unuse_way == 2'h2 ? _GEN_378 : _GEN_950; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_1016 = unuse_way == 2'h2 ? _GEN_379 : _GEN_951; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_1017 = unuse_way == 2'h2 ? _GEN_380 : _GEN_952; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_1018 = unuse_way == 2'h2 ? _GEN_381 : _GEN_953; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_1019 = unuse_way == 2'h2 ? _GEN_382 : _GEN_954; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_1020 = unuse_way == 2'h2 ? _GEN_383 : _GEN_955; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_1021 = unuse_way == 2'h2 ? _GEN_384 : _GEN_956; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1022 = unuse_way == 2'h2 ? _GEN_385 : _GEN_957; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1023 = unuse_way == 2'h2 ? _GEN_386 : _GEN_958; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1024 = unuse_way == 2'h2 ? _GEN_387 : _GEN_959; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1025 = unuse_way == 2'h2 ? _GEN_388 : _GEN_960; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1026 = unuse_way == 2'h2 ? _GEN_389 : _GEN_961; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1027 = unuse_way == 2'h2 ? _GEN_390 : _GEN_962; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1028 = unuse_way == 2'h2 ? _GEN_391 : _GEN_963; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1029 = unuse_way == 2'h2 ? _GEN_392 : _GEN_964; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1030 = unuse_way == 2'h2 ? _GEN_393 : _GEN_965; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1031 = unuse_way == 2'h2 ? _GEN_394 : _GEN_966; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1032 = unuse_way == 2'h2 ? _GEN_395 : _GEN_967; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1033 = unuse_way == 2'h2 ? _GEN_396 : _GEN_968; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1034 = unuse_way == 2'h2 ? _GEN_397 : _GEN_969; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1035 = unuse_way == 2'h2 ? _GEN_398 : _GEN_970; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1036 = unuse_way == 2'h2 ? _GEN_399 : _GEN_971; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_1037 = unuse_way == 2'h2 ? _GEN_400 : _GEN_972; // @[d_cache.scala 160:40]
  wire  _GEN_1038 = unuse_way == 2'h2 ? _GEN_401 : _GEN_989; // @[d_cache.scala 160:40]
  wire  _GEN_1039 = unuse_way == 2'h2 ? _GEN_402 : _GEN_990; // @[d_cache.scala 160:40]
  wire  _GEN_1040 = unuse_way == 2'h2 ? _GEN_403 : _GEN_991; // @[d_cache.scala 160:40]
  wire  _GEN_1041 = unuse_way == 2'h2 ? _GEN_404 : _GEN_992; // @[d_cache.scala 160:40]
  wire  _GEN_1042 = unuse_way == 2'h2 ? _GEN_405 : _GEN_993; // @[d_cache.scala 160:40]
  wire  _GEN_1043 = unuse_way == 2'h2 ? _GEN_406 : _GEN_994; // @[d_cache.scala 160:40]
  wire  _GEN_1044 = unuse_way == 2'h2 ? _GEN_407 : _GEN_995; // @[d_cache.scala 160:40]
  wire  _GEN_1045 = unuse_way == 2'h2 ? _GEN_408 : _GEN_996; // @[d_cache.scala 160:40]
  wire  _GEN_1046 = unuse_way == 2'h2 ? _GEN_409 : _GEN_997; // @[d_cache.scala 160:40]
  wire  _GEN_1047 = unuse_way == 2'h2 ? _GEN_410 : _GEN_998; // @[d_cache.scala 160:40]
  wire  _GEN_1048 = unuse_way == 2'h2 ? _GEN_411 : _GEN_999; // @[d_cache.scala 160:40]
  wire  _GEN_1049 = unuse_way == 2'h2 ? _GEN_412 : _GEN_1000; // @[d_cache.scala 160:40]
  wire  _GEN_1050 = unuse_way == 2'h2 ? _GEN_413 : _GEN_1001; // @[d_cache.scala 160:40]
  wire  _GEN_1051 = unuse_way == 2'h2 ? _GEN_414 : _GEN_1002; // @[d_cache.scala 160:40]
  wire  _GEN_1052 = unuse_way == 2'h2 ? _GEN_415 : _GEN_1003; // @[d_cache.scala 160:40]
  wire  _GEN_1053 = unuse_way == 2'h2 ? _GEN_416 : _GEN_1004; // @[d_cache.scala 160:40]
  wire  _GEN_1054 = unuse_way == 2'h2 ? 1'h0 : _T_32; // @[d_cache.scala 160:40 165:23]
  wire [511:0] _GEN_1055 = unuse_way == 2'h2 ? write_back_data : _GEN_873; // @[d_cache.scala 160:40 37:34]
  wire [44:0] _GEN_1056 = unuse_way == 2'h2 ? {{13'd0}, write_back_addr} : _GEN_874; // @[d_cache.scala 160:40 38:34]
  wire [511:0] _GEN_1057 = unuse_way == 2'h2 ? ram_0_0 : _GEN_875; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_1058 = unuse_way == 2'h2 ? ram_0_1 : _GEN_876; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_1059 = unuse_way == 2'h2 ? ram_0_2 : _GEN_877; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_1060 = unuse_way == 2'h2 ? ram_0_3 : _GEN_878; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_1061 = unuse_way == 2'h2 ? ram_0_4 : _GEN_879; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_1062 = unuse_way == 2'h2 ? ram_0_5 : _GEN_880; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_1063 = unuse_way == 2'h2 ? ram_0_6 : _GEN_881; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_1064 = unuse_way == 2'h2 ? ram_0_7 : _GEN_882; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_1065 = unuse_way == 2'h2 ? ram_0_8 : _GEN_883; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_1066 = unuse_way == 2'h2 ? ram_0_9 : _GEN_884; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_1067 = unuse_way == 2'h2 ? ram_0_10 : _GEN_885; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_1068 = unuse_way == 2'h2 ? ram_0_11 : _GEN_886; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_1069 = unuse_way == 2'h2 ? ram_0_12 : _GEN_887; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_1070 = unuse_way == 2'h2 ? ram_0_13 : _GEN_888; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_1071 = unuse_way == 2'h2 ? ram_0_14 : _GEN_889; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_1072 = unuse_way == 2'h2 ? ram_0_15 : _GEN_890; // @[d_cache.scala 160:40 19:24]
  wire [31:0] _GEN_1073 = unuse_way == 2'h2 ? tag_0_0 : _GEN_891; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_1074 = unuse_way == 2'h2 ? tag_0_1 : _GEN_892; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_1075 = unuse_way == 2'h2 ? tag_0_2 : _GEN_893; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_1076 = unuse_way == 2'h2 ? tag_0_3 : _GEN_894; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_1077 = unuse_way == 2'h2 ? tag_0_4 : _GEN_895; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_1078 = unuse_way == 2'h2 ? tag_0_5 : _GEN_896; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_1079 = unuse_way == 2'h2 ? tag_0_6 : _GEN_897; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_1080 = unuse_way == 2'h2 ? tag_0_7 : _GEN_898; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_1081 = unuse_way == 2'h2 ? tag_0_8 : _GEN_899; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_1082 = unuse_way == 2'h2 ? tag_0_9 : _GEN_900; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_1083 = unuse_way == 2'h2 ? tag_0_10 : _GEN_901; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_1084 = unuse_way == 2'h2 ? tag_0_11 : _GEN_902; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_1085 = unuse_way == 2'h2 ? tag_0_12 : _GEN_903; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_1086 = unuse_way == 2'h2 ? tag_0_13 : _GEN_904; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_1087 = unuse_way == 2'h2 ? tag_0_14 : _GEN_905; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_1088 = unuse_way == 2'h2 ? tag_0_15 : _GEN_906; // @[d_cache.scala 160:40 28:24]
  wire  _GEN_1089 = unuse_way == 2'h2 ? dirty_0_0 : _GEN_907; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1090 = unuse_way == 2'h2 ? dirty_0_1 : _GEN_908; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1091 = unuse_way == 2'h2 ? dirty_0_2 : _GEN_909; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1092 = unuse_way == 2'h2 ? dirty_0_3 : _GEN_910; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1093 = unuse_way == 2'h2 ? dirty_0_4 : _GEN_911; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1094 = unuse_way == 2'h2 ? dirty_0_5 : _GEN_912; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1095 = unuse_way == 2'h2 ? dirty_0_6 : _GEN_913; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1096 = unuse_way == 2'h2 ? dirty_0_7 : _GEN_914; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1097 = unuse_way == 2'h2 ? dirty_0_8 : _GEN_915; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1098 = unuse_way == 2'h2 ? dirty_0_9 : _GEN_916; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1099 = unuse_way == 2'h2 ? dirty_0_10 : _GEN_917; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1100 = unuse_way == 2'h2 ? dirty_0_11 : _GEN_918; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1101 = unuse_way == 2'h2 ? dirty_0_12 : _GEN_919; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1102 = unuse_way == 2'h2 ? dirty_0_13 : _GEN_920; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1103 = unuse_way == 2'h2 ? dirty_0_14 : _GEN_921; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1104 = unuse_way == 2'h2 ? dirty_0_15 : _GEN_922; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1105 = unuse_way == 2'h2 ? valid_0_0 : _GEN_923; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1106 = unuse_way == 2'h2 ? valid_0_1 : _GEN_924; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1107 = unuse_way == 2'h2 ? valid_0_2 : _GEN_925; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1108 = unuse_way == 2'h2 ? valid_0_3 : _GEN_926; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1109 = unuse_way == 2'h2 ? valid_0_4 : _GEN_927; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1110 = unuse_way == 2'h2 ? valid_0_5 : _GEN_928; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1111 = unuse_way == 2'h2 ? valid_0_6 : _GEN_929; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1112 = unuse_way == 2'h2 ? valid_0_7 : _GEN_930; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1113 = unuse_way == 2'h2 ? valid_0_8 : _GEN_931; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1114 = unuse_way == 2'h2 ? valid_0_9 : _GEN_932; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1115 = unuse_way == 2'h2 ? valid_0_10 : _GEN_933; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1116 = unuse_way == 2'h2 ? valid_0_11 : _GEN_934; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1117 = unuse_way == 2'h2 ? valid_0_12 : _GEN_935; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1118 = unuse_way == 2'h2 ? valid_0_13 : _GEN_936; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1119 = unuse_way == 2'h2 ? valid_0_14 : _GEN_937; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1120 = unuse_way == 2'h2 ? valid_0_15 : _GEN_938; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1121 = unuse_way == 2'h2 ? dirty_1_0 : _GEN_973; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1122 = unuse_way == 2'h2 ? dirty_1_1 : _GEN_974; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1123 = unuse_way == 2'h2 ? dirty_1_2 : _GEN_975; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1124 = unuse_way == 2'h2 ? dirty_1_3 : _GEN_976; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1125 = unuse_way == 2'h2 ? dirty_1_4 : _GEN_977; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1126 = unuse_way == 2'h2 ? dirty_1_5 : _GEN_978; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1127 = unuse_way == 2'h2 ? dirty_1_6 : _GEN_979; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1128 = unuse_way == 2'h2 ? dirty_1_7 : _GEN_980; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1129 = unuse_way == 2'h2 ? dirty_1_8 : _GEN_981; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1130 = unuse_way == 2'h2 ? dirty_1_9 : _GEN_982; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1131 = unuse_way == 2'h2 ? dirty_1_10 : _GEN_983; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1132 = unuse_way == 2'h2 ? dirty_1_11 : _GEN_984; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1133 = unuse_way == 2'h2 ? dirty_1_12 : _GEN_985; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1134 = unuse_way == 2'h2 ? dirty_1_13 : _GEN_986; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1135 = unuse_way == 2'h2 ? dirty_1_14 : _GEN_987; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1136 = unuse_way == 2'h2 ? dirty_1_15 : _GEN_988; // @[d_cache.scala 160:40 33:26]
  wire [2:0] _GEN_1137 = unuse_way == 2'h1 ? 3'h7 : _GEN_1005; // @[d_cache.scala 154:34 155:23]
  wire [511:0] _GEN_1138 = unuse_way == 2'h1 ? _GEN_321 : _GEN_1057; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1139 = unuse_way == 2'h1 ? _GEN_322 : _GEN_1058; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1140 = unuse_way == 2'h1 ? _GEN_323 : _GEN_1059; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1141 = unuse_way == 2'h1 ? _GEN_324 : _GEN_1060; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1142 = unuse_way == 2'h1 ? _GEN_325 : _GEN_1061; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1143 = unuse_way == 2'h1 ? _GEN_326 : _GEN_1062; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1144 = unuse_way == 2'h1 ? _GEN_327 : _GEN_1063; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1145 = unuse_way == 2'h1 ? _GEN_328 : _GEN_1064; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1146 = unuse_way == 2'h1 ? _GEN_329 : _GEN_1065; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1147 = unuse_way == 2'h1 ? _GEN_330 : _GEN_1066; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1148 = unuse_way == 2'h1 ? _GEN_331 : _GEN_1067; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1149 = unuse_way == 2'h1 ? _GEN_332 : _GEN_1068; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1150 = unuse_way == 2'h1 ? _GEN_333 : _GEN_1069; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1151 = unuse_way == 2'h1 ? _GEN_334 : _GEN_1070; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1152 = unuse_way == 2'h1 ? _GEN_335 : _GEN_1071; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1153 = unuse_way == 2'h1 ? _GEN_336 : _GEN_1072; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1154 = unuse_way == 2'h1 ? _GEN_337 : _GEN_1073; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1155 = unuse_way == 2'h1 ? _GEN_338 : _GEN_1074; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1156 = unuse_way == 2'h1 ? _GEN_339 : _GEN_1075; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1157 = unuse_way == 2'h1 ? _GEN_340 : _GEN_1076; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1158 = unuse_way == 2'h1 ? _GEN_341 : _GEN_1077; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1159 = unuse_way == 2'h1 ? _GEN_342 : _GEN_1078; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1160 = unuse_way == 2'h1 ? _GEN_343 : _GEN_1079; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1161 = unuse_way == 2'h1 ? _GEN_344 : _GEN_1080; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1162 = unuse_way == 2'h1 ? _GEN_345 : _GEN_1081; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1163 = unuse_way == 2'h1 ? _GEN_346 : _GEN_1082; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1164 = unuse_way == 2'h1 ? _GEN_347 : _GEN_1083; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1165 = unuse_way == 2'h1 ? _GEN_348 : _GEN_1084; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1166 = unuse_way == 2'h1 ? _GEN_349 : _GEN_1085; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1167 = unuse_way == 2'h1 ? _GEN_350 : _GEN_1086; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1168 = unuse_way == 2'h1 ? _GEN_351 : _GEN_1087; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1169 = unuse_way == 2'h1 ? _GEN_352 : _GEN_1088; // @[d_cache.scala 154:34]
  wire  _GEN_1170 = unuse_way == 2'h1 ? _GEN_353 : _GEN_1105; // @[d_cache.scala 154:34]
  wire  _GEN_1171 = unuse_way == 2'h1 ? _GEN_354 : _GEN_1106; // @[d_cache.scala 154:34]
  wire  _GEN_1172 = unuse_way == 2'h1 ? _GEN_355 : _GEN_1107; // @[d_cache.scala 154:34]
  wire  _GEN_1173 = unuse_way == 2'h1 ? _GEN_356 : _GEN_1108; // @[d_cache.scala 154:34]
  wire  _GEN_1174 = unuse_way == 2'h1 ? _GEN_357 : _GEN_1109; // @[d_cache.scala 154:34]
  wire  _GEN_1175 = unuse_way == 2'h1 ? _GEN_358 : _GEN_1110; // @[d_cache.scala 154:34]
  wire  _GEN_1176 = unuse_way == 2'h1 ? _GEN_359 : _GEN_1111; // @[d_cache.scala 154:34]
  wire  _GEN_1177 = unuse_way == 2'h1 ? _GEN_360 : _GEN_1112; // @[d_cache.scala 154:34]
  wire  _GEN_1178 = unuse_way == 2'h1 ? _GEN_361 : _GEN_1113; // @[d_cache.scala 154:34]
  wire  _GEN_1179 = unuse_way == 2'h1 ? _GEN_362 : _GEN_1114; // @[d_cache.scala 154:34]
  wire  _GEN_1180 = unuse_way == 2'h1 ? _GEN_363 : _GEN_1115; // @[d_cache.scala 154:34]
  wire  _GEN_1181 = unuse_way == 2'h1 ? _GEN_364 : _GEN_1116; // @[d_cache.scala 154:34]
  wire  _GEN_1182 = unuse_way == 2'h1 ? _GEN_365 : _GEN_1117; // @[d_cache.scala 154:34]
  wire  _GEN_1183 = unuse_way == 2'h1 ? _GEN_366 : _GEN_1118; // @[d_cache.scala 154:34]
  wire  _GEN_1184 = unuse_way == 2'h1 ? _GEN_367 : _GEN_1119; // @[d_cache.scala 154:34]
  wire  _GEN_1185 = unuse_way == 2'h1 ? _GEN_368 : _GEN_1120; // @[d_cache.scala 154:34]
  wire  _GEN_1186 = unuse_way == 2'h1 | _GEN_1054; // @[d_cache.scala 154:34 159:23]
  wire [511:0] _GEN_1187 = unuse_way == 2'h1 ? ram_1_0 : _GEN_1006; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1188 = unuse_way == 2'h1 ? ram_1_1 : _GEN_1007; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1189 = unuse_way == 2'h1 ? ram_1_2 : _GEN_1008; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1190 = unuse_way == 2'h1 ? ram_1_3 : _GEN_1009; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1191 = unuse_way == 2'h1 ? ram_1_4 : _GEN_1010; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1192 = unuse_way == 2'h1 ? ram_1_5 : _GEN_1011; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1193 = unuse_way == 2'h1 ? ram_1_6 : _GEN_1012; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1194 = unuse_way == 2'h1 ? ram_1_7 : _GEN_1013; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1195 = unuse_way == 2'h1 ? ram_1_8 : _GEN_1014; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1196 = unuse_way == 2'h1 ? ram_1_9 : _GEN_1015; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1197 = unuse_way == 2'h1 ? ram_1_10 : _GEN_1016; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1198 = unuse_way == 2'h1 ? ram_1_11 : _GEN_1017; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1199 = unuse_way == 2'h1 ? ram_1_12 : _GEN_1018; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1200 = unuse_way == 2'h1 ? ram_1_13 : _GEN_1019; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1201 = unuse_way == 2'h1 ? ram_1_14 : _GEN_1020; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1202 = unuse_way == 2'h1 ? ram_1_15 : _GEN_1021; // @[d_cache.scala 154:34 20:24]
  wire [31:0] _GEN_1203 = unuse_way == 2'h1 ? tag_1_0 : _GEN_1022; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1204 = unuse_way == 2'h1 ? tag_1_1 : _GEN_1023; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1205 = unuse_way == 2'h1 ? tag_1_2 : _GEN_1024; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1206 = unuse_way == 2'h1 ? tag_1_3 : _GEN_1025; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1207 = unuse_way == 2'h1 ? tag_1_4 : _GEN_1026; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1208 = unuse_way == 2'h1 ? tag_1_5 : _GEN_1027; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1209 = unuse_way == 2'h1 ? tag_1_6 : _GEN_1028; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1210 = unuse_way == 2'h1 ? tag_1_7 : _GEN_1029; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1211 = unuse_way == 2'h1 ? tag_1_8 : _GEN_1030; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1212 = unuse_way == 2'h1 ? tag_1_9 : _GEN_1031; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1213 = unuse_way == 2'h1 ? tag_1_10 : _GEN_1032; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1214 = unuse_way == 2'h1 ? tag_1_11 : _GEN_1033; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1215 = unuse_way == 2'h1 ? tag_1_12 : _GEN_1034; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1216 = unuse_way == 2'h1 ? tag_1_13 : _GEN_1035; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1217 = unuse_way == 2'h1 ? tag_1_14 : _GEN_1036; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1218 = unuse_way == 2'h1 ? tag_1_15 : _GEN_1037; // @[d_cache.scala 154:34 29:24]
  wire  _GEN_1219 = unuse_way == 2'h1 ? valid_1_0 : _GEN_1038; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1220 = unuse_way == 2'h1 ? valid_1_1 : _GEN_1039; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1221 = unuse_way == 2'h1 ? valid_1_2 : _GEN_1040; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1222 = unuse_way == 2'h1 ? valid_1_3 : _GEN_1041; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1223 = unuse_way == 2'h1 ? valid_1_4 : _GEN_1042; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1224 = unuse_way == 2'h1 ? valid_1_5 : _GEN_1043; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1225 = unuse_way == 2'h1 ? valid_1_6 : _GEN_1044; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1226 = unuse_way == 2'h1 ? valid_1_7 : _GEN_1045; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1227 = unuse_way == 2'h1 ? valid_1_8 : _GEN_1046; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1228 = unuse_way == 2'h1 ? valid_1_9 : _GEN_1047; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1229 = unuse_way == 2'h1 ? valid_1_10 : _GEN_1048; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1230 = unuse_way == 2'h1 ? valid_1_11 : _GEN_1049; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1231 = unuse_way == 2'h1 ? valid_1_12 : _GEN_1050; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1232 = unuse_way == 2'h1 ? valid_1_13 : _GEN_1051; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1233 = unuse_way == 2'h1 ? valid_1_14 : _GEN_1052; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1234 = unuse_way == 2'h1 ? valid_1_15 : _GEN_1053; // @[d_cache.scala 154:34 31:26]
  wire [511:0] _GEN_1235 = unuse_way == 2'h1 ? write_back_data : _GEN_1055; // @[d_cache.scala 154:34 37:34]
  wire [44:0] _GEN_1236 = unuse_way == 2'h1 ? {{13'd0}, write_back_addr} : _GEN_1056; // @[d_cache.scala 154:34 38:34]
  wire  _GEN_1237 = unuse_way == 2'h1 ? dirty_0_0 : _GEN_1089; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1238 = unuse_way == 2'h1 ? dirty_0_1 : _GEN_1090; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1239 = unuse_way == 2'h1 ? dirty_0_2 : _GEN_1091; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1240 = unuse_way == 2'h1 ? dirty_0_3 : _GEN_1092; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1241 = unuse_way == 2'h1 ? dirty_0_4 : _GEN_1093; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1242 = unuse_way == 2'h1 ? dirty_0_5 : _GEN_1094; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1243 = unuse_way == 2'h1 ? dirty_0_6 : _GEN_1095; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1244 = unuse_way == 2'h1 ? dirty_0_7 : _GEN_1096; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1245 = unuse_way == 2'h1 ? dirty_0_8 : _GEN_1097; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1246 = unuse_way == 2'h1 ? dirty_0_9 : _GEN_1098; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1247 = unuse_way == 2'h1 ? dirty_0_10 : _GEN_1099; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1248 = unuse_way == 2'h1 ? dirty_0_11 : _GEN_1100; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1249 = unuse_way == 2'h1 ? dirty_0_12 : _GEN_1101; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1250 = unuse_way == 2'h1 ? dirty_0_13 : _GEN_1102; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1251 = unuse_way == 2'h1 ? dirty_0_14 : _GEN_1103; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1252 = unuse_way == 2'h1 ? dirty_0_15 : _GEN_1104; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1253 = unuse_way == 2'h1 ? dirty_1_0 : _GEN_1121; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1254 = unuse_way == 2'h1 ? dirty_1_1 : _GEN_1122; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1255 = unuse_way == 2'h1 ? dirty_1_2 : _GEN_1123; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1256 = unuse_way == 2'h1 ? dirty_1_3 : _GEN_1124; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1257 = unuse_way == 2'h1 ? dirty_1_4 : _GEN_1125; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1258 = unuse_way == 2'h1 ? dirty_1_5 : _GEN_1126; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1259 = unuse_way == 2'h1 ? dirty_1_6 : _GEN_1127; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1260 = unuse_way == 2'h1 ? dirty_1_7 : _GEN_1128; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1261 = unuse_way == 2'h1 ? dirty_1_8 : _GEN_1129; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1262 = unuse_way == 2'h1 ? dirty_1_9 : _GEN_1130; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1263 = unuse_way == 2'h1 ? dirty_1_10 : _GEN_1131; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1264 = unuse_way == 2'h1 ? dirty_1_11 : _GEN_1132; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1265 = unuse_way == 2'h1 ? dirty_1_12 : _GEN_1133; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1266 = unuse_way == 2'h1 ? dirty_1_13 : _GEN_1134; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1267 = unuse_way == 2'h1 ? dirty_1_14 : _GEN_1135; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1268 = unuse_way == 2'h1 ? dirty_1_15 : _GEN_1136; // @[d_cache.scala 154:34 33:26]
  wire [511:0] _write_back_data_T_2 = {{64'd0}, write_back_data[511:64]}; // @[d_cache.scala 207:52]
  wire [511:0] _GEN_1269 = io_from_axi_wready ? _write_back_data_T_2 : write_back_data; // @[d_cache.scala 206:37 207:33 37:34]
  wire [2:0] _GEN_1270 = io_from_axi_bvalid ? 3'h7 : state; // @[d_cache.scala 209:37 210:23 84:24]
  wire [2:0] _GEN_1271 = 3'h7 == state ? 3'h1 : state; // @[d_cache.scala 89:18 214:19 84:24]
  wire [511:0] _GEN_1272 = 3'h6 == state ? _GEN_1269 : write_back_data; // @[d_cache.scala 89:18 37:34]
  wire [2:0] _GEN_1273 = 3'h6 == state ? _GEN_1270 : _GEN_1271; // @[d_cache.scala 89:18]
  wire [2:0] _GEN_1274 = 3'h5 == state ? _GEN_1137 : _GEN_1273; // @[d_cache.scala 89:18]
  wire [511:0] _GEN_1275 = 3'h5 == state ? _GEN_1138 : ram_0_0; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1276 = 3'h5 == state ? _GEN_1139 : ram_0_1; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1277 = 3'h5 == state ? _GEN_1140 : ram_0_2; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1278 = 3'h5 == state ? _GEN_1141 : ram_0_3; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1279 = 3'h5 == state ? _GEN_1142 : ram_0_4; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1280 = 3'h5 == state ? _GEN_1143 : ram_0_5; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1281 = 3'h5 == state ? _GEN_1144 : ram_0_6; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1282 = 3'h5 == state ? _GEN_1145 : ram_0_7; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1283 = 3'h5 == state ? _GEN_1146 : ram_0_8; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1284 = 3'h5 == state ? _GEN_1147 : ram_0_9; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1285 = 3'h5 == state ? _GEN_1148 : ram_0_10; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1286 = 3'h5 == state ? _GEN_1149 : ram_0_11; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1287 = 3'h5 == state ? _GEN_1150 : ram_0_12; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1288 = 3'h5 == state ? _GEN_1151 : ram_0_13; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1289 = 3'h5 == state ? _GEN_1152 : ram_0_14; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1290 = 3'h5 == state ? _GEN_1153 : ram_0_15; // @[d_cache.scala 89:18 19:24]
  wire [31:0] _GEN_1291 = 3'h5 == state ? _GEN_1154 : tag_0_0; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1292 = 3'h5 == state ? _GEN_1155 : tag_0_1; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1293 = 3'h5 == state ? _GEN_1156 : tag_0_2; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1294 = 3'h5 == state ? _GEN_1157 : tag_0_3; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1295 = 3'h5 == state ? _GEN_1158 : tag_0_4; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1296 = 3'h5 == state ? _GEN_1159 : tag_0_5; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1297 = 3'h5 == state ? _GEN_1160 : tag_0_6; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1298 = 3'h5 == state ? _GEN_1161 : tag_0_7; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1299 = 3'h5 == state ? _GEN_1162 : tag_0_8; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1300 = 3'h5 == state ? _GEN_1163 : tag_0_9; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1301 = 3'h5 == state ? _GEN_1164 : tag_0_10; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1302 = 3'h5 == state ? _GEN_1165 : tag_0_11; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1303 = 3'h5 == state ? _GEN_1166 : tag_0_12; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1304 = 3'h5 == state ? _GEN_1167 : tag_0_13; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1305 = 3'h5 == state ? _GEN_1168 : tag_0_14; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1306 = 3'h5 == state ? _GEN_1169 : tag_0_15; // @[d_cache.scala 89:18 28:24]
  wire  _GEN_1307 = 3'h5 == state ? _GEN_1170 : valid_0_0; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1308 = 3'h5 == state ? _GEN_1171 : valid_0_1; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1309 = 3'h5 == state ? _GEN_1172 : valid_0_2; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1310 = 3'h5 == state ? _GEN_1173 : valid_0_3; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1311 = 3'h5 == state ? _GEN_1174 : valid_0_4; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1312 = 3'h5 == state ? _GEN_1175 : valid_0_5; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1313 = 3'h5 == state ? _GEN_1176 : valid_0_6; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1314 = 3'h5 == state ? _GEN_1177 : valid_0_7; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1315 = 3'h5 == state ? _GEN_1178 : valid_0_8; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1316 = 3'h5 == state ? _GEN_1179 : valid_0_9; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1317 = 3'h5 == state ? _GEN_1180 : valid_0_10; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1318 = 3'h5 == state ? _GEN_1181 : valid_0_11; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1319 = 3'h5 == state ? _GEN_1182 : valid_0_12; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1320 = 3'h5 == state ? _GEN_1183 : valid_0_13; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1321 = 3'h5 == state ? _GEN_1184 : valid_0_14; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1322 = 3'h5 == state ? _GEN_1185 : valid_0_15; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1323 = 3'h5 == state ? _GEN_1186 : quene; // @[d_cache.scala 89:18 44:24]
  wire [511:0] _GEN_1324 = 3'h5 == state ? _GEN_1187 : ram_1_0; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1325 = 3'h5 == state ? _GEN_1188 : ram_1_1; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1326 = 3'h5 == state ? _GEN_1189 : ram_1_2; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1327 = 3'h5 == state ? _GEN_1190 : ram_1_3; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1328 = 3'h5 == state ? _GEN_1191 : ram_1_4; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1329 = 3'h5 == state ? _GEN_1192 : ram_1_5; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1330 = 3'h5 == state ? _GEN_1193 : ram_1_6; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1331 = 3'h5 == state ? _GEN_1194 : ram_1_7; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1332 = 3'h5 == state ? _GEN_1195 : ram_1_8; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1333 = 3'h5 == state ? _GEN_1196 : ram_1_9; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1334 = 3'h5 == state ? _GEN_1197 : ram_1_10; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1335 = 3'h5 == state ? _GEN_1198 : ram_1_11; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1336 = 3'h5 == state ? _GEN_1199 : ram_1_12; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1337 = 3'h5 == state ? _GEN_1200 : ram_1_13; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1338 = 3'h5 == state ? _GEN_1201 : ram_1_14; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1339 = 3'h5 == state ? _GEN_1202 : ram_1_15; // @[d_cache.scala 89:18 20:24]
  wire [31:0] _GEN_1340 = 3'h5 == state ? _GEN_1203 : tag_1_0; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1341 = 3'h5 == state ? _GEN_1204 : tag_1_1; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1342 = 3'h5 == state ? _GEN_1205 : tag_1_2; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1343 = 3'h5 == state ? _GEN_1206 : tag_1_3; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1344 = 3'h5 == state ? _GEN_1207 : tag_1_4; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1345 = 3'h5 == state ? _GEN_1208 : tag_1_5; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1346 = 3'h5 == state ? _GEN_1209 : tag_1_6; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1347 = 3'h5 == state ? _GEN_1210 : tag_1_7; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1348 = 3'h5 == state ? _GEN_1211 : tag_1_8; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1349 = 3'h5 == state ? _GEN_1212 : tag_1_9; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1350 = 3'h5 == state ? _GEN_1213 : tag_1_10; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1351 = 3'h5 == state ? _GEN_1214 : tag_1_11; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1352 = 3'h5 == state ? _GEN_1215 : tag_1_12; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1353 = 3'h5 == state ? _GEN_1216 : tag_1_13; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1354 = 3'h5 == state ? _GEN_1217 : tag_1_14; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1355 = 3'h5 == state ? _GEN_1218 : tag_1_15; // @[d_cache.scala 89:18 29:24]
  wire  _GEN_1356 = 3'h5 == state ? _GEN_1219 : valid_1_0; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1357 = 3'h5 == state ? _GEN_1220 : valid_1_1; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1358 = 3'h5 == state ? _GEN_1221 : valid_1_2; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1359 = 3'h5 == state ? _GEN_1222 : valid_1_3; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1360 = 3'h5 == state ? _GEN_1223 : valid_1_4; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1361 = 3'h5 == state ? _GEN_1224 : valid_1_5; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1362 = 3'h5 == state ? _GEN_1225 : valid_1_6; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1363 = 3'h5 == state ? _GEN_1226 : valid_1_7; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1364 = 3'h5 == state ? _GEN_1227 : valid_1_8; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1365 = 3'h5 == state ? _GEN_1228 : valid_1_9; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1366 = 3'h5 == state ? _GEN_1229 : valid_1_10; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1367 = 3'h5 == state ? _GEN_1230 : valid_1_11; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1368 = 3'h5 == state ? _GEN_1231 : valid_1_12; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1369 = 3'h5 == state ? _GEN_1232 : valid_1_13; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1370 = 3'h5 == state ? _GEN_1233 : valid_1_14; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1371 = 3'h5 == state ? _GEN_1234 : valid_1_15; // @[d_cache.scala 89:18 31:26]
  wire [511:0] _GEN_1372 = 3'h5 == state ? _GEN_1235 : _GEN_1272; // @[d_cache.scala 89:18]
  wire [44:0] _GEN_1373 = 3'h5 == state ? _GEN_1236 : {{13'd0}, write_back_addr}; // @[d_cache.scala 89:18 38:34]
  wire  _GEN_1374 = 3'h5 == state ? _GEN_1237 : dirty_0_0; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1375 = 3'h5 == state ? _GEN_1238 : dirty_0_1; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1376 = 3'h5 == state ? _GEN_1239 : dirty_0_2; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1377 = 3'h5 == state ? _GEN_1240 : dirty_0_3; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1378 = 3'h5 == state ? _GEN_1241 : dirty_0_4; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1379 = 3'h5 == state ? _GEN_1242 : dirty_0_5; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1380 = 3'h5 == state ? _GEN_1243 : dirty_0_6; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1381 = 3'h5 == state ? _GEN_1244 : dirty_0_7; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1382 = 3'h5 == state ? _GEN_1245 : dirty_0_8; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1383 = 3'h5 == state ? _GEN_1246 : dirty_0_9; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1384 = 3'h5 == state ? _GEN_1247 : dirty_0_10; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1385 = 3'h5 == state ? _GEN_1248 : dirty_0_11; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1386 = 3'h5 == state ? _GEN_1249 : dirty_0_12; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1387 = 3'h5 == state ? _GEN_1250 : dirty_0_13; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1388 = 3'h5 == state ? _GEN_1251 : dirty_0_14; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1389 = 3'h5 == state ? _GEN_1252 : dirty_0_15; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1390 = 3'h5 == state ? _GEN_1253 : dirty_1_0; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1391 = 3'h5 == state ? _GEN_1254 : dirty_1_1; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1392 = 3'h5 == state ? _GEN_1255 : dirty_1_2; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1393 = 3'h5 == state ? _GEN_1256 : dirty_1_3; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1394 = 3'h5 == state ? _GEN_1257 : dirty_1_4; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1395 = 3'h5 == state ? _GEN_1258 : dirty_1_5; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1396 = 3'h5 == state ? _GEN_1259 : dirty_1_6; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1397 = 3'h5 == state ? _GEN_1260 : dirty_1_7; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1398 = 3'h5 == state ? _GEN_1261 : dirty_1_8; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1399 = 3'h5 == state ? _GEN_1262 : dirty_1_9; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1400 = 3'h5 == state ? _GEN_1263 : dirty_1_10; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1401 = 3'h5 == state ? _GEN_1264 : dirty_1_11; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1402 = 3'h5 == state ? _GEN_1265 : dirty_1_12; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1403 = 3'h5 == state ? _GEN_1266 : dirty_1_13; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1404 = 3'h5 == state ? _GEN_1267 : dirty_1_14; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1405 = 3'h5 == state ? _GEN_1268 : dirty_1_15; // @[d_cache.scala 89:18 33:26]
  wire [2:0] _GEN_1406 = 3'h4 == state ? _GEN_320 : _GEN_1274; // @[d_cache.scala 89:18]
  wire [511:0] _GEN_1407 = 3'h4 == state ? ram_0_0 : _GEN_1275; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1408 = 3'h4 == state ? ram_0_1 : _GEN_1276; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1409 = 3'h4 == state ? ram_0_2 : _GEN_1277; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1410 = 3'h4 == state ? ram_0_3 : _GEN_1278; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1411 = 3'h4 == state ? ram_0_4 : _GEN_1279; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1412 = 3'h4 == state ? ram_0_5 : _GEN_1280; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1413 = 3'h4 == state ? ram_0_6 : _GEN_1281; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1414 = 3'h4 == state ? ram_0_7 : _GEN_1282; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1415 = 3'h4 == state ? ram_0_8 : _GEN_1283; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1416 = 3'h4 == state ? ram_0_9 : _GEN_1284; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1417 = 3'h4 == state ? ram_0_10 : _GEN_1285; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1418 = 3'h4 == state ? ram_0_11 : _GEN_1286; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1419 = 3'h4 == state ? ram_0_12 : _GEN_1287; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1420 = 3'h4 == state ? ram_0_13 : _GEN_1288; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1421 = 3'h4 == state ? ram_0_14 : _GEN_1289; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1422 = 3'h4 == state ? ram_0_15 : _GEN_1290; // @[d_cache.scala 89:18 19:24]
  wire [31:0] _GEN_1423 = 3'h4 == state ? tag_0_0 : _GEN_1291; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1424 = 3'h4 == state ? tag_0_1 : _GEN_1292; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1425 = 3'h4 == state ? tag_0_2 : _GEN_1293; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1426 = 3'h4 == state ? tag_0_3 : _GEN_1294; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1427 = 3'h4 == state ? tag_0_4 : _GEN_1295; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1428 = 3'h4 == state ? tag_0_5 : _GEN_1296; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1429 = 3'h4 == state ? tag_0_6 : _GEN_1297; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1430 = 3'h4 == state ? tag_0_7 : _GEN_1298; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1431 = 3'h4 == state ? tag_0_8 : _GEN_1299; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1432 = 3'h4 == state ? tag_0_9 : _GEN_1300; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1433 = 3'h4 == state ? tag_0_10 : _GEN_1301; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1434 = 3'h4 == state ? tag_0_11 : _GEN_1302; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1435 = 3'h4 == state ? tag_0_12 : _GEN_1303; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1436 = 3'h4 == state ? tag_0_13 : _GEN_1304; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1437 = 3'h4 == state ? tag_0_14 : _GEN_1305; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1438 = 3'h4 == state ? tag_0_15 : _GEN_1306; // @[d_cache.scala 89:18 28:24]
  wire  _GEN_1439 = 3'h4 == state ? valid_0_0 : _GEN_1307; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1440 = 3'h4 == state ? valid_0_1 : _GEN_1308; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1441 = 3'h4 == state ? valid_0_2 : _GEN_1309; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1442 = 3'h4 == state ? valid_0_3 : _GEN_1310; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1443 = 3'h4 == state ? valid_0_4 : _GEN_1311; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1444 = 3'h4 == state ? valid_0_5 : _GEN_1312; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1445 = 3'h4 == state ? valid_0_6 : _GEN_1313; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1446 = 3'h4 == state ? valid_0_7 : _GEN_1314; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1447 = 3'h4 == state ? valid_0_8 : _GEN_1315; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1448 = 3'h4 == state ? valid_0_9 : _GEN_1316; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1449 = 3'h4 == state ? valid_0_10 : _GEN_1317; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1450 = 3'h4 == state ? valid_0_11 : _GEN_1318; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1451 = 3'h4 == state ? valid_0_12 : _GEN_1319; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1452 = 3'h4 == state ? valid_0_13 : _GEN_1320; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1453 = 3'h4 == state ? valid_0_14 : _GEN_1321; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1454 = 3'h4 == state ? valid_0_15 : _GEN_1322; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1455 = 3'h4 == state ? quene : _GEN_1323; // @[d_cache.scala 89:18 44:24]
  wire [511:0] _GEN_1456 = 3'h4 == state ? ram_1_0 : _GEN_1324; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1457 = 3'h4 == state ? ram_1_1 : _GEN_1325; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1458 = 3'h4 == state ? ram_1_2 : _GEN_1326; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1459 = 3'h4 == state ? ram_1_3 : _GEN_1327; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1460 = 3'h4 == state ? ram_1_4 : _GEN_1328; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1461 = 3'h4 == state ? ram_1_5 : _GEN_1329; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1462 = 3'h4 == state ? ram_1_6 : _GEN_1330; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1463 = 3'h4 == state ? ram_1_7 : _GEN_1331; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1464 = 3'h4 == state ? ram_1_8 : _GEN_1332; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1465 = 3'h4 == state ? ram_1_9 : _GEN_1333; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1466 = 3'h4 == state ? ram_1_10 : _GEN_1334; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1467 = 3'h4 == state ? ram_1_11 : _GEN_1335; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1468 = 3'h4 == state ? ram_1_12 : _GEN_1336; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1469 = 3'h4 == state ? ram_1_13 : _GEN_1337; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1470 = 3'h4 == state ? ram_1_14 : _GEN_1338; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1471 = 3'h4 == state ? ram_1_15 : _GEN_1339; // @[d_cache.scala 89:18 20:24]
  wire [31:0] _GEN_1472 = 3'h4 == state ? tag_1_0 : _GEN_1340; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1473 = 3'h4 == state ? tag_1_1 : _GEN_1341; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1474 = 3'h4 == state ? tag_1_2 : _GEN_1342; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1475 = 3'h4 == state ? tag_1_3 : _GEN_1343; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1476 = 3'h4 == state ? tag_1_4 : _GEN_1344; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1477 = 3'h4 == state ? tag_1_5 : _GEN_1345; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1478 = 3'h4 == state ? tag_1_6 : _GEN_1346; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1479 = 3'h4 == state ? tag_1_7 : _GEN_1347; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1480 = 3'h4 == state ? tag_1_8 : _GEN_1348; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1481 = 3'h4 == state ? tag_1_9 : _GEN_1349; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1482 = 3'h4 == state ? tag_1_10 : _GEN_1350; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1483 = 3'h4 == state ? tag_1_11 : _GEN_1351; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1484 = 3'h4 == state ? tag_1_12 : _GEN_1352; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1485 = 3'h4 == state ? tag_1_13 : _GEN_1353; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1486 = 3'h4 == state ? tag_1_14 : _GEN_1354; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1487 = 3'h4 == state ? tag_1_15 : _GEN_1355; // @[d_cache.scala 89:18 29:24]
  wire  _GEN_1488 = 3'h4 == state ? valid_1_0 : _GEN_1356; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1489 = 3'h4 == state ? valid_1_1 : _GEN_1357; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1490 = 3'h4 == state ? valid_1_2 : _GEN_1358; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1491 = 3'h4 == state ? valid_1_3 : _GEN_1359; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1492 = 3'h4 == state ? valid_1_4 : _GEN_1360; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1493 = 3'h4 == state ? valid_1_5 : _GEN_1361; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1494 = 3'h4 == state ? valid_1_6 : _GEN_1362; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1495 = 3'h4 == state ? valid_1_7 : _GEN_1363; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1496 = 3'h4 == state ? valid_1_8 : _GEN_1364; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1497 = 3'h4 == state ? valid_1_9 : _GEN_1365; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1498 = 3'h4 == state ? valid_1_10 : _GEN_1366; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1499 = 3'h4 == state ? valid_1_11 : _GEN_1367; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1500 = 3'h4 == state ? valid_1_12 : _GEN_1368; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1501 = 3'h4 == state ? valid_1_13 : _GEN_1369; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1502 = 3'h4 == state ? valid_1_14 : _GEN_1370; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1503 = 3'h4 == state ? valid_1_15 : _GEN_1371; // @[d_cache.scala 89:18 31:26]
  wire [511:0] _GEN_1504 = 3'h4 == state ? write_back_data : _GEN_1372; // @[d_cache.scala 89:18 37:34]
  wire [44:0] _GEN_1505 = 3'h4 == state ? {{13'd0}, write_back_addr} : _GEN_1373; // @[d_cache.scala 89:18 38:34]
  wire  _GEN_1506 = 3'h4 == state ? dirty_0_0 : _GEN_1374; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1507 = 3'h4 == state ? dirty_0_1 : _GEN_1375; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1508 = 3'h4 == state ? dirty_0_2 : _GEN_1376; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1509 = 3'h4 == state ? dirty_0_3 : _GEN_1377; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1510 = 3'h4 == state ? dirty_0_4 : _GEN_1378; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1511 = 3'h4 == state ? dirty_0_5 : _GEN_1379; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1512 = 3'h4 == state ? dirty_0_6 : _GEN_1380; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1513 = 3'h4 == state ? dirty_0_7 : _GEN_1381; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1514 = 3'h4 == state ? dirty_0_8 : _GEN_1382; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1515 = 3'h4 == state ? dirty_0_9 : _GEN_1383; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1516 = 3'h4 == state ? dirty_0_10 : _GEN_1384; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1517 = 3'h4 == state ? dirty_0_11 : _GEN_1385; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1518 = 3'h4 == state ? dirty_0_12 : _GEN_1386; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1519 = 3'h4 == state ? dirty_0_13 : _GEN_1387; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1520 = 3'h4 == state ? dirty_0_14 : _GEN_1388; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1521 = 3'h4 == state ? dirty_0_15 : _GEN_1389; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1522 = 3'h4 == state ? dirty_1_0 : _GEN_1390; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1523 = 3'h4 == state ? dirty_1_1 : _GEN_1391; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1524 = 3'h4 == state ? dirty_1_2 : _GEN_1392; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1525 = 3'h4 == state ? dirty_1_3 : _GEN_1393; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1526 = 3'h4 == state ? dirty_1_4 : _GEN_1394; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1527 = 3'h4 == state ? dirty_1_5 : _GEN_1395; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1528 = 3'h4 == state ? dirty_1_6 : _GEN_1396; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1529 = 3'h4 == state ? dirty_1_7 : _GEN_1397; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1530 = 3'h4 == state ? dirty_1_8 : _GEN_1398; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1531 = 3'h4 == state ? dirty_1_9 : _GEN_1399; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1532 = 3'h4 == state ? dirty_1_10 : _GEN_1400; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1533 = 3'h4 == state ? dirty_1_11 : _GEN_1401; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1534 = 3'h4 == state ? dirty_1_12 : _GEN_1402; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1535 = 3'h4 == state ? dirty_1_13 : _GEN_1403; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1536 = 3'h4 == state ? dirty_1_14 : _GEN_1404; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1537 = 3'h4 == state ? dirty_1_15 : _GEN_1405; // @[d_cache.scala 89:18 33:26]
  wire [63:0] _GEN_1538 = 3'h3 == state ? _GEN_310 : receive_data_0; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1539 = 3'h3 == state ? _GEN_311 : receive_data_1; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1540 = 3'h3 == state ? _GEN_312 : receive_data_2; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1541 = 3'h3 == state ? _GEN_313 : receive_data_3; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1542 = 3'h3 == state ? _GEN_314 : receive_data_4; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1543 = 3'h3 == state ? _GEN_315 : receive_data_5; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1544 = 3'h3 == state ? _GEN_316 : receive_data_6; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1545 = 3'h3 == state ? _GEN_317 : receive_data_7; // @[d_cache.scala 89:18 42:31]
  wire [2:0] _GEN_1546 = 3'h3 == state ? _GEN_318 : receive_num; // @[d_cache.scala 89:18 43:30]
  wire [2:0] _GEN_1547 = 3'h3 == state ? _GEN_319 : _GEN_1406; // @[d_cache.scala 89:18]
  wire [511:0] _GEN_1548 = 3'h3 == state ? ram_0_0 : _GEN_1407; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1549 = 3'h3 == state ? ram_0_1 : _GEN_1408; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1550 = 3'h3 == state ? ram_0_2 : _GEN_1409; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1551 = 3'h3 == state ? ram_0_3 : _GEN_1410; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1552 = 3'h3 == state ? ram_0_4 : _GEN_1411; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1553 = 3'h3 == state ? ram_0_5 : _GEN_1412; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1554 = 3'h3 == state ? ram_0_6 : _GEN_1413; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1555 = 3'h3 == state ? ram_0_7 : _GEN_1414; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1556 = 3'h3 == state ? ram_0_8 : _GEN_1415; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1557 = 3'h3 == state ? ram_0_9 : _GEN_1416; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1558 = 3'h3 == state ? ram_0_10 : _GEN_1417; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1559 = 3'h3 == state ? ram_0_11 : _GEN_1418; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1560 = 3'h3 == state ? ram_0_12 : _GEN_1419; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1561 = 3'h3 == state ? ram_0_13 : _GEN_1420; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1562 = 3'h3 == state ? ram_0_14 : _GEN_1421; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1563 = 3'h3 == state ? ram_0_15 : _GEN_1422; // @[d_cache.scala 89:18 19:24]
  wire [31:0] _GEN_1564 = 3'h3 == state ? tag_0_0 : _GEN_1423; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1565 = 3'h3 == state ? tag_0_1 : _GEN_1424; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1566 = 3'h3 == state ? tag_0_2 : _GEN_1425; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1567 = 3'h3 == state ? tag_0_3 : _GEN_1426; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1568 = 3'h3 == state ? tag_0_4 : _GEN_1427; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1569 = 3'h3 == state ? tag_0_5 : _GEN_1428; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1570 = 3'h3 == state ? tag_0_6 : _GEN_1429; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1571 = 3'h3 == state ? tag_0_7 : _GEN_1430; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1572 = 3'h3 == state ? tag_0_8 : _GEN_1431; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1573 = 3'h3 == state ? tag_0_9 : _GEN_1432; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1574 = 3'h3 == state ? tag_0_10 : _GEN_1433; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1575 = 3'h3 == state ? tag_0_11 : _GEN_1434; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1576 = 3'h3 == state ? tag_0_12 : _GEN_1435; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1577 = 3'h3 == state ? tag_0_13 : _GEN_1436; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1578 = 3'h3 == state ? tag_0_14 : _GEN_1437; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1579 = 3'h3 == state ? tag_0_15 : _GEN_1438; // @[d_cache.scala 89:18 28:24]
  wire  _GEN_1580 = 3'h3 == state ? valid_0_0 : _GEN_1439; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1581 = 3'h3 == state ? valid_0_1 : _GEN_1440; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1582 = 3'h3 == state ? valid_0_2 : _GEN_1441; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1583 = 3'h3 == state ? valid_0_3 : _GEN_1442; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1584 = 3'h3 == state ? valid_0_4 : _GEN_1443; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1585 = 3'h3 == state ? valid_0_5 : _GEN_1444; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1586 = 3'h3 == state ? valid_0_6 : _GEN_1445; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1587 = 3'h3 == state ? valid_0_7 : _GEN_1446; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1588 = 3'h3 == state ? valid_0_8 : _GEN_1447; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1589 = 3'h3 == state ? valid_0_9 : _GEN_1448; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1590 = 3'h3 == state ? valid_0_10 : _GEN_1449; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1591 = 3'h3 == state ? valid_0_11 : _GEN_1450; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1592 = 3'h3 == state ? valid_0_12 : _GEN_1451; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1593 = 3'h3 == state ? valid_0_13 : _GEN_1452; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1594 = 3'h3 == state ? valid_0_14 : _GEN_1453; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1595 = 3'h3 == state ? valid_0_15 : _GEN_1454; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1596 = 3'h3 == state ? quene : _GEN_1455; // @[d_cache.scala 89:18 44:24]
  wire [511:0] _GEN_1597 = 3'h3 == state ? ram_1_0 : _GEN_1456; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1598 = 3'h3 == state ? ram_1_1 : _GEN_1457; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1599 = 3'h3 == state ? ram_1_2 : _GEN_1458; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1600 = 3'h3 == state ? ram_1_3 : _GEN_1459; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1601 = 3'h3 == state ? ram_1_4 : _GEN_1460; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1602 = 3'h3 == state ? ram_1_5 : _GEN_1461; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1603 = 3'h3 == state ? ram_1_6 : _GEN_1462; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1604 = 3'h3 == state ? ram_1_7 : _GEN_1463; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1605 = 3'h3 == state ? ram_1_8 : _GEN_1464; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1606 = 3'h3 == state ? ram_1_9 : _GEN_1465; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1607 = 3'h3 == state ? ram_1_10 : _GEN_1466; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1608 = 3'h3 == state ? ram_1_11 : _GEN_1467; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1609 = 3'h3 == state ? ram_1_12 : _GEN_1468; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1610 = 3'h3 == state ? ram_1_13 : _GEN_1469; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1611 = 3'h3 == state ? ram_1_14 : _GEN_1470; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1612 = 3'h3 == state ? ram_1_15 : _GEN_1471; // @[d_cache.scala 89:18 20:24]
  wire [31:0] _GEN_1613 = 3'h3 == state ? tag_1_0 : _GEN_1472; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1614 = 3'h3 == state ? tag_1_1 : _GEN_1473; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1615 = 3'h3 == state ? tag_1_2 : _GEN_1474; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1616 = 3'h3 == state ? tag_1_3 : _GEN_1475; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1617 = 3'h3 == state ? tag_1_4 : _GEN_1476; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1618 = 3'h3 == state ? tag_1_5 : _GEN_1477; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1619 = 3'h3 == state ? tag_1_6 : _GEN_1478; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1620 = 3'h3 == state ? tag_1_7 : _GEN_1479; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1621 = 3'h3 == state ? tag_1_8 : _GEN_1480; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1622 = 3'h3 == state ? tag_1_9 : _GEN_1481; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1623 = 3'h3 == state ? tag_1_10 : _GEN_1482; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1624 = 3'h3 == state ? tag_1_11 : _GEN_1483; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1625 = 3'h3 == state ? tag_1_12 : _GEN_1484; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1626 = 3'h3 == state ? tag_1_13 : _GEN_1485; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1627 = 3'h3 == state ? tag_1_14 : _GEN_1486; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1628 = 3'h3 == state ? tag_1_15 : _GEN_1487; // @[d_cache.scala 89:18 29:24]
  wire  _GEN_1629 = 3'h3 == state ? valid_1_0 : _GEN_1488; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1630 = 3'h3 == state ? valid_1_1 : _GEN_1489; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1631 = 3'h3 == state ? valid_1_2 : _GEN_1490; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1632 = 3'h3 == state ? valid_1_3 : _GEN_1491; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1633 = 3'h3 == state ? valid_1_4 : _GEN_1492; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1634 = 3'h3 == state ? valid_1_5 : _GEN_1493; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1635 = 3'h3 == state ? valid_1_6 : _GEN_1494; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1636 = 3'h3 == state ? valid_1_7 : _GEN_1495; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1637 = 3'h3 == state ? valid_1_8 : _GEN_1496; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1638 = 3'h3 == state ? valid_1_9 : _GEN_1497; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1639 = 3'h3 == state ? valid_1_10 : _GEN_1498; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1640 = 3'h3 == state ? valid_1_11 : _GEN_1499; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1641 = 3'h3 == state ? valid_1_12 : _GEN_1500; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1642 = 3'h3 == state ? valid_1_13 : _GEN_1501; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1643 = 3'h3 == state ? valid_1_14 : _GEN_1502; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1644 = 3'h3 == state ? valid_1_15 : _GEN_1503; // @[d_cache.scala 89:18 31:26]
  wire [511:0] _GEN_1645 = 3'h3 == state ? write_back_data : _GEN_1504; // @[d_cache.scala 89:18 37:34]
  wire [44:0] _GEN_1646 = 3'h3 == state ? {{13'd0}, write_back_addr} : _GEN_1505; // @[d_cache.scala 89:18 38:34]
  wire  _GEN_1647 = 3'h3 == state ? dirty_0_0 : _GEN_1506; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1648 = 3'h3 == state ? dirty_0_1 : _GEN_1507; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1649 = 3'h3 == state ? dirty_0_2 : _GEN_1508; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1650 = 3'h3 == state ? dirty_0_3 : _GEN_1509; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1651 = 3'h3 == state ? dirty_0_4 : _GEN_1510; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1652 = 3'h3 == state ? dirty_0_5 : _GEN_1511; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1653 = 3'h3 == state ? dirty_0_6 : _GEN_1512; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1654 = 3'h3 == state ? dirty_0_7 : _GEN_1513; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1655 = 3'h3 == state ? dirty_0_8 : _GEN_1514; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1656 = 3'h3 == state ? dirty_0_9 : _GEN_1515; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1657 = 3'h3 == state ? dirty_0_10 : _GEN_1516; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1658 = 3'h3 == state ? dirty_0_11 : _GEN_1517; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1659 = 3'h3 == state ? dirty_0_12 : _GEN_1518; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1660 = 3'h3 == state ? dirty_0_13 : _GEN_1519; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1661 = 3'h3 == state ? dirty_0_14 : _GEN_1520; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1662 = 3'h3 == state ? dirty_0_15 : _GEN_1521; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1663 = 3'h3 == state ? dirty_1_0 : _GEN_1522; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1664 = 3'h3 == state ? dirty_1_1 : _GEN_1523; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1665 = 3'h3 == state ? dirty_1_2 : _GEN_1524; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1666 = 3'h3 == state ? dirty_1_3 : _GEN_1525; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1667 = 3'h3 == state ? dirty_1_4 : _GEN_1526; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1668 = 3'h3 == state ? dirty_1_5 : _GEN_1527; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1669 = 3'h3 == state ? dirty_1_6 : _GEN_1528; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1670 = 3'h3 == state ? dirty_1_7 : _GEN_1529; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1671 = 3'h3 == state ? dirty_1_8 : _GEN_1530; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1672 = 3'h3 == state ? dirty_1_9 : _GEN_1531; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1673 = 3'h3 == state ? dirty_1_10 : _GEN_1532; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1674 = 3'h3 == state ? dirty_1_11 : _GEN_1533; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1675 = 3'h3 == state ? dirty_1_12 : _GEN_1534; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1676 = 3'h3 == state ? dirty_1_13 : _GEN_1535; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1677 = 3'h3 == state ? dirty_1_14 : _GEN_1536; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1678 = 3'h3 == state ? dirty_1_15 : _GEN_1537; // @[d_cache.scala 89:18 33:26]
  wire [44:0] _GEN_1819 = 3'h2 == state ? {{13'd0}, write_back_addr} : _GEN_1646; // @[d_cache.scala 89:18 38:34]
  wire [44:0] _GEN_1960 = 3'h1 == state ? {{13'd0}, write_back_addr} : _GEN_1819; // @[d_cache.scala 89:18 38:34]
  wire [44:0] _GEN_2101 = 3'h0 == state ? {{13'd0}, write_back_addr} : _GEN_1960; // @[d_cache.scala 89:18 38:34]
  wire [511:0] _io_to_lsu_rdata_T_1 = _GEN_122 >> shift_bit; // @[d_cache.scala 251:49]
  wire [511:0] _io_to_lsu_rdata_T_3 = _GEN_170 >> shift_bit; // @[d_cache.scala 259:49]
  wire [511:0] _GEN_2134 = way1_hit ? _io_to_lsu_rdata_T_3 : 512'h0; // @[d_cache.scala 258:33 259:33 267:33]
  wire [511:0] _GEN_2138 = way0_hit ? _io_to_lsu_rdata_T_1 : _GEN_2134; // @[d_cache.scala 250:23 251:33]
  wire  _GEN_2140 = way0_hit | way1_hit; // @[d_cache.scala 250:23 253:34]
  wire  _GEN_2142 = way1_hit ? 1'h0 : 1'h1; // @[d_cache.scala 300:33 302:35 310:35]
  wire  _GEN_2143 = way0_hit ? 1'h0 : _GEN_2142; // @[d_cache.scala 292:23 294:35]
  wire  _T_55 = state == 3'h3; // @[d_cache.scala 317:21]
  wire [63:0] _GEN_2351 = {{32'd0}, io_from_lsu_araddr}; // @[d_cache.scala 326:49]
  wire [63:0] _io_to_axi_araddr_T = _GEN_2351 & 64'hffffffffffffffc0; // @[d_cache.scala 326:49]
  wire  _T_57 = state == 3'h6; // @[d_cache.scala 382:21]
  wire [31:0] _GEN_2146 = state == 3'h6 ? 32'h0 : io_from_lsu_araddr; // @[d_cache.scala 382:35 391:26 415:26]
  wire [2:0] _GEN_2147 = state == 3'h6 ? 3'h7 : 3'h0; // @[d_cache.scala 382:35 392:25 417:25]
  wire  _GEN_2149 = state == 3'h6 ? 1'h0 : io_from_lsu_rready; // @[d_cache.scala 382:35 395:26 416:26]
  wire [31:0] _GEN_2150 = state == 3'h6 ? write_back_addr : 32'h0; // @[d_cache.scala 382:35 396:26 420:26]
  wire [511:0] _GEN_2151 = state == 3'h6 ? write_back_data : 512'h0; // @[d_cache.scala 382:35 401:25 425:25]
  wire [7:0] _GEN_2152 = state == 3'h6 ? 8'hff : 8'h0; // @[d_cache.scala 382:35 402:25 426:25]
  wire  _GEN_2154 = state == 3'h4 | _T_57; // @[d_cache.scala 341:31 343:27]
  wire  _GEN_2155 = state == 3'h4 & io_from_axi_wready; // @[d_cache.scala 341:31 346:26]
  wire  _GEN_2156 = state == 3'h4 & io_from_axi_bvalid; // @[d_cache.scala 341:31 347:26]
  wire  _GEN_2157 = state == 3'h4 & io_from_axi_awready; // @[d_cache.scala 341:31 348:27]
  wire [31:0] _GEN_2158 = state == 3'h4 ? 32'h0 : _GEN_2146; // @[d_cache.scala 341:31 350:26]
  wire [2:0] _GEN_2159 = state == 3'h4 ? 3'h0 : _GEN_2147; // @[d_cache.scala 341:31 351:25]
  wire  _GEN_2161 = state == 3'h4 ? io_from_lsu_rready : _GEN_2149; // @[d_cache.scala 341:31 354:26]
  wire [31:0] _GEN_2162 = state == 3'h4 ? io_from_lsu_awaddr : _GEN_2150; // @[d_cache.scala 341:31 355:26]
  wire  _GEN_2163 = state == 3'h4 ? io_from_lsu_awvalid : _T_57; // @[d_cache.scala 341:31 356:27]
  wire [7:0] _GEN_2164 = state == 3'h4 ? 8'h0 : {{5'd0}, _GEN_2147}; // @[d_cache.scala 341:31 357:25]
  wire [511:0] _GEN_2167 = state == 3'h4 ? {{448'd0}, io_from_lsu_wdata} : _GEN_2151; // @[d_cache.scala 341:31 360:25]
  wire [7:0] _GEN_2168 = state == 3'h4 ? io_from_lsu_wstrb : _GEN_2152; // @[d_cache.scala 341:31 361:25]
  wire  _GEN_2170 = state == 3'h4 ? io_from_lsu_wvalid : _T_57; // @[d_cache.scala 341:31 363:26]
  wire  _GEN_2171 = state == 3'h4 ? io_from_lsu_bready : _T_57; // @[d_cache.scala 341:31 364:26]
  wire  _GEN_2173 = state == 3'h3 | _GEN_2154; // @[d_cache.scala 317:31 319:27]
  wire  _GEN_2174 = state == 3'h3 ? 1'h0 : _GEN_2155; // @[d_cache.scala 317:31 322:26]
  wire  _GEN_2175 = state == 3'h3 ? 1'h0 : _GEN_2156; // @[d_cache.scala 317:31 323:26]
  wire  _GEN_2176 = state == 3'h3 ? 1'h0 : _GEN_2157; // @[d_cache.scala 317:31 324:27]
  wire [63:0] _GEN_2178 = state == 3'h3 ? _io_to_axi_araddr_T : {{32'd0}, _GEN_2158}; // @[d_cache.scala 317:31 326:26]
  wire [2:0] _GEN_2179 = state == 3'h3 ? 3'h7 : _GEN_2159; // @[d_cache.scala 317:31 327:25]
  wire  _GEN_2181 = state == 3'h3 ? io_from_lsu_rready : _GEN_2161; // @[d_cache.scala 317:31 330:26]
  wire [31:0] _GEN_2182 = state == 3'h3 ? 32'h0 : _GEN_2162; // @[d_cache.scala 317:31 331:26]
  wire  _GEN_2183 = state == 3'h3 ? 1'h0 : _GEN_2163; // @[d_cache.scala 317:31 332:27]
  wire [7:0] _GEN_2184 = state == 3'h3 ? 8'h0 : _GEN_2164; // @[d_cache.scala 317:31 333:25]
  wire [511:0] _GEN_2187 = state == 3'h3 ? 512'h0 : _GEN_2167; // @[d_cache.scala 317:31 336:25]
  wire [7:0] _GEN_2188 = state == 3'h3 ? 8'h0 : _GEN_2168; // @[d_cache.scala 317:31 337:25]
  wire  _GEN_2190 = state == 3'h3 ? 1'h0 : _GEN_2170; // @[d_cache.scala 317:31 339:26]
  wire  _GEN_2191 = state == 3'h3 ? 1'h0 : _GEN_2171; // @[d_cache.scala 317:31 340:26]
  wire  _GEN_2192 = state == 3'h2 ? 1'h0 : _T_55; // @[d_cache.scala 275:33 276:27]
  wire [63:0] _GEN_2193 = state == 3'h2 ? {{32'd0}, io_from_lsu_araddr} : _GEN_2178; // @[d_cache.scala 275:33 277:26]
  wire [2:0] _GEN_2194 = state == 3'h2 ? 3'h0 : _GEN_2179; // @[d_cache.scala 275:33 278:25]
  wire  _GEN_2197 = state == 3'h2 ? 1'h0 : _GEN_2181; // @[d_cache.scala 275:33 281:26]
  wire [31:0] _GEN_2198 = state == 3'h2 ? 32'h0 : _GEN_2182; // @[d_cache.scala 275:33 282:26]
  wire  _GEN_2199 = state == 3'h2 ? 1'h0 : _GEN_2183; // @[d_cache.scala 275:33 283:27]
  wire [7:0] _GEN_2200 = state == 3'h2 ? 8'h0 : _GEN_2184; // @[d_cache.scala 275:33 284:25]
  wire [511:0] _GEN_2203 = state == 3'h2 ? 512'h0 : _GEN_2187; // @[d_cache.scala 275:33 287:25]
  wire [7:0] _GEN_2204 = state == 3'h2 ? 8'h0 : _GEN_2188; // @[d_cache.scala 275:33 288:25]
  wire  _GEN_2206 = state == 3'h2 ? 1'h0 : _GEN_2190; // @[d_cache.scala 275:33 290:26]
  wire  _GEN_2207 = state == 3'h2 ? 1'h0 : _GEN_2191; // @[d_cache.scala 275:33 291:26]
  wire  _GEN_2209 = state == 3'h2 ? _GEN_2143 : _GEN_2173; // @[d_cache.scala 275:33]
  wire  _GEN_2210 = state == 3'h2 ? _GEN_2140 : _GEN_2174; // @[d_cache.scala 275:33]
  wire  _GEN_2211 = state == 3'h2 ? _GEN_2140 : _GEN_2176; // @[d_cache.scala 275:33]
  wire  _GEN_2212 = state == 3'h2 ? _GEN_2140 : _GEN_2175; // @[d_cache.scala 275:33]
  wire [63:0] _GEN_2214 = state == 3'h1 ? {{32'd0}, io_from_lsu_araddr} : _GEN_2193; // @[d_cache.scala 233:27 235:26]
  wire [2:0] _GEN_2215 = state == 3'h1 ? 3'h0 : _GEN_2194; // @[d_cache.scala 233:27 236:25]
  wire [511:0] _GEN_2224 = state == 3'h1 ? 512'h0 : _GEN_2203; // @[d_cache.scala 233:27 245:25]
  wire [511:0] _GEN_2229 = state == 3'h1 ? _GEN_2138 : 512'h0; // @[d_cache.scala 233:27]
  wire [44:0] _GEN_2352 = reset ? 45'h0 : _GEN_2101; // @[d_cache.scala 38:{34,34}]
  assign io_to_lsu_arready = state == 3'h1 | _GEN_2209; // @[d_cache.scala 233:27]
  assign io_to_lsu_rdata = _GEN_2229[63:0];
  assign io_to_lsu_rvalid = state == 3'h1 & _GEN_2140; // @[d_cache.scala 233:27]
  assign io_to_lsu_awready = state == 3'h1 ? 1'h0 : _GEN_2211; // @[d_cache.scala 233:27]
  assign io_to_lsu_wready = state == 3'h1 ? 1'h0 : _GEN_2210; // @[d_cache.scala 233:27]
  assign io_to_lsu_bvalid = state == 3'h1 ? 1'h0 : _GEN_2212; // @[d_cache.scala 233:27]
  assign io_to_axi_araddr = _GEN_2214[31:0];
  assign io_to_axi_arlen = {{5'd0}, _GEN_2215};
  assign io_to_axi_arvalid = state == 3'h1 ? 1'h0 : _GEN_2192; // @[d_cache.scala 233:27 234:27]
  assign io_to_axi_rready = state == 3'h1 ? 1'h0 : _GEN_2197; // @[d_cache.scala 233:27 239:26]
  assign io_to_axi_awaddr = state == 3'h1 ? 32'h0 : _GEN_2198; // @[d_cache.scala 233:27 240:26]
  assign io_to_axi_awlen = state == 3'h1 ? 8'h0 : _GEN_2200; // @[d_cache.scala 233:27 242:25]
  assign io_to_axi_awvalid = state == 3'h1 ? 1'h0 : _GEN_2199; // @[d_cache.scala 233:27 241:27]
  assign io_to_axi_wdata = _GEN_2224[63:0];
  assign io_to_axi_wstrb = state == 3'h1 ? 8'h0 : _GEN_2204; // @[d_cache.scala 233:27 246:25]
  assign io_to_axi_wvalid = state == 3'h1 ? 1'h0 : _GEN_2206; // @[d_cache.scala 233:27 248:26]
  assign io_to_axi_bready = state == 3'h1 ? 1'h0 : _GEN_2207; // @[d_cache.scala 233:27 249:26]
  always @(posedge clock) begin
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_0 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_0 <= _GEN_237;
        end else begin
          ram_0_0 <= _GEN_1548;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_1 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_1 <= _GEN_238;
        end else begin
          ram_0_1 <= _GEN_1549;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_2 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_2 <= _GEN_239;
        end else begin
          ram_0_2 <= _GEN_1550;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_3 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_3 <= _GEN_240;
        end else begin
          ram_0_3 <= _GEN_1551;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_4 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_4 <= _GEN_241;
        end else begin
          ram_0_4 <= _GEN_1552;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_5 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_5 <= _GEN_242;
        end else begin
          ram_0_5 <= _GEN_1553;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_6 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_6 <= _GEN_243;
        end else begin
          ram_0_6 <= _GEN_1554;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_7 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_7 <= _GEN_244;
        end else begin
          ram_0_7 <= _GEN_1555;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_8 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_8 <= _GEN_245;
        end else begin
          ram_0_8 <= _GEN_1556;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_9 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_9 <= _GEN_246;
        end else begin
          ram_0_9 <= _GEN_1557;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_10 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_10 <= _GEN_247;
        end else begin
          ram_0_10 <= _GEN_1558;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_11 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_11 <= _GEN_248;
        end else begin
          ram_0_11 <= _GEN_1559;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_12 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_12 <= _GEN_249;
        end else begin
          ram_0_12 <= _GEN_1560;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_13 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_13 <= _GEN_250;
        end else begin
          ram_0_13 <= _GEN_1561;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_14 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_14 <= _GEN_251;
        end else begin
          ram_0_14 <= _GEN_1562;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_15 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_15 <= _GEN_252;
        end else begin
          ram_0_15 <= _GEN_1563;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_0 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_0 <= _GEN_269;
        end else begin
          ram_1_0 <= _GEN_1597;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_1 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_1 <= _GEN_270;
        end else begin
          ram_1_1 <= _GEN_1598;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_2 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_2 <= _GEN_271;
        end else begin
          ram_1_2 <= _GEN_1599;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_3 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_3 <= _GEN_272;
        end else begin
          ram_1_3 <= _GEN_1600;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_4 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_4 <= _GEN_273;
        end else begin
          ram_1_4 <= _GEN_1601;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_5 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_5 <= _GEN_274;
        end else begin
          ram_1_5 <= _GEN_1602;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_6 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_6 <= _GEN_275;
        end else begin
          ram_1_6 <= _GEN_1603;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_7 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_7 <= _GEN_276;
        end else begin
          ram_1_7 <= _GEN_1604;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_8 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_8 <= _GEN_277;
        end else begin
          ram_1_8 <= _GEN_1605;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_9 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_9 <= _GEN_278;
        end else begin
          ram_1_9 <= _GEN_1606;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_10 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_10 <= _GEN_279;
        end else begin
          ram_1_10 <= _GEN_1607;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_11 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_11 <= _GEN_280;
        end else begin
          ram_1_11 <= _GEN_1608;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_12 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_12 <= _GEN_281;
        end else begin
          ram_1_12 <= _GEN_1609;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_13 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_13 <= _GEN_282;
        end else begin
          ram_1_13 <= _GEN_1610;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_14 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_14 <= _GEN_283;
        end else begin
          ram_1_14 <= _GEN_1611;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_15 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_15 <= _GEN_284;
        end else begin
          ram_1_15 <= _GEN_1612;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_0 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_0 <= _GEN_1564;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_1 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_1 <= _GEN_1565;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_2 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_2 <= _GEN_1566;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_3 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_3 <= _GEN_1567;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_4 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_4 <= _GEN_1568;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_5 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_5 <= _GEN_1569;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_6 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_6 <= _GEN_1570;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_7 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_7 <= _GEN_1571;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_8 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_8 <= _GEN_1572;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_9 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_9 <= _GEN_1573;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_10 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_10 <= _GEN_1574;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_11 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_11 <= _GEN_1575;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_12 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_12 <= _GEN_1576;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_13 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_13 <= _GEN_1577;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_14 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_14 <= _GEN_1578;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_15 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_15 <= _GEN_1579;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_0 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_0 <= _GEN_1613;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_1 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_1 <= _GEN_1614;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_2 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_2 <= _GEN_1615;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_3 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_3 <= _GEN_1616;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_4 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_4 <= _GEN_1617;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_5 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_5 <= _GEN_1618;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_6 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_6 <= _GEN_1619;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_7 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_7 <= _GEN_1620;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_8 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_8 <= _GEN_1621;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_9 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_9 <= _GEN_1622;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_10 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_10 <= _GEN_1623;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_11 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_11 <= _GEN_1624;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_12 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_12 <= _GEN_1625;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_13 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_13 <= _GEN_1626;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_14 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_14 <= _GEN_1627;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_15 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_15 <= _GEN_1628;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_0 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_0 <= _GEN_1580;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_1 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_1 <= _GEN_1581;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_2 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_2 <= _GEN_1582;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_3 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_3 <= _GEN_1583;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_4 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_4 <= _GEN_1584;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_5 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_5 <= _GEN_1585;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_6 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_6 <= _GEN_1586;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_7 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_7 <= _GEN_1587;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_8 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_8 <= _GEN_1588;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_9 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_9 <= _GEN_1589;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_10 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_10 <= _GEN_1590;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_11 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_11 <= _GEN_1591;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_12 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_12 <= _GEN_1592;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_13 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_13 <= _GEN_1593;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_14 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_14 <= _GEN_1594;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_15 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_15 <= _GEN_1595;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_0 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_0 <= _GEN_1629;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_1 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_1 <= _GEN_1630;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_2 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_2 <= _GEN_1631;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_3 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_3 <= _GEN_1632;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_4 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_4 <= _GEN_1633;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_5 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_5 <= _GEN_1634;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_6 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_6 <= _GEN_1635;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_7 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_7 <= _GEN_1636;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_8 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_8 <= _GEN_1637;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_9 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_9 <= _GEN_1638;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_10 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_10 <= _GEN_1639;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_11 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_11 <= _GEN_1640;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_12 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_12 <= _GEN_1641;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_13 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_13 <= _GEN_1642;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_14 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_14 <= _GEN_1643;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_15 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_15 <= _GEN_1644;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_0 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_0 <= _GEN_253;
        end else begin
          dirty_0_0 <= _GEN_1647;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_1 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_1 <= _GEN_254;
        end else begin
          dirty_0_1 <= _GEN_1648;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_2 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_2 <= _GEN_255;
        end else begin
          dirty_0_2 <= _GEN_1649;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_3 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_3 <= _GEN_256;
        end else begin
          dirty_0_3 <= _GEN_1650;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_4 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_4 <= _GEN_257;
        end else begin
          dirty_0_4 <= _GEN_1651;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_5 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_5 <= _GEN_258;
        end else begin
          dirty_0_5 <= _GEN_1652;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_6 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_6 <= _GEN_259;
        end else begin
          dirty_0_6 <= _GEN_1653;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_7 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_7 <= _GEN_260;
        end else begin
          dirty_0_7 <= _GEN_1654;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_8 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_8 <= _GEN_261;
        end else begin
          dirty_0_8 <= _GEN_1655;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_9 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_9 <= _GEN_262;
        end else begin
          dirty_0_9 <= _GEN_1656;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_10 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_10 <= _GEN_263;
        end else begin
          dirty_0_10 <= _GEN_1657;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_11 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_11 <= _GEN_264;
        end else begin
          dirty_0_11 <= _GEN_1658;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_12 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_12 <= _GEN_265;
        end else begin
          dirty_0_12 <= _GEN_1659;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_13 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_13 <= _GEN_266;
        end else begin
          dirty_0_13 <= _GEN_1660;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_14 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_14 <= _GEN_267;
        end else begin
          dirty_0_14 <= _GEN_1661;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_15 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_15 <= _GEN_268;
        end else begin
          dirty_0_15 <= _GEN_1662;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_0 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_0 <= _GEN_285;
        end else begin
          dirty_1_0 <= _GEN_1663;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_1 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_1 <= _GEN_286;
        end else begin
          dirty_1_1 <= _GEN_1664;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_2 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_2 <= _GEN_287;
        end else begin
          dirty_1_2 <= _GEN_1665;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_3 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_3 <= _GEN_288;
        end else begin
          dirty_1_3 <= _GEN_1666;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_4 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_4 <= _GEN_289;
        end else begin
          dirty_1_4 <= _GEN_1667;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_5 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_5 <= _GEN_290;
        end else begin
          dirty_1_5 <= _GEN_1668;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_6 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_6 <= _GEN_291;
        end else begin
          dirty_1_6 <= _GEN_1669;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_7 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_7 <= _GEN_292;
        end else begin
          dirty_1_7 <= _GEN_1670;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_8 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_8 <= _GEN_293;
        end else begin
          dirty_1_8 <= _GEN_1671;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_9 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_9 <= _GEN_294;
        end else begin
          dirty_1_9 <= _GEN_1672;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_10 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_10 <= _GEN_295;
        end else begin
          dirty_1_10 <= _GEN_1673;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_11 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_11 <= _GEN_296;
        end else begin
          dirty_1_11 <= _GEN_1674;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_12 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_12 <= _GEN_297;
        end else begin
          dirty_1_12 <= _GEN_1675;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_13 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_13 <= _GEN_298;
        end else begin
          dirty_1_13 <= _GEN_1676;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_14 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_14 <= _GEN_299;
        end else begin
          dirty_1_14 <= _GEN_1677;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_15 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_15 <= _GEN_300;
        end else begin
          dirty_1_15 <= _GEN_1678;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 34:27]
      way0_hit <= 1'h0; // @[d_cache.scala 34:27]
    end else begin
      way0_hit <= _T_4;
    end
    if (reset) begin // @[d_cache.scala 35:27]
      way1_hit <= 1'h0; // @[d_cache.scala 35:27]
    end else begin
      way1_hit <= _T_9;
    end
    if (reset) begin // @[d_cache.scala 37:34]
      write_back_data <= 512'h0; // @[d_cache.scala 37:34]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          write_back_data <= _GEN_1645;
        end
      end
    end
    write_back_addr <= _GEN_2352[31:0]; // @[d_cache.scala 38:{34,34}]
    if (reset) begin // @[d_cache.scala 41:28]
      unuse_way <= 2'h0; // @[d_cache.scala 41:28]
    end else if (~_GEN_31) begin // @[d_cache.scala 76:31]
      unuse_way <= 2'h1; // @[d_cache.scala 77:19]
    end else if (~_GEN_64) begin // @[d_cache.scala 78:37]
      unuse_way <= 2'h2; // @[d_cache.scala 79:19]
    end else begin
      unuse_way <= 2'h0; // @[d_cache.scala 81:19]
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_0 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_0 <= _GEN_1538;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_1 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_1 <= _GEN_1539;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_2 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_2 <= _GEN_1540;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_3 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_3 <= _GEN_1541;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_4 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_4 <= _GEN_1542;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_5 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_5 <= _GEN_1543;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_6 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_6 <= _GEN_1544;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_7 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_7 <= _GEN_1545;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 43:30]
      receive_num <= 3'h0; // @[d_cache.scala 43:30]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (3'h1 == state) begin // @[d_cache.scala 89:18]
        if (!(way0_hit)) begin // @[d_cache.scala 99:27]
          receive_num <= _GEN_104;
        end
      end else if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
        receive_num <= _GEN_1546;
      end
    end
    if (reset) begin // @[d_cache.scala 44:24]
      quene <= 1'h0; // @[d_cache.scala 44:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          quene <= _GEN_1596;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 84:24]
      state <= 3'h0; // @[d_cache.scala 84:24]
    end else if (3'h0 == state) begin // @[d_cache.scala 89:18]
      if (io_from_lsu_arvalid) begin // @[d_cache.scala 91:38]
        state <= 3'h1; // @[d_cache.scala 92:23]
      end else if (io_from_lsu_awvalid) begin // @[d_cache.scala 93:44]
        state <= 3'h2; // @[d_cache.scala 94:23]
      end
    end else if (3'h1 == state) begin // @[d_cache.scala 89:18]
      if (way0_hit) begin // @[d_cache.scala 99:27]
        state <= _GEN_102;
      end else begin
        state <= _GEN_103;
      end
    end else if (3'h2 == state) begin // @[d_cache.scala 89:18]
      state <= _GEN_236;
    end else begin
      state <= _GEN_1547;
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
  _RAND_0 = {16{`RANDOM}};
  ram_0_0 = _RAND_0[511:0];
  _RAND_1 = {16{`RANDOM}};
  ram_0_1 = _RAND_1[511:0];
  _RAND_2 = {16{`RANDOM}};
  ram_0_2 = _RAND_2[511:0];
  _RAND_3 = {16{`RANDOM}};
  ram_0_3 = _RAND_3[511:0];
  _RAND_4 = {16{`RANDOM}};
  ram_0_4 = _RAND_4[511:0];
  _RAND_5 = {16{`RANDOM}};
  ram_0_5 = _RAND_5[511:0];
  _RAND_6 = {16{`RANDOM}};
  ram_0_6 = _RAND_6[511:0];
  _RAND_7 = {16{`RANDOM}};
  ram_0_7 = _RAND_7[511:0];
  _RAND_8 = {16{`RANDOM}};
  ram_0_8 = _RAND_8[511:0];
  _RAND_9 = {16{`RANDOM}};
  ram_0_9 = _RAND_9[511:0];
  _RAND_10 = {16{`RANDOM}};
  ram_0_10 = _RAND_10[511:0];
  _RAND_11 = {16{`RANDOM}};
  ram_0_11 = _RAND_11[511:0];
  _RAND_12 = {16{`RANDOM}};
  ram_0_12 = _RAND_12[511:0];
  _RAND_13 = {16{`RANDOM}};
  ram_0_13 = _RAND_13[511:0];
  _RAND_14 = {16{`RANDOM}};
  ram_0_14 = _RAND_14[511:0];
  _RAND_15 = {16{`RANDOM}};
  ram_0_15 = _RAND_15[511:0];
  _RAND_16 = {16{`RANDOM}};
  ram_1_0 = _RAND_16[511:0];
  _RAND_17 = {16{`RANDOM}};
  ram_1_1 = _RAND_17[511:0];
  _RAND_18 = {16{`RANDOM}};
  ram_1_2 = _RAND_18[511:0];
  _RAND_19 = {16{`RANDOM}};
  ram_1_3 = _RAND_19[511:0];
  _RAND_20 = {16{`RANDOM}};
  ram_1_4 = _RAND_20[511:0];
  _RAND_21 = {16{`RANDOM}};
  ram_1_5 = _RAND_21[511:0];
  _RAND_22 = {16{`RANDOM}};
  ram_1_6 = _RAND_22[511:0];
  _RAND_23 = {16{`RANDOM}};
  ram_1_7 = _RAND_23[511:0];
  _RAND_24 = {16{`RANDOM}};
  ram_1_8 = _RAND_24[511:0];
  _RAND_25 = {16{`RANDOM}};
  ram_1_9 = _RAND_25[511:0];
  _RAND_26 = {16{`RANDOM}};
  ram_1_10 = _RAND_26[511:0];
  _RAND_27 = {16{`RANDOM}};
  ram_1_11 = _RAND_27[511:0];
  _RAND_28 = {16{`RANDOM}};
  ram_1_12 = _RAND_28[511:0];
  _RAND_29 = {16{`RANDOM}};
  ram_1_13 = _RAND_29[511:0];
  _RAND_30 = {16{`RANDOM}};
  ram_1_14 = _RAND_30[511:0];
  _RAND_31 = {16{`RANDOM}};
  ram_1_15 = _RAND_31[511:0];
  _RAND_32 = {1{`RANDOM}};
  tag_0_0 = _RAND_32[31:0];
  _RAND_33 = {1{`RANDOM}};
  tag_0_1 = _RAND_33[31:0];
  _RAND_34 = {1{`RANDOM}};
  tag_0_2 = _RAND_34[31:0];
  _RAND_35 = {1{`RANDOM}};
  tag_0_3 = _RAND_35[31:0];
  _RAND_36 = {1{`RANDOM}};
  tag_0_4 = _RAND_36[31:0];
  _RAND_37 = {1{`RANDOM}};
  tag_0_5 = _RAND_37[31:0];
  _RAND_38 = {1{`RANDOM}};
  tag_0_6 = _RAND_38[31:0];
  _RAND_39 = {1{`RANDOM}};
  tag_0_7 = _RAND_39[31:0];
  _RAND_40 = {1{`RANDOM}};
  tag_0_8 = _RAND_40[31:0];
  _RAND_41 = {1{`RANDOM}};
  tag_0_9 = _RAND_41[31:0];
  _RAND_42 = {1{`RANDOM}};
  tag_0_10 = _RAND_42[31:0];
  _RAND_43 = {1{`RANDOM}};
  tag_0_11 = _RAND_43[31:0];
  _RAND_44 = {1{`RANDOM}};
  tag_0_12 = _RAND_44[31:0];
  _RAND_45 = {1{`RANDOM}};
  tag_0_13 = _RAND_45[31:0];
  _RAND_46 = {1{`RANDOM}};
  tag_0_14 = _RAND_46[31:0];
  _RAND_47 = {1{`RANDOM}};
  tag_0_15 = _RAND_47[31:0];
  _RAND_48 = {1{`RANDOM}};
  tag_1_0 = _RAND_48[31:0];
  _RAND_49 = {1{`RANDOM}};
  tag_1_1 = _RAND_49[31:0];
  _RAND_50 = {1{`RANDOM}};
  tag_1_2 = _RAND_50[31:0];
  _RAND_51 = {1{`RANDOM}};
  tag_1_3 = _RAND_51[31:0];
  _RAND_52 = {1{`RANDOM}};
  tag_1_4 = _RAND_52[31:0];
  _RAND_53 = {1{`RANDOM}};
  tag_1_5 = _RAND_53[31:0];
  _RAND_54 = {1{`RANDOM}};
  tag_1_6 = _RAND_54[31:0];
  _RAND_55 = {1{`RANDOM}};
  tag_1_7 = _RAND_55[31:0];
  _RAND_56 = {1{`RANDOM}};
  tag_1_8 = _RAND_56[31:0];
  _RAND_57 = {1{`RANDOM}};
  tag_1_9 = _RAND_57[31:0];
  _RAND_58 = {1{`RANDOM}};
  tag_1_10 = _RAND_58[31:0];
  _RAND_59 = {1{`RANDOM}};
  tag_1_11 = _RAND_59[31:0];
  _RAND_60 = {1{`RANDOM}};
  tag_1_12 = _RAND_60[31:0];
  _RAND_61 = {1{`RANDOM}};
  tag_1_13 = _RAND_61[31:0];
  _RAND_62 = {1{`RANDOM}};
  tag_1_14 = _RAND_62[31:0];
  _RAND_63 = {1{`RANDOM}};
  tag_1_15 = _RAND_63[31:0];
  _RAND_64 = {1{`RANDOM}};
  valid_0_0 = _RAND_64[0:0];
  _RAND_65 = {1{`RANDOM}};
  valid_0_1 = _RAND_65[0:0];
  _RAND_66 = {1{`RANDOM}};
  valid_0_2 = _RAND_66[0:0];
  _RAND_67 = {1{`RANDOM}};
  valid_0_3 = _RAND_67[0:0];
  _RAND_68 = {1{`RANDOM}};
  valid_0_4 = _RAND_68[0:0];
  _RAND_69 = {1{`RANDOM}};
  valid_0_5 = _RAND_69[0:0];
  _RAND_70 = {1{`RANDOM}};
  valid_0_6 = _RAND_70[0:0];
  _RAND_71 = {1{`RANDOM}};
  valid_0_7 = _RAND_71[0:0];
  _RAND_72 = {1{`RANDOM}};
  valid_0_8 = _RAND_72[0:0];
  _RAND_73 = {1{`RANDOM}};
  valid_0_9 = _RAND_73[0:0];
  _RAND_74 = {1{`RANDOM}};
  valid_0_10 = _RAND_74[0:0];
  _RAND_75 = {1{`RANDOM}};
  valid_0_11 = _RAND_75[0:0];
  _RAND_76 = {1{`RANDOM}};
  valid_0_12 = _RAND_76[0:0];
  _RAND_77 = {1{`RANDOM}};
  valid_0_13 = _RAND_77[0:0];
  _RAND_78 = {1{`RANDOM}};
  valid_0_14 = _RAND_78[0:0];
  _RAND_79 = {1{`RANDOM}};
  valid_0_15 = _RAND_79[0:0];
  _RAND_80 = {1{`RANDOM}};
  valid_1_0 = _RAND_80[0:0];
  _RAND_81 = {1{`RANDOM}};
  valid_1_1 = _RAND_81[0:0];
  _RAND_82 = {1{`RANDOM}};
  valid_1_2 = _RAND_82[0:0];
  _RAND_83 = {1{`RANDOM}};
  valid_1_3 = _RAND_83[0:0];
  _RAND_84 = {1{`RANDOM}};
  valid_1_4 = _RAND_84[0:0];
  _RAND_85 = {1{`RANDOM}};
  valid_1_5 = _RAND_85[0:0];
  _RAND_86 = {1{`RANDOM}};
  valid_1_6 = _RAND_86[0:0];
  _RAND_87 = {1{`RANDOM}};
  valid_1_7 = _RAND_87[0:0];
  _RAND_88 = {1{`RANDOM}};
  valid_1_8 = _RAND_88[0:0];
  _RAND_89 = {1{`RANDOM}};
  valid_1_9 = _RAND_89[0:0];
  _RAND_90 = {1{`RANDOM}};
  valid_1_10 = _RAND_90[0:0];
  _RAND_91 = {1{`RANDOM}};
  valid_1_11 = _RAND_91[0:0];
  _RAND_92 = {1{`RANDOM}};
  valid_1_12 = _RAND_92[0:0];
  _RAND_93 = {1{`RANDOM}};
  valid_1_13 = _RAND_93[0:0];
  _RAND_94 = {1{`RANDOM}};
  valid_1_14 = _RAND_94[0:0];
  _RAND_95 = {1{`RANDOM}};
  valid_1_15 = _RAND_95[0:0];
  _RAND_96 = {1{`RANDOM}};
  dirty_0_0 = _RAND_96[0:0];
  _RAND_97 = {1{`RANDOM}};
  dirty_0_1 = _RAND_97[0:0];
  _RAND_98 = {1{`RANDOM}};
  dirty_0_2 = _RAND_98[0:0];
  _RAND_99 = {1{`RANDOM}};
  dirty_0_3 = _RAND_99[0:0];
  _RAND_100 = {1{`RANDOM}};
  dirty_0_4 = _RAND_100[0:0];
  _RAND_101 = {1{`RANDOM}};
  dirty_0_5 = _RAND_101[0:0];
  _RAND_102 = {1{`RANDOM}};
  dirty_0_6 = _RAND_102[0:0];
  _RAND_103 = {1{`RANDOM}};
  dirty_0_7 = _RAND_103[0:0];
  _RAND_104 = {1{`RANDOM}};
  dirty_0_8 = _RAND_104[0:0];
  _RAND_105 = {1{`RANDOM}};
  dirty_0_9 = _RAND_105[0:0];
  _RAND_106 = {1{`RANDOM}};
  dirty_0_10 = _RAND_106[0:0];
  _RAND_107 = {1{`RANDOM}};
  dirty_0_11 = _RAND_107[0:0];
  _RAND_108 = {1{`RANDOM}};
  dirty_0_12 = _RAND_108[0:0];
  _RAND_109 = {1{`RANDOM}};
  dirty_0_13 = _RAND_109[0:0];
  _RAND_110 = {1{`RANDOM}};
  dirty_0_14 = _RAND_110[0:0];
  _RAND_111 = {1{`RANDOM}};
  dirty_0_15 = _RAND_111[0:0];
  _RAND_112 = {1{`RANDOM}};
  dirty_1_0 = _RAND_112[0:0];
  _RAND_113 = {1{`RANDOM}};
  dirty_1_1 = _RAND_113[0:0];
  _RAND_114 = {1{`RANDOM}};
  dirty_1_2 = _RAND_114[0:0];
  _RAND_115 = {1{`RANDOM}};
  dirty_1_3 = _RAND_115[0:0];
  _RAND_116 = {1{`RANDOM}};
  dirty_1_4 = _RAND_116[0:0];
  _RAND_117 = {1{`RANDOM}};
  dirty_1_5 = _RAND_117[0:0];
  _RAND_118 = {1{`RANDOM}};
  dirty_1_6 = _RAND_118[0:0];
  _RAND_119 = {1{`RANDOM}};
  dirty_1_7 = _RAND_119[0:0];
  _RAND_120 = {1{`RANDOM}};
  dirty_1_8 = _RAND_120[0:0];
  _RAND_121 = {1{`RANDOM}};
  dirty_1_9 = _RAND_121[0:0];
  _RAND_122 = {1{`RANDOM}};
  dirty_1_10 = _RAND_122[0:0];
  _RAND_123 = {1{`RANDOM}};
  dirty_1_11 = _RAND_123[0:0];
  _RAND_124 = {1{`RANDOM}};
  dirty_1_12 = _RAND_124[0:0];
  _RAND_125 = {1{`RANDOM}};
  dirty_1_13 = _RAND_125[0:0];
  _RAND_126 = {1{`RANDOM}};
  dirty_1_14 = _RAND_126[0:0];
  _RAND_127 = {1{`RANDOM}};
  dirty_1_15 = _RAND_127[0:0];
  _RAND_128 = {1{`RANDOM}};
  way0_hit = _RAND_128[0:0];
  _RAND_129 = {1{`RANDOM}};
  way1_hit = _RAND_129[0:0];
  _RAND_130 = {16{`RANDOM}};
  write_back_data = _RAND_130[511:0];
  _RAND_131 = {1{`RANDOM}};
  write_back_addr = _RAND_131[31:0];
  _RAND_132 = {1{`RANDOM}};
  unuse_way = _RAND_132[1:0];
  _RAND_133 = {2{`RANDOM}};
  receive_data_0 = _RAND_133[63:0];
  _RAND_134 = {2{`RANDOM}};
  receive_data_1 = _RAND_134[63:0];
  _RAND_135 = {2{`RANDOM}};
  receive_data_2 = _RAND_135[63:0];
  _RAND_136 = {2{`RANDOM}};
  receive_data_3 = _RAND_136[63:0];
  _RAND_137 = {2{`RANDOM}};
  receive_data_4 = _RAND_137[63:0];
  _RAND_138 = {2{`RANDOM}};
  receive_data_5 = _RAND_138[63:0];
  _RAND_139 = {2{`RANDOM}};
  receive_data_6 = _RAND_139[63:0];
  _RAND_140 = {2{`RANDOM}};
  receive_data_7 = _RAND_140[63:0];
  _RAND_141 = {1{`RANDOM}};
  receive_num = _RAND_141[2:0];
  _RAND_142 = {1{`RANDOM}};
  quene = _RAND_142[0:0];
  _RAND_143 = {1{`RANDOM}};
  state = _RAND_143[2:0];
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
  input         reset,
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
  output [7:0]  io_Mem_wstrb,
  input         io_rdata_valid
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] Regfile [0:31]; // @[EXU_AXI.scala 37:22]
  wire  Regfile_src1_value_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_src1_value_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_src1_value_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_src2_value_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_src2_value_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_src2_value_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_value_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_value_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_value_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_MPORT_4_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_MPORT_4_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_MPORT_4_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_1_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_1_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_1_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_2_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_2_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_2_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_3_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_3_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_3_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_4_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_4_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_4_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_5_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_5_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_5_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_6_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_6_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_6_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_7_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_7_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_7_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_8_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_8_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_8_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_9_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_9_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_9_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_10_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_10_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_10_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_11_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_11_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_11_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_0_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_0_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_0_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_1_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_1_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_1_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_2_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_2_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_2_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_3_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_3_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_3_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_4_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_4_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_4_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_5_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_5_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_5_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_6_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_6_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_6_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_7_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_7_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_7_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_8_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_8_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_8_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_9_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_9_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_9_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_10_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_10_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_10_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_11_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_11_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_11_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_12_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_12_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_12_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_13_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_13_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_13_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_14_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_14_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_14_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_15_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_15_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_15_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_16_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_16_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_16_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_17_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_17_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_17_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_18_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_18_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_18_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_19_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_19_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_19_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_20_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_20_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_20_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_21_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_21_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_21_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_22_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_22_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_22_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_23_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_23_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_23_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_24_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_24_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_24_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_25_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_25_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_25_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_26_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_26_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_26_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_27_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_27_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_27_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_28_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_28_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_28_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_29_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_29_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_29_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_30_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_30_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_30_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_31_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_31_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_31_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_mem_wdata_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_mem_wdata_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_mem_wdata_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_mem_wdata_MPORT_1_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_mem_wdata_MPORT_1_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_mem_wdata_MPORT_1_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_mem_wdata_MPORT_2_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_mem_wdata_MPORT_2_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_mem_wdata_MPORT_2_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_mem_wdata_MPORT_3_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_mem_wdata_MPORT_3_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_mem_wdata_MPORT_3_data; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire  Regfile_MPORT_mask; // @[EXU_AXI.scala 37:22]
  wire  Regfile_MPORT_en; // @[EXU_AXI.scala 37:22]
  reg [63:0] CSR_Reg [0:3]; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_io_res2rd_MPORT_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_io_res2rd_MPORT_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_io_res2rd_MPORT_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_io_res2rd_MPORT_1_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_io_res2rd_MPORT_1_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_io_res2rd_MPORT_1_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_io_res2rd_MPORT_2_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_io_res2rd_MPORT_2_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_io_res2rd_MPORT_2_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_csr_wdata_MPORT_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_csr_wdata_MPORT_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_csr_wdata_MPORT_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_csr_wdata_MPORT_1_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_csr_wdata_MPORT_1_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_csr_wdata_MPORT_1_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_2_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_MPORT_2_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_MPORT_2_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_5_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_MPORT_5_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_MPORT_5_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_7_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_MPORT_7_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_MPORT_7_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_j_pc_MPORT_12_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_j_pc_MPORT_12_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_j_pc_MPORT_12_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_j_pc_MPORT_13_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_j_pc_MPORT_13_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_j_pc_MPORT_13_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_reg_trace_io_csr_reg_0_MPORT_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_reg_trace_io_csr_reg_1_MPORT_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_reg_trace_io_csr_reg_2_MPORT_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_MPORT_1_data; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_MPORT_1_addr; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_1_mask; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_1_en; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_MPORT_3_data; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_MPORT_3_addr; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_3_mask; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_3_en; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_MPORT_6_data; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_MPORT_6_addr; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_6_mask; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_6_en; // @[EXU_AXI.scala 38:22]
  wire [63:0] reg_trace_input_reg_0; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_1; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_2; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_3; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_4; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_5; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_6; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_7; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_8; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_9; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_10; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_11; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_12; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_13; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_14; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_15; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_16; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_17; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_18; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_19; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_20; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_21; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_22; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_23; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_24; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_25; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_26; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_27; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_28; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_29; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_30; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_31; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_csr_reg_0; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_csr_reg_1; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_csr_reg_2; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_csr_reg_3; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_pc; // @[EXU_AXI.scala 163:27]
  wire [11:0] csr_addr = io_imm[11:0]; // @[EXU_AXI.scala 39:26]
  wire [1:0] _csr_index_T_5 = 12'h300 == csr_addr ? 2'h2 : {{1'd0}, 12'h341 == csr_addr}; // @[Mux.scala 81:58]
  wire  _csr_index_T_6 = 12'h342 == csr_addr; // @[Mux.scala 81:61]
  wire [63:0] _src1_value_T_1 = io_rs1 == 5'h0 ? 64'h0 : Regfile_src1_value_MPORT_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] src1_value = io_ctrl_sign_src1_is_pc ? io_pc : _src1_value_T_1; // @[EXU_AXI.scala 49:25]
  wire [63:0] _src2_value_T_1 = io_rs2 == 5'h0 ? 64'h0 : Regfile_src2_value_MPORT_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] src2_value = io_ctrl_sign_src2_is_imm ? io_imm : _src2_value_T_1; // @[EXU_AXI.scala 50:25]
  wire [63:0] add_res = src1_value + src2_value; // @[EXU_AXI.scala 51:30]
  wire [63:0] sub_res = src1_value - src2_value; // @[EXU_AXI.scala 52:30]
  wire [63:0] _sra_res_T = io_ctrl_sign_src1_is_pc ? io_pc : _src1_value_T_1; // @[EXU_AXI.scala 53:37]
  wire [63:0] sra_res = $signed(_sra_res_T) >>> src2_value[5:0]; // @[EXU_AXI.scala 53:60]
  wire [63:0] srl_res = src1_value >> src2_value[5:0]; // @[EXU_AXI.scala 54:30]
  wire [126:0] _GEN_1 = {{63'd0}, src1_value}; // @[EXU_AXI.scala 55:30]
  wire [126:0] sll_res = _GEN_1 << src2_value[5:0]; // @[EXU_AXI.scala 55:30]
  wire [31:0] _sraw_res_T_1 = src1_value[31:0]; // @[EXU_AXI.scala 56:43]
  wire [31:0] sraw_res = $signed(_sraw_res_T_1) >>> src2_value[4:0]; // @[EXU_AXI.scala 56:46]
  wire [31:0] srlw_res = src1_value[31:0] >> src2_value[4:0]; // @[EXU_AXI.scala 57:37]
  wire [62:0] _GEN_2 = {{31'd0}, src1_value[31:0]}; // @[EXU_AXI.scala 58:37]
  wire [62:0] sllw_res = _GEN_2 << src2_value[4:0]; // @[EXU_AXI.scala 58:37]
  wire [63:0] or_res = src1_value | src2_value; // @[EXU_AXI.scala 59:29]
  wire [63:0] xor_res = src1_value ^ src2_value; // @[EXU_AXI.scala 60:30]
  wire [63:0] and_res = src1_value & src2_value; // @[EXU_AXI.scala 61:30]
  wire [127:0] _mlu_res_T = src1_value * src2_value; // @[EXU_AXI.scala 62:31]
  wire [63:0] mlu_res = _mlu_res_T[63:0]; // @[EXU_AXI.scala 62:44]
  wire [63:0] _mluw_res_T_2 = src1_value[31:0] * src2_value[31:0]; // @[EXU_AXI.scala 63:38]
  wire [31:0] mluw_res = _mluw_res_T_2[31:0]; // @[EXU_AXI.scala 63:57]
  wire [31:0] _divw_res_T_3 = src2_value[31:0]; // @[EXU_AXI.scala 64:64]
  wire [32:0] _divw_res_T_4 = $signed(_sraw_res_T_1) / $signed(_divw_res_T_3); // @[EXU_AXI.scala 64:45]
  wire [31:0] divw_res = _divw_res_T_4[31:0]; // @[EXU_AXI.scala 64:71]
  wire [31:0] divuw_res = src1_value[31:0] / src2_value[31:0]; // @[EXU_AXI.scala 65:39]
  wire [31:0] remw_res = $signed(_sraw_res_T_1) % $signed(_divw_res_T_3); // @[EXU_AXI.scala 66:71]
  wire [31:0] remuw_res = src1_value[31:0] % src2_value[31:0]; // @[EXU_AXI.scala 67:39]
  wire [63:0] _div_res_T_1 = io_ctrl_sign_src2_is_imm ? io_imm : _src2_value_T_1; // @[EXU_AXI.scala 68:51]
  wire [64:0] div_res = $signed(_sra_res_T) / $signed(_div_res_T_1); // @[EXU_AXI.scala 68:59]
  wire [63:0] divu_res = src1_value / src2_value; // @[EXU_AXI.scala 69:31]
  wire [63:0] rem_res = $signed(_sra_res_T) % $signed(_div_res_T_1); // @[EXU_AXI.scala 70:59]
  wire [63:0] remu_res = src1_value % src2_value; // @[EXU_AXI.scala 71:31]
  wire [63:0] _io_res2rd_T_1 = io_pc + 64'h4; // @[EXU_AXI.scala 76:24]
  wire  _io_res2rd_T_4 = src1_value < src2_value; // @[EXU_AXI.scala 78:34]
  wire  _io_res2rd_T_10 = $signed(_sra_res_T) < $signed(_div_res_T_1); // @[EXU_AXI.scala 80:42]
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
  wire [31:0] _io_res2rd_T_68 = $signed(_sraw_res_T_1) >>> src2_value[4:0]; // @[EXU_AXI.scala 105:56]
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
  wire [63:0] reg_value = io_rd == 5'h0 ? 64'h0 : Regfile_reg_value_MPORT_data; // @[EXU_AXI.scala 47:12]
  wire  _T_6 = io_ctrl_sign_reg_write & io_rd != 5'h0 & (io_inst_valid & ~io_ctrl_sign_Readmem_en |
    io_ctrl_sign_Readmem_en & io_rdata_valid); // @[EXU_AXI.scala 129:63]
  wire [63:0] _csr_wdata_T = src1_value | CSR_Reg_csr_wdata_MPORT_data; // @[EXU_AXI.scala 134:32]
  wire [63:0] _csr_wdata_T_1 = ~CSR_Reg_csr_wdata_MPORT_1_data; // @[EXU_AXI.scala 135:35]
  wire [63:0] _csr_wdata_T_2 = src1_value & _csr_wdata_T_1; // @[EXU_AXI.scala 135:32]
  wire [63:0] _csr_wdata_T_4 = 32'h3f == io_inst_now ? src1_value : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _csr_wdata_T_6 = 32'h46 == io_inst_now ? _csr_wdata_T : _csr_wdata_T_4; // @[Mux.scala 81:58]
  wire [63:0] csr_wdata = 32'h47 == io_inst_now ? _csr_wdata_T_2 : _csr_wdata_T_6; // @[Mux.scala 81:58]
  wire  _T_9 = io_inst_now == 32'h3d & io_inst_valid; // @[EXU_AXI.scala 138:48]
  wire  _T_14 = io_ctrl_sign_csr_write & io_inst_valid; // @[EXU_AXI.scala 141:53]
  wire [63:0] _j_pc_T = add_res & 64'hfffffffffffffffe; // @[EXU_AXI.scala 148:28]
  wire [63:0] _j_pc_T_3 = io_rs1 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_data; // @[EXU_AXI.scala 149:39]
  wire [63:0] _j_pc_T_6 = io_rs2 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_1_data; // @[EXU_AXI.scala 149:67]
  wire [63:0] _j_pc_T_8 = $signed(_j_pc_T_3) != $signed(_j_pc_T_6) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 149:21]
  wire [63:0] _j_pc_T_11 = io_rs1 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_2_data; // @[EXU_AXI.scala 150:39]
  wire [63:0] _j_pc_T_14 = io_rs2 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_3_data; // @[EXU_AXI.scala 150:67]
  wire [63:0] _j_pc_T_16 = $signed(_j_pc_T_11) == $signed(_j_pc_T_14) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 150:21]
  wire [63:0] _j_pc_T_19 = io_rs1 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_4_data; // @[EXU_AXI.scala 151:39]
  wire [63:0] _j_pc_T_22 = io_rs2 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_5_data; // @[EXU_AXI.scala 151:66]
  wire [63:0] _j_pc_T_24 = $signed(_j_pc_T_19) >= $signed(_j_pc_T_22) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 151:21]
  wire [63:0] _j_pc_T_27 = io_rs1 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_6_data; // @[EXU_AXI.scala 152:39]
  wire [63:0] _j_pc_T_30 = io_rs2 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_7_data; // @[EXU_AXI.scala 152:65]
  wire [63:0] _j_pc_T_32 = $signed(_j_pc_T_27) < $signed(_j_pc_T_30) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 152:21]
  wire [63:0] _j_pc_T_34 = io_rs1 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_8_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _j_pc_T_36 = io_rs2 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_9_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _j_pc_T_38 = _j_pc_T_34 < _j_pc_T_36 ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 153:22]
  wire [63:0] _j_pc_T_40 = io_rs1 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_10_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _j_pc_T_42 = io_rs2 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_11_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _j_pc_T_44 = _j_pc_T_40 >= _j_pc_T_42 ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 154:22]
  wire [63:0] _j_pc_T_46 = CSR_Reg_j_pc_MPORT_13_data + 64'h4; // @[EXU_AXI.scala 156:33]
  wire [63:0] _j_pc_T_48 = 32'h5 == io_inst_now ? add_res : _io_res2rd_T_1; // @[Mux.scala 81:58]
  wire [63:0] _j_pc_T_50 = 32'h6 == io_inst_now ? _j_pc_T : _j_pc_T_48; // @[Mux.scala 81:58]
  wire [63:0] _j_pc_T_52 = 32'h2a == io_inst_now ? _j_pc_T_8 : _j_pc_T_50; // @[Mux.scala 81:58]
  wire [63:0] _j_pc_T_54 = 32'h29 == io_inst_now ? _j_pc_T_16 : _j_pc_T_52; // @[Mux.scala 81:58]
  wire [63:0] _j_pc_T_56 = 32'h2b == io_inst_now ? _j_pc_T_24 : _j_pc_T_54; // @[Mux.scala 81:58]
  wire [63:0] _j_pc_T_58 = 32'h2c == io_inst_now ? _j_pc_T_32 : _j_pc_T_56; // @[Mux.scala 81:58]
  wire [63:0] _j_pc_T_60 = 32'h2d == io_inst_now ? _j_pc_T_38 : _j_pc_T_58; // @[Mux.scala 81:58]
  wire [63:0] _j_pc_T_62 = 32'h3c == io_inst_now ? _j_pc_T_44 : _j_pc_T_60; // @[Mux.scala 81:58]
  reg [63:0] pc_next; // @[EXU_AXI.scala 158:26]
  wire [63:0] _mem_wdata_T_1 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdata_MPORT_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _mem_wdata_T_3 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdata_MPORT_1_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _mem_wdata_T_6 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdata_MPORT_2_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _mem_wdata_T_9 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdata_MPORT_3_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _mem_wdata_T_12 = 32'h7 == io_inst_now ? _mem_wdata_T_1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _mem_wdata_T_14 = 32'h26 == io_inst_now ? {{48'd0}, _mem_wdata_T_3[15:0]} : _mem_wdata_T_12; // @[Mux.scala 81:58]
  wire [63:0] _mem_wdata_T_16 = 32'h28 == io_inst_now ? {{56'd0}, _mem_wdata_T_6[7:0]} : _mem_wdata_T_14; // @[Mux.scala 81:58]
  traceregs reg_trace ( // @[EXU_AXI.scala 163:27]
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
  assign Regfile_src1_value_MPORT_data = Regfile[Regfile_src1_value_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_src2_value_MPORT_en = 1'h1;
  assign Regfile_src2_value_MPORT_addr = io_rs2;
  assign Regfile_src2_value_MPORT_data = Regfile[Regfile_src2_value_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_value_MPORT_en = 1'h1;
  assign Regfile_reg_value_MPORT_addr = io_rd;
  assign Regfile_reg_value_MPORT_data = Regfile[Regfile_reg_value_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_MPORT_4_en = 1'h1;
  assign Regfile_MPORT_4_addr = 5'h11;
  assign Regfile_MPORT_4_data = Regfile[Regfile_MPORT_4_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_en = 1'h1;
  assign Regfile_j_pc_MPORT_addr = io_rs1;
  assign Regfile_j_pc_MPORT_data = Regfile[Regfile_j_pc_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_1_en = 1'h1;
  assign Regfile_j_pc_MPORT_1_addr = io_rs2;
  assign Regfile_j_pc_MPORT_1_data = Regfile[Regfile_j_pc_MPORT_1_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_2_en = 1'h1;
  assign Regfile_j_pc_MPORT_2_addr = io_rs1;
  assign Regfile_j_pc_MPORT_2_data = Regfile[Regfile_j_pc_MPORT_2_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_3_en = 1'h1;
  assign Regfile_j_pc_MPORT_3_addr = io_rs2;
  assign Regfile_j_pc_MPORT_3_data = Regfile[Regfile_j_pc_MPORT_3_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_4_en = 1'h1;
  assign Regfile_j_pc_MPORT_4_addr = io_rs1;
  assign Regfile_j_pc_MPORT_4_data = Regfile[Regfile_j_pc_MPORT_4_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_5_en = 1'h1;
  assign Regfile_j_pc_MPORT_5_addr = io_rs2;
  assign Regfile_j_pc_MPORT_5_data = Regfile[Regfile_j_pc_MPORT_5_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_6_en = 1'h1;
  assign Regfile_j_pc_MPORT_6_addr = io_rs1;
  assign Regfile_j_pc_MPORT_6_data = Regfile[Regfile_j_pc_MPORT_6_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_7_en = 1'h1;
  assign Regfile_j_pc_MPORT_7_addr = io_rs2;
  assign Regfile_j_pc_MPORT_7_data = Regfile[Regfile_j_pc_MPORT_7_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_8_en = 1'h1;
  assign Regfile_j_pc_MPORT_8_addr = io_rs1;
  assign Regfile_j_pc_MPORT_8_data = Regfile[Regfile_j_pc_MPORT_8_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_9_en = 1'h1;
  assign Regfile_j_pc_MPORT_9_addr = io_rs2;
  assign Regfile_j_pc_MPORT_9_data = Regfile[Regfile_j_pc_MPORT_9_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_10_en = 1'h1;
  assign Regfile_j_pc_MPORT_10_addr = io_rs1;
  assign Regfile_j_pc_MPORT_10_data = Regfile[Regfile_j_pc_MPORT_10_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_11_en = 1'h1;
  assign Regfile_j_pc_MPORT_11_addr = io_rs2;
  assign Regfile_j_pc_MPORT_11_data = Regfile[Regfile_j_pc_MPORT_11_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_0_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_0_MPORT_addr = 5'h0;
  assign Regfile_reg_trace_io_input_reg_0_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_0_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_1_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_1_MPORT_addr = 5'h1;
  assign Regfile_reg_trace_io_input_reg_1_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_1_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_2_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_2_MPORT_addr = 5'h2;
  assign Regfile_reg_trace_io_input_reg_2_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_2_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_3_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_3_MPORT_addr = 5'h3;
  assign Regfile_reg_trace_io_input_reg_3_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_3_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_4_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_4_MPORT_addr = 5'h4;
  assign Regfile_reg_trace_io_input_reg_4_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_4_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_5_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_5_MPORT_addr = 5'h5;
  assign Regfile_reg_trace_io_input_reg_5_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_5_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_6_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_6_MPORT_addr = 5'h6;
  assign Regfile_reg_trace_io_input_reg_6_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_6_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_7_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_7_MPORT_addr = 5'h7;
  assign Regfile_reg_trace_io_input_reg_7_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_7_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_8_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_8_MPORT_addr = 5'h8;
  assign Regfile_reg_trace_io_input_reg_8_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_8_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_9_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_9_MPORT_addr = 5'h9;
  assign Regfile_reg_trace_io_input_reg_9_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_9_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_10_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_10_MPORT_addr = 5'ha;
  assign Regfile_reg_trace_io_input_reg_10_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_10_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_11_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_11_MPORT_addr = 5'hb;
  assign Regfile_reg_trace_io_input_reg_11_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_11_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_12_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_12_MPORT_addr = 5'hc;
  assign Regfile_reg_trace_io_input_reg_12_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_12_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_13_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_13_MPORT_addr = 5'hd;
  assign Regfile_reg_trace_io_input_reg_13_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_13_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_14_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_14_MPORT_addr = 5'he;
  assign Regfile_reg_trace_io_input_reg_14_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_14_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_15_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_15_MPORT_addr = 5'hf;
  assign Regfile_reg_trace_io_input_reg_15_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_15_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_16_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_16_MPORT_addr = 5'h10;
  assign Regfile_reg_trace_io_input_reg_16_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_16_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_17_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_17_MPORT_addr = 5'h11;
  assign Regfile_reg_trace_io_input_reg_17_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_17_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_18_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_18_MPORT_addr = 5'h12;
  assign Regfile_reg_trace_io_input_reg_18_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_18_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_19_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_19_MPORT_addr = 5'h13;
  assign Regfile_reg_trace_io_input_reg_19_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_19_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_20_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_20_MPORT_addr = 5'h14;
  assign Regfile_reg_trace_io_input_reg_20_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_20_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_21_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_21_MPORT_addr = 5'h15;
  assign Regfile_reg_trace_io_input_reg_21_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_21_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_22_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_22_MPORT_addr = 5'h16;
  assign Regfile_reg_trace_io_input_reg_22_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_22_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_23_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_23_MPORT_addr = 5'h17;
  assign Regfile_reg_trace_io_input_reg_23_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_23_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_24_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_24_MPORT_addr = 5'h18;
  assign Regfile_reg_trace_io_input_reg_24_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_24_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_25_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_25_MPORT_addr = 5'h19;
  assign Regfile_reg_trace_io_input_reg_25_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_25_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_26_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_26_MPORT_addr = 5'h1a;
  assign Regfile_reg_trace_io_input_reg_26_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_26_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_27_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_27_MPORT_addr = 5'h1b;
  assign Regfile_reg_trace_io_input_reg_27_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_27_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_28_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_28_MPORT_addr = 5'h1c;
  assign Regfile_reg_trace_io_input_reg_28_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_28_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_29_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_29_MPORT_addr = 5'h1d;
  assign Regfile_reg_trace_io_input_reg_29_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_29_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_30_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_30_MPORT_addr = 5'h1e;
  assign Regfile_reg_trace_io_input_reg_30_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_30_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_31_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_31_MPORT_addr = 5'h1f;
  assign Regfile_reg_trace_io_input_reg_31_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_31_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_mem_wdata_MPORT_en = 1'h1;
  assign Regfile_mem_wdata_MPORT_addr = io_rs2;
  assign Regfile_mem_wdata_MPORT_data = Regfile[Regfile_mem_wdata_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_mem_wdata_MPORT_1_en = 1'h1;
  assign Regfile_mem_wdata_MPORT_1_addr = io_rs2;
  assign Regfile_mem_wdata_MPORT_1_data = Regfile[Regfile_mem_wdata_MPORT_1_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_mem_wdata_MPORT_2_en = 1'h1;
  assign Regfile_mem_wdata_MPORT_2_addr = io_rs2;
  assign Regfile_mem_wdata_MPORT_2_data = Regfile[Regfile_mem_wdata_MPORT_2_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_mem_wdata_MPORT_3_en = 1'h1;
  assign Regfile_mem_wdata_MPORT_3_addr = io_rs2;
  assign Regfile_mem_wdata_MPORT_3_data = Regfile[Regfile_mem_wdata_MPORT_3_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_MPORT_data = _T_6 ? io_res2rd : reg_value;
  assign Regfile_MPORT_addr = io_rd;
  assign Regfile_MPORT_mask = 1'h1;
  assign Regfile_MPORT_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_io_res2rd_MPORT_data = CSR_Reg[CSR_Reg_io_res2rd_MPORT_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_io_res2rd_MPORT_1_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_1_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_io_res2rd_MPORT_1_data = CSR_Reg[CSR_Reg_io_res2rd_MPORT_1_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_io_res2rd_MPORT_2_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_2_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_io_res2rd_MPORT_2_data = CSR_Reg[CSR_Reg_io_res2rd_MPORT_2_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_csr_wdata_MPORT_en = 1'h1;
  assign CSR_Reg_csr_wdata_MPORT_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_csr_wdata_MPORT_data = CSR_Reg[CSR_Reg_csr_wdata_MPORT_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_csr_wdata_MPORT_1_en = 1'h1;
  assign CSR_Reg_csr_wdata_MPORT_1_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_csr_wdata_MPORT_1_data = CSR_Reg[CSR_Reg_csr_wdata_MPORT_1_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_MPORT_2_en = 1'h1;
  assign CSR_Reg_MPORT_2_addr = 2'h1;
  assign CSR_Reg_MPORT_2_data = CSR_Reg[CSR_Reg_MPORT_2_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_MPORT_5_en = 1'h1;
  assign CSR_Reg_MPORT_5_addr = 2'h3;
  assign CSR_Reg_MPORT_5_data = CSR_Reg[CSR_Reg_MPORT_5_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_MPORT_7_en = 1'h1;
  assign CSR_Reg_MPORT_7_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_MPORT_7_data = CSR_Reg[CSR_Reg_MPORT_7_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_j_pc_MPORT_12_en = 1'h1;
  assign CSR_Reg_j_pc_MPORT_12_addr = 2'h0;
  assign CSR_Reg_j_pc_MPORT_12_data = CSR_Reg[CSR_Reg_j_pc_MPORT_12_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_j_pc_MPORT_13_en = 1'h1;
  assign CSR_Reg_j_pc_MPORT_13_addr = 2'h1;
  assign CSR_Reg_j_pc_MPORT_13_data = CSR_Reg[CSR_Reg_j_pc_MPORT_13_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_reg_trace_io_csr_reg_0_MPORT_en = 1'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr = 2'h0;
  assign CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data = CSR_Reg[CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_reg_trace_io_csr_reg_1_MPORT_en = 1'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr = 2'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data = CSR_Reg[CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_reg_trace_io_csr_reg_2_MPORT_en = 1'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr = 2'h2;
  assign CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data = CSR_Reg[CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_MPORT_1_data = _T_9 ? io_pc : CSR_Reg_MPORT_2_data;
  assign CSR_Reg_MPORT_1_addr = 2'h1;
  assign CSR_Reg_MPORT_1_mask = 1'h1;
  assign CSR_Reg_MPORT_1_en = 1'h1;
  assign CSR_Reg_MPORT_3_data = _T_9 ? Regfile_MPORT_4_data : CSR_Reg_MPORT_5_data;
  assign CSR_Reg_MPORT_3_addr = 2'h3;
  assign CSR_Reg_MPORT_3_mask = 1'h1;
  assign CSR_Reg_MPORT_3_en = 1'h1;
  assign CSR_Reg_MPORT_6_data = _T_14 ? csr_wdata : CSR_Reg_MPORT_7_data;
  assign CSR_Reg_MPORT_6_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_MPORT_6_mask = 1'h1;
  assign CSR_Reg_MPORT_6_en = 1'h1;
  assign io_pc_next = pc_next; // @[EXU_AXI.scala 162:16]
  assign io_res2rd = _io_res2rd_T_208[63:0]; // @[EXU_AXI.scala 72:15]
  assign io_inst_store = io_ctrl_sign_Writemem_en; // @[EXU_AXI.scala 188:19]
  assign io_inst_load = io_ctrl_sign_Readmem_en; // @[EXU_AXI.scala 189:18]
  assign io_Mem_addr = add_res[31:0]; // @[EXU_AXI.scala 190:17]
  assign io_Mem_wdata = 32'h27 == io_inst_now ? {{32'd0}, _mem_wdata_T_9[31:0]} : _mem_wdata_T_16; // @[Mux.scala 81:58]
  assign io_Mem_wstrb = io_ctrl_sign_Wmask; // @[EXU_AXI.scala 192:18]
  assign reg_trace_input_reg_0 = Regfile_reg_trace_io_input_reg_0_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_1 = Regfile_reg_trace_io_input_reg_1_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_2 = Regfile_reg_trace_io_input_reg_2_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_3 = Regfile_reg_trace_io_input_reg_3_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_4 = Regfile_reg_trace_io_input_reg_4_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_5 = Regfile_reg_trace_io_input_reg_5_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_6 = Regfile_reg_trace_io_input_reg_6_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_7 = Regfile_reg_trace_io_input_reg_7_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_8 = Regfile_reg_trace_io_input_reg_8_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_9 = Regfile_reg_trace_io_input_reg_9_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_10 = Regfile_reg_trace_io_input_reg_10_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_11 = Regfile_reg_trace_io_input_reg_11_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_12 = Regfile_reg_trace_io_input_reg_12_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_13 = Regfile_reg_trace_io_input_reg_13_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_14 = Regfile_reg_trace_io_input_reg_14_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_15 = Regfile_reg_trace_io_input_reg_15_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_16 = Regfile_reg_trace_io_input_reg_16_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_17 = Regfile_reg_trace_io_input_reg_17_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_18 = Regfile_reg_trace_io_input_reg_18_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_19 = Regfile_reg_trace_io_input_reg_19_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_20 = Regfile_reg_trace_io_input_reg_20_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_21 = Regfile_reg_trace_io_input_reg_21_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_22 = Regfile_reg_trace_io_input_reg_22_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_23 = Regfile_reg_trace_io_input_reg_23_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_24 = Regfile_reg_trace_io_input_reg_24_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_25 = Regfile_reg_trace_io_input_reg_25_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_26 = Regfile_reg_trace_io_input_reg_26_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_27 = Regfile_reg_trace_io_input_reg_27_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_28 = Regfile_reg_trace_io_input_reg_28_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_29 = Regfile_reg_trace_io_input_reg_29_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_30 = Regfile_reg_trace_io_input_reg_30_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_31 = Regfile_reg_trace_io_input_reg_31_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_csr_reg_0 = CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data; // @[EXU_AXI.scala 168:54]
  assign reg_trace_csr_reg_1 = CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data; // @[EXU_AXI.scala 168:54]
  assign reg_trace_csr_reg_2 = CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data; // @[EXU_AXI.scala 168:54]
  assign reg_trace_csr_reg_3 = 64'h0; // @[EXU_AXI.scala 167:{36,36}]
  assign reg_trace_pc = io_pc; // @[EXU_AXI.scala 166:21]
  always @(posedge clock) begin
    if (Regfile_MPORT_en & Regfile_MPORT_mask) begin
      Regfile[Regfile_MPORT_addr] <= Regfile_MPORT_data; // @[EXU_AXI.scala 37:22]
    end
    if (CSR_Reg_MPORT_1_en & CSR_Reg_MPORT_1_mask) begin
      CSR_Reg[CSR_Reg_MPORT_1_addr] <= CSR_Reg_MPORT_1_data; // @[EXU_AXI.scala 38:22]
    end
    if (CSR_Reg_MPORT_3_en & CSR_Reg_MPORT_3_mask) begin
      CSR_Reg[CSR_Reg_MPORT_3_addr] <= CSR_Reg_MPORT_3_data; // @[EXU_AXI.scala 38:22]
    end
    if (CSR_Reg_MPORT_6_en & CSR_Reg_MPORT_6_mask) begin
      CSR_Reg[CSR_Reg_MPORT_6_addr] <= CSR_Reg_MPORT_6_data; // @[EXU_AXI.scala 38:22]
    end
    if (reset) begin // @[EXU_AXI.scala 158:26]
      pc_next <= 64'h0; // @[EXU_AXI.scala 158:26]
    end else if (io_inst_valid) begin // @[EXU_AXI.scala 159:24]
      if (32'h3e == io_inst_now) begin // @[Mux.scala 81:58]
        pc_next <= _j_pc_T_46;
      end else if (32'h3d == io_inst_now) begin // @[Mux.scala 81:58]
        pc_next <= CSR_Reg_j_pc_MPORT_12_data;
      end else begin
        pc_next <= _j_pc_T_62;
      end
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
`ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {2{`RANDOM}};
  pc_next = _RAND_2[63:0];
`endif // RANDOMIZE_REG_INIT
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
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire  axi_clock; // @[top.scala 18:21]
  wire  axi_reset; // @[top.scala 18:21]
  wire [31:0] axi_io_axi_in_araddr; // @[top.scala 18:21]
  wire [7:0] axi_io_axi_in_arlen; // @[top.scala 18:21]
  wire  axi_io_axi_in_arvalid; // @[top.scala 18:21]
  wire  axi_io_axi_in_rready; // @[top.scala 18:21]
  wire [31:0] axi_io_axi_in_awaddr; // @[top.scala 18:21]
  wire [7:0] axi_io_axi_in_awlen; // @[top.scala 18:21]
  wire  axi_io_axi_in_awvalid; // @[top.scala 18:21]
  wire [63:0] axi_io_axi_in_wdata; // @[top.scala 18:21]
  wire [7:0] axi_io_axi_in_wstrb; // @[top.scala 18:21]
  wire  axi_io_axi_in_wvalid; // @[top.scala 18:21]
  wire  axi_io_axi_in_bready; // @[top.scala 18:21]
  wire [63:0] axi_io_axi_out_rdata; // @[top.scala 18:21]
  wire  axi_io_axi_out_rlast; // @[top.scala 18:21]
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
  wire [63:0] lsu_step_io_axi_out_wdata; // @[top.scala 19:26]
  wire [7:0] lsu_step_io_axi_out_wstrb; // @[top.scala 19:26]
  wire  lsu_step_io_axi_out_wvalid; // @[top.scala 19:26]
  wire  lsu_step_io_axi_out_bready; // @[top.scala 19:26]
  wire  arbiter_clock; // @[top.scala 20:25]
  wire  arbiter_reset; // @[top.scala 20:25]
  wire [31:0] arbiter_io_ifu_axi_in_araddr; // @[top.scala 20:25]
  wire [7:0] arbiter_io_ifu_axi_in_arlen; // @[top.scala 20:25]
  wire  arbiter_io_ifu_axi_in_arvalid; // @[top.scala 20:25]
  wire  arbiter_io_ifu_axi_in_rready; // @[top.scala 20:25]
  wire [63:0] arbiter_io_ifu_axi_out_rdata; // @[top.scala 20:25]
  wire  arbiter_io_ifu_axi_out_rlast; // @[top.scala 20:25]
  wire  arbiter_io_ifu_axi_out_rvalid; // @[top.scala 20:25]
  wire [31:0] arbiter_io_lsu_axi_in_araddr; // @[top.scala 20:25]
  wire [7:0] arbiter_io_lsu_axi_in_arlen; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_in_arvalid; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_in_rready; // @[top.scala 20:25]
  wire [31:0] arbiter_io_lsu_axi_in_awaddr; // @[top.scala 20:25]
  wire [7:0] arbiter_io_lsu_axi_in_awlen; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_in_awvalid; // @[top.scala 20:25]
  wire [63:0] arbiter_io_lsu_axi_in_wdata; // @[top.scala 20:25]
  wire [7:0] arbiter_io_lsu_axi_in_wstrb; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_in_wvalid; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_in_bready; // @[top.scala 20:25]
  wire [63:0] arbiter_io_lsu_axi_out_rdata; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_out_rlast; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_out_rvalid; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_out_awready; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_out_wready; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_out_bvalid; // @[top.scala 20:25]
  wire [63:0] arbiter_io_axi_in_rdata; // @[top.scala 20:25]
  wire  arbiter_io_axi_in_rlast; // @[top.scala 20:25]
  wire  arbiter_io_axi_in_rvalid; // @[top.scala 20:25]
  wire  arbiter_io_axi_in_awready; // @[top.scala 20:25]
  wire  arbiter_io_axi_in_wready; // @[top.scala 20:25]
  wire  arbiter_io_axi_in_bvalid; // @[top.scala 20:25]
  wire [31:0] arbiter_io_axi_out_araddr; // @[top.scala 20:25]
  wire [7:0] arbiter_io_axi_out_arlen; // @[top.scala 20:25]
  wire  arbiter_io_axi_out_arvalid; // @[top.scala 20:25]
  wire  arbiter_io_axi_out_rready; // @[top.scala 20:25]
  wire [31:0] arbiter_io_axi_out_awaddr; // @[top.scala 20:25]
  wire [7:0] arbiter_io_axi_out_awlen; // @[top.scala 20:25]
  wire  arbiter_io_axi_out_awvalid; // @[top.scala 20:25]
  wire [63:0] arbiter_io_axi_out_wdata; // @[top.scala 20:25]
  wire [7:0] arbiter_io_axi_out_wstrb; // @[top.scala 20:25]
  wire  arbiter_io_axi_out_wvalid; // @[top.scala 20:25]
  wire  arbiter_io_axi_out_bready; // @[top.scala 20:25]
  wire  ifu_step_clock; // @[top.scala 21:26]
  wire  ifu_step_reset; // @[top.scala 21:26]
  wire [63:0] ifu_step_io_pc; // @[top.scala 21:26]
  wire  ifu_step_io_pc_valid; // @[top.scala 21:26]
  wire  ifu_step_io_inst_valid; // @[top.scala 21:26]
  wire [31:0] ifu_step_io_inst; // @[top.scala 21:26]
  wire [31:0] ifu_step_io_inst_reg; // @[top.scala 21:26]
  wire [63:0] ifu_step_io_axi_in_rdata; // @[top.scala 21:26]
  wire  ifu_step_io_axi_in_rlast; // @[top.scala 21:26]
  wire  ifu_step_io_axi_in_rvalid; // @[top.scala 21:26]
  wire [31:0] ifu_step_io_axi_out_araddr; // @[top.scala 21:26]
  wire  ifu_step_io_axi_out_arvalid; // @[top.scala 21:26]
  wire  ifu_step_io_axi_out_rready; // @[top.scala 21:26]
  wire  i_cache_clock; // @[top.scala 22:25]
  wire  i_cache_reset; // @[top.scala 22:25]
  wire [31:0] i_cache_io_from_ifu_araddr; // @[top.scala 22:25]
  wire  i_cache_io_from_ifu_arvalid; // @[top.scala 22:25]
  wire  i_cache_io_from_ifu_rready; // @[top.scala 22:25]
  wire [63:0] i_cache_io_to_ifu_rdata; // @[top.scala 22:25]
  wire  i_cache_io_to_ifu_rlast; // @[top.scala 22:25]
  wire  i_cache_io_to_ifu_rvalid; // @[top.scala 22:25]
  wire [31:0] i_cache_io_to_axi_araddr; // @[top.scala 22:25]
  wire [7:0] i_cache_io_to_axi_arlen; // @[top.scala 22:25]
  wire  i_cache_io_to_axi_arvalid; // @[top.scala 22:25]
  wire  i_cache_io_to_axi_rready; // @[top.scala 22:25]
  wire [63:0] i_cache_io_from_axi_rdata; // @[top.scala 22:25]
  wire  i_cache_io_from_axi_rlast; // @[top.scala 22:25]
  wire  i_cache_io_from_axi_rvalid; // @[top.scala 22:25]
  wire  d_cache_clock; // @[top.scala 23:25]
  wire  d_cache_reset; // @[top.scala 23:25]
  wire [31:0] d_cache_io_from_lsu_araddr; // @[top.scala 23:25]
  wire  d_cache_io_from_lsu_arvalid; // @[top.scala 23:25]
  wire  d_cache_io_from_lsu_rready; // @[top.scala 23:25]
  wire [31:0] d_cache_io_from_lsu_awaddr; // @[top.scala 23:25]
  wire  d_cache_io_from_lsu_awvalid; // @[top.scala 23:25]
  wire [63:0] d_cache_io_from_lsu_wdata; // @[top.scala 23:25]
  wire [7:0] d_cache_io_from_lsu_wstrb; // @[top.scala 23:25]
  wire  d_cache_io_from_lsu_wvalid; // @[top.scala 23:25]
  wire  d_cache_io_from_lsu_bready; // @[top.scala 23:25]
  wire  d_cache_io_to_lsu_arready; // @[top.scala 23:25]
  wire [63:0] d_cache_io_to_lsu_rdata; // @[top.scala 23:25]
  wire  d_cache_io_to_lsu_rvalid; // @[top.scala 23:25]
  wire  d_cache_io_to_lsu_awready; // @[top.scala 23:25]
  wire  d_cache_io_to_lsu_wready; // @[top.scala 23:25]
  wire  d_cache_io_to_lsu_bvalid; // @[top.scala 23:25]
  wire [31:0] d_cache_io_to_axi_araddr; // @[top.scala 23:25]
  wire [7:0] d_cache_io_to_axi_arlen; // @[top.scala 23:25]
  wire  d_cache_io_to_axi_arvalid; // @[top.scala 23:25]
  wire  d_cache_io_to_axi_rready; // @[top.scala 23:25]
  wire [31:0] d_cache_io_to_axi_awaddr; // @[top.scala 23:25]
  wire [7:0] d_cache_io_to_axi_awlen; // @[top.scala 23:25]
  wire  d_cache_io_to_axi_awvalid; // @[top.scala 23:25]
  wire [63:0] d_cache_io_to_axi_wdata; // @[top.scala 23:25]
  wire [7:0] d_cache_io_to_axi_wstrb; // @[top.scala 23:25]
  wire  d_cache_io_to_axi_wvalid; // @[top.scala 23:25]
  wire  d_cache_io_to_axi_bready; // @[top.scala 23:25]
  wire [63:0] d_cache_io_from_axi_rdata; // @[top.scala 23:25]
  wire  d_cache_io_from_axi_rlast; // @[top.scala 23:25]
  wire  d_cache_io_from_axi_rvalid; // @[top.scala 23:25]
  wire  d_cache_io_from_axi_awready; // @[top.scala 23:25]
  wire  d_cache_io_from_axi_wready; // @[top.scala 23:25]
  wire  d_cache_io_from_axi_bvalid; // @[top.scala 23:25]
  wire [31:0] idu_step_io_inst; // @[top.scala 46:26]
  wire [31:0] idu_step_io_inst_now; // @[top.scala 46:26]
  wire [4:0] idu_step_io_rs1; // @[top.scala 46:26]
  wire [4:0] idu_step_io_rs2; // @[top.scala 46:26]
  wire [4:0] idu_step_io_rd; // @[top.scala 46:26]
  wire [63:0] idu_step_io_imm; // @[top.scala 46:26]
  wire  idu_step_io_ctrl_sign_reg_write; // @[top.scala 46:26]
  wire  idu_step_io_ctrl_sign_csr_write; // @[top.scala 46:26]
  wire  idu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 46:26]
  wire  idu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 46:26]
  wire  idu_step_io_ctrl_sign_Writemem_en; // @[top.scala 46:26]
  wire  idu_step_io_ctrl_sign_Readmem_en; // @[top.scala 46:26]
  wire [7:0] idu_step_io_ctrl_sign_Wmask; // @[top.scala 46:26]
  wire  exu_step_clock; // @[top.scala 51:26]
  wire  exu_step_reset; // @[top.scala 51:26]
  wire [63:0] exu_step_io_pc; // @[top.scala 51:26]
  wire [63:0] exu_step_io_pc_next; // @[top.scala 51:26]
  wire [31:0] exu_step_io_inst_now; // @[top.scala 51:26]
  wire [4:0] exu_step_io_rs1; // @[top.scala 51:26]
  wire [4:0] exu_step_io_rs2; // @[top.scala 51:26]
  wire [4:0] exu_step_io_rd; // @[top.scala 51:26]
  wire [63:0] exu_step_io_imm; // @[top.scala 51:26]
  wire  exu_step_io_ctrl_sign_reg_write; // @[top.scala 51:26]
  wire  exu_step_io_ctrl_sign_csr_write; // @[top.scala 51:26]
  wire  exu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 51:26]
  wire  exu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 51:26]
  wire  exu_step_io_ctrl_sign_Writemem_en; // @[top.scala 51:26]
  wire  exu_step_io_ctrl_sign_Readmem_en; // @[top.scala 51:26]
  wire [7:0] exu_step_io_ctrl_sign_Wmask; // @[top.scala 51:26]
  wire [63:0] exu_step_io_res2rd; // @[top.scala 51:26]
  wire  exu_step_io_inst_valid; // @[top.scala 51:26]
  wire  exu_step_io_inst_store; // @[top.scala 51:26]
  wire  exu_step_io_inst_load; // @[top.scala 51:26]
  wire [31:0] exu_step_io_Mem_addr; // @[top.scala 51:26]
  wire [63:0] exu_step_io_Mem_rdata; // @[top.scala 51:26]
  wire [63:0] exu_step_io_Mem_wdata; // @[top.scala 51:26]
  wire [7:0] exu_step_io_Mem_wstrb; // @[top.scala 51:26]
  wire  exu_step_io_rdata_valid; // @[top.scala 51:26]
  wire [31:0] dpi_flag; // @[top.scala 73:21]
  wire [31:0] dpi_ecall_flag; // @[top.scala 73:21]
  reg [63:0] pc_now; // @[top.scala 15:25]
  reg  execute_end; // @[top.scala 17:30]
  wire  _T_1 = ~reset; // @[top.scala 76:11]
  reg  pc_valid; // @[top.scala 87:27]
  reg  diff_step; // @[top.scala 90:28]
  AXI axi ( // @[top.scala 18:21]
    .clock(axi_clock),
    .reset(axi_reset),
    .io_axi_in_araddr(axi_io_axi_in_araddr),
    .io_axi_in_arlen(axi_io_axi_in_arlen),
    .io_axi_in_arvalid(axi_io_axi_in_arvalid),
    .io_axi_in_rready(axi_io_axi_in_rready),
    .io_axi_in_awaddr(axi_io_axi_in_awaddr),
    .io_axi_in_awlen(axi_io_axi_in_awlen),
    .io_axi_in_awvalid(axi_io_axi_in_awvalid),
    .io_axi_in_wdata(axi_io_axi_in_wdata),
    .io_axi_in_wstrb(axi_io_axi_in_wstrb),
    .io_axi_in_wvalid(axi_io_axi_in_wvalid),
    .io_axi_in_bready(axi_io_axi_in_bready),
    .io_axi_out_rdata(axi_io_axi_out_rdata),
    .io_axi_out_rlast(axi_io_axi_out_rlast),
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
    .io_ifu_axi_in_arlen(arbiter_io_ifu_axi_in_arlen),
    .io_ifu_axi_in_arvalid(arbiter_io_ifu_axi_in_arvalid),
    .io_ifu_axi_in_rready(arbiter_io_ifu_axi_in_rready),
    .io_ifu_axi_out_rdata(arbiter_io_ifu_axi_out_rdata),
    .io_ifu_axi_out_rlast(arbiter_io_ifu_axi_out_rlast),
    .io_ifu_axi_out_rvalid(arbiter_io_ifu_axi_out_rvalid),
    .io_lsu_axi_in_araddr(arbiter_io_lsu_axi_in_araddr),
    .io_lsu_axi_in_arlen(arbiter_io_lsu_axi_in_arlen),
    .io_lsu_axi_in_arvalid(arbiter_io_lsu_axi_in_arvalid),
    .io_lsu_axi_in_rready(arbiter_io_lsu_axi_in_rready),
    .io_lsu_axi_in_awaddr(arbiter_io_lsu_axi_in_awaddr),
    .io_lsu_axi_in_awlen(arbiter_io_lsu_axi_in_awlen),
    .io_lsu_axi_in_awvalid(arbiter_io_lsu_axi_in_awvalid),
    .io_lsu_axi_in_wdata(arbiter_io_lsu_axi_in_wdata),
    .io_lsu_axi_in_wstrb(arbiter_io_lsu_axi_in_wstrb),
    .io_lsu_axi_in_wvalid(arbiter_io_lsu_axi_in_wvalid),
    .io_lsu_axi_in_bready(arbiter_io_lsu_axi_in_bready),
    .io_lsu_axi_out_rdata(arbiter_io_lsu_axi_out_rdata),
    .io_lsu_axi_out_rlast(arbiter_io_lsu_axi_out_rlast),
    .io_lsu_axi_out_rvalid(arbiter_io_lsu_axi_out_rvalid),
    .io_lsu_axi_out_awready(arbiter_io_lsu_axi_out_awready),
    .io_lsu_axi_out_wready(arbiter_io_lsu_axi_out_wready),
    .io_lsu_axi_out_bvalid(arbiter_io_lsu_axi_out_bvalid),
    .io_axi_in_rdata(arbiter_io_axi_in_rdata),
    .io_axi_in_rlast(arbiter_io_axi_in_rlast),
    .io_axi_in_rvalid(arbiter_io_axi_in_rvalid),
    .io_axi_in_awready(arbiter_io_axi_in_awready),
    .io_axi_in_wready(arbiter_io_axi_in_wready),
    .io_axi_in_bvalid(arbiter_io_axi_in_bvalid),
    .io_axi_out_araddr(arbiter_io_axi_out_araddr),
    .io_axi_out_arlen(arbiter_io_axi_out_arlen),
    .io_axi_out_arvalid(arbiter_io_axi_out_arvalid),
    .io_axi_out_rready(arbiter_io_axi_out_rready),
    .io_axi_out_awaddr(arbiter_io_axi_out_awaddr),
    .io_axi_out_awlen(arbiter_io_axi_out_awlen),
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
    .io_inst_reg(ifu_step_io_inst_reg),
    .io_axi_in_rdata(ifu_step_io_axi_in_rdata),
    .io_axi_in_rlast(ifu_step_io_axi_in_rlast),
    .io_axi_in_rvalid(ifu_step_io_axi_in_rvalid),
    .io_axi_out_araddr(ifu_step_io_axi_out_araddr),
    .io_axi_out_arvalid(ifu_step_io_axi_out_arvalid),
    .io_axi_out_rready(ifu_step_io_axi_out_rready)
  );
  I_CACHE i_cache ( // @[top.scala 22:25]
    .clock(i_cache_clock),
    .reset(i_cache_reset),
    .io_from_ifu_araddr(i_cache_io_from_ifu_araddr),
    .io_from_ifu_arvalid(i_cache_io_from_ifu_arvalid),
    .io_from_ifu_rready(i_cache_io_from_ifu_rready),
    .io_to_ifu_rdata(i_cache_io_to_ifu_rdata),
    .io_to_ifu_rlast(i_cache_io_to_ifu_rlast),
    .io_to_ifu_rvalid(i_cache_io_to_ifu_rvalid),
    .io_to_axi_araddr(i_cache_io_to_axi_araddr),
    .io_to_axi_arlen(i_cache_io_to_axi_arlen),
    .io_to_axi_arvalid(i_cache_io_to_axi_arvalid),
    .io_to_axi_rready(i_cache_io_to_axi_rready),
    .io_from_axi_rdata(i_cache_io_from_axi_rdata),
    .io_from_axi_rlast(i_cache_io_from_axi_rlast),
    .io_from_axi_rvalid(i_cache_io_from_axi_rvalid)
  );
  D_CACHE d_cache ( // @[top.scala 23:25]
    .clock(d_cache_clock),
    .reset(d_cache_reset),
    .io_from_lsu_araddr(d_cache_io_from_lsu_araddr),
    .io_from_lsu_arvalid(d_cache_io_from_lsu_arvalid),
    .io_from_lsu_rready(d_cache_io_from_lsu_rready),
    .io_from_lsu_awaddr(d_cache_io_from_lsu_awaddr),
    .io_from_lsu_awvalid(d_cache_io_from_lsu_awvalid),
    .io_from_lsu_wdata(d_cache_io_from_lsu_wdata),
    .io_from_lsu_wstrb(d_cache_io_from_lsu_wstrb),
    .io_from_lsu_wvalid(d_cache_io_from_lsu_wvalid),
    .io_from_lsu_bready(d_cache_io_from_lsu_bready),
    .io_to_lsu_arready(d_cache_io_to_lsu_arready),
    .io_to_lsu_rdata(d_cache_io_to_lsu_rdata),
    .io_to_lsu_rvalid(d_cache_io_to_lsu_rvalid),
    .io_to_lsu_awready(d_cache_io_to_lsu_awready),
    .io_to_lsu_wready(d_cache_io_to_lsu_wready),
    .io_to_lsu_bvalid(d_cache_io_to_lsu_bvalid),
    .io_to_axi_araddr(d_cache_io_to_axi_araddr),
    .io_to_axi_arlen(d_cache_io_to_axi_arlen),
    .io_to_axi_arvalid(d_cache_io_to_axi_arvalid),
    .io_to_axi_rready(d_cache_io_to_axi_rready),
    .io_to_axi_awaddr(d_cache_io_to_axi_awaddr),
    .io_to_axi_awlen(d_cache_io_to_axi_awlen),
    .io_to_axi_awvalid(d_cache_io_to_axi_awvalid),
    .io_to_axi_wdata(d_cache_io_to_axi_wdata),
    .io_to_axi_wstrb(d_cache_io_to_axi_wstrb),
    .io_to_axi_wvalid(d_cache_io_to_axi_wvalid),
    .io_to_axi_bready(d_cache_io_to_axi_bready),
    .io_from_axi_rdata(d_cache_io_from_axi_rdata),
    .io_from_axi_rlast(d_cache_io_from_axi_rlast),
    .io_from_axi_rvalid(d_cache_io_from_axi_rvalid),
    .io_from_axi_awready(d_cache_io_from_axi_awready),
    .io_from_axi_wready(d_cache_io_from_axi_wready),
    .io_from_axi_bvalid(d_cache_io_from_axi_bvalid)
  );
  IDU idu_step ( // @[top.scala 46:26]
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
  EXU_AXI exu_step ( // @[top.scala 51:26]
    .clock(exu_step_clock),
    .reset(exu_step_reset),
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
    .io_Mem_wstrb(exu_step_io_Mem_wstrb),
    .io_rdata_valid(exu_step_io_rdata_valid)
  );
  DPI dpi ( // @[top.scala 73:21]
    .flag(dpi_flag),
    .ecall_flag(dpi_ecall_flag)
  );
  assign io_inst = ifu_step_io_inst; // @[top.scala 25:13]
  assign io_pc = pc_now; // @[top.scala 16:11]
  assign io_pc_next = exu_step_io_pc_next; // @[top.scala 94:16]
  assign io_outval = exu_step_io_res2rd; // @[top.scala 69:15]
  assign io_step = diff_step; // @[top.scala 92:13]
  assign axi_clock = clock;
  assign axi_reset = reset;
  assign axi_io_axi_in_araddr = arbiter_io_axi_out_araddr; // @[top.scala 43:19]
  assign axi_io_axi_in_arlen = arbiter_io_axi_out_arlen; // @[top.scala 43:19]
  assign axi_io_axi_in_arvalid = arbiter_io_axi_out_arvalid; // @[top.scala 43:19]
  assign axi_io_axi_in_rready = arbiter_io_axi_out_rready; // @[top.scala 43:19]
  assign axi_io_axi_in_awaddr = arbiter_io_axi_out_awaddr; // @[top.scala 43:19]
  assign axi_io_axi_in_awlen = arbiter_io_axi_out_awlen; // @[top.scala 43:19]
  assign axi_io_axi_in_awvalid = arbiter_io_axi_out_awvalid; // @[top.scala 43:19]
  assign axi_io_axi_in_wdata = arbiter_io_axi_out_wdata; // @[top.scala 43:19]
  assign axi_io_axi_in_wstrb = arbiter_io_axi_out_wstrb; // @[top.scala 43:19]
  assign axi_io_axi_in_wvalid = arbiter_io_axi_out_wvalid; // @[top.scala 43:19]
  assign axi_io_axi_in_bready = arbiter_io_axi_out_bready; // @[top.scala 43:19]
  assign lsu_step_clock = clock;
  assign lsu_step_reset = reset;
  assign lsu_step_io_inst_store = exu_step_io_inst_store; // @[top.scala 61:28]
  assign lsu_step_io_inst_load = exu_step_io_inst_load; // @[top.scala 60:27]
  assign lsu_step_io_mem_addr = exu_step_io_Mem_addr; // @[top.scala 62:26]
  assign lsu_step_io_mem_wdata = exu_step_io_Mem_wdata; // @[top.scala 63:27]
  assign lsu_step_io_mem_wstrb = exu_step_io_Mem_wstrb; // @[top.scala 64:27]
  assign lsu_step_io_axi_in_arready = d_cache_io_to_lsu_arready; // @[top.scala 36:24]
  assign lsu_step_io_axi_in_rdata = d_cache_io_to_lsu_rdata; // @[top.scala 36:24]
  assign lsu_step_io_axi_in_rvalid = d_cache_io_to_lsu_rvalid; // @[top.scala 36:24]
  assign lsu_step_io_axi_in_awready = d_cache_io_to_lsu_awready; // @[top.scala 36:24]
  assign lsu_step_io_axi_in_wready = d_cache_io_to_lsu_wready; // @[top.scala 36:24]
  assign lsu_step_io_axi_in_bvalid = d_cache_io_to_lsu_bvalid; // @[top.scala 36:24]
  assign arbiter_clock = clock;
  assign arbiter_reset = reset;
  assign arbiter_io_ifu_axi_in_araddr = i_cache_io_to_axi_araddr; // @[top.scala 26:27]
  assign arbiter_io_ifu_axi_in_arlen = i_cache_io_to_axi_arlen; // @[top.scala 26:27]
  assign arbiter_io_ifu_axi_in_arvalid = i_cache_io_to_axi_arvalid; // @[top.scala 26:27]
  assign arbiter_io_ifu_axi_in_rready = i_cache_io_to_axi_rready; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_araddr = d_cache_io_to_axi_araddr; // @[top.scala 34:27]
  assign arbiter_io_lsu_axi_in_arlen = d_cache_io_to_axi_arlen; // @[top.scala 34:27]
  assign arbiter_io_lsu_axi_in_arvalid = d_cache_io_to_axi_arvalid; // @[top.scala 34:27]
  assign arbiter_io_lsu_axi_in_rready = d_cache_io_to_axi_rready; // @[top.scala 34:27]
  assign arbiter_io_lsu_axi_in_awaddr = d_cache_io_to_axi_awaddr; // @[top.scala 34:27]
  assign arbiter_io_lsu_axi_in_awlen = d_cache_io_to_axi_awlen; // @[top.scala 34:27]
  assign arbiter_io_lsu_axi_in_awvalid = d_cache_io_to_axi_awvalid; // @[top.scala 34:27]
  assign arbiter_io_lsu_axi_in_wdata = d_cache_io_to_axi_wdata; // @[top.scala 34:27]
  assign arbiter_io_lsu_axi_in_wstrb = d_cache_io_to_axi_wstrb; // @[top.scala 34:27]
  assign arbiter_io_lsu_axi_in_wvalid = d_cache_io_to_axi_wvalid; // @[top.scala 34:27]
  assign arbiter_io_lsu_axi_in_bready = d_cache_io_to_axi_bready; // @[top.scala 34:27]
  assign arbiter_io_axi_in_rdata = axi_io_axi_out_rdata; // @[top.scala 42:23]
  assign arbiter_io_axi_in_rlast = axi_io_axi_out_rlast; // @[top.scala 42:23]
  assign arbiter_io_axi_in_rvalid = axi_io_axi_out_rvalid; // @[top.scala 42:23]
  assign arbiter_io_axi_in_awready = axi_io_axi_out_awready; // @[top.scala 42:23]
  assign arbiter_io_axi_in_wready = axi_io_axi_out_wready; // @[top.scala 42:23]
  assign arbiter_io_axi_in_bvalid = axi_io_axi_out_bvalid; // @[top.scala 42:23]
  assign ifu_step_clock = clock;
  assign ifu_step_reset = reset;
  assign ifu_step_io_pc = pc_now; // @[top.scala 24:20]
  assign ifu_step_io_pc_valid = pc_valid; // @[top.scala 89:26]
  assign ifu_step_io_axi_in_rdata = i_cache_io_to_ifu_rdata; // @[top.scala 28:24]
  assign ifu_step_io_axi_in_rlast = i_cache_io_to_ifu_rlast; // @[top.scala 28:24]
  assign ifu_step_io_axi_in_rvalid = i_cache_io_to_ifu_rvalid; // @[top.scala 28:24]
  assign i_cache_clock = clock;
  assign i_cache_reset = reset;
  assign i_cache_io_from_ifu_araddr = ifu_step_io_axi_out_araddr; // @[top.scala 29:25]
  assign i_cache_io_from_ifu_arvalid = ifu_step_io_axi_out_arvalid; // @[top.scala 29:25]
  assign i_cache_io_from_ifu_rready = ifu_step_io_axi_out_rready; // @[top.scala 29:25]
  assign i_cache_io_from_axi_rdata = arbiter_io_ifu_axi_out_rdata; // @[top.scala 27:25]
  assign i_cache_io_from_axi_rlast = arbiter_io_ifu_axi_out_rlast; // @[top.scala 27:25]
  assign i_cache_io_from_axi_rvalid = arbiter_io_ifu_axi_out_rvalid; // @[top.scala 27:25]
  assign d_cache_clock = clock;
  assign d_cache_reset = reset;
  assign d_cache_io_from_lsu_araddr = lsu_step_io_axi_out_araddr; // @[top.scala 37:25]
  assign d_cache_io_from_lsu_arvalid = lsu_step_io_axi_out_arvalid; // @[top.scala 37:25]
  assign d_cache_io_from_lsu_rready = lsu_step_io_axi_out_rready; // @[top.scala 37:25]
  assign d_cache_io_from_lsu_awaddr = lsu_step_io_axi_out_awaddr; // @[top.scala 37:25]
  assign d_cache_io_from_lsu_awvalid = lsu_step_io_axi_out_awvalid; // @[top.scala 37:25]
  assign d_cache_io_from_lsu_wdata = lsu_step_io_axi_out_wdata; // @[top.scala 37:25]
  assign d_cache_io_from_lsu_wstrb = lsu_step_io_axi_out_wstrb; // @[top.scala 37:25]
  assign d_cache_io_from_lsu_wvalid = lsu_step_io_axi_out_wvalid; // @[top.scala 37:25]
  assign d_cache_io_from_lsu_bready = lsu_step_io_axi_out_bready; // @[top.scala 37:25]
  assign d_cache_io_from_axi_rdata = arbiter_io_lsu_axi_out_rdata; // @[top.scala 35:25]
  assign d_cache_io_from_axi_rlast = arbiter_io_lsu_axi_out_rlast; // @[top.scala 35:25]
  assign d_cache_io_from_axi_rvalid = arbiter_io_lsu_axi_out_rvalid; // @[top.scala 35:25]
  assign d_cache_io_from_axi_awready = arbiter_io_lsu_axi_out_awready; // @[top.scala 35:25]
  assign d_cache_io_from_axi_wready = arbiter_io_lsu_axi_out_wready; // @[top.scala 35:25]
  assign d_cache_io_from_axi_bvalid = arbiter_io_lsu_axi_out_bvalid; // @[top.scala 35:25]
  assign idu_step_io_inst = ~ifu_step_io_inst_valid & ~pc_valid & ~execute_end ? ifu_step_io_inst_reg : ifu_step_io_inst
    ; // @[top.scala 96:28]
  assign exu_step_clock = clock;
  assign exu_step_reset = reset;
  assign exu_step_io_pc = pc_now; // @[top.scala 52:20]
  assign exu_step_io_inst_now = idu_step_io_inst_now; // @[top.scala 53:26]
  assign exu_step_io_rs1 = idu_step_io_rs1; // @[top.scala 55:21]
  assign exu_step_io_rs2 = idu_step_io_rs2; // @[top.scala 56:21]
  assign exu_step_io_rd = idu_step_io_rd; // @[top.scala 57:20]
  assign exu_step_io_imm = idu_step_io_imm; // @[top.scala 58:21]
  assign exu_step_io_ctrl_sign_reg_write = idu_step_io_ctrl_sign_reg_write; // @[top.scala 59:27]
  assign exu_step_io_ctrl_sign_csr_write = idu_step_io_ctrl_sign_csr_write; // @[top.scala 59:27]
  assign exu_step_io_ctrl_sign_src2_is_imm = idu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 59:27]
  assign exu_step_io_ctrl_sign_src1_is_pc = idu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 59:27]
  assign exu_step_io_ctrl_sign_Writemem_en = idu_step_io_ctrl_sign_Writemem_en; // @[top.scala 59:27]
  assign exu_step_io_ctrl_sign_Readmem_en = idu_step_io_ctrl_sign_Readmem_en; // @[top.scala 59:27]
  assign exu_step_io_ctrl_sign_Wmask = idu_step_io_ctrl_sign_Wmask; // @[top.scala 59:27]
  assign exu_step_io_inst_valid = ifu_step_io_inst_valid; // @[top.scala 68:28]
  assign exu_step_io_Mem_rdata = lsu_step_io_mem_rdata; // @[top.scala 65:27]
  assign exu_step_io_rdata_valid = lsu_step_io_axi_in_rvalid; // @[top.scala 66:29]
  assign dpi_flag = {{31'd0}, idu_step_io_inst_now == 32'h2}; // @[top.scala 74:17]
  assign dpi_ecall_flag = {{31'd0}, idu_step_io_inst_now == 32'h3d}; // @[top.scala 75:23]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 15:25]
      pc_now <= 64'h80000000; // @[top.scala 15:25]
    end else if (execute_end) begin // @[top.scala 93:18]
      pc_now <= exu_step_io_pc_next;
    end
    if (reset) begin // @[top.scala 17:30]
      execute_end <= 1'h0; // @[top.scala 17:30]
    end else if (exu_step_io_inst_store) begin // @[top.scala 85:23]
      execute_end <= lsu_step_io_axi_in_bvalid;
    end else if (exu_step_io_inst_load) begin // @[top.scala 85:76]
      execute_end <= lsu_step_io_axi_in_rvalid;
    end else begin
      execute_end <= ifu_step_io_inst_valid;
    end
    pc_valid <= reset | execute_end; // @[top.scala 87:{27,27} 88:14]
    if (reset) begin // @[top.scala 90:28]
      diff_step <= 1'h0; // @[top.scala 90:28]
    end else begin
      diff_step <= execute_end; // @[top.scala 91:15]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"%x\n",idu_step_io_inst); // @[top.scala 76:11]
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
          $fwrite(32'h80000002,"pc : %x inst:%x execute_end : %d\n\n",pc_now,idu_step_io_inst,execute_end); // @[top.scala 86:11]
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
  pc_now = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  execute_end = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  pc_valid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  diff_step = _RAND_3[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
