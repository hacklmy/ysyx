module AXI_IFU(
  input         clock,
  input         reset,
  input  [31:0] io_araddr,
  input         io_arvalid,
  input         io_rready,
  output        io_arready,
  output        io_rvalid,
  output [63:0] io_rdata
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] inst_read_Raddr; // @[AXI_IFU.scala 23:27]
  wire [63:0] inst_read_Rdata; // @[AXI_IFU.scala 23:27]
  wire [63:0] inst_read_Waddr; // @[AXI_IFU.scala 23:27]
  wire [63:0] inst_read_Wdata; // @[AXI_IFU.scala 23:27]
  wire [7:0] inst_read_Wmask; // @[AXI_IFU.scala 23:27]
  wire  inst_read_Write_en; // @[AXI_IFU.scala 23:27]
  reg  axi_arready; // @[AXI_IFU.scala 17:30]
  reg  axi_rvalid; // @[AXI_IFU.scala 18:29]
  reg  state; // @[AXI_IFU.scala 21:24]
  wire  _GEN_0 = io_arvalid | state; // @[AXI_IFU.scala 29:29 30:23 21:24]
  wire  _GEN_2 = io_arvalid | axi_rvalid; // @[AXI_IFU.scala 29:29 32:28 18:29]
  wire  _GEN_4 = io_rready | axi_arready; // @[AXI_IFU.scala 36:28 38:29 17:30]
  MEM inst_read ( // @[AXI_IFU.scala 23:27]
    .Raddr(inst_read_Raddr),
    .Rdata(inst_read_Rdata),
    .Waddr(inst_read_Waddr),
    .Wdata(inst_read_Wdata),
    .Wmask(inst_read_Wmask),
    .Write_en(inst_read_Write_en)
  );
  assign io_arready = axi_arready; // @[AXI_IFU.scala 43:16]
  assign io_rvalid = axi_rvalid; // @[AXI_IFU.scala 44:15]
  assign io_rdata = inst_read_Rdata; // @[AXI_IFU.scala 45:14]
  assign inst_read_Raddr = {32'h0,io_araddr}; // @[Cat.scala 31:58]
  assign inst_read_Waddr = 64'h0;
  assign inst_read_Wdata = 64'h0;
  assign inst_read_Wmask = 8'h0;
  assign inst_read_Write_en = 1'h0;
  always @(posedge clock) begin
    if (reset) begin // @[AXI_IFU.scala 17:30]
      axi_arready <= 1'h0; // @[AXI_IFU.scala 17:30]
    end else if (~state) begin // @[AXI_IFU.scala 27:18]
      if (io_arvalid) begin // @[AXI_IFU.scala 29:29]
        axi_arready <= 1'h0; // @[AXI_IFU.scala 31:29]
      end
    end else if (state) begin // @[AXI_IFU.scala 27:18]
      axi_arready <= _GEN_4;
    end
    if (reset) begin // @[AXI_IFU.scala 18:29]
      axi_rvalid <= 1'h0; // @[AXI_IFU.scala 18:29]
    end else if (~state) begin // @[AXI_IFU.scala 27:18]
      axi_rvalid <= _GEN_2;
    end else if (state) begin // @[AXI_IFU.scala 27:18]
      if (io_rready) begin // @[AXI_IFU.scala 36:28]
        axi_rvalid <= 1'h0; // @[AXI_IFU.scala 39:28]
      end
    end
    if (reset) begin // @[AXI_IFU.scala 21:24]
      state <= 1'h0; // @[AXI_IFU.scala 21:24]
    end else if (~state) begin // @[AXI_IFU.scala 27:18]
      state <= _GEN_0;
    end else if (state) begin // @[AXI_IFU.scala 27:18]
      if (io_rready) begin // @[AXI_IFU.scala 36:28]
        state <= 1'h0; // @[AXI_IFU.scala 37:23]
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
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  axi_arready = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  axi_rvalid = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  state = _RAND_2[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
