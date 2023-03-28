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
/* verilator lint_on UNUSED */
