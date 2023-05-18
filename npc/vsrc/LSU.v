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
  input         io_axi_in_bvalid,
  output [31:0] io_axi_out_araddr,
  output        io_axi_out_arvalid,
  output        io_axi_out_rready,
  output [31:0] io_axi_out_awaddr,
  output [31:0] io_axi_out_wdata,
  output [7:0]  io_axi_out_wstrb
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg  axi_arvalid; // @[LSU.scala 19:30]
  reg  axi_rready; // @[LSU.scala 22:29]
  reg [1:0] state; // @[LSU.scala 28:24]
  wire  _GEN_5 = io_inst_load | axi_arvalid; // @[LSU.scala 32:31 34:29 19:30]
  wire  _GEN_6 = io_inst_load | axi_rready; // @[LSU.scala 32:31 35:28 22:29]
  wire  _GEN_14 = io_axi_in_arready ? 1'h0 : axi_arvalid; // @[LSU.scala 56:36 57:29 19:30]
  wire [1:0] _GEN_15 = io_axi_in_rvalid ? 2'h0 : state; // @[LSU.scala 59:35 60:23 28:24]
  wire  _GEN_16 = io_axi_in_rvalid ? 1'h0 : axi_rready; // @[LSU.scala 59:35 61:28 22:29]
  wire  _GEN_19 = 2'h2 == state ? _GEN_16 : axi_rready; // @[LSU.scala 30:18 22:29]
  wire  _GEN_25 = 2'h1 == state ? axi_rready : _GEN_19; // @[LSU.scala 30:18 22:29]
  wire  _GEN_28 = 2'h0 == state ? _GEN_6 : _GEN_25; // @[LSU.scala 30:18]
  assign io_mem_rdata = io_axi_in_rdata; // @[LSU.scala 72:18]
  assign io_axi_out_araddr = io_mem_addr; // @[LSU.scala 73:23]
  assign io_axi_out_arvalid = axi_arvalid; // @[LSU.scala 74:24]
  assign io_axi_out_rready = axi_rready; // @[LSU.scala 75:23]
  assign io_axi_out_awaddr = io_mem_addr; // @[LSU.scala 76:23]
  assign io_axi_out_wdata = io_mem_wdata[31:0]; // @[LSU.scala 78:22]
  assign io_axi_out_wstrb = io_mem_wstrb; // @[LSU.scala 79:22]
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
  state = _RAND_2[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
