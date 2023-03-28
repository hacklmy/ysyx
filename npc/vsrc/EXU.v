/* verilator lint_off UNUSED */
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
  wire  Regfile_io_pc_next_MPORT_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_io_pc_next_MPORT_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_io_pc_next_MPORT_data; // @[EXU.scala 23:22]
  wire  Regfile_io_pc_next_MPORT_1_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_io_pc_next_MPORT_1_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_io_pc_next_MPORT_1_data; // @[EXU.scala 23:22]
  wire  Regfile_io_pc_next_MPORT_2_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_io_pc_next_MPORT_2_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_io_pc_next_MPORT_2_data; // @[EXU.scala 23:22]
  wire  Regfile_io_pc_next_MPORT_3_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_io_pc_next_MPORT_3_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_io_pc_next_MPORT_3_data; // @[EXU.scala 23:22]
  wire  Regfile_io_pc_next_MPORT_4_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_io_pc_next_MPORT_4_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_io_pc_next_MPORT_4_data; // @[EXU.scala 23:22]
  wire  Regfile_io_pc_next_MPORT_5_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_io_pc_next_MPORT_5_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_io_pc_next_MPORT_5_data; // @[EXU.scala 23:22]
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
  wire  Regfile_Mem_modle_io_Wdata_MPORT_3_en; // @[EXU.scala 23:22]
  wire [4:0] Regfile_Mem_modle_io_Wdata_MPORT_3_addr; // @[EXU.scala 23:22]
  wire [63:0] Regfile_Mem_modle_io_Wdata_MPORT_3_data; // @[EXU.scala 23:22]
  wire [63:0] Regfile_MPORT_data; // @[EXU.scala 23:22]
  wire [4:0] Regfile_MPORT_addr; // @[EXU.scala 23:22]
  wire  Regfile_MPORT_mask; // @[EXU.scala 23:22]
  wire  Regfile_MPORT_en; // @[EXU.scala 23:22]
  wire [63:0] reg_trace_input_reg_0; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_1; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_2; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_3; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_4; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_5; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_6; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_7; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_8; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_9; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_10; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_11; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_12; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_13; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_14; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_15; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_16; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_17; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_18; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_19; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_20; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_21; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_22; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_23; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_24; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_25; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_26; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_27; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_28; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_29; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_30; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_input_reg_31; // @[EXU.scala 97:27]
  wire [63:0] reg_trace_pc; // @[EXU.scala 97:27]
  wire [63:0] _cmp_T_1 = io_rs1 == 5'h0 ? 64'h0 : Regfile_cmp_MPORT_data; // @[EXU.scala 25:12]
  wire [63:0] _cmp_T_3 = io_rs2 == 5'h0 ? 64'h0 : Regfile_cmp_MPORT_1_data; // @[EXU.scala 25:12]
  wire [63:0] cmp = _cmp_T_1 - _cmp_T_3; // @[EXU.scala 27:32]
  wire [63:0] _src1_value_T_1 = io_rs1 == 5'h0 ? 64'h0 : Regfile_src1_value_MPORT_data; // @[EXU.scala 25:12]
  wire [63:0] src1_value = io_ctrl_sign_src1_is_pc ? io_pc : _src1_value_T_1; // @[EXU.scala 28:25]
  wire [63:0] _src2_value_T_1 = io_rs2 == 5'h0 ? 64'h0 : Regfile_src2_value_MPORT_data; // @[EXU.scala 25:12]
  wire [63:0] src2_value = io_ctrl_sign_src2_is_imm ? io_imm : _src2_value_T_1; // @[EXU.scala 29:25]
  wire [63:0] add_res = src1_value + src2_value; // @[EXU.scala 30:30]
  wire [63:0] sub_res = src1_value - src2_value; // @[EXU.scala 31:30]
  wire [63:0] _sra_res_T = io_ctrl_sign_src1_is_pc ? io_pc : _src1_value_T_1; // @[EXU.scala 32:36]
  wire [63:0] srl_res = src1_value >> src2_value[5:0]; // @[EXU.scala 33:30]
  wire [126:0] _GEN_0 = {{63'd0}, src1_value}; // @[EXU.scala 34:30]
  wire [126:0] sll_res = _GEN_0 << src2_value[5:0]; // @[EXU.scala 34:30]
  wire [31:0] _sraw_res_T_1 = src1_value[31:0]; // @[EXU.scala 35:43]
  wire [31:0] sraw_res = $signed(_sraw_res_T_1) >>> src2_value[4:0]; // @[EXU.scala 35:46]
  wire [31:0] srlw_res = src1_value[31:0] >> src2_value[4:0]; // @[EXU.scala 36:37]
  wire [62:0] _GEN_1 = {{31'd0}, src1_value[31:0]}; // @[EXU.scala 37:37]
  wire [62:0] sllw_res = _GEN_1 << src2_value[4:0]; // @[EXU.scala 37:37]
  wire [63:0] or_res = src1_value | src2_value; // @[EXU.scala 38:29]
  wire [63:0] xor_res = src1_value ^ src2_value; // @[EXU.scala 39:30]
  wire [63:0] and_res = src1_value & src2_value; // @[EXU.scala 40:30]
  wire [127:0] _mlu_res_T = src1_value * src2_value; // @[EXU.scala 41:31]
  wire [63:0] mlu_res = _mlu_res_T[63:0]; // @[EXU.scala 41:44]
  wire [63:0] _mluw_res_T_2 = src1_value[31:0] * src2_value[31:0]; // @[EXU.scala 42:38]
  wire [31:0] mluw_res = _mluw_res_T_2[31:0]; // @[EXU.scala 42:57]
  wire [31:0] divw_res = src1_value[31:0] / src2_value[31:0]; // @[EXU.scala 43:38]
  wire [31:0] _remw_res_T_3 = src2_value[31:0]; // @[EXU.scala 44:64]
  wire [31:0] remw_res = $signed(_sraw_res_T_1) % $signed(_remw_res_T_3); // @[EXU.scala 44:71]
  wire [63:0] _io_res2rd_T_1 = io_pc + 64'h4; // @[EXU.scala 49:24]
  wire  _io_res2rd_T_4 = src1_value < src2_value; // @[EXU.scala 51:34]
  wire [63:0] _io_res2rd_T_9 = io_ctrl_sign_src2_is_imm ? io_imm : _src2_value_T_1; // @[EXU.scala 53:59]
  wire  _io_res2rd_T_10 = $signed(_sra_res_T) < $signed(_io_res2rd_T_9); // @[EXU.scala 53:41]
  wire [63:0] mem_rdata = Mem_modle_Rdata; // @[EXU.scala 112:15 22:25]
  wire [31:0] _io_res2rd_T_14 = mem_rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_16 = {_io_res2rd_T_14,mem_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_19 = {56'h0,mem_rdata[7:0]}; // @[Cat.scala 31:58]
  wire [47:0] _io_res2rd_T_22 = mem_rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_24 = {_io_res2rd_T_22,mem_rdata[15:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_27 = {48'h0,mem_rdata[15:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_30 = add_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_32 = {_io_res2rd_T_30,add_res[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_38 = $signed(_sra_res_T) >>> src2_value[5:0]; // @[EXU.scala 63:33]
  wire [31:0] _io_res2rd_T_41 = sub_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_43 = {_io_res2rd_T_41,sub_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_46 = sllw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_48 = {_io_res2rd_T_46,sllw_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_56 = sraw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _io_res2rd_T_57 = $signed(_sraw_res_T_1) >>> src2_value[4:0]; // @[EXU.scala 73:56]
  wire [63:0] _io_res2rd_T_58 = {_io_res2rd_T_56,_io_res2rd_T_57}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_61 = srlw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_63 = {_io_res2rd_T_61,sllw_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_76 = mluw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_77 = {_io_res2rd_T_76,mluw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_80 = divw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_81 = {_io_res2rd_T_80,divw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_84 = remw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_85 = {_io_res2rd_T_84,remw_res}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_87 = 32'h1 == io_inst_now ? add_res : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_89 = 32'h3 == io_inst_now ? add_res : _io_res2rd_T_87; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_91 = 32'h4 == io_inst_now ? io_imm : _io_res2rd_T_89; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_93 = 32'h5 == io_inst_now ? _io_res2rd_T_1 : _io_res2rd_T_91; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_95 = 32'h6 == io_inst_now ? _io_res2rd_T_1 : _io_res2rd_T_93; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_97 = 32'h20 == io_inst_now ? {{63'd0}, _io_res2rd_T_4} : _io_res2rd_T_95; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_99 = 32'h1e == io_inst_now ? {{63'd0}, _io_res2rd_T_4} : _io_res2rd_T_97; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_101 = 32'h1f == io_inst_now ? {{63'd0}, _io_res2rd_T_10} : _io_res2rd_T_99; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_103 = 32'h21 == io_inst_now ? _io_res2rd_T_16 : _io_res2rd_T_101; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_105 = 32'h22 == io_inst_now ? mem_rdata : _io_res2rd_T_103; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_107 = 32'h23 == io_inst_now ? _io_res2rd_T_19 : _io_res2rd_T_105; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_109 = 32'h24 == io_inst_now ? _io_res2rd_T_24 : _io_res2rd_T_107; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_111 = 32'h25 == io_inst_now ? _io_res2rd_T_27 : _io_res2rd_T_109; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_113 = 32'hc == io_inst_now ? _io_res2rd_T_32 : _io_res2rd_T_111; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_115 = 32'he == io_inst_now ? sub_res : _io_res2rd_T_113; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_117 = 32'h10 == io_inst_now ? _io_res2rd_T_32 : _io_res2rd_T_115; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_119 = 32'hf == io_inst_now ? add_res : _io_res2rd_T_117; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_121 = 32'h15 == io_inst_now ? _io_res2rd_T_38 : _io_res2rd_T_119; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_123 = 32'hb == io_inst_now ? or_res : _io_res2rd_T_121; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_125 = 32'ha == io_inst_now ? xor_res : _io_res2rd_T_123; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_127 = 32'h8 == io_inst_now ? and_res : _io_res2rd_T_125; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_129 = 32'h9 == io_inst_now ? and_res : _io_res2rd_T_127; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_131 = 32'hd == io_inst_now ? _io_res2rd_T_43 : _io_res2rd_T_129; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_133 = 32'h16 == io_inst_now ? _io_res2rd_T_48 : _io_res2rd_T_131; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_135 = 32'h17 == io_inst_now ? sll_res : {{63'd0}, _io_res2rd_T_133}; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_137 = 32'h18 == io_inst_now ? {{63'd0}, srl_res} : _io_res2rd_T_135; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_139 = 32'h19 == io_inst_now ? {{63'd0}, _io_res2rd_T_48} : _io_res2rd_T_137; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_141 = 32'h1a == io_inst_now ? {{63'd0}, _io_res2rd_T_58} : _io_res2rd_T_139; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_143 = 32'h1b == io_inst_now ? {{63'd0}, _io_res2rd_T_63} : _io_res2rd_T_141; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_145 = 32'h1c == io_inst_now ? {{63'd0}, _io_res2rd_T_58} : _io_res2rd_T_143; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_147 = 32'h1d == io_inst_now ? {{63'd0}, _io_res2rd_T_63} : _io_res2rd_T_145; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_149 = 32'h11 == io_inst_now ? {{63'd0}, mlu_res} : _io_res2rd_T_147; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_151 = 32'h12 == io_inst_now ? {{63'd0}, _io_res2rd_T_77} : _io_res2rd_T_149; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_153 = 32'h13 == io_inst_now ? {{63'd0}, _io_res2rd_T_81} : _io_res2rd_T_151; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_155 = 32'h14 == io_inst_now ? {{63'd0}, _io_res2rd_T_85} : _io_res2rd_T_153; // @[Mux.scala 81:58]
  wire [63:0] reg_value = io_rd == 5'h0 ? 64'h0 : Regfile_reg_value_MPORT_data; // @[EXU.scala 25:12]
  wire  _T_1 = io_ctrl_sign_reg_write & io_rd != 5'h0; // @[EXU.scala 85:50]
  wire [63:0] _io_pc_next_T = add_res & 64'hfffffffffffffffe; // @[EXU.scala 90:28]
  wire [63:0] _io_pc_next_T_2 = cmp != 64'h0 ? add_res : _io_res2rd_T_1; // @[EXU.scala 91:21]
  wire [63:0] _io_pc_next_T_4 = cmp == 64'h0 ? add_res : _io_res2rd_T_1; // @[EXU.scala 92:21]
  wire [63:0] _io_pc_next_T_7 = io_rs1 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_data; // @[EXU.scala 93:39]
  wire [63:0] _io_pc_next_T_10 = io_rs2 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_1_data; // @[EXU.scala 93:66]
  wire [63:0] _io_pc_next_T_12 = $signed(_io_pc_next_T_7) >= $signed(_io_pc_next_T_10) ? add_res : _io_res2rd_T_1; // @[EXU.scala 93:21]
  wire [63:0] _io_pc_next_T_15 = io_rs1 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_2_data; // @[EXU.scala 94:39]
  wire [63:0] _io_pc_next_T_18 = io_rs2 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_3_data; // @[EXU.scala 94:65]
  wire [63:0] _io_pc_next_T_20 = $signed(_io_pc_next_T_15) < $signed(_io_pc_next_T_18) ? add_res : _io_res2rd_T_1; // @[EXU.scala 94:21]
  wire [63:0] _io_pc_next_T_22 = io_rs1 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_4_data; // @[EXU.scala 25:12]
  wire [63:0] _io_pc_next_T_24 = io_rs2 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_5_data; // @[EXU.scala 25:12]
  wire [63:0] _io_pc_next_T_26 = _io_pc_next_T_22 < _io_pc_next_T_24 ? add_res : _io_res2rd_T_1; // @[EXU.scala 95:22]
  wire [63:0] _io_pc_next_T_28 = 32'h5 == io_inst_now ? add_res : _io_res2rd_T_1; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_30 = 32'h6 == io_inst_now ? _io_pc_next_T : _io_pc_next_T_28; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_32 = 32'h2a == io_inst_now ? _io_pc_next_T_2 : _io_pc_next_T_30; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_34 = 32'h29 == io_inst_now ? _io_pc_next_T_4 : _io_pc_next_T_32; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_36 = 32'h2b == io_inst_now ? _io_pc_next_T_12 : _io_pc_next_T_34; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_38 = 32'h2c == io_inst_now ? _io_pc_next_T_20 : _io_pc_next_T_36; // @[Mux.scala 81:58]
  wire [63:0] _Mem_modle_io_Wdata_T_1 = io_rs2 == 5'h0 ? 64'h0 : Regfile_Mem_modle_io_Wdata_MPORT_data; // @[EXU.scala 25:12]
  wire [63:0] _Mem_modle_io_Wdata_T_3 = io_rs2 == 5'h0 ? 64'h0 : Regfile_Mem_modle_io_Wdata_MPORT_1_data; // @[EXU.scala 25:12]
  wire [63:0] _Mem_modle_io_Wdata_T_6 = io_rs2 == 5'h0 ? 64'h0 : Regfile_Mem_modle_io_Wdata_MPORT_2_data; // @[EXU.scala 25:12]
  wire [63:0] _Mem_modle_io_Wdata_T_9 = io_rs2 == 5'h0 ? 64'h0 : Regfile_Mem_modle_io_Wdata_MPORT_3_data; // @[EXU.scala 25:12]
  wire [63:0] _Mem_modle_io_Wdata_T_12 = 32'h7 == io_inst_now ? _Mem_modle_io_Wdata_T_1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _Mem_modle_io_Wdata_T_14 = 32'h26 == io_inst_now ? {{48'd0}, _Mem_modle_io_Wdata_T_3[15:0]} :
    _Mem_modle_io_Wdata_T_12; // @[Mux.scala 81:58]
  wire [63:0] _Mem_modle_io_Wdata_T_16 = 32'h28 == io_inst_now ? {{56'd0}, _Mem_modle_io_Wdata_T_6[7:0]} :
    _Mem_modle_io_Wdata_T_14; // @[Mux.scala 81:58]
  MEM Mem_modle ( // @[EXU.scala 21:27]
    .Raddr(Mem_modle_Raddr),
    .Rdata(Mem_modle_Rdata),
    .Waddr(Mem_modle_Waddr),
    .Wdata(Mem_modle_Wdata),
    .Wmask(Mem_modle_Wmask),
    .Write_en(Mem_modle_Write_en)
  );
  traceregs reg_trace ( // @[EXU.scala 97:27]
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
  assign Regfile_io_pc_next_MPORT_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_addr = io_rs1;
  assign Regfile_io_pc_next_MPORT_data = Regfile[Regfile_io_pc_next_MPORT_addr]; // @[EXU.scala 23:22]
  assign Regfile_io_pc_next_MPORT_1_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_1_addr = io_rs2;
  assign Regfile_io_pc_next_MPORT_1_data = Regfile[Regfile_io_pc_next_MPORT_1_addr]; // @[EXU.scala 23:22]
  assign Regfile_io_pc_next_MPORT_2_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_2_addr = io_rs1;
  assign Regfile_io_pc_next_MPORT_2_data = Regfile[Regfile_io_pc_next_MPORT_2_addr]; // @[EXU.scala 23:22]
  assign Regfile_io_pc_next_MPORT_3_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_3_addr = io_rs2;
  assign Regfile_io_pc_next_MPORT_3_data = Regfile[Regfile_io_pc_next_MPORT_3_addr]; // @[EXU.scala 23:22]
  assign Regfile_io_pc_next_MPORT_4_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_4_addr = io_rs1;
  assign Regfile_io_pc_next_MPORT_4_data = Regfile[Regfile_io_pc_next_MPORT_4_addr]; // @[EXU.scala 23:22]
  assign Regfile_io_pc_next_MPORT_5_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_5_addr = io_rs2;
  assign Regfile_io_pc_next_MPORT_5_data = Regfile[Regfile_io_pc_next_MPORT_5_addr]; // @[EXU.scala 23:22]
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
  assign Regfile_Mem_modle_io_Wdata_MPORT_3_en = 1'h1;
  assign Regfile_Mem_modle_io_Wdata_MPORT_3_addr = io_rs2;
  assign Regfile_Mem_modle_io_Wdata_MPORT_3_data = Regfile[Regfile_Mem_modle_io_Wdata_MPORT_3_addr]; // @[EXU.scala 23:22]
  assign Regfile_MPORT_data = _T_1 ? io_res2rd : reg_value;
  assign Regfile_MPORT_addr = io_rd;
  assign Regfile_MPORT_mask = 1'h1;
  assign Regfile_MPORT_en = 1'h1;
  assign io_pc_next = 32'h2d == io_inst_now ? _io_pc_next_T_26 : _io_pc_next_T_38; // @[Mux.scala 81:58]
  assign io_res2rd = _io_res2rd_T_155[63:0]; // @[EXU.scala 45:15]
  assign Mem_modle_Raddr = src1_value + src2_value; // @[EXU.scala 30:30]
  assign Mem_modle_Waddr = src1_value + src2_value; // @[EXU.scala 30:30]
  assign Mem_modle_Wdata = 32'h27 == io_inst_now ? {{32'd0}, _Mem_modle_io_Wdata_T_9[31:0]} : _Mem_modle_io_Wdata_T_16; // @[Mux.scala 81:58]
  assign Mem_modle_Wmask = io_ctrl_sign_Wmask; // @[EXU.scala 110:24]
  assign Mem_modle_Write_en = io_ctrl_sign_Writemem_en; // @[EXU.scala 111:27]
  assign reg_trace_input_reg_0 = Regfile_reg_trace_io_input_reg_0_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_1 = Regfile_reg_trace_io_input_reg_1_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_2 = Regfile_reg_trace_io_input_reg_2_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_3 = Regfile_reg_trace_io_input_reg_3_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_4 = Regfile_reg_trace_io_input_reg_4_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_5 = Regfile_reg_trace_io_input_reg_5_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_6 = Regfile_reg_trace_io_input_reg_6_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_7 = Regfile_reg_trace_io_input_reg_7_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_8 = Regfile_reg_trace_io_input_reg_8_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_9 = Regfile_reg_trace_io_input_reg_9_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_10 = Regfile_reg_trace_io_input_reg_10_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_11 = Regfile_reg_trace_io_input_reg_11_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_12 = Regfile_reg_trace_io_input_reg_12_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_13 = Regfile_reg_trace_io_input_reg_13_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_14 = Regfile_reg_trace_io_input_reg_14_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_15 = Regfile_reg_trace_io_input_reg_15_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_16 = Regfile_reg_trace_io_input_reg_16_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_17 = Regfile_reg_trace_io_input_reg_17_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_18 = Regfile_reg_trace_io_input_reg_18_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_19 = Regfile_reg_trace_io_input_reg_19_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_20 = Regfile_reg_trace_io_input_reg_20_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_21 = Regfile_reg_trace_io_input_reg_21_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_22 = Regfile_reg_trace_io_input_reg_22_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_23 = Regfile_reg_trace_io_input_reg_23_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_24 = Regfile_reg_trace_io_input_reg_24_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_25 = Regfile_reg_trace_io_input_reg_25_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_26 = Regfile_reg_trace_io_input_reg_26_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_27 = Regfile_reg_trace_io_input_reg_27_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_28 = Regfile_reg_trace_io_input_reg_28_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_29 = Regfile_reg_trace_io_input_reg_29_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_30 = Regfile_reg_trace_io_input_reg_30_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_input_reg_31 = Regfile_reg_trace_io_input_reg_31_MPORT_data; // @[EXU.scala 99:57]
  assign reg_trace_pc = io_pc; // @[EXU.scala 100:21]
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
/* verilator lint_on UNUSED */
