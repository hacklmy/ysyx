module top(
  input         clock,
  input         reset,
  output [31:0] io_inst,
  output [63:0] io_pc,
  output [63:0] io_pc_next,
  output [63:0] io_outval
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] ifu_step_io_pc; // @[top.scala 17:26]
  wire [31:0] ifu_step_io_inst; // @[top.scala 17:26]
  wire [31:0] idu_step_io_inst; // @[top.scala 22:26]
  wire [31:0] idu_step_io_inst_now; // @[top.scala 22:26]
  wire [4:0] idu_step_io_rs1; // @[top.scala 22:26]
  wire [4:0] idu_step_io_rs2; // @[top.scala 22:26]
  wire [4:0] idu_step_io_rd; // @[top.scala 22:26]
  wire [63:0] idu_step_io_imm; // @[top.scala 22:26]
  wire  idu_step_io_ctrl_sign_reg_write; // @[top.scala 22:26]
  wire  idu_step_io_ctrl_sign_csr_write; // @[top.scala 22:26]
  wire  idu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 22:26]
  wire  idu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 22:26]
  wire  idu_step_io_ctrl_sign_Writemem_en; // @[top.scala 22:26]
  wire [7:0] idu_step_io_ctrl_sign_Wmask; // @[top.scala 22:26]
  wire  exu_step_clock; // @[top.scala 25:26]
  wire [63:0] exu_step_io_pc; // @[top.scala 25:26]
  wire [63:0] exu_step_io_pc_next; // @[top.scala 25:26]
  wire [31:0] exu_step_io_inst_now; // @[top.scala 25:26]
  wire [4:0] exu_step_io_rs1; // @[top.scala 25:26]
  wire [4:0] exu_step_io_rs2; // @[top.scala 25:26]
  wire [4:0] exu_step_io_rd; // @[top.scala 25:26]
  wire [63:0] exu_step_io_imm; // @[top.scala 25:26]
  wire  exu_step_io_ctrl_sign_reg_write; // @[top.scala 25:26]
  wire  exu_step_io_ctrl_sign_csr_write; // @[top.scala 25:26]
  wire  exu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 25:26]
  wire  exu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 25:26]
  wire  exu_step_io_ctrl_sign_Writemem_en; // @[top.scala 25:26]
  wire [7:0] exu_step_io_ctrl_sign_Wmask; // @[top.scala 25:26]
  wire [63:0] exu_step_io_res2rd; // @[top.scala 25:26]
  wire [31:0] dpi_flag; // @[top.scala 35:21]
  reg [63:0] pc_now; // @[top.scala 14:25]
  IFU ifu_step ( // @[top.scala 17:26]
    .io_pc(ifu_step_io_pc),
    .io_inst(ifu_step_io_inst)
  );
  IDU idu_step ( // @[top.scala 22:26]
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
    .io_ctrl_sign_Wmask(idu_step_io_ctrl_sign_Wmask)
  );
  EXU exu_step ( // @[top.scala 25:26]
    .clock(exu_step_clock),
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
    .io_ctrl_sign_Wmask(exu_step_io_ctrl_sign_Wmask),
    .io_res2rd(exu_step_io_res2rd)
  );
  DPI dpi ( // @[top.scala 35:21]
    .flag(dpi_flag)
  );
  assign io_inst = ifu_step_io_inst; // @[top.scala 19:13]
  assign io_pc = pc_now; // @[top.scala 15:11]
  assign io_pc_next = exu_step_io_pc_next; // @[top.scala 39:16]
  assign io_outval = exu_step_io_res2rd; // @[top.scala 34:15]
  assign ifu_step_io_pc = pc_now; // @[top.scala 18:20]
  assign idu_step_io_inst = ifu_step_io_inst; // @[top.scala 24:22]
  assign exu_step_clock = clock;
  assign exu_step_io_pc = pc_now; // @[top.scala 26:20]
  assign exu_step_io_inst_now = idu_step_io_inst_now; // @[top.scala 27:26]
  assign exu_step_io_rs1 = idu_step_io_rs1; // @[top.scala 29:21]
  assign exu_step_io_rs2 = idu_step_io_rs2; // @[top.scala 30:21]
  assign exu_step_io_rd = idu_step_io_rd; // @[top.scala 31:20]
  assign exu_step_io_imm = idu_step_io_imm; // @[top.scala 32:21]
  assign exu_step_io_ctrl_sign_reg_write = idu_step_io_ctrl_sign_reg_write; // @[top.scala 33:27]
  assign exu_step_io_ctrl_sign_csr_write = idu_step_io_ctrl_sign_csr_write; // @[top.scala 33:27]
  assign exu_step_io_ctrl_sign_src2_is_imm = idu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 33:27]
  assign exu_step_io_ctrl_sign_src1_is_pc = idu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 33:27]
  assign exu_step_io_ctrl_sign_Writemem_en = idu_step_io_ctrl_sign_Writemem_en; // @[top.scala 33:27]
  assign exu_step_io_ctrl_sign_Wmask = idu_step_io_ctrl_sign_Wmask; // @[top.scala 33:27]
  assign dpi_flag = {{31'd0}, idu_step_io_inst_now == 32'h2}; // @[top.scala 36:17]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 14:25]
      pc_now <= 64'h80000000; // @[top.scala 14:25]
    end else begin
      pc_now <= exu_step_io_pc_next; // @[top.scala 38:12]
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
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
