module AXI_EXU(
  input         clock,
  input         reset,
  input  [31:0] io_axi_in_araddr,
  input         io_axi_in_arvalid,
  input         io_axi_in_rready,
  input  [31:0] io_axi_in_awaddr,
  input         io_axi_in_awvalid,
  input  [31:0] io_axi_in_wdata,
  input  [3:0]  io_axi_in_wstrb,
  input         io_axi_in_wvalid,
  input         io_axi_in_bready,
  output [63:0] io_axi_out_rdata,
  output        io_axi_out_rvalid,
  output        io_axi_out_bvalid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] Mem_modle_Raddr; // @[AXI_EXU.scala 26:27]
  wire [63:0] Mem_modle_Rdata; // @[AXI_EXU.scala 26:27]
  wire [63:0] Mem_modle_Waddr; // @[AXI_EXU.scala 26:27]
  wire [63:0] Mem_modle_Wdata; // @[AXI_EXU.scala 26:27]
  wire [7:0] Mem_modle_Wmask; // @[AXI_EXU.scala 26:27]
  wire  Mem_modle_Write_en; // @[AXI_EXU.scala 26:27]
  wire  Mem_modle_Read_en; // @[AXI_EXU.scala 26:27]
  reg  axi_wready; // @[AXI_EXU.scala 14:29]
  reg  axi_bvalid; // @[AXI_EXU.scala 17:29]
  reg  axi_arready; // @[AXI_EXU.scala 19:30]
  reg  axi_rvalid; // @[AXI_EXU.scala 21:29]
  reg [2:0] state; // @[AXI_EXU.scala 24:24]
  wire  _GEN_1 = io_axi_in_arvalid ? 1'h0 : axi_arready; // @[AXI_EXU.scala 47:42 49:29 19:30]
  wire  _GEN_2 = io_axi_in_arvalid | axi_rvalid; // @[AXI_EXU.scala 47:42 50:28 21:29]
  wire  _GEN_5 = io_axi_in_awvalid & io_axi_in_wvalid ? 1'h0 : axi_wready; // @[AXI_EXU.scala 37:56 40:28 14:29]
  wire  _GEN_6 = io_axi_in_awvalid & io_axi_in_wvalid | axi_bvalid; // @[AXI_EXU.scala 37:56 41:28 17:29]
  wire  _GEN_7 = io_axi_in_awvalid & io_axi_in_wvalid ? axi_arready : _GEN_1; // @[AXI_EXU.scala 19:30 37:56]
  wire  _GEN_12 = io_axi_in_bready | axi_wready; // @[AXI_EXU.scala 54:35 58:28 14:29]
  wire [2:0] _GEN_13 = io_axi_in_rready ? 3'h0 : state; // @[AXI_EXU.scala 62:35 63:23 24:24]
  wire  _GEN_14 = io_axi_in_rready | axi_arready; // @[AXI_EXU.scala 62:35 64:29 19:30]
  wire  _GEN_15 = io_axi_in_rready ? 1'h0 : axi_rvalid; // @[AXI_EXU.scala 62:35 65:28 21:29]
  wire  _GEN_17 = 3'h4 == state ? _GEN_14 : axi_arready; // @[AXI_EXU.scala 35:18 19:30]
  wire  _GEN_22 = 3'h3 == state ? _GEN_12 : axi_wready; // @[AXI_EXU.scala 35:18 14:29]
  wire  _GEN_23 = 3'h3 == state ? axi_arready : _GEN_17; // @[AXI_EXU.scala 35:18 19:30]
  wire  _GEN_27 = 3'h0 == state ? _GEN_5 : _GEN_22; // @[AXI_EXU.scala 35:18]
  wire  _GEN_29 = 3'h0 == state ? _GEN_7 : _GEN_23; // @[AXI_EXU.scala 35:18]
  MEM Mem_modle ( // @[AXI_EXU.scala 26:27]
    .Raddr(Mem_modle_Raddr),
    .Rdata(Mem_modle_Rdata),
    .Waddr(Mem_modle_Waddr),
    .Wdata(Mem_modle_Wdata),
    .Wmask(Mem_modle_Wmask),
    .Write_en(Mem_modle_Write_en),
    .Read_en(Mem_modle_Read_en)
  );
  assign io_axi_out_rdata = Mem_modle_Rdata; // @[AXI_EXU.scala 70:22]
  assign io_axi_out_rvalid = axi_rvalid; // @[AXI_EXU.scala 71:23]
  assign io_axi_out_bvalid = axi_bvalid; // @[AXI_EXU.scala 74:23]
  assign Mem_modle_Raddr = {{32'd0}, io_axi_in_araddr}; // @[AXI_EXU.scala 27:24]
  assign Mem_modle_Waddr = {{32'd0}, io_axi_in_awaddr}; // @[AXI_EXU.scala 28:24]
  assign Mem_modle_Wdata = {{32'd0}, io_axi_in_wdata}; // @[AXI_EXU.scala 29:24]
  assign Mem_modle_Wmask = {{4'd0}, io_axi_in_wstrb}; // @[AXI_EXU.scala 30:24]
  assign Mem_modle_Write_en = axi_wready & io_axi_in_wvalid; // @[AXI_EXU.scala 31:48]
  assign Mem_modle_Read_en = axi_arready & io_axi_in_arvalid; // @[AXI_EXU.scala 32:48]
  always @(posedge clock) begin
    axi_wready <= reset | _GEN_27; // @[AXI_EXU.scala 14:{29,29}]
    if (reset) begin // @[AXI_EXU.scala 17:29]
      axi_bvalid <= 1'h0; // @[AXI_EXU.scala 17:29]
    end else if (3'h0 == state) begin // @[AXI_EXU.scala 35:18]
      axi_bvalid <= _GEN_6;
    end else if (3'h3 == state) begin // @[AXI_EXU.scala 35:18]
      if (io_axi_in_bready) begin // @[AXI_EXU.scala 54:35]
        axi_bvalid <= 1'h0; // @[AXI_EXU.scala 56:28]
      end
    end
    axi_arready <= reset | _GEN_29; // @[AXI_EXU.scala 19:{30,30}]
    if (reset) begin // @[AXI_EXU.scala 21:29]
      axi_rvalid <= 1'h0; // @[AXI_EXU.scala 21:29]
    end else if (3'h0 == state) begin // @[AXI_EXU.scala 35:18]
      if (!(io_axi_in_awvalid & io_axi_in_wvalid)) begin // @[AXI_EXU.scala 37:56]
        axi_rvalid <= _GEN_2;
      end
    end else if (!(3'h3 == state)) begin // @[AXI_EXU.scala 35:18]
      if (3'h4 == state) begin // @[AXI_EXU.scala 35:18]
        axi_rvalid <= _GEN_15;
      end
    end
    if (reset) begin // @[AXI_EXU.scala 24:24]
      state <= 3'h0; // @[AXI_EXU.scala 24:24]
    end else if (3'h0 == state) begin // @[AXI_EXU.scala 35:18]
      if (io_axi_in_awvalid & io_axi_in_wvalid) begin // @[AXI_EXU.scala 37:56]
        state <= 3'h3; // @[AXI_EXU.scala 38:23]
      end else if (io_axi_in_arvalid) begin // @[AXI_EXU.scala 47:42]
        state <= 3'h4; // @[AXI_EXU.scala 48:23]
      end
    end else if (3'h3 == state) begin // @[AXI_EXU.scala 35:18]
      if (io_axi_in_bready) begin // @[AXI_EXU.scala 54:35]
        state <= 3'h0; // @[AXI_EXU.scala 55:23]
      end
    end else if (3'h4 == state) begin // @[AXI_EXU.scala 35:18]
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
  axi_wready = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  axi_bvalid = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  axi_arready = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  axi_rvalid = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  state = _RAND_4[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
