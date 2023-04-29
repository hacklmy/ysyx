module AXI(
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
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] inst_read_Raddr; // @[AXI.scala 24:27]
  wire [63:0] inst_read_Rdata; // @[AXI.scala 24:27]
  wire [63:0] inst_read_Waddr; // @[AXI.scala 24:27]
  wire [63:0] inst_read_Wdata; // @[AXI.scala 24:27]
  wire [7:0] inst_read_Wmask; // @[AXI.scala 24:27]
  wire  inst_read_Write_en; // @[AXI.scala 24:27]
  reg [63:0] axi_rdata; // @[AXI.scala 17:28]
  reg  axi_arready; // @[AXI.scala 18:30]
  reg  axi_rvalid; // @[AXI.scala 19:29]
  reg  state; // @[AXI.scala 22:24]
  wire  _GEN_0 = io_arvalid | state; // @[AXI.scala 29:29 30:23 22:24]
  wire  _GEN_2 = io_arvalid | axi_rvalid; // @[AXI.scala 29:29 32:28 19:29]
  wire  _GEN_5 = io_rready | axi_arready; // @[AXI.scala 37:28 39:29 18:30]
  MEM inst_read ( // @[AXI.scala 24:27]
    .Raddr(inst_read_Raddr),
    .Rdata(inst_read_Rdata),
    .Waddr(inst_read_Waddr),
    .Wdata(inst_read_Wdata),
    .Wmask(inst_read_Wmask),
    .Write_en(inst_read_Write_en)
  );
  assign io_arready = axi_arready; // @[AXI.scala 44:16]
  assign io_rvalid = axi_rvalid; // @[AXI.scala 45:15]
  assign io_rdata = axi_rdata; // @[AXI.scala 46:14]
  assign inst_read_Raddr = {32'h0,io_araddr}; // @[Cat.scala 31:58]
  assign inst_read_Waddr = 64'h0;
  assign inst_read_Wdata = 64'h0;
  assign inst_read_Wmask = 8'h0;
  assign inst_read_Write_en = 1'h0;
  always @(posedge clock) begin
    if (reset) begin // @[AXI.scala 17:28]
      axi_rdata <= 64'h0; // @[AXI.scala 17:28]
    end else if (~state) begin // @[AXI.scala 27:18]
      if (io_arvalid) begin // @[AXI.scala 29:29]
        axi_rdata <= inst_read_Rdata; // @[AXI.scala 33:27]
      end
    end
    if (reset) begin // @[AXI.scala 18:30]
      axi_arready <= 1'h0; // @[AXI.scala 18:30]
    end else if (~state) begin // @[AXI.scala 27:18]
      if (io_arvalid) begin // @[AXI.scala 29:29]
        axi_arready <= 1'h0; // @[AXI.scala 31:29]
      end
    end else if (state) begin // @[AXI.scala 27:18]
      axi_arready <= _GEN_5;
    end
    if (reset) begin // @[AXI.scala 19:29]
      axi_rvalid <= 1'h0; // @[AXI.scala 19:29]
    end else if (~state) begin // @[AXI.scala 27:18]
      axi_rvalid <= _GEN_2;
    end else if (state) begin // @[AXI.scala 27:18]
      if (io_rready) begin // @[AXI.scala 37:28]
        axi_rvalid <= 1'h0; // @[AXI.scala 40:28]
      end
    end
    if (reset) begin // @[AXI.scala 22:24]
      state <= 1'h0; // @[AXI.scala 22:24]
    end else if (~state) begin // @[AXI.scala 27:18]
      state <= _GEN_0;
    end else if (state) begin // @[AXI.scala 27:18]
      if (io_rready) begin // @[AXI.scala 37:28]
        state <= 1'h0; // @[AXI.scala 38:23]
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"%x %x\n",io_araddr,io_rdata); // @[AXI.scala 47:11]
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
  axi_rdata = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  axi_arready = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  axi_rvalid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  state = _RAND_3[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
