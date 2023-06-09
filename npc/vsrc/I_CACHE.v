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
  reg [31:0] _RAND_96;
  reg [31:0] _RAND_97;
  reg [31:0] _RAND_98;
  reg [63:0] _RAND_99;
  reg [63:0] _RAND_100;
  reg [63:0] _RAND_101;
  reg [63:0] _RAND_102;
  reg [63:0] _RAND_103;
  reg [63:0] _RAND_104;
  reg [63:0] _RAND_105;
  reg [63:0] _RAND_106;
  reg [31:0] _RAND_107;
  reg [31:0] _RAND_108;
  reg [31:0] _RAND_109;
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
  reg  way0_hit; // @[i_cache.scala 25:27]
  reg  way1_hit; // @[i_cache.scala 26:27]
  reg [1:0] unuse_way; // @[i_cache.scala 28:28]
  reg [63:0] receive_data_0; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_1; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_2; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_3; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_4; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_5; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_6; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_7; // @[i_cache.scala 29:31]
  reg [2:0] receive_num; // @[i_cache.scala 30:30]
  reg  quene; // @[i_cache.scala 31:24]
  wire [5:0] offset = io_from_ifu_araddr[5:0]; // @[i_cache.scala 33:36]
  wire [3:0] index = io_from_ifu_araddr[9:6]; // @[i_cache.scala 34:35]
  wire [21:0] tag = io_from_ifu_araddr[31:10]; // @[i_cache.scala 35:33]
  wire [8:0] shift_bit = {offset, 3'h0}; // @[i_cache.scala 36:28]
  wire [31:0] _GEN_1 = 4'h1 == index ? tag_0_1 : tag_0_0; // @[i_cache.scala 38:{24,24}]
  wire [31:0] _GEN_2 = 4'h2 == index ? tag_0_2 : _GEN_1; // @[i_cache.scala 38:{24,24}]
  wire [31:0] _GEN_3 = 4'h3 == index ? tag_0_3 : _GEN_2; // @[i_cache.scala 38:{24,24}]
  wire [31:0] _GEN_4 = 4'h4 == index ? tag_0_4 : _GEN_3; // @[i_cache.scala 38:{24,24}]
  wire [31:0] _GEN_5 = 4'h5 == index ? tag_0_5 : _GEN_4; // @[i_cache.scala 38:{24,24}]
  wire [31:0] _GEN_6 = 4'h6 == index ? tag_0_6 : _GEN_5; // @[i_cache.scala 38:{24,24}]
  wire [31:0] _GEN_7 = 4'h7 == index ? tag_0_7 : _GEN_6; // @[i_cache.scala 38:{24,24}]
  wire [31:0] _GEN_8 = 4'h8 == index ? tag_0_8 : _GEN_7; // @[i_cache.scala 38:{24,24}]
  wire [31:0] _GEN_9 = 4'h9 == index ? tag_0_9 : _GEN_8; // @[i_cache.scala 38:{24,24}]
  wire [31:0] _GEN_10 = 4'ha == index ? tag_0_10 : _GEN_9; // @[i_cache.scala 38:{24,24}]
  wire [31:0] _GEN_11 = 4'hb == index ? tag_0_11 : _GEN_10; // @[i_cache.scala 38:{24,24}]
  wire [31:0] _GEN_12 = 4'hc == index ? tag_0_12 : _GEN_11; // @[i_cache.scala 38:{24,24}]
  wire [31:0] _GEN_13 = 4'hd == index ? tag_0_13 : _GEN_12; // @[i_cache.scala 38:{24,24}]
  wire [31:0] _GEN_14 = 4'he == index ? tag_0_14 : _GEN_13; // @[i_cache.scala 38:{24,24}]
  wire [31:0] _GEN_15 = 4'hf == index ? tag_0_15 : _GEN_14; // @[i_cache.scala 38:{24,24}]
  wire [31:0] _GEN_1095 = {{10'd0}, tag}; // @[i_cache.scala 38:24]
  wire  _GEN_17 = 4'h1 == index ? valid_0_1 : valid_0_0; // @[i_cache.scala 38:{50,50}]
  wire  _GEN_18 = 4'h2 == index ? valid_0_2 : _GEN_17; // @[i_cache.scala 38:{50,50}]
  wire  _GEN_19 = 4'h3 == index ? valid_0_3 : _GEN_18; // @[i_cache.scala 38:{50,50}]
  wire  _GEN_20 = 4'h4 == index ? valid_0_4 : _GEN_19; // @[i_cache.scala 38:{50,50}]
  wire  _GEN_21 = 4'h5 == index ? valid_0_5 : _GEN_20; // @[i_cache.scala 38:{50,50}]
  wire  _GEN_22 = 4'h6 == index ? valid_0_6 : _GEN_21; // @[i_cache.scala 38:{50,50}]
  wire  _GEN_23 = 4'h7 == index ? valid_0_7 : _GEN_22; // @[i_cache.scala 38:{50,50}]
  wire  _GEN_24 = 4'h8 == index ? valid_0_8 : _GEN_23; // @[i_cache.scala 38:{50,50}]
  wire  _GEN_25 = 4'h9 == index ? valid_0_9 : _GEN_24; // @[i_cache.scala 38:{50,50}]
  wire  _GEN_26 = 4'ha == index ? valid_0_10 : _GEN_25; // @[i_cache.scala 38:{50,50}]
  wire  _GEN_27 = 4'hb == index ? valid_0_11 : _GEN_26; // @[i_cache.scala 38:{50,50}]
  wire  _GEN_28 = 4'hc == index ? valid_0_12 : _GEN_27; // @[i_cache.scala 38:{50,50}]
  wire  _GEN_29 = 4'hd == index ? valid_0_13 : _GEN_28; // @[i_cache.scala 38:{50,50}]
  wire  _GEN_30 = 4'he == index ? valid_0_14 : _GEN_29; // @[i_cache.scala 38:{50,50}]
  wire  _GEN_31 = 4'hf == index ? valid_0_15 : _GEN_30; // @[i_cache.scala 38:{50,50}]
  wire  _T_2 = _GEN_15 == _GEN_1095 & _GEN_31; // @[i_cache.scala 38:33]
  wire [31:0] _GEN_34 = 4'h1 == index ? tag_1_1 : tag_1_0; // @[i_cache.scala 43:{24,24}]
  wire [31:0] _GEN_35 = 4'h2 == index ? tag_1_2 : _GEN_34; // @[i_cache.scala 43:{24,24}]
  wire [31:0] _GEN_36 = 4'h3 == index ? tag_1_3 : _GEN_35; // @[i_cache.scala 43:{24,24}]
  wire [31:0] _GEN_37 = 4'h4 == index ? tag_1_4 : _GEN_36; // @[i_cache.scala 43:{24,24}]
  wire [31:0] _GEN_38 = 4'h5 == index ? tag_1_5 : _GEN_37; // @[i_cache.scala 43:{24,24}]
  wire [31:0] _GEN_39 = 4'h6 == index ? tag_1_6 : _GEN_38; // @[i_cache.scala 43:{24,24}]
  wire [31:0] _GEN_40 = 4'h7 == index ? tag_1_7 : _GEN_39; // @[i_cache.scala 43:{24,24}]
  wire [31:0] _GEN_41 = 4'h8 == index ? tag_1_8 : _GEN_40; // @[i_cache.scala 43:{24,24}]
  wire [31:0] _GEN_42 = 4'h9 == index ? tag_1_9 : _GEN_41; // @[i_cache.scala 43:{24,24}]
  wire [31:0] _GEN_43 = 4'ha == index ? tag_1_10 : _GEN_42; // @[i_cache.scala 43:{24,24}]
  wire [31:0] _GEN_44 = 4'hb == index ? tag_1_11 : _GEN_43; // @[i_cache.scala 43:{24,24}]
  wire [31:0] _GEN_45 = 4'hc == index ? tag_1_12 : _GEN_44; // @[i_cache.scala 43:{24,24}]
  wire [31:0] _GEN_46 = 4'hd == index ? tag_1_13 : _GEN_45; // @[i_cache.scala 43:{24,24}]
  wire [31:0] _GEN_47 = 4'he == index ? tag_1_14 : _GEN_46; // @[i_cache.scala 43:{24,24}]
  wire [31:0] _GEN_48 = 4'hf == index ? tag_1_15 : _GEN_47; // @[i_cache.scala 43:{24,24}]
  wire  _GEN_50 = 4'h1 == index ? valid_1_1 : valid_1_0; // @[i_cache.scala 43:{50,50}]
  wire  _GEN_51 = 4'h2 == index ? valid_1_2 : _GEN_50; // @[i_cache.scala 43:{50,50}]
  wire  _GEN_52 = 4'h3 == index ? valid_1_3 : _GEN_51; // @[i_cache.scala 43:{50,50}]
  wire  _GEN_53 = 4'h4 == index ? valid_1_4 : _GEN_52; // @[i_cache.scala 43:{50,50}]
  wire  _GEN_54 = 4'h5 == index ? valid_1_5 : _GEN_53; // @[i_cache.scala 43:{50,50}]
  wire  _GEN_55 = 4'h6 == index ? valid_1_6 : _GEN_54; // @[i_cache.scala 43:{50,50}]
  wire  _GEN_56 = 4'h7 == index ? valid_1_7 : _GEN_55; // @[i_cache.scala 43:{50,50}]
  wire  _GEN_57 = 4'h8 == index ? valid_1_8 : _GEN_56; // @[i_cache.scala 43:{50,50}]
  wire  _GEN_58 = 4'h9 == index ? valid_1_9 : _GEN_57; // @[i_cache.scala 43:{50,50}]
  wire  _GEN_59 = 4'ha == index ? valid_1_10 : _GEN_58; // @[i_cache.scala 43:{50,50}]
  wire  _GEN_60 = 4'hb == index ? valid_1_11 : _GEN_59; // @[i_cache.scala 43:{50,50}]
  wire  _GEN_61 = 4'hc == index ? valid_1_12 : _GEN_60; // @[i_cache.scala 43:{50,50}]
  wire  _GEN_62 = 4'hd == index ? valid_1_13 : _GEN_61; // @[i_cache.scala 43:{50,50}]
  wire  _GEN_63 = 4'he == index ? valid_1_14 : _GEN_62; // @[i_cache.scala 43:{50,50}]
  wire  _GEN_64 = 4'hf == index ? valid_1_15 : _GEN_63; // @[i_cache.scala 43:{50,50}]
  wire  _T_5 = _GEN_48 == _GEN_1095 & _GEN_64; // @[i_cache.scala 43:33]
  reg [2:0] state; // @[i_cache.scala 57:24]
  wire [2:0] _GEN_70 = io_from_ifu_rready ? 3'h0 : state; // @[i_cache.scala 57:24 70:41 71:27]
  wire [2:0] _GEN_71 = way1_hit ? _GEN_70 : 3'h2; // @[i_cache.scala 74:33 79:23]
  wire [2:0] _GEN_72 = way1_hit ? receive_num : 3'h0; // @[i_cache.scala 30:30 74:33 81:29]
  wire [63:0] _GEN_75 = 3'h0 == receive_num ? io_from_axi_rdata : receive_data_0; // @[i_cache.scala 29:31 86:{43,43}]
  wire [63:0] _GEN_76 = 3'h1 == receive_num ? io_from_axi_rdata : receive_data_1; // @[i_cache.scala 29:31 86:{43,43}]
  wire [63:0] _GEN_77 = 3'h2 == receive_num ? io_from_axi_rdata : receive_data_2; // @[i_cache.scala 29:31 86:{43,43}]
  wire [63:0] _GEN_78 = 3'h3 == receive_num ? io_from_axi_rdata : receive_data_3; // @[i_cache.scala 29:31 86:{43,43}]
  wire [63:0] _GEN_79 = 3'h4 == receive_num ? io_from_axi_rdata : receive_data_4; // @[i_cache.scala 29:31 86:{43,43}]
  wire [63:0] _GEN_80 = 3'h5 == receive_num ? io_from_axi_rdata : receive_data_5; // @[i_cache.scala 29:31 86:{43,43}]
  wire [63:0] _GEN_81 = 3'h6 == receive_num ? io_from_axi_rdata : receive_data_6; // @[i_cache.scala 29:31 86:{43,43}]
  wire [63:0] _GEN_82 = 3'h7 == receive_num ? io_from_axi_rdata : receive_data_7; // @[i_cache.scala 29:31 86:{43,43}]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[i_cache.scala 87:44]
  wire [2:0] _GEN_83 = io_from_axi_rlast ? 3'h3 : state; // @[i_cache.scala 57:24 88:40 89:27]
  wire [63:0] _GEN_84 = io_from_axi_rvalid ? _GEN_75 : receive_data_0; // @[i_cache.scala 29:31 85:37]
  wire [63:0] _GEN_85 = io_from_axi_rvalid ? _GEN_76 : receive_data_1; // @[i_cache.scala 29:31 85:37]
  wire [63:0] _GEN_86 = io_from_axi_rvalid ? _GEN_77 : receive_data_2; // @[i_cache.scala 29:31 85:37]
  wire [63:0] _GEN_87 = io_from_axi_rvalid ? _GEN_78 : receive_data_3; // @[i_cache.scala 29:31 85:37]
  wire [63:0] _GEN_88 = io_from_axi_rvalid ? _GEN_79 : receive_data_4; // @[i_cache.scala 29:31 85:37]
  wire [63:0] _GEN_89 = io_from_axi_rvalid ? _GEN_80 : receive_data_5; // @[i_cache.scala 29:31 85:37]
  wire [63:0] _GEN_90 = io_from_axi_rvalid ? _GEN_81 : receive_data_6; // @[i_cache.scala 29:31 85:37]
  wire [63:0] _GEN_91 = io_from_axi_rvalid ? _GEN_82 : receive_data_7; // @[i_cache.scala 29:31 85:37]
  wire [2:0] _GEN_92 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[i_cache.scala 85:37 87:29 30:30]
  wire [2:0] _GEN_93 = io_from_axi_rvalid ? _GEN_83 : state; // @[i_cache.scala 57:24 85:37]
  wire [511:0] _ram_0_T = {receive_data_7,receive_data_6,receive_data_5,receive_data_4,receive_data_3,receive_data_2,
    receive_data_1,receive_data_0}; // @[Cat.scala 31:58]
  wire [511:0] _GEN_94 = 4'h0 == index ? _ram_0_T : ram_0_0; // @[i_cache.scala 19:24 96:{30,30}]
  wire [511:0] _GEN_95 = 4'h1 == index ? _ram_0_T : ram_0_1; // @[i_cache.scala 19:24 96:{30,30}]
  wire [511:0] _GEN_96 = 4'h2 == index ? _ram_0_T : ram_0_2; // @[i_cache.scala 19:24 96:{30,30}]
  wire [511:0] _GEN_97 = 4'h3 == index ? _ram_0_T : ram_0_3; // @[i_cache.scala 19:24 96:{30,30}]
  wire [511:0] _GEN_98 = 4'h4 == index ? _ram_0_T : ram_0_4; // @[i_cache.scala 19:24 96:{30,30}]
  wire [511:0] _GEN_99 = 4'h5 == index ? _ram_0_T : ram_0_5; // @[i_cache.scala 19:24 96:{30,30}]
  wire [511:0] _GEN_100 = 4'h6 == index ? _ram_0_T : ram_0_6; // @[i_cache.scala 19:24 96:{30,30}]
  wire [511:0] _GEN_101 = 4'h7 == index ? _ram_0_T : ram_0_7; // @[i_cache.scala 19:24 96:{30,30}]
  wire [511:0] _GEN_102 = 4'h8 == index ? _ram_0_T : ram_0_8; // @[i_cache.scala 19:24 96:{30,30}]
  wire [511:0] _GEN_103 = 4'h9 == index ? _ram_0_T : ram_0_9; // @[i_cache.scala 19:24 96:{30,30}]
  wire [511:0] _GEN_104 = 4'ha == index ? _ram_0_T : ram_0_10; // @[i_cache.scala 19:24 96:{30,30}]
  wire [511:0] _GEN_105 = 4'hb == index ? _ram_0_T : ram_0_11; // @[i_cache.scala 19:24 96:{30,30}]
  wire [511:0] _GEN_106 = 4'hc == index ? _ram_0_T : ram_0_12; // @[i_cache.scala 19:24 96:{30,30}]
  wire [511:0] _GEN_107 = 4'hd == index ? _ram_0_T : ram_0_13; // @[i_cache.scala 19:24 96:{30,30}]
  wire [511:0] _GEN_108 = 4'he == index ? _ram_0_T : ram_0_14; // @[i_cache.scala 19:24 96:{30,30}]
  wire [511:0] _GEN_109 = 4'hf == index ? _ram_0_T : ram_0_15; // @[i_cache.scala 19:24 96:{30,30}]
  wire [31:0] _GEN_110 = 4'h0 == index ? _GEN_1095 : tag_0_0; // @[i_cache.scala 21:24 97:{30,30}]
  wire [31:0] _GEN_111 = 4'h1 == index ? _GEN_1095 : tag_0_1; // @[i_cache.scala 21:24 97:{30,30}]
  wire [31:0] _GEN_112 = 4'h2 == index ? _GEN_1095 : tag_0_2; // @[i_cache.scala 21:24 97:{30,30}]
  wire [31:0] _GEN_113 = 4'h3 == index ? _GEN_1095 : tag_0_3; // @[i_cache.scala 21:24 97:{30,30}]
  wire [31:0] _GEN_114 = 4'h4 == index ? _GEN_1095 : tag_0_4; // @[i_cache.scala 21:24 97:{30,30}]
  wire [31:0] _GEN_115 = 4'h5 == index ? _GEN_1095 : tag_0_5; // @[i_cache.scala 21:24 97:{30,30}]
  wire [31:0] _GEN_116 = 4'h6 == index ? _GEN_1095 : tag_0_6; // @[i_cache.scala 21:24 97:{30,30}]
  wire [31:0] _GEN_117 = 4'h7 == index ? _GEN_1095 : tag_0_7; // @[i_cache.scala 21:24 97:{30,30}]
  wire [31:0] _GEN_118 = 4'h8 == index ? _GEN_1095 : tag_0_8; // @[i_cache.scala 21:24 97:{30,30}]
  wire [31:0] _GEN_119 = 4'h9 == index ? _GEN_1095 : tag_0_9; // @[i_cache.scala 21:24 97:{30,30}]
  wire [31:0] _GEN_120 = 4'ha == index ? _GEN_1095 : tag_0_10; // @[i_cache.scala 21:24 97:{30,30}]
  wire [31:0] _GEN_121 = 4'hb == index ? _GEN_1095 : tag_0_11; // @[i_cache.scala 21:24 97:{30,30}]
  wire [31:0] _GEN_122 = 4'hc == index ? _GEN_1095 : tag_0_12; // @[i_cache.scala 21:24 97:{30,30}]
  wire [31:0] _GEN_123 = 4'hd == index ? _GEN_1095 : tag_0_13; // @[i_cache.scala 21:24 97:{30,30}]
  wire [31:0] _GEN_124 = 4'he == index ? _GEN_1095 : tag_0_14; // @[i_cache.scala 21:24 97:{30,30}]
  wire [31:0] _GEN_125 = 4'hf == index ? _GEN_1095 : tag_0_15; // @[i_cache.scala 21:24 97:{30,30}]
  wire  _GEN_1099 = 4'h0 == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_126 = 4'h0 == index | valid_0_0; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_1101 = 4'h1 == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_127 = 4'h1 == index | valid_0_1; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_1106 = 4'h2 == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_128 = 4'h2 == index | valid_0_2; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_1111 = 4'h3 == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_129 = 4'h3 == index | valid_0_3; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_1115 = 4'h4 == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_130 = 4'h4 == index | valid_0_4; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_1117 = 4'h5 == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_131 = 4'h5 == index | valid_0_5; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_1118 = 4'h6 == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_132 = 4'h6 == index | valid_0_6; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_1119 = 4'h7 == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_133 = 4'h7 == index | valid_0_7; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_1120 = 4'h8 == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_134 = 4'h8 == index | valid_0_8; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_1121 = 4'h9 == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_135 = 4'h9 == index | valid_0_9; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_1122 = 4'ha == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_136 = 4'ha == index | valid_0_10; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_1123 = 4'hb == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_137 = 4'hb == index | valid_0_11; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_1124 = 4'hc == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_138 = 4'hc == index | valid_0_12; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_1125 = 4'hd == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_139 = 4'hd == index | valid_0_13; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_1126 = 4'he == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_140 = 4'he == index | valid_0_14; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_1127 = 4'hf == index; // @[i_cache.scala 23:26 98:{32,32}]
  wire  _GEN_141 = 4'hf == index | valid_0_15; // @[i_cache.scala 23:26 98:{32,32}]
  wire [511:0] _GEN_142 = 4'h0 == index ? _ram_0_T : ram_1_0; // @[i_cache.scala 101:{30,30} 20:24]
  wire [511:0] _GEN_143 = 4'h1 == index ? _ram_0_T : ram_1_1; // @[i_cache.scala 101:{30,30} 20:24]
  wire [511:0] _GEN_144 = 4'h2 == index ? _ram_0_T : ram_1_2; // @[i_cache.scala 101:{30,30} 20:24]
  wire [511:0] _GEN_145 = 4'h3 == index ? _ram_0_T : ram_1_3; // @[i_cache.scala 101:{30,30} 20:24]
  wire [511:0] _GEN_146 = 4'h4 == index ? _ram_0_T : ram_1_4; // @[i_cache.scala 101:{30,30} 20:24]
  wire [511:0] _GEN_147 = 4'h5 == index ? _ram_0_T : ram_1_5; // @[i_cache.scala 101:{30,30} 20:24]
  wire [511:0] _GEN_148 = 4'h6 == index ? _ram_0_T : ram_1_6; // @[i_cache.scala 101:{30,30} 20:24]
  wire [511:0] _GEN_149 = 4'h7 == index ? _ram_0_T : ram_1_7; // @[i_cache.scala 101:{30,30} 20:24]
  wire [511:0] _GEN_150 = 4'h8 == index ? _ram_0_T : ram_1_8; // @[i_cache.scala 101:{30,30} 20:24]
  wire [511:0] _GEN_151 = 4'h9 == index ? _ram_0_T : ram_1_9; // @[i_cache.scala 101:{30,30} 20:24]
  wire [511:0] _GEN_152 = 4'ha == index ? _ram_0_T : ram_1_10; // @[i_cache.scala 101:{30,30} 20:24]
  wire [511:0] _GEN_153 = 4'hb == index ? _ram_0_T : ram_1_11; // @[i_cache.scala 101:{30,30} 20:24]
  wire [511:0] _GEN_154 = 4'hc == index ? _ram_0_T : ram_1_12; // @[i_cache.scala 101:{30,30} 20:24]
  wire [511:0] _GEN_155 = 4'hd == index ? _ram_0_T : ram_1_13; // @[i_cache.scala 101:{30,30} 20:24]
  wire [511:0] _GEN_156 = 4'he == index ? _ram_0_T : ram_1_14; // @[i_cache.scala 101:{30,30} 20:24]
  wire [511:0] _GEN_157 = 4'hf == index ? _ram_0_T : ram_1_15; // @[i_cache.scala 101:{30,30} 20:24]
  wire [31:0] _GEN_158 = 4'h0 == index ? _GEN_1095 : tag_1_0; // @[i_cache.scala 102:{30,30} 22:24]
  wire [31:0] _GEN_159 = 4'h1 == index ? _GEN_1095 : tag_1_1; // @[i_cache.scala 102:{30,30} 22:24]
  wire [31:0] _GEN_160 = 4'h2 == index ? _GEN_1095 : tag_1_2; // @[i_cache.scala 102:{30,30} 22:24]
  wire [31:0] _GEN_161 = 4'h3 == index ? _GEN_1095 : tag_1_3; // @[i_cache.scala 102:{30,30} 22:24]
  wire [31:0] _GEN_162 = 4'h4 == index ? _GEN_1095 : tag_1_4; // @[i_cache.scala 102:{30,30} 22:24]
  wire [31:0] _GEN_163 = 4'h5 == index ? _GEN_1095 : tag_1_5; // @[i_cache.scala 102:{30,30} 22:24]
  wire [31:0] _GEN_164 = 4'h6 == index ? _GEN_1095 : tag_1_6; // @[i_cache.scala 102:{30,30} 22:24]
  wire [31:0] _GEN_165 = 4'h7 == index ? _GEN_1095 : tag_1_7; // @[i_cache.scala 102:{30,30} 22:24]
  wire [31:0] _GEN_166 = 4'h8 == index ? _GEN_1095 : tag_1_8; // @[i_cache.scala 102:{30,30} 22:24]
  wire [31:0] _GEN_167 = 4'h9 == index ? _GEN_1095 : tag_1_9; // @[i_cache.scala 102:{30,30} 22:24]
  wire [31:0] _GEN_168 = 4'ha == index ? _GEN_1095 : tag_1_10; // @[i_cache.scala 102:{30,30} 22:24]
  wire [31:0] _GEN_169 = 4'hb == index ? _GEN_1095 : tag_1_11; // @[i_cache.scala 102:{30,30} 22:24]
  wire [31:0] _GEN_170 = 4'hc == index ? _GEN_1095 : tag_1_12; // @[i_cache.scala 102:{30,30} 22:24]
  wire [31:0] _GEN_171 = 4'hd == index ? _GEN_1095 : tag_1_13; // @[i_cache.scala 102:{30,30} 22:24]
  wire [31:0] _GEN_172 = 4'he == index ? _GEN_1095 : tag_1_14; // @[i_cache.scala 102:{30,30} 22:24]
  wire [31:0] _GEN_173 = 4'hf == index ? _GEN_1095 : tag_1_15; // @[i_cache.scala 102:{30,30} 22:24]
  wire  _GEN_174 = _GEN_1099 | valid_1_0; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _GEN_175 = _GEN_1101 | valid_1_1; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _GEN_176 = _GEN_1106 | valid_1_2; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _GEN_177 = _GEN_1111 | valid_1_3; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _GEN_178 = _GEN_1115 | valid_1_4; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _GEN_179 = _GEN_1117 | valid_1_5; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _GEN_180 = _GEN_1118 | valid_1_6; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _GEN_181 = _GEN_1119 | valid_1_7; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _GEN_182 = _GEN_1120 | valid_1_8; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _GEN_183 = _GEN_1121 | valid_1_9; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _GEN_184 = _GEN_1122 | valid_1_10; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _GEN_185 = _GEN_1123 | valid_1_11; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _GEN_186 = _GEN_1124 | valid_1_12; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _GEN_187 = _GEN_1125 | valid_1_13; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _GEN_188 = _GEN_1126 | valid_1_14; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _GEN_189 = _GEN_1127 | valid_1_15; // @[i_cache.scala 103:{32,32} 24:26]
  wire  _T_14 = ~quene; // @[i_cache.scala 106:27]
  wire [511:0] _GEN_286 = ~quene ? _GEN_94 : ram_0_0; // @[i_cache.scala 106:34 19:24]
  wire [511:0] _GEN_287 = ~quene ? _GEN_95 : ram_0_1; // @[i_cache.scala 106:34 19:24]
  wire [511:0] _GEN_288 = ~quene ? _GEN_96 : ram_0_2; // @[i_cache.scala 106:34 19:24]
  wire [511:0] _GEN_289 = ~quene ? _GEN_97 : ram_0_3; // @[i_cache.scala 106:34 19:24]
  wire [511:0] _GEN_290 = ~quene ? _GEN_98 : ram_0_4; // @[i_cache.scala 106:34 19:24]
  wire [511:0] _GEN_291 = ~quene ? _GEN_99 : ram_0_5; // @[i_cache.scala 106:34 19:24]
  wire [511:0] _GEN_292 = ~quene ? _GEN_100 : ram_0_6; // @[i_cache.scala 106:34 19:24]
  wire [511:0] _GEN_293 = ~quene ? _GEN_101 : ram_0_7; // @[i_cache.scala 106:34 19:24]
  wire [511:0] _GEN_294 = ~quene ? _GEN_102 : ram_0_8; // @[i_cache.scala 106:34 19:24]
  wire [511:0] _GEN_295 = ~quene ? _GEN_103 : ram_0_9; // @[i_cache.scala 106:34 19:24]
  wire [511:0] _GEN_296 = ~quene ? _GEN_104 : ram_0_10; // @[i_cache.scala 106:34 19:24]
  wire [511:0] _GEN_297 = ~quene ? _GEN_105 : ram_0_11; // @[i_cache.scala 106:34 19:24]
  wire [511:0] _GEN_298 = ~quene ? _GEN_106 : ram_0_12; // @[i_cache.scala 106:34 19:24]
  wire [511:0] _GEN_299 = ~quene ? _GEN_107 : ram_0_13; // @[i_cache.scala 106:34 19:24]
  wire [511:0] _GEN_300 = ~quene ? _GEN_108 : ram_0_14; // @[i_cache.scala 106:34 19:24]
  wire [511:0] _GEN_301 = ~quene ? _GEN_109 : ram_0_15; // @[i_cache.scala 106:34 19:24]
  wire [31:0] _GEN_302 = ~quene ? _GEN_110 : tag_0_0; // @[i_cache.scala 106:34 21:24]
  wire [31:0] _GEN_303 = ~quene ? _GEN_111 : tag_0_1; // @[i_cache.scala 106:34 21:24]
  wire [31:0] _GEN_304 = ~quene ? _GEN_112 : tag_0_2; // @[i_cache.scala 106:34 21:24]
  wire [31:0] _GEN_305 = ~quene ? _GEN_113 : tag_0_3; // @[i_cache.scala 106:34 21:24]
  wire [31:0] _GEN_306 = ~quene ? _GEN_114 : tag_0_4; // @[i_cache.scala 106:34 21:24]
  wire [31:0] _GEN_307 = ~quene ? _GEN_115 : tag_0_5; // @[i_cache.scala 106:34 21:24]
  wire [31:0] _GEN_308 = ~quene ? _GEN_116 : tag_0_6; // @[i_cache.scala 106:34 21:24]
  wire [31:0] _GEN_309 = ~quene ? _GEN_117 : tag_0_7; // @[i_cache.scala 106:34 21:24]
  wire [31:0] _GEN_310 = ~quene ? _GEN_118 : tag_0_8; // @[i_cache.scala 106:34 21:24]
  wire [31:0] _GEN_311 = ~quene ? _GEN_119 : tag_0_9; // @[i_cache.scala 106:34 21:24]
  wire [31:0] _GEN_312 = ~quene ? _GEN_120 : tag_0_10; // @[i_cache.scala 106:34 21:24]
  wire [31:0] _GEN_313 = ~quene ? _GEN_121 : tag_0_11; // @[i_cache.scala 106:34 21:24]
  wire [31:0] _GEN_314 = ~quene ? _GEN_122 : tag_0_12; // @[i_cache.scala 106:34 21:24]
  wire [31:0] _GEN_315 = ~quene ? _GEN_123 : tag_0_13; // @[i_cache.scala 106:34 21:24]
  wire [31:0] _GEN_316 = ~quene ? _GEN_124 : tag_0_14; // @[i_cache.scala 106:34 21:24]
  wire [31:0] _GEN_317 = ~quene ? _GEN_125 : tag_0_15; // @[i_cache.scala 106:34 21:24]
  wire  _GEN_318 = ~quene ? _GEN_126 : valid_0_0; // @[i_cache.scala 106:34 23:26]
  wire  _GEN_319 = ~quene ? _GEN_127 : valid_0_1; // @[i_cache.scala 106:34 23:26]
  wire  _GEN_320 = ~quene ? _GEN_128 : valid_0_2; // @[i_cache.scala 106:34 23:26]
  wire  _GEN_321 = ~quene ? _GEN_129 : valid_0_3; // @[i_cache.scala 106:34 23:26]
  wire  _GEN_322 = ~quene ? _GEN_130 : valid_0_4; // @[i_cache.scala 106:34 23:26]
  wire  _GEN_323 = ~quene ? _GEN_131 : valid_0_5; // @[i_cache.scala 106:34 23:26]
  wire  _GEN_324 = ~quene ? _GEN_132 : valid_0_6; // @[i_cache.scala 106:34 23:26]
  wire  _GEN_325 = ~quene ? _GEN_133 : valid_0_7; // @[i_cache.scala 106:34 23:26]
  wire  _GEN_326 = ~quene ? _GEN_134 : valid_0_8; // @[i_cache.scala 106:34 23:26]
  wire  _GEN_327 = ~quene ? _GEN_135 : valid_0_9; // @[i_cache.scala 106:34 23:26]
  wire  _GEN_328 = ~quene ? _GEN_136 : valid_0_10; // @[i_cache.scala 106:34 23:26]
  wire  _GEN_329 = ~quene ? _GEN_137 : valid_0_11; // @[i_cache.scala 106:34 23:26]
  wire  _GEN_330 = ~quene ? _GEN_138 : valid_0_12; // @[i_cache.scala 106:34 23:26]
  wire  _GEN_331 = ~quene ? _GEN_139 : valid_0_13; // @[i_cache.scala 106:34 23:26]
  wire  _GEN_332 = ~quene ? _GEN_140 : valid_0_14; // @[i_cache.scala 106:34 23:26]
  wire  _GEN_333 = ~quene ? _GEN_141 : valid_0_15; // @[i_cache.scala 106:34 23:26]
  wire [511:0] _GEN_335 = ~quene ? ram_1_0 : _GEN_142; // @[i_cache.scala 106:34 20:24]
  wire [511:0] _GEN_336 = ~quene ? ram_1_1 : _GEN_143; // @[i_cache.scala 106:34 20:24]
  wire [511:0] _GEN_337 = ~quene ? ram_1_2 : _GEN_144; // @[i_cache.scala 106:34 20:24]
  wire [511:0] _GEN_338 = ~quene ? ram_1_3 : _GEN_145; // @[i_cache.scala 106:34 20:24]
  wire [511:0] _GEN_339 = ~quene ? ram_1_4 : _GEN_146; // @[i_cache.scala 106:34 20:24]
  wire [511:0] _GEN_340 = ~quene ? ram_1_5 : _GEN_147; // @[i_cache.scala 106:34 20:24]
  wire [511:0] _GEN_341 = ~quene ? ram_1_6 : _GEN_148; // @[i_cache.scala 106:34 20:24]
  wire [511:0] _GEN_342 = ~quene ? ram_1_7 : _GEN_149; // @[i_cache.scala 106:34 20:24]
  wire [511:0] _GEN_343 = ~quene ? ram_1_8 : _GEN_150; // @[i_cache.scala 106:34 20:24]
  wire [511:0] _GEN_344 = ~quene ? ram_1_9 : _GEN_151; // @[i_cache.scala 106:34 20:24]
  wire [511:0] _GEN_345 = ~quene ? ram_1_10 : _GEN_152; // @[i_cache.scala 106:34 20:24]
  wire [511:0] _GEN_346 = ~quene ? ram_1_11 : _GEN_153; // @[i_cache.scala 106:34 20:24]
  wire [511:0] _GEN_347 = ~quene ? ram_1_12 : _GEN_154; // @[i_cache.scala 106:34 20:24]
  wire [511:0] _GEN_348 = ~quene ? ram_1_13 : _GEN_155; // @[i_cache.scala 106:34 20:24]
  wire [511:0] _GEN_349 = ~quene ? ram_1_14 : _GEN_156; // @[i_cache.scala 106:34 20:24]
  wire [511:0] _GEN_350 = ~quene ? ram_1_15 : _GEN_157; // @[i_cache.scala 106:34 20:24]
  wire [31:0] _GEN_351 = ~quene ? tag_1_0 : _GEN_158; // @[i_cache.scala 106:34 22:24]
  wire [31:0] _GEN_352 = ~quene ? tag_1_1 : _GEN_159; // @[i_cache.scala 106:34 22:24]
  wire [31:0] _GEN_353 = ~quene ? tag_1_2 : _GEN_160; // @[i_cache.scala 106:34 22:24]
  wire [31:0] _GEN_354 = ~quene ? tag_1_3 : _GEN_161; // @[i_cache.scala 106:34 22:24]
  wire [31:0] _GEN_355 = ~quene ? tag_1_4 : _GEN_162; // @[i_cache.scala 106:34 22:24]
  wire [31:0] _GEN_356 = ~quene ? tag_1_5 : _GEN_163; // @[i_cache.scala 106:34 22:24]
  wire [31:0] _GEN_357 = ~quene ? tag_1_6 : _GEN_164; // @[i_cache.scala 106:34 22:24]
  wire [31:0] _GEN_358 = ~quene ? tag_1_7 : _GEN_165; // @[i_cache.scala 106:34 22:24]
  wire [31:0] _GEN_359 = ~quene ? tag_1_8 : _GEN_166; // @[i_cache.scala 106:34 22:24]
  wire [31:0] _GEN_360 = ~quene ? tag_1_9 : _GEN_167; // @[i_cache.scala 106:34 22:24]
  wire [31:0] _GEN_361 = ~quene ? tag_1_10 : _GEN_168; // @[i_cache.scala 106:34 22:24]
  wire [31:0] _GEN_362 = ~quene ? tag_1_11 : _GEN_169; // @[i_cache.scala 106:34 22:24]
  wire [31:0] _GEN_363 = ~quene ? tag_1_12 : _GEN_170; // @[i_cache.scala 106:34 22:24]
  wire [31:0] _GEN_364 = ~quene ? tag_1_13 : _GEN_171; // @[i_cache.scala 106:34 22:24]
  wire [31:0] _GEN_365 = ~quene ? tag_1_14 : _GEN_172; // @[i_cache.scala 106:34 22:24]
  wire [31:0] _GEN_366 = ~quene ? tag_1_15 : _GEN_173; // @[i_cache.scala 106:34 22:24]
  wire  _GEN_367 = ~quene ? valid_1_0 : _GEN_174; // @[i_cache.scala 106:34 24:26]
  wire  _GEN_368 = ~quene ? valid_1_1 : _GEN_175; // @[i_cache.scala 106:34 24:26]
  wire  _GEN_369 = ~quene ? valid_1_2 : _GEN_176; // @[i_cache.scala 106:34 24:26]
  wire  _GEN_370 = ~quene ? valid_1_3 : _GEN_177; // @[i_cache.scala 106:34 24:26]
  wire  _GEN_371 = ~quene ? valid_1_4 : _GEN_178; // @[i_cache.scala 106:34 24:26]
  wire  _GEN_372 = ~quene ? valid_1_5 : _GEN_179; // @[i_cache.scala 106:34 24:26]
  wire  _GEN_373 = ~quene ? valid_1_6 : _GEN_180; // @[i_cache.scala 106:34 24:26]
  wire  _GEN_374 = ~quene ? valid_1_7 : _GEN_181; // @[i_cache.scala 106:34 24:26]
  wire  _GEN_375 = ~quene ? valid_1_8 : _GEN_182; // @[i_cache.scala 106:34 24:26]
  wire  _GEN_376 = ~quene ? valid_1_9 : _GEN_183; // @[i_cache.scala 106:34 24:26]
  wire  _GEN_377 = ~quene ? valid_1_10 : _GEN_184; // @[i_cache.scala 106:34 24:26]
  wire  _GEN_378 = ~quene ? valid_1_11 : _GEN_185; // @[i_cache.scala 106:34 24:26]
  wire  _GEN_379 = ~quene ? valid_1_12 : _GEN_186; // @[i_cache.scala 106:34 24:26]
  wire  _GEN_380 = ~quene ? valid_1_13 : _GEN_187; // @[i_cache.scala 106:34 24:26]
  wire  _GEN_381 = ~quene ? valid_1_14 : _GEN_188; // @[i_cache.scala 106:34 24:26]
  wire  _GEN_382 = ~quene ? valid_1_15 : _GEN_189; // @[i_cache.scala 106:34 24:26]
  wire [511:0] _GEN_383 = unuse_way == 2'h2 ? _GEN_142 : _GEN_335; // @[i_cache.scala 100:40]
  wire [511:0] _GEN_384 = unuse_way == 2'h2 ? _GEN_143 : _GEN_336; // @[i_cache.scala 100:40]
  wire [511:0] _GEN_385 = unuse_way == 2'h2 ? _GEN_144 : _GEN_337; // @[i_cache.scala 100:40]
  wire [511:0] _GEN_386 = unuse_way == 2'h2 ? _GEN_145 : _GEN_338; // @[i_cache.scala 100:40]
  wire [511:0] _GEN_387 = unuse_way == 2'h2 ? _GEN_146 : _GEN_339; // @[i_cache.scala 100:40]
  wire [511:0] _GEN_388 = unuse_way == 2'h2 ? _GEN_147 : _GEN_340; // @[i_cache.scala 100:40]
  wire [511:0] _GEN_389 = unuse_way == 2'h2 ? _GEN_148 : _GEN_341; // @[i_cache.scala 100:40]
  wire [511:0] _GEN_390 = unuse_way == 2'h2 ? _GEN_149 : _GEN_342; // @[i_cache.scala 100:40]
  wire [511:0] _GEN_391 = unuse_way == 2'h2 ? _GEN_150 : _GEN_343; // @[i_cache.scala 100:40]
  wire [511:0] _GEN_392 = unuse_way == 2'h2 ? _GEN_151 : _GEN_344; // @[i_cache.scala 100:40]
  wire [511:0] _GEN_393 = unuse_way == 2'h2 ? _GEN_152 : _GEN_345; // @[i_cache.scala 100:40]
  wire [511:0] _GEN_394 = unuse_way == 2'h2 ? _GEN_153 : _GEN_346; // @[i_cache.scala 100:40]
  wire [511:0] _GEN_395 = unuse_way == 2'h2 ? _GEN_154 : _GEN_347; // @[i_cache.scala 100:40]
  wire [511:0] _GEN_396 = unuse_way == 2'h2 ? _GEN_155 : _GEN_348; // @[i_cache.scala 100:40]
  wire [511:0] _GEN_397 = unuse_way == 2'h2 ? _GEN_156 : _GEN_349; // @[i_cache.scala 100:40]
  wire [511:0] _GEN_398 = unuse_way == 2'h2 ? _GEN_157 : _GEN_350; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_399 = unuse_way == 2'h2 ? _GEN_158 : _GEN_351; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_400 = unuse_way == 2'h2 ? _GEN_159 : _GEN_352; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_401 = unuse_way == 2'h2 ? _GEN_160 : _GEN_353; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_402 = unuse_way == 2'h2 ? _GEN_161 : _GEN_354; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_403 = unuse_way == 2'h2 ? _GEN_162 : _GEN_355; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_404 = unuse_way == 2'h2 ? _GEN_163 : _GEN_356; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_405 = unuse_way == 2'h2 ? _GEN_164 : _GEN_357; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_406 = unuse_way == 2'h2 ? _GEN_165 : _GEN_358; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_407 = unuse_way == 2'h2 ? _GEN_166 : _GEN_359; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_408 = unuse_way == 2'h2 ? _GEN_167 : _GEN_360; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_409 = unuse_way == 2'h2 ? _GEN_168 : _GEN_361; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_410 = unuse_way == 2'h2 ? _GEN_169 : _GEN_362; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_411 = unuse_way == 2'h2 ? _GEN_170 : _GEN_363; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_412 = unuse_way == 2'h2 ? _GEN_171 : _GEN_364; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_413 = unuse_way == 2'h2 ? _GEN_172 : _GEN_365; // @[i_cache.scala 100:40]
  wire [31:0] _GEN_414 = unuse_way == 2'h2 ? _GEN_173 : _GEN_366; // @[i_cache.scala 100:40]
  wire  _GEN_415 = unuse_way == 2'h2 ? _GEN_174 : _GEN_367; // @[i_cache.scala 100:40]
  wire  _GEN_416 = unuse_way == 2'h2 ? _GEN_175 : _GEN_368; // @[i_cache.scala 100:40]
  wire  _GEN_417 = unuse_way == 2'h2 ? _GEN_176 : _GEN_369; // @[i_cache.scala 100:40]
  wire  _GEN_418 = unuse_way == 2'h2 ? _GEN_177 : _GEN_370; // @[i_cache.scala 100:40]
  wire  _GEN_419 = unuse_way == 2'h2 ? _GEN_178 : _GEN_371; // @[i_cache.scala 100:40]
  wire  _GEN_420 = unuse_way == 2'h2 ? _GEN_179 : _GEN_372; // @[i_cache.scala 100:40]
  wire  _GEN_421 = unuse_way == 2'h2 ? _GEN_180 : _GEN_373; // @[i_cache.scala 100:40]
  wire  _GEN_422 = unuse_way == 2'h2 ? _GEN_181 : _GEN_374; // @[i_cache.scala 100:40]
  wire  _GEN_423 = unuse_way == 2'h2 ? _GEN_182 : _GEN_375; // @[i_cache.scala 100:40]
  wire  _GEN_424 = unuse_way == 2'h2 ? _GEN_183 : _GEN_376; // @[i_cache.scala 100:40]
  wire  _GEN_425 = unuse_way == 2'h2 ? _GEN_184 : _GEN_377; // @[i_cache.scala 100:40]
  wire  _GEN_426 = unuse_way == 2'h2 ? _GEN_185 : _GEN_378; // @[i_cache.scala 100:40]
  wire  _GEN_427 = unuse_way == 2'h2 ? _GEN_186 : _GEN_379; // @[i_cache.scala 100:40]
  wire  _GEN_428 = unuse_way == 2'h2 ? _GEN_187 : _GEN_380; // @[i_cache.scala 100:40]
  wire  _GEN_429 = unuse_way == 2'h2 ? _GEN_188 : _GEN_381; // @[i_cache.scala 100:40]
  wire  _GEN_430 = unuse_way == 2'h2 ? _GEN_189 : _GEN_382; // @[i_cache.scala 100:40]
  wire  _GEN_431 = unuse_way == 2'h2 ? 1'h0 : _T_14; // @[i_cache.scala 100:40 104:23]
  wire [511:0] _GEN_432 = unuse_way == 2'h2 ? ram_0_0 : _GEN_286; // @[i_cache.scala 100:40 19:24]
  wire [511:0] _GEN_433 = unuse_way == 2'h2 ? ram_0_1 : _GEN_287; // @[i_cache.scala 100:40 19:24]
  wire [511:0] _GEN_434 = unuse_way == 2'h2 ? ram_0_2 : _GEN_288; // @[i_cache.scala 100:40 19:24]
  wire [511:0] _GEN_435 = unuse_way == 2'h2 ? ram_0_3 : _GEN_289; // @[i_cache.scala 100:40 19:24]
  wire [511:0] _GEN_436 = unuse_way == 2'h2 ? ram_0_4 : _GEN_290; // @[i_cache.scala 100:40 19:24]
  wire [511:0] _GEN_437 = unuse_way == 2'h2 ? ram_0_5 : _GEN_291; // @[i_cache.scala 100:40 19:24]
  wire [511:0] _GEN_438 = unuse_way == 2'h2 ? ram_0_6 : _GEN_292; // @[i_cache.scala 100:40 19:24]
  wire [511:0] _GEN_439 = unuse_way == 2'h2 ? ram_0_7 : _GEN_293; // @[i_cache.scala 100:40 19:24]
  wire [511:0] _GEN_440 = unuse_way == 2'h2 ? ram_0_8 : _GEN_294; // @[i_cache.scala 100:40 19:24]
  wire [511:0] _GEN_441 = unuse_way == 2'h2 ? ram_0_9 : _GEN_295; // @[i_cache.scala 100:40 19:24]
  wire [511:0] _GEN_442 = unuse_way == 2'h2 ? ram_0_10 : _GEN_296; // @[i_cache.scala 100:40 19:24]
  wire [511:0] _GEN_443 = unuse_way == 2'h2 ? ram_0_11 : _GEN_297; // @[i_cache.scala 100:40 19:24]
  wire [511:0] _GEN_444 = unuse_way == 2'h2 ? ram_0_12 : _GEN_298; // @[i_cache.scala 100:40 19:24]
  wire [511:0] _GEN_445 = unuse_way == 2'h2 ? ram_0_13 : _GEN_299; // @[i_cache.scala 100:40 19:24]
  wire [511:0] _GEN_446 = unuse_way == 2'h2 ? ram_0_14 : _GEN_300; // @[i_cache.scala 100:40 19:24]
  wire [511:0] _GEN_447 = unuse_way == 2'h2 ? ram_0_15 : _GEN_301; // @[i_cache.scala 100:40 19:24]
  wire [31:0] _GEN_448 = unuse_way == 2'h2 ? tag_0_0 : _GEN_302; // @[i_cache.scala 100:40 21:24]
  wire [31:0] _GEN_449 = unuse_way == 2'h2 ? tag_0_1 : _GEN_303; // @[i_cache.scala 100:40 21:24]
  wire [31:0] _GEN_450 = unuse_way == 2'h2 ? tag_0_2 : _GEN_304; // @[i_cache.scala 100:40 21:24]
  wire [31:0] _GEN_451 = unuse_way == 2'h2 ? tag_0_3 : _GEN_305; // @[i_cache.scala 100:40 21:24]
  wire [31:0] _GEN_452 = unuse_way == 2'h2 ? tag_0_4 : _GEN_306; // @[i_cache.scala 100:40 21:24]
  wire [31:0] _GEN_453 = unuse_way == 2'h2 ? tag_0_5 : _GEN_307; // @[i_cache.scala 100:40 21:24]
  wire [31:0] _GEN_454 = unuse_way == 2'h2 ? tag_0_6 : _GEN_308; // @[i_cache.scala 100:40 21:24]
  wire [31:0] _GEN_455 = unuse_way == 2'h2 ? tag_0_7 : _GEN_309; // @[i_cache.scala 100:40 21:24]
  wire [31:0] _GEN_456 = unuse_way == 2'h2 ? tag_0_8 : _GEN_310; // @[i_cache.scala 100:40 21:24]
  wire [31:0] _GEN_457 = unuse_way == 2'h2 ? tag_0_9 : _GEN_311; // @[i_cache.scala 100:40 21:24]
  wire [31:0] _GEN_458 = unuse_way == 2'h2 ? tag_0_10 : _GEN_312; // @[i_cache.scala 100:40 21:24]
  wire [31:0] _GEN_459 = unuse_way == 2'h2 ? tag_0_11 : _GEN_313; // @[i_cache.scala 100:40 21:24]
  wire [31:0] _GEN_460 = unuse_way == 2'h2 ? tag_0_12 : _GEN_314; // @[i_cache.scala 100:40 21:24]
  wire [31:0] _GEN_461 = unuse_way == 2'h2 ? tag_0_13 : _GEN_315; // @[i_cache.scala 100:40 21:24]
  wire [31:0] _GEN_462 = unuse_way == 2'h2 ? tag_0_14 : _GEN_316; // @[i_cache.scala 100:40 21:24]
  wire [31:0] _GEN_463 = unuse_way == 2'h2 ? tag_0_15 : _GEN_317; // @[i_cache.scala 100:40 21:24]
  wire  _GEN_464 = unuse_way == 2'h2 ? valid_0_0 : _GEN_318; // @[i_cache.scala 100:40 23:26]
  wire  _GEN_465 = unuse_way == 2'h2 ? valid_0_1 : _GEN_319; // @[i_cache.scala 100:40 23:26]
  wire  _GEN_466 = unuse_way == 2'h2 ? valid_0_2 : _GEN_320; // @[i_cache.scala 100:40 23:26]
  wire  _GEN_467 = unuse_way == 2'h2 ? valid_0_3 : _GEN_321; // @[i_cache.scala 100:40 23:26]
  wire  _GEN_468 = unuse_way == 2'h2 ? valid_0_4 : _GEN_322; // @[i_cache.scala 100:40 23:26]
  wire  _GEN_469 = unuse_way == 2'h2 ? valid_0_5 : _GEN_323; // @[i_cache.scala 100:40 23:26]
  wire  _GEN_470 = unuse_way == 2'h2 ? valid_0_6 : _GEN_324; // @[i_cache.scala 100:40 23:26]
  wire  _GEN_471 = unuse_way == 2'h2 ? valid_0_7 : _GEN_325; // @[i_cache.scala 100:40 23:26]
  wire  _GEN_472 = unuse_way == 2'h2 ? valid_0_8 : _GEN_326; // @[i_cache.scala 100:40 23:26]
  wire  _GEN_473 = unuse_way == 2'h2 ? valid_0_9 : _GEN_327; // @[i_cache.scala 100:40 23:26]
  wire  _GEN_474 = unuse_way == 2'h2 ? valid_0_10 : _GEN_328; // @[i_cache.scala 100:40 23:26]
  wire  _GEN_475 = unuse_way == 2'h2 ? valid_0_11 : _GEN_329; // @[i_cache.scala 100:40 23:26]
  wire  _GEN_476 = unuse_way == 2'h2 ? valid_0_12 : _GEN_330; // @[i_cache.scala 100:40 23:26]
  wire  _GEN_477 = unuse_way == 2'h2 ? valid_0_13 : _GEN_331; // @[i_cache.scala 100:40 23:26]
  wire  _GEN_478 = unuse_way == 2'h2 ? valid_0_14 : _GEN_332; // @[i_cache.scala 100:40 23:26]
  wire  _GEN_479 = unuse_way == 2'h2 ? valid_0_15 : _GEN_333; // @[i_cache.scala 100:40 23:26]
  wire [511:0] _GEN_480 = unuse_way == 2'h1 ? _GEN_94 : _GEN_432; // @[i_cache.scala 95:34]
  wire [511:0] _GEN_481 = unuse_way == 2'h1 ? _GEN_95 : _GEN_433; // @[i_cache.scala 95:34]
  wire [511:0] _GEN_482 = unuse_way == 2'h1 ? _GEN_96 : _GEN_434; // @[i_cache.scala 95:34]
  wire [511:0] _GEN_483 = unuse_way == 2'h1 ? _GEN_97 : _GEN_435; // @[i_cache.scala 95:34]
  wire [511:0] _GEN_484 = unuse_way == 2'h1 ? _GEN_98 : _GEN_436; // @[i_cache.scala 95:34]
  wire [511:0] _GEN_485 = unuse_way == 2'h1 ? _GEN_99 : _GEN_437; // @[i_cache.scala 95:34]
  wire [511:0] _GEN_486 = unuse_way == 2'h1 ? _GEN_100 : _GEN_438; // @[i_cache.scala 95:34]
  wire [511:0] _GEN_487 = unuse_way == 2'h1 ? _GEN_101 : _GEN_439; // @[i_cache.scala 95:34]
  wire [511:0] _GEN_488 = unuse_way == 2'h1 ? _GEN_102 : _GEN_440; // @[i_cache.scala 95:34]
  wire [511:0] _GEN_489 = unuse_way == 2'h1 ? _GEN_103 : _GEN_441; // @[i_cache.scala 95:34]
  wire [511:0] _GEN_490 = unuse_way == 2'h1 ? _GEN_104 : _GEN_442; // @[i_cache.scala 95:34]
  wire [511:0] _GEN_491 = unuse_way == 2'h1 ? _GEN_105 : _GEN_443; // @[i_cache.scala 95:34]
  wire [511:0] _GEN_492 = unuse_way == 2'h1 ? _GEN_106 : _GEN_444; // @[i_cache.scala 95:34]
  wire [511:0] _GEN_493 = unuse_way == 2'h1 ? _GEN_107 : _GEN_445; // @[i_cache.scala 95:34]
  wire [511:0] _GEN_494 = unuse_way == 2'h1 ? _GEN_108 : _GEN_446; // @[i_cache.scala 95:34]
  wire [511:0] _GEN_495 = unuse_way == 2'h1 ? _GEN_109 : _GEN_447; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_496 = unuse_way == 2'h1 ? _GEN_110 : _GEN_448; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_497 = unuse_way == 2'h1 ? _GEN_111 : _GEN_449; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_498 = unuse_way == 2'h1 ? _GEN_112 : _GEN_450; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_499 = unuse_way == 2'h1 ? _GEN_113 : _GEN_451; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_500 = unuse_way == 2'h1 ? _GEN_114 : _GEN_452; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_501 = unuse_way == 2'h1 ? _GEN_115 : _GEN_453; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_502 = unuse_way == 2'h1 ? _GEN_116 : _GEN_454; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_503 = unuse_way == 2'h1 ? _GEN_117 : _GEN_455; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_504 = unuse_way == 2'h1 ? _GEN_118 : _GEN_456; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_505 = unuse_way == 2'h1 ? _GEN_119 : _GEN_457; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_506 = unuse_way == 2'h1 ? _GEN_120 : _GEN_458; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_507 = unuse_way == 2'h1 ? _GEN_121 : _GEN_459; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_508 = unuse_way == 2'h1 ? _GEN_122 : _GEN_460; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_509 = unuse_way == 2'h1 ? _GEN_123 : _GEN_461; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_510 = unuse_way == 2'h1 ? _GEN_124 : _GEN_462; // @[i_cache.scala 95:34]
  wire [31:0] _GEN_511 = unuse_way == 2'h1 ? _GEN_125 : _GEN_463; // @[i_cache.scala 95:34]
  wire  _GEN_512 = unuse_way == 2'h1 ? _GEN_126 : _GEN_464; // @[i_cache.scala 95:34]
  wire  _GEN_513 = unuse_way == 2'h1 ? _GEN_127 : _GEN_465; // @[i_cache.scala 95:34]
  wire  _GEN_514 = unuse_way == 2'h1 ? _GEN_128 : _GEN_466; // @[i_cache.scala 95:34]
  wire  _GEN_515 = unuse_way == 2'h1 ? _GEN_129 : _GEN_467; // @[i_cache.scala 95:34]
  wire  _GEN_516 = unuse_way == 2'h1 ? _GEN_130 : _GEN_468; // @[i_cache.scala 95:34]
  wire  _GEN_517 = unuse_way == 2'h1 ? _GEN_131 : _GEN_469; // @[i_cache.scala 95:34]
  wire  _GEN_518 = unuse_way == 2'h1 ? _GEN_132 : _GEN_470; // @[i_cache.scala 95:34]
  wire  _GEN_519 = unuse_way == 2'h1 ? _GEN_133 : _GEN_471; // @[i_cache.scala 95:34]
  wire  _GEN_520 = unuse_way == 2'h1 ? _GEN_134 : _GEN_472; // @[i_cache.scala 95:34]
  wire  _GEN_521 = unuse_way == 2'h1 ? _GEN_135 : _GEN_473; // @[i_cache.scala 95:34]
  wire  _GEN_522 = unuse_way == 2'h1 ? _GEN_136 : _GEN_474; // @[i_cache.scala 95:34]
  wire  _GEN_523 = unuse_way == 2'h1 ? _GEN_137 : _GEN_475; // @[i_cache.scala 95:34]
  wire  _GEN_524 = unuse_way == 2'h1 ? _GEN_138 : _GEN_476; // @[i_cache.scala 95:34]
  wire  _GEN_525 = unuse_way == 2'h1 ? _GEN_139 : _GEN_477; // @[i_cache.scala 95:34]
  wire  _GEN_526 = unuse_way == 2'h1 ? _GEN_140 : _GEN_478; // @[i_cache.scala 95:34]
  wire  _GEN_527 = unuse_way == 2'h1 ? _GEN_141 : _GEN_479; // @[i_cache.scala 95:34]
  wire  _GEN_528 = unuse_way == 2'h1 | _GEN_431; // @[i_cache.scala 95:34 99:23]
  wire [511:0] _GEN_529 = unuse_way == 2'h1 ? ram_1_0 : _GEN_383; // @[i_cache.scala 20:24 95:34]
  wire [511:0] _GEN_530 = unuse_way == 2'h1 ? ram_1_1 : _GEN_384; // @[i_cache.scala 20:24 95:34]
  wire [511:0] _GEN_531 = unuse_way == 2'h1 ? ram_1_2 : _GEN_385; // @[i_cache.scala 20:24 95:34]
  wire [511:0] _GEN_532 = unuse_way == 2'h1 ? ram_1_3 : _GEN_386; // @[i_cache.scala 20:24 95:34]
  wire [511:0] _GEN_533 = unuse_way == 2'h1 ? ram_1_4 : _GEN_387; // @[i_cache.scala 20:24 95:34]
  wire [511:0] _GEN_534 = unuse_way == 2'h1 ? ram_1_5 : _GEN_388; // @[i_cache.scala 20:24 95:34]
  wire [511:0] _GEN_535 = unuse_way == 2'h1 ? ram_1_6 : _GEN_389; // @[i_cache.scala 20:24 95:34]
  wire [511:0] _GEN_536 = unuse_way == 2'h1 ? ram_1_7 : _GEN_390; // @[i_cache.scala 20:24 95:34]
  wire [511:0] _GEN_537 = unuse_way == 2'h1 ? ram_1_8 : _GEN_391; // @[i_cache.scala 20:24 95:34]
  wire [511:0] _GEN_538 = unuse_way == 2'h1 ? ram_1_9 : _GEN_392; // @[i_cache.scala 20:24 95:34]
  wire [511:0] _GEN_539 = unuse_way == 2'h1 ? ram_1_10 : _GEN_393; // @[i_cache.scala 20:24 95:34]
  wire [511:0] _GEN_540 = unuse_way == 2'h1 ? ram_1_11 : _GEN_394; // @[i_cache.scala 20:24 95:34]
  wire [511:0] _GEN_541 = unuse_way == 2'h1 ? ram_1_12 : _GEN_395; // @[i_cache.scala 20:24 95:34]
  wire [511:0] _GEN_542 = unuse_way == 2'h1 ? ram_1_13 : _GEN_396; // @[i_cache.scala 20:24 95:34]
  wire [511:0] _GEN_543 = unuse_way == 2'h1 ? ram_1_14 : _GEN_397; // @[i_cache.scala 20:24 95:34]
  wire [511:0] _GEN_544 = unuse_way == 2'h1 ? ram_1_15 : _GEN_398; // @[i_cache.scala 20:24 95:34]
  wire [31:0] _GEN_545 = unuse_way == 2'h1 ? tag_1_0 : _GEN_399; // @[i_cache.scala 22:24 95:34]
  wire [31:0] _GEN_546 = unuse_way == 2'h1 ? tag_1_1 : _GEN_400; // @[i_cache.scala 22:24 95:34]
  wire [31:0] _GEN_547 = unuse_way == 2'h1 ? tag_1_2 : _GEN_401; // @[i_cache.scala 22:24 95:34]
  wire [31:0] _GEN_548 = unuse_way == 2'h1 ? tag_1_3 : _GEN_402; // @[i_cache.scala 22:24 95:34]
  wire [31:0] _GEN_549 = unuse_way == 2'h1 ? tag_1_4 : _GEN_403; // @[i_cache.scala 22:24 95:34]
  wire [31:0] _GEN_550 = unuse_way == 2'h1 ? tag_1_5 : _GEN_404; // @[i_cache.scala 22:24 95:34]
  wire [31:0] _GEN_551 = unuse_way == 2'h1 ? tag_1_6 : _GEN_405; // @[i_cache.scala 22:24 95:34]
  wire [31:0] _GEN_552 = unuse_way == 2'h1 ? tag_1_7 : _GEN_406; // @[i_cache.scala 22:24 95:34]
  wire [31:0] _GEN_553 = unuse_way == 2'h1 ? tag_1_8 : _GEN_407; // @[i_cache.scala 22:24 95:34]
  wire [31:0] _GEN_554 = unuse_way == 2'h1 ? tag_1_9 : _GEN_408; // @[i_cache.scala 22:24 95:34]
  wire [31:0] _GEN_555 = unuse_way == 2'h1 ? tag_1_10 : _GEN_409; // @[i_cache.scala 22:24 95:34]
  wire [31:0] _GEN_556 = unuse_way == 2'h1 ? tag_1_11 : _GEN_410; // @[i_cache.scala 22:24 95:34]
  wire [31:0] _GEN_557 = unuse_way == 2'h1 ? tag_1_12 : _GEN_411; // @[i_cache.scala 22:24 95:34]
  wire [31:0] _GEN_558 = unuse_way == 2'h1 ? tag_1_13 : _GEN_412; // @[i_cache.scala 22:24 95:34]
  wire [31:0] _GEN_559 = unuse_way == 2'h1 ? tag_1_14 : _GEN_413; // @[i_cache.scala 22:24 95:34]
  wire [31:0] _GEN_560 = unuse_way == 2'h1 ? tag_1_15 : _GEN_414; // @[i_cache.scala 22:24 95:34]
  wire  _GEN_561 = unuse_way == 2'h1 ? valid_1_0 : _GEN_415; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_562 = unuse_way == 2'h1 ? valid_1_1 : _GEN_416; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_563 = unuse_way == 2'h1 ? valid_1_2 : _GEN_417; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_564 = unuse_way == 2'h1 ? valid_1_3 : _GEN_418; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_565 = unuse_way == 2'h1 ? valid_1_4 : _GEN_419; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_566 = unuse_way == 2'h1 ? valid_1_5 : _GEN_420; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_567 = unuse_way == 2'h1 ? valid_1_6 : _GEN_421; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_568 = unuse_way == 2'h1 ? valid_1_7 : _GEN_422; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_569 = unuse_way == 2'h1 ? valid_1_8 : _GEN_423; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_570 = unuse_way == 2'h1 ? valid_1_9 : _GEN_424; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_571 = unuse_way == 2'h1 ? valid_1_10 : _GEN_425; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_572 = unuse_way == 2'h1 ? valid_1_11 : _GEN_426; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_573 = unuse_way == 2'h1 ? valid_1_12 : _GEN_427; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_574 = unuse_way == 2'h1 ? valid_1_13 : _GEN_428; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_575 = unuse_way == 2'h1 ? valid_1_14 : _GEN_429; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_576 = unuse_way == 2'h1 ? valid_1_15 : _GEN_430; // @[i_cache.scala 24:26 95:34]
  wire  _GEN_577 = 3'h5 == state ? 1'h0 : valid_0_0; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_578 = 3'h5 == state ? 1'h0 : valid_0_1; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_579 = 3'h5 == state ? 1'h0 : valid_0_2; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_580 = 3'h5 == state ? 1'h0 : valid_0_3; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_581 = 3'h5 == state ? 1'h0 : valid_0_4; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_582 = 3'h5 == state ? 1'h0 : valid_0_5; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_583 = 3'h5 == state ? 1'h0 : valid_0_6; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_584 = 3'h5 == state ? 1'h0 : valid_0_7; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_585 = 3'h5 == state ? 1'h0 : valid_0_8; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_586 = 3'h5 == state ? 1'h0 : valid_0_9; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_587 = 3'h5 == state ? 1'h0 : valid_0_10; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_588 = 3'h5 == state ? 1'h0 : valid_0_11; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_589 = 3'h5 == state ? 1'h0 : valid_0_12; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_590 = 3'h5 == state ? 1'h0 : valid_0_13; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_591 = 3'h5 == state ? 1'h0 : valid_0_14; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_592 = 3'h5 == state ? 1'h0 : valid_0_15; // @[i_cache.scala 59:18 123:49 23:26]
  wire  _GEN_593 = 3'h5 == state ? 1'h0 : valid_1_0; // @[i_cache.scala 59:18 124:49 24:26]
  wire  _GEN_594 = 3'h5 == state ? 1'h0 : valid_1_1; // @[i_cache.scala 59:18 124:49 24:26]
  wire  _GEN_595 = 3'h5 == state ? 1'h0 : valid_1_2; // @[i_cache.scala 59:18 124:49 24:26]
  wire  _GEN_596 = 3'h5 == state ? 1'h0 : valid_1_3; // @[i_cache.scala 59:18 124:49 24:26]
  wire  _GEN_597 = 3'h5 == state ? 1'h0 : valid_1_4; // @[i_cache.scala 59:18 124:49 24:26]
  wire  _GEN_598 = 3'h5 == state ? 1'h0 : valid_1_5; // @[i_cache.scala 59:18 124:49 24:26]
  wire  _GEN_599 = 3'h5 == state ? 1'h0 : valid_1_6; // @[i_cache.scala 59:18 124:49 24:26]
  wire  _GEN_600 = 3'h5 == state ? 1'h0 : valid_1_7; // @[i_cache.scala 59:18 124:49 24:26]
  wire  _GEN_601 = 3'h5 == state ? 1'h0 : valid_1_8; // @[i_cache.scala 59:18 124:49 24:26]
  wire  _GEN_602 = 3'h5 == state ? 1'h0 : valid_1_9; // @[i_cache.scala 59:18 124:49 24:26]
  wire  _GEN_603 = 3'h5 == state ? 1'h0 : valid_1_10; // @[i_cache.scala 59:18 124:49 24:26]
  wire  _GEN_604 = 3'h5 == state ? 1'h0 : valid_1_11; // @[i_cache.scala 59:18 124:49 24:26]
  wire  _GEN_605 = 3'h5 == state ? 1'h0 : valid_1_12; // @[i_cache.scala 59:18 124:49 24:26]
  wire  _GEN_606 = 3'h5 == state ? 1'h0 : valid_1_13; // @[i_cache.scala 59:18 124:49 24:26]
  wire  _GEN_607 = 3'h5 == state ? 1'h0 : valid_1_14; // @[i_cache.scala 59:18 124:49 24:26]
  wire  _GEN_608 = 3'h5 == state ? 1'h0 : valid_1_15; // @[i_cache.scala 59:18 124:49 24:26]
  wire [2:0] _GEN_609 = 3'h5 == state ? 3'h0 : state; // @[i_cache.scala 125:18 59:18 57:24]
  wire [2:0] _GEN_610 = 3'h4 == state ? 3'h1 : _GEN_609; // @[i_cache.scala 59:18 120:19]
  wire  _GEN_611 = 3'h4 == state ? valid_0_0 : _GEN_577; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_612 = 3'h4 == state ? valid_0_1 : _GEN_578; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_613 = 3'h4 == state ? valid_0_2 : _GEN_579; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_614 = 3'h4 == state ? valid_0_3 : _GEN_580; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_615 = 3'h4 == state ? valid_0_4 : _GEN_581; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_616 = 3'h4 == state ? valid_0_5 : _GEN_582; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_617 = 3'h4 == state ? valid_0_6 : _GEN_583; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_618 = 3'h4 == state ? valid_0_7 : _GEN_584; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_619 = 3'h4 == state ? valid_0_8 : _GEN_585; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_620 = 3'h4 == state ? valid_0_9 : _GEN_586; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_621 = 3'h4 == state ? valid_0_10 : _GEN_587; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_622 = 3'h4 == state ? valid_0_11 : _GEN_588; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_623 = 3'h4 == state ? valid_0_12 : _GEN_589; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_624 = 3'h4 == state ? valid_0_13 : _GEN_590; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_625 = 3'h4 == state ? valid_0_14 : _GEN_591; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_626 = 3'h4 == state ? valid_0_15 : _GEN_592; // @[i_cache.scala 59:18 23:26]
  wire  _GEN_627 = 3'h4 == state ? valid_1_0 : _GEN_593; // @[i_cache.scala 59:18 24:26]
  wire  _GEN_628 = 3'h4 == state ? valid_1_1 : _GEN_594; // @[i_cache.scala 59:18 24:26]
  wire  _GEN_629 = 3'h4 == state ? valid_1_2 : _GEN_595; // @[i_cache.scala 59:18 24:26]
  wire  _GEN_630 = 3'h4 == state ? valid_1_3 : _GEN_596; // @[i_cache.scala 59:18 24:26]
  wire  _GEN_631 = 3'h4 == state ? valid_1_4 : _GEN_597; // @[i_cache.scala 59:18 24:26]
  wire  _GEN_632 = 3'h4 == state ? valid_1_5 : _GEN_598; // @[i_cache.scala 59:18 24:26]
  wire  _GEN_633 = 3'h4 == state ? valid_1_6 : _GEN_599; // @[i_cache.scala 59:18 24:26]
  wire  _GEN_634 = 3'h4 == state ? valid_1_7 : _GEN_600; // @[i_cache.scala 59:18 24:26]
  wire  _GEN_635 = 3'h4 == state ? valid_1_8 : _GEN_601; // @[i_cache.scala 59:18 24:26]
  wire  _GEN_636 = 3'h4 == state ? valid_1_9 : _GEN_602; // @[i_cache.scala 59:18 24:26]
  wire  _GEN_637 = 3'h4 == state ? valid_1_10 : _GEN_603; // @[i_cache.scala 59:18 24:26]
  wire  _GEN_638 = 3'h4 == state ? valid_1_11 : _GEN_604; // @[i_cache.scala 59:18 24:26]
  wire  _GEN_639 = 3'h4 == state ? valid_1_12 : _GEN_605; // @[i_cache.scala 59:18 24:26]
  wire  _GEN_640 = 3'h4 == state ? valid_1_13 : _GEN_606; // @[i_cache.scala 59:18 24:26]
  wire  _GEN_641 = 3'h4 == state ? valid_1_14 : _GEN_607; // @[i_cache.scala 59:18 24:26]
  wire  _GEN_642 = 3'h4 == state ? valid_1_15 : _GEN_608; // @[i_cache.scala 59:18 24:26]
  wire [2:0] _GEN_643 = 3'h3 == state ? 3'h4 : _GEN_610; // @[i_cache.scala 59:18 94:19]
  wire [511:0] _GEN_644 = 3'h3 == state ? _GEN_480 : ram_0_0; // @[i_cache.scala 59:18 19:24]
  wire [511:0] _GEN_645 = 3'h3 == state ? _GEN_481 : ram_0_1; // @[i_cache.scala 59:18 19:24]
  wire [511:0] _GEN_646 = 3'h3 == state ? _GEN_482 : ram_0_2; // @[i_cache.scala 59:18 19:24]
  wire [511:0] _GEN_647 = 3'h3 == state ? _GEN_483 : ram_0_3; // @[i_cache.scala 59:18 19:24]
  wire [511:0] _GEN_648 = 3'h3 == state ? _GEN_484 : ram_0_4; // @[i_cache.scala 59:18 19:24]
  wire [511:0] _GEN_649 = 3'h3 == state ? _GEN_485 : ram_0_5; // @[i_cache.scala 59:18 19:24]
  wire [511:0] _GEN_650 = 3'h3 == state ? _GEN_486 : ram_0_6; // @[i_cache.scala 59:18 19:24]
  wire [511:0] _GEN_651 = 3'h3 == state ? _GEN_487 : ram_0_7; // @[i_cache.scala 59:18 19:24]
  wire [511:0] _GEN_652 = 3'h3 == state ? _GEN_488 : ram_0_8; // @[i_cache.scala 59:18 19:24]
  wire [511:0] _GEN_653 = 3'h3 == state ? _GEN_489 : ram_0_9; // @[i_cache.scala 59:18 19:24]
  wire [511:0] _GEN_654 = 3'h3 == state ? _GEN_490 : ram_0_10; // @[i_cache.scala 59:18 19:24]
  wire [511:0] _GEN_655 = 3'h3 == state ? _GEN_491 : ram_0_11; // @[i_cache.scala 59:18 19:24]
  wire [511:0] _GEN_656 = 3'h3 == state ? _GEN_492 : ram_0_12; // @[i_cache.scala 59:18 19:24]
  wire [511:0] _GEN_657 = 3'h3 == state ? _GEN_493 : ram_0_13; // @[i_cache.scala 59:18 19:24]
  wire [511:0] _GEN_658 = 3'h3 == state ? _GEN_494 : ram_0_14; // @[i_cache.scala 59:18 19:24]
  wire [511:0] _GEN_659 = 3'h3 == state ? _GEN_495 : ram_0_15; // @[i_cache.scala 59:18 19:24]
  wire [31:0] _GEN_660 = 3'h3 == state ? _GEN_496 : tag_0_0; // @[i_cache.scala 59:18 21:24]
  wire [31:0] _GEN_661 = 3'h3 == state ? _GEN_497 : tag_0_1; // @[i_cache.scala 59:18 21:24]
  wire [31:0] _GEN_662 = 3'h3 == state ? _GEN_498 : tag_0_2; // @[i_cache.scala 59:18 21:24]
  wire [31:0] _GEN_663 = 3'h3 == state ? _GEN_499 : tag_0_3; // @[i_cache.scala 59:18 21:24]
  wire [31:0] _GEN_664 = 3'h3 == state ? _GEN_500 : tag_0_4; // @[i_cache.scala 59:18 21:24]
  wire [31:0] _GEN_665 = 3'h3 == state ? _GEN_501 : tag_0_5; // @[i_cache.scala 59:18 21:24]
  wire [31:0] _GEN_666 = 3'h3 == state ? _GEN_502 : tag_0_6; // @[i_cache.scala 59:18 21:24]
  wire [31:0] _GEN_667 = 3'h3 == state ? _GEN_503 : tag_0_7; // @[i_cache.scala 59:18 21:24]
  wire [31:0] _GEN_668 = 3'h3 == state ? _GEN_504 : tag_0_8; // @[i_cache.scala 59:18 21:24]
  wire [31:0] _GEN_669 = 3'h3 == state ? _GEN_505 : tag_0_9; // @[i_cache.scala 59:18 21:24]
  wire [31:0] _GEN_670 = 3'h3 == state ? _GEN_506 : tag_0_10; // @[i_cache.scala 59:18 21:24]
  wire [31:0] _GEN_671 = 3'h3 == state ? _GEN_507 : tag_0_11; // @[i_cache.scala 59:18 21:24]
  wire [31:0] _GEN_672 = 3'h3 == state ? _GEN_508 : tag_0_12; // @[i_cache.scala 59:18 21:24]
  wire [31:0] _GEN_673 = 3'h3 == state ? _GEN_509 : tag_0_13; // @[i_cache.scala 59:18 21:24]
  wire [31:0] _GEN_674 = 3'h3 == state ? _GEN_510 : tag_0_14; // @[i_cache.scala 59:18 21:24]
  wire [31:0] _GEN_675 = 3'h3 == state ? _GEN_511 : tag_0_15; // @[i_cache.scala 59:18 21:24]
  wire  _GEN_676 = 3'h3 == state ? _GEN_512 : _GEN_611; // @[i_cache.scala 59:18]
  wire  _GEN_677 = 3'h3 == state ? _GEN_513 : _GEN_612; // @[i_cache.scala 59:18]
  wire  _GEN_678 = 3'h3 == state ? _GEN_514 : _GEN_613; // @[i_cache.scala 59:18]
  wire  _GEN_679 = 3'h3 == state ? _GEN_515 : _GEN_614; // @[i_cache.scala 59:18]
  wire  _GEN_680 = 3'h3 == state ? _GEN_516 : _GEN_615; // @[i_cache.scala 59:18]
  wire  _GEN_681 = 3'h3 == state ? _GEN_517 : _GEN_616; // @[i_cache.scala 59:18]
  wire  _GEN_682 = 3'h3 == state ? _GEN_518 : _GEN_617; // @[i_cache.scala 59:18]
  wire  _GEN_683 = 3'h3 == state ? _GEN_519 : _GEN_618; // @[i_cache.scala 59:18]
  wire  _GEN_684 = 3'h3 == state ? _GEN_520 : _GEN_619; // @[i_cache.scala 59:18]
  wire  _GEN_685 = 3'h3 == state ? _GEN_521 : _GEN_620; // @[i_cache.scala 59:18]
  wire  _GEN_686 = 3'h3 == state ? _GEN_522 : _GEN_621; // @[i_cache.scala 59:18]
  wire  _GEN_687 = 3'h3 == state ? _GEN_523 : _GEN_622; // @[i_cache.scala 59:18]
  wire  _GEN_688 = 3'h3 == state ? _GEN_524 : _GEN_623; // @[i_cache.scala 59:18]
  wire  _GEN_689 = 3'h3 == state ? _GEN_525 : _GEN_624; // @[i_cache.scala 59:18]
  wire  _GEN_690 = 3'h3 == state ? _GEN_526 : _GEN_625; // @[i_cache.scala 59:18]
  wire  _GEN_691 = 3'h3 == state ? _GEN_527 : _GEN_626; // @[i_cache.scala 59:18]
  wire  _GEN_692 = 3'h3 == state ? _GEN_528 : quene; // @[i_cache.scala 59:18 31:24]
  wire [511:0] _GEN_693 = 3'h3 == state ? _GEN_529 : ram_1_0; // @[i_cache.scala 59:18 20:24]
  wire [511:0] _GEN_694 = 3'h3 == state ? _GEN_530 : ram_1_1; // @[i_cache.scala 59:18 20:24]
  wire [511:0] _GEN_695 = 3'h3 == state ? _GEN_531 : ram_1_2; // @[i_cache.scala 59:18 20:24]
  wire [511:0] _GEN_696 = 3'h3 == state ? _GEN_532 : ram_1_3; // @[i_cache.scala 59:18 20:24]
  wire [511:0] _GEN_697 = 3'h3 == state ? _GEN_533 : ram_1_4; // @[i_cache.scala 59:18 20:24]
  wire [511:0] _GEN_698 = 3'h3 == state ? _GEN_534 : ram_1_5; // @[i_cache.scala 59:18 20:24]
  wire [511:0] _GEN_699 = 3'h3 == state ? _GEN_535 : ram_1_6; // @[i_cache.scala 59:18 20:24]
  wire [511:0] _GEN_700 = 3'h3 == state ? _GEN_536 : ram_1_7; // @[i_cache.scala 59:18 20:24]
  wire [511:0] _GEN_701 = 3'h3 == state ? _GEN_537 : ram_1_8; // @[i_cache.scala 59:18 20:24]
  wire [511:0] _GEN_702 = 3'h3 == state ? _GEN_538 : ram_1_9; // @[i_cache.scala 59:18 20:24]
  wire [511:0] _GEN_703 = 3'h3 == state ? _GEN_539 : ram_1_10; // @[i_cache.scala 59:18 20:24]
  wire [511:0] _GEN_704 = 3'h3 == state ? _GEN_540 : ram_1_11; // @[i_cache.scala 59:18 20:24]
  wire [511:0] _GEN_705 = 3'h3 == state ? _GEN_541 : ram_1_12; // @[i_cache.scala 59:18 20:24]
  wire [511:0] _GEN_706 = 3'h3 == state ? _GEN_542 : ram_1_13; // @[i_cache.scala 59:18 20:24]
  wire [511:0] _GEN_707 = 3'h3 == state ? _GEN_543 : ram_1_14; // @[i_cache.scala 59:18 20:24]
  wire [511:0] _GEN_708 = 3'h3 == state ? _GEN_544 : ram_1_15; // @[i_cache.scala 59:18 20:24]
  wire [31:0] _GEN_709 = 3'h3 == state ? _GEN_545 : tag_1_0; // @[i_cache.scala 59:18 22:24]
  wire [31:0] _GEN_710 = 3'h3 == state ? _GEN_546 : tag_1_1; // @[i_cache.scala 59:18 22:24]
  wire [31:0] _GEN_711 = 3'h3 == state ? _GEN_547 : tag_1_2; // @[i_cache.scala 59:18 22:24]
  wire [31:0] _GEN_712 = 3'h3 == state ? _GEN_548 : tag_1_3; // @[i_cache.scala 59:18 22:24]
  wire [31:0] _GEN_713 = 3'h3 == state ? _GEN_549 : tag_1_4; // @[i_cache.scala 59:18 22:24]
  wire [31:0] _GEN_714 = 3'h3 == state ? _GEN_550 : tag_1_5; // @[i_cache.scala 59:18 22:24]
  wire [31:0] _GEN_715 = 3'h3 == state ? _GEN_551 : tag_1_6; // @[i_cache.scala 59:18 22:24]
  wire [31:0] _GEN_716 = 3'h3 == state ? _GEN_552 : tag_1_7; // @[i_cache.scala 59:18 22:24]
  wire [31:0] _GEN_717 = 3'h3 == state ? _GEN_553 : tag_1_8; // @[i_cache.scala 59:18 22:24]
  wire [31:0] _GEN_718 = 3'h3 == state ? _GEN_554 : tag_1_9; // @[i_cache.scala 59:18 22:24]
  wire [31:0] _GEN_719 = 3'h3 == state ? _GEN_555 : tag_1_10; // @[i_cache.scala 59:18 22:24]
  wire [31:0] _GEN_720 = 3'h3 == state ? _GEN_556 : tag_1_11; // @[i_cache.scala 59:18 22:24]
  wire [31:0] _GEN_721 = 3'h3 == state ? _GEN_557 : tag_1_12; // @[i_cache.scala 59:18 22:24]
  wire [31:0] _GEN_722 = 3'h3 == state ? _GEN_558 : tag_1_13; // @[i_cache.scala 59:18 22:24]
  wire [31:0] _GEN_723 = 3'h3 == state ? _GEN_559 : tag_1_14; // @[i_cache.scala 59:18 22:24]
  wire [31:0] _GEN_724 = 3'h3 == state ? _GEN_560 : tag_1_15; // @[i_cache.scala 59:18 22:24]
  wire  _GEN_725 = 3'h3 == state ? _GEN_561 : _GEN_627; // @[i_cache.scala 59:18]
  wire  _GEN_726 = 3'h3 == state ? _GEN_562 : _GEN_628; // @[i_cache.scala 59:18]
  wire  _GEN_727 = 3'h3 == state ? _GEN_563 : _GEN_629; // @[i_cache.scala 59:18]
  wire  _GEN_728 = 3'h3 == state ? _GEN_564 : _GEN_630; // @[i_cache.scala 59:18]
  wire  _GEN_729 = 3'h3 == state ? _GEN_565 : _GEN_631; // @[i_cache.scala 59:18]
  wire  _GEN_730 = 3'h3 == state ? _GEN_566 : _GEN_632; // @[i_cache.scala 59:18]
  wire  _GEN_731 = 3'h3 == state ? _GEN_567 : _GEN_633; // @[i_cache.scala 59:18]
  wire  _GEN_732 = 3'h3 == state ? _GEN_568 : _GEN_634; // @[i_cache.scala 59:18]
  wire  _GEN_733 = 3'h3 == state ? _GEN_569 : _GEN_635; // @[i_cache.scala 59:18]
  wire  _GEN_734 = 3'h3 == state ? _GEN_570 : _GEN_636; // @[i_cache.scala 59:18]
  wire  _GEN_735 = 3'h3 == state ? _GEN_571 : _GEN_637; // @[i_cache.scala 59:18]
  wire  _GEN_736 = 3'h3 == state ? _GEN_572 : _GEN_638; // @[i_cache.scala 59:18]
  wire  _GEN_737 = 3'h3 == state ? _GEN_573 : _GEN_639; // @[i_cache.scala 59:18]
  wire  _GEN_738 = 3'h3 == state ? _GEN_574 : _GEN_640; // @[i_cache.scala 59:18]
  wire  _GEN_739 = 3'h3 == state ? _GEN_575 : _GEN_641; // @[i_cache.scala 59:18]
  wire  _GEN_740 = 3'h3 == state ? _GEN_576 : _GEN_642; // @[i_cache.scala 59:18]
  wire [511:0] _GEN_1063 = 4'h1 == index ? ram_0_1 : ram_0_0; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1064 = 4'h2 == index ? ram_0_2 : _GEN_1063; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1065 = 4'h3 == index ? ram_0_3 : _GEN_1064; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1066 = 4'h4 == index ? ram_0_4 : _GEN_1065; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1067 = 4'h5 == index ? ram_0_5 : _GEN_1066; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1068 = 4'h6 == index ? ram_0_6 : _GEN_1067; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1069 = 4'h7 == index ? ram_0_7 : _GEN_1068; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1070 = 4'h8 == index ? ram_0_8 : _GEN_1069; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1071 = 4'h9 == index ? ram_0_9 : _GEN_1070; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1072 = 4'ha == index ? ram_0_10 : _GEN_1071; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1073 = 4'hb == index ? ram_0_11 : _GEN_1072; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1074 = 4'hc == index ? ram_0_12 : _GEN_1073; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1075 = 4'hd == index ? ram_0_13 : _GEN_1074; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1076 = 4'he == index ? ram_0_14 : _GEN_1075; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1077 = 4'hf == index ? ram_0_15 : _GEN_1076; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _io_to_ifu_rdata_T = _GEN_1077 >> shift_bit; // @[i_cache.scala 170:49]
  wire [511:0] _GEN_1079 = 4'h1 == index ? ram_1_1 : ram_1_0; // @[i_cache.scala 179:{49,49}]
  wire [511:0] _GEN_1080 = 4'h2 == index ? ram_1_2 : _GEN_1079; // @[i_cache.scala 179:{49,49}]
  wire [511:0] _GEN_1081 = 4'h3 == index ? ram_1_3 : _GEN_1080; // @[i_cache.scala 179:{49,49}]
  wire [511:0] _GEN_1082 = 4'h4 == index ? ram_1_4 : _GEN_1081; // @[i_cache.scala 179:{49,49}]
  wire [511:0] _GEN_1083 = 4'h5 == index ? ram_1_5 : _GEN_1082; // @[i_cache.scala 179:{49,49}]
  wire [511:0] _GEN_1084 = 4'h6 == index ? ram_1_6 : _GEN_1083; // @[i_cache.scala 179:{49,49}]
  wire [511:0] _GEN_1085 = 4'h7 == index ? ram_1_7 : _GEN_1084; // @[i_cache.scala 179:{49,49}]
  wire [511:0] _GEN_1086 = 4'h8 == index ? ram_1_8 : _GEN_1085; // @[i_cache.scala 179:{49,49}]
  wire [511:0] _GEN_1087 = 4'h9 == index ? ram_1_9 : _GEN_1086; // @[i_cache.scala 179:{49,49}]
  wire [511:0] _GEN_1088 = 4'ha == index ? ram_1_10 : _GEN_1087; // @[i_cache.scala 179:{49,49}]
  wire [511:0] _GEN_1089 = 4'hb == index ? ram_1_11 : _GEN_1088; // @[i_cache.scala 179:{49,49}]
  wire [511:0] _GEN_1090 = 4'hc == index ? ram_1_12 : _GEN_1089; // @[i_cache.scala 179:{49,49}]
  wire [511:0] _GEN_1091 = 4'hd == index ? ram_1_13 : _GEN_1090; // @[i_cache.scala 179:{49,49}]
  wire [511:0] _GEN_1092 = 4'he == index ? ram_1_14 : _GEN_1091; // @[i_cache.scala 179:{49,49}]
  wire [511:0] _GEN_1093 = 4'hf == index ? ram_1_15 : _GEN_1092; // @[i_cache.scala 179:{49,49}]
  wire [511:0] _io_to_ifu_rdata_T_1 = _GEN_1093 >> shift_bit; // @[i_cache.scala 179:49]
  wire [511:0] _GEN_1094 = way1_hit ? _io_to_ifu_rdata_T_1 : 512'h0; // @[i_cache.scala 178:33 179:33 187:33]
  wire [511:0] _GEN_1098 = way0_hit ? _io_to_ifu_rdata_T : _GEN_1094; // @[i_cache.scala 169:23 170:33]
  wire  _GEN_1100 = way0_hit | way1_hit; // @[i_cache.scala 169:23 172:34]
  wire  _T_18 = state == 3'h2; // @[i_cache.scala 195:21]
  wire [63:0] _GEN_1176 = {{32'd0}, io_from_ifu_araddr}; // @[i_cache.scala 204:49]
  wire [63:0] _io_to_axi_araddr_T = _GEN_1176 & 64'hffffffffffffffc0; // @[i_cache.scala 204:49]
  wire [63:0] _GEN_1104 = state == 3'h2 ? _io_to_axi_araddr_T : {{32'd0}, io_from_ifu_araddr}; // @[i_cache.scala 195:29 204:26 244:26]
  wire [2:0] _GEN_1105 = state == 3'h2 ? 3'h7 : 3'h0; // @[i_cache.scala 195:29 205:25 246:25]
  wire [63:0] _GEN_1109 = state == 3'h1 ? {{32'd0}, io_from_ifu_araddr} : _GEN_1104; // @[i_cache.scala 152:25 154:26]
  wire [2:0] _GEN_1110 = state == 3'h1 ? 3'h0 : _GEN_1105; // @[i_cache.scala 152:25 155:25]
  wire [511:0] _GEN_1114 = state == 3'h1 ? _GEN_1098 : 512'h0; // @[i_cache.scala 152:25]
  assign io_to_ifu_rdata = _GEN_1114[63:0];
  assign io_to_ifu_rlast = state == 3'h1 & _GEN_1100; // @[i_cache.scala 152:25]
  assign io_to_ifu_rvalid = state == 3'h1 & _GEN_1100; // @[i_cache.scala 152:25]
  assign io_to_axi_araddr = _GEN_1109[31:0];
  assign io_to_axi_arlen = {{5'd0}, _GEN_1110};
  assign io_to_axi_arvalid = state == 3'h1 ? 1'h0 : _T_18; // @[i_cache.scala 152:25 153:27]
  assign io_to_axi_rready = state == 3'h1 ? 1'h0 : io_from_ifu_rready; // @[i_cache.scala 152:25 158:26]
  assign io_cache_init = state == 3'h5; // @[i_cache.scala 260:27]
  always @(posedge clock) begin
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_0 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_0 <= _GEN_644;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_1 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_1 <= _GEN_645;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_2 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_2 <= _GEN_646;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_3 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_3 <= _GEN_647;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_4 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_4 <= _GEN_648;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_5 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_5 <= _GEN_649;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_6 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_6 <= _GEN_650;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_7 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_7 <= _GEN_651;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_8 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_8 <= _GEN_652;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_9 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_9 <= _GEN_653;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_10 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_10 <= _GEN_654;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_11 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_11 <= _GEN_655;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_12 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_12 <= _GEN_656;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_13 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_13 <= _GEN_657;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_14 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_14 <= _GEN_658;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_15 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_0_15 <= _GEN_659;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_0 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_0 <= _GEN_693;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_1 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_1 <= _GEN_694;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_2 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_2 <= _GEN_695;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_3 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_3 <= _GEN_696;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_4 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_4 <= _GEN_697;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_5 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_5 <= _GEN_698;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_6 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_6 <= _GEN_699;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_7 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_7 <= _GEN_700;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_8 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_8 <= _GEN_701;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_9 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_9 <= _GEN_702;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_10 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_10 <= _GEN_703;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_11 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_11 <= _GEN_704;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_12 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_12 <= _GEN_705;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_13 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_13 <= _GEN_706;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_14 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_14 <= _GEN_707;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_15 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          ram_1_15 <= _GEN_708;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_0 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_0 <= _GEN_660;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_1 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_1 <= _GEN_661;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_2 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_2 <= _GEN_662;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_3 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_3 <= _GEN_663;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_4 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_4 <= _GEN_664;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_5 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_5 <= _GEN_665;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_6 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_6 <= _GEN_666;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_7 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_7 <= _GEN_667;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_8 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_8 <= _GEN_668;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_9 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_9 <= _GEN_669;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_10 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_10 <= _GEN_670;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_11 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_11 <= _GEN_671;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_12 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_12 <= _GEN_672;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_13 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_13 <= _GEN_673;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_14 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_14 <= _GEN_674;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_15 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_0_15 <= _GEN_675;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_0 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_0 <= _GEN_709;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_1 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_1 <= _GEN_710;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_2 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_2 <= _GEN_711;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_3 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_3 <= _GEN_712;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_4 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_4 <= _GEN_713;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_5 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_5 <= _GEN_714;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_6 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_6 <= _GEN_715;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_7 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_7 <= _GEN_716;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_8 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_8 <= _GEN_717;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_9 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_9 <= _GEN_718;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_10 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_10 <= _GEN_719;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_11 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_11 <= _GEN_720;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_12 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_12 <= _GEN_721;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_13 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_13 <= _GEN_722;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_14 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_14 <= _GEN_723;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_15 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          tag_1_15 <= _GEN_724;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_0 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_0 <= _GEN_676;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_1 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_1 <= _GEN_677;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_2 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_2 <= _GEN_678;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_3 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_3 <= _GEN_679;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_4 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_4 <= _GEN_680;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_5 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_5 <= _GEN_681;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_6 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_6 <= _GEN_682;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_7 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_7 <= _GEN_683;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_8 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_8 <= _GEN_684;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_9 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_9 <= _GEN_685;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_10 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_10 <= _GEN_686;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_11 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_11 <= _GEN_687;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_12 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_12 <= _GEN_688;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_13 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_13 <= _GEN_689;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_14 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_14 <= _GEN_690;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_15 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_0_15 <= _GEN_691;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_0 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_0 <= _GEN_725;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_1 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_1 <= _GEN_726;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_2 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_2 <= _GEN_727;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_3 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_3 <= _GEN_728;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_4 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_4 <= _GEN_729;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_5 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_5 <= _GEN_730;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_6 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_6 <= _GEN_731;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_7 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_7 <= _GEN_732;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_8 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_8 <= _GEN_733;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_9 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_9 <= _GEN_734;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_10 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_10 <= _GEN_735;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_11 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_11 <= _GEN_736;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_12 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_12 <= _GEN_737;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_13 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_13 <= _GEN_738;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_14 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_14 <= _GEN_739;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_15 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          valid_1_15 <= _GEN_740;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 25:27]
      way0_hit <= 1'h0; // @[i_cache.scala 25:27]
    end else begin
      way0_hit <= _T_2;
    end
    if (reset) begin // @[i_cache.scala 26:27]
      way1_hit <= 1'h0; // @[i_cache.scala 26:27]
    end else begin
      way1_hit <= _T_5;
    end
    if (reset) begin // @[i_cache.scala 28:28]
      unuse_way <= 2'h0; // @[i_cache.scala 28:28]
    end else if (~_GEN_31) begin // @[i_cache.scala 49:31]
      unuse_way <= 2'h1; // @[i_cache.scala 50:19]
    end else if (~_GEN_64) begin // @[i_cache.scala 51:37]
      unuse_way <= 2'h2; // @[i_cache.scala 52:19]
    end else begin
      unuse_way <= 2'h0; // @[i_cache.scala 54:19]
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_0 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (3'h2 == state) begin // @[i_cache.scala 59:18]
          receive_data_0 <= _GEN_84;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_1 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (3'h2 == state) begin // @[i_cache.scala 59:18]
          receive_data_1 <= _GEN_85;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_2 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (3'h2 == state) begin // @[i_cache.scala 59:18]
          receive_data_2 <= _GEN_86;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_3 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (3'h2 == state) begin // @[i_cache.scala 59:18]
          receive_data_3 <= _GEN_87;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_4 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (3'h2 == state) begin // @[i_cache.scala 59:18]
          receive_data_4 <= _GEN_88;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_5 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (3'h2 == state) begin // @[i_cache.scala 59:18]
          receive_data_5 <= _GEN_89;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_6 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (3'h2 == state) begin // @[i_cache.scala 59:18]
          receive_data_6 <= _GEN_90;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_7 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (3'h2 == state) begin // @[i_cache.scala 59:18]
          receive_data_7 <= _GEN_91;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 30:30]
      receive_num <= 3'h0; // @[i_cache.scala 30:30]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (3'h1 == state) begin // @[i_cache.scala 59:18]
        if (!(way0_hit)) begin // @[i_cache.scala 69:27]
          receive_num <= _GEN_72;
        end
      end else if (3'h2 == state) begin // @[i_cache.scala 59:18]
        receive_num <= _GEN_92;
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene <= 1'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 59:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 59:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 59:18]
          quene <= _GEN_692;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 57:24]
      state <= 3'h0; // @[i_cache.scala 57:24]
    end else if (3'h0 == state) begin // @[i_cache.scala 59:18]
      if (io_clear_cache) begin // @[i_cache.scala 61:33]
        state <= 3'h5; // @[i_cache.scala 62:23]
      end else if (io_from_ifu_arvalid) begin // @[i_cache.scala 63:44]
        state <= 3'h1; // @[i_cache.scala 64:23]
      end
    end else if (3'h1 == state) begin // @[i_cache.scala 59:18]
      if (way0_hit) begin // @[i_cache.scala 69:27]
        state <= _GEN_70;
      end else begin
        state <= _GEN_71;
      end
    end else if (3'h2 == state) begin // @[i_cache.scala 59:18]
      state <= _GEN_93;
    end else begin
      state <= _GEN_643;
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
  way0_hit = _RAND_96[0:0];
  _RAND_97 = {1{`RANDOM}};
  way1_hit = _RAND_97[0:0];
  _RAND_98 = {1{`RANDOM}};
  unuse_way = _RAND_98[1:0];
  _RAND_99 = {2{`RANDOM}};
  receive_data_0 = _RAND_99[63:0];
  _RAND_100 = {2{`RANDOM}};
  receive_data_1 = _RAND_100[63:0];
  _RAND_101 = {2{`RANDOM}};
  receive_data_2 = _RAND_101[63:0];
  _RAND_102 = {2{`RANDOM}};
  receive_data_3 = _RAND_102[63:0];
  _RAND_103 = {2{`RANDOM}};
  receive_data_4 = _RAND_103[63:0];
  _RAND_104 = {2{`RANDOM}};
  receive_data_5 = _RAND_104[63:0];
  _RAND_105 = {2{`RANDOM}};
  receive_data_6 = _RAND_105[63:0];
  _RAND_106 = {2{`RANDOM}};
  receive_data_7 = _RAND_106[63:0];
  _RAND_107 = {1{`RANDOM}};
  receive_num = _RAND_107[2:0];
  _RAND_108 = {1{`RANDOM}};
  quene = _RAND_108[0:0];
  _RAND_109 = {1{`RANDOM}};
  state = _RAND_109[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
