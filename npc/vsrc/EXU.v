/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
module EXU_AXI(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  output [63:0] io_pc_next,
  input  [31:0] io_inst_now,
  input  [4:0]  io_rs1,
  input  [4:0]  io_rs2,
  input  [4:0]  io_rd,
  input  [63:0] io_imm,
  input         io_ctrl_sign_reg_write,
  input         io_ctrl_sign_csr_write,
  input         io_ctrl_sign_src2_is_imm,
  input         io_ctrl_sign_src1_is_pc,
  input         io_ctrl_sign_Writemem_en,
  input         io_ctrl_sign_Readmem_en,
  input  [7:0]  io_ctrl_sign_Wmask,
  output [63:0] io_res2rd,
  input         io_inst_valid,
  output        io_inst_store,
  output        io_inst_load,
  output [31:0] io_Mem_addr,
  input  [63:0] io_Mem_rdata,
  output [63:0] io_Mem_wdata,
  output [7:0]  io_Mem_wstrb,
  input         io_rdata_valid
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] Regfile [0:31]; // @[EXU_AXI.scala 37:22]
  wire  Regfile_src1_value_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_src1_value_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_src1_value_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_src2_value_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_src2_value_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_src2_value_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_value_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_value_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_value_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_MPORT_4_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_MPORT_4_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_MPORT_4_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_1_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_1_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_1_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_2_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_2_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_2_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_3_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_3_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_3_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_4_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_4_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_4_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_5_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_5_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_5_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_6_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_6_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_6_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_7_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_7_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_7_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_8_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_8_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_8_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_9_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_9_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_9_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_10_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_10_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_10_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_j_pc_MPORT_11_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_j_pc_MPORT_11_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_j_pc_MPORT_11_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_0_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_0_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_0_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_1_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_1_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_1_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_2_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_2_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_2_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_3_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_3_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_3_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_4_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_4_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_4_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_5_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_5_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_5_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_6_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_6_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_6_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_7_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_7_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_7_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_8_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_8_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_8_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_9_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_9_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_9_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_10_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_10_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_10_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_11_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_11_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_11_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_12_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_12_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_12_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_13_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_13_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_13_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_14_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_14_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_14_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_15_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_15_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_15_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_16_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_16_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_16_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_17_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_17_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_17_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_18_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_18_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_18_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_19_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_19_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_19_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_20_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_20_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_20_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_21_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_21_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_21_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_22_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_22_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_22_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_23_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_23_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_23_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_24_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_24_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_24_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_25_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_25_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_25_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_26_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_26_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_26_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_27_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_27_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_27_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_28_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_28_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_28_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_29_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_29_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_29_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_30_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_30_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_30_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_reg_trace_io_input_reg_31_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_31_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_31_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_mem_wdata_MPORT_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_mem_wdata_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_mem_wdata_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_mem_wdata_MPORT_1_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_mem_wdata_MPORT_1_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_mem_wdata_MPORT_1_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_mem_wdata_MPORT_2_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_mem_wdata_MPORT_2_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_mem_wdata_MPORT_2_data; // @[EXU_AXI.scala 37:22]
  wire  Regfile_mem_wdata_MPORT_3_en; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_mem_wdata_MPORT_3_addr; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_mem_wdata_MPORT_3_data; // @[EXU_AXI.scala 37:22]
  wire [63:0] Regfile_MPORT_data; // @[EXU_AXI.scala 37:22]
  wire [4:0] Regfile_MPORT_addr; // @[EXU_AXI.scala 37:22]
  wire  Regfile_MPORT_mask; // @[EXU_AXI.scala 37:22]
  wire  Regfile_MPORT_en; // @[EXU_AXI.scala 37:22]
  reg [63:0] CSR_Reg [0:3]; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_io_res2rd_MPORT_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_io_res2rd_MPORT_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_io_res2rd_MPORT_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_io_res2rd_MPORT_1_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_io_res2rd_MPORT_1_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_io_res2rd_MPORT_1_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_io_res2rd_MPORT_2_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_io_res2rd_MPORT_2_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_io_res2rd_MPORT_2_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_csr_wdata_MPORT_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_csr_wdata_MPORT_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_csr_wdata_MPORT_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_csr_wdata_MPORT_1_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_csr_wdata_MPORT_1_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_csr_wdata_MPORT_1_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_2_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_MPORT_2_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_MPORT_2_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_5_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_MPORT_5_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_MPORT_5_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_7_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_MPORT_7_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_MPORT_7_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_j_pc_MPORT_12_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_j_pc_MPORT_12_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_j_pc_MPORT_12_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_j_pc_MPORT_13_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_j_pc_MPORT_13_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_j_pc_MPORT_13_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_reg_trace_io_csr_reg_0_MPORT_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_reg_trace_io_csr_reg_1_MPORT_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_reg_trace_io_csr_reg_2_MPORT_en; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_MPORT_1_data; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_MPORT_1_addr; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_1_mask; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_1_en; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_MPORT_3_data; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_MPORT_3_addr; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_3_mask; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_3_en; // @[EXU_AXI.scala 38:22]
  wire [63:0] CSR_Reg_MPORT_6_data; // @[EXU_AXI.scala 38:22]
  wire [1:0] CSR_Reg_MPORT_6_addr; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_6_mask; // @[EXU_AXI.scala 38:22]
  wire  CSR_Reg_MPORT_6_en; // @[EXU_AXI.scala 38:22]
  wire [63:0] reg_trace_input_reg_0; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_1; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_2; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_3; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_4; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_5; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_6; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_7; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_8; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_9; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_10; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_11; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_12; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_13; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_14; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_15; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_16; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_17; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_18; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_19; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_20; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_21; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_22; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_23; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_24; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_25; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_26; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_27; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_28; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_29; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_30; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_input_reg_31; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_csr_reg_0; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_csr_reg_1; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_csr_reg_2; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_csr_reg_3; // @[EXU_AXI.scala 163:27]
  wire [63:0] reg_trace_pc; // @[EXU_AXI.scala 163:27]
  wire [11:0] csr_addr = io_imm[11:0]; // @[EXU_AXI.scala 39:26]
  wire [1:0] _csr_index_T_5 = 12'h300 == csr_addr ? 2'h2 : {{1'd0}, 12'h341 == csr_addr}; // @[Mux.scala 81:58]
  wire  _csr_index_T_6 = 12'h342 == csr_addr; // @[Mux.scala 81:61]
  wire [63:0] _src1_value_T_1 = io_rs1 == 5'h0 ? 64'h0 : Regfile_src1_value_MPORT_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] src1_value = io_ctrl_sign_src1_is_pc ? io_pc : _src1_value_T_1; // @[EXU_AXI.scala 49:25]
  wire [63:0] _src2_value_T_1 = io_rs2 == 5'h0 ? 64'h0 : Regfile_src2_value_MPORT_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] src2_value = io_ctrl_sign_src2_is_imm ? io_imm : _src2_value_T_1; // @[EXU_AXI.scala 50:25]
  wire [63:0] add_res = src1_value + src2_value; // @[EXU_AXI.scala 51:30]
  wire [63:0] sub_res = src1_value - src2_value; // @[EXU_AXI.scala 52:30]
  wire [63:0] _sra_res_T = io_ctrl_sign_src1_is_pc ? io_pc : _src1_value_T_1; // @[EXU_AXI.scala 53:37]
  wire [63:0] sra_res = $signed(_sra_res_T) >>> src2_value[5:0]; // @[EXU_AXI.scala 53:60]
  wire [63:0] srl_res = src1_value >> src2_value[5:0]; // @[EXU_AXI.scala 54:30]
  wire [126:0] _GEN_1 = {{63'd0}, src1_value}; // @[EXU_AXI.scala 55:30]
  wire [126:0] sll_res = _GEN_1 << src2_value[5:0]; // @[EXU_AXI.scala 55:30]
  wire [31:0] _sraw_res_T_1 = src1_value[31:0]; // @[EXU_AXI.scala 56:43]
  wire [31:0] sraw_res = $signed(_sraw_res_T_1) >>> src2_value[4:0]; // @[EXU_AXI.scala 56:46]
  wire [31:0] srlw_res = src1_value[31:0] >> src2_value[4:0]; // @[EXU_AXI.scala 57:37]
  wire [62:0] _GEN_2 = {{31'd0}, src1_value[31:0]}; // @[EXU_AXI.scala 58:37]
  wire [62:0] sllw_res = _GEN_2 << src2_value[4:0]; // @[EXU_AXI.scala 58:37]
  wire [63:0] or_res = src1_value | src2_value; // @[EXU_AXI.scala 59:29]
  wire [63:0] xor_res = src1_value ^ src2_value; // @[EXU_AXI.scala 60:30]
  wire [63:0] and_res = src1_value & src2_value; // @[EXU_AXI.scala 61:30]
  wire [127:0] _mlu_res_T = src1_value * src2_value; // @[EXU_AXI.scala 62:31]
  wire [63:0] mlu_res = _mlu_res_T[63:0]; // @[EXU_AXI.scala 62:44]
  wire [63:0] _mluw_res_T_2 = src1_value[31:0] * src2_value[31:0]; // @[EXU_AXI.scala 63:38]
  wire [31:0] mluw_res = _mluw_res_T_2[31:0]; // @[EXU_AXI.scala 63:57]
  wire [31:0] _divw_res_T_3 = src2_value[31:0]; // @[EXU_AXI.scala 64:64]
  wire [32:0] _divw_res_T_4 = $signed(_sraw_res_T_1) / $signed(_divw_res_T_3); // @[EXU_AXI.scala 64:45]
  wire [31:0] divw_res = _divw_res_T_4[31:0]; // @[EXU_AXI.scala 64:71]
  wire [31:0] divuw_res = src1_value[31:0] / src2_value[31:0]; // @[EXU_AXI.scala 65:39]
  wire [31:0] remw_res = $signed(_sraw_res_T_1) % $signed(_divw_res_T_3); // @[EXU_AXI.scala 66:71]
  wire [31:0] remuw_res = src1_value[31:0] % src2_value[31:0]; // @[EXU_AXI.scala 67:39]
  wire [63:0] _div_res_T_1 = io_ctrl_sign_src2_is_imm ? io_imm : _src2_value_T_1; // @[EXU_AXI.scala 68:51]
  wire [64:0] div_res = $signed(_sra_res_T) / $signed(_div_res_T_1); // @[EXU_AXI.scala 68:59]
  wire [63:0] divu_res = src1_value / src2_value; // @[EXU_AXI.scala 69:31]
  wire [63:0] rem_res = $signed(_sra_res_T) % $signed(_div_res_T_1); // @[EXU_AXI.scala 70:59]
  wire [63:0] remu_res = src1_value % src2_value; // @[EXU_AXI.scala 71:31]
  wire [63:0] _io_res2rd_T_1 = io_pc + 64'h4; // @[EXU_AXI.scala 76:24]
  wire  _io_res2rd_T_4 = src1_value < src2_value; // @[EXU_AXI.scala 78:34]
  wire  _io_res2rd_T_10 = $signed(_sra_res_T) < $signed(_div_res_T_1); // @[EXU_AXI.scala 80:42]
  wire [31:0] _io_res2rd_T_18 = io_Mem_rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_20 = {_io_res2rd_T_18,io_Mem_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_23 = {56'h0,io_Mem_rdata[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_26 = {32'h0,io_Mem_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [47:0] _io_res2rd_T_29 = io_Mem_rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_31 = {_io_res2rd_T_29,io_Mem_rdata[15:0]}; // @[Cat.scala 31:58]
  wire [55:0] _io_res2rd_T_34 = io_Mem_rdata[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_36 = {_io_res2rd_T_34,io_Mem_rdata[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_39 = {48'h0,io_Mem_rdata[15:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_42 = add_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_44 = {_io_res2rd_T_42,add_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_52 = sub_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_54 = {_io_res2rd_T_52,sub_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_57 = sllw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_59 = {_io_res2rd_T_57,sllw_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_67 = sraw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _io_res2rd_T_68 = $signed(_sraw_res_T_1) >>> src2_value[4:0]; // @[EXU_AXI.scala 105:56]
  wire [63:0] _io_res2rd_T_69 = {_io_res2rd_T_67,_io_res2rd_T_68}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_72 = srlw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_74 = {_io_res2rd_T_72,srlw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_87 = mluw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_88 = {_io_res2rd_T_87,mluw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_91 = divw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_92 = {_io_res2rd_T_91,divw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_95 = divuw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_96 = {_io_res2rd_T_95,divuw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_99 = remw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_100 = {_io_res2rd_T_99,remw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_103 = remuw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_104 = {_io_res2rd_T_103,remuw_res}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_106 = 32'h1 == io_inst_now ? add_res : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_108 = 32'h3 == io_inst_now ? add_res : _io_res2rd_T_106; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_110 = 32'h4 == io_inst_now ? io_imm : _io_res2rd_T_108; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_112 = 32'h5 == io_inst_now ? _io_res2rd_T_1 : _io_res2rd_T_110; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_114 = 32'h6 == io_inst_now ? _io_res2rd_T_1 : _io_res2rd_T_112; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_116 = 32'h20 == io_inst_now ? {{63'd0}, _io_res2rd_T_4} : _io_res2rd_T_114; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_118 = 32'h1e == io_inst_now ? {{63'd0}, _io_res2rd_T_4} : _io_res2rd_T_116; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_120 = 32'h36 == io_inst_now ? {{63'd0}, _io_res2rd_T_10} : _io_res2rd_T_118; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_122 = 32'h1f == io_inst_now ? {{63'd0}, _io_res2rd_T_10} : _io_res2rd_T_120; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_124 = 32'h21 == io_inst_now ? _io_res2rd_T_20 : _io_res2rd_T_122; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_126 = 32'h22 == io_inst_now ? io_Mem_rdata : _io_res2rd_T_124; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_128 = 32'h23 == io_inst_now ? _io_res2rd_T_23 : _io_res2rd_T_126; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_130 = 32'h3a == io_inst_now ? _io_res2rd_T_26 : _io_res2rd_T_128; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_132 = 32'h24 == io_inst_now ? _io_res2rd_T_31 : _io_res2rd_T_130; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_134 = 32'h3b == io_inst_now ? _io_res2rd_T_36 : _io_res2rd_T_132; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_136 = 32'h25 == io_inst_now ? _io_res2rd_T_39 : _io_res2rd_T_134; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_138 = 32'hc == io_inst_now ? _io_res2rd_T_44 : _io_res2rd_T_136; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_140 = 32'he == io_inst_now ? sub_res : _io_res2rd_T_138; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_142 = 32'h10 == io_inst_now ? _io_res2rd_T_44 : _io_res2rd_T_140; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_144 = 32'hf == io_inst_now ? add_res : _io_res2rd_T_142; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_146 = 32'h15 == io_inst_now ? sra_res : _io_res2rd_T_144; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_148 = 32'hb == io_inst_now ? or_res : _io_res2rd_T_146; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_150 = 32'h2f == io_inst_now ? or_res : _io_res2rd_T_148; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_152 = 32'h2e == io_inst_now ? xor_res : _io_res2rd_T_150; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_154 = 32'ha == io_inst_now ? xor_res : _io_res2rd_T_152; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_156 = 32'h8 == io_inst_now ? and_res : _io_res2rd_T_154; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_158 = 32'h9 == io_inst_now ? and_res : _io_res2rd_T_156; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_160 = 32'hd == io_inst_now ? _io_res2rd_T_54 : _io_res2rd_T_158; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_162 = 32'h16 == io_inst_now ? _io_res2rd_T_59 : _io_res2rd_T_160; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_164 = 32'h17 == io_inst_now ? sll_res : {{63'd0}, _io_res2rd_T_162}; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_166 = 32'h18 == io_inst_now ? {{63'd0}, srl_res} : _io_res2rd_T_164; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_168 = 32'h19 == io_inst_now ? {{63'd0}, _io_res2rd_T_59} : _io_res2rd_T_166; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_170 = 32'h1a == io_inst_now ? {{63'd0}, _io_res2rd_T_69} : _io_res2rd_T_168; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_172 = 32'h1b == io_inst_now ? {{63'd0}, _io_res2rd_T_74} : _io_res2rd_T_170; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_174 = 32'h1c == io_inst_now ? {{63'd0}, _io_res2rd_T_69} : _io_res2rd_T_172; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_176 = 32'h1d == io_inst_now ? {{63'd0}, _io_res2rd_T_74} : _io_res2rd_T_174; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_178 = 32'h11 == io_inst_now ? {{63'd0}, mlu_res} : _io_res2rd_T_176; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_180 = 32'h12 == io_inst_now ? {{63'd0}, _io_res2rd_T_88} : _io_res2rd_T_178; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_182 = 32'h13 == io_inst_now ? {{63'd0}, _io_res2rd_T_92} : _io_res2rd_T_180; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_184 = 32'h30 == io_inst_now ? {{63'd0}, divu_res} : _io_res2rd_T_182; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_186 = 32'h31 == io_inst_now ? {{62'd0}, div_res} : _io_res2rd_T_184; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_188 = 32'h35 == io_inst_now ? {{63'd0}, _io_res2rd_T_96} : _io_res2rd_T_186; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_190 = 32'h14 == io_inst_now ? {{63'd0}, _io_res2rd_T_100} : _io_res2rd_T_188; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_192 = 32'h32 == io_inst_now ? {{63'd0}, _io_res2rd_T_104} : _io_res2rd_T_190; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_194 = 32'h33 == io_inst_now ? {{63'd0}, remu_res} : _io_res2rd_T_192; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_196 = 32'h34 == io_inst_now ? {{63'd0}, rem_res} : _io_res2rd_T_194; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_198 = 32'h37 == io_inst_now ? sll_res : _io_res2rd_T_196; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_200 = 32'h39 == io_inst_now ? {{63'd0}, sra_res} : _io_res2rd_T_198; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_202 = 32'h38 == io_inst_now ? {{63'd0}, srl_res} : _io_res2rd_T_200; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_204 = 32'h3f == io_inst_now ? {{63'd0}, CSR_Reg_io_res2rd_MPORT_data} : _io_res2rd_T_202; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_206 = 32'h46 == io_inst_now ? {{63'd0}, CSR_Reg_io_res2rd_MPORT_1_data} : _io_res2rd_T_204; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_208 = 32'h47 == io_inst_now ? {{63'd0}, CSR_Reg_io_res2rd_MPORT_2_data} : _io_res2rd_T_206; // @[Mux.scala 81:58]
  wire [63:0] reg_value = io_rd == 5'h0 ? 64'h0 : Regfile_reg_value_MPORT_data; // @[EXU_AXI.scala 47:12]
  wire  _T_6 = io_ctrl_sign_reg_write & io_rd != 5'h0 & (io_inst_valid & ~io_ctrl_sign_Readmem_en |
    io_ctrl_sign_Readmem_en & io_rdata_valid); // @[EXU_AXI.scala 129:63]
  wire [63:0] _csr_wdata_T = src1_value | CSR_Reg_csr_wdata_MPORT_data; // @[EXU_AXI.scala 134:32]
  wire [63:0] _csr_wdata_T_1 = ~CSR_Reg_csr_wdata_MPORT_1_data; // @[EXU_AXI.scala 135:35]
  wire [63:0] _csr_wdata_T_2 = src1_value & _csr_wdata_T_1; // @[EXU_AXI.scala 135:32]
  wire [63:0] _csr_wdata_T_4 = 32'h3f == io_inst_now ? src1_value : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _csr_wdata_T_6 = 32'h46 == io_inst_now ? _csr_wdata_T : _csr_wdata_T_4; // @[Mux.scala 81:58]
  wire [63:0] csr_wdata = 32'h47 == io_inst_now ? _csr_wdata_T_2 : _csr_wdata_T_6; // @[Mux.scala 81:58]
  wire  _T_9 = io_inst_now == 32'h3d & io_inst_valid; // @[EXU_AXI.scala 138:48]
  wire  _T_14 = io_ctrl_sign_csr_write & io_inst_valid; // @[EXU_AXI.scala 141:53]
  wire [63:0] _j_pc_T = add_res & 64'hfffffffffffffffe; // @[EXU_AXI.scala 148:28]
  wire [63:0] _j_pc_T_3 = io_rs1 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_data; // @[EXU_AXI.scala 149:39]
  wire [63:0] _j_pc_T_6 = io_rs2 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_1_data; // @[EXU_AXI.scala 149:67]
  wire [63:0] _j_pc_T_8 = $signed(_j_pc_T_3) != $signed(_j_pc_T_6) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 149:21]
  wire [63:0] _j_pc_T_11 = io_rs1 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_2_data; // @[EXU_AXI.scala 150:39]
  wire [63:0] _j_pc_T_14 = io_rs2 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_3_data; // @[EXU_AXI.scala 150:67]
  wire [63:0] _j_pc_T_16 = $signed(_j_pc_T_11) == $signed(_j_pc_T_14) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 150:21]
  wire [63:0] _j_pc_T_19 = io_rs1 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_4_data; // @[EXU_AXI.scala 151:39]
  wire [63:0] _j_pc_T_22 = io_rs2 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_5_data; // @[EXU_AXI.scala 151:66]
  wire [63:0] _j_pc_T_24 = $signed(_j_pc_T_19) >= $signed(_j_pc_T_22) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 151:21]
  wire [63:0] _j_pc_T_27 = io_rs1 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_6_data; // @[EXU_AXI.scala 152:39]
  wire [63:0] _j_pc_T_30 = io_rs2 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_7_data; // @[EXU_AXI.scala 152:65]
  wire [63:0] _j_pc_T_32 = $signed(_j_pc_T_27) < $signed(_j_pc_T_30) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 152:21]
  wire [63:0] _j_pc_T_34 = io_rs1 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_8_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _j_pc_T_36 = io_rs2 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_9_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _j_pc_T_38 = _j_pc_T_34 < _j_pc_T_36 ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 153:22]
  wire [63:0] _j_pc_T_40 = io_rs1 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_10_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _j_pc_T_42 = io_rs2 == 5'h0 ? 64'h0 : Regfile_j_pc_MPORT_11_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _j_pc_T_44 = _j_pc_T_40 >= _j_pc_T_42 ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 154:22]
  wire [63:0] _j_pc_T_46 = CSR_Reg_j_pc_MPORT_13_data + 64'h4; // @[EXU_AXI.scala 156:33]
  wire [63:0] _j_pc_T_48 = 32'h5 == io_inst_now ? add_res : _io_res2rd_T_1; // @[Mux.scala 81:58]
  wire [63:0] _j_pc_T_50 = 32'h6 == io_inst_now ? _j_pc_T : _j_pc_T_48; // @[Mux.scala 81:58]
  wire [63:0] _j_pc_T_52 = 32'h2a == io_inst_now ? _j_pc_T_8 : _j_pc_T_50; // @[Mux.scala 81:58]
  wire [63:0] _j_pc_T_54 = 32'h29 == io_inst_now ? _j_pc_T_16 : _j_pc_T_52; // @[Mux.scala 81:58]
  wire [63:0] _j_pc_T_56 = 32'h2b == io_inst_now ? _j_pc_T_24 : _j_pc_T_54; // @[Mux.scala 81:58]
  wire [63:0] _j_pc_T_58 = 32'h2c == io_inst_now ? _j_pc_T_32 : _j_pc_T_56; // @[Mux.scala 81:58]
  wire [63:0] _j_pc_T_60 = 32'h2d == io_inst_now ? _j_pc_T_38 : _j_pc_T_58; // @[Mux.scala 81:58]
  wire [63:0] _j_pc_T_62 = 32'h3c == io_inst_now ? _j_pc_T_44 : _j_pc_T_60; // @[Mux.scala 81:58]
  reg [63:0] pc_next; // @[EXU_AXI.scala 158:26]
  wire [63:0] _mem_wdata_T_1 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdata_MPORT_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _mem_wdata_T_3 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdata_MPORT_1_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _mem_wdata_T_6 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdata_MPORT_2_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _mem_wdata_T_9 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdata_MPORT_3_data; // @[EXU_AXI.scala 47:12]
  wire [63:0] _mem_wdata_T_12 = 32'h7 == io_inst_now ? _mem_wdata_T_1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _mem_wdata_T_14 = 32'h26 == io_inst_now ? {{48'd0}, _mem_wdata_T_3[15:0]} : _mem_wdata_T_12; // @[Mux.scala 81:58]
  wire [63:0] _mem_wdata_T_16 = 32'h28 == io_inst_now ? {{56'd0}, _mem_wdata_T_6[7:0]} : _mem_wdata_T_14; // @[Mux.scala 81:58]
  traceregs reg_trace ( // @[EXU_AXI.scala 163:27]
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
    .csr_reg_0(reg_trace_csr_reg_0),
    .csr_reg_1(reg_trace_csr_reg_1),
    .csr_reg_2(reg_trace_csr_reg_2),
    .csr_reg_3(reg_trace_csr_reg_3),
    .pc(reg_trace_pc)
  );
  assign Regfile_src1_value_MPORT_en = 1'h1;
  assign Regfile_src1_value_MPORT_addr = io_rs1;
  assign Regfile_src1_value_MPORT_data = Regfile[Regfile_src1_value_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_src2_value_MPORT_en = 1'h1;
  assign Regfile_src2_value_MPORT_addr = io_rs2;
  assign Regfile_src2_value_MPORT_data = Regfile[Regfile_src2_value_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_value_MPORT_en = 1'h1;
  assign Regfile_reg_value_MPORT_addr = io_rd;
  assign Regfile_reg_value_MPORT_data = Regfile[Regfile_reg_value_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_MPORT_4_en = 1'h1;
  assign Regfile_MPORT_4_addr = 5'h11;
  assign Regfile_MPORT_4_data = Regfile[Regfile_MPORT_4_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_en = 1'h1;
  assign Regfile_j_pc_MPORT_addr = io_rs1;
  assign Regfile_j_pc_MPORT_data = Regfile[Regfile_j_pc_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_1_en = 1'h1;
  assign Regfile_j_pc_MPORT_1_addr = io_rs2;
  assign Regfile_j_pc_MPORT_1_data = Regfile[Regfile_j_pc_MPORT_1_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_2_en = 1'h1;
  assign Regfile_j_pc_MPORT_2_addr = io_rs1;
  assign Regfile_j_pc_MPORT_2_data = Regfile[Regfile_j_pc_MPORT_2_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_3_en = 1'h1;
  assign Regfile_j_pc_MPORT_3_addr = io_rs2;
  assign Regfile_j_pc_MPORT_3_data = Regfile[Regfile_j_pc_MPORT_3_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_4_en = 1'h1;
  assign Regfile_j_pc_MPORT_4_addr = io_rs1;
  assign Regfile_j_pc_MPORT_4_data = Regfile[Regfile_j_pc_MPORT_4_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_5_en = 1'h1;
  assign Regfile_j_pc_MPORT_5_addr = io_rs2;
  assign Regfile_j_pc_MPORT_5_data = Regfile[Regfile_j_pc_MPORT_5_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_6_en = 1'h1;
  assign Regfile_j_pc_MPORT_6_addr = io_rs1;
  assign Regfile_j_pc_MPORT_6_data = Regfile[Regfile_j_pc_MPORT_6_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_7_en = 1'h1;
  assign Regfile_j_pc_MPORT_7_addr = io_rs2;
  assign Regfile_j_pc_MPORT_7_data = Regfile[Regfile_j_pc_MPORT_7_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_8_en = 1'h1;
  assign Regfile_j_pc_MPORT_8_addr = io_rs1;
  assign Regfile_j_pc_MPORT_8_data = Regfile[Regfile_j_pc_MPORT_8_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_9_en = 1'h1;
  assign Regfile_j_pc_MPORT_9_addr = io_rs2;
  assign Regfile_j_pc_MPORT_9_data = Regfile[Regfile_j_pc_MPORT_9_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_10_en = 1'h1;
  assign Regfile_j_pc_MPORT_10_addr = io_rs1;
  assign Regfile_j_pc_MPORT_10_data = Regfile[Regfile_j_pc_MPORT_10_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_j_pc_MPORT_11_en = 1'h1;
  assign Regfile_j_pc_MPORT_11_addr = io_rs2;
  assign Regfile_j_pc_MPORT_11_data = Regfile[Regfile_j_pc_MPORT_11_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_0_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_0_MPORT_addr = 5'h0;
  assign Regfile_reg_trace_io_input_reg_0_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_0_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_1_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_1_MPORT_addr = 5'h1;
  assign Regfile_reg_trace_io_input_reg_1_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_1_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_2_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_2_MPORT_addr = 5'h2;
  assign Regfile_reg_trace_io_input_reg_2_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_2_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_3_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_3_MPORT_addr = 5'h3;
  assign Regfile_reg_trace_io_input_reg_3_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_3_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_4_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_4_MPORT_addr = 5'h4;
  assign Regfile_reg_trace_io_input_reg_4_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_4_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_5_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_5_MPORT_addr = 5'h5;
  assign Regfile_reg_trace_io_input_reg_5_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_5_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_6_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_6_MPORT_addr = 5'h6;
  assign Regfile_reg_trace_io_input_reg_6_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_6_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_7_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_7_MPORT_addr = 5'h7;
  assign Regfile_reg_trace_io_input_reg_7_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_7_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_8_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_8_MPORT_addr = 5'h8;
  assign Regfile_reg_trace_io_input_reg_8_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_8_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_9_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_9_MPORT_addr = 5'h9;
  assign Regfile_reg_trace_io_input_reg_9_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_9_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_10_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_10_MPORT_addr = 5'ha;
  assign Regfile_reg_trace_io_input_reg_10_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_10_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_11_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_11_MPORT_addr = 5'hb;
  assign Regfile_reg_trace_io_input_reg_11_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_11_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_12_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_12_MPORT_addr = 5'hc;
  assign Regfile_reg_trace_io_input_reg_12_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_12_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_13_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_13_MPORT_addr = 5'hd;
  assign Regfile_reg_trace_io_input_reg_13_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_13_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_14_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_14_MPORT_addr = 5'he;
  assign Regfile_reg_trace_io_input_reg_14_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_14_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_15_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_15_MPORT_addr = 5'hf;
  assign Regfile_reg_trace_io_input_reg_15_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_15_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_16_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_16_MPORT_addr = 5'h10;
  assign Regfile_reg_trace_io_input_reg_16_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_16_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_17_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_17_MPORT_addr = 5'h11;
  assign Regfile_reg_trace_io_input_reg_17_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_17_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_18_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_18_MPORT_addr = 5'h12;
  assign Regfile_reg_trace_io_input_reg_18_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_18_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_19_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_19_MPORT_addr = 5'h13;
  assign Regfile_reg_trace_io_input_reg_19_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_19_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_20_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_20_MPORT_addr = 5'h14;
  assign Regfile_reg_trace_io_input_reg_20_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_20_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_21_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_21_MPORT_addr = 5'h15;
  assign Regfile_reg_trace_io_input_reg_21_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_21_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_22_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_22_MPORT_addr = 5'h16;
  assign Regfile_reg_trace_io_input_reg_22_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_22_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_23_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_23_MPORT_addr = 5'h17;
  assign Regfile_reg_trace_io_input_reg_23_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_23_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_24_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_24_MPORT_addr = 5'h18;
  assign Regfile_reg_trace_io_input_reg_24_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_24_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_25_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_25_MPORT_addr = 5'h19;
  assign Regfile_reg_trace_io_input_reg_25_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_25_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_26_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_26_MPORT_addr = 5'h1a;
  assign Regfile_reg_trace_io_input_reg_26_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_26_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_27_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_27_MPORT_addr = 5'h1b;
  assign Regfile_reg_trace_io_input_reg_27_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_27_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_28_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_28_MPORT_addr = 5'h1c;
  assign Regfile_reg_trace_io_input_reg_28_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_28_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_29_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_29_MPORT_addr = 5'h1d;
  assign Regfile_reg_trace_io_input_reg_29_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_29_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_30_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_30_MPORT_addr = 5'h1e;
  assign Regfile_reg_trace_io_input_reg_30_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_30_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_reg_trace_io_input_reg_31_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_31_MPORT_addr = 5'h1f;
  assign Regfile_reg_trace_io_input_reg_31_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_31_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_mem_wdata_MPORT_en = 1'h1;
  assign Regfile_mem_wdata_MPORT_addr = io_rs2;
  assign Regfile_mem_wdata_MPORT_data = Regfile[Regfile_mem_wdata_MPORT_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_mem_wdata_MPORT_1_en = 1'h1;
  assign Regfile_mem_wdata_MPORT_1_addr = io_rs2;
  assign Regfile_mem_wdata_MPORT_1_data = Regfile[Regfile_mem_wdata_MPORT_1_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_mem_wdata_MPORT_2_en = 1'h1;
  assign Regfile_mem_wdata_MPORT_2_addr = io_rs2;
  assign Regfile_mem_wdata_MPORT_2_data = Regfile[Regfile_mem_wdata_MPORT_2_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_mem_wdata_MPORT_3_en = 1'h1;
  assign Regfile_mem_wdata_MPORT_3_addr = io_rs2;
  assign Regfile_mem_wdata_MPORT_3_data = Regfile[Regfile_mem_wdata_MPORT_3_addr]; // @[EXU_AXI.scala 37:22]
  assign Regfile_MPORT_data = _T_6 ? io_res2rd : reg_value;
  assign Regfile_MPORT_addr = io_rd;
  assign Regfile_MPORT_mask = 1'h1;
  assign Regfile_MPORT_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_io_res2rd_MPORT_data = CSR_Reg[CSR_Reg_io_res2rd_MPORT_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_io_res2rd_MPORT_1_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_1_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_io_res2rd_MPORT_1_data = CSR_Reg[CSR_Reg_io_res2rd_MPORT_1_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_io_res2rd_MPORT_2_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_2_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_io_res2rd_MPORT_2_data = CSR_Reg[CSR_Reg_io_res2rd_MPORT_2_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_csr_wdata_MPORT_en = 1'h1;
  assign CSR_Reg_csr_wdata_MPORT_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_csr_wdata_MPORT_data = CSR_Reg[CSR_Reg_csr_wdata_MPORT_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_csr_wdata_MPORT_1_en = 1'h1;
  assign CSR_Reg_csr_wdata_MPORT_1_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_csr_wdata_MPORT_1_data = CSR_Reg[CSR_Reg_csr_wdata_MPORT_1_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_MPORT_2_en = 1'h1;
  assign CSR_Reg_MPORT_2_addr = 2'h1;
  assign CSR_Reg_MPORT_2_data = CSR_Reg[CSR_Reg_MPORT_2_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_MPORT_5_en = 1'h1;
  assign CSR_Reg_MPORT_5_addr = 2'h3;
  assign CSR_Reg_MPORT_5_data = CSR_Reg[CSR_Reg_MPORT_5_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_MPORT_7_en = 1'h1;
  assign CSR_Reg_MPORT_7_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_MPORT_7_data = CSR_Reg[CSR_Reg_MPORT_7_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_j_pc_MPORT_12_en = 1'h1;
  assign CSR_Reg_j_pc_MPORT_12_addr = 2'h0;
  assign CSR_Reg_j_pc_MPORT_12_data = CSR_Reg[CSR_Reg_j_pc_MPORT_12_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_j_pc_MPORT_13_en = 1'h1;
  assign CSR_Reg_j_pc_MPORT_13_addr = 2'h1;
  assign CSR_Reg_j_pc_MPORT_13_data = CSR_Reg[CSR_Reg_j_pc_MPORT_13_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_reg_trace_io_csr_reg_0_MPORT_en = 1'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr = 2'h0;
  assign CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data = CSR_Reg[CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_reg_trace_io_csr_reg_1_MPORT_en = 1'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr = 2'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data = CSR_Reg[CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_reg_trace_io_csr_reg_2_MPORT_en = 1'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr = 2'h2;
  assign CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data = CSR_Reg[CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr]; // @[EXU_AXI.scala 38:22]
  assign CSR_Reg_MPORT_1_data = _T_9 ? io_pc : CSR_Reg_MPORT_2_data;
  assign CSR_Reg_MPORT_1_addr = 2'h1;
  assign CSR_Reg_MPORT_1_mask = 1'h1;
  assign CSR_Reg_MPORT_1_en = 1'h1;
  assign CSR_Reg_MPORT_3_data = _T_9 ? Regfile_MPORT_4_data : CSR_Reg_MPORT_5_data;
  assign CSR_Reg_MPORT_3_addr = 2'h3;
  assign CSR_Reg_MPORT_3_mask = 1'h1;
  assign CSR_Reg_MPORT_3_en = 1'h1;
  assign CSR_Reg_MPORT_6_data = _T_14 ? csr_wdata : CSR_Reg_MPORT_7_data;
  assign CSR_Reg_MPORT_6_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_MPORT_6_mask = 1'h1;
  assign CSR_Reg_MPORT_6_en = 1'h1;
  assign io_pc_next = pc_next; // @[EXU_AXI.scala 162:16]
  assign io_res2rd = _io_res2rd_T_208[63:0]; // @[EXU_AXI.scala 72:15]
  assign io_inst_store = io_ctrl_sign_Writemem_en; // @[EXU_AXI.scala 188:19]
  assign io_inst_load = io_ctrl_sign_Readmem_en; // @[EXU_AXI.scala 189:18]
  assign io_Mem_addr = add_res[31:0]; // @[EXU_AXI.scala 190:17]
  assign io_Mem_wdata = 32'h27 == io_inst_now ? {{32'd0}, _mem_wdata_T_9[31:0]} : _mem_wdata_T_16; // @[Mux.scala 81:58]
  assign io_Mem_wstrb = io_ctrl_sign_Wmask; // @[EXU_AXI.scala 192:18]
  assign reg_trace_input_reg_0 = Regfile_reg_trace_io_input_reg_0_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_1 = Regfile_reg_trace_io_input_reg_1_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_2 = Regfile_reg_trace_io_input_reg_2_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_3 = Regfile_reg_trace_io_input_reg_3_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_4 = Regfile_reg_trace_io_input_reg_4_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_5 = Regfile_reg_trace_io_input_reg_5_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_6 = Regfile_reg_trace_io_input_reg_6_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_7 = Regfile_reg_trace_io_input_reg_7_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_8 = Regfile_reg_trace_io_input_reg_8_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_9 = Regfile_reg_trace_io_input_reg_9_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_10 = Regfile_reg_trace_io_input_reg_10_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_11 = Regfile_reg_trace_io_input_reg_11_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_12 = Regfile_reg_trace_io_input_reg_12_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_13 = Regfile_reg_trace_io_input_reg_13_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_14 = Regfile_reg_trace_io_input_reg_14_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_15 = Regfile_reg_trace_io_input_reg_15_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_16 = Regfile_reg_trace_io_input_reg_16_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_17 = Regfile_reg_trace_io_input_reg_17_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_18 = Regfile_reg_trace_io_input_reg_18_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_19 = Regfile_reg_trace_io_input_reg_19_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_20 = Regfile_reg_trace_io_input_reg_20_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_21 = Regfile_reg_trace_io_input_reg_21_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_22 = Regfile_reg_trace_io_input_reg_22_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_23 = Regfile_reg_trace_io_input_reg_23_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_24 = Regfile_reg_trace_io_input_reg_24_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_25 = Regfile_reg_trace_io_input_reg_25_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_26 = Regfile_reg_trace_io_input_reg_26_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_27 = Regfile_reg_trace_io_input_reg_27_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_28 = Regfile_reg_trace_io_input_reg_28_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_29 = Regfile_reg_trace_io_input_reg_29_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_30 = Regfile_reg_trace_io_input_reg_30_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_input_reg_31 = Regfile_reg_trace_io_input_reg_31_MPORT_data; // @[EXU_AXI.scala 165:57]
  assign reg_trace_csr_reg_0 = CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data; // @[EXU_AXI.scala 168:54]
  assign reg_trace_csr_reg_1 = CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data; // @[EXU_AXI.scala 168:54]
  assign reg_trace_csr_reg_2 = CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data; // @[EXU_AXI.scala 168:54]
  assign reg_trace_csr_reg_3 = 64'h0; // @[EXU_AXI.scala 167:{36,36}]
  assign reg_trace_pc = io_pc; // @[EXU_AXI.scala 166:21]
  always @(posedge clock) begin
    if (Regfile_MPORT_en & Regfile_MPORT_mask) begin
      Regfile[Regfile_MPORT_addr] <= Regfile_MPORT_data; // @[EXU_AXI.scala 37:22]
    end
    if (CSR_Reg_MPORT_1_en & CSR_Reg_MPORT_1_mask) begin
      CSR_Reg[CSR_Reg_MPORT_1_addr] <= CSR_Reg_MPORT_1_data; // @[EXU_AXI.scala 38:22]
    end
    if (CSR_Reg_MPORT_3_en & CSR_Reg_MPORT_3_mask) begin
      CSR_Reg[CSR_Reg_MPORT_3_addr] <= CSR_Reg_MPORT_3_data; // @[EXU_AXI.scala 38:22]
    end
    if (CSR_Reg_MPORT_6_en & CSR_Reg_MPORT_6_mask) begin
      CSR_Reg[CSR_Reg_MPORT_6_addr] <= CSR_Reg_MPORT_6_data; // @[EXU_AXI.scala 38:22]
    end
    if (reset) begin // @[EXU_AXI.scala 158:26]
      pc_next <= 64'h0; // @[EXU_AXI.scala 158:26]
    end else if (io_inst_valid) begin // @[EXU_AXI.scala 159:24]
      if (32'h3e == io_inst_now) begin // @[Mux.scala 81:58]
        pc_next <= _j_pc_T_46;
      end else if (32'h3d == io_inst_now) begin // @[Mux.scala 81:58]
        pc_next <= CSR_Reg_j_pc_MPORT_12_data;
      end else begin
        pc_next <= _j_pc_T_62;
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"inst_store :%d inst_load:%d\n",io_inst_store,io_inst_load); // @[EXU_AXI.scala 194:11]
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
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    Regfile[initvar] = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    CSR_Reg[initvar] = _RAND_1[63:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {2{`RANDOM}};
  pc_next = _RAND_2[63:0];
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
