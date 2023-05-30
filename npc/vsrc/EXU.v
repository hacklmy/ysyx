/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
module EXU(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_ds_to_es_valid,
  input  [31:0] io_inst_now,
  input  [4:0]  io_src1_value,
  input  [4:0]  io_src2_value,
  input  [4:0]  io_rf_dst,
  input  [63:0] io_store_data,
  output        io_es_to_ms_valid,
  output [63:0] io_to_ms_pc,
  output [63:0] io_to_ms_alures,
  output [63:0] io_to_ms_store_data,
  output        io_to_ms_wen,
  output [7:0]  io_to_ms_wstrb,
  output        io_to_ms_ren,
  output [63:0] io_to_ms_maddr,
  output [4:0]  io_to_ms_rf_dst,
  output        io_to_ms_rf_we,
  input         io_ctrl_sign_reg_write,
  input         io_ctrl_sign_Writemem_en,
  input         io_ctrl_sign_Readmem_en,
  input  [7:0]  io_ctrl_sign_Wmask,
  output        io_es_valid,
  output        io_es_rf_we,
  output [4:0]  io_es_rf_dst
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] es_pc; // @[EXU.scala 35:24]
  reg  es_valid; // @[EXU.scala 36:27]
  reg [4:0] es_rd; // @[EXU.scala 40:24]
  reg  es_rf_we; // @[EXU.scala 41:27]
  reg [63:0] src1_value; // @[EXU.scala 43:29]
  reg [63:0] src2_value; // @[EXU.scala 44:29]
  reg [63:0] store_data; // @[EXU.scala 45:29]
  reg [7:0] st_wstrb; // @[EXU.scala 46:27]
  reg  st_we; // @[EXU.scala 47:24]
  reg  ld_we; // @[EXU.scala 48:24]
  wire [63:0] add_res = src1_value + src2_value; // @[EXU.scala 88:30]
  wire [63:0] sub_res = src1_value - src2_value; // @[EXU.scala 89:30]
  wire [63:0] sra_res = $signed(src1_value) >>> src2_value[5:0]; // @[EXU.scala 90:60]
  wire [63:0] srl_res = src1_value >> src2_value[5:0]; // @[EXU.scala 91:30]
  wire [126:0] _GEN_3 = {{63'd0}, src1_value}; // @[EXU.scala 92:30]
  wire [126:0] sll_res = _GEN_3 << src2_value[5:0]; // @[EXU.scala 92:30]
  wire [31:0] _sraw_res_T_1 = src1_value[31:0]; // @[EXU.scala 93:43]
  wire [31:0] sraw_res = $signed(_sraw_res_T_1) >>> src2_value[4:0]; // @[EXU.scala 93:46]
  wire [31:0] srlw_res = src1_value[31:0] >> src2_value[4:0]; // @[EXU.scala 94:37]
  wire [62:0] _GEN_11 = {{31'd0}, src1_value[31:0]}; // @[EXU.scala 95:37]
  wire [62:0] sllw_res = _GEN_11 << src2_value[4:0]; // @[EXU.scala 95:37]
  wire [63:0] or_res = src1_value | src2_value; // @[EXU.scala 96:29]
  wire [63:0] xor_res = src1_value ^ src2_value; // @[EXU.scala 97:30]
  wire [63:0] and_res = src1_value & src2_value; // @[EXU.scala 98:30]
  wire [127:0] _mlu_res_T = src1_value * src2_value; // @[EXU.scala 99:31]
  wire [63:0] mlu_res = _mlu_res_T[63:0]; // @[EXU.scala 99:44]
  wire [63:0] _mluw_res_T_2 = src1_value[31:0] * src2_value[31:0]; // @[EXU.scala 100:38]
  wire [31:0] mluw_res = _mluw_res_T_2[31:0]; // @[EXU.scala 100:57]
  wire [31:0] _divw_res_T_3 = src2_value[31:0]; // @[EXU.scala 101:64]
  wire [32:0] _divw_res_T_4 = $signed(_sraw_res_T_1) / $signed(_divw_res_T_3); // @[EXU.scala 101:45]
  wire [31:0] divw_res = _divw_res_T_4[31:0]; // @[EXU.scala 101:71]
  wire [31:0] divuw_res = src1_value[31:0] / src2_value[31:0]; // @[EXU.scala 102:39]
  wire [31:0] remw_res = $signed(_sraw_res_T_1) % $signed(_divw_res_T_3); // @[EXU.scala 103:71]
  wire [31:0] remuw_res = src1_value[31:0] % src2_value[31:0]; // @[EXU.scala 104:39]
  wire [64:0] div_res = $signed(src1_value) / $signed(src2_value); // @[EXU.scala 105:59]
  wire [63:0] divu_res = src1_value / src2_value; // @[EXU.scala 106:31]
  wire [63:0] rem_res = $signed(src1_value) % $signed(src2_value); // @[EXU.scala 107:59]
  wire [63:0] remu_res = src1_value % src2_value; // @[EXU.scala 108:31]
  wire [63:0] _alu_res_T_1 = es_pc + 64'h4; // @[EXU.scala 113:24]
  wire  _alu_res_T_4 = src1_value < src2_value; // @[EXU.scala 115:34]
  wire  _alu_res_T_10 = $signed(src1_value) < $signed(src2_value); // @[EXU.scala 117:42]
  wire [31:0] _alu_res_T_18 = add_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_20 = {_alu_res_T_18,add_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_28 = sub_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_30 = {_alu_res_T_28,sub_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_33 = sllw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_35 = {_alu_res_T_33,sllw_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_43 = sraw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _alu_res_T_44 = $signed(_sraw_res_T_1) >>> src2_value[4:0]; // @[EXU.scala 142:56]
  wire [63:0] _alu_res_T_45 = {_alu_res_T_43,_alu_res_T_44}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_48 = srlw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_50 = {_alu_res_T_48,srlw_res}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_63 = mluw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_64 = {_alu_res_T_63,mluw_res}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_67 = divw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_68 = {_alu_res_T_67,divw_res}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_71 = divuw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_72 = {_alu_res_T_71,divuw_res}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_75 = remw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_76 = {_alu_res_T_75,remw_res}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_79 = remuw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_80 = {_alu_res_T_79,remuw_res}; // @[Cat.scala 31:58]
  wire [63:0] _alu_res_T_82 = 32'h1 == io_inst_now ? add_res : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_84 = 32'h3 == io_inst_now ? add_res : _alu_res_T_82; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_86 = 32'h4 == io_inst_now ? src2_value : _alu_res_T_84; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_88 = 32'h5 == io_inst_now ? _alu_res_T_1 : _alu_res_T_86; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_90 = 32'h6 == io_inst_now ? _alu_res_T_1 : _alu_res_T_88; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_92 = 32'h20 == io_inst_now ? {{63'd0}, _alu_res_T_4} : _alu_res_T_90; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_94 = 32'h1e == io_inst_now ? {{63'd0}, _alu_res_T_4} : _alu_res_T_92; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_96 = 32'h36 == io_inst_now ? {{63'd0}, _alu_res_T_10} : _alu_res_T_94; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_98 = 32'h1f == io_inst_now ? {{63'd0}, _alu_res_T_10} : _alu_res_T_96; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_100 = 32'hc == io_inst_now ? _alu_res_T_20 : _alu_res_T_98; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_102 = 32'he == io_inst_now ? sub_res : _alu_res_T_100; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_104 = 32'h10 == io_inst_now ? _alu_res_T_20 : _alu_res_T_102; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_106 = 32'hf == io_inst_now ? add_res : _alu_res_T_104; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_108 = 32'h15 == io_inst_now ? sra_res : _alu_res_T_106; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_110 = 32'hb == io_inst_now ? or_res : _alu_res_T_108; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_112 = 32'h2f == io_inst_now ? or_res : _alu_res_T_110; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_114 = 32'h2e == io_inst_now ? xor_res : _alu_res_T_112; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_116 = 32'ha == io_inst_now ? xor_res : _alu_res_T_114; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_118 = 32'h8 == io_inst_now ? and_res : _alu_res_T_116; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_120 = 32'h9 == io_inst_now ? and_res : _alu_res_T_118; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_122 = 32'hd == io_inst_now ? _alu_res_T_30 : _alu_res_T_120; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_124 = 32'h16 == io_inst_now ? _alu_res_T_35 : _alu_res_T_122; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_126 = 32'h17 == io_inst_now ? sll_res : {{63'd0}, _alu_res_T_124}; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_128 = 32'h18 == io_inst_now ? {{63'd0}, srl_res} : _alu_res_T_126; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_130 = 32'h19 == io_inst_now ? {{63'd0}, _alu_res_T_35} : _alu_res_T_128; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_132 = 32'h1a == io_inst_now ? {{63'd0}, _alu_res_T_45} : _alu_res_T_130; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_134 = 32'h1b == io_inst_now ? {{63'd0}, _alu_res_T_50} : _alu_res_T_132; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_136 = 32'h1c == io_inst_now ? {{63'd0}, _alu_res_T_45} : _alu_res_T_134; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_138 = 32'h1d == io_inst_now ? {{63'd0}, _alu_res_T_50} : _alu_res_T_136; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_140 = 32'h11 == io_inst_now ? {{63'd0}, mlu_res} : _alu_res_T_138; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_142 = 32'h12 == io_inst_now ? {{63'd0}, _alu_res_T_64} : _alu_res_T_140; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_144 = 32'h13 == io_inst_now ? {{63'd0}, _alu_res_T_68} : _alu_res_T_142; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_146 = 32'h30 == io_inst_now ? {{63'd0}, divu_res} : _alu_res_T_144; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_148 = 32'h31 == io_inst_now ? {{62'd0}, div_res} : _alu_res_T_146; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_150 = 32'h35 == io_inst_now ? {{63'd0}, _alu_res_T_72} : _alu_res_T_148; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_152 = 32'h14 == io_inst_now ? {{63'd0}, _alu_res_T_76} : _alu_res_T_150; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_154 = 32'h32 == io_inst_now ? {{63'd0}, _alu_res_T_80} : _alu_res_T_152; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_156 = 32'h33 == io_inst_now ? {{63'd0}, remu_res} : _alu_res_T_154; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_158 = 32'h34 == io_inst_now ? {{63'd0}, rem_res} : _alu_res_T_156; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_160 = 32'h37 == io_inst_now ? sll_res : _alu_res_T_158; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_162 = 32'h39 == io_inst_now ? {{63'd0}, sra_res} : _alu_res_T_160; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_164 = 32'h38 == io_inst_now ? {{63'd0}, srl_res} : _alu_res_T_162; // @[Mux.scala 81:58]
  assign io_es_to_ms_valid = es_valid; // @[EXU.scala 67:32]
  assign io_to_ms_pc = es_pc; // @[EXU.scala 204:17]
  assign io_to_ms_alures = _alu_res_T_164[63:0]; // @[EXU.scala 109:13 49:23]
  assign io_to_ms_store_data = store_data; // @[EXU.scala 207:25]
  assign io_to_ms_wen = st_we; // @[EXU.scala 208:18]
  assign io_to_ms_wstrb = st_wstrb; // @[EXU.scala 209:20]
  assign io_to_ms_ren = ld_we; // @[EXU.scala 210:18]
  assign io_to_ms_maddr = src1_value + src2_value; // @[EXU.scala 88:30]
  assign io_to_ms_rf_dst = es_rd; // @[EXU.scala 212:21]
  assign io_to_ms_rf_we = es_rf_we; // @[EXU.scala 213:20]
  assign io_es_valid = es_valid; // @[EXU.scala 214:17]
  assign io_es_rf_we = es_rf_we; // @[EXU.scala 216:17]
  assign io_es_rf_dst = es_rd; // @[EXU.scala 215:18]
  always @(posedge clock) begin
    if (reset) begin // @[EXU.scala 35:24]
      es_pc <= 64'h0; // @[EXU.scala 35:24]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      es_pc <= io_pc; // @[EXU.scala 55:15]
    end
    if (reset) begin // @[EXU.scala 36:27]
      es_valid <= 1'h0; // @[EXU.scala 36:27]
    end else begin
      es_valid <= io_ds_to_es_valid;
    end
    if (reset) begin // @[EXU.scala 40:24]
      es_rd <= 5'h0; // @[EXU.scala 40:24]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      es_rd <= io_rf_dst; // @[EXU.scala 60:15]
    end
    if (reset) begin // @[EXU.scala 41:27]
      es_rf_we <= 1'h0; // @[EXU.scala 41:27]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      es_rf_we <= io_ctrl_sign_reg_write; // @[EXU.scala 56:18]
    end
    if (reset) begin // @[EXU.scala 43:29]
      src1_value <= 64'h0; // @[EXU.scala 43:29]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      src1_value <= {{59'd0}, io_src1_value}; // @[EXU.scala 58:20]
    end
    if (reset) begin // @[EXU.scala 44:29]
      src2_value <= 64'h0; // @[EXU.scala 44:29]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      src2_value <= {{59'd0}, io_src2_value}; // @[EXU.scala 59:20]
    end
    if (reset) begin // @[EXU.scala 45:29]
      store_data <= 64'h0; // @[EXU.scala 45:29]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      store_data <= io_store_data; // @[EXU.scala 61:20]
    end
    if (reset) begin // @[EXU.scala 46:27]
      st_wstrb <= 8'h0; // @[EXU.scala 46:27]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      st_wstrb <= io_ctrl_sign_Wmask; // @[EXU.scala 62:18]
    end
    if (reset) begin // @[EXU.scala 47:24]
      st_we <= 1'h0; // @[EXU.scala 47:24]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      st_we <= io_ctrl_sign_Writemem_en; // @[EXU.scala 63:15]
    end
    if (reset) begin // @[EXU.scala 48:24]
      ld_we <= 1'h0; // @[EXU.scala 48:24]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      ld_we <= io_ctrl_sign_Readmem_en; // @[EXU.scala 64:15]
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
  es_pc = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  es_valid = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  es_rd = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  es_rf_we = _RAND_3[0:0];
  _RAND_4 = {2{`RANDOM}};
  src1_value = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  src2_value = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  store_data = _RAND_6[63:0];
  _RAND_7 = {1{`RANDOM}};
  st_wstrb = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  st_we = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  ld_we = _RAND_9[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
/* verilator lint_on WIDTH */
/* verilator lint_on UNUSED */
