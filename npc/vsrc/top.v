module top(
  input         clock,
  input         reset,
  output [31:0] io_inst,
  output [63:0] io_pc,
  output        io_step
);
  wire  Register_clock; // @[top.scala 15:25]
  wire  IFU_clock; // @[top.scala 16:21]
  wire  IFU_reset; // @[top.scala 16:21]
  wire [63:0] IFU_io_to_ds_pc; // @[top.scala 16:21]
  wire [31:0] IFU_io_inst; // @[top.scala 16:21]
  wire [63:0] IFU_io_axi_in_rdata; // @[top.scala 16:21]
  wire  IFU_io_axi_in_rlast; // @[top.scala 16:21]
  wire  IFU_io_axi_in_rvalid; // @[top.scala 16:21]
  wire [31:0] IFU_io_axi_out_araddr; // @[top.scala 16:21]
  wire  IFU_io_axi_out_arvalid; // @[top.scala 16:21]
  wire  IFU_io_axi_out_rready; // @[top.scala 16:21]
  wire [63:0] IDU_io_pc; // @[top.scala 17:21]
  wire  arbiter_clock; // @[top.scala 21:25]
  wire  arbiter_reset; // @[top.scala 21:25]
  wire [31:0] arbiter_io_ifu_axi_in_araddr; // @[top.scala 21:25]
  wire [7:0] arbiter_io_ifu_axi_in_arlen; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_in_arvalid; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_in_rready; // @[top.scala 21:25]
  wire [63:0] arbiter_io_ifu_axi_out_rdata; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_out_rlast; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_out_rvalid; // @[top.scala 21:25]
  wire [7:0] arbiter_io_lsu_axi_in_arlen; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_in_arvalid; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_in_rready; // @[top.scala 21:25]
  wire [31:0] arbiter_io_lsu_axi_in_awaddr; // @[top.scala 21:25]
  wire [7:0] arbiter_io_lsu_axi_in_awlen; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_in_awvalid; // @[top.scala 21:25]
  wire [63:0] arbiter_io_lsu_axi_in_wdata; // @[top.scala 21:25]
  wire [7:0] arbiter_io_lsu_axi_in_wstrb; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_in_wvalid; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_in_bready; // @[top.scala 21:25]
  wire [63:0] arbiter_io_lsu_axi_out_rdata; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_out_rlast; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_out_rvalid; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_out_wready; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_out_bvalid; // @[top.scala 21:25]
  wire [63:0] arbiter_io_axi_in_rdata; // @[top.scala 21:25]
  wire  arbiter_io_axi_in_rlast; // @[top.scala 21:25]
  wire  arbiter_io_axi_in_rvalid; // @[top.scala 21:25]
  wire  arbiter_io_axi_in_wready; // @[top.scala 21:25]
  wire  arbiter_io_axi_in_bvalid; // @[top.scala 21:25]
  wire [31:0] arbiter_io_axi_out_araddr; // @[top.scala 21:25]
  wire [7:0] arbiter_io_axi_out_arlen; // @[top.scala 21:25]
  wire  arbiter_io_axi_out_arvalid; // @[top.scala 21:25]
  wire  arbiter_io_axi_out_rready; // @[top.scala 21:25]
  wire [31:0] arbiter_io_axi_out_awaddr; // @[top.scala 21:25]
  wire [7:0] arbiter_io_axi_out_awlen; // @[top.scala 21:25]
  wire  arbiter_io_axi_out_awvalid; // @[top.scala 21:25]
  wire [63:0] arbiter_io_axi_out_wdata; // @[top.scala 21:25]
  wire [7:0] arbiter_io_axi_out_wstrb; // @[top.scala 21:25]
  wire  arbiter_io_axi_out_wvalid; // @[top.scala 21:25]
  wire  arbiter_io_axi_out_bready; // @[top.scala 21:25]
  wire  i_cache_clock; // @[top.scala 22:25]
  wire  i_cache_reset; // @[top.scala 22:25]
  wire [31:0] i_cache_io_from_ifu_araddr; // @[top.scala 22:25]
  wire  i_cache_io_from_ifu_arvalid; // @[top.scala 22:25]
  wire  i_cache_io_from_ifu_rready; // @[top.scala 22:25]
  wire [63:0] i_cache_io_to_ifu_rdata; // @[top.scala 22:25]
  wire  i_cache_io_to_ifu_rlast; // @[top.scala 22:25]
  wire  i_cache_io_to_ifu_rvalid; // @[top.scala 22:25]
  wire [31:0] i_cache_io_to_axi_araddr; // @[top.scala 22:25]
  wire [7:0] i_cache_io_to_axi_arlen; // @[top.scala 22:25]
  wire  i_cache_io_to_axi_arvalid; // @[top.scala 22:25]
  wire  i_cache_io_to_axi_rready; // @[top.scala 22:25]
  wire [63:0] i_cache_io_from_axi_rdata; // @[top.scala 22:25]
  wire  i_cache_io_from_axi_rlast; // @[top.scala 22:25]
  wire  i_cache_io_from_axi_rvalid; // @[top.scala 22:25]
  wire  d_cache_clock; // @[top.scala 23:25]
  wire  d_cache_reset; // @[top.scala 23:25]
  wire [7:0] d_cache_io_to_axi_arlen; // @[top.scala 23:25]
  wire  d_cache_io_to_axi_arvalid; // @[top.scala 23:25]
  wire  d_cache_io_to_axi_rready; // @[top.scala 23:25]
  wire [31:0] d_cache_io_to_axi_awaddr; // @[top.scala 23:25]
  wire [7:0] d_cache_io_to_axi_awlen; // @[top.scala 23:25]
  wire  d_cache_io_to_axi_awvalid; // @[top.scala 23:25]
  wire [63:0] d_cache_io_to_axi_wdata; // @[top.scala 23:25]
  wire [7:0] d_cache_io_to_axi_wstrb; // @[top.scala 23:25]
  wire  d_cache_io_to_axi_wvalid; // @[top.scala 23:25]
  wire  d_cache_io_to_axi_bready; // @[top.scala 23:25]
  wire [63:0] d_cache_io_from_axi_rdata; // @[top.scala 23:25]
  wire  d_cache_io_from_axi_rlast; // @[top.scala 23:25]
  wire  d_cache_io_from_axi_rvalid; // @[top.scala 23:25]
  wire  d_cache_io_from_axi_wready; // @[top.scala 23:25]
  wire  d_cache_io_from_axi_bvalid; // @[top.scala 23:25]
  wire  axi_clock; // @[top.scala 24:21]
  wire  axi_reset; // @[top.scala 24:21]
  wire [31:0] axi_io_axi_in_araddr; // @[top.scala 24:21]
  wire [7:0] axi_io_axi_in_arlen; // @[top.scala 24:21]
  wire  axi_io_axi_in_arvalid; // @[top.scala 24:21]
  wire  axi_io_axi_in_rready; // @[top.scala 24:21]
  wire [31:0] axi_io_axi_in_awaddr; // @[top.scala 24:21]
  wire [7:0] axi_io_axi_in_awlen; // @[top.scala 24:21]
  wire  axi_io_axi_in_awvalid; // @[top.scala 24:21]
  wire [63:0] axi_io_axi_in_wdata; // @[top.scala 24:21]
  wire [7:0] axi_io_axi_in_wstrb; // @[top.scala 24:21]
  wire  axi_io_axi_in_wvalid; // @[top.scala 24:21]
  wire  axi_io_axi_in_bready; // @[top.scala 24:21]
  wire [63:0] axi_io_axi_out_rdata; // @[top.scala 24:21]
  wire  axi_io_axi_out_rlast; // @[top.scala 24:21]
  wire  axi_io_axi_out_rvalid; // @[top.scala 24:21]
  wire  axi_io_axi_out_wready; // @[top.scala 24:21]
  wire  axi_io_axi_out_bvalid; // @[top.scala 24:21]
  wire [31:0] dpi_flag; // @[top.scala 104:21]
  wire [31:0] dpi_ecall_flag; // @[top.scala 104:21]
  wire [63:0] dpi_pc; // @[top.scala 104:21]
  Register Register ( // @[top.scala 15:25]
    .clock(Register_clock)
  );
  IFU IFU ( // @[top.scala 16:21]
    .clock(IFU_clock),
    .reset(IFU_reset),
    .io_to_ds_pc(IFU_io_to_ds_pc),
    .io_inst(IFU_io_inst),
    .io_axi_in_rdata(IFU_io_axi_in_rdata),
    .io_axi_in_rlast(IFU_io_axi_in_rlast),
    .io_axi_in_rvalid(IFU_io_axi_in_rvalid),
    .io_axi_out_araddr(IFU_io_axi_out_araddr),
    .io_axi_out_arvalid(IFU_io_axi_out_arvalid),
    .io_axi_out_rready(IFU_io_axi_out_rready)
  );
  IDU IDU ( // @[top.scala 17:21]
    .io_pc(IDU_io_pc)
  );
  AXI_ARBITER arbiter ( // @[top.scala 21:25]
    .clock(arbiter_clock),
    .reset(arbiter_reset),
    .io_ifu_axi_in_araddr(arbiter_io_ifu_axi_in_araddr),
    .io_ifu_axi_in_arlen(arbiter_io_ifu_axi_in_arlen),
    .io_ifu_axi_in_arvalid(arbiter_io_ifu_axi_in_arvalid),
    .io_ifu_axi_in_rready(arbiter_io_ifu_axi_in_rready),
    .io_ifu_axi_out_rdata(arbiter_io_ifu_axi_out_rdata),
    .io_ifu_axi_out_rlast(arbiter_io_ifu_axi_out_rlast),
    .io_ifu_axi_out_rvalid(arbiter_io_ifu_axi_out_rvalid),
    .io_lsu_axi_in_arlen(arbiter_io_lsu_axi_in_arlen),
    .io_lsu_axi_in_arvalid(arbiter_io_lsu_axi_in_arvalid),
    .io_lsu_axi_in_rready(arbiter_io_lsu_axi_in_rready),
    .io_lsu_axi_in_awaddr(arbiter_io_lsu_axi_in_awaddr),
    .io_lsu_axi_in_awlen(arbiter_io_lsu_axi_in_awlen),
    .io_lsu_axi_in_awvalid(arbiter_io_lsu_axi_in_awvalid),
    .io_lsu_axi_in_wdata(arbiter_io_lsu_axi_in_wdata),
    .io_lsu_axi_in_wstrb(arbiter_io_lsu_axi_in_wstrb),
    .io_lsu_axi_in_wvalid(arbiter_io_lsu_axi_in_wvalid),
    .io_lsu_axi_in_bready(arbiter_io_lsu_axi_in_bready),
    .io_lsu_axi_out_rdata(arbiter_io_lsu_axi_out_rdata),
    .io_lsu_axi_out_rlast(arbiter_io_lsu_axi_out_rlast),
    .io_lsu_axi_out_rvalid(arbiter_io_lsu_axi_out_rvalid),
    .io_lsu_axi_out_wready(arbiter_io_lsu_axi_out_wready),
    .io_lsu_axi_out_bvalid(arbiter_io_lsu_axi_out_bvalid),
    .io_axi_in_rdata(arbiter_io_axi_in_rdata),
    .io_axi_in_rlast(arbiter_io_axi_in_rlast),
    .io_axi_in_rvalid(arbiter_io_axi_in_rvalid),
    .io_axi_in_wready(arbiter_io_axi_in_wready),
    .io_axi_in_bvalid(arbiter_io_axi_in_bvalid),
    .io_axi_out_araddr(arbiter_io_axi_out_araddr),
    .io_axi_out_arlen(arbiter_io_axi_out_arlen),
    .io_axi_out_arvalid(arbiter_io_axi_out_arvalid),
    .io_axi_out_rready(arbiter_io_axi_out_rready),
    .io_axi_out_awaddr(arbiter_io_axi_out_awaddr),
    .io_axi_out_awlen(arbiter_io_axi_out_awlen),
    .io_axi_out_awvalid(arbiter_io_axi_out_awvalid),
    .io_axi_out_wdata(arbiter_io_axi_out_wdata),
    .io_axi_out_wstrb(arbiter_io_axi_out_wstrb),
    .io_axi_out_wvalid(arbiter_io_axi_out_wvalid),
    .io_axi_out_bready(arbiter_io_axi_out_bready)
  );
  I_CACHE i_cache ( // @[top.scala 22:25]
    .clock(i_cache_clock),
    .reset(i_cache_reset),
    .io_from_ifu_araddr(i_cache_io_from_ifu_araddr),
    .io_from_ifu_arvalid(i_cache_io_from_ifu_arvalid),
    .io_from_ifu_rready(i_cache_io_from_ifu_rready),
    .io_to_ifu_rdata(i_cache_io_to_ifu_rdata),
    .io_to_ifu_rlast(i_cache_io_to_ifu_rlast),
    .io_to_ifu_rvalid(i_cache_io_to_ifu_rvalid),
    .io_to_axi_araddr(i_cache_io_to_axi_araddr),
    .io_to_axi_arlen(i_cache_io_to_axi_arlen),
    .io_to_axi_arvalid(i_cache_io_to_axi_arvalid),
    .io_to_axi_rready(i_cache_io_to_axi_rready),
    .io_from_axi_rdata(i_cache_io_from_axi_rdata),
    .io_from_axi_rlast(i_cache_io_from_axi_rlast),
    .io_from_axi_rvalid(i_cache_io_from_axi_rvalid)
  );
  D_CACHE d_cache ( // @[top.scala 23:25]
    .clock(d_cache_clock),
    .reset(d_cache_reset),
    .io_to_axi_arlen(d_cache_io_to_axi_arlen),
    .io_to_axi_arvalid(d_cache_io_to_axi_arvalid),
    .io_to_axi_rready(d_cache_io_to_axi_rready),
    .io_to_axi_awaddr(d_cache_io_to_axi_awaddr),
    .io_to_axi_awlen(d_cache_io_to_axi_awlen),
    .io_to_axi_awvalid(d_cache_io_to_axi_awvalid),
    .io_to_axi_wdata(d_cache_io_to_axi_wdata),
    .io_to_axi_wstrb(d_cache_io_to_axi_wstrb),
    .io_to_axi_wvalid(d_cache_io_to_axi_wvalid),
    .io_to_axi_bready(d_cache_io_to_axi_bready),
    .io_from_axi_rdata(d_cache_io_from_axi_rdata),
    .io_from_axi_rlast(d_cache_io_from_axi_rlast),
    .io_from_axi_rvalid(d_cache_io_from_axi_rvalid),
    .io_from_axi_wready(d_cache_io_from_axi_wready),
    .io_from_axi_bvalid(d_cache_io_from_axi_bvalid)
  );
  AXI axi ( // @[top.scala 24:21]
    .clock(axi_clock),
    .reset(axi_reset),
    .io_axi_in_araddr(axi_io_axi_in_araddr),
    .io_axi_in_arlen(axi_io_axi_in_arlen),
    .io_axi_in_arvalid(axi_io_axi_in_arvalid),
    .io_axi_in_rready(axi_io_axi_in_rready),
    .io_axi_in_awaddr(axi_io_axi_in_awaddr),
    .io_axi_in_awlen(axi_io_axi_in_awlen),
    .io_axi_in_awvalid(axi_io_axi_in_awvalid),
    .io_axi_in_wdata(axi_io_axi_in_wdata),
    .io_axi_in_wstrb(axi_io_axi_in_wstrb),
    .io_axi_in_wvalid(axi_io_axi_in_wvalid),
    .io_axi_in_bready(axi_io_axi_in_bready),
    .io_axi_out_rdata(axi_io_axi_out_rdata),
    .io_axi_out_rlast(axi_io_axi_out_rlast),
    .io_axi_out_rvalid(axi_io_axi_out_rvalid),
    .io_axi_out_wready(axi_io_axi_out_wready),
    .io_axi_out_bvalid(axi_io_axi_out_bvalid)
  );
  DPI dpi ( // @[top.scala 104:21]
    .flag(dpi_flag),
    .ecall_flag(dpi_ecall_flag),
    .pc(dpi_pc)
  );
  assign io_inst = IFU_io_inst; // @[top.scala 100:13]
  assign io_pc = IFU_io_to_ds_pc; // @[top.scala 98:11]
  assign io_step = 1'h0; // @[top.scala 103:13]
  assign Register_clock = clock;
  assign IFU_clock = clock;
  assign IFU_reset = reset;
  assign IFU_io_axi_in_rdata = i_cache_io_to_ifu_rdata; // @[top.scala 29:16]
  assign IFU_io_axi_in_rlast = i_cache_io_to_ifu_rlast; // @[top.scala 29:16]
  assign IFU_io_axi_in_rvalid = i_cache_io_to_ifu_rvalid; // @[top.scala 29:16]
  assign IDU_io_pc = IFU_io_to_ds_pc; // @[top.scala 47:12]
  assign arbiter_clock = clock;
  assign arbiter_reset = reset;
  assign arbiter_io_ifu_axi_in_araddr = i_cache_io_to_axi_araddr; // @[top.scala 27:27]
  assign arbiter_io_ifu_axi_in_arlen = i_cache_io_to_axi_arlen; // @[top.scala 27:27]
  assign arbiter_io_ifu_axi_in_arvalid = i_cache_io_to_axi_arvalid; // @[top.scala 27:27]
  assign arbiter_io_ifu_axi_in_rready = i_cache_io_to_axi_rready; // @[top.scala 27:27]
  assign arbiter_io_lsu_axi_in_arlen = d_cache_io_to_axi_arlen; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_arvalid = d_cache_io_to_axi_arvalid; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_rready = d_cache_io_to_axi_rready; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_awaddr = d_cache_io_to_axi_awaddr; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_awlen = d_cache_io_to_axi_awlen; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_awvalid = d_cache_io_to_axi_awvalid; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_wdata = d_cache_io_to_axi_wdata; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_wstrb = d_cache_io_to_axi_wstrb; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_wvalid = d_cache_io_to_axi_wvalid; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_bready = d_cache_io_to_axi_bready; // @[top.scala 32:27]
  assign arbiter_io_axi_in_rdata = axi_io_axi_out_rdata; // @[top.scala 37:23]
  assign arbiter_io_axi_in_rlast = axi_io_axi_out_rlast; // @[top.scala 37:23]
  assign arbiter_io_axi_in_rvalid = axi_io_axi_out_rvalid; // @[top.scala 37:23]
  assign arbiter_io_axi_in_wready = axi_io_axi_out_wready; // @[top.scala 37:23]
  assign arbiter_io_axi_in_bvalid = axi_io_axi_out_bvalid; // @[top.scala 37:23]
  assign i_cache_clock = clock;
  assign i_cache_reset = reset;
  assign i_cache_io_from_ifu_araddr = IFU_io_axi_out_araddr; // @[top.scala 30:25]
  assign i_cache_io_from_ifu_arvalid = IFU_io_axi_out_arvalid; // @[top.scala 30:25]
  assign i_cache_io_from_ifu_rready = IFU_io_axi_out_rready; // @[top.scala 30:25]
  assign i_cache_io_from_axi_rdata = arbiter_io_ifu_axi_out_rdata; // @[top.scala 28:25]
  assign i_cache_io_from_axi_rlast = arbiter_io_ifu_axi_out_rlast; // @[top.scala 28:25]
  assign i_cache_io_from_axi_rvalid = arbiter_io_ifu_axi_out_rvalid; // @[top.scala 28:25]
  assign d_cache_clock = clock;
  assign d_cache_reset = reset;
  assign d_cache_io_from_axi_rdata = arbiter_io_lsu_axi_out_rdata; // @[top.scala 33:25]
  assign d_cache_io_from_axi_rlast = arbiter_io_lsu_axi_out_rlast; // @[top.scala 33:25]
  assign d_cache_io_from_axi_rvalid = arbiter_io_lsu_axi_out_rvalid; // @[top.scala 33:25]
  assign d_cache_io_from_axi_wready = arbiter_io_lsu_axi_out_wready; // @[top.scala 33:25]
  assign d_cache_io_from_axi_bvalid = arbiter_io_lsu_axi_out_bvalid; // @[top.scala 33:25]
  assign axi_clock = clock;
  assign axi_reset = reset;
  assign axi_io_axi_in_araddr = arbiter_io_axi_out_araddr; // @[top.scala 38:19]
  assign axi_io_axi_in_arlen = arbiter_io_axi_out_arlen; // @[top.scala 38:19]
  assign axi_io_axi_in_arvalid = arbiter_io_axi_out_arvalid; // @[top.scala 38:19]
  assign axi_io_axi_in_rready = arbiter_io_axi_out_rready; // @[top.scala 38:19]
  assign axi_io_axi_in_awaddr = arbiter_io_axi_out_awaddr; // @[top.scala 38:19]
  assign axi_io_axi_in_awlen = arbiter_io_axi_out_awlen; // @[top.scala 38:19]
  assign axi_io_axi_in_awvalid = arbiter_io_axi_out_awvalid; // @[top.scala 38:19]
  assign axi_io_axi_in_wdata = arbiter_io_axi_out_wdata; // @[top.scala 38:19]
  assign axi_io_axi_in_wstrb = arbiter_io_axi_out_wstrb; // @[top.scala 38:19]
  assign axi_io_axi_in_wvalid = arbiter_io_axi_out_wvalid; // @[top.scala 38:19]
  assign axi_io_axi_in_bready = arbiter_io_axi_out_bready; // @[top.scala 38:19]
  assign dpi_flag = 32'h0; // @[top.scala 105:17]
  assign dpi_ecall_flag = 32'h0; // @[top.scala 106:23]
  assign dpi_pc = IDU_io_pc; // @[top.scala 107:96]
endmodule
