module D_CACHE(
  input         clock,
  input         reset,
  input  [31:0] io_from_lsu_araddr,
  input         io_from_lsu_arvalid,
  input  [31:0] io_from_lsu_awaddr,
  input         io_from_lsu_awvalid,
  input  [63:0] io_from_lsu_wdata,
  input  [7:0]  io_from_lsu_wstrb,
  input         io_from_lsu_wvalid,
  output [63:0] io_to_lsu_rdata,
  output        io_to_lsu_rvalid,
  output        io_to_lsu_bvalid,
  output [31:0] io_to_axi_araddr,
  output [7:0]  io_to_axi_arlen,
  output        io_to_axi_arvalid,
  output        io_to_axi_rready,
  output [31:0] io_to_axi_awaddr,
  output [7:0]  io_to_axi_awlen,
  output        io_to_axi_awvalid,
  output [63:0] io_to_axi_wdata,
  output [7:0]  io_to_axi_wstrb,
  output        io_to_axi_wvalid,
  output        io_to_axi_bready,
  input  [63:0] io_from_axi_rdata,
  input         io_from_axi_rlast,
  input         io_from_axi_rvalid,
  input         io_from_axi_wready,
  input         io_from_axi_bvalid
);
`ifdef RANDOMIZE_REG_INIT
  reg [127:0] _RAND_0;
  reg [127:0] _RAND_1;
  reg [127:0] _RAND_2;
  reg [127:0] _RAND_3;
  reg [127:0] _RAND_4;
  reg [127:0] _RAND_5;
  reg [127:0] _RAND_6;
  reg [127:0] _RAND_7;
  reg [127:0] _RAND_8;
  reg [127:0] _RAND_9;
  reg [127:0] _RAND_10;
  reg [127:0] _RAND_11;
  reg [127:0] _RAND_12;
  reg [127:0] _RAND_13;
  reg [127:0] _RAND_14;
  reg [127:0] _RAND_15;
  reg [127:0] _RAND_16;
  reg [127:0] _RAND_17;
  reg [127:0] _RAND_18;
  reg [127:0] _RAND_19;
  reg [127:0] _RAND_20;
  reg [127:0] _RAND_21;
  reg [127:0] _RAND_22;
  reg [127:0] _RAND_23;
  reg [127:0] _RAND_24;
  reg [127:0] _RAND_25;
  reg [127:0] _RAND_26;
  reg [127:0] _RAND_27;
  reg [127:0] _RAND_28;
  reg [127:0] _RAND_29;
  reg [127:0] _RAND_30;
  reg [127:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [31:0] _RAND_50;
  reg [31:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [31:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [31:0] _RAND_55;
  reg [31:0] _RAND_56;
  reg [31:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [31:0] _RAND_59;
  reg [31:0] _RAND_60;
  reg [31:0] _RAND_61;
  reg [31:0] _RAND_62;
  reg [31:0] _RAND_63;
  reg [31:0] _RAND_64;
  reg [31:0] _RAND_65;
  reg [31:0] _RAND_66;
  reg [31:0] _RAND_67;
  reg [31:0] _RAND_68;
  reg [31:0] _RAND_69;
  reg [31:0] _RAND_70;
  reg [31:0] _RAND_71;
  reg [31:0] _RAND_72;
  reg [31:0] _RAND_73;
  reg [31:0] _RAND_74;
  reg [31:0] _RAND_75;
  reg [31:0] _RAND_76;
  reg [31:0] _RAND_77;
  reg [31:0] _RAND_78;
  reg [31:0] _RAND_79;
  reg [31:0] _RAND_80;
  reg [31:0] _RAND_81;
  reg [31:0] _RAND_82;
  reg [31:0] _RAND_83;
  reg [31:0] _RAND_84;
  reg [31:0] _RAND_85;
  reg [31:0] _RAND_86;
  reg [31:0] _RAND_87;
  reg [31:0] _RAND_88;
  reg [31:0] _RAND_89;
  reg [31:0] _RAND_90;
  reg [31:0] _RAND_91;
  reg [31:0] _RAND_92;
  reg [31:0] _RAND_93;
  reg [31:0] _RAND_94;
  reg [31:0] _RAND_95;
  reg [31:0] _RAND_96;
  reg [31:0] _RAND_97;
  reg [31:0] _RAND_98;
  reg [31:0] _RAND_99;
  reg [31:0] _RAND_100;
  reg [31:0] _RAND_101;
  reg [31:0] _RAND_102;
  reg [31:0] _RAND_103;
  reg [31:0] _RAND_104;
  reg [31:0] _RAND_105;
  reg [31:0] _RAND_106;
  reg [31:0] _RAND_107;
  reg [31:0] _RAND_108;
  reg [31:0] _RAND_109;
  reg [31:0] _RAND_110;
  reg [31:0] _RAND_111;
  reg [31:0] _RAND_112;
  reg [31:0] _RAND_113;
  reg [31:0] _RAND_114;
  reg [31:0] _RAND_115;
  reg [31:0] _RAND_116;
  reg [31:0] _RAND_117;
  reg [31:0] _RAND_118;
  reg [31:0] _RAND_119;
  reg [31:0] _RAND_120;
  reg [31:0] _RAND_121;
  reg [31:0] _RAND_122;
  reg [31:0] _RAND_123;
  reg [31:0] _RAND_124;
  reg [31:0] _RAND_125;
  reg [31:0] _RAND_126;
  reg [31:0] _RAND_127;
  reg [127:0] _RAND_128;
  reg [31:0] _RAND_129;
  reg [63:0] _RAND_130;
  reg [63:0] _RAND_131;
  reg [31:0] _RAND_132;
  reg [31:0] _RAND_133;
  reg [31:0] _RAND_134;
  reg [31:0] _RAND_135;
  reg [31:0] _RAND_136;
  reg [31:0] _RAND_137;
  reg [31:0] _RAND_138;
  reg [31:0] _RAND_139;
  reg [31:0] _RAND_140;
  reg [31:0] _RAND_141;
  reg [31:0] _RAND_142;
  reg [31:0] _RAND_143;
  reg [31:0] _RAND_144;
  reg [31:0] _RAND_145;
  reg [31:0] _RAND_146;
  reg [31:0] _RAND_147;
  reg [31:0] _RAND_148;
  reg [31:0] _RAND_149;
`endif // RANDOMIZE_REG_INIT
  reg [127:0] ram_0_0; // @[d_cache.scala 19:24]
  reg [127:0] ram_0_1; // @[d_cache.scala 19:24]
  reg [127:0] ram_0_2; // @[d_cache.scala 19:24]
  reg [127:0] ram_0_3; // @[d_cache.scala 19:24]
  reg [127:0] ram_0_4; // @[d_cache.scala 19:24]
  reg [127:0] ram_0_5; // @[d_cache.scala 19:24]
  reg [127:0] ram_0_6; // @[d_cache.scala 19:24]
  reg [127:0] ram_0_7; // @[d_cache.scala 19:24]
  reg [127:0] ram_0_8; // @[d_cache.scala 19:24]
  reg [127:0] ram_0_9; // @[d_cache.scala 19:24]
  reg [127:0] ram_0_10; // @[d_cache.scala 19:24]
  reg [127:0] ram_0_11; // @[d_cache.scala 19:24]
  reg [127:0] ram_0_12; // @[d_cache.scala 19:24]
  reg [127:0] ram_0_13; // @[d_cache.scala 19:24]
  reg [127:0] ram_0_14; // @[d_cache.scala 19:24]
  reg [127:0] ram_0_15; // @[d_cache.scala 19:24]
  reg [127:0] ram_1_0; // @[d_cache.scala 20:24]
  reg [127:0] ram_1_1; // @[d_cache.scala 20:24]
  reg [127:0] ram_1_2; // @[d_cache.scala 20:24]
  reg [127:0] ram_1_3; // @[d_cache.scala 20:24]
  reg [127:0] ram_1_4; // @[d_cache.scala 20:24]
  reg [127:0] ram_1_5; // @[d_cache.scala 20:24]
  reg [127:0] ram_1_6; // @[d_cache.scala 20:24]
  reg [127:0] ram_1_7; // @[d_cache.scala 20:24]
  reg [127:0] ram_1_8; // @[d_cache.scala 20:24]
  reg [127:0] ram_1_9; // @[d_cache.scala 20:24]
  reg [127:0] ram_1_10; // @[d_cache.scala 20:24]
  reg [127:0] ram_1_11; // @[d_cache.scala 20:24]
  reg [127:0] ram_1_12; // @[d_cache.scala 20:24]
  reg [127:0] ram_1_13; // @[d_cache.scala 20:24]
  reg [127:0] ram_1_14; // @[d_cache.scala 20:24]
  reg [127:0] ram_1_15; // @[d_cache.scala 20:24]
  reg [31:0] tag_0_0; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_1; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_2; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_3; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_4; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_5; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_6; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_7; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_8; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_9; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_10; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_11; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_12; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_13; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_14; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_15; // @[d_cache.scala 22:24]
  reg [31:0] tag_1_0; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_1; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_2; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_3; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_4; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_5; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_6; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_7; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_8; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_9; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_10; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_11; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_12; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_13; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_14; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_15; // @[d_cache.scala 23:24]
  reg  valid_0_0; // @[d_cache.scala 24:26]
  reg  valid_0_1; // @[d_cache.scala 24:26]
  reg  valid_0_2; // @[d_cache.scala 24:26]
  reg  valid_0_3; // @[d_cache.scala 24:26]
  reg  valid_0_4; // @[d_cache.scala 24:26]
  reg  valid_0_5; // @[d_cache.scala 24:26]
  reg  valid_0_6; // @[d_cache.scala 24:26]
  reg  valid_0_7; // @[d_cache.scala 24:26]
  reg  valid_0_8; // @[d_cache.scala 24:26]
  reg  valid_0_9; // @[d_cache.scala 24:26]
  reg  valid_0_10; // @[d_cache.scala 24:26]
  reg  valid_0_11; // @[d_cache.scala 24:26]
  reg  valid_0_12; // @[d_cache.scala 24:26]
  reg  valid_0_13; // @[d_cache.scala 24:26]
  reg  valid_0_14; // @[d_cache.scala 24:26]
  reg  valid_0_15; // @[d_cache.scala 24:26]
  reg  valid_1_0; // @[d_cache.scala 25:26]
  reg  valid_1_1; // @[d_cache.scala 25:26]
  reg  valid_1_2; // @[d_cache.scala 25:26]
  reg  valid_1_3; // @[d_cache.scala 25:26]
  reg  valid_1_4; // @[d_cache.scala 25:26]
  reg  valid_1_5; // @[d_cache.scala 25:26]
  reg  valid_1_6; // @[d_cache.scala 25:26]
  reg  valid_1_7; // @[d_cache.scala 25:26]
  reg  valid_1_8; // @[d_cache.scala 25:26]
  reg  valid_1_9; // @[d_cache.scala 25:26]
  reg  valid_1_10; // @[d_cache.scala 25:26]
  reg  valid_1_11; // @[d_cache.scala 25:26]
  reg  valid_1_12; // @[d_cache.scala 25:26]
  reg  valid_1_13; // @[d_cache.scala 25:26]
  reg  valid_1_14; // @[d_cache.scala 25:26]
  reg  valid_1_15; // @[d_cache.scala 25:26]
  reg  dirty_0_0; // @[d_cache.scala 26:26]
  reg  dirty_0_1; // @[d_cache.scala 26:26]
  reg  dirty_0_2; // @[d_cache.scala 26:26]
  reg  dirty_0_3; // @[d_cache.scala 26:26]
  reg  dirty_0_4; // @[d_cache.scala 26:26]
  reg  dirty_0_5; // @[d_cache.scala 26:26]
  reg  dirty_0_6; // @[d_cache.scala 26:26]
  reg  dirty_0_7; // @[d_cache.scala 26:26]
  reg  dirty_0_8; // @[d_cache.scala 26:26]
  reg  dirty_0_9; // @[d_cache.scala 26:26]
  reg  dirty_0_10; // @[d_cache.scala 26:26]
  reg  dirty_0_11; // @[d_cache.scala 26:26]
  reg  dirty_0_12; // @[d_cache.scala 26:26]
  reg  dirty_0_13; // @[d_cache.scala 26:26]
  reg  dirty_0_14; // @[d_cache.scala 26:26]
  reg  dirty_0_15; // @[d_cache.scala 26:26]
  reg  dirty_1_0; // @[d_cache.scala 27:26]
  reg  dirty_1_1; // @[d_cache.scala 27:26]
  reg  dirty_1_2; // @[d_cache.scala 27:26]
  reg  dirty_1_3; // @[d_cache.scala 27:26]
  reg  dirty_1_4; // @[d_cache.scala 27:26]
  reg  dirty_1_5; // @[d_cache.scala 27:26]
  reg  dirty_1_6; // @[d_cache.scala 27:26]
  reg  dirty_1_7; // @[d_cache.scala 27:26]
  reg  dirty_1_8; // @[d_cache.scala 27:26]
  reg  dirty_1_9; // @[d_cache.scala 27:26]
  reg  dirty_1_10; // @[d_cache.scala 27:26]
  reg  dirty_1_11; // @[d_cache.scala 27:26]
  reg  dirty_1_12; // @[d_cache.scala 27:26]
  reg  dirty_1_13; // @[d_cache.scala 27:26]
  reg  dirty_1_14; // @[d_cache.scala 27:26]
  reg  dirty_1_15; // @[d_cache.scala 27:26]
  reg [127:0] write_back_data; // @[d_cache.scala 31:34]
  reg [31:0] write_back_addr; // @[d_cache.scala 32:34]
  reg [63:0] receive_data_0; // @[d_cache.scala 37:31]
  reg [63:0] receive_data_1; // @[d_cache.scala 37:31]
  reg [2:0] receive_num; // @[d_cache.scala 38:30]
  reg [1:0] quene_0; // @[d_cache.scala 39:24]
  reg [1:0] quene_1; // @[d_cache.scala 39:24]
  reg [1:0] quene_2; // @[d_cache.scala 39:24]
  reg [1:0] quene_3; // @[d_cache.scala 39:24]
  reg [1:0] quene_4; // @[d_cache.scala 39:24]
  reg [1:0] quene_5; // @[d_cache.scala 39:24]
  reg [1:0] quene_6; // @[d_cache.scala 39:24]
  reg [1:0] quene_7; // @[d_cache.scala 39:24]
  reg [1:0] quene_8; // @[d_cache.scala 39:24]
  reg [1:0] quene_9; // @[d_cache.scala 39:24]
  reg [1:0] quene_10; // @[d_cache.scala 39:24]
  reg [1:0] quene_11; // @[d_cache.scala 39:24]
  reg [1:0] quene_12; // @[d_cache.scala 39:24]
  reg [1:0] quene_13; // @[d_cache.scala 39:24]
  reg [1:0] quene_14; // @[d_cache.scala 39:24]
  reg [1:0] quene_15; // @[d_cache.scala 39:24]
  wire [3:0] offset = io_from_lsu_araddr[3:0]; // @[d_cache.scala 41:36]
  wire [3:0] index = io_from_lsu_araddr[7:4]; // @[d_cache.scala 42:35]
  wire [23:0] tag = io_from_lsu_araddr[31:8]; // @[d_cache.scala 43:33]
  wire [6:0] shift_bit = {offset, 3'h0}; // @[d_cache.scala 45:28]
  wire [63:0] _wmask_T_4 = io_from_lsu_wstrb == 8'hff ? 64'hffffffffffffffff : 64'h0; // @[d_cache.scala 51:20]
  wire [63:0] _wmask_T_5 = io_from_lsu_wstrb == 8'hf ? 64'hffffffff : _wmask_T_4; // @[d_cache.scala 50:20]
  wire [63:0] _wmask_T_6 = io_from_lsu_wstrb == 8'h3 ? 64'hffff : _wmask_T_5; // @[d_cache.scala 49:20]
  wire [63:0] wmask = io_from_lsu_wstrb == 8'h1 ? 64'hff : _wmask_T_6; // @[d_cache.scala 48:20]
  wire [31:0] _GEN_1 = 4'h1 == index ? tag_0_1 : tag_0_0; // @[d_cache.scala 53:{31,31}]
  wire [31:0] _GEN_2 = 4'h2 == index ? tag_0_2 : _GEN_1; // @[d_cache.scala 53:{31,31}]
  wire [31:0] _GEN_3 = 4'h3 == index ? tag_0_3 : _GEN_2; // @[d_cache.scala 53:{31,31}]
  wire [31:0] _GEN_4 = 4'h4 == index ? tag_0_4 : _GEN_3; // @[d_cache.scala 53:{31,31}]
  wire [31:0] _GEN_5 = 4'h5 == index ? tag_0_5 : _GEN_4; // @[d_cache.scala 53:{31,31}]
  wire [31:0] _GEN_6 = 4'h6 == index ? tag_0_6 : _GEN_5; // @[d_cache.scala 53:{31,31}]
  wire [31:0] _GEN_7 = 4'h7 == index ? tag_0_7 : _GEN_6; // @[d_cache.scala 53:{31,31}]
  wire [31:0] _GEN_8 = 4'h8 == index ? tag_0_8 : _GEN_7; // @[d_cache.scala 53:{31,31}]
  wire [31:0] _GEN_9 = 4'h9 == index ? tag_0_9 : _GEN_8; // @[d_cache.scala 53:{31,31}]
  wire [31:0] _GEN_10 = 4'ha == index ? tag_0_10 : _GEN_9; // @[d_cache.scala 53:{31,31}]
  wire [31:0] _GEN_11 = 4'hb == index ? tag_0_11 : _GEN_10; // @[d_cache.scala 53:{31,31}]
  wire [31:0] _GEN_12 = 4'hc == index ? tag_0_12 : _GEN_11; // @[d_cache.scala 53:{31,31}]
  wire [31:0] _GEN_13 = 4'hd == index ? tag_0_13 : _GEN_12; // @[d_cache.scala 53:{31,31}]
  wire [31:0] _GEN_14 = 4'he == index ? tag_0_14 : _GEN_13; // @[d_cache.scala 53:{31,31}]
  wire [31:0] _GEN_15 = 4'hf == index ? tag_0_15 : _GEN_14; // @[d_cache.scala 53:{31,31}]
  wire [31:0] _GEN_2254 = {{8'd0}, tag}; // @[d_cache.scala 53:31]
  wire  _GEN_17 = 4'h1 == index ? valid_0_1 : valid_0_0; // @[d_cache.scala 53:{57,57}]
  wire  _GEN_18 = 4'h2 == index ? valid_0_2 : _GEN_17; // @[d_cache.scala 53:{57,57}]
  wire  _GEN_19 = 4'h3 == index ? valid_0_3 : _GEN_18; // @[d_cache.scala 53:{57,57}]
  wire  _GEN_20 = 4'h4 == index ? valid_0_4 : _GEN_19; // @[d_cache.scala 53:{57,57}]
  wire  _GEN_21 = 4'h5 == index ? valid_0_5 : _GEN_20; // @[d_cache.scala 53:{57,57}]
  wire  _GEN_22 = 4'h6 == index ? valid_0_6 : _GEN_21; // @[d_cache.scala 53:{57,57}]
  wire  _GEN_23 = 4'h7 == index ? valid_0_7 : _GEN_22; // @[d_cache.scala 53:{57,57}]
  wire  _GEN_24 = 4'h8 == index ? valid_0_8 : _GEN_23; // @[d_cache.scala 53:{57,57}]
  wire  _GEN_25 = 4'h9 == index ? valid_0_9 : _GEN_24; // @[d_cache.scala 53:{57,57}]
  wire  _GEN_26 = 4'ha == index ? valid_0_10 : _GEN_25; // @[d_cache.scala 53:{57,57}]
  wire  _GEN_27 = 4'hb == index ? valid_0_11 : _GEN_26; // @[d_cache.scala 53:{57,57}]
  wire  _GEN_28 = 4'hc == index ? valid_0_12 : _GEN_27; // @[d_cache.scala 53:{57,57}]
  wire  _GEN_29 = 4'hd == index ? valid_0_13 : _GEN_28; // @[d_cache.scala 53:{57,57}]
  wire  _GEN_30 = 4'he == index ? valid_0_14 : _GEN_29; // @[d_cache.scala 53:{57,57}]
  wire  _GEN_31 = 4'hf == index ? valid_0_15 : _GEN_30; // @[d_cache.scala 53:{57,57}]
  wire  way0_hit = _GEN_15 == _GEN_2254 & _GEN_31; // @[d_cache.scala 53:40]
  wire [31:0] _GEN_33 = 4'h1 == index ? tag_1_1 : tag_1_0; // @[d_cache.scala 55:{31,31}]
  wire [31:0] _GEN_34 = 4'h2 == index ? tag_1_2 : _GEN_33; // @[d_cache.scala 55:{31,31}]
  wire [31:0] _GEN_35 = 4'h3 == index ? tag_1_3 : _GEN_34; // @[d_cache.scala 55:{31,31}]
  wire [31:0] _GEN_36 = 4'h4 == index ? tag_1_4 : _GEN_35; // @[d_cache.scala 55:{31,31}]
  wire [31:0] _GEN_37 = 4'h5 == index ? tag_1_5 : _GEN_36; // @[d_cache.scala 55:{31,31}]
  wire [31:0] _GEN_38 = 4'h6 == index ? tag_1_6 : _GEN_37; // @[d_cache.scala 55:{31,31}]
  wire [31:0] _GEN_39 = 4'h7 == index ? tag_1_7 : _GEN_38; // @[d_cache.scala 55:{31,31}]
  wire [31:0] _GEN_40 = 4'h8 == index ? tag_1_8 : _GEN_39; // @[d_cache.scala 55:{31,31}]
  wire [31:0] _GEN_41 = 4'h9 == index ? tag_1_9 : _GEN_40; // @[d_cache.scala 55:{31,31}]
  wire [31:0] _GEN_42 = 4'ha == index ? tag_1_10 : _GEN_41; // @[d_cache.scala 55:{31,31}]
  wire [31:0] _GEN_43 = 4'hb == index ? tag_1_11 : _GEN_42; // @[d_cache.scala 55:{31,31}]
  wire [31:0] _GEN_44 = 4'hc == index ? tag_1_12 : _GEN_43; // @[d_cache.scala 55:{31,31}]
  wire [31:0] _GEN_45 = 4'hd == index ? tag_1_13 : _GEN_44; // @[d_cache.scala 55:{31,31}]
  wire [31:0] _GEN_46 = 4'he == index ? tag_1_14 : _GEN_45; // @[d_cache.scala 55:{31,31}]
  wire [31:0] _GEN_47 = 4'hf == index ? tag_1_15 : _GEN_46; // @[d_cache.scala 55:{31,31}]
  wire  _GEN_49 = 4'h1 == index ? valid_1_1 : valid_1_0; // @[d_cache.scala 55:{57,57}]
  wire  _GEN_50 = 4'h2 == index ? valid_1_2 : _GEN_49; // @[d_cache.scala 55:{57,57}]
  wire  _GEN_51 = 4'h3 == index ? valid_1_3 : _GEN_50; // @[d_cache.scala 55:{57,57}]
  wire  _GEN_52 = 4'h4 == index ? valid_1_4 : _GEN_51; // @[d_cache.scala 55:{57,57}]
  wire  _GEN_53 = 4'h5 == index ? valid_1_5 : _GEN_52; // @[d_cache.scala 55:{57,57}]
  wire  _GEN_54 = 4'h6 == index ? valid_1_6 : _GEN_53; // @[d_cache.scala 55:{57,57}]
  wire  _GEN_55 = 4'h7 == index ? valid_1_7 : _GEN_54; // @[d_cache.scala 55:{57,57}]
  wire  _GEN_56 = 4'h8 == index ? valid_1_8 : _GEN_55; // @[d_cache.scala 55:{57,57}]
  wire  _GEN_57 = 4'h9 == index ? valid_1_9 : _GEN_56; // @[d_cache.scala 55:{57,57}]
  wire  _GEN_58 = 4'ha == index ? valid_1_10 : _GEN_57; // @[d_cache.scala 55:{57,57}]
  wire  _GEN_59 = 4'hb == index ? valid_1_11 : _GEN_58; // @[d_cache.scala 55:{57,57}]
  wire  _GEN_60 = 4'hc == index ? valid_1_12 : _GEN_59; // @[d_cache.scala 55:{57,57}]
  wire  _GEN_61 = 4'hd == index ? valid_1_13 : _GEN_60; // @[d_cache.scala 55:{57,57}]
  wire  _GEN_62 = 4'he == index ? valid_1_14 : _GEN_61; // @[d_cache.scala 55:{57,57}]
  wire  _GEN_63 = 4'hf == index ? valid_1_15 : _GEN_62; // @[d_cache.scala 55:{57,57}]
  wire  way1_hit = _GEN_47 == _GEN_2254 & _GEN_63; // @[d_cache.scala 55:40]
  wire [1:0] _unuse_way_T_2 = ~_GEN_63 ? 2'h2 : 2'h0; // @[d_cache.scala 58:50]
  wire [1:0] unuse_way = ~_GEN_31 ? 2'h1 : _unuse_way_T_2; // @[d_cache.scala 58:21]
  reg [3:0] state; // @[d_cache.scala 60:24]
  wire  _T_3 = (io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000; // @[d_cache.scala 67:60]
  wire [3:0] _GEN_64 = io_from_lsu_awvalid ? 4'h2 : state; // @[d_cache.scala 71:44 72:23 60:24]
  wire [3:0] _GEN_68 = way1_hit ? 4'h0 : 4'h3; // @[d_cache.scala 82:33 88:23]
  wire [2:0] _GEN_69 = way1_hit ? receive_num : 3'h0; // @[d_cache.scala 38:30 82:33 89:29]
  wire [63:0] _ram_0_T = io_from_lsu_wdata & wmask; // @[d_cache.scala 97:53]
  wire [190:0] _GEN_2487 = {{127'd0}, _ram_0_T}; // @[d_cache.scala 97:62]
  wire [190:0] _ram_0_T_1 = _GEN_2487 << shift_bit; // @[d_cache.scala 97:62]
  wire [190:0] _GEN_2488 = {{127'd0}, wmask}; // @[d_cache.scala 97:102]
  wire [190:0] _ram_0_T_2 = _GEN_2488 << shift_bit; // @[d_cache.scala 97:102]
  wire [190:0] _ram_0_T_3 = ~_ram_0_T_2; // @[d_cache.scala 97:94]
  wire [127:0] _GEN_74 = 4'h1 == index ? ram_0_1 : ram_0_0; // @[d_cache.scala 97:{92,92}]
  wire [127:0] _GEN_75 = 4'h2 == index ? ram_0_2 : _GEN_74; // @[d_cache.scala 97:{92,92}]
  wire [127:0] _GEN_76 = 4'h3 == index ? ram_0_3 : _GEN_75; // @[d_cache.scala 97:{92,92}]
  wire [127:0] _GEN_77 = 4'h4 == index ? ram_0_4 : _GEN_76; // @[d_cache.scala 97:{92,92}]
  wire [127:0] _GEN_78 = 4'h5 == index ? ram_0_5 : _GEN_77; // @[d_cache.scala 97:{92,92}]
  wire [127:0] _GEN_79 = 4'h6 == index ? ram_0_6 : _GEN_78; // @[d_cache.scala 97:{92,92}]
  wire [127:0] _GEN_80 = 4'h7 == index ? ram_0_7 : _GEN_79; // @[d_cache.scala 97:{92,92}]
  wire [127:0] _GEN_81 = 4'h8 == index ? ram_0_8 : _GEN_80; // @[d_cache.scala 97:{92,92}]
  wire [127:0] _GEN_82 = 4'h9 == index ? ram_0_9 : _GEN_81; // @[d_cache.scala 97:{92,92}]
  wire [127:0] _GEN_83 = 4'ha == index ? ram_0_10 : _GEN_82; // @[d_cache.scala 97:{92,92}]
  wire [127:0] _GEN_84 = 4'hb == index ? ram_0_11 : _GEN_83; // @[d_cache.scala 97:{92,92}]
  wire [127:0] _GEN_85 = 4'hc == index ? ram_0_12 : _GEN_84; // @[d_cache.scala 97:{92,92}]
  wire [127:0] _GEN_86 = 4'hd == index ? ram_0_13 : _GEN_85; // @[d_cache.scala 97:{92,92}]
  wire [127:0] _GEN_87 = 4'he == index ? ram_0_14 : _GEN_86; // @[d_cache.scala 97:{92,92}]
  wire [127:0] _GEN_88 = 4'hf == index ? ram_0_15 : _GEN_87; // @[d_cache.scala 97:{92,92}]
  wire [190:0] _GEN_2258 = {{63'd0}, _GEN_88}; // @[d_cache.scala 97:92]
  wire [190:0] _ram_0_T_4 = _GEN_2258 & _ram_0_T_3; // @[d_cache.scala 97:92]
  wire [190:0] _ram_0_T_5 = _ram_0_T_1 | _ram_0_T_4; // @[d_cache.scala 97:76]
  wire [127:0] _GEN_89 = 4'h0 == index ? _ram_0_T_5[127:0] : ram_0_0; // @[d_cache.scala 19:24 97:{30,30}]
  wire [127:0] _GEN_90 = 4'h1 == index ? _ram_0_T_5[127:0] : ram_0_1; // @[d_cache.scala 19:24 97:{30,30}]
  wire [127:0] _GEN_91 = 4'h2 == index ? _ram_0_T_5[127:0] : ram_0_2; // @[d_cache.scala 19:24 97:{30,30}]
  wire [127:0] _GEN_92 = 4'h3 == index ? _ram_0_T_5[127:0] : ram_0_3; // @[d_cache.scala 19:24 97:{30,30}]
  wire [127:0] _GEN_93 = 4'h4 == index ? _ram_0_T_5[127:0] : ram_0_4; // @[d_cache.scala 19:24 97:{30,30}]
  wire [127:0] _GEN_94 = 4'h5 == index ? _ram_0_T_5[127:0] : ram_0_5; // @[d_cache.scala 19:24 97:{30,30}]
  wire [127:0] _GEN_95 = 4'h6 == index ? _ram_0_T_5[127:0] : ram_0_6; // @[d_cache.scala 19:24 97:{30,30}]
  wire [127:0] _GEN_96 = 4'h7 == index ? _ram_0_T_5[127:0] : ram_0_7; // @[d_cache.scala 19:24 97:{30,30}]
  wire [127:0] _GEN_97 = 4'h8 == index ? _ram_0_T_5[127:0] : ram_0_8; // @[d_cache.scala 19:24 97:{30,30}]
  wire [127:0] _GEN_98 = 4'h9 == index ? _ram_0_T_5[127:0] : ram_0_9; // @[d_cache.scala 19:24 97:{30,30}]
  wire [127:0] _GEN_99 = 4'ha == index ? _ram_0_T_5[127:0] : ram_0_10; // @[d_cache.scala 19:24 97:{30,30}]
  wire [127:0] _GEN_100 = 4'hb == index ? _ram_0_T_5[127:0] : ram_0_11; // @[d_cache.scala 19:24 97:{30,30}]
  wire [127:0] _GEN_101 = 4'hc == index ? _ram_0_T_5[127:0] : ram_0_12; // @[d_cache.scala 19:24 97:{30,30}]
  wire [127:0] _GEN_102 = 4'hd == index ? _ram_0_T_5[127:0] : ram_0_13; // @[d_cache.scala 19:24 97:{30,30}]
  wire [127:0] _GEN_103 = 4'he == index ? _ram_0_T_5[127:0] : ram_0_14; // @[d_cache.scala 19:24 97:{30,30}]
  wire [127:0] _GEN_104 = 4'hf == index ? _ram_0_T_5[127:0] : ram_0_15; // @[d_cache.scala 19:24 97:{30,30}]
  wire  _GEN_2259 = 4'h0 == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_105 = 4'h0 == index | dirty_0_0; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_2263 = 4'h1 == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_106 = 4'h1 == index | dirty_0_1; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_2264 = 4'h2 == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_107 = 4'h2 == index | dirty_0_2; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_2269 = 4'h3 == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_108 = 4'h3 == index | dirty_0_3; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_2270 = 4'h4 == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_109 = 4'h4 == index | dirty_0_4; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_2274 = 4'h5 == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_110 = 4'h5 == index | dirty_0_5; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_2277 = 4'h6 == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_111 = 4'h6 == index | dirty_0_6; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_2279 = 4'h7 == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_112 = 4'h7 == index | dirty_0_7; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_2281 = 4'h8 == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_113 = 4'h8 == index | dirty_0_8; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_2282 = 4'h9 == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_114 = 4'h9 == index | dirty_0_9; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_2286 = 4'ha == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_115 = 4'ha == index | dirty_0_10; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_2287 = 4'hb == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_116 = 4'hb == index | dirty_0_11; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_2292 = 4'hc == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_117 = 4'hc == index | dirty_0_12; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_2293 = 4'hd == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_118 = 4'hd == index | dirty_0_13; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_2297 = 4'he == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_119 = 4'he == index | dirty_0_14; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_2301 = 4'hf == index; // @[d_cache.scala 26:26 98:{32,32}]
  wire  _GEN_120 = 4'hf == index | dirty_0_15; // @[d_cache.scala 26:26 98:{32,32}]
  wire [127:0] _GEN_122 = 4'h1 == index ? ram_1_1 : ram_1_0; // @[d_cache.scala 105:{92,92}]
  wire [127:0] _GEN_123 = 4'h2 == index ? ram_1_2 : _GEN_122; // @[d_cache.scala 105:{92,92}]
  wire [127:0] _GEN_124 = 4'h3 == index ? ram_1_3 : _GEN_123; // @[d_cache.scala 105:{92,92}]
  wire [127:0] _GEN_125 = 4'h4 == index ? ram_1_4 : _GEN_124; // @[d_cache.scala 105:{92,92}]
  wire [127:0] _GEN_126 = 4'h5 == index ? ram_1_5 : _GEN_125; // @[d_cache.scala 105:{92,92}]
  wire [127:0] _GEN_127 = 4'h6 == index ? ram_1_6 : _GEN_126; // @[d_cache.scala 105:{92,92}]
  wire [127:0] _GEN_128 = 4'h7 == index ? ram_1_7 : _GEN_127; // @[d_cache.scala 105:{92,92}]
  wire [127:0] _GEN_129 = 4'h8 == index ? ram_1_8 : _GEN_128; // @[d_cache.scala 105:{92,92}]
  wire [127:0] _GEN_130 = 4'h9 == index ? ram_1_9 : _GEN_129; // @[d_cache.scala 105:{92,92}]
  wire [127:0] _GEN_131 = 4'ha == index ? ram_1_10 : _GEN_130; // @[d_cache.scala 105:{92,92}]
  wire [127:0] _GEN_132 = 4'hb == index ? ram_1_11 : _GEN_131; // @[d_cache.scala 105:{92,92}]
  wire [127:0] _GEN_133 = 4'hc == index ? ram_1_12 : _GEN_132; // @[d_cache.scala 105:{92,92}]
  wire [127:0] _GEN_134 = 4'hd == index ? ram_1_13 : _GEN_133; // @[d_cache.scala 105:{92,92}]
  wire [127:0] _GEN_135 = 4'he == index ? ram_1_14 : _GEN_134; // @[d_cache.scala 105:{92,92}]
  wire [127:0] _GEN_136 = 4'hf == index ? ram_1_15 : _GEN_135; // @[d_cache.scala 105:{92,92}]
  wire [190:0] _GEN_2303 = {{63'd0}, _GEN_136}; // @[d_cache.scala 105:92]
  wire [190:0] _ram_1_T_4 = _GEN_2303 & _ram_0_T_3; // @[d_cache.scala 105:92]
  wire [190:0] _ram_1_T_5 = _ram_0_T_1 | _ram_1_T_4; // @[d_cache.scala 105:76]
  wire [127:0] _GEN_137 = 4'h0 == index ? _ram_1_T_5[127:0] : ram_1_0; // @[d_cache.scala 105:{30,30} 20:24]
  wire [127:0] _GEN_138 = 4'h1 == index ? _ram_1_T_5[127:0] : ram_1_1; // @[d_cache.scala 105:{30,30} 20:24]
  wire [127:0] _GEN_139 = 4'h2 == index ? _ram_1_T_5[127:0] : ram_1_2; // @[d_cache.scala 105:{30,30} 20:24]
  wire [127:0] _GEN_140 = 4'h3 == index ? _ram_1_T_5[127:0] : ram_1_3; // @[d_cache.scala 105:{30,30} 20:24]
  wire [127:0] _GEN_141 = 4'h4 == index ? _ram_1_T_5[127:0] : ram_1_4; // @[d_cache.scala 105:{30,30} 20:24]
  wire [127:0] _GEN_142 = 4'h5 == index ? _ram_1_T_5[127:0] : ram_1_5; // @[d_cache.scala 105:{30,30} 20:24]
  wire [127:0] _GEN_143 = 4'h6 == index ? _ram_1_T_5[127:0] : ram_1_6; // @[d_cache.scala 105:{30,30} 20:24]
  wire [127:0] _GEN_144 = 4'h7 == index ? _ram_1_T_5[127:0] : ram_1_7; // @[d_cache.scala 105:{30,30} 20:24]
  wire [127:0] _GEN_145 = 4'h8 == index ? _ram_1_T_5[127:0] : ram_1_8; // @[d_cache.scala 105:{30,30} 20:24]
  wire [127:0] _GEN_146 = 4'h9 == index ? _ram_1_T_5[127:0] : ram_1_9; // @[d_cache.scala 105:{30,30} 20:24]
  wire [127:0] _GEN_147 = 4'ha == index ? _ram_1_T_5[127:0] : ram_1_10; // @[d_cache.scala 105:{30,30} 20:24]
  wire [127:0] _GEN_148 = 4'hb == index ? _ram_1_T_5[127:0] : ram_1_11; // @[d_cache.scala 105:{30,30} 20:24]
  wire [127:0] _GEN_149 = 4'hc == index ? _ram_1_T_5[127:0] : ram_1_12; // @[d_cache.scala 105:{30,30} 20:24]
  wire [127:0] _GEN_150 = 4'hd == index ? _ram_1_T_5[127:0] : ram_1_13; // @[d_cache.scala 105:{30,30} 20:24]
  wire [127:0] _GEN_151 = 4'he == index ? _ram_1_T_5[127:0] : ram_1_14; // @[d_cache.scala 105:{30,30} 20:24]
  wire [127:0] _GEN_152 = 4'hf == index ? _ram_1_T_5[127:0] : ram_1_15; // @[d_cache.scala 105:{30,30} 20:24]
  wire  _GEN_153 = _GEN_2259 | dirty_1_0; // @[d_cache.scala 106:{32,32} 27:26]
  wire  _GEN_154 = _GEN_2263 | dirty_1_1; // @[d_cache.scala 106:{32,32} 27:26]
  wire  _GEN_155 = _GEN_2264 | dirty_1_2; // @[d_cache.scala 106:{32,32} 27:26]
  wire  _GEN_156 = _GEN_2269 | dirty_1_3; // @[d_cache.scala 106:{32,32} 27:26]
  wire  _GEN_157 = _GEN_2270 | dirty_1_4; // @[d_cache.scala 106:{32,32} 27:26]
  wire  _GEN_158 = _GEN_2274 | dirty_1_5; // @[d_cache.scala 106:{32,32} 27:26]
  wire  _GEN_159 = _GEN_2277 | dirty_1_6; // @[d_cache.scala 106:{32,32} 27:26]
  wire  _GEN_160 = _GEN_2279 | dirty_1_7; // @[d_cache.scala 106:{32,32} 27:26]
  wire  _GEN_161 = _GEN_2281 | dirty_1_8; // @[d_cache.scala 106:{32,32} 27:26]
  wire  _GEN_162 = _GEN_2282 | dirty_1_9; // @[d_cache.scala 106:{32,32} 27:26]
  wire  _GEN_163 = _GEN_2286 | dirty_1_10; // @[d_cache.scala 106:{32,32} 27:26]
  wire  _GEN_164 = _GEN_2287 | dirty_1_11; // @[d_cache.scala 106:{32,32} 27:26]
  wire  _GEN_165 = _GEN_2292 | dirty_1_12; // @[d_cache.scala 106:{32,32} 27:26]
  wire  _GEN_166 = _GEN_2293 | dirty_1_13; // @[d_cache.scala 106:{32,32} 27:26]
  wire  _GEN_167 = _GEN_2297 | dirty_1_14; // @[d_cache.scala 106:{32,32} 27:26]
  wire  _GEN_168 = _GEN_2301 | dirty_1_15; // @[d_cache.scala 106:{32,32} 27:26]
  wire [3:0] _GEN_169 = way1_hit ? 4'h0 : 4'h4; // @[d_cache.scala 100:33 108:23]
  wire [127:0] _GEN_170 = way1_hit ? _GEN_137 : ram_1_0; // @[d_cache.scala 100:33 20:24]
  wire [127:0] _GEN_171 = way1_hit ? _GEN_138 : ram_1_1; // @[d_cache.scala 100:33 20:24]
  wire [127:0] _GEN_172 = way1_hit ? _GEN_139 : ram_1_2; // @[d_cache.scala 100:33 20:24]
  wire [127:0] _GEN_173 = way1_hit ? _GEN_140 : ram_1_3; // @[d_cache.scala 100:33 20:24]
  wire [127:0] _GEN_174 = way1_hit ? _GEN_141 : ram_1_4; // @[d_cache.scala 100:33 20:24]
  wire [127:0] _GEN_175 = way1_hit ? _GEN_142 : ram_1_5; // @[d_cache.scala 100:33 20:24]
  wire [127:0] _GEN_176 = way1_hit ? _GEN_143 : ram_1_6; // @[d_cache.scala 100:33 20:24]
  wire [127:0] _GEN_177 = way1_hit ? _GEN_144 : ram_1_7; // @[d_cache.scala 100:33 20:24]
  wire [127:0] _GEN_178 = way1_hit ? _GEN_145 : ram_1_8; // @[d_cache.scala 100:33 20:24]
  wire [127:0] _GEN_179 = way1_hit ? _GEN_146 : ram_1_9; // @[d_cache.scala 100:33 20:24]
  wire [127:0] _GEN_180 = way1_hit ? _GEN_147 : ram_1_10; // @[d_cache.scala 100:33 20:24]
  wire [127:0] _GEN_181 = way1_hit ? _GEN_148 : ram_1_11; // @[d_cache.scala 100:33 20:24]
  wire [127:0] _GEN_182 = way1_hit ? _GEN_149 : ram_1_12; // @[d_cache.scala 100:33 20:24]
  wire [127:0] _GEN_183 = way1_hit ? _GEN_150 : ram_1_13; // @[d_cache.scala 100:33 20:24]
  wire [127:0] _GEN_184 = way1_hit ? _GEN_151 : ram_1_14; // @[d_cache.scala 100:33 20:24]
  wire [127:0] _GEN_185 = way1_hit ? _GEN_152 : ram_1_15; // @[d_cache.scala 100:33 20:24]
  wire  _GEN_186 = way1_hit ? _GEN_153 : dirty_1_0; // @[d_cache.scala 100:33 27:26]
  wire  _GEN_187 = way1_hit ? _GEN_154 : dirty_1_1; // @[d_cache.scala 100:33 27:26]
  wire  _GEN_188 = way1_hit ? _GEN_155 : dirty_1_2; // @[d_cache.scala 100:33 27:26]
  wire  _GEN_189 = way1_hit ? _GEN_156 : dirty_1_3; // @[d_cache.scala 100:33 27:26]
  wire  _GEN_190 = way1_hit ? _GEN_157 : dirty_1_4; // @[d_cache.scala 100:33 27:26]
  wire  _GEN_191 = way1_hit ? _GEN_158 : dirty_1_5; // @[d_cache.scala 100:33 27:26]
  wire  _GEN_192 = way1_hit ? _GEN_159 : dirty_1_6; // @[d_cache.scala 100:33 27:26]
  wire  _GEN_193 = way1_hit ? _GEN_160 : dirty_1_7; // @[d_cache.scala 100:33 27:26]
  wire  _GEN_194 = way1_hit ? _GEN_161 : dirty_1_8; // @[d_cache.scala 100:33 27:26]
  wire  _GEN_195 = way1_hit ? _GEN_162 : dirty_1_9; // @[d_cache.scala 100:33 27:26]
  wire  _GEN_196 = way1_hit ? _GEN_163 : dirty_1_10; // @[d_cache.scala 100:33 27:26]
  wire  _GEN_197 = way1_hit ? _GEN_164 : dirty_1_11; // @[d_cache.scala 100:33 27:26]
  wire  _GEN_198 = way1_hit ? _GEN_165 : dirty_1_12; // @[d_cache.scala 100:33 27:26]
  wire  _GEN_199 = way1_hit ? _GEN_166 : dirty_1_13; // @[d_cache.scala 100:33 27:26]
  wire  _GEN_200 = way1_hit ? _GEN_167 : dirty_1_14; // @[d_cache.scala 100:33 27:26]
  wire  _GEN_201 = way1_hit ? _GEN_168 : dirty_1_15; // @[d_cache.scala 100:33 27:26]
  wire [3:0] _GEN_202 = way0_hit ? 4'h0 : _GEN_169; // @[d_cache.scala 93:27]
  wire [127:0] _GEN_203 = way0_hit ? _GEN_89 : ram_0_0; // @[d_cache.scala 19:24 93:27]
  wire [127:0] _GEN_204 = way0_hit ? _GEN_90 : ram_0_1; // @[d_cache.scala 19:24 93:27]
  wire [127:0] _GEN_205 = way0_hit ? _GEN_91 : ram_0_2; // @[d_cache.scala 19:24 93:27]
  wire [127:0] _GEN_206 = way0_hit ? _GEN_92 : ram_0_3; // @[d_cache.scala 19:24 93:27]
  wire [127:0] _GEN_207 = way0_hit ? _GEN_93 : ram_0_4; // @[d_cache.scala 19:24 93:27]
  wire [127:0] _GEN_208 = way0_hit ? _GEN_94 : ram_0_5; // @[d_cache.scala 19:24 93:27]
  wire [127:0] _GEN_209 = way0_hit ? _GEN_95 : ram_0_6; // @[d_cache.scala 19:24 93:27]
  wire [127:0] _GEN_210 = way0_hit ? _GEN_96 : ram_0_7; // @[d_cache.scala 19:24 93:27]
  wire [127:0] _GEN_211 = way0_hit ? _GEN_97 : ram_0_8; // @[d_cache.scala 19:24 93:27]
  wire [127:0] _GEN_212 = way0_hit ? _GEN_98 : ram_0_9; // @[d_cache.scala 19:24 93:27]
  wire [127:0] _GEN_213 = way0_hit ? _GEN_99 : ram_0_10; // @[d_cache.scala 19:24 93:27]
  wire [127:0] _GEN_214 = way0_hit ? _GEN_100 : ram_0_11; // @[d_cache.scala 19:24 93:27]
  wire [127:0] _GEN_215 = way0_hit ? _GEN_101 : ram_0_12; // @[d_cache.scala 19:24 93:27]
  wire [127:0] _GEN_216 = way0_hit ? _GEN_102 : ram_0_13; // @[d_cache.scala 19:24 93:27]
  wire [127:0] _GEN_217 = way0_hit ? _GEN_103 : ram_0_14; // @[d_cache.scala 19:24 93:27]
  wire [127:0] _GEN_218 = way0_hit ? _GEN_104 : ram_0_15; // @[d_cache.scala 19:24 93:27]
  wire  _GEN_219 = way0_hit ? _GEN_105 : dirty_0_0; // @[d_cache.scala 26:26 93:27]
  wire  _GEN_220 = way0_hit ? _GEN_106 : dirty_0_1; // @[d_cache.scala 26:26 93:27]
  wire  _GEN_221 = way0_hit ? _GEN_107 : dirty_0_2; // @[d_cache.scala 26:26 93:27]
  wire  _GEN_222 = way0_hit ? _GEN_108 : dirty_0_3; // @[d_cache.scala 26:26 93:27]
  wire  _GEN_223 = way0_hit ? _GEN_109 : dirty_0_4; // @[d_cache.scala 26:26 93:27]
  wire  _GEN_224 = way0_hit ? _GEN_110 : dirty_0_5; // @[d_cache.scala 26:26 93:27]
  wire  _GEN_225 = way0_hit ? _GEN_111 : dirty_0_6; // @[d_cache.scala 26:26 93:27]
  wire  _GEN_226 = way0_hit ? _GEN_112 : dirty_0_7; // @[d_cache.scala 26:26 93:27]
  wire  _GEN_227 = way0_hit ? _GEN_113 : dirty_0_8; // @[d_cache.scala 26:26 93:27]
  wire  _GEN_228 = way0_hit ? _GEN_114 : dirty_0_9; // @[d_cache.scala 26:26 93:27]
  wire  _GEN_229 = way0_hit ? _GEN_115 : dirty_0_10; // @[d_cache.scala 26:26 93:27]
  wire  _GEN_230 = way0_hit ? _GEN_116 : dirty_0_11; // @[d_cache.scala 26:26 93:27]
  wire  _GEN_231 = way0_hit ? _GEN_117 : dirty_0_12; // @[d_cache.scala 26:26 93:27]
  wire  _GEN_232 = way0_hit ? _GEN_118 : dirty_0_13; // @[d_cache.scala 26:26 93:27]
  wire  _GEN_233 = way0_hit ? _GEN_119 : dirty_0_14; // @[d_cache.scala 26:26 93:27]
  wire  _GEN_234 = way0_hit ? _GEN_120 : dirty_0_15; // @[d_cache.scala 26:26 93:27]
  wire [127:0] _GEN_235 = way0_hit ? ram_1_0 : _GEN_170; // @[d_cache.scala 20:24 93:27]
  wire [127:0] _GEN_236 = way0_hit ? ram_1_1 : _GEN_171; // @[d_cache.scala 20:24 93:27]
  wire [127:0] _GEN_237 = way0_hit ? ram_1_2 : _GEN_172; // @[d_cache.scala 20:24 93:27]
  wire [127:0] _GEN_238 = way0_hit ? ram_1_3 : _GEN_173; // @[d_cache.scala 20:24 93:27]
  wire [127:0] _GEN_239 = way0_hit ? ram_1_4 : _GEN_174; // @[d_cache.scala 20:24 93:27]
  wire [127:0] _GEN_240 = way0_hit ? ram_1_5 : _GEN_175; // @[d_cache.scala 20:24 93:27]
  wire [127:0] _GEN_241 = way0_hit ? ram_1_6 : _GEN_176; // @[d_cache.scala 20:24 93:27]
  wire [127:0] _GEN_242 = way0_hit ? ram_1_7 : _GEN_177; // @[d_cache.scala 20:24 93:27]
  wire [127:0] _GEN_243 = way0_hit ? ram_1_8 : _GEN_178; // @[d_cache.scala 20:24 93:27]
  wire [127:0] _GEN_244 = way0_hit ? ram_1_9 : _GEN_179; // @[d_cache.scala 20:24 93:27]
  wire [127:0] _GEN_245 = way0_hit ? ram_1_10 : _GEN_180; // @[d_cache.scala 20:24 93:27]
  wire [127:0] _GEN_246 = way0_hit ? ram_1_11 : _GEN_181; // @[d_cache.scala 20:24 93:27]
  wire [127:0] _GEN_247 = way0_hit ? ram_1_12 : _GEN_182; // @[d_cache.scala 20:24 93:27]
  wire [127:0] _GEN_248 = way0_hit ? ram_1_13 : _GEN_183; // @[d_cache.scala 20:24 93:27]
  wire [127:0] _GEN_249 = way0_hit ? ram_1_14 : _GEN_184; // @[d_cache.scala 20:24 93:27]
  wire [127:0] _GEN_250 = way0_hit ? ram_1_15 : _GEN_185; // @[d_cache.scala 20:24 93:27]
  wire  _GEN_251 = way0_hit ? dirty_1_0 : _GEN_186; // @[d_cache.scala 27:26 93:27]
  wire  _GEN_252 = way0_hit ? dirty_1_1 : _GEN_187; // @[d_cache.scala 27:26 93:27]
  wire  _GEN_253 = way0_hit ? dirty_1_2 : _GEN_188; // @[d_cache.scala 27:26 93:27]
  wire  _GEN_254 = way0_hit ? dirty_1_3 : _GEN_189; // @[d_cache.scala 27:26 93:27]
  wire  _GEN_255 = way0_hit ? dirty_1_4 : _GEN_190; // @[d_cache.scala 27:26 93:27]
  wire  _GEN_256 = way0_hit ? dirty_1_5 : _GEN_191; // @[d_cache.scala 27:26 93:27]
  wire  _GEN_257 = way0_hit ? dirty_1_6 : _GEN_192; // @[d_cache.scala 27:26 93:27]
  wire  _GEN_258 = way0_hit ? dirty_1_7 : _GEN_193; // @[d_cache.scala 27:26 93:27]
  wire  _GEN_259 = way0_hit ? dirty_1_8 : _GEN_194; // @[d_cache.scala 27:26 93:27]
  wire  _GEN_260 = way0_hit ? dirty_1_9 : _GEN_195; // @[d_cache.scala 27:26 93:27]
  wire  _GEN_261 = way0_hit ? dirty_1_10 : _GEN_196; // @[d_cache.scala 27:26 93:27]
  wire  _GEN_262 = way0_hit ? dirty_1_11 : _GEN_197; // @[d_cache.scala 27:26 93:27]
  wire  _GEN_263 = way0_hit ? dirty_1_12 : _GEN_198; // @[d_cache.scala 27:26 93:27]
  wire  _GEN_264 = way0_hit ? dirty_1_13 : _GEN_199; // @[d_cache.scala 27:26 93:27]
  wire  _GEN_265 = way0_hit ? dirty_1_14 : _GEN_200; // @[d_cache.scala 27:26 93:27]
  wire  _GEN_266 = way0_hit ? dirty_1_15 : _GEN_201; // @[d_cache.scala 27:26 93:27]
  wire [63:0] _GEN_267 = ~receive_num[0] ? io_from_axi_rdata : receive_data_0; // @[d_cache.scala 113:{43,43} 37:31]
  wire [63:0] _GEN_268 = receive_num[0] ? io_from_axi_rdata : receive_data_1; // @[d_cache.scala 113:{43,43} 37:31]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[d_cache.scala 114:44]
  wire [3:0] _GEN_269 = io_from_axi_rlast ? 4'h5 : state; // @[d_cache.scala 115:40 116:27 60:24]
  wire [63:0] _GEN_270 = io_from_axi_rvalid ? _GEN_267 : receive_data_0; // @[d_cache.scala 112:37 37:31]
  wire [63:0] _GEN_271 = io_from_axi_rvalid ? _GEN_268 : receive_data_1; // @[d_cache.scala 112:37 37:31]
  wire [2:0] _GEN_272 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[d_cache.scala 112:37 114:29 38:30]
  wire [3:0] _GEN_273 = io_from_axi_rvalid ? _GEN_269 : state; // @[d_cache.scala 112:37 60:24]
  wire [3:0] _GEN_274 = io_from_axi_bvalid ? 4'h0 : state; // @[d_cache.scala 121:59 122:23 60:24]
  wire [127:0] _ram_0_T_6 = {receive_data_1,receive_data_0}; // @[Cat.scala 31:58]
  wire [127:0] _GEN_275 = 4'h0 == index ? _ram_0_T_6 : ram_0_0; // @[d_cache.scala 128:{30,30} 19:24]
  wire [127:0] _GEN_276 = 4'h1 == index ? _ram_0_T_6 : ram_0_1; // @[d_cache.scala 128:{30,30} 19:24]
  wire [127:0] _GEN_277 = 4'h2 == index ? _ram_0_T_6 : ram_0_2; // @[d_cache.scala 128:{30,30} 19:24]
  wire [127:0] _GEN_278 = 4'h3 == index ? _ram_0_T_6 : ram_0_3; // @[d_cache.scala 128:{30,30} 19:24]
  wire [127:0] _GEN_279 = 4'h4 == index ? _ram_0_T_6 : ram_0_4; // @[d_cache.scala 128:{30,30} 19:24]
  wire [127:0] _GEN_280 = 4'h5 == index ? _ram_0_T_6 : ram_0_5; // @[d_cache.scala 128:{30,30} 19:24]
  wire [127:0] _GEN_281 = 4'h6 == index ? _ram_0_T_6 : ram_0_6; // @[d_cache.scala 128:{30,30} 19:24]
  wire [127:0] _GEN_282 = 4'h7 == index ? _ram_0_T_6 : ram_0_7; // @[d_cache.scala 128:{30,30} 19:24]
  wire [127:0] _GEN_283 = 4'h8 == index ? _ram_0_T_6 : ram_0_8; // @[d_cache.scala 128:{30,30} 19:24]
  wire [127:0] _GEN_284 = 4'h9 == index ? _ram_0_T_6 : ram_0_9; // @[d_cache.scala 128:{30,30} 19:24]
  wire [127:0] _GEN_285 = 4'ha == index ? _ram_0_T_6 : ram_0_10; // @[d_cache.scala 128:{30,30} 19:24]
  wire [127:0] _GEN_286 = 4'hb == index ? _ram_0_T_6 : ram_0_11; // @[d_cache.scala 128:{30,30} 19:24]
  wire [127:0] _GEN_287 = 4'hc == index ? _ram_0_T_6 : ram_0_12; // @[d_cache.scala 128:{30,30} 19:24]
  wire [127:0] _GEN_288 = 4'hd == index ? _ram_0_T_6 : ram_0_13; // @[d_cache.scala 128:{30,30} 19:24]
  wire [127:0] _GEN_289 = 4'he == index ? _ram_0_T_6 : ram_0_14; // @[d_cache.scala 128:{30,30} 19:24]
  wire [127:0] _GEN_290 = 4'hf == index ? _ram_0_T_6 : ram_0_15; // @[d_cache.scala 128:{30,30} 19:24]
  wire [31:0] _GEN_291 = 4'h0 == index ? _GEN_2254 : tag_0_0; // @[d_cache.scala 129:{30,30} 22:24]
  wire [31:0] _GEN_292 = 4'h1 == index ? _GEN_2254 : tag_0_1; // @[d_cache.scala 129:{30,30} 22:24]
  wire [31:0] _GEN_293 = 4'h2 == index ? _GEN_2254 : tag_0_2; // @[d_cache.scala 129:{30,30} 22:24]
  wire [31:0] _GEN_294 = 4'h3 == index ? _GEN_2254 : tag_0_3; // @[d_cache.scala 129:{30,30} 22:24]
  wire [31:0] _GEN_295 = 4'h4 == index ? _GEN_2254 : tag_0_4; // @[d_cache.scala 129:{30,30} 22:24]
  wire [31:0] _GEN_296 = 4'h5 == index ? _GEN_2254 : tag_0_5; // @[d_cache.scala 129:{30,30} 22:24]
  wire [31:0] _GEN_297 = 4'h6 == index ? _GEN_2254 : tag_0_6; // @[d_cache.scala 129:{30,30} 22:24]
  wire [31:0] _GEN_298 = 4'h7 == index ? _GEN_2254 : tag_0_7; // @[d_cache.scala 129:{30,30} 22:24]
  wire [31:0] _GEN_299 = 4'h8 == index ? _GEN_2254 : tag_0_8; // @[d_cache.scala 129:{30,30} 22:24]
  wire [31:0] _GEN_300 = 4'h9 == index ? _GEN_2254 : tag_0_9; // @[d_cache.scala 129:{30,30} 22:24]
  wire [31:0] _GEN_301 = 4'ha == index ? _GEN_2254 : tag_0_10; // @[d_cache.scala 129:{30,30} 22:24]
  wire [31:0] _GEN_302 = 4'hb == index ? _GEN_2254 : tag_0_11; // @[d_cache.scala 129:{30,30} 22:24]
  wire [31:0] _GEN_303 = 4'hc == index ? _GEN_2254 : tag_0_12; // @[d_cache.scala 129:{30,30} 22:24]
  wire [31:0] _GEN_304 = 4'hd == index ? _GEN_2254 : tag_0_13; // @[d_cache.scala 129:{30,30} 22:24]
  wire [31:0] _GEN_305 = 4'he == index ? _GEN_2254 : tag_0_14; // @[d_cache.scala 129:{30,30} 22:24]
  wire [31:0] _GEN_306 = 4'hf == index ? _GEN_2254 : tag_0_15; // @[d_cache.scala 129:{30,30} 22:24]
  wire  _GEN_307 = _GEN_2259 | valid_0_0; // @[d_cache.scala 130:{32,32} 24:26]
  wire  _GEN_308 = _GEN_2263 | valid_0_1; // @[d_cache.scala 130:{32,32} 24:26]
  wire  _GEN_309 = _GEN_2264 | valid_0_2; // @[d_cache.scala 130:{32,32} 24:26]
  wire  _GEN_310 = _GEN_2269 | valid_0_3; // @[d_cache.scala 130:{32,32} 24:26]
  wire  _GEN_311 = _GEN_2270 | valid_0_4; // @[d_cache.scala 130:{32,32} 24:26]
  wire  _GEN_312 = _GEN_2274 | valid_0_5; // @[d_cache.scala 130:{32,32} 24:26]
  wire  _GEN_313 = _GEN_2277 | valid_0_6; // @[d_cache.scala 130:{32,32} 24:26]
  wire  _GEN_314 = _GEN_2279 | valid_0_7; // @[d_cache.scala 130:{32,32} 24:26]
  wire  _GEN_315 = _GEN_2281 | valid_0_8; // @[d_cache.scala 130:{32,32} 24:26]
  wire  _GEN_316 = _GEN_2282 | valid_0_9; // @[d_cache.scala 130:{32,32} 24:26]
  wire  _GEN_317 = _GEN_2286 | valid_0_10; // @[d_cache.scala 130:{32,32} 24:26]
  wire  _GEN_318 = _GEN_2287 | valid_0_11; // @[d_cache.scala 130:{32,32} 24:26]
  wire  _GEN_319 = _GEN_2292 | valid_0_12; // @[d_cache.scala 130:{32,32} 24:26]
  wire  _GEN_320 = _GEN_2293 | valid_0_13; // @[d_cache.scala 130:{32,32} 24:26]
  wire  _GEN_321 = _GEN_2297 | valid_0_14; // @[d_cache.scala 130:{32,32} 24:26]
  wire  _GEN_322 = _GEN_2301 | valid_0_15; // @[d_cache.scala 130:{32,32} 24:26]
  wire [1:0] _GEN_324 = 4'h1 == index ? quene_1 : quene_0; // @[d_cache.scala 131:{46,46}]
  wire [1:0] _GEN_325 = 4'h2 == index ? quene_2 : _GEN_324; // @[d_cache.scala 131:{46,46}]
  wire [1:0] _GEN_326 = 4'h3 == index ? quene_3 : _GEN_325; // @[d_cache.scala 131:{46,46}]
  wire [1:0] _GEN_327 = 4'h4 == index ? quene_4 : _GEN_326; // @[d_cache.scala 131:{46,46}]
  wire [1:0] _GEN_328 = 4'h5 == index ? quene_5 : _GEN_327; // @[d_cache.scala 131:{46,46}]
  wire [1:0] _GEN_329 = 4'h6 == index ? quene_6 : _GEN_328; // @[d_cache.scala 131:{46,46}]
  wire [1:0] _GEN_330 = 4'h7 == index ? quene_7 : _GEN_329; // @[d_cache.scala 131:{46,46}]
  wire [1:0] _GEN_331 = 4'h8 == index ? quene_8 : _GEN_330; // @[d_cache.scala 131:{46,46}]
  wire [1:0] _GEN_332 = 4'h9 == index ? quene_9 : _GEN_331; // @[d_cache.scala 131:{46,46}]
  wire [1:0] _GEN_333 = 4'ha == index ? quene_10 : _GEN_332; // @[d_cache.scala 131:{46,46}]
  wire [1:0] _GEN_334 = 4'hb == index ? quene_11 : _GEN_333; // @[d_cache.scala 131:{46,46}]
  wire [1:0] _GEN_335 = 4'hc == index ? quene_12 : _GEN_334; // @[d_cache.scala 131:{46,46}]
  wire [1:0] _GEN_336 = 4'hd == index ? quene_13 : _GEN_335; // @[d_cache.scala 131:{46,46}]
  wire [1:0] _GEN_337 = 4'he == index ? quene_14 : _GEN_336; // @[d_cache.scala 131:{46,46}]
  wire [1:0] _GEN_338 = 4'hf == index ? quene_15 : _GEN_337; // @[d_cache.scala 131:{46,46}]
  wire [2:0] _quene_T = {_GEN_338, 1'h0}; // @[d_cache.scala 131:46]
  wire [1:0] _GEN_339 = 4'h0 == index ? _quene_T[1:0] : quene_0; // @[d_cache.scala 131:{30,30} 39:24]
  wire [1:0] _GEN_340 = 4'h1 == index ? _quene_T[1:0] : quene_1; // @[d_cache.scala 131:{30,30} 39:24]
  wire [1:0] _GEN_341 = 4'h2 == index ? _quene_T[1:0] : quene_2; // @[d_cache.scala 131:{30,30} 39:24]
  wire [1:0] _GEN_342 = 4'h3 == index ? _quene_T[1:0] : quene_3; // @[d_cache.scala 131:{30,30} 39:24]
  wire [1:0] _GEN_343 = 4'h4 == index ? _quene_T[1:0] : quene_4; // @[d_cache.scala 131:{30,30} 39:24]
  wire [1:0] _GEN_344 = 4'h5 == index ? _quene_T[1:0] : quene_5; // @[d_cache.scala 131:{30,30} 39:24]
  wire [1:0] _GEN_345 = 4'h6 == index ? _quene_T[1:0] : quene_6; // @[d_cache.scala 131:{30,30} 39:24]
  wire [1:0] _GEN_346 = 4'h7 == index ? _quene_T[1:0] : quene_7; // @[d_cache.scala 131:{30,30} 39:24]
  wire [1:0] _GEN_347 = 4'h8 == index ? _quene_T[1:0] : quene_8; // @[d_cache.scala 131:{30,30} 39:24]
  wire [1:0] _GEN_348 = 4'h9 == index ? _quene_T[1:0] : quene_9; // @[d_cache.scala 131:{30,30} 39:24]
  wire [1:0] _GEN_349 = 4'ha == index ? _quene_T[1:0] : quene_10; // @[d_cache.scala 131:{30,30} 39:24]
  wire [1:0] _GEN_350 = 4'hb == index ? _quene_T[1:0] : quene_11; // @[d_cache.scala 131:{30,30} 39:24]
  wire [1:0] _GEN_351 = 4'hc == index ? _quene_T[1:0] : quene_12; // @[d_cache.scala 131:{30,30} 39:24]
  wire [1:0] _GEN_352 = 4'hd == index ? _quene_T[1:0] : quene_13; // @[d_cache.scala 131:{30,30} 39:24]
  wire [1:0] _GEN_353 = 4'he == index ? _quene_T[1:0] : quene_14; // @[d_cache.scala 131:{30,30} 39:24]
  wire [1:0] _GEN_354 = 4'hf == index ? _quene_T[1:0] : quene_15; // @[d_cache.scala 131:{30,30} 39:24]
  wire [127:0] _GEN_355 = 4'h0 == index ? _ram_0_T_6 : ram_1_0; // @[d_cache.scala 134:{30,30} 20:24]
  wire [127:0] _GEN_356 = 4'h1 == index ? _ram_0_T_6 : ram_1_1; // @[d_cache.scala 134:{30,30} 20:24]
  wire [127:0] _GEN_357 = 4'h2 == index ? _ram_0_T_6 : ram_1_2; // @[d_cache.scala 134:{30,30} 20:24]
  wire [127:0] _GEN_358 = 4'h3 == index ? _ram_0_T_6 : ram_1_3; // @[d_cache.scala 134:{30,30} 20:24]
  wire [127:0] _GEN_359 = 4'h4 == index ? _ram_0_T_6 : ram_1_4; // @[d_cache.scala 134:{30,30} 20:24]
  wire [127:0] _GEN_360 = 4'h5 == index ? _ram_0_T_6 : ram_1_5; // @[d_cache.scala 134:{30,30} 20:24]
  wire [127:0] _GEN_361 = 4'h6 == index ? _ram_0_T_6 : ram_1_6; // @[d_cache.scala 134:{30,30} 20:24]
  wire [127:0] _GEN_362 = 4'h7 == index ? _ram_0_T_6 : ram_1_7; // @[d_cache.scala 134:{30,30} 20:24]
  wire [127:0] _GEN_363 = 4'h8 == index ? _ram_0_T_6 : ram_1_8; // @[d_cache.scala 134:{30,30} 20:24]
  wire [127:0] _GEN_364 = 4'h9 == index ? _ram_0_T_6 : ram_1_9; // @[d_cache.scala 134:{30,30} 20:24]
  wire [127:0] _GEN_365 = 4'ha == index ? _ram_0_T_6 : ram_1_10; // @[d_cache.scala 134:{30,30} 20:24]
  wire [127:0] _GEN_366 = 4'hb == index ? _ram_0_T_6 : ram_1_11; // @[d_cache.scala 134:{30,30} 20:24]
  wire [127:0] _GEN_367 = 4'hc == index ? _ram_0_T_6 : ram_1_12; // @[d_cache.scala 134:{30,30} 20:24]
  wire [127:0] _GEN_368 = 4'hd == index ? _ram_0_T_6 : ram_1_13; // @[d_cache.scala 134:{30,30} 20:24]
  wire [127:0] _GEN_369 = 4'he == index ? _ram_0_T_6 : ram_1_14; // @[d_cache.scala 134:{30,30} 20:24]
  wire [127:0] _GEN_370 = 4'hf == index ? _ram_0_T_6 : ram_1_15; // @[d_cache.scala 134:{30,30} 20:24]
  wire [31:0] _GEN_371 = 4'h0 == index ? _GEN_2254 : tag_1_0; // @[d_cache.scala 135:{30,30} 23:24]
  wire [31:0] _GEN_372 = 4'h1 == index ? _GEN_2254 : tag_1_1; // @[d_cache.scala 135:{30,30} 23:24]
  wire [31:0] _GEN_373 = 4'h2 == index ? _GEN_2254 : tag_1_2; // @[d_cache.scala 135:{30,30} 23:24]
  wire [31:0] _GEN_374 = 4'h3 == index ? _GEN_2254 : tag_1_3; // @[d_cache.scala 135:{30,30} 23:24]
  wire [31:0] _GEN_375 = 4'h4 == index ? _GEN_2254 : tag_1_4; // @[d_cache.scala 135:{30,30} 23:24]
  wire [31:0] _GEN_376 = 4'h5 == index ? _GEN_2254 : tag_1_5; // @[d_cache.scala 135:{30,30} 23:24]
  wire [31:0] _GEN_377 = 4'h6 == index ? _GEN_2254 : tag_1_6; // @[d_cache.scala 135:{30,30} 23:24]
  wire [31:0] _GEN_378 = 4'h7 == index ? _GEN_2254 : tag_1_7; // @[d_cache.scala 135:{30,30} 23:24]
  wire [31:0] _GEN_379 = 4'h8 == index ? _GEN_2254 : tag_1_8; // @[d_cache.scala 135:{30,30} 23:24]
  wire [31:0] _GEN_380 = 4'h9 == index ? _GEN_2254 : tag_1_9; // @[d_cache.scala 135:{30,30} 23:24]
  wire [31:0] _GEN_381 = 4'ha == index ? _GEN_2254 : tag_1_10; // @[d_cache.scala 135:{30,30} 23:24]
  wire [31:0] _GEN_382 = 4'hb == index ? _GEN_2254 : tag_1_11; // @[d_cache.scala 135:{30,30} 23:24]
  wire [31:0] _GEN_383 = 4'hc == index ? _GEN_2254 : tag_1_12; // @[d_cache.scala 135:{30,30} 23:24]
  wire [31:0] _GEN_384 = 4'hd == index ? _GEN_2254 : tag_1_13; // @[d_cache.scala 135:{30,30} 23:24]
  wire [31:0] _GEN_385 = 4'he == index ? _GEN_2254 : tag_1_14; // @[d_cache.scala 135:{30,30} 23:24]
  wire [31:0] _GEN_386 = 4'hf == index ? _GEN_2254 : tag_1_15; // @[d_cache.scala 135:{30,30} 23:24]
  wire  _GEN_387 = _GEN_2259 | valid_1_0; // @[d_cache.scala 136:{32,32} 25:26]
  wire  _GEN_388 = _GEN_2263 | valid_1_1; // @[d_cache.scala 136:{32,32} 25:26]
  wire  _GEN_389 = _GEN_2264 | valid_1_2; // @[d_cache.scala 136:{32,32} 25:26]
  wire  _GEN_390 = _GEN_2269 | valid_1_3; // @[d_cache.scala 136:{32,32} 25:26]
  wire  _GEN_391 = _GEN_2270 | valid_1_4; // @[d_cache.scala 136:{32,32} 25:26]
  wire  _GEN_392 = _GEN_2274 | valid_1_5; // @[d_cache.scala 136:{32,32} 25:26]
  wire  _GEN_393 = _GEN_2277 | valid_1_6; // @[d_cache.scala 136:{32,32} 25:26]
  wire  _GEN_394 = _GEN_2279 | valid_1_7; // @[d_cache.scala 136:{32,32} 25:26]
  wire  _GEN_395 = _GEN_2281 | valid_1_8; // @[d_cache.scala 136:{32,32} 25:26]
  wire  _GEN_396 = _GEN_2282 | valid_1_9; // @[d_cache.scala 136:{32,32} 25:26]
  wire  _GEN_397 = _GEN_2286 | valid_1_10; // @[d_cache.scala 136:{32,32} 25:26]
  wire  _GEN_398 = _GEN_2287 | valid_1_11; // @[d_cache.scala 136:{32,32} 25:26]
  wire  _GEN_399 = _GEN_2292 | valid_1_12; // @[d_cache.scala 136:{32,32} 25:26]
  wire  _GEN_400 = _GEN_2293 | valid_1_13; // @[d_cache.scala 136:{32,32} 25:26]
  wire  _GEN_401 = _GEN_2297 | valid_1_14; // @[d_cache.scala 136:{32,32} 25:26]
  wire  _GEN_402 = _GEN_2301 | valid_1_15; // @[d_cache.scala 136:{32,32} 25:26]
  wire [2:0] _quene_T_2 = _quene_T | 3'h1; // @[d_cache.scala 137:55]
  wire [1:0] _GEN_403 = 4'h0 == index ? _quene_T_2[1:0] : quene_0; // @[d_cache.scala 137:{30,30} 39:24]
  wire [1:0] _GEN_404 = 4'h1 == index ? _quene_T_2[1:0] : quene_1; // @[d_cache.scala 137:{30,30} 39:24]
  wire [1:0] _GEN_405 = 4'h2 == index ? _quene_T_2[1:0] : quene_2; // @[d_cache.scala 137:{30,30} 39:24]
  wire [1:0] _GEN_406 = 4'h3 == index ? _quene_T_2[1:0] : quene_3; // @[d_cache.scala 137:{30,30} 39:24]
  wire [1:0] _GEN_407 = 4'h4 == index ? _quene_T_2[1:0] : quene_4; // @[d_cache.scala 137:{30,30} 39:24]
  wire [1:0] _GEN_408 = 4'h5 == index ? _quene_T_2[1:0] : quene_5; // @[d_cache.scala 137:{30,30} 39:24]
  wire [1:0] _GEN_409 = 4'h6 == index ? _quene_T_2[1:0] : quene_6; // @[d_cache.scala 137:{30,30} 39:24]
  wire [1:0] _GEN_410 = 4'h7 == index ? _quene_T_2[1:0] : quene_7; // @[d_cache.scala 137:{30,30} 39:24]
  wire [1:0] _GEN_411 = 4'h8 == index ? _quene_T_2[1:0] : quene_8; // @[d_cache.scala 137:{30,30} 39:24]
  wire [1:0] _GEN_412 = 4'h9 == index ? _quene_T_2[1:0] : quene_9; // @[d_cache.scala 137:{30,30} 39:24]
  wire [1:0] _GEN_413 = 4'ha == index ? _quene_T_2[1:0] : quene_10; // @[d_cache.scala 137:{30,30} 39:24]
  wire [1:0] _GEN_414 = 4'hb == index ? _quene_T_2[1:0] : quene_11; // @[d_cache.scala 137:{30,30} 39:24]
  wire [1:0] _GEN_415 = 4'hc == index ? _quene_T_2[1:0] : quene_12; // @[d_cache.scala 137:{30,30} 39:24]
  wire [1:0] _GEN_416 = 4'hd == index ? _quene_T_2[1:0] : quene_13; // @[d_cache.scala 137:{30,30} 39:24]
  wire [1:0] _GEN_417 = 4'he == index ? _quene_T_2[1:0] : quene_14; // @[d_cache.scala 137:{30,30} 39:24]
  wire [1:0] _GEN_418 = 4'hf == index ? _quene_T_2[1:0] : quene_15; // @[d_cache.scala 137:{30,30} 39:24]
  wire  _GEN_420 = 4'h1 == index ? dirty_0_1 : dirty_0_0; // @[d_cache.scala 141:{40,40}]
  wire  _GEN_421 = 4'h2 == index ? dirty_0_2 : _GEN_420; // @[d_cache.scala 141:{40,40}]
  wire  _GEN_422 = 4'h3 == index ? dirty_0_3 : _GEN_421; // @[d_cache.scala 141:{40,40}]
  wire  _GEN_423 = 4'h4 == index ? dirty_0_4 : _GEN_422; // @[d_cache.scala 141:{40,40}]
  wire  _GEN_424 = 4'h5 == index ? dirty_0_5 : _GEN_423; // @[d_cache.scala 141:{40,40}]
  wire  _GEN_425 = 4'h6 == index ? dirty_0_6 : _GEN_424; // @[d_cache.scala 141:{40,40}]
  wire  _GEN_426 = 4'h7 == index ? dirty_0_7 : _GEN_425; // @[d_cache.scala 141:{40,40}]
  wire  _GEN_427 = 4'h8 == index ? dirty_0_8 : _GEN_426; // @[d_cache.scala 141:{40,40}]
  wire  _GEN_428 = 4'h9 == index ? dirty_0_9 : _GEN_427; // @[d_cache.scala 141:{40,40}]
  wire  _GEN_429 = 4'ha == index ? dirty_0_10 : _GEN_428; // @[d_cache.scala 141:{40,40}]
  wire  _GEN_430 = 4'hb == index ? dirty_0_11 : _GEN_429; // @[d_cache.scala 141:{40,40}]
  wire  _GEN_431 = 4'hc == index ? dirty_0_12 : _GEN_430; // @[d_cache.scala 141:{40,40}]
  wire  _GEN_432 = 4'hd == index ? dirty_0_13 : _GEN_431; // @[d_cache.scala 141:{40,40}]
  wire  _GEN_433 = 4'he == index ? dirty_0_14 : _GEN_432; // @[d_cache.scala 141:{40,40}]
  wire  _GEN_434 = 4'hf == index ? dirty_0_15 : _GEN_433; // @[d_cache.scala 141:{40,40}]
  wire [39:0] _write_back_addr_T_1 = {_GEN_15,index,4'h0}; // @[Cat.scala 31:58]
  wire  _GEN_467 = 4'h0 == index ? 1'h0 : dirty_0_0; // @[d_cache.scala 146:{40,40} 26:26]
  wire  _GEN_468 = 4'h1 == index ? 1'h0 : dirty_0_1; // @[d_cache.scala 146:{40,40} 26:26]
  wire  _GEN_469 = 4'h2 == index ? 1'h0 : dirty_0_2; // @[d_cache.scala 146:{40,40} 26:26]
  wire  _GEN_470 = 4'h3 == index ? 1'h0 : dirty_0_3; // @[d_cache.scala 146:{40,40} 26:26]
  wire  _GEN_471 = 4'h4 == index ? 1'h0 : dirty_0_4; // @[d_cache.scala 146:{40,40} 26:26]
  wire  _GEN_472 = 4'h5 == index ? 1'h0 : dirty_0_5; // @[d_cache.scala 146:{40,40} 26:26]
  wire  _GEN_473 = 4'h6 == index ? 1'h0 : dirty_0_6; // @[d_cache.scala 146:{40,40} 26:26]
  wire  _GEN_474 = 4'h7 == index ? 1'h0 : dirty_0_7; // @[d_cache.scala 146:{40,40} 26:26]
  wire  _GEN_475 = 4'h8 == index ? 1'h0 : dirty_0_8; // @[d_cache.scala 146:{40,40} 26:26]
  wire  _GEN_476 = 4'h9 == index ? 1'h0 : dirty_0_9; // @[d_cache.scala 146:{40,40} 26:26]
  wire  _GEN_477 = 4'ha == index ? 1'h0 : dirty_0_10; // @[d_cache.scala 146:{40,40} 26:26]
  wire  _GEN_478 = 4'hb == index ? 1'h0 : dirty_0_11; // @[d_cache.scala 146:{40,40} 26:26]
  wire  _GEN_479 = 4'hc == index ? 1'h0 : dirty_0_12; // @[d_cache.scala 146:{40,40} 26:26]
  wire  _GEN_480 = 4'hd == index ? 1'h0 : dirty_0_13; // @[d_cache.scala 146:{40,40} 26:26]
  wire  _GEN_481 = 4'he == index ? 1'h0 : dirty_0_14; // @[d_cache.scala 146:{40,40} 26:26]
  wire  _GEN_482 = 4'hf == index ? 1'h0 : dirty_0_15; // @[d_cache.scala 146:{40,40} 26:26]
  wire [127:0] _GEN_579 = _GEN_434 ? _GEN_88 : write_back_data; // @[d_cache.scala 141:47 142:41 31:34]
  wire [39:0] _GEN_580 = _GEN_434 ? _write_back_addr_T_1 : {{8'd0}, write_back_addr}; // @[d_cache.scala 141:47 143:41 32:34]
  wire [127:0] _GEN_581 = _GEN_434 ? _GEN_275 : _GEN_275; // @[d_cache.scala 141:47]
  wire [127:0] _GEN_582 = _GEN_434 ? _GEN_276 : _GEN_276; // @[d_cache.scala 141:47]
  wire [127:0] _GEN_583 = _GEN_434 ? _GEN_277 : _GEN_277; // @[d_cache.scala 141:47]
  wire [127:0] _GEN_584 = _GEN_434 ? _GEN_278 : _GEN_278; // @[d_cache.scala 141:47]
  wire [127:0] _GEN_585 = _GEN_434 ? _GEN_279 : _GEN_279; // @[d_cache.scala 141:47]
  wire [127:0] _GEN_586 = _GEN_434 ? _GEN_280 : _GEN_280; // @[d_cache.scala 141:47]
  wire [127:0] _GEN_587 = _GEN_434 ? _GEN_281 : _GEN_281; // @[d_cache.scala 141:47]
  wire [127:0] _GEN_588 = _GEN_434 ? _GEN_282 : _GEN_282; // @[d_cache.scala 141:47]
  wire [127:0] _GEN_589 = _GEN_434 ? _GEN_283 : _GEN_283; // @[d_cache.scala 141:47]
  wire [127:0] _GEN_590 = _GEN_434 ? _GEN_284 : _GEN_284; // @[d_cache.scala 141:47]
  wire [127:0] _GEN_591 = _GEN_434 ? _GEN_285 : _GEN_285; // @[d_cache.scala 141:47]
  wire [127:0] _GEN_592 = _GEN_434 ? _GEN_286 : _GEN_286; // @[d_cache.scala 141:47]
  wire [127:0] _GEN_593 = _GEN_434 ? _GEN_287 : _GEN_287; // @[d_cache.scala 141:47]
  wire [127:0] _GEN_594 = _GEN_434 ? _GEN_288 : _GEN_288; // @[d_cache.scala 141:47]
  wire [127:0] _GEN_595 = _GEN_434 ? _GEN_289 : _GEN_289; // @[d_cache.scala 141:47]
  wire [127:0] _GEN_596 = _GEN_434 ? _GEN_290 : _GEN_290; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_597 = _GEN_434 ? _GEN_291 : _GEN_291; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_598 = _GEN_434 ? _GEN_292 : _GEN_292; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_599 = _GEN_434 ? _GEN_293 : _GEN_293; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_600 = _GEN_434 ? _GEN_294 : _GEN_294; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_601 = _GEN_434 ? _GEN_295 : _GEN_295; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_602 = _GEN_434 ? _GEN_296 : _GEN_296; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_603 = _GEN_434 ? _GEN_297 : _GEN_297; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_604 = _GEN_434 ? _GEN_298 : _GEN_298; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_605 = _GEN_434 ? _GEN_299 : _GEN_299; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_606 = _GEN_434 ? _GEN_300 : _GEN_300; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_607 = _GEN_434 ? _GEN_301 : _GEN_301; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_608 = _GEN_434 ? _GEN_302 : _GEN_302; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_609 = _GEN_434 ? _GEN_303 : _GEN_303; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_610 = _GEN_434 ? _GEN_304 : _GEN_304; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_611 = _GEN_434 ? _GEN_305 : _GEN_305; // @[d_cache.scala 141:47]
  wire [31:0] _GEN_612 = _GEN_434 ? _GEN_306 : _GEN_306; // @[d_cache.scala 141:47]
  wire  _GEN_613 = _GEN_434 ? _GEN_467 : dirty_0_0; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_614 = _GEN_434 ? _GEN_468 : dirty_0_1; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_615 = _GEN_434 ? _GEN_469 : dirty_0_2; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_616 = _GEN_434 ? _GEN_470 : dirty_0_3; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_617 = _GEN_434 ? _GEN_471 : dirty_0_4; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_618 = _GEN_434 ? _GEN_472 : dirty_0_5; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_619 = _GEN_434 ? _GEN_473 : dirty_0_6; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_620 = _GEN_434 ? _GEN_474 : dirty_0_7; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_621 = _GEN_434 ? _GEN_475 : dirty_0_8; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_622 = _GEN_434 ? _GEN_476 : dirty_0_9; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_623 = _GEN_434 ? _GEN_477 : dirty_0_10; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_624 = _GEN_434 ? _GEN_478 : dirty_0_11; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_625 = _GEN_434 ? _GEN_479 : dirty_0_12; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_626 = _GEN_434 ? _GEN_480 : dirty_0_13; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_627 = _GEN_434 ? _GEN_481 : dirty_0_14; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_628 = _GEN_434 ? _GEN_482 : dirty_0_15; // @[d_cache.scala 141:47 26:26]
  wire  _GEN_629 = _GEN_434 ? _GEN_307 : _GEN_307; // @[d_cache.scala 141:47]
  wire  _GEN_630 = _GEN_434 ? _GEN_308 : _GEN_308; // @[d_cache.scala 141:47]
  wire  _GEN_631 = _GEN_434 ? _GEN_309 : _GEN_309; // @[d_cache.scala 141:47]
  wire  _GEN_632 = _GEN_434 ? _GEN_310 : _GEN_310; // @[d_cache.scala 141:47]
  wire  _GEN_633 = _GEN_434 ? _GEN_311 : _GEN_311; // @[d_cache.scala 141:47]
  wire  _GEN_634 = _GEN_434 ? _GEN_312 : _GEN_312; // @[d_cache.scala 141:47]
  wire  _GEN_635 = _GEN_434 ? _GEN_313 : _GEN_313; // @[d_cache.scala 141:47]
  wire  _GEN_636 = _GEN_434 ? _GEN_314 : _GEN_314; // @[d_cache.scala 141:47]
  wire  _GEN_637 = _GEN_434 ? _GEN_315 : _GEN_315; // @[d_cache.scala 141:47]
  wire  _GEN_638 = _GEN_434 ? _GEN_316 : _GEN_316; // @[d_cache.scala 141:47]
  wire  _GEN_639 = _GEN_434 ? _GEN_317 : _GEN_317; // @[d_cache.scala 141:47]
  wire  _GEN_640 = _GEN_434 ? _GEN_318 : _GEN_318; // @[d_cache.scala 141:47]
  wire  _GEN_641 = _GEN_434 ? _GEN_319 : _GEN_319; // @[d_cache.scala 141:47]
  wire  _GEN_642 = _GEN_434 ? _GEN_320 : _GEN_320; // @[d_cache.scala 141:47]
  wire  _GEN_643 = _GEN_434 ? _GEN_321 : _GEN_321; // @[d_cache.scala 141:47]
  wire  _GEN_644 = _GEN_434 ? _GEN_322 : _GEN_322; // @[d_cache.scala 141:47]
  wire [3:0] _GEN_645 = _GEN_434 ? 4'h6 : 4'h1; // @[d_cache.scala 141:47 148:31 151:31]
  wire [1:0] _GEN_646 = _GEN_434 ? _GEN_339 : _GEN_339; // @[d_cache.scala 141:47]
  wire [1:0] _GEN_647 = _GEN_434 ? _GEN_340 : _GEN_340; // @[d_cache.scala 141:47]
  wire [1:0] _GEN_648 = _GEN_434 ? _GEN_341 : _GEN_341; // @[d_cache.scala 141:47]
  wire [1:0] _GEN_649 = _GEN_434 ? _GEN_342 : _GEN_342; // @[d_cache.scala 141:47]
  wire [1:0] _GEN_650 = _GEN_434 ? _GEN_343 : _GEN_343; // @[d_cache.scala 141:47]
  wire [1:0] _GEN_651 = _GEN_434 ? _GEN_344 : _GEN_344; // @[d_cache.scala 141:47]
  wire [1:0] _GEN_652 = _GEN_434 ? _GEN_345 : _GEN_345; // @[d_cache.scala 141:47]
  wire [1:0] _GEN_653 = _GEN_434 ? _GEN_346 : _GEN_346; // @[d_cache.scala 141:47]
  wire [1:0] _GEN_654 = _GEN_434 ? _GEN_347 : _GEN_347; // @[d_cache.scala 141:47]
  wire [1:0] _GEN_655 = _GEN_434 ? _GEN_348 : _GEN_348; // @[d_cache.scala 141:47]
  wire [1:0] _GEN_656 = _GEN_434 ? _GEN_349 : _GEN_349; // @[d_cache.scala 141:47]
  wire [1:0] _GEN_657 = _GEN_434 ? _GEN_350 : _GEN_350; // @[d_cache.scala 141:47]
  wire [1:0] _GEN_658 = _GEN_434 ? _GEN_351 : _GEN_351; // @[d_cache.scala 141:47]
  wire [1:0] _GEN_659 = _GEN_434 ? _GEN_352 : _GEN_352; // @[d_cache.scala 141:47]
  wire [1:0] _GEN_660 = _GEN_434 ? _GEN_353 : _GEN_353; // @[d_cache.scala 141:47]
  wire [1:0] _GEN_661 = _GEN_434 ? _GEN_354 : _GEN_354; // @[d_cache.scala 141:47]
  wire  _GEN_663 = 4'h1 == index ? dirty_1_1 : dirty_1_0; // @[d_cache.scala 158:{40,40}]
  wire  _GEN_664 = 4'h2 == index ? dirty_1_2 : _GEN_663; // @[d_cache.scala 158:{40,40}]
  wire  _GEN_665 = 4'h3 == index ? dirty_1_3 : _GEN_664; // @[d_cache.scala 158:{40,40}]
  wire  _GEN_666 = 4'h4 == index ? dirty_1_4 : _GEN_665; // @[d_cache.scala 158:{40,40}]
  wire  _GEN_667 = 4'h5 == index ? dirty_1_5 : _GEN_666; // @[d_cache.scala 158:{40,40}]
  wire  _GEN_668 = 4'h6 == index ? dirty_1_6 : _GEN_667; // @[d_cache.scala 158:{40,40}]
  wire  _GEN_669 = 4'h7 == index ? dirty_1_7 : _GEN_668; // @[d_cache.scala 158:{40,40}]
  wire  _GEN_670 = 4'h8 == index ? dirty_1_8 : _GEN_669; // @[d_cache.scala 158:{40,40}]
  wire  _GEN_671 = 4'h9 == index ? dirty_1_9 : _GEN_670; // @[d_cache.scala 158:{40,40}]
  wire  _GEN_672 = 4'ha == index ? dirty_1_10 : _GEN_671; // @[d_cache.scala 158:{40,40}]
  wire  _GEN_673 = 4'hb == index ? dirty_1_11 : _GEN_672; // @[d_cache.scala 158:{40,40}]
  wire  _GEN_674 = 4'hc == index ? dirty_1_12 : _GEN_673; // @[d_cache.scala 158:{40,40}]
  wire  _GEN_675 = 4'hd == index ? dirty_1_13 : _GEN_674; // @[d_cache.scala 158:{40,40}]
  wire  _GEN_676 = 4'he == index ? dirty_1_14 : _GEN_675; // @[d_cache.scala 158:{40,40}]
  wire  _GEN_677 = 4'hf == index ? dirty_1_15 : _GEN_676; // @[d_cache.scala 158:{40,40}]
  wire [39:0] _write_back_addr_T_3 = {_GEN_47,index,4'h0}; // @[Cat.scala 31:58]
  wire  _GEN_710 = 4'h0 == index ? 1'h0 : dirty_1_0; // @[d_cache.scala 163:{40,40} 27:26]
  wire  _GEN_711 = 4'h1 == index ? 1'h0 : dirty_1_1; // @[d_cache.scala 163:{40,40} 27:26]
  wire  _GEN_712 = 4'h2 == index ? 1'h0 : dirty_1_2; // @[d_cache.scala 163:{40,40} 27:26]
  wire  _GEN_713 = 4'h3 == index ? 1'h0 : dirty_1_3; // @[d_cache.scala 163:{40,40} 27:26]
  wire  _GEN_714 = 4'h4 == index ? 1'h0 : dirty_1_4; // @[d_cache.scala 163:{40,40} 27:26]
  wire  _GEN_715 = 4'h5 == index ? 1'h0 : dirty_1_5; // @[d_cache.scala 163:{40,40} 27:26]
  wire  _GEN_716 = 4'h6 == index ? 1'h0 : dirty_1_6; // @[d_cache.scala 163:{40,40} 27:26]
  wire  _GEN_717 = 4'h7 == index ? 1'h0 : dirty_1_7; // @[d_cache.scala 163:{40,40} 27:26]
  wire  _GEN_718 = 4'h8 == index ? 1'h0 : dirty_1_8; // @[d_cache.scala 163:{40,40} 27:26]
  wire  _GEN_719 = 4'h9 == index ? 1'h0 : dirty_1_9; // @[d_cache.scala 163:{40,40} 27:26]
  wire  _GEN_720 = 4'ha == index ? 1'h0 : dirty_1_10; // @[d_cache.scala 163:{40,40} 27:26]
  wire  _GEN_721 = 4'hb == index ? 1'h0 : dirty_1_11; // @[d_cache.scala 163:{40,40} 27:26]
  wire  _GEN_722 = 4'hc == index ? 1'h0 : dirty_1_12; // @[d_cache.scala 163:{40,40} 27:26]
  wire  _GEN_723 = 4'hd == index ? 1'h0 : dirty_1_13; // @[d_cache.scala 163:{40,40} 27:26]
  wire  _GEN_724 = 4'he == index ? 1'h0 : dirty_1_14; // @[d_cache.scala 163:{40,40} 27:26]
  wire  _GEN_725 = 4'hf == index ? 1'h0 : dirty_1_15; // @[d_cache.scala 163:{40,40} 27:26]
  wire [127:0] _GEN_822 = _GEN_677 ? _GEN_136 : write_back_data; // @[d_cache.scala 158:47 159:41 31:34]
  wire [39:0] _GEN_823 = _GEN_677 ? _write_back_addr_T_3 : {{8'd0}, write_back_addr}; // @[d_cache.scala 158:47 160:41 32:34]
  wire [127:0] _GEN_824 = _GEN_677 ? _GEN_355 : _GEN_355; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_825 = _GEN_677 ? _GEN_356 : _GEN_356; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_826 = _GEN_677 ? _GEN_357 : _GEN_357; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_827 = _GEN_677 ? _GEN_358 : _GEN_358; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_828 = _GEN_677 ? _GEN_359 : _GEN_359; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_829 = _GEN_677 ? _GEN_360 : _GEN_360; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_830 = _GEN_677 ? _GEN_361 : _GEN_361; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_831 = _GEN_677 ? _GEN_362 : _GEN_362; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_832 = _GEN_677 ? _GEN_363 : _GEN_363; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_833 = _GEN_677 ? _GEN_364 : _GEN_364; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_834 = _GEN_677 ? _GEN_365 : _GEN_365; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_835 = _GEN_677 ? _GEN_366 : _GEN_366; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_836 = _GEN_677 ? _GEN_367 : _GEN_367; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_837 = _GEN_677 ? _GEN_368 : _GEN_368; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_838 = _GEN_677 ? _GEN_369 : _GEN_369; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_839 = _GEN_677 ? _GEN_370 : _GEN_370; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_840 = _GEN_677 ? _GEN_371 : _GEN_371; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_841 = _GEN_677 ? _GEN_372 : _GEN_372; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_842 = _GEN_677 ? _GEN_373 : _GEN_373; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_843 = _GEN_677 ? _GEN_374 : _GEN_374; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_844 = _GEN_677 ? _GEN_375 : _GEN_375; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_845 = _GEN_677 ? _GEN_376 : _GEN_376; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_846 = _GEN_677 ? _GEN_377 : _GEN_377; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_847 = _GEN_677 ? _GEN_378 : _GEN_378; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_848 = _GEN_677 ? _GEN_379 : _GEN_379; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_849 = _GEN_677 ? _GEN_380 : _GEN_380; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_850 = _GEN_677 ? _GEN_381 : _GEN_381; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_851 = _GEN_677 ? _GEN_382 : _GEN_382; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_852 = _GEN_677 ? _GEN_383 : _GEN_383; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_853 = _GEN_677 ? _GEN_384 : _GEN_384; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_854 = _GEN_677 ? _GEN_385 : _GEN_385; // @[d_cache.scala 158:47]
  wire [31:0] _GEN_855 = _GEN_677 ? _GEN_386 : _GEN_386; // @[d_cache.scala 158:47]
  wire  _GEN_856 = _GEN_677 ? _GEN_710 : dirty_1_0; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_857 = _GEN_677 ? _GEN_711 : dirty_1_1; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_858 = _GEN_677 ? _GEN_712 : dirty_1_2; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_859 = _GEN_677 ? _GEN_713 : dirty_1_3; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_860 = _GEN_677 ? _GEN_714 : dirty_1_4; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_861 = _GEN_677 ? _GEN_715 : dirty_1_5; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_862 = _GEN_677 ? _GEN_716 : dirty_1_6; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_863 = _GEN_677 ? _GEN_717 : dirty_1_7; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_864 = _GEN_677 ? _GEN_718 : dirty_1_8; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_865 = _GEN_677 ? _GEN_719 : dirty_1_9; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_866 = _GEN_677 ? _GEN_720 : dirty_1_10; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_867 = _GEN_677 ? _GEN_721 : dirty_1_11; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_868 = _GEN_677 ? _GEN_722 : dirty_1_12; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_869 = _GEN_677 ? _GEN_723 : dirty_1_13; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_870 = _GEN_677 ? _GEN_724 : dirty_1_14; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_871 = _GEN_677 ? _GEN_725 : dirty_1_15; // @[d_cache.scala 158:47 27:26]
  wire  _GEN_872 = _GEN_677 ? _GEN_387 : _GEN_387; // @[d_cache.scala 158:47]
  wire  _GEN_873 = _GEN_677 ? _GEN_388 : _GEN_388; // @[d_cache.scala 158:47]
  wire  _GEN_874 = _GEN_677 ? _GEN_389 : _GEN_389; // @[d_cache.scala 158:47]
  wire  _GEN_875 = _GEN_677 ? _GEN_390 : _GEN_390; // @[d_cache.scala 158:47]
  wire  _GEN_876 = _GEN_677 ? _GEN_391 : _GEN_391; // @[d_cache.scala 158:47]
  wire  _GEN_877 = _GEN_677 ? _GEN_392 : _GEN_392; // @[d_cache.scala 158:47]
  wire  _GEN_878 = _GEN_677 ? _GEN_393 : _GEN_393; // @[d_cache.scala 158:47]
  wire  _GEN_879 = _GEN_677 ? _GEN_394 : _GEN_394; // @[d_cache.scala 158:47]
  wire  _GEN_880 = _GEN_677 ? _GEN_395 : _GEN_395; // @[d_cache.scala 158:47]
  wire  _GEN_881 = _GEN_677 ? _GEN_396 : _GEN_396; // @[d_cache.scala 158:47]
  wire  _GEN_882 = _GEN_677 ? _GEN_397 : _GEN_397; // @[d_cache.scala 158:47]
  wire  _GEN_883 = _GEN_677 ? _GEN_398 : _GEN_398; // @[d_cache.scala 158:47]
  wire  _GEN_884 = _GEN_677 ? _GEN_399 : _GEN_399; // @[d_cache.scala 158:47]
  wire  _GEN_885 = _GEN_677 ? _GEN_400 : _GEN_400; // @[d_cache.scala 158:47]
  wire  _GEN_886 = _GEN_677 ? _GEN_401 : _GEN_401; // @[d_cache.scala 158:47]
  wire  _GEN_887 = _GEN_677 ? _GEN_402 : _GEN_402; // @[d_cache.scala 158:47]
  wire [3:0] _GEN_888 = _GEN_677 ? 4'h6 : 4'h1; // @[d_cache.scala 158:47 165:31 168:31]
  wire [1:0] _GEN_889 = _GEN_677 ? _GEN_403 : _GEN_403; // @[d_cache.scala 158:47]
  wire [1:0] _GEN_890 = _GEN_677 ? _GEN_404 : _GEN_404; // @[d_cache.scala 158:47]
  wire [1:0] _GEN_891 = _GEN_677 ? _GEN_405 : _GEN_405; // @[d_cache.scala 158:47]
  wire [1:0] _GEN_892 = _GEN_677 ? _GEN_406 : _GEN_406; // @[d_cache.scala 158:47]
  wire [1:0] _GEN_893 = _GEN_677 ? _GEN_407 : _GEN_407; // @[d_cache.scala 158:47]
  wire [1:0] _GEN_894 = _GEN_677 ? _GEN_408 : _GEN_408; // @[d_cache.scala 158:47]
  wire [1:0] _GEN_895 = _GEN_677 ? _GEN_409 : _GEN_409; // @[d_cache.scala 158:47]
  wire [1:0] _GEN_896 = _GEN_677 ? _GEN_410 : _GEN_410; // @[d_cache.scala 158:47]
  wire [1:0] _GEN_897 = _GEN_677 ? _GEN_411 : _GEN_411; // @[d_cache.scala 158:47]
  wire [1:0] _GEN_898 = _GEN_677 ? _GEN_412 : _GEN_412; // @[d_cache.scala 158:47]
  wire [1:0] _GEN_899 = _GEN_677 ? _GEN_413 : _GEN_413; // @[d_cache.scala 158:47]
  wire [1:0] _GEN_900 = _GEN_677 ? _GEN_414 : _GEN_414; // @[d_cache.scala 158:47]
  wire [1:0] _GEN_901 = _GEN_677 ? _GEN_415 : _GEN_415; // @[d_cache.scala 158:47]
  wire [1:0] _GEN_902 = _GEN_677 ? _GEN_416 : _GEN_416; // @[d_cache.scala 158:47]
  wire [1:0] _GEN_903 = _GEN_677 ? _GEN_417 : _GEN_417; // @[d_cache.scala 158:47]
  wire [1:0] _GEN_904 = _GEN_677 ? _GEN_418 : _GEN_418; // @[d_cache.scala 158:47]
  wire [127:0] _GEN_905 = ~_GEN_338[1] ? _GEN_579 : _GEN_822; // @[d_cache.scala 139:44]
  wire [39:0] _GEN_906 = ~_GEN_338[1] ? _GEN_580 : _GEN_823; // @[d_cache.scala 139:44]
  wire [127:0] _GEN_907 = ~_GEN_338[1] ? _GEN_581 : ram_0_0; // @[d_cache.scala 139:44 19:24]
  wire [127:0] _GEN_908 = ~_GEN_338[1] ? _GEN_582 : ram_0_1; // @[d_cache.scala 139:44 19:24]
  wire [127:0] _GEN_909 = ~_GEN_338[1] ? _GEN_583 : ram_0_2; // @[d_cache.scala 139:44 19:24]
  wire [127:0] _GEN_910 = ~_GEN_338[1] ? _GEN_584 : ram_0_3; // @[d_cache.scala 139:44 19:24]
  wire [127:0] _GEN_911 = ~_GEN_338[1] ? _GEN_585 : ram_0_4; // @[d_cache.scala 139:44 19:24]
  wire [127:0] _GEN_912 = ~_GEN_338[1] ? _GEN_586 : ram_0_5; // @[d_cache.scala 139:44 19:24]
  wire [127:0] _GEN_913 = ~_GEN_338[1] ? _GEN_587 : ram_0_6; // @[d_cache.scala 139:44 19:24]
  wire [127:0] _GEN_914 = ~_GEN_338[1] ? _GEN_588 : ram_0_7; // @[d_cache.scala 139:44 19:24]
  wire [127:0] _GEN_915 = ~_GEN_338[1] ? _GEN_589 : ram_0_8; // @[d_cache.scala 139:44 19:24]
  wire [127:0] _GEN_916 = ~_GEN_338[1] ? _GEN_590 : ram_0_9; // @[d_cache.scala 139:44 19:24]
  wire [127:0] _GEN_917 = ~_GEN_338[1] ? _GEN_591 : ram_0_10; // @[d_cache.scala 139:44 19:24]
  wire [127:0] _GEN_918 = ~_GEN_338[1] ? _GEN_592 : ram_0_11; // @[d_cache.scala 139:44 19:24]
  wire [127:0] _GEN_919 = ~_GEN_338[1] ? _GEN_593 : ram_0_12; // @[d_cache.scala 139:44 19:24]
  wire [127:0] _GEN_920 = ~_GEN_338[1] ? _GEN_594 : ram_0_13; // @[d_cache.scala 139:44 19:24]
  wire [127:0] _GEN_921 = ~_GEN_338[1] ? _GEN_595 : ram_0_14; // @[d_cache.scala 139:44 19:24]
  wire [127:0] _GEN_922 = ~_GEN_338[1] ? _GEN_596 : ram_0_15; // @[d_cache.scala 139:44 19:24]
  wire [31:0] _GEN_923 = ~_GEN_338[1] ? _GEN_597 : tag_0_0; // @[d_cache.scala 139:44 22:24]
  wire [31:0] _GEN_924 = ~_GEN_338[1] ? _GEN_598 : tag_0_1; // @[d_cache.scala 139:44 22:24]
  wire [31:0] _GEN_925 = ~_GEN_338[1] ? _GEN_599 : tag_0_2; // @[d_cache.scala 139:44 22:24]
  wire [31:0] _GEN_926 = ~_GEN_338[1] ? _GEN_600 : tag_0_3; // @[d_cache.scala 139:44 22:24]
  wire [31:0] _GEN_927 = ~_GEN_338[1] ? _GEN_601 : tag_0_4; // @[d_cache.scala 139:44 22:24]
  wire [31:0] _GEN_928 = ~_GEN_338[1] ? _GEN_602 : tag_0_5; // @[d_cache.scala 139:44 22:24]
  wire [31:0] _GEN_929 = ~_GEN_338[1] ? _GEN_603 : tag_0_6; // @[d_cache.scala 139:44 22:24]
  wire [31:0] _GEN_930 = ~_GEN_338[1] ? _GEN_604 : tag_0_7; // @[d_cache.scala 139:44 22:24]
  wire [31:0] _GEN_931 = ~_GEN_338[1] ? _GEN_605 : tag_0_8; // @[d_cache.scala 139:44 22:24]
  wire [31:0] _GEN_932 = ~_GEN_338[1] ? _GEN_606 : tag_0_9; // @[d_cache.scala 139:44 22:24]
  wire [31:0] _GEN_933 = ~_GEN_338[1] ? _GEN_607 : tag_0_10; // @[d_cache.scala 139:44 22:24]
  wire [31:0] _GEN_934 = ~_GEN_338[1] ? _GEN_608 : tag_0_11; // @[d_cache.scala 139:44 22:24]
  wire [31:0] _GEN_935 = ~_GEN_338[1] ? _GEN_609 : tag_0_12; // @[d_cache.scala 139:44 22:24]
  wire [31:0] _GEN_936 = ~_GEN_338[1] ? _GEN_610 : tag_0_13; // @[d_cache.scala 139:44 22:24]
  wire [31:0] _GEN_937 = ~_GEN_338[1] ? _GEN_611 : tag_0_14; // @[d_cache.scala 139:44 22:24]
  wire [31:0] _GEN_938 = ~_GEN_338[1] ? _GEN_612 : tag_0_15; // @[d_cache.scala 139:44 22:24]
  wire  _GEN_939 = ~_GEN_338[1] ? _GEN_613 : dirty_0_0; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_940 = ~_GEN_338[1] ? _GEN_614 : dirty_0_1; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_941 = ~_GEN_338[1] ? _GEN_615 : dirty_0_2; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_942 = ~_GEN_338[1] ? _GEN_616 : dirty_0_3; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_943 = ~_GEN_338[1] ? _GEN_617 : dirty_0_4; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_944 = ~_GEN_338[1] ? _GEN_618 : dirty_0_5; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_945 = ~_GEN_338[1] ? _GEN_619 : dirty_0_6; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_946 = ~_GEN_338[1] ? _GEN_620 : dirty_0_7; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_947 = ~_GEN_338[1] ? _GEN_621 : dirty_0_8; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_948 = ~_GEN_338[1] ? _GEN_622 : dirty_0_9; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_949 = ~_GEN_338[1] ? _GEN_623 : dirty_0_10; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_950 = ~_GEN_338[1] ? _GEN_624 : dirty_0_11; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_951 = ~_GEN_338[1] ? _GEN_625 : dirty_0_12; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_952 = ~_GEN_338[1] ? _GEN_626 : dirty_0_13; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_953 = ~_GEN_338[1] ? _GEN_627 : dirty_0_14; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_954 = ~_GEN_338[1] ? _GEN_628 : dirty_0_15; // @[d_cache.scala 139:44 26:26]
  wire  _GEN_955 = ~_GEN_338[1] ? _GEN_629 : valid_0_0; // @[d_cache.scala 139:44 24:26]
  wire  _GEN_956 = ~_GEN_338[1] ? _GEN_630 : valid_0_1; // @[d_cache.scala 139:44 24:26]
  wire  _GEN_957 = ~_GEN_338[1] ? _GEN_631 : valid_0_2; // @[d_cache.scala 139:44 24:26]
  wire  _GEN_958 = ~_GEN_338[1] ? _GEN_632 : valid_0_3; // @[d_cache.scala 139:44 24:26]
  wire  _GEN_959 = ~_GEN_338[1] ? _GEN_633 : valid_0_4; // @[d_cache.scala 139:44 24:26]
  wire  _GEN_960 = ~_GEN_338[1] ? _GEN_634 : valid_0_5; // @[d_cache.scala 139:44 24:26]
  wire  _GEN_961 = ~_GEN_338[1] ? _GEN_635 : valid_0_6; // @[d_cache.scala 139:44 24:26]
  wire  _GEN_962 = ~_GEN_338[1] ? _GEN_636 : valid_0_7; // @[d_cache.scala 139:44 24:26]
  wire  _GEN_963 = ~_GEN_338[1] ? _GEN_637 : valid_0_8; // @[d_cache.scala 139:44 24:26]
  wire  _GEN_964 = ~_GEN_338[1] ? _GEN_638 : valid_0_9; // @[d_cache.scala 139:44 24:26]
  wire  _GEN_965 = ~_GEN_338[1] ? _GEN_639 : valid_0_10; // @[d_cache.scala 139:44 24:26]
  wire  _GEN_966 = ~_GEN_338[1] ? _GEN_640 : valid_0_11; // @[d_cache.scala 139:44 24:26]
  wire  _GEN_967 = ~_GEN_338[1] ? _GEN_641 : valid_0_12; // @[d_cache.scala 139:44 24:26]
  wire  _GEN_968 = ~_GEN_338[1] ? _GEN_642 : valid_0_13; // @[d_cache.scala 139:44 24:26]
  wire  _GEN_969 = ~_GEN_338[1] ? _GEN_643 : valid_0_14; // @[d_cache.scala 139:44 24:26]
  wire  _GEN_970 = ~_GEN_338[1] ? _GEN_644 : valid_0_15; // @[d_cache.scala 139:44 24:26]
  wire [3:0] _GEN_971 = ~_GEN_338[1] ? _GEN_645 : _GEN_888; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_972 = ~_GEN_338[1] ? _GEN_646 : _GEN_889; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_973 = ~_GEN_338[1] ? _GEN_647 : _GEN_890; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_974 = ~_GEN_338[1] ? _GEN_648 : _GEN_891; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_975 = ~_GEN_338[1] ? _GEN_649 : _GEN_892; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_976 = ~_GEN_338[1] ? _GEN_650 : _GEN_893; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_977 = ~_GEN_338[1] ? _GEN_651 : _GEN_894; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_978 = ~_GEN_338[1] ? _GEN_652 : _GEN_895; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_979 = ~_GEN_338[1] ? _GEN_653 : _GEN_896; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_980 = ~_GEN_338[1] ? _GEN_654 : _GEN_897; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_981 = ~_GEN_338[1] ? _GEN_655 : _GEN_898; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_982 = ~_GEN_338[1] ? _GEN_656 : _GEN_899; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_983 = ~_GEN_338[1] ? _GEN_657 : _GEN_900; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_984 = ~_GEN_338[1] ? _GEN_658 : _GEN_901; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_985 = ~_GEN_338[1] ? _GEN_659 : _GEN_902; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_986 = ~_GEN_338[1] ? _GEN_660 : _GEN_903; // @[d_cache.scala 139:44]
  wire [1:0] _GEN_987 = ~_GEN_338[1] ? _GEN_661 : _GEN_904; // @[d_cache.scala 139:44]
  wire [127:0] _GEN_988 = ~_GEN_338[1] ? ram_1_0 : _GEN_824; // @[d_cache.scala 139:44 20:24]
  wire [127:0] _GEN_989 = ~_GEN_338[1] ? ram_1_1 : _GEN_825; // @[d_cache.scala 139:44 20:24]
  wire [127:0] _GEN_990 = ~_GEN_338[1] ? ram_1_2 : _GEN_826; // @[d_cache.scala 139:44 20:24]
  wire [127:0] _GEN_991 = ~_GEN_338[1] ? ram_1_3 : _GEN_827; // @[d_cache.scala 139:44 20:24]
  wire [127:0] _GEN_992 = ~_GEN_338[1] ? ram_1_4 : _GEN_828; // @[d_cache.scala 139:44 20:24]
  wire [127:0] _GEN_993 = ~_GEN_338[1] ? ram_1_5 : _GEN_829; // @[d_cache.scala 139:44 20:24]
  wire [127:0] _GEN_994 = ~_GEN_338[1] ? ram_1_6 : _GEN_830; // @[d_cache.scala 139:44 20:24]
  wire [127:0] _GEN_995 = ~_GEN_338[1] ? ram_1_7 : _GEN_831; // @[d_cache.scala 139:44 20:24]
  wire [127:0] _GEN_996 = ~_GEN_338[1] ? ram_1_8 : _GEN_832; // @[d_cache.scala 139:44 20:24]
  wire [127:0] _GEN_997 = ~_GEN_338[1] ? ram_1_9 : _GEN_833; // @[d_cache.scala 139:44 20:24]
  wire [127:0] _GEN_998 = ~_GEN_338[1] ? ram_1_10 : _GEN_834; // @[d_cache.scala 139:44 20:24]
  wire [127:0] _GEN_999 = ~_GEN_338[1] ? ram_1_11 : _GEN_835; // @[d_cache.scala 139:44 20:24]
  wire [127:0] _GEN_1000 = ~_GEN_338[1] ? ram_1_12 : _GEN_836; // @[d_cache.scala 139:44 20:24]
  wire [127:0] _GEN_1001 = ~_GEN_338[1] ? ram_1_13 : _GEN_837; // @[d_cache.scala 139:44 20:24]
  wire [127:0] _GEN_1002 = ~_GEN_338[1] ? ram_1_14 : _GEN_838; // @[d_cache.scala 139:44 20:24]
  wire [127:0] _GEN_1003 = ~_GEN_338[1] ? ram_1_15 : _GEN_839; // @[d_cache.scala 139:44 20:24]
  wire [31:0] _GEN_1004 = ~_GEN_338[1] ? tag_1_0 : _GEN_840; // @[d_cache.scala 139:44 23:24]
  wire [31:0] _GEN_1005 = ~_GEN_338[1] ? tag_1_1 : _GEN_841; // @[d_cache.scala 139:44 23:24]
  wire [31:0] _GEN_1006 = ~_GEN_338[1] ? tag_1_2 : _GEN_842; // @[d_cache.scala 139:44 23:24]
  wire [31:0] _GEN_1007 = ~_GEN_338[1] ? tag_1_3 : _GEN_843; // @[d_cache.scala 139:44 23:24]
  wire [31:0] _GEN_1008 = ~_GEN_338[1] ? tag_1_4 : _GEN_844; // @[d_cache.scala 139:44 23:24]
  wire [31:0] _GEN_1009 = ~_GEN_338[1] ? tag_1_5 : _GEN_845; // @[d_cache.scala 139:44 23:24]
  wire [31:0] _GEN_1010 = ~_GEN_338[1] ? tag_1_6 : _GEN_846; // @[d_cache.scala 139:44 23:24]
  wire [31:0] _GEN_1011 = ~_GEN_338[1] ? tag_1_7 : _GEN_847; // @[d_cache.scala 139:44 23:24]
  wire [31:0] _GEN_1012 = ~_GEN_338[1] ? tag_1_8 : _GEN_848; // @[d_cache.scala 139:44 23:24]
  wire [31:0] _GEN_1013 = ~_GEN_338[1] ? tag_1_9 : _GEN_849; // @[d_cache.scala 139:44 23:24]
  wire [31:0] _GEN_1014 = ~_GEN_338[1] ? tag_1_10 : _GEN_850; // @[d_cache.scala 139:44 23:24]
  wire [31:0] _GEN_1015 = ~_GEN_338[1] ? tag_1_11 : _GEN_851; // @[d_cache.scala 139:44 23:24]
  wire [31:0] _GEN_1016 = ~_GEN_338[1] ? tag_1_12 : _GEN_852; // @[d_cache.scala 139:44 23:24]
  wire [31:0] _GEN_1017 = ~_GEN_338[1] ? tag_1_13 : _GEN_853; // @[d_cache.scala 139:44 23:24]
  wire [31:0] _GEN_1018 = ~_GEN_338[1] ? tag_1_14 : _GEN_854; // @[d_cache.scala 139:44 23:24]
  wire [31:0] _GEN_1019 = ~_GEN_338[1] ? tag_1_15 : _GEN_855; // @[d_cache.scala 139:44 23:24]
  wire  _GEN_1020 = ~_GEN_338[1] ? dirty_1_0 : _GEN_856; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1021 = ~_GEN_338[1] ? dirty_1_1 : _GEN_857; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1022 = ~_GEN_338[1] ? dirty_1_2 : _GEN_858; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1023 = ~_GEN_338[1] ? dirty_1_3 : _GEN_859; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1024 = ~_GEN_338[1] ? dirty_1_4 : _GEN_860; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1025 = ~_GEN_338[1] ? dirty_1_5 : _GEN_861; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1026 = ~_GEN_338[1] ? dirty_1_6 : _GEN_862; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1027 = ~_GEN_338[1] ? dirty_1_7 : _GEN_863; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1028 = ~_GEN_338[1] ? dirty_1_8 : _GEN_864; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1029 = ~_GEN_338[1] ? dirty_1_9 : _GEN_865; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1030 = ~_GEN_338[1] ? dirty_1_10 : _GEN_866; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1031 = ~_GEN_338[1] ? dirty_1_11 : _GEN_867; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1032 = ~_GEN_338[1] ? dirty_1_12 : _GEN_868; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1033 = ~_GEN_338[1] ? dirty_1_13 : _GEN_869; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1034 = ~_GEN_338[1] ? dirty_1_14 : _GEN_870; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1035 = ~_GEN_338[1] ? dirty_1_15 : _GEN_871; // @[d_cache.scala 139:44 27:26]
  wire  _GEN_1036 = ~_GEN_338[1] ? valid_1_0 : _GEN_872; // @[d_cache.scala 139:44 25:26]
  wire  _GEN_1037 = ~_GEN_338[1] ? valid_1_1 : _GEN_873; // @[d_cache.scala 139:44 25:26]
  wire  _GEN_1038 = ~_GEN_338[1] ? valid_1_2 : _GEN_874; // @[d_cache.scala 139:44 25:26]
  wire  _GEN_1039 = ~_GEN_338[1] ? valid_1_3 : _GEN_875; // @[d_cache.scala 139:44 25:26]
  wire  _GEN_1040 = ~_GEN_338[1] ? valid_1_4 : _GEN_876; // @[d_cache.scala 139:44 25:26]
  wire  _GEN_1041 = ~_GEN_338[1] ? valid_1_5 : _GEN_877; // @[d_cache.scala 139:44 25:26]
  wire  _GEN_1042 = ~_GEN_338[1] ? valid_1_6 : _GEN_878; // @[d_cache.scala 139:44 25:26]
  wire  _GEN_1043 = ~_GEN_338[1] ? valid_1_7 : _GEN_879; // @[d_cache.scala 139:44 25:26]
  wire  _GEN_1044 = ~_GEN_338[1] ? valid_1_8 : _GEN_880; // @[d_cache.scala 139:44 25:26]
  wire  _GEN_1045 = ~_GEN_338[1] ? valid_1_9 : _GEN_881; // @[d_cache.scala 139:44 25:26]
  wire  _GEN_1046 = ~_GEN_338[1] ? valid_1_10 : _GEN_882; // @[d_cache.scala 139:44 25:26]
  wire  _GEN_1047 = ~_GEN_338[1] ? valid_1_11 : _GEN_883; // @[d_cache.scala 139:44 25:26]
  wire  _GEN_1048 = ~_GEN_338[1] ? valid_1_12 : _GEN_884; // @[d_cache.scala 139:44 25:26]
  wire  _GEN_1049 = ~_GEN_338[1] ? valid_1_13 : _GEN_885; // @[d_cache.scala 139:44 25:26]
  wire  _GEN_1050 = ~_GEN_338[1] ? valid_1_14 : _GEN_886; // @[d_cache.scala 139:44 25:26]
  wire  _GEN_1051 = ~_GEN_338[1] ? valid_1_15 : _GEN_887; // @[d_cache.scala 139:44 25:26]
  wire [3:0] _GEN_1052 = unuse_way == 2'h2 ? 4'h1 : _GEN_971; // @[d_cache.scala 132:40 133:23]
  wire [127:0] _GEN_1053 = unuse_way == 2'h2 ? _GEN_355 : _GEN_988; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1054 = unuse_way == 2'h2 ? _GEN_356 : _GEN_989; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1055 = unuse_way == 2'h2 ? _GEN_357 : _GEN_990; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1056 = unuse_way == 2'h2 ? _GEN_358 : _GEN_991; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1057 = unuse_way == 2'h2 ? _GEN_359 : _GEN_992; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1058 = unuse_way == 2'h2 ? _GEN_360 : _GEN_993; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1059 = unuse_way == 2'h2 ? _GEN_361 : _GEN_994; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1060 = unuse_way == 2'h2 ? _GEN_362 : _GEN_995; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1061 = unuse_way == 2'h2 ? _GEN_363 : _GEN_996; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1062 = unuse_way == 2'h2 ? _GEN_364 : _GEN_997; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1063 = unuse_way == 2'h2 ? _GEN_365 : _GEN_998; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1064 = unuse_way == 2'h2 ? _GEN_366 : _GEN_999; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1065 = unuse_way == 2'h2 ? _GEN_367 : _GEN_1000; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1066 = unuse_way == 2'h2 ? _GEN_368 : _GEN_1001; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1067 = unuse_way == 2'h2 ? _GEN_369 : _GEN_1002; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1068 = unuse_way == 2'h2 ? _GEN_370 : _GEN_1003; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1069 = unuse_way == 2'h2 ? _GEN_371 : _GEN_1004; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1070 = unuse_way == 2'h2 ? _GEN_372 : _GEN_1005; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1071 = unuse_way == 2'h2 ? _GEN_373 : _GEN_1006; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1072 = unuse_way == 2'h2 ? _GEN_374 : _GEN_1007; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1073 = unuse_way == 2'h2 ? _GEN_375 : _GEN_1008; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1074 = unuse_way == 2'h2 ? _GEN_376 : _GEN_1009; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1075 = unuse_way == 2'h2 ? _GEN_377 : _GEN_1010; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1076 = unuse_way == 2'h2 ? _GEN_378 : _GEN_1011; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1077 = unuse_way == 2'h2 ? _GEN_379 : _GEN_1012; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1078 = unuse_way == 2'h2 ? _GEN_380 : _GEN_1013; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1079 = unuse_way == 2'h2 ? _GEN_381 : _GEN_1014; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1080 = unuse_way == 2'h2 ? _GEN_382 : _GEN_1015; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1081 = unuse_way == 2'h2 ? _GEN_383 : _GEN_1016; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1082 = unuse_way == 2'h2 ? _GEN_384 : _GEN_1017; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1083 = unuse_way == 2'h2 ? _GEN_385 : _GEN_1018; // @[d_cache.scala 132:40]
  wire [31:0] _GEN_1084 = unuse_way == 2'h2 ? _GEN_386 : _GEN_1019; // @[d_cache.scala 132:40]
  wire  _GEN_1085 = unuse_way == 2'h2 ? _GEN_387 : _GEN_1036; // @[d_cache.scala 132:40]
  wire  _GEN_1086 = unuse_way == 2'h2 ? _GEN_388 : _GEN_1037; // @[d_cache.scala 132:40]
  wire  _GEN_1087 = unuse_way == 2'h2 ? _GEN_389 : _GEN_1038; // @[d_cache.scala 132:40]
  wire  _GEN_1088 = unuse_way == 2'h2 ? _GEN_390 : _GEN_1039; // @[d_cache.scala 132:40]
  wire  _GEN_1089 = unuse_way == 2'h2 ? _GEN_391 : _GEN_1040; // @[d_cache.scala 132:40]
  wire  _GEN_1090 = unuse_way == 2'h2 ? _GEN_392 : _GEN_1041; // @[d_cache.scala 132:40]
  wire  _GEN_1091 = unuse_way == 2'h2 ? _GEN_393 : _GEN_1042; // @[d_cache.scala 132:40]
  wire  _GEN_1092 = unuse_way == 2'h2 ? _GEN_394 : _GEN_1043; // @[d_cache.scala 132:40]
  wire  _GEN_1093 = unuse_way == 2'h2 ? _GEN_395 : _GEN_1044; // @[d_cache.scala 132:40]
  wire  _GEN_1094 = unuse_way == 2'h2 ? _GEN_396 : _GEN_1045; // @[d_cache.scala 132:40]
  wire  _GEN_1095 = unuse_way == 2'h2 ? _GEN_397 : _GEN_1046; // @[d_cache.scala 132:40]
  wire  _GEN_1096 = unuse_way == 2'h2 ? _GEN_398 : _GEN_1047; // @[d_cache.scala 132:40]
  wire  _GEN_1097 = unuse_way == 2'h2 ? _GEN_399 : _GEN_1048; // @[d_cache.scala 132:40]
  wire  _GEN_1098 = unuse_way == 2'h2 ? _GEN_400 : _GEN_1049; // @[d_cache.scala 132:40]
  wire  _GEN_1099 = unuse_way == 2'h2 ? _GEN_401 : _GEN_1050; // @[d_cache.scala 132:40]
  wire  _GEN_1100 = unuse_way == 2'h2 ? _GEN_402 : _GEN_1051; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1101 = unuse_way == 2'h2 ? _GEN_403 : _GEN_972; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1102 = unuse_way == 2'h2 ? _GEN_404 : _GEN_973; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1103 = unuse_way == 2'h2 ? _GEN_405 : _GEN_974; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1104 = unuse_way == 2'h2 ? _GEN_406 : _GEN_975; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1105 = unuse_way == 2'h2 ? _GEN_407 : _GEN_976; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1106 = unuse_way == 2'h2 ? _GEN_408 : _GEN_977; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1107 = unuse_way == 2'h2 ? _GEN_409 : _GEN_978; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1108 = unuse_way == 2'h2 ? _GEN_410 : _GEN_979; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1109 = unuse_way == 2'h2 ? _GEN_411 : _GEN_980; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1110 = unuse_way == 2'h2 ? _GEN_412 : _GEN_981; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1111 = unuse_way == 2'h2 ? _GEN_413 : _GEN_982; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1112 = unuse_way == 2'h2 ? _GEN_414 : _GEN_983; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1113 = unuse_way == 2'h2 ? _GEN_415 : _GEN_984; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1114 = unuse_way == 2'h2 ? _GEN_416 : _GEN_985; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1115 = unuse_way == 2'h2 ? _GEN_417 : _GEN_986; // @[d_cache.scala 132:40]
  wire [1:0] _GEN_1116 = unuse_way == 2'h2 ? _GEN_418 : _GEN_987; // @[d_cache.scala 132:40]
  wire [127:0] _GEN_1117 = unuse_way == 2'h2 ? write_back_data : _GEN_905; // @[d_cache.scala 132:40 31:34]
  wire [39:0] _GEN_1118 = unuse_way == 2'h2 ? {{8'd0}, write_back_addr} : _GEN_906; // @[d_cache.scala 132:40 32:34]
  wire [127:0] _GEN_1119 = unuse_way == 2'h2 ? ram_0_0 : _GEN_907; // @[d_cache.scala 132:40 19:24]
  wire [127:0] _GEN_1120 = unuse_way == 2'h2 ? ram_0_1 : _GEN_908; // @[d_cache.scala 132:40 19:24]
  wire [127:0] _GEN_1121 = unuse_way == 2'h2 ? ram_0_2 : _GEN_909; // @[d_cache.scala 132:40 19:24]
  wire [127:0] _GEN_1122 = unuse_way == 2'h2 ? ram_0_3 : _GEN_910; // @[d_cache.scala 132:40 19:24]
  wire [127:0] _GEN_1123 = unuse_way == 2'h2 ? ram_0_4 : _GEN_911; // @[d_cache.scala 132:40 19:24]
  wire [127:0] _GEN_1124 = unuse_way == 2'h2 ? ram_0_5 : _GEN_912; // @[d_cache.scala 132:40 19:24]
  wire [127:0] _GEN_1125 = unuse_way == 2'h2 ? ram_0_6 : _GEN_913; // @[d_cache.scala 132:40 19:24]
  wire [127:0] _GEN_1126 = unuse_way == 2'h2 ? ram_0_7 : _GEN_914; // @[d_cache.scala 132:40 19:24]
  wire [127:0] _GEN_1127 = unuse_way == 2'h2 ? ram_0_8 : _GEN_915; // @[d_cache.scala 132:40 19:24]
  wire [127:0] _GEN_1128 = unuse_way == 2'h2 ? ram_0_9 : _GEN_916; // @[d_cache.scala 132:40 19:24]
  wire [127:0] _GEN_1129 = unuse_way == 2'h2 ? ram_0_10 : _GEN_917; // @[d_cache.scala 132:40 19:24]
  wire [127:0] _GEN_1130 = unuse_way == 2'h2 ? ram_0_11 : _GEN_918; // @[d_cache.scala 132:40 19:24]
  wire [127:0] _GEN_1131 = unuse_way == 2'h2 ? ram_0_12 : _GEN_919; // @[d_cache.scala 132:40 19:24]
  wire [127:0] _GEN_1132 = unuse_way == 2'h2 ? ram_0_13 : _GEN_920; // @[d_cache.scala 132:40 19:24]
  wire [127:0] _GEN_1133 = unuse_way == 2'h2 ? ram_0_14 : _GEN_921; // @[d_cache.scala 132:40 19:24]
  wire [127:0] _GEN_1134 = unuse_way == 2'h2 ? ram_0_15 : _GEN_922; // @[d_cache.scala 132:40 19:24]
  wire [31:0] _GEN_1135 = unuse_way == 2'h2 ? tag_0_0 : _GEN_923; // @[d_cache.scala 132:40 22:24]
  wire [31:0] _GEN_1136 = unuse_way == 2'h2 ? tag_0_1 : _GEN_924; // @[d_cache.scala 132:40 22:24]
  wire [31:0] _GEN_1137 = unuse_way == 2'h2 ? tag_0_2 : _GEN_925; // @[d_cache.scala 132:40 22:24]
  wire [31:0] _GEN_1138 = unuse_way == 2'h2 ? tag_0_3 : _GEN_926; // @[d_cache.scala 132:40 22:24]
  wire [31:0] _GEN_1139 = unuse_way == 2'h2 ? tag_0_4 : _GEN_927; // @[d_cache.scala 132:40 22:24]
  wire [31:0] _GEN_1140 = unuse_way == 2'h2 ? tag_0_5 : _GEN_928; // @[d_cache.scala 132:40 22:24]
  wire [31:0] _GEN_1141 = unuse_way == 2'h2 ? tag_0_6 : _GEN_929; // @[d_cache.scala 132:40 22:24]
  wire [31:0] _GEN_1142 = unuse_way == 2'h2 ? tag_0_7 : _GEN_930; // @[d_cache.scala 132:40 22:24]
  wire [31:0] _GEN_1143 = unuse_way == 2'h2 ? tag_0_8 : _GEN_931; // @[d_cache.scala 132:40 22:24]
  wire [31:0] _GEN_1144 = unuse_way == 2'h2 ? tag_0_9 : _GEN_932; // @[d_cache.scala 132:40 22:24]
  wire [31:0] _GEN_1145 = unuse_way == 2'h2 ? tag_0_10 : _GEN_933; // @[d_cache.scala 132:40 22:24]
  wire [31:0] _GEN_1146 = unuse_way == 2'h2 ? tag_0_11 : _GEN_934; // @[d_cache.scala 132:40 22:24]
  wire [31:0] _GEN_1147 = unuse_way == 2'h2 ? tag_0_12 : _GEN_935; // @[d_cache.scala 132:40 22:24]
  wire [31:0] _GEN_1148 = unuse_way == 2'h2 ? tag_0_13 : _GEN_936; // @[d_cache.scala 132:40 22:24]
  wire [31:0] _GEN_1149 = unuse_way == 2'h2 ? tag_0_14 : _GEN_937; // @[d_cache.scala 132:40 22:24]
  wire [31:0] _GEN_1150 = unuse_way == 2'h2 ? tag_0_15 : _GEN_938; // @[d_cache.scala 132:40 22:24]
  wire  _GEN_1151 = unuse_way == 2'h2 ? dirty_0_0 : _GEN_939; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1152 = unuse_way == 2'h2 ? dirty_0_1 : _GEN_940; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1153 = unuse_way == 2'h2 ? dirty_0_2 : _GEN_941; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1154 = unuse_way == 2'h2 ? dirty_0_3 : _GEN_942; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1155 = unuse_way == 2'h2 ? dirty_0_4 : _GEN_943; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1156 = unuse_way == 2'h2 ? dirty_0_5 : _GEN_944; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1157 = unuse_way == 2'h2 ? dirty_0_6 : _GEN_945; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1158 = unuse_way == 2'h2 ? dirty_0_7 : _GEN_946; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1159 = unuse_way == 2'h2 ? dirty_0_8 : _GEN_947; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1160 = unuse_way == 2'h2 ? dirty_0_9 : _GEN_948; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1161 = unuse_way == 2'h2 ? dirty_0_10 : _GEN_949; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1162 = unuse_way == 2'h2 ? dirty_0_11 : _GEN_950; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1163 = unuse_way == 2'h2 ? dirty_0_12 : _GEN_951; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1164 = unuse_way == 2'h2 ? dirty_0_13 : _GEN_952; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1165 = unuse_way == 2'h2 ? dirty_0_14 : _GEN_953; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1166 = unuse_way == 2'h2 ? dirty_0_15 : _GEN_954; // @[d_cache.scala 132:40 26:26]
  wire  _GEN_1167 = unuse_way == 2'h2 ? valid_0_0 : _GEN_955; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1168 = unuse_way == 2'h2 ? valid_0_1 : _GEN_956; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1169 = unuse_way == 2'h2 ? valid_0_2 : _GEN_957; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1170 = unuse_way == 2'h2 ? valid_0_3 : _GEN_958; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1171 = unuse_way == 2'h2 ? valid_0_4 : _GEN_959; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1172 = unuse_way == 2'h2 ? valid_0_5 : _GEN_960; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1173 = unuse_way == 2'h2 ? valid_0_6 : _GEN_961; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1174 = unuse_way == 2'h2 ? valid_0_7 : _GEN_962; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1175 = unuse_way == 2'h2 ? valid_0_8 : _GEN_963; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1176 = unuse_way == 2'h2 ? valid_0_9 : _GEN_964; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1177 = unuse_way == 2'h2 ? valid_0_10 : _GEN_965; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1178 = unuse_way == 2'h2 ? valid_0_11 : _GEN_966; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1179 = unuse_way == 2'h2 ? valid_0_12 : _GEN_967; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1180 = unuse_way == 2'h2 ? valid_0_13 : _GEN_968; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1181 = unuse_way == 2'h2 ? valid_0_14 : _GEN_969; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1182 = unuse_way == 2'h2 ? valid_0_15 : _GEN_970; // @[d_cache.scala 132:40 24:26]
  wire  _GEN_1183 = unuse_way == 2'h2 ? dirty_1_0 : _GEN_1020; // @[d_cache.scala 132:40 27:26]
  wire  _GEN_1184 = unuse_way == 2'h2 ? dirty_1_1 : _GEN_1021; // @[d_cache.scala 132:40 27:26]
  wire  _GEN_1185 = unuse_way == 2'h2 ? dirty_1_2 : _GEN_1022; // @[d_cache.scala 132:40 27:26]
  wire  _GEN_1186 = unuse_way == 2'h2 ? dirty_1_3 : _GEN_1023; // @[d_cache.scala 132:40 27:26]
  wire  _GEN_1187 = unuse_way == 2'h2 ? dirty_1_4 : _GEN_1024; // @[d_cache.scala 132:40 27:26]
  wire  _GEN_1188 = unuse_way == 2'h2 ? dirty_1_5 : _GEN_1025; // @[d_cache.scala 132:40 27:26]
  wire  _GEN_1189 = unuse_way == 2'h2 ? dirty_1_6 : _GEN_1026; // @[d_cache.scala 132:40 27:26]
  wire  _GEN_1190 = unuse_way == 2'h2 ? dirty_1_7 : _GEN_1027; // @[d_cache.scala 132:40 27:26]
  wire  _GEN_1191 = unuse_way == 2'h2 ? dirty_1_8 : _GEN_1028; // @[d_cache.scala 132:40 27:26]
  wire  _GEN_1192 = unuse_way == 2'h2 ? dirty_1_9 : _GEN_1029; // @[d_cache.scala 132:40 27:26]
  wire  _GEN_1193 = unuse_way == 2'h2 ? dirty_1_10 : _GEN_1030; // @[d_cache.scala 132:40 27:26]
  wire  _GEN_1194 = unuse_way == 2'h2 ? dirty_1_11 : _GEN_1031; // @[d_cache.scala 132:40 27:26]
  wire  _GEN_1195 = unuse_way == 2'h2 ? dirty_1_12 : _GEN_1032; // @[d_cache.scala 132:40 27:26]
  wire  _GEN_1196 = unuse_way == 2'h2 ? dirty_1_13 : _GEN_1033; // @[d_cache.scala 132:40 27:26]
  wire  _GEN_1197 = unuse_way == 2'h2 ? dirty_1_14 : _GEN_1034; // @[d_cache.scala 132:40 27:26]
  wire  _GEN_1198 = unuse_way == 2'h2 ? dirty_1_15 : _GEN_1035; // @[d_cache.scala 132:40 27:26]
  wire [3:0] _GEN_1199 = unuse_way == 2'h1 ? 4'h1 : _GEN_1052; // @[d_cache.scala 126:34 127:23]
  wire [127:0] _GEN_1200 = unuse_way == 2'h1 ? _GEN_275 : _GEN_1119; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1201 = unuse_way == 2'h1 ? _GEN_276 : _GEN_1120; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1202 = unuse_way == 2'h1 ? _GEN_277 : _GEN_1121; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1203 = unuse_way == 2'h1 ? _GEN_278 : _GEN_1122; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1204 = unuse_way == 2'h1 ? _GEN_279 : _GEN_1123; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1205 = unuse_way == 2'h1 ? _GEN_280 : _GEN_1124; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1206 = unuse_way == 2'h1 ? _GEN_281 : _GEN_1125; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1207 = unuse_way == 2'h1 ? _GEN_282 : _GEN_1126; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1208 = unuse_way == 2'h1 ? _GEN_283 : _GEN_1127; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1209 = unuse_way == 2'h1 ? _GEN_284 : _GEN_1128; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1210 = unuse_way == 2'h1 ? _GEN_285 : _GEN_1129; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1211 = unuse_way == 2'h1 ? _GEN_286 : _GEN_1130; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1212 = unuse_way == 2'h1 ? _GEN_287 : _GEN_1131; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1213 = unuse_way == 2'h1 ? _GEN_288 : _GEN_1132; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1214 = unuse_way == 2'h1 ? _GEN_289 : _GEN_1133; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1215 = unuse_way == 2'h1 ? _GEN_290 : _GEN_1134; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1216 = unuse_way == 2'h1 ? _GEN_291 : _GEN_1135; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1217 = unuse_way == 2'h1 ? _GEN_292 : _GEN_1136; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1218 = unuse_way == 2'h1 ? _GEN_293 : _GEN_1137; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1219 = unuse_way == 2'h1 ? _GEN_294 : _GEN_1138; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1220 = unuse_way == 2'h1 ? _GEN_295 : _GEN_1139; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1221 = unuse_way == 2'h1 ? _GEN_296 : _GEN_1140; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1222 = unuse_way == 2'h1 ? _GEN_297 : _GEN_1141; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1223 = unuse_way == 2'h1 ? _GEN_298 : _GEN_1142; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1224 = unuse_way == 2'h1 ? _GEN_299 : _GEN_1143; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1225 = unuse_way == 2'h1 ? _GEN_300 : _GEN_1144; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1226 = unuse_way == 2'h1 ? _GEN_301 : _GEN_1145; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1227 = unuse_way == 2'h1 ? _GEN_302 : _GEN_1146; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1228 = unuse_way == 2'h1 ? _GEN_303 : _GEN_1147; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1229 = unuse_way == 2'h1 ? _GEN_304 : _GEN_1148; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1230 = unuse_way == 2'h1 ? _GEN_305 : _GEN_1149; // @[d_cache.scala 126:34]
  wire [31:0] _GEN_1231 = unuse_way == 2'h1 ? _GEN_306 : _GEN_1150; // @[d_cache.scala 126:34]
  wire  _GEN_1232 = unuse_way == 2'h1 ? _GEN_307 : _GEN_1167; // @[d_cache.scala 126:34]
  wire  _GEN_1233 = unuse_way == 2'h1 ? _GEN_308 : _GEN_1168; // @[d_cache.scala 126:34]
  wire  _GEN_1234 = unuse_way == 2'h1 ? _GEN_309 : _GEN_1169; // @[d_cache.scala 126:34]
  wire  _GEN_1235 = unuse_way == 2'h1 ? _GEN_310 : _GEN_1170; // @[d_cache.scala 126:34]
  wire  _GEN_1236 = unuse_way == 2'h1 ? _GEN_311 : _GEN_1171; // @[d_cache.scala 126:34]
  wire  _GEN_1237 = unuse_way == 2'h1 ? _GEN_312 : _GEN_1172; // @[d_cache.scala 126:34]
  wire  _GEN_1238 = unuse_way == 2'h1 ? _GEN_313 : _GEN_1173; // @[d_cache.scala 126:34]
  wire  _GEN_1239 = unuse_way == 2'h1 ? _GEN_314 : _GEN_1174; // @[d_cache.scala 126:34]
  wire  _GEN_1240 = unuse_way == 2'h1 ? _GEN_315 : _GEN_1175; // @[d_cache.scala 126:34]
  wire  _GEN_1241 = unuse_way == 2'h1 ? _GEN_316 : _GEN_1176; // @[d_cache.scala 126:34]
  wire  _GEN_1242 = unuse_way == 2'h1 ? _GEN_317 : _GEN_1177; // @[d_cache.scala 126:34]
  wire  _GEN_1243 = unuse_way == 2'h1 ? _GEN_318 : _GEN_1178; // @[d_cache.scala 126:34]
  wire  _GEN_1244 = unuse_way == 2'h1 ? _GEN_319 : _GEN_1179; // @[d_cache.scala 126:34]
  wire  _GEN_1245 = unuse_way == 2'h1 ? _GEN_320 : _GEN_1180; // @[d_cache.scala 126:34]
  wire  _GEN_1246 = unuse_way == 2'h1 ? _GEN_321 : _GEN_1181; // @[d_cache.scala 126:34]
  wire  _GEN_1247 = unuse_way == 2'h1 ? _GEN_322 : _GEN_1182; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1248 = unuse_way == 2'h1 ? _GEN_339 : _GEN_1101; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1249 = unuse_way == 2'h1 ? _GEN_340 : _GEN_1102; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1250 = unuse_way == 2'h1 ? _GEN_341 : _GEN_1103; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1251 = unuse_way == 2'h1 ? _GEN_342 : _GEN_1104; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1252 = unuse_way == 2'h1 ? _GEN_343 : _GEN_1105; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1253 = unuse_way == 2'h1 ? _GEN_344 : _GEN_1106; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1254 = unuse_way == 2'h1 ? _GEN_345 : _GEN_1107; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1255 = unuse_way == 2'h1 ? _GEN_346 : _GEN_1108; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1256 = unuse_way == 2'h1 ? _GEN_347 : _GEN_1109; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1257 = unuse_way == 2'h1 ? _GEN_348 : _GEN_1110; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1258 = unuse_way == 2'h1 ? _GEN_349 : _GEN_1111; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1259 = unuse_way == 2'h1 ? _GEN_350 : _GEN_1112; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1260 = unuse_way == 2'h1 ? _GEN_351 : _GEN_1113; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1261 = unuse_way == 2'h1 ? _GEN_352 : _GEN_1114; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1262 = unuse_way == 2'h1 ? _GEN_353 : _GEN_1115; // @[d_cache.scala 126:34]
  wire [1:0] _GEN_1263 = unuse_way == 2'h1 ? _GEN_354 : _GEN_1116; // @[d_cache.scala 126:34]
  wire [127:0] _GEN_1264 = unuse_way == 2'h1 ? ram_1_0 : _GEN_1053; // @[d_cache.scala 126:34 20:24]
  wire [127:0] _GEN_1265 = unuse_way == 2'h1 ? ram_1_1 : _GEN_1054; // @[d_cache.scala 126:34 20:24]
  wire [127:0] _GEN_1266 = unuse_way == 2'h1 ? ram_1_2 : _GEN_1055; // @[d_cache.scala 126:34 20:24]
  wire [127:0] _GEN_1267 = unuse_way == 2'h1 ? ram_1_3 : _GEN_1056; // @[d_cache.scala 126:34 20:24]
  wire [127:0] _GEN_1268 = unuse_way == 2'h1 ? ram_1_4 : _GEN_1057; // @[d_cache.scala 126:34 20:24]
  wire [127:0] _GEN_1269 = unuse_way == 2'h1 ? ram_1_5 : _GEN_1058; // @[d_cache.scala 126:34 20:24]
  wire [127:0] _GEN_1270 = unuse_way == 2'h1 ? ram_1_6 : _GEN_1059; // @[d_cache.scala 126:34 20:24]
  wire [127:0] _GEN_1271 = unuse_way == 2'h1 ? ram_1_7 : _GEN_1060; // @[d_cache.scala 126:34 20:24]
  wire [127:0] _GEN_1272 = unuse_way == 2'h1 ? ram_1_8 : _GEN_1061; // @[d_cache.scala 126:34 20:24]
  wire [127:0] _GEN_1273 = unuse_way == 2'h1 ? ram_1_9 : _GEN_1062; // @[d_cache.scala 126:34 20:24]
  wire [127:0] _GEN_1274 = unuse_way == 2'h1 ? ram_1_10 : _GEN_1063; // @[d_cache.scala 126:34 20:24]
  wire [127:0] _GEN_1275 = unuse_way == 2'h1 ? ram_1_11 : _GEN_1064; // @[d_cache.scala 126:34 20:24]
  wire [127:0] _GEN_1276 = unuse_way == 2'h1 ? ram_1_12 : _GEN_1065; // @[d_cache.scala 126:34 20:24]
  wire [127:0] _GEN_1277 = unuse_way == 2'h1 ? ram_1_13 : _GEN_1066; // @[d_cache.scala 126:34 20:24]
  wire [127:0] _GEN_1278 = unuse_way == 2'h1 ? ram_1_14 : _GEN_1067; // @[d_cache.scala 126:34 20:24]
  wire [127:0] _GEN_1279 = unuse_way == 2'h1 ? ram_1_15 : _GEN_1068; // @[d_cache.scala 126:34 20:24]
  wire [31:0] _GEN_1280 = unuse_way == 2'h1 ? tag_1_0 : _GEN_1069; // @[d_cache.scala 126:34 23:24]
  wire [31:0] _GEN_1281 = unuse_way == 2'h1 ? tag_1_1 : _GEN_1070; // @[d_cache.scala 126:34 23:24]
  wire [31:0] _GEN_1282 = unuse_way == 2'h1 ? tag_1_2 : _GEN_1071; // @[d_cache.scala 126:34 23:24]
  wire [31:0] _GEN_1283 = unuse_way == 2'h1 ? tag_1_3 : _GEN_1072; // @[d_cache.scala 126:34 23:24]
  wire [31:0] _GEN_1284 = unuse_way == 2'h1 ? tag_1_4 : _GEN_1073; // @[d_cache.scala 126:34 23:24]
  wire [31:0] _GEN_1285 = unuse_way == 2'h1 ? tag_1_5 : _GEN_1074; // @[d_cache.scala 126:34 23:24]
  wire [31:0] _GEN_1286 = unuse_way == 2'h1 ? tag_1_6 : _GEN_1075; // @[d_cache.scala 126:34 23:24]
  wire [31:0] _GEN_1287 = unuse_way == 2'h1 ? tag_1_7 : _GEN_1076; // @[d_cache.scala 126:34 23:24]
  wire [31:0] _GEN_1288 = unuse_way == 2'h1 ? tag_1_8 : _GEN_1077; // @[d_cache.scala 126:34 23:24]
  wire [31:0] _GEN_1289 = unuse_way == 2'h1 ? tag_1_9 : _GEN_1078; // @[d_cache.scala 126:34 23:24]
  wire [31:0] _GEN_1290 = unuse_way == 2'h1 ? tag_1_10 : _GEN_1079; // @[d_cache.scala 126:34 23:24]
  wire [31:0] _GEN_1291 = unuse_way == 2'h1 ? tag_1_11 : _GEN_1080; // @[d_cache.scala 126:34 23:24]
  wire [31:0] _GEN_1292 = unuse_way == 2'h1 ? tag_1_12 : _GEN_1081; // @[d_cache.scala 126:34 23:24]
  wire [31:0] _GEN_1293 = unuse_way == 2'h1 ? tag_1_13 : _GEN_1082; // @[d_cache.scala 126:34 23:24]
  wire [31:0] _GEN_1294 = unuse_way == 2'h1 ? tag_1_14 : _GEN_1083; // @[d_cache.scala 126:34 23:24]
  wire [31:0] _GEN_1295 = unuse_way == 2'h1 ? tag_1_15 : _GEN_1084; // @[d_cache.scala 126:34 23:24]
  wire  _GEN_1296 = unuse_way == 2'h1 ? valid_1_0 : _GEN_1085; // @[d_cache.scala 126:34 25:26]
  wire  _GEN_1297 = unuse_way == 2'h1 ? valid_1_1 : _GEN_1086; // @[d_cache.scala 126:34 25:26]
  wire  _GEN_1298 = unuse_way == 2'h1 ? valid_1_2 : _GEN_1087; // @[d_cache.scala 126:34 25:26]
  wire  _GEN_1299 = unuse_way == 2'h1 ? valid_1_3 : _GEN_1088; // @[d_cache.scala 126:34 25:26]
  wire  _GEN_1300 = unuse_way == 2'h1 ? valid_1_4 : _GEN_1089; // @[d_cache.scala 126:34 25:26]
  wire  _GEN_1301 = unuse_way == 2'h1 ? valid_1_5 : _GEN_1090; // @[d_cache.scala 126:34 25:26]
  wire  _GEN_1302 = unuse_way == 2'h1 ? valid_1_6 : _GEN_1091; // @[d_cache.scala 126:34 25:26]
  wire  _GEN_1303 = unuse_way == 2'h1 ? valid_1_7 : _GEN_1092; // @[d_cache.scala 126:34 25:26]
  wire  _GEN_1304 = unuse_way == 2'h1 ? valid_1_8 : _GEN_1093; // @[d_cache.scala 126:34 25:26]
  wire  _GEN_1305 = unuse_way == 2'h1 ? valid_1_9 : _GEN_1094; // @[d_cache.scala 126:34 25:26]
  wire  _GEN_1306 = unuse_way == 2'h1 ? valid_1_10 : _GEN_1095; // @[d_cache.scala 126:34 25:26]
  wire  _GEN_1307 = unuse_way == 2'h1 ? valid_1_11 : _GEN_1096; // @[d_cache.scala 126:34 25:26]
  wire  _GEN_1308 = unuse_way == 2'h1 ? valid_1_12 : _GEN_1097; // @[d_cache.scala 126:34 25:26]
  wire  _GEN_1309 = unuse_way == 2'h1 ? valid_1_13 : _GEN_1098; // @[d_cache.scala 126:34 25:26]
  wire  _GEN_1310 = unuse_way == 2'h1 ? valid_1_14 : _GEN_1099; // @[d_cache.scala 126:34 25:26]
  wire  _GEN_1311 = unuse_way == 2'h1 ? valid_1_15 : _GEN_1100; // @[d_cache.scala 126:34 25:26]
  wire [127:0] _GEN_1312 = unuse_way == 2'h1 ? write_back_data : _GEN_1117; // @[d_cache.scala 126:34 31:34]
  wire [39:0] _GEN_1313 = unuse_way == 2'h1 ? {{8'd0}, write_back_addr} : _GEN_1118; // @[d_cache.scala 126:34 32:34]
  wire  _GEN_1314 = unuse_way == 2'h1 ? dirty_0_0 : _GEN_1151; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1315 = unuse_way == 2'h1 ? dirty_0_1 : _GEN_1152; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1316 = unuse_way == 2'h1 ? dirty_0_2 : _GEN_1153; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1317 = unuse_way == 2'h1 ? dirty_0_3 : _GEN_1154; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1318 = unuse_way == 2'h1 ? dirty_0_4 : _GEN_1155; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1319 = unuse_way == 2'h1 ? dirty_0_5 : _GEN_1156; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1320 = unuse_way == 2'h1 ? dirty_0_6 : _GEN_1157; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1321 = unuse_way == 2'h1 ? dirty_0_7 : _GEN_1158; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1322 = unuse_way == 2'h1 ? dirty_0_8 : _GEN_1159; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1323 = unuse_way == 2'h1 ? dirty_0_9 : _GEN_1160; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1324 = unuse_way == 2'h1 ? dirty_0_10 : _GEN_1161; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1325 = unuse_way == 2'h1 ? dirty_0_11 : _GEN_1162; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1326 = unuse_way == 2'h1 ? dirty_0_12 : _GEN_1163; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1327 = unuse_way == 2'h1 ? dirty_0_13 : _GEN_1164; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1328 = unuse_way == 2'h1 ? dirty_0_14 : _GEN_1165; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1329 = unuse_way == 2'h1 ? dirty_0_15 : _GEN_1166; // @[d_cache.scala 126:34 26:26]
  wire  _GEN_1330 = unuse_way == 2'h1 ? dirty_1_0 : _GEN_1183; // @[d_cache.scala 126:34 27:26]
  wire  _GEN_1331 = unuse_way == 2'h1 ? dirty_1_1 : _GEN_1184; // @[d_cache.scala 126:34 27:26]
  wire  _GEN_1332 = unuse_way == 2'h1 ? dirty_1_2 : _GEN_1185; // @[d_cache.scala 126:34 27:26]
  wire  _GEN_1333 = unuse_way == 2'h1 ? dirty_1_3 : _GEN_1186; // @[d_cache.scala 126:34 27:26]
  wire  _GEN_1334 = unuse_way == 2'h1 ? dirty_1_4 : _GEN_1187; // @[d_cache.scala 126:34 27:26]
  wire  _GEN_1335 = unuse_way == 2'h1 ? dirty_1_5 : _GEN_1188; // @[d_cache.scala 126:34 27:26]
  wire  _GEN_1336 = unuse_way == 2'h1 ? dirty_1_6 : _GEN_1189; // @[d_cache.scala 126:34 27:26]
  wire  _GEN_1337 = unuse_way == 2'h1 ? dirty_1_7 : _GEN_1190; // @[d_cache.scala 126:34 27:26]
  wire  _GEN_1338 = unuse_way == 2'h1 ? dirty_1_8 : _GEN_1191; // @[d_cache.scala 126:34 27:26]
  wire  _GEN_1339 = unuse_way == 2'h1 ? dirty_1_9 : _GEN_1192; // @[d_cache.scala 126:34 27:26]
  wire  _GEN_1340 = unuse_way == 2'h1 ? dirty_1_10 : _GEN_1193; // @[d_cache.scala 126:34 27:26]
  wire  _GEN_1341 = unuse_way == 2'h1 ? dirty_1_11 : _GEN_1194; // @[d_cache.scala 126:34 27:26]
  wire  _GEN_1342 = unuse_way == 2'h1 ? dirty_1_12 : _GEN_1195; // @[d_cache.scala 126:34 27:26]
  wire  _GEN_1343 = unuse_way == 2'h1 ? dirty_1_13 : _GEN_1196; // @[d_cache.scala 126:34 27:26]
  wire  _GEN_1344 = unuse_way == 2'h1 ? dirty_1_14 : _GEN_1197; // @[d_cache.scala 126:34 27:26]
  wire  _GEN_1345 = unuse_way == 2'h1 ? dirty_1_15 : _GEN_1198; // @[d_cache.scala 126:34 27:26]
  wire [127:0] _write_back_data_T = {{64'd0}, write_back_data[127:64]}; // @[d_cache.scala 179:52]
  wire [127:0] _GEN_1346 = io_from_axi_wready ? _write_back_data_T : write_back_data; // @[d_cache.scala 178:37 179:33 31:34]
  wire [3:0] _GEN_1347 = io_from_axi_bvalid ? 4'h1 : state; // @[d_cache.scala 181:37 182:23 60:24]
  wire [3:0] _GEN_1348 = io_from_axi_rvalid ? 4'h0 : state; // @[d_cache.scala 186:37 187:23 60:24]
  wire [3:0] _GEN_1350 = 4'h8 == state ? _GEN_274 : state; // @[d_cache.scala 65:18 60:24]
  wire [3:0] _GEN_1351 = 4'h7 == state ? _GEN_1348 : _GEN_1350; // @[d_cache.scala 65:18]
  wire [127:0] _GEN_1352 = 4'h6 == state ? _GEN_1346 : write_back_data; // @[d_cache.scala 65:18 31:34]
  wire [3:0] _GEN_1353 = 4'h6 == state ? _GEN_1347 : _GEN_1351; // @[d_cache.scala 65:18]
  wire [3:0] _GEN_1354 = 4'h5 == state ? _GEN_1199 : _GEN_1353; // @[d_cache.scala 65:18]
  wire [127:0] _GEN_1355 = 4'h5 == state ? _GEN_1200 : ram_0_0; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1356 = 4'h5 == state ? _GEN_1201 : ram_0_1; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1357 = 4'h5 == state ? _GEN_1202 : ram_0_2; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1358 = 4'h5 == state ? _GEN_1203 : ram_0_3; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1359 = 4'h5 == state ? _GEN_1204 : ram_0_4; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1360 = 4'h5 == state ? _GEN_1205 : ram_0_5; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1361 = 4'h5 == state ? _GEN_1206 : ram_0_6; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1362 = 4'h5 == state ? _GEN_1207 : ram_0_7; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1363 = 4'h5 == state ? _GEN_1208 : ram_0_8; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1364 = 4'h5 == state ? _GEN_1209 : ram_0_9; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1365 = 4'h5 == state ? _GEN_1210 : ram_0_10; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1366 = 4'h5 == state ? _GEN_1211 : ram_0_11; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1367 = 4'h5 == state ? _GEN_1212 : ram_0_12; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1368 = 4'h5 == state ? _GEN_1213 : ram_0_13; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1369 = 4'h5 == state ? _GEN_1214 : ram_0_14; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1370 = 4'h5 == state ? _GEN_1215 : ram_0_15; // @[d_cache.scala 65:18 19:24]
  wire [31:0] _GEN_1371 = 4'h5 == state ? _GEN_1216 : tag_0_0; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1372 = 4'h5 == state ? _GEN_1217 : tag_0_1; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1373 = 4'h5 == state ? _GEN_1218 : tag_0_2; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1374 = 4'h5 == state ? _GEN_1219 : tag_0_3; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1375 = 4'h5 == state ? _GEN_1220 : tag_0_4; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1376 = 4'h5 == state ? _GEN_1221 : tag_0_5; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1377 = 4'h5 == state ? _GEN_1222 : tag_0_6; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1378 = 4'h5 == state ? _GEN_1223 : tag_0_7; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1379 = 4'h5 == state ? _GEN_1224 : tag_0_8; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1380 = 4'h5 == state ? _GEN_1225 : tag_0_9; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1381 = 4'h5 == state ? _GEN_1226 : tag_0_10; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1382 = 4'h5 == state ? _GEN_1227 : tag_0_11; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1383 = 4'h5 == state ? _GEN_1228 : tag_0_12; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1384 = 4'h5 == state ? _GEN_1229 : tag_0_13; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1385 = 4'h5 == state ? _GEN_1230 : tag_0_14; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1386 = 4'h5 == state ? _GEN_1231 : tag_0_15; // @[d_cache.scala 65:18 22:24]
  wire  _GEN_1387 = 4'h5 == state ? _GEN_1232 : valid_0_0; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1388 = 4'h5 == state ? _GEN_1233 : valid_0_1; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1389 = 4'h5 == state ? _GEN_1234 : valid_0_2; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1390 = 4'h5 == state ? _GEN_1235 : valid_0_3; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1391 = 4'h5 == state ? _GEN_1236 : valid_0_4; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1392 = 4'h5 == state ? _GEN_1237 : valid_0_5; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1393 = 4'h5 == state ? _GEN_1238 : valid_0_6; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1394 = 4'h5 == state ? _GEN_1239 : valid_0_7; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1395 = 4'h5 == state ? _GEN_1240 : valid_0_8; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1396 = 4'h5 == state ? _GEN_1241 : valid_0_9; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1397 = 4'h5 == state ? _GEN_1242 : valid_0_10; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1398 = 4'h5 == state ? _GEN_1243 : valid_0_11; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1399 = 4'h5 == state ? _GEN_1244 : valid_0_12; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1400 = 4'h5 == state ? _GEN_1245 : valid_0_13; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1401 = 4'h5 == state ? _GEN_1246 : valid_0_14; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1402 = 4'h5 == state ? _GEN_1247 : valid_0_15; // @[d_cache.scala 65:18 24:26]
  wire [1:0] _GEN_1403 = 4'h5 == state ? _GEN_1248 : quene_0; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1404 = 4'h5 == state ? _GEN_1249 : quene_1; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1405 = 4'h5 == state ? _GEN_1250 : quene_2; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1406 = 4'h5 == state ? _GEN_1251 : quene_3; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1407 = 4'h5 == state ? _GEN_1252 : quene_4; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1408 = 4'h5 == state ? _GEN_1253 : quene_5; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1409 = 4'h5 == state ? _GEN_1254 : quene_6; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1410 = 4'h5 == state ? _GEN_1255 : quene_7; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1411 = 4'h5 == state ? _GEN_1256 : quene_8; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1412 = 4'h5 == state ? _GEN_1257 : quene_9; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1413 = 4'h5 == state ? _GEN_1258 : quene_10; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1414 = 4'h5 == state ? _GEN_1259 : quene_11; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1415 = 4'h5 == state ? _GEN_1260 : quene_12; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1416 = 4'h5 == state ? _GEN_1261 : quene_13; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1417 = 4'h5 == state ? _GEN_1262 : quene_14; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1418 = 4'h5 == state ? _GEN_1263 : quene_15; // @[d_cache.scala 65:18 39:24]
  wire [127:0] _GEN_1419 = 4'h5 == state ? _GEN_1264 : ram_1_0; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1420 = 4'h5 == state ? _GEN_1265 : ram_1_1; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1421 = 4'h5 == state ? _GEN_1266 : ram_1_2; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1422 = 4'h5 == state ? _GEN_1267 : ram_1_3; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1423 = 4'h5 == state ? _GEN_1268 : ram_1_4; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1424 = 4'h5 == state ? _GEN_1269 : ram_1_5; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1425 = 4'h5 == state ? _GEN_1270 : ram_1_6; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1426 = 4'h5 == state ? _GEN_1271 : ram_1_7; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1427 = 4'h5 == state ? _GEN_1272 : ram_1_8; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1428 = 4'h5 == state ? _GEN_1273 : ram_1_9; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1429 = 4'h5 == state ? _GEN_1274 : ram_1_10; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1430 = 4'h5 == state ? _GEN_1275 : ram_1_11; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1431 = 4'h5 == state ? _GEN_1276 : ram_1_12; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1432 = 4'h5 == state ? _GEN_1277 : ram_1_13; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1433 = 4'h5 == state ? _GEN_1278 : ram_1_14; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1434 = 4'h5 == state ? _GEN_1279 : ram_1_15; // @[d_cache.scala 65:18 20:24]
  wire [31:0] _GEN_1435 = 4'h5 == state ? _GEN_1280 : tag_1_0; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1436 = 4'h5 == state ? _GEN_1281 : tag_1_1; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1437 = 4'h5 == state ? _GEN_1282 : tag_1_2; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1438 = 4'h5 == state ? _GEN_1283 : tag_1_3; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1439 = 4'h5 == state ? _GEN_1284 : tag_1_4; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1440 = 4'h5 == state ? _GEN_1285 : tag_1_5; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1441 = 4'h5 == state ? _GEN_1286 : tag_1_6; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1442 = 4'h5 == state ? _GEN_1287 : tag_1_7; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1443 = 4'h5 == state ? _GEN_1288 : tag_1_8; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1444 = 4'h5 == state ? _GEN_1289 : tag_1_9; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1445 = 4'h5 == state ? _GEN_1290 : tag_1_10; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1446 = 4'h5 == state ? _GEN_1291 : tag_1_11; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1447 = 4'h5 == state ? _GEN_1292 : tag_1_12; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1448 = 4'h5 == state ? _GEN_1293 : tag_1_13; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1449 = 4'h5 == state ? _GEN_1294 : tag_1_14; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1450 = 4'h5 == state ? _GEN_1295 : tag_1_15; // @[d_cache.scala 65:18 23:24]
  wire  _GEN_1451 = 4'h5 == state ? _GEN_1296 : valid_1_0; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1452 = 4'h5 == state ? _GEN_1297 : valid_1_1; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1453 = 4'h5 == state ? _GEN_1298 : valid_1_2; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1454 = 4'h5 == state ? _GEN_1299 : valid_1_3; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1455 = 4'h5 == state ? _GEN_1300 : valid_1_4; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1456 = 4'h5 == state ? _GEN_1301 : valid_1_5; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1457 = 4'h5 == state ? _GEN_1302 : valid_1_6; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1458 = 4'h5 == state ? _GEN_1303 : valid_1_7; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1459 = 4'h5 == state ? _GEN_1304 : valid_1_8; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1460 = 4'h5 == state ? _GEN_1305 : valid_1_9; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1461 = 4'h5 == state ? _GEN_1306 : valid_1_10; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1462 = 4'h5 == state ? _GEN_1307 : valid_1_11; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1463 = 4'h5 == state ? _GEN_1308 : valid_1_12; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1464 = 4'h5 == state ? _GEN_1309 : valid_1_13; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1465 = 4'h5 == state ? _GEN_1310 : valid_1_14; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1466 = 4'h5 == state ? _GEN_1311 : valid_1_15; // @[d_cache.scala 65:18 25:26]
  wire [127:0] _GEN_1467 = 4'h5 == state ? _GEN_1312 : _GEN_1352; // @[d_cache.scala 65:18]
  wire [39:0] _GEN_1468 = 4'h5 == state ? _GEN_1313 : {{8'd0}, write_back_addr}; // @[d_cache.scala 65:18 32:34]
  wire  _GEN_1469 = 4'h5 == state ? _GEN_1314 : dirty_0_0; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1470 = 4'h5 == state ? _GEN_1315 : dirty_0_1; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1471 = 4'h5 == state ? _GEN_1316 : dirty_0_2; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1472 = 4'h5 == state ? _GEN_1317 : dirty_0_3; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1473 = 4'h5 == state ? _GEN_1318 : dirty_0_4; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1474 = 4'h5 == state ? _GEN_1319 : dirty_0_5; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1475 = 4'h5 == state ? _GEN_1320 : dirty_0_6; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1476 = 4'h5 == state ? _GEN_1321 : dirty_0_7; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1477 = 4'h5 == state ? _GEN_1322 : dirty_0_8; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1478 = 4'h5 == state ? _GEN_1323 : dirty_0_9; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1479 = 4'h5 == state ? _GEN_1324 : dirty_0_10; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1480 = 4'h5 == state ? _GEN_1325 : dirty_0_11; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1481 = 4'h5 == state ? _GEN_1326 : dirty_0_12; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1482 = 4'h5 == state ? _GEN_1327 : dirty_0_13; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1483 = 4'h5 == state ? _GEN_1328 : dirty_0_14; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1484 = 4'h5 == state ? _GEN_1329 : dirty_0_15; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1485 = 4'h5 == state ? _GEN_1330 : dirty_1_0; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1486 = 4'h5 == state ? _GEN_1331 : dirty_1_1; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1487 = 4'h5 == state ? _GEN_1332 : dirty_1_2; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1488 = 4'h5 == state ? _GEN_1333 : dirty_1_3; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1489 = 4'h5 == state ? _GEN_1334 : dirty_1_4; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1490 = 4'h5 == state ? _GEN_1335 : dirty_1_5; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1491 = 4'h5 == state ? _GEN_1336 : dirty_1_6; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1492 = 4'h5 == state ? _GEN_1337 : dirty_1_7; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1493 = 4'h5 == state ? _GEN_1338 : dirty_1_8; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1494 = 4'h5 == state ? _GEN_1339 : dirty_1_9; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1495 = 4'h5 == state ? _GEN_1340 : dirty_1_10; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1496 = 4'h5 == state ? _GEN_1341 : dirty_1_11; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1497 = 4'h5 == state ? _GEN_1342 : dirty_1_12; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1498 = 4'h5 == state ? _GEN_1343 : dirty_1_13; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1499 = 4'h5 == state ? _GEN_1344 : dirty_1_14; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1500 = 4'h5 == state ? _GEN_1345 : dirty_1_15; // @[d_cache.scala 65:18 27:26]
  wire [3:0] _GEN_1501 = 4'h4 == state ? _GEN_274 : _GEN_1354; // @[d_cache.scala 65:18]
  wire [127:0] _GEN_1502 = 4'h4 == state ? ram_0_0 : _GEN_1355; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1503 = 4'h4 == state ? ram_0_1 : _GEN_1356; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1504 = 4'h4 == state ? ram_0_2 : _GEN_1357; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1505 = 4'h4 == state ? ram_0_3 : _GEN_1358; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1506 = 4'h4 == state ? ram_0_4 : _GEN_1359; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1507 = 4'h4 == state ? ram_0_5 : _GEN_1360; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1508 = 4'h4 == state ? ram_0_6 : _GEN_1361; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1509 = 4'h4 == state ? ram_0_7 : _GEN_1362; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1510 = 4'h4 == state ? ram_0_8 : _GEN_1363; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1511 = 4'h4 == state ? ram_0_9 : _GEN_1364; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1512 = 4'h4 == state ? ram_0_10 : _GEN_1365; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1513 = 4'h4 == state ? ram_0_11 : _GEN_1366; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1514 = 4'h4 == state ? ram_0_12 : _GEN_1367; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1515 = 4'h4 == state ? ram_0_13 : _GEN_1368; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1516 = 4'h4 == state ? ram_0_14 : _GEN_1369; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1517 = 4'h4 == state ? ram_0_15 : _GEN_1370; // @[d_cache.scala 65:18 19:24]
  wire [31:0] _GEN_1518 = 4'h4 == state ? tag_0_0 : _GEN_1371; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1519 = 4'h4 == state ? tag_0_1 : _GEN_1372; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1520 = 4'h4 == state ? tag_0_2 : _GEN_1373; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1521 = 4'h4 == state ? tag_0_3 : _GEN_1374; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1522 = 4'h4 == state ? tag_0_4 : _GEN_1375; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1523 = 4'h4 == state ? tag_0_5 : _GEN_1376; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1524 = 4'h4 == state ? tag_0_6 : _GEN_1377; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1525 = 4'h4 == state ? tag_0_7 : _GEN_1378; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1526 = 4'h4 == state ? tag_0_8 : _GEN_1379; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1527 = 4'h4 == state ? tag_0_9 : _GEN_1380; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1528 = 4'h4 == state ? tag_0_10 : _GEN_1381; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1529 = 4'h4 == state ? tag_0_11 : _GEN_1382; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1530 = 4'h4 == state ? tag_0_12 : _GEN_1383; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1531 = 4'h4 == state ? tag_0_13 : _GEN_1384; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1532 = 4'h4 == state ? tag_0_14 : _GEN_1385; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1533 = 4'h4 == state ? tag_0_15 : _GEN_1386; // @[d_cache.scala 65:18 22:24]
  wire  _GEN_1534 = 4'h4 == state ? valid_0_0 : _GEN_1387; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1535 = 4'h4 == state ? valid_0_1 : _GEN_1388; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1536 = 4'h4 == state ? valid_0_2 : _GEN_1389; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1537 = 4'h4 == state ? valid_0_3 : _GEN_1390; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1538 = 4'h4 == state ? valid_0_4 : _GEN_1391; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1539 = 4'h4 == state ? valid_0_5 : _GEN_1392; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1540 = 4'h4 == state ? valid_0_6 : _GEN_1393; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1541 = 4'h4 == state ? valid_0_7 : _GEN_1394; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1542 = 4'h4 == state ? valid_0_8 : _GEN_1395; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1543 = 4'h4 == state ? valid_0_9 : _GEN_1396; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1544 = 4'h4 == state ? valid_0_10 : _GEN_1397; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1545 = 4'h4 == state ? valid_0_11 : _GEN_1398; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1546 = 4'h4 == state ? valid_0_12 : _GEN_1399; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1547 = 4'h4 == state ? valid_0_13 : _GEN_1400; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1548 = 4'h4 == state ? valid_0_14 : _GEN_1401; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1549 = 4'h4 == state ? valid_0_15 : _GEN_1402; // @[d_cache.scala 65:18 24:26]
  wire [1:0] _GEN_1550 = 4'h4 == state ? quene_0 : _GEN_1403; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1551 = 4'h4 == state ? quene_1 : _GEN_1404; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1552 = 4'h4 == state ? quene_2 : _GEN_1405; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1553 = 4'h4 == state ? quene_3 : _GEN_1406; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1554 = 4'h4 == state ? quene_4 : _GEN_1407; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1555 = 4'h4 == state ? quene_5 : _GEN_1408; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1556 = 4'h4 == state ? quene_6 : _GEN_1409; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1557 = 4'h4 == state ? quene_7 : _GEN_1410; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1558 = 4'h4 == state ? quene_8 : _GEN_1411; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1559 = 4'h4 == state ? quene_9 : _GEN_1412; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1560 = 4'h4 == state ? quene_10 : _GEN_1413; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1561 = 4'h4 == state ? quene_11 : _GEN_1414; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1562 = 4'h4 == state ? quene_12 : _GEN_1415; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1563 = 4'h4 == state ? quene_13 : _GEN_1416; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1564 = 4'h4 == state ? quene_14 : _GEN_1417; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1565 = 4'h4 == state ? quene_15 : _GEN_1418; // @[d_cache.scala 65:18 39:24]
  wire [127:0] _GEN_1566 = 4'h4 == state ? ram_1_0 : _GEN_1419; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1567 = 4'h4 == state ? ram_1_1 : _GEN_1420; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1568 = 4'h4 == state ? ram_1_2 : _GEN_1421; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1569 = 4'h4 == state ? ram_1_3 : _GEN_1422; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1570 = 4'h4 == state ? ram_1_4 : _GEN_1423; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1571 = 4'h4 == state ? ram_1_5 : _GEN_1424; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1572 = 4'h4 == state ? ram_1_6 : _GEN_1425; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1573 = 4'h4 == state ? ram_1_7 : _GEN_1426; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1574 = 4'h4 == state ? ram_1_8 : _GEN_1427; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1575 = 4'h4 == state ? ram_1_9 : _GEN_1428; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1576 = 4'h4 == state ? ram_1_10 : _GEN_1429; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1577 = 4'h4 == state ? ram_1_11 : _GEN_1430; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1578 = 4'h4 == state ? ram_1_12 : _GEN_1431; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1579 = 4'h4 == state ? ram_1_13 : _GEN_1432; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1580 = 4'h4 == state ? ram_1_14 : _GEN_1433; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1581 = 4'h4 == state ? ram_1_15 : _GEN_1434; // @[d_cache.scala 65:18 20:24]
  wire [31:0] _GEN_1582 = 4'h4 == state ? tag_1_0 : _GEN_1435; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1583 = 4'h4 == state ? tag_1_1 : _GEN_1436; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1584 = 4'h4 == state ? tag_1_2 : _GEN_1437; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1585 = 4'h4 == state ? tag_1_3 : _GEN_1438; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1586 = 4'h4 == state ? tag_1_4 : _GEN_1439; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1587 = 4'h4 == state ? tag_1_5 : _GEN_1440; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1588 = 4'h4 == state ? tag_1_6 : _GEN_1441; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1589 = 4'h4 == state ? tag_1_7 : _GEN_1442; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1590 = 4'h4 == state ? tag_1_8 : _GEN_1443; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1591 = 4'h4 == state ? tag_1_9 : _GEN_1444; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1592 = 4'h4 == state ? tag_1_10 : _GEN_1445; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1593 = 4'h4 == state ? tag_1_11 : _GEN_1446; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1594 = 4'h4 == state ? tag_1_12 : _GEN_1447; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1595 = 4'h4 == state ? tag_1_13 : _GEN_1448; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1596 = 4'h4 == state ? tag_1_14 : _GEN_1449; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1597 = 4'h4 == state ? tag_1_15 : _GEN_1450; // @[d_cache.scala 65:18 23:24]
  wire  _GEN_1598 = 4'h4 == state ? valid_1_0 : _GEN_1451; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1599 = 4'h4 == state ? valid_1_1 : _GEN_1452; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1600 = 4'h4 == state ? valid_1_2 : _GEN_1453; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1601 = 4'h4 == state ? valid_1_3 : _GEN_1454; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1602 = 4'h4 == state ? valid_1_4 : _GEN_1455; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1603 = 4'h4 == state ? valid_1_5 : _GEN_1456; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1604 = 4'h4 == state ? valid_1_6 : _GEN_1457; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1605 = 4'h4 == state ? valid_1_7 : _GEN_1458; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1606 = 4'h4 == state ? valid_1_8 : _GEN_1459; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1607 = 4'h4 == state ? valid_1_9 : _GEN_1460; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1608 = 4'h4 == state ? valid_1_10 : _GEN_1461; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1609 = 4'h4 == state ? valid_1_11 : _GEN_1462; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1610 = 4'h4 == state ? valid_1_12 : _GEN_1463; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1611 = 4'h4 == state ? valid_1_13 : _GEN_1464; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1612 = 4'h4 == state ? valid_1_14 : _GEN_1465; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1613 = 4'h4 == state ? valid_1_15 : _GEN_1466; // @[d_cache.scala 65:18 25:26]
  wire [127:0] _GEN_1614 = 4'h4 == state ? write_back_data : _GEN_1467; // @[d_cache.scala 65:18 31:34]
  wire [39:0] _GEN_1615 = 4'h4 == state ? {{8'd0}, write_back_addr} : _GEN_1468; // @[d_cache.scala 65:18 32:34]
  wire  _GEN_1616 = 4'h4 == state ? dirty_0_0 : _GEN_1469; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1617 = 4'h4 == state ? dirty_0_1 : _GEN_1470; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1618 = 4'h4 == state ? dirty_0_2 : _GEN_1471; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1619 = 4'h4 == state ? dirty_0_3 : _GEN_1472; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1620 = 4'h4 == state ? dirty_0_4 : _GEN_1473; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1621 = 4'h4 == state ? dirty_0_5 : _GEN_1474; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1622 = 4'h4 == state ? dirty_0_6 : _GEN_1475; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1623 = 4'h4 == state ? dirty_0_7 : _GEN_1476; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1624 = 4'h4 == state ? dirty_0_8 : _GEN_1477; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1625 = 4'h4 == state ? dirty_0_9 : _GEN_1478; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1626 = 4'h4 == state ? dirty_0_10 : _GEN_1479; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1627 = 4'h4 == state ? dirty_0_11 : _GEN_1480; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1628 = 4'h4 == state ? dirty_0_12 : _GEN_1481; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1629 = 4'h4 == state ? dirty_0_13 : _GEN_1482; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1630 = 4'h4 == state ? dirty_0_14 : _GEN_1483; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1631 = 4'h4 == state ? dirty_0_15 : _GEN_1484; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1632 = 4'h4 == state ? dirty_1_0 : _GEN_1485; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1633 = 4'h4 == state ? dirty_1_1 : _GEN_1486; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1634 = 4'h4 == state ? dirty_1_2 : _GEN_1487; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1635 = 4'h4 == state ? dirty_1_3 : _GEN_1488; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1636 = 4'h4 == state ? dirty_1_4 : _GEN_1489; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1637 = 4'h4 == state ? dirty_1_5 : _GEN_1490; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1638 = 4'h4 == state ? dirty_1_6 : _GEN_1491; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1639 = 4'h4 == state ? dirty_1_7 : _GEN_1492; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1640 = 4'h4 == state ? dirty_1_8 : _GEN_1493; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1641 = 4'h4 == state ? dirty_1_9 : _GEN_1494; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1642 = 4'h4 == state ? dirty_1_10 : _GEN_1495; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1643 = 4'h4 == state ? dirty_1_11 : _GEN_1496; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1644 = 4'h4 == state ? dirty_1_12 : _GEN_1497; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1645 = 4'h4 == state ? dirty_1_13 : _GEN_1498; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1646 = 4'h4 == state ? dirty_1_14 : _GEN_1499; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1647 = 4'h4 == state ? dirty_1_15 : _GEN_1500; // @[d_cache.scala 65:18 27:26]
  wire [63:0] _GEN_1648 = 4'h3 == state ? _GEN_270 : receive_data_0; // @[d_cache.scala 65:18 37:31]
  wire [63:0] _GEN_1649 = 4'h3 == state ? _GEN_271 : receive_data_1; // @[d_cache.scala 65:18 37:31]
  wire [2:0] _GEN_1650 = 4'h3 == state ? _GEN_272 : receive_num; // @[d_cache.scala 65:18 38:30]
  wire [3:0] _GEN_1651 = 4'h3 == state ? _GEN_273 : _GEN_1501; // @[d_cache.scala 65:18]
  wire [127:0] _GEN_1652 = 4'h3 == state ? ram_0_0 : _GEN_1502; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1653 = 4'h3 == state ? ram_0_1 : _GEN_1503; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1654 = 4'h3 == state ? ram_0_2 : _GEN_1504; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1655 = 4'h3 == state ? ram_0_3 : _GEN_1505; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1656 = 4'h3 == state ? ram_0_4 : _GEN_1506; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1657 = 4'h3 == state ? ram_0_5 : _GEN_1507; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1658 = 4'h3 == state ? ram_0_6 : _GEN_1508; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1659 = 4'h3 == state ? ram_0_7 : _GEN_1509; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1660 = 4'h3 == state ? ram_0_8 : _GEN_1510; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1661 = 4'h3 == state ? ram_0_9 : _GEN_1511; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1662 = 4'h3 == state ? ram_0_10 : _GEN_1512; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1663 = 4'h3 == state ? ram_0_11 : _GEN_1513; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1664 = 4'h3 == state ? ram_0_12 : _GEN_1514; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1665 = 4'h3 == state ? ram_0_13 : _GEN_1515; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1666 = 4'h3 == state ? ram_0_14 : _GEN_1516; // @[d_cache.scala 65:18 19:24]
  wire [127:0] _GEN_1667 = 4'h3 == state ? ram_0_15 : _GEN_1517; // @[d_cache.scala 65:18 19:24]
  wire [31:0] _GEN_1668 = 4'h3 == state ? tag_0_0 : _GEN_1518; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1669 = 4'h3 == state ? tag_0_1 : _GEN_1519; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1670 = 4'h3 == state ? tag_0_2 : _GEN_1520; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1671 = 4'h3 == state ? tag_0_3 : _GEN_1521; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1672 = 4'h3 == state ? tag_0_4 : _GEN_1522; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1673 = 4'h3 == state ? tag_0_5 : _GEN_1523; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1674 = 4'h3 == state ? tag_0_6 : _GEN_1524; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1675 = 4'h3 == state ? tag_0_7 : _GEN_1525; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1676 = 4'h3 == state ? tag_0_8 : _GEN_1526; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1677 = 4'h3 == state ? tag_0_9 : _GEN_1527; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1678 = 4'h3 == state ? tag_0_10 : _GEN_1528; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1679 = 4'h3 == state ? tag_0_11 : _GEN_1529; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1680 = 4'h3 == state ? tag_0_12 : _GEN_1530; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1681 = 4'h3 == state ? tag_0_13 : _GEN_1531; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1682 = 4'h3 == state ? tag_0_14 : _GEN_1532; // @[d_cache.scala 65:18 22:24]
  wire [31:0] _GEN_1683 = 4'h3 == state ? tag_0_15 : _GEN_1533; // @[d_cache.scala 65:18 22:24]
  wire  _GEN_1684 = 4'h3 == state ? valid_0_0 : _GEN_1534; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1685 = 4'h3 == state ? valid_0_1 : _GEN_1535; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1686 = 4'h3 == state ? valid_0_2 : _GEN_1536; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1687 = 4'h3 == state ? valid_0_3 : _GEN_1537; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1688 = 4'h3 == state ? valid_0_4 : _GEN_1538; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1689 = 4'h3 == state ? valid_0_5 : _GEN_1539; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1690 = 4'h3 == state ? valid_0_6 : _GEN_1540; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1691 = 4'h3 == state ? valid_0_7 : _GEN_1541; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1692 = 4'h3 == state ? valid_0_8 : _GEN_1542; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1693 = 4'h3 == state ? valid_0_9 : _GEN_1543; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1694 = 4'h3 == state ? valid_0_10 : _GEN_1544; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1695 = 4'h3 == state ? valid_0_11 : _GEN_1545; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1696 = 4'h3 == state ? valid_0_12 : _GEN_1546; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1697 = 4'h3 == state ? valid_0_13 : _GEN_1547; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1698 = 4'h3 == state ? valid_0_14 : _GEN_1548; // @[d_cache.scala 65:18 24:26]
  wire  _GEN_1699 = 4'h3 == state ? valid_0_15 : _GEN_1549; // @[d_cache.scala 65:18 24:26]
  wire [1:0] _GEN_1700 = 4'h3 == state ? quene_0 : _GEN_1550; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1701 = 4'h3 == state ? quene_1 : _GEN_1551; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1702 = 4'h3 == state ? quene_2 : _GEN_1552; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1703 = 4'h3 == state ? quene_3 : _GEN_1553; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1704 = 4'h3 == state ? quene_4 : _GEN_1554; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1705 = 4'h3 == state ? quene_5 : _GEN_1555; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1706 = 4'h3 == state ? quene_6 : _GEN_1556; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1707 = 4'h3 == state ? quene_7 : _GEN_1557; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1708 = 4'h3 == state ? quene_8 : _GEN_1558; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1709 = 4'h3 == state ? quene_9 : _GEN_1559; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1710 = 4'h3 == state ? quene_10 : _GEN_1560; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1711 = 4'h3 == state ? quene_11 : _GEN_1561; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1712 = 4'h3 == state ? quene_12 : _GEN_1562; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1713 = 4'h3 == state ? quene_13 : _GEN_1563; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1714 = 4'h3 == state ? quene_14 : _GEN_1564; // @[d_cache.scala 65:18 39:24]
  wire [1:0] _GEN_1715 = 4'h3 == state ? quene_15 : _GEN_1565; // @[d_cache.scala 65:18 39:24]
  wire [127:0] _GEN_1716 = 4'h3 == state ? ram_1_0 : _GEN_1566; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1717 = 4'h3 == state ? ram_1_1 : _GEN_1567; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1718 = 4'h3 == state ? ram_1_2 : _GEN_1568; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1719 = 4'h3 == state ? ram_1_3 : _GEN_1569; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1720 = 4'h3 == state ? ram_1_4 : _GEN_1570; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1721 = 4'h3 == state ? ram_1_5 : _GEN_1571; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1722 = 4'h3 == state ? ram_1_6 : _GEN_1572; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1723 = 4'h3 == state ? ram_1_7 : _GEN_1573; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1724 = 4'h3 == state ? ram_1_8 : _GEN_1574; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1725 = 4'h3 == state ? ram_1_9 : _GEN_1575; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1726 = 4'h3 == state ? ram_1_10 : _GEN_1576; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1727 = 4'h3 == state ? ram_1_11 : _GEN_1577; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1728 = 4'h3 == state ? ram_1_12 : _GEN_1578; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1729 = 4'h3 == state ? ram_1_13 : _GEN_1579; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1730 = 4'h3 == state ? ram_1_14 : _GEN_1580; // @[d_cache.scala 65:18 20:24]
  wire [127:0] _GEN_1731 = 4'h3 == state ? ram_1_15 : _GEN_1581; // @[d_cache.scala 65:18 20:24]
  wire [31:0] _GEN_1732 = 4'h3 == state ? tag_1_0 : _GEN_1582; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1733 = 4'h3 == state ? tag_1_1 : _GEN_1583; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1734 = 4'h3 == state ? tag_1_2 : _GEN_1584; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1735 = 4'h3 == state ? tag_1_3 : _GEN_1585; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1736 = 4'h3 == state ? tag_1_4 : _GEN_1586; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1737 = 4'h3 == state ? tag_1_5 : _GEN_1587; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1738 = 4'h3 == state ? tag_1_6 : _GEN_1588; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1739 = 4'h3 == state ? tag_1_7 : _GEN_1589; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1740 = 4'h3 == state ? tag_1_8 : _GEN_1590; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1741 = 4'h3 == state ? tag_1_9 : _GEN_1591; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1742 = 4'h3 == state ? tag_1_10 : _GEN_1592; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1743 = 4'h3 == state ? tag_1_11 : _GEN_1593; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1744 = 4'h3 == state ? tag_1_12 : _GEN_1594; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1745 = 4'h3 == state ? tag_1_13 : _GEN_1595; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1746 = 4'h3 == state ? tag_1_14 : _GEN_1596; // @[d_cache.scala 65:18 23:24]
  wire [31:0] _GEN_1747 = 4'h3 == state ? tag_1_15 : _GEN_1597; // @[d_cache.scala 65:18 23:24]
  wire  _GEN_1748 = 4'h3 == state ? valid_1_0 : _GEN_1598; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1749 = 4'h3 == state ? valid_1_1 : _GEN_1599; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1750 = 4'h3 == state ? valid_1_2 : _GEN_1600; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1751 = 4'h3 == state ? valid_1_3 : _GEN_1601; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1752 = 4'h3 == state ? valid_1_4 : _GEN_1602; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1753 = 4'h3 == state ? valid_1_5 : _GEN_1603; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1754 = 4'h3 == state ? valid_1_6 : _GEN_1604; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1755 = 4'h3 == state ? valid_1_7 : _GEN_1605; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1756 = 4'h3 == state ? valid_1_8 : _GEN_1606; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1757 = 4'h3 == state ? valid_1_9 : _GEN_1607; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1758 = 4'h3 == state ? valid_1_10 : _GEN_1608; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1759 = 4'h3 == state ? valid_1_11 : _GEN_1609; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1760 = 4'h3 == state ? valid_1_12 : _GEN_1610; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1761 = 4'h3 == state ? valid_1_13 : _GEN_1611; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1762 = 4'h3 == state ? valid_1_14 : _GEN_1612; // @[d_cache.scala 65:18 25:26]
  wire  _GEN_1763 = 4'h3 == state ? valid_1_15 : _GEN_1613; // @[d_cache.scala 65:18 25:26]
  wire [127:0] _GEN_1764 = 4'h3 == state ? write_back_data : _GEN_1614; // @[d_cache.scala 65:18 31:34]
  wire [39:0] _GEN_1765 = 4'h3 == state ? {{8'd0}, write_back_addr} : _GEN_1615; // @[d_cache.scala 65:18 32:34]
  wire  _GEN_1766 = 4'h3 == state ? dirty_0_0 : _GEN_1616; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1767 = 4'h3 == state ? dirty_0_1 : _GEN_1617; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1768 = 4'h3 == state ? dirty_0_2 : _GEN_1618; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1769 = 4'h3 == state ? dirty_0_3 : _GEN_1619; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1770 = 4'h3 == state ? dirty_0_4 : _GEN_1620; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1771 = 4'h3 == state ? dirty_0_5 : _GEN_1621; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1772 = 4'h3 == state ? dirty_0_6 : _GEN_1622; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1773 = 4'h3 == state ? dirty_0_7 : _GEN_1623; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1774 = 4'h3 == state ? dirty_0_8 : _GEN_1624; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1775 = 4'h3 == state ? dirty_0_9 : _GEN_1625; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1776 = 4'h3 == state ? dirty_0_10 : _GEN_1626; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1777 = 4'h3 == state ? dirty_0_11 : _GEN_1627; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1778 = 4'h3 == state ? dirty_0_12 : _GEN_1628; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1779 = 4'h3 == state ? dirty_0_13 : _GEN_1629; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1780 = 4'h3 == state ? dirty_0_14 : _GEN_1630; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1781 = 4'h3 == state ? dirty_0_15 : _GEN_1631; // @[d_cache.scala 65:18 26:26]
  wire  _GEN_1782 = 4'h3 == state ? dirty_1_0 : _GEN_1632; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1783 = 4'h3 == state ? dirty_1_1 : _GEN_1633; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1784 = 4'h3 == state ? dirty_1_2 : _GEN_1634; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1785 = 4'h3 == state ? dirty_1_3 : _GEN_1635; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1786 = 4'h3 == state ? dirty_1_4 : _GEN_1636; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1787 = 4'h3 == state ? dirty_1_5 : _GEN_1637; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1788 = 4'h3 == state ? dirty_1_6 : _GEN_1638; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1789 = 4'h3 == state ? dirty_1_7 : _GEN_1639; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1790 = 4'h3 == state ? dirty_1_8 : _GEN_1640; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1791 = 4'h3 == state ? dirty_1_9 : _GEN_1641; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1792 = 4'h3 == state ? dirty_1_10 : _GEN_1642; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1793 = 4'h3 == state ? dirty_1_11 : _GEN_1643; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1794 = 4'h3 == state ? dirty_1_12 : _GEN_1644; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1795 = 4'h3 == state ? dirty_1_13 : _GEN_1645; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1796 = 4'h3 == state ? dirty_1_14 : _GEN_1646; // @[d_cache.scala 65:18 27:26]
  wire  _GEN_1797 = 4'h3 == state ? dirty_1_15 : _GEN_1647; // @[d_cache.scala 65:18 27:26]
  wire [39:0] _GEN_1947 = 4'h2 == state ? {{8'd0}, write_back_addr} : _GEN_1765; // @[d_cache.scala 65:18 32:34]
  wire [39:0] _GEN_2097 = 4'h1 == state ? {{8'd0}, write_back_addr} : _GEN_1947; // @[d_cache.scala 65:18 32:34]
  wire [39:0] _GEN_2247 = 4'h0 == state ? {{8'd0}, write_back_addr} : _GEN_2097; // @[d_cache.scala 65:18 32:34]
  wire [127:0] _io_to_lsu_rdata_T = _GEN_88 >> shift_bit; // @[d_cache.scala 215:49]
  wire [127:0] _io_to_lsu_rdata_T_1 = _GEN_136 >> shift_bit; // @[d_cache.scala 223:49]
  wire [127:0] _GEN_2248 = way1_hit ? _io_to_lsu_rdata_T_1 : 128'h0; // @[d_cache.scala 222:33 223:33 231:33]
  wire [127:0] _GEN_2251 = way0_hit ? _io_to_lsu_rdata_T : _GEN_2248; // @[d_cache.scala 214:23 215:33]
  wire  _GEN_2253 = way0_hit | way1_hit; // @[d_cache.scala 214:23 217:34]
  wire [63:0] _GEN_2485 = {{32'd0}, io_from_lsu_araddr}; // @[d_cache.scala 290:49]
  wire [63:0] _io_to_axi_araddr_T = _GEN_2485 & 64'hfffffffffffffff0; // @[d_cache.scala 290:49]
  wire  _T_32 = state == 4'h0 & _T_3; // @[d_cache.scala 358:27]
  wire [63:0] _GEN_2255 = state == 4'h0 & _T_3 ? io_from_axi_rdata : 64'h0; // @[d_cache.scala 358:117 359:23 362:29]
  wire  _GEN_2257 = state == 4'h0 & _T_3 & io_from_axi_rvalid; // @[d_cache.scala 358:117 359:23 364:30]
  wire  _GEN_2260 = state == 4'h0 & _T_3 & io_from_axi_bvalid; // @[d_cache.scala 358:117 359:23 367:30]
  wire  _GEN_2265 = state == 4'h0 & _T_3 & io_from_lsu_arvalid; // @[d_cache.scala 358:117 360:23 369:31]
  wire [31:0] _GEN_2267 = state == 4'h0 & _T_3 ? io_from_lsu_awaddr : 32'h0; // @[d_cache.scala 358:117 360:23 375:30]
  wire  _GEN_2271 = state == 4'h0 & _T_3 & io_from_lsu_awvalid; // @[d_cache.scala 358:117 360:23 376:31]
  wire [63:0] _GEN_2272 = state == 4'h0 & _T_3 ? io_from_lsu_wdata : 64'h0; // @[d_cache.scala 358:117 360:23 380:29]
  wire [7:0] _GEN_2273 = state == 4'h0 & _T_3 ? io_from_lsu_wstrb : 8'h0; // @[d_cache.scala 358:117 360:23 381:29]
  wire  _GEN_2275 = state == 4'h0 & _T_3 & io_from_lsu_wvalid; // @[d_cache.scala 358:117 360:23 383:30]
  wire [63:0] _GEN_2278 = state == 4'h7 ? io_from_axi_rdata : _GEN_2255; // @[d_cache.scala 354:30 355:19]
  wire  _GEN_2280 = state == 4'h7 ? io_from_axi_rvalid : _GEN_2257; // @[d_cache.scala 354:30 355:19]
  wire  _GEN_2283 = state == 4'h7 ? io_from_axi_bvalid : _GEN_2260; // @[d_cache.scala 354:30 355:19]
  wire  _GEN_2288 = state == 4'h7 ? io_from_lsu_arvalid : _GEN_2265; // @[d_cache.scala 354:30 356:19]
  wire [31:0] _GEN_2290 = state == 4'h7 ? io_from_lsu_awaddr : _GEN_2267; // @[d_cache.scala 354:30 356:19]
  wire  _GEN_2294 = state == 4'h7 ? io_from_lsu_awvalid : _GEN_2271; // @[d_cache.scala 354:30 356:19]
  wire [63:0] _GEN_2295 = state == 4'h7 ? io_from_lsu_wdata : _GEN_2272; // @[d_cache.scala 354:30 356:19]
  wire [7:0] _GEN_2296 = state == 4'h7 ? io_from_lsu_wstrb : _GEN_2273; // @[d_cache.scala 354:30 356:19]
  wire  _GEN_2298 = state == 4'h7 ? io_from_lsu_wvalid : _GEN_2275; // @[d_cache.scala 354:30 356:19]
  wire  _GEN_2299 = state == 4'h7 | _T_32; // @[d_cache.scala 354:30 356:19]
  wire [63:0] _GEN_2300 = state == 4'h6 ? 64'h0 : _GEN_2278; // @[d_cache.scala 330:35 331:25]
  wire  _GEN_2302 = state == 4'h6 ? 1'h0 : _GEN_2280; // @[d_cache.scala 330:35 333:26]
  wire  _GEN_2305 = state == 4'h6 ? 1'h0 : _GEN_2283; // @[d_cache.scala 330:35 336:26]
  wire  _GEN_2307 = state == 4'h6 ? 1'h0 : _GEN_2288; // @[d_cache.scala 330:35 338:27]
  wire [31:0] _GEN_2308 = state == 4'h6 ? 32'h0 : io_from_lsu_araddr; // @[d_cache.scala 330:35 339:26]
  wire [7:0] _GEN_2309 = state == 4'h6 ? 8'h1 : 8'h0; // @[d_cache.scala 330:35 340:25]
  wire  _GEN_2312 = state == 4'h6 ? 1'h0 : 1'h1; // @[d_cache.scala 330:35 343:26]
  wire [31:0] _GEN_2313 = state == 4'h6 ? write_back_addr : _GEN_2290; // @[d_cache.scala 330:35 344:26]
  wire  _GEN_2314 = state == 4'h6 | _GEN_2294; // @[d_cache.scala 330:35 345:27]
  wire [63:0] _GEN_2318 = state == 4'h6 ? write_back_data[63:0] : _GEN_2295; // @[d_cache.scala 330:35 349:25]
  wire [7:0] _GEN_2319 = state == 4'h6 ? 8'hff : _GEN_2296; // @[d_cache.scala 330:35 350:25]
  wire  _GEN_2321 = state == 4'h6 | _GEN_2298; // @[d_cache.scala 330:35 352:26]
  wire  _GEN_2322 = state == 4'h6 | _GEN_2299; // @[d_cache.scala 330:35 353:26]
  wire [63:0] _GEN_2323 = state == 4'h4 | state == 4'h8 ? 64'h0 : _GEN_2300; // @[d_cache.scala 305:50 306:25]
  wire  _GEN_2325 = state == 4'h4 | state == 4'h8 ? 1'h0 : _GEN_2302; // @[d_cache.scala 305:50 308:26]
  wire  _GEN_2328 = state == 4'h4 | state == 4'h8 ? io_from_axi_bvalid : _GEN_2305; // @[d_cache.scala 305:50 311:26]
  wire  _GEN_2330 = state == 4'h4 | state == 4'h8 ? 1'h0 : _GEN_2307; // @[d_cache.scala 305:50 313:27]
  wire [31:0] _GEN_2331 = state == 4'h4 | state == 4'h8 ? 32'h0 : _GEN_2308; // @[d_cache.scala 305:50 314:26]
  wire [7:0] _GEN_2332 = state == 4'h4 | state == 4'h8 ? 8'h0 : _GEN_2309; // @[d_cache.scala 305:50 315:25]
  wire  _GEN_2335 = state == 4'h4 | state == 4'h8 | _GEN_2312; // @[d_cache.scala 305:50 318:26]
  wire [31:0] _GEN_2336 = state == 4'h4 | state == 4'h8 ? io_from_lsu_awaddr : _GEN_2313; // @[d_cache.scala 305:50 319:26]
  wire  _GEN_2337 = state == 4'h4 | state == 4'h8 ? io_from_lsu_awvalid : _GEN_2314; // @[d_cache.scala 305:50 320:27]
  wire [63:0] _GEN_2341 = state == 4'h4 | state == 4'h8 ? io_from_lsu_wdata : _GEN_2318; // @[d_cache.scala 305:50 324:25]
  wire [7:0] _GEN_2342 = state == 4'h4 | state == 4'h8 ? io_from_lsu_wstrb : _GEN_2319; // @[d_cache.scala 305:50 325:25]
  wire  _GEN_2344 = state == 4'h4 | state == 4'h8 ? io_from_lsu_wvalid : _GEN_2321; // @[d_cache.scala 305:50 327:26]
  wire  _GEN_2345 = state == 4'h4 | state == 4'h8 | _GEN_2322; // @[d_cache.scala 305:50 328:26]
  wire [63:0] _GEN_2346 = state == 4'h3 ? 64'h0 : _GEN_2323; // @[d_cache.scala 281:31 282:25]
  wire  _GEN_2348 = state == 4'h3 ? 1'h0 : _GEN_2325; // @[d_cache.scala 281:31 284:26]
  wire  _GEN_2351 = state == 4'h3 ? 1'h0 : _GEN_2328; // @[d_cache.scala 281:31 287:26]
  wire  _GEN_2353 = state == 4'h3 | _GEN_2330; // @[d_cache.scala 281:31 289:27]
  wire [63:0] _GEN_2354 = state == 4'h3 ? _io_to_axi_araddr_T : {{32'd0}, _GEN_2331}; // @[d_cache.scala 281:31 290:26]
  wire [7:0] _GEN_2355 = state == 4'h3 ? 8'h1 : _GEN_2332; // @[d_cache.scala 281:31 291:25]
  wire  _GEN_2358 = state == 4'h3 | _GEN_2335; // @[d_cache.scala 281:31 294:26]
  wire [31:0] _GEN_2359 = state == 4'h3 ? 32'h0 : _GEN_2336; // @[d_cache.scala 281:31 295:26]
  wire  _GEN_2360 = state == 4'h3 ? 1'h0 : _GEN_2337; // @[d_cache.scala 281:31 296:27]
  wire [7:0] _GEN_2361 = state == 4'h3 ? 8'h0 : _GEN_2332; // @[d_cache.scala 281:31 297:25]
  wire [63:0] _GEN_2364 = state == 4'h3 ? 64'h0 : _GEN_2341; // @[d_cache.scala 281:31 300:25]
  wire [7:0] _GEN_2365 = state == 4'h3 ? 8'h0 : _GEN_2342; // @[d_cache.scala 281:31 301:25]
  wire  _GEN_2367 = state == 4'h3 ? 1'h0 : _GEN_2344; // @[d_cache.scala 281:31 303:26]
  wire  _GEN_2368 = state == 4'h3 ? 1'h0 : _GEN_2345; // @[d_cache.scala 281:31 304:26]
  wire  _GEN_2369 = state == 4'h2 ? 1'h0 : _GEN_2353; // @[d_cache.scala 239:33 240:27]
  wire [63:0] _GEN_2370 = state == 4'h2 ? {{32'd0}, io_from_lsu_araddr} : _GEN_2354; // @[d_cache.scala 239:33 241:26]
  wire [7:0] _GEN_2371 = state == 4'h2 ? 8'h0 : _GEN_2355; // @[d_cache.scala 239:33 242:25]
  wire  _GEN_2374 = state == 4'h2 ? 1'h0 : _GEN_2358; // @[d_cache.scala 239:33 245:26]
  wire [31:0] _GEN_2375 = state == 4'h2 ? 32'h0 : _GEN_2359; // @[d_cache.scala 239:33 246:26]
  wire  _GEN_2376 = state == 4'h2 ? 1'h0 : _GEN_2360; // @[d_cache.scala 239:33 247:27]
  wire [7:0] _GEN_2377 = state == 4'h2 ? 8'h0 : _GEN_2361; // @[d_cache.scala 239:33 248:25]
  wire [63:0] _GEN_2380 = state == 4'h2 ? 64'h0 : _GEN_2364; // @[d_cache.scala 239:33 251:25]
  wire [7:0] _GEN_2381 = state == 4'h2 ? 8'h0 : _GEN_2365; // @[d_cache.scala 239:33 252:25]
  wire  _GEN_2383 = state == 4'h2 ? 1'h0 : _GEN_2367; // @[d_cache.scala 239:33 254:26]
  wire  _GEN_2384 = state == 4'h2 ? 1'h0 : _GEN_2368; // @[d_cache.scala 239:33 255:26]
  wire [63:0] _GEN_2385 = state == 4'h2 ? 64'h0 : _GEN_2346; // @[d_cache.scala 239:33]
  wire  _GEN_2387 = state == 4'h2 ? 1'h0 : _GEN_2348; // @[d_cache.scala 239:33]
  wire  _GEN_2391 = state == 4'h2 ? _GEN_2253 : _GEN_2351; // @[d_cache.scala 239:33]
  wire [63:0] _GEN_2393 = state == 4'h1 ? {{32'd0}, io_from_lsu_araddr} : _GEN_2370; // @[d_cache.scala 197:27 199:26]
  wire [127:0] _GEN_2408 = state == 4'h1 ? _GEN_2251 : {{64'd0}, _GEN_2385}; // @[d_cache.scala 197:27]
  wire [39:0] _GEN_2486 = reset ? 40'h0 : _GEN_2247; // @[d_cache.scala 32:{34,34}]
  assign io_to_lsu_rdata = _GEN_2408[63:0];
  assign io_to_lsu_rvalid = state == 4'h1 ? _GEN_2253 : _GEN_2387; // @[d_cache.scala 197:27]
  assign io_to_lsu_bvalid = state == 4'h1 ? 1'h0 : _GEN_2391; // @[d_cache.scala 197:27]
  assign io_to_axi_araddr = _GEN_2393[31:0];
  assign io_to_axi_arlen = state == 4'h1 ? 8'h0 : _GEN_2371; // @[d_cache.scala 197:27 200:25]
  assign io_to_axi_arvalid = state == 4'h1 ? 1'h0 : _GEN_2369; // @[d_cache.scala 197:27 198:27]
  assign io_to_axi_rready = state == 4'h1 ? 1'h0 : _GEN_2374; // @[d_cache.scala 197:27 203:26]
  assign io_to_axi_awaddr = state == 4'h1 ? 32'h0 : _GEN_2375; // @[d_cache.scala 197:27 204:26]
  assign io_to_axi_awlen = state == 4'h1 ? 8'h0 : _GEN_2377; // @[d_cache.scala 197:27 206:25]
  assign io_to_axi_awvalid = state == 4'h1 ? 1'h0 : _GEN_2376; // @[d_cache.scala 197:27 205:27]
  assign io_to_axi_wdata = state == 4'h1 ? 64'h0 : _GEN_2380; // @[d_cache.scala 197:27 209:25]
  assign io_to_axi_wstrb = state == 4'h1 ? 8'h0 : _GEN_2381; // @[d_cache.scala 197:27 210:25]
  assign io_to_axi_wvalid = state == 4'h1 ? 1'h0 : _GEN_2383; // @[d_cache.scala 197:27 212:26]
  assign io_to_axi_bready = state == 4'h1 ? 1'h0 : _GEN_2384; // @[d_cache.scala 197:27 213:26]
  always @(posedge clock) begin
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_0 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_0 <= _GEN_203;
        end else begin
          ram_0_0 <= _GEN_1652;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_1 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_1 <= _GEN_204;
        end else begin
          ram_0_1 <= _GEN_1653;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_2 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_2 <= _GEN_205;
        end else begin
          ram_0_2 <= _GEN_1654;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_3 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_3 <= _GEN_206;
        end else begin
          ram_0_3 <= _GEN_1655;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_4 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_4 <= _GEN_207;
        end else begin
          ram_0_4 <= _GEN_1656;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_5 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_5 <= _GEN_208;
        end else begin
          ram_0_5 <= _GEN_1657;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_6 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_6 <= _GEN_209;
        end else begin
          ram_0_6 <= _GEN_1658;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_7 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_7 <= _GEN_210;
        end else begin
          ram_0_7 <= _GEN_1659;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_8 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_8 <= _GEN_211;
        end else begin
          ram_0_8 <= _GEN_1660;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_9 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_9 <= _GEN_212;
        end else begin
          ram_0_9 <= _GEN_1661;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_10 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_10 <= _GEN_213;
        end else begin
          ram_0_10 <= _GEN_1662;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_11 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_11 <= _GEN_214;
        end else begin
          ram_0_11 <= _GEN_1663;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_12 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_12 <= _GEN_215;
        end else begin
          ram_0_12 <= _GEN_1664;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_13 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_13 <= _GEN_216;
        end else begin
          ram_0_13 <= _GEN_1665;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_14 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_14 <= _GEN_217;
        end else begin
          ram_0_14 <= _GEN_1666;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_15 <= 128'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_0_15 <= _GEN_218;
        end else begin
          ram_0_15 <= _GEN_1667;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_0 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_0 <= _GEN_235;
        end else begin
          ram_1_0 <= _GEN_1716;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_1 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_1 <= _GEN_236;
        end else begin
          ram_1_1 <= _GEN_1717;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_2 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_2 <= _GEN_237;
        end else begin
          ram_1_2 <= _GEN_1718;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_3 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_3 <= _GEN_238;
        end else begin
          ram_1_3 <= _GEN_1719;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_4 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_4 <= _GEN_239;
        end else begin
          ram_1_4 <= _GEN_1720;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_5 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_5 <= _GEN_240;
        end else begin
          ram_1_5 <= _GEN_1721;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_6 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_6 <= _GEN_241;
        end else begin
          ram_1_6 <= _GEN_1722;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_7 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_7 <= _GEN_242;
        end else begin
          ram_1_7 <= _GEN_1723;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_8 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_8 <= _GEN_243;
        end else begin
          ram_1_8 <= _GEN_1724;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_9 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_9 <= _GEN_244;
        end else begin
          ram_1_9 <= _GEN_1725;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_10 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_10 <= _GEN_245;
        end else begin
          ram_1_10 <= _GEN_1726;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_11 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_11 <= _GEN_246;
        end else begin
          ram_1_11 <= _GEN_1727;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_12 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_12 <= _GEN_247;
        end else begin
          ram_1_12 <= _GEN_1728;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_13 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_13 <= _GEN_248;
        end else begin
          ram_1_13 <= _GEN_1729;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_14 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_14 <= _GEN_249;
        end else begin
          ram_1_14 <= _GEN_1730;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_15 <= 128'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          ram_1_15 <= _GEN_250;
        end else begin
          ram_1_15 <= _GEN_1731;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_0 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_0 <= _GEN_1668;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_1 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_1 <= _GEN_1669;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_2 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_2 <= _GEN_1670;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_3 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_3 <= _GEN_1671;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_4 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_4 <= _GEN_1672;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_5 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_5 <= _GEN_1673;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_6 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_6 <= _GEN_1674;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_7 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_7 <= _GEN_1675;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_8 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_8 <= _GEN_1676;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_9 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_9 <= _GEN_1677;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_10 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_10 <= _GEN_1678;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_11 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_11 <= _GEN_1679;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_12 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_12 <= _GEN_1680;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_13 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_13 <= _GEN_1681;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_14 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_14 <= _GEN_1682;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_15 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_0_15 <= _GEN_1683;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_0 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_0 <= _GEN_1732;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_1 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_1 <= _GEN_1733;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_2 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_2 <= _GEN_1734;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_3 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_3 <= _GEN_1735;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_4 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_4 <= _GEN_1736;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_5 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_5 <= _GEN_1737;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_6 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_6 <= _GEN_1738;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_7 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_7 <= _GEN_1739;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_8 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_8 <= _GEN_1740;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_9 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_9 <= _GEN_1741;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_10 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_10 <= _GEN_1742;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_11 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_11 <= _GEN_1743;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_12 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_12 <= _GEN_1744;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_13 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_13 <= _GEN_1745;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_14 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_14 <= _GEN_1746;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_15 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          tag_1_15 <= _GEN_1747;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_0 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_0 <= _GEN_1684;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_1 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_1 <= _GEN_1685;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_2 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_2 <= _GEN_1686;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_3 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_3 <= _GEN_1687;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_4 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_4 <= _GEN_1688;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_5 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_5 <= _GEN_1689;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_6 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_6 <= _GEN_1690;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_7 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_7 <= _GEN_1691;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_8 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_8 <= _GEN_1692;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_9 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_9 <= _GEN_1693;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_10 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_10 <= _GEN_1694;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_11 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_11 <= _GEN_1695;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_12 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_12 <= _GEN_1696;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_13 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_13 <= _GEN_1697;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_14 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_14 <= _GEN_1698;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_15 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_0_15 <= _GEN_1699;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_0 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_0 <= _GEN_1748;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_1 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_1 <= _GEN_1749;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_2 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_2 <= _GEN_1750;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_3 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_3 <= _GEN_1751;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_4 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_4 <= _GEN_1752;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_5 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_5 <= _GEN_1753;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_6 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_6 <= _GEN_1754;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_7 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_7 <= _GEN_1755;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_8 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_8 <= _GEN_1756;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_9 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_9 <= _GEN_1757;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_10 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_10 <= _GEN_1758;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_11 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_11 <= _GEN_1759;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_12 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_12 <= _GEN_1760;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_13 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_13 <= _GEN_1761;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_14 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_14 <= _GEN_1762;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_15 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          valid_1_15 <= _GEN_1763;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_0 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_0 <= _GEN_219;
        end else begin
          dirty_0_0 <= _GEN_1766;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_1 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_1 <= _GEN_220;
        end else begin
          dirty_0_1 <= _GEN_1767;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_2 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_2 <= _GEN_221;
        end else begin
          dirty_0_2 <= _GEN_1768;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_3 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_3 <= _GEN_222;
        end else begin
          dirty_0_3 <= _GEN_1769;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_4 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_4 <= _GEN_223;
        end else begin
          dirty_0_4 <= _GEN_1770;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_5 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_5 <= _GEN_224;
        end else begin
          dirty_0_5 <= _GEN_1771;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_6 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_6 <= _GEN_225;
        end else begin
          dirty_0_6 <= _GEN_1772;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_7 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_7 <= _GEN_226;
        end else begin
          dirty_0_7 <= _GEN_1773;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_8 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_8 <= _GEN_227;
        end else begin
          dirty_0_8 <= _GEN_1774;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_9 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_9 <= _GEN_228;
        end else begin
          dirty_0_9 <= _GEN_1775;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_10 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_10 <= _GEN_229;
        end else begin
          dirty_0_10 <= _GEN_1776;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_11 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_11 <= _GEN_230;
        end else begin
          dirty_0_11 <= _GEN_1777;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_12 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_12 <= _GEN_231;
        end else begin
          dirty_0_12 <= _GEN_1778;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_13 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_13 <= _GEN_232;
        end else begin
          dirty_0_13 <= _GEN_1779;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_14 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_14 <= _GEN_233;
        end else begin
          dirty_0_14 <= _GEN_1780;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_15 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_0_15 <= _GEN_234;
        end else begin
          dirty_0_15 <= _GEN_1781;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_0 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_0 <= _GEN_251;
        end else begin
          dirty_1_0 <= _GEN_1782;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_1 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_1 <= _GEN_252;
        end else begin
          dirty_1_1 <= _GEN_1783;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_2 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_2 <= _GEN_253;
        end else begin
          dirty_1_2 <= _GEN_1784;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_3 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_3 <= _GEN_254;
        end else begin
          dirty_1_3 <= _GEN_1785;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_4 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_4 <= _GEN_255;
        end else begin
          dirty_1_4 <= _GEN_1786;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_5 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_5 <= _GEN_256;
        end else begin
          dirty_1_5 <= _GEN_1787;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_6 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_6 <= _GEN_257;
        end else begin
          dirty_1_6 <= _GEN_1788;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_7 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_7 <= _GEN_258;
        end else begin
          dirty_1_7 <= _GEN_1789;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_8 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_8 <= _GEN_259;
        end else begin
          dirty_1_8 <= _GEN_1790;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_9 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_9 <= _GEN_260;
        end else begin
          dirty_1_9 <= _GEN_1791;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_10 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_10 <= _GEN_261;
        end else begin
          dirty_1_10 <= _GEN_1792;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_11 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_11 <= _GEN_262;
        end else begin
          dirty_1_11 <= _GEN_1793;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_12 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_12 <= _GEN_263;
        end else begin
          dirty_1_12 <= _GEN_1794;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_13 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_13 <= _GEN_264;
        end else begin
          dirty_1_13 <= _GEN_1795;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_14 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_14 <= _GEN_265;
        end else begin
          dirty_1_14 <= _GEN_1796;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_15 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (4'h2 == state) begin // @[d_cache.scala 65:18]
          dirty_1_15 <= _GEN_266;
        end else begin
          dirty_1_15 <= _GEN_1797;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:34]
      write_back_data <= 128'h0; // @[d_cache.scala 31:34]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          write_back_data <= _GEN_1764;
        end
      end
    end
    write_back_addr <= _GEN_2486[31:0]; // @[d_cache.scala 32:{34,34}]
    if (reset) begin // @[d_cache.scala 37:31]
      receive_data_0 <= 64'h0; // @[d_cache.scala 37:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          receive_data_0 <= _GEN_1648;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 37:31]
      receive_data_1 <= 64'h0; // @[d_cache.scala 37:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          receive_data_1 <= _GEN_1649;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 38:30]
      receive_num <= 3'h0; // @[d_cache.scala 38:30]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (4'h1 == state) begin // @[d_cache.scala 65:18]
        if (!(way0_hit)) begin // @[d_cache.scala 76:27]
          receive_num <= _GEN_69;
        end
      end else if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
        receive_num <= _GEN_1650;
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_0 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_0 <= _GEN_1700;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_1 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_1 <= _GEN_1701;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_2 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_2 <= _GEN_1702;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_3 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_3 <= _GEN_1703;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_4 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_4 <= _GEN_1704;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_5 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_5 <= _GEN_1705;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_6 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_6 <= _GEN_1706;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_7 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_7 <= _GEN_1707;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_8 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_8 <= _GEN_1708;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_9 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_9 <= _GEN_1709;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_10 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_10 <= _GEN_1710;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_11 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_11 <= _GEN_1711;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_12 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_12 <= _GEN_1712;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_13 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_13 <= _GEN_1713;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_14 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_14 <= _GEN_1714;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_15 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 65:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 65:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 65:18]
          quene_15 <= _GEN_1715;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 60:24]
      state <= 4'h0; // @[d_cache.scala 60:24]
    end else if (4'h0 == state) begin // @[d_cache.scala 65:18]
      if ((io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000) begin // @[d_cache.scala 67:99]
        state <= 4'h0; // @[d_cache.scala 68:23]
      end else if (io_from_lsu_arvalid) begin // @[d_cache.scala 69:44]
        state <= 4'h1; // @[d_cache.scala 70:23]
      end else begin
        state <= _GEN_64;
      end
    end else if (4'h1 == state) begin // @[d_cache.scala 65:18]
      if (way0_hit) begin // @[d_cache.scala 76:27]
        state <= 4'h0;
      end else begin
        state <= _GEN_68;
      end
    end else if (4'h2 == state) begin // @[d_cache.scala 65:18]
      state <= _GEN_202;
    end else begin
      state <= _GEN_1651;
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
  _RAND_0 = {4{`RANDOM}};
  ram_0_0 = _RAND_0[127:0];
  _RAND_1 = {4{`RANDOM}};
  ram_0_1 = _RAND_1[127:0];
  _RAND_2 = {4{`RANDOM}};
  ram_0_2 = _RAND_2[127:0];
  _RAND_3 = {4{`RANDOM}};
  ram_0_3 = _RAND_3[127:0];
  _RAND_4 = {4{`RANDOM}};
  ram_0_4 = _RAND_4[127:0];
  _RAND_5 = {4{`RANDOM}};
  ram_0_5 = _RAND_5[127:0];
  _RAND_6 = {4{`RANDOM}};
  ram_0_6 = _RAND_6[127:0];
  _RAND_7 = {4{`RANDOM}};
  ram_0_7 = _RAND_7[127:0];
  _RAND_8 = {4{`RANDOM}};
  ram_0_8 = _RAND_8[127:0];
  _RAND_9 = {4{`RANDOM}};
  ram_0_9 = _RAND_9[127:0];
  _RAND_10 = {4{`RANDOM}};
  ram_0_10 = _RAND_10[127:0];
  _RAND_11 = {4{`RANDOM}};
  ram_0_11 = _RAND_11[127:0];
  _RAND_12 = {4{`RANDOM}};
  ram_0_12 = _RAND_12[127:0];
  _RAND_13 = {4{`RANDOM}};
  ram_0_13 = _RAND_13[127:0];
  _RAND_14 = {4{`RANDOM}};
  ram_0_14 = _RAND_14[127:0];
  _RAND_15 = {4{`RANDOM}};
  ram_0_15 = _RAND_15[127:0];
  _RAND_16 = {4{`RANDOM}};
  ram_1_0 = _RAND_16[127:0];
  _RAND_17 = {4{`RANDOM}};
  ram_1_1 = _RAND_17[127:0];
  _RAND_18 = {4{`RANDOM}};
  ram_1_2 = _RAND_18[127:0];
  _RAND_19 = {4{`RANDOM}};
  ram_1_3 = _RAND_19[127:0];
  _RAND_20 = {4{`RANDOM}};
  ram_1_4 = _RAND_20[127:0];
  _RAND_21 = {4{`RANDOM}};
  ram_1_5 = _RAND_21[127:0];
  _RAND_22 = {4{`RANDOM}};
  ram_1_6 = _RAND_22[127:0];
  _RAND_23 = {4{`RANDOM}};
  ram_1_7 = _RAND_23[127:0];
  _RAND_24 = {4{`RANDOM}};
  ram_1_8 = _RAND_24[127:0];
  _RAND_25 = {4{`RANDOM}};
  ram_1_9 = _RAND_25[127:0];
  _RAND_26 = {4{`RANDOM}};
  ram_1_10 = _RAND_26[127:0];
  _RAND_27 = {4{`RANDOM}};
  ram_1_11 = _RAND_27[127:0];
  _RAND_28 = {4{`RANDOM}};
  ram_1_12 = _RAND_28[127:0];
  _RAND_29 = {4{`RANDOM}};
  ram_1_13 = _RAND_29[127:0];
  _RAND_30 = {4{`RANDOM}};
  ram_1_14 = _RAND_30[127:0];
  _RAND_31 = {4{`RANDOM}};
  ram_1_15 = _RAND_31[127:0];
  _RAND_32 = {1{`RANDOM}};
  tag_0_0 = _RAND_32[31:0];
  _RAND_33 = {1{`RANDOM}};
  tag_0_1 = _RAND_33[31:0];
  _RAND_34 = {1{`RANDOM}};
  tag_0_2 = _RAND_34[31:0];
  _RAND_35 = {1{`RANDOM}};
  tag_0_3 = _RAND_35[31:0];
  _RAND_36 = {1{`RANDOM}};
  tag_0_4 = _RAND_36[31:0];
  _RAND_37 = {1{`RANDOM}};
  tag_0_5 = _RAND_37[31:0];
  _RAND_38 = {1{`RANDOM}};
  tag_0_6 = _RAND_38[31:0];
  _RAND_39 = {1{`RANDOM}};
  tag_0_7 = _RAND_39[31:0];
  _RAND_40 = {1{`RANDOM}};
  tag_0_8 = _RAND_40[31:0];
  _RAND_41 = {1{`RANDOM}};
  tag_0_9 = _RAND_41[31:0];
  _RAND_42 = {1{`RANDOM}};
  tag_0_10 = _RAND_42[31:0];
  _RAND_43 = {1{`RANDOM}};
  tag_0_11 = _RAND_43[31:0];
  _RAND_44 = {1{`RANDOM}};
  tag_0_12 = _RAND_44[31:0];
  _RAND_45 = {1{`RANDOM}};
  tag_0_13 = _RAND_45[31:0];
  _RAND_46 = {1{`RANDOM}};
  tag_0_14 = _RAND_46[31:0];
  _RAND_47 = {1{`RANDOM}};
  tag_0_15 = _RAND_47[31:0];
  _RAND_48 = {1{`RANDOM}};
  tag_1_0 = _RAND_48[31:0];
  _RAND_49 = {1{`RANDOM}};
  tag_1_1 = _RAND_49[31:0];
  _RAND_50 = {1{`RANDOM}};
  tag_1_2 = _RAND_50[31:0];
  _RAND_51 = {1{`RANDOM}};
  tag_1_3 = _RAND_51[31:0];
  _RAND_52 = {1{`RANDOM}};
  tag_1_4 = _RAND_52[31:0];
  _RAND_53 = {1{`RANDOM}};
  tag_1_5 = _RAND_53[31:0];
  _RAND_54 = {1{`RANDOM}};
  tag_1_6 = _RAND_54[31:0];
  _RAND_55 = {1{`RANDOM}};
  tag_1_7 = _RAND_55[31:0];
  _RAND_56 = {1{`RANDOM}};
  tag_1_8 = _RAND_56[31:0];
  _RAND_57 = {1{`RANDOM}};
  tag_1_9 = _RAND_57[31:0];
  _RAND_58 = {1{`RANDOM}};
  tag_1_10 = _RAND_58[31:0];
  _RAND_59 = {1{`RANDOM}};
  tag_1_11 = _RAND_59[31:0];
  _RAND_60 = {1{`RANDOM}};
  tag_1_12 = _RAND_60[31:0];
  _RAND_61 = {1{`RANDOM}};
  tag_1_13 = _RAND_61[31:0];
  _RAND_62 = {1{`RANDOM}};
  tag_1_14 = _RAND_62[31:0];
  _RAND_63 = {1{`RANDOM}};
  tag_1_15 = _RAND_63[31:0];
  _RAND_64 = {1{`RANDOM}};
  valid_0_0 = _RAND_64[0:0];
  _RAND_65 = {1{`RANDOM}};
  valid_0_1 = _RAND_65[0:0];
  _RAND_66 = {1{`RANDOM}};
  valid_0_2 = _RAND_66[0:0];
  _RAND_67 = {1{`RANDOM}};
  valid_0_3 = _RAND_67[0:0];
  _RAND_68 = {1{`RANDOM}};
  valid_0_4 = _RAND_68[0:0];
  _RAND_69 = {1{`RANDOM}};
  valid_0_5 = _RAND_69[0:0];
  _RAND_70 = {1{`RANDOM}};
  valid_0_6 = _RAND_70[0:0];
  _RAND_71 = {1{`RANDOM}};
  valid_0_7 = _RAND_71[0:0];
  _RAND_72 = {1{`RANDOM}};
  valid_0_8 = _RAND_72[0:0];
  _RAND_73 = {1{`RANDOM}};
  valid_0_9 = _RAND_73[0:0];
  _RAND_74 = {1{`RANDOM}};
  valid_0_10 = _RAND_74[0:0];
  _RAND_75 = {1{`RANDOM}};
  valid_0_11 = _RAND_75[0:0];
  _RAND_76 = {1{`RANDOM}};
  valid_0_12 = _RAND_76[0:0];
  _RAND_77 = {1{`RANDOM}};
  valid_0_13 = _RAND_77[0:0];
  _RAND_78 = {1{`RANDOM}};
  valid_0_14 = _RAND_78[0:0];
  _RAND_79 = {1{`RANDOM}};
  valid_0_15 = _RAND_79[0:0];
  _RAND_80 = {1{`RANDOM}};
  valid_1_0 = _RAND_80[0:0];
  _RAND_81 = {1{`RANDOM}};
  valid_1_1 = _RAND_81[0:0];
  _RAND_82 = {1{`RANDOM}};
  valid_1_2 = _RAND_82[0:0];
  _RAND_83 = {1{`RANDOM}};
  valid_1_3 = _RAND_83[0:0];
  _RAND_84 = {1{`RANDOM}};
  valid_1_4 = _RAND_84[0:0];
  _RAND_85 = {1{`RANDOM}};
  valid_1_5 = _RAND_85[0:0];
  _RAND_86 = {1{`RANDOM}};
  valid_1_6 = _RAND_86[0:0];
  _RAND_87 = {1{`RANDOM}};
  valid_1_7 = _RAND_87[0:0];
  _RAND_88 = {1{`RANDOM}};
  valid_1_8 = _RAND_88[0:0];
  _RAND_89 = {1{`RANDOM}};
  valid_1_9 = _RAND_89[0:0];
  _RAND_90 = {1{`RANDOM}};
  valid_1_10 = _RAND_90[0:0];
  _RAND_91 = {1{`RANDOM}};
  valid_1_11 = _RAND_91[0:0];
  _RAND_92 = {1{`RANDOM}};
  valid_1_12 = _RAND_92[0:0];
  _RAND_93 = {1{`RANDOM}};
  valid_1_13 = _RAND_93[0:0];
  _RAND_94 = {1{`RANDOM}};
  valid_1_14 = _RAND_94[0:0];
  _RAND_95 = {1{`RANDOM}};
  valid_1_15 = _RAND_95[0:0];
  _RAND_96 = {1{`RANDOM}};
  dirty_0_0 = _RAND_96[0:0];
  _RAND_97 = {1{`RANDOM}};
  dirty_0_1 = _RAND_97[0:0];
  _RAND_98 = {1{`RANDOM}};
  dirty_0_2 = _RAND_98[0:0];
  _RAND_99 = {1{`RANDOM}};
  dirty_0_3 = _RAND_99[0:0];
  _RAND_100 = {1{`RANDOM}};
  dirty_0_4 = _RAND_100[0:0];
  _RAND_101 = {1{`RANDOM}};
  dirty_0_5 = _RAND_101[0:0];
  _RAND_102 = {1{`RANDOM}};
  dirty_0_6 = _RAND_102[0:0];
  _RAND_103 = {1{`RANDOM}};
  dirty_0_7 = _RAND_103[0:0];
  _RAND_104 = {1{`RANDOM}};
  dirty_0_8 = _RAND_104[0:0];
  _RAND_105 = {1{`RANDOM}};
  dirty_0_9 = _RAND_105[0:0];
  _RAND_106 = {1{`RANDOM}};
  dirty_0_10 = _RAND_106[0:0];
  _RAND_107 = {1{`RANDOM}};
  dirty_0_11 = _RAND_107[0:0];
  _RAND_108 = {1{`RANDOM}};
  dirty_0_12 = _RAND_108[0:0];
  _RAND_109 = {1{`RANDOM}};
  dirty_0_13 = _RAND_109[0:0];
  _RAND_110 = {1{`RANDOM}};
  dirty_0_14 = _RAND_110[0:0];
  _RAND_111 = {1{`RANDOM}};
  dirty_0_15 = _RAND_111[0:0];
  _RAND_112 = {1{`RANDOM}};
  dirty_1_0 = _RAND_112[0:0];
  _RAND_113 = {1{`RANDOM}};
  dirty_1_1 = _RAND_113[0:0];
  _RAND_114 = {1{`RANDOM}};
  dirty_1_2 = _RAND_114[0:0];
  _RAND_115 = {1{`RANDOM}};
  dirty_1_3 = _RAND_115[0:0];
  _RAND_116 = {1{`RANDOM}};
  dirty_1_4 = _RAND_116[0:0];
  _RAND_117 = {1{`RANDOM}};
  dirty_1_5 = _RAND_117[0:0];
  _RAND_118 = {1{`RANDOM}};
  dirty_1_6 = _RAND_118[0:0];
  _RAND_119 = {1{`RANDOM}};
  dirty_1_7 = _RAND_119[0:0];
  _RAND_120 = {1{`RANDOM}};
  dirty_1_8 = _RAND_120[0:0];
  _RAND_121 = {1{`RANDOM}};
  dirty_1_9 = _RAND_121[0:0];
  _RAND_122 = {1{`RANDOM}};
  dirty_1_10 = _RAND_122[0:0];
  _RAND_123 = {1{`RANDOM}};
  dirty_1_11 = _RAND_123[0:0];
  _RAND_124 = {1{`RANDOM}};
  dirty_1_12 = _RAND_124[0:0];
  _RAND_125 = {1{`RANDOM}};
  dirty_1_13 = _RAND_125[0:0];
  _RAND_126 = {1{`RANDOM}};
  dirty_1_14 = _RAND_126[0:0];
  _RAND_127 = {1{`RANDOM}};
  dirty_1_15 = _RAND_127[0:0];
  _RAND_128 = {4{`RANDOM}};
  write_back_data = _RAND_128[127:0];
  _RAND_129 = {1{`RANDOM}};
  write_back_addr = _RAND_129[31:0];
  _RAND_130 = {2{`RANDOM}};
  receive_data_0 = _RAND_130[63:0];
  _RAND_131 = {2{`RANDOM}};
  receive_data_1 = _RAND_131[63:0];
  _RAND_132 = {1{`RANDOM}};
  receive_num = _RAND_132[2:0];
  _RAND_133 = {1{`RANDOM}};
  quene_0 = _RAND_133[1:0];
  _RAND_134 = {1{`RANDOM}};
  quene_1 = _RAND_134[1:0];
  _RAND_135 = {1{`RANDOM}};
  quene_2 = _RAND_135[1:0];
  _RAND_136 = {1{`RANDOM}};
  quene_3 = _RAND_136[1:0];
  _RAND_137 = {1{`RANDOM}};
  quene_4 = _RAND_137[1:0];
  _RAND_138 = {1{`RANDOM}};
  quene_5 = _RAND_138[1:0];
  _RAND_139 = {1{`RANDOM}};
  quene_6 = _RAND_139[1:0];
  _RAND_140 = {1{`RANDOM}};
  quene_7 = _RAND_140[1:0];
  _RAND_141 = {1{`RANDOM}};
  quene_8 = _RAND_141[1:0];
  _RAND_142 = {1{`RANDOM}};
  quene_9 = _RAND_142[1:0];
  _RAND_143 = {1{`RANDOM}};
  quene_10 = _RAND_143[1:0];
  _RAND_144 = {1{`RANDOM}};
  quene_11 = _RAND_144[1:0];
  _RAND_145 = {1{`RANDOM}};
  quene_12 = _RAND_145[1:0];
  _RAND_146 = {1{`RANDOM}};
  quene_13 = _RAND_146[1:0];
  _RAND_147 = {1{`RANDOM}};
  quene_14 = _RAND_147[1:0];
  _RAND_148 = {1{`RANDOM}};
  quene_15 = _RAND_148[1:0];
  _RAND_149 = {1{`RANDOM}};
  state = _RAND_149[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
