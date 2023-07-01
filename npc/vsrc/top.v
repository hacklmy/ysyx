module top(
  input         clock,
  input         reset,
  output [31:0] io_inst,
  output [63:0] io_pc,
  output        io_step
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  Register_clock; // @[top.scala 15:25]
  wire [4:0] Register_io_raddr1; // @[top.scala 15:25]
  wire [4:0] Register_io_raddr2; // @[top.scala 15:25]
  wire [63:0] Register_io_rdata1; // @[top.scala 15:25]
  wire [63:0] Register_io_rdata2; // @[top.scala 15:25]
  wire  Register_io_we; // @[top.scala 15:25]
  wire [4:0] Register_io_waddr; // @[top.scala 15:25]
  wire [63:0] Register_io_wdata; // @[top.scala 15:25]
  wire  IFU_clock; // @[top.scala 16:21]
  wire  IFU_reset; // @[top.scala 16:21]
  wire  IFU_io_ds_allowin; // @[top.scala 16:21]
  wire  IFU_io_ds_ready_go; // @[top.scala 16:21]
  wire  IFU_io_ds_valid; // @[top.scala 16:21]
  wire  IFU_io_br_taken; // @[top.scala 16:21]
  wire [63:0] IFU_io_br_target; // @[top.scala 16:21]
  wire [63:0] IFU_io_to_ds_pc; // @[top.scala 16:21]
  wire  IFU_io_fs_to_ds_valid; // @[top.scala 16:21]
  wire [31:0] IFU_io_inst; // @[top.scala 16:21]
  wire  IFU_io_axi_in_arready; // @[top.scala 16:21]
  wire [63:0] IFU_io_axi_in_rdata; // @[top.scala 16:21]
  wire  IFU_io_axi_in_rvalid; // @[top.scala 16:21]
  wire [31:0] IFU_io_axi_out_araddr; // @[top.scala 16:21]
  wire  IFU_io_axi_out_arvalid; // @[top.scala 16:21]
  wire  IFU_io_axi_out_rready; // @[top.scala 16:21]
  wire  IFU_io_fence; // @[top.scala 16:21]
  wire  IFU_io_clear_cache; // @[top.scala 16:21]
  wire  IFU_io_cache_init; // @[top.scala 16:21]
  wire  IDU_clock; // @[top.scala 17:21]
  wire  IDU_reset; // @[top.scala 17:21]
  wire [63:0] IDU_io_pc; // @[top.scala 17:21]
  wire  IDU_io_fs_to_ds_valid; // @[top.scala 17:21]
  wire  IDU_io_ds_to_es_valid; // @[top.scala 17:21]
  wire  IDU_io_es_allowin; // @[top.scala 17:21]
  wire [31:0] IDU_io_from_fs_inst; // @[top.scala 17:21]
  wire  IDU_io_br_taken; // @[top.scala 17:21]
  wire [63:0] IDU_io_br_target; // @[top.scala 17:21]
  wire  IDU_io_ds_allowin; // @[top.scala 17:21]
  wire  IDU_io_ds_ready_go; // @[top.scala 17:21]
  wire  IDU_io_fence; // @[top.scala 17:21]
  wire [4:0] IDU_io_raddr1; // @[top.scala 17:21]
  wire [4:0] IDU_io_raddr2; // @[top.scala 17:21]
  wire [63:0] IDU_io_rdata1; // @[top.scala 17:21]
  wire [63:0] IDU_io_rdata2; // @[top.scala 17:21]
  wire [63:0] IDU_io_to_es_pc; // @[top.scala 17:21]
  wire [31:0] IDU_io_ALUop; // @[top.scala 17:21]
  wire [63:0] IDU_io_src1; // @[top.scala 17:21]
  wire [63:0] IDU_io_src2; // @[top.scala 17:21]
  wire [4:0] IDU_io_rf_dst; // @[top.scala 17:21]
  wire [63:0] IDU_io_store_data; // @[top.scala 17:21]
  wire  IDU_io_ctrl_sign_reg_write; // @[top.scala 17:21]
  wire  IDU_io_ctrl_sign_Writemem_en; // @[top.scala 17:21]
  wire  IDU_io_ctrl_sign_Readmem_en; // @[top.scala 17:21]
  wire [7:0] IDU_io_ctrl_sign_Wmask; // @[top.scala 17:21]
  wire [2:0] IDU_io_load_type; // @[top.scala 17:21]
  wire  IDU_io_es_ld; // @[top.scala 17:21]
  wire [63:0] IDU_io_es_fwd_res; // @[top.scala 17:21]
  wire [63:0] IDU_io_ms_fwd_res; // @[top.scala 17:21]
  wire [63:0] IDU_io_ws_fwd_res; // @[top.scala 17:21]
  wire  IDU_io_es_fwd_ready; // @[top.scala 17:21]
  wire  IDU_io_ms_fwd_ready; // @[top.scala 17:21]
  wire  IDU_io_es_rf_we; // @[top.scala 17:21]
  wire  IDU_io_ms_rf_we; // @[top.scala 17:21]
  wire  IDU_io_ws_rf_we; // @[top.scala 17:21]
  wire  IDU_io_es_valid; // @[top.scala 17:21]
  wire  IDU_io_ms_valid; // @[top.scala 17:21]
  wire  IDU_io_ws_valid; // @[top.scala 17:21]
  wire [4:0] IDU_io_es_rf_dst; // @[top.scala 17:21]
  wire [4:0] IDU_io_ms_rf_dst; // @[top.scala 17:21]
  wire [4:0] IDU_io_ws_rf_dst; // @[top.scala 17:21]
  wire  IDU_io_ds_valid; // @[top.scala 17:21]
  wire  EXU_clock; // @[top.scala 18:21]
  wire  EXU_reset; // @[top.scala 18:21]
  wire [63:0] EXU_io_pc; // @[top.scala 18:21]
  wire  EXU_io_ds_to_es_valid; // @[top.scala 18:21]
  wire  EXU_io_ms_allowin; // @[top.scala 18:21]
  wire  EXU_io_es_allowin; // @[top.scala 18:21]
  wire [31:0] EXU_io_ALUop; // @[top.scala 18:21]
  wire [63:0] EXU_io_src1_value; // @[top.scala 18:21]
  wire [63:0] EXU_io_src2_value; // @[top.scala 18:21]
  wire [4:0] EXU_io_rf_dst; // @[top.scala 18:21]
  wire [63:0] EXU_io_store_data; // @[top.scala 18:21]
  wire  EXU_io_es_to_ms_valid; // @[top.scala 18:21]
  wire [2:0] EXU_io_load_type; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_pc; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_alures; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_store_data; // @[top.scala 18:21]
  wire  EXU_io_to_ms_wen; // @[top.scala 18:21]
  wire [7:0] EXU_io_to_ms_wstrb; // @[top.scala 18:21]
  wire  EXU_io_to_ms_ren; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_maddr; // @[top.scala 18:21]
  wire [4:0] EXU_io_to_ms_rf_dst; // @[top.scala 18:21]
  wire  EXU_io_to_ms_rf_we; // @[top.scala 18:21]
  wire [2:0] EXU_io_to_ms_load_type; // @[top.scala 18:21]
  wire  EXU_io_ctrl_sign_reg_write; // @[top.scala 18:21]
  wire  EXU_io_ctrl_sign_Writemem_en; // @[top.scala 18:21]
  wire  EXU_io_ctrl_sign_Readmem_en; // @[top.scala 18:21]
  wire [7:0] EXU_io_ctrl_sign_Wmask; // @[top.scala 18:21]
  wire  EXU_io_es_valid; // @[top.scala 18:21]
  wire  EXU_io_es_rf_we; // @[top.scala 18:21]
  wire [4:0] EXU_io_es_rf_dst; // @[top.scala 18:21]
  wire  EXU_io_es_fwd_ready; // @[top.scala 18:21]
  wire [63:0] EXU_io_es_fwd_res; // @[top.scala 18:21]
  wire  EXU_io_es_ld; // @[top.scala 18:21]
  wire  LSU_clock; // @[top.scala 19:21]
  wire  LSU_reset; // @[top.scala 19:21]
  wire [63:0] LSU_io_pc; // @[top.scala 19:21]
  wire  LSU_io_es_to_ms_valid; // @[top.scala 19:21]
  wire  LSU_io_ms_allowin; // @[top.scala 19:21]
  wire  LSU_io_rf_we; // @[top.scala 19:21]
  wire [4:0] LSU_io_rf_dst; // @[top.scala 19:21]
  wire [63:0] LSU_io_alu_res; // @[top.scala 19:21]
  wire [63:0] LSU_io_store_data; // @[top.scala 19:21]
  wire [2:0] LSU_io_load_type; // @[top.scala 19:21]
  wire  LSU_io_wen; // @[top.scala 19:21]
  wire [7:0] LSU_io_wstrb; // @[top.scala 19:21]
  wire  LSU_io_ren; // @[top.scala 19:21]
  wire [63:0] LSU_io_maddr; // @[top.scala 19:21]
  wire [63:0] LSU_io_to_ws_pc; // @[top.scala 19:21]
  wire [63:0] LSU_io_ms_final_res; // @[top.scala 19:21]
  wire  LSU_io_ms_to_ws_valid; // @[top.scala 19:21]
  wire  LSU_io_to_ws_rf_we; // @[top.scala 19:21]
  wire [4:0] LSU_io_to_ws_rf_dst; // @[top.scala 19:21]
  wire  LSU_io_ms_valid; // @[top.scala 19:21]
  wire  LSU_io_ms_rf_we; // @[top.scala 19:21]
  wire [4:0] LSU_io_ms_rf_dst; // @[top.scala 19:21]
  wire  LSU_io_ms_fwd_ready; // @[top.scala 19:21]
  wire [63:0] LSU_io_ms_fwd_res; // @[top.scala 19:21]
  wire [63:0] LSU_io_axi_in_rdata; // @[top.scala 19:21]
  wire  LSU_io_axi_in_rvalid; // @[top.scala 19:21]
  wire  LSU_io_axi_in_wready; // @[top.scala 19:21]
  wire [31:0] LSU_io_axi_out_araddr; // @[top.scala 19:21]
  wire  LSU_io_axi_out_arvalid; // @[top.scala 19:21]
  wire [31:0] LSU_io_axi_out_awaddr; // @[top.scala 19:21]
  wire  LSU_io_axi_out_awvalid; // @[top.scala 19:21]
  wire [63:0] LSU_io_axi_out_wdata; // @[top.scala 19:21]
  wire [7:0] LSU_io_axi_out_wstrb; // @[top.scala 19:21]
  wire  LSU_io_axi_out_wvalid; // @[top.scala 19:21]
  wire  WBU_clock; // @[top.scala 20:21]
  wire  WBU_reset; // @[top.scala 20:21]
  wire [63:0] WBU_io_pc; // @[top.scala 20:21]
  wire  WBU_io_ms_to_ws_valid; // @[top.scala 20:21]
  wire [63:0] WBU_io_ms_final_res; // @[top.scala 20:21]
  wire  WBU_io_rf_we; // @[top.scala 20:21]
  wire [4:0] WBU_io_rf_dst; // @[top.scala 20:21]
  wire  WBU_io_we; // @[top.scala 20:21]
  wire [4:0] WBU_io_waddr; // @[top.scala 20:21]
  wire [63:0] WBU_io_wdata; // @[top.scala 20:21]
  wire  WBU_io_ws_valid; // @[top.scala 20:21]
  wire  WBU_io_ws_rf_we; // @[top.scala 20:21]
  wire [4:0] WBU_io_ws_rf_dst; // @[top.scala 20:21]
  wire [63:0] WBU_io_ws_fwd_res; // @[top.scala 20:21]
  wire [63:0] WBU_io_ws_pc; // @[top.scala 20:21]
  wire  arbiter_clock; // @[top.scala 21:25]
  wire  arbiter_reset; // @[top.scala 21:25]
  wire [31:0] arbiter_io_ifu_axi_in_araddr; // @[top.scala 21:25]
  wire [7:0] arbiter_io_ifu_axi_in_arlen; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_in_arvalid; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_in_rready; // @[top.scala 21:25]
  wire [63:0] arbiter_io_ifu_axi_out_rdata; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_out_rlast; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_out_rvalid; // @[top.scala 21:25]
  wire [31:0] arbiter_io_lsu_axi_in_araddr; // @[top.scala 21:25]
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
  wire  i_cache_io_to_ifu_arready; // @[top.scala 22:25]
  wire [63:0] i_cache_io_to_ifu_rdata; // @[top.scala 22:25]
  wire  i_cache_io_to_ifu_rvalid; // @[top.scala 22:25]
  wire [31:0] i_cache_io_to_axi_araddr; // @[top.scala 22:25]
  wire [7:0] i_cache_io_to_axi_arlen; // @[top.scala 22:25]
  wire  i_cache_io_to_axi_arvalid; // @[top.scala 22:25]
  wire  i_cache_io_to_axi_rready; // @[top.scala 22:25]
  wire [63:0] i_cache_io_from_axi_rdata; // @[top.scala 22:25]
  wire  i_cache_io_from_axi_rlast; // @[top.scala 22:25]
  wire  i_cache_io_from_axi_rvalid; // @[top.scala 22:25]
  wire  i_cache_io_cache_init; // @[top.scala 22:25]
  wire  i_cache_io_clear_cache; // @[top.scala 22:25]
  wire  d_cache_clock; // @[top.scala 23:25]
  wire  d_cache_reset; // @[top.scala 23:25]
  wire [31:0] d_cache_io_from_lsu_araddr; // @[top.scala 23:25]
  wire  d_cache_io_from_lsu_arvalid; // @[top.scala 23:25]
  wire [31:0] d_cache_io_from_lsu_awaddr; // @[top.scala 23:25]
  wire  d_cache_io_from_lsu_awvalid; // @[top.scala 23:25]
  wire [63:0] d_cache_io_from_lsu_wdata; // @[top.scala 23:25]
  wire [7:0] d_cache_io_from_lsu_wstrb; // @[top.scala 23:25]
  wire  d_cache_io_from_lsu_wvalid; // @[top.scala 23:25]
  wire [63:0] d_cache_io_to_lsu_rdata; // @[top.scala 23:25]
  wire  d_cache_io_to_lsu_rvalid; // @[top.scala 23:25]
  wire  d_cache_io_to_lsu_wready; // @[top.scala 23:25]
  wire [31:0] d_cache_io_to_axi_araddr; // @[top.scala 23:25]
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
  wire [31:0] dpi_flag; // @[top.scala 116:21]
  wire [31:0] dpi_ecall_flag; // @[top.scala 116:21]
  wire [63:0] dpi_pc; // @[top.scala 116:21]
  reg  diff_step; // @[top.scala 113:28]
  wire [63:0] _dpi_io_pc_T = IDU_io_ds_valid ? EXU_io_pc : IDU_io_pc; // @[top.scala 119:96]
  wire [63:0] _dpi_io_pc_T_1 = EXU_io_es_valid ? LSU_io_pc : _dpi_io_pc_T; // @[top.scala 119:72]
  wire [63:0] _dpi_io_pc_T_2 = LSU_io_ms_valid ? WBU_io_pc : _dpi_io_pc_T_1; // @[top.scala 119:48]
  Register Register ( // @[top.scala 15:25]
    .clock(Register_clock),
    .io_raddr1(Register_io_raddr1),
    .io_raddr2(Register_io_raddr2),
    .io_rdata1(Register_io_rdata1),
    .io_rdata2(Register_io_rdata2),
    .io_we(Register_io_we),
    .io_waddr(Register_io_waddr),
    .io_wdata(Register_io_wdata)
  );
  IFU IFU ( // @[top.scala 16:21]
    .clock(IFU_clock),
    .reset(IFU_reset),
    .io_ds_allowin(IFU_io_ds_allowin),
    .io_ds_ready_go(IFU_io_ds_ready_go),
    .io_ds_valid(IFU_io_ds_valid),
    .io_br_taken(IFU_io_br_taken),
    .io_br_target(IFU_io_br_target),
    .io_to_ds_pc(IFU_io_to_ds_pc),
    .io_fs_to_ds_valid(IFU_io_fs_to_ds_valid),
    .io_inst(IFU_io_inst),
    .io_axi_in_arready(IFU_io_axi_in_arready),
    .io_axi_in_rdata(IFU_io_axi_in_rdata),
    .io_axi_in_rvalid(IFU_io_axi_in_rvalid),
    .io_axi_out_araddr(IFU_io_axi_out_araddr),
    .io_axi_out_arvalid(IFU_io_axi_out_arvalid),
    .io_axi_out_rready(IFU_io_axi_out_rready),
    .io_fence(IFU_io_fence),
    .io_clear_cache(IFU_io_clear_cache),
    .io_cache_init(IFU_io_cache_init)
  );
  IDU IDU ( // @[top.scala 17:21]
    .clock(IDU_clock),
    .reset(IDU_reset),
    .io_pc(IDU_io_pc),
    .io_fs_to_ds_valid(IDU_io_fs_to_ds_valid),
    .io_ds_to_es_valid(IDU_io_ds_to_es_valid),
    .io_es_allowin(IDU_io_es_allowin),
    .io_from_fs_inst(IDU_io_from_fs_inst),
    .io_br_taken(IDU_io_br_taken),
    .io_br_target(IDU_io_br_target),
    .io_ds_allowin(IDU_io_ds_allowin),
    .io_ds_ready_go(IDU_io_ds_ready_go),
    .io_fence(IDU_io_fence),
    .io_raddr1(IDU_io_raddr1),
    .io_raddr2(IDU_io_raddr2),
    .io_rdata1(IDU_io_rdata1),
    .io_rdata2(IDU_io_rdata2),
    .io_to_es_pc(IDU_io_to_es_pc),
    .io_ALUop(IDU_io_ALUop),
    .io_src1(IDU_io_src1),
    .io_src2(IDU_io_src2),
    .io_rf_dst(IDU_io_rf_dst),
    .io_store_data(IDU_io_store_data),
    .io_ctrl_sign_reg_write(IDU_io_ctrl_sign_reg_write),
    .io_ctrl_sign_Writemem_en(IDU_io_ctrl_sign_Writemem_en),
    .io_ctrl_sign_Readmem_en(IDU_io_ctrl_sign_Readmem_en),
    .io_ctrl_sign_Wmask(IDU_io_ctrl_sign_Wmask),
    .io_load_type(IDU_io_load_type),
    .io_es_ld(IDU_io_es_ld),
    .io_es_fwd_res(IDU_io_es_fwd_res),
    .io_ms_fwd_res(IDU_io_ms_fwd_res),
    .io_ws_fwd_res(IDU_io_ws_fwd_res),
    .io_es_fwd_ready(IDU_io_es_fwd_ready),
    .io_ms_fwd_ready(IDU_io_ms_fwd_ready),
    .io_es_rf_we(IDU_io_es_rf_we),
    .io_ms_rf_we(IDU_io_ms_rf_we),
    .io_ws_rf_we(IDU_io_ws_rf_we),
    .io_es_valid(IDU_io_es_valid),
    .io_ms_valid(IDU_io_ms_valid),
    .io_ws_valid(IDU_io_ws_valid),
    .io_es_rf_dst(IDU_io_es_rf_dst),
    .io_ms_rf_dst(IDU_io_ms_rf_dst),
    .io_ws_rf_dst(IDU_io_ws_rf_dst),
    .io_ds_valid(IDU_io_ds_valid)
  );
  EXU EXU ( // @[top.scala 18:21]
    .clock(EXU_clock),
    .reset(EXU_reset),
    .io_pc(EXU_io_pc),
    .io_ds_to_es_valid(EXU_io_ds_to_es_valid),
    .io_ms_allowin(EXU_io_ms_allowin),
    .io_es_allowin(EXU_io_es_allowin),
    .io_ALUop(EXU_io_ALUop),
    .io_src1_value(EXU_io_src1_value),
    .io_src2_value(EXU_io_src2_value),
    .io_rf_dst(EXU_io_rf_dst),
    .io_store_data(EXU_io_store_data),
    .io_es_to_ms_valid(EXU_io_es_to_ms_valid),
    .io_load_type(EXU_io_load_type),
    .io_to_ms_pc(EXU_io_to_ms_pc),
    .io_to_ms_alures(EXU_io_to_ms_alures),
    .io_to_ms_store_data(EXU_io_to_ms_store_data),
    .io_to_ms_wen(EXU_io_to_ms_wen),
    .io_to_ms_wstrb(EXU_io_to_ms_wstrb),
    .io_to_ms_ren(EXU_io_to_ms_ren),
    .io_to_ms_maddr(EXU_io_to_ms_maddr),
    .io_to_ms_rf_dst(EXU_io_to_ms_rf_dst),
    .io_to_ms_rf_we(EXU_io_to_ms_rf_we),
    .io_to_ms_load_type(EXU_io_to_ms_load_type),
    .io_ctrl_sign_reg_write(EXU_io_ctrl_sign_reg_write),
    .io_ctrl_sign_Writemem_en(EXU_io_ctrl_sign_Writemem_en),
    .io_ctrl_sign_Readmem_en(EXU_io_ctrl_sign_Readmem_en),
    .io_ctrl_sign_Wmask(EXU_io_ctrl_sign_Wmask),
    .io_es_valid(EXU_io_es_valid),
    .io_es_rf_we(EXU_io_es_rf_we),
    .io_es_rf_dst(EXU_io_es_rf_dst),
    .io_es_fwd_ready(EXU_io_es_fwd_ready),
    .io_es_fwd_res(EXU_io_es_fwd_res),
    .io_es_ld(EXU_io_es_ld)
  );
  LSU LSU ( // @[top.scala 19:21]
    .clock(LSU_clock),
    .reset(LSU_reset),
    .io_pc(LSU_io_pc),
    .io_es_to_ms_valid(LSU_io_es_to_ms_valid),
    .io_ms_allowin(LSU_io_ms_allowin),
    .io_rf_we(LSU_io_rf_we),
    .io_rf_dst(LSU_io_rf_dst),
    .io_alu_res(LSU_io_alu_res),
    .io_store_data(LSU_io_store_data),
    .io_load_type(LSU_io_load_type),
    .io_wen(LSU_io_wen),
    .io_wstrb(LSU_io_wstrb),
    .io_ren(LSU_io_ren),
    .io_maddr(LSU_io_maddr),
    .io_to_ws_pc(LSU_io_to_ws_pc),
    .io_ms_final_res(LSU_io_ms_final_res),
    .io_ms_to_ws_valid(LSU_io_ms_to_ws_valid),
    .io_to_ws_rf_we(LSU_io_to_ws_rf_we),
    .io_to_ws_rf_dst(LSU_io_to_ws_rf_dst),
    .io_ms_valid(LSU_io_ms_valid),
    .io_ms_rf_we(LSU_io_ms_rf_we),
    .io_ms_rf_dst(LSU_io_ms_rf_dst),
    .io_ms_fwd_ready(LSU_io_ms_fwd_ready),
    .io_ms_fwd_res(LSU_io_ms_fwd_res),
    .io_axi_in_rdata(LSU_io_axi_in_rdata),
    .io_axi_in_rvalid(LSU_io_axi_in_rvalid),
    .io_axi_in_wready(LSU_io_axi_in_wready),
    .io_axi_out_araddr(LSU_io_axi_out_araddr),
    .io_axi_out_arvalid(LSU_io_axi_out_arvalid),
    .io_axi_out_awaddr(LSU_io_axi_out_awaddr),
    .io_axi_out_awvalid(LSU_io_axi_out_awvalid),
    .io_axi_out_wdata(LSU_io_axi_out_wdata),
    .io_axi_out_wstrb(LSU_io_axi_out_wstrb),
    .io_axi_out_wvalid(LSU_io_axi_out_wvalid)
  );
  WBU WBU ( // @[top.scala 20:21]
    .clock(WBU_clock),
    .reset(WBU_reset),
    .io_pc(WBU_io_pc),
    .io_ms_to_ws_valid(WBU_io_ms_to_ws_valid),
    .io_ms_final_res(WBU_io_ms_final_res),
    .io_rf_we(WBU_io_rf_we),
    .io_rf_dst(WBU_io_rf_dst),
    .io_we(WBU_io_we),
    .io_waddr(WBU_io_waddr),
    .io_wdata(WBU_io_wdata),
    .io_ws_valid(WBU_io_ws_valid),
    .io_ws_rf_we(WBU_io_ws_rf_we),
    .io_ws_rf_dst(WBU_io_ws_rf_dst),
    .io_ws_fwd_res(WBU_io_ws_fwd_res),
    .io_ws_pc(WBU_io_ws_pc)
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
    .io_lsu_axi_in_araddr(arbiter_io_lsu_axi_in_araddr),
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
    .io_to_ifu_arready(i_cache_io_to_ifu_arready),
    .io_to_ifu_rdata(i_cache_io_to_ifu_rdata),
    .io_to_ifu_rvalid(i_cache_io_to_ifu_rvalid),
    .io_to_axi_araddr(i_cache_io_to_axi_araddr),
    .io_to_axi_arlen(i_cache_io_to_axi_arlen),
    .io_to_axi_arvalid(i_cache_io_to_axi_arvalid),
    .io_to_axi_rready(i_cache_io_to_axi_rready),
    .io_from_axi_rdata(i_cache_io_from_axi_rdata),
    .io_from_axi_rlast(i_cache_io_from_axi_rlast),
    .io_from_axi_rvalid(i_cache_io_from_axi_rvalid),
    .io_cache_init(i_cache_io_cache_init),
    .io_clear_cache(i_cache_io_clear_cache)
  );
  D_CACHE d_cache ( // @[top.scala 23:25]
    .clock(d_cache_clock),
    .reset(d_cache_reset),
    .io_from_lsu_araddr(d_cache_io_from_lsu_araddr),
    .io_from_lsu_arvalid(d_cache_io_from_lsu_arvalid),
    .io_from_lsu_awaddr(d_cache_io_from_lsu_awaddr),
    .io_from_lsu_awvalid(d_cache_io_from_lsu_awvalid),
    .io_from_lsu_wdata(d_cache_io_from_lsu_wdata),
    .io_from_lsu_wstrb(d_cache_io_from_lsu_wstrb),
    .io_from_lsu_wvalid(d_cache_io_from_lsu_wvalid),
    .io_to_lsu_rdata(d_cache_io_to_lsu_rdata),
    .io_to_lsu_rvalid(d_cache_io_to_lsu_rvalid),
    .io_to_lsu_wready(d_cache_io_to_lsu_wready),
    .io_to_axi_araddr(d_cache_io_to_axi_araddr),
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
  DPI dpi ( // @[top.scala 116:21]
    .flag(dpi_flag),
    .ecall_flag(dpi_ecall_flag),
    .pc(dpi_pc)
  );
  assign io_inst = IFU_io_inst; // @[top.scala 112:13]
  assign io_pc = IFU_io_to_ds_pc; // @[top.scala 110:11]
  assign io_step = diff_step; // @[top.scala 115:13]
  assign Register_clock = clock;
  assign Register_io_raddr1 = IDU_io_raddr1; // @[top.scala 56:20]
  assign Register_io_raddr2 = IDU_io_raddr2; // @[top.scala 57:20]
  assign Register_io_we = WBU_io_we; // @[top.scala 106:16]
  assign Register_io_waddr = WBU_io_waddr; // @[top.scala 107:19]
  assign Register_io_wdata = WBU_io_wdata; // @[top.scala 108:19]
  assign IFU_clock = clock;
  assign IFU_reset = reset;
  assign IFU_io_ds_allowin = IDU_io_ds_allowin; // @[top.scala 44:20]
  assign IFU_io_ds_ready_go = IDU_io_ds_ready_go; // @[top.scala 43:21]
  assign IFU_io_ds_valid = IDU_io_ds_valid; // @[top.scala 42:18]
  assign IFU_io_br_taken = IDU_io_br_taken; // @[top.scala 45:18]
  assign IFU_io_br_target = IDU_io_br_target; // @[top.scala 46:19]
  assign IFU_io_axi_in_arready = i_cache_io_to_ifu_arready; // @[top.scala 29:16]
  assign IFU_io_axi_in_rdata = i_cache_io_to_ifu_rdata; // @[top.scala 29:16]
  assign IFU_io_axi_in_rvalid = i_cache_io_to_ifu_rvalid; // @[top.scala 29:16]
  assign IFU_io_fence = IDU_io_fence; // @[top.scala 48:15]
  assign IFU_io_cache_init = i_cache_io_cache_init; // @[top.scala 49:20]
  assign IDU_clock = clock;
  assign IDU_reset = reset;
  assign IDU_io_pc = IFU_io_to_ds_pc; // @[top.scala 52:12]
  assign IDU_io_fs_to_ds_valid = IFU_io_fs_to_ds_valid; // @[top.scala 53:24]
  assign IDU_io_es_allowin = EXU_io_es_allowin; // @[top.scala 54:20]
  assign IDU_io_from_fs_inst = IFU_io_inst; // @[top.scala 55:22]
  assign IDU_io_rdata1 = Register_io_rdata1; // @[top.scala 58:16]
  assign IDU_io_rdata2 = Register_io_rdata2; // @[top.scala 59:16]
  assign IDU_io_es_ld = EXU_io_es_ld; // @[top.scala 75:15]
  assign IDU_io_es_fwd_res = EXU_io_es_fwd_res; // @[top.scala 70:20]
  assign IDU_io_ms_fwd_res = LSU_io_ms_fwd_res; // @[top.scala 72:20]
  assign IDU_io_ws_fwd_res = WBU_io_ws_fwd_res; // @[top.scala 74:20]
  assign IDU_io_es_fwd_ready = EXU_io_es_fwd_ready; // @[top.scala 69:22]
  assign IDU_io_ms_fwd_ready = LSU_io_ms_fwd_ready; // @[top.scala 71:22]
  assign IDU_io_es_rf_we = EXU_io_es_rf_we; // @[top.scala 62:18]
  assign IDU_io_ms_rf_we = LSU_io_ms_rf_we; // @[top.scala 65:18]
  assign IDU_io_ws_rf_we = WBU_io_ws_rf_we; // @[top.scala 68:18]
  assign IDU_io_es_valid = EXU_io_es_valid; // @[top.scala 60:18]
  assign IDU_io_ms_valid = LSU_io_ms_valid; // @[top.scala 63:18]
  assign IDU_io_ws_valid = WBU_io_ws_valid; // @[top.scala 66:18]
  assign IDU_io_es_rf_dst = EXU_io_es_rf_dst; // @[top.scala 61:19]
  assign IDU_io_ms_rf_dst = LSU_io_ms_rf_dst; // @[top.scala 64:19]
  assign IDU_io_ws_rf_dst = WBU_io_ws_rf_dst; // @[top.scala 67:19]
  assign EXU_clock = clock;
  assign EXU_reset = reset;
  assign EXU_io_pc = IDU_io_to_es_pc; // @[top.scala 77:12]
  assign EXU_io_ds_to_es_valid = IDU_io_ds_to_es_valid; // @[top.scala 78:24]
  assign EXU_io_ms_allowin = LSU_io_ms_allowin; // @[top.scala 79:20]
  assign EXU_io_ALUop = IDU_io_ALUop; // @[top.scala 80:15]
  assign EXU_io_src1_value = IDU_io_src1; // @[top.scala 81:20]
  assign EXU_io_src2_value = IDU_io_src2; // @[top.scala 82:20]
  assign EXU_io_rf_dst = IDU_io_rf_dst; // @[top.scala 83:16]
  assign EXU_io_store_data = IDU_io_store_data; // @[top.scala 84:20]
  assign EXU_io_load_type = IDU_io_load_type; // @[top.scala 86:19]
  assign EXU_io_ctrl_sign_reg_write = IDU_io_ctrl_sign_reg_write; // @[top.scala 85:19]
  assign EXU_io_ctrl_sign_Writemem_en = IDU_io_ctrl_sign_Writemem_en; // @[top.scala 85:19]
  assign EXU_io_ctrl_sign_Readmem_en = IDU_io_ctrl_sign_Readmem_en; // @[top.scala 85:19]
  assign EXU_io_ctrl_sign_Wmask = IDU_io_ctrl_sign_Wmask; // @[top.scala 85:19]
  assign LSU_clock = clock;
  assign LSU_reset = reset;
  assign LSU_io_pc = EXU_io_to_ms_pc; // @[top.scala 88:12]
  assign LSU_io_es_to_ms_valid = EXU_io_es_to_ms_valid; // @[top.scala 89:24]
  assign LSU_io_rf_we = EXU_io_to_ms_rf_we; // @[top.scala 91:15]
  assign LSU_io_rf_dst = EXU_io_to_ms_rf_dst; // @[top.scala 92:16]
  assign LSU_io_alu_res = EXU_io_to_ms_alures; // @[top.scala 93:17]
  assign LSU_io_store_data = EXU_io_to_ms_store_data; // @[top.scala 94:20]
  assign LSU_io_load_type = EXU_io_to_ms_load_type; // @[top.scala 99:19]
  assign LSU_io_wen = EXU_io_to_ms_wen; // @[top.scala 95:13]
  assign LSU_io_wstrb = EXU_io_to_ms_wstrb; // @[top.scala 96:15]
  assign LSU_io_ren = EXU_io_to_ms_ren; // @[top.scala 97:13]
  assign LSU_io_maddr = EXU_io_to_ms_maddr; // @[top.scala 98:15]
  assign LSU_io_axi_in_rdata = d_cache_io_to_lsu_rdata; // @[top.scala 34:16]
  assign LSU_io_axi_in_rvalid = d_cache_io_to_lsu_rvalid; // @[top.scala 34:16]
  assign LSU_io_axi_in_wready = d_cache_io_to_lsu_wready; // @[top.scala 34:16]
  assign WBU_clock = clock;
  assign WBU_reset = reset;
  assign WBU_io_pc = LSU_io_to_ws_pc; // @[top.scala 101:12]
  assign WBU_io_ms_to_ws_valid = LSU_io_ms_to_ws_valid; // @[top.scala 102:24]
  assign WBU_io_ms_final_res = LSU_io_ms_final_res; // @[top.scala 103:22]
  assign WBU_io_rf_we = LSU_io_to_ws_rf_we; // @[top.scala 104:15]
  assign WBU_io_rf_dst = LSU_io_to_ws_rf_dst; // @[top.scala 105:16]
  assign arbiter_clock = clock;
  assign arbiter_reset = reset;
  assign arbiter_io_ifu_axi_in_araddr = i_cache_io_to_axi_araddr; // @[top.scala 27:27]
  assign arbiter_io_ifu_axi_in_arlen = i_cache_io_to_axi_arlen; // @[top.scala 27:27]
  assign arbiter_io_ifu_axi_in_arvalid = i_cache_io_to_axi_arvalid; // @[top.scala 27:27]
  assign arbiter_io_ifu_axi_in_rready = i_cache_io_to_axi_rready; // @[top.scala 27:27]
  assign arbiter_io_lsu_axi_in_araddr = d_cache_io_to_axi_araddr; // @[top.scala 32:27]
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
  assign i_cache_io_clear_cache = IFU_io_clear_cache; // @[top.scala 50:28]
  assign d_cache_clock = clock;
  assign d_cache_reset = reset;
  assign d_cache_io_from_lsu_araddr = LSU_io_axi_out_araddr; // @[top.scala 35:25]
  assign d_cache_io_from_lsu_arvalid = LSU_io_axi_out_arvalid; // @[top.scala 35:25]
  assign d_cache_io_from_lsu_awaddr = LSU_io_axi_out_awaddr; // @[top.scala 35:25]
  assign d_cache_io_from_lsu_awvalid = LSU_io_axi_out_awvalid; // @[top.scala 35:25]
  assign d_cache_io_from_lsu_wdata = LSU_io_axi_out_wdata; // @[top.scala 35:25]
  assign d_cache_io_from_lsu_wstrb = LSU_io_axi_out_wstrb; // @[top.scala 35:25]
  assign d_cache_io_from_lsu_wvalid = LSU_io_axi_out_wvalid; // @[top.scala 35:25]
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
  assign dpi_flag = {{31'd0}, IDU_io_ALUop == 32'h2}; // @[top.scala 117:17]
  assign dpi_ecall_flag = {{31'd0}, IDU_io_ALUop == 32'h3d}; // @[top.scala 118:23]
  assign dpi_pc = WBU_io_ws_valid ? WBU_io_ws_pc : _dpi_io_pc_T_2; // @[top.scala 119:21]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 113:28]
      diff_step <= 1'h0; // @[top.scala 113:28]
    end else begin
      diff_step <= WBU_io_ws_valid; // @[top.scala 114:15]
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
  diff_step = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
