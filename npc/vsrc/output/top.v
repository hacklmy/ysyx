module IFU(
  input  [63:0] io_ipc,
  output [63:0] io_opc
);
  assign io_opc = io_ipc; // @[IFU.scala 11:12]
endmodule
module IDU(
  input  [31:0] io_inst,
  output [31:0] io_inst_now,
  output [4:0]  io_rs1,
  output [4:0]  io_rs2,
  output [4:0]  io_rd,
  output [63:0] io_imm,
  output        io_ctrl_sign_reg_write,
  output        io_ctrl_sign_src2_is_imm,
  output        io_ctrl_sign_src1_is_pc
);
  wire [4:0] rd = io_inst[11:7]; // @[IDU.scala 76:15]
  wire [31:0] _inst_type_T = io_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_1 = 32'h13 == _inst_type_T; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_2 = io_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_3 = 32'h17 == _inst_type_T_2; // @[Lookup.scala 31:38]
  wire  _inst_type_T_5 = 32'h37 == _inst_type_T_2; // @[Lookup.scala 31:38]
  wire  _inst_type_T_7 = 32'h6f == _inst_type_T_2; // @[Lookup.scala 31:38]
  wire  _inst_type_T_9 = 32'h67 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_11 = 32'h3023 == _inst_type_T; // @[Lookup.scala 31:38]
  wire [6:0] _inst_type_T_12 = _inst_type_T_11 ? 7'h44 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_13 = _inst_type_T_9 ? 7'h40 : _inst_type_T_12; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_14 = _inst_type_T_7 ? 7'h43 : _inst_type_T_13; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_15 = _inst_type_T_5 ? 7'h42 : _inst_type_T_14; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_16 = _inst_type_T_3 ? 7'h42 : _inst_type_T_15; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_17 = _inst_type_T_1 ? 7'h40 : _inst_type_T_16; // @[Lookup.scala 34:39]
  wire [11:0] imm_imm = io_inst[31:20]; // @[IDU.scala 20:23]
  wire [51:0] _imm_T_2 = imm_imm[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_3 = {_imm_T_2,imm_imm}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_1 = {io_inst[31],io_inst[19:12],io_inst[20],io_inst[30:21]}; // @[Cat.scala 31:58]
  wire [42:0] _imm_T_6 = imm_imm_1[19] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_7 = {_imm_T_6,io_inst[31],io_inst[19:12],io_inst[20],io_inst[30:21],1'h0}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_2 = io_inst[31:12]; // @[IDU.scala 24:23]
  wire [31:0] _imm_T_10 = imm_imm_2[19] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_12 = {_imm_T_10,imm_imm_2,12'h0}; // @[Cat.scala 31:58]
  wire [11:0] imm_imm_3 = {io_inst[31:25],rd}; // @[Cat.scala 31:58]
  wire [51:0] _imm_T_15 = imm_imm_3[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_16 = {_imm_T_15,io_inst[31:25],rd}; // @[Cat.scala 31:58]
  wire [31:0] inst_type = {{25'd0}, _inst_type_T_17}; // @[IDU.scala 63:25 78:15]
  wire [63:0] _imm_T_18 = 32'h40 == inst_type ? _imm_T_3 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_20 = 32'h43 == inst_type ? _imm_T_7 : _imm_T_18; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_22 = 32'h42 == inst_type ? _imm_T_12 : _imm_T_20; // @[Mux.scala 81:58]
  wire  _inst_now_T_3 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
  wire [2:0] _inst_now_T_14 = _inst_type_T_11 ? 3'h7 : 3'h0; // @[Lookup.scala 34:39]
  wire [2:0] _inst_now_T_15 = _inst_type_T_9 ? 3'h6 : _inst_now_T_14; // @[Lookup.scala 34:39]
  wire [2:0] _inst_now_T_16 = _inst_type_T_7 ? 3'h5 : _inst_now_T_15; // @[Lookup.scala 34:39]
  wire [2:0] _inst_now_T_17 = _inst_type_T_5 ? 3'h4 : _inst_now_T_16; // @[Lookup.scala 34:39]
  wire [2:0] _inst_now_T_18 = _inst_type_T_3 ? 3'h3 : _inst_now_T_17; // @[Lookup.scala 34:39]
  wire [2:0] _inst_now_T_19 = _inst_now_T_3 ? 3'h2 : _inst_now_T_18; // @[Lookup.scala 34:39]
  wire [2:0] _inst_now_T_20 = _inst_type_T_1 ? 3'h1 : _inst_now_T_19; // @[Lookup.scala 34:39]
  wire  _reg_write_T_4 = _inst_type_T_11 ? 1'h0 : 1'h1; // @[Lookup.scala 34:39]
  assign io_inst_now = {{29'd0}, _inst_now_T_20}; // @[IDU.scala 62:24 94:14]
  assign io_rs1 = io_inst[19:15]; // @[IDU.scala 75:16]
  assign io_rs2 = io_inst[24:20]; // @[IDU.scala 74:16]
  assign io_rd = io_inst[11:7]; // @[IDU.scala 76:15]
  assign io_imm = 32'h44 == inst_type ? _imm_T_16 : _imm_T_22; // @[Mux.scala 81:58]
  assign io_ctrl_sign_reg_write = _inst_now_T_3 ? 1'h0 : _reg_write_T_4; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_src2_is_imm = 32'h43 == inst_type | (32'h44 == inst_type | (32'h42 == inst_type | 32'h40 ==
    inst_type)); // @[Mux.scala 81:58]
  assign io_ctrl_sign_src1_is_pc = 32'h6f == _inst_type_T_2; // @[Lookup.scala 31:38]
endmodule
module EXU(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  output [63:0] io_pc_next,
  input  [31:0] io_inst_now,
  input  [4:0]  io_rs1,
  input  [4:0]  io_rs2,
  input  [4:0]  io_rd,
  input  [63:0] io_imm,
  input         io_ctrl_sign_reg_write,
  input         io_ctrl_sign_src2_is_imm,
  input         io_ctrl_sign_src1_is_pc,
  output [63:0] io_res2rd
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] Regfile [0:31]; // @[EXU.scala 19:22]
  wire  Regfile_src1_value_MPORT_en; // @[EXU.scala 19:22]
  wire [4:0] Regfile_src1_value_MPORT_addr; // @[EXU.scala 19:22]
  wire [63:0] Regfile_src1_value_MPORT_data; // @[EXU.scala 19:22]
  wire  Regfile_src2_value_MPORT_en; // @[EXU.scala 19:22]
  wire [4:0] Regfile_src2_value_MPORT_addr; // @[EXU.scala 19:22]
  wire [63:0] Regfile_src2_value_MPORT_data; // @[EXU.scala 19:22]
  wire  Regfile_reg_value_MPORT_en; // @[EXU.scala 19:22]
  wire [4:0] Regfile_reg_value_MPORT_addr; // @[EXU.scala 19:22]
  wire [63:0] Regfile_reg_value_MPORT_data; // @[EXU.scala 19:22]
  wire [63:0] Regfile_MPORT_data; // @[EXU.scala 19:22]
  wire [4:0] Regfile_MPORT_addr; // @[EXU.scala 19:22]
  wire  Regfile_MPORT_mask; // @[EXU.scala 19:22]
  wire  Regfile_MPORT_en; // @[EXU.scala 19:22]
  wire [63:0] _src1_value_T_1 = io_rs1 == 5'h0 ? 64'h0 : Regfile_src1_value_MPORT_data; // @[EXU.scala 21:12]
  wire [63:0] src1_value = io_ctrl_sign_src1_is_pc ? io_pc : _src1_value_T_1; // @[EXU.scala 23:25]
  wire [63:0] _src2_value_T_1 = io_rs2 == 5'h0 ? 64'h0 : Regfile_src2_value_MPORT_data; // @[EXU.scala 21:12]
  wire [63:0] src2_value = io_ctrl_sign_src2_is_imm ? io_imm : _src2_value_T_1; // @[EXU.scala 24:25]
  wire [63:0] add_res = src1_value + src2_value; // @[EXU.scala 25:30]
  wire [63:0] _io_res2rd_T_1 = io_pc + 64'h4; // @[EXU.scala 30:24]
  wire [63:0] _io_res2rd_T_5 = 32'h1 == io_inst_now ? add_res : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_7 = 32'h3 == io_inst_now ? add_res : _io_res2rd_T_5; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_9 = 32'h4 == io_inst_now ? io_imm : _io_res2rd_T_7; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_11 = 32'h5 == io_inst_now ? _io_res2rd_T_1 : _io_res2rd_T_9; // @[Mux.scala 81:58]
  wire [63:0] reg_value = io_rd == 5'h0 ? 64'h0 : Regfile_reg_value_MPORT_data; // @[EXU.scala 21:12]
  wire [63:0] _io_pc_next_T_3 = 32'h5 == io_inst_now ? add_res : _io_res2rd_T_1; // @[Mux.scala 81:58]
  assign Regfile_src1_value_MPORT_en = 1'h1;
  assign Regfile_src1_value_MPORT_addr = io_rs1;
  assign Regfile_src1_value_MPORT_data = Regfile[Regfile_src1_value_MPORT_addr]; // @[EXU.scala 19:22]
  assign Regfile_src2_value_MPORT_en = 1'h1;
  assign Regfile_src2_value_MPORT_addr = io_rs2;
  assign Regfile_src2_value_MPORT_data = Regfile[Regfile_src2_value_MPORT_addr]; // @[EXU.scala 19:22]
  assign Regfile_reg_value_MPORT_en = 1'h1;
  assign Regfile_reg_value_MPORT_addr = io_rd;
  assign Regfile_reg_value_MPORT_data = Regfile[Regfile_reg_value_MPORT_addr]; // @[EXU.scala 19:22]
  assign Regfile_MPORT_data = io_ctrl_sign_reg_write ? io_res2rd : reg_value;
  assign Regfile_MPORT_addr = io_rd;
  assign Regfile_MPORT_mask = 1'h1;
  assign Regfile_MPORT_en = 1'h1;
  assign io_pc_next = 32'h6 == io_inst_now ? add_res : _io_pc_next_T_3; // @[Mux.scala 81:58]
  assign io_res2rd = 32'h6 == io_inst_now ? _io_res2rd_T_1 : _io_res2rd_T_11; // @[Mux.scala 81:58]
  always @(posedge clock) begin
    if (Regfile_MPORT_en & Regfile_MPORT_mask) begin
      Regfile[Regfile_MPORT_addr] <= Regfile_MPORT_data; // @[EXU.scala 19:22]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"%x\n",io_pc_next); // @[EXU.scala 39:11]
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
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    Regfile[initvar] = _RAND_0[63:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
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
  wire [63:0] ifu_step_io_ipc; // @[top.scala 15:26]
  wire [63:0] ifu_step_io_opc; // @[top.scala 15:26]
  wire [31:0] idu_step_io_inst; // @[top.scala 20:26]
  wire [31:0] idu_step_io_inst_now; // @[top.scala 20:26]
  wire [4:0] idu_step_io_rs1; // @[top.scala 20:26]
  wire [4:0] idu_step_io_rs2; // @[top.scala 20:26]
  wire [4:0] idu_step_io_rd; // @[top.scala 20:26]
  wire [63:0] idu_step_io_imm; // @[top.scala 20:26]
  wire  idu_step_io_ctrl_sign_reg_write; // @[top.scala 20:26]
  wire  idu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 20:26]
  wire  idu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 20:26]
  wire  exu_step_clock; // @[top.scala 23:26]
  wire  exu_step_reset; // @[top.scala 23:26]
  wire [63:0] exu_step_io_pc; // @[top.scala 23:26]
  wire [63:0] exu_step_io_pc_next; // @[top.scala 23:26]
  wire [31:0] exu_step_io_inst_now; // @[top.scala 23:26]
  wire [4:0] exu_step_io_rs1; // @[top.scala 23:26]
  wire [4:0] exu_step_io_rs2; // @[top.scala 23:26]
  wire [4:0] exu_step_io_rd; // @[top.scala 23:26]
  wire [63:0] exu_step_io_imm; // @[top.scala 23:26]
  wire  exu_step_io_ctrl_sign_reg_write; // @[top.scala 23:26]
  wire  exu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 23:26]
  wire  exu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 23:26]
  wire [63:0] exu_step_io_res2rd; // @[top.scala 23:26]
  wire [31:0] dpi_flag; // @[top.scala 33:21]
  reg [63:0] pc_now; // @[top.scala 13:25]
  IFU ifu_step ( // @[top.scala 15:26]
    .io_ipc(ifu_step_io_ipc),
    .io_opc(ifu_step_io_opc)
  );
  IDU idu_step ( // @[top.scala 20:26]
    .io_inst(idu_step_io_inst),
    .io_inst_now(idu_step_io_inst_now),
    .io_rs1(idu_step_io_rs1),
    .io_rs2(idu_step_io_rs2),
    .io_rd(idu_step_io_rd),
    .io_imm(idu_step_io_imm),
    .io_ctrl_sign_reg_write(idu_step_io_ctrl_sign_reg_write),
    .io_ctrl_sign_src2_is_imm(idu_step_io_ctrl_sign_src2_is_imm),
    .io_ctrl_sign_src1_is_pc(idu_step_io_ctrl_sign_src1_is_pc)
  );
  EXU exu_step ( // @[top.scala 23:26]
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
    .io_ctrl_sign_src2_is_imm(exu_step_io_ctrl_sign_src2_is_imm),
    .io_ctrl_sign_src1_is_pc(exu_step_io_ctrl_sign_src1_is_pc),
    .io_res2rd(exu_step_io_res2rd)
  );
  DPI dpi ( // @[top.scala 33:21]
    .flag(dpi_flag)
  );
  assign io_pc = ifu_step_io_opc; // @[top.scala 17:11]
  assign io_outval = exu_step_io_res2rd; // @[top.scala 32:15]
  assign ifu_step_io_ipc = pc_now; // @[top.scala 16:21]
  assign idu_step_io_inst = io_inst; // @[top.scala 22:22]
  assign exu_step_clock = clock;
  assign exu_step_reset = reset;
  assign exu_step_io_pc = ifu_step_io_opc; // @[top.scala 24:20]
  assign exu_step_io_inst_now = idu_step_io_inst_now; // @[top.scala 25:26]
  assign exu_step_io_rs1 = idu_step_io_rs1; // @[top.scala 27:21]
  assign exu_step_io_rs2 = idu_step_io_rs2; // @[top.scala 28:21]
  assign exu_step_io_rd = idu_step_io_rd; // @[top.scala 29:20]
  assign exu_step_io_imm = idu_step_io_imm; // @[top.scala 30:21]
  assign exu_step_io_ctrl_sign_reg_write = idu_step_io_ctrl_sign_reg_write; // @[top.scala 31:27]
  assign exu_step_io_ctrl_sign_src2_is_imm = idu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 31:27]
  assign exu_step_io_ctrl_sign_src1_is_pc = idu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 31:27]
  assign dpi_flag = {{31'd0}, idu_step_io_inst_now == 32'h2}; // @[top.scala 34:17]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 13:25]
      pc_now <= 64'h80000000; // @[top.scala 13:25]
    end else begin
      pc_now <= exu_step_io_pc_next; // @[top.scala 36:12]
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
