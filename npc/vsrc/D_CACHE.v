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
`ifdef RANDOMIZE_MEM_INIT
  reg [511:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [511:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  reg [511:0] cacheLine [0:63]; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_1_en; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_MPORT_1_addr; // @[d_cache.scala 24:24]
  wire [511:0] cacheLine_MPORT_1_data; // @[d_cache.scala 24:24]
  wire  cacheLine_write_back_data_MPORT_en; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_write_back_data_MPORT_addr; // @[d_cache.scala 24:24]
  wire [511:0] cacheLine_write_back_data_MPORT_data; // @[d_cache.scala 24:24]
  wire  cacheLine_io_to_lsu_rdata_MPORT_en; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_io_to_lsu_rdata_MPORT_addr; // @[d_cache.scala 24:24]
  wire [511:0] cacheLine_io_to_lsu_rdata_MPORT_data; // @[d_cache.scala 24:24]
  wire [511:0] cacheLine_MPORT_data; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_MPORT_addr; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_mask; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_en; // @[d_cache.scala 24:24]
  wire [511:0] cacheLine_MPORT_3_data; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_MPORT_3_addr; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_3_mask; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_3_en; // @[d_cache.scala 24:24]
  wire [511:0] cacheLine_MPORT_6_data; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_MPORT_6_addr; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_6_mask; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_6_en; // @[d_cache.scala 24:24]
  reg  validMem [0:63]; // @[d_cache.scala 25:23]
  wire  validMem_valid_0_MPORT_en; // @[d_cache.scala 25:23]
  wire [5:0] validMem_valid_0_MPORT_addr; // @[d_cache.scala 25:23]
  wire  validMem_valid_0_MPORT_data; // @[d_cache.scala 25:23]
  wire  validMem_valid_1_MPORT_en; // @[d_cache.scala 25:23]
  wire [5:0] validMem_valid_1_MPORT_addr; // @[d_cache.scala 25:23]
  wire  validMem_valid_1_MPORT_data; // @[d_cache.scala 25:23]
  wire  validMem_valid_2_MPORT_en; // @[d_cache.scala 25:23]
  wire [5:0] validMem_valid_2_MPORT_addr; // @[d_cache.scala 25:23]
  wire  validMem_valid_2_MPORT_data; // @[d_cache.scala 25:23]
  wire  validMem_valid_3_MPORT_en; // @[d_cache.scala 25:23]
  wire [5:0] validMem_valid_3_MPORT_addr; // @[d_cache.scala 25:23]
  wire  validMem_valid_3_MPORT_data; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_5_data; // @[d_cache.scala 25:23]
  wire [5:0] validMem_MPORT_5_addr; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_5_mask; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_5_en; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_8_data; // @[d_cache.scala 25:23]
  wire [5:0] validMem_MPORT_8_addr; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_8_mask; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_8_en; // @[d_cache.scala 25:23]
  reg [31:0] tagMem [0:63]; // @[d_cache.scala 28:21]
  wire  tagMem_tagMatch_0_MPORT_en; // @[d_cache.scala 28:21]
  wire [5:0] tagMem_tagMatch_0_MPORT_addr; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_tagMatch_0_MPORT_data; // @[d_cache.scala 28:21]
  wire  tagMem_tagMatch_1_MPORT_en; // @[d_cache.scala 28:21]
  wire [5:0] tagMem_tagMatch_1_MPORT_addr; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_tagMatch_1_MPORT_data; // @[d_cache.scala 28:21]
  wire  tagMem_tagMatch_2_MPORT_en; // @[d_cache.scala 28:21]
  wire [5:0] tagMem_tagMatch_2_MPORT_addr; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_tagMatch_2_MPORT_data; // @[d_cache.scala 28:21]
  wire  tagMem_tagMatch_3_MPORT_en; // @[d_cache.scala 28:21]
  wire [5:0] tagMem_tagMatch_3_MPORT_addr; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_tagMatch_3_MPORT_data; // @[d_cache.scala 28:21]
  wire  tagMem_write_back_addr_MPORT_en; // @[d_cache.scala 28:21]
  wire [5:0] tagMem_write_back_addr_MPORT_addr; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_write_back_addr_MPORT_data; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_MPORT_4_data; // @[d_cache.scala 28:21]
  wire [5:0] tagMem_MPORT_4_addr; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_4_mask; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_4_en; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_MPORT_7_data; // @[d_cache.scala 28:21]
  wire [5:0] tagMem_MPORT_7_addr; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_7_mask; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_7_en; // @[d_cache.scala 28:21]
  reg  dirtyMem [0:63]; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_9_en; // @[d_cache.scala 29:23]
  wire [5:0] dirtyMem_MPORT_9_addr; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_9_data; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_2_data; // @[d_cache.scala 29:23]
  wire [5:0] dirtyMem_MPORT_2_addr; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_2_mask; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_2_en; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_10_data; // @[d_cache.scala 29:23]
  wire [5:0] dirtyMem_MPORT_10_addr; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_10_mask; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_10_en; // @[d_cache.scala 29:23]
  wire [5:0] offset = io_from_lsu_araddr[5:0]; // @[d_cache.scala 20:36]
  wire [3:0] index = io_from_lsu_araddr[9:6]; // @[d_cache.scala 21:35]
  wire [21:0] tag = io_from_lsu_araddr[31:10]; // @[d_cache.scala 22:33]
  wire [7:0] _GEN_455 = {{4'd0}, index}; // @[d_cache.scala 41:48]
  wire [8:0] _valid_0_T_1 = {{1'd0}, _GEN_455}; // @[d_cache.scala 41:48]
  wire [7:0] _valid_1_T_2 = 8'h10 + _GEN_455; // @[d_cache.scala 41:48]
  wire [8:0] _GEN_459 = {{5'd0}, index}; // @[d_cache.scala 41:48]
  wire [8:0] _valid_2_T_2 = 9'h20 + _GEN_459; // @[d_cache.scala 41:48]
  wire [8:0] _valid_3_T_2 = 9'h30 + _GEN_459; // @[d_cache.scala 41:48]
  wire  valid_0 = validMem_valid_0_MPORT_data; // @[d_cache.scala 39:21 41:18]
  wire  valid_1 = validMem_valid_1_MPORT_data; // @[d_cache.scala 39:21 41:18]
  wire  valid_2 = validMem_valid_2_MPORT_data; // @[d_cache.scala 39:21 41:18]
  wire  valid_3 = validMem_valid_3_MPORT_data; // @[d_cache.scala 39:21 41:18]
  wire  allvalid = valid_0 & valid_1 & valid_2 & valid_3; // @[d_cache.scala 43:35]
  wire  _foundUnvalidIndex_T = ~valid_0; // @[d_cache.scala 45:10]
  wire  _foundUnvalidIndex_T_1 = ~valid_1; // @[d_cache.scala 46:10]
  wire  _foundUnvalidIndex_T_2 = ~valid_2; // @[d_cache.scala 47:10]
  wire  _foundUnvalidIndex_T_3 = ~valid_3; // @[d_cache.scala 48:10]
  wire [1:0] _foundUnvalidIndex_T_4 = _foundUnvalidIndex_T_3 ? 2'h3 : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] _foundUnvalidIndex_T_5 = _foundUnvalidIndex_T_2 ? 2'h2 : _foundUnvalidIndex_T_4; // @[Mux.scala 101:16]
  wire [1:0] _foundUnvalidIndex_T_6 = _foundUnvalidIndex_T_1 ? 2'h1 : _foundUnvalidIndex_T_5; // @[Mux.scala 101:16]
  wire [1:0] foundUnvalidIndex = _foundUnvalidIndex_T ? 2'h0 : _foundUnvalidIndex_T_6; // @[Mux.scala 101:16]
  wire [5:0] _GEN_464 = {foundUnvalidIndex, 4'h0}; // @[d_cache.scala 50:43]
  wire [8:0] _unvalidIndex_T = {{3'd0}, _GEN_464}; // @[d_cache.scala 50:43]
  wire [8:0] unvalidIndex = _unvalidIndex_T + _GEN_459; // @[d_cache.scala 50:51]
  wire [31:0] _GEN_471 = {{10'd0}, tag}; // @[d_cache.scala 55:71]
  wire  tagMatch_0 = valid_0 & tagMem_tagMatch_0_MPORT_data == _GEN_471; // @[d_cache.scala 55:33]
  wire  tagMatch_1 = valid_1 & tagMem_tagMatch_1_MPORT_data == _GEN_471; // @[d_cache.scala 55:33]
  wire  tagMatch_2 = valid_2 & tagMem_tagMatch_2_MPORT_data == _GEN_471; // @[d_cache.scala 55:33]
  wire  tagMatch_3 = valid_3 & tagMem_tagMatch_3_MPORT_data == _GEN_471; // @[d_cache.scala 55:33]
  wire  anyMatch = tagMatch_0 | tagMatch_1 | tagMatch_2 | tagMatch_3; // @[d_cache.scala 57:38]
  wire [1:0] _foundtagIndex_T = tagMatch_3 ? 2'h3 : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] _foundtagIndex_T_1 = tagMatch_2 ? 2'h2 : _foundtagIndex_T; // @[Mux.scala 101:16]
  wire [1:0] _foundtagIndex_T_2 = tagMatch_1 ? 2'h1 : _foundtagIndex_T_1; // @[Mux.scala 101:16]
  wire [1:0] foundtagIndex = tagMatch_0 ? 2'h0 : _foundtagIndex_T_2; // @[Mux.scala 101:16]
  wire [5:0] _GEN_489 = {foundtagIndex, 4'h0}; // @[d_cache.scala 64:35]
  wire [8:0] _tagIndex_T = {{3'd0}, _GEN_489}; // @[d_cache.scala 64:35]
  wire [8:0] tagIndex = _tagIndex_T + _GEN_459; // @[d_cache.scala 64:43]
  reg [511:0] write_back_data; // @[d_cache.scala 70:34]
  reg [31:0] write_back_addr; // @[d_cache.scala 71:34]
  reg [63:0] receive_data_0; // @[d_cache.scala 75:31]
  reg [63:0] receive_data_1; // @[d_cache.scala 75:31]
  reg [63:0] receive_data_2; // @[d_cache.scala 75:31]
  reg [63:0] receive_data_3; // @[d_cache.scala 75:31]
  reg [63:0] receive_data_4; // @[d_cache.scala 75:31]
  reg [63:0] receive_data_5; // @[d_cache.scala 75:31]
  reg [63:0] receive_data_6; // @[d_cache.scala 75:31]
  reg [63:0] receive_data_7; // @[d_cache.scala 75:31]
  reg [2:0] receive_num; // @[d_cache.scala 76:30]
  reg [7:0] quene_0; // @[d_cache.scala 77:24]
  reg [7:0] quene_1; // @[d_cache.scala 77:24]
  reg [7:0] quene_2; // @[d_cache.scala 77:24]
  reg [7:0] quene_3; // @[d_cache.scala 77:24]
  reg [7:0] quene_4; // @[d_cache.scala 77:24]
  reg [7:0] quene_5; // @[d_cache.scala 77:24]
  reg [7:0] quene_6; // @[d_cache.scala 77:24]
  reg [7:0] quene_7; // @[d_cache.scala 77:24]
  reg [7:0] quene_8; // @[d_cache.scala 77:24]
  reg [7:0] quene_9; // @[d_cache.scala 77:24]
  reg [7:0] quene_10; // @[d_cache.scala 77:24]
  reg [7:0] quene_11; // @[d_cache.scala 77:24]
  reg [7:0] quene_12; // @[d_cache.scala 77:24]
  reg [7:0] quene_13; // @[d_cache.scala 77:24]
  reg [7:0] quene_14; // @[d_cache.scala 77:24]
  reg [7:0] quene_15; // @[d_cache.scala 77:24]
  wire [7:0] _GEN_1 = 4'h1 == index ? quene_1 : quene_0; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_2 = 4'h2 == index ? quene_2 : _GEN_1; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_3 = 4'h3 == index ? quene_3 : _GEN_2; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_4 = 4'h4 == index ? quene_4 : _GEN_3; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_5 = 4'h5 == index ? quene_5 : _GEN_4; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_6 = 4'h6 == index ? quene_6 : _GEN_5; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_7 = 4'h7 == index ? quene_7 : _GEN_6; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_8 = 4'h8 == index ? quene_8 : _GEN_7; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_9 = 4'h9 == index ? quene_9 : _GEN_8; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_10 = 4'ha == index ? quene_10 : _GEN_9; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_11 = 4'hb == index ? quene_11 : _GEN_10; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_12 = 4'hc == index ? quene_12 : _GEN_11; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_13 = 4'hd == index ? quene_13 : _GEN_12; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_14 = 4'he == index ? quene_14 : _GEN_13; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_15 = 4'hf == index ? quene_15 : _GEN_14; // @[d_cache.scala 79:{35,35}]
  wire [1:0] replace_way = _GEN_15[7:6]; // @[d_cache.scala 79:35]
  wire [5:0] _GEN_495 = {replace_way, 4'h0}; // @[d_cache.scala 80:34]
  wire [8:0] _replaceIndex_T = {{3'd0}, _GEN_495}; // @[d_cache.scala 80:34]
  wire [8:0] _replaceIndex_T_2 = _replaceIndex_T + _GEN_459; // @[d_cache.scala 80:42]
  wire [8:0] shift_bit = {offset, 3'h0}; // @[d_cache.scala 82:28]
  wire [63:0] _wmask_T_4 = io_from_lsu_wstrb == 8'hff ? 64'hffffffffffffffff : 64'h0; // @[d_cache.scala 88:20]
  wire [63:0] _wmask_T_5 = io_from_lsu_wstrb == 8'hf ? 64'hffffffff : _wmask_T_4; // @[d_cache.scala 87:20]
  wire [63:0] _wmask_T_6 = io_from_lsu_wstrb == 8'h3 ? 64'hffff : _wmask_T_5; // @[d_cache.scala 86:20]
  wire [63:0] wmask = io_from_lsu_wstrb == 8'h1 ? 64'hff : _wmask_T_6; // @[d_cache.scala 85:20]
  reg [2:0] state; // @[d_cache.scala 95:24]
  wire  _T = 3'h0 == state; // @[d_cache.scala 101:18]
  wire  _T_3 = (io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000; // @[d_cache.scala 103:60]
  wire [2:0] _GEN_16 = io_from_lsu_awvalid ? 3'h2 : state; // @[d_cache.scala 107:44 108:23 95:24]
  wire [63:0] _T_7 = io_from_lsu_wdata & wmask; // @[d_cache.scala 127:60]
  wire [574:0] _GEN_521 = {{511'd0}, _T_7}; // @[d_cache.scala 127:69]
  wire [574:0] _T_8 = _GEN_521 << shift_bit; // @[d_cache.scala 127:69]
  wire [574:0] _GEN_525 = {{511'd0}, wmask}; // @[d_cache.scala 127:116]
  wire [574:0] _T_10 = _GEN_525 << shift_bit; // @[d_cache.scala 127:116]
  wire [574:0] _T_11 = ~_T_10; // @[d_cache.scala 127:108]
  wire [574:0] _GEN_502 = {{63'd0}, cacheLine_MPORT_1_data}; // @[d_cache.scala 127:106]
  wire [574:0] _T_12 = _GEN_502 & _T_11; // @[d_cache.scala 127:106]
  wire [574:0] _T_13 = _T_8 | _T_12; // @[d_cache.scala 127:83]
  wire [2:0] _GEN_23 = anyMatch ? 3'h0 : 3'h4; // @[d_cache.scala 122:27 131:23]
  wire [63:0] _GEN_31 = 3'h0 == receive_num ? io_from_axi_rdata : receive_data_0; // @[d_cache.scala 136:{43,43} 75:31]
  wire [63:0] _GEN_32 = 3'h1 == receive_num ? io_from_axi_rdata : receive_data_1; // @[d_cache.scala 136:{43,43} 75:31]
  wire [63:0] _GEN_33 = 3'h2 == receive_num ? io_from_axi_rdata : receive_data_2; // @[d_cache.scala 136:{43,43} 75:31]
  wire [63:0] _GEN_34 = 3'h3 == receive_num ? io_from_axi_rdata : receive_data_3; // @[d_cache.scala 136:{43,43} 75:31]
  wire [63:0] _GEN_35 = 3'h4 == receive_num ? io_from_axi_rdata : receive_data_4; // @[d_cache.scala 136:{43,43} 75:31]
  wire [63:0] _GEN_36 = 3'h5 == receive_num ? io_from_axi_rdata : receive_data_5; // @[d_cache.scala 136:{43,43} 75:31]
  wire [63:0] _GEN_37 = 3'h6 == receive_num ? io_from_axi_rdata : receive_data_6; // @[d_cache.scala 136:{43,43} 75:31]
  wire [63:0] _GEN_38 = 3'h7 == receive_num ? io_from_axi_rdata : receive_data_7; // @[d_cache.scala 136:{43,43} 75:31]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[d_cache.scala 137:44]
  wire [2:0] _GEN_39 = io_from_axi_rlast ? 3'h5 : state; // @[d_cache.scala 138:40 139:27 95:24]
  wire [63:0] _GEN_40 = io_from_axi_rvalid ? _GEN_31 : receive_data_0; // @[d_cache.scala 135:37 75:31]
  wire [63:0] _GEN_41 = io_from_axi_rvalid ? _GEN_32 : receive_data_1; // @[d_cache.scala 135:37 75:31]
  wire [63:0] _GEN_42 = io_from_axi_rvalid ? _GEN_33 : receive_data_2; // @[d_cache.scala 135:37 75:31]
  wire [63:0] _GEN_43 = io_from_axi_rvalid ? _GEN_34 : receive_data_3; // @[d_cache.scala 135:37 75:31]
  wire [63:0] _GEN_44 = io_from_axi_rvalid ? _GEN_35 : receive_data_4; // @[d_cache.scala 135:37 75:31]
  wire [63:0] _GEN_45 = io_from_axi_rvalid ? _GEN_36 : receive_data_5; // @[d_cache.scala 135:37 75:31]
  wire [63:0] _GEN_46 = io_from_axi_rvalid ? _GEN_37 : receive_data_6; // @[d_cache.scala 135:37 75:31]
  wire [63:0] _GEN_47 = io_from_axi_rvalid ? _GEN_38 : receive_data_7; // @[d_cache.scala 135:37 75:31]
  wire [2:0] _GEN_48 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[d_cache.scala 135:37 137:29 76:30]
  wire [2:0] _GEN_49 = io_from_axi_rvalid ? _GEN_39 : state; // @[d_cache.scala 135:37 95:24]
  wire [2:0] _GEN_50 = io_from_axi_bvalid ? 3'h0 : state; // @[d_cache.scala 144:59 145:23 95:24]
  wire  _T_19 = ~allvalid; // @[d_cache.scala 149:18]
  wire [255:0] lo = {receive_data_3,receive_data_2,receive_data_1,receive_data_0}; // @[Cat.scala 31:58]
  wire [255:0] hi = {receive_data_7,receive_data_6,receive_data_5,receive_data_4}; // @[Cat.scala 31:58]
  wire [9:0] _GEN_504 = {_GEN_15, 2'h0}; // @[d_cache.scala 157:46]
  wire [10:0] _quene_T = {{1'd0}, _GEN_504}; // @[d_cache.scala 157:46]
  wire [10:0] _GEN_505 = {{9'd0}, foundUnvalidIndex}; // @[d_cache.scala 157:53]
  wire [10:0] _quene_T_1 = _quene_T | _GEN_505; // @[d_cache.scala 157:53]
  wire [7:0] _GEN_51 = 4'h0 == index ? _quene_T_1[7:0] : quene_0; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_52 = 4'h1 == index ? _quene_T_1[7:0] : quene_1; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_53 = 4'h2 == index ? _quene_T_1[7:0] : quene_2; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_54 = 4'h3 == index ? _quene_T_1[7:0] : quene_3; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_55 = 4'h4 == index ? _quene_T_1[7:0] : quene_4; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_56 = 4'h5 == index ? _quene_T_1[7:0] : quene_5; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_57 = 4'h6 == index ? _quene_T_1[7:0] : quene_6; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_58 = 4'h7 == index ? _quene_T_1[7:0] : quene_7; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_59 = 4'h8 == index ? _quene_T_1[7:0] : quene_8; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_60 = 4'h9 == index ? _quene_T_1[7:0] : quene_9; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_61 = 4'ha == index ? _quene_T_1[7:0] : quene_10; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_62 = 4'hb == index ? _quene_T_1[7:0] : quene_11; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_63 = 4'hc == index ? _quene_T_1[7:0] : quene_12; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_64 = 4'hd == index ? _quene_T_1[7:0] : quene_13; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_65 = 4'he == index ? _quene_T_1[7:0] : quene_14; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_66 = 4'hf == index ? _quene_T_1[7:0] : quene_15; // @[d_cache.scala 157:{30,30} 77:24]
  wire [31:0] replaceIndex = {{23'd0}, _replaceIndex_T_2}; // @[d_cache.scala 66:28 80:18]
  wire [10:0] _GEN_511 = {{9'd0}, replace_way}; // @[d_cache.scala 162:53]
  wire [10:0] _quene_T_3 = _quene_T | _GEN_511; // @[d_cache.scala 162:53]
  wire [7:0] _GEN_67 = 4'h0 == index ? _quene_T_3[7:0] : quene_0; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_68 = 4'h1 == index ? _quene_T_3[7:0] : quene_1; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_69 = 4'h2 == index ? _quene_T_3[7:0] : quene_2; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_70 = 4'h3 == index ? _quene_T_3[7:0] : quene_3; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_71 = 4'h4 == index ? _quene_T_3[7:0] : quene_4; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_72 = 4'h5 == index ? _quene_T_3[7:0] : quene_5; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_73 = 4'h6 == index ? _quene_T_3[7:0] : quene_6; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_74 = 4'h7 == index ? _quene_T_3[7:0] : quene_7; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_75 = 4'h8 == index ? _quene_T_3[7:0] : quene_8; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_76 = 4'h9 == index ? _quene_T_3[7:0] : quene_9; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_77 = 4'ha == index ? _quene_T_3[7:0] : quene_10; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_78 = 4'hb == index ? _quene_T_3[7:0] : quene_11; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_79 = 4'hc == index ? _quene_T_3[7:0] : quene_12; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_80 = 4'hd == index ? _quene_T_3[7:0] : quene_13; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_81 = 4'he == index ? _quene_T_3[7:0] : quene_14; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_82 = 4'hf == index ? _quene_T_3[7:0] : quene_15; // @[d_cache.scala 162:{30,30} 77:24]
  wire  _T_29 = dirtyMem_MPORT_9_data; // @[d_cache.scala 163:44]
  wire [41:0] _write_back_addr_T_2 = {tagMem_write_back_addr_MPORT_data,index,6'h0}; // @[Cat.scala 31:58]
  wire [511:0] _GEN_86 = dirtyMem_MPORT_9_data ? cacheLine_write_back_data_MPORT_data : write_back_data; // @[d_cache.scala 163:51 165:37 70:34]
  wire [41:0] _GEN_88 = dirtyMem_MPORT_9_data ? _write_back_addr_T_2 : {{10'd0}, write_back_addr}; // @[d_cache.scala 163:51 166:37 71:34]
  wire [2:0] _GEN_92 = dirtyMem_MPORT_9_data ? 3'h6 : 3'h1; // @[d_cache.scala 163:51 168:27 170:27]
  wire [2:0] _GEN_93 = ~allvalid ? 3'h1 : _GEN_92; // @[d_cache.scala 149:28 150:23]
  wire [7:0] _GEN_102 = ~allvalid ? _GEN_51 : _GEN_67; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_103 = ~allvalid ? _GEN_52 : _GEN_68; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_104 = ~allvalid ? _GEN_53 : _GEN_69; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_105 = ~allvalid ? _GEN_54 : _GEN_70; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_106 = ~allvalid ? _GEN_55 : _GEN_71; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_107 = ~allvalid ? _GEN_56 : _GEN_72; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_108 = ~allvalid ? _GEN_57 : _GEN_73; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_109 = ~allvalid ? _GEN_58 : _GEN_74; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_110 = ~allvalid ? _GEN_59 : _GEN_75; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_111 = ~allvalid ? _GEN_60 : _GEN_76; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_112 = ~allvalid ? _GEN_61 : _GEN_77; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_113 = ~allvalid ? _GEN_62 : _GEN_78; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_114 = ~allvalid ? _GEN_63 : _GEN_79; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_115 = ~allvalid ? _GEN_64 : _GEN_80; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_116 = ~allvalid ? _GEN_65 : _GEN_81; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_117 = ~allvalid ? _GEN_66 : _GEN_82; // @[d_cache.scala 149:28]
  wire  _GEN_120 = ~allvalid ? 1'h0 : 1'h1; // @[d_cache.scala 149:28 24:24 159:26]
  wire  _GEN_129 = ~allvalid ? 1'h0 : _T_29; // @[d_cache.scala 149:28 24:24]
  wire [511:0] _GEN_130 = ~allvalid ? write_back_data : _GEN_86; // @[d_cache.scala 149:28 70:34]
  wire [41:0] _GEN_132 = ~allvalid ? {{10'd0}, write_back_addr} : _GEN_88; // @[d_cache.scala 149:28 71:34]
  wire [511:0] _write_back_data_T_1 = {{64'd0}, write_back_data[511:64]}; // @[d_cache.scala 176:52]
  wire [511:0] _GEN_136 = io_from_axi_wready ? _write_back_data_T_1 : write_back_data; // @[d_cache.scala 175:37 176:33 70:34]
  wire [2:0] _GEN_137 = io_from_axi_bvalid ? 3'h1 : state; // @[d_cache.scala 178:37 179:23 95:24]
  wire [511:0] _GEN_138 = 3'h6 == state ? _GEN_136 : write_back_data; // @[d_cache.scala 101:18 70:34]
  wire [2:0] _GEN_139 = 3'h6 == state ? _GEN_137 : state; // @[d_cache.scala 101:18 95:24]
  wire [2:0] _GEN_140 = 3'h5 == state ? _GEN_93 : _GEN_139; // @[d_cache.scala 101:18]
  wire [7:0] _GEN_149 = 3'h5 == state ? _GEN_102 : quene_0; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_150 = 3'h5 == state ? _GEN_103 : quene_1; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_151 = 3'h5 == state ? _GEN_104 : quene_2; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_152 = 3'h5 == state ? _GEN_105 : quene_3; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_153 = 3'h5 == state ? _GEN_106 : quene_4; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_154 = 3'h5 == state ? _GEN_107 : quene_5; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_155 = 3'h5 == state ? _GEN_108 : quene_6; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_156 = 3'h5 == state ? _GEN_109 : quene_7; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_157 = 3'h5 == state ? _GEN_110 : quene_8; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_158 = 3'h5 == state ? _GEN_111 : quene_9; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_159 = 3'h5 == state ? _GEN_112 : quene_10; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_160 = 3'h5 == state ? _GEN_113 : quene_11; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_161 = 3'h5 == state ? _GEN_114 : quene_12; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_162 = 3'h5 == state ? _GEN_115 : quene_13; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_163 = 3'h5 == state ? _GEN_116 : quene_14; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_164 = 3'h5 == state ? _GEN_117 : quene_15; // @[d_cache.scala 101:18 77:24]
  wire [511:0] _GEN_177 = 3'h5 == state ? _GEN_130 : _GEN_138; // @[d_cache.scala 101:18]
  wire [41:0] _GEN_179 = 3'h5 == state ? _GEN_132 : {{10'd0}, write_back_addr}; // @[d_cache.scala 101:18 71:34]
  wire [2:0] _GEN_183 = 3'h4 == state ? _GEN_50 : _GEN_140; // @[d_cache.scala 101:18]
  wire  _GEN_186 = 3'h4 == state ? 1'h0 : 3'h5 == state & _T_19; // @[d_cache.scala 101:18 24:24]
  wire [7:0] _GEN_192 = 3'h4 == state ? quene_0 : _GEN_149; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_193 = 3'h4 == state ? quene_1 : _GEN_150; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_194 = 3'h4 == state ? quene_2 : _GEN_151; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_195 = 3'h4 == state ? quene_3 : _GEN_152; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_196 = 3'h4 == state ? quene_4 : _GEN_153; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_197 = 3'h4 == state ? quene_5 : _GEN_154; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_198 = 3'h4 == state ? quene_6 : _GEN_155; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_199 = 3'h4 == state ? quene_7 : _GEN_156; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_200 = 3'h4 == state ? quene_8 : _GEN_157; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_201 = 3'h4 == state ? quene_9 : _GEN_158; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_202 = 3'h4 == state ? quene_10 : _GEN_159; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_203 = 3'h4 == state ? quene_11 : _GEN_160; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_204 = 3'h4 == state ? quene_12 : _GEN_161; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_205 = 3'h4 == state ? quene_13 : _GEN_162; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_206 = 3'h4 == state ? quene_14 : _GEN_163; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_207 = 3'h4 == state ? quene_15 : _GEN_164; // @[d_cache.scala 101:18 77:24]
  wire  _GEN_210 = 3'h4 == state ? 1'h0 : 3'h5 == state & _GEN_120; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_219 = 3'h4 == state ? 1'h0 : 3'h5 == state & _GEN_129; // @[d_cache.scala 101:18 24:24]
  wire [511:0] _GEN_220 = 3'h4 == state ? write_back_data : _GEN_177; // @[d_cache.scala 101:18 70:34]
  wire [41:0] _GEN_222 = 3'h4 == state ? {{10'd0}, write_back_addr} : _GEN_179; // @[d_cache.scala 101:18 71:34]
  wire [63:0] _GEN_226 = 3'h3 == state ? _GEN_40 : receive_data_0; // @[d_cache.scala 101:18 75:31]
  wire [63:0] _GEN_227 = 3'h3 == state ? _GEN_41 : receive_data_1; // @[d_cache.scala 101:18 75:31]
  wire [63:0] _GEN_228 = 3'h3 == state ? _GEN_42 : receive_data_2; // @[d_cache.scala 101:18 75:31]
  wire [63:0] _GEN_229 = 3'h3 == state ? _GEN_43 : receive_data_3; // @[d_cache.scala 101:18 75:31]
  wire [63:0] _GEN_230 = 3'h3 == state ? _GEN_44 : receive_data_4; // @[d_cache.scala 101:18 75:31]
  wire [63:0] _GEN_231 = 3'h3 == state ? _GEN_45 : receive_data_5; // @[d_cache.scala 101:18 75:31]
  wire [63:0] _GEN_232 = 3'h3 == state ? _GEN_46 : receive_data_6; // @[d_cache.scala 101:18 75:31]
  wire [63:0] _GEN_233 = 3'h3 == state ? _GEN_47 : receive_data_7; // @[d_cache.scala 101:18 75:31]
  wire [2:0] _GEN_234 = 3'h3 == state ? _GEN_48 : receive_num; // @[d_cache.scala 101:18 76:30]
  wire [2:0] _GEN_235 = 3'h3 == state ? _GEN_49 : _GEN_183; // @[d_cache.scala 101:18]
  wire  _GEN_238 = 3'h3 == state ? 1'h0 : _GEN_186; // @[d_cache.scala 101:18 24:24]
  wire [7:0] _GEN_244 = 3'h3 == state ? quene_0 : _GEN_192; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_245 = 3'h3 == state ? quene_1 : _GEN_193; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_246 = 3'h3 == state ? quene_2 : _GEN_194; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_247 = 3'h3 == state ? quene_3 : _GEN_195; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_248 = 3'h3 == state ? quene_4 : _GEN_196; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_249 = 3'h3 == state ? quene_5 : _GEN_197; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_250 = 3'h3 == state ? quene_6 : _GEN_198; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_251 = 3'h3 == state ? quene_7 : _GEN_199; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_252 = 3'h3 == state ? quene_8 : _GEN_200; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_253 = 3'h3 == state ? quene_9 : _GEN_201; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_254 = 3'h3 == state ? quene_10 : _GEN_202; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_255 = 3'h3 == state ? quene_11 : _GEN_203; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_256 = 3'h3 == state ? quene_12 : _GEN_204; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_257 = 3'h3 == state ? quene_13 : _GEN_205; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_258 = 3'h3 == state ? quene_14 : _GEN_206; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_259 = 3'h3 == state ? quene_15 : _GEN_207; // @[d_cache.scala 101:18 77:24]
  wire  _GEN_262 = 3'h3 == state ? 1'h0 : _GEN_210; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_271 = 3'h3 == state ? 1'h0 : _GEN_219; // @[d_cache.scala 101:18 24:24]
  wire [511:0] _GEN_272 = 3'h3 == state ? write_back_data : _GEN_220; // @[d_cache.scala 101:18 70:34]
  wire [41:0] _GEN_274 = 3'h3 == state ? {{10'd0}, write_back_addr} : _GEN_222; // @[d_cache.scala 101:18 71:34]
  wire  _GEN_297 = 3'h2 == state ? 1'h0 : _GEN_238; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_321 = 3'h2 == state ? 1'h0 : _GEN_262; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_330 = 3'h2 == state ? 1'h0 : _GEN_271; // @[d_cache.scala 101:18 24:24]
  wire [41:0] _GEN_333 = 3'h2 == state ? {{10'd0}, write_back_addr} : _GEN_274; // @[d_cache.scala 101:18 71:34]
  wire  _GEN_341 = 3'h1 == state ? 1'h0 : 3'h2 == state & anyMatch; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_356 = 3'h1 == state ? 1'h0 : _GEN_297; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_380 = 3'h1 == state ? 1'h0 : _GEN_321; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_389 = 3'h1 == state ? 1'h0 : _GEN_330; // @[d_cache.scala 101:18 24:24]
  wire [41:0] _GEN_392 = 3'h1 == state ? {{10'd0}, write_back_addr} : _GEN_333; // @[d_cache.scala 101:18 71:34]
  wire [41:0] _GEN_451 = 3'h0 == state ? {{10'd0}, write_back_addr} : _GEN_392; // @[d_cache.scala 101:18 71:34]
  wire [511:0] _io_to_lsu_rdata_T_1 = cacheLine_io_to_lsu_rdata_MPORT_data >> shift_bit; // @[d_cache.scala 201:48]
  wire [63:0] _GEN_517 = {{32'd0}, io_from_lsu_araddr}; // @[d_cache.scala 242:49]
  wire [63:0] _io_to_axi_araddr_T = _GEN_517 & 64'hffffffffffffffc0; // @[d_cache.scala 242:49]
  wire  _T_41 = state == 3'h0 & _T_3; // @[d_cache.scala 307:27]
  wire [63:0] _GEN_456 = state == 3'h0 & _T_3 ? io_from_axi_rdata : 64'h0; // @[d_cache.scala 307:117 308:23 311:29]
  wire  _GEN_458 = state == 3'h0 & _T_3 & io_from_axi_rvalid; // @[d_cache.scala 307:117 308:23 313:30]
  wire  _GEN_461 = state == 3'h0 & _T_3 & io_from_axi_bvalid; // @[d_cache.scala 307:117 308:23 316:30]
  wire  _GEN_466 = state == 3'h0 & _T_3 & io_from_lsu_arvalid; // @[d_cache.scala 307:117 309:23 318:31]
  wire [31:0] _GEN_468 = state == 3'h0 & _T_3 ? io_from_lsu_awaddr : 32'h0; // @[d_cache.scala 307:117 309:23 324:30]
  wire  _GEN_472 = state == 3'h0 & _T_3 & io_from_lsu_awvalid; // @[d_cache.scala 307:117 309:23 325:31]
  wire [63:0] _GEN_473 = state == 3'h0 & _T_3 ? io_from_lsu_wdata : 64'h0; // @[d_cache.scala 307:117 309:23 329:29]
  wire [7:0] _GEN_474 = state == 3'h0 & _T_3 ? io_from_lsu_wstrb : 8'h0; // @[d_cache.scala 307:117 309:23 330:29]
  wire  _GEN_476 = state == 3'h0 & _T_3 & io_from_lsu_wvalid; // @[d_cache.scala 307:117 309:23 332:30]
  wire [63:0] _GEN_478 = state == 3'h6 ? 64'h0 : _GEN_456; // @[d_cache.scala 282:35 283:25]
  wire  _GEN_480 = state == 3'h6 ? 1'h0 : _GEN_458; // @[d_cache.scala 282:35 285:26]
  wire  _GEN_483 = state == 3'h6 ? 1'h0 : _GEN_461; // @[d_cache.scala 282:35 288:26]
  wire  _GEN_485 = state == 3'h6 ? 1'h0 : _GEN_466; // @[d_cache.scala 282:35 290:27]
  wire [31:0] _GEN_486 = state == 3'h6 ? 32'h0 : io_from_lsu_araddr; // @[d_cache.scala 282:35 291:26]
  wire  _GEN_490 = state == 3'h6 ? 1'h0 : 1'h1; // @[d_cache.scala 282:35 295:26]
  wire [31:0] _GEN_491 = state == 3'h6 ? write_back_addr : _GEN_468; // @[d_cache.scala 282:35 296:26]
  wire  _GEN_492 = state == 3'h6 | _GEN_472; // @[d_cache.scala 282:35 297:27]
  wire [7:0] _GEN_493 = state == 3'h6 ? 8'h7 : 8'h0; // @[d_cache.scala 282:35 298:25]
  wire [63:0] _GEN_496 = state == 3'h6 ? write_back_data[63:0] : _GEN_473; // @[d_cache.scala 282:35 301:25]
  wire [7:0] _GEN_497 = state == 3'h6 ? 8'hff : _GEN_474; // @[d_cache.scala 282:35 302:25]
  wire  _GEN_499 = state == 3'h6 | _GEN_476; // @[d_cache.scala 282:35 304:26]
  wire  _GEN_500 = state == 3'h6 | _T_41; // @[d_cache.scala 282:35 305:26]
  wire [63:0] _GEN_501 = state == 3'h4 ? 64'h0 : _GEN_478; // @[d_cache.scala 257:31 258:25]
  wire  _GEN_503 = state == 3'h4 ? 1'h0 : _GEN_480; // @[d_cache.scala 257:31 260:26]
  wire  _GEN_506 = state == 3'h4 ? io_from_axi_bvalid : _GEN_483; // @[d_cache.scala 257:31 263:26]
  wire  _GEN_508 = state == 3'h4 ? 1'h0 : _GEN_485; // @[d_cache.scala 257:31 265:27]
  wire [31:0] _GEN_509 = state == 3'h4 ? 32'h0 : _GEN_486; // @[d_cache.scala 257:31 266:26]
  wire  _GEN_513 = state == 3'h4 | _GEN_490; // @[d_cache.scala 257:31 270:26]
  wire [31:0] _GEN_514 = state == 3'h4 ? io_from_lsu_awaddr : _GEN_491; // @[d_cache.scala 257:31 271:26]
  wire  _GEN_515 = state == 3'h4 ? io_from_lsu_awvalid : _GEN_492; // @[d_cache.scala 257:31 272:27]
  wire [7:0] _GEN_516 = state == 3'h4 ? 8'h0 : _GEN_493; // @[d_cache.scala 257:31 273:25]
  wire [63:0] _GEN_519 = state == 3'h4 ? io_from_lsu_wdata : _GEN_496; // @[d_cache.scala 257:31 276:25]
  wire [7:0] _GEN_520 = state == 3'h4 ? io_from_lsu_wstrb : _GEN_497; // @[d_cache.scala 257:31 277:25]
  wire  _GEN_522 = state == 3'h4 ? io_from_lsu_wvalid : _GEN_499; // @[d_cache.scala 257:31 279:26]
  wire  _GEN_523 = state == 3'h4 | _GEN_500; // @[d_cache.scala 257:31 280:26]
  wire [63:0] _GEN_524 = state == 3'h3 ? 64'h0 : _GEN_501; // @[d_cache.scala 233:31 234:25]
  wire  _GEN_526 = state == 3'h3 ? 1'h0 : _GEN_503; // @[d_cache.scala 233:31 236:26]
  wire  _GEN_529 = state == 3'h3 ? 1'h0 : _GEN_506; // @[d_cache.scala 233:31 239:26]
  wire  _GEN_531 = state == 3'h3 | _GEN_508; // @[d_cache.scala 233:31 241:27]
  wire [63:0] _GEN_532 = state == 3'h3 ? _io_to_axi_araddr_T : {{32'd0}, _GEN_509}; // @[d_cache.scala 233:31 242:26]
  wire [7:0] _GEN_533 = state == 3'h3 ? 8'h7 : 8'h0; // @[d_cache.scala 233:31 243:25]
  wire  _GEN_536 = state == 3'h3 | _GEN_513; // @[d_cache.scala 233:31 246:26]
  wire [31:0] _GEN_537 = state == 3'h3 ? 32'h0 : _GEN_514; // @[d_cache.scala 233:31 247:26]
  wire  _GEN_538 = state == 3'h3 ? 1'h0 : _GEN_515; // @[d_cache.scala 233:31 248:27]
  wire [7:0] _GEN_539 = state == 3'h3 ? 8'h0 : _GEN_516; // @[d_cache.scala 233:31 249:25]
  wire [63:0] _GEN_542 = state == 3'h3 ? 64'h0 : _GEN_519; // @[d_cache.scala 233:31 252:25]
  wire [7:0] _GEN_543 = state == 3'h3 ? 8'h0 : _GEN_520; // @[d_cache.scala 233:31 253:25]
  wire  _GEN_545 = state == 3'h3 ? 1'h0 : _GEN_522; // @[d_cache.scala 233:31 255:26]
  wire  _GEN_546 = state == 3'h3 ? 1'h0 : _GEN_523; // @[d_cache.scala 233:31 256:26]
  wire  _GEN_547 = state == 3'h2 ? 1'h0 : _GEN_531; // @[d_cache.scala 209:33 210:27]
  wire [63:0] _GEN_548 = state == 3'h2 ? {{32'd0}, io_from_lsu_araddr} : _GEN_532; // @[d_cache.scala 209:33 211:26]
  wire [7:0] _GEN_549 = state == 3'h2 ? 8'h0 : _GEN_533; // @[d_cache.scala 209:33 212:25]
  wire  _GEN_552 = state == 3'h2 ? 1'h0 : _GEN_536; // @[d_cache.scala 209:33 215:26]
  wire [31:0] _GEN_553 = state == 3'h2 ? 32'h0 : _GEN_537; // @[d_cache.scala 209:33 216:26]
  wire  _GEN_554 = state == 3'h2 ? 1'h0 : _GEN_538; // @[d_cache.scala 209:33 217:27]
  wire [7:0] _GEN_555 = state == 3'h2 ? 8'h0 : _GEN_539; // @[d_cache.scala 209:33 218:25]
  wire [63:0] _GEN_558 = state == 3'h2 ? 64'h0 : _GEN_542; // @[d_cache.scala 209:33 221:25]
  wire [7:0] _GEN_559 = state == 3'h2 ? 8'h0 : _GEN_543; // @[d_cache.scala 209:33 222:25]
  wire  _GEN_561 = state == 3'h2 ? 1'h0 : _GEN_545; // @[d_cache.scala 209:33 224:26]
  wire  _GEN_562 = state == 3'h2 ? 1'h0 : _GEN_546; // @[d_cache.scala 209:33 225:26]
  wire [63:0] _GEN_563 = state == 3'h2 ? 64'h0 : _GEN_524; // @[d_cache.scala 209:33 226:25]
  wire  _GEN_565 = state == 3'h2 ? 1'h0 : _GEN_526; // @[d_cache.scala 209:33 228:26]
  wire  _GEN_569 = state == 3'h2 ? anyMatch : _GEN_529; // @[d_cache.scala 209:33 232:26]
  wire [63:0] _GEN_571 = state == 3'h1 ? {{32'd0}, io_from_lsu_araddr} : _GEN_548; // @[d_cache.scala 184:27 186:26]
  wire [511:0] _GEN_589 = state == 3'h1 ? _io_to_lsu_rdata_T_1 : {{448'd0}, _GEN_563}; // @[d_cache.scala 184:27 201:25]
  wire [41:0] _GEN_518 = reset ? 42'h0 : _GEN_451; // @[d_cache.scala 71:{34,34}]
  assign cacheLine_MPORT_1_en = _T ? 1'h0 : _GEN_341;
  assign cacheLine_MPORT_1_addr = tagIndex[5:0];
  assign cacheLine_MPORT_1_data = cacheLine[cacheLine_MPORT_1_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_write_back_data_MPORT_en = _T ? 1'h0 : _GEN_389;
  assign cacheLine_write_back_data_MPORT_addr = replaceIndex[5:0];
  assign cacheLine_write_back_data_MPORT_data = cacheLine[cacheLine_write_back_data_MPORT_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_io_to_lsu_rdata_MPORT_en = state == 3'h1;
  assign cacheLine_io_to_lsu_rdata_MPORT_addr = tagIndex[5:0];
  assign cacheLine_io_to_lsu_rdata_MPORT_data = cacheLine[cacheLine_io_to_lsu_rdata_MPORT_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_MPORT_data = _T_13[511:0];
  assign cacheLine_MPORT_addr = tagIndex[5:0];
  assign cacheLine_MPORT_mask = 1'h1;
  assign cacheLine_MPORT_en = _T ? 1'h0 : _GEN_341;
  assign cacheLine_MPORT_3_data = {hi,lo};
  assign cacheLine_MPORT_3_addr = unvalidIndex[5:0];
  assign cacheLine_MPORT_3_mask = 1'h1;
  assign cacheLine_MPORT_3_en = _T ? 1'h0 : _GEN_356;
  assign cacheLine_MPORT_6_data = {hi,lo};
  assign cacheLine_MPORT_6_addr = replaceIndex[5:0];
  assign cacheLine_MPORT_6_mask = 1'h1;
  assign cacheLine_MPORT_6_en = _T ? 1'h0 : _GEN_380;
  assign validMem_valid_0_MPORT_en = 1'h1;
  assign validMem_valid_0_MPORT_addr = _valid_0_T_1[5:0];
  assign validMem_valid_0_MPORT_data = validMem[validMem_valid_0_MPORT_addr]; // @[d_cache.scala 25:23]
  assign validMem_valid_1_MPORT_en = 1'h1;
  assign validMem_valid_1_MPORT_addr = _valid_1_T_2[5:0];
  assign validMem_valid_1_MPORT_data = validMem[validMem_valid_1_MPORT_addr]; // @[d_cache.scala 25:23]
  assign validMem_valid_2_MPORT_en = 1'h1;
  assign validMem_valid_2_MPORT_addr = _valid_2_T_2[5:0];
  assign validMem_valid_2_MPORT_data = validMem[validMem_valid_2_MPORT_addr]; // @[d_cache.scala 25:23]
  assign validMem_valid_3_MPORT_en = 1'h1;
  assign validMem_valid_3_MPORT_addr = _valid_3_T_2[5:0];
  assign validMem_valid_3_MPORT_data = validMem[validMem_valid_3_MPORT_addr]; // @[d_cache.scala 25:23]
  assign validMem_MPORT_5_data = 1'h1;
  assign validMem_MPORT_5_addr = unvalidIndex[5:0];
  assign validMem_MPORT_5_mask = 1'h1;
  assign validMem_MPORT_5_en = _T ? 1'h0 : _GEN_356;
  assign validMem_MPORT_8_data = 1'h1;
  assign validMem_MPORT_8_addr = replaceIndex[5:0];
  assign validMem_MPORT_8_mask = 1'h1;
  assign validMem_MPORT_8_en = _T ? 1'h0 : _GEN_380;
  assign tagMem_tagMatch_0_MPORT_en = 1'h1;
  assign tagMem_tagMatch_0_MPORT_addr = _valid_0_T_1[5:0];
  assign tagMem_tagMatch_0_MPORT_data = tagMem[tagMem_tagMatch_0_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_tagMatch_1_MPORT_en = 1'h1;
  assign tagMem_tagMatch_1_MPORT_addr = _valid_1_T_2[5:0];
  assign tagMem_tagMatch_1_MPORT_data = tagMem[tagMem_tagMatch_1_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_tagMatch_2_MPORT_en = 1'h1;
  assign tagMem_tagMatch_2_MPORT_addr = _valid_2_T_2[5:0];
  assign tagMem_tagMatch_2_MPORT_data = tagMem[tagMem_tagMatch_2_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_tagMatch_3_MPORT_en = 1'h1;
  assign tagMem_tagMatch_3_MPORT_addr = _valid_3_T_2[5:0];
  assign tagMem_tagMatch_3_MPORT_data = tagMem[tagMem_tagMatch_3_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_write_back_addr_MPORT_en = _T ? 1'h0 : _GEN_389;
  assign tagMem_write_back_addr_MPORT_addr = replaceIndex[5:0];
  assign tagMem_write_back_addr_MPORT_data = tagMem[tagMem_write_back_addr_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_MPORT_4_data = {{10'd0}, tag};
  assign tagMem_MPORT_4_addr = unvalidIndex[5:0];
  assign tagMem_MPORT_4_mask = 1'h1;
  assign tagMem_MPORT_4_en = _T ? 1'h0 : _GEN_356;
  assign tagMem_MPORT_7_data = {{10'd0}, tag};
  assign tagMem_MPORT_7_addr = replaceIndex[5:0];
  assign tagMem_MPORT_7_mask = 1'h1;
  assign tagMem_MPORT_7_en = _T ? 1'h0 : _GEN_380;
  assign dirtyMem_MPORT_9_en = _T ? 1'h0 : _GEN_380;
  assign dirtyMem_MPORT_9_addr = replaceIndex[5:0];
  assign dirtyMem_MPORT_9_data = dirtyMem[dirtyMem_MPORT_9_addr]; // @[d_cache.scala 29:23]
  assign dirtyMem_MPORT_2_data = 1'h1;
  assign dirtyMem_MPORT_2_addr = tagIndex[5:0];
  assign dirtyMem_MPORT_2_mask = 1'h1;
  assign dirtyMem_MPORT_2_en = _T ? 1'h0 : _GEN_341;
  assign dirtyMem_MPORT_10_data = 1'h0;
  assign dirtyMem_MPORT_10_addr = replaceIndex[5:0];
  assign dirtyMem_MPORT_10_mask = 1'h1;
  assign dirtyMem_MPORT_10_en = _T ? 1'h0 : _GEN_389;
  assign io_to_lsu_rdata = _GEN_589[63:0];
  assign io_to_lsu_rvalid = state == 3'h1 ? anyMatch : _GEN_565; // @[d_cache.scala 184:27 203:26]
  assign io_to_lsu_bvalid = state == 3'h1 ? 1'h0 : _GEN_569; // @[d_cache.scala 184:27 207:26]
  assign io_to_axi_araddr = _GEN_571[31:0];
  assign io_to_axi_arlen = state == 3'h1 ? 8'h0 : _GEN_549; // @[d_cache.scala 184:27 187:25]
  assign io_to_axi_arvalid = state == 3'h1 ? 1'h0 : _GEN_547; // @[d_cache.scala 184:27 185:27]
  assign io_to_axi_rready = state == 3'h1 ? 1'h0 : _GEN_552; // @[d_cache.scala 184:27 190:26]
  assign io_to_axi_awaddr = state == 3'h1 ? 32'h0 : _GEN_553; // @[d_cache.scala 184:27 191:26]
  assign io_to_axi_awlen = state == 3'h1 ? 8'h0 : _GEN_555; // @[d_cache.scala 184:27 193:25]
  assign io_to_axi_awvalid = state == 3'h1 ? 1'h0 : _GEN_554; // @[d_cache.scala 184:27 192:27]
  assign io_to_axi_wdata = state == 3'h1 ? 64'h0 : _GEN_558; // @[d_cache.scala 184:27 196:25]
  assign io_to_axi_wstrb = state == 3'h1 ? 8'h0 : _GEN_559; // @[d_cache.scala 184:27 197:25]
  assign io_to_axi_wvalid = state == 3'h1 ? 1'h0 : _GEN_561; // @[d_cache.scala 184:27 199:26]
  assign io_to_axi_bready = state == 3'h1 ? 1'h0 : _GEN_562; // @[d_cache.scala 184:27 200:26]
  always @(posedge clock) begin
    if (cacheLine_MPORT_en & cacheLine_MPORT_mask) begin
      cacheLine[cacheLine_MPORT_addr] <= cacheLine_MPORT_data; // @[d_cache.scala 24:24]
    end
    if (cacheLine_MPORT_3_en & cacheLine_MPORT_3_mask) begin
      cacheLine[cacheLine_MPORT_3_addr] <= cacheLine_MPORT_3_data; // @[d_cache.scala 24:24]
    end
    if (cacheLine_MPORT_6_en & cacheLine_MPORT_6_mask) begin
      cacheLine[cacheLine_MPORT_6_addr] <= cacheLine_MPORT_6_data; // @[d_cache.scala 24:24]
    end
    if (validMem_MPORT_5_en & validMem_MPORT_5_mask) begin
      validMem[validMem_MPORT_5_addr] <= validMem_MPORT_5_data; // @[d_cache.scala 25:23]
    end
    if (validMem_MPORT_8_en & validMem_MPORT_8_mask) begin
      validMem[validMem_MPORT_8_addr] <= validMem_MPORT_8_data; // @[d_cache.scala 25:23]
    end
    if (tagMem_MPORT_4_en & tagMem_MPORT_4_mask) begin
      tagMem[tagMem_MPORT_4_addr] <= tagMem_MPORT_4_data; // @[d_cache.scala 28:21]
    end
    if (tagMem_MPORT_7_en & tagMem_MPORT_7_mask) begin
      tagMem[tagMem_MPORT_7_addr] <= tagMem_MPORT_7_data; // @[d_cache.scala 28:21]
    end
    if (dirtyMem_MPORT_2_en & dirtyMem_MPORT_2_mask) begin
      dirtyMem[dirtyMem_MPORT_2_addr] <= dirtyMem_MPORT_2_data; // @[d_cache.scala 29:23]
    end
    if (dirtyMem_MPORT_10_en & dirtyMem_MPORT_10_mask) begin
      dirtyMem[dirtyMem_MPORT_10_addr] <= dirtyMem_MPORT_10_data; // @[d_cache.scala 29:23]
    end
    if (reset) begin // @[d_cache.scala 70:34]
      write_back_data <= 512'h0; // @[d_cache.scala 70:34]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          write_back_data <= _GEN_272;
        end
      end
    end
    write_back_addr <= _GEN_518[31:0]; // @[d_cache.scala 71:{34,34}]
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_0 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          receive_data_0 <= _GEN_226;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_1 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          receive_data_1 <= _GEN_227;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_2 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          receive_data_2 <= _GEN_228;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_3 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          receive_data_3 <= _GEN_229;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_4 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          receive_data_4 <= _GEN_230;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_5 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          receive_data_5 <= _GEN_231;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_6 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          receive_data_6 <= _GEN_232;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_7 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          receive_data_7 <= _GEN_233;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 76:30]
      receive_num <= 3'h0; // @[d_cache.scala 76:30]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (3'h1 == state) begin // @[d_cache.scala 101:18]
        if (!(anyMatch)) begin // @[d_cache.scala 112:27]
          receive_num <= 3'h0; // @[d_cache.scala 118:29]
        end
      end else if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
        receive_num <= _GEN_234;
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_0 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_0 <= _GEN_244;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_1 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_1 <= _GEN_245;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_2 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_2 <= _GEN_246;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_3 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_3 <= _GEN_247;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_4 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_4 <= _GEN_248;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_5 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_5 <= _GEN_249;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_6 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_6 <= _GEN_250;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_7 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_7 <= _GEN_251;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_8 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_8 <= _GEN_252;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_9 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_9 <= _GEN_253;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_10 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_10 <= _GEN_254;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_11 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_11 <= _GEN_255;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_12 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_12 <= _GEN_256;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_13 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_13 <= _GEN_257;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_14 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_14 <= _GEN_258;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_15 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_15 <= _GEN_259;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 95:24]
      state <= 3'h0; // @[d_cache.scala 95:24]
    end else if (3'h0 == state) begin // @[d_cache.scala 101:18]
      if ((io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000) begin // @[d_cache.scala 103:99]
        state <= 3'h0; // @[d_cache.scala 104:23]
      end else if (io_from_lsu_arvalid) begin // @[d_cache.scala 105:44]
        state <= 3'h1; // @[d_cache.scala 106:23]
      end else begin
        state <= _GEN_16;
      end
    end else if (3'h1 == state) begin // @[d_cache.scala 101:18]
      if (anyMatch) begin // @[d_cache.scala 112:27]
        state <= 3'h0;
      end else begin
        state <= 3'h3; // @[d_cache.scala 117:23]
      end
    end else if (3'h2 == state) begin // @[d_cache.scala 101:18]
      state <= _GEN_23;
    end else begin
      state <= _GEN_235;
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
  _RAND_0 = {16{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    cacheLine[initvar] = _RAND_0[511:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    validMem[initvar] = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    tagMem[initvar] = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    dirtyMem[initvar] = _RAND_3[0:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {16{`RANDOM}};
  write_back_data = _RAND_4[511:0];
  _RAND_5 = {1{`RANDOM}};
  write_back_addr = _RAND_5[31:0];
  _RAND_6 = {2{`RANDOM}};
  receive_data_0 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  receive_data_1 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  receive_data_2 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  receive_data_3 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  receive_data_4 = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  receive_data_5 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  receive_data_6 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  receive_data_7 = _RAND_13[63:0];
  _RAND_14 = {1{`RANDOM}};
  receive_num = _RAND_14[2:0];
  _RAND_15 = {1{`RANDOM}};
  quene_0 = _RAND_15[7:0];
  _RAND_16 = {1{`RANDOM}};
  quene_1 = _RAND_16[7:0];
  _RAND_17 = {1{`RANDOM}};
  quene_2 = _RAND_17[7:0];
  _RAND_18 = {1{`RANDOM}};
  quene_3 = _RAND_18[7:0];
  _RAND_19 = {1{`RANDOM}};
  quene_4 = _RAND_19[7:0];
  _RAND_20 = {1{`RANDOM}};
  quene_5 = _RAND_20[7:0];
  _RAND_21 = {1{`RANDOM}};
  quene_6 = _RAND_21[7:0];
  _RAND_22 = {1{`RANDOM}};
  quene_7 = _RAND_22[7:0];
  _RAND_23 = {1{`RANDOM}};
  quene_8 = _RAND_23[7:0];
  _RAND_24 = {1{`RANDOM}};
  quene_9 = _RAND_24[7:0];
  _RAND_25 = {1{`RANDOM}};
  quene_10 = _RAND_25[7:0];
  _RAND_26 = {1{`RANDOM}};
  quene_11 = _RAND_26[7:0];
  _RAND_27 = {1{`RANDOM}};
  quene_12 = _RAND_27[7:0];
  _RAND_28 = {1{`RANDOM}};
  quene_13 = _RAND_28[7:0];
  _RAND_29 = {1{`RANDOM}};
  quene_14 = _RAND_29[7:0];
  _RAND_30 = {1{`RANDOM}};
  quene_15 = _RAND_30[7:0];
  _RAND_31 = {1{`RANDOM}};
  state = _RAND_31[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
