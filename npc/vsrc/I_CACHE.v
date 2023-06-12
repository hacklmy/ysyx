module I_CACHE(
  input         clock,
  input         reset,
  input  [31:0] io_from_ifu_araddr,
  input         io_from_ifu_arvalid,
  input         io_from_ifu_rready,
  output [63:0] io_to_ifu_rdata,
  output        io_to_ifu_rlast,
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
  reg [63:0] _RAND_96;
  reg [63:0] _RAND_97;
  reg [63:0] _RAND_98;
  reg [63:0] _RAND_99;
  reg [63:0] _RAND_100;
  reg [63:0] _RAND_101;
  reg [63:0] _RAND_102;
  reg [63:0] _RAND_103;
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
`endif // RANDOMIZE_REG_INIT
  reg [511:0] ram_0_0; // @[i_cache.scala 19:24]
  reg [511:0] ram_0_1; // @[i_cache.scala 19:24]
  reg [511:0] ram_0_2; // @[i_cache.scala 19:24]
  reg [511:0] ram_0_3; // @[i_cache.scala 19:24]
  reg [511:0] ram_0_4; // @[i_cache.scala 19:24]
  reg [511:0] ram_0_5; // @[i_cache.scala 19:24]
  reg [511:0] ram_0_6; // @[i_cache.scala 19:24]
  reg [511:0] ram_0_7; // @[i_cache.scala 19:24]
  reg [511:0] ram_0_8; // @[i_cache.scala 19:24]
  reg [511:0] ram_0_9; // @[i_cache.scala 19:24]
  reg [511:0] ram_0_10; // @[i_cache.scala 19:24]
  reg [511:0] ram_0_11; // @[i_cache.scala 19:24]
  reg [511:0] ram_0_12; // @[i_cache.scala 19:24]
  reg [511:0] ram_0_13; // @[i_cache.scala 19:24]
  reg [511:0] ram_0_14; // @[i_cache.scala 19:24]
  reg [511:0] ram_0_15; // @[i_cache.scala 19:24]
  reg [511:0] ram_1_0; // @[i_cache.scala 20:24]
  reg [511:0] ram_1_1; // @[i_cache.scala 20:24]
  reg [511:0] ram_1_2; // @[i_cache.scala 20:24]
  reg [511:0] ram_1_3; // @[i_cache.scala 20:24]
  reg [511:0] ram_1_4; // @[i_cache.scala 20:24]
  reg [511:0] ram_1_5; // @[i_cache.scala 20:24]
  reg [511:0] ram_1_6; // @[i_cache.scala 20:24]
  reg [511:0] ram_1_7; // @[i_cache.scala 20:24]
  reg [511:0] ram_1_8; // @[i_cache.scala 20:24]
  reg [511:0] ram_1_9; // @[i_cache.scala 20:24]
  reg [511:0] ram_1_10; // @[i_cache.scala 20:24]
  reg [511:0] ram_1_11; // @[i_cache.scala 20:24]
  reg [511:0] ram_1_12; // @[i_cache.scala 20:24]
  reg [511:0] ram_1_13; // @[i_cache.scala 20:24]
  reg [511:0] ram_1_14; // @[i_cache.scala 20:24]
  reg [511:0] ram_1_15; // @[i_cache.scala 20:24]
  reg [31:0] tag_0_0; // @[i_cache.scala 21:24]
  reg [31:0] tag_0_1; // @[i_cache.scala 21:24]
  reg [31:0] tag_0_2; // @[i_cache.scala 21:24]
  reg [31:0] tag_0_3; // @[i_cache.scala 21:24]
  reg [31:0] tag_0_4; // @[i_cache.scala 21:24]
  reg [31:0] tag_0_5; // @[i_cache.scala 21:24]
  reg [31:0] tag_0_6; // @[i_cache.scala 21:24]
  reg [31:0] tag_0_7; // @[i_cache.scala 21:24]
  reg [31:0] tag_0_8; // @[i_cache.scala 21:24]
  reg [31:0] tag_0_9; // @[i_cache.scala 21:24]
  reg [31:0] tag_0_10; // @[i_cache.scala 21:24]
  reg [31:0] tag_0_11; // @[i_cache.scala 21:24]
  reg [31:0] tag_0_12; // @[i_cache.scala 21:24]
  reg [31:0] tag_0_13; // @[i_cache.scala 21:24]
  reg [31:0] tag_0_14; // @[i_cache.scala 21:24]
  reg [31:0] tag_0_15; // @[i_cache.scala 21:24]
  reg [31:0] tag_1_0; // @[i_cache.scala 22:24]
  reg [31:0] tag_1_1; // @[i_cache.scala 22:24]
  reg [31:0] tag_1_2; // @[i_cache.scala 22:24]
  reg [31:0] tag_1_3; // @[i_cache.scala 22:24]
  reg [31:0] tag_1_4; // @[i_cache.scala 22:24]
  reg [31:0] tag_1_5; // @[i_cache.scala 22:24]
  reg [31:0] tag_1_6; // @[i_cache.scala 22:24]
  reg [31:0] tag_1_7; // @[i_cache.scala 22:24]
  reg [31:0] tag_1_8; // @[i_cache.scala 22:24]
  reg [31:0] tag_1_9; // @[i_cache.scala 22:24]
  reg [31:0] tag_1_10; // @[i_cache.scala 22:24]
  reg [31:0] tag_1_11; // @[i_cache.scala 22:24]
  reg [31:0] tag_1_12; // @[i_cache.scala 22:24]
  reg [31:0] tag_1_13; // @[i_cache.scala 22:24]
  reg [31:0] tag_1_14; // @[i_cache.scala 22:24]
  reg [31:0] tag_1_15; // @[i_cache.scala 22:24]
  reg  valid_0_0; // @[i_cache.scala 23:26]
  reg  valid_0_1; // @[i_cache.scala 23:26]
  reg  valid_0_2; // @[i_cache.scala 23:26]
  reg  valid_0_3; // @[i_cache.scala 23:26]
  reg  valid_0_4; // @[i_cache.scala 23:26]
  reg  valid_0_5; // @[i_cache.scala 23:26]
  reg  valid_0_6; // @[i_cache.scala 23:26]
  reg  valid_0_7; // @[i_cache.scala 23:26]
  reg  valid_0_8; // @[i_cache.scala 23:26]
  reg  valid_0_9; // @[i_cache.scala 23:26]
  reg  valid_0_10; // @[i_cache.scala 23:26]
  reg  valid_0_11; // @[i_cache.scala 23:26]
  reg  valid_0_12; // @[i_cache.scala 23:26]
  reg  valid_0_13; // @[i_cache.scala 23:26]
  reg  valid_0_14; // @[i_cache.scala 23:26]
  reg  valid_0_15; // @[i_cache.scala 23:26]
  reg  valid_1_0; // @[i_cache.scala 24:26]
  reg  valid_1_1; // @[i_cache.scala 24:26]
  reg  valid_1_2; // @[i_cache.scala 24:26]
  reg  valid_1_3; // @[i_cache.scala 24:26]
  reg  valid_1_4; // @[i_cache.scala 24:26]
  reg  valid_1_5; // @[i_cache.scala 24:26]
  reg  valid_1_6; // @[i_cache.scala 24:26]
  reg  valid_1_7; // @[i_cache.scala 24:26]
  reg  valid_1_8; // @[i_cache.scala 24:26]
  reg  valid_1_9; // @[i_cache.scala 24:26]
  reg  valid_1_10; // @[i_cache.scala 24:26]
  reg  valid_1_11; // @[i_cache.scala 24:26]
  reg  valid_1_12; // @[i_cache.scala 24:26]
  reg  valid_1_13; // @[i_cache.scala 24:26]
  reg  valid_1_14; // @[i_cache.scala 24:26]
  reg  valid_1_15; // @[i_cache.scala 24:26]
  reg [63:0] receive_data_0; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_1; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_2; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_3; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_4; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_5; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_6; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_7; // @[i_cache.scala 29:31]
  reg [2:0] receive_num; // @[i_cache.scala 30:30]
  reg [1:0] quene_0; // @[i_cache.scala 31:24]
  reg [1:0] quene_1; // @[i_cache.scala 31:24]
  reg [1:0] quene_2; // @[i_cache.scala 31:24]
  reg [1:0] quene_3; // @[i_cache.scala 31:24]
  reg [1:0] quene_4; // @[i_cache.scala 31:24]
  reg [1:0] quene_5; // @[i_cache.scala 31:24]
  reg [1:0] quene_6; // @[i_cache.scala 31:24]
  reg [1:0] quene_7; // @[i_cache.scala 31:24]
  reg [1:0] quene_8; // @[i_cache.scala 31:24]
  reg [1:0] quene_9; // @[i_cache.scala 31:24]
  reg [1:0] quene_10; // @[i_cache.scala 31:24]
  reg [1:0] quene_11; // @[i_cache.scala 31:24]
  reg [1:0] quene_12; // @[i_cache.scala 31:24]
  reg [1:0] quene_13; // @[i_cache.scala 31:24]
  reg [1:0] quene_14; // @[i_cache.scala 31:24]
  reg [1:0] quene_15; // @[i_cache.scala 31:24]
  wire [5:0] offset = io_from_ifu_araddr[5:0]; // @[i_cache.scala 33:36]
  wire [3:0] index = io_from_ifu_araddr[9:6]; // @[i_cache.scala 34:35]
  wire [21:0] tag = io_from_ifu_araddr[31:10]; // @[i_cache.scala 35:33]
  wire [8:0] shift_bit = {offset, 3'h0}; // @[i_cache.scala 36:28]
  wire [31:0] _GEN_1 = 4'h1 == index ? tag_0_1 : tag_0_0; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_2 = 4'h2 == index ? tag_0_2 : _GEN_1; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_3 = 4'h3 == index ? tag_0_3 : _GEN_2; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_4 = 4'h4 == index ? tag_0_4 : _GEN_3; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_5 = 4'h5 == index ? tag_0_5 : _GEN_4; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_6 = 4'h6 == index ? tag_0_6 : _GEN_5; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_7 = 4'h7 == index ? tag_0_7 : _GEN_6; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_8 = 4'h8 == index ? tag_0_8 : _GEN_7; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_9 = 4'h9 == index ? tag_0_9 : _GEN_8; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_10 = 4'ha == index ? tag_0_10 : _GEN_9; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_11 = 4'hb == index ? tag_0_11 : _GEN_10; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_12 = 4'hc == index ? tag_0_12 : _GEN_11; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_13 = 4'hd == index ? tag_0_13 : _GEN_12; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_14 = 4'he == index ? tag_0_14 : _GEN_13; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_15 = 4'hf == index ? tag_0_15 : _GEN_14; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_1243 = {{10'd0}, tag}; // @[i_cache.scala 38:31]
  wire  _GEN_17 = 4'h1 == index ? valid_0_1 : valid_0_0; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_18 = 4'h2 == index ? valid_0_2 : _GEN_17; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_19 = 4'h3 == index ? valid_0_3 : _GEN_18; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_20 = 4'h4 == index ? valid_0_4 : _GEN_19; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_21 = 4'h5 == index ? valid_0_5 : _GEN_20; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_22 = 4'h6 == index ? valid_0_6 : _GEN_21; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_23 = 4'h7 == index ? valid_0_7 : _GEN_22; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_24 = 4'h8 == index ? valid_0_8 : _GEN_23; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_25 = 4'h9 == index ? valid_0_9 : _GEN_24; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_26 = 4'ha == index ? valid_0_10 : _GEN_25; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_27 = 4'hb == index ? valid_0_11 : _GEN_26; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_28 = 4'hc == index ? valid_0_12 : _GEN_27; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_29 = 4'hd == index ? valid_0_13 : _GEN_28; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_30 = 4'he == index ? valid_0_14 : _GEN_29; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_31 = 4'hf == index ? valid_0_15 : _GEN_30; // @[i_cache.scala 38:{57,57}]
  wire  way0_hit = _GEN_15 == _GEN_1243 & _GEN_31; // @[i_cache.scala 38:40]
  wire [31:0] _GEN_33 = 4'h1 == index ? tag_1_1 : tag_1_0; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_34 = 4'h2 == index ? tag_1_2 : _GEN_33; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_35 = 4'h3 == index ? tag_1_3 : _GEN_34; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_36 = 4'h4 == index ? tag_1_4 : _GEN_35; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_37 = 4'h5 == index ? tag_1_5 : _GEN_36; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_38 = 4'h6 == index ? tag_1_6 : _GEN_37; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_39 = 4'h7 == index ? tag_1_7 : _GEN_38; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_40 = 4'h8 == index ? tag_1_8 : _GEN_39; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_41 = 4'h9 == index ? tag_1_9 : _GEN_40; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_42 = 4'ha == index ? tag_1_10 : _GEN_41; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_43 = 4'hb == index ? tag_1_11 : _GEN_42; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_44 = 4'hc == index ? tag_1_12 : _GEN_43; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_45 = 4'hd == index ? tag_1_13 : _GEN_44; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_46 = 4'he == index ? tag_1_14 : _GEN_45; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_47 = 4'hf == index ? tag_1_15 : _GEN_46; // @[i_cache.scala 40:{31,31}]
  wire  _GEN_49 = 4'h1 == index ? valid_1_1 : valid_1_0; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_50 = 4'h2 == index ? valid_1_2 : _GEN_49; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_51 = 4'h3 == index ? valid_1_3 : _GEN_50; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_52 = 4'h4 == index ? valid_1_4 : _GEN_51; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_53 = 4'h5 == index ? valid_1_5 : _GEN_52; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_54 = 4'h6 == index ? valid_1_6 : _GEN_53; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_55 = 4'h7 == index ? valid_1_7 : _GEN_54; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_56 = 4'h8 == index ? valid_1_8 : _GEN_55; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_57 = 4'h9 == index ? valid_1_9 : _GEN_56; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_58 = 4'ha == index ? valid_1_10 : _GEN_57; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_59 = 4'hb == index ? valid_1_11 : _GEN_58; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_60 = 4'hc == index ? valid_1_12 : _GEN_59; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_61 = 4'hd == index ? valid_1_13 : _GEN_60; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_62 = 4'he == index ? valid_1_14 : _GEN_61; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_63 = 4'hf == index ? valid_1_15 : _GEN_62; // @[i_cache.scala 40:{57,57}]
  wire  way1_hit = _GEN_47 == _GEN_1243 & _GEN_63; // @[i_cache.scala 40:40]
  wire [1:0] _unuse_way_T_2 = ~_GEN_63 ? 2'h2 : 2'h0; // @[i_cache.scala 43:50]
  wire [1:0] unuse_way = ~_GEN_31 ? 2'h1 : _unuse_way_T_2; // @[i_cache.scala 43:21]
  reg [2:0] state; // @[i_cache.scala 45:24]
  wire [2:0] _GEN_66 = io_from_ifu_rready ? 3'h0 : state; // @[i_cache.scala 45:24 58:41 59:27]
  wire [2:0] _GEN_67 = way1_hit ? _GEN_66 : 3'h2; // @[i_cache.scala 62:33 67:23]
  wire [2:0] _GEN_68 = way1_hit ? receive_num : 3'h0; // @[i_cache.scala 30:30 62:33 69:29]
  wire [63:0] _GEN_71 = 3'h0 == receive_num ? io_from_axi_rdata : receive_data_0; // @[i_cache.scala 29:31 74:{43,43}]
  wire [63:0] _GEN_72 = 3'h1 == receive_num ? io_from_axi_rdata : receive_data_1; // @[i_cache.scala 29:31 74:{43,43}]
  wire [63:0] _GEN_73 = 3'h2 == receive_num ? io_from_axi_rdata : receive_data_2; // @[i_cache.scala 29:31 74:{43,43}]
  wire [63:0] _GEN_74 = 3'h3 == receive_num ? io_from_axi_rdata : receive_data_3; // @[i_cache.scala 29:31 74:{43,43}]
  wire [63:0] _GEN_75 = 3'h4 == receive_num ? io_from_axi_rdata : receive_data_4; // @[i_cache.scala 29:31 74:{43,43}]
  wire [63:0] _GEN_76 = 3'h5 == receive_num ? io_from_axi_rdata : receive_data_5; // @[i_cache.scala 29:31 74:{43,43}]
  wire [63:0] _GEN_77 = 3'h6 == receive_num ? io_from_axi_rdata : receive_data_6; // @[i_cache.scala 29:31 74:{43,43}]
  wire [63:0] _GEN_78 = 3'h7 == receive_num ? io_from_axi_rdata : receive_data_7; // @[i_cache.scala 29:31 74:{43,43}]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[i_cache.scala 75:44]
  wire [2:0] _GEN_79 = io_from_axi_rlast ? 3'h3 : state; // @[i_cache.scala 45:24 76:40 77:27]
  wire [63:0] _GEN_80 = io_from_axi_rvalid ? _GEN_71 : receive_data_0; // @[i_cache.scala 29:31 73:37]
  wire [63:0] _GEN_81 = io_from_axi_rvalid ? _GEN_72 : receive_data_1; // @[i_cache.scala 29:31 73:37]
  wire [63:0] _GEN_82 = io_from_axi_rvalid ? _GEN_73 : receive_data_2; // @[i_cache.scala 29:31 73:37]
  wire [63:0] _GEN_83 = io_from_axi_rvalid ? _GEN_74 : receive_data_3; // @[i_cache.scala 29:31 73:37]
  wire [63:0] _GEN_84 = io_from_axi_rvalid ? _GEN_75 : receive_data_4; // @[i_cache.scala 29:31 73:37]
  wire [63:0] _GEN_85 = io_from_axi_rvalid ? _GEN_76 : receive_data_5; // @[i_cache.scala 29:31 73:37]
  wire [63:0] _GEN_86 = io_from_axi_rvalid ? _GEN_77 : receive_data_6; // @[i_cache.scala 29:31 73:37]
  wire [63:0] _GEN_87 = io_from_axi_rvalid ? _GEN_78 : receive_data_7; // @[i_cache.scala 29:31 73:37]
  wire [2:0] _GEN_88 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[i_cache.scala 73:37 75:29 30:30]
  wire [2:0] _GEN_89 = io_from_axi_rvalid ? _GEN_79 : state; // @[i_cache.scala 45:24 73:37]
  wire [511:0] _ram_0_T = {receive_data_7,receive_data_6,receive_data_5,receive_data_4,receive_data_3,receive_data_2,
    receive_data_1,receive_data_0}; // @[Cat.scala 31:58]
  wire [511:0] _GEN_90 = 4'h0 == index ? _ram_0_T : ram_0_0; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_91 = 4'h1 == index ? _ram_0_T : ram_0_1; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_92 = 4'h2 == index ? _ram_0_T : ram_0_2; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_93 = 4'h3 == index ? _ram_0_T : ram_0_3; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_94 = 4'h4 == index ? _ram_0_T : ram_0_4; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_95 = 4'h5 == index ? _ram_0_T : ram_0_5; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_96 = 4'h6 == index ? _ram_0_T : ram_0_6; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_97 = 4'h7 == index ? _ram_0_T : ram_0_7; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_98 = 4'h8 == index ? _ram_0_T : ram_0_8; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_99 = 4'h9 == index ? _ram_0_T : ram_0_9; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_100 = 4'ha == index ? _ram_0_T : ram_0_10; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_101 = 4'hb == index ? _ram_0_T : ram_0_11; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_102 = 4'hc == index ? _ram_0_T : ram_0_12; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_103 = 4'hd == index ? _ram_0_T : ram_0_13; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_104 = 4'he == index ? _ram_0_T : ram_0_14; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_105 = 4'hf == index ? _ram_0_T : ram_0_15; // @[i_cache.scala 19:24 84:{30,30}]
  wire [31:0] _GEN_106 = 4'h0 == index ? _GEN_1243 : tag_0_0; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_107 = 4'h1 == index ? _GEN_1243 : tag_0_1; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_108 = 4'h2 == index ? _GEN_1243 : tag_0_2; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_109 = 4'h3 == index ? _GEN_1243 : tag_0_3; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_110 = 4'h4 == index ? _GEN_1243 : tag_0_4; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_111 = 4'h5 == index ? _GEN_1243 : tag_0_5; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_112 = 4'h6 == index ? _GEN_1243 : tag_0_6; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_113 = 4'h7 == index ? _GEN_1243 : tag_0_7; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_114 = 4'h8 == index ? _GEN_1243 : tag_0_8; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_115 = 4'h9 == index ? _GEN_1243 : tag_0_9; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_116 = 4'ha == index ? _GEN_1243 : tag_0_10; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_117 = 4'hb == index ? _GEN_1243 : tag_0_11; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_118 = 4'hc == index ? _GEN_1243 : tag_0_12; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_119 = 4'hd == index ? _GEN_1243 : tag_0_13; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_120 = 4'he == index ? _GEN_1243 : tag_0_14; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_121 = 4'hf == index ? _GEN_1243 : tag_0_15; // @[i_cache.scala 21:24 85:{30,30}]
  wire  _GEN_1247 = 4'h0 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_122 = 4'h0 == index | valid_0_0; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1249 = 4'h1 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_123 = 4'h1 == index | valid_0_1; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1254 = 4'h2 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_124 = 4'h2 == index | valid_0_2; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1259 = 4'h3 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_125 = 4'h3 == index | valid_0_3; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1263 = 4'h4 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_126 = 4'h4 == index | valid_0_4; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1265 = 4'h5 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_127 = 4'h5 == index | valid_0_5; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1266 = 4'h6 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_128 = 4'h6 == index | valid_0_6; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1267 = 4'h7 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_129 = 4'h7 == index | valid_0_7; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1268 = 4'h8 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_130 = 4'h8 == index | valid_0_8; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1269 = 4'h9 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_131 = 4'h9 == index | valid_0_9; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1270 = 4'ha == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_132 = 4'ha == index | valid_0_10; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1271 = 4'hb == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_133 = 4'hb == index | valid_0_11; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1272 = 4'hc == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_134 = 4'hc == index | valid_0_12; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1273 = 4'hd == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_135 = 4'hd == index | valid_0_13; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1274 = 4'he == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_136 = 4'he == index | valid_0_14; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1275 = 4'hf == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_137 = 4'hf == index | valid_0_15; // @[i_cache.scala 23:26 86:{32,32}]
  wire [1:0] _GEN_139 = 4'h1 == index ? quene_1 : quene_0; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_140 = 4'h2 == index ? quene_2 : _GEN_139; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_141 = 4'h3 == index ? quene_3 : _GEN_140; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_142 = 4'h4 == index ? quene_4 : _GEN_141; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_143 = 4'h5 == index ? quene_5 : _GEN_142; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_144 = 4'h6 == index ? quene_6 : _GEN_143; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_145 = 4'h7 == index ? quene_7 : _GEN_144; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_146 = 4'h8 == index ? quene_8 : _GEN_145; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_147 = 4'h9 == index ? quene_9 : _GEN_146; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_148 = 4'ha == index ? quene_10 : _GEN_147; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_149 = 4'hb == index ? quene_11 : _GEN_148; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_150 = 4'hc == index ? quene_12 : _GEN_149; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_151 = 4'hd == index ? quene_13 : _GEN_150; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_152 = 4'he == index ? quene_14 : _GEN_151; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_153 = 4'hf == index ? quene_15 : _GEN_152; // @[i_cache.scala 87:{46,46}]
  wire [2:0] _quene_T = {_GEN_153, 1'h0}; // @[i_cache.scala 87:46]
  wire [1:0] _GEN_154 = 4'h0 == index ? _quene_T[1:0] : quene_0; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_155 = 4'h1 == index ? _quene_T[1:0] : quene_1; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_156 = 4'h2 == index ? _quene_T[1:0] : quene_2; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_157 = 4'h3 == index ? _quene_T[1:0] : quene_3; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_158 = 4'h4 == index ? _quene_T[1:0] : quene_4; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_159 = 4'h5 == index ? _quene_T[1:0] : quene_5; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_160 = 4'h6 == index ? _quene_T[1:0] : quene_6; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_161 = 4'h7 == index ? _quene_T[1:0] : quene_7; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_162 = 4'h8 == index ? _quene_T[1:0] : quene_8; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_163 = 4'h9 == index ? _quene_T[1:0] : quene_9; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_164 = 4'ha == index ? _quene_T[1:0] : quene_10; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_165 = 4'hb == index ? _quene_T[1:0] : quene_11; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_166 = 4'hc == index ? _quene_T[1:0] : quene_12; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_167 = 4'hd == index ? _quene_T[1:0] : quene_13; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_168 = 4'he == index ? _quene_T[1:0] : quene_14; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_169 = 4'hf == index ? _quene_T[1:0] : quene_15; // @[i_cache.scala 31:24 87:{30,30}]
  wire [511:0] _GEN_170 = 4'h0 == index ? _ram_0_T : ram_1_0; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_171 = 4'h1 == index ? _ram_0_T : ram_1_1; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_172 = 4'h2 == index ? _ram_0_T : ram_1_2; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_173 = 4'h3 == index ? _ram_0_T : ram_1_3; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_174 = 4'h4 == index ? _ram_0_T : ram_1_4; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_175 = 4'h5 == index ? _ram_0_T : ram_1_5; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_176 = 4'h6 == index ? _ram_0_T : ram_1_6; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_177 = 4'h7 == index ? _ram_0_T : ram_1_7; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_178 = 4'h8 == index ? _ram_0_T : ram_1_8; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_179 = 4'h9 == index ? _ram_0_T : ram_1_9; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_180 = 4'ha == index ? _ram_0_T : ram_1_10; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_181 = 4'hb == index ? _ram_0_T : ram_1_11; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_182 = 4'hc == index ? _ram_0_T : ram_1_12; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_183 = 4'hd == index ? _ram_0_T : ram_1_13; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_184 = 4'he == index ? _ram_0_T : ram_1_14; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_185 = 4'hf == index ? _ram_0_T : ram_1_15; // @[i_cache.scala 20:24 89:{30,30}]
  wire [31:0] _GEN_186 = 4'h0 == index ? _GEN_1243 : tag_1_0; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_187 = 4'h1 == index ? _GEN_1243 : tag_1_1; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_188 = 4'h2 == index ? _GEN_1243 : tag_1_2; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_189 = 4'h3 == index ? _GEN_1243 : tag_1_3; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_190 = 4'h4 == index ? _GEN_1243 : tag_1_4; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_191 = 4'h5 == index ? _GEN_1243 : tag_1_5; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_192 = 4'h6 == index ? _GEN_1243 : tag_1_6; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_193 = 4'h7 == index ? _GEN_1243 : tag_1_7; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_194 = 4'h8 == index ? _GEN_1243 : tag_1_8; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_195 = 4'h9 == index ? _GEN_1243 : tag_1_9; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_196 = 4'ha == index ? _GEN_1243 : tag_1_10; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_197 = 4'hb == index ? _GEN_1243 : tag_1_11; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_198 = 4'hc == index ? _GEN_1243 : tag_1_12; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_199 = 4'hd == index ? _GEN_1243 : tag_1_13; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_200 = 4'he == index ? _GEN_1243 : tag_1_14; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_201 = 4'hf == index ? _GEN_1243 : tag_1_15; // @[i_cache.scala 22:24 90:{30,30}]
  wire  _GEN_202 = _GEN_1247 | valid_1_0; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_203 = _GEN_1249 | valid_1_1; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_204 = _GEN_1254 | valid_1_2; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_205 = _GEN_1259 | valid_1_3; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_206 = _GEN_1263 | valid_1_4; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_207 = _GEN_1265 | valid_1_5; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_208 = _GEN_1266 | valid_1_6; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_209 = _GEN_1267 | valid_1_7; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_210 = _GEN_1268 | valid_1_8; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_211 = _GEN_1269 | valid_1_9; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_212 = _GEN_1270 | valid_1_10; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_213 = _GEN_1271 | valid_1_11; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_214 = _GEN_1272 | valid_1_12; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_215 = _GEN_1273 | valid_1_13; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_216 = _GEN_1274 | valid_1_14; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_217 = _GEN_1275 | valid_1_15; // @[i_cache.scala 24:26 91:{32,32}]
  wire [2:0] _quene_T_2 = _quene_T | 3'h1; // @[i_cache.scala 92:55]
  wire [1:0] _GEN_218 = 4'h0 == index ? _quene_T_2[1:0] : quene_0; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_219 = 4'h1 == index ? _quene_T_2[1:0] : quene_1; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_220 = 4'h2 == index ? _quene_T_2[1:0] : quene_2; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_221 = 4'h3 == index ? _quene_T_2[1:0] : quene_3; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_222 = 4'h4 == index ? _quene_T_2[1:0] : quene_4; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_223 = 4'h5 == index ? _quene_T_2[1:0] : quene_5; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_224 = 4'h6 == index ? _quene_T_2[1:0] : quene_6; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_225 = 4'h7 == index ? _quene_T_2[1:0] : quene_7; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_226 = 4'h8 == index ? _quene_T_2[1:0] : quene_8; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_227 = 4'h9 == index ? _quene_T_2[1:0] : quene_9; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_228 = 4'ha == index ? _quene_T_2[1:0] : quene_10; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_229 = 4'hb == index ? _quene_T_2[1:0] : quene_11; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_230 = 4'hc == index ? _quene_T_2[1:0] : quene_12; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_231 = 4'hd == index ? _quene_T_2[1:0] : quene_13; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_232 = 4'he == index ? _quene_T_2[1:0] : quene_14; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_233 = 4'hf == index ? _quene_T_2[1:0] : quene_15; // @[i_cache.scala 31:24 92:{30,30}]
  wire [511:0] _GEN_362 = quene_1 == 2'h0 ? _GEN_90 : ram_0_0; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_363 = quene_1 == 2'h0 ? _GEN_91 : ram_0_1; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_364 = quene_1 == 2'h0 ? _GEN_92 : ram_0_2; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_365 = quene_1 == 2'h0 ? _GEN_93 : ram_0_3; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_366 = quene_1 == 2'h0 ? _GEN_94 : ram_0_4; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_367 = quene_1 == 2'h0 ? _GEN_95 : ram_0_5; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_368 = quene_1 == 2'h0 ? _GEN_96 : ram_0_6; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_369 = quene_1 == 2'h0 ? _GEN_97 : ram_0_7; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_370 = quene_1 == 2'h0 ? _GEN_98 : ram_0_8; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_371 = quene_1 == 2'h0 ? _GEN_99 : ram_0_9; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_372 = quene_1 == 2'h0 ? _GEN_100 : ram_0_10; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_373 = quene_1 == 2'h0 ? _GEN_101 : ram_0_11; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_374 = quene_1 == 2'h0 ? _GEN_102 : ram_0_12; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_375 = quene_1 == 2'h0 ? _GEN_103 : ram_0_13; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_376 = quene_1 == 2'h0 ? _GEN_104 : ram_0_14; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_377 = quene_1 == 2'h0 ? _GEN_105 : ram_0_15; // @[i_cache.scala 19:24 94:37]
  wire [31:0] _GEN_378 = quene_1 == 2'h0 ? _GEN_106 : tag_0_0; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_379 = quene_1 == 2'h0 ? _GEN_107 : tag_0_1; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_380 = quene_1 == 2'h0 ? _GEN_108 : tag_0_2; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_381 = quene_1 == 2'h0 ? _GEN_109 : tag_0_3; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_382 = quene_1 == 2'h0 ? _GEN_110 : tag_0_4; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_383 = quene_1 == 2'h0 ? _GEN_111 : tag_0_5; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_384 = quene_1 == 2'h0 ? _GEN_112 : tag_0_6; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_385 = quene_1 == 2'h0 ? _GEN_113 : tag_0_7; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_386 = quene_1 == 2'h0 ? _GEN_114 : tag_0_8; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_387 = quene_1 == 2'h0 ? _GEN_115 : tag_0_9; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_388 = quene_1 == 2'h0 ? _GEN_116 : tag_0_10; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_389 = quene_1 == 2'h0 ? _GEN_117 : tag_0_11; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_390 = quene_1 == 2'h0 ? _GEN_118 : tag_0_12; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_391 = quene_1 == 2'h0 ? _GEN_119 : tag_0_13; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_392 = quene_1 == 2'h0 ? _GEN_120 : tag_0_14; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_393 = quene_1 == 2'h0 ? _GEN_121 : tag_0_15; // @[i_cache.scala 21:24 94:37]
  wire  _GEN_394 = quene_1 == 2'h0 ? _GEN_122 : valid_0_0; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_395 = quene_1 == 2'h0 ? _GEN_123 : valid_0_1; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_396 = quene_1 == 2'h0 ? _GEN_124 : valid_0_2; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_397 = quene_1 == 2'h0 ? _GEN_125 : valid_0_3; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_398 = quene_1 == 2'h0 ? _GEN_126 : valid_0_4; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_399 = quene_1 == 2'h0 ? _GEN_127 : valid_0_5; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_400 = quene_1 == 2'h0 ? _GEN_128 : valid_0_6; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_401 = quene_1 == 2'h0 ? _GEN_129 : valid_0_7; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_402 = quene_1 == 2'h0 ? _GEN_130 : valid_0_8; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_403 = quene_1 == 2'h0 ? _GEN_131 : valid_0_9; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_404 = quene_1 == 2'h0 ? _GEN_132 : valid_0_10; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_405 = quene_1 == 2'h0 ? _GEN_133 : valid_0_11; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_406 = quene_1 == 2'h0 ? _GEN_134 : valid_0_12; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_407 = quene_1 == 2'h0 ? _GEN_135 : valid_0_13; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_408 = quene_1 == 2'h0 ? _GEN_136 : valid_0_14; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_409 = quene_1 == 2'h0 ? _GEN_137 : valid_0_15; // @[i_cache.scala 23:26 94:37]
  wire [1:0] _GEN_410 = quene_1 == 2'h0 ? _GEN_154 : _GEN_218; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_411 = quene_1 == 2'h0 ? _GEN_155 : _GEN_219; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_412 = quene_1 == 2'h0 ? _GEN_156 : _GEN_220; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_413 = quene_1 == 2'h0 ? _GEN_157 : _GEN_221; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_414 = quene_1 == 2'h0 ? _GEN_158 : _GEN_222; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_415 = quene_1 == 2'h0 ? _GEN_159 : _GEN_223; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_416 = quene_1 == 2'h0 ? _GEN_160 : _GEN_224; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_417 = quene_1 == 2'h0 ? _GEN_161 : _GEN_225; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_418 = quene_1 == 2'h0 ? _GEN_162 : _GEN_226; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_419 = quene_1 == 2'h0 ? _GEN_163 : _GEN_227; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_420 = quene_1 == 2'h0 ? _GEN_164 : _GEN_228; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_421 = quene_1 == 2'h0 ? _GEN_165 : _GEN_229; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_422 = quene_1 == 2'h0 ? _GEN_166 : _GEN_230; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_423 = quene_1 == 2'h0 ? _GEN_167 : _GEN_231; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_424 = quene_1 == 2'h0 ? _GEN_168 : _GEN_232; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_425 = quene_1 == 2'h0 ? _GEN_169 : _GEN_233; // @[i_cache.scala 94:37]
  wire [511:0] _GEN_426 = quene_1 == 2'h0 ? ram_1_0 : _GEN_170; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_427 = quene_1 == 2'h0 ? ram_1_1 : _GEN_171; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_428 = quene_1 == 2'h0 ? ram_1_2 : _GEN_172; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_429 = quene_1 == 2'h0 ? ram_1_3 : _GEN_173; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_430 = quene_1 == 2'h0 ? ram_1_4 : _GEN_174; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_431 = quene_1 == 2'h0 ? ram_1_5 : _GEN_175; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_432 = quene_1 == 2'h0 ? ram_1_6 : _GEN_176; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_433 = quene_1 == 2'h0 ? ram_1_7 : _GEN_177; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_434 = quene_1 == 2'h0 ? ram_1_8 : _GEN_178; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_435 = quene_1 == 2'h0 ? ram_1_9 : _GEN_179; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_436 = quene_1 == 2'h0 ? ram_1_10 : _GEN_180; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_437 = quene_1 == 2'h0 ? ram_1_11 : _GEN_181; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_438 = quene_1 == 2'h0 ? ram_1_12 : _GEN_182; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_439 = quene_1 == 2'h0 ? ram_1_13 : _GEN_183; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_440 = quene_1 == 2'h0 ? ram_1_14 : _GEN_184; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_441 = quene_1 == 2'h0 ? ram_1_15 : _GEN_185; // @[i_cache.scala 20:24 94:37]
  wire [31:0] _GEN_442 = quene_1 == 2'h0 ? tag_1_0 : _GEN_186; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_443 = quene_1 == 2'h0 ? tag_1_1 : _GEN_187; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_444 = quene_1 == 2'h0 ? tag_1_2 : _GEN_188; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_445 = quene_1 == 2'h0 ? tag_1_3 : _GEN_189; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_446 = quene_1 == 2'h0 ? tag_1_4 : _GEN_190; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_447 = quene_1 == 2'h0 ? tag_1_5 : _GEN_191; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_448 = quene_1 == 2'h0 ? tag_1_6 : _GEN_192; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_449 = quene_1 == 2'h0 ? tag_1_7 : _GEN_193; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_450 = quene_1 == 2'h0 ? tag_1_8 : _GEN_194; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_451 = quene_1 == 2'h0 ? tag_1_9 : _GEN_195; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_452 = quene_1 == 2'h0 ? tag_1_10 : _GEN_196; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_453 = quene_1 == 2'h0 ? tag_1_11 : _GEN_197; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_454 = quene_1 == 2'h0 ? tag_1_12 : _GEN_198; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_455 = quene_1 == 2'h0 ? tag_1_13 : _GEN_199; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_456 = quene_1 == 2'h0 ? tag_1_14 : _GEN_200; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_457 = quene_1 == 2'h0 ? tag_1_15 : _GEN_201; // @[i_cache.scala 22:24 94:37]
  wire  _GEN_458 = quene_1 == 2'h0 ? valid_1_0 : _GEN_202; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_459 = quene_1 == 2'h0 ? valid_1_1 : _GEN_203; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_460 = quene_1 == 2'h0 ? valid_1_2 : _GEN_204; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_461 = quene_1 == 2'h0 ? valid_1_3 : _GEN_205; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_462 = quene_1 == 2'h0 ? valid_1_4 : _GEN_206; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_463 = quene_1 == 2'h0 ? valid_1_5 : _GEN_207; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_464 = quene_1 == 2'h0 ? valid_1_6 : _GEN_208; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_465 = quene_1 == 2'h0 ? valid_1_7 : _GEN_209; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_466 = quene_1 == 2'h0 ? valid_1_8 : _GEN_210; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_467 = quene_1 == 2'h0 ? valid_1_9 : _GEN_211; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_468 = quene_1 == 2'h0 ? valid_1_10 : _GEN_212; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_469 = quene_1 == 2'h0 ? valid_1_11 : _GEN_213; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_470 = quene_1 == 2'h0 ? valid_1_12 : _GEN_214; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_471 = quene_1 == 2'h0 ? valid_1_13 : _GEN_215; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_472 = quene_1 == 2'h0 ? valid_1_14 : _GEN_216; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_473 = quene_1 == 2'h0 ? valid_1_15 : _GEN_217; // @[i_cache.scala 24:26 94:37]
  wire [511:0] _GEN_474 = unuse_way == 2'h2 ? _GEN_170 : _GEN_426; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_475 = unuse_way == 2'h2 ? _GEN_171 : _GEN_427; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_476 = unuse_way == 2'h2 ? _GEN_172 : _GEN_428; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_477 = unuse_way == 2'h2 ? _GEN_173 : _GEN_429; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_478 = unuse_way == 2'h2 ? _GEN_174 : _GEN_430; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_479 = unuse_way == 2'h2 ? _GEN_175 : _GEN_431; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_480 = unuse_way == 2'h2 ? _GEN_176 : _GEN_432; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_481 = unuse_way == 2'h2 ? _GEN_177 : _GEN_433; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_482 = unuse_way == 2'h2 ? _GEN_178 : _GEN_434; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_483 = unuse_way == 2'h2 ? _GEN_179 : _GEN_435; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_484 = unuse_way == 2'h2 ? _GEN_180 : _GEN_436; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_485 = unuse_way == 2'h2 ? _GEN_181 : _GEN_437; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_486 = unuse_way == 2'h2 ? _GEN_182 : _GEN_438; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_487 = unuse_way == 2'h2 ? _GEN_183 : _GEN_439; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_488 = unuse_way == 2'h2 ? _GEN_184 : _GEN_440; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_489 = unuse_way == 2'h2 ? _GEN_185 : _GEN_441; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_490 = unuse_way == 2'h2 ? _GEN_186 : _GEN_442; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_491 = unuse_way == 2'h2 ? _GEN_187 : _GEN_443; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_492 = unuse_way == 2'h2 ? _GEN_188 : _GEN_444; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_493 = unuse_way == 2'h2 ? _GEN_189 : _GEN_445; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_494 = unuse_way == 2'h2 ? _GEN_190 : _GEN_446; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_495 = unuse_way == 2'h2 ? _GEN_191 : _GEN_447; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_496 = unuse_way == 2'h2 ? _GEN_192 : _GEN_448; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_497 = unuse_way == 2'h2 ? _GEN_193 : _GEN_449; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_498 = unuse_way == 2'h2 ? _GEN_194 : _GEN_450; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_499 = unuse_way == 2'h2 ? _GEN_195 : _GEN_451; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_500 = unuse_way == 2'h2 ? _GEN_196 : _GEN_452; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_501 = unuse_way == 2'h2 ? _GEN_197 : _GEN_453; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_502 = unuse_way == 2'h2 ? _GEN_198 : _GEN_454; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_503 = unuse_way == 2'h2 ? _GEN_199 : _GEN_455; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_504 = unuse_way == 2'h2 ? _GEN_200 : _GEN_456; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_505 = unuse_way == 2'h2 ? _GEN_201 : _GEN_457; // @[i_cache.scala 88:40]
  wire  _GEN_506 = unuse_way == 2'h2 ? _GEN_202 : _GEN_458; // @[i_cache.scala 88:40]
  wire  _GEN_507 = unuse_way == 2'h2 ? _GEN_203 : _GEN_459; // @[i_cache.scala 88:40]
  wire  _GEN_508 = unuse_way == 2'h2 ? _GEN_204 : _GEN_460; // @[i_cache.scala 88:40]
  wire  _GEN_509 = unuse_way == 2'h2 ? _GEN_205 : _GEN_461; // @[i_cache.scala 88:40]
  wire  _GEN_510 = unuse_way == 2'h2 ? _GEN_206 : _GEN_462; // @[i_cache.scala 88:40]
  wire  _GEN_511 = unuse_way == 2'h2 ? _GEN_207 : _GEN_463; // @[i_cache.scala 88:40]
  wire  _GEN_512 = unuse_way == 2'h2 ? _GEN_208 : _GEN_464; // @[i_cache.scala 88:40]
  wire  _GEN_513 = unuse_way == 2'h2 ? _GEN_209 : _GEN_465; // @[i_cache.scala 88:40]
  wire  _GEN_514 = unuse_way == 2'h2 ? _GEN_210 : _GEN_466; // @[i_cache.scala 88:40]
  wire  _GEN_515 = unuse_way == 2'h2 ? _GEN_211 : _GEN_467; // @[i_cache.scala 88:40]
  wire  _GEN_516 = unuse_way == 2'h2 ? _GEN_212 : _GEN_468; // @[i_cache.scala 88:40]
  wire  _GEN_517 = unuse_way == 2'h2 ? _GEN_213 : _GEN_469; // @[i_cache.scala 88:40]
  wire  _GEN_518 = unuse_way == 2'h2 ? _GEN_214 : _GEN_470; // @[i_cache.scala 88:40]
  wire  _GEN_519 = unuse_way == 2'h2 ? _GEN_215 : _GEN_471; // @[i_cache.scala 88:40]
  wire  _GEN_520 = unuse_way == 2'h2 ? _GEN_216 : _GEN_472; // @[i_cache.scala 88:40]
  wire  _GEN_521 = unuse_way == 2'h2 ? _GEN_217 : _GEN_473; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_522 = unuse_way == 2'h2 ? _GEN_218 : _GEN_410; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_523 = unuse_way == 2'h2 ? _GEN_219 : _GEN_411; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_524 = unuse_way == 2'h2 ? _GEN_220 : _GEN_412; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_525 = unuse_way == 2'h2 ? _GEN_221 : _GEN_413; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_526 = unuse_way == 2'h2 ? _GEN_222 : _GEN_414; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_527 = unuse_way == 2'h2 ? _GEN_223 : _GEN_415; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_528 = unuse_way == 2'h2 ? _GEN_224 : _GEN_416; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_529 = unuse_way == 2'h2 ? _GEN_225 : _GEN_417; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_530 = unuse_way == 2'h2 ? _GEN_226 : _GEN_418; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_531 = unuse_way == 2'h2 ? _GEN_227 : _GEN_419; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_532 = unuse_way == 2'h2 ? _GEN_228 : _GEN_420; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_533 = unuse_way == 2'h2 ? _GEN_229 : _GEN_421; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_534 = unuse_way == 2'h2 ? _GEN_230 : _GEN_422; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_535 = unuse_way == 2'h2 ? _GEN_231 : _GEN_423; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_536 = unuse_way == 2'h2 ? _GEN_232 : _GEN_424; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_537 = unuse_way == 2'h2 ? _GEN_233 : _GEN_425; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_538 = unuse_way == 2'h2 ? ram_0_0 : _GEN_362; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_539 = unuse_way == 2'h2 ? ram_0_1 : _GEN_363; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_540 = unuse_way == 2'h2 ? ram_0_2 : _GEN_364; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_541 = unuse_way == 2'h2 ? ram_0_3 : _GEN_365; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_542 = unuse_way == 2'h2 ? ram_0_4 : _GEN_366; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_543 = unuse_way == 2'h2 ? ram_0_5 : _GEN_367; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_544 = unuse_way == 2'h2 ? ram_0_6 : _GEN_368; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_545 = unuse_way == 2'h2 ? ram_0_7 : _GEN_369; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_546 = unuse_way == 2'h2 ? ram_0_8 : _GEN_370; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_547 = unuse_way == 2'h2 ? ram_0_9 : _GEN_371; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_548 = unuse_way == 2'h2 ? ram_0_10 : _GEN_372; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_549 = unuse_way == 2'h2 ? ram_0_11 : _GEN_373; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_550 = unuse_way == 2'h2 ? ram_0_12 : _GEN_374; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_551 = unuse_way == 2'h2 ? ram_0_13 : _GEN_375; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_552 = unuse_way == 2'h2 ? ram_0_14 : _GEN_376; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_553 = unuse_way == 2'h2 ? ram_0_15 : _GEN_377; // @[i_cache.scala 19:24 88:40]
  wire [31:0] _GEN_554 = unuse_way == 2'h2 ? tag_0_0 : _GEN_378; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_555 = unuse_way == 2'h2 ? tag_0_1 : _GEN_379; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_556 = unuse_way == 2'h2 ? tag_0_2 : _GEN_380; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_557 = unuse_way == 2'h2 ? tag_0_3 : _GEN_381; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_558 = unuse_way == 2'h2 ? tag_0_4 : _GEN_382; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_559 = unuse_way == 2'h2 ? tag_0_5 : _GEN_383; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_560 = unuse_way == 2'h2 ? tag_0_6 : _GEN_384; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_561 = unuse_way == 2'h2 ? tag_0_7 : _GEN_385; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_562 = unuse_way == 2'h2 ? tag_0_8 : _GEN_386; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_563 = unuse_way == 2'h2 ? tag_0_9 : _GEN_387; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_564 = unuse_way == 2'h2 ? tag_0_10 : _GEN_388; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_565 = unuse_way == 2'h2 ? tag_0_11 : _GEN_389; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_566 = unuse_way == 2'h2 ? tag_0_12 : _GEN_390; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_567 = unuse_way == 2'h2 ? tag_0_13 : _GEN_391; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_568 = unuse_way == 2'h2 ? tag_0_14 : _GEN_392; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_569 = unuse_way == 2'h2 ? tag_0_15 : _GEN_393; // @[i_cache.scala 21:24 88:40]
  wire  _GEN_570 = unuse_way == 2'h2 ? valid_0_0 : _GEN_394; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_571 = unuse_way == 2'h2 ? valid_0_1 : _GEN_395; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_572 = unuse_way == 2'h2 ? valid_0_2 : _GEN_396; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_573 = unuse_way == 2'h2 ? valid_0_3 : _GEN_397; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_574 = unuse_way == 2'h2 ? valid_0_4 : _GEN_398; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_575 = unuse_way == 2'h2 ? valid_0_5 : _GEN_399; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_576 = unuse_way == 2'h2 ? valid_0_6 : _GEN_400; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_577 = unuse_way == 2'h2 ? valid_0_7 : _GEN_401; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_578 = unuse_way == 2'h2 ? valid_0_8 : _GEN_402; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_579 = unuse_way == 2'h2 ? valid_0_9 : _GEN_403; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_580 = unuse_way == 2'h2 ? valid_0_10 : _GEN_404; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_581 = unuse_way == 2'h2 ? valid_0_11 : _GEN_405; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_582 = unuse_way == 2'h2 ? valid_0_12 : _GEN_406; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_583 = unuse_way == 2'h2 ? valid_0_13 : _GEN_407; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_584 = unuse_way == 2'h2 ? valid_0_14 : _GEN_408; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_585 = unuse_way == 2'h2 ? valid_0_15 : _GEN_409; // @[i_cache.scala 23:26 88:40]
  wire [511:0] _GEN_586 = unuse_way == 2'h1 ? _GEN_90 : _GEN_538; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_587 = unuse_way == 2'h1 ? _GEN_91 : _GEN_539; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_588 = unuse_way == 2'h1 ? _GEN_92 : _GEN_540; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_589 = unuse_way == 2'h1 ? _GEN_93 : _GEN_541; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_590 = unuse_way == 2'h1 ? _GEN_94 : _GEN_542; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_591 = unuse_way == 2'h1 ? _GEN_95 : _GEN_543; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_592 = unuse_way == 2'h1 ? _GEN_96 : _GEN_544; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_593 = unuse_way == 2'h1 ? _GEN_97 : _GEN_545; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_594 = unuse_way == 2'h1 ? _GEN_98 : _GEN_546; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_595 = unuse_way == 2'h1 ? _GEN_99 : _GEN_547; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_596 = unuse_way == 2'h1 ? _GEN_100 : _GEN_548; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_597 = unuse_way == 2'h1 ? _GEN_101 : _GEN_549; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_598 = unuse_way == 2'h1 ? _GEN_102 : _GEN_550; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_599 = unuse_way == 2'h1 ? _GEN_103 : _GEN_551; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_600 = unuse_way == 2'h1 ? _GEN_104 : _GEN_552; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_601 = unuse_way == 2'h1 ? _GEN_105 : _GEN_553; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_602 = unuse_way == 2'h1 ? _GEN_106 : _GEN_554; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_603 = unuse_way == 2'h1 ? _GEN_107 : _GEN_555; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_604 = unuse_way == 2'h1 ? _GEN_108 : _GEN_556; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_605 = unuse_way == 2'h1 ? _GEN_109 : _GEN_557; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_606 = unuse_way == 2'h1 ? _GEN_110 : _GEN_558; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_607 = unuse_way == 2'h1 ? _GEN_111 : _GEN_559; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_608 = unuse_way == 2'h1 ? _GEN_112 : _GEN_560; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_609 = unuse_way == 2'h1 ? _GEN_113 : _GEN_561; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_610 = unuse_way == 2'h1 ? _GEN_114 : _GEN_562; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_611 = unuse_way == 2'h1 ? _GEN_115 : _GEN_563; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_612 = unuse_way == 2'h1 ? _GEN_116 : _GEN_564; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_613 = unuse_way == 2'h1 ? _GEN_117 : _GEN_565; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_614 = unuse_way == 2'h1 ? _GEN_118 : _GEN_566; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_615 = unuse_way == 2'h1 ? _GEN_119 : _GEN_567; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_616 = unuse_way == 2'h1 ? _GEN_120 : _GEN_568; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_617 = unuse_way == 2'h1 ? _GEN_121 : _GEN_569; // @[i_cache.scala 83:34]
  wire  _GEN_618 = unuse_way == 2'h1 ? _GEN_122 : _GEN_570; // @[i_cache.scala 83:34]
  wire  _GEN_619 = unuse_way == 2'h1 ? _GEN_123 : _GEN_571; // @[i_cache.scala 83:34]
  wire  _GEN_620 = unuse_way == 2'h1 ? _GEN_124 : _GEN_572; // @[i_cache.scala 83:34]
  wire  _GEN_621 = unuse_way == 2'h1 ? _GEN_125 : _GEN_573; // @[i_cache.scala 83:34]
  wire  _GEN_622 = unuse_way == 2'h1 ? _GEN_126 : _GEN_574; // @[i_cache.scala 83:34]
  wire  _GEN_623 = unuse_way == 2'h1 ? _GEN_127 : _GEN_575; // @[i_cache.scala 83:34]
  wire  _GEN_624 = unuse_way == 2'h1 ? _GEN_128 : _GEN_576; // @[i_cache.scala 83:34]
  wire  _GEN_625 = unuse_way == 2'h1 ? _GEN_129 : _GEN_577; // @[i_cache.scala 83:34]
  wire  _GEN_626 = unuse_way == 2'h1 ? _GEN_130 : _GEN_578; // @[i_cache.scala 83:34]
  wire  _GEN_627 = unuse_way == 2'h1 ? _GEN_131 : _GEN_579; // @[i_cache.scala 83:34]
  wire  _GEN_628 = unuse_way == 2'h1 ? _GEN_132 : _GEN_580; // @[i_cache.scala 83:34]
  wire  _GEN_629 = unuse_way == 2'h1 ? _GEN_133 : _GEN_581; // @[i_cache.scala 83:34]
  wire  _GEN_630 = unuse_way == 2'h1 ? _GEN_134 : _GEN_582; // @[i_cache.scala 83:34]
  wire  _GEN_631 = unuse_way == 2'h1 ? _GEN_135 : _GEN_583; // @[i_cache.scala 83:34]
  wire  _GEN_632 = unuse_way == 2'h1 ? _GEN_136 : _GEN_584; // @[i_cache.scala 83:34]
  wire  _GEN_633 = unuse_way == 2'h1 ? _GEN_137 : _GEN_585; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_634 = unuse_way == 2'h1 ? _GEN_154 : _GEN_522; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_635 = unuse_way == 2'h1 ? _GEN_155 : _GEN_523; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_636 = unuse_way == 2'h1 ? _GEN_156 : _GEN_524; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_637 = unuse_way == 2'h1 ? _GEN_157 : _GEN_525; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_638 = unuse_way == 2'h1 ? _GEN_158 : _GEN_526; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_639 = unuse_way == 2'h1 ? _GEN_159 : _GEN_527; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_640 = unuse_way == 2'h1 ? _GEN_160 : _GEN_528; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_641 = unuse_way == 2'h1 ? _GEN_161 : _GEN_529; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_642 = unuse_way == 2'h1 ? _GEN_162 : _GEN_530; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_643 = unuse_way == 2'h1 ? _GEN_163 : _GEN_531; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_644 = unuse_way == 2'h1 ? _GEN_164 : _GEN_532; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_645 = unuse_way == 2'h1 ? _GEN_165 : _GEN_533; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_646 = unuse_way == 2'h1 ? _GEN_166 : _GEN_534; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_647 = unuse_way == 2'h1 ? _GEN_167 : _GEN_535; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_648 = unuse_way == 2'h1 ? _GEN_168 : _GEN_536; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_649 = unuse_way == 2'h1 ? _GEN_169 : _GEN_537; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_650 = unuse_way == 2'h1 ? ram_1_0 : _GEN_474; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_651 = unuse_way == 2'h1 ? ram_1_1 : _GEN_475; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_652 = unuse_way == 2'h1 ? ram_1_2 : _GEN_476; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_653 = unuse_way == 2'h1 ? ram_1_3 : _GEN_477; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_654 = unuse_way == 2'h1 ? ram_1_4 : _GEN_478; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_655 = unuse_way == 2'h1 ? ram_1_5 : _GEN_479; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_656 = unuse_way == 2'h1 ? ram_1_6 : _GEN_480; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_657 = unuse_way == 2'h1 ? ram_1_7 : _GEN_481; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_658 = unuse_way == 2'h1 ? ram_1_8 : _GEN_482; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_659 = unuse_way == 2'h1 ? ram_1_9 : _GEN_483; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_660 = unuse_way == 2'h1 ? ram_1_10 : _GEN_484; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_661 = unuse_way == 2'h1 ? ram_1_11 : _GEN_485; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_662 = unuse_way == 2'h1 ? ram_1_12 : _GEN_486; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_663 = unuse_way == 2'h1 ? ram_1_13 : _GEN_487; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_664 = unuse_way == 2'h1 ? ram_1_14 : _GEN_488; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_665 = unuse_way == 2'h1 ? ram_1_15 : _GEN_489; // @[i_cache.scala 20:24 83:34]
  wire [31:0] _GEN_666 = unuse_way == 2'h1 ? tag_1_0 : _GEN_490; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_667 = unuse_way == 2'h1 ? tag_1_1 : _GEN_491; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_668 = unuse_way == 2'h1 ? tag_1_2 : _GEN_492; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_669 = unuse_way == 2'h1 ? tag_1_3 : _GEN_493; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_670 = unuse_way == 2'h1 ? tag_1_4 : _GEN_494; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_671 = unuse_way == 2'h1 ? tag_1_5 : _GEN_495; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_672 = unuse_way == 2'h1 ? tag_1_6 : _GEN_496; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_673 = unuse_way == 2'h1 ? tag_1_7 : _GEN_497; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_674 = unuse_way == 2'h1 ? tag_1_8 : _GEN_498; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_675 = unuse_way == 2'h1 ? tag_1_9 : _GEN_499; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_676 = unuse_way == 2'h1 ? tag_1_10 : _GEN_500; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_677 = unuse_way == 2'h1 ? tag_1_11 : _GEN_501; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_678 = unuse_way == 2'h1 ? tag_1_12 : _GEN_502; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_679 = unuse_way == 2'h1 ? tag_1_13 : _GEN_503; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_680 = unuse_way == 2'h1 ? tag_1_14 : _GEN_504; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_681 = unuse_way == 2'h1 ? tag_1_15 : _GEN_505; // @[i_cache.scala 22:24 83:34]
  wire  _GEN_682 = unuse_way == 2'h1 ? valid_1_0 : _GEN_506; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_683 = unuse_way == 2'h1 ? valid_1_1 : _GEN_507; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_684 = unuse_way == 2'h1 ? valid_1_2 : _GEN_508; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_685 = unuse_way == 2'h1 ? valid_1_3 : _GEN_509; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_686 = unuse_way == 2'h1 ? valid_1_4 : _GEN_510; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_687 = unuse_way == 2'h1 ? valid_1_5 : _GEN_511; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_688 = unuse_way == 2'h1 ? valid_1_6 : _GEN_512; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_689 = unuse_way == 2'h1 ? valid_1_7 : _GEN_513; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_690 = unuse_way == 2'h1 ? valid_1_8 : _GEN_514; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_691 = unuse_way == 2'h1 ? valid_1_9 : _GEN_515; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_692 = unuse_way == 2'h1 ? valid_1_10 : _GEN_516; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_693 = unuse_way == 2'h1 ? valid_1_11 : _GEN_517; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_694 = unuse_way == 2'h1 ? valid_1_12 : _GEN_518; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_695 = unuse_way == 2'h1 ? valid_1_13 : _GEN_519; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_696 = unuse_way == 2'h1 ? valid_1_14 : _GEN_520; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_697 = unuse_way == 2'h1 ? valid_1_15 : _GEN_521; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_698 = 3'h4 == state ? 1'h0 : valid_0_0; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_699 = 3'h4 == state ? 1'h0 : valid_0_1; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_700 = 3'h4 == state ? 1'h0 : valid_0_2; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_701 = 3'h4 == state ? 1'h0 : valid_0_3; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_702 = 3'h4 == state ? 1'h0 : valid_0_4; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_703 = 3'h4 == state ? 1'h0 : valid_0_5; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_704 = 3'h4 == state ? 1'h0 : valid_0_6; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_705 = 3'h4 == state ? 1'h0 : valid_0_7; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_706 = 3'h4 == state ? 1'h0 : valid_0_8; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_707 = 3'h4 == state ? 1'h0 : valid_0_9; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_708 = 3'h4 == state ? 1'h0 : valid_0_10; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_709 = 3'h4 == state ? 1'h0 : valid_0_11; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_710 = 3'h4 == state ? 1'h0 : valid_0_12; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_711 = 3'h4 == state ? 1'h0 : valid_0_13; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_712 = 3'h4 == state ? 1'h0 : valid_0_14; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_713 = 3'h4 == state ? 1'h0 : valid_0_15; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_714 = 3'h4 == state ? 1'h0 : valid_1_0; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_715 = 3'h4 == state ? 1'h0 : valid_1_1; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_716 = 3'h4 == state ? 1'h0 : valid_1_2; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_717 = 3'h4 == state ? 1'h0 : valid_1_3; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_718 = 3'h4 == state ? 1'h0 : valid_1_4; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_719 = 3'h4 == state ? 1'h0 : valid_1_5; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_720 = 3'h4 == state ? 1'h0 : valid_1_6; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_721 = 3'h4 == state ? 1'h0 : valid_1_7; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_722 = 3'h4 == state ? 1'h0 : valid_1_8; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_723 = 3'h4 == state ? 1'h0 : valid_1_9; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_724 = 3'h4 == state ? 1'h0 : valid_1_10; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_725 = 3'h4 == state ? 1'h0 : valid_1_11; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_726 = 3'h4 == state ? 1'h0 : valid_1_12; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_727 = 3'h4 == state ? 1'h0 : valid_1_13; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_728 = 3'h4 == state ? 1'h0 : valid_1_14; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_729 = 3'h4 == state ? 1'h0 : valid_1_15; // @[i_cache.scala 47:18 109:49 24:26]
  wire [2:0] _GEN_730 = 3'h4 == state ? 3'h0 : state; // @[i_cache.scala 110:18 47:18 45:24]
  wire [2:0] _GEN_731 = 3'h3 == state ? 3'h1 : _GEN_730; // @[i_cache.scala 47:18 82:19]
  wire [511:0] _GEN_732 = 3'h3 == state ? _GEN_586 : ram_0_0; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_733 = 3'h3 == state ? _GEN_587 : ram_0_1; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_734 = 3'h3 == state ? _GEN_588 : ram_0_2; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_735 = 3'h3 == state ? _GEN_589 : ram_0_3; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_736 = 3'h3 == state ? _GEN_590 : ram_0_4; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_737 = 3'h3 == state ? _GEN_591 : ram_0_5; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_738 = 3'h3 == state ? _GEN_592 : ram_0_6; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_739 = 3'h3 == state ? _GEN_593 : ram_0_7; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_740 = 3'h3 == state ? _GEN_594 : ram_0_8; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_741 = 3'h3 == state ? _GEN_595 : ram_0_9; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_742 = 3'h3 == state ? _GEN_596 : ram_0_10; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_743 = 3'h3 == state ? _GEN_597 : ram_0_11; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_744 = 3'h3 == state ? _GEN_598 : ram_0_12; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_745 = 3'h3 == state ? _GEN_599 : ram_0_13; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_746 = 3'h3 == state ? _GEN_600 : ram_0_14; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_747 = 3'h3 == state ? _GEN_601 : ram_0_15; // @[i_cache.scala 47:18 19:24]
  wire [31:0] _GEN_748 = 3'h3 == state ? _GEN_602 : tag_0_0; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_749 = 3'h3 == state ? _GEN_603 : tag_0_1; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_750 = 3'h3 == state ? _GEN_604 : tag_0_2; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_751 = 3'h3 == state ? _GEN_605 : tag_0_3; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_752 = 3'h3 == state ? _GEN_606 : tag_0_4; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_753 = 3'h3 == state ? _GEN_607 : tag_0_5; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_754 = 3'h3 == state ? _GEN_608 : tag_0_6; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_755 = 3'h3 == state ? _GEN_609 : tag_0_7; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_756 = 3'h3 == state ? _GEN_610 : tag_0_8; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_757 = 3'h3 == state ? _GEN_611 : tag_0_9; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_758 = 3'h3 == state ? _GEN_612 : tag_0_10; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_759 = 3'h3 == state ? _GEN_613 : tag_0_11; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_760 = 3'h3 == state ? _GEN_614 : tag_0_12; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_761 = 3'h3 == state ? _GEN_615 : tag_0_13; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_762 = 3'h3 == state ? _GEN_616 : tag_0_14; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_763 = 3'h3 == state ? _GEN_617 : tag_0_15; // @[i_cache.scala 47:18 21:24]
  wire  _GEN_764 = 3'h3 == state ? _GEN_618 : _GEN_698; // @[i_cache.scala 47:18]
  wire  _GEN_765 = 3'h3 == state ? _GEN_619 : _GEN_699; // @[i_cache.scala 47:18]
  wire  _GEN_766 = 3'h3 == state ? _GEN_620 : _GEN_700; // @[i_cache.scala 47:18]
  wire  _GEN_767 = 3'h3 == state ? _GEN_621 : _GEN_701; // @[i_cache.scala 47:18]
  wire  _GEN_768 = 3'h3 == state ? _GEN_622 : _GEN_702; // @[i_cache.scala 47:18]
  wire  _GEN_769 = 3'h3 == state ? _GEN_623 : _GEN_703; // @[i_cache.scala 47:18]
  wire  _GEN_770 = 3'h3 == state ? _GEN_624 : _GEN_704; // @[i_cache.scala 47:18]
  wire  _GEN_771 = 3'h3 == state ? _GEN_625 : _GEN_705; // @[i_cache.scala 47:18]
  wire  _GEN_772 = 3'h3 == state ? _GEN_626 : _GEN_706; // @[i_cache.scala 47:18]
  wire  _GEN_773 = 3'h3 == state ? _GEN_627 : _GEN_707; // @[i_cache.scala 47:18]
  wire  _GEN_774 = 3'h3 == state ? _GEN_628 : _GEN_708; // @[i_cache.scala 47:18]
  wire  _GEN_775 = 3'h3 == state ? _GEN_629 : _GEN_709; // @[i_cache.scala 47:18]
  wire  _GEN_776 = 3'h3 == state ? _GEN_630 : _GEN_710; // @[i_cache.scala 47:18]
  wire  _GEN_777 = 3'h3 == state ? _GEN_631 : _GEN_711; // @[i_cache.scala 47:18]
  wire  _GEN_778 = 3'h3 == state ? _GEN_632 : _GEN_712; // @[i_cache.scala 47:18]
  wire  _GEN_779 = 3'h3 == state ? _GEN_633 : _GEN_713; // @[i_cache.scala 47:18]
  wire [1:0] _GEN_780 = 3'h3 == state ? _GEN_634 : quene_0; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_781 = 3'h3 == state ? _GEN_635 : quene_1; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_782 = 3'h3 == state ? _GEN_636 : quene_2; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_783 = 3'h3 == state ? _GEN_637 : quene_3; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_784 = 3'h3 == state ? _GEN_638 : quene_4; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_785 = 3'h3 == state ? _GEN_639 : quene_5; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_786 = 3'h3 == state ? _GEN_640 : quene_6; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_787 = 3'h3 == state ? _GEN_641 : quene_7; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_788 = 3'h3 == state ? _GEN_642 : quene_8; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_789 = 3'h3 == state ? _GEN_643 : quene_9; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_790 = 3'h3 == state ? _GEN_644 : quene_10; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_791 = 3'h3 == state ? _GEN_645 : quene_11; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_792 = 3'h3 == state ? _GEN_646 : quene_12; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_793 = 3'h3 == state ? _GEN_647 : quene_13; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_794 = 3'h3 == state ? _GEN_648 : quene_14; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_795 = 3'h3 == state ? _GEN_649 : quene_15; // @[i_cache.scala 47:18 31:24]
  wire [511:0] _GEN_796 = 3'h3 == state ? _GEN_650 : ram_1_0; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_797 = 3'h3 == state ? _GEN_651 : ram_1_1; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_798 = 3'h3 == state ? _GEN_652 : ram_1_2; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_799 = 3'h3 == state ? _GEN_653 : ram_1_3; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_800 = 3'h3 == state ? _GEN_654 : ram_1_4; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_801 = 3'h3 == state ? _GEN_655 : ram_1_5; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_802 = 3'h3 == state ? _GEN_656 : ram_1_6; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_803 = 3'h3 == state ? _GEN_657 : ram_1_7; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_804 = 3'h3 == state ? _GEN_658 : ram_1_8; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_805 = 3'h3 == state ? _GEN_659 : ram_1_9; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_806 = 3'h3 == state ? _GEN_660 : ram_1_10; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_807 = 3'h3 == state ? _GEN_661 : ram_1_11; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_808 = 3'h3 == state ? _GEN_662 : ram_1_12; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_809 = 3'h3 == state ? _GEN_663 : ram_1_13; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_810 = 3'h3 == state ? _GEN_664 : ram_1_14; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_811 = 3'h3 == state ? _GEN_665 : ram_1_15; // @[i_cache.scala 47:18 20:24]
  wire [31:0] _GEN_812 = 3'h3 == state ? _GEN_666 : tag_1_0; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_813 = 3'h3 == state ? _GEN_667 : tag_1_1; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_814 = 3'h3 == state ? _GEN_668 : tag_1_2; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_815 = 3'h3 == state ? _GEN_669 : tag_1_3; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_816 = 3'h3 == state ? _GEN_670 : tag_1_4; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_817 = 3'h3 == state ? _GEN_671 : tag_1_5; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_818 = 3'h3 == state ? _GEN_672 : tag_1_6; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_819 = 3'h3 == state ? _GEN_673 : tag_1_7; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_820 = 3'h3 == state ? _GEN_674 : tag_1_8; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_821 = 3'h3 == state ? _GEN_675 : tag_1_9; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_822 = 3'h3 == state ? _GEN_676 : tag_1_10; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_823 = 3'h3 == state ? _GEN_677 : tag_1_11; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_824 = 3'h3 == state ? _GEN_678 : tag_1_12; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_825 = 3'h3 == state ? _GEN_679 : tag_1_13; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_826 = 3'h3 == state ? _GEN_680 : tag_1_14; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_827 = 3'h3 == state ? _GEN_681 : tag_1_15; // @[i_cache.scala 47:18 22:24]
  wire  _GEN_828 = 3'h3 == state ? _GEN_682 : _GEN_714; // @[i_cache.scala 47:18]
  wire  _GEN_829 = 3'h3 == state ? _GEN_683 : _GEN_715; // @[i_cache.scala 47:18]
  wire  _GEN_830 = 3'h3 == state ? _GEN_684 : _GEN_716; // @[i_cache.scala 47:18]
  wire  _GEN_831 = 3'h3 == state ? _GEN_685 : _GEN_717; // @[i_cache.scala 47:18]
  wire  _GEN_832 = 3'h3 == state ? _GEN_686 : _GEN_718; // @[i_cache.scala 47:18]
  wire  _GEN_833 = 3'h3 == state ? _GEN_687 : _GEN_719; // @[i_cache.scala 47:18]
  wire  _GEN_834 = 3'h3 == state ? _GEN_688 : _GEN_720; // @[i_cache.scala 47:18]
  wire  _GEN_835 = 3'h3 == state ? _GEN_689 : _GEN_721; // @[i_cache.scala 47:18]
  wire  _GEN_836 = 3'h3 == state ? _GEN_690 : _GEN_722; // @[i_cache.scala 47:18]
  wire  _GEN_837 = 3'h3 == state ? _GEN_691 : _GEN_723; // @[i_cache.scala 47:18]
  wire  _GEN_838 = 3'h3 == state ? _GEN_692 : _GEN_724; // @[i_cache.scala 47:18]
  wire  _GEN_839 = 3'h3 == state ? _GEN_693 : _GEN_725; // @[i_cache.scala 47:18]
  wire  _GEN_840 = 3'h3 == state ? _GEN_694 : _GEN_726; // @[i_cache.scala 47:18]
  wire  _GEN_841 = 3'h3 == state ? _GEN_695 : _GEN_727; // @[i_cache.scala 47:18]
  wire  _GEN_842 = 3'h3 == state ? _GEN_696 : _GEN_728; // @[i_cache.scala 47:18]
  wire  _GEN_843 = 3'h3 == state ? _GEN_697 : _GEN_729; // @[i_cache.scala 47:18]
  wire [511:0] _GEN_1211 = 4'h1 == index ? ram_0_1 : ram_0_0; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1212 = 4'h2 == index ? ram_0_2 : _GEN_1211; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1213 = 4'h3 == index ? ram_0_3 : _GEN_1212; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1214 = 4'h4 == index ? ram_0_4 : _GEN_1213; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1215 = 4'h5 == index ? ram_0_5 : _GEN_1214; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1216 = 4'h6 == index ? ram_0_6 : _GEN_1215; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1217 = 4'h7 == index ? ram_0_7 : _GEN_1216; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1218 = 4'h8 == index ? ram_0_8 : _GEN_1217; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1219 = 4'h9 == index ? ram_0_9 : _GEN_1218; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1220 = 4'ha == index ? ram_0_10 : _GEN_1219; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1221 = 4'hb == index ? ram_0_11 : _GEN_1220; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1222 = 4'hc == index ? ram_0_12 : _GEN_1221; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1223 = 4'hd == index ? ram_0_13 : _GEN_1222; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1224 = 4'he == index ? ram_0_14 : _GEN_1223; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1225 = 4'hf == index ? ram_0_15 : _GEN_1224; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _io_to_ifu_rdata_T = _GEN_1225 >> shift_bit; // @[i_cache.scala 155:49]
  wire [511:0] _GEN_1227 = 4'h1 == index ? ram_1_1 : ram_1_0; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1228 = 4'h2 == index ? ram_1_2 : _GEN_1227; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1229 = 4'h3 == index ? ram_1_3 : _GEN_1228; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1230 = 4'h4 == index ? ram_1_4 : _GEN_1229; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1231 = 4'h5 == index ? ram_1_5 : _GEN_1230; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1232 = 4'h6 == index ? ram_1_6 : _GEN_1231; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1233 = 4'h7 == index ? ram_1_7 : _GEN_1232; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1234 = 4'h8 == index ? ram_1_8 : _GEN_1233; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1235 = 4'h9 == index ? ram_1_9 : _GEN_1234; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1236 = 4'ha == index ? ram_1_10 : _GEN_1235; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1237 = 4'hb == index ? ram_1_11 : _GEN_1236; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1238 = 4'hc == index ? ram_1_12 : _GEN_1237; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1239 = 4'hd == index ? ram_1_13 : _GEN_1238; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1240 = 4'he == index ? ram_1_14 : _GEN_1239; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1241 = 4'hf == index ? ram_1_15 : _GEN_1240; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _io_to_ifu_rdata_T_1 = _GEN_1241 >> shift_bit; // @[i_cache.scala 164:49]
  wire [511:0] _GEN_1242 = way1_hit ? _io_to_ifu_rdata_T_1 : 512'h0; // @[i_cache.scala 163:33 164:33 172:33]
  wire [511:0] _GEN_1246 = way0_hit ? _io_to_ifu_rdata_T : _GEN_1242; // @[i_cache.scala 154:23 155:33]
  wire  _GEN_1248 = way0_hit | way1_hit; // @[i_cache.scala 154:23 157:34]
  wire  _T_9 = state == 3'h2; // @[i_cache.scala 180:21]
  wire [63:0] _GEN_1324 = {{32'd0}, io_from_ifu_araddr}; // @[i_cache.scala 189:49]
  wire [63:0] _io_to_axi_araddr_T = _GEN_1324 & 64'hffffffffffffffc0; // @[i_cache.scala 189:49]
  wire [63:0] _GEN_1252 = state == 3'h2 ? _io_to_axi_araddr_T : {{32'd0}, io_from_ifu_araddr}; // @[i_cache.scala 180:29 189:26 229:26]
  wire [2:0] _GEN_1253 = state == 3'h2 ? 3'h7 : 3'h0; // @[i_cache.scala 180:29 190:25 231:25]
  wire [63:0] _GEN_1257 = state == 3'h1 ? {{32'd0}, io_from_ifu_araddr} : _GEN_1252; // @[i_cache.scala 137:25 139:26]
  wire [2:0] _GEN_1258 = state == 3'h1 ? 3'h0 : _GEN_1253; // @[i_cache.scala 137:25 140:25]
  wire [511:0] _GEN_1262 = state == 3'h1 ? _GEN_1246 : 512'h0; // @[i_cache.scala 137:25]
  assign io_to_ifu_rdata = _GEN_1262[63:0];
  assign io_to_ifu_rlast = state == 3'h1 & _GEN_1248; // @[i_cache.scala 137:25]
  assign io_to_ifu_rvalid = state == 3'h1 & _GEN_1248; // @[i_cache.scala 137:25]
  assign io_to_axi_araddr = _GEN_1257[31:0];
  assign io_to_axi_arlen = {{5'd0}, _GEN_1258};
  assign io_to_axi_arvalid = state == 3'h1 ? 1'h0 : _T_9; // @[i_cache.scala 137:25 138:27]
  assign io_to_axi_rready = state == 3'h1 ? 1'h0 : io_from_ifu_rready; // @[i_cache.scala 137:25 143:26]
  assign io_cache_init = state == 3'h4; // @[i_cache.scala 245:27]
  always @(posedge clock) begin
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_0 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_0 <= _GEN_732;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_1 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_1 <= _GEN_733;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_2 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_2 <= _GEN_734;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_3 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_3 <= _GEN_735;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_4 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_4 <= _GEN_736;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_5 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_5 <= _GEN_737;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_6 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_6 <= _GEN_738;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_7 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_7 <= _GEN_739;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_8 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_8 <= _GEN_740;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_9 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_9 <= _GEN_741;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_10 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_10 <= _GEN_742;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_11 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_11 <= _GEN_743;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_12 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_12 <= _GEN_744;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_13 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_13 <= _GEN_745;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_14 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_14 <= _GEN_746;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_15 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_15 <= _GEN_747;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_0 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_0 <= _GEN_796;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_1 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_1 <= _GEN_797;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_2 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_2 <= _GEN_798;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_3 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_3 <= _GEN_799;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_4 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_4 <= _GEN_800;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_5 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_5 <= _GEN_801;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_6 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_6 <= _GEN_802;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_7 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_7 <= _GEN_803;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_8 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_8 <= _GEN_804;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_9 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_9 <= _GEN_805;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_10 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_10 <= _GEN_806;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_11 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_11 <= _GEN_807;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_12 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_12 <= _GEN_808;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_13 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_13 <= _GEN_809;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_14 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_14 <= _GEN_810;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_15 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_15 <= _GEN_811;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_0 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_0 <= _GEN_748;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_1 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_1 <= _GEN_749;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_2 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_2 <= _GEN_750;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_3 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_3 <= _GEN_751;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_4 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_4 <= _GEN_752;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_5 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_5 <= _GEN_753;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_6 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_6 <= _GEN_754;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_7 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_7 <= _GEN_755;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_8 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_8 <= _GEN_756;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_9 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_9 <= _GEN_757;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_10 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_10 <= _GEN_758;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_11 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_11 <= _GEN_759;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_12 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_12 <= _GEN_760;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_13 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_13 <= _GEN_761;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_14 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_14 <= _GEN_762;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_15 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_15 <= _GEN_763;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_0 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_0 <= _GEN_812;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_1 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_1 <= _GEN_813;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_2 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_2 <= _GEN_814;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_3 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_3 <= _GEN_815;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_4 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_4 <= _GEN_816;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_5 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_5 <= _GEN_817;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_6 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_6 <= _GEN_818;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_7 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_7 <= _GEN_819;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_8 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_8 <= _GEN_820;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_9 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_9 <= _GEN_821;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_10 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_10 <= _GEN_822;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_11 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_11 <= _GEN_823;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_12 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_12 <= _GEN_824;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_13 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_13 <= _GEN_825;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_14 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_14 <= _GEN_826;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_15 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_15 <= _GEN_827;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_0 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_0 <= _GEN_764;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_1 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_1 <= _GEN_765;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_2 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_2 <= _GEN_766;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_3 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_3 <= _GEN_767;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_4 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_4 <= _GEN_768;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_5 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_5 <= _GEN_769;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_6 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_6 <= _GEN_770;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_7 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_7 <= _GEN_771;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_8 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_8 <= _GEN_772;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_9 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_9 <= _GEN_773;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_10 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_10 <= _GEN_774;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_11 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_11 <= _GEN_775;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_12 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_12 <= _GEN_776;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_13 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_13 <= _GEN_777;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_14 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_14 <= _GEN_778;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_15 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_15 <= _GEN_779;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_0 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_0 <= _GEN_828;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_1 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_1 <= _GEN_829;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_2 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_2 <= _GEN_830;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_3 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_3 <= _GEN_831;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_4 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_4 <= _GEN_832;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_5 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_5 <= _GEN_833;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_6 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_6 <= _GEN_834;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_7 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_7 <= _GEN_835;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_8 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_8 <= _GEN_836;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_9 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_9 <= _GEN_837;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_10 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_10 <= _GEN_838;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_11 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_11 <= _GEN_839;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_12 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_12 <= _GEN_840;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_13 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_13 <= _GEN_841;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_14 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_14 <= _GEN_842;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_15 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_15 <= _GEN_843;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_0 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_0 <= _GEN_80;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_1 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_1 <= _GEN_81;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_2 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_2 <= _GEN_82;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_3 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_3 <= _GEN_83;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_4 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_4 <= _GEN_84;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_5 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_5 <= _GEN_85;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_6 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_6 <= _GEN_86;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_7 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_7 <= _GEN_87;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 30:30]
      receive_num <= 3'h0; // @[i_cache.scala 30:30]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (3'h1 == state) begin // @[i_cache.scala 47:18]
        if (!(way0_hit)) begin // @[i_cache.scala 57:27]
          receive_num <= _GEN_68;
        end
      end else if (3'h2 == state) begin // @[i_cache.scala 47:18]
        receive_num <= _GEN_88;
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_0 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_0 <= _GEN_780;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_1 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_1 <= _GEN_781;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_2 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_2 <= _GEN_782;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_3 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_3 <= _GEN_783;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_4 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_4 <= _GEN_784;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_5 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_5 <= _GEN_785;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_6 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_6 <= _GEN_786;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_7 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_7 <= _GEN_787;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_8 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_8 <= _GEN_788;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_9 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_9 <= _GEN_789;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_10 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_10 <= _GEN_790;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_11 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_11 <= _GEN_791;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_12 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_12 <= _GEN_792;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_13 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_13 <= _GEN_793;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_14 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_14 <= _GEN_794;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_15 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_15 <= _GEN_795;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 45:24]
      state <= 3'h0; // @[i_cache.scala 45:24]
    end else if (3'h0 == state) begin // @[i_cache.scala 47:18]
      if (io_clear_cache) begin // @[i_cache.scala 49:33]
        state <= 3'h4; // @[i_cache.scala 50:23]
      end else if (io_from_ifu_arvalid) begin // @[i_cache.scala 51:44]
        state <= 3'h1; // @[i_cache.scala 52:23]
      end
    end else if (3'h1 == state) begin // @[i_cache.scala 47:18]
      if (way0_hit) begin // @[i_cache.scala 57:27]
        state <= _GEN_66;
      end else begin
        state <= _GEN_67;
      end
    end else if (3'h2 == state) begin // @[i_cache.scala 47:18]
      state <= _GEN_89;
    end else begin
      state <= _GEN_731;
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
  _RAND_96 = {2{`RANDOM}};
  receive_data_0 = _RAND_96[63:0];
  _RAND_97 = {2{`RANDOM}};
  receive_data_1 = _RAND_97[63:0];
  _RAND_98 = {2{`RANDOM}};
  receive_data_2 = _RAND_98[63:0];
  _RAND_99 = {2{`RANDOM}};
  receive_data_3 = _RAND_99[63:0];
  _RAND_100 = {2{`RANDOM}};
  receive_data_4 = _RAND_100[63:0];
  _RAND_101 = {2{`RANDOM}};
  receive_data_5 = _RAND_101[63:0];
  _RAND_102 = {2{`RANDOM}};
  receive_data_6 = _RAND_102[63:0];
  _RAND_103 = {2{`RANDOM}};
  receive_data_7 = _RAND_103[63:0];
  _RAND_104 = {1{`RANDOM}};
  receive_num = _RAND_104[2:0];
  _RAND_105 = {1{`RANDOM}};
  quene_0 = _RAND_105[1:0];
  _RAND_106 = {1{`RANDOM}};
  quene_1 = _RAND_106[1:0];
  _RAND_107 = {1{`RANDOM}};
  quene_2 = _RAND_107[1:0];
  _RAND_108 = {1{`RANDOM}};
  quene_3 = _RAND_108[1:0];
  _RAND_109 = {1{`RANDOM}};
  quene_4 = _RAND_109[1:0];
  _RAND_110 = {1{`RANDOM}};
  quene_5 = _RAND_110[1:0];
  _RAND_111 = {1{`RANDOM}};
  quene_6 = _RAND_111[1:0];
  _RAND_112 = {1{`RANDOM}};
  quene_7 = _RAND_112[1:0];
  _RAND_113 = {1{`RANDOM}};
  quene_8 = _RAND_113[1:0];
  _RAND_114 = {1{`RANDOM}};
  quene_9 = _RAND_114[1:0];
  _RAND_115 = {1{`RANDOM}};
  quene_10 = _RAND_115[1:0];
  _RAND_116 = {1{`RANDOM}};
  quene_11 = _RAND_116[1:0];
  _RAND_117 = {1{`RANDOM}};
  quene_12 = _RAND_117[1:0];
  _RAND_118 = {1{`RANDOM}};
  quene_13 = _RAND_118[1:0];
  _RAND_119 = {1{`RANDOM}};
  quene_14 = _RAND_119[1:0];
  _RAND_120 = {1{`RANDOM}};
  quene_15 = _RAND_120[1:0];
  _RAND_121 = {1{`RANDOM}};
  state = _RAND_121[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
