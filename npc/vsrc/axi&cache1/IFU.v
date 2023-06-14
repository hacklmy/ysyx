/* verilator lint_off UNUSED */
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
/* verilator lint_on UNUSED */
