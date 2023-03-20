module IDU(
  input  [31:0] io_inst,
  output [31:0] io_insttype,
  output [4:0]  io_src1,
  output [4:0]  io_rd,
  output [63:0] io_imm,
  output        io_reg_write
);
  wire [31:0] _src2_T = io_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _src2_T_1 = 32'h13 == _src2_T; // @[Lookup.scala 31:38]
  wire [11:0] imm_I = _src2_T_1 ? io_inst[31:20] : 12'h0; // @[Lookup.scala 34:39]
  wire  _insttype_T_3 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
  wire [1:0] _insttype_T_4 = _insttype_T_3 ? 2'h2 : 2'h0; // @[Lookup.scala 34:39]
  wire [1:0] _insttype_T_5 = _src2_T_1 ? 2'h1 : _insttype_T_4; // @[Lookup.scala 34:39]
  wire [51:0] _io_imm_T_2 = imm_I[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  assign io_insttype = {{30'd0}, _insttype_T_5}; // @[IDU.scala 29:24 56:14]
  assign io_src1 = _src2_T_1 ? io_inst[19:15] : 5'h0; // @[Lookup.scala 34:39]
  assign io_rd = _src2_T_1 ? io_inst[11:7] : 5'h0; // @[Lookup.scala 34:39]
  assign io_imm = {_io_imm_T_2,imm_I}; // @[Cat.scala 31:58]
  assign io_reg_write = 32'h13 == _src2_T; // @[Lookup.scala 31:38]
endmodule

