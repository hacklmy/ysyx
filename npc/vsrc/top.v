module top(
  input         clock,
  input         reset,
  output [31:0] io_inst,
  output [63:0] io_pc,
  output        io_step
);
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
  wire  IFU_io_br_taken; // @[top.scala 16:21]
  wire [63:0] IFU_io_br_target; // @[top.scala 16:21]
  wire  IFU_io_br_taken_cancel; // @[top.scala 16:21]
  wire [63:0] IFU_io_to_ds_pc; // @[top.scala 16:21]
  wire  IFU_io_fs_to_ds_valid; // @[top.scala 16:21]
  wire [31:0] IFU_io_inst; // @[top.scala 16:21]
  wire  IDU_clock; // @[top.scala 17:21]
  wire  IDU_reset; // @[top.scala 17:21]
  wire [63:0] IDU_io_pc; // @[top.scala 17:21]
  wire  IDU_io_fs_to_ds_valid; // @[top.scala 17:21]
  wire  IDU_io_ds_to_es_valid; // @[top.scala 17:21]
  wire [31:0] IDU_io_from_fs_inst; // @[top.scala 17:21]
  wire  IDU_io_br_taken; // @[top.scala 17:21]
  wire [63:0] IDU_io_br_target; // @[top.scala 17:21]
  wire  IDU_io_br_taken_cancel; // @[top.scala 17:21]
  wire  IDU_io_ds_allowin; // @[top.scala 17:21]
  wire [4:0] IDU_io_raddr1; // @[top.scala 17:21]
  wire [4:0] IDU_io_raddr2; // @[top.scala 17:21]
  wire [63:0] IDU_io_rdata1; // @[top.scala 17:21]
  wire [63:0] IDU_io_rdata2; // @[top.scala 17:21]
  wire [63:0] IDU_io_to_es_pc; // @[top.scala 17:21]
  wire [31:0] IDU_io_inst_now; // @[top.scala 17:21]
  wire [63:0] IDU_io_src1; // @[top.scala 17:21]
  wire [63:0] IDU_io_src2; // @[top.scala 17:21]
  wire [4:0] IDU_io_rf_dst; // @[top.scala 17:21]
  wire [63:0] IDU_io_store_data; // @[top.scala 17:21]
  wire  IDU_io_ctrl_sign_reg_write; // @[top.scala 17:21]
  wire  IDU_io_ctrl_sign_Writemem_en; // @[top.scala 17:21]
  wire  IDU_io_ctrl_sign_Readmem_en; // @[top.scala 17:21]
  wire [7:0] IDU_io_ctrl_sign_Wmask; // @[top.scala 17:21]
  wire  IDU_io_es_rf_we; // @[top.scala 17:21]
  wire  IDU_io_ms_rf_we; // @[top.scala 17:21]
  wire  IDU_io_ws_rf_we; // @[top.scala 17:21]
  wire  IDU_io_es_valid; // @[top.scala 17:21]
  wire  IDU_io_ms_valid; // @[top.scala 17:21]
  wire  IDU_io_ws_valid; // @[top.scala 17:21]
  wire [4:0] IDU_io_es_rf_dst; // @[top.scala 17:21]
  wire [4:0] IDU_io_ms_rf_dst; // @[top.scala 17:21]
  wire [4:0] IDU_io_ws_rf_dst; // @[top.scala 17:21]
  wire  EXU_clock; // @[top.scala 18:21]
  wire  EXU_reset; // @[top.scala 18:21]
  wire [63:0] EXU_io_pc; // @[top.scala 18:21]
  wire  EXU_io_ds_to_es_valid; // @[top.scala 18:21]
  wire [31:0] EXU_io_inst_now; // @[top.scala 18:21]
  wire [4:0] EXU_io_src1_value; // @[top.scala 18:21]
  wire [4:0] EXU_io_src2_value; // @[top.scala 18:21]
  wire [4:0] EXU_io_rf_dst; // @[top.scala 18:21]
  wire [63:0] EXU_io_store_data; // @[top.scala 18:21]
  wire  EXU_io_es_to_ms_valid; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_pc; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_alures; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_store_data; // @[top.scala 18:21]
  wire  EXU_io_to_ms_wen; // @[top.scala 18:21]
  wire [7:0] EXU_io_to_ms_wstrb; // @[top.scala 18:21]
  wire  EXU_io_to_ms_ren; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_maddr; // @[top.scala 18:21]
  wire [4:0] EXU_io_to_ms_rf_dst; // @[top.scala 18:21]
  wire  EXU_io_to_ms_rf_we; // @[top.scala 18:21]
  wire  EXU_io_ctrl_sign_reg_write; // @[top.scala 18:21]
  wire  EXU_io_ctrl_sign_Writemem_en; // @[top.scala 18:21]
  wire  EXU_io_ctrl_sign_Readmem_en; // @[top.scala 18:21]
  wire [7:0] EXU_io_ctrl_sign_Wmask; // @[top.scala 18:21]
  wire  EXU_io_es_valid; // @[top.scala 18:21]
  wire  EXU_io_es_rf_we; // @[top.scala 18:21]
  wire [4:0] EXU_io_es_rf_dst; // @[top.scala 18:21]
  wire  LSU_clock; // @[top.scala 19:21]
  wire  LSU_reset; // @[top.scala 19:21]
  wire [63:0] LSU_io_pc; // @[top.scala 19:21]
  wire  LSU_io_es_to_ms_valid; // @[top.scala 19:21]
  wire  LSU_io_rf_we; // @[top.scala 19:21]
  wire [4:0] LSU_io_rf_dst; // @[top.scala 19:21]
  wire [63:0] LSU_io_alu_res; // @[top.scala 19:21]
  wire [63:0] LSU_io_store_data; // @[top.scala 19:21]
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
  wire [63:0] WBU_io_ws_pc; // @[top.scala 20:21]
  wire [31:0] dpi_flag; // @[top.scala 82:21]
  wire [31:0] dpi_ecall_flag; // @[top.scala 82:21]
  wire [63:0] dpi_pc; // @[top.scala 82:21]
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
    .io_br_taken(IFU_io_br_taken),
    .io_br_target(IFU_io_br_target),
    .io_br_taken_cancel(IFU_io_br_taken_cancel),
    .io_to_ds_pc(IFU_io_to_ds_pc),
    .io_fs_to_ds_valid(IFU_io_fs_to_ds_valid),
    .io_inst(IFU_io_inst)
  );
  IDU IDU ( // @[top.scala 17:21]
    .clock(IDU_clock),
    .reset(IDU_reset),
    .io_pc(IDU_io_pc),
    .io_fs_to_ds_valid(IDU_io_fs_to_ds_valid),
    .io_ds_to_es_valid(IDU_io_ds_to_es_valid),
    .io_from_fs_inst(IDU_io_from_fs_inst),
    .io_br_taken(IDU_io_br_taken),
    .io_br_target(IDU_io_br_target),
    .io_br_taken_cancel(IDU_io_br_taken_cancel),
    .io_ds_allowin(IDU_io_ds_allowin),
    .io_raddr1(IDU_io_raddr1),
    .io_raddr2(IDU_io_raddr2),
    .io_rdata1(IDU_io_rdata1),
    .io_rdata2(IDU_io_rdata2),
    .io_to_es_pc(IDU_io_to_es_pc),
    .io_inst_now(IDU_io_inst_now),
    .io_src1(IDU_io_src1),
    .io_src2(IDU_io_src2),
    .io_rf_dst(IDU_io_rf_dst),
    .io_store_data(IDU_io_store_data),
    .io_ctrl_sign_reg_write(IDU_io_ctrl_sign_reg_write),
    .io_ctrl_sign_Writemem_en(IDU_io_ctrl_sign_Writemem_en),
    .io_ctrl_sign_Readmem_en(IDU_io_ctrl_sign_Readmem_en),
    .io_ctrl_sign_Wmask(IDU_io_ctrl_sign_Wmask),
    .io_es_rf_we(IDU_io_es_rf_we),
    .io_ms_rf_we(IDU_io_ms_rf_we),
    .io_ws_rf_we(IDU_io_ws_rf_we),
    .io_es_valid(IDU_io_es_valid),
    .io_ms_valid(IDU_io_ms_valid),
    .io_ws_valid(IDU_io_ws_valid),
    .io_es_rf_dst(IDU_io_es_rf_dst),
    .io_ms_rf_dst(IDU_io_ms_rf_dst),
    .io_ws_rf_dst(IDU_io_ws_rf_dst)
  );
  EXU EXU ( // @[top.scala 18:21]
    .clock(EXU_clock),
    .reset(EXU_reset),
    .io_pc(EXU_io_pc),
    .io_ds_to_es_valid(EXU_io_ds_to_es_valid),
    .io_inst_now(EXU_io_inst_now),
    .io_src1_value(EXU_io_src1_value),
    .io_src2_value(EXU_io_src2_value),
    .io_rf_dst(EXU_io_rf_dst),
    .io_store_data(EXU_io_store_data),
    .io_es_to_ms_valid(EXU_io_es_to_ms_valid),
    .io_to_ms_pc(EXU_io_to_ms_pc),
    .io_to_ms_alures(EXU_io_to_ms_alures),
    .io_to_ms_store_data(EXU_io_to_ms_store_data),
    .io_to_ms_wen(EXU_io_to_ms_wen),
    .io_to_ms_wstrb(EXU_io_to_ms_wstrb),
    .io_to_ms_ren(EXU_io_to_ms_ren),
    .io_to_ms_maddr(EXU_io_to_ms_maddr),
    .io_to_ms_rf_dst(EXU_io_to_ms_rf_dst),
    .io_to_ms_rf_we(EXU_io_to_ms_rf_we),
    .io_ctrl_sign_reg_write(EXU_io_ctrl_sign_reg_write),
    .io_ctrl_sign_Writemem_en(EXU_io_ctrl_sign_Writemem_en),
    .io_ctrl_sign_Readmem_en(EXU_io_ctrl_sign_Readmem_en),
    .io_ctrl_sign_Wmask(EXU_io_ctrl_sign_Wmask),
    .io_es_valid(EXU_io_es_valid),
    .io_es_rf_we(EXU_io_es_rf_we),
    .io_es_rf_dst(EXU_io_es_rf_dst)
  );
  LSU LSU ( // @[top.scala 19:21]
    .clock(LSU_clock),
    .reset(LSU_reset),
    .io_pc(LSU_io_pc),
    .io_es_to_ms_valid(LSU_io_es_to_ms_valid),
    .io_rf_we(LSU_io_rf_we),
    .io_rf_dst(LSU_io_rf_dst),
    .io_alu_res(LSU_io_alu_res),
    .io_store_data(LSU_io_store_data),
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
    .io_ms_rf_dst(LSU_io_ms_rf_dst)
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
    .io_ws_pc(WBU_io_ws_pc)
  );
  DPI dpi ( // @[top.scala 82:21]
    .flag(dpi_flag),
    .ecall_flag(dpi_ecall_flag),
    .pc(dpi_pc)
  );
  assign io_inst = IFU_io_inst; // @[top.scala 81:13]
  assign io_pc = IFU_io_to_ds_pc; // @[top.scala 79:11]
  assign io_step = WBU_io_ws_valid; // @[top.scala 80:13]
  assign Register_clock = clock;
  assign Register_io_raddr1 = IDU_io_raddr1; // @[top.scala 34:20]
  assign Register_io_raddr2 = IDU_io_raddr2; // @[top.scala 35:20]
  assign Register_io_we = WBU_io_we; // @[top.scala 75:16]
  assign Register_io_waddr = WBU_io_waddr; // @[top.scala 76:19]
  assign Register_io_wdata = WBU_io_wdata; // @[top.scala 77:19]
  assign IFU_clock = clock;
  assign IFU_reset = reset;
  assign IFU_io_ds_allowin = IDU_io_ds_allowin; // @[top.scala 25:20]
  assign IFU_io_br_taken = IDU_io_br_taken; // @[top.scala 26:18]
  assign IFU_io_br_target = IDU_io_br_target; // @[top.scala 27:19]
  assign IFU_io_br_taken_cancel = IDU_io_br_taken_cancel; // @[top.scala 28:25]
  assign IDU_clock = clock;
  assign IDU_reset = reset;
  assign IDU_io_pc = IFU_io_to_ds_pc; // @[top.scala 30:12]
  assign IDU_io_fs_to_ds_valid = IFU_io_fs_to_ds_valid; // @[top.scala 31:24]
  assign IDU_io_from_fs_inst = IFU_io_inst; // @[top.scala 33:22]
  assign IDU_io_rdata1 = Register_io_rdata1; // @[top.scala 36:16]
  assign IDU_io_rdata2 = Register_io_rdata2; // @[top.scala 37:16]
  assign IDU_io_es_rf_we = EXU_io_es_rf_we; // @[top.scala 40:18]
  assign IDU_io_ms_rf_we = LSU_io_ms_rf_we; // @[top.scala 43:18]
  assign IDU_io_ws_rf_we = WBU_io_ws_rf_we; // @[top.scala 46:18]
  assign IDU_io_es_valid = EXU_io_es_valid; // @[top.scala 38:18]
  assign IDU_io_ms_valid = LSU_io_ms_valid; // @[top.scala 41:18]
  assign IDU_io_ws_valid = WBU_io_ws_valid; // @[top.scala 44:18]
  assign IDU_io_es_rf_dst = EXU_io_es_rf_dst; // @[top.scala 39:19]
  assign IDU_io_ms_rf_dst = LSU_io_ms_rf_dst; // @[top.scala 42:19]
  assign IDU_io_ws_rf_dst = WBU_io_ws_rf_dst; // @[top.scala 45:19]
  assign EXU_clock = clock;
  assign EXU_reset = reset;
  assign EXU_io_pc = IDU_io_to_es_pc; // @[top.scala 48:12]
  assign EXU_io_ds_to_es_valid = IDU_io_ds_to_es_valid; // @[top.scala 49:24]
  assign EXU_io_inst_now = IDU_io_inst_now; // @[top.scala 51:18]
  assign EXU_io_src1_value = IDU_io_src1[4:0]; // @[top.scala 52:20]
  assign EXU_io_src2_value = IDU_io_src2[4:0]; // @[top.scala 53:20]
  assign EXU_io_rf_dst = IDU_io_rf_dst; // @[top.scala 54:16]
  assign EXU_io_store_data = IDU_io_store_data; // @[top.scala 55:20]
  assign EXU_io_ctrl_sign_reg_write = IDU_io_ctrl_sign_reg_write; // @[top.scala 56:19]
  assign EXU_io_ctrl_sign_Writemem_en = IDU_io_ctrl_sign_Writemem_en; // @[top.scala 56:19]
  assign EXU_io_ctrl_sign_Readmem_en = IDU_io_ctrl_sign_Readmem_en; // @[top.scala 56:19]
  assign EXU_io_ctrl_sign_Wmask = IDU_io_ctrl_sign_Wmask; // @[top.scala 56:19]
  assign LSU_clock = clock;
  assign LSU_reset = reset;
  assign LSU_io_pc = EXU_io_to_ms_pc; // @[top.scala 58:12]
  assign LSU_io_es_to_ms_valid = EXU_io_es_to_ms_valid; // @[top.scala 59:24]
  assign LSU_io_rf_we = EXU_io_to_ms_rf_we; // @[top.scala 61:15]
  assign LSU_io_rf_dst = EXU_io_to_ms_rf_dst; // @[top.scala 62:16]
  assign LSU_io_alu_res = EXU_io_to_ms_alures; // @[top.scala 63:17]
  assign LSU_io_store_data = EXU_io_to_ms_store_data; // @[top.scala 64:20]
  assign LSU_io_wen = EXU_io_to_ms_wen; // @[top.scala 65:13]
  assign LSU_io_wstrb = EXU_io_to_ms_wstrb; // @[top.scala 66:15]
  assign LSU_io_ren = EXU_io_to_ms_ren; // @[top.scala 67:13]
  assign LSU_io_maddr = EXU_io_to_ms_maddr; // @[top.scala 68:15]
  assign WBU_clock = clock;
  assign WBU_reset = reset;
  assign WBU_io_pc = LSU_io_to_ws_pc; // @[top.scala 70:12]
  assign WBU_io_ms_to_ws_valid = LSU_io_ms_to_ws_valid; // @[top.scala 71:24]
  assign WBU_io_ms_final_res = LSU_io_ms_final_res; // @[top.scala 72:22]
  assign WBU_io_rf_we = LSU_io_to_ws_rf_we; // @[top.scala 73:15]
  assign WBU_io_rf_dst = LSU_io_to_ws_rf_dst; // @[top.scala 74:16]
  assign dpi_flag = {{31'd0}, IDU_io_inst_now == 32'h2}; // @[top.scala 83:17]
  assign dpi_ecall_flag = {{31'd0}, IDU_io_inst_now == 32'h3d}; // @[top.scala 84:23]
  assign dpi_pc = WBU_io_ws_pc; // @[top.scala 85:15]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"dpi_pc:%x\n\n",dpi_pc); // @[top.scala 86:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
