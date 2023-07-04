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
  reg [127:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [127:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
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
`endif // RANDOMIZE_REG_INIT
  reg [127:0] cacheLine [0:255]; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_1_en; // @[d_cache.scala 24:24]
  wire [7:0] cacheLine_MPORT_1_addr; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_MPORT_1_data; // @[d_cache.scala 24:24]
  wire  cacheLine_write_back_data_MPORT_en; // @[d_cache.scala 24:24]
  wire [7:0] cacheLine_write_back_data_MPORT_addr; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_write_back_data_MPORT_data; // @[d_cache.scala 24:24]
  wire  cacheLine_io_to_lsu_rdata_MPORT_en; // @[d_cache.scala 24:24]
  wire [7:0] cacheLine_io_to_lsu_rdata_MPORT_addr; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_io_to_lsu_rdata_MPORT_data; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_MPORT_data; // @[d_cache.scala 24:24]
  wire [7:0] cacheLine_MPORT_addr; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_mask; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_en; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_MPORT_3_data; // @[d_cache.scala 24:24]
  wire [7:0] cacheLine_MPORT_3_addr; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_3_mask; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_3_en; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_MPORT_6_data; // @[d_cache.scala 24:24]
  wire [7:0] cacheLine_MPORT_6_addr; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_6_mask; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_6_en; // @[d_cache.scala 24:24]
  reg  validMem [0:255]; // @[d_cache.scala 25:23]
  wire  validMem_valid_0_MPORT_en; // @[d_cache.scala 25:23]
  wire [7:0] validMem_valid_0_MPORT_addr; // @[d_cache.scala 25:23]
  wire  validMem_valid_0_MPORT_data; // @[d_cache.scala 25:23]
  wire  validMem_valid_1_MPORT_en; // @[d_cache.scala 25:23]
  wire [7:0] validMem_valid_1_MPORT_addr; // @[d_cache.scala 25:23]
  wire  validMem_valid_1_MPORT_data; // @[d_cache.scala 25:23]
  wire  validMem_valid_2_MPORT_en; // @[d_cache.scala 25:23]
  wire [7:0] validMem_valid_2_MPORT_addr; // @[d_cache.scala 25:23]
  wire  validMem_valid_2_MPORT_data; // @[d_cache.scala 25:23]
  wire  validMem_valid_3_MPORT_en; // @[d_cache.scala 25:23]
  wire [7:0] validMem_valid_3_MPORT_addr; // @[d_cache.scala 25:23]
  wire  validMem_valid_3_MPORT_data; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_5_data; // @[d_cache.scala 25:23]
  wire [7:0] validMem_MPORT_5_addr; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_5_mask; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_5_en; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_8_data; // @[d_cache.scala 25:23]
  wire [7:0] validMem_MPORT_8_addr; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_8_mask; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_8_en; // @[d_cache.scala 25:23]
  reg [31:0] tagMem [0:255]; // @[d_cache.scala 28:21]
  wire  tagMem_tagMatch_0_MPORT_en; // @[d_cache.scala 28:21]
  wire [7:0] tagMem_tagMatch_0_MPORT_addr; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_tagMatch_0_MPORT_data; // @[d_cache.scala 28:21]
  wire  tagMem_tagMatch_1_MPORT_en; // @[d_cache.scala 28:21]
  wire [7:0] tagMem_tagMatch_1_MPORT_addr; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_tagMatch_1_MPORT_data; // @[d_cache.scala 28:21]
  wire  tagMem_tagMatch_2_MPORT_en; // @[d_cache.scala 28:21]
  wire [7:0] tagMem_tagMatch_2_MPORT_addr; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_tagMatch_2_MPORT_data; // @[d_cache.scala 28:21]
  wire  tagMem_tagMatch_3_MPORT_en; // @[d_cache.scala 28:21]
  wire [7:0] tagMem_tagMatch_3_MPORT_addr; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_tagMatch_3_MPORT_data; // @[d_cache.scala 28:21]
  wire  tagMem_write_back_addr_MPORT_en; // @[d_cache.scala 28:21]
  wire [7:0] tagMem_write_back_addr_MPORT_addr; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_write_back_addr_MPORT_data; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_MPORT_4_data; // @[d_cache.scala 28:21]
  wire [7:0] tagMem_MPORT_4_addr; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_4_mask; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_4_en; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_MPORT_7_data; // @[d_cache.scala 28:21]
  wire [7:0] tagMem_MPORT_7_addr; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_7_mask; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_7_en; // @[d_cache.scala 28:21]
  reg  dirtyMem [0:255]; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_9_en; // @[d_cache.scala 29:23]
  wire [7:0] dirtyMem_MPORT_9_addr; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_9_data; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_2_data; // @[d_cache.scala 29:23]
  wire [7:0] dirtyMem_MPORT_2_addr; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_2_mask; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_2_en; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_10_data; // @[d_cache.scala 29:23]
  wire [7:0] dirtyMem_MPORT_10_addr; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_10_mask; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_10_en; // @[d_cache.scala 29:23]
  wire [3:0] offset = io_from_lsu_araddr[3:0]; // @[d_cache.scala 20:36]
  wire [5:0] index = io_from_lsu_araddr[9:4]; // @[d_cache.scala 21:35]
  wire [21:0] tag = io_from_lsu_araddr[31:10]; // @[d_cache.scala 22:33]
  wire [7:0] _GEN_455 = {{2'd0}, index}; // @[d_cache.scala 41:48]
  wire [8:0] _valid_0_T_1 = {{1'd0}, _GEN_455}; // @[d_cache.scala 41:48]
  wire [8:0] _GEN_459 = {{3'd0}, index}; // @[d_cache.scala 41:48]
  wire [8:0] _valid_2_T_2 = 9'h80 + _GEN_459; // @[d_cache.scala 41:48]
  wire [8:0] _valid_3_T_2 = 9'hc0 + _GEN_459; // @[d_cache.scala 41:48]
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
  wire [7:0] _GEN_464 = {foundUnvalidIndex, 6'h0}; // @[d_cache.scala 50:43]
  wire [8:0] _unvalidIndex_T = {{1'd0}, _GEN_464}; // @[d_cache.scala 50:43]
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
  wire [7:0] _GEN_488 = {foundtagIndex, 6'h0}; // @[d_cache.scala 64:35]
  wire [8:0] _tagIndex_T = {{1'd0}, _GEN_488}; // @[d_cache.scala 64:35]
  wire [8:0] tagIndex = _tagIndex_T + _GEN_459; // @[d_cache.scala 64:43]
  reg [127:0] write_back_data; // @[d_cache.scala 70:34]
  reg [31:0] write_back_addr; // @[d_cache.scala 71:34]
  reg [63:0] receive_data_0; // @[d_cache.scala 75:31]
  reg [63:0] receive_data_1; // @[d_cache.scala 75:31]
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
  wire [7:0] _GEN_1 = 4'h1 == index[3:0] ? quene_1 : quene_0; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_2 = 4'h2 == index[3:0] ? quene_2 : _GEN_1; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_3 = 4'h3 == index[3:0] ? quene_3 : _GEN_2; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_4 = 4'h4 == index[3:0] ? quene_4 : _GEN_3; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_5 = 4'h5 == index[3:0] ? quene_5 : _GEN_4; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_6 = 4'h6 == index[3:0] ? quene_6 : _GEN_5; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_7 = 4'h7 == index[3:0] ? quene_7 : _GEN_6; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_8 = 4'h8 == index[3:0] ? quene_8 : _GEN_7; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_9 = 4'h9 == index[3:0] ? quene_9 : _GEN_8; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_10 = 4'ha == index[3:0] ? quene_10 : _GEN_9; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_11 = 4'hb == index[3:0] ? quene_11 : _GEN_10; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_12 = 4'hc == index[3:0] ? quene_12 : _GEN_11; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_13 = 4'hd == index[3:0] ? quene_13 : _GEN_12; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_14 = 4'he == index[3:0] ? quene_14 : _GEN_13; // @[d_cache.scala 79:{35,35}]
  wire [7:0] _GEN_15 = 4'hf == index[3:0] ? quene_15 : _GEN_14; // @[d_cache.scala 79:{35,35}]
  wire [1:0] replace_way = _GEN_15[7:6]; // @[d_cache.scala 79:35]
  wire [7:0] _GEN_494 = {replace_way, 6'h0}; // @[d_cache.scala 80:34]
  wire [8:0] _replaceIndex_T = {{1'd0}, _GEN_494}; // @[d_cache.scala 80:34]
  wire [8:0] _replaceIndex_T_2 = _replaceIndex_T + _GEN_459; // @[d_cache.scala 80:42]
  wire [6:0] shift_bit = {offset, 3'h0}; // @[d_cache.scala 82:28]
  wire [63:0] _wmask_T_4 = io_from_lsu_wstrb == 8'hff ? 64'hffffffffffffffff : 64'h0; // @[d_cache.scala 88:20]
  wire [63:0] _wmask_T_5 = io_from_lsu_wstrb == 8'hf ? 64'hffffffff : _wmask_T_4; // @[d_cache.scala 87:20]
  wire [63:0] _wmask_T_6 = io_from_lsu_wstrb == 8'h3 ? 64'hffff : _wmask_T_5; // @[d_cache.scala 86:20]
  wire [63:0] wmask = io_from_lsu_wstrb == 8'h1 ? 64'hff : _wmask_T_6; // @[d_cache.scala 85:20]
  reg [3:0] state; // @[d_cache.scala 95:24]
  wire  _T = 4'h0 == state; // @[d_cache.scala 101:18]
  wire  _T_3 = (io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000; // @[d_cache.scala 103:60]
  wire [3:0] _GEN_16 = io_from_lsu_awvalid ? 4'h2 : state; // @[d_cache.scala 107:44 108:23 95:24]
  wire [63:0] _T_7 = io_from_lsu_wdata & wmask; // @[d_cache.scala 127:60]
  wire [190:0] _GEN_521 = {{127'd0}, _T_7}; // @[d_cache.scala 127:69]
  wire [190:0] _T_8 = _GEN_521 << shift_bit; // @[d_cache.scala 127:69]
  wire [190:0] _GEN_525 = {{127'd0}, wmask}; // @[d_cache.scala 127:116]
  wire [190:0] _T_10 = _GEN_525 << shift_bit; // @[d_cache.scala 127:116]
  wire [190:0] _T_11 = ~_T_10; // @[d_cache.scala 127:108]
  wire [190:0] _GEN_502 = {{63'd0}, cacheLine_MPORT_1_data}; // @[d_cache.scala 127:106]
  wire [190:0] _T_12 = _GEN_502 & _T_11; // @[d_cache.scala 127:106]
  wire [190:0] _T_13 = _T_8 | _T_12; // @[d_cache.scala 127:83]
  wire [3:0] _GEN_23 = anyMatch ? 4'h0 : 4'h4; // @[d_cache.scala 122:27 131:23]
  wire [63:0] _GEN_31 = ~receive_num[0] ? io_from_axi_rdata : receive_data_0; // @[d_cache.scala 136:{43,43} 75:31]
  wire [63:0] _GEN_32 = receive_num[0] ? io_from_axi_rdata : receive_data_1; // @[d_cache.scala 136:{43,43} 75:31]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[d_cache.scala 137:44]
  wire [3:0] _GEN_33 = io_from_axi_rlast ? 4'h5 : state; // @[d_cache.scala 138:40 139:27 95:24]
  wire [63:0] _GEN_34 = io_from_axi_rvalid ? _GEN_31 : receive_data_0; // @[d_cache.scala 135:37 75:31]
  wire [63:0] _GEN_35 = io_from_axi_rvalid ? _GEN_32 : receive_data_1; // @[d_cache.scala 135:37 75:31]
  wire [2:0] _GEN_36 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[d_cache.scala 135:37 137:29 76:30]
  wire [3:0] _GEN_37 = io_from_axi_rvalid ? _GEN_33 : state; // @[d_cache.scala 135:37 95:24]
  wire [3:0] _GEN_38 = io_from_axi_bvalid ? 4'h0 : state; // @[d_cache.scala 144:59 145:23 95:24]
  wire  _T_20 = ~allvalid; // @[d_cache.scala 149:18]
  wire [9:0] _GEN_504 = {_GEN_15, 2'h0}; // @[d_cache.scala 157:46]
  wire [10:0] _quene_T_1 = {{1'd0}, _GEN_504}; // @[d_cache.scala 157:46]
  wire [10:0] _GEN_505 = {{9'd0}, foundUnvalidIndex}; // @[d_cache.scala 157:53]
  wire [10:0] _quene_T_2 = _quene_T_1 | _GEN_505; // @[d_cache.scala 157:53]
  wire [7:0] _GEN_55 = 4'h0 == index[3:0] ? _quene_T_2[7:0] : quene_0; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_56 = 4'h1 == index[3:0] ? _quene_T_2[7:0] : quene_1; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_57 = 4'h2 == index[3:0] ? _quene_T_2[7:0] : quene_2; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_58 = 4'h3 == index[3:0] ? _quene_T_2[7:0] : quene_3; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_59 = 4'h4 == index[3:0] ? _quene_T_2[7:0] : quene_4; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_60 = 4'h5 == index[3:0] ? _quene_T_2[7:0] : quene_5; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_61 = 4'h6 == index[3:0] ? _quene_T_2[7:0] : quene_6; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_62 = 4'h7 == index[3:0] ? _quene_T_2[7:0] : quene_7; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_63 = 4'h8 == index[3:0] ? _quene_T_2[7:0] : quene_8; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_64 = 4'h9 == index[3:0] ? _quene_T_2[7:0] : quene_9; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_65 = 4'ha == index[3:0] ? _quene_T_2[7:0] : quene_10; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_66 = 4'hb == index[3:0] ? _quene_T_2[7:0] : quene_11; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_67 = 4'hc == index[3:0] ? _quene_T_2[7:0] : quene_12; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_68 = 4'hd == index[3:0] ? _quene_T_2[7:0] : quene_13; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_69 = 4'he == index[3:0] ? _quene_T_2[7:0] : quene_14; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_70 = 4'hf == index[3:0] ? _quene_T_2[7:0] : quene_15; // @[d_cache.scala 157:{30,30} 77:24]
  wire [31:0] replaceIndex = {{23'd0}, _replaceIndex_T_2}; // @[d_cache.scala 66:28 80:18]
  wire [10:0] _GEN_511 = {{9'd0}, replace_way}; // @[d_cache.scala 162:53]
  wire [10:0] _quene_T_5 = _quene_T_1 | _GEN_511; // @[d_cache.scala 162:53]
  wire [7:0] _GEN_87 = 4'h0 == index[3:0] ? _quene_T_5[7:0] : quene_0; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_88 = 4'h1 == index[3:0] ? _quene_T_5[7:0] : quene_1; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_89 = 4'h2 == index[3:0] ? _quene_T_5[7:0] : quene_2; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_90 = 4'h3 == index[3:0] ? _quene_T_5[7:0] : quene_3; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_91 = 4'h4 == index[3:0] ? _quene_T_5[7:0] : quene_4; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_92 = 4'h5 == index[3:0] ? _quene_T_5[7:0] : quene_5; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_93 = 4'h6 == index[3:0] ? _quene_T_5[7:0] : quene_6; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_94 = 4'h7 == index[3:0] ? _quene_T_5[7:0] : quene_7; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_95 = 4'h8 == index[3:0] ? _quene_T_5[7:0] : quene_8; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_96 = 4'h9 == index[3:0] ? _quene_T_5[7:0] : quene_9; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_97 = 4'ha == index[3:0] ? _quene_T_5[7:0] : quene_10; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_98 = 4'hb == index[3:0] ? _quene_T_5[7:0] : quene_11; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_99 = 4'hc == index[3:0] ? _quene_T_5[7:0] : quene_12; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_100 = 4'hd == index[3:0] ? _quene_T_5[7:0] : quene_13; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_101 = 4'he == index[3:0] ? _quene_T_5[7:0] : quene_14; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_102 = 4'hf == index[3:0] ? _quene_T_5[7:0] : quene_15; // @[d_cache.scala 162:{30,30} 77:24]
  wire  _T_32 = dirtyMem_MPORT_9_data; // @[d_cache.scala 163:44]
  wire [41:0] _write_back_addr_T_2 = {tagMem_write_back_addr_MPORT_data,index,4'h0}; // @[Cat.scala 31:58]
  wire [127:0] _GEN_106 = dirtyMem_MPORT_9_data ? cacheLine_write_back_data_MPORT_data : write_back_data; // @[d_cache.scala 163:51 165:37 70:34]
  wire [41:0] _GEN_108 = dirtyMem_MPORT_9_data ? _write_back_addr_T_2 : {{10'd0}, write_back_addr}; // @[d_cache.scala 163:51 166:37 71:34]
  wire [3:0] _GEN_112 = dirtyMem_MPORT_9_data ? 4'h6 : 4'h1; // @[d_cache.scala 163:51 168:27 170:27]
  wire [3:0] _GEN_113 = ~allvalid ? 4'h1 : _GEN_112; // @[d_cache.scala 149:28 150:23]
  wire [7:0] _GEN_122 = ~allvalid ? _GEN_55 : _GEN_87; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_123 = ~allvalid ? _GEN_56 : _GEN_88; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_124 = ~allvalid ? _GEN_57 : _GEN_89; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_125 = ~allvalid ? _GEN_58 : _GEN_90; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_126 = ~allvalid ? _GEN_59 : _GEN_91; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_127 = ~allvalid ? _GEN_60 : _GEN_92; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_128 = ~allvalid ? _GEN_61 : _GEN_93; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_129 = ~allvalid ? _GEN_62 : _GEN_94; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_130 = ~allvalid ? _GEN_63 : _GEN_95; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_131 = ~allvalid ? _GEN_64 : _GEN_96; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_132 = ~allvalid ? _GEN_65 : _GEN_97; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_133 = ~allvalid ? _GEN_66 : _GEN_98; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_134 = ~allvalid ? _GEN_67 : _GEN_99; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_135 = ~allvalid ? _GEN_68 : _GEN_100; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_136 = ~allvalid ? _GEN_69 : _GEN_101; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_137 = ~allvalid ? _GEN_70 : _GEN_102; // @[d_cache.scala 149:28]
  wire  _GEN_140 = ~allvalid ? 1'h0 : 1'h1; // @[d_cache.scala 149:28 24:24 159:26]
  wire  _GEN_149 = ~allvalid ? 1'h0 : _T_32; // @[d_cache.scala 149:28 24:24]
  wire [127:0] _GEN_150 = ~allvalid ? write_back_data : _GEN_106; // @[d_cache.scala 149:28 70:34]
  wire [41:0] _GEN_152 = ~allvalid ? {{10'd0}, write_back_addr} : _GEN_108; // @[d_cache.scala 149:28 71:34]
  wire [127:0] _write_back_data_T_1 = {{64'd0}, write_back_data[127:64]}; // @[d_cache.scala 176:52]
  wire [127:0] _GEN_156 = io_from_axi_wready ? _write_back_data_T_1 : write_back_data; // @[d_cache.scala 175:37 176:33 70:34]
  wire [3:0] _GEN_157 = io_from_axi_bvalid ? 4'h1 : state; // @[d_cache.scala 178:37 179:23 95:24]
  wire [3:0] _GEN_158 = io_from_axi_rvalid ? 4'h0 : state; // @[d_cache.scala 183:37 184:23 95:24]
  wire [3:0] _GEN_160 = 4'h8 == state ? _GEN_38 : state; // @[d_cache.scala 101:18 95:24]
  wire [3:0] _GEN_161 = 4'h7 == state ? _GEN_158 : _GEN_160; // @[d_cache.scala 101:18]
  wire [127:0] _GEN_162 = 4'h6 == state ? _GEN_156 : write_back_data; // @[d_cache.scala 101:18 70:34]
  wire [3:0] _GEN_163 = 4'h6 == state ? _GEN_157 : _GEN_161; // @[d_cache.scala 101:18]
  wire [3:0] _GEN_164 = 4'h5 == state ? _GEN_113 : _GEN_163; // @[d_cache.scala 101:18]
  wire [7:0] _GEN_173 = 4'h5 == state ? _GEN_122 : quene_0; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_174 = 4'h5 == state ? _GEN_123 : quene_1; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_175 = 4'h5 == state ? _GEN_124 : quene_2; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_176 = 4'h5 == state ? _GEN_125 : quene_3; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_177 = 4'h5 == state ? _GEN_126 : quene_4; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_178 = 4'h5 == state ? _GEN_127 : quene_5; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_179 = 4'h5 == state ? _GEN_128 : quene_6; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_180 = 4'h5 == state ? _GEN_129 : quene_7; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_181 = 4'h5 == state ? _GEN_130 : quene_8; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_182 = 4'h5 == state ? _GEN_131 : quene_9; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_183 = 4'h5 == state ? _GEN_132 : quene_10; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_184 = 4'h5 == state ? _GEN_133 : quene_11; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_185 = 4'h5 == state ? _GEN_134 : quene_12; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_186 = 4'h5 == state ? _GEN_135 : quene_13; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_187 = 4'h5 == state ? _GEN_136 : quene_14; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_188 = 4'h5 == state ? _GEN_137 : quene_15; // @[d_cache.scala 101:18 77:24]
  wire [127:0] _GEN_201 = 4'h5 == state ? _GEN_150 : _GEN_162; // @[d_cache.scala 101:18]
  wire [41:0] _GEN_203 = 4'h5 == state ? _GEN_152 : {{10'd0}, write_back_addr}; // @[d_cache.scala 101:18 71:34]
  wire [3:0] _GEN_207 = 4'h4 == state ? _GEN_38 : _GEN_164; // @[d_cache.scala 101:18]
  wire  _GEN_210 = 4'h4 == state ? 1'h0 : 4'h5 == state & _T_20; // @[d_cache.scala 101:18 24:24]
  wire [7:0] _GEN_216 = 4'h4 == state ? quene_0 : _GEN_173; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_217 = 4'h4 == state ? quene_1 : _GEN_174; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_218 = 4'h4 == state ? quene_2 : _GEN_175; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_219 = 4'h4 == state ? quene_3 : _GEN_176; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_220 = 4'h4 == state ? quene_4 : _GEN_177; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_221 = 4'h4 == state ? quene_5 : _GEN_178; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_222 = 4'h4 == state ? quene_6 : _GEN_179; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_223 = 4'h4 == state ? quene_7 : _GEN_180; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_224 = 4'h4 == state ? quene_8 : _GEN_181; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_225 = 4'h4 == state ? quene_9 : _GEN_182; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_226 = 4'h4 == state ? quene_10 : _GEN_183; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_227 = 4'h4 == state ? quene_11 : _GEN_184; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_228 = 4'h4 == state ? quene_12 : _GEN_185; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_229 = 4'h4 == state ? quene_13 : _GEN_186; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_230 = 4'h4 == state ? quene_14 : _GEN_187; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_231 = 4'h4 == state ? quene_15 : _GEN_188; // @[d_cache.scala 101:18 77:24]
  wire  _GEN_234 = 4'h4 == state ? 1'h0 : 4'h5 == state & _GEN_140; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_243 = 4'h4 == state ? 1'h0 : 4'h5 == state & _GEN_149; // @[d_cache.scala 101:18 24:24]
  wire [127:0] _GEN_244 = 4'h4 == state ? write_back_data : _GEN_201; // @[d_cache.scala 101:18 70:34]
  wire [41:0] _GEN_246 = 4'h4 == state ? {{10'd0}, write_back_addr} : _GEN_203; // @[d_cache.scala 101:18 71:34]
  wire [63:0] _GEN_250 = 4'h3 == state ? _GEN_34 : receive_data_0; // @[d_cache.scala 101:18 75:31]
  wire [63:0] _GEN_251 = 4'h3 == state ? _GEN_35 : receive_data_1; // @[d_cache.scala 101:18 75:31]
  wire [2:0] _GEN_252 = 4'h3 == state ? _GEN_36 : receive_num; // @[d_cache.scala 101:18 76:30]
  wire [3:0] _GEN_253 = 4'h3 == state ? _GEN_37 : _GEN_207; // @[d_cache.scala 101:18]
  wire  _GEN_256 = 4'h3 == state ? 1'h0 : _GEN_210; // @[d_cache.scala 101:18 24:24]
  wire [7:0] _GEN_262 = 4'h3 == state ? quene_0 : _GEN_216; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_263 = 4'h3 == state ? quene_1 : _GEN_217; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_264 = 4'h3 == state ? quene_2 : _GEN_218; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_265 = 4'h3 == state ? quene_3 : _GEN_219; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_266 = 4'h3 == state ? quene_4 : _GEN_220; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_267 = 4'h3 == state ? quene_5 : _GEN_221; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_268 = 4'h3 == state ? quene_6 : _GEN_222; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_269 = 4'h3 == state ? quene_7 : _GEN_223; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_270 = 4'h3 == state ? quene_8 : _GEN_224; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_271 = 4'h3 == state ? quene_9 : _GEN_225; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_272 = 4'h3 == state ? quene_10 : _GEN_226; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_273 = 4'h3 == state ? quene_11 : _GEN_227; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_274 = 4'h3 == state ? quene_12 : _GEN_228; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_275 = 4'h3 == state ? quene_13 : _GEN_229; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_276 = 4'h3 == state ? quene_14 : _GEN_230; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_277 = 4'h3 == state ? quene_15 : _GEN_231; // @[d_cache.scala 101:18 77:24]
  wire  _GEN_280 = 4'h3 == state ? 1'h0 : _GEN_234; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_289 = 4'h3 == state ? 1'h0 : _GEN_243; // @[d_cache.scala 101:18 24:24]
  wire [127:0] _GEN_290 = 4'h3 == state ? write_back_data : _GEN_244; // @[d_cache.scala 101:18 70:34]
  wire [41:0] _GEN_292 = 4'h3 == state ? {{10'd0}, write_back_addr} : _GEN_246; // @[d_cache.scala 101:18 71:34]
  wire  _GEN_309 = 4'h2 == state ? 1'h0 : _GEN_256; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_333 = 4'h2 == state ? 1'h0 : _GEN_280; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_342 = 4'h2 == state ? 1'h0 : _GEN_289; // @[d_cache.scala 101:18 24:24]
  wire [41:0] _GEN_345 = 4'h2 == state ? {{10'd0}, write_back_addr} : _GEN_292; // @[d_cache.scala 101:18 71:34]
  wire  _GEN_353 = 4'h1 == state ? 1'h0 : 4'h2 == state & anyMatch; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_362 = 4'h1 == state ? 1'h0 : _GEN_309; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_386 = 4'h1 == state ? 1'h0 : _GEN_333; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_395 = 4'h1 == state ? 1'h0 : _GEN_342; // @[d_cache.scala 101:18 24:24]
  wire [41:0] _GEN_398 = 4'h1 == state ? {{10'd0}, write_back_addr} : _GEN_345; // @[d_cache.scala 101:18 71:34]
  wire [41:0] _GEN_451 = 4'h0 == state ? {{10'd0}, write_back_addr} : _GEN_398; // @[d_cache.scala 101:18 71:34]
  wire [127:0] _io_to_lsu_rdata_T_1 = cacheLine_io_to_lsu_rdata_MPORT_data >> shift_bit; // @[d_cache.scala 211:48]
  wire [63:0] _GEN_517 = {{32'd0}, io_from_lsu_araddr}; // @[d_cache.scala 252:49]
  wire [63:0] _io_to_axi_araddr_T = _GEN_517 & 64'hfffffffffffffff0; // @[d_cache.scala 252:49]
  wire  _T_49 = state == 4'h0 & _T_3; // @[d_cache.scala 320:27]
  wire [63:0] _GEN_456 = state == 4'h0 & _T_3 ? io_from_axi_rdata : 64'h0; // @[d_cache.scala 320:117 321:23 324:29]
  wire  _GEN_458 = state == 4'h0 & _T_3 & io_from_axi_rvalid; // @[d_cache.scala 320:117 321:23 326:30]
  wire  _GEN_461 = state == 4'h0 & _T_3 & io_from_axi_bvalid; // @[d_cache.scala 320:117 321:23 329:30]
  wire  _GEN_466 = state == 4'h0 & _T_3 & io_from_lsu_arvalid; // @[d_cache.scala 320:117 322:23 331:31]
  wire [31:0] _GEN_468 = state == 4'h0 & _T_3 ? io_from_lsu_awaddr : 32'h0; // @[d_cache.scala 320:117 322:23 337:30]
  wire  _GEN_472 = state == 4'h0 & _T_3 & io_from_lsu_awvalid; // @[d_cache.scala 320:117 322:23 338:31]
  wire [63:0] _GEN_473 = state == 4'h0 & _T_3 ? io_from_lsu_wdata : 64'h0; // @[d_cache.scala 320:117 322:23 342:29]
  wire [7:0] _GEN_474 = state == 4'h0 & _T_3 ? io_from_lsu_wstrb : 8'h0; // @[d_cache.scala 320:117 322:23 343:29]
  wire  _GEN_476 = state == 4'h0 & _T_3 & io_from_lsu_wvalid; // @[d_cache.scala 320:117 322:23 345:30]
  wire [63:0] _GEN_479 = state == 4'h7 ? io_from_axi_rdata : _GEN_456; // @[d_cache.scala 316:30 317:19]
  wire  _GEN_481 = state == 4'h7 ? io_from_axi_rvalid : _GEN_458; // @[d_cache.scala 316:30 317:19]
  wire  _GEN_484 = state == 4'h7 ? io_from_axi_bvalid : _GEN_461; // @[d_cache.scala 316:30 317:19]
  wire  _GEN_489 = state == 4'h7 ? io_from_lsu_arvalid : _GEN_466; // @[d_cache.scala 316:30 318:19]
  wire [31:0] _GEN_491 = state == 4'h7 ? io_from_lsu_awaddr : _GEN_468; // @[d_cache.scala 316:30 318:19]
  wire  _GEN_495 = state == 4'h7 ? io_from_lsu_awvalid : _GEN_472; // @[d_cache.scala 316:30 318:19]
  wire [63:0] _GEN_496 = state == 4'h7 ? io_from_lsu_wdata : _GEN_473; // @[d_cache.scala 316:30 318:19]
  wire [7:0] _GEN_497 = state == 4'h7 ? io_from_lsu_wstrb : _GEN_474; // @[d_cache.scala 316:30 318:19]
  wire  _GEN_499 = state == 4'h7 ? io_from_lsu_wvalid : _GEN_476; // @[d_cache.scala 316:30 318:19]
  wire  _GEN_500 = state == 4'h7 | _T_49; // @[d_cache.scala 316:30 318:19]
  wire [63:0] _GEN_501 = state == 4'h6 ? 64'h0 : _GEN_479; // @[d_cache.scala 292:35 293:25]
  wire  _GEN_503 = state == 4'h6 ? 1'h0 : _GEN_481; // @[d_cache.scala 292:35 295:26]
  wire  _GEN_506 = state == 4'h6 ? 1'h0 : _GEN_484; // @[d_cache.scala 292:35 298:26]
  wire  _GEN_508 = state == 4'h6 ? 1'h0 : _GEN_489; // @[d_cache.scala 292:35 300:27]
  wire [31:0] _GEN_509 = state == 4'h6 ? 32'h0 : io_from_lsu_araddr; // @[d_cache.scala 292:35 301:26]
  wire [7:0] _GEN_510 = state == 4'h6 ? 8'h1 : 8'h0; // @[d_cache.scala 292:35 302:25]
  wire  _GEN_513 = state == 4'h6 ? 1'h0 : 1'h1; // @[d_cache.scala 292:35 305:26]
  wire [31:0] _GEN_514 = state == 4'h6 ? write_back_addr : _GEN_491; // @[d_cache.scala 292:35 306:26]
  wire  _GEN_515 = state == 4'h6 | _GEN_495; // @[d_cache.scala 292:35 307:27]
  wire [63:0] _GEN_519 = state == 4'h6 ? write_back_data[63:0] : _GEN_496; // @[d_cache.scala 292:35 311:25]
  wire [7:0] _GEN_520 = state == 4'h6 ? 8'hff : _GEN_497; // @[d_cache.scala 292:35 312:25]
  wire  _GEN_522 = state == 4'h6 | _GEN_499; // @[d_cache.scala 292:35 314:26]
  wire  _GEN_523 = state == 4'h6 | _GEN_500; // @[d_cache.scala 292:35 315:26]
  wire [63:0] _GEN_524 = state == 4'h4 | state == 4'h8 ? 64'h0 : _GEN_501; // @[d_cache.scala 267:50 268:25]
  wire  _GEN_526 = state == 4'h4 | state == 4'h8 ? 1'h0 : _GEN_503; // @[d_cache.scala 267:50 270:26]
  wire  _GEN_529 = state == 4'h4 | state == 4'h8 ? io_from_axi_bvalid : _GEN_506; // @[d_cache.scala 267:50 273:26]
  wire  _GEN_531 = state == 4'h4 | state == 4'h8 ? 1'h0 : _GEN_508; // @[d_cache.scala 267:50 275:27]
  wire [31:0] _GEN_532 = state == 4'h4 | state == 4'h8 ? 32'h0 : _GEN_509; // @[d_cache.scala 267:50 276:26]
  wire [7:0] _GEN_533 = state == 4'h4 | state == 4'h8 ? 8'h0 : _GEN_510; // @[d_cache.scala 267:50 277:25]
  wire  _GEN_536 = state == 4'h4 | state == 4'h8 | _GEN_513; // @[d_cache.scala 267:50 280:26]
  wire [31:0] _GEN_537 = state == 4'h4 | state == 4'h8 ? io_from_lsu_awaddr : _GEN_514; // @[d_cache.scala 267:50 281:26]
  wire  _GEN_538 = state == 4'h4 | state == 4'h8 ? io_from_lsu_awvalid : _GEN_515; // @[d_cache.scala 267:50 282:27]
  wire [63:0] _GEN_542 = state == 4'h4 | state == 4'h8 ? io_from_lsu_wdata : _GEN_519; // @[d_cache.scala 267:50 286:25]
  wire [7:0] _GEN_543 = state == 4'h4 | state == 4'h8 ? io_from_lsu_wstrb : _GEN_520; // @[d_cache.scala 267:50 287:25]
  wire  _GEN_545 = state == 4'h4 | state == 4'h8 ? io_from_lsu_wvalid : _GEN_522; // @[d_cache.scala 267:50 289:26]
  wire  _GEN_546 = state == 4'h4 | state == 4'h8 | _GEN_523; // @[d_cache.scala 267:50 290:26]
  wire [63:0] _GEN_547 = state == 4'h3 ? 64'h0 : _GEN_524; // @[d_cache.scala 243:31 244:25]
  wire  _GEN_549 = state == 4'h3 ? 1'h0 : _GEN_526; // @[d_cache.scala 243:31 246:26]
  wire  _GEN_552 = state == 4'h3 ? 1'h0 : _GEN_529; // @[d_cache.scala 243:31 249:26]
  wire  _GEN_554 = state == 4'h3 | _GEN_531; // @[d_cache.scala 243:31 251:27]
  wire [63:0] _GEN_555 = state == 4'h3 ? _io_to_axi_araddr_T : {{32'd0}, _GEN_532}; // @[d_cache.scala 243:31 252:26]
  wire [7:0] _GEN_556 = state == 4'h3 ? 8'h1 : _GEN_533; // @[d_cache.scala 243:31 253:25]
  wire  _GEN_559 = state == 4'h3 | _GEN_536; // @[d_cache.scala 243:31 256:26]
  wire [31:0] _GEN_560 = state == 4'h3 ? 32'h0 : _GEN_537; // @[d_cache.scala 243:31 257:26]
  wire  _GEN_561 = state == 4'h3 ? 1'h0 : _GEN_538; // @[d_cache.scala 243:31 258:27]
  wire [7:0] _GEN_562 = state == 4'h3 ? 8'h0 : _GEN_533; // @[d_cache.scala 243:31 259:25]
  wire [63:0] _GEN_565 = state == 4'h3 ? 64'h0 : _GEN_542; // @[d_cache.scala 243:31 262:25]
  wire [7:0] _GEN_566 = state == 4'h3 ? 8'h0 : _GEN_543; // @[d_cache.scala 243:31 263:25]
  wire  _GEN_568 = state == 4'h3 ? 1'h0 : _GEN_545; // @[d_cache.scala 243:31 265:26]
  wire  _GEN_569 = state == 4'h3 ? 1'h0 : _GEN_546; // @[d_cache.scala 243:31 266:26]
  wire  _GEN_570 = state == 4'h2 ? 1'h0 : _GEN_554; // @[d_cache.scala 219:33 220:27]
  wire [63:0] _GEN_571 = state == 4'h2 ? {{32'd0}, io_from_lsu_araddr} : _GEN_555; // @[d_cache.scala 219:33 221:26]
  wire [7:0] _GEN_572 = state == 4'h2 ? 8'h0 : _GEN_556; // @[d_cache.scala 219:33 222:25]
  wire  _GEN_575 = state == 4'h2 ? 1'h0 : _GEN_559; // @[d_cache.scala 219:33 225:26]
  wire [31:0] _GEN_576 = state == 4'h2 ? 32'h0 : _GEN_560; // @[d_cache.scala 219:33 226:26]
  wire  _GEN_577 = state == 4'h2 ? 1'h0 : _GEN_561; // @[d_cache.scala 219:33 227:27]
  wire [7:0] _GEN_578 = state == 4'h2 ? 8'h0 : _GEN_562; // @[d_cache.scala 219:33 228:25]
  wire [63:0] _GEN_581 = state == 4'h2 ? 64'h0 : _GEN_565; // @[d_cache.scala 219:33 231:25]
  wire [7:0] _GEN_582 = state == 4'h2 ? 8'h0 : _GEN_566; // @[d_cache.scala 219:33 232:25]
  wire  _GEN_584 = state == 4'h2 ? 1'h0 : _GEN_568; // @[d_cache.scala 219:33 234:26]
  wire  _GEN_585 = state == 4'h2 ? 1'h0 : _GEN_569; // @[d_cache.scala 219:33 235:26]
  wire [63:0] _GEN_586 = state == 4'h2 ? 64'h0 : _GEN_547; // @[d_cache.scala 219:33 236:25]
  wire  _GEN_588 = state == 4'h2 ? 1'h0 : _GEN_549; // @[d_cache.scala 219:33 238:26]
  wire  _GEN_592 = state == 4'h2 ? anyMatch : _GEN_552; // @[d_cache.scala 219:33 242:26]
  wire [63:0] _GEN_594 = state == 4'h1 ? {{32'd0}, io_from_lsu_araddr} : _GEN_571; // @[d_cache.scala 194:27 196:26]
  wire [127:0] _GEN_612 = state == 4'h1 ? _io_to_lsu_rdata_T_1 : {{64'd0}, _GEN_586}; // @[d_cache.scala 194:27 211:25]
  wire [41:0] _GEN_518 = reset ? 42'h0 : _GEN_451; // @[d_cache.scala 71:{34,34}]
  assign cacheLine_MPORT_1_en = _T ? 1'h0 : _GEN_353;
  assign cacheLine_MPORT_1_addr = tagIndex[7:0];
  assign cacheLine_MPORT_1_data = cacheLine[cacheLine_MPORT_1_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_write_back_data_MPORT_en = _T ? 1'h0 : _GEN_395;
  assign cacheLine_write_back_data_MPORT_addr = replaceIndex[7:0];
  assign cacheLine_write_back_data_MPORT_data = cacheLine[cacheLine_write_back_data_MPORT_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_io_to_lsu_rdata_MPORT_en = state == 4'h1;
  assign cacheLine_io_to_lsu_rdata_MPORT_addr = tagIndex[7:0];
  assign cacheLine_io_to_lsu_rdata_MPORT_data = cacheLine[cacheLine_io_to_lsu_rdata_MPORT_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_MPORT_data = _T_13[127:0];
  assign cacheLine_MPORT_addr = tagIndex[7:0];
  assign cacheLine_MPORT_mask = 1'h1;
  assign cacheLine_MPORT_en = _T ? 1'h0 : _GEN_353;
  assign cacheLine_MPORT_3_data = {receive_data_1,receive_data_0};
  assign cacheLine_MPORT_3_addr = unvalidIndex[7:0];
  assign cacheLine_MPORT_3_mask = 1'h1;
  assign cacheLine_MPORT_3_en = _T ? 1'h0 : _GEN_362;
  assign cacheLine_MPORT_6_data = {receive_data_1,receive_data_0};
  assign cacheLine_MPORT_6_addr = replaceIndex[7:0];
  assign cacheLine_MPORT_6_mask = 1'h1;
  assign cacheLine_MPORT_6_en = _T ? 1'h0 : _GEN_386;
  assign validMem_valid_0_MPORT_en = 1'h1;
  assign validMem_valid_0_MPORT_addr = _valid_0_T_1[7:0];
  assign validMem_valid_0_MPORT_data = validMem[validMem_valid_0_MPORT_addr]; // @[d_cache.scala 25:23]
  assign validMem_valid_1_MPORT_en = 1'h1;
  assign validMem_valid_1_MPORT_addr = 8'h40 + _GEN_455;
  assign validMem_valid_1_MPORT_data = validMem[validMem_valid_1_MPORT_addr]; // @[d_cache.scala 25:23]
  assign validMem_valid_2_MPORT_en = 1'h1;
  assign validMem_valid_2_MPORT_addr = _valid_2_T_2[7:0];
  assign validMem_valid_2_MPORT_data = validMem[validMem_valid_2_MPORT_addr]; // @[d_cache.scala 25:23]
  assign validMem_valid_3_MPORT_en = 1'h1;
  assign validMem_valid_3_MPORT_addr = _valid_3_T_2[7:0];
  assign validMem_valid_3_MPORT_data = validMem[validMem_valid_3_MPORT_addr]; // @[d_cache.scala 25:23]
  assign validMem_MPORT_5_data = 1'h1;
  assign validMem_MPORT_5_addr = unvalidIndex[7:0];
  assign validMem_MPORT_5_mask = 1'h1;
  assign validMem_MPORT_5_en = _T ? 1'h0 : _GEN_362;
  assign validMem_MPORT_8_data = 1'h1;
  assign validMem_MPORT_8_addr = replaceIndex[7:0];
  assign validMem_MPORT_8_mask = 1'h1;
  assign validMem_MPORT_8_en = _T ? 1'h0 : _GEN_386;
  assign tagMem_tagMatch_0_MPORT_en = 1'h1;
  assign tagMem_tagMatch_0_MPORT_addr = _valid_0_T_1[7:0];
  assign tagMem_tagMatch_0_MPORT_data = tagMem[tagMem_tagMatch_0_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_tagMatch_1_MPORT_en = 1'h1;
  assign tagMem_tagMatch_1_MPORT_addr = 8'h40 + _GEN_455;
  assign tagMem_tagMatch_1_MPORT_data = tagMem[tagMem_tagMatch_1_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_tagMatch_2_MPORT_en = 1'h1;
  assign tagMem_tagMatch_2_MPORT_addr = _valid_2_T_2[7:0];
  assign tagMem_tagMatch_2_MPORT_data = tagMem[tagMem_tagMatch_2_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_tagMatch_3_MPORT_en = 1'h1;
  assign tagMem_tagMatch_3_MPORT_addr = _valid_3_T_2[7:0];
  assign tagMem_tagMatch_3_MPORT_data = tagMem[tagMem_tagMatch_3_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_write_back_addr_MPORT_en = _T ? 1'h0 : _GEN_395;
  assign tagMem_write_back_addr_MPORT_addr = replaceIndex[7:0];
  assign tagMem_write_back_addr_MPORT_data = tagMem[tagMem_write_back_addr_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_MPORT_4_data = {{10'd0}, tag};
  assign tagMem_MPORT_4_addr = unvalidIndex[7:0];
  assign tagMem_MPORT_4_mask = 1'h1;
  assign tagMem_MPORT_4_en = _T ? 1'h0 : _GEN_362;
  assign tagMem_MPORT_7_data = {{10'd0}, tag};
  assign tagMem_MPORT_7_addr = replaceIndex[7:0];
  assign tagMem_MPORT_7_mask = 1'h1;
  assign tagMem_MPORT_7_en = _T ? 1'h0 : _GEN_386;
  assign dirtyMem_MPORT_9_en = _T ? 1'h0 : _GEN_386;
  assign dirtyMem_MPORT_9_addr = replaceIndex[7:0];
  assign dirtyMem_MPORT_9_data = dirtyMem[dirtyMem_MPORT_9_addr]; // @[d_cache.scala 29:23]
  assign dirtyMem_MPORT_2_data = 1'h1;
  assign dirtyMem_MPORT_2_addr = tagIndex[7:0];
  assign dirtyMem_MPORT_2_mask = 1'h1;
  assign dirtyMem_MPORT_2_en = _T ? 1'h0 : _GEN_353;
  assign dirtyMem_MPORT_10_data = 1'h0;
  assign dirtyMem_MPORT_10_addr = replaceIndex[7:0];
  assign dirtyMem_MPORT_10_mask = 1'h1;
  assign dirtyMem_MPORT_10_en = _T ? 1'h0 : _GEN_395;
  assign io_to_lsu_rdata = _GEN_612[63:0];
  assign io_to_lsu_rvalid = state == 4'h1 ? anyMatch : _GEN_588; // @[d_cache.scala 194:27 213:26]
  assign io_to_lsu_bvalid = state == 4'h1 ? 1'h0 : _GEN_592; // @[d_cache.scala 194:27 217:26]
  assign io_to_axi_araddr = _GEN_594[31:0];
  assign io_to_axi_arlen = state == 4'h1 ? 8'h0 : _GEN_572; // @[d_cache.scala 194:27 197:25]
  assign io_to_axi_arvalid = state == 4'h1 ? 1'h0 : _GEN_570; // @[d_cache.scala 194:27 195:27]
  assign io_to_axi_rready = state == 4'h1 ? 1'h0 : _GEN_575; // @[d_cache.scala 194:27 200:26]
  assign io_to_axi_awaddr = state == 4'h1 ? 32'h0 : _GEN_576; // @[d_cache.scala 194:27 201:26]
  assign io_to_axi_awlen = state == 4'h1 ? 8'h0 : _GEN_578; // @[d_cache.scala 194:27 203:25]
  assign io_to_axi_awvalid = state == 4'h1 ? 1'h0 : _GEN_577; // @[d_cache.scala 194:27 202:27]
  assign io_to_axi_wdata = state == 4'h1 ? 64'h0 : _GEN_581; // @[d_cache.scala 194:27 206:25]
  assign io_to_axi_wstrb = state == 4'h1 ? 8'h0 : _GEN_582; // @[d_cache.scala 194:27 207:25]
  assign io_to_axi_wvalid = state == 4'h1 ? 1'h0 : _GEN_584; // @[d_cache.scala 194:27 209:26]
  assign io_to_axi_bready = state == 4'h1 ? 1'h0 : _GEN_585; // @[d_cache.scala 194:27 210:26]
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
      write_back_data <= 128'h0; // @[d_cache.scala 70:34]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          write_back_data <= _GEN_290;
        end
      end
    end
    write_back_addr <= _GEN_518[31:0]; // @[d_cache.scala 71:{34,34}]
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_0 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          receive_data_0 <= _GEN_250;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_1 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          receive_data_1 <= _GEN_251;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 76:30]
      receive_num <= 3'h0; // @[d_cache.scala 76:30]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (4'h1 == state) begin // @[d_cache.scala 101:18]
        if (!(anyMatch)) begin // @[d_cache.scala 112:27]
          receive_num <= 3'h0; // @[d_cache.scala 118:29]
        end
      end else if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
        receive_num <= _GEN_252;
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_0 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_0 <= _GEN_262;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_1 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_1 <= _GEN_263;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_2 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_2 <= _GEN_264;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_3 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_3 <= _GEN_265;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_4 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_4 <= _GEN_266;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_5 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_5 <= _GEN_267;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_6 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_6 <= _GEN_268;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_7 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_7 <= _GEN_269;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_8 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_8 <= _GEN_270;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_9 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_9 <= _GEN_271;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_10 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_10 <= _GEN_272;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_11 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_11 <= _GEN_273;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_12 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_12 <= _GEN_274;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_13 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_13 <= _GEN_275;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_14 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_14 <= _GEN_276;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_15 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_15 <= _GEN_277;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 95:24]
      state <= 4'h0; // @[d_cache.scala 95:24]
    end else if (4'h0 == state) begin // @[d_cache.scala 101:18]
      if ((io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000) begin // @[d_cache.scala 103:99]
        state <= 4'h0; // @[d_cache.scala 104:23]
      end else if (io_from_lsu_arvalid) begin // @[d_cache.scala 105:44]
        state <= 4'h1; // @[d_cache.scala 106:23]
      end else begin
        state <= _GEN_16;
      end
    end else if (4'h1 == state) begin // @[d_cache.scala 101:18]
      if (anyMatch) begin // @[d_cache.scala 112:27]
        state <= 4'h0;
      end else begin
        state <= 4'h3; // @[d_cache.scala 117:23]
      end
    end else if (4'h2 == state) begin // @[d_cache.scala 101:18]
      state <= _GEN_23;
    end else begin
      state <= _GEN_253;
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
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    cacheLine[initvar] = _RAND_0[127:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    validMem[initvar] = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    tagMem[initvar] = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    dirtyMem[initvar] = _RAND_3[0:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {4{`RANDOM}};
  write_back_data = _RAND_4[127:0];
  _RAND_5 = {1{`RANDOM}};
  write_back_addr = _RAND_5[31:0];
  _RAND_6 = {2{`RANDOM}};
  receive_data_0 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  receive_data_1 = _RAND_7[63:0];
  _RAND_8 = {1{`RANDOM}};
  receive_num = _RAND_8[2:0];
  _RAND_9 = {1{`RANDOM}};
  quene_0 = _RAND_9[7:0];
  _RAND_10 = {1{`RANDOM}};
  quene_1 = _RAND_10[7:0];
  _RAND_11 = {1{`RANDOM}};
  quene_2 = _RAND_11[7:0];
  _RAND_12 = {1{`RANDOM}};
  quene_3 = _RAND_12[7:0];
  _RAND_13 = {1{`RANDOM}};
  quene_4 = _RAND_13[7:0];
  _RAND_14 = {1{`RANDOM}};
  quene_5 = _RAND_14[7:0];
  _RAND_15 = {1{`RANDOM}};
  quene_6 = _RAND_15[7:0];
  _RAND_16 = {1{`RANDOM}};
  quene_7 = _RAND_16[7:0];
  _RAND_17 = {1{`RANDOM}};
  quene_8 = _RAND_17[7:0];
  _RAND_18 = {1{`RANDOM}};
  quene_9 = _RAND_18[7:0];
  _RAND_19 = {1{`RANDOM}};
  quene_10 = _RAND_19[7:0];
  _RAND_20 = {1{`RANDOM}};
  quene_11 = _RAND_20[7:0];
  _RAND_21 = {1{`RANDOM}};
  quene_12 = _RAND_21[7:0];
  _RAND_22 = {1{`RANDOM}};
  quene_13 = _RAND_22[7:0];
  _RAND_23 = {1{`RANDOM}};
  quene_14 = _RAND_23[7:0];
  _RAND_24 = {1{`RANDOM}};
  quene_15 = _RAND_24[7:0];
  _RAND_25 = {1{`RANDOM}};
  state = _RAND_25[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
