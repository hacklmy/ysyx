/* verilator lint_off UNUSED */
module IDU(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_fs_to_ds_valid,
  output        io_ds_to_es_valid,
  input  [31:0] io_from_fs_inst,
  output        io_br_taken,
  output [63:0] io_br_target,
  output        io_br_taken_cancel,
  output        io_ds_allowin,
  output [4:0]  io_raddr1,
  output [4:0]  io_raddr2,
  input  [63:0] io_rdata1,
  input  [63:0] io_rdata2,
  output [63:0] io_to_es_pc,
  output [31:0] io_ALUop,
  output [63:0] io_src1,
  output [63:0] io_src2,
  output [4:0]  io_rf_dst,
  output [63:0] io_store_data,
  output        io_ctrl_sign_reg_write,
  output        io_ctrl_sign_Writemem_en,
  output        io_ctrl_sign_Readmem_en,
  output [7:0]  io_ctrl_sign_Wmask,
  output [2:0]  io_load_type,
  input         io_es_rf_we,
  input         io_ms_rf_we,
  input         io_ws_rf_we,
  input         io_es_valid,
  input         io_ms_valid,
  input         io_ws_valid,
  input  [4:0]  io_es_rf_dst,
  input  [4:0]  io_ms_rf_dst,
  input  [4:0]  io_ws_rf_dst,
  output        io_ds_valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg  ds_valid; // @[IDU.scala 79:27]
  reg [63:0] ds_pc; // @[IDU.scala 83:24]
  reg [31:0] inst; // @[IDU.scala 85:23]
  wire [31:0] _br_taken_T_20 = inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _br_taken_T_21 = 32'h6f == _br_taken_T_20; // @[Lookup.scala 31:38]
  wire [31:0] _br_taken_T_22 = inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _br_taken_T_23 = 32'h67 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _br_taken_T_25 = 32'h1063 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _br_taken_T_2 = $signed(io_rdata1) != $signed(io_rdata2); // @[IDU.scala 432:37]
  wire  _br_taken_T_27 = 32'h63 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _br_taken_T_6 = $signed(io_rdata1) == $signed(io_rdata2); // @[IDU.scala 433:37]
  wire  _br_taken_T_29 = 32'h5063 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _br_taken_T_10 = $signed(io_rdata1) >= $signed(io_rdata2); // @[IDU.scala 434:37]
  wire  _br_taken_T_31 = 32'h4063 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _br_taken_T_14 = $signed(io_rdata1) < $signed(io_rdata2); // @[IDU.scala 435:37]
  wire  _br_taken_T_33 = 32'h6063 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _br_taken_T_16 = io_rdata1 < io_rdata2; // @[IDU.scala 436:31]
  wire  _br_taken_T_35 = 32'h7063 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _br_taken_T_18 = io_rdata1 >= io_rdata2; // @[IDU.scala 437:31]
  wire  _br_taken_T_37 = 32'h73 == inst; // @[Lookup.scala 31:38]
  wire  _br_taken_T_39 = 32'h30200073 == inst; // @[Lookup.scala 31:38]
  wire  _br_taken_T_42 = _br_taken_T_35 ? _br_taken_T_18 : _br_taken_T_37 | _br_taken_T_39; // @[Lookup.scala 34:39]
  wire  _br_taken_T_43 = _br_taken_T_33 ? _br_taken_T_16 : _br_taken_T_42; // @[Lookup.scala 34:39]
  wire  _br_taken_T_44 = _br_taken_T_31 ? _br_taken_T_14 : _br_taken_T_43; // @[Lookup.scala 34:39]
  wire  _br_taken_T_45 = _br_taken_T_29 ? _br_taken_T_10 : _br_taken_T_44; // @[Lookup.scala 34:39]
  wire  _br_taken_T_46 = _br_taken_T_27 ? _br_taken_T_6 : _br_taken_T_45; // @[Lookup.scala 34:39]
  wire  _br_taken_T_47 = _br_taken_T_25 ? _br_taken_T_2 : _br_taken_T_46; // @[Lookup.scala 34:39]
  wire  br_taken = _br_taken_T_21 | (_br_taken_T_23 | _br_taken_T_47); // @[Lookup.scala 34:39]
  wire  _src1_is_pc_T_3 = 32'h17 == _br_taken_T_20; // @[Lookup.scala 31:38]
  wire  src1_is_pc = _br_taken_T_21 | (_src1_is_pc_T_3 | (_br_taken_T_25 | (_br_taken_T_27 | (_br_taken_T_29 | (
    _br_taken_T_31 | (_br_taken_T_33 | _br_taken_T_35)))))); // @[Lookup.scala 34:39]
  wire  _inst_type_T_1 = 32'h13 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_5 = 32'h37 == _br_taken_T_20; // @[Lookup.scala 31:38]
  wire  _inst_type_T_11 = 32'h3023 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_13 = 32'h3013 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_15 = 32'h2003 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_16 = inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_17 = 32'h3b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_19 = 32'h40000033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_25 = 32'h3003 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_27 = 32'h1b == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_29 = 32'h33 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_30 = inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_31 = 32'h40005013 == _inst_type_T_30; // @[Lookup.scala 31:38]
  wire  _inst_type_T_33 = 32'h4003 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_35 = 32'h1023 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_37 = 32'h23 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_39 = 32'h6033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_41 = 32'h4013 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_43 = 32'h7033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_45 = 32'h7013 == _br_taken_T_22; // @[Lookup.scala 31:38]
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
  wire  _inst_type_T_75 = 32'h2023 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_77 = 32'h1003 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_79 = 32'h5003 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_81 = 32'h2000033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_83 = 32'h200003b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_85 = 32'h200403b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_87 = 32'h200603b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_89 = 32'h4033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_91 = 32'h6013 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_93 = 32'h2005033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_95 = 32'h2004033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_97 = 32'h200503b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_99 = 32'h200703b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_101 = 32'h2007033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_103 = 32'h2006033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_105 = 32'h1033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_107 = 32'h5033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_109 = 32'h40005033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_111 = 32'h2013 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_113 = 32'h6003 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_115 = 32'h3 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_121 = 32'h1073 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_123 = 32'h2073 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_125 = 32'h3073 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire [6:0] _inst_type_T_126 = _inst_type_T_125 ? 7'h40 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_127 = _inst_type_T_123 ? 7'h40 : _inst_type_T_126; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_128 = _inst_type_T_121 ? 7'h40 : _inst_type_T_127; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_129 = _br_taken_T_37 ? 7'h40 : _inst_type_T_128; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_130 = _br_taken_T_35 ? 7'h45 : _inst_type_T_129; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_131 = _inst_type_T_115 ? 7'h40 : _inst_type_T_130; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_132 = _inst_type_T_113 ? 7'h40 : _inst_type_T_131; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_133 = _inst_type_T_111 ? 7'h40 : _inst_type_T_132; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_134 = _inst_type_T_109 ? 7'h41 : _inst_type_T_133; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_135 = _inst_type_T_107 ? 7'h41 : _inst_type_T_134; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_136 = _inst_type_T_105 ? 7'h41 : _inst_type_T_135; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_137 = _inst_type_T_103 ? 7'h41 : _inst_type_T_136; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_138 = _inst_type_T_101 ? 7'h41 : _inst_type_T_137; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_139 = _inst_type_T_99 ? 7'h41 : _inst_type_T_138; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_140 = _inst_type_T_97 ? 7'h41 : _inst_type_T_139; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_141 = _inst_type_T_95 ? 7'h41 : _inst_type_T_140; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_142 = _inst_type_T_93 ? 7'h41 : _inst_type_T_141; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_143 = _inst_type_T_91 ? 7'h40 : _inst_type_T_142; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_144 = _inst_type_T_89 ? 7'h41 : _inst_type_T_143; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_145 = _inst_type_T_87 ? 7'h41 : _inst_type_T_144; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_146 = _inst_type_T_85 ? 7'h41 : _inst_type_T_145; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_147 = _inst_type_T_83 ? 7'h41 : _inst_type_T_146; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_148 = _inst_type_T_81 ? 7'h41 : _inst_type_T_147; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_149 = _inst_type_T_79 ? 7'h40 : _inst_type_T_148; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_150 = _inst_type_T_77 ? 7'h40 : _inst_type_T_149; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_151 = _inst_type_T_75 ? 7'h44 : _inst_type_T_150; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_152 = _br_taken_T_33 ? 7'h45 : _inst_type_T_151; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_153 = _br_taken_T_31 ? 7'h45 : _inst_type_T_152; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_154 = _br_taken_T_29 ? 7'h45 : _inst_type_T_153; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_155 = _inst_type_T_67 ? 7'h41 : _inst_type_T_154; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_156 = _inst_type_T_65 ? 7'h41 : _inst_type_T_155; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_157 = _inst_type_T_63 ? 7'h41 : _inst_type_T_156; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_158 = _inst_type_T_61 ? 7'h41 : _inst_type_T_157; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_159 = _inst_type_T_59 ? 7'h40 : _inst_type_T_158; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_160 = _inst_type_T_57 ? 7'h40 : _inst_type_T_159; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_161 = _inst_type_T_55 ? 7'h40 : _inst_type_T_160; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_162 = _inst_type_T_53 ? 7'h40 : _inst_type_T_161; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_163 = _inst_type_T_51 ? 7'h40 : _inst_type_T_162; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_164 = _inst_type_T_49 ? 7'h41 : _inst_type_T_163; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_165 = _inst_type_T_47 ? 7'h41 : _inst_type_T_164; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_166 = _inst_type_T_45 ? 7'h40 : _inst_type_T_165; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_167 = _inst_type_T_43 ? 7'h41 : _inst_type_T_166; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_168 = _inst_type_T_41 ? 7'h40 : _inst_type_T_167; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_169 = _inst_type_T_39 ? 7'h41 : _inst_type_T_168; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_170 = _inst_type_T_37 ? 7'h44 : _inst_type_T_169; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_171 = _inst_type_T_35 ? 7'h44 : _inst_type_T_170; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_172 = _inst_type_T_33 ? 7'h40 : _inst_type_T_171; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_173 = _inst_type_T_31 ? 7'h40 : _inst_type_T_172; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_174 = _inst_type_T_29 ? 7'h41 : _inst_type_T_173; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_175 = _inst_type_T_27 ? 7'h40 : _inst_type_T_174; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_176 = _inst_type_T_25 ? 7'h40 : _inst_type_T_175; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_177 = _br_taken_T_27 ? 7'h45 : _inst_type_T_176; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_178 = _br_taken_T_25 ? 7'h45 : _inst_type_T_177; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_179 = _inst_type_T_19 ? 7'h41 : _inst_type_T_178; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_180 = _inst_type_T_17 ? 7'h41 : _inst_type_T_179; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_181 = _inst_type_T_15 ? 7'h40 : _inst_type_T_180; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_182 = _inst_type_T_13 ? 7'h40 : _inst_type_T_181; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_183 = _inst_type_T_11 ? 7'h44 : _inst_type_T_182; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_184 = _br_taken_T_23 ? 7'h40 : _inst_type_T_183; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_185 = _br_taken_T_21 ? 7'h43 : _inst_type_T_184; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_186 = _inst_type_T_5 ? 7'h42 : _inst_type_T_185; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_187 = _src1_is_pc_T_3 ? 7'h42 : _inst_type_T_186; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_188 = _inst_type_T_1 ? 7'h40 : _inst_type_T_187; // @[Lookup.scala 34:39]
  wire [31:0] inst_type = {{25'd0}, _inst_type_T_188}; // @[IDU.scala 184:25 210:15]
  wire [4:0] rs1 = inst[19:15]; // @[IDU.scala 205:16]
  wire  _src2_is_imm_T_4 = 32'h44 == inst_type; // @[Mux.scala 81:61]
  wire  src2_is_imm = 32'h45 == inst_type | (32'h43 == inst_type | (32'h44 == inst_type | (32'h42 == inst_type | 32'h40
     == inst_type))); // @[Mux.scala 81:58]
  wire [4:0] rs2 = inst[24:20]; // @[IDU.scala 204:16]
  wire  _conflict_T_43 = (~src2_is_imm | inst_type == 32'h44 | inst_type == 32'h45) & (rs2 == io_es_rf_dst & rs2 != 5'h0
     & io_es_rf_we & io_es_valid | rs2 == io_ms_rf_dst & rs2 != 5'h0 & io_ms_rf_we & io_ms_valid | rs2 == io_ws_rf_dst
     & rs2 != 5'h0 & io_ws_rf_we & io_ws_valid); // @[IDU.scala 442:309]
  wire  conflict = (~src1_is_pc | inst_type == 32'h45) & (rs1 == io_es_rf_dst & rs1 != 5'h0 & io_es_rf_we & io_es_valid
     | rs1 == io_ms_rf_dst & rs1 != 5'h0 & io_ms_rf_we & io_ms_valid | rs1 == io_ws_rf_dst & rs1 != 5'h0 & io_ws_rf_we
     & io_ws_valid) | _conflict_T_43; // @[IDU.scala 442:247]
  wire  ds_ready_go = ~conflict; // @[IDU.scala 104:20]
  wire  br_taken_cancel = br_taken & ds_ready_go & ds_valid; // @[IDU.scala 93:48]
  wire  ds_allowin = ~ds_valid | ds_ready_go; // @[IDU.scala 106:29]
  wire [4:0] rd = inst[11:7]; // @[IDU.scala 206:15]
  wire [11:0] imm_imm = inst[31:20]; // @[IDU.scala 50:23]
  wire [51:0] _imm_T_2 = imm_imm[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_3 = {_imm_T_2,imm_imm}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_1 = {inst[31],inst[19:12],inst[20],inst[30:21]}; // @[Cat.scala 31:58]
  wire [42:0] _imm_T_6 = imm_imm_1[19] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_7 = {_imm_T_6,inst[31],inst[19:12],inst[20],inst[30:21],1'h0}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_2 = inst[31:12]; // @[IDU.scala 54:23]
  wire [31:0] _imm_T_10 = imm_imm_2[19] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_12 = {_imm_T_10,imm_imm_2,12'h0}; // @[Cat.scala 31:58]
  wire [11:0] imm_imm_3 = {inst[31:25],rd}; // @[Cat.scala 31:58]
  wire [51:0] _imm_T_15 = imm_imm_3[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_16 = {_imm_T_15,inst[31:25],rd}; // @[Cat.scala 31:58]
  wire [11:0] imm_imm_4 = {inst[31],inst[7],inst[30:25],inst[11:8]}; // @[Cat.scala 31:58]
  wire [50:0] _imm_T_19 = imm_imm_4[11] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_20 = {_imm_T_19,inst[31],inst[7],inst[30:25],inst[11:8],1'h0}; // @[Cat.scala 31:58]
  wire [63:0] _imm_T_22 = 32'h40 == inst_type ? _imm_T_3 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_24 = 32'h43 == inst_type ? _imm_T_7 : _imm_T_22; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_26 = 32'h42 == inst_type ? _imm_T_12 : _imm_T_24; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_28 = 32'h44 == inst_type ? _imm_T_16 : _imm_T_26; // @[Mux.scala 81:58]
  wire [63:0] imm = 32'h45 == inst_type ? _imm_T_20 : _imm_T_28; // @[Mux.scala 81:58]
  wire  _ALUop_T_3 = 32'h100073 == inst; // @[Lookup.scala 31:38]
  wire [6:0] _ALUop_T_118 = _inst_type_T_125 ? 7'h47 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_119 = _inst_type_T_123 ? 7'h46 : _ALUop_T_118; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_120 = _inst_type_T_121 ? 7'h3f : _ALUop_T_119; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_121 = _br_taken_T_39 ? 7'h3e : _ALUop_T_120; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_122 = _br_taken_T_37 ? 7'h3d : _ALUop_T_121; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_123 = _inst_type_T_115 ? 7'hf : _ALUop_T_122; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_124 = _inst_type_T_113 ? 7'hf : _ALUop_T_123; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_125 = _inst_type_T_111 ? 7'h1f : _ALUop_T_124; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_126 = _inst_type_T_109 ? 7'h39 : _ALUop_T_125; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_127 = _inst_type_T_107 ? 7'h38 : _ALUop_T_126; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_128 = _inst_type_T_105 ? 7'h37 : _ALUop_T_127; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_129 = _inst_type_T_103 ? 7'h34 : _ALUop_T_128; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_130 = _inst_type_T_101 ? 7'h33 : _ALUop_T_129; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_131 = _inst_type_T_99 ? 7'h32 : _ALUop_T_130; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_132 = _inst_type_T_97 ? 7'h35 : _ALUop_T_131; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_133 = _inst_type_T_95 ? 7'h31 : _ALUop_T_132; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_134 = _inst_type_T_93 ? 7'h30 : _ALUop_T_133; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_135 = _inst_type_T_91 ? 7'hb : _ALUop_T_134; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_136 = _inst_type_T_89 ? 7'h2e : _ALUop_T_135; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_137 = _inst_type_T_87 ? 7'h14 : _ALUop_T_136; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_138 = _inst_type_T_85 ? 7'h13 : _ALUop_T_137; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_139 = _inst_type_T_83 ? 7'h12 : _ALUop_T_138; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_140 = _inst_type_T_81 ? 7'h11 : _ALUop_T_139; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_141 = _inst_type_T_79 ? 7'hf : _ALUop_T_140; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_142 = _inst_type_T_77 ? 7'hf : _ALUop_T_141; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_143 = _inst_type_T_75 ? 7'hf : _ALUop_T_142; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_144 = _inst_type_T_67 ? 7'h1f : _ALUop_T_143; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_145 = _inst_type_T_65 ? 7'h1e : _ALUop_T_144; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_146 = _inst_type_T_63 ? 7'h1d : _ALUop_T_145; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_147 = _inst_type_T_61 ? 7'h1c : _ALUop_T_146; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_148 = _inst_type_T_59 ? 7'h1d : _ALUop_T_147; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_149 = _inst_type_T_57 ? 7'h1c : _ALUop_T_148; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_150 = _inst_type_T_55 ? 7'h16 : _ALUop_T_149; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_151 = _inst_type_T_53 ? 7'h38 : _ALUop_T_150; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_152 = _inst_type_T_51 ? 7'h37 : _ALUop_T_151; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_153 = _inst_type_T_49 ? 7'h16 : _ALUop_T_152; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_154 = _inst_type_T_47 ? 7'hd : _ALUop_T_153; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_155 = _inst_type_T_45 ? 7'h8 : _ALUop_T_154; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_156 = _inst_type_T_43 ? 7'h8 : _ALUop_T_155; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_157 = _inst_type_T_41 ? 7'h2e : _ALUop_T_156; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_158 = _inst_type_T_39 ? 7'hb : _ALUop_T_157; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_159 = _inst_type_T_37 ? 7'hf : _ALUop_T_158; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_160 = _inst_type_T_35 ? 7'hf : _ALUop_T_159; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_161 = _inst_type_T_33 ? 7'hf : _ALUop_T_160; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_162 = _inst_type_T_31 ? 7'h15 : _ALUop_T_161; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_163 = _inst_type_T_29 ? 7'hf : _ALUop_T_162; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_164 = _inst_type_T_27 ? 7'hc : _ALUop_T_163; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_165 = _inst_type_T_25 ? 7'hf : _ALUop_T_164; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_166 = _inst_type_T_19 ? 7'he : _ALUop_T_165; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_167 = _inst_type_T_17 ? 7'hc : _ALUop_T_166; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_168 = _inst_type_T_15 ? 7'hf : _ALUop_T_167; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_169 = _inst_type_T_13 ? 7'h1e : _ALUop_T_168; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_170 = _inst_type_T_11 ? 7'hf : _ALUop_T_169; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_171 = _br_taken_T_23 ? 7'h6 : _ALUop_T_170; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_172 = _br_taken_T_21 ? 7'h5 : _ALUop_T_171; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_173 = _inst_type_T_5 ? 7'h4 : _ALUop_T_172; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_174 = _src1_is_pc_T_3 ? 7'hf : _ALUop_T_173; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_175 = _ALUop_T_3 ? 7'h2 : _ALUop_T_174; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_176 = _inst_type_T_1 ? 7'hf : _ALUop_T_175; // @[Lookup.scala 34:39]
  wire  _reg_write_T_26 = _br_taken_T_39 ? 1'h0 : 1'h1; // @[Lookup.scala 34:39]
  wire  _reg_write_T_27 = _br_taken_T_37 ? 1'h0 : _reg_write_T_26; // @[Lookup.scala 34:39]
  wire  _reg_write_T_28 = _br_taken_T_35 ? 1'h0 : _reg_write_T_27; // @[Lookup.scala 34:39]
  wire  _reg_write_T_29 = _br_taken_T_33 ? 1'h0 : _reg_write_T_28; // @[Lookup.scala 34:39]
  wire  _reg_write_T_30 = _br_taken_T_31 ? 1'h0 : _reg_write_T_29; // @[Lookup.scala 34:39]
  wire  _reg_write_T_31 = _br_taken_T_29 ? 1'h0 : _reg_write_T_30; // @[Lookup.scala 34:39]
  wire  _reg_write_T_32 = _br_taken_T_27 ? 1'h0 : _reg_write_T_31; // @[Lookup.scala 34:39]
  wire  _reg_write_T_33 = _br_taken_T_25 ? 1'h0 : _reg_write_T_32; // @[Lookup.scala 34:39]
  wire  _reg_write_T_34 = _inst_type_T_75 ? 1'h0 : _reg_write_T_33; // @[Lookup.scala 34:39]
  wire  _reg_write_T_35 = _inst_type_T_37 ? 1'h0 : _reg_write_T_34; // @[Lookup.scala 34:39]
  wire  _reg_write_T_36 = _inst_type_T_35 ? 1'h0 : _reg_write_T_35; // @[Lookup.scala 34:39]
  wire  _reg_write_T_37 = _inst_type_T_11 ? 1'h0 : _reg_write_T_36; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_14 = _inst_type_T_79 ? 3'h6 : 3'h0; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_15 = _inst_type_T_115 ? 3'h5 : _load_type_T_14; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_16 = _inst_type_T_77 ? 3'h4 : _load_type_T_15; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_17 = _inst_type_T_113 ? 3'h3 : _load_type_T_16; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_18 = _inst_type_T_33 ? 3'h2 : _load_type_T_17; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_19 = _inst_type_T_25 ? 3'h1 : _load_type_T_18; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_8 = _inst_type_T_75 ? 4'hf : 4'h0; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_9 = _inst_type_T_37 ? 4'h1 : _Wmask_T_8; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_10 = _inst_type_T_35 ? 4'h3 : _Wmask_T_9; // @[Lookup.scala 34:39]
  wire [7:0] Wmask = _inst_type_T_11 ? 8'hff : {{4'd0}, _Wmask_T_10}; // @[Lookup.scala 34:39]
  wire [63:0] src1 = src1_is_pc ? ds_pc : io_rdata1; // @[IDU.scala 420:16]
  wire [63:0] src2 = src2_is_imm ? imm : io_rdata2; // @[IDU.scala 421:16]
  wire [63:0] _br_target_T_1 = src1 + src2; // @[IDU.scala 424:35]
  wire [63:0] _br_target_T_4 = _br_target_T_1 & 64'hfffffffffffffffe; // @[IDU.scala 425:31]
  wire [31:0] _io_store_data_T_11 = _inst_type_T_75 ? io_rdata2[31:0] : 32'h0; // @[Lookup.scala 34:39]
  wire [31:0] _io_store_data_T_12 = _inst_type_T_37 ? {{24'd0}, io_rdata2[7:0]} : _io_store_data_T_11; // @[Lookup.scala 34:39]
  wire [31:0] _io_store_data_T_13 = _inst_type_T_35 ? {{16'd0}, io_rdata2[15:0]} : _io_store_data_T_12; // @[Lookup.scala 34:39]
  wire  _T_2 = ~reset; // @[IDU.scala 470:11]
  assign io_ds_to_es_valid = ds_valid & ds_ready_go; // @[IDU.scala 105:32]
  assign io_br_taken = br_taken & ds_valid; // @[IDU.scala 444:29]
  assign io_br_target = _br_taken_T_23 ? _br_target_T_4 : _br_target_T_1; // @[Lookup.scala 34:39]
  assign io_br_taken_cancel = br_taken_cancel & ds_valid; // @[IDU.scala 445:43]
  assign io_ds_allowin = ~ds_valid | ds_ready_go; // @[IDU.scala 106:29]
  assign io_raddr1 = inst[19:15]; // @[IDU.scala 205:16]
  assign io_raddr2 = inst[24:20]; // @[IDU.scala 204:16]
  assign io_to_es_pc = ds_pc; // @[IDU.scala 467:17]
  assign io_ALUop = {{25'd0}, _ALUop_T_176}; // @[IDU.scala 183:21 284:11]
  assign io_src1 = src1_is_pc ? ds_pc : io_rdata1; // @[IDU.scala 420:16]
  assign io_src2 = src2_is_imm ? imm : io_rdata2; // @[IDU.scala 421:16]
  assign io_rf_dst = inst[11:7]; // @[IDU.scala 206:15]
  assign io_store_data = _inst_type_T_11 ? io_rdata2 : {{32'd0}, _io_store_data_T_13}; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_reg_write = _ALUop_T_3 ? 1'h0 : _reg_write_T_37; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Writemem_en = 32'h44 == inst_type; // @[Mux.scala 81:61]
  assign io_ctrl_sign_Readmem_en = _inst_type_T_25 | (_inst_type_T_15 | (_inst_type_T_113 | (_inst_type_T_77 | (
    _inst_type_T_79 | (_inst_type_T_115 | _inst_type_T_33))))); // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Wmask = _inst_type_T_11 ? 8'hff : {{4'd0}, _Wmask_T_10}; // @[Lookup.scala 34:39]
  assign io_load_type = _inst_type_T_15 ? 3'h0 : _load_type_T_19; // @[Lookup.scala 34:39]
  assign io_ds_valid = ds_valid; // @[IDU.scala 469:17]
  always @(posedge clock) begin
    if (reset) begin // @[IDU.scala 79:27]
      ds_valid <= 1'h0; // @[IDU.scala 79:27]
    end else if (br_taken_cancel) begin // @[IDU.scala 95:26]
      ds_valid <= 1'h0; // @[IDU.scala 96:18]
    end else if (ds_allowin) begin // @[IDU.scala 97:27]
      ds_valid <= io_fs_to_ds_valid; // @[IDU.scala 98:18]
    end
    if (reset) begin // @[IDU.scala 83:24]
      ds_pc <= 64'h0; // @[IDU.scala 83:24]
    end else if (io_fs_to_ds_valid & ds_allowin) begin // @[IDU.scala 100:40]
      ds_pc <= io_pc; // @[IDU.scala 101:15]
    end
    if (reset) begin // @[IDU.scala 85:23]
      inst <= 32'h0; // @[IDU.scala 85:23]
    end else if (io_fs_to_ds_valid & ds_allowin) begin // @[IDU.scala 100:40]
      inst <= io_from_fs_inst; // @[IDU.scala 102:14]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"ds_pc:%x ds_valid:%d br_taken:%d src1:%x src2:%x  wen:%d wmask:%x\n",ds_pc,ds_valid,
            br_taken,io_src1,io_src2,_src2_is_imm_T_4,Wmask); // @[IDU.scala 470:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2) begin
          $fwrite(32'h80000002,"conflict:%d es_rf_we:%d rs2:%d es_rf_dst:%d\n",conflict,io_es_rf_we,rs2,io_es_rf_dst); // @[IDU.scala 471:11]
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
  _RAND_0 = {1{`RANDOM}};
  ds_valid = _RAND_0[0:0];
  _RAND_1 = {2{`RANDOM}};
  ds_pc = _RAND_1[63:0];
  _RAND_2 = {1{`RANDOM}};
  inst = _RAND_2[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
/* verilator lint_on UNUSED */
