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
  wire [4:0] rd = io_inst[11:7]; // @[IDU.scala 120:15]
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
  wire  _inst_type_T_49 = 32'h103b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_51 = 32'h1013 == _inst_type_T_30; // @[Lookup.scala 31:38]
  wire  _inst_type_T_53 = 32'h5013 == _inst_type_T_30; // @[Lookup.scala 31:38]
  wire  _inst_type_T_55 = 32'h101b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_57 = 32'h4000501b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_59 = 32'h501b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_61 = 32'h4000503b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_63 = 32'h503b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_65 = 32'h3033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_67 = 32'h2033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_69 = 32'h5063 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_71 = 32'h4063 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_73 = 32'h6063 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_75 = 32'h2023 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_77 = 32'h1003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_79 = 32'h5003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_81 = 32'h2000033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_83 = 32'h200003b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_85 = 32'h200403b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_87 = 32'h200603b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire [6:0] _inst_type_T_88 = _inst_type_T_87 ? 7'h41 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_89 = _inst_type_T_85 ? 7'h41 : _inst_type_T_88; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_90 = _inst_type_T_83 ? 7'h41 : _inst_type_T_89; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_91 = _inst_type_T_81 ? 7'h41 : _inst_type_T_90; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_92 = _inst_type_T_79 ? 7'h40 : _inst_type_T_91; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_93 = _inst_type_T_77 ? 7'h40 : _inst_type_T_92; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_94 = _inst_type_T_75 ? 7'h44 : _inst_type_T_93; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_95 = _inst_type_T_73 ? 7'h45 : _inst_type_T_94; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_96 = _inst_type_T_71 ? 7'h45 : _inst_type_T_95; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_97 = _inst_type_T_69 ? 7'h45 : _inst_type_T_96; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_98 = _inst_type_T_67 ? 7'h41 : _inst_type_T_97; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_99 = _inst_type_T_65 ? 7'h41 : _inst_type_T_98; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_100 = _inst_type_T_63 ? 7'h41 : _inst_type_T_99; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_101 = _inst_type_T_61 ? 7'h41 : _inst_type_T_100; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_102 = _inst_type_T_59 ? 7'h40 : _inst_type_T_101; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_103 = _inst_type_T_57 ? 7'h40 : _inst_type_T_102; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_104 = _inst_type_T_55 ? 7'h40 : _inst_type_T_103; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_105 = _inst_type_T_53 ? 7'h40 : _inst_type_T_104; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_106 = _inst_type_T_51 ? 7'h40 : _inst_type_T_105; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_107 = _inst_type_T_49 ? 7'h41 : _inst_type_T_106; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_108 = _inst_type_T_47 ? 7'h41 : _inst_type_T_107; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_109 = _inst_type_T_45 ? 7'h40 : _inst_type_T_108; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_110 = _inst_type_T_43 ? 7'h41 : _inst_type_T_109; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_111 = _inst_type_T_41 ? 7'h40 : _inst_type_T_110; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_112 = _inst_type_T_39 ? 7'h41 : _inst_type_T_111; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_113 = _inst_type_T_37 ? 7'h44 : _inst_type_T_112; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_114 = _inst_type_T_35 ? 7'h44 : _inst_type_T_113; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_115 = _inst_type_T_33 ? 7'h40 : _inst_type_T_114; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_116 = _inst_type_T_31 ? 7'h40 : _inst_type_T_115; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_117 = _inst_type_T_29 ? 7'h41 : _inst_type_T_116; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_118 = _inst_type_T_27 ? 7'h40 : _inst_type_T_117; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_119 = _inst_type_T_25 ? 7'h40 : _inst_type_T_118; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_120 = _inst_type_T_23 ? 7'h45 : _inst_type_T_119; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_121 = _inst_type_T_21 ? 7'h45 : _inst_type_T_120; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_122 = _inst_type_T_19 ? 7'h41 : _inst_type_T_121; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_123 = _inst_type_T_17 ? 7'h41 : _inst_type_T_122; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_124 = _inst_type_T_15 ? 7'h40 : _inst_type_T_123; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_125 = _inst_type_T_13 ? 7'h40 : _inst_type_T_124; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_126 = _inst_type_T_11 ? 7'h44 : _inst_type_T_125; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_127 = _inst_type_T_9 ? 7'h40 : _inst_type_T_126; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_128 = _inst_type_T_7 ? 7'h43 : _inst_type_T_127; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_129 = _inst_type_T_5 ? 7'h42 : _inst_type_T_128; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_130 = _inst_type_T_3 ? 7'h42 : _inst_type_T_129; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_131 = _inst_type_T_1 ? 7'h40 : _inst_type_T_130; // @[Lookup.scala 34:39]
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
  wire [31:0] inst_type = {{25'd0}, _inst_type_T_131}; // @[IDU.scala 105:25 122:15]
  wire [63:0] _imm_T_22 = 32'h40 == inst_type ? _imm_T_3 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_24 = 32'h43 == inst_type ? _imm_T_7 : _imm_T_22; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_26 = 32'h42 == inst_type ? _imm_T_12 : _imm_T_24; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_28 = 32'h44 == inst_type ? _imm_T_16 : _imm_T_26; // @[Mux.scala 81:58]
  wire  _inst_now_T_3 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
  wire [4:0] _inst_now_T_88 = _inst_type_T_85 ? 5'h13 : 5'h0; // @[Lookup.scala 34:39]
  wire [4:0] _inst_now_T_89 = _inst_type_T_83 ? 5'h12 : _inst_now_T_88; // @[Lookup.scala 34:39]
  wire [4:0] _inst_now_T_90 = _inst_type_T_81 ? 5'h11 : _inst_now_T_89; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_91 = _inst_type_T_79 ? 6'h25 : {{1'd0}, _inst_now_T_90}; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_92 = _inst_type_T_77 ? 6'h24 : _inst_now_T_91; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_93 = _inst_type_T_75 ? 6'h27 : _inst_now_T_92; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_94 = _inst_type_T_73 ? 6'h2d : _inst_now_T_93; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_95 = _inst_type_T_71 ? 6'h2c : _inst_now_T_94; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_96 = _inst_type_T_69 ? 6'h2b : _inst_now_T_95; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_97 = _inst_type_T_67 ? 6'h1f : _inst_now_T_96; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_98 = _inst_type_T_65 ? 6'h1e : _inst_now_T_97; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_99 = _inst_type_T_63 ? 6'h1d : _inst_now_T_98; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_100 = _inst_type_T_61 ? 6'h1c : _inst_now_T_99; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_101 = _inst_type_T_59 ? 6'h1b : _inst_now_T_100; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_102 = _inst_type_T_57 ? 6'h1a : _inst_now_T_101; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_103 = _inst_type_T_55 ? 6'h19 : _inst_now_T_102; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_104 = _inst_type_T_53 ? 6'h18 : _inst_now_T_103; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_105 = _inst_type_T_51 ? 6'h17 : _inst_now_T_104; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_106 = _inst_type_T_49 ? 6'h16 : _inst_now_T_105; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_107 = _inst_type_T_47 ? 6'hd : _inst_now_T_106; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_108 = _inst_type_T_45 ? 6'h9 : _inst_now_T_107; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_109 = _inst_type_T_43 ? 6'h8 : _inst_now_T_108; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_110 = _inst_type_T_41 ? 6'ha : _inst_now_T_109; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_111 = _inst_type_T_39 ? 6'hb : _inst_now_T_110; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_112 = _inst_type_T_37 ? 6'h28 : _inst_now_T_111; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_113 = _inst_type_T_35 ? 6'h26 : _inst_now_T_112; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_114 = _inst_type_T_33 ? 6'h23 : _inst_now_T_113; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_115 = _inst_type_T_31 ? 6'h15 : _inst_now_T_114; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_116 = _inst_type_T_29 ? 6'hf : _inst_now_T_115; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_117 = _inst_type_T_27 ? 6'h10 : _inst_now_T_116; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_118 = _inst_type_T_25 ? 6'h22 : _inst_now_T_117; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_119 = _inst_type_T_23 ? 6'h29 : _inst_now_T_118; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_120 = _inst_type_T_21 ? 6'h2a : _inst_now_T_119; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_121 = _inst_type_T_19 ? 6'he : _inst_now_T_120; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_122 = _inst_type_T_17 ? 6'hc : _inst_now_T_121; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_123 = _inst_type_T_15 ? 6'h21 : _inst_now_T_122; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_124 = _inst_type_T_13 ? 6'h20 : _inst_now_T_123; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_125 = _inst_type_T_11 ? 6'h7 : _inst_now_T_124; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_126 = _inst_type_T_9 ? 6'h6 : _inst_now_T_125; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_127 = _inst_type_T_7 ? 6'h5 : _inst_now_T_126; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_128 = _inst_type_T_5 ? 6'h4 : _inst_now_T_127; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_129 = _inst_type_T_3 ? 6'h3 : _inst_now_T_128; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_130 = _inst_now_T_3 ? 6'h2 : _inst_now_T_129; // @[Lookup.scala 34:39]
  wire [5:0] _inst_now_T_131 = _inst_type_T_1 ? 6'h1 : _inst_now_T_130; // @[Lookup.scala 34:39]
  wire  _reg_write_T_18 = _inst_type_T_73 ? 1'h0 : 1'h1; // @[Lookup.scala 34:39]
  wire  _reg_write_T_19 = _inst_type_T_71 ? 1'h0 : _reg_write_T_18; // @[Lookup.scala 34:39]
  wire  _reg_write_T_20 = _inst_type_T_69 ? 1'h0 : _reg_write_T_19; // @[Lookup.scala 34:39]
  wire  _reg_write_T_21 = _inst_type_T_23 ? 1'h0 : _reg_write_T_20; // @[Lookup.scala 34:39]
  wire  _reg_write_T_22 = _inst_type_T_21 ? 1'h0 : _reg_write_T_21; // @[Lookup.scala 34:39]
  wire  _reg_write_T_23 = _inst_type_T_37 ? 1'h0 : _reg_write_T_22; // @[Lookup.scala 34:39]
  wire  _reg_write_T_24 = _inst_type_T_35 ? 1'h0 : _reg_write_T_23; // @[Lookup.scala 34:39]
  wire  _reg_write_T_25 = _inst_type_T_11 ? 1'h0 : _reg_write_T_24; // @[Lookup.scala 34:39]
  wire [1:0] _Wmask_T_8 = _inst_type_T_75 ? 2'h3 : 2'h0; // @[Lookup.scala 34:39]
  wire [1:0] _Wmask_T_9 = _inst_type_T_37 ? 2'h1 : _Wmask_T_8; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_10 = _inst_type_T_35 ? 4'hf : {{2'd0}, _Wmask_T_9}; // @[Lookup.scala 34:39]
  assign io_inst_now = {{26'd0}, _inst_now_T_131}; // @[IDU.scala 104:24 177:14]
  assign io_rs1 = io_inst[19:15]; // @[IDU.scala 119:16]
  assign io_rs2 = io_inst[24:20]; // @[IDU.scala 118:16]
  assign io_rd = io_inst[11:7]; // @[IDU.scala 120:15]
  assign io_imm = 32'h45 == inst_type ? _imm_T_20 : _imm_T_28; // @[Mux.scala 81:58]
  assign io_ctrl_sign_reg_write = _inst_now_T_3 ? 1'h0 : _reg_write_T_25; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_src2_is_imm = 32'h45 == inst_type | (32'h43 == inst_type | (32'h44 == inst_type | (32'h42 ==
    inst_type | 32'h40 == inst_type))); // @[Mux.scala 81:58]
  assign io_ctrl_sign_src1_is_pc = _inst_type_T_7 | (_inst_type_T_3 | (_inst_type_T_21 | (_inst_type_T_23 | (
    _inst_type_T_69 | (_inst_type_T_71 | _inst_type_T_73))))); // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Writemem_en = 32'h44 == inst_type; // @[Mux.scala 81:61]
  assign io_ctrl_sign_Wmask = _inst_type_T_11 ? 8'hff : {{4'd0}, _Wmask_T_10}; // @[Lookup.scala 34:39]
endmodule
/* verilator lint_on UNUSED */
