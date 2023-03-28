module IFU(
  input  [63:0] io_pc,
  output [31:0] io_inst
);
  wire [63:0] inst_read_Raddr; // @[IFU.scala 11:27]
  wire [63:0] inst_read_Rdata; // @[IFU.scala 11:27]
  wire [63:0] inst_read_Waddr; // @[IFU.scala 11:27]
  wire [63:0] inst_read_Wdata; // @[IFU.scala 11:27]
  wire [7:0] inst_read_Wmask; // @[IFU.scala 11:27]
  wire  inst_read_Write_en; // @[IFU.scala 11:27]
  MEM inst_read ( // @[IFU.scala 11:27]
    .Raddr(inst_read_Raddr),
    .Rdata(inst_read_Rdata),
    .Waddr(inst_read_Waddr),
    .Wdata(inst_read_Wdata),
    .Wmask(inst_read_Wmask),
    .Write_en(inst_read_Write_en)
  );
  assign io_inst = inst_read_Rdata[31:0]; // @[IFU.scala 13:34]
  assign inst_read_Raddr = io_pc; // @[IFU.scala 12:24]
  assign inst_read_Waddr = 64'h0;
  assign inst_read_Wdata = 64'h0;
  assign inst_read_Wmask = 8'h0;
  assign inst_read_Write_en = 1'h0;
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
  output        io_ctrl_sign_src1_is_pc,
  output        io_ctrl_sign_Writemem_en,
  output [7:0]  io_ctrl_sign_Wmask
);
  wire [4:0] rd = io_inst[11:7]; // @[IDU.scala 100:15]
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
  wire  _inst_type_T_29 = 32'h33 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_30 = io_inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_31 = 32'h40005013 == _inst_type_T_30; // @[Lookup.scala 31:38]
  wire  _inst_type_T_33 = 32'h4003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_35 = 32'h1023 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_37 = 32'h23 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_39 = 32'h6033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_41 = 32'h4013 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_43 = 32'h7033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_45 = 32'h7013 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_47 = 32'h4000003b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire [6:0] _inst_type_T_48 = _inst_type_T_47 ? 7'h41 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_49 = _inst_type_T_45 ? 7'h40 : _inst_type_T_48; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_50 = _inst_type_T_43 ? 7'h41 : _inst_type_T_49; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_51 = _inst_type_T_41 ? 7'h40 : _inst_type_T_50; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_52 = _inst_type_T_39 ? 7'h41 : _inst_type_T_51; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_53 = _inst_type_T_37 ? 7'h44 : _inst_type_T_52; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_54 = _inst_type_T_35 ? 7'h44 : _inst_type_T_53; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_55 = _inst_type_T_33 ? 7'h40 : _inst_type_T_54; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_56 = _inst_type_T_31 ? 7'h40 : _inst_type_T_55; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_57 = _inst_type_T_29 ? 7'h41 : _inst_type_T_56; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_58 = _inst_type_T_27 ? 7'h40 : _inst_type_T_57; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_59 = _inst_type_T_25 ? 7'h40 : _inst_type_T_58; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_60 = _inst_type_T_23 ? 7'h45 : _inst_type_T_59; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_61 = _inst_type_T_21 ? 7'h45 : _inst_type_T_60; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_62 = _inst_type_T_19 ? 7'h41 : _inst_type_T_61; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_63 = _inst_type_T_17 ? 7'h41 : _inst_type_T_62; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_64 = _inst_type_T_15 ? 7'h40 : _inst_type_T_63; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_65 = _inst_type_T_13 ? 7'h40 : _inst_type_T_64; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_66 = _inst_type_T_11 ? 7'h44 : _inst_type_T_65; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_67 = _inst_type_T_9 ? 7'h40 : _inst_type_T_66; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_68 = _inst_type_T_7 ? 7'h43 : _inst_type_T_67; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_69 = _inst_type_T_5 ? 7'h42 : _inst_type_T_68; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_70 = _inst_type_T_3 ? 7'h42 : _inst_type_T_69; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_71 = _inst_type_T_1 ? 7'h40 : _inst_type_T_70; // @[Lookup.scala 34:39]
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
  wire [31:0] inst_type = {{25'd0}, _inst_type_T_71}; // @[IDU.scala 102:15 85:25]
  wire [63:0] _imm_T_22 = 32'h40 == inst_type ? _imm_T_3 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_24 = 32'h43 == inst_type ? _imm_T_7 : _imm_T_22; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_26 = 32'h42 == inst_type ? _imm_T_12 : _imm_T_24; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_28 = 32'h44 == inst_type ? _imm_T_16 : _imm_T_26; // @[Mux.scala 81:58]
  wire  _inst_now_T_3 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
  wire [3:0] _inst_now_T_50 = _inst_type_T_47 ? 4'hd : 4'h0; // @[Lookup.scala 34:39]
  wire [3:0] _inst_now_T_51 = _inst_type_T_45 ? 4'h9 : _inst_now_T_50; // @[Lookup.scala 34:39]
  wire [3:0] _inst_now_T_52 = _inst_type_T_43 ? 4'h8 : _inst_now_T_51; // @[Lookup.scala 34:39]
  wire [3:0] _inst_now_T_53 = _inst_type_T_41 ? 4'ha : _inst_now_T_52; // @[Lookup.scala 34:39]
  wire [3:0] _inst_now_T_54 = _inst_type_T_39 ? 4'hb : _inst_now_T_53; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_55 = _inst_type_T_37 ? 6'h28 : {{2'd0}, _inst_now_T_54}; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_56 = _inst_type_T_35 ? 6'h26 : _inst_now_T_55; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_57 = _inst_type_T_33 ? 6'h23 : _inst_now_T_56; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_58 = _inst_type_T_31 ? 6'h15 : _inst_now_T_57; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_59 = _inst_type_T_29 ? 6'hf : _inst_now_T_58; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_60 = _inst_type_T_27 ? 6'h10 : _inst_now_T_59; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_61 = _inst_type_T_25 ? 6'h22 : _inst_now_T_60; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_62 = _inst_type_T_23 ? 6'h29 : _inst_now_T_61; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_63 = _inst_type_T_21 ? 6'h2a : _inst_now_T_62; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_64 = _inst_type_T_19 ? 6'he : _inst_now_T_63; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_65 = _inst_type_T_17 ? 6'hc : _inst_now_T_64; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_66 = _inst_type_T_15 ? 6'h21 : _inst_now_T_65; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_67 = _inst_type_T_13 ? 6'h20 : _inst_now_T_66; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_68 = _inst_type_T_11 ? 6'h7 : _inst_now_T_67; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_69 = _inst_type_T_9 ? 6'h6 : _inst_now_T_68; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_70 = _inst_type_T_7 ? 6'h5 : _inst_now_T_69; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_71 = _inst_type_T_5 ? 6'h4 : _inst_now_T_70; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_72 = _inst_type_T_3 ? 6'h3 : _inst_now_T_71; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_73 = _inst_now_T_3 ? 6'h2 : _inst_now_T_72; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_74 = _inst_type_T_1 ? 6'h1 : _inst_now_T_73; // @[Lookup.scala 34:39]
  wire  _reg_write_T_12 = _inst_type_T_23 ? 1'h0 : 1'h1; // @[Lookup.scala 34:39]
  wire  _reg_write_T_13 = _inst_type_T_21 ? 1'h0 : _reg_write_T_12; // @[Lookup.scala 34:39]
  wire  _reg_write_T_14 = _inst_type_T_37 ? 1'h0 : _reg_write_T_13; // @[Lookup.scala 34:39]
  wire  _reg_write_T_15 = _inst_type_T_35 ? 1'h0 : _reg_write_T_14; // @[Lookup.scala 34:39]
  wire  _reg_write_T_16 = _inst_type_T_11 ? 1'h0 : _reg_write_T_15; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_7 = _inst_type_T_35 ? 4'hf : {{3'd0}, _inst_type_T_37}; // @[Lookup.scala 34:39]
  assign io_inst_now = {{26'd0}, _inst_now_T_74}; // @[IDU.scala 137:14 84:24]
  assign io_rs1 = io_inst[19:15]; // @[IDU.scala 99:16]
  assign io_rs2 = io_inst[24:20]; // @[IDU.scala 98:16]
  assign io_rd = io_inst[11:7]; // @[IDU.scala 100:15]
  assign io_imm = 32'h45 == inst_type ? _imm_T_20 : _imm_T_28; // @[Mux.scala 81:58]
  assign io_ctrl_sign_reg_write = _inst_now_T_3 ? 1'h0 : _reg_write_T_16; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_src2_is_imm = 32'h45 == inst_type | (32'h43 == inst_type | (32'h44 == inst_type | (32'h42 ==
    inst_type | 32'h40 == inst_type))); // @[Mux.scala 81:58]
  assign io_ctrl_sign_src1_is_pc = _inst_type_T_7 | (_inst_type_T_3 | (_inst_type_T_21 | _inst_type_T_23)); // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Writemem_en = 32'h44 == inst_type; // @[Mux.scala 81:61]
  assign io_ctrl_sign_Wmask = _inst_type_T_11 ? 8'hff : {{4'd0}, _Wmask_T_7}; // @[Lookup.scala 34:39]
endmodule
module EXU(
  input         clock,
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
  input         io_ctrl_sign_Writemem_en,
  input  [7:0]  io_ctrl_sign_Wmask,
  output [63:0] io_res2rd
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  wire [63:0] Mem_modle_Raddr; // @[EXU.scala 21:27]
  wire [63:0] Mem_modle_Rdata; // @[EXU.scala 21:27]
  wire [63:0] Mem_modle_Waddr; // @[EXU.scala 21:27]
  wire [63:0] Mem_modle_Wdata; // @[EXU.scala 21:27]
  wire [7:0] Mem_modle_Wmask; // @[EXU.scala 21:27]
  wire  Mem_modle_Write_en; // @[EXU.scala 21:27]
  reg [63:0] Regfile [0:31]; // @[EXU.scala 23:22]
  wire  Regfile_cmp_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_cmp_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_cmp_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_cmp_MPORT_1_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_cmp_MPORT_1_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_cmp_MPORT_1_data; // @[EXU.scala 23:22]
  wire  Regfile_src1_value_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_src1_value_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_src1_value_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_src2_value_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_src2_value_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_src2_value_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_value_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_value_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_value_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_0_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_0_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_0_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_1_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_1_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_1_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_2_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_2_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_2_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_3_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_3_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_3_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_4_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_4_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_4_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_5_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_5_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_5_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_6_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_6_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_6_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_7_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_7_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_7_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_8_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_8_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_8_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_9_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_9_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_9_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_10_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_10_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_10_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_11_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_11_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_11_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_12_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_12_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_12_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_13_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_13_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_13_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_14_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_14_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_14_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_15_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_15_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_15_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_16_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_16_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_16_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_17_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_17_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_17_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_18_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_18_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_18_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_19_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_19_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_19_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_20_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_20_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_20_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_21_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_21_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_21_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_22_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_22_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_22_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_23_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_23_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_23_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_24_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_24_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_24_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_25_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_25_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_25_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_26_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_26_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_26_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_27_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_27_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_27_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_28_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_28_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_28_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_29_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_29_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_29_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_30_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_30_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_30_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_reg_trace_io_input_reg_31_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_31_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_31_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_Mem_modle_io_Wdata_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_Mem_modle_io_Wdata_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_Mem_modle_io_Wdata_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_Mem_modle_io_Wdata_MPORT_1_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_Mem_modle_io_Wdata_MPORT_1_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_Mem_modle_io_Wdata_MPORT_1_data; // @[EXU.scala 23:22]
  wire  Regfile_Mem_modle_io_Wdata_MPORT_2_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_Mem_modle_io_Wdata_MPORT_2_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_Mem_modle_io_Wdata_MPORT_2_data; // @[EXU.scala 23:22]
  wire [63:0] Regfile_MPORT_data; // @[EXU.scala 23:22]
  wire [4:0] Regfile_MPORT_addr; // @[EXU.scala 23:22]
  wire  Regfile_MPORT_mask; // @[EXU.scala 23:22]
  wire  Regfile_MPORT_en; // @[EXU.scala 23:22]
  wire [63:0] reg_trace_input_reg_0; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_1; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_2; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_3; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_4; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_5; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_6; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_7; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_8; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_9; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_10; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_11; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_12; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_13; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_14; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_15; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_16; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_17; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_18; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_19; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_20; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_21; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_22; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_23; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_24; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_25; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_26; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_27; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_28; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_29; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_30; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_input_reg_31; // @[EXU.scala 69:27]
  wire [63:0] reg_trace_pc; // @[EXU.scala 69:27]
  wire [63:0] _cmp_T_1 = io_rs1 == 5'h0 ? 64'h0 : Regfile_cmp_MPORT_data; // @[EXU.scala 25:12]
  wire [63:0] _cmp_T_3 = io_rs2 == 5'h0 ? 64'h0 : Regfile_cmp_MPORT_1_data; // @[EXU.scala 25:12]
  wire [63:0] cmp = _cmp_T_1 - _cmp_T_3; // @[EXU.scala 27:32]
  wire [63:0] _src1_value_T_1 = io_rs1 == 5'h0 ? 64'h0 : Regfile_src1_value_MPORT_data; // @[EXU.scala 25:12]
  wire [63:0] src1_value = io_ctrl_sign_src1_is_pc ? io_pc : _src1_value_T_1; // @[EXU.scala 28:25]
  wire [63:0] _src2_value_T_1 = io_rs2 == 5'h0 ? 64'h0 : Regfile_src2_value_MPORT_data; // @[EXU.scala 25:12]
  wire [63:0] src2_value = io_ctrl_sign_src2_is_imm ? io_imm : _src2_value_T_1; // @[EXU.scala 29:25]
  wire [63:0] add_res = src1_value + src2_value; // @[EXU.scala 30:30]
  wire [63:0] sub_res = src1_value - src2_value; // @[EXU.scala 31:30]
  wire [63:0] _ssra_res_T = io_ctrl_sign_src1_is_pc ? io_pc : _src1_value_T_1; // @[EXU.scala 32:37]
  wire [63:0] or_res = src1_value | src2_value; // @[EXU.scala 33:29]
  wire [63:0] xor_res = src1_value ^ src2_value; // @[EXU.scala 34:30]
  wire [63:0] and_res = src1_value & src2_value; // @[EXU.scala 35:30]
  wire [63:0] _io_res2rd_T_1 = io_pc + 64'h4; // @[EXU.scala 40:24]
  wire [63:0] mem_rdata = Mem_modle_Rdata; // @[EXU.scala 22:25 83:15]
  wire [31:0] _io_res2rd_T_9 = mem_rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_11 = {_io_res2rd_T_9,mem_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_14 = {56'h0,mem_rdata[7:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_17 = add_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_19 = {_io_res2rd_T_17,add_res[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_25 = $signed(_ssra_res_T) >>> src2_value[5:0]; // @[EXU.scala 50:34]
  wire [31:0] _io_res2rd_T_28 = sub_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_30 = {_io_res2rd_T_28,sub_res[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_32 = 32'h1 == io_inst_now ? add_res : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_34 = 32'h3 == io_inst_now ? add_res : _io_res2rd_T_32; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_36 = 32'h4 == io_inst_now ? io_imm : _io_res2rd_T_34; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_38 = 32'h5 == io_inst_now ? _io_res2rd_T_1 : _io_res2rd_T_36; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_40 = 32'h6 == io_inst_now ? _io_res2rd_T_1 : _io_res2rd_T_38; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_42 = 32'h20 == io_inst_now ? {{63'd0}, sub_res[63]} : _io_res2rd_T_40; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_44 = 32'h21 == io_inst_now ? _io_res2rd_T_11 : _io_res2rd_T_42; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_46 = 32'h22 == io_inst_now ? mem_rdata : _io_res2rd_T_44; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_48 = 32'h23 == io_inst_now ? _io_res2rd_T_14 : _io_res2rd_T_46; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_50 = 32'hc == io_inst_now ? _io_res2rd_T_19 : _io_res2rd_T_48; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_52 = 32'he == io_inst_now ? sub_res : _io_res2rd_T_50; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_54 = 32'h10 == io_inst_now ? _io_res2rd_T_19 : _io_res2rd_T_52; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_56 = 32'hf == io_inst_now ? add_res : _io_res2rd_T_54; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_58 = 32'h15 == io_inst_now ? _io_res2rd_T_25 : _io_res2rd_T_56; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_60 = 32'hb == io_inst_now ? or_res : _io_res2rd_T_58; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_62 = 32'ha == io_inst_now ? xor_res : _io_res2rd_T_60; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_64 = 32'h8 == io_inst_now ? and_res : _io_res2rd_T_62; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_66 = 32'h9 == io_inst_now ? and_res : _io_res2rd_T_64; // @[Mux.scala 81:58]
  wire [63:0] reg_value = io_rd == 5'h0 ? 64'h0 : Regfile_reg_value_MPORT_data; // @[EXU.scala 25:12]
  wire  _T_1 = io_ctrl_sign_reg_write & io_rd != 5'h0; // @[EXU.scala 60:50]
  wire [63:0] _io_pc_next_T = add_res & 64'hfffffffffffffffe; // @[EXU.scala 65:28]
  wire [63:0] _io_pc_next_T_2 = cmp != 64'h0 ? add_res : _io_res2rd_T_1; // @[EXU.scala 66:21]
  wire [63:0] _io_pc_next_T_4 = cmp == 64'h0 ? add_res : _io_res2rd_T_1; // @[EXU.scala 67:21]
  wire [63:0] _io_pc_next_T_6 = 32'h5 == io_inst_now ? add_res : _io_res2rd_T_1; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_8 = 32'h6 == io_inst_now ? _io_pc_next_T : _io_pc_next_T_6; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_10 = 32'h2a == io_inst_now ? _io_pc_next_T_2 : _io_pc_next_T_8; // @[Mux.scala 81:58]
  wire [63:0] _Mem_modle_io_Wdata_T_1 = io_rs2 == 5'h0 ? 64'h0 : Regfile_Mem_modle_io_Wdata_MPORT_data; // @[EXU.scala 25:12]
  wire [63:0] _Mem_modle_io_Wdata_T_3 = io_rs2 == 5'h0 ? 64'h0 : Regfile_Mem_modle_io_Wdata_MPORT_1_data; // @[EXU.scala 25:12]
  wire [63:0] _Mem_modle_io_Wdata_T_6 = io_rs2 == 5'h0 ? 64'h0 : Regfile_Mem_modle_io_Wdata_MPORT_2_data; // @[EXU.scala 25:12]
  wire [63:0] _Mem_modle_io_Wdata_T_9 = 32'h7 == io_inst_now ? _Mem_modle_io_Wdata_T_1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _Mem_modle_io_Wdata_T_11 = 32'h26 == io_inst_now ? {{48'd0}, _Mem_modle_io_Wdata_T_3[15:0]} :
    _Mem_modle_io_Wdata_T_9; // @[Mux.scala 81:58]
  MEM Mem_modle ( // @[EXU.scala 21:27]
    .Raddr(Mem_modle_Raddr),
    .Rdata(Mem_modle_Rdata),
    .Waddr(Mem_modle_Waddr),
    .Wdata(Mem_modle_Wdata),
    .Wmask(Mem_modle_Wmask),
    .Write_en(Mem_modle_Write_en)
  );
  traceregs reg_trace ( // @[EXU.scala 69:27]
    .input_reg_0(reg_trace_input_reg_0),
    .input_reg_1(reg_trace_input_reg_1),
    .input_reg_2(reg_trace_input_reg_2),
    .input_reg_3(reg_trace_input_reg_3),
    .input_reg_4(reg_trace_input_reg_4),
    .input_reg_5(reg_trace_input_reg_5),
    .input_reg_6(reg_trace_input_reg_6),
    .input_reg_7(reg_trace_input_reg_7),
    .input_reg_8(reg_trace_input_reg_8),
    .input_reg_9(reg_trace_input_reg_9),
    .input_reg_10(reg_trace_input_reg_10),
    .input_reg_11(reg_trace_input_reg_11),
    .input_reg_12(reg_trace_input_reg_12),
    .input_reg_13(reg_trace_input_reg_13),
    .input_reg_14(reg_trace_input_reg_14),
    .input_reg_15(reg_trace_input_reg_15),
    .input_reg_16(reg_trace_input_reg_16),
    .input_reg_17(reg_trace_input_reg_17),
    .input_reg_18(reg_trace_input_reg_18),
    .input_reg_19(reg_trace_input_reg_19),
    .input_reg_20(reg_trace_input_reg_20),
    .input_reg_21(reg_trace_input_reg_21),
    .input_reg_22(reg_trace_input_reg_22),
    .input_reg_23(reg_trace_input_reg_23),
    .input_reg_24(reg_trace_input_reg_24),
    .input_reg_25(reg_trace_input_reg_25),
    .input_reg_26(reg_trace_input_reg_26),
    .input_reg_27(reg_trace_input_reg_27),
    .input_reg_28(reg_trace_input_reg_28),
    .input_reg_29(reg_trace_input_reg_29),
    .input_reg_30(reg_trace_input_reg_30),
    .input_reg_31(reg_trace_input_reg_31),
    .pc(reg_trace_pc)
  );
  assign Regfile_cmp_MPORT_en = 1'h1;
  assign Regfile_cmp_MPORT_addr = io_rs1;
  assign Regfile_cmp_MPORT_data = Regfile[Regfile_cmp_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_cmp_MPORT_1_en = 1'h1;
  assign Regfile_cmp_MPORT_1_addr = io_rs2;
  assign Regfile_cmp_MPORT_1_data = Regfile[Regfile_cmp_MPORT_1_addr]; // @[EXU.scala 23:22]
  assign Regfile_src1_value_MPORT_en = 1'h1;
  assign Regfile_src1_value_MPORT_addr = io_rs1;
  assign Regfile_src1_value_MPORT_data = Regfile[Regfile_src1_value_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_src2_value_MPORT_en = 1'h1;
  assign Regfile_src2_value_MPORT_addr = io_rs2;
  assign Regfile_src2_value_MPORT_data = Regfile[Regfile_src2_value_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_value_MPORT_en = 1'h1;
  assign Regfile_reg_value_MPORT_addr = io_rd;
  assign Regfile_reg_value_MPORT_data = Regfile[Regfile_reg_value_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_0_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_0_MPORT_addr = 5'h0;
  assign Regfile_reg_trace_io_input_reg_0_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_0_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_1_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_1_MPORT_addr = 5'h1;
  assign Regfile_reg_trace_io_input_reg_1_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_1_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_2_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_2_MPORT_addr = 5'h2;
  assign Regfile_reg_trace_io_input_reg_2_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_2_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_3_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_3_MPORT_addr = 5'h3;
  assign Regfile_reg_trace_io_input_reg_3_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_3_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_4_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_4_MPORT_addr = 5'h4;
  assign Regfile_reg_trace_io_input_reg_4_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_4_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_5_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_5_MPORT_addr = 5'h5;
  assign Regfile_reg_trace_io_input_reg_5_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_5_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_6_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_6_MPORT_addr = 5'h6;
  assign Regfile_reg_trace_io_input_reg_6_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_6_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_7_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_7_MPORT_addr = 5'h7;
  assign Regfile_reg_trace_io_input_reg_7_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_7_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_8_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_8_MPORT_addr = 5'h8;
  assign Regfile_reg_trace_io_input_reg_8_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_8_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_9_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_9_MPORT_addr = 5'h9;
  assign Regfile_reg_trace_io_input_reg_9_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_9_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_10_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_10_MPORT_addr = 5'ha;
  assign Regfile_reg_trace_io_input_reg_10_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_10_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_11_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_11_MPORT_addr = 5'hb;
  assign Regfile_reg_trace_io_input_reg_11_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_11_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_12_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_12_MPORT_addr = 5'hc;
  assign Regfile_reg_trace_io_input_reg_12_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_12_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_13_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_13_MPORT_addr = 5'hd;
  assign Regfile_reg_trace_io_input_reg_13_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_13_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_14_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_14_MPORT_addr = 5'he;
  assign Regfile_reg_trace_io_input_reg_14_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_14_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_15_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_15_MPORT_addr = 5'hf;
  assign Regfile_reg_trace_io_input_reg_15_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_15_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_16_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_16_MPORT_addr = 5'h10;
  assign Regfile_reg_trace_io_input_reg_16_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_16_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_17_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_17_MPORT_addr = 5'h11;
  assign Regfile_reg_trace_io_input_reg_17_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_17_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_18_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_18_MPORT_addr = 5'h12;
  assign Regfile_reg_trace_io_input_reg_18_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_18_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_19_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_19_MPORT_addr = 5'h13;
  assign Regfile_reg_trace_io_input_reg_19_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_19_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_20_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_20_MPORT_addr = 5'h14;
  assign Regfile_reg_trace_io_input_reg_20_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_20_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_21_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_21_MPORT_addr = 5'h15;
  assign Regfile_reg_trace_io_input_reg_21_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_21_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_22_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_22_MPORT_addr = 5'h16;
  assign Regfile_reg_trace_io_input_reg_22_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_22_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_23_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_23_MPORT_addr = 5'h17;
  assign Regfile_reg_trace_io_input_reg_23_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_23_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_24_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_24_MPORT_addr = 5'h18;
  assign Regfile_reg_trace_io_input_reg_24_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_24_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_25_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_25_MPORT_addr = 5'h19;
  assign Regfile_reg_trace_io_input_reg_25_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_25_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_26_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_26_MPORT_addr = 5'h1a;
  assign Regfile_reg_trace_io_input_reg_26_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_26_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_27_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_27_MPORT_addr = 5'h1b;
  assign Regfile_reg_trace_io_input_reg_27_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_27_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_28_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_28_MPORT_addr = 5'h1c;
  assign Regfile_reg_trace_io_input_reg_28_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_28_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_29_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_29_MPORT_addr = 5'h1d;
  assign Regfile_reg_trace_io_input_reg_29_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_29_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_30_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_30_MPORT_addr = 5'h1e;
  assign Regfile_reg_trace_io_input_reg_30_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_30_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_reg_trace_io_input_reg_31_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_31_MPORT_addr = 5'h1f;
  assign Regfile_reg_trace_io_input_reg_31_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_31_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_Mem_modle_io_Wdata_MPORT_en = 1'h1;
  assign Regfile_Mem_modle_io_Wdata_MPORT_addr = io_rs2;
  assign Regfile_Mem_modle_io_Wdata_MPORT_data = Regfile[Regfile_Mem_modle_io_Wdata_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_Mem_modle_io_Wdata_MPORT_1_en = 1'h1;
  assign Regfile_Mem_modle_io_Wdata_MPORT_1_addr = io_rs2;
  assign Regfile_Mem_modle_io_Wdata_MPORT_1_data = Regfile[Regfile_Mem_modle_io_Wdata_MPORT_1_addr]; // @[EXU.scala 23:22]
  assign Regfile_Mem_modle_io_Wdata_MPORT_2_en = 1'h1;
  assign Regfile_Mem_modle_io_Wdata_MPORT_2_addr = io_rs2;
  assign Regfile_Mem_modle_io_Wdata_MPORT_2_data = Regfile[Regfile_Mem_modle_io_Wdata_MPORT_2_addr]; // @[EXU.scala 23:22]
  assign Regfile_MPORT_data = _T_1 ? io_res2rd : reg_value;
  assign Regfile_MPORT_addr = io_rd;
  assign Regfile_MPORT_mask = 1'h1;
  assign Regfile_MPORT_en = 1'h1;
  assign io_pc_next = 32'h29 == io_inst_now ? _io_pc_next_T_4 : _io_pc_next_T_10; // @[Mux.scala 81:58]
  assign io_res2rd = 32'hd == io_inst_now ? _io_res2rd_T_30 : _io_res2rd_T_66; // @[Mux.scala 81:58]
  assign Mem_modle_Raddr = src1_value + src2_value; // @[EXU.scala 30:30]
  assign Mem_modle_Waddr = src1_value + src2_value; // @[EXU.scala 30:30]
  assign Mem_modle_Wdata = 32'h28 == io_inst_now ? {{56'd0}, _Mem_modle_io_Wdata_T_6[7:0]} : _Mem_modle_io_Wdata_T_11; // @[Mux.scala 81:58]
  assign Mem_modle_Wmask = io_ctrl_sign_Wmask; // @[EXU.scala 81:24]
  assign Mem_modle_Write_en = io_ctrl_sign_Writemem_en; // @[EXU.scala 82:27]
  assign reg_trace_input_reg_0 = Regfile_reg_trace_io_input_reg_0_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_1 = Regfile_reg_trace_io_input_reg_1_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_2 = Regfile_reg_trace_io_input_reg_2_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_3 = Regfile_reg_trace_io_input_reg_3_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_4 = Regfile_reg_trace_io_input_reg_4_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_5 = Regfile_reg_trace_io_input_reg_5_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_6 = Regfile_reg_trace_io_input_reg_6_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_7 = Regfile_reg_trace_io_input_reg_7_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_8 = Regfile_reg_trace_io_input_reg_8_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_9 = Regfile_reg_trace_io_input_reg_9_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_10 = Regfile_reg_trace_io_input_reg_10_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_11 = Regfile_reg_trace_io_input_reg_11_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_12 = Regfile_reg_trace_io_input_reg_12_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_13 = Regfile_reg_trace_io_input_reg_13_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_14 = Regfile_reg_trace_io_input_reg_14_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_15 = Regfile_reg_trace_io_input_reg_15_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_16 = Regfile_reg_trace_io_input_reg_16_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_17 = Regfile_reg_trace_io_input_reg_17_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_18 = Regfile_reg_trace_io_input_reg_18_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_19 = Regfile_reg_trace_io_input_reg_19_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_20 = Regfile_reg_trace_io_input_reg_20_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_21 = Regfile_reg_trace_io_input_reg_21_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_22 = Regfile_reg_trace_io_input_reg_22_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_23 = Regfile_reg_trace_io_input_reg_23_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_24 = Regfile_reg_trace_io_input_reg_24_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_25 = Regfile_reg_trace_io_input_reg_25_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_26 = Regfile_reg_trace_io_input_reg_26_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_27 = Regfile_reg_trace_io_input_reg_27_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_28 = Regfile_reg_trace_io_input_reg_28_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_29 = Regfile_reg_trace_io_input_reg_29_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_30 = Regfile_reg_trace_io_input_reg_30_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_input_reg_31 = Regfile_reg_trace_io_input_reg_31_MPORT_data; // @[EXU.scala 71:57]
  assign reg_trace_pc = io_pc; // @[EXU.scala 72:21]
  always @(posedge clock) begin
    if (Regfile_MPORT_en & Regfile_MPORT_mask) begin
      Regfile[Regfile_MPORT_addr] <= Regfile_MPORT_data; // @[EXU.scala 23:22]
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
