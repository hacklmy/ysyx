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
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] inst_read_Raddr; // @[AXI.scala 23:27]
  wire [63:0] inst_read_Rdata; // @[AXI.scala 23:27]
  wire [63:0] inst_read_Waddr; // @[AXI.scala 23:27]
  wire [63:0] inst_read_Wdata; // @[AXI.scala 23:27]
  wire [7:0] inst_read_Wmask; // @[AXI.scala 23:27]
  wire  inst_read_Write_en; // @[AXI.scala 23:27]
  reg  axi_arready; // @[AXI.scala 17:30]
  reg  axi_rvalid; // @[AXI.scala 18:29]
  reg  state; // @[AXI.scala 21:24]
  wire  _GEN_0 = io_arvalid | state; // @[AXI.scala 28:29 29:23 21:24]
  wire  _GEN_2 = io_arvalid | axi_rvalid; // @[AXI.scala 28:29 31:28 18:29]
  wire  _GEN_4 = io_rready | axi_arready; // @[AXI.scala 35:28 37:29 17:30]
  MEM inst_read ( // @[AXI.scala 23:27]
    .Raddr(inst_read_Raddr),
    .Rdata(inst_read_Rdata),
    .Waddr(inst_read_Waddr),
    .Wdata(inst_read_Wdata),
    .Wmask(inst_read_Wmask),
    .Write_en(inst_read_Write_en)
  );
  assign io_arready = axi_arready; // @[AXI.scala 42:16]
  assign io_rvalid = axi_rvalid; // @[AXI.scala 43:15]
  assign io_rdata = inst_read_Rdata; // @[AXI.scala 44:14]
  assign inst_read_Raddr = {32'h0,io_araddr}; // @[Cat.scala 31:58]
  assign inst_read_Waddr = 64'h0;
  assign inst_read_Wdata = 64'h0;
  assign inst_read_Wmask = 8'h0;
  assign inst_read_Write_en = 1'h0;
  always @(posedge clock) begin
    if (reset) begin // @[AXI.scala 17:30]
      axi_arready <= 1'h0; // @[AXI.scala 17:30]
    end else if (~state) begin // @[AXI.scala 26:18]
      if (io_arvalid) begin // @[AXI.scala 28:29]
        axi_arready <= 1'h0; // @[AXI.scala 30:29]
      end
    end else if (state) begin // @[AXI.scala 26:18]
      axi_arready <= _GEN_4;
    end
    if (reset) begin // @[AXI.scala 18:29]
      axi_rvalid <= 1'h0; // @[AXI.scala 18:29]
    end else if (~state) begin // @[AXI.scala 26:18]
      axi_rvalid <= _GEN_2;
    end else if (state) begin // @[AXI.scala 26:18]
      if (io_rready) begin // @[AXI.scala 35:28]
        axi_rvalid <= 1'h0; // @[AXI.scala 38:28]
      end
    end
    if (reset) begin // @[AXI.scala 21:24]
      state <= 1'h0; // @[AXI.scala 21:24]
    end else if (~state) begin // @[AXI.scala 26:18]
      state <= _GEN_0;
    end else if (state) begin // @[AXI.scala 26:18]
      if (io_rready) begin // @[AXI.scala 35:28]
        state <= 1'h0; // @[AXI.scala 36:23]
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"%x %x %x\n",io_araddr,io_rdata,inst_read_Rdata); // @[AXI.scala 45:11]
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
