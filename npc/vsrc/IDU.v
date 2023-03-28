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
  output        io_ctrl_sign_src1_is_pc,
  output        io_ctrl_sign_Writemem_en,
  output [7:0]  io_ctrl_sign_Wmask
);
  wire [4:0] rd = io_inst[11:7]; // @[IDU.scala 90:15]
  wire [31:0] _inst_type_T = io_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_1 = 32'h13 == _inst_type_T; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_2 = io_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_3 = 32'h17 == _inst_type_T_2; // @[Lookup.scala 31:38]
  wire  _inst_type_T_5 = 32'h37 == _inst_type_T_2; // @[Lookup.scala 31:38]
  wire  _inst_type_T_7 = 32'h6f == _inst_type_T_2; // @[Lookup.scala 31:38]
  wire  _inst_type_T_9 = 32'h67 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_11 = 32'h3023 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_13 = 32'h3013 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_15 = 32'h2003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_16 = io_inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_17 = 32'h3b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_19 = 32'h40000033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_21 = 32'h1063 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_23 = 32'h63 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_25 = 32'h3003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_27 = 32'h1b == _inst_type_T; // @[Lookup.scala 31:38]
  wire [6:0] _inst_type_T_28 = _inst_type_T_27 ? 7'h40 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_29 = _inst_type_T_25 ? 7'h40 : _inst_type_T_28; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_30 = _inst_type_T_23 ? 7'h45 : _inst_type_T_29; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_31 = _inst_type_T_21 ? 7'h45 : _inst_type_T_30; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_32 = _inst_type_T_19 ? 7'h41 : _inst_type_T_31; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_33 = _inst_type_T_17 ? 7'h41 : _inst_type_T_32; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_34 = _inst_type_T_15 ? 7'h40 : _inst_type_T_33; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_35 = _inst_type_T_13 ? 7'h40 : _inst_type_T_34; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_36 = _inst_type_T_11 ? 7'h44 : _inst_type_T_35; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_37 = _inst_type_T_9 ? 7'h40 : _inst_type_T_36; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_38 = _inst_type_T_7 ? 7'h43 : _inst_type_T_37; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_39 = _inst_type_T_5 ? 7'h42 : _inst_type_T_38; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_40 = _inst_type_T_3 ? 7'h42 : _inst_type_T_39; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_41 = _inst_type_T_1 ? 7'h40 : _inst_type_T_40; // @[Lookup.scala 34:39]
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
  wire [11:0] imm_imm_4 = {io_inst[31],io_inst[7],io_inst[30:25],io_inst[11:8]}; // @[Cat.scala 31:58]
  wire [50:0] _imm_T_19 = imm_imm_4[11] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_20 = {_imm_T_19,io_inst[31],io_inst[7],io_inst[30:25],io_inst[11:8],1'h0}; // @[Cat.scala 31:58]
  wire [31:0] inst_type = {{25'd0}, _inst_type_T_41}; // @[IDU.scala 75:25 92:15]
  wire [63:0] _imm_T_22 = 32'h40 == inst_type ? _imm_T_3 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_24 = 32'h43 == inst_type ? _imm_T_7 : _imm_T_22; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_26 = 32'h42 == inst_type ? _imm_T_12 : _imm_T_24; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_28 = 32'h44 == inst_type ? _imm_T_16 : _imm_T_26; // @[Mux.scala 81:58]
  wire  _inst_now_T_3 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
  wire [4:0] _inst_now_T_30 = _inst_type_T_27 ? 5'h10 : 5'h0; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_31 = _inst_type_T_25 ? 6'h22 : {{1'd0}, _inst_now_T_30}; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_32 = _inst_type_T_23 ? 6'h29 : _inst_now_T_31; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_33 = _inst_type_T_21 ? 6'h2a : _inst_now_T_32; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_34 = _inst_type_T_19 ? 6'he : _inst_now_T_33; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_35 = _inst_type_T_17 ? 6'hc : _inst_now_T_34; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_36 = _inst_type_T_15 ? 6'h21 : _inst_now_T_35; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_37 = _inst_type_T_13 ? 6'h20 : _inst_now_T_36; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_38 = _inst_type_T_11 ? 6'h7 : _inst_now_T_37; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_39 = _inst_type_T_9 ? 6'h6 : _inst_now_T_38; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_40 = _inst_type_T_7 ? 6'h5 : _inst_now_T_39; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_41 = _inst_type_T_5 ? 6'h4 : _inst_now_T_40; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_42 = _inst_type_T_3 ? 6'h3 : _inst_now_T_41; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_43 = _inst_now_T_3 ? 6'h2 : _inst_now_T_42; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_44 = _inst_type_T_1 ? 6'h1 : _inst_now_T_43; // @[Lookup.scala 34:39]
  wire  _reg_write_T_8 = _inst_type_T_23 ? 1'h0 : 1'h1; // @[Lookup.scala 34:39]
  wire  _reg_write_T_9 = _inst_type_T_21 ? 1'h0 : _reg_write_T_8; // @[Lookup.scala 34:39]
  wire  _reg_write_T_10 = _inst_type_T_11 ? 1'h0 : _reg_write_T_9; // @[Lookup.scala 34:39]
  assign io_inst_now = {{26'd0}, _inst_now_T_44}; // @[IDU.scala 117:14 74:24]
  assign io_rs1 = io_inst[19:15]; // @[IDU.scala 89:16]
  assign io_rs2 = io_inst[24:20]; // @[IDU.scala 88:16]
  assign io_rd = io_inst[11:7]; // @[IDU.scala 90:15]
  assign io_imm = 32'h45 == inst_type ? _imm_T_20 : _imm_T_28; // @[Mux.scala 81:58]
  assign io_ctrl_sign_reg_write = _inst_now_T_3 ? 1'h0 : _reg_write_T_10; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_src2_is_imm = 32'h45 == inst_type | (32'h43 == inst_type | (32'h44 == inst_type | (32'h42 ==
    inst_type | 32'h40 == inst_type))); // @[Mux.scala 81:58]
  assign io_ctrl_sign_src1_is_pc = _inst_type_T_7 | (_inst_type_T_3 | (_inst_type_T_21 | _inst_type_T_23)); // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Writemem_en = 32'h3023 == _inst_type_T; // @[Lookup.scala 31:38]
  assign io_ctrl_sign_Wmask = _inst_type_T_11 ? 8'hff : 8'h0; // @[Lookup.scala 34:39]
endmodule
/* verilator lint_on UNUSED */
