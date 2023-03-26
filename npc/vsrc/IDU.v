/* verilator lint_off UNUSED */
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
  assign io_ctrl_sign_src1_is_pc = _inst_type_T_7 | _inst_type_T_3; // @[Lookup.scala 34:39]
endmodule
/* verilator lint_on UNUSED */
