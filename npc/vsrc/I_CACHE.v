module I_CACHE(
  input         clock,
  input         reset,
  input  [31:0] io_from_ifu_araddr,
  input         io_from_ifu_arvalid,
  input         io_from_ifu_rready,
  output        io_to_ifu_arready,
  output [63:0] io_to_ifu_rdata,
  output        io_to_ifu_rvalid,
  output [31:0] io_to_axi_araddr,
  output [7:0]  io_to_axi_arlen,
  output        io_to_axi_arvalid,
  output        io_to_axi_rready,
  input  [63:0] io_from_axi_rdata,
  input         io_from_axi_rlast,
  input         io_from_axi_rvalid,
  output        io_cache_init,
  input         io_clear_cache
);
`ifdef RANDOMIZE_MEM_INIT
  reg [127:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_REG_INIT
  reg [127:0] cacheLine [0:63]; // @[i_cache.scala 18:24]
  wire  cacheLine_io_to_ifu_rdata_MPORT_en; // @[i_cache.scala 18:24]
  wire [5:0] cacheLine_io_to_ifu_rdata_MPORT_addr; // @[i_cache.scala 18:24]
  wire [127:0] cacheLine_io_to_ifu_rdata_MPORT_data; // @[i_cache.scala 18:24]
  wire [127:0] cacheLine_MPORT_data; // @[i_cache.scala 18:24]
  wire [5:0] cacheLine_MPORT_addr; // @[i_cache.scala 18:24]
  wire  cacheLine_MPORT_mask; // @[i_cache.scala 18:24]
  wire  cacheLine_MPORT_en; // @[i_cache.scala 18:24]
  wire [127:0] cacheLine_MPORT_5_data; // @[i_cache.scala 18:24]
  wire [5:0] cacheLine_MPORT_5_addr; // @[i_cache.scala 18:24]
  wire  cacheLine_MPORT_5_mask; // @[i_cache.scala 18:24]
  wire  cacheLine_MPORT_5_en; // @[i_cache.scala 18:24]
  reg  validMem [0:63]; // @[i_cache.scala 19:23]
  wire  validMem_valid_0_MPORT_en; // @[i_cache.scala 19:23]
  wire [5:0] validMem_valid_0_MPORT_addr; // @[i_cache.scala 19:23]
  wire  validMem_valid_0_MPORT_data; // @[i_cache.scala 19:23]
  wire  validMem_valid_1_MPORT_en; // @[i_cache.scala 19:23]
  wire [5:0] validMem_valid_1_MPORT_addr; // @[i_cache.scala 19:23]
  wire  validMem_valid_1_MPORT_data; // @[i_cache.scala 19:23]
  wire  validMem_valid_2_MPORT_en; // @[i_cache.scala 19:23]
  wire [5:0] validMem_valid_2_MPORT_addr; // @[i_cache.scala 19:23]
  wire  validMem_valid_2_MPORT_data; // @[i_cache.scala 19:23]
  wire  validMem_valid_3_MPORT_en; // @[i_cache.scala 19:23]
  wire [5:0] validMem_valid_3_MPORT_addr; // @[i_cache.scala 19:23]
  wire  validMem_valid_3_MPORT_data; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_2_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_2_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_2_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_2_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_7_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_7_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_7_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_7_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_10_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_10_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_10_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_10_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_11_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_11_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_11_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_11_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_12_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_12_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_12_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_12_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_13_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_13_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_13_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_13_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_14_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_14_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_14_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_14_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_15_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_15_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_15_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_15_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_16_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_16_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_16_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_16_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_17_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_17_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_17_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_17_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_18_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_18_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_18_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_18_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_19_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_19_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_19_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_19_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_20_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_20_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_20_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_20_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_21_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_21_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_21_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_21_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_22_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_22_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_22_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_22_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_23_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_23_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_23_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_23_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_24_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_24_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_24_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_24_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_25_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_25_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_25_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_25_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_26_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_26_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_26_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_26_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_27_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_27_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_27_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_27_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_28_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_28_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_28_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_28_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_29_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_29_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_29_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_29_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_30_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_30_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_30_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_30_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_31_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_31_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_31_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_31_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_32_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_32_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_32_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_32_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_33_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_33_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_33_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_33_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_34_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_34_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_34_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_34_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_35_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_35_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_35_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_35_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_36_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_36_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_36_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_36_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_37_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_37_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_37_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_37_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_38_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_38_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_38_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_38_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_39_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_39_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_39_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_39_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_40_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_40_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_40_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_40_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_41_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_41_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_41_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_41_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_42_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_42_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_42_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_42_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_43_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_43_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_43_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_43_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_44_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_44_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_44_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_44_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_45_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_45_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_45_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_45_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_46_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_46_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_46_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_46_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_47_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_47_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_47_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_47_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_48_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_48_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_48_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_48_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_49_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_49_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_49_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_49_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_50_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_50_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_50_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_50_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_51_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_51_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_51_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_51_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_52_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_52_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_52_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_52_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_53_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_53_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_53_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_53_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_54_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_54_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_54_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_54_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_55_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_55_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_55_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_55_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_56_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_56_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_56_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_56_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_57_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_57_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_57_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_57_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_58_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_58_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_58_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_58_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_59_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_59_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_59_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_59_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_60_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_60_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_60_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_60_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_61_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_61_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_61_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_61_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_62_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_62_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_62_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_62_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_63_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_63_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_63_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_63_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_64_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_64_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_64_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_64_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_65_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_65_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_65_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_65_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_66_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_66_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_66_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_66_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_67_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_67_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_67_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_67_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_68_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_68_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_68_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_68_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_69_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_69_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_69_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_69_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_70_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_70_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_70_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_70_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_71_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_71_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_71_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_71_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_72_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_72_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_72_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_72_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_73_data; // @[i_cache.scala 19:23]
  wire [5:0] validMem_MPORT_73_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_73_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_73_en; // @[i_cache.scala 19:23]
  reg [31:0] tagMem [0:63]; // @[i_cache.scala 22:21]
  wire  tagMem_tagMatch_0_MPORT_en; // @[i_cache.scala 22:21]
  wire [5:0] tagMem_tagMatch_0_MPORT_addr; // @[i_cache.scala 22:21]
  wire [31:0] tagMem_tagMatch_0_MPORT_data; // @[i_cache.scala 22:21]
  wire  tagMem_tagMatch_1_MPORT_en; // @[i_cache.scala 22:21]
  wire [5:0] tagMem_tagMatch_1_MPORT_addr; // @[i_cache.scala 22:21]
  wire [31:0] tagMem_tagMatch_1_MPORT_data; // @[i_cache.scala 22:21]
  wire  tagMem_tagMatch_2_MPORT_en; // @[i_cache.scala 22:21]
  wire [5:0] tagMem_tagMatch_2_MPORT_addr; // @[i_cache.scala 22:21]
  wire [31:0] tagMem_tagMatch_2_MPORT_data; // @[i_cache.scala 22:21]
  wire  tagMem_tagMatch_3_MPORT_en; // @[i_cache.scala 22:21]
  wire [5:0] tagMem_tagMatch_3_MPORT_addr; // @[i_cache.scala 22:21]
  wire [31:0] tagMem_tagMatch_3_MPORT_data; // @[i_cache.scala 22:21]
  wire [31:0] tagMem_MPORT_1_data; // @[i_cache.scala 22:21]
  wire [5:0] tagMem_MPORT_1_addr; // @[i_cache.scala 22:21]
  wire  tagMem_MPORT_1_mask; // @[i_cache.scala 22:21]
  wire  tagMem_MPORT_1_en; // @[i_cache.scala 22:21]
  wire [31:0] tagMem_MPORT_6_data; // @[i_cache.scala 22:21]
  wire [5:0] tagMem_MPORT_6_addr; // @[i_cache.scala 22:21]
  wire  tagMem_MPORT_6_mask; // @[i_cache.scala 22:21]
  wire  tagMem_MPORT_6_en; // @[i_cache.scala 22:21]
  reg [7:0] quene [0:15]; // @[i_cache.scala 80:20]
  wire  quene_replace_way_MPORT_en; // @[i_cache.scala 80:20]
  wire [3:0] quene_replace_way_MPORT_addr; // @[i_cache.scala 80:20]
  wire [7:0] quene_replace_way_MPORT_data; // @[i_cache.scala 80:20]
  wire  quene_MPORT_4_en; // @[i_cache.scala 80:20]
  wire [3:0] quene_MPORT_4_addr; // @[i_cache.scala 80:20]
  wire [7:0] quene_MPORT_4_data; // @[i_cache.scala 80:20]
  wire  quene_MPORT_9_en; // @[i_cache.scala 80:20]
  wire [3:0] quene_MPORT_9_addr; // @[i_cache.scala 80:20]
  wire [7:0] quene_MPORT_9_data; // @[i_cache.scala 80:20]
  wire [7:0] quene_MPORT_3_data; // @[i_cache.scala 80:20]
  wire [3:0] quene_MPORT_3_addr; // @[i_cache.scala 80:20]
  wire  quene_MPORT_3_mask; // @[i_cache.scala 80:20]
  wire  quene_MPORT_3_en; // @[i_cache.scala 80:20]
  wire [7:0] quene_MPORT_8_data; // @[i_cache.scala 80:20]
  wire [3:0] quene_MPORT_8_addr; // @[i_cache.scala 80:20]
  wire  quene_MPORT_8_mask; // @[i_cache.scala 80:20]
  wire  quene_MPORT_8_en; // @[i_cache.scala 80:20]
  reg [31:0] addr; // @[i_cache.scala 37:23]
  wire [3:0] offset = addr[3:0]; // @[i_cache.scala 38:22]
  wire [3:0] index = addr[7:4]; // @[i_cache.scala 39:21]
  wire [23:0] tag = addr[31:8]; // @[i_cache.scala 40:19]
  wire [6:0] shift_bit = {offset, 3'h0}; // @[i_cache.scala 41:28]
  wire [7:0] _GEN_463 = {{4'd0}, index}; // @[i_cache.scala 45:48]
  wire [8:0] _valid_0_T_1 = {{1'd0}, _GEN_463}; // @[i_cache.scala 45:48]
  wire [7:0] _valid_1_T_2 = 8'h10 + _GEN_463; // @[i_cache.scala 45:48]
  wire [8:0] _GEN_476 = {{5'd0}, index}; // @[i_cache.scala 45:48]
  wire [8:0] _valid_2_T_2 = 9'h20 + _GEN_476; // @[i_cache.scala 45:48]
  wire [8:0] _valid_3_T_2 = 9'h30 + _GEN_476; // @[i_cache.scala 45:48]
  wire  valid_0 = validMem_valid_0_MPORT_data; // @[i_cache.scala 43:21 45:18]
  wire  valid_1 = validMem_valid_1_MPORT_data; // @[i_cache.scala 43:21 45:18]
  wire  valid_2 = validMem_valid_2_MPORT_data; // @[i_cache.scala 43:21 45:18]
  wire  valid_3 = validMem_valid_3_MPORT_data; // @[i_cache.scala 43:21 45:18]
  wire  allvalid = valid_0 & valid_1 & valid_2 & valid_3; // @[i_cache.scala 47:35]
  wire  _foundUnvalidIndex_T = ~valid_0; // @[i_cache.scala 49:10]
  wire  _foundUnvalidIndex_T_1 = ~valid_1; // @[i_cache.scala 50:10]
  wire  _foundUnvalidIndex_T_2 = ~valid_2; // @[i_cache.scala 51:10]
  wire  _foundUnvalidIndex_T_3 = ~valid_3; // @[i_cache.scala 52:10]
  wire [1:0] _foundUnvalidIndex_T_4 = _foundUnvalidIndex_T_3 ? 2'h3 : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] _foundUnvalidIndex_T_5 = _foundUnvalidIndex_T_2 ? 2'h2 : _foundUnvalidIndex_T_4; // @[Mux.scala 101:16]
  wire [1:0] _foundUnvalidIndex_T_6 = _foundUnvalidIndex_T_1 ? 2'h1 : _foundUnvalidIndex_T_5; // @[Mux.scala 101:16]
  wire [1:0] foundUnvalidIndex = _foundUnvalidIndex_T ? 2'h0 : _foundUnvalidIndex_T_6; // @[Mux.scala 101:16]
  wire [5:0] _GEN_478 = {foundUnvalidIndex, 4'h0}; // @[i_cache.scala 54:43]
  wire [8:0] _unvalidIndex_T = {{3'd0}, _GEN_478}; // @[i_cache.scala 54:43]
  wire [8:0] unvalidIndex = _unvalidIndex_T + _GEN_476; // @[i_cache.scala 54:51]
  wire [31:0] _GEN_481 = {{8'd0}, tag}; // @[i_cache.scala 59:71]
  wire  tagMatch_0 = valid_0 & tagMem_tagMatch_0_MPORT_data == _GEN_481; // @[i_cache.scala 59:33]
  wire  tagMatch_1 = valid_1 & tagMem_tagMatch_1_MPORT_data == _GEN_481; // @[i_cache.scala 59:33]
  wire  tagMatch_2 = valid_2 & tagMem_tagMatch_2_MPORT_data == _GEN_481; // @[i_cache.scala 59:33]
  wire  tagMatch_3 = valid_3 & tagMem_tagMatch_3_MPORT_data == _GEN_481; // @[i_cache.scala 59:33]
  wire  anyMatch = tagMatch_0 | tagMatch_1 | tagMatch_2 | tagMatch_3; // @[i_cache.scala 61:38]
  wire [1:0] _foundtagIndex_T = tagMatch_3 ? 2'h3 : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] _foundtagIndex_T_1 = tagMatch_2 ? 2'h2 : _foundtagIndex_T; // @[Mux.scala 101:16]
  wire [1:0] _foundtagIndex_T_2 = tagMatch_1 ? 2'h1 : _foundtagIndex_T_1; // @[Mux.scala 101:16]
  wire [1:0] foundtagIndex = tagMatch_0 ? 2'h0 : _foundtagIndex_T_2; // @[Mux.scala 101:16]
  wire [5:0] _GEN_488 = {foundtagIndex, 4'h0}; // @[i_cache.scala 68:35]
  wire [8:0] _tagIndex_T = {{3'd0}, _GEN_488}; // @[i_cache.scala 68:35]
  wire [8:0] tagIndex = _tagIndex_T + _GEN_476; // @[i_cache.scala 68:43]
  reg [63:0] receive_data_0; // @[i_cache.scala 78:31]
  reg [63:0] receive_data_1; // @[i_cache.scala 78:31]
  reg [2:0] receive_num; // @[i_cache.scala 79:30]
  wire [1:0] replace_way = quene_replace_way_MPORT_data[7:6]; // @[i_cache.scala 82:35]
  wire [5:0] _GEN_490 = {replace_way, 4'h0}; // @[i_cache.scala 83:34]
  wire [8:0] _replaceIndex_T = {{3'd0}, _GEN_490}; // @[i_cache.scala 83:34]
  wire [8:0] _replaceIndex_T_2 = _replaceIndex_T + _GEN_476; // @[i_cache.scala 83:42]
  reg [2:0] state; // @[i_cache.scala 92:24]
  wire  _T = 3'h0 == state; // @[i_cache.scala 96:18]
  wire [2:0] _GEN_4 = io_from_ifu_rready ? 3'h0 : state; // @[i_cache.scala 107:41 108:27 92:24]
  wire [63:0] _GEN_7 = ~receive_num[0] ? io_from_axi_rdata : receive_data_0; // @[i_cache.scala 117:{43,43} 78:31]
  wire [63:0] _GEN_8 = receive_num[0] ? io_from_axi_rdata : receive_data_1; // @[i_cache.scala 117:{43,43} 78:31]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[i_cache.scala 118:44]
  wire [2:0] _GEN_9 = io_from_axi_rlast ? 3'h3 : state; // @[i_cache.scala 119:40 120:27 92:24]
  wire [63:0] _GEN_10 = io_from_axi_rvalid ? _GEN_7 : receive_data_0; // @[i_cache.scala 116:37 78:31]
  wire [63:0] _GEN_11 = io_from_axi_rvalid ? _GEN_8 : receive_data_1; // @[i_cache.scala 116:37 78:31]
  wire [2:0] _GEN_12 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[i_cache.scala 116:37 118:29 79:30]
  wire [2:0] _GEN_13 = io_from_axi_rvalid ? _GEN_9 : state; // @[i_cache.scala 116:37 92:24]
  wire  _T_5 = ~allvalid; // @[i_cache.scala 126:18]
  wire [9:0] _GEN_492 = {quene_MPORT_4_data, 2'h0}; // @[i_cache.scala 130:47]
  wire [10:0] _T_10 = {{1'd0}, _GEN_492}; // @[i_cache.scala 130:47]
  wire [10:0] _GEN_493 = {{9'd0}, foundUnvalidIndex}; // @[i_cache.scala 130:55]
  wire [10:0] _T_11 = _T_10 | _GEN_493; // @[i_cache.scala 130:55]
  wire [31:0] replaceIndex = {{23'd0}, _replaceIndex_T_2}; // @[i_cache.scala 70:28 83:18]
  wire [9:0] _GEN_494 = {quene_MPORT_9_data, 2'h0}; // @[i_cache.scala 135:47]
  wire [10:0] _T_16 = {{1'd0}, _GEN_494}; // @[i_cache.scala 135:47]
  wire [10:0] _GEN_495 = {{9'd0}, replace_way}; // @[i_cache.scala 135:55]
  wire [10:0] _T_17 = _T_16 | _GEN_495; // @[i_cache.scala 135:55]
  wire  _GEN_26 = ~allvalid ? 1'h0 : 1'h1; // @[i_cache.scala 126:28 18:24 132:26]
  wire [2:0] _GEN_100 = 3'h4 == state ? 3'h0 : state; // @[i_cache.scala 142:18 96:18 92:24]
  wire [2:0] _GEN_101 = 3'h3 == state ? 3'h1 : _GEN_100; // @[i_cache.scala 96:18 125:19]
  wire  _GEN_124 = 3'h3 == state ? 1'h0 : 3'h4 == state; // @[i_cache.scala 96:18 19:23]
  wire  _GEN_194 = 3'h2 == state ? 1'h0 : 3'h3 == state & _T_5; // @[i_cache.scala 96:18 18:24]
  wire  _GEN_204 = 3'h2 == state ? 1'h0 : 3'h3 == state & _GEN_26; // @[i_cache.scala 96:18 18:24]
  wire  _GEN_214 = 3'h2 == state ? 1'h0 : _GEN_124; // @[i_cache.scala 96:18 19:23]
  wire  _GEN_284 = 3'h1 == state ? 1'h0 : _GEN_194; // @[i_cache.scala 96:18 18:24]
  wire  _GEN_294 = 3'h1 == state ? 1'h0 : _GEN_204; // @[i_cache.scala 96:18 18:24]
  wire  _GEN_304 = 3'h1 == state ? 1'h0 : _GEN_214; // @[i_cache.scala 96:18 19:23]
  wire [127:0] _io_to_ifu_rdata_T_1 = cacheLine_io_to_ifu_rdata_MPORT_data >> shift_bit; // @[i_cache.scala 163:49]
  wire  _T_20 = state == 3'h2; // @[i_cache.scala 170:21]
  wire [63:0] _GEN_496 = {{32'd0}, addr}; // @[i_cache.scala 179:35]
  wire [63:0] _io_to_axi_araddr_T = _GEN_496 & 64'hfffffffffffffff0; // @[i_cache.scala 179:35]
  wire  _GEN_460 = state == 3'h2 ? 1'h0 : state == 3'h0; // @[i_cache.scala 170:29 172:27 196:27]
  wire [63:0] _GEN_462 = state == 3'h2 ? _io_to_axi_araddr_T : {{32'd0}, addr}; // @[i_cache.scala 170:29 179:26 203:26]
  wire  _GEN_464 = state == 3'h2 | io_from_ifu_rready; // @[i_cache.scala 170:29 183:26 204:26]
  wire  _GEN_465 = state == 3'h1 ? 1'h0 : _T_20; // @[i_cache.scala 146:25 147:27]
  wire [63:0] _GEN_466 = state == 3'h1 ? {{32'd0}, addr} : _GEN_462; // @[i_cache.scala 146:25 148:26]
  wire [127:0] _GEN_473 = state == 3'h1 ? _io_to_ifu_rdata_T_1 : 128'h0; // @[i_cache.scala 146:25 163:25]
  assign cacheLine_io_to_ifu_rdata_MPORT_en = state == 3'h1;
  assign cacheLine_io_to_ifu_rdata_MPORT_addr = tagIndex[5:0];
  assign cacheLine_io_to_ifu_rdata_MPORT_data = cacheLine[cacheLine_io_to_ifu_rdata_MPORT_addr]; // @[i_cache.scala 18:24]
  assign cacheLine_MPORT_data = {receive_data_1,receive_data_0};
  assign cacheLine_MPORT_addr = unvalidIndex[5:0];
  assign cacheLine_MPORT_mask = 1'h1;
  assign cacheLine_MPORT_en = _T ? 1'h0 : _GEN_284;
  assign cacheLine_MPORT_5_data = {receive_data_1,receive_data_0};
  assign cacheLine_MPORT_5_addr = replaceIndex[5:0];
  assign cacheLine_MPORT_5_mask = 1'h1;
  assign cacheLine_MPORT_5_en = _T ? 1'h0 : _GEN_294;
  assign validMem_valid_0_MPORT_en = 1'h1;
  assign validMem_valid_0_MPORT_addr = _valid_0_T_1[5:0];
  assign validMem_valid_0_MPORT_data = validMem[validMem_valid_0_MPORT_addr]; // @[i_cache.scala 19:23]
  assign validMem_valid_1_MPORT_en = 1'h1;
  assign validMem_valid_1_MPORT_addr = _valid_1_T_2[5:0];
  assign validMem_valid_1_MPORT_data = validMem[validMem_valid_1_MPORT_addr]; // @[i_cache.scala 19:23]
  assign validMem_valid_2_MPORT_en = 1'h1;
  assign validMem_valid_2_MPORT_addr = _valid_2_T_2[5:0];
  assign validMem_valid_2_MPORT_data = validMem[validMem_valid_2_MPORT_addr]; // @[i_cache.scala 19:23]
  assign validMem_valid_3_MPORT_en = 1'h1;
  assign validMem_valid_3_MPORT_addr = _valid_3_T_2[5:0];
  assign validMem_valid_3_MPORT_data = validMem[validMem_valid_3_MPORT_addr]; // @[i_cache.scala 19:23]
  assign validMem_MPORT_2_data = 1'h1;
  assign validMem_MPORT_2_addr = unvalidIndex[5:0];
  assign validMem_MPORT_2_mask = 1'h1;
  assign validMem_MPORT_2_en = _T ? 1'h0 : _GEN_284;
  assign validMem_MPORT_7_data = 1'h1;
  assign validMem_MPORT_7_addr = replaceIndex[5:0];
  assign validMem_MPORT_7_mask = 1'h1;
  assign validMem_MPORT_7_en = _T ? 1'h0 : _GEN_294;
  assign validMem_MPORT_10_data = 1'h0;
  assign validMem_MPORT_10_addr = 6'h0;
  assign validMem_MPORT_10_mask = 1'h1;
  assign validMem_MPORT_10_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_11_data = 1'h0;
  assign validMem_MPORT_11_addr = 6'h1;
  assign validMem_MPORT_11_mask = 1'h1;
  assign validMem_MPORT_11_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_12_data = 1'h0;
  assign validMem_MPORT_12_addr = 6'h2;
  assign validMem_MPORT_12_mask = 1'h1;
  assign validMem_MPORT_12_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_13_data = 1'h0;
  assign validMem_MPORT_13_addr = 6'h3;
  assign validMem_MPORT_13_mask = 1'h1;
  assign validMem_MPORT_13_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_14_data = 1'h0;
  assign validMem_MPORT_14_addr = 6'h4;
  assign validMem_MPORT_14_mask = 1'h1;
  assign validMem_MPORT_14_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_15_data = 1'h0;
  assign validMem_MPORT_15_addr = 6'h5;
  assign validMem_MPORT_15_mask = 1'h1;
  assign validMem_MPORT_15_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_16_data = 1'h0;
  assign validMem_MPORT_16_addr = 6'h6;
  assign validMem_MPORT_16_mask = 1'h1;
  assign validMem_MPORT_16_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_17_data = 1'h0;
  assign validMem_MPORT_17_addr = 6'h7;
  assign validMem_MPORT_17_mask = 1'h1;
  assign validMem_MPORT_17_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_18_data = 1'h0;
  assign validMem_MPORT_18_addr = 6'h8;
  assign validMem_MPORT_18_mask = 1'h1;
  assign validMem_MPORT_18_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_19_data = 1'h0;
  assign validMem_MPORT_19_addr = 6'h9;
  assign validMem_MPORT_19_mask = 1'h1;
  assign validMem_MPORT_19_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_20_data = 1'h0;
  assign validMem_MPORT_20_addr = 6'ha;
  assign validMem_MPORT_20_mask = 1'h1;
  assign validMem_MPORT_20_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_21_data = 1'h0;
  assign validMem_MPORT_21_addr = 6'hb;
  assign validMem_MPORT_21_mask = 1'h1;
  assign validMem_MPORT_21_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_22_data = 1'h0;
  assign validMem_MPORT_22_addr = 6'hc;
  assign validMem_MPORT_22_mask = 1'h1;
  assign validMem_MPORT_22_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_23_data = 1'h0;
  assign validMem_MPORT_23_addr = 6'hd;
  assign validMem_MPORT_23_mask = 1'h1;
  assign validMem_MPORT_23_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_24_data = 1'h0;
  assign validMem_MPORT_24_addr = 6'he;
  assign validMem_MPORT_24_mask = 1'h1;
  assign validMem_MPORT_24_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_25_data = 1'h0;
  assign validMem_MPORT_25_addr = 6'hf;
  assign validMem_MPORT_25_mask = 1'h1;
  assign validMem_MPORT_25_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_26_data = 1'h0;
  assign validMem_MPORT_26_addr = 6'h10;
  assign validMem_MPORT_26_mask = 1'h1;
  assign validMem_MPORT_26_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_27_data = 1'h0;
  assign validMem_MPORT_27_addr = 6'h11;
  assign validMem_MPORT_27_mask = 1'h1;
  assign validMem_MPORT_27_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_28_data = 1'h0;
  assign validMem_MPORT_28_addr = 6'h12;
  assign validMem_MPORT_28_mask = 1'h1;
  assign validMem_MPORT_28_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_29_data = 1'h0;
  assign validMem_MPORT_29_addr = 6'h13;
  assign validMem_MPORT_29_mask = 1'h1;
  assign validMem_MPORT_29_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_30_data = 1'h0;
  assign validMem_MPORT_30_addr = 6'h14;
  assign validMem_MPORT_30_mask = 1'h1;
  assign validMem_MPORT_30_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_31_data = 1'h0;
  assign validMem_MPORT_31_addr = 6'h15;
  assign validMem_MPORT_31_mask = 1'h1;
  assign validMem_MPORT_31_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_32_data = 1'h0;
  assign validMem_MPORT_32_addr = 6'h16;
  assign validMem_MPORT_32_mask = 1'h1;
  assign validMem_MPORT_32_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_33_data = 1'h0;
  assign validMem_MPORT_33_addr = 6'h17;
  assign validMem_MPORT_33_mask = 1'h1;
  assign validMem_MPORT_33_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_34_data = 1'h0;
  assign validMem_MPORT_34_addr = 6'h18;
  assign validMem_MPORT_34_mask = 1'h1;
  assign validMem_MPORT_34_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_35_data = 1'h0;
  assign validMem_MPORT_35_addr = 6'h19;
  assign validMem_MPORT_35_mask = 1'h1;
  assign validMem_MPORT_35_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_36_data = 1'h0;
  assign validMem_MPORT_36_addr = 6'h1a;
  assign validMem_MPORT_36_mask = 1'h1;
  assign validMem_MPORT_36_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_37_data = 1'h0;
  assign validMem_MPORT_37_addr = 6'h1b;
  assign validMem_MPORT_37_mask = 1'h1;
  assign validMem_MPORT_37_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_38_data = 1'h0;
  assign validMem_MPORT_38_addr = 6'h1c;
  assign validMem_MPORT_38_mask = 1'h1;
  assign validMem_MPORT_38_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_39_data = 1'h0;
  assign validMem_MPORT_39_addr = 6'h1d;
  assign validMem_MPORT_39_mask = 1'h1;
  assign validMem_MPORT_39_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_40_data = 1'h0;
  assign validMem_MPORT_40_addr = 6'h1e;
  assign validMem_MPORT_40_mask = 1'h1;
  assign validMem_MPORT_40_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_41_data = 1'h0;
  assign validMem_MPORT_41_addr = 6'h1f;
  assign validMem_MPORT_41_mask = 1'h1;
  assign validMem_MPORT_41_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_42_data = 1'h0;
  assign validMem_MPORT_42_addr = 6'h20;
  assign validMem_MPORT_42_mask = 1'h1;
  assign validMem_MPORT_42_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_43_data = 1'h0;
  assign validMem_MPORT_43_addr = 6'h21;
  assign validMem_MPORT_43_mask = 1'h1;
  assign validMem_MPORT_43_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_44_data = 1'h0;
  assign validMem_MPORT_44_addr = 6'h22;
  assign validMem_MPORT_44_mask = 1'h1;
  assign validMem_MPORT_44_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_45_data = 1'h0;
  assign validMem_MPORT_45_addr = 6'h23;
  assign validMem_MPORT_45_mask = 1'h1;
  assign validMem_MPORT_45_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_46_data = 1'h0;
  assign validMem_MPORT_46_addr = 6'h24;
  assign validMem_MPORT_46_mask = 1'h1;
  assign validMem_MPORT_46_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_47_data = 1'h0;
  assign validMem_MPORT_47_addr = 6'h25;
  assign validMem_MPORT_47_mask = 1'h1;
  assign validMem_MPORT_47_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_48_data = 1'h0;
  assign validMem_MPORT_48_addr = 6'h26;
  assign validMem_MPORT_48_mask = 1'h1;
  assign validMem_MPORT_48_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_49_data = 1'h0;
  assign validMem_MPORT_49_addr = 6'h27;
  assign validMem_MPORT_49_mask = 1'h1;
  assign validMem_MPORT_49_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_50_data = 1'h0;
  assign validMem_MPORT_50_addr = 6'h28;
  assign validMem_MPORT_50_mask = 1'h1;
  assign validMem_MPORT_50_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_51_data = 1'h0;
  assign validMem_MPORT_51_addr = 6'h29;
  assign validMem_MPORT_51_mask = 1'h1;
  assign validMem_MPORT_51_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_52_data = 1'h0;
  assign validMem_MPORT_52_addr = 6'h2a;
  assign validMem_MPORT_52_mask = 1'h1;
  assign validMem_MPORT_52_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_53_data = 1'h0;
  assign validMem_MPORT_53_addr = 6'h2b;
  assign validMem_MPORT_53_mask = 1'h1;
  assign validMem_MPORT_53_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_54_data = 1'h0;
  assign validMem_MPORT_54_addr = 6'h2c;
  assign validMem_MPORT_54_mask = 1'h1;
  assign validMem_MPORT_54_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_55_data = 1'h0;
  assign validMem_MPORT_55_addr = 6'h2d;
  assign validMem_MPORT_55_mask = 1'h1;
  assign validMem_MPORT_55_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_56_data = 1'h0;
  assign validMem_MPORT_56_addr = 6'h2e;
  assign validMem_MPORT_56_mask = 1'h1;
  assign validMem_MPORT_56_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_57_data = 1'h0;
  assign validMem_MPORT_57_addr = 6'h2f;
  assign validMem_MPORT_57_mask = 1'h1;
  assign validMem_MPORT_57_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_58_data = 1'h0;
  assign validMem_MPORT_58_addr = 6'h30;
  assign validMem_MPORT_58_mask = 1'h1;
  assign validMem_MPORT_58_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_59_data = 1'h0;
  assign validMem_MPORT_59_addr = 6'h31;
  assign validMem_MPORT_59_mask = 1'h1;
  assign validMem_MPORT_59_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_60_data = 1'h0;
  assign validMem_MPORT_60_addr = 6'h32;
  assign validMem_MPORT_60_mask = 1'h1;
  assign validMem_MPORT_60_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_61_data = 1'h0;
  assign validMem_MPORT_61_addr = 6'h33;
  assign validMem_MPORT_61_mask = 1'h1;
  assign validMem_MPORT_61_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_62_data = 1'h0;
  assign validMem_MPORT_62_addr = 6'h34;
  assign validMem_MPORT_62_mask = 1'h1;
  assign validMem_MPORT_62_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_63_data = 1'h0;
  assign validMem_MPORT_63_addr = 6'h35;
  assign validMem_MPORT_63_mask = 1'h1;
  assign validMem_MPORT_63_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_64_data = 1'h0;
  assign validMem_MPORT_64_addr = 6'h36;
  assign validMem_MPORT_64_mask = 1'h1;
  assign validMem_MPORT_64_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_65_data = 1'h0;
  assign validMem_MPORT_65_addr = 6'h37;
  assign validMem_MPORT_65_mask = 1'h1;
  assign validMem_MPORT_65_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_66_data = 1'h0;
  assign validMem_MPORT_66_addr = 6'h38;
  assign validMem_MPORT_66_mask = 1'h1;
  assign validMem_MPORT_66_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_67_data = 1'h0;
  assign validMem_MPORT_67_addr = 6'h39;
  assign validMem_MPORT_67_mask = 1'h1;
  assign validMem_MPORT_67_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_68_data = 1'h0;
  assign validMem_MPORT_68_addr = 6'h3a;
  assign validMem_MPORT_68_mask = 1'h1;
  assign validMem_MPORT_68_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_69_data = 1'h0;
  assign validMem_MPORT_69_addr = 6'h3b;
  assign validMem_MPORT_69_mask = 1'h1;
  assign validMem_MPORT_69_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_70_data = 1'h0;
  assign validMem_MPORT_70_addr = 6'h3c;
  assign validMem_MPORT_70_mask = 1'h1;
  assign validMem_MPORT_70_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_71_data = 1'h0;
  assign validMem_MPORT_71_addr = 6'h3d;
  assign validMem_MPORT_71_mask = 1'h1;
  assign validMem_MPORT_71_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_72_data = 1'h0;
  assign validMem_MPORT_72_addr = 6'h3e;
  assign validMem_MPORT_72_mask = 1'h1;
  assign validMem_MPORT_72_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_73_data = 1'h0;
  assign validMem_MPORT_73_addr = 6'h3f;
  assign validMem_MPORT_73_mask = 1'h1;
  assign validMem_MPORT_73_en = _T ? 1'h0 : _GEN_304;
  assign tagMem_tagMatch_0_MPORT_en = 1'h1;
  assign tagMem_tagMatch_0_MPORT_addr = _valid_0_T_1[5:0];
  assign tagMem_tagMatch_0_MPORT_data = tagMem[tagMem_tagMatch_0_MPORT_addr]; // @[i_cache.scala 22:21]
  assign tagMem_tagMatch_1_MPORT_en = 1'h1;
  assign tagMem_tagMatch_1_MPORT_addr = _valid_1_T_2[5:0];
  assign tagMem_tagMatch_1_MPORT_data = tagMem[tagMem_tagMatch_1_MPORT_addr]; // @[i_cache.scala 22:21]
  assign tagMem_tagMatch_2_MPORT_en = 1'h1;
  assign tagMem_tagMatch_2_MPORT_addr = _valid_2_T_2[5:0];
  assign tagMem_tagMatch_2_MPORT_data = tagMem[tagMem_tagMatch_2_MPORT_addr]; // @[i_cache.scala 22:21]
  assign tagMem_tagMatch_3_MPORT_en = 1'h1;
  assign tagMem_tagMatch_3_MPORT_addr = _valid_3_T_2[5:0];
  assign tagMem_tagMatch_3_MPORT_data = tagMem[tagMem_tagMatch_3_MPORT_addr]; // @[i_cache.scala 22:21]
  assign tagMem_MPORT_1_data = {{8'd0}, tag};
  assign tagMem_MPORT_1_addr = unvalidIndex[5:0];
  assign tagMem_MPORT_1_mask = 1'h1;
  assign tagMem_MPORT_1_en = _T ? 1'h0 : _GEN_284;
  assign tagMem_MPORT_6_data = {{8'd0}, tag};
  assign tagMem_MPORT_6_addr = replaceIndex[5:0];
  assign tagMem_MPORT_6_mask = 1'h1;
  assign tagMem_MPORT_6_en = _T ? 1'h0 : _GEN_294;
  assign quene_replace_way_MPORT_en = 1'h1;
  assign quene_replace_way_MPORT_addr = addr[7:4];
  assign quene_replace_way_MPORT_data = quene[quene_replace_way_MPORT_addr]; // @[i_cache.scala 80:20]
  assign quene_MPORT_4_en = _T ? 1'h0 : _GEN_284;
  assign quene_MPORT_4_addr = addr[7:4];
  assign quene_MPORT_4_data = quene[quene_MPORT_4_addr]; // @[i_cache.scala 80:20]
  assign quene_MPORT_9_en = _T ? 1'h0 : _GEN_294;
  assign quene_MPORT_9_addr = addr[7:4];
  assign quene_MPORT_9_data = quene[quene_MPORT_9_addr]; // @[i_cache.scala 80:20]
  assign quene_MPORT_3_data = _T_11[7:0];
  assign quene_MPORT_3_addr = addr[7:4];
  assign quene_MPORT_3_mask = 1'h1;
  assign quene_MPORT_3_en = _T ? 1'h0 : _GEN_284;
  assign quene_MPORT_8_data = _T_17[7:0];
  assign quene_MPORT_8_addr = addr[7:4];
  assign quene_MPORT_8_mask = 1'h1;
  assign quene_MPORT_8_en = _T ? 1'h0 : _GEN_294;
  assign io_to_ifu_arready = state == 3'h1 ? 1'h0 : _GEN_460; // @[i_cache.scala 146:25 164:27]
  assign io_to_ifu_rdata = _GEN_473[63:0];
  assign io_to_ifu_rvalid = state == 3'h1 & anyMatch; // @[i_cache.scala 146:25 165:26]
  assign io_to_axi_araddr = _GEN_466[31:0];
  assign io_to_axi_arlen = {{7'd0}, _GEN_465};
  assign io_to_axi_arvalid = state == 3'h1 ? 1'h0 : _T_20; // @[i_cache.scala 146:25 147:27]
  assign io_to_axi_rready = state == 3'h1 ? 1'h0 : _GEN_464; // @[i_cache.scala 146:25 152:26]
  assign io_cache_init = state == 3'h4; // @[i_cache.scala 219:27]
  always @(posedge clock) begin
    if (cacheLine_MPORT_en & cacheLine_MPORT_mask) begin
      cacheLine[cacheLine_MPORT_addr] <= cacheLine_MPORT_data; // @[i_cache.scala 18:24]
    end
    if (cacheLine_MPORT_5_en & cacheLine_MPORT_5_mask) begin
      cacheLine[cacheLine_MPORT_5_addr] <= cacheLine_MPORT_5_data; // @[i_cache.scala 18:24]
    end
    if (validMem_MPORT_2_en & validMem_MPORT_2_mask) begin
      validMem[validMem_MPORT_2_addr] <= validMem_MPORT_2_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_7_en & validMem_MPORT_7_mask) begin
      validMem[validMem_MPORT_7_addr] <= validMem_MPORT_7_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_10_en & validMem_MPORT_10_mask) begin
      validMem[validMem_MPORT_10_addr] <= validMem_MPORT_10_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_11_en & validMem_MPORT_11_mask) begin
      validMem[validMem_MPORT_11_addr] <= validMem_MPORT_11_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_12_en & validMem_MPORT_12_mask) begin
      validMem[validMem_MPORT_12_addr] <= validMem_MPORT_12_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_13_en & validMem_MPORT_13_mask) begin
      validMem[validMem_MPORT_13_addr] <= validMem_MPORT_13_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_14_en & validMem_MPORT_14_mask) begin
      validMem[validMem_MPORT_14_addr] <= validMem_MPORT_14_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_15_en & validMem_MPORT_15_mask) begin
      validMem[validMem_MPORT_15_addr] <= validMem_MPORT_15_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_16_en & validMem_MPORT_16_mask) begin
      validMem[validMem_MPORT_16_addr] <= validMem_MPORT_16_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_17_en & validMem_MPORT_17_mask) begin
      validMem[validMem_MPORT_17_addr] <= validMem_MPORT_17_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_18_en & validMem_MPORT_18_mask) begin
      validMem[validMem_MPORT_18_addr] <= validMem_MPORT_18_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_19_en & validMem_MPORT_19_mask) begin
      validMem[validMem_MPORT_19_addr] <= validMem_MPORT_19_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_20_en & validMem_MPORT_20_mask) begin
      validMem[validMem_MPORT_20_addr] <= validMem_MPORT_20_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_21_en & validMem_MPORT_21_mask) begin
      validMem[validMem_MPORT_21_addr] <= validMem_MPORT_21_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_22_en & validMem_MPORT_22_mask) begin
      validMem[validMem_MPORT_22_addr] <= validMem_MPORT_22_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_23_en & validMem_MPORT_23_mask) begin
      validMem[validMem_MPORT_23_addr] <= validMem_MPORT_23_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_24_en & validMem_MPORT_24_mask) begin
      validMem[validMem_MPORT_24_addr] <= validMem_MPORT_24_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_25_en & validMem_MPORT_25_mask) begin
      validMem[validMem_MPORT_25_addr] <= validMem_MPORT_25_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_26_en & validMem_MPORT_26_mask) begin
      validMem[validMem_MPORT_26_addr] <= validMem_MPORT_26_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_27_en & validMem_MPORT_27_mask) begin
      validMem[validMem_MPORT_27_addr] <= validMem_MPORT_27_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_28_en & validMem_MPORT_28_mask) begin
      validMem[validMem_MPORT_28_addr] <= validMem_MPORT_28_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_29_en & validMem_MPORT_29_mask) begin
      validMem[validMem_MPORT_29_addr] <= validMem_MPORT_29_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_30_en & validMem_MPORT_30_mask) begin
      validMem[validMem_MPORT_30_addr] <= validMem_MPORT_30_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_31_en & validMem_MPORT_31_mask) begin
      validMem[validMem_MPORT_31_addr] <= validMem_MPORT_31_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_32_en & validMem_MPORT_32_mask) begin
      validMem[validMem_MPORT_32_addr] <= validMem_MPORT_32_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_33_en & validMem_MPORT_33_mask) begin
      validMem[validMem_MPORT_33_addr] <= validMem_MPORT_33_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_34_en & validMem_MPORT_34_mask) begin
      validMem[validMem_MPORT_34_addr] <= validMem_MPORT_34_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_35_en & validMem_MPORT_35_mask) begin
      validMem[validMem_MPORT_35_addr] <= validMem_MPORT_35_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_36_en & validMem_MPORT_36_mask) begin
      validMem[validMem_MPORT_36_addr] <= validMem_MPORT_36_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_37_en & validMem_MPORT_37_mask) begin
      validMem[validMem_MPORT_37_addr] <= validMem_MPORT_37_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_38_en & validMem_MPORT_38_mask) begin
      validMem[validMem_MPORT_38_addr] <= validMem_MPORT_38_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_39_en & validMem_MPORT_39_mask) begin
      validMem[validMem_MPORT_39_addr] <= validMem_MPORT_39_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_40_en & validMem_MPORT_40_mask) begin
      validMem[validMem_MPORT_40_addr] <= validMem_MPORT_40_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_41_en & validMem_MPORT_41_mask) begin
      validMem[validMem_MPORT_41_addr] <= validMem_MPORT_41_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_42_en & validMem_MPORT_42_mask) begin
      validMem[validMem_MPORT_42_addr] <= validMem_MPORT_42_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_43_en & validMem_MPORT_43_mask) begin
      validMem[validMem_MPORT_43_addr] <= validMem_MPORT_43_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_44_en & validMem_MPORT_44_mask) begin
      validMem[validMem_MPORT_44_addr] <= validMem_MPORT_44_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_45_en & validMem_MPORT_45_mask) begin
      validMem[validMem_MPORT_45_addr] <= validMem_MPORT_45_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_46_en & validMem_MPORT_46_mask) begin
      validMem[validMem_MPORT_46_addr] <= validMem_MPORT_46_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_47_en & validMem_MPORT_47_mask) begin
      validMem[validMem_MPORT_47_addr] <= validMem_MPORT_47_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_48_en & validMem_MPORT_48_mask) begin
      validMem[validMem_MPORT_48_addr] <= validMem_MPORT_48_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_49_en & validMem_MPORT_49_mask) begin
      validMem[validMem_MPORT_49_addr] <= validMem_MPORT_49_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_50_en & validMem_MPORT_50_mask) begin
      validMem[validMem_MPORT_50_addr] <= validMem_MPORT_50_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_51_en & validMem_MPORT_51_mask) begin
      validMem[validMem_MPORT_51_addr] <= validMem_MPORT_51_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_52_en & validMem_MPORT_52_mask) begin
      validMem[validMem_MPORT_52_addr] <= validMem_MPORT_52_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_53_en & validMem_MPORT_53_mask) begin
      validMem[validMem_MPORT_53_addr] <= validMem_MPORT_53_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_54_en & validMem_MPORT_54_mask) begin
      validMem[validMem_MPORT_54_addr] <= validMem_MPORT_54_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_55_en & validMem_MPORT_55_mask) begin
      validMem[validMem_MPORT_55_addr] <= validMem_MPORT_55_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_56_en & validMem_MPORT_56_mask) begin
      validMem[validMem_MPORT_56_addr] <= validMem_MPORT_56_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_57_en & validMem_MPORT_57_mask) begin
      validMem[validMem_MPORT_57_addr] <= validMem_MPORT_57_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_58_en & validMem_MPORT_58_mask) begin
      validMem[validMem_MPORT_58_addr] <= validMem_MPORT_58_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_59_en & validMem_MPORT_59_mask) begin
      validMem[validMem_MPORT_59_addr] <= validMem_MPORT_59_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_60_en & validMem_MPORT_60_mask) begin
      validMem[validMem_MPORT_60_addr] <= validMem_MPORT_60_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_61_en & validMem_MPORT_61_mask) begin
      validMem[validMem_MPORT_61_addr] <= validMem_MPORT_61_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_62_en & validMem_MPORT_62_mask) begin
      validMem[validMem_MPORT_62_addr] <= validMem_MPORT_62_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_63_en & validMem_MPORT_63_mask) begin
      validMem[validMem_MPORT_63_addr] <= validMem_MPORT_63_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_64_en & validMem_MPORT_64_mask) begin
      validMem[validMem_MPORT_64_addr] <= validMem_MPORT_64_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_65_en & validMem_MPORT_65_mask) begin
      validMem[validMem_MPORT_65_addr] <= validMem_MPORT_65_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_66_en & validMem_MPORT_66_mask) begin
      validMem[validMem_MPORT_66_addr] <= validMem_MPORT_66_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_67_en & validMem_MPORT_67_mask) begin
      validMem[validMem_MPORT_67_addr] <= validMem_MPORT_67_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_68_en & validMem_MPORT_68_mask) begin
      validMem[validMem_MPORT_68_addr] <= validMem_MPORT_68_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_69_en & validMem_MPORT_69_mask) begin
      validMem[validMem_MPORT_69_addr] <= validMem_MPORT_69_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_70_en & validMem_MPORT_70_mask) begin
      validMem[validMem_MPORT_70_addr] <= validMem_MPORT_70_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_71_en & validMem_MPORT_71_mask) begin
      validMem[validMem_MPORT_71_addr] <= validMem_MPORT_71_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_72_en & validMem_MPORT_72_mask) begin
      validMem[validMem_MPORT_72_addr] <= validMem_MPORT_72_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_73_en & validMem_MPORT_73_mask) begin
      validMem[validMem_MPORT_73_addr] <= validMem_MPORT_73_data; // @[i_cache.scala 19:23]
    end
    if (tagMem_MPORT_1_en & tagMem_MPORT_1_mask) begin
      tagMem[tagMem_MPORT_1_addr] <= tagMem_MPORT_1_data; // @[i_cache.scala 22:21]
    end
    if (tagMem_MPORT_6_en & tagMem_MPORT_6_mask) begin
      tagMem[tagMem_MPORT_6_addr] <= tagMem_MPORT_6_data; // @[i_cache.scala 22:21]
    end
    if (quene_MPORT_3_en & quene_MPORT_3_mask) begin
      quene[quene_MPORT_3_addr] <= quene_MPORT_3_data; // @[i_cache.scala 80:20]
    end
    if (quene_MPORT_8_en & quene_MPORT_8_mask) begin
      quene[quene_MPORT_8_addr] <= quene_MPORT_8_data; // @[i_cache.scala 80:20]
    end
    if (reset) begin // @[i_cache.scala 37:23]
      addr <= 32'h0; // @[i_cache.scala 37:23]
    end else if (3'h0 == state) begin // @[i_cache.scala 96:18]
      if (!(io_clear_cache)) begin // @[i_cache.scala 98:33]
        if (io_from_ifu_arvalid) begin // @[i_cache.scala 100:44]
          addr <= io_from_ifu_araddr; // @[i_cache.scala 101:22]
        end
      end
    end
    if (reset) begin // @[i_cache.scala 78:31]
      receive_data_0 <= 64'h0; // @[i_cache.scala 78:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 96:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 96:18]
        if (3'h2 == state) begin // @[i_cache.scala 96:18]
          receive_data_0 <= _GEN_10;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 78:31]
      receive_data_1 <= 64'h0; // @[i_cache.scala 78:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 96:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 96:18]
        if (3'h2 == state) begin // @[i_cache.scala 96:18]
          receive_data_1 <= _GEN_11;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 79:30]
      receive_num <= 3'h0; // @[i_cache.scala 79:30]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 96:18]
      if (3'h1 == state) begin // @[i_cache.scala 96:18]
        if (!(anyMatch)) begin // @[i_cache.scala 106:27]
          receive_num <= 3'h0; // @[i_cache.scala 112:29]
        end
      end else if (3'h2 == state) begin // @[i_cache.scala 96:18]
        receive_num <= _GEN_12;
      end
    end
    if (reset) begin // @[i_cache.scala 92:24]
      state <= 3'h0; // @[i_cache.scala 92:24]
    end else if (3'h0 == state) begin // @[i_cache.scala 96:18]
      if (io_clear_cache) begin // @[i_cache.scala 98:33]
        state <= 3'h4; // @[i_cache.scala 99:23]
      end else if (io_from_ifu_arvalid) begin // @[i_cache.scala 100:44]
        state <= 3'h1; // @[i_cache.scala 102:23]
      end
    end else if (3'h1 == state) begin // @[i_cache.scala 96:18]
      if (anyMatch) begin // @[i_cache.scala 106:27]
        state <= _GEN_4;
      end else begin
        state <= 3'h2; // @[i_cache.scala 111:23]
      end
    end else if (3'h2 == state) begin // @[i_cache.scala 96:18]
      state <= _GEN_13;
    end else begin
      state <= _GEN_101;
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
  _RAND_0 = {4{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    cacheLine[initvar] = _RAND_0[127:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    validMem[initvar] = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    tagMem[initvar] = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 16; initvar = initvar+1)
    quene[initvar] = _RAND_3[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  addr = _RAND_4[31:0];
  _RAND_5 = {2{`RANDOM}};
  receive_data_0 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  receive_data_1 = _RAND_6[63:0];
  _RAND_7 = {1{`RANDOM}};
  receive_num = _RAND_7[2:0];
  _RAND_8 = {1{`RANDOM}};
  state = _RAND_8[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
