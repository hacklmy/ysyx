module D_CACHE(
  input         clock,
  input         reset,
  input  [31:0] io_from_lsu_araddr,
  input         io_from_lsu_arvalid,
  input         io_from_lsu_rready,
  input  [31:0] io_from_lsu_awaddr,
  input         io_from_lsu_awvalid,
  input  [63:0] io_from_lsu_wdata,
  input  [7:0]  io_from_lsu_wstrb,
  input         io_from_lsu_wvalid,
  input         io_from_lsu_bready,
  output        io_to_lsu_arready,
  output [63:0] io_to_lsu_rdata,
  output        io_to_lsu_rvalid,
  output        io_to_lsu_awready,
  output        io_to_lsu_wready,
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
  input         io_from_axi_awready,
  input         io_from_axi_wready,
  input         io_from_axi_bvalid
);
`ifdef RANDOMIZE_REG_INIT
  reg [511:0] _RAND_0;
  reg [511:0] _RAND_1;
  reg [511:0] _RAND_2;
  reg [511:0] _RAND_3;
  reg [511:0] _RAND_4;
  reg [511:0] _RAND_5;
  reg [511:0] _RAND_6;
  reg [511:0] _RAND_7;
  reg [511:0] _RAND_8;
  reg [511:0] _RAND_9;
  reg [511:0] _RAND_10;
  reg [511:0] _RAND_11;
  reg [511:0] _RAND_12;
  reg [511:0] _RAND_13;
  reg [511:0] _RAND_14;
  reg [511:0] _RAND_15;
  reg [511:0] _RAND_16;
  reg [511:0] _RAND_17;
  reg [511:0] _RAND_18;
  reg [511:0] _RAND_19;
  reg [511:0] _RAND_20;
  reg [511:0] _RAND_21;
  reg [511:0] _RAND_22;
  reg [511:0] _RAND_23;
  reg [511:0] _RAND_24;
  reg [511:0] _RAND_25;
  reg [511:0] _RAND_26;
  reg [511:0] _RAND_27;
  reg [511:0] _RAND_28;
  reg [511:0] _RAND_29;
  reg [511:0] _RAND_30;
  reg [511:0] _RAND_31;
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
  reg [31:0] _RAND_128;
  reg [31:0] _RAND_129;
  reg [511:0] _RAND_130;
  reg [31:0] _RAND_131;
  reg [31:0] _RAND_132;
  reg [63:0] _RAND_133;
  reg [63:0] _RAND_134;
  reg [63:0] _RAND_135;
  reg [63:0] _RAND_136;
  reg [63:0] _RAND_137;
  reg [63:0] _RAND_138;
  reg [63:0] _RAND_139;
  reg [63:0] _RAND_140;
  reg [31:0] _RAND_141;
  reg [31:0] _RAND_142;
  reg [31:0] _RAND_143;
`endif // RANDOMIZE_REG_INIT
  reg [511:0] ram_0_0; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_1; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_2; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_3; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_4; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_5; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_6; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_7; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_8; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_9; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_10; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_11; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_12; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_13; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_14; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_15; // @[d_cache.scala 19:24]
  reg [511:0] ram_1_0; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_1; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_2; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_3; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_4; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_5; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_6; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_7; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_8; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_9; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_10; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_11; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_12; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_13; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_14; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_15; // @[d_cache.scala 20:24]
  reg [31:0] tag_0_0; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_1; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_2; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_3; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_4; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_5; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_6; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_7; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_8; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_9; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_10; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_11; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_12; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_13; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_14; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_15; // @[d_cache.scala 28:24]
  reg [31:0] tag_1_0; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_1; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_2; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_3; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_4; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_5; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_6; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_7; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_8; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_9; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_10; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_11; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_12; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_13; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_14; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_15; // @[d_cache.scala 29:24]
  reg  valid_0_0; // @[d_cache.scala 30:26]
  reg  valid_0_1; // @[d_cache.scala 30:26]
  reg  valid_0_2; // @[d_cache.scala 30:26]
  reg  valid_0_3; // @[d_cache.scala 30:26]
  reg  valid_0_4; // @[d_cache.scala 30:26]
  reg  valid_0_5; // @[d_cache.scala 30:26]
  reg  valid_0_6; // @[d_cache.scala 30:26]
  reg  valid_0_7; // @[d_cache.scala 30:26]
  reg  valid_0_8; // @[d_cache.scala 30:26]
  reg  valid_0_9; // @[d_cache.scala 30:26]
  reg  valid_0_10; // @[d_cache.scala 30:26]
  reg  valid_0_11; // @[d_cache.scala 30:26]
  reg  valid_0_12; // @[d_cache.scala 30:26]
  reg  valid_0_13; // @[d_cache.scala 30:26]
  reg  valid_0_14; // @[d_cache.scala 30:26]
  reg  valid_0_15; // @[d_cache.scala 30:26]
  reg  valid_1_0; // @[d_cache.scala 31:26]
  reg  valid_1_1; // @[d_cache.scala 31:26]
  reg  valid_1_2; // @[d_cache.scala 31:26]
  reg  valid_1_3; // @[d_cache.scala 31:26]
  reg  valid_1_4; // @[d_cache.scala 31:26]
  reg  valid_1_5; // @[d_cache.scala 31:26]
  reg  valid_1_6; // @[d_cache.scala 31:26]
  reg  valid_1_7; // @[d_cache.scala 31:26]
  reg  valid_1_8; // @[d_cache.scala 31:26]
  reg  valid_1_9; // @[d_cache.scala 31:26]
  reg  valid_1_10; // @[d_cache.scala 31:26]
  reg  valid_1_11; // @[d_cache.scala 31:26]
  reg  valid_1_12; // @[d_cache.scala 31:26]
  reg  valid_1_13; // @[d_cache.scala 31:26]
  reg  valid_1_14; // @[d_cache.scala 31:26]
  reg  valid_1_15; // @[d_cache.scala 31:26]
  reg  dirty_0_0; // @[d_cache.scala 32:26]
  reg  dirty_0_1; // @[d_cache.scala 32:26]
  reg  dirty_0_2; // @[d_cache.scala 32:26]
  reg  dirty_0_3; // @[d_cache.scala 32:26]
  reg  dirty_0_4; // @[d_cache.scala 32:26]
  reg  dirty_0_5; // @[d_cache.scala 32:26]
  reg  dirty_0_6; // @[d_cache.scala 32:26]
  reg  dirty_0_7; // @[d_cache.scala 32:26]
  reg  dirty_0_8; // @[d_cache.scala 32:26]
  reg  dirty_0_9; // @[d_cache.scala 32:26]
  reg  dirty_0_10; // @[d_cache.scala 32:26]
  reg  dirty_0_11; // @[d_cache.scala 32:26]
  reg  dirty_0_12; // @[d_cache.scala 32:26]
  reg  dirty_0_13; // @[d_cache.scala 32:26]
  reg  dirty_0_14; // @[d_cache.scala 32:26]
  reg  dirty_0_15; // @[d_cache.scala 32:26]
  reg  dirty_1_0; // @[d_cache.scala 33:26]
  reg  dirty_1_1; // @[d_cache.scala 33:26]
  reg  dirty_1_2; // @[d_cache.scala 33:26]
  reg  dirty_1_3; // @[d_cache.scala 33:26]
  reg  dirty_1_4; // @[d_cache.scala 33:26]
  reg  dirty_1_5; // @[d_cache.scala 33:26]
  reg  dirty_1_6; // @[d_cache.scala 33:26]
  reg  dirty_1_7; // @[d_cache.scala 33:26]
  reg  dirty_1_8; // @[d_cache.scala 33:26]
  reg  dirty_1_9; // @[d_cache.scala 33:26]
  reg  dirty_1_10; // @[d_cache.scala 33:26]
  reg  dirty_1_11; // @[d_cache.scala 33:26]
  reg  dirty_1_12; // @[d_cache.scala 33:26]
  reg  dirty_1_13; // @[d_cache.scala 33:26]
  reg  dirty_1_14; // @[d_cache.scala 33:26]
  reg  dirty_1_15; // @[d_cache.scala 33:26]
  reg  way0_hit; // @[d_cache.scala 34:27]
  reg  way1_hit; // @[d_cache.scala 35:27]
  reg [511:0] write_back_data; // @[d_cache.scala 37:34]
  reg [31:0] write_back_addr; // @[d_cache.scala 38:34]
  reg [1:0] unuse_way; // @[d_cache.scala 41:28]
  reg [63:0] receive_data_0; // @[d_cache.scala 42:31]
  reg [63:0] receive_data_1; // @[d_cache.scala 42:31]
  reg [63:0] receive_data_2; // @[d_cache.scala 42:31]
  reg [63:0] receive_data_3; // @[d_cache.scala 42:31]
  reg [63:0] receive_data_4; // @[d_cache.scala 42:31]
  reg [63:0] receive_data_5; // @[d_cache.scala 42:31]
  reg [63:0] receive_data_6; // @[d_cache.scala 42:31]
  reg [63:0] receive_data_7; // @[d_cache.scala 42:31]
  reg [2:0] receive_num; // @[d_cache.scala 43:30]
  reg  quene; // @[d_cache.scala 44:24]
  wire [5:0] offset = io_from_lsu_araddr[5:0]; // @[d_cache.scala 46:36]
  wire [3:0] index = io_from_lsu_araddr[9:6]; // @[d_cache.scala 47:35]
  wire [21:0] tag = io_from_lsu_araddr[31:10]; // @[d_cache.scala 48:33]
  wire [8:0] shift_bit = {offset, 3'h0}; // @[d_cache.scala 50:28]
  wire [63:0] _wmask_T_4 = io_from_lsu_wstrb == 8'hff ? 64'hffffffffffffffff : 64'h0; // @[d_cache.scala 63:20]
  wire [63:0] _wmask_T_5 = io_from_lsu_wstrb == 8'hf ? 64'hffffffff : _wmask_T_4; // @[d_cache.scala 62:20]
  wire [63:0] _wmask_T_6 = io_from_lsu_wstrb == 8'h3 ? 64'hffff : _wmask_T_5; // @[d_cache.scala 61:20]
  wire [63:0] wmask = io_from_lsu_wstrb == 8'h1 ? 64'hff : _wmask_T_6; // @[d_cache.scala 60:20]
  wire [31:0] _GEN_1 = 4'h1 == index ? tag_0_1 : tag_0_0; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_2 = 4'h2 == index ? tag_0_2 : _GEN_1; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_3 = 4'h3 == index ? tag_0_3 : _GEN_2; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_4 = 4'h4 == index ? tag_0_4 : _GEN_3; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_5 = 4'h5 == index ? tag_0_5 : _GEN_4; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_6 = 4'h6 == index ? tag_0_6 : _GEN_5; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_7 = 4'h7 == index ? tag_0_7 : _GEN_6; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_8 = 4'h8 == index ? tag_0_8 : _GEN_7; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_9 = 4'h9 == index ? tag_0_9 : _GEN_8; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_10 = 4'ha == index ? tag_0_10 : _GEN_9; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_11 = 4'hb == index ? tag_0_11 : _GEN_10; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_12 = 4'hc == index ? tag_0_12 : _GEN_11; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_13 = 4'hd == index ? tag_0_13 : _GEN_12; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_14 = 4'he == index ? tag_0_14 : _GEN_13; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_15 = 4'hf == index ? tag_0_15 : _GEN_14; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_2020 = {{10'd0}, tag}; // @[d_cache.scala 65:24]
  wire  _GEN_17 = 4'h1 == index ? valid_0_1 : valid_0_0; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_18 = 4'h2 == index ? valid_0_2 : _GEN_17; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_19 = 4'h3 == index ? valid_0_3 : _GEN_18; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_20 = 4'h4 == index ? valid_0_4 : _GEN_19; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_21 = 4'h5 == index ? valid_0_5 : _GEN_20; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_22 = 4'h6 == index ? valid_0_6 : _GEN_21; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_23 = 4'h7 == index ? valid_0_7 : _GEN_22; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_24 = 4'h8 == index ? valid_0_8 : _GEN_23; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_25 = 4'h9 == index ? valid_0_9 : _GEN_24; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_26 = 4'ha == index ? valid_0_10 : _GEN_25; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_27 = 4'hb == index ? valid_0_11 : _GEN_26; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_28 = 4'hc == index ? valid_0_12 : _GEN_27; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_29 = 4'hd == index ? valid_0_13 : _GEN_28; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_30 = 4'he == index ? valid_0_14 : _GEN_29; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_31 = 4'hf == index ? valid_0_15 : _GEN_30; // @[d_cache.scala 65:{50,50}]
  wire  _T_2 = _GEN_15 == _GEN_2020 & _GEN_31; // @[d_cache.scala 65:33]
  wire [31:0] _GEN_34 = 4'h1 == index ? tag_1_1 : tag_1_0; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_35 = 4'h2 == index ? tag_1_2 : _GEN_34; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_36 = 4'h3 == index ? tag_1_3 : _GEN_35; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_37 = 4'h4 == index ? tag_1_4 : _GEN_36; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_38 = 4'h5 == index ? tag_1_5 : _GEN_37; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_39 = 4'h6 == index ? tag_1_6 : _GEN_38; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_40 = 4'h7 == index ? tag_1_7 : _GEN_39; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_41 = 4'h8 == index ? tag_1_8 : _GEN_40; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_42 = 4'h9 == index ? tag_1_9 : _GEN_41; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_43 = 4'ha == index ? tag_1_10 : _GEN_42; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_44 = 4'hb == index ? tag_1_11 : _GEN_43; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_45 = 4'hc == index ? tag_1_12 : _GEN_44; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_46 = 4'hd == index ? tag_1_13 : _GEN_45; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_47 = 4'he == index ? tag_1_14 : _GEN_46; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_48 = 4'hf == index ? tag_1_15 : _GEN_47; // @[d_cache.scala 70:{24,24}]
  wire  _GEN_50 = 4'h1 == index ? valid_1_1 : valid_1_0; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_51 = 4'h2 == index ? valid_1_2 : _GEN_50; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_52 = 4'h3 == index ? valid_1_3 : _GEN_51; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_53 = 4'h4 == index ? valid_1_4 : _GEN_52; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_54 = 4'h5 == index ? valid_1_5 : _GEN_53; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_55 = 4'h6 == index ? valid_1_6 : _GEN_54; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_56 = 4'h7 == index ? valid_1_7 : _GEN_55; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_57 = 4'h8 == index ? valid_1_8 : _GEN_56; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_58 = 4'h9 == index ? valid_1_9 : _GEN_57; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_59 = 4'ha == index ? valid_1_10 : _GEN_58; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_60 = 4'hb == index ? valid_1_11 : _GEN_59; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_61 = 4'hc == index ? valid_1_12 : _GEN_60; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_62 = 4'hd == index ? valid_1_13 : _GEN_61; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_63 = 4'he == index ? valid_1_14 : _GEN_62; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_64 = 4'hf == index ? valid_1_15 : _GEN_63; // @[d_cache.scala 70:{50,50}]
  wire  _T_5 = _GEN_48 == _GEN_2020 & _GEN_64; // @[d_cache.scala 70:33]
  reg [2:0] state; // @[d_cache.scala 84:24]
  wire [2:0] _GEN_70 = io_from_lsu_rready ? 3'h0 : state; // @[d_cache.scala 100:41 102:27 84:24]
  wire [2:0] _GEN_71 = way1_hit ? _GEN_70 : 3'h3; // @[d_cache.scala 105:33 111:23]
  wire [2:0] _GEN_72 = way1_hit ? receive_num : 3'h0; // @[d_cache.scala 105:33 112:29 43:30]
  wire [63:0] _ram_0_T = io_from_lsu_wdata & wmask; // @[d_cache.scala 118:53]
  wire [574:0] _GEN_2223 = {{511'd0}, _ram_0_T}; // @[d_cache.scala 118:62]
  wire [574:0] _ram_0_T_1 = _GEN_2223 << shift_bit; // @[d_cache.scala 118:62]
  wire [574:0] _GEN_2224 = {{511'd0}, wmask}; // @[d_cache.scala 118:102]
  wire [574:0] _ram_0_T_2 = _GEN_2224 << shift_bit; // @[d_cache.scala 118:102]
  wire [574:0] _ram_0_T_3 = ~_ram_0_T_2; // @[d_cache.scala 118:94]
  wire [511:0] _GEN_76 = 4'h1 == index ? ram_0_1 : ram_0_0; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_77 = 4'h2 == index ? ram_0_2 : _GEN_76; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_78 = 4'h3 == index ? ram_0_3 : _GEN_77; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_79 = 4'h4 == index ? ram_0_4 : _GEN_78; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_80 = 4'h5 == index ? ram_0_5 : _GEN_79; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_81 = 4'h6 == index ? ram_0_6 : _GEN_80; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_82 = 4'h7 == index ? ram_0_7 : _GEN_81; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_83 = 4'h8 == index ? ram_0_8 : _GEN_82; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_84 = 4'h9 == index ? ram_0_9 : _GEN_83; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_85 = 4'ha == index ? ram_0_10 : _GEN_84; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_86 = 4'hb == index ? ram_0_11 : _GEN_85; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_87 = 4'hc == index ? ram_0_12 : _GEN_86; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_88 = 4'hd == index ? ram_0_13 : _GEN_87; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_89 = 4'he == index ? ram_0_14 : _GEN_88; // @[d_cache.scala 118:{92,92}]
  wire [511:0] _GEN_90 = 4'hf == index ? ram_0_15 : _GEN_89; // @[d_cache.scala 118:{92,92}]
  wire [574:0] _GEN_2037 = {{63'd0}, _GEN_90}; // @[d_cache.scala 118:92]
  wire [574:0] _ram_0_T_4 = _GEN_2037 & _ram_0_T_3; // @[d_cache.scala 118:92]
  wire [574:0] _ram_0_T_5 = _ram_0_T_1 | _ram_0_T_4; // @[d_cache.scala 118:76]
  wire [511:0] _GEN_91 = 4'h0 == index ? _ram_0_T_5[511:0] : ram_0_0; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_92 = 4'h1 == index ? _ram_0_T_5[511:0] : ram_0_1; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_93 = 4'h2 == index ? _ram_0_T_5[511:0] : ram_0_2; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_94 = 4'h3 == index ? _ram_0_T_5[511:0] : ram_0_3; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_95 = 4'h4 == index ? _ram_0_T_5[511:0] : ram_0_4; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_96 = 4'h5 == index ? _ram_0_T_5[511:0] : ram_0_5; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_97 = 4'h6 == index ? _ram_0_T_5[511:0] : ram_0_6; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_98 = 4'h7 == index ? _ram_0_T_5[511:0] : ram_0_7; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_99 = 4'h8 == index ? _ram_0_T_5[511:0] : ram_0_8; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_100 = 4'h9 == index ? _ram_0_T_5[511:0] : ram_0_9; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_101 = 4'ha == index ? _ram_0_T_5[511:0] : ram_0_10; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_102 = 4'hb == index ? _ram_0_T_5[511:0] : ram_0_11; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_103 = 4'hc == index ? _ram_0_T_5[511:0] : ram_0_12; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_104 = 4'hd == index ? _ram_0_T_5[511:0] : ram_0_13; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_105 = 4'he == index ? _ram_0_T_5[511:0] : ram_0_14; // @[d_cache.scala 118:{30,30} 19:24]
  wire [511:0] _GEN_106 = 4'hf == index ? _ram_0_T_5[511:0] : ram_0_15; // @[d_cache.scala 118:{30,30} 19:24]
  wire  _GEN_2038 = 4'h0 == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_107 = 4'h0 == index | dirty_0_0; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2041 = 4'h1 == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_108 = 4'h1 == index | dirty_0_1; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2052 = 4'h2 == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_109 = 4'h2 == index | dirty_0_2; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2057 = 4'h3 == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_110 = 4'h3 == index | dirty_0_3; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2058 = 4'h4 == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_111 = 4'h4 == index | dirty_0_4; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2061 = 4'h5 == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_112 = 4'h5 == index | dirty_0_5; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2067 = 4'h6 == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_113 = 4'h6 == index | dirty_0_6; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2068 = 4'h7 == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_114 = 4'h7 == index | dirty_0_7; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2073 = 4'h8 == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_115 = 4'h8 == index | dirty_0_8; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2074 = 4'h9 == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_116 = 4'h9 == index | dirty_0_9; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2077 = 4'ha == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_117 = 4'ha == index | dirty_0_10; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2088 = 4'hb == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_118 = 4'hb == index | dirty_0_11; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2089 = 4'hc == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_119 = 4'hc == index | dirty_0_12; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2094 = 4'hd == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_120 = 4'hd == index | dirty_0_13; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2095 = 4'he == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_121 = 4'he == index | dirty_0_14; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_2098 = 4'hf == index; // @[d_cache.scala 122:{32,32} 32:26]
  wire  _GEN_122 = 4'hf == index | dirty_0_15; // @[d_cache.scala 122:{32,32} 32:26]
  wire [511:0] _GEN_124 = 4'h1 == index ? ram_1_1 : ram_1_0; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_125 = 4'h2 == index ? ram_1_2 : _GEN_124; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_126 = 4'h3 == index ? ram_1_3 : _GEN_125; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_127 = 4'h4 == index ? ram_1_4 : _GEN_126; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_128 = 4'h5 == index ? ram_1_5 : _GEN_127; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_129 = 4'h6 == index ? ram_1_6 : _GEN_128; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_130 = 4'h7 == index ? ram_1_7 : _GEN_129; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_131 = 4'h8 == index ? ram_1_8 : _GEN_130; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_132 = 4'h9 == index ? ram_1_9 : _GEN_131; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_133 = 4'ha == index ? ram_1_10 : _GEN_132; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_134 = 4'hb == index ? ram_1_11 : _GEN_133; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_135 = 4'hc == index ? ram_1_12 : _GEN_134; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_136 = 4'hd == index ? ram_1_13 : _GEN_135; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_137 = 4'he == index ? ram_1_14 : _GEN_136; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_138 = 4'hf == index ? ram_1_15 : _GEN_137; // @[d_cache.scala 127:{92,92}]
  wire [574:0] _GEN_2107 = {{63'd0}, _GEN_138}; // @[d_cache.scala 127:92]
  wire [574:0] _ram_1_T_4 = _GEN_2107 & _ram_0_T_3; // @[d_cache.scala 127:92]
  wire [574:0] _ram_1_T_5 = _ram_0_T_1 | _ram_1_T_4; // @[d_cache.scala 127:76]
  wire [511:0] _GEN_139 = 4'h0 == index ? _ram_1_T_5[511:0] : ram_1_0; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_140 = 4'h1 == index ? _ram_1_T_5[511:0] : ram_1_1; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_141 = 4'h2 == index ? _ram_1_T_5[511:0] : ram_1_2; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_142 = 4'h3 == index ? _ram_1_T_5[511:0] : ram_1_3; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_143 = 4'h4 == index ? _ram_1_T_5[511:0] : ram_1_4; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_144 = 4'h5 == index ? _ram_1_T_5[511:0] : ram_1_5; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_145 = 4'h6 == index ? _ram_1_T_5[511:0] : ram_1_6; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_146 = 4'h7 == index ? _ram_1_T_5[511:0] : ram_1_7; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_147 = 4'h8 == index ? _ram_1_T_5[511:0] : ram_1_8; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_148 = 4'h9 == index ? _ram_1_T_5[511:0] : ram_1_9; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_149 = 4'ha == index ? _ram_1_T_5[511:0] : ram_1_10; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_150 = 4'hb == index ? _ram_1_T_5[511:0] : ram_1_11; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_151 = 4'hc == index ? _ram_1_T_5[511:0] : ram_1_12; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_152 = 4'hd == index ? _ram_1_T_5[511:0] : ram_1_13; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_153 = 4'he == index ? _ram_1_T_5[511:0] : ram_1_14; // @[d_cache.scala 127:{30,30} 20:24]
  wire [511:0] _GEN_154 = 4'hf == index ? _ram_1_T_5[511:0] : ram_1_15; // @[d_cache.scala 127:{30,30} 20:24]
  wire  _GEN_155 = _GEN_2038 | dirty_1_0; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_156 = _GEN_2041 | dirty_1_1; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_157 = _GEN_2052 | dirty_1_2; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_158 = _GEN_2057 | dirty_1_3; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_159 = _GEN_2058 | dirty_1_4; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_160 = _GEN_2061 | dirty_1_5; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_161 = _GEN_2067 | dirty_1_6; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_162 = _GEN_2068 | dirty_1_7; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_163 = _GEN_2073 | dirty_1_8; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_164 = _GEN_2074 | dirty_1_9; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_165 = _GEN_2077 | dirty_1_10; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_166 = _GEN_2088 | dirty_1_11; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_167 = _GEN_2089 | dirty_1_12; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_168 = _GEN_2094 | dirty_1_13; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_169 = _GEN_2095 | dirty_1_14; // @[d_cache.scala 134:{32,32} 33:26]
  wire  _GEN_170 = _GEN_2098 | dirty_1_15; // @[d_cache.scala 134:{32,32} 33:26]
  wire [2:0] _GEN_171 = way1_hit ? 3'h0 : 3'h4; // @[d_cache.scala 124:33 125:23 136:23]
  wire [511:0] _GEN_172 = way1_hit ? _GEN_139 : ram_1_0; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_173 = way1_hit ? _GEN_140 : ram_1_1; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_174 = way1_hit ? _GEN_141 : ram_1_2; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_175 = way1_hit ? _GEN_142 : ram_1_3; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_176 = way1_hit ? _GEN_143 : ram_1_4; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_177 = way1_hit ? _GEN_144 : ram_1_5; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_178 = way1_hit ? _GEN_145 : ram_1_6; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_179 = way1_hit ? _GEN_146 : ram_1_7; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_180 = way1_hit ? _GEN_147 : ram_1_8; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_181 = way1_hit ? _GEN_148 : ram_1_9; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_182 = way1_hit ? _GEN_149 : ram_1_10; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_183 = way1_hit ? _GEN_150 : ram_1_11; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_184 = way1_hit ? _GEN_151 : ram_1_12; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_185 = way1_hit ? _GEN_152 : ram_1_13; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_186 = way1_hit ? _GEN_153 : ram_1_14; // @[d_cache.scala 124:33 20:24]
  wire [511:0] _GEN_187 = way1_hit ? _GEN_154 : ram_1_15; // @[d_cache.scala 124:33 20:24]
  wire  _GEN_188 = way1_hit ? _GEN_155 : dirty_1_0; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_189 = way1_hit ? _GEN_156 : dirty_1_1; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_190 = way1_hit ? _GEN_157 : dirty_1_2; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_191 = way1_hit ? _GEN_158 : dirty_1_3; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_192 = way1_hit ? _GEN_159 : dirty_1_4; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_193 = way1_hit ? _GEN_160 : dirty_1_5; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_194 = way1_hit ? _GEN_161 : dirty_1_6; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_195 = way1_hit ? _GEN_162 : dirty_1_7; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_196 = way1_hit ? _GEN_163 : dirty_1_8; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_197 = way1_hit ? _GEN_164 : dirty_1_9; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_198 = way1_hit ? _GEN_165 : dirty_1_10; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_199 = way1_hit ? _GEN_166 : dirty_1_11; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_200 = way1_hit ? _GEN_167 : dirty_1_12; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_201 = way1_hit ? _GEN_168 : dirty_1_13; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_202 = way1_hit ? _GEN_169 : dirty_1_14; // @[d_cache.scala 124:33 33:26]
  wire  _GEN_203 = way1_hit ? _GEN_170 : dirty_1_15; // @[d_cache.scala 124:33 33:26]
  wire [2:0] _GEN_204 = way0_hit ? 3'h0 : _GEN_171; // @[d_cache.scala 116:27 117:23]
  wire [511:0] _GEN_205 = way0_hit ? _GEN_91 : ram_0_0; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_206 = way0_hit ? _GEN_92 : ram_0_1; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_207 = way0_hit ? _GEN_93 : ram_0_2; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_208 = way0_hit ? _GEN_94 : ram_0_3; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_209 = way0_hit ? _GEN_95 : ram_0_4; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_210 = way0_hit ? _GEN_96 : ram_0_5; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_211 = way0_hit ? _GEN_97 : ram_0_6; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_212 = way0_hit ? _GEN_98 : ram_0_7; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_213 = way0_hit ? _GEN_99 : ram_0_8; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_214 = way0_hit ? _GEN_100 : ram_0_9; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_215 = way0_hit ? _GEN_101 : ram_0_10; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_216 = way0_hit ? _GEN_102 : ram_0_11; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_217 = way0_hit ? _GEN_103 : ram_0_12; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_218 = way0_hit ? _GEN_104 : ram_0_13; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_219 = way0_hit ? _GEN_105 : ram_0_14; // @[d_cache.scala 116:27 19:24]
  wire [511:0] _GEN_220 = way0_hit ? _GEN_106 : ram_0_15; // @[d_cache.scala 116:27 19:24]
  wire  _GEN_221 = way0_hit ? _GEN_107 : dirty_0_0; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_222 = way0_hit ? _GEN_108 : dirty_0_1; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_223 = way0_hit ? _GEN_109 : dirty_0_2; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_224 = way0_hit ? _GEN_110 : dirty_0_3; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_225 = way0_hit ? _GEN_111 : dirty_0_4; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_226 = way0_hit ? _GEN_112 : dirty_0_5; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_227 = way0_hit ? _GEN_113 : dirty_0_6; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_228 = way0_hit ? _GEN_114 : dirty_0_7; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_229 = way0_hit ? _GEN_115 : dirty_0_8; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_230 = way0_hit ? _GEN_116 : dirty_0_9; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_231 = way0_hit ? _GEN_117 : dirty_0_10; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_232 = way0_hit ? _GEN_118 : dirty_0_11; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_233 = way0_hit ? _GEN_119 : dirty_0_12; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_234 = way0_hit ? _GEN_120 : dirty_0_13; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_235 = way0_hit ? _GEN_121 : dirty_0_14; // @[d_cache.scala 116:27 32:26]
  wire  _GEN_236 = way0_hit ? _GEN_122 : dirty_0_15; // @[d_cache.scala 116:27 32:26]
  wire [511:0] _GEN_237 = way0_hit ? ram_1_0 : _GEN_172; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_238 = way0_hit ? ram_1_1 : _GEN_173; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_239 = way0_hit ? ram_1_2 : _GEN_174; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_240 = way0_hit ? ram_1_3 : _GEN_175; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_241 = way0_hit ? ram_1_4 : _GEN_176; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_242 = way0_hit ? ram_1_5 : _GEN_177; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_243 = way0_hit ? ram_1_6 : _GEN_178; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_244 = way0_hit ? ram_1_7 : _GEN_179; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_245 = way0_hit ? ram_1_8 : _GEN_180; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_246 = way0_hit ? ram_1_9 : _GEN_181; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_247 = way0_hit ? ram_1_10 : _GEN_182; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_248 = way0_hit ? ram_1_11 : _GEN_183; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_249 = way0_hit ? ram_1_12 : _GEN_184; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_250 = way0_hit ? ram_1_13 : _GEN_185; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_251 = way0_hit ? ram_1_14 : _GEN_186; // @[d_cache.scala 116:27 20:24]
  wire [511:0] _GEN_252 = way0_hit ? ram_1_15 : _GEN_187; // @[d_cache.scala 116:27 20:24]
  wire  _GEN_253 = way0_hit ? dirty_1_0 : _GEN_188; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_254 = way0_hit ? dirty_1_1 : _GEN_189; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_255 = way0_hit ? dirty_1_2 : _GEN_190; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_256 = way0_hit ? dirty_1_3 : _GEN_191; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_257 = way0_hit ? dirty_1_4 : _GEN_192; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_258 = way0_hit ? dirty_1_5 : _GEN_193; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_259 = way0_hit ? dirty_1_6 : _GEN_194; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_260 = way0_hit ? dirty_1_7 : _GEN_195; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_261 = way0_hit ? dirty_1_8 : _GEN_196; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_262 = way0_hit ? dirty_1_9 : _GEN_197; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_263 = way0_hit ? dirty_1_10 : _GEN_198; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_264 = way0_hit ? dirty_1_11 : _GEN_199; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_265 = way0_hit ? dirty_1_12 : _GEN_200; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_266 = way0_hit ? dirty_1_13 : _GEN_201; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_267 = way0_hit ? dirty_1_14 : _GEN_202; // @[d_cache.scala 116:27 33:26]
  wire  _GEN_268 = way0_hit ? dirty_1_15 : _GEN_203; // @[d_cache.scala 116:27 33:26]
  wire [63:0] _GEN_269 = 3'h0 == receive_num ? io_from_axi_rdata : receive_data_0; // @[d_cache.scala 141:{43,43} 42:31]
  wire [63:0] _GEN_270 = 3'h1 == receive_num ? io_from_axi_rdata : receive_data_1; // @[d_cache.scala 141:{43,43} 42:31]
  wire [63:0] _GEN_271 = 3'h2 == receive_num ? io_from_axi_rdata : receive_data_2; // @[d_cache.scala 141:{43,43} 42:31]
  wire [63:0] _GEN_272 = 3'h3 == receive_num ? io_from_axi_rdata : receive_data_3; // @[d_cache.scala 141:{43,43} 42:31]
  wire [63:0] _GEN_273 = 3'h4 == receive_num ? io_from_axi_rdata : receive_data_4; // @[d_cache.scala 141:{43,43} 42:31]
  wire [63:0] _GEN_274 = 3'h5 == receive_num ? io_from_axi_rdata : receive_data_5; // @[d_cache.scala 141:{43,43} 42:31]
  wire [63:0] _GEN_275 = 3'h6 == receive_num ? io_from_axi_rdata : receive_data_6; // @[d_cache.scala 141:{43,43} 42:31]
  wire [63:0] _GEN_276 = 3'h7 == receive_num ? io_from_axi_rdata : receive_data_7; // @[d_cache.scala 141:{43,43} 42:31]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[d_cache.scala 142:44]
  wire [2:0] _GEN_277 = io_from_axi_rlast ? 3'h5 : state; // @[d_cache.scala 143:40 144:27 84:24]
  wire [63:0] _GEN_278 = io_from_axi_rvalid ? _GEN_269 : receive_data_0; // @[d_cache.scala 140:37 42:31]
  wire [63:0] _GEN_279 = io_from_axi_rvalid ? _GEN_270 : receive_data_1; // @[d_cache.scala 140:37 42:31]
  wire [63:0] _GEN_280 = io_from_axi_rvalid ? _GEN_271 : receive_data_2; // @[d_cache.scala 140:37 42:31]
  wire [63:0] _GEN_281 = io_from_axi_rvalid ? _GEN_272 : receive_data_3; // @[d_cache.scala 140:37 42:31]
  wire [63:0] _GEN_282 = io_from_axi_rvalid ? _GEN_273 : receive_data_4; // @[d_cache.scala 140:37 42:31]
  wire [63:0] _GEN_283 = io_from_axi_rvalid ? _GEN_274 : receive_data_5; // @[d_cache.scala 140:37 42:31]
  wire [63:0] _GEN_284 = io_from_axi_rvalid ? _GEN_275 : receive_data_6; // @[d_cache.scala 140:37 42:31]
  wire [63:0] _GEN_285 = io_from_axi_rvalid ? _GEN_276 : receive_data_7; // @[d_cache.scala 140:37 42:31]
  wire [2:0] _GEN_286 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[d_cache.scala 140:37 142:29 43:30]
  wire [2:0] _GEN_287 = io_from_axi_rvalid ? _GEN_277 : state; // @[d_cache.scala 140:37 84:24]
  wire [2:0] _GEN_288 = io_from_axi_bvalid ? 3'h0 : state; // @[d_cache.scala 149:37 150:23 84:24]
  wire [511:0] _ram_0_T_6 = {receive_data_7,receive_data_6,receive_data_5,receive_data_4,receive_data_3,receive_data_2,
    receive_data_1,receive_data_0}; // @[Cat.scala 31:58]
  wire [511:0] _GEN_289 = 4'h0 == index ? _ram_0_T_6 : ram_0_0; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_290 = 4'h1 == index ? _ram_0_T_6 : ram_0_1; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_291 = 4'h2 == index ? _ram_0_T_6 : ram_0_2; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_292 = 4'h3 == index ? _ram_0_T_6 : ram_0_3; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_293 = 4'h4 == index ? _ram_0_T_6 : ram_0_4; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_294 = 4'h5 == index ? _ram_0_T_6 : ram_0_5; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_295 = 4'h6 == index ? _ram_0_T_6 : ram_0_6; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_296 = 4'h7 == index ? _ram_0_T_6 : ram_0_7; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_297 = 4'h8 == index ? _ram_0_T_6 : ram_0_8; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_298 = 4'h9 == index ? _ram_0_T_6 : ram_0_9; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_299 = 4'ha == index ? _ram_0_T_6 : ram_0_10; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_300 = 4'hb == index ? _ram_0_T_6 : ram_0_11; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_301 = 4'hc == index ? _ram_0_T_6 : ram_0_12; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_302 = 4'hd == index ? _ram_0_T_6 : ram_0_13; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_303 = 4'he == index ? _ram_0_T_6 : ram_0_14; // @[d_cache.scala 156:{30,30} 19:24]
  wire [511:0] _GEN_304 = 4'hf == index ? _ram_0_T_6 : ram_0_15; // @[d_cache.scala 156:{30,30} 19:24]
  wire [31:0] _GEN_305 = 4'h0 == index ? _GEN_2020 : tag_0_0; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_306 = 4'h1 == index ? _GEN_2020 : tag_0_1; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_307 = 4'h2 == index ? _GEN_2020 : tag_0_2; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_308 = 4'h3 == index ? _GEN_2020 : tag_0_3; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_309 = 4'h4 == index ? _GEN_2020 : tag_0_4; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_310 = 4'h5 == index ? _GEN_2020 : tag_0_5; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_311 = 4'h6 == index ? _GEN_2020 : tag_0_6; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_312 = 4'h7 == index ? _GEN_2020 : tag_0_7; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_313 = 4'h8 == index ? _GEN_2020 : tag_0_8; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_314 = 4'h9 == index ? _GEN_2020 : tag_0_9; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_315 = 4'ha == index ? _GEN_2020 : tag_0_10; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_316 = 4'hb == index ? _GEN_2020 : tag_0_11; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_317 = 4'hc == index ? _GEN_2020 : tag_0_12; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_318 = 4'hd == index ? _GEN_2020 : tag_0_13; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_319 = 4'he == index ? _GEN_2020 : tag_0_14; // @[d_cache.scala 157:{30,30} 28:24]
  wire [31:0] _GEN_320 = 4'hf == index ? _GEN_2020 : tag_0_15; // @[d_cache.scala 157:{30,30} 28:24]
  wire  _GEN_321 = _GEN_2038 | valid_0_0; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_322 = _GEN_2041 | valid_0_1; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_323 = _GEN_2052 | valid_0_2; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_324 = _GEN_2057 | valid_0_3; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_325 = _GEN_2058 | valid_0_4; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_326 = _GEN_2061 | valid_0_5; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_327 = _GEN_2067 | valid_0_6; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_328 = _GEN_2068 | valid_0_7; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_329 = _GEN_2073 | valid_0_8; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_330 = _GEN_2074 | valid_0_9; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_331 = _GEN_2077 | valid_0_10; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_332 = _GEN_2088 | valid_0_11; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_333 = _GEN_2089 | valid_0_12; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_334 = _GEN_2094 | valid_0_13; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_335 = _GEN_2095 | valid_0_14; // @[d_cache.scala 158:{32,32} 30:26]
  wire  _GEN_336 = _GEN_2098 | valid_0_15; // @[d_cache.scala 158:{32,32} 30:26]
  wire [511:0] _GEN_337 = 4'h0 == index ? _ram_0_T_6 : ram_1_0; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_338 = 4'h1 == index ? _ram_0_T_6 : ram_1_1; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_339 = 4'h2 == index ? _ram_0_T_6 : ram_1_2; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_340 = 4'h3 == index ? _ram_0_T_6 : ram_1_3; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_341 = 4'h4 == index ? _ram_0_T_6 : ram_1_4; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_342 = 4'h5 == index ? _ram_0_T_6 : ram_1_5; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_343 = 4'h6 == index ? _ram_0_T_6 : ram_1_6; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_344 = 4'h7 == index ? _ram_0_T_6 : ram_1_7; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_345 = 4'h8 == index ? _ram_0_T_6 : ram_1_8; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_346 = 4'h9 == index ? _ram_0_T_6 : ram_1_9; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_347 = 4'ha == index ? _ram_0_T_6 : ram_1_10; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_348 = 4'hb == index ? _ram_0_T_6 : ram_1_11; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_349 = 4'hc == index ? _ram_0_T_6 : ram_1_12; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_350 = 4'hd == index ? _ram_0_T_6 : ram_1_13; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_351 = 4'he == index ? _ram_0_T_6 : ram_1_14; // @[d_cache.scala 162:{30,30} 20:24]
  wire [511:0] _GEN_352 = 4'hf == index ? _ram_0_T_6 : ram_1_15; // @[d_cache.scala 162:{30,30} 20:24]
  wire [31:0] _GEN_353 = 4'h0 == index ? _GEN_2020 : tag_1_0; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_354 = 4'h1 == index ? _GEN_2020 : tag_1_1; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_355 = 4'h2 == index ? _GEN_2020 : tag_1_2; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_356 = 4'h3 == index ? _GEN_2020 : tag_1_3; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_357 = 4'h4 == index ? _GEN_2020 : tag_1_4; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_358 = 4'h5 == index ? _GEN_2020 : tag_1_5; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_359 = 4'h6 == index ? _GEN_2020 : tag_1_6; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_360 = 4'h7 == index ? _GEN_2020 : tag_1_7; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_361 = 4'h8 == index ? _GEN_2020 : tag_1_8; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_362 = 4'h9 == index ? _GEN_2020 : tag_1_9; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_363 = 4'ha == index ? _GEN_2020 : tag_1_10; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_364 = 4'hb == index ? _GEN_2020 : tag_1_11; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_365 = 4'hc == index ? _GEN_2020 : tag_1_12; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_366 = 4'hd == index ? _GEN_2020 : tag_1_13; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_367 = 4'he == index ? _GEN_2020 : tag_1_14; // @[d_cache.scala 163:{30,30} 29:24]
  wire [31:0] _GEN_368 = 4'hf == index ? _GEN_2020 : tag_1_15; // @[d_cache.scala 163:{30,30} 29:24]
  wire  _GEN_369 = _GEN_2038 | valid_1_0; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_370 = _GEN_2041 | valid_1_1; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_371 = _GEN_2052 | valid_1_2; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_372 = _GEN_2057 | valid_1_3; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_373 = _GEN_2058 | valid_1_4; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_374 = _GEN_2061 | valid_1_5; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_375 = _GEN_2067 | valid_1_6; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_376 = _GEN_2068 | valid_1_7; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_377 = _GEN_2073 | valid_1_8; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_378 = _GEN_2074 | valid_1_9; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_379 = _GEN_2077 | valid_1_10; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_380 = _GEN_2088 | valid_1_11; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_381 = _GEN_2089 | valid_1_12; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_382 = _GEN_2094 | valid_1_13; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_383 = _GEN_2095 | valid_1_14; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _GEN_384 = _GEN_2098 | valid_1_15; // @[d_cache.scala 164:{32,32} 31:26]
  wire  _T_16 = ~quene; // @[d_cache.scala 167:27]
  wire  _GEN_386 = 4'h1 == index ? dirty_0_1 : dirty_0_0; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_387 = 4'h2 == index ? dirty_0_2 : _GEN_386; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_388 = 4'h3 == index ? dirty_0_3 : _GEN_387; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_389 = 4'h4 == index ? dirty_0_4 : _GEN_388; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_390 = 4'h5 == index ? dirty_0_5 : _GEN_389; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_391 = 4'h6 == index ? dirty_0_6 : _GEN_390; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_392 = 4'h7 == index ? dirty_0_7 : _GEN_391; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_393 = 4'h8 == index ? dirty_0_8 : _GEN_392; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_394 = 4'h9 == index ? dirty_0_9 : _GEN_393; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_395 = 4'ha == index ? dirty_0_10 : _GEN_394; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_396 = 4'hb == index ? dirty_0_11 : _GEN_395; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_397 = 4'hc == index ? dirty_0_12 : _GEN_396; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_398 = 4'hd == index ? dirty_0_13 : _GEN_397; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_399 = 4'he == index ? dirty_0_14 : _GEN_398; // @[d_cache.scala 169:{40,40}]
  wire  _GEN_400 = 4'hf == index ? dirty_0_15 : _GEN_399; // @[d_cache.scala 169:{40,40}]
  wire [41:0] _write_back_addr_T_1 = {_GEN_15,index,6'h0}; // @[Cat.scala 31:58]
  wire  _GEN_433 = 4'h0 == index ? 1'h0 : dirty_0_0; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_434 = 4'h1 == index ? 1'h0 : dirty_0_1; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_435 = 4'h2 == index ? 1'h0 : dirty_0_2; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_436 = 4'h3 == index ? 1'h0 : dirty_0_3; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_437 = 4'h4 == index ? 1'h0 : dirty_0_4; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_438 = 4'h5 == index ? 1'h0 : dirty_0_5; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_439 = 4'h6 == index ? 1'h0 : dirty_0_6; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_440 = 4'h7 == index ? 1'h0 : dirty_0_7; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_441 = 4'h8 == index ? 1'h0 : dirty_0_8; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_442 = 4'h9 == index ? 1'h0 : dirty_0_9; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_443 = 4'ha == index ? 1'h0 : dirty_0_10; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_444 = 4'hb == index ? 1'h0 : dirty_0_11; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_445 = 4'hc == index ? 1'h0 : dirty_0_12; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_446 = 4'hd == index ? 1'h0 : dirty_0_13; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_447 = 4'he == index ? 1'h0 : dirty_0_14; // @[d_cache.scala 174:{40,40} 32:26]
  wire  _GEN_448 = 4'hf == index ? 1'h0 : dirty_0_15; // @[d_cache.scala 174:{40,40} 32:26]
  wire [511:0] _GEN_513 = _GEN_400 ? _GEN_90 : write_back_data; // @[d_cache.scala 169:47 170:41 37:34]
  wire [41:0] _GEN_514 = _GEN_400 ? _write_back_addr_T_1 : {{10'd0}, write_back_addr}; // @[d_cache.scala 169:47 171:41 38:34]
  wire [511:0] _GEN_515 = _GEN_400 ? _GEN_289 : _GEN_289; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_516 = _GEN_400 ? _GEN_290 : _GEN_290; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_517 = _GEN_400 ? _GEN_291 : _GEN_291; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_518 = _GEN_400 ? _GEN_292 : _GEN_292; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_519 = _GEN_400 ? _GEN_293 : _GEN_293; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_520 = _GEN_400 ? _GEN_294 : _GEN_294; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_521 = _GEN_400 ? _GEN_295 : _GEN_295; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_522 = _GEN_400 ? _GEN_296 : _GEN_296; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_523 = _GEN_400 ? _GEN_297 : _GEN_297; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_524 = _GEN_400 ? _GEN_298 : _GEN_298; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_525 = _GEN_400 ? _GEN_299 : _GEN_299; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_526 = _GEN_400 ? _GEN_300 : _GEN_300; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_527 = _GEN_400 ? _GEN_301 : _GEN_301; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_528 = _GEN_400 ? _GEN_302 : _GEN_302; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_529 = _GEN_400 ? _GEN_303 : _GEN_303; // @[d_cache.scala 169:47]
  wire [511:0] _GEN_530 = _GEN_400 ? _GEN_304 : _GEN_304; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_531 = _GEN_400 ? _GEN_305 : _GEN_305; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_532 = _GEN_400 ? _GEN_306 : _GEN_306; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_533 = _GEN_400 ? _GEN_307 : _GEN_307; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_534 = _GEN_400 ? _GEN_308 : _GEN_308; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_535 = _GEN_400 ? _GEN_309 : _GEN_309; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_536 = _GEN_400 ? _GEN_310 : _GEN_310; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_537 = _GEN_400 ? _GEN_311 : _GEN_311; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_538 = _GEN_400 ? _GEN_312 : _GEN_312; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_539 = _GEN_400 ? _GEN_313 : _GEN_313; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_540 = _GEN_400 ? _GEN_314 : _GEN_314; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_541 = _GEN_400 ? _GEN_315 : _GEN_315; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_542 = _GEN_400 ? _GEN_316 : _GEN_316; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_543 = _GEN_400 ? _GEN_317 : _GEN_317; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_544 = _GEN_400 ? _GEN_318 : _GEN_318; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_545 = _GEN_400 ? _GEN_319 : _GEN_319; // @[d_cache.scala 169:47]
  wire [31:0] _GEN_546 = _GEN_400 ? _GEN_320 : _GEN_320; // @[d_cache.scala 169:47]
  wire  _GEN_547 = _GEN_400 ? _GEN_433 : dirty_0_0; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_548 = _GEN_400 ? _GEN_434 : dirty_0_1; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_549 = _GEN_400 ? _GEN_435 : dirty_0_2; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_550 = _GEN_400 ? _GEN_436 : dirty_0_3; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_551 = _GEN_400 ? _GEN_437 : dirty_0_4; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_552 = _GEN_400 ? _GEN_438 : dirty_0_5; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_553 = _GEN_400 ? _GEN_439 : dirty_0_6; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_554 = _GEN_400 ? _GEN_440 : dirty_0_7; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_555 = _GEN_400 ? _GEN_441 : dirty_0_8; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_556 = _GEN_400 ? _GEN_442 : dirty_0_9; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_557 = _GEN_400 ? _GEN_443 : dirty_0_10; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_558 = _GEN_400 ? _GEN_444 : dirty_0_11; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_559 = _GEN_400 ? _GEN_445 : dirty_0_12; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_560 = _GEN_400 ? _GEN_446 : dirty_0_13; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_561 = _GEN_400 ? _GEN_447 : dirty_0_14; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_562 = _GEN_400 ? _GEN_448 : dirty_0_15; // @[d_cache.scala 169:47 32:26]
  wire  _GEN_563 = _GEN_400 ? _GEN_321 : _GEN_321; // @[d_cache.scala 169:47]
  wire  _GEN_564 = _GEN_400 ? _GEN_322 : _GEN_322; // @[d_cache.scala 169:47]
  wire  _GEN_565 = _GEN_400 ? _GEN_323 : _GEN_323; // @[d_cache.scala 169:47]
  wire  _GEN_566 = _GEN_400 ? _GEN_324 : _GEN_324; // @[d_cache.scala 169:47]
  wire  _GEN_567 = _GEN_400 ? _GEN_325 : _GEN_325; // @[d_cache.scala 169:47]
  wire  _GEN_568 = _GEN_400 ? _GEN_326 : _GEN_326; // @[d_cache.scala 169:47]
  wire  _GEN_569 = _GEN_400 ? _GEN_327 : _GEN_327; // @[d_cache.scala 169:47]
  wire  _GEN_570 = _GEN_400 ? _GEN_328 : _GEN_328; // @[d_cache.scala 169:47]
  wire  _GEN_571 = _GEN_400 ? _GEN_329 : _GEN_329; // @[d_cache.scala 169:47]
  wire  _GEN_572 = _GEN_400 ? _GEN_330 : _GEN_330; // @[d_cache.scala 169:47]
  wire  _GEN_573 = _GEN_400 ? _GEN_331 : _GEN_331; // @[d_cache.scala 169:47]
  wire  _GEN_574 = _GEN_400 ? _GEN_332 : _GEN_332; // @[d_cache.scala 169:47]
  wire  _GEN_575 = _GEN_400 ? _GEN_333 : _GEN_333; // @[d_cache.scala 169:47]
  wire  _GEN_576 = _GEN_400 ? _GEN_334 : _GEN_334; // @[d_cache.scala 169:47]
  wire  _GEN_577 = _GEN_400 ? _GEN_335 : _GEN_335; // @[d_cache.scala 169:47]
  wire  _GEN_578 = _GEN_400 ? _GEN_336 : _GEN_336; // @[d_cache.scala 169:47]
  wire [2:0] _GEN_579 = _GEN_400 ? 3'h6 : 3'h7; // @[d_cache.scala 169:47 176:31 179:31]
  wire  _GEN_582 = 4'h1 == index ? dirty_1_1 : dirty_1_0; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_583 = 4'h2 == index ? dirty_1_2 : _GEN_582; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_584 = 4'h3 == index ? dirty_1_3 : _GEN_583; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_585 = 4'h4 == index ? dirty_1_4 : _GEN_584; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_586 = 4'h5 == index ? dirty_1_5 : _GEN_585; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_587 = 4'h6 == index ? dirty_1_6 : _GEN_586; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_588 = 4'h7 == index ? dirty_1_7 : _GEN_587; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_589 = 4'h8 == index ? dirty_1_8 : _GEN_588; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_590 = 4'h9 == index ? dirty_1_9 : _GEN_589; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_591 = 4'ha == index ? dirty_1_10 : _GEN_590; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_592 = 4'hb == index ? dirty_1_11 : _GEN_591; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_593 = 4'hc == index ? dirty_1_12 : _GEN_592; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_594 = 4'hd == index ? dirty_1_13 : _GEN_593; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_595 = 4'he == index ? dirty_1_14 : _GEN_594; // @[d_cache.scala 186:{40,40}]
  wire  _GEN_596 = 4'hf == index ? dirty_1_15 : _GEN_595; // @[d_cache.scala 186:{40,40}]
  wire [41:0] _write_back_addr_T_3 = {_GEN_48,index,6'h0}; // @[Cat.scala 31:58]
  wire  _GEN_629 = 4'h0 == index ? 1'h0 : dirty_1_0; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_630 = 4'h1 == index ? 1'h0 : dirty_1_1; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_631 = 4'h2 == index ? 1'h0 : dirty_1_2; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_632 = 4'h3 == index ? 1'h0 : dirty_1_3; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_633 = 4'h4 == index ? 1'h0 : dirty_1_4; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_634 = 4'h5 == index ? 1'h0 : dirty_1_5; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_635 = 4'h6 == index ? 1'h0 : dirty_1_6; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_636 = 4'h7 == index ? 1'h0 : dirty_1_7; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_637 = 4'h8 == index ? 1'h0 : dirty_1_8; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_638 = 4'h9 == index ? 1'h0 : dirty_1_9; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_639 = 4'ha == index ? 1'h0 : dirty_1_10; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_640 = 4'hb == index ? 1'h0 : dirty_1_11; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_641 = 4'hc == index ? 1'h0 : dirty_1_12; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_642 = 4'hd == index ? 1'h0 : dirty_1_13; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_643 = 4'he == index ? 1'h0 : dirty_1_14; // @[d_cache.scala 191:{40,40} 33:26]
  wire  _GEN_644 = 4'hf == index ? 1'h0 : dirty_1_15; // @[d_cache.scala 191:{40,40} 33:26]
  wire [511:0] _GEN_709 = _GEN_596 ? _GEN_138 : write_back_data; // @[d_cache.scala 186:47 187:41 37:34]
  wire [41:0] _GEN_710 = _GEN_596 ? _write_back_addr_T_3 : {{10'd0}, write_back_addr}; // @[d_cache.scala 186:47 188:41 38:34]
  wire [511:0] _GEN_711 = _GEN_596 ? _GEN_337 : _GEN_337; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_712 = _GEN_596 ? _GEN_338 : _GEN_338; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_713 = _GEN_596 ? _GEN_339 : _GEN_339; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_714 = _GEN_596 ? _GEN_340 : _GEN_340; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_715 = _GEN_596 ? _GEN_341 : _GEN_341; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_716 = _GEN_596 ? _GEN_342 : _GEN_342; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_717 = _GEN_596 ? _GEN_343 : _GEN_343; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_718 = _GEN_596 ? _GEN_344 : _GEN_344; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_719 = _GEN_596 ? _GEN_345 : _GEN_345; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_720 = _GEN_596 ? _GEN_346 : _GEN_346; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_721 = _GEN_596 ? _GEN_347 : _GEN_347; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_722 = _GEN_596 ? _GEN_348 : _GEN_348; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_723 = _GEN_596 ? _GEN_349 : _GEN_349; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_724 = _GEN_596 ? _GEN_350 : _GEN_350; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_725 = _GEN_596 ? _GEN_351 : _GEN_351; // @[d_cache.scala 186:47]
  wire [511:0] _GEN_726 = _GEN_596 ? _GEN_352 : _GEN_352; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_727 = _GEN_596 ? _GEN_353 : _GEN_353; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_728 = _GEN_596 ? _GEN_354 : _GEN_354; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_729 = _GEN_596 ? _GEN_355 : _GEN_355; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_730 = _GEN_596 ? _GEN_356 : _GEN_356; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_731 = _GEN_596 ? _GEN_357 : _GEN_357; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_732 = _GEN_596 ? _GEN_358 : _GEN_358; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_733 = _GEN_596 ? _GEN_359 : _GEN_359; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_734 = _GEN_596 ? _GEN_360 : _GEN_360; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_735 = _GEN_596 ? _GEN_361 : _GEN_361; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_736 = _GEN_596 ? _GEN_362 : _GEN_362; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_737 = _GEN_596 ? _GEN_363 : _GEN_363; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_738 = _GEN_596 ? _GEN_364 : _GEN_364; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_739 = _GEN_596 ? _GEN_365 : _GEN_365; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_740 = _GEN_596 ? _GEN_366 : _GEN_366; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_741 = _GEN_596 ? _GEN_367 : _GEN_367; // @[d_cache.scala 186:47]
  wire [31:0] _GEN_742 = _GEN_596 ? _GEN_368 : _GEN_368; // @[d_cache.scala 186:47]
  wire  _GEN_743 = _GEN_596 ? _GEN_629 : dirty_1_0; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_744 = _GEN_596 ? _GEN_630 : dirty_1_1; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_745 = _GEN_596 ? _GEN_631 : dirty_1_2; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_746 = _GEN_596 ? _GEN_632 : dirty_1_3; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_747 = _GEN_596 ? _GEN_633 : dirty_1_4; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_748 = _GEN_596 ? _GEN_634 : dirty_1_5; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_749 = _GEN_596 ? _GEN_635 : dirty_1_6; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_750 = _GEN_596 ? _GEN_636 : dirty_1_7; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_751 = _GEN_596 ? _GEN_637 : dirty_1_8; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_752 = _GEN_596 ? _GEN_638 : dirty_1_9; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_753 = _GEN_596 ? _GEN_639 : dirty_1_10; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_754 = _GEN_596 ? _GEN_640 : dirty_1_11; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_755 = _GEN_596 ? _GEN_641 : dirty_1_12; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_756 = _GEN_596 ? _GEN_642 : dirty_1_13; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_757 = _GEN_596 ? _GEN_643 : dirty_1_14; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_758 = _GEN_596 ? _GEN_644 : dirty_1_15; // @[d_cache.scala 186:47 33:26]
  wire  _GEN_759 = _GEN_596 ? _GEN_369 : _GEN_369; // @[d_cache.scala 186:47]
  wire  _GEN_760 = _GEN_596 ? _GEN_370 : _GEN_370; // @[d_cache.scala 186:47]
  wire  _GEN_761 = _GEN_596 ? _GEN_371 : _GEN_371; // @[d_cache.scala 186:47]
  wire  _GEN_762 = _GEN_596 ? _GEN_372 : _GEN_372; // @[d_cache.scala 186:47]
  wire  _GEN_763 = _GEN_596 ? _GEN_373 : _GEN_373; // @[d_cache.scala 186:47]
  wire  _GEN_764 = _GEN_596 ? _GEN_374 : _GEN_374; // @[d_cache.scala 186:47]
  wire  _GEN_765 = _GEN_596 ? _GEN_375 : _GEN_375; // @[d_cache.scala 186:47]
  wire  _GEN_766 = _GEN_596 ? _GEN_376 : _GEN_376; // @[d_cache.scala 186:47]
  wire  _GEN_767 = _GEN_596 ? _GEN_377 : _GEN_377; // @[d_cache.scala 186:47]
  wire  _GEN_768 = _GEN_596 ? _GEN_378 : _GEN_378; // @[d_cache.scala 186:47]
  wire  _GEN_769 = _GEN_596 ? _GEN_379 : _GEN_379; // @[d_cache.scala 186:47]
  wire  _GEN_770 = _GEN_596 ? _GEN_380 : _GEN_380; // @[d_cache.scala 186:47]
  wire  _GEN_771 = _GEN_596 ? _GEN_381 : _GEN_381; // @[d_cache.scala 186:47]
  wire  _GEN_772 = _GEN_596 ? _GEN_382 : _GEN_382; // @[d_cache.scala 186:47]
  wire  _GEN_773 = _GEN_596 ? _GEN_383 : _GEN_383; // @[d_cache.scala 186:47]
  wire  _GEN_774 = _GEN_596 ? _GEN_384 : _GEN_384; // @[d_cache.scala 186:47]
  wire [2:0] _GEN_775 = _GEN_596 ? 3'h6 : 3'h7; // @[d_cache.scala 186:47 193:31 196:31]
  wire [511:0] _GEN_777 = ~quene ? _GEN_513 : _GEN_709; // @[d_cache.scala 167:34]
  wire [41:0] _GEN_778 = ~quene ? _GEN_514 : _GEN_710; // @[d_cache.scala 167:34]
  wire [511:0] _GEN_779 = ~quene ? _GEN_515 : ram_0_0; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_780 = ~quene ? _GEN_516 : ram_0_1; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_781 = ~quene ? _GEN_517 : ram_0_2; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_782 = ~quene ? _GEN_518 : ram_0_3; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_783 = ~quene ? _GEN_519 : ram_0_4; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_784 = ~quene ? _GEN_520 : ram_0_5; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_785 = ~quene ? _GEN_521 : ram_0_6; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_786 = ~quene ? _GEN_522 : ram_0_7; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_787 = ~quene ? _GEN_523 : ram_0_8; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_788 = ~quene ? _GEN_524 : ram_0_9; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_789 = ~quene ? _GEN_525 : ram_0_10; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_790 = ~quene ? _GEN_526 : ram_0_11; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_791 = ~quene ? _GEN_527 : ram_0_12; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_792 = ~quene ? _GEN_528 : ram_0_13; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_793 = ~quene ? _GEN_529 : ram_0_14; // @[d_cache.scala 167:34 19:24]
  wire [511:0] _GEN_794 = ~quene ? _GEN_530 : ram_0_15; // @[d_cache.scala 167:34 19:24]
  wire [31:0] _GEN_795 = ~quene ? _GEN_531 : tag_0_0; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_796 = ~quene ? _GEN_532 : tag_0_1; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_797 = ~quene ? _GEN_533 : tag_0_2; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_798 = ~quene ? _GEN_534 : tag_0_3; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_799 = ~quene ? _GEN_535 : tag_0_4; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_800 = ~quene ? _GEN_536 : tag_0_5; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_801 = ~quene ? _GEN_537 : tag_0_6; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_802 = ~quene ? _GEN_538 : tag_0_7; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_803 = ~quene ? _GEN_539 : tag_0_8; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_804 = ~quene ? _GEN_540 : tag_0_9; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_805 = ~quene ? _GEN_541 : tag_0_10; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_806 = ~quene ? _GEN_542 : tag_0_11; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_807 = ~quene ? _GEN_543 : tag_0_12; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_808 = ~quene ? _GEN_544 : tag_0_13; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_809 = ~quene ? _GEN_545 : tag_0_14; // @[d_cache.scala 167:34 28:24]
  wire [31:0] _GEN_810 = ~quene ? _GEN_546 : tag_0_15; // @[d_cache.scala 167:34 28:24]
  wire  _GEN_811 = ~quene ? _GEN_547 : dirty_0_0; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_812 = ~quene ? _GEN_548 : dirty_0_1; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_813 = ~quene ? _GEN_549 : dirty_0_2; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_814 = ~quene ? _GEN_550 : dirty_0_3; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_815 = ~quene ? _GEN_551 : dirty_0_4; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_816 = ~quene ? _GEN_552 : dirty_0_5; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_817 = ~quene ? _GEN_553 : dirty_0_6; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_818 = ~quene ? _GEN_554 : dirty_0_7; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_819 = ~quene ? _GEN_555 : dirty_0_8; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_820 = ~quene ? _GEN_556 : dirty_0_9; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_821 = ~quene ? _GEN_557 : dirty_0_10; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_822 = ~quene ? _GEN_558 : dirty_0_11; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_823 = ~quene ? _GEN_559 : dirty_0_12; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_824 = ~quene ? _GEN_560 : dirty_0_13; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_825 = ~quene ? _GEN_561 : dirty_0_14; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_826 = ~quene ? _GEN_562 : dirty_0_15; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_827 = ~quene ? _GEN_563 : valid_0_0; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_828 = ~quene ? _GEN_564 : valid_0_1; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_829 = ~quene ? _GEN_565 : valid_0_2; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_830 = ~quene ? _GEN_566 : valid_0_3; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_831 = ~quene ? _GEN_567 : valid_0_4; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_832 = ~quene ? _GEN_568 : valid_0_5; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_833 = ~quene ? _GEN_569 : valid_0_6; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_834 = ~quene ? _GEN_570 : valid_0_7; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_835 = ~quene ? _GEN_571 : valid_0_8; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_836 = ~quene ? _GEN_572 : valid_0_9; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_837 = ~quene ? _GEN_573 : valid_0_10; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_838 = ~quene ? _GEN_574 : valid_0_11; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_839 = ~quene ? _GEN_575 : valid_0_12; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_840 = ~quene ? _GEN_576 : valid_0_13; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_841 = ~quene ? _GEN_577 : valid_0_14; // @[d_cache.scala 167:34 30:26]
  wire  _GEN_842 = ~quene ? _GEN_578 : valid_0_15; // @[d_cache.scala 167:34 30:26]
  wire [2:0] _GEN_843 = ~quene ? _GEN_579 : _GEN_775; // @[d_cache.scala 167:34]
  wire [511:0] _GEN_845 = ~quene ? ram_1_0 : _GEN_711; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_846 = ~quene ? ram_1_1 : _GEN_712; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_847 = ~quene ? ram_1_2 : _GEN_713; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_848 = ~quene ? ram_1_3 : _GEN_714; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_849 = ~quene ? ram_1_4 : _GEN_715; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_850 = ~quene ? ram_1_5 : _GEN_716; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_851 = ~quene ? ram_1_6 : _GEN_717; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_852 = ~quene ? ram_1_7 : _GEN_718; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_853 = ~quene ? ram_1_8 : _GEN_719; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_854 = ~quene ? ram_1_9 : _GEN_720; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_855 = ~quene ? ram_1_10 : _GEN_721; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_856 = ~quene ? ram_1_11 : _GEN_722; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_857 = ~quene ? ram_1_12 : _GEN_723; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_858 = ~quene ? ram_1_13 : _GEN_724; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_859 = ~quene ? ram_1_14 : _GEN_725; // @[d_cache.scala 167:34 20:24]
  wire [511:0] _GEN_860 = ~quene ? ram_1_15 : _GEN_726; // @[d_cache.scala 167:34 20:24]
  wire [31:0] _GEN_861 = ~quene ? tag_1_0 : _GEN_727; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_862 = ~quene ? tag_1_1 : _GEN_728; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_863 = ~quene ? tag_1_2 : _GEN_729; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_864 = ~quene ? tag_1_3 : _GEN_730; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_865 = ~quene ? tag_1_4 : _GEN_731; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_866 = ~quene ? tag_1_5 : _GEN_732; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_867 = ~quene ? tag_1_6 : _GEN_733; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_868 = ~quene ? tag_1_7 : _GEN_734; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_869 = ~quene ? tag_1_8 : _GEN_735; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_870 = ~quene ? tag_1_9 : _GEN_736; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_871 = ~quene ? tag_1_10 : _GEN_737; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_872 = ~quene ? tag_1_11 : _GEN_738; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_873 = ~quene ? tag_1_12 : _GEN_739; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_874 = ~quene ? tag_1_13 : _GEN_740; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_875 = ~quene ? tag_1_14 : _GEN_741; // @[d_cache.scala 167:34 29:24]
  wire [31:0] _GEN_876 = ~quene ? tag_1_15 : _GEN_742; // @[d_cache.scala 167:34 29:24]
  wire  _GEN_877 = ~quene ? dirty_1_0 : _GEN_743; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_878 = ~quene ? dirty_1_1 : _GEN_744; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_879 = ~quene ? dirty_1_2 : _GEN_745; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_880 = ~quene ? dirty_1_3 : _GEN_746; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_881 = ~quene ? dirty_1_4 : _GEN_747; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_882 = ~quene ? dirty_1_5 : _GEN_748; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_883 = ~quene ? dirty_1_6 : _GEN_749; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_884 = ~quene ? dirty_1_7 : _GEN_750; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_885 = ~quene ? dirty_1_8 : _GEN_751; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_886 = ~quene ? dirty_1_9 : _GEN_752; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_887 = ~quene ? dirty_1_10 : _GEN_753; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_888 = ~quene ? dirty_1_11 : _GEN_754; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_889 = ~quene ? dirty_1_12 : _GEN_755; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_890 = ~quene ? dirty_1_13 : _GEN_756; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_891 = ~quene ? dirty_1_14 : _GEN_757; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_892 = ~quene ? dirty_1_15 : _GEN_758; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_893 = ~quene ? valid_1_0 : _GEN_759; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_894 = ~quene ? valid_1_1 : _GEN_760; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_895 = ~quene ? valid_1_2 : _GEN_761; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_896 = ~quene ? valid_1_3 : _GEN_762; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_897 = ~quene ? valid_1_4 : _GEN_763; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_898 = ~quene ? valid_1_5 : _GEN_764; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_899 = ~quene ? valid_1_6 : _GEN_765; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_900 = ~quene ? valid_1_7 : _GEN_766; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_901 = ~quene ? valid_1_8 : _GEN_767; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_902 = ~quene ? valid_1_9 : _GEN_768; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_903 = ~quene ? valid_1_10 : _GEN_769; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_904 = ~quene ? valid_1_11 : _GEN_770; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_905 = ~quene ? valid_1_12 : _GEN_771; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_906 = ~quene ? valid_1_13 : _GEN_772; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_907 = ~quene ? valid_1_14 : _GEN_773; // @[d_cache.scala 167:34 31:26]
  wire  _GEN_908 = ~quene ? valid_1_15 : _GEN_774; // @[d_cache.scala 167:34 31:26]
  wire [2:0] _GEN_909 = unuse_way == 2'h2 ? 3'h7 : _GEN_843; // @[d_cache.scala 160:40 161:23]
  wire [511:0] _GEN_910 = unuse_way == 2'h2 ? _GEN_337 : _GEN_845; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_911 = unuse_way == 2'h2 ? _GEN_338 : _GEN_846; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_912 = unuse_way == 2'h2 ? _GEN_339 : _GEN_847; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_913 = unuse_way == 2'h2 ? _GEN_340 : _GEN_848; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_914 = unuse_way == 2'h2 ? _GEN_341 : _GEN_849; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_915 = unuse_way == 2'h2 ? _GEN_342 : _GEN_850; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_916 = unuse_way == 2'h2 ? _GEN_343 : _GEN_851; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_917 = unuse_way == 2'h2 ? _GEN_344 : _GEN_852; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_918 = unuse_way == 2'h2 ? _GEN_345 : _GEN_853; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_919 = unuse_way == 2'h2 ? _GEN_346 : _GEN_854; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_920 = unuse_way == 2'h2 ? _GEN_347 : _GEN_855; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_921 = unuse_way == 2'h2 ? _GEN_348 : _GEN_856; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_922 = unuse_way == 2'h2 ? _GEN_349 : _GEN_857; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_923 = unuse_way == 2'h2 ? _GEN_350 : _GEN_858; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_924 = unuse_way == 2'h2 ? _GEN_351 : _GEN_859; // @[d_cache.scala 160:40]
  wire [511:0] _GEN_925 = unuse_way == 2'h2 ? _GEN_352 : _GEN_860; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_926 = unuse_way == 2'h2 ? _GEN_353 : _GEN_861; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_927 = unuse_way == 2'h2 ? _GEN_354 : _GEN_862; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_928 = unuse_way == 2'h2 ? _GEN_355 : _GEN_863; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_929 = unuse_way == 2'h2 ? _GEN_356 : _GEN_864; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_930 = unuse_way == 2'h2 ? _GEN_357 : _GEN_865; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_931 = unuse_way == 2'h2 ? _GEN_358 : _GEN_866; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_932 = unuse_way == 2'h2 ? _GEN_359 : _GEN_867; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_933 = unuse_way == 2'h2 ? _GEN_360 : _GEN_868; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_934 = unuse_way == 2'h2 ? _GEN_361 : _GEN_869; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_935 = unuse_way == 2'h2 ? _GEN_362 : _GEN_870; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_936 = unuse_way == 2'h2 ? _GEN_363 : _GEN_871; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_937 = unuse_way == 2'h2 ? _GEN_364 : _GEN_872; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_938 = unuse_way == 2'h2 ? _GEN_365 : _GEN_873; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_939 = unuse_way == 2'h2 ? _GEN_366 : _GEN_874; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_940 = unuse_way == 2'h2 ? _GEN_367 : _GEN_875; // @[d_cache.scala 160:40]
  wire [31:0] _GEN_941 = unuse_way == 2'h2 ? _GEN_368 : _GEN_876; // @[d_cache.scala 160:40]
  wire  _GEN_942 = unuse_way == 2'h2 ? _GEN_369 : _GEN_893; // @[d_cache.scala 160:40]
  wire  _GEN_943 = unuse_way == 2'h2 ? _GEN_370 : _GEN_894; // @[d_cache.scala 160:40]
  wire  _GEN_944 = unuse_way == 2'h2 ? _GEN_371 : _GEN_895; // @[d_cache.scala 160:40]
  wire  _GEN_945 = unuse_way == 2'h2 ? _GEN_372 : _GEN_896; // @[d_cache.scala 160:40]
  wire  _GEN_946 = unuse_way == 2'h2 ? _GEN_373 : _GEN_897; // @[d_cache.scala 160:40]
  wire  _GEN_947 = unuse_way == 2'h2 ? _GEN_374 : _GEN_898; // @[d_cache.scala 160:40]
  wire  _GEN_948 = unuse_way == 2'h2 ? _GEN_375 : _GEN_899; // @[d_cache.scala 160:40]
  wire  _GEN_949 = unuse_way == 2'h2 ? _GEN_376 : _GEN_900; // @[d_cache.scala 160:40]
  wire  _GEN_950 = unuse_way == 2'h2 ? _GEN_377 : _GEN_901; // @[d_cache.scala 160:40]
  wire  _GEN_951 = unuse_way == 2'h2 ? _GEN_378 : _GEN_902; // @[d_cache.scala 160:40]
  wire  _GEN_952 = unuse_way == 2'h2 ? _GEN_379 : _GEN_903; // @[d_cache.scala 160:40]
  wire  _GEN_953 = unuse_way == 2'h2 ? _GEN_380 : _GEN_904; // @[d_cache.scala 160:40]
  wire  _GEN_954 = unuse_way == 2'h2 ? _GEN_381 : _GEN_905; // @[d_cache.scala 160:40]
  wire  _GEN_955 = unuse_way == 2'h2 ? _GEN_382 : _GEN_906; // @[d_cache.scala 160:40]
  wire  _GEN_956 = unuse_way == 2'h2 ? _GEN_383 : _GEN_907; // @[d_cache.scala 160:40]
  wire  _GEN_957 = unuse_way == 2'h2 ? _GEN_384 : _GEN_908; // @[d_cache.scala 160:40]
  wire  _GEN_958 = unuse_way == 2'h2 ? 1'h0 : _T_16; // @[d_cache.scala 160:40 165:23]
  wire [511:0] _GEN_959 = unuse_way == 2'h2 ? write_back_data : _GEN_777; // @[d_cache.scala 160:40 37:34]
  wire [41:0] _GEN_960 = unuse_way == 2'h2 ? {{10'd0}, write_back_addr} : _GEN_778; // @[d_cache.scala 160:40 38:34]
  wire [511:0] _GEN_961 = unuse_way == 2'h2 ? ram_0_0 : _GEN_779; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_962 = unuse_way == 2'h2 ? ram_0_1 : _GEN_780; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_963 = unuse_way == 2'h2 ? ram_0_2 : _GEN_781; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_964 = unuse_way == 2'h2 ? ram_0_3 : _GEN_782; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_965 = unuse_way == 2'h2 ? ram_0_4 : _GEN_783; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_966 = unuse_way == 2'h2 ? ram_0_5 : _GEN_784; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_967 = unuse_way == 2'h2 ? ram_0_6 : _GEN_785; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_968 = unuse_way == 2'h2 ? ram_0_7 : _GEN_786; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_969 = unuse_way == 2'h2 ? ram_0_8 : _GEN_787; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_970 = unuse_way == 2'h2 ? ram_0_9 : _GEN_788; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_971 = unuse_way == 2'h2 ? ram_0_10 : _GEN_789; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_972 = unuse_way == 2'h2 ? ram_0_11 : _GEN_790; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_973 = unuse_way == 2'h2 ? ram_0_12 : _GEN_791; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_974 = unuse_way == 2'h2 ? ram_0_13 : _GEN_792; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_975 = unuse_way == 2'h2 ? ram_0_14 : _GEN_793; // @[d_cache.scala 160:40 19:24]
  wire [511:0] _GEN_976 = unuse_way == 2'h2 ? ram_0_15 : _GEN_794; // @[d_cache.scala 160:40 19:24]
  wire [31:0] _GEN_977 = unuse_way == 2'h2 ? tag_0_0 : _GEN_795; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_978 = unuse_way == 2'h2 ? tag_0_1 : _GEN_796; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_979 = unuse_way == 2'h2 ? tag_0_2 : _GEN_797; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_980 = unuse_way == 2'h2 ? tag_0_3 : _GEN_798; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_981 = unuse_way == 2'h2 ? tag_0_4 : _GEN_799; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_982 = unuse_way == 2'h2 ? tag_0_5 : _GEN_800; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_983 = unuse_way == 2'h2 ? tag_0_6 : _GEN_801; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_984 = unuse_way == 2'h2 ? tag_0_7 : _GEN_802; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_985 = unuse_way == 2'h2 ? tag_0_8 : _GEN_803; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_986 = unuse_way == 2'h2 ? tag_0_9 : _GEN_804; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_987 = unuse_way == 2'h2 ? tag_0_10 : _GEN_805; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_988 = unuse_way == 2'h2 ? tag_0_11 : _GEN_806; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_989 = unuse_way == 2'h2 ? tag_0_12 : _GEN_807; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_990 = unuse_way == 2'h2 ? tag_0_13 : _GEN_808; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_991 = unuse_way == 2'h2 ? tag_0_14 : _GEN_809; // @[d_cache.scala 160:40 28:24]
  wire [31:0] _GEN_992 = unuse_way == 2'h2 ? tag_0_15 : _GEN_810; // @[d_cache.scala 160:40 28:24]
  wire  _GEN_993 = unuse_way == 2'h2 ? dirty_0_0 : _GEN_811; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_994 = unuse_way == 2'h2 ? dirty_0_1 : _GEN_812; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_995 = unuse_way == 2'h2 ? dirty_0_2 : _GEN_813; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_996 = unuse_way == 2'h2 ? dirty_0_3 : _GEN_814; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_997 = unuse_way == 2'h2 ? dirty_0_4 : _GEN_815; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_998 = unuse_way == 2'h2 ? dirty_0_5 : _GEN_816; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_999 = unuse_way == 2'h2 ? dirty_0_6 : _GEN_817; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1000 = unuse_way == 2'h2 ? dirty_0_7 : _GEN_818; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1001 = unuse_way == 2'h2 ? dirty_0_8 : _GEN_819; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1002 = unuse_way == 2'h2 ? dirty_0_9 : _GEN_820; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1003 = unuse_way == 2'h2 ? dirty_0_10 : _GEN_821; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1004 = unuse_way == 2'h2 ? dirty_0_11 : _GEN_822; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1005 = unuse_way == 2'h2 ? dirty_0_12 : _GEN_823; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1006 = unuse_way == 2'h2 ? dirty_0_13 : _GEN_824; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1007 = unuse_way == 2'h2 ? dirty_0_14 : _GEN_825; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1008 = unuse_way == 2'h2 ? dirty_0_15 : _GEN_826; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1009 = unuse_way == 2'h2 ? valid_0_0 : _GEN_827; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1010 = unuse_way == 2'h2 ? valid_0_1 : _GEN_828; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1011 = unuse_way == 2'h2 ? valid_0_2 : _GEN_829; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1012 = unuse_way == 2'h2 ? valid_0_3 : _GEN_830; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1013 = unuse_way == 2'h2 ? valid_0_4 : _GEN_831; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1014 = unuse_way == 2'h2 ? valid_0_5 : _GEN_832; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1015 = unuse_way == 2'h2 ? valid_0_6 : _GEN_833; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1016 = unuse_way == 2'h2 ? valid_0_7 : _GEN_834; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1017 = unuse_way == 2'h2 ? valid_0_8 : _GEN_835; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1018 = unuse_way == 2'h2 ? valid_0_9 : _GEN_836; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1019 = unuse_way == 2'h2 ? valid_0_10 : _GEN_837; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1020 = unuse_way == 2'h2 ? valid_0_11 : _GEN_838; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1021 = unuse_way == 2'h2 ? valid_0_12 : _GEN_839; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1022 = unuse_way == 2'h2 ? valid_0_13 : _GEN_840; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1023 = unuse_way == 2'h2 ? valid_0_14 : _GEN_841; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1024 = unuse_way == 2'h2 ? valid_0_15 : _GEN_842; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1025 = unuse_way == 2'h2 ? dirty_1_0 : _GEN_877; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1026 = unuse_way == 2'h2 ? dirty_1_1 : _GEN_878; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1027 = unuse_way == 2'h2 ? dirty_1_2 : _GEN_879; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1028 = unuse_way == 2'h2 ? dirty_1_3 : _GEN_880; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1029 = unuse_way == 2'h2 ? dirty_1_4 : _GEN_881; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1030 = unuse_way == 2'h2 ? dirty_1_5 : _GEN_882; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1031 = unuse_way == 2'h2 ? dirty_1_6 : _GEN_883; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1032 = unuse_way == 2'h2 ? dirty_1_7 : _GEN_884; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1033 = unuse_way == 2'h2 ? dirty_1_8 : _GEN_885; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1034 = unuse_way == 2'h2 ? dirty_1_9 : _GEN_886; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1035 = unuse_way == 2'h2 ? dirty_1_10 : _GEN_887; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1036 = unuse_way == 2'h2 ? dirty_1_11 : _GEN_888; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1037 = unuse_way == 2'h2 ? dirty_1_12 : _GEN_889; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1038 = unuse_way == 2'h2 ? dirty_1_13 : _GEN_890; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1039 = unuse_way == 2'h2 ? dirty_1_14 : _GEN_891; // @[d_cache.scala 160:40 33:26]
  wire  _GEN_1040 = unuse_way == 2'h2 ? dirty_1_15 : _GEN_892; // @[d_cache.scala 160:40 33:26]
  wire [2:0] _GEN_1041 = unuse_way == 2'h1 ? 3'h7 : _GEN_909; // @[d_cache.scala 154:34 155:23]
  wire [511:0] _GEN_1042 = unuse_way == 2'h1 ? _GEN_289 : _GEN_961; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1043 = unuse_way == 2'h1 ? _GEN_290 : _GEN_962; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1044 = unuse_way == 2'h1 ? _GEN_291 : _GEN_963; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1045 = unuse_way == 2'h1 ? _GEN_292 : _GEN_964; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1046 = unuse_way == 2'h1 ? _GEN_293 : _GEN_965; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1047 = unuse_way == 2'h1 ? _GEN_294 : _GEN_966; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1048 = unuse_way == 2'h1 ? _GEN_295 : _GEN_967; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1049 = unuse_way == 2'h1 ? _GEN_296 : _GEN_968; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1050 = unuse_way == 2'h1 ? _GEN_297 : _GEN_969; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1051 = unuse_way == 2'h1 ? _GEN_298 : _GEN_970; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1052 = unuse_way == 2'h1 ? _GEN_299 : _GEN_971; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1053 = unuse_way == 2'h1 ? _GEN_300 : _GEN_972; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1054 = unuse_way == 2'h1 ? _GEN_301 : _GEN_973; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1055 = unuse_way == 2'h1 ? _GEN_302 : _GEN_974; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1056 = unuse_way == 2'h1 ? _GEN_303 : _GEN_975; // @[d_cache.scala 154:34]
  wire [511:0] _GEN_1057 = unuse_way == 2'h1 ? _GEN_304 : _GEN_976; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1058 = unuse_way == 2'h1 ? _GEN_305 : _GEN_977; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1059 = unuse_way == 2'h1 ? _GEN_306 : _GEN_978; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1060 = unuse_way == 2'h1 ? _GEN_307 : _GEN_979; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1061 = unuse_way == 2'h1 ? _GEN_308 : _GEN_980; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1062 = unuse_way == 2'h1 ? _GEN_309 : _GEN_981; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1063 = unuse_way == 2'h1 ? _GEN_310 : _GEN_982; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1064 = unuse_way == 2'h1 ? _GEN_311 : _GEN_983; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1065 = unuse_way == 2'h1 ? _GEN_312 : _GEN_984; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1066 = unuse_way == 2'h1 ? _GEN_313 : _GEN_985; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1067 = unuse_way == 2'h1 ? _GEN_314 : _GEN_986; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1068 = unuse_way == 2'h1 ? _GEN_315 : _GEN_987; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1069 = unuse_way == 2'h1 ? _GEN_316 : _GEN_988; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1070 = unuse_way == 2'h1 ? _GEN_317 : _GEN_989; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1071 = unuse_way == 2'h1 ? _GEN_318 : _GEN_990; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1072 = unuse_way == 2'h1 ? _GEN_319 : _GEN_991; // @[d_cache.scala 154:34]
  wire [31:0] _GEN_1073 = unuse_way == 2'h1 ? _GEN_320 : _GEN_992; // @[d_cache.scala 154:34]
  wire  _GEN_1074 = unuse_way == 2'h1 ? _GEN_321 : _GEN_1009; // @[d_cache.scala 154:34]
  wire  _GEN_1075 = unuse_way == 2'h1 ? _GEN_322 : _GEN_1010; // @[d_cache.scala 154:34]
  wire  _GEN_1076 = unuse_way == 2'h1 ? _GEN_323 : _GEN_1011; // @[d_cache.scala 154:34]
  wire  _GEN_1077 = unuse_way == 2'h1 ? _GEN_324 : _GEN_1012; // @[d_cache.scala 154:34]
  wire  _GEN_1078 = unuse_way == 2'h1 ? _GEN_325 : _GEN_1013; // @[d_cache.scala 154:34]
  wire  _GEN_1079 = unuse_way == 2'h1 ? _GEN_326 : _GEN_1014; // @[d_cache.scala 154:34]
  wire  _GEN_1080 = unuse_way == 2'h1 ? _GEN_327 : _GEN_1015; // @[d_cache.scala 154:34]
  wire  _GEN_1081 = unuse_way == 2'h1 ? _GEN_328 : _GEN_1016; // @[d_cache.scala 154:34]
  wire  _GEN_1082 = unuse_way == 2'h1 ? _GEN_329 : _GEN_1017; // @[d_cache.scala 154:34]
  wire  _GEN_1083 = unuse_way == 2'h1 ? _GEN_330 : _GEN_1018; // @[d_cache.scala 154:34]
  wire  _GEN_1084 = unuse_way == 2'h1 ? _GEN_331 : _GEN_1019; // @[d_cache.scala 154:34]
  wire  _GEN_1085 = unuse_way == 2'h1 ? _GEN_332 : _GEN_1020; // @[d_cache.scala 154:34]
  wire  _GEN_1086 = unuse_way == 2'h1 ? _GEN_333 : _GEN_1021; // @[d_cache.scala 154:34]
  wire  _GEN_1087 = unuse_way == 2'h1 ? _GEN_334 : _GEN_1022; // @[d_cache.scala 154:34]
  wire  _GEN_1088 = unuse_way == 2'h1 ? _GEN_335 : _GEN_1023; // @[d_cache.scala 154:34]
  wire  _GEN_1089 = unuse_way == 2'h1 ? _GEN_336 : _GEN_1024; // @[d_cache.scala 154:34]
  wire  _GEN_1090 = unuse_way == 2'h1 | _GEN_958; // @[d_cache.scala 154:34 159:23]
  wire [511:0] _GEN_1091 = unuse_way == 2'h1 ? ram_1_0 : _GEN_910; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1092 = unuse_way == 2'h1 ? ram_1_1 : _GEN_911; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1093 = unuse_way == 2'h1 ? ram_1_2 : _GEN_912; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1094 = unuse_way == 2'h1 ? ram_1_3 : _GEN_913; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1095 = unuse_way == 2'h1 ? ram_1_4 : _GEN_914; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1096 = unuse_way == 2'h1 ? ram_1_5 : _GEN_915; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1097 = unuse_way == 2'h1 ? ram_1_6 : _GEN_916; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1098 = unuse_way == 2'h1 ? ram_1_7 : _GEN_917; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1099 = unuse_way == 2'h1 ? ram_1_8 : _GEN_918; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1100 = unuse_way == 2'h1 ? ram_1_9 : _GEN_919; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1101 = unuse_way == 2'h1 ? ram_1_10 : _GEN_920; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1102 = unuse_way == 2'h1 ? ram_1_11 : _GEN_921; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1103 = unuse_way == 2'h1 ? ram_1_12 : _GEN_922; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1104 = unuse_way == 2'h1 ? ram_1_13 : _GEN_923; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1105 = unuse_way == 2'h1 ? ram_1_14 : _GEN_924; // @[d_cache.scala 154:34 20:24]
  wire [511:0] _GEN_1106 = unuse_way == 2'h1 ? ram_1_15 : _GEN_925; // @[d_cache.scala 154:34 20:24]
  wire [31:0] _GEN_1107 = unuse_way == 2'h1 ? tag_1_0 : _GEN_926; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1108 = unuse_way == 2'h1 ? tag_1_1 : _GEN_927; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1109 = unuse_way == 2'h1 ? tag_1_2 : _GEN_928; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1110 = unuse_way == 2'h1 ? tag_1_3 : _GEN_929; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1111 = unuse_way == 2'h1 ? tag_1_4 : _GEN_930; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1112 = unuse_way == 2'h1 ? tag_1_5 : _GEN_931; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1113 = unuse_way == 2'h1 ? tag_1_6 : _GEN_932; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1114 = unuse_way == 2'h1 ? tag_1_7 : _GEN_933; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1115 = unuse_way == 2'h1 ? tag_1_8 : _GEN_934; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1116 = unuse_way == 2'h1 ? tag_1_9 : _GEN_935; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1117 = unuse_way == 2'h1 ? tag_1_10 : _GEN_936; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1118 = unuse_way == 2'h1 ? tag_1_11 : _GEN_937; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1119 = unuse_way == 2'h1 ? tag_1_12 : _GEN_938; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1120 = unuse_way == 2'h1 ? tag_1_13 : _GEN_939; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1121 = unuse_way == 2'h1 ? tag_1_14 : _GEN_940; // @[d_cache.scala 154:34 29:24]
  wire [31:0] _GEN_1122 = unuse_way == 2'h1 ? tag_1_15 : _GEN_941; // @[d_cache.scala 154:34 29:24]
  wire  _GEN_1123 = unuse_way == 2'h1 ? valid_1_0 : _GEN_942; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1124 = unuse_way == 2'h1 ? valid_1_1 : _GEN_943; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1125 = unuse_way == 2'h1 ? valid_1_2 : _GEN_944; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1126 = unuse_way == 2'h1 ? valid_1_3 : _GEN_945; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1127 = unuse_way == 2'h1 ? valid_1_4 : _GEN_946; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1128 = unuse_way == 2'h1 ? valid_1_5 : _GEN_947; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1129 = unuse_way == 2'h1 ? valid_1_6 : _GEN_948; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1130 = unuse_way == 2'h1 ? valid_1_7 : _GEN_949; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1131 = unuse_way == 2'h1 ? valid_1_8 : _GEN_950; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1132 = unuse_way == 2'h1 ? valid_1_9 : _GEN_951; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1133 = unuse_way == 2'h1 ? valid_1_10 : _GEN_952; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1134 = unuse_way == 2'h1 ? valid_1_11 : _GEN_953; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1135 = unuse_way == 2'h1 ? valid_1_12 : _GEN_954; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1136 = unuse_way == 2'h1 ? valid_1_13 : _GEN_955; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1137 = unuse_way == 2'h1 ? valid_1_14 : _GEN_956; // @[d_cache.scala 154:34 31:26]
  wire  _GEN_1138 = unuse_way == 2'h1 ? valid_1_15 : _GEN_957; // @[d_cache.scala 154:34 31:26]
  wire [511:0] _GEN_1139 = unuse_way == 2'h1 ? write_back_data : _GEN_959; // @[d_cache.scala 154:34 37:34]
  wire [41:0] _GEN_1140 = unuse_way == 2'h1 ? {{10'd0}, write_back_addr} : _GEN_960; // @[d_cache.scala 154:34 38:34]
  wire  _GEN_1141 = unuse_way == 2'h1 ? dirty_0_0 : _GEN_993; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1142 = unuse_way == 2'h1 ? dirty_0_1 : _GEN_994; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1143 = unuse_way == 2'h1 ? dirty_0_2 : _GEN_995; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1144 = unuse_way == 2'h1 ? dirty_0_3 : _GEN_996; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1145 = unuse_way == 2'h1 ? dirty_0_4 : _GEN_997; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1146 = unuse_way == 2'h1 ? dirty_0_5 : _GEN_998; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1147 = unuse_way == 2'h1 ? dirty_0_6 : _GEN_999; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1148 = unuse_way == 2'h1 ? dirty_0_7 : _GEN_1000; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1149 = unuse_way == 2'h1 ? dirty_0_8 : _GEN_1001; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1150 = unuse_way == 2'h1 ? dirty_0_9 : _GEN_1002; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1151 = unuse_way == 2'h1 ? dirty_0_10 : _GEN_1003; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1152 = unuse_way == 2'h1 ? dirty_0_11 : _GEN_1004; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1153 = unuse_way == 2'h1 ? dirty_0_12 : _GEN_1005; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1154 = unuse_way == 2'h1 ? dirty_0_13 : _GEN_1006; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1155 = unuse_way == 2'h1 ? dirty_0_14 : _GEN_1007; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1156 = unuse_way == 2'h1 ? dirty_0_15 : _GEN_1008; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1157 = unuse_way == 2'h1 ? dirty_1_0 : _GEN_1025; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1158 = unuse_way == 2'h1 ? dirty_1_1 : _GEN_1026; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1159 = unuse_way == 2'h1 ? dirty_1_2 : _GEN_1027; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1160 = unuse_way == 2'h1 ? dirty_1_3 : _GEN_1028; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1161 = unuse_way == 2'h1 ? dirty_1_4 : _GEN_1029; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1162 = unuse_way == 2'h1 ? dirty_1_5 : _GEN_1030; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1163 = unuse_way == 2'h1 ? dirty_1_6 : _GEN_1031; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1164 = unuse_way == 2'h1 ? dirty_1_7 : _GEN_1032; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1165 = unuse_way == 2'h1 ? dirty_1_8 : _GEN_1033; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1166 = unuse_way == 2'h1 ? dirty_1_9 : _GEN_1034; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1167 = unuse_way == 2'h1 ? dirty_1_10 : _GEN_1035; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1168 = unuse_way == 2'h1 ? dirty_1_11 : _GEN_1036; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1169 = unuse_way == 2'h1 ? dirty_1_12 : _GEN_1037; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1170 = unuse_way == 2'h1 ? dirty_1_13 : _GEN_1038; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1171 = unuse_way == 2'h1 ? dirty_1_14 : _GEN_1039; // @[d_cache.scala 154:34 33:26]
  wire  _GEN_1172 = unuse_way == 2'h1 ? dirty_1_15 : _GEN_1040; // @[d_cache.scala 154:34 33:26]
  wire [511:0] _write_back_data_T = {{64'd0}, write_back_data[511:64]}; // @[d_cache.scala 207:52]
  wire [511:0] _GEN_1173 = io_from_axi_wready ? _write_back_data_T : write_back_data; // @[d_cache.scala 206:37 207:33 37:34]
  wire [2:0] _GEN_1174 = io_from_axi_bvalid ? 3'h7 : state; // @[d_cache.scala 209:37 210:23 84:24]
  wire [2:0] _GEN_1175 = 3'h7 == state ? 3'h1 : state; // @[d_cache.scala 89:18 214:19 84:24]
  wire [511:0] _GEN_1176 = 3'h6 == state ? _GEN_1173 : write_back_data; // @[d_cache.scala 89:18 37:34]
  wire [2:0] _GEN_1177 = 3'h6 == state ? _GEN_1174 : _GEN_1175; // @[d_cache.scala 89:18]
  wire [2:0] _GEN_1178 = 3'h5 == state ? _GEN_1041 : _GEN_1177; // @[d_cache.scala 89:18]
  wire [511:0] _GEN_1179 = 3'h5 == state ? _GEN_1042 : ram_0_0; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1180 = 3'h5 == state ? _GEN_1043 : ram_0_1; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1181 = 3'h5 == state ? _GEN_1044 : ram_0_2; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1182 = 3'h5 == state ? _GEN_1045 : ram_0_3; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1183 = 3'h5 == state ? _GEN_1046 : ram_0_4; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1184 = 3'h5 == state ? _GEN_1047 : ram_0_5; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1185 = 3'h5 == state ? _GEN_1048 : ram_0_6; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1186 = 3'h5 == state ? _GEN_1049 : ram_0_7; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1187 = 3'h5 == state ? _GEN_1050 : ram_0_8; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1188 = 3'h5 == state ? _GEN_1051 : ram_0_9; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1189 = 3'h5 == state ? _GEN_1052 : ram_0_10; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1190 = 3'h5 == state ? _GEN_1053 : ram_0_11; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1191 = 3'h5 == state ? _GEN_1054 : ram_0_12; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1192 = 3'h5 == state ? _GEN_1055 : ram_0_13; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1193 = 3'h5 == state ? _GEN_1056 : ram_0_14; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1194 = 3'h5 == state ? _GEN_1057 : ram_0_15; // @[d_cache.scala 89:18 19:24]
  wire [31:0] _GEN_1195 = 3'h5 == state ? _GEN_1058 : tag_0_0; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1196 = 3'h5 == state ? _GEN_1059 : tag_0_1; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1197 = 3'h5 == state ? _GEN_1060 : tag_0_2; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1198 = 3'h5 == state ? _GEN_1061 : tag_0_3; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1199 = 3'h5 == state ? _GEN_1062 : tag_0_4; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1200 = 3'h5 == state ? _GEN_1063 : tag_0_5; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1201 = 3'h5 == state ? _GEN_1064 : tag_0_6; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1202 = 3'h5 == state ? _GEN_1065 : tag_0_7; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1203 = 3'h5 == state ? _GEN_1066 : tag_0_8; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1204 = 3'h5 == state ? _GEN_1067 : tag_0_9; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1205 = 3'h5 == state ? _GEN_1068 : tag_0_10; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1206 = 3'h5 == state ? _GEN_1069 : tag_0_11; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1207 = 3'h5 == state ? _GEN_1070 : tag_0_12; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1208 = 3'h5 == state ? _GEN_1071 : tag_0_13; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1209 = 3'h5 == state ? _GEN_1072 : tag_0_14; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1210 = 3'h5 == state ? _GEN_1073 : tag_0_15; // @[d_cache.scala 89:18 28:24]
  wire  _GEN_1211 = 3'h5 == state ? _GEN_1074 : valid_0_0; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1212 = 3'h5 == state ? _GEN_1075 : valid_0_1; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1213 = 3'h5 == state ? _GEN_1076 : valid_0_2; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1214 = 3'h5 == state ? _GEN_1077 : valid_0_3; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1215 = 3'h5 == state ? _GEN_1078 : valid_0_4; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1216 = 3'h5 == state ? _GEN_1079 : valid_0_5; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1217 = 3'h5 == state ? _GEN_1080 : valid_0_6; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1218 = 3'h5 == state ? _GEN_1081 : valid_0_7; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1219 = 3'h5 == state ? _GEN_1082 : valid_0_8; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1220 = 3'h5 == state ? _GEN_1083 : valid_0_9; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1221 = 3'h5 == state ? _GEN_1084 : valid_0_10; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1222 = 3'h5 == state ? _GEN_1085 : valid_0_11; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1223 = 3'h5 == state ? _GEN_1086 : valid_0_12; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1224 = 3'h5 == state ? _GEN_1087 : valid_0_13; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1225 = 3'h5 == state ? _GEN_1088 : valid_0_14; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1226 = 3'h5 == state ? _GEN_1089 : valid_0_15; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1227 = 3'h5 == state ? _GEN_1090 : quene; // @[d_cache.scala 89:18 44:24]
  wire [511:0] _GEN_1228 = 3'h5 == state ? _GEN_1091 : ram_1_0; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1229 = 3'h5 == state ? _GEN_1092 : ram_1_1; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1230 = 3'h5 == state ? _GEN_1093 : ram_1_2; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1231 = 3'h5 == state ? _GEN_1094 : ram_1_3; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1232 = 3'h5 == state ? _GEN_1095 : ram_1_4; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1233 = 3'h5 == state ? _GEN_1096 : ram_1_5; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1234 = 3'h5 == state ? _GEN_1097 : ram_1_6; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1235 = 3'h5 == state ? _GEN_1098 : ram_1_7; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1236 = 3'h5 == state ? _GEN_1099 : ram_1_8; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1237 = 3'h5 == state ? _GEN_1100 : ram_1_9; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1238 = 3'h5 == state ? _GEN_1101 : ram_1_10; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1239 = 3'h5 == state ? _GEN_1102 : ram_1_11; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1240 = 3'h5 == state ? _GEN_1103 : ram_1_12; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1241 = 3'h5 == state ? _GEN_1104 : ram_1_13; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1242 = 3'h5 == state ? _GEN_1105 : ram_1_14; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1243 = 3'h5 == state ? _GEN_1106 : ram_1_15; // @[d_cache.scala 89:18 20:24]
  wire [31:0] _GEN_1244 = 3'h5 == state ? _GEN_1107 : tag_1_0; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1245 = 3'h5 == state ? _GEN_1108 : tag_1_1; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1246 = 3'h5 == state ? _GEN_1109 : tag_1_2; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1247 = 3'h5 == state ? _GEN_1110 : tag_1_3; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1248 = 3'h5 == state ? _GEN_1111 : tag_1_4; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1249 = 3'h5 == state ? _GEN_1112 : tag_1_5; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1250 = 3'h5 == state ? _GEN_1113 : tag_1_6; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1251 = 3'h5 == state ? _GEN_1114 : tag_1_7; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1252 = 3'h5 == state ? _GEN_1115 : tag_1_8; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1253 = 3'h5 == state ? _GEN_1116 : tag_1_9; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1254 = 3'h5 == state ? _GEN_1117 : tag_1_10; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1255 = 3'h5 == state ? _GEN_1118 : tag_1_11; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1256 = 3'h5 == state ? _GEN_1119 : tag_1_12; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1257 = 3'h5 == state ? _GEN_1120 : tag_1_13; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1258 = 3'h5 == state ? _GEN_1121 : tag_1_14; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1259 = 3'h5 == state ? _GEN_1122 : tag_1_15; // @[d_cache.scala 89:18 29:24]
  wire  _GEN_1260 = 3'h5 == state ? _GEN_1123 : valid_1_0; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1261 = 3'h5 == state ? _GEN_1124 : valid_1_1; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1262 = 3'h5 == state ? _GEN_1125 : valid_1_2; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1263 = 3'h5 == state ? _GEN_1126 : valid_1_3; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1264 = 3'h5 == state ? _GEN_1127 : valid_1_4; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1265 = 3'h5 == state ? _GEN_1128 : valid_1_5; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1266 = 3'h5 == state ? _GEN_1129 : valid_1_6; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1267 = 3'h5 == state ? _GEN_1130 : valid_1_7; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1268 = 3'h5 == state ? _GEN_1131 : valid_1_8; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1269 = 3'h5 == state ? _GEN_1132 : valid_1_9; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1270 = 3'h5 == state ? _GEN_1133 : valid_1_10; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1271 = 3'h5 == state ? _GEN_1134 : valid_1_11; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1272 = 3'h5 == state ? _GEN_1135 : valid_1_12; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1273 = 3'h5 == state ? _GEN_1136 : valid_1_13; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1274 = 3'h5 == state ? _GEN_1137 : valid_1_14; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1275 = 3'h5 == state ? _GEN_1138 : valid_1_15; // @[d_cache.scala 89:18 31:26]
  wire [511:0] _GEN_1276 = 3'h5 == state ? _GEN_1139 : _GEN_1176; // @[d_cache.scala 89:18]
  wire [41:0] _GEN_1277 = 3'h5 == state ? _GEN_1140 : {{10'd0}, write_back_addr}; // @[d_cache.scala 89:18 38:34]
  wire  _GEN_1278 = 3'h5 == state ? _GEN_1141 : dirty_0_0; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1279 = 3'h5 == state ? _GEN_1142 : dirty_0_1; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1280 = 3'h5 == state ? _GEN_1143 : dirty_0_2; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1281 = 3'h5 == state ? _GEN_1144 : dirty_0_3; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1282 = 3'h5 == state ? _GEN_1145 : dirty_0_4; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1283 = 3'h5 == state ? _GEN_1146 : dirty_0_5; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1284 = 3'h5 == state ? _GEN_1147 : dirty_0_6; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1285 = 3'h5 == state ? _GEN_1148 : dirty_0_7; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1286 = 3'h5 == state ? _GEN_1149 : dirty_0_8; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1287 = 3'h5 == state ? _GEN_1150 : dirty_0_9; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1288 = 3'h5 == state ? _GEN_1151 : dirty_0_10; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1289 = 3'h5 == state ? _GEN_1152 : dirty_0_11; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1290 = 3'h5 == state ? _GEN_1153 : dirty_0_12; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1291 = 3'h5 == state ? _GEN_1154 : dirty_0_13; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1292 = 3'h5 == state ? _GEN_1155 : dirty_0_14; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1293 = 3'h5 == state ? _GEN_1156 : dirty_0_15; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1294 = 3'h5 == state ? _GEN_1157 : dirty_1_0; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1295 = 3'h5 == state ? _GEN_1158 : dirty_1_1; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1296 = 3'h5 == state ? _GEN_1159 : dirty_1_2; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1297 = 3'h5 == state ? _GEN_1160 : dirty_1_3; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1298 = 3'h5 == state ? _GEN_1161 : dirty_1_4; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1299 = 3'h5 == state ? _GEN_1162 : dirty_1_5; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1300 = 3'h5 == state ? _GEN_1163 : dirty_1_6; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1301 = 3'h5 == state ? _GEN_1164 : dirty_1_7; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1302 = 3'h5 == state ? _GEN_1165 : dirty_1_8; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1303 = 3'h5 == state ? _GEN_1166 : dirty_1_9; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1304 = 3'h5 == state ? _GEN_1167 : dirty_1_10; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1305 = 3'h5 == state ? _GEN_1168 : dirty_1_11; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1306 = 3'h5 == state ? _GEN_1169 : dirty_1_12; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1307 = 3'h5 == state ? _GEN_1170 : dirty_1_13; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1308 = 3'h5 == state ? _GEN_1171 : dirty_1_14; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1309 = 3'h5 == state ? _GEN_1172 : dirty_1_15; // @[d_cache.scala 89:18 33:26]
  wire [2:0] _GEN_1310 = 3'h4 == state ? _GEN_288 : _GEN_1178; // @[d_cache.scala 89:18]
  wire [511:0] _GEN_1311 = 3'h4 == state ? ram_0_0 : _GEN_1179; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1312 = 3'h4 == state ? ram_0_1 : _GEN_1180; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1313 = 3'h4 == state ? ram_0_2 : _GEN_1181; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1314 = 3'h4 == state ? ram_0_3 : _GEN_1182; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1315 = 3'h4 == state ? ram_0_4 : _GEN_1183; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1316 = 3'h4 == state ? ram_0_5 : _GEN_1184; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1317 = 3'h4 == state ? ram_0_6 : _GEN_1185; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1318 = 3'h4 == state ? ram_0_7 : _GEN_1186; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1319 = 3'h4 == state ? ram_0_8 : _GEN_1187; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1320 = 3'h4 == state ? ram_0_9 : _GEN_1188; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1321 = 3'h4 == state ? ram_0_10 : _GEN_1189; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1322 = 3'h4 == state ? ram_0_11 : _GEN_1190; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1323 = 3'h4 == state ? ram_0_12 : _GEN_1191; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1324 = 3'h4 == state ? ram_0_13 : _GEN_1192; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1325 = 3'h4 == state ? ram_0_14 : _GEN_1193; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1326 = 3'h4 == state ? ram_0_15 : _GEN_1194; // @[d_cache.scala 89:18 19:24]
  wire [31:0] _GEN_1327 = 3'h4 == state ? tag_0_0 : _GEN_1195; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1328 = 3'h4 == state ? tag_0_1 : _GEN_1196; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1329 = 3'h4 == state ? tag_0_2 : _GEN_1197; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1330 = 3'h4 == state ? tag_0_3 : _GEN_1198; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1331 = 3'h4 == state ? tag_0_4 : _GEN_1199; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1332 = 3'h4 == state ? tag_0_5 : _GEN_1200; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1333 = 3'h4 == state ? tag_0_6 : _GEN_1201; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1334 = 3'h4 == state ? tag_0_7 : _GEN_1202; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1335 = 3'h4 == state ? tag_0_8 : _GEN_1203; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1336 = 3'h4 == state ? tag_0_9 : _GEN_1204; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1337 = 3'h4 == state ? tag_0_10 : _GEN_1205; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1338 = 3'h4 == state ? tag_0_11 : _GEN_1206; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1339 = 3'h4 == state ? tag_0_12 : _GEN_1207; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1340 = 3'h4 == state ? tag_0_13 : _GEN_1208; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1341 = 3'h4 == state ? tag_0_14 : _GEN_1209; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1342 = 3'h4 == state ? tag_0_15 : _GEN_1210; // @[d_cache.scala 89:18 28:24]
  wire  _GEN_1343 = 3'h4 == state ? valid_0_0 : _GEN_1211; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1344 = 3'h4 == state ? valid_0_1 : _GEN_1212; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1345 = 3'h4 == state ? valid_0_2 : _GEN_1213; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1346 = 3'h4 == state ? valid_0_3 : _GEN_1214; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1347 = 3'h4 == state ? valid_0_4 : _GEN_1215; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1348 = 3'h4 == state ? valid_0_5 : _GEN_1216; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1349 = 3'h4 == state ? valid_0_6 : _GEN_1217; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1350 = 3'h4 == state ? valid_0_7 : _GEN_1218; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1351 = 3'h4 == state ? valid_0_8 : _GEN_1219; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1352 = 3'h4 == state ? valid_0_9 : _GEN_1220; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1353 = 3'h4 == state ? valid_0_10 : _GEN_1221; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1354 = 3'h4 == state ? valid_0_11 : _GEN_1222; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1355 = 3'h4 == state ? valid_0_12 : _GEN_1223; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1356 = 3'h4 == state ? valid_0_13 : _GEN_1224; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1357 = 3'h4 == state ? valid_0_14 : _GEN_1225; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1358 = 3'h4 == state ? valid_0_15 : _GEN_1226; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1359 = 3'h4 == state ? quene : _GEN_1227; // @[d_cache.scala 89:18 44:24]
  wire [511:0] _GEN_1360 = 3'h4 == state ? ram_1_0 : _GEN_1228; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1361 = 3'h4 == state ? ram_1_1 : _GEN_1229; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1362 = 3'h4 == state ? ram_1_2 : _GEN_1230; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1363 = 3'h4 == state ? ram_1_3 : _GEN_1231; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1364 = 3'h4 == state ? ram_1_4 : _GEN_1232; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1365 = 3'h4 == state ? ram_1_5 : _GEN_1233; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1366 = 3'h4 == state ? ram_1_6 : _GEN_1234; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1367 = 3'h4 == state ? ram_1_7 : _GEN_1235; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1368 = 3'h4 == state ? ram_1_8 : _GEN_1236; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1369 = 3'h4 == state ? ram_1_9 : _GEN_1237; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1370 = 3'h4 == state ? ram_1_10 : _GEN_1238; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1371 = 3'h4 == state ? ram_1_11 : _GEN_1239; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1372 = 3'h4 == state ? ram_1_12 : _GEN_1240; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1373 = 3'h4 == state ? ram_1_13 : _GEN_1241; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1374 = 3'h4 == state ? ram_1_14 : _GEN_1242; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1375 = 3'h4 == state ? ram_1_15 : _GEN_1243; // @[d_cache.scala 89:18 20:24]
  wire [31:0] _GEN_1376 = 3'h4 == state ? tag_1_0 : _GEN_1244; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1377 = 3'h4 == state ? tag_1_1 : _GEN_1245; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1378 = 3'h4 == state ? tag_1_2 : _GEN_1246; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1379 = 3'h4 == state ? tag_1_3 : _GEN_1247; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1380 = 3'h4 == state ? tag_1_4 : _GEN_1248; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1381 = 3'h4 == state ? tag_1_5 : _GEN_1249; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1382 = 3'h4 == state ? tag_1_6 : _GEN_1250; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1383 = 3'h4 == state ? tag_1_7 : _GEN_1251; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1384 = 3'h4 == state ? tag_1_8 : _GEN_1252; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1385 = 3'h4 == state ? tag_1_9 : _GEN_1253; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1386 = 3'h4 == state ? tag_1_10 : _GEN_1254; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1387 = 3'h4 == state ? tag_1_11 : _GEN_1255; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1388 = 3'h4 == state ? tag_1_12 : _GEN_1256; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1389 = 3'h4 == state ? tag_1_13 : _GEN_1257; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1390 = 3'h4 == state ? tag_1_14 : _GEN_1258; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1391 = 3'h4 == state ? tag_1_15 : _GEN_1259; // @[d_cache.scala 89:18 29:24]
  wire  _GEN_1392 = 3'h4 == state ? valid_1_0 : _GEN_1260; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1393 = 3'h4 == state ? valid_1_1 : _GEN_1261; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1394 = 3'h4 == state ? valid_1_2 : _GEN_1262; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1395 = 3'h4 == state ? valid_1_3 : _GEN_1263; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1396 = 3'h4 == state ? valid_1_4 : _GEN_1264; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1397 = 3'h4 == state ? valid_1_5 : _GEN_1265; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1398 = 3'h4 == state ? valid_1_6 : _GEN_1266; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1399 = 3'h4 == state ? valid_1_7 : _GEN_1267; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1400 = 3'h4 == state ? valid_1_8 : _GEN_1268; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1401 = 3'h4 == state ? valid_1_9 : _GEN_1269; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1402 = 3'h4 == state ? valid_1_10 : _GEN_1270; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1403 = 3'h4 == state ? valid_1_11 : _GEN_1271; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1404 = 3'h4 == state ? valid_1_12 : _GEN_1272; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1405 = 3'h4 == state ? valid_1_13 : _GEN_1273; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1406 = 3'h4 == state ? valid_1_14 : _GEN_1274; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1407 = 3'h4 == state ? valid_1_15 : _GEN_1275; // @[d_cache.scala 89:18 31:26]
  wire [511:0] _GEN_1408 = 3'h4 == state ? write_back_data : _GEN_1276; // @[d_cache.scala 89:18 37:34]
  wire [41:0] _GEN_1409 = 3'h4 == state ? {{10'd0}, write_back_addr} : _GEN_1277; // @[d_cache.scala 89:18 38:34]
  wire  _GEN_1410 = 3'h4 == state ? dirty_0_0 : _GEN_1278; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1411 = 3'h4 == state ? dirty_0_1 : _GEN_1279; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1412 = 3'h4 == state ? dirty_0_2 : _GEN_1280; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1413 = 3'h4 == state ? dirty_0_3 : _GEN_1281; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1414 = 3'h4 == state ? dirty_0_4 : _GEN_1282; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1415 = 3'h4 == state ? dirty_0_5 : _GEN_1283; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1416 = 3'h4 == state ? dirty_0_6 : _GEN_1284; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1417 = 3'h4 == state ? dirty_0_7 : _GEN_1285; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1418 = 3'h4 == state ? dirty_0_8 : _GEN_1286; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1419 = 3'h4 == state ? dirty_0_9 : _GEN_1287; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1420 = 3'h4 == state ? dirty_0_10 : _GEN_1288; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1421 = 3'h4 == state ? dirty_0_11 : _GEN_1289; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1422 = 3'h4 == state ? dirty_0_12 : _GEN_1290; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1423 = 3'h4 == state ? dirty_0_13 : _GEN_1291; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1424 = 3'h4 == state ? dirty_0_14 : _GEN_1292; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1425 = 3'h4 == state ? dirty_0_15 : _GEN_1293; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1426 = 3'h4 == state ? dirty_1_0 : _GEN_1294; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1427 = 3'h4 == state ? dirty_1_1 : _GEN_1295; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1428 = 3'h4 == state ? dirty_1_2 : _GEN_1296; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1429 = 3'h4 == state ? dirty_1_3 : _GEN_1297; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1430 = 3'h4 == state ? dirty_1_4 : _GEN_1298; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1431 = 3'h4 == state ? dirty_1_5 : _GEN_1299; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1432 = 3'h4 == state ? dirty_1_6 : _GEN_1300; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1433 = 3'h4 == state ? dirty_1_7 : _GEN_1301; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1434 = 3'h4 == state ? dirty_1_8 : _GEN_1302; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1435 = 3'h4 == state ? dirty_1_9 : _GEN_1303; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1436 = 3'h4 == state ? dirty_1_10 : _GEN_1304; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1437 = 3'h4 == state ? dirty_1_11 : _GEN_1305; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1438 = 3'h4 == state ? dirty_1_12 : _GEN_1306; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1439 = 3'h4 == state ? dirty_1_13 : _GEN_1307; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1440 = 3'h4 == state ? dirty_1_14 : _GEN_1308; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1441 = 3'h4 == state ? dirty_1_15 : _GEN_1309; // @[d_cache.scala 89:18 33:26]
  wire [63:0] _GEN_1442 = 3'h3 == state ? _GEN_278 : receive_data_0; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1443 = 3'h3 == state ? _GEN_279 : receive_data_1; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1444 = 3'h3 == state ? _GEN_280 : receive_data_2; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1445 = 3'h3 == state ? _GEN_281 : receive_data_3; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1446 = 3'h3 == state ? _GEN_282 : receive_data_4; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1447 = 3'h3 == state ? _GEN_283 : receive_data_5; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1448 = 3'h3 == state ? _GEN_284 : receive_data_6; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1449 = 3'h3 == state ? _GEN_285 : receive_data_7; // @[d_cache.scala 89:18 42:31]
  wire [2:0] _GEN_1450 = 3'h3 == state ? _GEN_286 : receive_num; // @[d_cache.scala 89:18 43:30]
  wire [2:0] _GEN_1451 = 3'h3 == state ? _GEN_287 : _GEN_1310; // @[d_cache.scala 89:18]
  wire [511:0] _GEN_1452 = 3'h3 == state ? ram_0_0 : _GEN_1311; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1453 = 3'h3 == state ? ram_0_1 : _GEN_1312; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1454 = 3'h3 == state ? ram_0_2 : _GEN_1313; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1455 = 3'h3 == state ? ram_0_3 : _GEN_1314; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1456 = 3'h3 == state ? ram_0_4 : _GEN_1315; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1457 = 3'h3 == state ? ram_0_5 : _GEN_1316; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1458 = 3'h3 == state ? ram_0_6 : _GEN_1317; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1459 = 3'h3 == state ? ram_0_7 : _GEN_1318; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1460 = 3'h3 == state ? ram_0_8 : _GEN_1319; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1461 = 3'h3 == state ? ram_0_9 : _GEN_1320; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1462 = 3'h3 == state ? ram_0_10 : _GEN_1321; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1463 = 3'h3 == state ? ram_0_11 : _GEN_1322; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1464 = 3'h3 == state ? ram_0_12 : _GEN_1323; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1465 = 3'h3 == state ? ram_0_13 : _GEN_1324; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1466 = 3'h3 == state ? ram_0_14 : _GEN_1325; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1467 = 3'h3 == state ? ram_0_15 : _GEN_1326; // @[d_cache.scala 89:18 19:24]
  wire [31:0] _GEN_1468 = 3'h3 == state ? tag_0_0 : _GEN_1327; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1469 = 3'h3 == state ? tag_0_1 : _GEN_1328; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1470 = 3'h3 == state ? tag_0_2 : _GEN_1329; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1471 = 3'h3 == state ? tag_0_3 : _GEN_1330; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1472 = 3'h3 == state ? tag_0_4 : _GEN_1331; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1473 = 3'h3 == state ? tag_0_5 : _GEN_1332; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1474 = 3'h3 == state ? tag_0_6 : _GEN_1333; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1475 = 3'h3 == state ? tag_0_7 : _GEN_1334; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1476 = 3'h3 == state ? tag_0_8 : _GEN_1335; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1477 = 3'h3 == state ? tag_0_9 : _GEN_1336; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1478 = 3'h3 == state ? tag_0_10 : _GEN_1337; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1479 = 3'h3 == state ? tag_0_11 : _GEN_1338; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1480 = 3'h3 == state ? tag_0_12 : _GEN_1339; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1481 = 3'h3 == state ? tag_0_13 : _GEN_1340; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1482 = 3'h3 == state ? tag_0_14 : _GEN_1341; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1483 = 3'h3 == state ? tag_0_15 : _GEN_1342; // @[d_cache.scala 89:18 28:24]
  wire  _GEN_1484 = 3'h3 == state ? valid_0_0 : _GEN_1343; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1485 = 3'h3 == state ? valid_0_1 : _GEN_1344; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1486 = 3'h3 == state ? valid_0_2 : _GEN_1345; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1487 = 3'h3 == state ? valid_0_3 : _GEN_1346; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1488 = 3'h3 == state ? valid_0_4 : _GEN_1347; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1489 = 3'h3 == state ? valid_0_5 : _GEN_1348; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1490 = 3'h3 == state ? valid_0_6 : _GEN_1349; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1491 = 3'h3 == state ? valid_0_7 : _GEN_1350; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1492 = 3'h3 == state ? valid_0_8 : _GEN_1351; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1493 = 3'h3 == state ? valid_0_9 : _GEN_1352; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1494 = 3'h3 == state ? valid_0_10 : _GEN_1353; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1495 = 3'h3 == state ? valid_0_11 : _GEN_1354; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1496 = 3'h3 == state ? valid_0_12 : _GEN_1355; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1497 = 3'h3 == state ? valid_0_13 : _GEN_1356; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1498 = 3'h3 == state ? valid_0_14 : _GEN_1357; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1499 = 3'h3 == state ? valid_0_15 : _GEN_1358; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1500 = 3'h3 == state ? quene : _GEN_1359; // @[d_cache.scala 89:18 44:24]
  wire [511:0] _GEN_1501 = 3'h3 == state ? ram_1_0 : _GEN_1360; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1502 = 3'h3 == state ? ram_1_1 : _GEN_1361; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1503 = 3'h3 == state ? ram_1_2 : _GEN_1362; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1504 = 3'h3 == state ? ram_1_3 : _GEN_1363; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1505 = 3'h3 == state ? ram_1_4 : _GEN_1364; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1506 = 3'h3 == state ? ram_1_5 : _GEN_1365; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1507 = 3'h3 == state ? ram_1_6 : _GEN_1366; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1508 = 3'h3 == state ? ram_1_7 : _GEN_1367; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1509 = 3'h3 == state ? ram_1_8 : _GEN_1368; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1510 = 3'h3 == state ? ram_1_9 : _GEN_1369; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1511 = 3'h3 == state ? ram_1_10 : _GEN_1370; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1512 = 3'h3 == state ? ram_1_11 : _GEN_1371; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1513 = 3'h3 == state ? ram_1_12 : _GEN_1372; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1514 = 3'h3 == state ? ram_1_13 : _GEN_1373; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1515 = 3'h3 == state ? ram_1_14 : _GEN_1374; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1516 = 3'h3 == state ? ram_1_15 : _GEN_1375; // @[d_cache.scala 89:18 20:24]
  wire [31:0] _GEN_1517 = 3'h3 == state ? tag_1_0 : _GEN_1376; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1518 = 3'h3 == state ? tag_1_1 : _GEN_1377; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1519 = 3'h3 == state ? tag_1_2 : _GEN_1378; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1520 = 3'h3 == state ? tag_1_3 : _GEN_1379; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1521 = 3'h3 == state ? tag_1_4 : _GEN_1380; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1522 = 3'h3 == state ? tag_1_5 : _GEN_1381; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1523 = 3'h3 == state ? tag_1_6 : _GEN_1382; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1524 = 3'h3 == state ? tag_1_7 : _GEN_1383; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1525 = 3'h3 == state ? tag_1_8 : _GEN_1384; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1526 = 3'h3 == state ? tag_1_9 : _GEN_1385; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1527 = 3'h3 == state ? tag_1_10 : _GEN_1386; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1528 = 3'h3 == state ? tag_1_11 : _GEN_1387; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1529 = 3'h3 == state ? tag_1_12 : _GEN_1388; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1530 = 3'h3 == state ? tag_1_13 : _GEN_1389; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1531 = 3'h3 == state ? tag_1_14 : _GEN_1390; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1532 = 3'h3 == state ? tag_1_15 : _GEN_1391; // @[d_cache.scala 89:18 29:24]
  wire  _GEN_1533 = 3'h3 == state ? valid_1_0 : _GEN_1392; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1534 = 3'h3 == state ? valid_1_1 : _GEN_1393; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1535 = 3'h3 == state ? valid_1_2 : _GEN_1394; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1536 = 3'h3 == state ? valid_1_3 : _GEN_1395; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1537 = 3'h3 == state ? valid_1_4 : _GEN_1396; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1538 = 3'h3 == state ? valid_1_5 : _GEN_1397; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1539 = 3'h3 == state ? valid_1_6 : _GEN_1398; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1540 = 3'h3 == state ? valid_1_7 : _GEN_1399; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1541 = 3'h3 == state ? valid_1_8 : _GEN_1400; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1542 = 3'h3 == state ? valid_1_9 : _GEN_1401; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1543 = 3'h3 == state ? valid_1_10 : _GEN_1402; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1544 = 3'h3 == state ? valid_1_11 : _GEN_1403; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1545 = 3'h3 == state ? valid_1_12 : _GEN_1404; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1546 = 3'h3 == state ? valid_1_13 : _GEN_1405; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1547 = 3'h3 == state ? valid_1_14 : _GEN_1406; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1548 = 3'h3 == state ? valid_1_15 : _GEN_1407; // @[d_cache.scala 89:18 31:26]
  wire [511:0] _GEN_1549 = 3'h3 == state ? write_back_data : _GEN_1408; // @[d_cache.scala 89:18 37:34]
  wire [41:0] _GEN_1550 = 3'h3 == state ? {{10'd0}, write_back_addr} : _GEN_1409; // @[d_cache.scala 89:18 38:34]
  wire  _GEN_1551 = 3'h3 == state ? dirty_0_0 : _GEN_1410; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1552 = 3'h3 == state ? dirty_0_1 : _GEN_1411; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1553 = 3'h3 == state ? dirty_0_2 : _GEN_1412; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1554 = 3'h3 == state ? dirty_0_3 : _GEN_1413; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1555 = 3'h3 == state ? dirty_0_4 : _GEN_1414; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1556 = 3'h3 == state ? dirty_0_5 : _GEN_1415; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1557 = 3'h3 == state ? dirty_0_6 : _GEN_1416; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1558 = 3'h3 == state ? dirty_0_7 : _GEN_1417; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1559 = 3'h3 == state ? dirty_0_8 : _GEN_1418; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1560 = 3'h3 == state ? dirty_0_9 : _GEN_1419; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1561 = 3'h3 == state ? dirty_0_10 : _GEN_1420; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1562 = 3'h3 == state ? dirty_0_11 : _GEN_1421; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1563 = 3'h3 == state ? dirty_0_12 : _GEN_1422; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1564 = 3'h3 == state ? dirty_0_13 : _GEN_1423; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1565 = 3'h3 == state ? dirty_0_14 : _GEN_1424; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1566 = 3'h3 == state ? dirty_0_15 : _GEN_1425; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1567 = 3'h3 == state ? dirty_1_0 : _GEN_1426; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1568 = 3'h3 == state ? dirty_1_1 : _GEN_1427; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1569 = 3'h3 == state ? dirty_1_2 : _GEN_1428; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1570 = 3'h3 == state ? dirty_1_3 : _GEN_1429; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1571 = 3'h3 == state ? dirty_1_4 : _GEN_1430; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1572 = 3'h3 == state ? dirty_1_5 : _GEN_1431; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1573 = 3'h3 == state ? dirty_1_6 : _GEN_1432; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1574 = 3'h3 == state ? dirty_1_7 : _GEN_1433; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1575 = 3'h3 == state ? dirty_1_8 : _GEN_1434; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1576 = 3'h3 == state ? dirty_1_9 : _GEN_1435; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1577 = 3'h3 == state ? dirty_1_10 : _GEN_1436; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1578 = 3'h3 == state ? dirty_1_11 : _GEN_1437; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1579 = 3'h3 == state ? dirty_1_12 : _GEN_1438; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1580 = 3'h3 == state ? dirty_1_13 : _GEN_1439; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1581 = 3'h3 == state ? dirty_1_14 : _GEN_1440; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1582 = 3'h3 == state ? dirty_1_15 : _GEN_1441; // @[d_cache.scala 89:18 33:26]
  wire [41:0] _GEN_1723 = 3'h2 == state ? {{10'd0}, write_back_addr} : _GEN_1550; // @[d_cache.scala 89:18 38:34]
  wire [41:0] _GEN_1864 = 3'h1 == state ? {{10'd0}, write_back_addr} : _GEN_1723; // @[d_cache.scala 89:18 38:34]
  wire [41:0] _GEN_2005 = 3'h0 == state ? {{10'd0}, write_back_addr} : _GEN_1864; // @[d_cache.scala 89:18 38:34]
  wire [511:0] _io_to_lsu_rdata_T = _GEN_90 >> shift_bit; // @[d_cache.scala 251:49]
  wire [511:0] _io_to_lsu_rdata_T_1 = _GEN_138 >> shift_bit; // @[d_cache.scala 259:49]
  wire [511:0] _GEN_2006 = way1_hit ? _io_to_lsu_rdata_T_1 : 512'h0; // @[d_cache.scala 258:33 259:33 267:33]
  wire [511:0] _GEN_2010 = way0_hit ? _io_to_lsu_rdata_T : _GEN_2006; // @[d_cache.scala 250:23 251:33]
  wire  _GEN_2012 = way0_hit | way1_hit; // @[d_cache.scala 250:23 253:34]
  wire  _GEN_2014 = way1_hit ? 1'h0 : 1'h1; // @[d_cache.scala 300:33 302:35 310:35]
  wire  _GEN_2015 = way0_hit ? 1'h0 : _GEN_2014; // @[d_cache.scala 292:23 294:35]
  wire  _T_23 = state == 3'h3; // @[d_cache.scala 317:21]
  wire [63:0] _GEN_2221 = {{32'd0}, io_from_lsu_araddr}; // @[d_cache.scala 326:49]
  wire [63:0] _io_to_axi_araddr_T = _GEN_2221 & 64'hffffffffffffffc0; // @[d_cache.scala 326:49]
  wire  _T_25 = state == 3'h6; // @[d_cache.scala 382:21]
  wire [31:0] _GEN_2018 = state == 3'h6 ? 32'h0 : io_from_lsu_araddr; // @[d_cache.scala 382:35 391:26 415:26]
  wire [2:0] _GEN_2019 = state == 3'h6 ? 3'h7 : 3'h0; // @[d_cache.scala 382:35 392:25 417:25]
  wire  _GEN_2021 = state == 3'h6 ? 1'h0 : io_from_lsu_rready; // @[d_cache.scala 382:35 395:26 416:26]
  wire [31:0] _GEN_2022 = state == 3'h6 ? write_back_addr : 32'h0; // @[d_cache.scala 382:35 396:26 420:26]
  wire [63:0] _GEN_2023 = state == 3'h6 ? write_back_data[63:0] : 64'h0; // @[d_cache.scala 382:35 401:25 425:25]
  wire [7:0] _GEN_2024 = state == 3'h6 ? 8'hff : 8'h0; // @[d_cache.scala 382:35 402:25 426:25]
  wire  _GEN_2026 = state == 3'h4 | _T_25; // @[d_cache.scala 341:31 343:27]
  wire  _GEN_2027 = state == 3'h4 & io_from_axi_wready; // @[d_cache.scala 341:31 346:26]
  wire  _GEN_2028 = state == 3'h4 & io_from_axi_bvalid; // @[d_cache.scala 341:31 347:26]
  wire  _GEN_2029 = state == 3'h4 & io_from_axi_awready; // @[d_cache.scala 341:31 348:27]
  wire [31:0] _GEN_2030 = state == 3'h4 ? 32'h0 : _GEN_2018; // @[d_cache.scala 341:31 350:26]
  wire [2:0] _GEN_2031 = state == 3'h4 ? 3'h0 : _GEN_2019; // @[d_cache.scala 341:31 351:25]
  wire  _GEN_2033 = state == 3'h4 ? io_from_lsu_rready : _GEN_2021; // @[d_cache.scala 341:31 354:26]
  wire [31:0] _GEN_2034 = state == 3'h4 ? io_from_lsu_awaddr : _GEN_2022; // @[d_cache.scala 341:31 355:26]
  wire  _GEN_2035 = state == 3'h4 ? io_from_lsu_awvalid : _T_25; // @[d_cache.scala 341:31 356:27]
  wire [7:0] _GEN_2036 = state == 3'h4 ? 8'h0 : {{5'd0}, _GEN_2019}; // @[d_cache.scala 341:31 357:25]
  wire [63:0] _GEN_2039 = state == 3'h4 ? io_from_lsu_wdata : _GEN_2023; // @[d_cache.scala 341:31 360:25]
  wire [7:0] _GEN_2040 = state == 3'h4 ? io_from_lsu_wstrb : _GEN_2024; // @[d_cache.scala 341:31 361:25]
  wire  _GEN_2042 = state == 3'h4 ? io_from_lsu_wvalid : _T_25; // @[d_cache.scala 341:31 363:26]
  wire  _GEN_2043 = state == 3'h4 ? io_from_lsu_bready : _T_25; // @[d_cache.scala 341:31 364:26]
  wire  _GEN_2045 = state == 3'h3 | _GEN_2026; // @[d_cache.scala 317:31 319:27]
  wire  _GEN_2046 = state == 3'h3 ? 1'h0 : _GEN_2027; // @[d_cache.scala 317:31 322:26]
  wire  _GEN_2047 = state == 3'h3 ? 1'h0 : _GEN_2028; // @[d_cache.scala 317:31 323:26]
  wire  _GEN_2048 = state == 3'h3 ? 1'h0 : _GEN_2029; // @[d_cache.scala 317:31 324:27]
  wire [63:0] _GEN_2050 = state == 3'h3 ? _io_to_axi_araddr_T : {{32'd0}, _GEN_2030}; // @[d_cache.scala 317:31 326:26]
  wire [2:0] _GEN_2051 = state == 3'h3 ? 3'h7 : _GEN_2031; // @[d_cache.scala 317:31 327:25]
  wire  _GEN_2053 = state == 3'h3 ? io_from_lsu_rready : _GEN_2033; // @[d_cache.scala 317:31 330:26]
  wire [31:0] _GEN_2054 = state == 3'h3 ? 32'h0 : _GEN_2034; // @[d_cache.scala 317:31 331:26]
  wire  _GEN_2055 = state == 3'h3 ? 1'h0 : _GEN_2035; // @[d_cache.scala 317:31 332:27]
  wire [7:0] _GEN_2056 = state == 3'h3 ? 8'h0 : _GEN_2036; // @[d_cache.scala 317:31 333:25]
  wire [63:0] _GEN_2059 = state == 3'h3 ? 64'h0 : _GEN_2039; // @[d_cache.scala 317:31 336:25]
  wire [7:0] _GEN_2060 = state == 3'h3 ? 8'h0 : _GEN_2040; // @[d_cache.scala 317:31 337:25]
  wire  _GEN_2062 = state == 3'h3 ? 1'h0 : _GEN_2042; // @[d_cache.scala 317:31 339:26]
  wire  _GEN_2063 = state == 3'h3 ? 1'h0 : _GEN_2043; // @[d_cache.scala 317:31 340:26]
  wire  _GEN_2064 = state == 3'h2 ? 1'h0 : _T_23; // @[d_cache.scala 275:33 276:27]
  wire [63:0] _GEN_2065 = state == 3'h2 ? {{32'd0}, io_from_lsu_araddr} : _GEN_2050; // @[d_cache.scala 275:33 277:26]
  wire [2:0] _GEN_2066 = state == 3'h2 ? 3'h0 : _GEN_2051; // @[d_cache.scala 275:33 278:25]
  wire  _GEN_2069 = state == 3'h2 ? 1'h0 : _GEN_2053; // @[d_cache.scala 275:33 281:26]
  wire [31:0] _GEN_2070 = state == 3'h2 ? 32'h0 : _GEN_2054; // @[d_cache.scala 275:33 282:26]
  wire  _GEN_2071 = state == 3'h2 ? 1'h0 : _GEN_2055; // @[d_cache.scala 275:33 283:27]
  wire [7:0] _GEN_2072 = state == 3'h2 ? 8'h0 : _GEN_2056; // @[d_cache.scala 275:33 284:25]
  wire [63:0] _GEN_2075 = state == 3'h2 ? 64'h0 : _GEN_2059; // @[d_cache.scala 275:33 287:25]
  wire [7:0] _GEN_2076 = state == 3'h2 ? 8'h0 : _GEN_2060; // @[d_cache.scala 275:33 288:25]
  wire  _GEN_2078 = state == 3'h2 ? 1'h0 : _GEN_2062; // @[d_cache.scala 275:33 290:26]
  wire  _GEN_2079 = state == 3'h2 ? 1'h0 : _GEN_2063; // @[d_cache.scala 275:33 291:26]
  wire  _GEN_2081 = state == 3'h2 ? _GEN_2015 : _GEN_2045; // @[d_cache.scala 275:33]
  wire  _GEN_2082 = state == 3'h2 ? _GEN_2012 : _GEN_2046; // @[d_cache.scala 275:33]
  wire  _GEN_2083 = state == 3'h2 ? _GEN_2012 : _GEN_2048; // @[d_cache.scala 275:33]
  wire  _GEN_2084 = state == 3'h2 ? _GEN_2012 : _GEN_2047; // @[d_cache.scala 275:33]
  wire [63:0] _GEN_2086 = state == 3'h1 ? {{32'd0}, io_from_lsu_araddr} : _GEN_2065; // @[d_cache.scala 233:27 235:26]
  wire [2:0] _GEN_2087 = state == 3'h1 ? 3'h0 : _GEN_2066; // @[d_cache.scala 233:27 236:25]
  wire [511:0] _GEN_2101 = state == 3'h1 ? _GEN_2010 : 512'h0; // @[d_cache.scala 233:27]
  wire [41:0] _GEN_2222 = reset ? 42'h0 : _GEN_2005; // @[d_cache.scala 38:{34,34}]
  assign io_to_lsu_arready = state == 3'h1 | _GEN_2081; // @[d_cache.scala 233:27]
  assign io_to_lsu_rdata = _GEN_2101[63:0];
  assign io_to_lsu_rvalid = state == 3'h1 & _GEN_2012; // @[d_cache.scala 233:27]
  assign io_to_lsu_awready = state == 3'h1 ? 1'h0 : _GEN_2083; // @[d_cache.scala 233:27]
  assign io_to_lsu_wready = state == 3'h1 ? 1'h0 : _GEN_2082; // @[d_cache.scala 233:27]
  assign io_to_lsu_bvalid = state == 3'h1 ? 1'h0 : _GEN_2084; // @[d_cache.scala 233:27]
  assign io_to_axi_araddr = _GEN_2086[31:0];
  assign io_to_axi_arlen = {{5'd0}, _GEN_2087};
  assign io_to_axi_arvalid = state == 3'h1 ? 1'h0 : _GEN_2064; // @[d_cache.scala 233:27 234:27]
  assign io_to_axi_rready = state == 3'h1 ? 1'h0 : _GEN_2069; // @[d_cache.scala 233:27 239:26]
  assign io_to_axi_awaddr = state == 3'h1 ? 32'h0 : _GEN_2070; // @[d_cache.scala 233:27 240:26]
  assign io_to_axi_awlen = state == 3'h1 ? 8'h0 : _GEN_2072; // @[d_cache.scala 233:27 242:25]
  assign io_to_axi_awvalid = state == 3'h1 ? 1'h0 : _GEN_2071; // @[d_cache.scala 233:27 241:27]
  assign io_to_axi_wdata = state == 3'h1 ? 64'h0 : _GEN_2075; // @[d_cache.scala 233:27 245:25]
  assign io_to_axi_wstrb = state == 3'h1 ? 8'h0 : _GEN_2076; // @[d_cache.scala 233:27 246:25]
  assign io_to_axi_wvalid = state == 3'h1 ? 1'h0 : _GEN_2078; // @[d_cache.scala 233:27 248:26]
  assign io_to_axi_bready = state == 3'h1 ? 1'h0 : _GEN_2079; // @[d_cache.scala 233:27 249:26]
  always @(posedge clock) begin
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_0 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_0 <= _GEN_205;
        end else begin
          ram_0_0 <= _GEN_1452;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_1 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_1 <= _GEN_206;
        end else begin
          ram_0_1 <= _GEN_1453;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_2 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_2 <= _GEN_207;
        end else begin
          ram_0_2 <= _GEN_1454;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_3 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_3 <= _GEN_208;
        end else begin
          ram_0_3 <= _GEN_1455;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_4 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_4 <= _GEN_209;
        end else begin
          ram_0_4 <= _GEN_1456;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_5 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_5 <= _GEN_210;
        end else begin
          ram_0_5 <= _GEN_1457;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_6 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_6 <= _GEN_211;
        end else begin
          ram_0_6 <= _GEN_1458;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_7 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_7 <= _GEN_212;
        end else begin
          ram_0_7 <= _GEN_1459;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_8 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_8 <= _GEN_213;
        end else begin
          ram_0_8 <= _GEN_1460;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_9 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_9 <= _GEN_214;
        end else begin
          ram_0_9 <= _GEN_1461;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_10 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_10 <= _GEN_215;
        end else begin
          ram_0_10 <= _GEN_1462;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_11 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_11 <= _GEN_216;
        end else begin
          ram_0_11 <= _GEN_1463;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_12 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_12 <= _GEN_217;
        end else begin
          ram_0_12 <= _GEN_1464;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_13 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_13 <= _GEN_218;
        end else begin
          ram_0_13 <= _GEN_1465;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_14 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_14 <= _GEN_219;
        end else begin
          ram_0_14 <= _GEN_1466;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_15 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_15 <= _GEN_220;
        end else begin
          ram_0_15 <= _GEN_1467;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_0 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_0 <= _GEN_237;
        end else begin
          ram_1_0 <= _GEN_1501;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_1 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_1 <= _GEN_238;
        end else begin
          ram_1_1 <= _GEN_1502;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_2 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_2 <= _GEN_239;
        end else begin
          ram_1_2 <= _GEN_1503;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_3 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_3 <= _GEN_240;
        end else begin
          ram_1_3 <= _GEN_1504;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_4 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_4 <= _GEN_241;
        end else begin
          ram_1_4 <= _GEN_1505;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_5 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_5 <= _GEN_242;
        end else begin
          ram_1_5 <= _GEN_1506;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_6 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_6 <= _GEN_243;
        end else begin
          ram_1_6 <= _GEN_1507;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_7 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_7 <= _GEN_244;
        end else begin
          ram_1_7 <= _GEN_1508;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_8 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_8 <= _GEN_245;
        end else begin
          ram_1_8 <= _GEN_1509;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_9 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_9 <= _GEN_246;
        end else begin
          ram_1_9 <= _GEN_1510;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_10 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_10 <= _GEN_247;
        end else begin
          ram_1_10 <= _GEN_1511;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_11 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_11 <= _GEN_248;
        end else begin
          ram_1_11 <= _GEN_1512;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_12 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_12 <= _GEN_249;
        end else begin
          ram_1_12 <= _GEN_1513;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_13 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_13 <= _GEN_250;
        end else begin
          ram_1_13 <= _GEN_1514;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_14 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_14 <= _GEN_251;
        end else begin
          ram_1_14 <= _GEN_1515;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_15 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_15 <= _GEN_252;
        end else begin
          ram_1_15 <= _GEN_1516;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_0 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_0 <= _GEN_1468;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_1 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_1 <= _GEN_1469;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_2 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_2 <= _GEN_1470;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_3 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_3 <= _GEN_1471;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_4 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_4 <= _GEN_1472;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_5 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_5 <= _GEN_1473;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_6 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_6 <= _GEN_1474;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_7 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_7 <= _GEN_1475;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_8 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_8 <= _GEN_1476;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_9 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_9 <= _GEN_1477;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_10 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_10 <= _GEN_1478;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_11 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_11 <= _GEN_1479;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_12 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_12 <= _GEN_1480;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_13 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_13 <= _GEN_1481;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_14 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_14 <= _GEN_1482;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_15 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_15 <= _GEN_1483;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_0 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_0 <= _GEN_1517;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_1 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_1 <= _GEN_1518;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_2 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_2 <= _GEN_1519;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_3 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_3 <= _GEN_1520;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_4 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_4 <= _GEN_1521;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_5 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_5 <= _GEN_1522;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_6 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_6 <= _GEN_1523;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_7 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_7 <= _GEN_1524;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_8 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_8 <= _GEN_1525;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_9 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_9 <= _GEN_1526;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_10 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_10 <= _GEN_1527;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_11 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_11 <= _GEN_1528;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_12 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_12 <= _GEN_1529;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_13 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_13 <= _GEN_1530;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_14 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_14 <= _GEN_1531;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_15 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_15 <= _GEN_1532;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_0 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_0 <= _GEN_1484;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_1 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_1 <= _GEN_1485;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_2 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_2 <= _GEN_1486;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_3 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_3 <= _GEN_1487;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_4 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_4 <= _GEN_1488;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_5 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_5 <= _GEN_1489;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_6 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_6 <= _GEN_1490;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_7 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_7 <= _GEN_1491;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_8 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_8 <= _GEN_1492;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_9 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_9 <= _GEN_1493;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_10 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_10 <= _GEN_1494;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_11 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_11 <= _GEN_1495;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_12 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_12 <= _GEN_1496;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_13 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_13 <= _GEN_1497;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_14 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_14 <= _GEN_1498;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_15 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_15 <= _GEN_1499;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_0 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_0 <= _GEN_1533;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_1 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_1 <= _GEN_1534;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_2 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_2 <= _GEN_1535;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_3 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_3 <= _GEN_1536;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_4 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_4 <= _GEN_1537;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_5 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_5 <= _GEN_1538;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_6 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_6 <= _GEN_1539;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_7 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_7 <= _GEN_1540;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_8 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_8 <= _GEN_1541;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_9 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_9 <= _GEN_1542;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_10 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_10 <= _GEN_1543;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_11 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_11 <= _GEN_1544;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_12 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_12 <= _GEN_1545;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_13 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_13 <= _GEN_1546;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_14 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_14 <= _GEN_1547;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_15 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_15 <= _GEN_1548;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_0 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_0 <= _GEN_221;
        end else begin
          dirty_0_0 <= _GEN_1551;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_1 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_1 <= _GEN_222;
        end else begin
          dirty_0_1 <= _GEN_1552;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_2 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_2 <= _GEN_223;
        end else begin
          dirty_0_2 <= _GEN_1553;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_3 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_3 <= _GEN_224;
        end else begin
          dirty_0_3 <= _GEN_1554;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_4 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_4 <= _GEN_225;
        end else begin
          dirty_0_4 <= _GEN_1555;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_5 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_5 <= _GEN_226;
        end else begin
          dirty_0_5 <= _GEN_1556;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_6 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_6 <= _GEN_227;
        end else begin
          dirty_0_6 <= _GEN_1557;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_7 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_7 <= _GEN_228;
        end else begin
          dirty_0_7 <= _GEN_1558;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_8 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_8 <= _GEN_229;
        end else begin
          dirty_0_8 <= _GEN_1559;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_9 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_9 <= _GEN_230;
        end else begin
          dirty_0_9 <= _GEN_1560;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_10 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_10 <= _GEN_231;
        end else begin
          dirty_0_10 <= _GEN_1561;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_11 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_11 <= _GEN_232;
        end else begin
          dirty_0_11 <= _GEN_1562;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_12 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_12 <= _GEN_233;
        end else begin
          dirty_0_12 <= _GEN_1563;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_13 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_13 <= _GEN_234;
        end else begin
          dirty_0_13 <= _GEN_1564;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_14 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_14 <= _GEN_235;
        end else begin
          dirty_0_14 <= _GEN_1565;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_15 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_15 <= _GEN_236;
        end else begin
          dirty_0_15 <= _GEN_1566;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_0 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_0 <= _GEN_253;
        end else begin
          dirty_1_0 <= _GEN_1567;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_1 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_1 <= _GEN_254;
        end else begin
          dirty_1_1 <= _GEN_1568;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_2 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_2 <= _GEN_255;
        end else begin
          dirty_1_2 <= _GEN_1569;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_3 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_3 <= _GEN_256;
        end else begin
          dirty_1_3 <= _GEN_1570;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_4 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_4 <= _GEN_257;
        end else begin
          dirty_1_4 <= _GEN_1571;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_5 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_5 <= _GEN_258;
        end else begin
          dirty_1_5 <= _GEN_1572;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_6 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_6 <= _GEN_259;
        end else begin
          dirty_1_6 <= _GEN_1573;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_7 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_7 <= _GEN_260;
        end else begin
          dirty_1_7 <= _GEN_1574;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_8 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_8 <= _GEN_261;
        end else begin
          dirty_1_8 <= _GEN_1575;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_9 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_9 <= _GEN_262;
        end else begin
          dirty_1_9 <= _GEN_1576;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_10 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_10 <= _GEN_263;
        end else begin
          dirty_1_10 <= _GEN_1577;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_11 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_11 <= _GEN_264;
        end else begin
          dirty_1_11 <= _GEN_1578;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_12 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_12 <= _GEN_265;
        end else begin
          dirty_1_12 <= _GEN_1579;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_13 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_13 <= _GEN_266;
        end else begin
          dirty_1_13 <= _GEN_1580;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_14 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_14 <= _GEN_267;
        end else begin
          dirty_1_14 <= _GEN_1581;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_15 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (3'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_15 <= _GEN_268;
        end else begin
          dirty_1_15 <= _GEN_1582;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 34:27]
      way0_hit <= 1'h0; // @[d_cache.scala 34:27]
    end else begin
      way0_hit <= _T_2;
    end
    if (reset) begin // @[d_cache.scala 35:27]
      way1_hit <= 1'h0; // @[d_cache.scala 35:27]
    end else begin
      way1_hit <= _T_5;
    end
    if (reset) begin // @[d_cache.scala 37:34]
      write_back_data <= 512'h0; // @[d_cache.scala 37:34]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          write_back_data <= _GEN_1549;
        end
      end
    end
    write_back_addr <= _GEN_2222[31:0]; // @[d_cache.scala 38:{34,34}]
    if (reset) begin // @[d_cache.scala 41:28]
      unuse_way <= 2'h0; // @[d_cache.scala 41:28]
    end else if (~_GEN_31) begin // @[d_cache.scala 76:31]
      unuse_way <= 2'h1; // @[d_cache.scala 77:19]
    end else if (~_GEN_64) begin // @[d_cache.scala 78:37]
      unuse_way <= 2'h2; // @[d_cache.scala 79:19]
    end else begin
      unuse_way <= 2'h0; // @[d_cache.scala 81:19]
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_0 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_0 <= _GEN_1442;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_1 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_1 <= _GEN_1443;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_2 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_2 <= _GEN_1444;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_3 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_3 <= _GEN_1445;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_4 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_4 <= _GEN_1446;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_5 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_5 <= _GEN_1447;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_6 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_6 <= _GEN_1448;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_7 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_7 <= _GEN_1449;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 43:30]
      receive_num <= 3'h0; // @[d_cache.scala 43:30]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (3'h1 == state) begin // @[d_cache.scala 89:18]
        if (!(way0_hit)) begin // @[d_cache.scala 99:27]
          receive_num <= _GEN_72;
        end
      end else if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
        receive_num <= _GEN_1450;
      end
    end
    if (reset) begin // @[d_cache.scala 44:24]
      quene <= 1'h0; // @[d_cache.scala 44:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          quene <= _GEN_1500;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 84:24]
      state <= 3'h0; // @[d_cache.scala 84:24]
    end else if (3'h0 == state) begin // @[d_cache.scala 89:18]
      if (io_from_lsu_arvalid) begin // @[d_cache.scala 91:38]
        state <= 3'h1; // @[d_cache.scala 92:23]
      end else if (io_from_lsu_awvalid) begin // @[d_cache.scala 93:44]
        state <= 3'h2; // @[d_cache.scala 94:23]
      end
    end else if (3'h1 == state) begin // @[d_cache.scala 89:18]
      if (way0_hit) begin // @[d_cache.scala 99:27]
        state <= _GEN_70;
      end else begin
        state <= _GEN_71;
      end
    end else if (3'h2 == state) begin // @[d_cache.scala 89:18]
      state <= _GEN_204;
    end else begin
      state <= _GEN_1451;
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
  _RAND_0 = {16{`RANDOM}};
  ram_0_0 = _RAND_0[511:0];
  _RAND_1 = {16{`RANDOM}};
  ram_0_1 = _RAND_1[511:0];
  _RAND_2 = {16{`RANDOM}};
  ram_0_2 = _RAND_2[511:0];
  _RAND_3 = {16{`RANDOM}};
  ram_0_3 = _RAND_3[511:0];
  _RAND_4 = {16{`RANDOM}};
  ram_0_4 = _RAND_4[511:0];
  _RAND_5 = {16{`RANDOM}};
  ram_0_5 = _RAND_5[511:0];
  _RAND_6 = {16{`RANDOM}};
  ram_0_6 = _RAND_6[511:0];
  _RAND_7 = {16{`RANDOM}};
  ram_0_7 = _RAND_7[511:0];
  _RAND_8 = {16{`RANDOM}};
  ram_0_8 = _RAND_8[511:0];
  _RAND_9 = {16{`RANDOM}};
  ram_0_9 = _RAND_9[511:0];
  _RAND_10 = {16{`RANDOM}};
  ram_0_10 = _RAND_10[511:0];
  _RAND_11 = {16{`RANDOM}};
  ram_0_11 = _RAND_11[511:0];
  _RAND_12 = {16{`RANDOM}};
  ram_0_12 = _RAND_12[511:0];
  _RAND_13 = {16{`RANDOM}};
  ram_0_13 = _RAND_13[511:0];
  _RAND_14 = {16{`RANDOM}};
  ram_0_14 = _RAND_14[511:0];
  _RAND_15 = {16{`RANDOM}};
  ram_0_15 = _RAND_15[511:0];
  _RAND_16 = {16{`RANDOM}};
  ram_1_0 = _RAND_16[511:0];
  _RAND_17 = {16{`RANDOM}};
  ram_1_1 = _RAND_17[511:0];
  _RAND_18 = {16{`RANDOM}};
  ram_1_2 = _RAND_18[511:0];
  _RAND_19 = {16{`RANDOM}};
  ram_1_3 = _RAND_19[511:0];
  _RAND_20 = {16{`RANDOM}};
  ram_1_4 = _RAND_20[511:0];
  _RAND_21 = {16{`RANDOM}};
  ram_1_5 = _RAND_21[511:0];
  _RAND_22 = {16{`RANDOM}};
  ram_1_6 = _RAND_22[511:0];
  _RAND_23 = {16{`RANDOM}};
  ram_1_7 = _RAND_23[511:0];
  _RAND_24 = {16{`RANDOM}};
  ram_1_8 = _RAND_24[511:0];
  _RAND_25 = {16{`RANDOM}};
  ram_1_9 = _RAND_25[511:0];
  _RAND_26 = {16{`RANDOM}};
  ram_1_10 = _RAND_26[511:0];
  _RAND_27 = {16{`RANDOM}};
  ram_1_11 = _RAND_27[511:0];
  _RAND_28 = {16{`RANDOM}};
  ram_1_12 = _RAND_28[511:0];
  _RAND_29 = {16{`RANDOM}};
  ram_1_13 = _RAND_29[511:0];
  _RAND_30 = {16{`RANDOM}};
  ram_1_14 = _RAND_30[511:0];
  _RAND_31 = {16{`RANDOM}};
  ram_1_15 = _RAND_31[511:0];
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
  _RAND_128 = {1{`RANDOM}};
  way0_hit = _RAND_128[0:0];
  _RAND_129 = {1{`RANDOM}};
  way1_hit = _RAND_129[0:0];
  _RAND_130 = {16{`RANDOM}};
  write_back_data = _RAND_130[511:0];
  _RAND_131 = {1{`RANDOM}};
  write_back_addr = _RAND_131[31:0];
  _RAND_132 = {1{`RANDOM}};
  unuse_way = _RAND_132[1:0];
  _RAND_133 = {2{`RANDOM}};
  receive_data_0 = _RAND_133[63:0];
  _RAND_134 = {2{`RANDOM}};
  receive_data_1 = _RAND_134[63:0];
  _RAND_135 = {2{`RANDOM}};
  receive_data_2 = _RAND_135[63:0];
  _RAND_136 = {2{`RANDOM}};
  receive_data_3 = _RAND_136[63:0];
  _RAND_137 = {2{`RANDOM}};
  receive_data_4 = _RAND_137[63:0];
  _RAND_138 = {2{`RANDOM}};
  receive_data_5 = _RAND_138[63:0];
  _RAND_139 = {2{`RANDOM}};
  receive_data_6 = _RAND_139[63:0];
  _RAND_140 = {2{`RANDOM}};
  receive_data_7 = _RAND_140[63:0];
  _RAND_141 = {1{`RANDOM}};
  receive_num = _RAND_141[2:0];
  _RAND_142 = {1{`RANDOM}};
  quene = _RAND_142[0:0];
  _RAND_143 = {1{`RANDOM}};
  state = _RAND_143[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
