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
  reg [127:0] cacheLine [0:63]; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_1_en; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_MPORT_1_addr; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_MPORT_1_data; // @[d_cache.scala 24:24]
  wire  cacheLine_write_back_data_MPORT_en; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_write_back_data_MPORT_addr; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_write_back_data_MPORT_data; // @[d_cache.scala 24:24]
  wire  cacheLine_io_to_lsu_rdata_MPORT_en; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_io_to_lsu_rdata_MPORT_addr; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_io_to_lsu_rdata_MPORT_data; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_MPORT_data; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_MPORT_addr; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_mask; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_en; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_MPORT_3_data; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_MPORT_3_addr; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_3_mask; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_3_en; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_MPORT_6_data; // @[d_cache.scala 24:24]
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
  wire [3:0] offset = io_from_lsu_araddr[3:0]; // @[d_cache.scala 20:36]
  wire [3:0] index = io_from_lsu_araddr[7:4]; // @[d_cache.scala 21:35]
  wire [23:0] tag = io_from_lsu_araddr[31:8]; // @[d_cache.scala 22:33]
  wire [7:0] _GEN_423 = {{4'd0}, index}; // @[d_cache.scala 41:48]
  wire [8:0] _valid_0_T_1 = {{1'd0}, _GEN_423}; // @[d_cache.scala 41:48]
  wire [7:0] _valid_1_T_2 = 8'h10 + _GEN_423; // @[d_cache.scala 41:48]
  wire [8:0] _GEN_427 = {{5'd0}, index}; // @[d_cache.scala 41:48]
  wire [8:0] _valid_2_T_2 = 9'h20 + _GEN_427; // @[d_cache.scala 41:48]
  wire [8:0] _valid_3_T_2 = 9'h30 + _GEN_427; // @[d_cache.scala 41:48]
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
  wire [3:0] _unvalidIndex_T_1 = 4'h4 + index; // @[d_cache.scala 50:49]
  wire [16:0] _GEN_473 = {{15'd0}, foundUnvalidIndex}; // @[d_cache.scala 50:42]
  wire [16:0] unvalidIndex = _GEN_473 << _unvalidIndex_T_1; // @[d_cache.scala 50:42]
  wire [31:0] _GEN_433 = {{8'd0}, tag}; // @[d_cache.scala 55:71]
  wire  tagMatch_0 = valid_0 & tagMem_tagMatch_0_MPORT_data == _GEN_433; // @[d_cache.scala 55:33]
  wire  tagMatch_1 = valid_1 & tagMem_tagMatch_1_MPORT_data == _GEN_433; // @[d_cache.scala 55:33]
  wire  tagMatch_2 = valid_2 & tagMem_tagMatch_2_MPORT_data == _GEN_433; // @[d_cache.scala 55:33]
  wire  tagMatch_3 = valid_3 & tagMem_tagMatch_3_MPORT_data == _GEN_433; // @[d_cache.scala 55:33]
  wire  anyMatch = tagMatch_0 | tagMatch_1 | tagMatch_2 | tagMatch_3; // @[d_cache.scala 57:38]
  wire [1:0] _foundtagIndex_T = tagMatch_3 ? 2'h3 : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] _foundtagIndex_T_1 = tagMatch_2 ? 2'h2 : _foundtagIndex_T; // @[Mux.scala 101:16]
  wire [1:0] _foundtagIndex_T_2 = tagMatch_1 ? 2'h1 : _foundtagIndex_T_1; // @[Mux.scala 101:16]
  wire [1:0] foundtagIndex = tagMatch_0 ? 2'h0 : _foundtagIndex_T_2; // @[Mux.scala 101:16]
  wire [16:0] _GEN_475 = {{15'd0}, foundtagIndex}; // @[d_cache.scala 64:34]
  wire [16:0] tagIndex = _GEN_475 << _unvalidIndex_T_1; // @[d_cache.scala 64:34]
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
  wire [16:0] _GEN_479 = {{15'd0}, replace_way}; // @[d_cache.scala 80:33]
  wire [16:0] _replaceIndex_T_2 = _GEN_479 << _unvalidIndex_T_1; // @[d_cache.scala 80:33]
  wire [6:0] shift_bit = {offset, 3'h0}; // @[d_cache.scala 82:28]
  wire [63:0] _wmask_T_4 = io_from_lsu_wstrb == 8'hff ? 64'hffffffffffffffff : 64'h0; // @[d_cache.scala 88:20]
  wire [63:0] _wmask_T_5 = io_from_lsu_wstrb == 8'hf ? 64'hffffffff : _wmask_T_4; // @[d_cache.scala 87:20]
  wire [63:0] _wmask_T_6 = io_from_lsu_wstrb == 8'h3 ? 64'hffff : _wmask_T_5; // @[d_cache.scala 86:20]
  wire [63:0] wmask = io_from_lsu_wstrb == 8'h1 ? 64'hff : _wmask_T_6; // @[d_cache.scala 85:20]
  reg [3:0] state; // @[d_cache.scala 95:24]
  wire  _T_1 = ~reset; // @[d_cache.scala 96:11]
  wire  _T_4 = 4'h0 == state; // @[d_cache.scala 101:18]
  wire  _T_7 = (io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000; // @[d_cache.scala 103:60]
  wire [3:0] _GEN_16 = io_from_lsu_awvalid ? 4'h2 : state; // @[d_cache.scala 107:44 108:23 95:24]
  wire [63:0] _T_11 = io_from_lsu_wdata & wmask; // @[d_cache.scala 127:60]
  wire [190:0] _GEN_480 = {{127'd0}, _T_11}; // @[d_cache.scala 127:69]
  wire [190:0] _T_12 = _GEN_480 << shift_bit; // @[d_cache.scala 127:69]
  wire [190:0] _GEN_485 = {{127'd0}, wmask}; // @[d_cache.scala 127:116]
  wire [190:0] _T_14 = _GEN_485 << shift_bit; // @[d_cache.scala 127:116]
  wire [190:0] _T_15 = ~_T_14; // @[d_cache.scala 127:108]
  wire [190:0] _GEN_451 = {{63'd0}, cacheLine_MPORT_1_data}; // @[d_cache.scala 127:106]
  wire [190:0] _T_16 = _GEN_451 & _T_15; // @[d_cache.scala 127:106]
  wire [190:0] _T_17 = _T_12 | _T_16; // @[d_cache.scala 127:83]
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
  wire  _T_24 = ~allvalid; // @[d_cache.scala 149:18]
  wire [9:0] _GEN_455 = {_GEN_15, 2'h0}; // @[d_cache.scala 157:46]
  wire [10:0] _quene_T = {{1'd0}, _GEN_455}; // @[d_cache.scala 157:46]
  wire [10:0] _GEN_456 = {{9'd0}, foundUnvalidIndex}; // @[d_cache.scala 157:53]
  wire [10:0] _quene_T_1 = _quene_T | _GEN_456; // @[d_cache.scala 157:53]
  wire [7:0] _GEN_39 = 4'h0 == index ? _quene_T_1[7:0] : quene_0; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_40 = 4'h1 == index ? _quene_T_1[7:0] : quene_1; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_41 = 4'h2 == index ? _quene_T_1[7:0] : quene_2; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_42 = 4'h3 == index ? _quene_T_1[7:0] : quene_3; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_43 = 4'h4 == index ? _quene_T_1[7:0] : quene_4; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_44 = 4'h5 == index ? _quene_T_1[7:0] : quene_5; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_45 = 4'h6 == index ? _quene_T_1[7:0] : quene_6; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_46 = 4'h7 == index ? _quene_T_1[7:0] : quene_7; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_47 = 4'h8 == index ? _quene_T_1[7:0] : quene_8; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_48 = 4'h9 == index ? _quene_T_1[7:0] : quene_9; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_49 = 4'ha == index ? _quene_T_1[7:0] : quene_10; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_50 = 4'hb == index ? _quene_T_1[7:0] : quene_11; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_51 = 4'hc == index ? _quene_T_1[7:0] : quene_12; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_52 = 4'hd == index ? _quene_T_1[7:0] : quene_13; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_53 = 4'he == index ? _quene_T_1[7:0] : quene_14; // @[d_cache.scala 157:{30,30} 77:24]
  wire [7:0] _GEN_54 = 4'hf == index ? _quene_T_1[7:0] : quene_15; // @[d_cache.scala 157:{30,30} 77:24]
  wire [31:0] replaceIndex = {{15'd0}, _replaceIndex_T_2}; // @[d_cache.scala 66:28 80:18]
  wire [10:0] _GEN_462 = {{9'd0}, replace_way}; // @[d_cache.scala 162:53]
  wire [10:0] _quene_T_3 = _quene_T | _GEN_462; // @[d_cache.scala 162:53]
  wire [7:0] _GEN_55 = 4'h0 == index ? _quene_T_3[7:0] : quene_0; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_56 = 4'h1 == index ? _quene_T_3[7:0] : quene_1; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_57 = 4'h2 == index ? _quene_T_3[7:0] : quene_2; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_58 = 4'h3 == index ? _quene_T_3[7:0] : quene_3; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_59 = 4'h4 == index ? _quene_T_3[7:0] : quene_4; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_60 = 4'h5 == index ? _quene_T_3[7:0] : quene_5; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_61 = 4'h6 == index ? _quene_T_3[7:0] : quene_6; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_62 = 4'h7 == index ? _quene_T_3[7:0] : quene_7; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_63 = 4'h8 == index ? _quene_T_3[7:0] : quene_8; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_64 = 4'h9 == index ? _quene_T_3[7:0] : quene_9; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_65 = 4'ha == index ? _quene_T_3[7:0] : quene_10; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_66 = 4'hb == index ? _quene_T_3[7:0] : quene_11; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_67 = 4'hc == index ? _quene_T_3[7:0] : quene_12; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_68 = 4'hd == index ? _quene_T_3[7:0] : quene_13; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_69 = 4'he == index ? _quene_T_3[7:0] : quene_14; // @[d_cache.scala 162:{30,30} 77:24]
  wire [7:0] _GEN_70 = 4'hf == index ? _quene_T_3[7:0] : quene_15; // @[d_cache.scala 162:{30,30} 77:24]
  wire  _T_34 = dirtyMem_MPORT_9_data; // @[d_cache.scala 163:44]
  wire [39:0] _write_back_addr_T_2 = {tagMem_write_back_addr_MPORT_data,index,4'h0}; // @[Cat.scala 31:58]
  wire [127:0] _GEN_74 = dirtyMem_MPORT_9_data ? cacheLine_write_back_data_MPORT_data : write_back_data; // @[d_cache.scala 163:51 165:37 70:34]
  wire [39:0] _GEN_76 = dirtyMem_MPORT_9_data ? _write_back_addr_T_2 : {{8'd0}, write_back_addr}; // @[d_cache.scala 163:51 166:37 71:34]
  wire [3:0] _GEN_80 = dirtyMem_MPORT_9_data ? 4'h6 : 4'h1; // @[d_cache.scala 163:51 168:27 170:27]
  wire [3:0] _GEN_81 = ~allvalid ? 4'h1 : _GEN_80; // @[d_cache.scala 149:28 150:23]
  wire [7:0] _GEN_90 = ~allvalid ? _GEN_39 : _GEN_55; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_91 = ~allvalid ? _GEN_40 : _GEN_56; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_92 = ~allvalid ? _GEN_41 : _GEN_57; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_93 = ~allvalid ? _GEN_42 : _GEN_58; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_94 = ~allvalid ? _GEN_43 : _GEN_59; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_95 = ~allvalid ? _GEN_44 : _GEN_60; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_96 = ~allvalid ? _GEN_45 : _GEN_61; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_97 = ~allvalid ? _GEN_46 : _GEN_62; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_98 = ~allvalid ? _GEN_47 : _GEN_63; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_99 = ~allvalid ? _GEN_48 : _GEN_64; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_100 = ~allvalid ? _GEN_49 : _GEN_65; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_101 = ~allvalid ? _GEN_50 : _GEN_66; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_102 = ~allvalid ? _GEN_51 : _GEN_67; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_103 = ~allvalid ? _GEN_52 : _GEN_68; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_104 = ~allvalid ? _GEN_53 : _GEN_69; // @[d_cache.scala 149:28]
  wire [7:0] _GEN_105 = ~allvalid ? _GEN_54 : _GEN_70; // @[d_cache.scala 149:28]
  wire  _GEN_108 = ~allvalid ? 1'h0 : 1'h1; // @[d_cache.scala 149:28 24:24 159:26]
  wire  _GEN_117 = ~allvalid ? 1'h0 : _T_34; // @[d_cache.scala 149:28 24:24]
  wire [127:0] _GEN_118 = ~allvalid ? write_back_data : _GEN_74; // @[d_cache.scala 149:28 70:34]
  wire [39:0] _GEN_120 = ~allvalid ? {{8'd0}, write_back_addr} : _GEN_76; // @[d_cache.scala 149:28 71:34]
  wire [127:0] _write_back_data_T_1 = {{64'd0}, write_back_data[127:64]}; // @[d_cache.scala 176:52]
  wire [127:0] _GEN_124 = io_from_axi_wready ? _write_back_data_T_1 : write_back_data; // @[d_cache.scala 175:37 176:33 70:34]
  wire [3:0] _GEN_125 = io_from_axi_bvalid ? 4'h1 : state; // @[d_cache.scala 178:37 179:23 95:24]
  wire [3:0] _GEN_126 = io_from_axi_rvalid ? 4'h0 : state; // @[d_cache.scala 183:37 184:23 95:24]
  wire [3:0] _GEN_128 = 4'h8 == state ? _GEN_38 : state; // @[d_cache.scala 101:18 95:24]
  wire [3:0] _GEN_129 = 4'h7 == state ? _GEN_126 : _GEN_128; // @[d_cache.scala 101:18]
  wire [127:0] _GEN_130 = 4'h6 == state ? _GEN_124 : write_back_data; // @[d_cache.scala 101:18 70:34]
  wire [3:0] _GEN_131 = 4'h6 == state ? _GEN_125 : _GEN_129; // @[d_cache.scala 101:18]
  wire [3:0] _GEN_132 = 4'h5 == state ? _GEN_81 : _GEN_131; // @[d_cache.scala 101:18]
  wire [7:0] _GEN_141 = 4'h5 == state ? _GEN_90 : quene_0; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_142 = 4'h5 == state ? _GEN_91 : quene_1; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_143 = 4'h5 == state ? _GEN_92 : quene_2; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_144 = 4'h5 == state ? _GEN_93 : quene_3; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_145 = 4'h5 == state ? _GEN_94 : quene_4; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_146 = 4'h5 == state ? _GEN_95 : quene_5; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_147 = 4'h5 == state ? _GEN_96 : quene_6; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_148 = 4'h5 == state ? _GEN_97 : quene_7; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_149 = 4'h5 == state ? _GEN_98 : quene_8; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_150 = 4'h5 == state ? _GEN_99 : quene_9; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_151 = 4'h5 == state ? _GEN_100 : quene_10; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_152 = 4'h5 == state ? _GEN_101 : quene_11; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_153 = 4'h5 == state ? _GEN_102 : quene_12; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_154 = 4'h5 == state ? _GEN_103 : quene_13; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_155 = 4'h5 == state ? _GEN_104 : quene_14; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_156 = 4'h5 == state ? _GEN_105 : quene_15; // @[d_cache.scala 101:18 77:24]
  wire [127:0] _GEN_169 = 4'h5 == state ? _GEN_118 : _GEN_130; // @[d_cache.scala 101:18]
  wire [39:0] _GEN_171 = 4'h5 == state ? _GEN_120 : {{8'd0}, write_back_addr}; // @[d_cache.scala 101:18 71:34]
  wire [3:0] _GEN_175 = 4'h4 == state ? _GEN_38 : _GEN_132; // @[d_cache.scala 101:18]
  wire  _GEN_178 = 4'h4 == state ? 1'h0 : 4'h5 == state & _T_24; // @[d_cache.scala 101:18 24:24]
  wire [7:0] _GEN_184 = 4'h4 == state ? quene_0 : _GEN_141; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_185 = 4'h4 == state ? quene_1 : _GEN_142; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_186 = 4'h4 == state ? quene_2 : _GEN_143; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_187 = 4'h4 == state ? quene_3 : _GEN_144; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_188 = 4'h4 == state ? quene_4 : _GEN_145; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_189 = 4'h4 == state ? quene_5 : _GEN_146; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_190 = 4'h4 == state ? quene_6 : _GEN_147; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_191 = 4'h4 == state ? quene_7 : _GEN_148; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_192 = 4'h4 == state ? quene_8 : _GEN_149; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_193 = 4'h4 == state ? quene_9 : _GEN_150; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_194 = 4'h4 == state ? quene_10 : _GEN_151; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_195 = 4'h4 == state ? quene_11 : _GEN_152; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_196 = 4'h4 == state ? quene_12 : _GEN_153; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_197 = 4'h4 == state ? quene_13 : _GEN_154; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_198 = 4'h4 == state ? quene_14 : _GEN_155; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_199 = 4'h4 == state ? quene_15 : _GEN_156; // @[d_cache.scala 101:18 77:24]
  wire  _GEN_202 = 4'h4 == state ? 1'h0 : 4'h5 == state & _GEN_108; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_211 = 4'h4 == state ? 1'h0 : 4'h5 == state & _GEN_117; // @[d_cache.scala 101:18 24:24]
  wire [127:0] _GEN_212 = 4'h4 == state ? write_back_data : _GEN_169; // @[d_cache.scala 101:18 70:34]
  wire [39:0] _GEN_214 = 4'h4 == state ? {{8'd0}, write_back_addr} : _GEN_171; // @[d_cache.scala 101:18 71:34]
  wire [63:0] _GEN_218 = 4'h3 == state ? _GEN_34 : receive_data_0; // @[d_cache.scala 101:18 75:31]
  wire [63:0] _GEN_219 = 4'h3 == state ? _GEN_35 : receive_data_1; // @[d_cache.scala 101:18 75:31]
  wire [2:0] _GEN_220 = 4'h3 == state ? _GEN_36 : receive_num; // @[d_cache.scala 101:18 76:30]
  wire [3:0] _GEN_221 = 4'h3 == state ? _GEN_37 : _GEN_175; // @[d_cache.scala 101:18]
  wire  _GEN_224 = 4'h3 == state ? 1'h0 : _GEN_178; // @[d_cache.scala 101:18 24:24]
  wire [7:0] _GEN_230 = 4'h3 == state ? quene_0 : _GEN_184; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_231 = 4'h3 == state ? quene_1 : _GEN_185; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_232 = 4'h3 == state ? quene_2 : _GEN_186; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_233 = 4'h3 == state ? quene_3 : _GEN_187; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_234 = 4'h3 == state ? quene_4 : _GEN_188; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_235 = 4'h3 == state ? quene_5 : _GEN_189; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_236 = 4'h3 == state ? quene_6 : _GEN_190; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_237 = 4'h3 == state ? quene_7 : _GEN_191; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_238 = 4'h3 == state ? quene_8 : _GEN_192; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_239 = 4'h3 == state ? quene_9 : _GEN_193; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_240 = 4'h3 == state ? quene_10 : _GEN_194; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_241 = 4'h3 == state ? quene_11 : _GEN_195; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_242 = 4'h3 == state ? quene_12 : _GEN_196; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_243 = 4'h3 == state ? quene_13 : _GEN_197; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_244 = 4'h3 == state ? quene_14 : _GEN_198; // @[d_cache.scala 101:18 77:24]
  wire [7:0] _GEN_245 = 4'h3 == state ? quene_15 : _GEN_199; // @[d_cache.scala 101:18 77:24]
  wire  _GEN_248 = 4'h3 == state ? 1'h0 : _GEN_202; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_257 = 4'h3 == state ? 1'h0 : _GEN_211; // @[d_cache.scala 101:18 24:24]
  wire [127:0] _GEN_258 = 4'h3 == state ? write_back_data : _GEN_212; // @[d_cache.scala 101:18 70:34]
  wire [39:0] _GEN_260 = 4'h3 == state ? {{8'd0}, write_back_addr} : _GEN_214; // @[d_cache.scala 101:18 71:34]
  wire  _GEN_277 = 4'h2 == state ? 1'h0 : _GEN_224; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_301 = 4'h2 == state ? 1'h0 : _GEN_248; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_310 = 4'h2 == state ? 1'h0 : _GEN_257; // @[d_cache.scala 101:18 24:24]
  wire [39:0] _GEN_313 = 4'h2 == state ? {{8'd0}, write_back_addr} : _GEN_260; // @[d_cache.scala 101:18 71:34]
  wire  _GEN_321 = 4'h1 == state ? 1'h0 : 4'h2 == state & anyMatch; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_330 = 4'h1 == state ? 1'h0 : _GEN_277; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_354 = 4'h1 == state ? 1'h0 : _GEN_301; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_363 = 4'h1 == state ? 1'h0 : _GEN_310; // @[d_cache.scala 101:18 24:24]
  wire [39:0] _GEN_366 = 4'h1 == state ? {{8'd0}, write_back_addr} : _GEN_313; // @[d_cache.scala 101:18 71:34]
  wire [39:0] _GEN_419 = 4'h0 == state ? {{8'd0}, write_back_addr} : _GEN_366; // @[d_cache.scala 101:18 71:34]
  wire [127:0] _io_to_lsu_rdata_T_1 = cacheLine_io_to_lsu_rdata_MPORT_data >> shift_bit; // @[d_cache.scala 211:48]
  wire [63:0] _GEN_470 = {{32'd0}, io_from_lsu_araddr}; // @[d_cache.scala 252:49]
  wire [63:0] _io_to_axi_araddr_T = _GEN_470 & 64'hfffffffffffffff0; // @[d_cache.scala 252:49]
  wire  _T_51 = state == 4'h0 & _T_7; // @[d_cache.scala 320:27]
  wire [63:0] _GEN_424 = state == 4'h0 & _T_7 ? io_from_axi_rdata : 64'h0; // @[d_cache.scala 320:117 321:23 324:29]
  wire  _GEN_426 = state == 4'h0 & _T_7 & io_from_axi_rvalid; // @[d_cache.scala 320:117 321:23 326:30]
  wire  _GEN_429 = state == 4'h0 & _T_7 & io_from_axi_bvalid; // @[d_cache.scala 320:117 321:23 329:30]
  wire  _GEN_434 = state == 4'h0 & _T_7 & io_from_lsu_arvalid; // @[d_cache.scala 320:117 322:23 331:31]
  wire [31:0] _GEN_436 = state == 4'h0 & _T_7 ? io_from_lsu_awaddr : 32'h0; // @[d_cache.scala 320:117 322:23 337:30]
  wire  _GEN_440 = state == 4'h0 & _T_7 & io_from_lsu_awvalid; // @[d_cache.scala 320:117 322:23 338:31]
  wire [63:0] _GEN_441 = state == 4'h0 & _T_7 ? io_from_lsu_wdata : 64'h0; // @[d_cache.scala 320:117 322:23 342:29]
  wire [7:0] _GEN_442 = state == 4'h0 & _T_7 ? io_from_lsu_wstrb : 8'h0; // @[d_cache.scala 320:117 322:23 343:29]
  wire  _GEN_444 = state == 4'h0 & _T_7 & io_from_lsu_wvalid; // @[d_cache.scala 320:117 322:23 345:30]
  wire [63:0] _GEN_447 = state == 4'h7 ? io_from_axi_rdata : _GEN_424; // @[d_cache.scala 316:30 317:19]
  wire  _GEN_449 = state == 4'h7 ? io_from_axi_rvalid : _GEN_426; // @[d_cache.scala 316:30 317:19]
  wire  _GEN_452 = state == 4'h7 ? io_from_axi_bvalid : _GEN_429; // @[d_cache.scala 316:30 317:19]
  wire  _GEN_457 = state == 4'h7 ? io_from_lsu_arvalid : _GEN_434; // @[d_cache.scala 316:30 318:19]
  wire [31:0] _GEN_459 = state == 4'h7 ? io_from_lsu_awaddr : _GEN_436; // @[d_cache.scala 316:30 318:19]
  wire  _GEN_463 = state == 4'h7 ? io_from_lsu_awvalid : _GEN_440; // @[d_cache.scala 316:30 318:19]
  wire [63:0] _GEN_464 = state == 4'h7 ? io_from_lsu_wdata : _GEN_441; // @[d_cache.scala 316:30 318:19]
  wire [7:0] _GEN_465 = state == 4'h7 ? io_from_lsu_wstrb : _GEN_442; // @[d_cache.scala 316:30 318:19]
  wire  _GEN_467 = state == 4'h7 ? io_from_lsu_wvalid : _GEN_444; // @[d_cache.scala 316:30 318:19]
  wire  _GEN_468 = state == 4'h7 | _T_51; // @[d_cache.scala 316:30 318:19]
  wire [63:0] _GEN_469 = state == 4'h6 ? 64'h0 : _GEN_447; // @[d_cache.scala 292:35 293:25]
  wire  _GEN_471 = state == 4'h6 ? 1'h0 : _GEN_449; // @[d_cache.scala 292:35 295:26]
  wire  _GEN_474 = state == 4'h6 ? 1'h0 : _GEN_452; // @[d_cache.scala 292:35 298:26]
  wire  _GEN_476 = state == 4'h6 ? 1'h0 : _GEN_457; // @[d_cache.scala 292:35 300:27]
  wire [31:0] _GEN_477 = state == 4'h6 ? 32'h0 : io_from_lsu_araddr; // @[d_cache.scala 292:35 301:26]
  wire [7:0] _GEN_478 = state == 4'h6 ? 8'h1 : 8'h0; // @[d_cache.scala 292:35 302:25]
  wire  _GEN_481 = state == 4'h6 ? 1'h0 : 1'h1; // @[d_cache.scala 292:35 305:26]
  wire [31:0] _GEN_482 = state == 4'h6 ? write_back_addr : _GEN_459; // @[d_cache.scala 292:35 306:26]
  wire  _GEN_483 = state == 4'h6 | _GEN_463; // @[d_cache.scala 292:35 307:27]
  wire [63:0] _GEN_487 = state == 4'h6 ? write_back_data[63:0] : _GEN_464; // @[d_cache.scala 292:35 311:25]
  wire [7:0] _GEN_488 = state == 4'h6 ? 8'hff : _GEN_465; // @[d_cache.scala 292:35 312:25]
  wire  _GEN_490 = state == 4'h6 | _GEN_467; // @[d_cache.scala 292:35 314:26]
  wire  _GEN_491 = state == 4'h6 | _GEN_468; // @[d_cache.scala 292:35 315:26]
  wire [63:0] _GEN_492 = state == 4'h4 | state == 4'h8 ? 64'h0 : _GEN_469; // @[d_cache.scala 267:50 268:25]
  wire  _GEN_494 = state == 4'h4 | state == 4'h8 ? 1'h0 : _GEN_471; // @[d_cache.scala 267:50 270:26]
  wire  _GEN_497 = state == 4'h4 | state == 4'h8 ? io_from_axi_bvalid : _GEN_474; // @[d_cache.scala 267:50 273:26]
  wire  _GEN_499 = state == 4'h4 | state == 4'h8 ? 1'h0 : _GEN_476; // @[d_cache.scala 267:50 275:27]
  wire [31:0] _GEN_500 = state == 4'h4 | state == 4'h8 ? 32'h0 : _GEN_477; // @[d_cache.scala 267:50 276:26]
  wire [7:0] _GEN_501 = state == 4'h4 | state == 4'h8 ? 8'h0 : _GEN_478; // @[d_cache.scala 267:50 277:25]
  wire  _GEN_504 = state == 4'h4 | state == 4'h8 | _GEN_481; // @[d_cache.scala 267:50 280:26]
  wire [31:0] _GEN_505 = state == 4'h4 | state == 4'h8 ? io_from_lsu_awaddr : _GEN_482; // @[d_cache.scala 267:50 281:26]
  wire  _GEN_506 = state == 4'h4 | state == 4'h8 ? io_from_lsu_awvalid : _GEN_483; // @[d_cache.scala 267:50 282:27]
  wire [63:0] _GEN_510 = state == 4'h4 | state == 4'h8 ? io_from_lsu_wdata : _GEN_487; // @[d_cache.scala 267:50 286:25]
  wire [7:0] _GEN_511 = state == 4'h4 | state == 4'h8 ? io_from_lsu_wstrb : _GEN_488; // @[d_cache.scala 267:50 287:25]
  wire  _GEN_513 = state == 4'h4 | state == 4'h8 ? io_from_lsu_wvalid : _GEN_490; // @[d_cache.scala 267:50 289:26]
  wire  _GEN_514 = state == 4'h4 | state == 4'h8 | _GEN_491; // @[d_cache.scala 267:50 290:26]
  wire [63:0] _GEN_515 = state == 4'h3 ? 64'h0 : _GEN_492; // @[d_cache.scala 243:31 244:25]
  wire  _GEN_517 = state == 4'h3 ? 1'h0 : _GEN_494; // @[d_cache.scala 243:31 246:26]
  wire  _GEN_520 = state == 4'h3 ? 1'h0 : _GEN_497; // @[d_cache.scala 243:31 249:26]
  wire  _GEN_522 = state == 4'h3 | _GEN_499; // @[d_cache.scala 243:31 251:27]
  wire [63:0] _GEN_523 = state == 4'h3 ? _io_to_axi_araddr_T : {{32'd0}, _GEN_500}; // @[d_cache.scala 243:31 252:26]
  wire [7:0] _GEN_524 = state == 4'h3 ? 8'h1 : _GEN_501; // @[d_cache.scala 243:31 253:25]
  wire  _GEN_527 = state == 4'h3 | _GEN_504; // @[d_cache.scala 243:31 256:26]
  wire [31:0] _GEN_528 = state == 4'h3 ? 32'h0 : _GEN_505; // @[d_cache.scala 243:31 257:26]
  wire  _GEN_529 = state == 4'h3 ? 1'h0 : _GEN_506; // @[d_cache.scala 243:31 258:27]
  wire [7:0] _GEN_530 = state == 4'h3 ? 8'h0 : _GEN_501; // @[d_cache.scala 243:31 259:25]
  wire [63:0] _GEN_533 = state == 4'h3 ? 64'h0 : _GEN_510; // @[d_cache.scala 243:31 262:25]
  wire [7:0] _GEN_534 = state == 4'h3 ? 8'h0 : _GEN_511; // @[d_cache.scala 243:31 263:25]
  wire  _GEN_536 = state == 4'h3 ? 1'h0 : _GEN_513; // @[d_cache.scala 243:31 265:26]
  wire  _GEN_537 = state == 4'h3 ? 1'h0 : _GEN_514; // @[d_cache.scala 243:31 266:26]
  wire  _GEN_538 = state == 4'h2 ? 1'h0 : _GEN_522; // @[d_cache.scala 219:33 220:27]
  wire [63:0] _GEN_539 = state == 4'h2 ? {{32'd0}, io_from_lsu_araddr} : _GEN_523; // @[d_cache.scala 219:33 221:26]
  wire [7:0] _GEN_540 = state == 4'h2 ? 8'h0 : _GEN_524; // @[d_cache.scala 219:33 222:25]
  wire  _GEN_543 = state == 4'h2 ? 1'h0 : _GEN_527; // @[d_cache.scala 219:33 225:26]
  wire [31:0] _GEN_544 = state == 4'h2 ? 32'h0 : _GEN_528; // @[d_cache.scala 219:33 226:26]
  wire  _GEN_545 = state == 4'h2 ? 1'h0 : _GEN_529; // @[d_cache.scala 219:33 227:27]
  wire [7:0] _GEN_546 = state == 4'h2 ? 8'h0 : _GEN_530; // @[d_cache.scala 219:33 228:25]
  wire [63:0] _GEN_549 = state == 4'h2 ? 64'h0 : _GEN_533; // @[d_cache.scala 219:33 231:25]
  wire [7:0] _GEN_550 = state == 4'h2 ? 8'h0 : _GEN_534; // @[d_cache.scala 219:33 232:25]
  wire  _GEN_552 = state == 4'h2 ? 1'h0 : _GEN_536; // @[d_cache.scala 219:33 234:26]
  wire  _GEN_553 = state == 4'h2 ? 1'h0 : _GEN_537; // @[d_cache.scala 219:33 235:26]
  wire [63:0] _GEN_554 = state == 4'h2 ? 64'h0 : _GEN_515; // @[d_cache.scala 219:33 236:25]
  wire  _GEN_556 = state == 4'h2 ? 1'h0 : _GEN_517; // @[d_cache.scala 219:33 238:26]
  wire  _GEN_560 = state == 4'h2 ? anyMatch : _GEN_520; // @[d_cache.scala 219:33 242:26]
  wire [63:0] _GEN_562 = state == 4'h1 ? {{32'd0}, io_from_lsu_araddr} : _GEN_539; // @[d_cache.scala 194:27 196:26]
  wire [127:0] _GEN_580 = state == 4'h1 ? _io_to_lsu_rdata_T_1 : {{64'd0}, _GEN_554}; // @[d_cache.scala 194:27 211:25]
  wire [39:0] _GEN_472 = reset ? 40'h0 : _GEN_419; // @[d_cache.scala 71:{34,34}]
  assign cacheLine_MPORT_1_en = _T_4 ? 1'h0 : _GEN_321;
  assign cacheLine_MPORT_1_addr = tagIndex[5:0];
  assign cacheLine_MPORT_1_data = cacheLine[cacheLine_MPORT_1_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_write_back_data_MPORT_en = _T_4 ? 1'h0 : _GEN_363;
  assign cacheLine_write_back_data_MPORT_addr = replaceIndex[5:0];
  assign cacheLine_write_back_data_MPORT_data = cacheLine[cacheLine_write_back_data_MPORT_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_io_to_lsu_rdata_MPORT_en = state == 4'h1;
  assign cacheLine_io_to_lsu_rdata_MPORT_addr = tagIndex[5:0];
  assign cacheLine_io_to_lsu_rdata_MPORT_data = cacheLine[cacheLine_io_to_lsu_rdata_MPORT_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_MPORT_data = _T_17[127:0];
  assign cacheLine_MPORT_addr = tagIndex[5:0];
  assign cacheLine_MPORT_mask = 1'h1;
  assign cacheLine_MPORT_en = _T_4 ? 1'h0 : _GEN_321;
  assign cacheLine_MPORT_3_data = {receive_data_1,receive_data_0};
  assign cacheLine_MPORT_3_addr = unvalidIndex[5:0];
  assign cacheLine_MPORT_3_mask = 1'h1;
  assign cacheLine_MPORT_3_en = _T_4 ? 1'h0 : _GEN_330;
  assign cacheLine_MPORT_6_data = {receive_data_1,receive_data_0};
  assign cacheLine_MPORT_6_addr = replaceIndex[5:0];
  assign cacheLine_MPORT_6_mask = 1'h1;
  assign cacheLine_MPORT_6_en = _T_4 ? 1'h0 : _GEN_354;
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
  assign validMem_MPORT_5_en = _T_4 ? 1'h0 : _GEN_330;
  assign validMem_MPORT_8_data = 1'h1;
  assign validMem_MPORT_8_addr = replaceIndex[5:0];
  assign validMem_MPORT_8_mask = 1'h1;
  assign validMem_MPORT_8_en = _T_4 ? 1'h0 : _GEN_354;
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
  assign tagMem_write_back_addr_MPORT_en = _T_4 ? 1'h0 : _GEN_363;
  assign tagMem_write_back_addr_MPORT_addr = replaceIndex[5:0];
  assign tagMem_write_back_addr_MPORT_data = tagMem[tagMem_write_back_addr_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_MPORT_4_data = {{8'd0}, tag};
  assign tagMem_MPORT_4_addr = unvalidIndex[5:0];
  assign tagMem_MPORT_4_mask = 1'h1;
  assign tagMem_MPORT_4_en = _T_4 ? 1'h0 : _GEN_330;
  assign tagMem_MPORT_7_data = {{8'd0}, tag};
  assign tagMem_MPORT_7_addr = replaceIndex[5:0];
  assign tagMem_MPORT_7_mask = 1'h1;
  assign tagMem_MPORT_7_en = _T_4 ? 1'h0 : _GEN_354;
  assign dirtyMem_MPORT_9_en = _T_4 ? 1'h0 : _GEN_354;
  assign dirtyMem_MPORT_9_addr = replaceIndex[5:0];
  assign dirtyMem_MPORT_9_data = dirtyMem[dirtyMem_MPORT_9_addr]; // @[d_cache.scala 29:23]
  assign dirtyMem_MPORT_2_data = 1'h1;
  assign dirtyMem_MPORT_2_addr = tagIndex[5:0];
  assign dirtyMem_MPORT_2_mask = 1'h1;
  assign dirtyMem_MPORT_2_en = _T_4 ? 1'h0 : _GEN_321;
  assign dirtyMem_MPORT_10_data = 1'h0;
  assign dirtyMem_MPORT_10_addr = replaceIndex[5:0];
  assign dirtyMem_MPORT_10_mask = 1'h1;
  assign dirtyMem_MPORT_10_en = _T_4 ? 1'h0 : _GEN_363;
  assign io_to_lsu_rdata = _GEN_580[63:0];
  assign io_to_lsu_rvalid = state == 4'h1 ? anyMatch : _GEN_556; // @[d_cache.scala 194:27 213:26]
  assign io_to_lsu_bvalid = state == 4'h1 ? 1'h0 : _GEN_560; // @[d_cache.scala 194:27 217:26]
  assign io_to_axi_araddr = _GEN_562[31:0];
  assign io_to_axi_arlen = state == 4'h1 ? 8'h0 : _GEN_540; // @[d_cache.scala 194:27 197:25]
  assign io_to_axi_arvalid = state == 4'h1 ? 1'h0 : _GEN_538; // @[d_cache.scala 194:27 195:27]
  assign io_to_axi_rready = state == 4'h1 ? 1'h0 : _GEN_543; // @[d_cache.scala 194:27 200:26]
  assign io_to_axi_awaddr = state == 4'h1 ? 32'h0 : _GEN_544; // @[d_cache.scala 194:27 201:26]
  assign io_to_axi_awlen = state == 4'h1 ? 8'h0 : _GEN_546; // @[d_cache.scala 194:27 203:25]
  assign io_to_axi_awvalid = state == 4'h1 ? 1'h0 : _GEN_545; // @[d_cache.scala 194:27 202:27]
  assign io_to_axi_wdata = state == 4'h1 ? 64'h0 : _GEN_549; // @[d_cache.scala 194:27 206:25]
  assign io_to_axi_wstrb = state == 4'h1 ? 8'h0 : _GEN_550; // @[d_cache.scala 194:27 207:25]
  assign io_to_axi_wvalid = state == 4'h1 ? 1'h0 : _GEN_552; // @[d_cache.scala 194:27 209:26]
  assign io_to_axi_bready = state == 4'h1 ? 1'h0 : _GEN_553; // @[d_cache.scala 194:27 210:26]
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
          write_back_data <= _GEN_258;
        end
      end
    end
    write_back_addr <= _GEN_472[31:0]; // @[d_cache.scala 71:{34,34}]
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_0 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          receive_data_0 <= _GEN_218;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_1 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          receive_data_1 <= _GEN_219;
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
        receive_num <= _GEN_220;
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_0 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_0 <= _GEN_230;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_1 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_1 <= _GEN_231;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_2 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_2 <= _GEN_232;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_3 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_3 <= _GEN_233;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_4 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_4 <= _GEN_234;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_5 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_5 <= _GEN_235;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_6 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_6 <= _GEN_236;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_7 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_7 <= _GEN_237;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_8 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_8 <= _GEN_238;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_9 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_9 <= _GEN_239;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_10 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_10 <= _GEN_240;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_11 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_11 <= _GEN_241;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_12 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_12 <= _GEN_242;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_13 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_13 <= _GEN_243;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_14 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_14 <= _GEN_244;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 77:24]
      quene_15 <= 8'h0; // @[d_cache.scala 77:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 101:18]
          quene_15 <= _GEN_245;
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
      state <= _GEN_221;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"d_cache state:%d validindex:%d tagindex:%d replaceindex:%d\n",state,unvalidIndex,
            tagIndex,replaceIndex); // @[d_cache.scala 96:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1) begin
          $fwrite(32'h80000002,"index:%d foundindex:%d %d\n\n",index,foundtagIndex,foundUnvalidIndex); // @[d_cache.scala 97:11]
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
  for (initvar = 0; initvar < 64; initvar = initvar+1)
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
