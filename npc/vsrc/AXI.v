/* verilator lint_off UNOPTFLAT */
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
/* verilator lint_on UNOPTFLAT */
