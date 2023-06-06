module D_CACHE(
  input         clock,
  input         reset,
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
  reg [511:0] _RAND_0;
  reg [511:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [511:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
`endif // RANDOMIZE_REG_INIT
  reg [511:0] ram_0_0; // @[d_cache.scala 19:24]
  reg [511:0] ram_1_0; // @[d_cache.scala 20:24]
  reg  valid_0_0; // @[d_cache.scala 30:26]
  reg  valid_1_0; // @[d_cache.scala 31:26]
  reg  dirty_0_0; // @[d_cache.scala 32:26]
  reg  dirty_1_0; // @[d_cache.scala 33:26]
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
  reg [2:0] state; // @[d_cache.scala 84:24]
  wire [2:0] _GEN_71 = way1_hit ? 3'h0 : 3'h3; // @[d_cache.scala 105:33 111:23]
  wire [2:0] _GEN_72 = way1_hit ? receive_num : 3'h0; // @[d_cache.scala 105:33 112:29 43:30]
  wire [574:0] _ram_0_T_4 = {{63'd0}, ram_0_0}; // @[d_cache.scala 118:92]
  wire [574:0] _ram_1_T_4 = {{63'd0}, ram_1_0}; // @[d_cache.scala 127:92]
  wire [2:0] _GEN_171 = way1_hit ? 3'h0 : 3'h4; // @[d_cache.scala 124:33 125:23 136:23]
  wire [511:0] _GEN_172 = way1_hit ? _ram_1_T_4[511:0] : ram_1_0; // @[d_cache.scala 124:33 20:24]
  wire  _GEN_188 = way1_hit | dirty_1_0; // @[d_cache.scala 124:33 33:26]
  wire [2:0] _GEN_204 = way0_hit ? 3'h0 : _GEN_171; // @[d_cache.scala 116:27 117:23]
  wire [511:0] _GEN_205 = way0_hit ? _ram_0_T_4[511:0] : ram_0_0; // @[d_cache.scala 116:27 19:24]
  wire  _GEN_221 = way0_hit | dirty_0_0; // @[d_cache.scala 116:27 32:26]
  wire [511:0] _GEN_237 = way0_hit ? ram_1_0 : _GEN_172; // @[d_cache.scala 116:27 20:24]
  wire  _GEN_253 = way0_hit ? dirty_1_0 : _GEN_188; // @[d_cache.scala 116:27 33:26]
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
  wire  _T_16 = ~quene; // @[d_cache.scala 167:27]
  wire [511:0] _GEN_513 = dirty_0_0 ? ram_0_0 : write_back_data; // @[d_cache.scala 169:47 170:41 37:34]
  wire [41:0] _GEN_514 = dirty_0_0 ? 42'h0 : {{10'd0}, write_back_addr}; // @[d_cache.scala 169:47 171:41 38:34]
  wire [511:0] _GEN_515 = dirty_0_0 ? _ram_0_T_6 : _ram_0_T_6; // @[d_cache.scala 169:47]
  wire  _GEN_547 = dirty_0_0 ? 1'h0 : dirty_0_0; // @[d_cache.scala 169:47 32:26]
  wire [2:0] _GEN_579 = dirty_0_0 ? 3'h6 : 3'h7; // @[d_cache.scala 169:47 176:31 179:31]
  wire [511:0] _GEN_709 = dirty_1_0 ? ram_1_0 : write_back_data; // @[d_cache.scala 186:47 187:41 37:34]
  wire [41:0] _GEN_710 = dirty_1_0 ? 42'h0 : {{10'd0}, write_back_addr}; // @[d_cache.scala 186:47 188:41 38:34]
  wire [511:0] _GEN_711 = dirty_1_0 ? _ram_0_T_6 : _ram_0_T_6; // @[d_cache.scala 186:47]
  wire  _GEN_743 = dirty_1_0 ? 1'h0 : dirty_1_0; // @[d_cache.scala 186:47 33:26]
  wire [2:0] _GEN_775 = dirty_1_0 ? 3'h6 : 3'h7; // @[d_cache.scala 186:47 193:31 196:31]
  wire [511:0] _GEN_777 = ~quene ? _GEN_513 : _GEN_709; // @[d_cache.scala 167:34]
  wire [41:0] _GEN_778 = ~quene ? _GEN_514 : _GEN_710; // @[d_cache.scala 167:34]
  wire [511:0] _GEN_779 = ~quene ? _GEN_515 : ram_0_0; // @[d_cache.scala 167:34 19:24]
  wire  _GEN_811 = ~quene ? _GEN_547 : dirty_0_0; // @[d_cache.scala 167:34 32:26]
  wire  _GEN_827 = ~quene | valid_0_0; // @[d_cache.scala 167:34 30:26]
  wire [2:0] _GEN_843 = ~quene ? _GEN_579 : _GEN_775; // @[d_cache.scala 167:34]
  wire [511:0] _GEN_845 = ~quene ? ram_1_0 : _GEN_711; // @[d_cache.scala 167:34 20:24]
  wire  _GEN_877 = ~quene ? dirty_1_0 : _GEN_743; // @[d_cache.scala 167:34 33:26]
  wire  _GEN_893 = ~quene ? valid_1_0 : 1'h1; // @[d_cache.scala 167:34 31:26]
  wire [2:0] _GEN_909 = unuse_way == 2'h2 ? 3'h7 : _GEN_843; // @[d_cache.scala 160:40 161:23]
  wire [511:0] _GEN_910 = unuse_way == 2'h2 ? _ram_0_T_6 : _GEN_845; // @[d_cache.scala 160:40]
  wire  _GEN_942 = unuse_way == 2'h2 | _GEN_893; // @[d_cache.scala 160:40]
  wire  _GEN_958 = unuse_way == 2'h2 ? 1'h0 : _T_16; // @[d_cache.scala 160:40 165:23]
  wire [511:0] _GEN_959 = unuse_way == 2'h2 ? write_back_data : _GEN_777; // @[d_cache.scala 160:40 37:34]
  wire [41:0] _GEN_960 = unuse_way == 2'h2 ? {{10'd0}, write_back_addr} : _GEN_778; // @[d_cache.scala 160:40 38:34]
  wire [511:0] _GEN_961 = unuse_way == 2'h2 ? ram_0_0 : _GEN_779; // @[d_cache.scala 160:40 19:24]
  wire  _GEN_993 = unuse_way == 2'h2 ? dirty_0_0 : _GEN_811; // @[d_cache.scala 160:40 32:26]
  wire  _GEN_1009 = unuse_way == 2'h2 ? valid_0_0 : _GEN_827; // @[d_cache.scala 160:40 30:26]
  wire  _GEN_1025 = unuse_way == 2'h2 ? dirty_1_0 : _GEN_877; // @[d_cache.scala 160:40 33:26]
  wire [2:0] _GEN_1041 = unuse_way == 2'h1 ? 3'h7 : _GEN_909; // @[d_cache.scala 154:34 155:23]
  wire [511:0] _GEN_1042 = unuse_way == 2'h1 ? _ram_0_T_6 : _GEN_961; // @[d_cache.scala 154:34]
  wire  _GEN_1074 = unuse_way == 2'h1 | _GEN_1009; // @[d_cache.scala 154:34]
  wire  _GEN_1090 = unuse_way == 2'h1 | _GEN_958; // @[d_cache.scala 154:34 159:23]
  wire [511:0] _GEN_1091 = unuse_way == 2'h1 ? ram_1_0 : _GEN_910; // @[d_cache.scala 154:34 20:24]
  wire  _GEN_1123 = unuse_way == 2'h1 ? valid_1_0 : _GEN_942; // @[d_cache.scala 154:34 31:26]
  wire [511:0] _GEN_1139 = unuse_way == 2'h1 ? write_back_data : _GEN_959; // @[d_cache.scala 154:34 37:34]
  wire [41:0] _GEN_1140 = unuse_way == 2'h1 ? {{10'd0}, write_back_addr} : _GEN_960; // @[d_cache.scala 154:34 38:34]
  wire  _GEN_1141 = unuse_way == 2'h1 ? dirty_0_0 : _GEN_993; // @[d_cache.scala 154:34 32:26]
  wire  _GEN_1157 = unuse_way == 2'h1 ? dirty_1_0 : _GEN_1025; // @[d_cache.scala 154:34 33:26]
  wire [511:0] _write_back_data_T = {{64'd0}, write_back_data[511:64]}; // @[d_cache.scala 207:52]
  wire [511:0] _GEN_1173 = io_from_axi_wready ? _write_back_data_T : write_back_data; // @[d_cache.scala 206:37 207:33 37:34]
  wire [2:0] _GEN_1174 = io_from_axi_bvalid ? 3'h7 : state; // @[d_cache.scala 209:37 210:23 84:24]
  wire [2:0] _GEN_1175 = 3'h7 == state ? 3'h1 : state; // @[d_cache.scala 89:18 214:19 84:24]
  wire [511:0] _GEN_1176 = 3'h6 == state ? _GEN_1173 : write_back_data; // @[d_cache.scala 89:18 37:34]
  wire [2:0] _GEN_1177 = 3'h6 == state ? _GEN_1174 : _GEN_1175; // @[d_cache.scala 89:18]
  wire [2:0] _GEN_1178 = 3'h5 == state ? _GEN_1041 : _GEN_1177; // @[d_cache.scala 89:18]
  wire [511:0] _GEN_1179 = 3'h5 == state ? _GEN_1042 : ram_0_0; // @[d_cache.scala 89:18 19:24]
  wire  _GEN_1211 = 3'h5 == state ? _GEN_1074 : valid_0_0; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1227 = 3'h5 == state ? _GEN_1090 : quene; // @[d_cache.scala 89:18 44:24]
  wire [511:0] _GEN_1228 = 3'h5 == state ? _GEN_1091 : ram_1_0; // @[d_cache.scala 89:18 20:24]
  wire  _GEN_1260 = 3'h5 == state ? _GEN_1123 : valid_1_0; // @[d_cache.scala 89:18 31:26]
  wire [511:0] _GEN_1276 = 3'h5 == state ? _GEN_1139 : _GEN_1176; // @[d_cache.scala 89:18]
  wire [41:0] _GEN_1277 = 3'h5 == state ? _GEN_1140 : {{10'd0}, write_back_addr}; // @[d_cache.scala 89:18 38:34]
  wire  _GEN_1278 = 3'h5 == state ? _GEN_1141 : dirty_0_0; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1294 = 3'h5 == state ? _GEN_1157 : dirty_1_0; // @[d_cache.scala 89:18 33:26]
  wire [2:0] _GEN_1310 = 3'h4 == state ? _GEN_288 : _GEN_1178; // @[d_cache.scala 89:18]
  wire [511:0] _GEN_1311 = 3'h4 == state ? ram_0_0 : _GEN_1179; // @[d_cache.scala 89:18 19:24]
  wire  _GEN_1343 = 3'h4 == state ? valid_0_0 : _GEN_1211; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1359 = 3'h4 == state ? quene : _GEN_1227; // @[d_cache.scala 89:18 44:24]
  wire [511:0] _GEN_1360 = 3'h4 == state ? ram_1_0 : _GEN_1228; // @[d_cache.scala 89:18 20:24]
  wire  _GEN_1392 = 3'h4 == state ? valid_1_0 : _GEN_1260; // @[d_cache.scala 89:18 31:26]
  wire [511:0] _GEN_1408 = 3'h4 == state ? write_back_data : _GEN_1276; // @[d_cache.scala 89:18 37:34]
  wire [41:0] _GEN_1409 = 3'h4 == state ? {{10'd0}, write_back_addr} : _GEN_1277; // @[d_cache.scala 89:18 38:34]
  wire  _GEN_1410 = 3'h4 == state ? dirty_0_0 : _GEN_1278; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1426 = 3'h4 == state ? dirty_1_0 : _GEN_1294; // @[d_cache.scala 89:18 33:26]
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
  wire  _GEN_1484 = 3'h3 == state ? valid_0_0 : _GEN_1343; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1500 = 3'h3 == state ? quene : _GEN_1359; // @[d_cache.scala 89:18 44:24]
  wire [511:0] _GEN_1501 = 3'h3 == state ? ram_1_0 : _GEN_1360; // @[d_cache.scala 89:18 20:24]
  wire  _GEN_1533 = 3'h3 == state ? valid_1_0 : _GEN_1392; // @[d_cache.scala 89:18 31:26]
  wire [511:0] _GEN_1549 = 3'h3 == state ? write_back_data : _GEN_1408; // @[d_cache.scala 89:18 37:34]
  wire [41:0] _GEN_1550 = 3'h3 == state ? {{10'd0}, write_back_addr} : _GEN_1409; // @[d_cache.scala 89:18 38:34]
  wire  _GEN_1551 = 3'h3 == state ? dirty_0_0 : _GEN_1410; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1567 = 3'h3 == state ? dirty_1_0 : _GEN_1426; // @[d_cache.scala 89:18 33:26]
  wire [41:0] _GEN_1723 = 3'h2 == state ? {{10'd0}, write_back_addr} : _GEN_1550; // @[d_cache.scala 89:18 38:34]
  wire [41:0] _GEN_1864 = 3'h1 == state ? {{10'd0}, write_back_addr} : _GEN_1723; // @[d_cache.scala 89:18 38:34]
  wire [41:0] _GEN_2005 = 3'h0 == state ? {{10'd0}, write_back_addr} : _GEN_1864; // @[d_cache.scala 89:18 38:34]
  wire  _T_23 = state == 3'h3; // @[d_cache.scala 317:21]
  wire  _T_25 = state == 3'h6; // @[d_cache.scala 382:21]
  wire [2:0] _GEN_2019 = state == 3'h6 ? 3'h7 : 3'h0; // @[d_cache.scala 382:35 392:25 417:25]
  wire  _GEN_2021 = state == 3'h6 ? 1'h0 : 1'h1; // @[d_cache.scala 382:35 395:26 416:26]
  wire [31:0] _GEN_2022 = state == 3'h6 ? write_back_addr : 32'h0; // @[d_cache.scala 382:35 396:26 420:26]
  wire [63:0] _GEN_2023 = state == 3'h6 ? write_back_data[63:0] : 64'h0; // @[d_cache.scala 382:35 401:25 425:25]
  wire [7:0] _GEN_2024 = state == 3'h6 ? 8'hff : 8'h0; // @[d_cache.scala 382:35 402:25 426:25]
  wire [2:0] _GEN_2031 = state == 3'h4 ? 3'h0 : _GEN_2019; // @[d_cache.scala 341:31 351:25]
  wire  _GEN_2033 = state == 3'h4 | _GEN_2021; // @[d_cache.scala 341:31 354:26]
  wire [31:0] _GEN_2034 = state == 3'h4 ? 32'h0 : _GEN_2022; // @[d_cache.scala 341:31 355:26]
  wire  _GEN_2035 = state == 3'h4 ? 1'h0 : _T_25; // @[d_cache.scala 341:31 356:27]
  wire [7:0] _GEN_2036 = state == 3'h4 ? 8'h0 : {{5'd0}, _GEN_2019}; // @[d_cache.scala 341:31 357:25]
  wire [63:0] _GEN_2039 = state == 3'h4 ? 64'h0 : _GEN_2023; // @[d_cache.scala 341:31 360:25]
  wire [7:0] _GEN_2040 = state == 3'h4 ? 8'h0 : _GEN_2024; // @[d_cache.scala 341:31 361:25]
  wire  _GEN_2043 = state == 3'h4 | _T_25; // @[d_cache.scala 341:31 364:26]
  wire [2:0] _GEN_2051 = state == 3'h3 ? 3'h7 : _GEN_2031; // @[d_cache.scala 317:31 327:25]
  wire  _GEN_2053 = state == 3'h3 | _GEN_2033; // @[d_cache.scala 317:31 330:26]
  wire [31:0] _GEN_2054 = state == 3'h3 ? 32'h0 : _GEN_2034; // @[d_cache.scala 317:31 331:26]
  wire  _GEN_2055 = state == 3'h3 ? 1'h0 : _GEN_2035; // @[d_cache.scala 317:31 332:27]
  wire [7:0] _GEN_2056 = state == 3'h3 ? 8'h0 : _GEN_2036; // @[d_cache.scala 317:31 333:25]
  wire [63:0] _GEN_2059 = state == 3'h3 ? 64'h0 : _GEN_2039; // @[d_cache.scala 317:31 336:25]
  wire [7:0] _GEN_2060 = state == 3'h3 ? 8'h0 : _GEN_2040; // @[d_cache.scala 317:31 337:25]
  wire  _GEN_2063 = state == 3'h3 ? 1'h0 : _GEN_2043; // @[d_cache.scala 317:31 340:26]
  wire  _GEN_2064 = state == 3'h2 ? 1'h0 : _T_23; // @[d_cache.scala 275:33 276:27]
  wire [2:0] _GEN_2066 = state == 3'h2 ? 3'h0 : _GEN_2051; // @[d_cache.scala 275:33 278:25]
  wire  _GEN_2069 = state == 3'h2 ? 1'h0 : _GEN_2053; // @[d_cache.scala 275:33 281:26]
  wire [31:0] _GEN_2070 = state == 3'h2 ? 32'h0 : _GEN_2054; // @[d_cache.scala 275:33 282:26]
  wire  _GEN_2071 = state == 3'h2 ? 1'h0 : _GEN_2055; // @[d_cache.scala 275:33 283:27]
  wire [7:0] _GEN_2072 = state == 3'h2 ? 8'h0 : _GEN_2056; // @[d_cache.scala 275:33 284:25]
  wire [63:0] _GEN_2075 = state == 3'h2 ? 64'h0 : _GEN_2059; // @[d_cache.scala 275:33 287:25]
  wire [7:0] _GEN_2076 = state == 3'h2 ? 8'h0 : _GEN_2060; // @[d_cache.scala 275:33 288:25]
  wire  _GEN_2079 = state == 3'h2 ? 1'h0 : _GEN_2063; // @[d_cache.scala 275:33 291:26]
  wire [2:0] _GEN_2087 = state == 3'h1 ? 3'h0 : _GEN_2066; // @[d_cache.scala 233:27 236:25]
  wire [41:0] _GEN_2011 = reset ? 42'h0 : _GEN_2005; // @[d_cache.scala 38:{34,34}]
  assign io_to_axi_arlen = {{5'd0}, _GEN_2087};
  assign io_to_axi_arvalid = state == 3'h1 ? 1'h0 : _GEN_2064; // @[d_cache.scala 233:27 234:27]
  assign io_to_axi_rready = state == 3'h1 ? 1'h0 : _GEN_2069; // @[d_cache.scala 233:27 239:26]
  assign io_to_axi_awaddr = state == 3'h1 ? 32'h0 : _GEN_2070; // @[d_cache.scala 233:27 240:26]
  assign io_to_axi_awlen = state == 3'h1 ? 8'h0 : _GEN_2072; // @[d_cache.scala 233:27 242:25]
  assign io_to_axi_awvalid = state == 3'h1 ? 1'h0 : _GEN_2071; // @[d_cache.scala 233:27 241:27]
  assign io_to_axi_wdata = state == 3'h1 ? 64'h0 : _GEN_2075; // @[d_cache.scala 233:27 245:25]
  assign io_to_axi_wstrb = state == 3'h1 ? 8'h0 : _GEN_2076; // @[d_cache.scala 233:27 246:25]
  assign io_to_axi_wvalid = state == 3'h1 ? 1'h0 : _GEN_2071; // @[d_cache.scala 233:27 248:26]
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
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_0 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_0 <= _GEN_1484;
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
    if (reset) begin // @[d_cache.scala 34:27]
      way0_hit <= 1'h0; // @[d_cache.scala 34:27]
    end else begin
      way0_hit <= valid_0_0;
    end
    if (reset) begin // @[d_cache.scala 35:27]
      way1_hit <= 1'h0; // @[d_cache.scala 35:27]
    end else begin
      way1_hit <= valid_1_0;
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
    write_back_addr <= _GEN_2011[31:0]; // @[d_cache.scala 38:{34,34}]
    if (reset) begin // @[d_cache.scala 41:28]
      unuse_way <= 2'h0; // @[d_cache.scala 41:28]
    end else if (~valid_0_0) begin // @[d_cache.scala 76:31]
      unuse_way <= 2'h1; // @[d_cache.scala 77:19]
    end else if (~valid_1_0) begin // @[d_cache.scala 78:37]
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
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 89:18]
      if (3'h1 == state) begin // @[d_cache.scala 89:18]
        if (way0_hit) begin // @[d_cache.scala 99:27]
          state <= 3'h0;
        end else begin
          state <= _GEN_71;
        end
      end else if (3'h2 == state) begin // @[d_cache.scala 89:18]
        state <= _GEN_204;
      end else begin
        state <= _GEN_1451;
      end
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
  ram_1_0 = _RAND_1[511:0];
  _RAND_2 = {1{`RANDOM}};
  valid_0_0 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  valid_1_0 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  dirty_0_0 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  dirty_1_0 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  way0_hit = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  way1_hit = _RAND_7[0:0];
  _RAND_8 = {16{`RANDOM}};
  write_back_data = _RAND_8[511:0];
  _RAND_9 = {1{`RANDOM}};
  write_back_addr = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  unuse_way = _RAND_10[1:0];
  _RAND_11 = {2{`RANDOM}};
  receive_data_0 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  receive_data_1 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  receive_data_2 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  receive_data_3 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  receive_data_4 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  receive_data_5 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  receive_data_6 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  receive_data_7 = _RAND_18[63:0];
  _RAND_19 = {1{`RANDOM}};
  receive_num = _RAND_19[2:0];
  _RAND_20 = {1{`RANDOM}};
  quene = _RAND_20[0:0];
  _RAND_21 = {1{`RANDOM}};
  state = _RAND_21[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
