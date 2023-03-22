module IDU(
  input         clock,
  input         reset,
  input  [31:0] io_inst,
  output [31:0] io_insttype,
  output [4:0]  io_src1,
  output [4:0]  io_src2,
  output [4:0]  io_rd,
  output [63:0] io_imm
);
  wire [11:0] inst_I_imm11_0 = io_inst[31:20]; // @[IDU.scala 25:34]
  wire [51:0] _io_imm_T_2 = inst_I_imm11_0[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  assign io_insttype = 32'h1; // @[IDU.scala 30:17]
  assign io_src1 = io_inst[19:15]; // @[IDU.scala 25:34]
  assign io_src2 = 5'h0; // @[IDU.scala 28:13]
  assign io_rd = io_inst[11:7]; // @[IDU.scala 25:34]
  assign io_imm = {_io_imm_T_2,inst_I_imm11_0}; // @[Cat.scala 31:58]
endmodule
