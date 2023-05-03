/* verilator lint_off UNUSED */
module IFU_AXI(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_pc_valid,
  output        io_inst_valid,
  input         io_inst_ready,
  output [31:0] io_inst
);
  wire  axi_clock; // @[IFU_AXI.scala 16:21]
  wire  axi_reset; // @[IFU_AXI.scala 16:21]
  wire [31:0] axi_io_araddr; // @[IFU_AXI.scala 16:21]
  wire  axi_io_arvalid; // @[IFU_AXI.scala 16:21]
  wire  axi_io_rready; // @[IFU_AXI.scala 16:21]
  wire  axi_io_rvalid; // @[IFU_AXI.scala 16:21]
  wire [63:0] axi_io_rdata; // @[IFU_AXI.scala 16:21]
  AXI_IFU axi ( // @[IFU_AXI.scala 16:21]
    .clock(axi_clock),
    .reset(axi_reset),
    .io_araddr(axi_io_araddr),
    .io_arvalid(axi_io_arvalid),
    .io_rready(axi_io_rready),
    .io_rvalid(axi_io_rvalid),
    .io_rdata(axi_io_rdata)
  );
  assign io_inst_valid = axi_io_rvalid; // @[IFU_AXI.scala 22:19]
  assign io_inst = axi_io_rdata[31:0]; // @[IFU_AXI.scala 21:28]
  assign axi_clock = clock;
  assign axi_reset = reset;
  assign axi_io_araddr = io_pc[31:0]; // @[IFU_AXI.scala 17:27]
  assign axi_io_arvalid = io_pc_valid; // @[IFU_AXI.scala 18:20]
  assign axi_io_rready = io_inst_ready; // @[IFU_AXI.scala 19:19]
endmodule
/* verilator lint_on UNUSED */
