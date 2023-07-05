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
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [127:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
`endif // RANDOMIZE_REG_INIT
  reg [127:0] cacheLine [0:127]; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_1_en; // @[d_cache.scala 24:24]
  wire [6:0] cacheLine_MPORT_1_addr; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_MPORT_1_data; // @[d_cache.scala 24:24]
  wire  cacheLine_write_back_data_MPORT_en; // @[d_cache.scala 24:24]
  wire [6:0] cacheLine_write_back_data_MPORT_addr; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_write_back_data_MPORT_data; // @[d_cache.scala 24:24]
  wire  cacheLine_io_to_lsu_rdata_MPORT_en; // @[d_cache.scala 24:24]
  wire [6:0] cacheLine_io_to_lsu_rdata_MPORT_addr; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_io_to_lsu_rdata_MPORT_data; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_MPORT_data; // @[d_cache.scala 24:24]
  wire [6:0] cacheLine_MPORT_addr; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_mask; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_en; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_MPORT_3_data; // @[d_cache.scala 24:24]
  wire [6:0] cacheLine_MPORT_3_addr; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_3_mask; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_3_en; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_MPORT_8_data; // @[d_cache.scala 24:24]
  wire [6:0] cacheLine_MPORT_8_addr; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_8_mask; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_8_en; // @[d_cache.scala 24:24]
  reg  validMem [0:127]; // @[d_cache.scala 25:23]
  wire  validMem_valid_0_MPORT_en; // @[d_cache.scala 25:23]
  wire [6:0] validMem_valid_0_MPORT_addr; // @[d_cache.scala 25:23]
  wire  validMem_valid_0_MPORT_data; // @[d_cache.scala 25:23]
  wire  validMem_valid_1_MPORT_en; // @[d_cache.scala 25:23]
  wire [6:0] validMem_valid_1_MPORT_addr; // @[d_cache.scala 25:23]
  wire  validMem_valid_1_MPORT_data; // @[d_cache.scala 25:23]
  wire  validMem_valid_2_MPORT_en; // @[d_cache.scala 25:23]
  wire [6:0] validMem_valid_2_MPORT_addr; // @[d_cache.scala 25:23]
  wire  validMem_valid_2_MPORT_data; // @[d_cache.scala 25:23]
  wire  validMem_valid_3_MPORT_en; // @[d_cache.scala 25:23]
  wire [6:0] validMem_valid_3_MPORT_addr; // @[d_cache.scala 25:23]
  wire  validMem_valid_3_MPORT_data; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_5_data; // @[d_cache.scala 25:23]
  wire [6:0] validMem_MPORT_5_addr; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_5_mask; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_5_en; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_10_data; // @[d_cache.scala 25:23]
  wire [6:0] validMem_MPORT_10_addr; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_10_mask; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_10_en; // @[d_cache.scala 25:23]
  reg [31:0] tagMem [0:127]; // @[d_cache.scala 28:21]
  wire  tagMem_tagMatch_0_MPORT_en; // @[d_cache.scala 28:21]
  wire [6:0] tagMem_tagMatch_0_MPORT_addr; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_tagMatch_0_MPORT_data; // @[d_cache.scala 28:21]
  wire  tagMem_tagMatch_1_MPORT_en; // @[d_cache.scala 28:21]
  wire [6:0] tagMem_tagMatch_1_MPORT_addr; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_tagMatch_1_MPORT_data; // @[d_cache.scala 28:21]
  wire  tagMem_tagMatch_2_MPORT_en; // @[d_cache.scala 28:21]
  wire [6:0] tagMem_tagMatch_2_MPORT_addr; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_tagMatch_2_MPORT_data; // @[d_cache.scala 28:21]
  wire  tagMem_tagMatch_3_MPORT_en; // @[d_cache.scala 28:21]
  wire [6:0] tagMem_tagMatch_3_MPORT_addr; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_tagMatch_3_MPORT_data; // @[d_cache.scala 28:21]
  wire  tagMem_write_back_addr_MPORT_en; // @[d_cache.scala 28:21]
  wire [6:0] tagMem_write_back_addr_MPORT_addr; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_write_back_addr_MPORT_data; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_MPORT_4_data; // @[d_cache.scala 28:21]
  wire [6:0] tagMem_MPORT_4_addr; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_4_mask; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_4_en; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_MPORT_9_data; // @[d_cache.scala 28:21]
  wire [6:0] tagMem_MPORT_9_addr; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_9_mask; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_9_en; // @[d_cache.scala 28:21]
  reg  dirtyMem [0:127]; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_13_en; // @[d_cache.scala 29:23]
  wire [6:0] dirtyMem_MPORT_13_addr; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_13_data; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_2_data; // @[d_cache.scala 29:23]
  wire [6:0] dirtyMem_MPORT_2_addr; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_2_mask; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_2_en; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_14_data; // @[d_cache.scala 29:23]
  wire [6:0] dirtyMem_MPORT_14_addr; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_14_mask; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_14_en; // @[d_cache.scala 29:23]
  reg [7:0] quene [0:31]; // @[d_cache.scala 77:20]
  wire  quene_replace_way_MPORT_en; // @[d_cache.scala 77:20]
  wire [4:0] quene_replace_way_MPORT_addr; // @[d_cache.scala 77:20]
  wire [7:0] quene_replace_way_MPORT_data; // @[d_cache.scala 77:20]
  wire  quene_MPORT_7_en; // @[d_cache.scala 77:20]
  wire [4:0] quene_MPORT_7_addr; // @[d_cache.scala 77:20]
  wire [7:0] quene_MPORT_7_data; // @[d_cache.scala 77:20]
  wire  quene_MPORT_12_en; // @[d_cache.scala 77:20]
  wire [4:0] quene_MPORT_12_addr; // @[d_cache.scala 77:20]
  wire [7:0] quene_MPORT_12_data; // @[d_cache.scala 77:20]
  wire [7:0] quene_MPORT_6_data; // @[d_cache.scala 77:20]
  wire [4:0] quene_MPORT_6_addr; // @[d_cache.scala 77:20]
  wire  quene_MPORT_6_mask; // @[d_cache.scala 77:20]
  wire  quene_MPORT_6_en; // @[d_cache.scala 77:20]
  wire [7:0] quene_MPORT_11_data; // @[d_cache.scala 77:20]
  wire [4:0] quene_MPORT_11_addr; // @[d_cache.scala 77:20]
  wire  quene_MPORT_11_mask; // @[d_cache.scala 77:20]
  wire  quene_MPORT_11_en; // @[d_cache.scala 77:20]
  wire [3:0] offset = io_from_lsu_araddr[3:0]; // @[d_cache.scala 20:36]
  wire [4:0] index = io_from_lsu_araddr[8:4]; // @[d_cache.scala 21:35]
  wire [22:0] tag = io_from_lsu_araddr[31:9]; // @[d_cache.scala 22:33]
  wire [7:0] _GEN_287 = {{3'd0}, index}; // @[d_cache.scala 41:48]
  wire [8:0] _valid_0_T_1 = {{1'd0}, _GEN_287}; // @[d_cache.scala 41:48]
  wire [7:0] _valid_1_T_2 = 8'h20 + _GEN_287; // @[d_cache.scala 41:48]
  wire [8:0] _GEN_291 = {{4'd0}, index}; // @[d_cache.scala 41:48]
  wire [8:0] _valid_2_T_2 = 9'h40 + _GEN_291; // @[d_cache.scala 41:48]
  wire [8:0] _valid_3_T_2 = 9'h60 + _GEN_291; // @[d_cache.scala 41:48]
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
  wire [6:0] _GEN_296 = {foundUnvalidIndex, 5'h0}; // @[d_cache.scala 50:43]
  wire [8:0] _unvalidIndex_T = {{2'd0}, _GEN_296}; // @[d_cache.scala 50:43]
  wire [8:0] unvalidIndex = _unvalidIndex_T + _GEN_291; // @[d_cache.scala 50:51]
  wire [31:0] _GEN_303 = {{9'd0}, tag}; // @[d_cache.scala 55:71]
  wire  tagMatch_0 = valid_0 & tagMem_tagMatch_0_MPORT_data == _GEN_303; // @[d_cache.scala 55:33]
  wire  tagMatch_1 = valid_1 & tagMem_tagMatch_1_MPORT_data == _GEN_303; // @[d_cache.scala 55:33]
  wire  tagMatch_2 = valid_2 & tagMem_tagMatch_2_MPORT_data == _GEN_303; // @[d_cache.scala 55:33]
  wire  tagMatch_3 = valid_3 & tagMem_tagMatch_3_MPORT_data == _GEN_303; // @[d_cache.scala 55:33]
  wire  anyMatch = tagMatch_0 | tagMatch_1 | tagMatch_2 | tagMatch_3; // @[d_cache.scala 57:38]
  wire [1:0] _foundtagIndex_T = tagMatch_3 ? 2'h3 : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] _foundtagIndex_T_1 = tagMatch_2 ? 2'h2 : _foundtagIndex_T; // @[Mux.scala 101:16]
  wire [1:0] _foundtagIndex_T_2 = tagMatch_1 ? 2'h1 : _foundtagIndex_T_1; // @[Mux.scala 101:16]
  wire [1:0] foundtagIndex = tagMatch_0 ? 2'h0 : _foundtagIndex_T_2; // @[Mux.scala 101:16]
  wire [6:0] _GEN_321 = {foundtagIndex, 5'h0}; // @[d_cache.scala 64:35]
  wire [8:0] _tagIndex_T = {{2'd0}, _GEN_321}; // @[d_cache.scala 64:35]
  wire [8:0] tagIndex = _tagIndex_T + _GEN_291; // @[d_cache.scala 64:43]
  reg [127:0] write_back_data; // @[d_cache.scala 70:34]
  reg [31:0] write_back_addr; // @[d_cache.scala 71:34]
  reg [63:0] receive_data_0; // @[d_cache.scala 75:31]
  reg [63:0] receive_data_1; // @[d_cache.scala 75:31]
  reg [2:0] receive_num; // @[d_cache.scala 76:30]
  wire [1:0] replace_way = quene_replace_way_MPORT_data[7:6]; // @[d_cache.scala 79:35]
  wire [6:0] _GEN_327 = {replace_way, 5'h0}; // @[d_cache.scala 80:34]
  wire [8:0] _replaceIndex_T = {{2'd0}, _GEN_327}; // @[d_cache.scala 80:34]
  wire [8:0] _replaceIndex_T_2 = _replaceIndex_T + _GEN_291; // @[d_cache.scala 80:42]
  wire [6:0] shift_bit = {offset, 3'h0}; // @[d_cache.scala 82:28]
  wire [63:0] _wmask_T_4 = io_from_lsu_wstrb == 8'hff ? 64'hffffffffffffffff : 64'h0; // @[d_cache.scala 88:20]
  wire [63:0] _wmask_T_5 = io_from_lsu_wstrb == 8'hf ? 64'hffffffff : _wmask_T_4; // @[d_cache.scala 87:20]
  wire [63:0] _wmask_T_6 = io_from_lsu_wstrb == 8'h3 ? 64'hffff : _wmask_T_5; // @[d_cache.scala 86:20]
  wire [63:0] wmask = io_from_lsu_wstrb == 8'h1 ? 64'hff : _wmask_T_6; // @[d_cache.scala 85:20]
  reg [2:0] state; // @[d_cache.scala 95:24]
  wire  _T = 3'h0 == state; // @[d_cache.scala 101:18]
  wire  _T_3 = (io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000; // @[d_cache.scala 103:60]
  wire [2:0] _GEN_0 = io_from_lsu_awvalid ? 3'h2 : state; // @[d_cache.scala 107:44 108:23 95:24]
  wire [63:0] _T_7 = io_from_lsu_wdata & wmask; // @[d_cache.scala 127:60]
  wire [190:0] _GEN_353 = {{127'd0}, _T_7}; // @[d_cache.scala 127:69]
  wire [190:0] _T_8 = _GEN_353 << shift_bit; // @[d_cache.scala 127:69]
  wire [190:0] _GEN_357 = {{127'd0}, wmask}; // @[d_cache.scala 127:116]
  wire [190:0] _T_10 = _GEN_357 << shift_bit; // @[d_cache.scala 127:116]
  wire [190:0] _T_11 = ~_T_10; // @[d_cache.scala 127:108]
  wire [190:0] _GEN_334 = {{63'd0}, cacheLine_MPORT_1_data}; // @[d_cache.scala 127:106]
  wire [190:0] _T_12 = _GEN_334 & _T_11; // @[d_cache.scala 127:106]
  wire [190:0] _T_13 = _T_8 | _T_12; // @[d_cache.scala 127:83]
  wire [2:0] _GEN_7 = anyMatch ? 3'h0 : 3'h4; // @[d_cache.scala 122:27 131:23]
  wire [63:0] _GEN_15 = ~receive_num[0] ? io_from_axi_rdata : receive_data_0; // @[d_cache.scala 136:{43,43} 75:31]
  wire [63:0] _GEN_16 = receive_num[0] ? io_from_axi_rdata : receive_data_1; // @[d_cache.scala 136:{43,43} 75:31]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[d_cache.scala 137:44]
  wire [2:0] _GEN_17 = io_from_axi_rlast ? 3'h5 : state; // @[d_cache.scala 138:40 139:27 95:24]
  wire [63:0] _GEN_18 = io_from_axi_rvalid ? _GEN_15 : receive_data_0; // @[d_cache.scala 135:37 75:31]
  wire [63:0] _GEN_19 = io_from_axi_rvalid ? _GEN_16 : receive_data_1; // @[d_cache.scala 135:37 75:31]
  wire [2:0] _GEN_20 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[d_cache.scala 135:37 137:29 76:30]
  wire [2:0] _GEN_21 = io_from_axi_rvalid ? _GEN_17 : state; // @[d_cache.scala 135:37 95:24]
  wire [2:0] _GEN_22 = io_from_axi_bvalid ? 3'h0 : state; // @[d_cache.scala 144:59 145:23 95:24]
  wire  _T_20 = ~allvalid; // @[d_cache.scala 149:18]
  wire [9:0] _GEN_336 = {quene_MPORT_7_data, 2'h0}; // @[d_cache.scala 157:47]
  wire [10:0] _T_25 = {{1'd0}, _GEN_336}; // @[d_cache.scala 157:47]
  wire [10:0] _GEN_337 = {{9'd0}, foundUnvalidIndex}; // @[d_cache.scala 157:55]
  wire [10:0] _T_26 = _T_25 | _GEN_337; // @[d_cache.scala 157:55]
  wire [31:0] replaceIndex = {{23'd0}, _replaceIndex_T_2}; // @[d_cache.scala 66:28 80:18]
  wire [9:0] _GEN_339 = {quene_MPORT_12_data, 2'h0}; // @[d_cache.scala 162:47]
  wire [10:0] _T_31 = {{1'd0}, _GEN_339}; // @[d_cache.scala 162:47]
  wire [10:0] _GEN_343 = {{9'd0}, replace_way}; // @[d_cache.scala 162:55]
  wire [10:0] _T_32 = _T_31 | _GEN_343; // @[d_cache.scala 162:55]
  wire  _T_34 = dirtyMem_MPORT_13_data; // @[d_cache.scala 163:44]
  wire [40:0] _write_back_addr_T_2 = {tagMem_write_back_addr_MPORT_data,index,4'h0}; // @[Cat.scala 31:58]
  wire [127:0] _GEN_26 = dirtyMem_MPORT_13_data ? cacheLine_write_back_data_MPORT_data : write_back_data; // @[d_cache.scala 163:51 165:37 70:34]
  wire [40:0] _GEN_28 = dirtyMem_MPORT_13_data ? _write_back_addr_T_2 : {{9'd0}, write_back_addr}; // @[d_cache.scala 163:51 166:37 71:34]
  wire [2:0] _GEN_32 = dirtyMem_MPORT_13_data ? 3'h6 : 3'h1; // @[d_cache.scala 163:51 168:27 170:27]
  wire [2:0] _GEN_33 = ~allvalid ? 3'h1 : _GEN_32; // @[d_cache.scala 149:28 150:23]
  wire  _GEN_46 = ~allvalid ? 1'h0 : 1'h1; // @[d_cache.scala 149:28 24:24 159:26]
  wire  _GEN_57 = ~allvalid ? 1'h0 : _T_34; // @[d_cache.scala 149:28 24:24]
  wire [127:0] _GEN_58 = ~allvalid ? write_back_data : _GEN_26; // @[d_cache.scala 149:28 70:34]
  wire [40:0] _GEN_60 = ~allvalid ? {{9'd0}, write_back_addr} : _GEN_28; // @[d_cache.scala 149:28 71:34]
  wire [127:0] _write_back_data_T_1 = {{64'd0}, write_back_data[127:64]}; // @[d_cache.scala 176:52]
  wire [127:0] _GEN_64 = io_from_axi_wready ? _write_back_data_T_1 : write_back_data; // @[d_cache.scala 175:37 176:33 70:34]
  wire [2:0] _GEN_65 = io_from_axi_bvalid ? 3'h1 : state; // @[d_cache.scala 178:37 179:23 95:24]
  wire [127:0] _GEN_66 = 3'h6 == state ? _GEN_64 : write_back_data; // @[d_cache.scala 101:18 70:34]
  wire [2:0] _GEN_67 = 3'h6 == state ? _GEN_65 : state; // @[d_cache.scala 101:18 95:24]
  wire [2:0] _GEN_68 = 3'h5 == state ? _GEN_33 : _GEN_67; // @[d_cache.scala 101:18]
  wire [127:0] _GEN_93 = 3'h5 == state ? _GEN_58 : _GEN_66; // @[d_cache.scala 101:18]
  wire [40:0] _GEN_95 = 3'h5 == state ? _GEN_60 : {{9'd0}, write_back_addr}; // @[d_cache.scala 101:18 71:34]
  wire [2:0] _GEN_99 = 3'h4 == state ? _GEN_22 : _GEN_68; // @[d_cache.scala 101:18]
  wire  _GEN_102 = 3'h4 == state ? 1'h0 : 3'h5 == state & _T_20; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_112 = 3'h4 == state ? 1'h0 : 3'h5 == state & _GEN_46; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_123 = 3'h4 == state ? 1'h0 : 3'h5 == state & _GEN_57; // @[d_cache.scala 101:18 24:24]
  wire [127:0] _GEN_124 = 3'h4 == state ? write_back_data : _GEN_93; // @[d_cache.scala 101:18 70:34]
  wire [40:0] _GEN_126 = 3'h4 == state ? {{9'd0}, write_back_addr} : _GEN_95; // @[d_cache.scala 101:18 71:34]
  wire [63:0] _GEN_130 = 3'h3 == state ? _GEN_18 : receive_data_0; // @[d_cache.scala 101:18 75:31]
  wire [63:0] _GEN_131 = 3'h3 == state ? _GEN_19 : receive_data_1; // @[d_cache.scala 101:18 75:31]
  wire [2:0] _GEN_132 = 3'h3 == state ? _GEN_20 : receive_num; // @[d_cache.scala 101:18 76:30]
  wire [2:0] _GEN_133 = 3'h3 == state ? _GEN_21 : _GEN_99; // @[d_cache.scala 101:18]
  wire  _GEN_136 = 3'h3 == state ? 1'h0 : _GEN_102; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_146 = 3'h3 == state ? 1'h0 : _GEN_112; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_157 = 3'h3 == state ? 1'h0 : _GEN_123; // @[d_cache.scala 101:18 24:24]
  wire [127:0] _GEN_158 = 3'h3 == state ? write_back_data : _GEN_124; // @[d_cache.scala 101:18 70:34]
  wire [40:0] _GEN_160 = 3'h3 == state ? {{9'd0}, write_back_addr} : _GEN_126; // @[d_cache.scala 101:18 71:34]
  wire  _GEN_177 = 3'h2 == state ? 1'h0 : _GEN_136; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_187 = 3'h2 == state ? 1'h0 : _GEN_146; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_198 = 3'h2 == state ? 1'h0 : _GEN_157; // @[d_cache.scala 101:18 24:24]
  wire [40:0] _GEN_201 = 3'h2 == state ? {{9'd0}, write_back_addr} : _GEN_160; // @[d_cache.scala 101:18 71:34]
  wire  _GEN_209 = 3'h1 == state ? 1'h0 : 3'h2 == state & anyMatch; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_218 = 3'h1 == state ? 1'h0 : _GEN_177; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_228 = 3'h1 == state ? 1'h0 : _GEN_187; // @[d_cache.scala 101:18 24:24]
  wire  _GEN_239 = 3'h1 == state ? 1'h0 : _GEN_198; // @[d_cache.scala 101:18 24:24]
  wire [40:0] _GEN_242 = 3'h1 == state ? {{9'd0}, write_back_addr} : _GEN_201; // @[d_cache.scala 101:18 71:34]
  wire [40:0] _GEN_283 = 3'h0 == state ? {{9'd0}, write_back_addr} : _GEN_242; // @[d_cache.scala 101:18 71:34]
  wire [127:0] _io_to_lsu_rdata_T_1 = cacheLine_io_to_lsu_rdata_MPORT_data >> shift_bit; // @[d_cache.scala 201:48]
  wire [63:0] _GEN_349 = {{32'd0}, io_from_lsu_araddr}; // @[d_cache.scala 242:49]
  wire [63:0] _io_to_axi_araddr_T = _GEN_349 & 64'hfffffffffffffff0; // @[d_cache.scala 242:49]
  wire  _T_46 = state == 3'h0 & _T_3; // @[d_cache.scala 307:27]
  wire [63:0] _GEN_288 = state == 3'h0 & _T_3 ? io_from_axi_rdata : 64'h0; // @[d_cache.scala 307:117 308:23 311:29]
  wire  _GEN_290 = state == 3'h0 & _T_3 & io_from_axi_rvalid; // @[d_cache.scala 307:117 308:23 313:30]
  wire  _GEN_293 = state == 3'h0 & _T_3 & io_from_axi_bvalid; // @[d_cache.scala 307:117 308:23 316:30]
  wire  _GEN_298 = state == 3'h0 & _T_3 & io_from_lsu_arvalid; // @[d_cache.scala 307:117 309:23 318:31]
  wire [31:0] _GEN_300 = state == 3'h0 & _T_3 ? io_from_lsu_awaddr : 32'h0; // @[d_cache.scala 307:117 309:23 324:30]
  wire  _GEN_304 = state == 3'h0 & _T_3 & io_from_lsu_awvalid; // @[d_cache.scala 307:117 309:23 325:31]
  wire [63:0] _GEN_305 = state == 3'h0 & _T_3 ? io_from_lsu_wdata : 64'h0; // @[d_cache.scala 307:117 309:23 329:29]
  wire [7:0] _GEN_306 = state == 3'h0 & _T_3 ? io_from_lsu_wstrb : 8'h0; // @[d_cache.scala 307:117 309:23 330:29]
  wire  _GEN_308 = state == 3'h0 & _T_3 & io_from_lsu_wvalid; // @[d_cache.scala 307:117 309:23 332:30]
  wire [63:0] _GEN_310 = state == 3'h6 ? 64'h0 : _GEN_288; // @[d_cache.scala 282:35 283:25]
  wire  _GEN_312 = state == 3'h6 ? 1'h0 : _GEN_290; // @[d_cache.scala 282:35 285:26]
  wire  _GEN_315 = state == 3'h6 ? 1'h0 : _GEN_293; // @[d_cache.scala 282:35 288:26]
  wire  _GEN_317 = state == 3'h6 ? 1'h0 : _GEN_298; // @[d_cache.scala 282:35 290:27]
  wire [31:0] _GEN_318 = state == 3'h6 ? 32'h0 : io_from_lsu_araddr; // @[d_cache.scala 282:35 291:26]
  wire  _GEN_322 = state == 3'h6 ? 1'h0 : 1'h1; // @[d_cache.scala 282:35 295:26]
  wire [31:0] _GEN_323 = state == 3'h6 ? write_back_addr : _GEN_300; // @[d_cache.scala 282:35 296:26]
  wire  _GEN_324 = state == 3'h6 | _GEN_304; // @[d_cache.scala 282:35 297:27]
  wire [7:0] _GEN_325 = state == 3'h6 ? 8'h1 : 8'h0; // @[d_cache.scala 282:35 298:25]
  wire [63:0] _GEN_328 = state == 3'h6 ? write_back_data[63:0] : _GEN_305; // @[d_cache.scala 282:35 301:25]
  wire [7:0] _GEN_329 = state == 3'h6 ? 8'hff : _GEN_306; // @[d_cache.scala 282:35 302:25]
  wire  _GEN_331 = state == 3'h6 | _GEN_308; // @[d_cache.scala 282:35 304:26]
  wire  _GEN_332 = state == 3'h6 | _T_46; // @[d_cache.scala 282:35 305:26]
  wire [63:0] _GEN_333 = state == 3'h4 ? 64'h0 : _GEN_310; // @[d_cache.scala 257:31 258:25]
  wire  _GEN_335 = state == 3'h4 ? 1'h0 : _GEN_312; // @[d_cache.scala 257:31 260:26]
  wire  _GEN_338 = state == 3'h4 ? io_from_axi_bvalid : _GEN_315; // @[d_cache.scala 257:31 263:26]
  wire  _GEN_340 = state == 3'h4 ? 1'h0 : _GEN_317; // @[d_cache.scala 257:31 265:27]
  wire [31:0] _GEN_341 = state == 3'h4 ? 32'h0 : _GEN_318; // @[d_cache.scala 257:31 266:26]
  wire  _GEN_345 = state == 3'h4 | _GEN_322; // @[d_cache.scala 257:31 270:26]
  wire [31:0] _GEN_346 = state == 3'h4 ? io_from_lsu_awaddr : _GEN_323; // @[d_cache.scala 257:31 271:26]
  wire  _GEN_347 = state == 3'h4 ? io_from_lsu_awvalid : _GEN_324; // @[d_cache.scala 257:31 272:27]
  wire [7:0] _GEN_348 = state == 3'h4 ? 8'h0 : _GEN_325; // @[d_cache.scala 257:31 273:25]
  wire [63:0] _GEN_351 = state == 3'h4 ? io_from_lsu_wdata : _GEN_328; // @[d_cache.scala 257:31 276:25]
  wire [7:0] _GEN_352 = state == 3'h4 ? io_from_lsu_wstrb : _GEN_329; // @[d_cache.scala 257:31 277:25]
  wire  _GEN_354 = state == 3'h4 ? io_from_lsu_wvalid : _GEN_331; // @[d_cache.scala 257:31 279:26]
  wire  _GEN_355 = state == 3'h4 | _GEN_332; // @[d_cache.scala 257:31 280:26]
  wire [63:0] _GEN_356 = state == 3'h3 ? 64'h0 : _GEN_333; // @[d_cache.scala 233:31 234:25]
  wire  _GEN_358 = state == 3'h3 ? 1'h0 : _GEN_335; // @[d_cache.scala 233:31 236:26]
  wire  _GEN_361 = state == 3'h3 ? 1'h0 : _GEN_338; // @[d_cache.scala 233:31 239:26]
  wire  _GEN_363 = state == 3'h3 | _GEN_340; // @[d_cache.scala 233:31 241:27]
  wire [63:0] _GEN_364 = state == 3'h3 ? _io_to_axi_araddr_T : {{32'd0}, _GEN_341}; // @[d_cache.scala 233:31 242:26]
  wire [7:0] _GEN_365 = state == 3'h3 ? 8'h1 : 8'h0; // @[d_cache.scala 233:31 243:25]
  wire  _GEN_368 = state == 3'h3 | _GEN_345; // @[d_cache.scala 233:31 246:26]
  wire [31:0] _GEN_369 = state == 3'h3 ? 32'h0 : _GEN_346; // @[d_cache.scala 233:31 247:26]
  wire  _GEN_370 = state == 3'h3 ? 1'h0 : _GEN_347; // @[d_cache.scala 233:31 248:27]
  wire [7:0] _GEN_371 = state == 3'h3 ? 8'h0 : _GEN_348; // @[d_cache.scala 233:31 249:25]
  wire [63:0] _GEN_374 = state == 3'h3 ? 64'h0 : _GEN_351; // @[d_cache.scala 233:31 252:25]
  wire [7:0] _GEN_375 = state == 3'h3 ? 8'h0 : _GEN_352; // @[d_cache.scala 233:31 253:25]
  wire  _GEN_377 = state == 3'h3 ? 1'h0 : _GEN_354; // @[d_cache.scala 233:31 255:26]
  wire  _GEN_378 = state == 3'h3 ? 1'h0 : _GEN_355; // @[d_cache.scala 233:31 256:26]
  wire  _GEN_379 = state == 3'h2 ? 1'h0 : _GEN_363; // @[d_cache.scala 209:33 210:27]
  wire [63:0] _GEN_380 = state == 3'h2 ? {{32'd0}, io_from_lsu_araddr} : _GEN_364; // @[d_cache.scala 209:33 211:26]
  wire [7:0] _GEN_381 = state == 3'h2 ? 8'h0 : _GEN_365; // @[d_cache.scala 209:33 212:25]
  wire  _GEN_384 = state == 3'h2 ? 1'h0 : _GEN_368; // @[d_cache.scala 209:33 215:26]
  wire [31:0] _GEN_385 = state == 3'h2 ? 32'h0 : _GEN_369; // @[d_cache.scala 209:33 216:26]
  wire  _GEN_386 = state == 3'h2 ? 1'h0 : _GEN_370; // @[d_cache.scala 209:33 217:27]
  wire [7:0] _GEN_387 = state == 3'h2 ? 8'h0 : _GEN_371; // @[d_cache.scala 209:33 218:25]
  wire [63:0] _GEN_390 = state == 3'h2 ? 64'h0 : _GEN_374; // @[d_cache.scala 209:33 221:25]
  wire [7:0] _GEN_391 = state == 3'h2 ? 8'h0 : _GEN_375; // @[d_cache.scala 209:33 222:25]
  wire  _GEN_393 = state == 3'h2 ? 1'h0 : _GEN_377; // @[d_cache.scala 209:33 224:26]
  wire  _GEN_394 = state == 3'h2 ? 1'h0 : _GEN_378; // @[d_cache.scala 209:33 225:26]
  wire [63:0] _GEN_395 = state == 3'h2 ? 64'h0 : _GEN_356; // @[d_cache.scala 209:33 226:25]
  wire  _GEN_397 = state == 3'h2 ? 1'h0 : _GEN_358; // @[d_cache.scala 209:33 228:26]
  wire  _GEN_401 = state == 3'h2 ? anyMatch : _GEN_361; // @[d_cache.scala 209:33 232:26]
  wire [63:0] _GEN_403 = state == 3'h1 ? {{32'd0}, io_from_lsu_araddr} : _GEN_380; // @[d_cache.scala 184:27 186:26]
  wire [127:0] _GEN_421 = state == 3'h1 ? _io_to_lsu_rdata_T_1 : {{64'd0}, _GEN_395}; // @[d_cache.scala 184:27 201:25]
  wire [40:0] _GEN_350 = reset ? 41'h0 : _GEN_283; // @[d_cache.scala 71:{34,34}]
  assign cacheLine_MPORT_1_en = _T ? 1'h0 : _GEN_209;
  assign cacheLine_MPORT_1_addr = tagIndex[6:0];
  assign cacheLine_MPORT_1_data = cacheLine[cacheLine_MPORT_1_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_write_back_data_MPORT_en = _T ? 1'h0 : _GEN_239;
  assign cacheLine_write_back_data_MPORT_addr = replaceIndex[6:0];
  assign cacheLine_write_back_data_MPORT_data = cacheLine[cacheLine_write_back_data_MPORT_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_io_to_lsu_rdata_MPORT_en = state == 3'h1;
  assign cacheLine_io_to_lsu_rdata_MPORT_addr = tagIndex[6:0];
  assign cacheLine_io_to_lsu_rdata_MPORT_data = cacheLine[cacheLine_io_to_lsu_rdata_MPORT_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_MPORT_data = _T_13[127:0];
  assign cacheLine_MPORT_addr = tagIndex[6:0];
  assign cacheLine_MPORT_mask = 1'h1;
  assign cacheLine_MPORT_en = _T ? 1'h0 : _GEN_209;
  assign cacheLine_MPORT_3_data = {receive_data_1,receive_data_0};
  assign cacheLine_MPORT_3_addr = unvalidIndex[6:0];
  assign cacheLine_MPORT_3_mask = 1'h1;
  assign cacheLine_MPORT_3_en = _T ? 1'h0 : _GEN_218;
  assign cacheLine_MPORT_8_data = {receive_data_1,receive_data_0};
  assign cacheLine_MPORT_8_addr = replaceIndex[6:0];
  assign cacheLine_MPORT_8_mask = 1'h1;
  assign cacheLine_MPORT_8_en = _T ? 1'h0 : _GEN_228;
  assign validMem_valid_0_MPORT_en = 1'h1;
  assign validMem_valid_0_MPORT_addr = _valid_0_T_1[6:0];
  assign validMem_valid_0_MPORT_data = validMem[validMem_valid_0_MPORT_addr]; // @[d_cache.scala 25:23]
  assign validMem_valid_1_MPORT_en = 1'h1;
  assign validMem_valid_1_MPORT_addr = _valid_1_T_2[6:0];
  assign validMem_valid_1_MPORT_data = validMem[validMem_valid_1_MPORT_addr]; // @[d_cache.scala 25:23]
  assign validMem_valid_2_MPORT_en = 1'h1;
  assign validMem_valid_2_MPORT_addr = _valid_2_T_2[6:0];
  assign validMem_valid_2_MPORT_data = validMem[validMem_valid_2_MPORT_addr]; // @[d_cache.scala 25:23]
  assign validMem_valid_3_MPORT_en = 1'h1;
  assign validMem_valid_3_MPORT_addr = _valid_3_T_2[6:0];
  assign validMem_valid_3_MPORT_data = validMem[validMem_valid_3_MPORT_addr]; // @[d_cache.scala 25:23]
  assign validMem_MPORT_5_data = 1'h1;
  assign validMem_MPORT_5_addr = unvalidIndex[6:0];
  assign validMem_MPORT_5_mask = 1'h1;
  assign validMem_MPORT_5_en = _T ? 1'h0 : _GEN_218;
  assign validMem_MPORT_10_data = 1'h1;
  assign validMem_MPORT_10_addr = replaceIndex[6:0];
  assign validMem_MPORT_10_mask = 1'h1;
  assign validMem_MPORT_10_en = _T ? 1'h0 : _GEN_228;
  assign tagMem_tagMatch_0_MPORT_en = 1'h1;
  assign tagMem_tagMatch_0_MPORT_addr = _valid_0_T_1[6:0];
  assign tagMem_tagMatch_0_MPORT_data = tagMem[tagMem_tagMatch_0_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_tagMatch_1_MPORT_en = 1'h1;
  assign tagMem_tagMatch_1_MPORT_addr = _valid_1_T_2[6:0];
  assign tagMem_tagMatch_1_MPORT_data = tagMem[tagMem_tagMatch_1_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_tagMatch_2_MPORT_en = 1'h1;
  assign tagMem_tagMatch_2_MPORT_addr = _valid_2_T_2[6:0];
  assign tagMem_tagMatch_2_MPORT_data = tagMem[tagMem_tagMatch_2_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_tagMatch_3_MPORT_en = 1'h1;
  assign tagMem_tagMatch_3_MPORT_addr = _valid_3_T_2[6:0];
  assign tagMem_tagMatch_3_MPORT_data = tagMem[tagMem_tagMatch_3_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_write_back_addr_MPORT_en = _T ? 1'h0 : _GEN_239;
  assign tagMem_write_back_addr_MPORT_addr = replaceIndex[6:0];
  assign tagMem_write_back_addr_MPORT_data = tagMem[tagMem_write_back_addr_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_MPORT_4_data = {{9'd0}, tag};
  assign tagMem_MPORT_4_addr = unvalidIndex[6:0];
  assign tagMem_MPORT_4_mask = 1'h1;
  assign tagMem_MPORT_4_en = _T ? 1'h0 : _GEN_218;
  assign tagMem_MPORT_9_data = {{9'd0}, tag};
  assign tagMem_MPORT_9_addr = replaceIndex[6:0];
  assign tagMem_MPORT_9_mask = 1'h1;
  assign tagMem_MPORT_9_en = _T ? 1'h0 : _GEN_228;
  assign dirtyMem_MPORT_13_en = _T ? 1'h0 : _GEN_228;
  assign dirtyMem_MPORT_13_addr = replaceIndex[6:0];
  assign dirtyMem_MPORT_13_data = dirtyMem[dirtyMem_MPORT_13_addr]; // @[d_cache.scala 29:23]
  assign dirtyMem_MPORT_2_data = 1'h1;
  assign dirtyMem_MPORT_2_addr = tagIndex[6:0];
  assign dirtyMem_MPORT_2_mask = 1'h1;
  assign dirtyMem_MPORT_2_en = _T ? 1'h0 : _GEN_209;
  assign dirtyMem_MPORT_14_data = 1'h0;
  assign dirtyMem_MPORT_14_addr = replaceIndex[6:0];
  assign dirtyMem_MPORT_14_mask = 1'h1;
  assign dirtyMem_MPORT_14_en = _T ? 1'h0 : _GEN_239;
  assign quene_replace_way_MPORT_en = 1'h1;
  assign quene_replace_way_MPORT_addr = io_from_lsu_araddr[8:4];
  assign quene_replace_way_MPORT_data = quene[quene_replace_way_MPORT_addr]; // @[d_cache.scala 77:20]
  assign quene_MPORT_7_en = _T ? 1'h0 : _GEN_218;
  assign quene_MPORT_7_addr = io_from_lsu_araddr[8:4];
  assign quene_MPORT_7_data = quene[quene_MPORT_7_addr]; // @[d_cache.scala 77:20]
  assign quene_MPORT_12_en = _T ? 1'h0 : _GEN_228;
  assign quene_MPORT_12_addr = io_from_lsu_araddr[8:4];
  assign quene_MPORT_12_data = quene[quene_MPORT_12_addr]; // @[d_cache.scala 77:20]
  assign quene_MPORT_6_data = _T_26[7:0];
  assign quene_MPORT_6_addr = io_from_lsu_araddr[8:4];
  assign quene_MPORT_6_mask = 1'h1;
  assign quene_MPORT_6_en = _T ? 1'h0 : _GEN_218;
  assign quene_MPORT_11_data = _T_32[7:0];
  assign quene_MPORT_11_addr = io_from_lsu_araddr[8:4];
  assign quene_MPORT_11_mask = 1'h1;
  assign quene_MPORT_11_en = _T ? 1'h0 : _GEN_228;
  assign io_to_lsu_rdata = _GEN_421[63:0];
  assign io_to_lsu_rvalid = state == 3'h1 ? anyMatch : _GEN_397; // @[d_cache.scala 184:27 203:26]
  assign io_to_lsu_bvalid = state == 3'h1 ? 1'h0 : _GEN_401; // @[d_cache.scala 184:27 207:26]
  assign io_to_axi_araddr = _GEN_403[31:0];
  assign io_to_axi_arlen = state == 3'h1 ? 8'h0 : _GEN_381; // @[d_cache.scala 184:27 187:25]
  assign io_to_axi_arvalid = state == 3'h1 ? 1'h0 : _GEN_379; // @[d_cache.scala 184:27 185:27]
  assign io_to_axi_rready = state == 3'h1 ? 1'h0 : _GEN_384; // @[d_cache.scala 184:27 190:26]
  assign io_to_axi_awaddr = state == 3'h1 ? 32'h0 : _GEN_385; // @[d_cache.scala 184:27 191:26]
  assign io_to_axi_awlen = state == 3'h1 ? 8'h0 : _GEN_387; // @[d_cache.scala 184:27 193:25]
  assign io_to_axi_awvalid = state == 3'h1 ? 1'h0 : _GEN_386; // @[d_cache.scala 184:27 192:27]
  assign io_to_axi_wdata = state == 3'h1 ? 64'h0 : _GEN_390; // @[d_cache.scala 184:27 196:25]
  assign io_to_axi_wstrb = state == 3'h1 ? 8'h0 : _GEN_391; // @[d_cache.scala 184:27 197:25]
  assign io_to_axi_wvalid = state == 3'h1 ? 1'h0 : _GEN_393; // @[d_cache.scala 184:27 199:26]
  assign io_to_axi_bready = state == 3'h1 ? 1'h0 : _GEN_394; // @[d_cache.scala 184:27 200:26]
  always @(posedge clock) begin
    if (cacheLine_MPORT_en & cacheLine_MPORT_mask) begin
      cacheLine[cacheLine_MPORT_addr] <= cacheLine_MPORT_data; // @[d_cache.scala 24:24]
    end
    if (cacheLine_MPORT_3_en & cacheLine_MPORT_3_mask) begin
      cacheLine[cacheLine_MPORT_3_addr] <= cacheLine_MPORT_3_data; // @[d_cache.scala 24:24]
    end
    if (cacheLine_MPORT_8_en & cacheLine_MPORT_8_mask) begin
      cacheLine[cacheLine_MPORT_8_addr] <= cacheLine_MPORT_8_data; // @[d_cache.scala 24:24]
    end
    if (validMem_MPORT_5_en & validMem_MPORT_5_mask) begin
      validMem[validMem_MPORT_5_addr] <= validMem_MPORT_5_data; // @[d_cache.scala 25:23]
    end
    if (validMem_MPORT_10_en & validMem_MPORT_10_mask) begin
      validMem[validMem_MPORT_10_addr] <= validMem_MPORT_10_data; // @[d_cache.scala 25:23]
    end
    if (tagMem_MPORT_4_en & tagMem_MPORT_4_mask) begin
      tagMem[tagMem_MPORT_4_addr] <= tagMem_MPORT_4_data; // @[d_cache.scala 28:21]
    end
    if (tagMem_MPORT_9_en & tagMem_MPORT_9_mask) begin
      tagMem[tagMem_MPORT_9_addr] <= tagMem_MPORT_9_data; // @[d_cache.scala 28:21]
    end
    if (dirtyMem_MPORT_2_en & dirtyMem_MPORT_2_mask) begin
      dirtyMem[dirtyMem_MPORT_2_addr] <= dirtyMem_MPORT_2_data; // @[d_cache.scala 29:23]
    end
    if (dirtyMem_MPORT_14_en & dirtyMem_MPORT_14_mask) begin
      dirtyMem[dirtyMem_MPORT_14_addr] <= dirtyMem_MPORT_14_data; // @[d_cache.scala 29:23]
    end
    if (quene_MPORT_6_en & quene_MPORT_6_mask) begin
      quene[quene_MPORT_6_addr] <= quene_MPORT_6_data; // @[d_cache.scala 77:20]
    end
    if (quene_MPORT_11_en & quene_MPORT_11_mask) begin
      quene[quene_MPORT_11_addr] <= quene_MPORT_11_data; // @[d_cache.scala 77:20]
    end
    if (reset) begin // @[d_cache.scala 70:34]
      write_back_data <= 128'h0; // @[d_cache.scala 70:34]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          write_back_data <= _GEN_158;
        end
      end
    end
    write_back_addr <= _GEN_350[31:0]; // @[d_cache.scala 71:{34,34}]
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_0 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          receive_data_0 <= _GEN_130;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_1 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 101:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 101:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 101:18]
          receive_data_1 <= _GEN_131;
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
        receive_num <= _GEN_132;
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
        state <= _GEN_0;
      end
    end else if (3'h1 == state) begin // @[d_cache.scala 101:18]
      if (anyMatch) begin // @[d_cache.scala 112:27]
        state <= 3'h0;
      end else begin
        state <= 3'h3; // @[d_cache.scala 117:23]
      end
    end else if (3'h2 == state) begin // @[d_cache.scala 101:18]
      state <= _GEN_7;
    end else begin
      state <= _GEN_133;
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
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    cacheLine[initvar] = _RAND_0[127:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    validMem[initvar] = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    tagMem[initvar] = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    dirtyMem[initvar] = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    quene[initvar] = _RAND_4[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {4{`RANDOM}};
  write_back_data = _RAND_5[127:0];
  _RAND_6 = {1{`RANDOM}};
  write_back_addr = _RAND_6[31:0];
  _RAND_7 = {2{`RANDOM}};
  receive_data_0 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  receive_data_1 = _RAND_8[63:0];
  _RAND_9 = {1{`RANDOM}};
  receive_num = _RAND_9[2:0];
  _RAND_10 = {1{`RANDOM}};
  state = _RAND_10[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
