module top(
  input         clock,
  input         reset,
  output [31:0] io_inst,
  output [63:0] io_pc,
  output [63:0] io_pc_next,
  output [63:0] io_outval,
  output        io_step
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire  axi_clock; // @[top.scala 18:21]
  wire  axi_reset; // @[top.scala 18:21]
  wire [31:0] axi_io_axi_in_araddr; // @[top.scala 18:21]
  wire  axi_io_axi_in_arvalid; // @[top.scala 18:21]
  wire  axi_io_axi_in_rready; // @[top.scala 18:21]
  wire [31:0] axi_io_axi_in_awaddr; // @[top.scala 18:21]
  wire  axi_io_axi_in_awvalid; // @[top.scala 18:21]
  wire [31:0] axi_io_axi_in_wdata; // @[top.scala 18:21]
  wire [7:0] axi_io_axi_in_wstrb; // @[top.scala 18:21]
  wire  axi_io_axi_in_wvalid; // @[top.scala 18:21]
  wire  axi_io_axi_in_bready; // @[top.scala 18:21]
  wire  axi_io_axi_out_arready; // @[top.scala 18:21]
  wire [63:0] axi_io_axi_out_rdata; // @[top.scala 18:21]
  wire  axi_io_axi_out_rvalid; // @[top.scala 18:21]
  wire  axi_io_axi_out_awready; // @[top.scala 18:21]
  wire  axi_io_axi_out_wready; // @[top.scala 18:21]
  wire  axi_io_axi_out_bvalid; // @[top.scala 18:21]
  wire  lsu_step_clock; // @[top.scala 19:26]
  wire  lsu_step_reset; // @[top.scala 19:26]
  wire  lsu_step_io_inst_store; // @[top.scala 19:26]
  wire  lsu_step_io_inst_load; // @[top.scala 19:26]
  wire [31:0] lsu_step_io_mem_addr; // @[top.scala 19:26]
  wire [63:0] lsu_step_io_mem_wdata; // @[top.scala 19:26]
  wire [7:0] lsu_step_io_mem_wstrb; // @[top.scala 19:26]
  wire [63:0] lsu_step_io_mem_rdata; // @[top.scala 19:26]
  wire  lsu_step_io_axi_in_arready; // @[top.scala 19:26]
  wire [63:0] lsu_step_io_axi_in_rdata; // @[top.scala 19:26]
  wire  lsu_step_io_axi_in_rvalid; // @[top.scala 19:26]
  wire  lsu_step_io_axi_in_awready; // @[top.scala 19:26]
  wire  lsu_step_io_axi_in_wready; // @[top.scala 19:26]
  wire  lsu_step_io_axi_in_bvalid; // @[top.scala 19:26]
  wire [31:0] lsu_step_io_axi_out_araddr; // @[top.scala 19:26]
  wire  lsu_step_io_axi_out_arvalid; // @[top.scala 19:26]
  wire  lsu_step_io_axi_out_rready; // @[top.scala 19:26]
  wire [31:0] lsu_step_io_axi_out_awaddr; // @[top.scala 19:26]
  wire  lsu_step_io_axi_out_awvalid; // @[top.scala 19:26]
  wire [31:0] lsu_step_io_axi_out_wdata; // @[top.scala 19:26]
  wire [7:0] lsu_step_io_axi_out_wstrb; // @[top.scala 19:26]
  wire  lsu_step_io_axi_out_wvalid; // @[top.scala 19:26]
  wire  lsu_step_io_axi_out_bready; // @[top.scala 19:26]
  wire  arbiter_clock; // @[top.scala 20:25]
  wire  arbiter_reset; // @[top.scala 20:25]
  wire [31:0] arbiter_io_ifu_axi_in_araddr; // @[top.scala 20:25]
  wire  arbiter_io_ifu_axi_in_arvalid; // @[top.scala 20:25]
  wire  arbiter_io_ifu_axi_in_rready; // @[top.scala 20:25]
  wire [63:0] arbiter_io_ifu_axi_out_rdata; // @[top.scala 20:25]
  wire  arbiter_io_ifu_axi_out_rvalid; // @[top.scala 20:25]
  wire [31:0] arbiter_io_lsu_axi_in_araddr; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_in_arvalid; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_in_rready; // @[top.scala 20:25]
  wire [31:0] arbiter_io_lsu_axi_in_awaddr; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_in_awvalid; // @[top.scala 20:25]
  wire [31:0] arbiter_io_lsu_axi_in_wdata; // @[top.scala 20:25]
  wire [7:0] arbiter_io_lsu_axi_in_wstrb; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_in_wvalid; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_in_bready; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_out_arready; // @[top.scala 20:25]
  wire [63:0] arbiter_io_lsu_axi_out_rdata; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_out_rvalid; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_out_awready; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_out_wready; // @[top.scala 20:25]
  wire  arbiter_io_lsu_axi_out_bvalid; // @[top.scala 20:25]
  wire  arbiter_io_axi_in_arready; // @[top.scala 20:25]
  wire [63:0] arbiter_io_axi_in_rdata; // @[top.scala 20:25]
  wire  arbiter_io_axi_in_rvalid; // @[top.scala 20:25]
  wire  arbiter_io_axi_in_awready; // @[top.scala 20:25]
  wire  arbiter_io_axi_in_wready; // @[top.scala 20:25]
  wire  arbiter_io_axi_in_bvalid; // @[top.scala 20:25]
  wire [31:0] arbiter_io_axi_out_araddr; // @[top.scala 20:25]
  wire  arbiter_io_axi_out_arvalid; // @[top.scala 20:25]
  wire  arbiter_io_axi_out_rready; // @[top.scala 20:25]
  wire [31:0] arbiter_io_axi_out_awaddr; // @[top.scala 20:25]
  wire  arbiter_io_axi_out_awvalid; // @[top.scala 20:25]
  wire [31:0] arbiter_io_axi_out_wdata; // @[top.scala 20:25]
  wire [7:0] arbiter_io_axi_out_wstrb; // @[top.scala 20:25]
  wire  arbiter_io_axi_out_wvalid; // @[top.scala 20:25]
  wire  arbiter_io_axi_out_bready; // @[top.scala 20:25]
  wire  ifu_step_clock; // @[top.scala 21:26]
  wire  ifu_step_reset; // @[top.scala 21:26]
  wire [63:0] ifu_step_io_pc; // @[top.scala 21:26]
  wire  ifu_step_io_pc_valid; // @[top.scala 21:26]
  wire  ifu_step_io_inst_valid; // @[top.scala 21:26]
  wire [31:0] ifu_step_io_inst; // @[top.scala 21:26]
  wire [31:0] ifu_step_io_inst_reg; // @[top.scala 21:26]
  wire [63:0] ifu_step_io_axi_in_rdata; // @[top.scala 21:26]
  wire  ifu_step_io_axi_in_rvalid; // @[top.scala 21:26]
  wire [31:0] ifu_step_io_axi_out_araddr; // @[top.scala 21:26]
  wire  ifu_step_io_axi_out_arvalid; // @[top.scala 21:26]
  wire  ifu_step_io_axi_out_rready; // @[top.scala 21:26]
  wire [31:0] idu_step_io_inst; // @[top.scala 32:26]
  wire [31:0] idu_step_io_inst_now; // @[top.scala 32:26]
  wire [4:0] idu_step_io_rs1; // @[top.scala 32:26]
  wire [4:0] idu_step_io_rs2; // @[top.scala 32:26]
  wire [4:0] idu_step_io_rd; // @[top.scala 32:26]
  wire [63:0] idu_step_io_imm; // @[top.scala 32:26]
  wire  idu_step_io_ctrl_sign_reg_write; // @[top.scala 32:26]
  wire  idu_step_io_ctrl_sign_csr_write; // @[top.scala 32:26]
  wire  idu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 32:26]
  wire  idu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 32:26]
  wire  idu_step_io_ctrl_sign_Writemem_en; // @[top.scala 32:26]
  wire  idu_step_io_ctrl_sign_Readmem_en; // @[top.scala 32:26]
  wire [7:0] idu_step_io_ctrl_sign_Wmask; // @[top.scala 32:26]
  wire  exu_step_clock; // @[top.scala 37:26]
  wire  exu_step_reset; // @[top.scala 37:26]
  wire [63:0] exu_step_io_pc; // @[top.scala 37:26]
  wire [63:0] exu_step_io_pc_next; // @[top.scala 37:26]
  wire [31:0] exu_step_io_inst_now; // @[top.scala 37:26]
  wire [4:0] exu_step_io_rs1; // @[top.scala 37:26]
  wire [4:0] exu_step_io_rs2; // @[top.scala 37:26]
  wire [4:0] exu_step_io_rd; // @[top.scala 37:26]
  wire [63:0] exu_step_io_imm; // @[top.scala 37:26]
  wire  exu_step_io_ctrl_sign_reg_write; // @[top.scala 37:26]
  wire  exu_step_io_ctrl_sign_csr_write; // @[top.scala 37:26]
  wire  exu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 37:26]
  wire  exu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 37:26]
  wire  exu_step_io_ctrl_sign_Writemem_en; // @[top.scala 37:26]
  wire  exu_step_io_ctrl_sign_Readmem_en; // @[top.scala 37:26]
  wire [7:0] exu_step_io_ctrl_sign_Wmask; // @[top.scala 37:26]
  wire [63:0] exu_step_io_res2rd; // @[top.scala 37:26]
  wire  exu_step_io_inst_valid; // @[top.scala 37:26]
  wire  exu_step_io_inst_store; // @[top.scala 37:26]
  wire  exu_step_io_inst_load; // @[top.scala 37:26]
  wire [31:0] exu_step_io_Mem_addr; // @[top.scala 37:26]
  wire [63:0] exu_step_io_Mem_rdata; // @[top.scala 37:26]
  wire [63:0] exu_step_io_Mem_wdata; // @[top.scala 37:26]
  wire [7:0] exu_step_io_Mem_wstrb; // @[top.scala 37:26]
  wire [31:0] dpi_flag; // @[top.scala 58:21]
  wire [31:0] dpi_ecall_flag; // @[top.scala 58:21]
  reg [63:0] pc_now; // @[top.scala 15:25]
  reg  execute_end; // @[top.scala 17:30]
  reg  pc_valid; // @[top.scala 72:27]
  reg  diff_step; // @[top.scala 75:28]
  AXI axi ( // @[top.scala 18:21]
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
    .io_axi_out_arready(axi_io_axi_out_arready),
    .io_axi_out_rdata(axi_io_axi_out_rdata),
    .io_axi_out_rvalid(axi_io_axi_out_rvalid),
    .io_axi_out_awready(axi_io_axi_out_awready),
    .io_axi_out_wready(axi_io_axi_out_wready),
    .io_axi_out_bvalid(axi_io_axi_out_bvalid)
  );
  LSU lsu_step ( // @[top.scala 19:26]
    .clock(lsu_step_clock),
    .reset(lsu_step_reset),
    .io_inst_store(lsu_step_io_inst_store),
    .io_inst_load(lsu_step_io_inst_load),
    .io_mem_addr(lsu_step_io_mem_addr),
    .io_mem_wdata(lsu_step_io_mem_wdata),
    .io_mem_wstrb(lsu_step_io_mem_wstrb),
    .io_mem_rdata(lsu_step_io_mem_rdata),
    .io_axi_in_arready(lsu_step_io_axi_in_arready),
    .io_axi_in_rdata(lsu_step_io_axi_in_rdata),
    .io_axi_in_rvalid(lsu_step_io_axi_in_rvalid),
    .io_axi_in_awready(lsu_step_io_axi_in_awready),
    .io_axi_in_wready(lsu_step_io_axi_in_wready),
    .io_axi_in_bvalid(lsu_step_io_axi_in_bvalid),
    .io_axi_out_araddr(lsu_step_io_axi_out_araddr),
    .io_axi_out_arvalid(lsu_step_io_axi_out_arvalid),
    .io_axi_out_rready(lsu_step_io_axi_out_rready),
    .io_axi_out_awaddr(lsu_step_io_axi_out_awaddr),
    .io_axi_out_awvalid(lsu_step_io_axi_out_awvalid),
    .io_axi_out_wdata(lsu_step_io_axi_out_wdata),
    .io_axi_out_wstrb(lsu_step_io_axi_out_wstrb),
    .io_axi_out_wvalid(lsu_step_io_axi_out_wvalid),
    .io_axi_out_bready(lsu_step_io_axi_out_bready)
  );
  AXI_ARBITER arbiter ( // @[top.scala 20:25]
    .clock(arbiter_clock),
    .reset(arbiter_reset),
    .io_ifu_axi_in_araddr(arbiter_io_ifu_axi_in_araddr),
    .io_ifu_axi_in_arvalid(arbiter_io_ifu_axi_in_arvalid),
    .io_ifu_axi_in_rready(arbiter_io_ifu_axi_in_rready),
    .io_ifu_axi_out_rdata(arbiter_io_ifu_axi_out_rdata),
    .io_ifu_axi_out_rvalid(arbiter_io_ifu_axi_out_rvalid),
    .io_lsu_axi_in_araddr(arbiter_io_lsu_axi_in_araddr),
    .io_lsu_axi_in_arvalid(arbiter_io_lsu_axi_in_arvalid),
    .io_lsu_axi_in_rready(arbiter_io_lsu_axi_in_rready),
    .io_lsu_axi_in_awaddr(arbiter_io_lsu_axi_in_awaddr),
    .io_lsu_axi_in_awvalid(arbiter_io_lsu_axi_in_awvalid),
    .io_lsu_axi_in_wdata(arbiter_io_lsu_axi_in_wdata),
    .io_lsu_axi_in_wstrb(arbiter_io_lsu_axi_in_wstrb),
    .io_lsu_axi_in_wvalid(arbiter_io_lsu_axi_in_wvalid),
    .io_lsu_axi_in_bready(arbiter_io_lsu_axi_in_bready),
    .io_lsu_axi_out_arready(arbiter_io_lsu_axi_out_arready),
    .io_lsu_axi_out_rdata(arbiter_io_lsu_axi_out_rdata),
    .io_lsu_axi_out_rvalid(arbiter_io_lsu_axi_out_rvalid),
    .io_lsu_axi_out_awready(arbiter_io_lsu_axi_out_awready),
    .io_lsu_axi_out_wready(arbiter_io_lsu_axi_out_wready),
    .io_lsu_axi_out_bvalid(arbiter_io_lsu_axi_out_bvalid),
    .io_axi_in_arready(arbiter_io_axi_in_arready),
    .io_axi_in_rdata(arbiter_io_axi_in_rdata),
    .io_axi_in_rvalid(arbiter_io_axi_in_rvalid),
    .io_axi_in_awready(arbiter_io_axi_in_awready),
    .io_axi_in_wready(arbiter_io_axi_in_wready),
    .io_axi_in_bvalid(arbiter_io_axi_in_bvalid),
    .io_axi_out_araddr(arbiter_io_axi_out_araddr),
    .io_axi_out_arvalid(arbiter_io_axi_out_arvalid),
    .io_axi_out_rready(arbiter_io_axi_out_rready),
    .io_axi_out_awaddr(arbiter_io_axi_out_awaddr),
    .io_axi_out_awvalid(arbiter_io_axi_out_awvalid),
    .io_axi_out_wdata(arbiter_io_axi_out_wdata),
    .io_axi_out_wstrb(arbiter_io_axi_out_wstrb),
    .io_axi_out_wvalid(arbiter_io_axi_out_wvalid),
    .io_axi_out_bready(arbiter_io_axi_out_bready)
  );
  IFU_AXI ifu_step ( // @[top.scala 21:26]
    .clock(ifu_step_clock),
    .reset(ifu_step_reset),
    .io_pc(ifu_step_io_pc),
    .io_pc_valid(ifu_step_io_pc_valid),
    .io_inst_valid(ifu_step_io_inst_valid),
    .io_inst(ifu_step_io_inst),
    .io_inst_reg(ifu_step_io_inst_reg),
    .io_axi_in_rdata(ifu_step_io_axi_in_rdata),
    .io_axi_in_rvalid(ifu_step_io_axi_in_rvalid),
    .io_axi_out_araddr(ifu_step_io_axi_out_araddr),
    .io_axi_out_arvalid(ifu_step_io_axi_out_arvalid),
    .io_axi_out_rready(ifu_step_io_axi_out_rready)
  );
  IDU idu_step ( // @[top.scala 32:26]
    .io_inst(idu_step_io_inst),
    .io_inst_now(idu_step_io_inst_now),
    .io_rs1(idu_step_io_rs1),
    .io_rs2(idu_step_io_rs2),
    .io_rd(idu_step_io_rd),
    .io_imm(idu_step_io_imm),
    .io_ctrl_sign_reg_write(idu_step_io_ctrl_sign_reg_write),
    .io_ctrl_sign_csr_write(idu_step_io_ctrl_sign_csr_write),
    .io_ctrl_sign_src2_is_imm(idu_step_io_ctrl_sign_src2_is_imm),
    .io_ctrl_sign_src1_is_pc(idu_step_io_ctrl_sign_src1_is_pc),
    .io_ctrl_sign_Writemem_en(idu_step_io_ctrl_sign_Writemem_en),
    .io_ctrl_sign_Readmem_en(idu_step_io_ctrl_sign_Readmem_en),
    .io_ctrl_sign_Wmask(idu_step_io_ctrl_sign_Wmask)
  );
  EXU_AXI exu_step ( // @[top.scala 37:26]
    .clock(exu_step_clock),
    .reset(exu_step_reset),
    .io_pc(exu_step_io_pc),
    .io_pc_next(exu_step_io_pc_next),
    .io_inst_now(exu_step_io_inst_now),
    .io_rs1(exu_step_io_rs1),
    .io_rs2(exu_step_io_rs2),
    .io_rd(exu_step_io_rd),
    .io_imm(exu_step_io_imm),
    .io_ctrl_sign_reg_write(exu_step_io_ctrl_sign_reg_write),
    .io_ctrl_sign_csr_write(exu_step_io_ctrl_sign_csr_write),
    .io_ctrl_sign_src2_is_imm(exu_step_io_ctrl_sign_src2_is_imm),
    .io_ctrl_sign_src1_is_pc(exu_step_io_ctrl_sign_src1_is_pc),
    .io_ctrl_sign_Writemem_en(exu_step_io_ctrl_sign_Writemem_en),
    .io_ctrl_sign_Readmem_en(exu_step_io_ctrl_sign_Readmem_en),
    .io_ctrl_sign_Wmask(exu_step_io_ctrl_sign_Wmask),
    .io_res2rd(exu_step_io_res2rd),
    .io_inst_valid(exu_step_io_inst_valid),
    .io_inst_store(exu_step_io_inst_store),
    .io_inst_load(exu_step_io_inst_load),
    .io_Mem_addr(exu_step_io_Mem_addr),
    .io_Mem_rdata(exu_step_io_Mem_rdata),
    .io_Mem_wdata(exu_step_io_Mem_wdata),
    .io_Mem_wstrb(exu_step_io_Mem_wstrb)
  );
  DPI dpi ( // @[top.scala 58:21]
    .flag(dpi_flag),
    .ecall_flag(dpi_ecall_flag)
  );
  assign io_inst = ifu_step_io_inst; // @[top.scala 23:13]
  assign io_pc = pc_now; // @[top.scala 16:11]
  assign io_pc_next = exu_step_io_pc_next; // @[top.scala 79:16]
  assign io_outval = exu_step_io_res2rd; // @[top.scala 54:15]
  assign io_step = diff_step; // @[top.scala 77:13]
  assign axi_clock = clock;
  assign axi_reset = reset;
  assign axi_io_axi_in_araddr = arbiter_io_axi_out_araddr; // @[top.scala 29:19]
  assign axi_io_axi_in_arvalid = arbiter_io_axi_out_arvalid; // @[top.scala 29:19]
  assign axi_io_axi_in_rready = arbiter_io_axi_out_rready; // @[top.scala 29:19]
  assign axi_io_axi_in_awaddr = arbiter_io_axi_out_awaddr; // @[top.scala 29:19]
  assign axi_io_axi_in_awvalid = arbiter_io_axi_out_awvalid; // @[top.scala 29:19]
  assign axi_io_axi_in_wdata = arbiter_io_axi_out_wdata; // @[top.scala 29:19]
  assign axi_io_axi_in_wstrb = arbiter_io_axi_out_wstrb; // @[top.scala 29:19]
  assign axi_io_axi_in_wvalid = arbiter_io_axi_out_wvalid; // @[top.scala 29:19]
  assign axi_io_axi_in_bready = arbiter_io_axi_out_bready; // @[top.scala 29:19]
  assign lsu_step_clock = clock;
  assign lsu_step_reset = reset;
  assign lsu_step_io_inst_store = exu_step_io_inst_store; // @[top.scala 47:28]
  assign lsu_step_io_inst_load = exu_step_io_inst_load; // @[top.scala 46:27]
  assign lsu_step_io_mem_addr = exu_step_io_Mem_addr; // @[top.scala 48:26]
  assign lsu_step_io_mem_wdata = exu_step_io_Mem_wdata; // @[top.scala 49:27]
  assign lsu_step_io_mem_wstrb = exu_step_io_Mem_wstrb; // @[top.scala 50:27]
  assign lsu_step_io_axi_in_arready = arbiter_io_lsu_axi_out_arready; // @[top.scala 27:24]
  assign lsu_step_io_axi_in_rdata = arbiter_io_lsu_axi_out_rdata; // @[top.scala 27:24]
  assign lsu_step_io_axi_in_rvalid = arbiter_io_lsu_axi_out_rvalid; // @[top.scala 27:24]
  assign lsu_step_io_axi_in_awready = arbiter_io_lsu_axi_out_awready; // @[top.scala 27:24]
  assign lsu_step_io_axi_in_wready = arbiter_io_lsu_axi_out_wready; // @[top.scala 27:24]
  assign lsu_step_io_axi_in_bvalid = arbiter_io_lsu_axi_out_bvalid; // @[top.scala 27:24]
  assign arbiter_clock = clock;
  assign arbiter_reset = reset;
  assign arbiter_io_ifu_axi_in_araddr = ifu_step_io_axi_out_araddr; // @[top.scala 24:27]
  assign arbiter_io_ifu_axi_in_arvalid = ifu_step_io_axi_out_arvalid; // @[top.scala 24:27]
  assign arbiter_io_ifu_axi_in_rready = ifu_step_io_axi_out_rready; // @[top.scala 24:27]
  assign arbiter_io_lsu_axi_in_araddr = lsu_step_io_axi_out_araddr; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_arvalid = lsu_step_io_axi_out_arvalid; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_rready = lsu_step_io_axi_out_rready; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_awaddr = lsu_step_io_axi_out_awaddr; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_awvalid = lsu_step_io_axi_out_awvalid; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_wdata = lsu_step_io_axi_out_wdata; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_wstrb = lsu_step_io_axi_out_wstrb; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_wvalid = lsu_step_io_axi_out_wvalid; // @[top.scala 26:27]
  assign arbiter_io_lsu_axi_in_bready = lsu_step_io_axi_out_bready; // @[top.scala 26:27]
  assign arbiter_io_axi_in_arready = axi_io_axi_out_arready; // @[top.scala 28:23]
  assign arbiter_io_axi_in_rdata = axi_io_axi_out_rdata; // @[top.scala 28:23]
  assign arbiter_io_axi_in_rvalid = axi_io_axi_out_rvalid; // @[top.scala 28:23]
  assign arbiter_io_axi_in_awready = axi_io_axi_out_awready; // @[top.scala 28:23]
  assign arbiter_io_axi_in_wready = axi_io_axi_out_wready; // @[top.scala 28:23]
  assign arbiter_io_axi_in_bvalid = axi_io_axi_out_bvalid; // @[top.scala 28:23]
  assign ifu_step_clock = clock;
  assign ifu_step_reset = reset;
  assign ifu_step_io_pc = pc_now; // @[top.scala 22:20]
  assign ifu_step_io_pc_valid = pc_valid; // @[top.scala 74:26]
  assign ifu_step_io_axi_in_rdata = arbiter_io_ifu_axi_out_rdata; // @[top.scala 25:24]
  assign ifu_step_io_axi_in_rvalid = arbiter_io_ifu_axi_out_rvalid; // @[top.scala 25:24]
  assign idu_step_io_inst = ~ifu_step_io_inst_valid & ~pc_valid & ~execute_end ? ifu_step_io_inst_reg : ifu_step_io_inst
    ; // @[top.scala 81:28]
  assign exu_step_clock = clock;
  assign exu_step_reset = reset;
  assign exu_step_io_pc = pc_now; // @[top.scala 38:20]
  assign exu_step_io_inst_now = idu_step_io_inst_now; // @[top.scala 39:26]
  assign exu_step_io_rs1 = idu_step_io_rs1; // @[top.scala 41:21]
  assign exu_step_io_rs2 = idu_step_io_rs2; // @[top.scala 42:21]
  assign exu_step_io_rd = idu_step_io_rd; // @[top.scala 43:20]
  assign exu_step_io_imm = idu_step_io_imm; // @[top.scala 44:21]
  assign exu_step_io_ctrl_sign_reg_write = idu_step_io_ctrl_sign_reg_write; // @[top.scala 45:27]
  assign exu_step_io_ctrl_sign_csr_write = idu_step_io_ctrl_sign_csr_write; // @[top.scala 45:27]
  assign exu_step_io_ctrl_sign_src2_is_imm = idu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 45:27]
  assign exu_step_io_ctrl_sign_src1_is_pc = idu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 45:27]
  assign exu_step_io_ctrl_sign_Writemem_en = idu_step_io_ctrl_sign_Writemem_en; // @[top.scala 45:27]
  assign exu_step_io_ctrl_sign_Readmem_en = idu_step_io_ctrl_sign_Readmem_en; // @[top.scala 45:27]
  assign exu_step_io_ctrl_sign_Wmask = idu_step_io_ctrl_sign_Wmask; // @[top.scala 45:27]
  assign exu_step_io_inst_valid = ifu_step_io_inst_valid; // @[top.scala 53:28]
  assign exu_step_io_Mem_rdata = lsu_step_io_mem_rdata; // @[top.scala 51:27]
  assign dpi_flag = {{31'd0}, idu_step_io_inst_now == 32'h2}; // @[top.scala 59:17]
  assign dpi_ecall_flag = {{31'd0}, idu_step_io_inst_now == 32'h3d}; // @[top.scala 60:23]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 15:25]
      pc_now <= 64'h80000000; // @[top.scala 15:25]
    end else if (execute_end) begin // @[top.scala 78:18]
      pc_now <= exu_step_io_pc_next;
    end
    if (reset) begin // @[top.scala 17:30]
      execute_end <= 1'h0; // @[top.scala 17:30]
    end else if (exu_step_io_inst_store) begin // @[top.scala 70:23]
      execute_end <= lsu_step_io_axi_in_bvalid;
    end else if (exu_step_io_inst_load) begin // @[top.scala 70:76]
      execute_end <= lsu_step_io_axi_in_rvalid;
    end else begin
      execute_end <= ifu_step_io_inst_valid;
    end
    pc_valid <= reset | execute_end; // @[top.scala 72:{27,27} 73:14]
    if (reset) begin // @[top.scala 75:28]
      diff_step <= 1'h0; // @[top.scala 75:28]
    end else begin
      diff_step <= execute_end; // @[top.scala 76:15]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"pc : %x inst:%x execute_end : %d\n\n",pc_now,io_inst,execute_end); // @[top.scala 71:11]
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
  pc_now = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  execute_end = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  pc_valid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  diff_step = _RAND_3[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
