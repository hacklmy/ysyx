/* verilator lint_off UNUSED */
module IDU(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_fs_to_ds_valid,
  output        io_ds_to_es_valid,
  input         io_es_allowin,
  input  [31:0] io_from_fs_inst,
  output        io_br_taken,
  output [63:0] io_br_target,
  output        io_ds_allowin,
  output        io_ds_ready_go,
  output        io_fence,
  output [4:0]  io_raddr1,
  output [4:0]  io_raddr2,
  input  [63:0] io_rdata1,
  input  [63:0] io_rdata2,
  output [63:0] io_to_es_pc,
  output [31:0] io_ALUop,
  output [63:0] io_src1,
  output [63:0] io_src2,
  output [4:0]  io_rf_dst,
  output [63:0] io_store_data,
  output        io_ctrl_sign_reg_write,
  output        io_ctrl_sign_Writemem_en,
  output        io_ctrl_sign_Readmem_en,
  output [7:0]  io_ctrl_sign_Wmask,
  output [2:0]  io_load_type,
  input         io_es_ld,
  input  [63:0] io_es_fwd_res,
  input  [63:0] io_ms_fwd_res,
  input  [63:0] io_ws_fwd_res,
  input         io_es_fwd_ready,
  input         io_ms_fwd_ready,
  input         io_es_rf_we,
  input         io_ms_rf_we,
  input         io_ws_rf_we,
  input         io_es_valid,
  input         io_ms_valid,
  input         io_ws_valid,
  input  [4:0]  io_es_rf_dst,
  input  [4:0]  io_ms_rf_dst,
  input  [4:0]  io_ws_rf_dst,
  output        io_ds_valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire  csr_reg_clock; // @[IDU.scala 548:21]
  wire  csr_reg_io_wen1; // @[IDU.scala 548:21]
  wire  csr_reg_io_wen2; // @[IDU.scala 548:21]
  wire [1:0] csr_reg_io_waddr1; // @[IDU.scala 548:21]
  wire [63:0] csr_reg_io_wdata1; // @[IDU.scala 548:21]
  wire [63:0] csr_reg_io_wdata2; // @[IDU.scala 548:21]
  wire [1:0] csr_reg_io_raddr; // @[IDU.scala 548:21]
  wire [63:0] csr_reg_io_rdata; // @[IDU.scala 548:21]
  reg  ds_valid; // @[IDU.scala 113:27]
  reg [63:0] ds_pc; // @[IDU.scala 117:24]
  reg [31:0] inst; // @[IDU.scala 119:23]
  reg  br_taken_cancel; // @[IDU.scala 123:34]
  wire [31:0] _ctrl_bus_T = inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_1 = 32'h13 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_3 = 32'h67 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_5 = 32'h3013 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_7 = 32'h1b == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire [31:0] _ctrl_bus_T_8 = inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_9 = 32'h40005013 == _ctrl_bus_T_8; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_11 = 32'h4013 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_13 = 32'h7013 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_15 = 32'h1013 == _ctrl_bus_T_8; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_17 = 32'h5013 == _ctrl_bus_T_8; // @[Lookup.scala 31:38]
  wire [31:0] _ctrl_bus_T_18 = inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_19 = 32'h101b == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_21 = 32'h4000501b == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_23 = 32'h501b == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_25 = 32'h6013 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_27 = 32'h2013 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_29 = 32'h73 == inst; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_31 = 32'h30200073 == inst; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_33 = 32'h1073 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_35 = 32'h2073 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_37 = 32'h3073 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_39 = 32'h2003 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_41 = 32'h3003 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_43 = 32'h4003 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_45 = 32'h1003 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_47 = 32'h5003 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_49 = 32'h6003 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_51 = 32'h3 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire [31:0] _ctrl_bus_T_52 = inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_53 = 32'h17 == _ctrl_bus_T_52; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_55 = 32'h37 == _ctrl_bus_T_52; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_57 = 32'h6f == _ctrl_bus_T_52; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_59 = 32'h3023 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_61 = 32'h1023 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_63 = 32'h23 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_65 = 32'h2023 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_67 = 32'h2004033 == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_69 = 32'h3b == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_71 = 32'h40000033 == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_73 = 32'h33 == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_75 = 32'h6033 == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_77 = 32'h7033 == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_79 = 32'h4000003b == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_81 = 32'h103b == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_83 = 32'h4000503b == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_85 = 32'h503b == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_87 = 32'h3033 == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_89 = 32'h2033 == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_91 = 32'h2000033 == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_93 = 32'h200003b == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_95 = 32'h200403b == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_97 = 32'h200603b == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_99 = 32'h4033 == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_101 = 32'h2005033 == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_103 = 32'h200503b == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_105 = 32'h200703b == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_107 = 32'h2007033 == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_109 = 32'h2006033 == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_111 = 32'h1033 == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_113 = 32'h5033 == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_115 = 32'h40005033 == _ctrl_bus_T_18; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_117 = 32'h1063 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_119 = 32'h63 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_121 = 32'h5063 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_123 = 32'h4063 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_125 = 32'h6063 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_127 = 32'h7063 == _ctrl_bus_T; // @[Lookup.scala 31:38]
  wire  _ctrl_bus_T_386 = _ctrl_bus_T_115 ? 1'h0 : _ctrl_bus_T_117 | (_ctrl_bus_T_119 | (_ctrl_bus_T_121 | (
    _ctrl_bus_T_123 | (_ctrl_bus_T_125 | _ctrl_bus_T_127)))); // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_387 = _ctrl_bus_T_113 ? 1'h0 : _ctrl_bus_T_386; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_388 = _ctrl_bus_T_111 ? 1'h0 : _ctrl_bus_T_387; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_389 = _ctrl_bus_T_109 ? 1'h0 : _ctrl_bus_T_388; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_390 = _ctrl_bus_T_107 ? 1'h0 : _ctrl_bus_T_389; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_391 = _ctrl_bus_T_105 ? 1'h0 : _ctrl_bus_T_390; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_392 = _ctrl_bus_T_103 ? 1'h0 : _ctrl_bus_T_391; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_393 = _ctrl_bus_T_101 ? 1'h0 : _ctrl_bus_T_392; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_394 = _ctrl_bus_T_99 ? 1'h0 : _ctrl_bus_T_393; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_395 = _ctrl_bus_T_97 ? 1'h0 : _ctrl_bus_T_394; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_396 = _ctrl_bus_T_95 ? 1'h0 : _ctrl_bus_T_395; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_397 = _ctrl_bus_T_93 ? 1'h0 : _ctrl_bus_T_396; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_398 = _ctrl_bus_T_91 ? 1'h0 : _ctrl_bus_T_397; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_399 = _ctrl_bus_T_89 ? 1'h0 : _ctrl_bus_T_398; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_400 = _ctrl_bus_T_87 ? 1'h0 : _ctrl_bus_T_399; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_401 = _ctrl_bus_T_85 ? 1'h0 : _ctrl_bus_T_400; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_402 = _ctrl_bus_T_83 ? 1'h0 : _ctrl_bus_T_401; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_403 = _ctrl_bus_T_81 ? 1'h0 : _ctrl_bus_T_402; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_404 = _ctrl_bus_T_79 ? 1'h0 : _ctrl_bus_T_403; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_405 = _ctrl_bus_T_77 ? 1'h0 : _ctrl_bus_T_404; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_406 = _ctrl_bus_T_75 ? 1'h0 : _ctrl_bus_T_405; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_407 = _ctrl_bus_T_73 ? 1'h0 : _ctrl_bus_T_406; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_408 = _ctrl_bus_T_71 ? 1'h0 : _ctrl_bus_T_407; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_409 = _ctrl_bus_T_69 ? 1'h0 : _ctrl_bus_T_408; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_410 = _ctrl_bus_T_67 ? 1'h0 : _ctrl_bus_T_409; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_411 = _ctrl_bus_T_65 ? 1'h0 : _ctrl_bus_T_410; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_412 = _ctrl_bus_T_63 ? 1'h0 : _ctrl_bus_T_411; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_413 = _ctrl_bus_T_61 ? 1'h0 : _ctrl_bus_T_412; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_414 = _ctrl_bus_T_59 ? 1'h0 : _ctrl_bus_T_413; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_416 = _ctrl_bus_T_55 ? 1'h0 : _ctrl_bus_T_57 | _ctrl_bus_T_414; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_418 = _ctrl_bus_T_51 ? 1'h0 : _ctrl_bus_T_53 | _ctrl_bus_T_416; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_419 = _ctrl_bus_T_49 ? 1'h0 : _ctrl_bus_T_418; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_420 = _ctrl_bus_T_47 ? 1'h0 : _ctrl_bus_T_419; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_421 = _ctrl_bus_T_45 ? 1'h0 : _ctrl_bus_T_420; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_422 = _ctrl_bus_T_43 ? 1'h0 : _ctrl_bus_T_421; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_423 = _ctrl_bus_T_41 ? 1'h0 : _ctrl_bus_T_422; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_424 = _ctrl_bus_T_39 ? 1'h0 : _ctrl_bus_T_423; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_425 = _ctrl_bus_T_37 ? 1'h0 : _ctrl_bus_T_424; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_426 = _ctrl_bus_T_35 ? 1'h0 : _ctrl_bus_T_425; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_427 = _ctrl_bus_T_33 ? 1'h0 : _ctrl_bus_T_426; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_428 = _ctrl_bus_T_31 ? 1'h0 : _ctrl_bus_T_427; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_429 = _ctrl_bus_T_29 ? 1'h0 : _ctrl_bus_T_428; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_430 = _ctrl_bus_T_27 ? 1'h0 : _ctrl_bus_T_429; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_431 = _ctrl_bus_T_25 ? 1'h0 : _ctrl_bus_T_430; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_432 = _ctrl_bus_T_23 ? 1'h0 : _ctrl_bus_T_431; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_433 = _ctrl_bus_T_21 ? 1'h0 : _ctrl_bus_T_432; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_434 = _ctrl_bus_T_19 ? 1'h0 : _ctrl_bus_T_433; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_435 = _ctrl_bus_T_17 ? 1'h0 : _ctrl_bus_T_434; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_436 = _ctrl_bus_T_15 ? 1'h0 : _ctrl_bus_T_435; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_437 = _ctrl_bus_T_13 ? 1'h0 : _ctrl_bus_T_436; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_438 = _ctrl_bus_T_11 ? 1'h0 : _ctrl_bus_T_437; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_439 = _ctrl_bus_T_9 ? 1'h0 : _ctrl_bus_T_438; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_440 = _ctrl_bus_T_7 ? 1'h0 : _ctrl_bus_T_439; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_441 = _ctrl_bus_T_5 ? 1'h0 : _ctrl_bus_T_440; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_442 = _ctrl_bus_T_3 ? 1'h0 : _ctrl_bus_T_441; // @[Lookup.scala 34:39]
  wire  ctrl_bus_4 = _ctrl_bus_T_1 ? 1'h0 : _ctrl_bus_T_442; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_191 = _ctrl_bus_T_127 ? 7'h45 : 7'h40; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_192 = _ctrl_bus_T_125 ? 7'h45 : _ctrl_bus_T_191; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_193 = _ctrl_bus_T_123 ? 7'h45 : _ctrl_bus_T_192; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_194 = _ctrl_bus_T_121 ? 7'h45 : _ctrl_bus_T_193; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_195 = _ctrl_bus_T_119 ? 7'h45 : _ctrl_bus_T_194; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_196 = _ctrl_bus_T_117 ? 7'h45 : _ctrl_bus_T_195; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_197 = _ctrl_bus_T_115 ? 7'h41 : _ctrl_bus_T_196; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_198 = _ctrl_bus_T_113 ? 7'h41 : _ctrl_bus_T_197; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_199 = _ctrl_bus_T_111 ? 7'h41 : _ctrl_bus_T_198; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_200 = _ctrl_bus_T_109 ? 7'h41 : _ctrl_bus_T_199; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_201 = _ctrl_bus_T_107 ? 7'h41 : _ctrl_bus_T_200; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_202 = _ctrl_bus_T_105 ? 7'h41 : _ctrl_bus_T_201; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_203 = _ctrl_bus_T_103 ? 7'h41 : _ctrl_bus_T_202; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_204 = _ctrl_bus_T_101 ? 7'h41 : _ctrl_bus_T_203; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_205 = _ctrl_bus_T_99 ? 7'h41 : _ctrl_bus_T_204; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_206 = _ctrl_bus_T_97 ? 7'h41 : _ctrl_bus_T_205; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_207 = _ctrl_bus_T_95 ? 7'h41 : _ctrl_bus_T_206; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_208 = _ctrl_bus_T_93 ? 7'h41 : _ctrl_bus_T_207; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_209 = _ctrl_bus_T_91 ? 7'h41 : _ctrl_bus_T_208; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_210 = _ctrl_bus_T_89 ? 7'h41 : _ctrl_bus_T_209; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_211 = _ctrl_bus_T_87 ? 7'h41 : _ctrl_bus_T_210; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_212 = _ctrl_bus_T_85 ? 7'h41 : _ctrl_bus_T_211; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_213 = _ctrl_bus_T_83 ? 7'h41 : _ctrl_bus_T_212; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_214 = _ctrl_bus_T_81 ? 7'h41 : _ctrl_bus_T_213; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_215 = _ctrl_bus_T_79 ? 7'h41 : _ctrl_bus_T_214; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_216 = _ctrl_bus_T_77 ? 7'h41 : _ctrl_bus_T_215; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_217 = _ctrl_bus_T_75 ? 7'h41 : _ctrl_bus_T_216; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_218 = _ctrl_bus_T_73 ? 7'h41 : _ctrl_bus_T_217; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_219 = _ctrl_bus_T_71 ? 7'h41 : _ctrl_bus_T_218; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_220 = _ctrl_bus_T_69 ? 7'h41 : _ctrl_bus_T_219; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_221 = _ctrl_bus_T_67 ? 7'h41 : _ctrl_bus_T_220; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_222 = _ctrl_bus_T_65 ? 7'h44 : _ctrl_bus_T_221; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_223 = _ctrl_bus_T_63 ? 7'h44 : _ctrl_bus_T_222; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_224 = _ctrl_bus_T_61 ? 7'h44 : _ctrl_bus_T_223; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_225 = _ctrl_bus_T_59 ? 7'h44 : _ctrl_bus_T_224; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_226 = _ctrl_bus_T_57 ? 7'h43 : _ctrl_bus_T_225; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_227 = _ctrl_bus_T_55 ? 7'h42 : _ctrl_bus_T_226; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_228 = _ctrl_bus_T_53 ? 7'h42 : _ctrl_bus_T_227; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_229 = _ctrl_bus_T_51 ? 7'h40 : _ctrl_bus_T_228; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_230 = _ctrl_bus_T_49 ? 7'h40 : _ctrl_bus_T_229; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_231 = _ctrl_bus_T_47 ? 7'h40 : _ctrl_bus_T_230; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_232 = _ctrl_bus_T_45 ? 7'h40 : _ctrl_bus_T_231; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_233 = _ctrl_bus_T_43 ? 7'h40 : _ctrl_bus_T_232; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_234 = _ctrl_bus_T_41 ? 7'h40 : _ctrl_bus_T_233; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_235 = _ctrl_bus_T_39 ? 7'h40 : _ctrl_bus_T_234; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_236 = _ctrl_bus_T_37 ? 7'h40 : _ctrl_bus_T_235; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_237 = _ctrl_bus_T_35 ? 7'h40 : _ctrl_bus_T_236; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_238 = _ctrl_bus_T_33 ? 7'h40 : _ctrl_bus_T_237; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_239 = _ctrl_bus_T_31 ? 7'h40 : _ctrl_bus_T_238; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_240 = _ctrl_bus_T_29 ? 7'h40 : _ctrl_bus_T_239; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_241 = _ctrl_bus_T_27 ? 7'h40 : _ctrl_bus_T_240; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_242 = _ctrl_bus_T_25 ? 7'h40 : _ctrl_bus_T_241; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_243 = _ctrl_bus_T_23 ? 7'h40 : _ctrl_bus_T_242; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_244 = _ctrl_bus_T_21 ? 7'h40 : _ctrl_bus_T_243; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_245 = _ctrl_bus_T_19 ? 7'h40 : _ctrl_bus_T_244; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_246 = _ctrl_bus_T_17 ? 7'h40 : _ctrl_bus_T_245; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_247 = _ctrl_bus_T_15 ? 7'h40 : _ctrl_bus_T_246; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_248 = _ctrl_bus_T_13 ? 7'h40 : _ctrl_bus_T_247; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_249 = _ctrl_bus_T_11 ? 7'h40 : _ctrl_bus_T_248; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_250 = _ctrl_bus_T_9 ? 7'h40 : _ctrl_bus_T_249; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_251 = _ctrl_bus_T_7 ? 7'h40 : _ctrl_bus_T_250; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_252 = _ctrl_bus_T_5 ? 7'h40 : _ctrl_bus_T_251; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_253 = _ctrl_bus_T_3 ? 7'h40 : _ctrl_bus_T_252; // @[Lookup.scala 34:39]
  wire [6:0] ctrl_bus_1 = _ctrl_bus_T_1 ? 7'h40 : _ctrl_bus_T_253; // @[Lookup.scala 34:39]
  wire [31:0] inst_type = {{25'd0}, ctrl_bus_1}; // @[IDU.scala 329:15 67:25]
  wire  _conflict_es_rs1_T_1 = inst_type == 32'h45; // @[IDU.scala 592:47]
  wire [6:0] opcode = inst[6:0]; // @[IDU.scala 315:19]
  wire [5:0] _ctrl_bus_T_128 = _ctrl_bus_T_127 ? 6'h3c : 6'hf; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_129 = _ctrl_bus_T_125 ? 6'h2d : _ctrl_bus_T_128; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_130 = _ctrl_bus_T_123 ? 6'h2c : _ctrl_bus_T_129; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_131 = _ctrl_bus_T_121 ? 6'h2b : _ctrl_bus_T_130; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_132 = _ctrl_bus_T_119 ? 6'h29 : _ctrl_bus_T_131; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_133 = _ctrl_bus_T_117 ? 6'h2a : _ctrl_bus_T_132; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_134 = _ctrl_bus_T_115 ? 6'h39 : _ctrl_bus_T_133; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_135 = _ctrl_bus_T_113 ? 6'h38 : _ctrl_bus_T_134; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_136 = _ctrl_bus_T_111 ? 6'h37 : _ctrl_bus_T_135; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_137 = _ctrl_bus_T_109 ? 6'h34 : _ctrl_bus_T_136; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_138 = _ctrl_bus_T_107 ? 6'h33 : _ctrl_bus_T_137; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_139 = _ctrl_bus_T_105 ? 6'h32 : _ctrl_bus_T_138; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_140 = _ctrl_bus_T_103 ? 6'h35 : _ctrl_bus_T_139; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_141 = _ctrl_bus_T_101 ? 6'h30 : _ctrl_bus_T_140; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_142 = _ctrl_bus_T_99 ? 6'h2e : _ctrl_bus_T_141; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_143 = _ctrl_bus_T_97 ? 6'h14 : _ctrl_bus_T_142; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_144 = _ctrl_bus_T_95 ? 6'h13 : _ctrl_bus_T_143; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_145 = _ctrl_bus_T_93 ? 6'h12 : _ctrl_bus_T_144; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_146 = _ctrl_bus_T_91 ? 6'h11 : _ctrl_bus_T_145; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_147 = _ctrl_bus_T_89 ? 6'h1f : _ctrl_bus_T_146; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_148 = _ctrl_bus_T_87 ? 6'h1e : _ctrl_bus_T_147; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_149 = _ctrl_bus_T_85 ? 6'h1d : _ctrl_bus_T_148; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_150 = _ctrl_bus_T_83 ? 6'h1c : _ctrl_bus_T_149; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_151 = _ctrl_bus_T_81 ? 6'h16 : _ctrl_bus_T_150; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_152 = _ctrl_bus_T_79 ? 6'hd : _ctrl_bus_T_151; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_153 = _ctrl_bus_T_77 ? 6'h8 : _ctrl_bus_T_152; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_154 = _ctrl_bus_T_75 ? 6'hb : _ctrl_bus_T_153; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_155 = _ctrl_bus_T_73 ? 6'hf : _ctrl_bus_T_154; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_156 = _ctrl_bus_T_71 ? 6'he : _ctrl_bus_T_155; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_157 = _ctrl_bus_T_69 ? 6'hc : _ctrl_bus_T_156; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_158 = _ctrl_bus_T_67 ? 6'h31 : _ctrl_bus_T_157; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_159 = _ctrl_bus_T_65 ? 6'hf : _ctrl_bus_T_158; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_160 = _ctrl_bus_T_63 ? 6'hf : _ctrl_bus_T_159; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_161 = _ctrl_bus_T_61 ? 6'hf : _ctrl_bus_T_160; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_162 = _ctrl_bus_T_59 ? 6'hf : _ctrl_bus_T_161; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_163 = _ctrl_bus_T_57 ? 6'h5 : _ctrl_bus_T_162; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_164 = _ctrl_bus_T_55 ? 6'h4 : _ctrl_bus_T_163; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_165 = _ctrl_bus_T_53 ? 6'hf : _ctrl_bus_T_164; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_166 = _ctrl_bus_T_51 ? 6'hf : _ctrl_bus_T_165; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_167 = _ctrl_bus_T_49 ? 6'hf : _ctrl_bus_T_166; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_168 = _ctrl_bus_T_47 ? 6'hf : _ctrl_bus_T_167; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_169 = _ctrl_bus_T_45 ? 6'hf : _ctrl_bus_T_168; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_170 = _ctrl_bus_T_43 ? 6'hf : _ctrl_bus_T_169; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_171 = _ctrl_bus_T_41 ? 6'hf : _ctrl_bus_T_170; // @[Lookup.scala 34:39]
  wire [5:0] _ctrl_bus_T_172 = _ctrl_bus_T_39 ? 6'hf : _ctrl_bus_T_171; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_173 = _ctrl_bus_T_37 ? 7'h47 : {{1'd0}, _ctrl_bus_T_172}; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_174 = _ctrl_bus_T_35 ? 7'h46 : _ctrl_bus_T_173; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_175 = _ctrl_bus_T_33 ? 7'h3f : _ctrl_bus_T_174; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_176 = _ctrl_bus_T_31 ? 7'h3e : _ctrl_bus_T_175; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_177 = _ctrl_bus_T_29 ? 7'h3d : _ctrl_bus_T_176; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_178 = _ctrl_bus_T_27 ? 7'h1f : _ctrl_bus_T_177; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_179 = _ctrl_bus_T_25 ? 7'hb : _ctrl_bus_T_178; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_180 = _ctrl_bus_T_23 ? 7'h1d : _ctrl_bus_T_179; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_181 = _ctrl_bus_T_21 ? 7'h1c : _ctrl_bus_T_180; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_182 = _ctrl_bus_T_19 ? 7'h16 : _ctrl_bus_T_181; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_183 = _ctrl_bus_T_17 ? 7'h38 : _ctrl_bus_T_182; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_184 = _ctrl_bus_T_15 ? 7'h37 : _ctrl_bus_T_183; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_185 = _ctrl_bus_T_13 ? 7'h8 : _ctrl_bus_T_184; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_186 = _ctrl_bus_T_11 ? 7'h2e : _ctrl_bus_T_185; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_187 = _ctrl_bus_T_9 ? 7'h15 : _ctrl_bus_T_186; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_188 = _ctrl_bus_T_7 ? 7'hc : _ctrl_bus_T_187; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_189 = _ctrl_bus_T_5 ? 7'h1e : _ctrl_bus_T_188; // @[Lookup.scala 34:39]
  wire [6:0] _ctrl_bus_T_190 = _ctrl_bus_T_3 ? 7'h6 : _ctrl_bus_T_189; // @[Lookup.scala 34:39]
  wire [6:0] ctrl_bus_0 = _ctrl_bus_T_1 ? 7'hf : _ctrl_bus_T_190; // @[Lookup.scala 34:39]
  wire [31:0] ALUop = {{25'd0}, ctrl_bus_0}; // @[IDU.scala 404:11 66:21]
  wire [2:0] funct3 = inst[14:12]; // @[IDU.scala 316:19]
  wire [1:0] _csr_write_T_4 = ALUop == 32'h3d ? 2'h3 : {{1'd0}, funct3 > 3'h0}; // @[IDU.scala 491:50]
  wire [1:0] csr_write = opcode == 7'h73 ? _csr_write_T_4 : 2'h0; // @[IDU.scala 491:21]
  wire  _conflict_es_rs1_T_3 = csr_write == 2'h1; // @[IDU.scala 592:72]
  wire  _conflict_es_rs1_T_4 = ~ctrl_bus_4 | inst_type == 32'h45 | csr_write == 2'h1; // @[IDU.scala 592:59]
  wire [4:0] rs1 = inst[19:15]; // @[IDU.scala 319:16]
  wire  _conflict_es_rs1_T_6 = rs1 != 5'h0; // @[IDU.scala 592:111]
  wire  conflict_es_rs1 = (~ctrl_bus_4 | inst_type == 32'h45 | csr_write == 2'h1) & (rs1 == io_es_rf_dst & rs1 != 5'h0
     & io_es_rf_we & io_es_valid); // @[IDU.scala 592:81]
  wire  conflict_ms_rs1 = _conflict_es_rs1_T_4 & (rs1 == io_ms_rf_dst & _conflict_es_rs1_T_6 & io_ms_rf_we & io_ms_valid
    ); // @[IDU.scala 593:81]
  wire  conflict_ws_rs1 = _conflict_es_rs1_T_4 & (rs1 == io_ws_rf_dst & _conflict_es_rs1_T_6 & io_ws_rf_we & io_ws_valid
    ); // @[IDU.scala 594:81]
  wire  _ctrl_bus_T_377 = _ctrl_bus_T_7 | (_ctrl_bus_T_9 | (_ctrl_bus_T_11 | (_ctrl_bus_T_13 | (_ctrl_bus_T_15 | (
    _ctrl_bus_T_17 | (_ctrl_bus_T_19 | (_ctrl_bus_T_21 | (_ctrl_bus_T_23 | (_ctrl_bus_T_25 | (_ctrl_bus_T_27 | (
    _ctrl_bus_T_29 | (_ctrl_bus_T_31 | (_ctrl_bus_T_33 | (_ctrl_bus_T_35 | (_ctrl_bus_T_37 | (_ctrl_bus_T_39 | (
    _ctrl_bus_T_41 | (_ctrl_bus_T_43 | (_ctrl_bus_T_45 | (_ctrl_bus_T_47 | (_ctrl_bus_T_49 | (_ctrl_bus_T_51 | (
    _ctrl_bus_T_53 | (_ctrl_bus_T_55 | (_ctrl_bus_T_57 | (_ctrl_bus_T_59 | (_ctrl_bus_T_61 | (_ctrl_bus_T_63 | (
    _ctrl_bus_T_65 | _ctrl_bus_T_410))))))))))))))))))))))))))))); // @[Lookup.scala 34:39]
  wire  ctrl_bus_3 = _ctrl_bus_T_1 | (_ctrl_bus_T_3 | (_ctrl_bus_T_5 | _ctrl_bus_T_377)); // @[Lookup.scala 34:39]
  wire  _conflict_es_rs2_T_5 = csr_write == 2'h3; // @[IDU.scala 595:92]
  wire  _conflict_es_rs2_T_6 = ~ctrl_bus_3 | inst_type == 32'h44 | _conflict_es_rs1_T_1 | csr_write == 2'h3; // @[IDU.scala 595:81]
  wire [4:0] rs2 = csr_write[0] ? 5'h11 : inst[24:20]; // @[IDU.scala 318:15]
  wire  _conflict_es_rs2_T_8 = rs2 != 5'h0; // @[IDU.scala 595:130]
  wire  conflict_es_rs2 = (~ctrl_bus_3 | inst_type == 32'h44 | _conflict_es_rs1_T_1 | csr_write == 2'h3) & (rs2 ==
    io_es_rf_dst & rs2 != 5'h0 & io_es_rf_we & io_es_valid); // @[IDU.scala 595:100]
  wire  conflict_ms_rs2 = _conflict_es_rs2_T_6 & (rs2 == io_ms_rf_dst & _conflict_es_rs2_T_8 & io_ms_rf_we & io_ms_valid
    ); // @[IDU.scala 596:100]
  wire  conflict_ws_rs2 = _conflict_es_rs2_T_6 & (rs2 == io_ws_rf_dst & _conflict_es_rs2_T_8 & io_ws_rf_we & io_ws_valid
    ); // @[IDU.scala 597:100]
  wire  _ds_ready_go_T_33 = conflict_es_rs2 & (io_es_fwd_ready & ~io_es_ld) | ~conflict_es_rs2 & conflict_ms_rs2 &
    io_ms_fwd_ready | ~conflict_es_rs2 & ~conflict_ms_rs2 & conflict_ws_rs2 | ~(conflict_es_rs2 | conflict_ms_rs2 |
    conflict_ws_rs2); // @[IDU.scala 151:459]
  wire  ds_ready_go = (conflict_es_rs1 & (io_es_fwd_ready & ~io_es_ld) | ~conflict_es_rs1 & conflict_ms_rs1 &
    io_ms_fwd_ready | ~conflict_es_rs1 & ~conflict_ms_rs1 & conflict_ws_rs1 | ~(conflict_es_rs1 | conflict_ms_rs1 |
    conflict_ws_rs1)) & _ds_ready_go_T_33; // @[IDU.scala 151:265]
  wire  ds_allowin = ~ds_valid | ds_ready_go & io_es_allowin; // @[IDU.scala 153:29]
  wire  _T = ds_allowin & io_fs_to_ds_valid; // @[IDU.scala 134:21]
  wire [63:0] _rdata1_T = conflict_ws_rs1 ? io_ws_fwd_res : io_rdata1; // @[IDU.scala 598:86]
  wire [63:0] _rdata1_T_1 = conflict_ms_rs1 ? io_ms_fwd_res : _rdata1_T; // @[IDU.scala 598:52]
  wire [63:0] rdata1 = conflict_es_rs1 ? io_es_fwd_res : _rdata1_T_1; // @[IDU.scala 598:18]
  wire [63:0] _bne_res_T = conflict_es_rs1 ? io_es_fwd_res : _rdata1_T_1; // @[IDU.scala 223:26]
  wire [63:0] _rdata2_T = conflict_ws_rs2 ? io_ws_fwd_res : io_rdata2; // @[IDU.scala 599:86]
  wire [63:0] _rdata2_T_1 = conflict_ms_rs2 ? io_ms_fwd_res : _rdata2_T; // @[IDU.scala 599:52]
  wire [63:0] rdata2 = conflict_es_rs2 ? io_es_fwd_res : _rdata2_T_1; // @[IDU.scala 599:18]
  wire [63:0] _bne_res_T_1 = conflict_es_rs2 ? io_es_fwd_res : _rdata2_T_1; // @[IDU.scala 223:44]
  wire  bne_res = $signed(_bne_res_T) != $signed(_bne_res_T_1); // @[IDU.scala 223:33]
  wire  beq_res = $signed(_bne_res_T) == $signed(_bne_res_T_1); // @[IDU.scala 224:33]
  wire  bge_res = $signed(_bne_res_T) >= $signed(_bne_res_T_1); // @[IDU.scala 225:33]
  wire  blt_res = $signed(_bne_res_T) < $signed(_bne_res_T_1); // @[IDU.scala 226:33]
  wire  bltu_res = rdata1 < rdata2; // @[IDU.scala 227:27]
  wire  bgeu_res = rdata1 >= rdata2; // @[IDU.scala 228:27]
  wire  _ctrl_bus_T_507 = _ctrl_bus_T_125 ? bltu_res : _ctrl_bus_T_127 & bgeu_res; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_508 = _ctrl_bus_T_123 ? blt_res : _ctrl_bus_T_507; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_509 = _ctrl_bus_T_121 ? bge_res : _ctrl_bus_T_508; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_510 = _ctrl_bus_T_119 ? beq_res : _ctrl_bus_T_509; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_511 = _ctrl_bus_T_117 ? bne_res : _ctrl_bus_T_510; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_512 = _ctrl_bus_T_115 ? 1'h0 : _ctrl_bus_T_511; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_513 = _ctrl_bus_T_113 ? 1'h0 : _ctrl_bus_T_512; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_514 = _ctrl_bus_T_111 ? 1'h0 : _ctrl_bus_T_513; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_515 = _ctrl_bus_T_109 ? 1'h0 : _ctrl_bus_T_514; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_516 = _ctrl_bus_T_107 ? 1'h0 : _ctrl_bus_T_515; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_517 = _ctrl_bus_T_105 ? 1'h0 : _ctrl_bus_T_516; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_518 = _ctrl_bus_T_103 ? 1'h0 : _ctrl_bus_T_517; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_519 = _ctrl_bus_T_101 ? 1'h0 : _ctrl_bus_T_518; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_520 = _ctrl_bus_T_99 ? 1'h0 : _ctrl_bus_T_519; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_521 = _ctrl_bus_T_97 ? 1'h0 : _ctrl_bus_T_520; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_522 = _ctrl_bus_T_95 ? 1'h0 : _ctrl_bus_T_521; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_523 = _ctrl_bus_T_93 ? 1'h0 : _ctrl_bus_T_522; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_524 = _ctrl_bus_T_91 ? 1'h0 : _ctrl_bus_T_523; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_525 = _ctrl_bus_T_89 ? 1'h0 : _ctrl_bus_T_524; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_526 = _ctrl_bus_T_87 ? 1'h0 : _ctrl_bus_T_525; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_527 = _ctrl_bus_T_85 ? 1'h0 : _ctrl_bus_T_526; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_528 = _ctrl_bus_T_83 ? 1'h0 : _ctrl_bus_T_527; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_529 = _ctrl_bus_T_81 ? 1'h0 : _ctrl_bus_T_528; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_530 = _ctrl_bus_T_79 ? 1'h0 : _ctrl_bus_T_529; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_531 = _ctrl_bus_T_77 ? 1'h0 : _ctrl_bus_T_530; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_532 = _ctrl_bus_T_75 ? 1'h0 : _ctrl_bus_T_531; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_533 = _ctrl_bus_T_73 ? 1'h0 : _ctrl_bus_T_532; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_534 = _ctrl_bus_T_71 ? 1'h0 : _ctrl_bus_T_533; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_535 = _ctrl_bus_T_69 ? 1'h0 : _ctrl_bus_T_534; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_536 = _ctrl_bus_T_67 ? 1'h0 : _ctrl_bus_T_535; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_537 = _ctrl_bus_T_65 ? 1'h0 : _ctrl_bus_T_536; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_538 = _ctrl_bus_T_63 ? 1'h0 : _ctrl_bus_T_537; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_539 = _ctrl_bus_T_61 ? 1'h0 : _ctrl_bus_T_538; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_540 = _ctrl_bus_T_59 ? 1'h0 : _ctrl_bus_T_539; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_542 = _ctrl_bus_T_55 ? 1'h0 : _ctrl_bus_T_57 | _ctrl_bus_T_540; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_543 = _ctrl_bus_T_53 ? 1'h0 : _ctrl_bus_T_542; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_544 = _ctrl_bus_T_51 ? 1'h0 : _ctrl_bus_T_543; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_545 = _ctrl_bus_T_49 ? 1'h0 : _ctrl_bus_T_544; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_546 = _ctrl_bus_T_47 ? 1'h0 : _ctrl_bus_T_545; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_547 = _ctrl_bus_T_45 ? 1'h0 : _ctrl_bus_T_546; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_548 = _ctrl_bus_T_43 ? 1'h0 : _ctrl_bus_T_547; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_549 = _ctrl_bus_T_41 ? 1'h0 : _ctrl_bus_T_548; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_550 = _ctrl_bus_T_39 ? 1'h0 : _ctrl_bus_T_549; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_551 = _ctrl_bus_T_37 ? 1'h0 : _ctrl_bus_T_550; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_552 = _ctrl_bus_T_35 ? 1'h0 : _ctrl_bus_T_551; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_553 = _ctrl_bus_T_33 ? 1'h0 : _ctrl_bus_T_552; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_556 = _ctrl_bus_T_27 ? 1'h0 : _ctrl_bus_T_29 | (_ctrl_bus_T_31 | _ctrl_bus_T_553); // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_557 = _ctrl_bus_T_25 ? 1'h0 : _ctrl_bus_T_556; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_558 = _ctrl_bus_T_23 ? 1'h0 : _ctrl_bus_T_557; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_559 = _ctrl_bus_T_21 ? 1'h0 : _ctrl_bus_T_558; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_560 = _ctrl_bus_T_19 ? 1'h0 : _ctrl_bus_T_559; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_561 = _ctrl_bus_T_17 ? 1'h0 : _ctrl_bus_T_560; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_562 = _ctrl_bus_T_15 ? 1'h0 : _ctrl_bus_T_561; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_563 = _ctrl_bus_T_13 ? 1'h0 : _ctrl_bus_T_562; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_564 = _ctrl_bus_T_11 ? 1'h0 : _ctrl_bus_T_563; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_565 = _ctrl_bus_T_9 ? 1'h0 : _ctrl_bus_T_564; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_566 = _ctrl_bus_T_7 ? 1'h0 : _ctrl_bus_T_565; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_567 = _ctrl_bus_T_5 ? 1'h0 : _ctrl_bus_T_566; // @[Lookup.scala 34:39]
  wire  ctrl_bus_6 = _ctrl_bus_T_1 ? 1'h0 : _ctrl_bus_T_3 | _ctrl_bus_T_567; // @[Lookup.scala 34:39]
  wire  _T_2 = ~br_taken_cancel; // @[IDU.scala 134:57]
  wire  _GEN_0 = _T & br_taken_cancel ? 1'h0 : br_taken_cancel; // @[IDU.scala 136:67 137:25 123:34]
  wire  _GEN_1 = ds_allowin & io_fs_to_ds_valid & ctrl_bus_6 & ~br_taken_cancel | _GEN_0; // @[IDU.scala 134:74 135:25]
  wire  _T_7 = ctrl_bus_6 & _T_2; // @[IDU.scala 141:19]
  wire  _ctrl_bus_T_285 = _ctrl_bus_T_65 ? 1'h0 : _ctrl_bus_T_67 | (_ctrl_bus_T_69 | (_ctrl_bus_T_71 | (_ctrl_bus_T_73
     | (_ctrl_bus_T_75 | (_ctrl_bus_T_77 | (_ctrl_bus_T_79 | (_ctrl_bus_T_81 | (_ctrl_bus_T_83 | (_ctrl_bus_T_85 | (
    _ctrl_bus_T_87 | (_ctrl_bus_T_89 | (_ctrl_bus_T_91 | (_ctrl_bus_T_93 | (_ctrl_bus_T_95 | (_ctrl_bus_T_97 | (
    _ctrl_bus_T_99 | (_ctrl_bus_T_101 | (_ctrl_bus_T_103 | (_ctrl_bus_T_105 | (_ctrl_bus_T_107 | (_ctrl_bus_T_109 | (
    _ctrl_bus_T_111 | (_ctrl_bus_T_113 | _ctrl_bus_T_115))))))))))))))))))))))); // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_286 = _ctrl_bus_T_63 ? 1'h0 : _ctrl_bus_T_285; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_287 = _ctrl_bus_T_61 ? 1'h0 : _ctrl_bus_T_286; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_288 = _ctrl_bus_T_59 ? 1'h0 : _ctrl_bus_T_287; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_302 = _ctrl_bus_T_31 ? 1'h0 : _ctrl_bus_T_33 | (_ctrl_bus_T_35 | (_ctrl_bus_T_37 | (_ctrl_bus_T_39
     | (_ctrl_bus_T_41 | (_ctrl_bus_T_43 | (_ctrl_bus_T_45 | (_ctrl_bus_T_47 | (_ctrl_bus_T_49 | (_ctrl_bus_T_51 | (
    _ctrl_bus_T_53 | (_ctrl_bus_T_55 | (_ctrl_bus_T_57 | _ctrl_bus_T_288)))))))))))); // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_303 = _ctrl_bus_T_29 ? 1'h0 : _ctrl_bus_T_302; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_488 = _ctrl_bus_T_37 ? 1'h0 : _ctrl_bus_T_39 | (_ctrl_bus_T_41 | (_ctrl_bus_T_43 | (_ctrl_bus_T_45
     | (_ctrl_bus_T_47 | (_ctrl_bus_T_49 | _ctrl_bus_T_51))))); // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_489 = _ctrl_bus_T_35 ? 1'h0 : _ctrl_bus_T_488; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_490 = _ctrl_bus_T_33 ? 1'h0 : _ctrl_bus_T_489; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_491 = _ctrl_bus_T_31 ? 1'h0 : _ctrl_bus_T_490; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_492 = _ctrl_bus_T_29 ? 1'h0 : _ctrl_bus_T_491; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_493 = _ctrl_bus_T_27 ? 1'h0 : _ctrl_bus_T_492; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_494 = _ctrl_bus_T_25 ? 1'h0 : _ctrl_bus_T_493; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_495 = _ctrl_bus_T_23 ? 1'h0 : _ctrl_bus_T_494; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_496 = _ctrl_bus_T_21 ? 1'h0 : _ctrl_bus_T_495; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_497 = _ctrl_bus_T_19 ? 1'h0 : _ctrl_bus_T_496; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_498 = _ctrl_bus_T_17 ? 1'h0 : _ctrl_bus_T_497; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_499 = _ctrl_bus_T_15 ? 1'h0 : _ctrl_bus_T_498; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_500 = _ctrl_bus_T_13 ? 1'h0 : _ctrl_bus_T_499; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_501 = _ctrl_bus_T_11 ? 1'h0 : _ctrl_bus_T_500; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_502 = _ctrl_bus_T_9 ? 1'h0 : _ctrl_bus_T_501; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_503 = _ctrl_bus_T_7 ? 1'h0 : _ctrl_bus_T_502; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_504 = _ctrl_bus_T_5 ? 1'h0 : _ctrl_bus_T_503; // @[Lookup.scala 34:39]
  wire  _ctrl_bus_T_505 = _ctrl_bus_T_3 ? 1'h0 : _ctrl_bus_T_504; // @[Lookup.scala 34:39]
  wire  ctrl_bus_5 = _ctrl_bus_T_1 ? 1'h0 : _ctrl_bus_T_505; // @[Lookup.scala 34:39]
  wire [4:0] rd = inst[11:7]; // @[IDU.scala 320:15]
  wire [11:0] imm_imm = inst[31:20]; // @[IDU.scala 84:23]
  wire [51:0] _imm_T_2 = imm_imm[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_3 = {_imm_T_2,imm_imm}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_1 = {inst[31],inst[19:12],inst[20],inst[30:21]}; // @[Cat.scala 31:58]
  wire [42:0] _imm_T_6 = imm_imm_1[19] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_7 = {_imm_T_6,inst[31],inst[19:12],inst[20],inst[30:21],1'h0}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_2 = inst[31:12]; // @[IDU.scala 88:23]
  wire [31:0] _imm_T_10 = imm_imm_2[19] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_12 = {_imm_T_10,imm_imm_2,12'h0}; // @[Cat.scala 31:58]
  wire [11:0] imm_imm_3 = {inst[31:25],rd}; // @[Cat.scala 31:58]
  wire [51:0] _imm_T_15 = imm_imm_3[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_16 = {_imm_T_15,inst[31:25],rd}; // @[Cat.scala 31:58]
  wire [11:0] imm_imm_4 = {inst[31],inst[7],inst[30:25],inst[11:8]}; // @[Cat.scala 31:58]
  wire [50:0] _imm_T_19 = imm_imm_4[11] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_20 = {_imm_T_19,inst[31],inst[7],inst[30:25],inst[11:8],1'h0}; // @[Cat.scala 31:58]
  wire [63:0] _imm_T_22 = 32'h40 == inst_type ? _imm_T_3 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_24 = 32'h43 == inst_type ? _imm_T_7 : _imm_T_22; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_26 = 32'h42 == inst_type ? _imm_T_12 : _imm_T_24; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_28 = 32'h44 == inst_type ? _imm_T_16 : _imm_T_26; // @[Mux.scala 81:58]
  wire [63:0] imm = 32'h45 == inst_type ? _imm_T_20 : _imm_T_28; // @[Mux.scala 81:58]
  wire [7:0] _Wmask_T_1 = 3'h3 == funct3 ? 8'hff : 8'h0; // @[Mux.scala 81:58]
  wire [7:0] _Wmask_T_3 = 3'h1 == funct3 ? 8'h3 : _Wmask_T_1; // @[Mux.scala 81:58]
  wire [7:0] _Wmask_T_5 = 3'h0 == funct3 ? 8'h1 : _Wmask_T_3; // @[Mux.scala 81:58]
  wire [1:0] _csr_index_T_6 = 12'h300 == imm[11:0] ? 2'h2 : {{1'd0}, 12'h341 == imm[11:0]}; // @[Mux.scala 81:58]
  wire [1:0] csr_index = 12'h342 == imm[11:0] ? 2'h3 : _csr_index_T_6; // @[Mux.scala 81:58]
  wire [63:0] _csr_wdata_T = rdata1 | csr_reg_io_rdata; // @[IDU.scala 557:29]
  wire [63:0] _csr_wdata_T_1 = ~csr_reg_io_rdata; // @[IDU.scala 558:32]
  wire [63:0] _csr_wdata_T_2 = rdata1 & _csr_wdata_T_1; // @[IDU.scala 558:29]
  wire [63:0] _csr_wdata_T_4 = 3'h5 == funct3 ? rdata1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _csr_wdata_T_6 = 3'h2 == funct3 ? _csr_wdata_T : _csr_wdata_T_4; // @[Mux.scala 81:58]
  wire [63:0] csr_wdata = 3'h3 == funct3 ? _csr_wdata_T_2 : _csr_wdata_T_6; // @[Mux.scala 81:58]
  wire [1:0] _T_17 = ALUop == 32'h3e ? 2'h1 : csr_index; // @[IDU.scala 561:48]
  wire [1:0] _T_24 = _conflict_es_rs1_T_3 ? csr_index : 2'h0; // @[IDU.scala 563:46]
  wire [63:0] _T_28 = _conflict_es_rs1_T_3 ? csr_wdata : 64'h0; // @[IDU.scala 564:48]
  wire [63:0] src1 = ctrl_bus_4 ? ds_pc : rdata1; // @[IDU.scala 570:16]
  wire [63:0] src2 = ctrl_bus_3 ? imm : rdata2; // @[IDU.scala 571:16]
  wire [63:0] _br_target_T_1 = src1 + src2; // @[IDU.scala 574:39]
  wire [63:0] _br_target_T_4 = _br_target_T_1 & 64'hfffffffffffffffe; // @[IDU.scala 575:33]
  wire [63:0] _br_target_T_6 = csr_reg_io_rdata + 64'h4; // @[IDU.scala 577:30]
  wire [63:0] _br_target_T_8 = 32'h6 == ALUop ? _br_target_T_4 : _br_target_T_1; // @[Mux.scala 81:58]
  wire [63:0] _br_target_T_10 = 32'h3d == ALUop ? csr_reg_io_rdata : _br_target_T_8; // @[Mux.scala 81:58]
  wire [31:0] _io_store_data_T_11 = _ctrl_bus_T_65 ? rdata2[31:0] : 32'h0; // @[Lookup.scala 34:39]
  wire [31:0] _io_store_data_T_12 = _ctrl_bus_T_63 ? {{24'd0}, rdata2[7:0]} : _io_store_data_T_11; // @[Lookup.scala 34:39]
  wire [31:0] _io_store_data_T_13 = _ctrl_bus_T_61 ? {{16'd0}, rdata2[15:0]} : _io_store_data_T_12; // @[Lookup.scala 34:39]
  csr_reg csr_reg ( // @[IDU.scala 548:21]
    .clock(csr_reg_clock),
    .io_wen1(csr_reg_io_wen1),
    .io_wen2(csr_reg_io_wen2),
    .io_waddr1(csr_reg_io_waddr1),
    .io_wdata1(csr_reg_io_wdata1),
    .io_wdata2(csr_reg_io_wdata2),
    .io_raddr(csr_reg_io_raddr),
    .io_rdata(csr_reg_io_rdata)
  );
  assign io_ds_to_es_valid = ds_valid & ds_ready_go; // @[IDU.scala 152:32]
  assign io_br_taken = ctrl_bus_6 & ds_ready_go & _T_2; // @[IDU.scala 603:44]
  assign io_br_target = 32'h3e == ALUop ? _br_target_T_6 : _br_target_T_10; // @[Mux.scala 81:58]
  assign io_ds_allowin = ~ds_valid | ds_ready_go & io_es_allowin; // @[IDU.scala 153:29]
  assign io_ds_ready_go = (conflict_es_rs1 & (io_es_fwd_ready & ~io_es_ld) | ~conflict_es_rs1 & conflict_ms_rs1 &
    io_ms_fwd_ready | ~conflict_es_rs1 & ~conflict_ms_rs1 & conflict_ws_rs1 | ~(conflict_es_rs1 | conflict_ms_rs1 |
    conflict_ws_rs1)) & _ds_ready_go_T_33; // @[IDU.scala 151:265]
  assign io_fence = 32'h100f == inst; // @[Lookup.scala 31:38]
  assign io_raddr1 = inst[19:15]; // @[IDU.scala 319:16]
  assign io_raddr2 = csr_write[0] ? 5'h11 : inst[24:20]; // @[IDU.scala 318:15]
  assign io_to_es_pc = ds_pc; // @[IDU.scala 626:17]
  assign io_ALUop = {{25'd0}, ctrl_bus_0}; // @[IDU.scala 404:11 66:21]
  assign io_src1 = csr_write[0] ? csr_reg_io_rdata : src1; // @[IDU.scala 615:19]
  assign io_src2 = ctrl_bus_3 ? imm : rdata2; // @[IDU.scala 571:16]
  assign io_rf_dst = inst[11:7]; // @[IDU.scala 320:15]
  assign io_store_data = _ctrl_bus_T_59 ? rdata2 : {{32'd0}, _io_store_data_T_13}; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_reg_write = _ctrl_bus_T_1 | (_ctrl_bus_T_3 | (_ctrl_bus_T_5 | (_ctrl_bus_T_7 | (_ctrl_bus_T_9 | (
    _ctrl_bus_T_11 | (_ctrl_bus_T_13 | (_ctrl_bus_T_15 | (_ctrl_bus_T_17 | (_ctrl_bus_T_19 | (_ctrl_bus_T_21 | (
    _ctrl_bus_T_23 | (_ctrl_bus_T_25 | (_ctrl_bus_T_27 | _ctrl_bus_T_303))))))))))))); // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Writemem_en = inst_type == 32'h44; // @[IDU.scala 517:29]
  assign io_ctrl_sign_Readmem_en = _ctrl_bus_T_1 ? 1'h0 : _ctrl_bus_T_505; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Wmask = 3'h2 == funct3 ? 8'hf : _Wmask_T_5; // @[Mux.scala 81:58]
  assign io_load_type = ctrl_bus_5 ? funct3 : 3'h7; // @[IDU.scala 539:21]
  assign io_ds_valid = ds_valid; // @[IDU.scala 628:17]
  assign csr_reg_clock = clock;
  assign csr_reg_io_wen1 = csr_write[0] & ds_valid; // @[IDU.scala 562:38]
  assign csr_reg_io_wen2 = csr_write[1] & ds_valid; // @[IDU.scala 565:38]
  assign csr_reg_io_waddr1 = _conflict_es_rs2_T_5 ? 2'h1 : _T_24; // @[IDU.scala 563:22]
  assign csr_reg_io_wdata1 = _conflict_es_rs2_T_5 ? ds_pc : _T_28; // @[IDU.scala 564:22]
  assign csr_reg_io_wdata2 = conflict_es_rs2 ? io_es_fwd_res : _rdata2_T_1; // @[IDU.scala 599:18]
  assign csr_reg_io_raddr = csr_write[1] ? 2'h0 : _T_17; // @[IDU.scala 561:21]
  always @(posedge clock) begin
    if (reset) begin // @[IDU.scala 113:27]
      ds_valid <= 1'h0; // @[IDU.scala 113:27]
    end else if (ctrl_bus_6 & _T_2 & ds_allowin) begin // @[IDU.scala 141:53]
      ds_valid <= 1'h0; // @[IDU.scala 142:18]
    end else if (ds_allowin) begin // @[IDU.scala 143:27]
      ds_valid <= io_fs_to_ds_valid; // @[IDU.scala 144:18]
    end
    if (reset) begin // @[IDU.scala 117:24]
      ds_pc <= 64'h0; // @[IDU.scala 117:24]
    end else if (io_fs_to_ds_valid & ds_allowin & ~_T_7) begin // @[IDU.scala 146:75]
      ds_pc <= io_pc; // @[IDU.scala 147:15]
    end
    if (reset) begin // @[IDU.scala 119:23]
      inst <= 32'h0; // @[IDU.scala 119:23]
    end else if (io_fs_to_ds_valid & ds_allowin & ~_T_7) begin // @[IDU.scala 146:75]
      inst <= io_from_fs_inst; // @[IDU.scala 148:14]
    end
    if (reset) begin // @[IDU.scala 123:34]
      br_taken_cancel <= 1'h0; // @[IDU.scala 123:34]
    end else begin
      br_taken_cancel <= _GEN_1;
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
  _RAND_0 = {1{`RANDOM}};
  ds_valid = _RAND_0[0:0];
  _RAND_1 = {2{`RANDOM}};
  ds_pc = _RAND_1[63:0];
  _RAND_2 = {1{`RANDOM}};
  inst = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  br_taken_cancel = _RAND_3[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
/* verilator lint_on UNUSED */
