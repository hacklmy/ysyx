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
  wire [31:0] axi_io_axi_in_araddr; // @[IFU_AXI.scala 16:21]
  wire  axi_io_axi_in_arvalid; // @[IFU_AXI.scala 16:21]
  wire  axi_io_axi_in_rready; // @[IFU_AXI.scala 16:21]
  wire [31:0] axi_io_axi_in_awaddr; // @[IFU_AXI.scala 16:21]
  wire  axi_io_axi_in_awvalid; // @[IFU_AXI.scala 16:21]
  wire [31:0] axi_io_axi_in_wdata; // @[IFU_AXI.scala 16:21]
  wire [7:0] axi_io_axi_in_wstrb; // @[IFU_AXI.scala 16:21]
  wire  axi_io_axi_in_wvalid; // @[IFU_AXI.scala 16:21]
  wire  axi_io_axi_in_bready; // @[IFU_AXI.scala 16:21]
  wire [63:0] axi_io_axi_out_rdata; // @[IFU_AXI.scala 16:21]
  wire  axi_io_axi_out_rvalid; // @[IFU_AXI.scala 16:21]
  wire  axi_io_axi_out_bvalid; // @[IFU_AXI.scala 16:21]
  AXI axi ( // @[IFU_AXI.scala 16:21]
    .clock(axi_clock),
    .reset(axi_reset),
    .io_axi_in_araddr(axi_io_axi_in_araddr),
    .io_axi_in_arvalid(axi_io_axi_in_arvalid),
    .io_axi_in_rready(axi_io_axi_in_rready),
    .io_axi_in_awaddr(axi_io_axi_in_awaddr),
    .io_axi_in_awvalid(axi_io_axi_in_awvalid),
    .io_axi_in_wdata(axi_io_axi_in_wdata),
    .io_axi_in_wstrb(axi_io_axi_in_wstrb),
    .io_axi_in_wvalid(axi_io_axi_in_wvalid),
    .io_axi_in_bready(axi_io_axi_in_bready),
    .io_axi_out_rdata(axi_io_axi_out_rdata),
    .io_axi_out_rvalid(axi_io_axi_out_rvalid),
    .io_axi_out_bvalid(axi_io_axi_out_bvalid)
  );
  assign io_inst_valid = axi_io_axi_out_rvalid; // @[IFU_AXI.scala 29:19]
  assign io_inst = axi_io_axi_out_rdata[31:0]; // @[IFU_AXI.scala 28:36]
  assign axi_clock = clock;
  assign axi_reset = reset;
  assign axi_io_axi_in_araddr = io_pc[31:0]; // @[IFU_AXI.scala 18:34]
  assign axi_io_axi_in_arvalid = io_pc_valid; // @[IFU_AXI.scala 19:27]
  assign axi_io_axi_in_rready = io_inst_ready; // @[IFU_AXI.scala 20:26]
  assign axi_io_axi_in_awaddr = 32'h0; // @[IFU_AXI.scala 21:26]
  assign axi_io_axi_in_awvalid = 1'h0; // @[IFU_AXI.scala 23:27]
  assign axi_io_axi_in_wdata = 32'h0; // @[IFU_AXI.scala 22:25]
  assign axi_io_axi_in_wstrb = 8'h0; // @[IFU_AXI.scala 24:25]
  assign axi_io_axi_in_wvalid = 1'h0; // @[IFU_AXI.scala 25:26]
  assign axi_io_axi_in_bready = 1'h0; // @[IFU_AXI.scala 26:26]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"pc_valid : %d\n",io_pc_valid); // @[IFU_AXI.scala 17:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
/* verilator lint_on UNUSED */
