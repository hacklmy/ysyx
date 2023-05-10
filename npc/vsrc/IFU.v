/* verilator lint_off UNUSED */
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
  wire  _T_2 = ~reset; // @[IFU_AXI.scala 36:11]
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
          $fwrite(32'h80000002,"inst_valid : %d pc_valid:%d\n",io_inst_valid,io_pc_valid); // @[IFU_AXI.scala 36:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2) begin
          $fwrite(32'h80000002,"inst:%x\n",io_inst); // @[IFU_AXI.scala 37:11]
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
/* verilator lint_on UNUSED */
