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
`endif // RANDOMIZE_REG_INIT
  wire  ifu_step_clock; // @[top.scala 18:26]
  wire  ifu_step_reset; // @[top.scala 18:26]
  wire [63:0] ifu_step_io_pc; // @[top.scala 18:26]
  wire  ifu_step_io_inst_valid; // @[top.scala 18:26]
  wire  ifu_step_io_inst_ready; // @[top.scala 18:26]
  wire [31:0] ifu_step_io_inst; // @[top.scala 18:26]
  wire  idu_step_clock; // @[top.scala 27:26]
  wire  idu_step_reset; // @[top.scala 27:26]
  wire [31:0] idu_step_io_inst; // @[top.scala 27:26]
  wire  idu_step_io_inst_valid; // @[top.scala 27:26]
  wire  idu_step_io_inst_ready; // @[top.scala 27:26]
  wire [31:0] idu_step_io_inst_now; // @[top.scala 27:26]
  wire [4:0] idu_step_io_rs1; // @[top.scala 27:26]
  wire [4:0] idu_step_io_rs2; // @[top.scala 27:26]
  wire [4:0] idu_step_io_rd; // @[top.scala 27:26]
  wire [63:0] idu_step_io_imm; // @[top.scala 27:26]
  wire  idu_step_io_ctrl_sign_reg_write; // @[top.scala 27:26]
  wire  idu_step_io_ctrl_sign_csr_write; // @[top.scala 27:26]
  wire  idu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 27:26]
  wire  idu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 27:26]
  wire  idu_step_io_ctrl_sign_Writemem_en; // @[top.scala 27:26]
  wire  idu_step_io_ctrl_sign_Readmem_en; // @[top.scala 27:26]
  wire [7:0] idu_step_io_ctrl_sign_Wmask; // @[top.scala 27:26]
  wire  exu_step_clock; // @[top.scala 32:26]
  wire  exu_step_reset; // @[top.scala 32:26]
  wire [63:0] exu_step_io_pc; // @[top.scala 32:26]
  wire [63:0] exu_step_io_pc_next; // @[top.scala 32:26]
  wire [31:0] exu_step_io_inst_now; // @[top.scala 32:26]
  wire [4:0] exu_step_io_rs1; // @[top.scala 32:26]
  wire [4:0] exu_step_io_rs2; // @[top.scala 32:26]
  wire [4:0] exu_step_io_rd; // @[top.scala 32:26]
  wire [63:0] exu_step_io_imm; // @[top.scala 32:26]
  wire  exu_step_io_ctrl_sign_reg_write; // @[top.scala 32:26]
  wire  exu_step_io_ctrl_sign_csr_write; // @[top.scala 32:26]
  wire  exu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 32:26]
  wire  exu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 32:26]
  wire  exu_step_io_ctrl_sign_Writemem_en; // @[top.scala 32:26]
  wire  exu_step_io_ctrl_sign_Readmem_en; // @[top.scala 32:26]
  wire [7:0] exu_step_io_ctrl_sign_Wmask; // @[top.scala 32:26]
  wire [63:0] exu_step_io_res2rd; // @[top.scala 32:26]
  wire  exu_step_io_inst_valid; // @[top.scala 32:26]
  wire  exu_step_io_mem_end; // @[top.scala 32:26]
  wire  exu_step_io_mem_flag; // @[top.scala 32:26]
  wire [31:0] dpi_flag; // @[top.scala 44:21]
  wire [31:0] dpi_ecall_flag; // @[top.scala 44:21]
  reg [63:0] pc_now; // @[top.scala 15:25]
  wire  _exu_step_io_inst_valid_T = ifu_step_io_inst_ready & ifu_step_io_inst_valid; // @[top.scala 41:53]
  wire  _pc_now_T_4 = _exu_step_io_inst_valid_T & ~exu_step_io_mem_flag | exu_step_io_mem_flag & exu_step_io_mem_end; // @[top.scala 48:97]
  reg  npc_step; // @[top.scala 50:27]
  IFU_AXI ifu_step ( // @[top.scala 18:26]
    .clock(ifu_step_clock),
    .reset(ifu_step_reset),
    .io_pc(ifu_step_io_pc),
    .io_inst_valid(ifu_step_io_inst_valid),
    .io_inst_ready(ifu_step_io_inst_ready),
    .io_inst(ifu_step_io_inst)
  );
  IDU idu_step ( // @[top.scala 27:26]
    .clock(idu_step_clock),
    .reset(idu_step_reset),
    .io_inst(idu_step_io_inst),
    .io_inst_valid(idu_step_io_inst_valid),
    .io_inst_ready(idu_step_io_inst_ready),
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
  EXU_AXI exu_step ( // @[top.scala 32:26]
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
    .io_mem_end(exu_step_io_mem_end),
    .io_mem_flag(exu_step_io_mem_flag)
  );
  DPI dpi ( // @[top.scala 44:21]
    .flag(dpi_flag),
    .ecall_flag(dpi_ecall_flag)
  );
  assign io_inst = ifu_step_io_inst; // @[top.scala 20:13]
  assign io_pc = pc_now; // @[top.scala 16:11]
  assign io_pc_next = exu_step_io_pc_next; // @[top.scala 49:16]
  assign io_outval = exu_step_io_res2rd; // @[top.scala 42:15]
  assign io_step = npc_step; // @[top.scala 52:13]
  assign ifu_step_clock = clock;
  assign ifu_step_reset = reset;
  assign ifu_step_io_pc = pc_now; // @[top.scala 19:20]
  assign ifu_step_io_inst_ready = idu_step_io_inst_ready; // @[top.scala 31:28]
  assign idu_step_clock = clock;
  assign idu_step_reset = reset;
  assign idu_step_io_inst = ifu_step_io_inst; // @[top.scala 29:22]
  assign idu_step_io_inst_valid = ifu_step_io_inst_valid; // @[top.scala 30:28]
  assign exu_step_clock = clock;
  assign exu_step_reset = reset;
  assign exu_step_io_pc = pc_now; // @[top.scala 33:20]
  assign exu_step_io_inst_now = idu_step_io_inst_now; // @[top.scala 34:26]
  assign exu_step_io_rs1 = idu_step_io_rs1; // @[top.scala 36:21]
  assign exu_step_io_rs2 = idu_step_io_rs2; // @[top.scala 37:21]
  assign exu_step_io_rd = idu_step_io_rd; // @[top.scala 38:20]
  assign exu_step_io_imm = idu_step_io_imm; // @[top.scala 39:21]
  assign exu_step_io_ctrl_sign_reg_write = idu_step_io_ctrl_sign_reg_write; // @[top.scala 40:27]
  assign exu_step_io_ctrl_sign_csr_write = idu_step_io_ctrl_sign_csr_write; // @[top.scala 40:27]
  assign exu_step_io_ctrl_sign_src2_is_imm = idu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 40:27]
  assign exu_step_io_ctrl_sign_src1_is_pc = idu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 40:27]
  assign exu_step_io_ctrl_sign_Writemem_en = idu_step_io_ctrl_sign_Writemem_en; // @[top.scala 40:27]
  assign exu_step_io_ctrl_sign_Readmem_en = idu_step_io_ctrl_sign_Readmem_en; // @[top.scala 40:27]
  assign exu_step_io_ctrl_sign_Wmask = idu_step_io_ctrl_sign_Wmask; // @[top.scala 40:27]
  assign exu_step_io_inst_valid = ifu_step_io_inst_ready & ifu_step_io_inst_valid; // @[top.scala 41:53]
  assign dpi_flag = {{31'd0}, idu_step_io_inst_now == 32'h2}; // @[top.scala 45:17]
  assign dpi_ecall_flag = {{31'd0}, idu_step_io_inst_now == 32'h3d}; // @[top.scala 46:23]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 15:25]
      pc_now <= 64'h80000000; // @[top.scala 15:25]
    end else if (_exu_step_io_inst_valid_T & ~exu_step_io_mem_flag | exu_step_io_mem_flag & exu_step_io_mem_end) begin // @[top.scala 48:18]
      pc_now <= exu_step_io_pc_next;
    end
    if (reset) begin // @[top.scala 50:27]
      npc_step <= 1'h0; // @[top.scala 50:27]
    end else begin
      npc_step <= _pc_now_T_4; // @[top.scala 51:14]
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
  _RAND_0 = {2{`RANDOM}};
  pc_now = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  npc_step = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
