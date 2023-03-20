module top(
  input         clock,
  input         reset,
  input  [31:0] io_inst,
  output [63:0] io_pc,
  output [63:0] io_outval
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] ifu_step_io_ipc; // @[top.scala 13:26]
  wire [63:0] ifu_step_io_opc; // @[top.scala 13:26]
  wire [31:0] idu_step_io_inst; // @[top.scala 18:26]
  wire [31:0] idu_step_io_insttype; // @[top.scala 18:26]
  wire [4:0] idu_step_io_src1; // @[top.scala 18:26]
  wire [4:0] idu_step_io_rd; // @[top.scala 18:26]
  wire [63:0] idu_step_io_imm; // @[top.scala 18:26]
  wire  idu_step_io_reg_write; // @[top.scala 18:26]
  wire  exu_step_clock; // @[top.scala 20:26]
  wire [31:0] exu_step_io_insttype; // @[top.scala 20:26]
  wire [4:0] exu_step_io_src1; // @[top.scala 20:26]
  wire [4:0] exu_step_io_rd; // @[top.scala 20:26]
  wire [63:0] exu_step_io_imm; // @[top.scala 20:26]
  wire  exu_step_io_reg_write; // @[top.scala 20:26]
  wire [63:0] exu_step_io_res2rd; // @[top.scala 20:26]
  wire [31:0] dpi_flag; // @[top.scala 28:21]
  reg [63:0] pc_now; // @[top.scala 11:25]
  wire [63:0] _pc_now_T_1 = pc_now + 64'h4; // @[top.scala 31:22]
  IFU ifu_step ( // @[top.scala 13:26]
    .io_ipc(ifu_step_io_ipc),
    .io_opc(ifu_step_io_opc)
  );
  IDU idu_step ( // @[top.scala 18:26]
    .io_inst(idu_step_io_inst),
    .io_insttype(idu_step_io_insttype),
    .io_src1(idu_step_io_src1),
    .io_rd(idu_step_io_rd),
    .io_imm(idu_step_io_imm),
    .io_reg_write(idu_step_io_reg_write)
  );
  EXU exu_step ( // @[top.scala 20:26]
    .clock(exu_step_clock),
    .io_insttype(exu_step_io_insttype),
    .io_src1(exu_step_io_src1),
    .io_rd(exu_step_io_rd),
    .io_imm(exu_step_io_imm),
    .io_reg_write(exu_step_io_reg_write),
    .io_res2rd(exu_step_io_res2rd)
  );
  DPI dpi ( // @[top.scala 28:21]
    .flag(dpi_flag)
  );
  assign io_pc = ifu_step_io_opc; // @[top.scala 15:11]
  assign io_outval = exu_step_io_res2rd; // @[top.scala 27:15]
  assign ifu_step_io_ipc = pc_now; // @[top.scala 14:21]
  assign idu_step_io_inst = io_inst; // @[top.scala 19:22]
  assign exu_step_clock = clock;
  assign exu_step_io_insttype = idu_step_io_insttype; // @[top.scala 21:26]
  assign exu_step_io_src1 = idu_step_io_src1; // @[top.scala 23:22]
  assign exu_step_io_rd = idu_step_io_rd; // @[top.scala 25:20]
  assign exu_step_io_imm = idu_step_io_imm; // @[top.scala 26:21]
  assign exu_step_io_reg_write = idu_step_io_reg_write; // @[top.scala 22:27]
  assign dpi_flag = {{31'd0}, idu_step_io_insttype == 32'h2}; // @[top.scala 29:17]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 11:25]
      pc_now <= 64'h80000000; // @[top.scala 11:25]
    end else begin
      pc_now <= _pc_now_T_1; // @[top.scala 31:12]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"%x\n",idu_step_io_insttype); // @[top.scala 30:11]
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
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule



