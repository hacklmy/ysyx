module Register(
  input         clock,
  input  [4:0]  io_raddr1,
  input  [4:0]  io_raddr2,
  output [63:0] io_rdata1,
  output [63:0] io_rdata2,
  input         io_we,
  input  [4:0]  io_waddr,
  input  [63:0] io_wdata
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] Reg [0:31]; // @[register.scala 18:18]
  wire  Reg_io_rdata1_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_io_rdata1_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_io_rdata1_MPORT_data; // @[register.scala 18:18]
  wire  Reg_io_rdata2_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_io_rdata2_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_io_rdata2_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_0_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_0_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_0_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_1_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_1_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_1_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_2_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_2_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_2_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_3_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_3_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_3_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_4_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_4_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_4_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_5_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_5_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_5_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_6_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_6_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_6_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_7_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_7_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_7_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_8_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_8_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_8_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_9_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_9_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_9_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_10_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_10_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_10_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_11_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_11_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_11_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_12_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_12_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_12_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_13_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_13_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_13_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_14_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_14_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_14_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_15_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_15_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_15_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_16_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_16_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_16_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_17_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_17_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_17_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_18_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_18_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_18_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_19_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_19_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_19_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_20_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_20_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_20_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_21_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_21_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_21_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_22_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_22_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_22_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_23_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_23_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_23_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_24_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_24_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_24_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_25_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_25_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_25_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_26_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_26_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_26_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_27_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_27_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_27_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_28_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_28_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_28_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_29_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_29_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_29_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_30_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_30_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_30_MPORT_data; // @[register.scala 18:18]
  wire  Reg_reg_trace_io_input_reg_31_MPORT_en; // @[register.scala 18:18]
  wire [4:0] Reg_reg_trace_io_input_reg_31_MPORT_addr; // @[register.scala 18:18]
  wire [63:0] Reg_reg_trace_io_input_reg_31_MPORT_data; // @[register.scala 18:18]
  wire [63:0] Reg_MPORT_data; // @[register.scala 18:18]
  wire [4:0] Reg_MPORT_addr; // @[register.scala 18:18]
  wire  Reg_MPORT_mask; // @[register.scala 18:18]
  wire  Reg_MPORT_en; // @[register.scala 18:18]
  wire [63:0] reg_trace_input_reg_0; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_1; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_2; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_3; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_4; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_5; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_6; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_7; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_8; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_9; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_10; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_11; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_12; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_13; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_14; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_15; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_16; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_17; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_18; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_19; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_20; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_21; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_22; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_23; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_24; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_25; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_26; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_27; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_28; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_29; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_30; // @[register.scala 24:27]
  wire [63:0] reg_trace_input_reg_31; // @[register.scala 24:27]
  wire  _T = io_waddr != 5'h0; // @[register.scala 19:25]
  traceregs reg_trace ( // @[register.scala 24:27]
    .input_reg_0(reg_trace_input_reg_0),
    .input_reg_1(reg_trace_input_reg_1),
    .input_reg_2(reg_trace_input_reg_2),
    .input_reg_3(reg_trace_input_reg_3),
    .input_reg_4(reg_trace_input_reg_4),
    .input_reg_5(reg_trace_input_reg_5),
    .input_reg_6(reg_trace_input_reg_6),
    .input_reg_7(reg_trace_input_reg_7),
    .input_reg_8(reg_trace_input_reg_8),
    .input_reg_9(reg_trace_input_reg_9),
    .input_reg_10(reg_trace_input_reg_10),
    .input_reg_11(reg_trace_input_reg_11),
    .input_reg_12(reg_trace_input_reg_12),
    .input_reg_13(reg_trace_input_reg_13),
    .input_reg_14(reg_trace_input_reg_14),
    .input_reg_15(reg_trace_input_reg_15),
    .input_reg_16(reg_trace_input_reg_16),
    .input_reg_17(reg_trace_input_reg_17),
    .input_reg_18(reg_trace_input_reg_18),
    .input_reg_19(reg_trace_input_reg_19),
    .input_reg_20(reg_trace_input_reg_20),
    .input_reg_21(reg_trace_input_reg_21),
    .input_reg_22(reg_trace_input_reg_22),
    .input_reg_23(reg_trace_input_reg_23),
    .input_reg_24(reg_trace_input_reg_24),
    .input_reg_25(reg_trace_input_reg_25),
    .input_reg_26(reg_trace_input_reg_26),
    .input_reg_27(reg_trace_input_reg_27),
    .input_reg_28(reg_trace_input_reg_28),
    .input_reg_29(reg_trace_input_reg_29),
    .input_reg_30(reg_trace_input_reg_30),
    .input_reg_31(reg_trace_input_reg_31)
  );
  assign Reg_io_rdata1_MPORT_en = 1'h1;
  assign Reg_io_rdata1_MPORT_addr = io_raddr1;
  assign Reg_io_rdata1_MPORT_data = Reg[Reg_io_rdata1_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_io_rdata2_MPORT_en = 1'h1;
  assign Reg_io_rdata2_MPORT_addr = io_raddr2;
  assign Reg_io_rdata2_MPORT_data = Reg[Reg_io_rdata2_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_0_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_0_MPORT_addr = 5'h0;
  assign Reg_reg_trace_io_input_reg_0_MPORT_data = Reg[Reg_reg_trace_io_input_reg_0_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_1_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_1_MPORT_addr = 5'h1;
  assign Reg_reg_trace_io_input_reg_1_MPORT_data = Reg[Reg_reg_trace_io_input_reg_1_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_2_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_2_MPORT_addr = 5'h2;
  assign Reg_reg_trace_io_input_reg_2_MPORT_data = Reg[Reg_reg_trace_io_input_reg_2_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_3_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_3_MPORT_addr = 5'h3;
  assign Reg_reg_trace_io_input_reg_3_MPORT_data = Reg[Reg_reg_trace_io_input_reg_3_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_4_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_4_MPORT_addr = 5'h4;
  assign Reg_reg_trace_io_input_reg_4_MPORT_data = Reg[Reg_reg_trace_io_input_reg_4_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_5_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_5_MPORT_addr = 5'h5;
  assign Reg_reg_trace_io_input_reg_5_MPORT_data = Reg[Reg_reg_trace_io_input_reg_5_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_6_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_6_MPORT_addr = 5'h6;
  assign Reg_reg_trace_io_input_reg_6_MPORT_data = Reg[Reg_reg_trace_io_input_reg_6_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_7_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_7_MPORT_addr = 5'h7;
  assign Reg_reg_trace_io_input_reg_7_MPORT_data = Reg[Reg_reg_trace_io_input_reg_7_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_8_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_8_MPORT_addr = 5'h8;
  assign Reg_reg_trace_io_input_reg_8_MPORT_data = Reg[Reg_reg_trace_io_input_reg_8_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_9_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_9_MPORT_addr = 5'h9;
  assign Reg_reg_trace_io_input_reg_9_MPORT_data = Reg[Reg_reg_trace_io_input_reg_9_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_10_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_10_MPORT_addr = 5'ha;
  assign Reg_reg_trace_io_input_reg_10_MPORT_data = Reg[Reg_reg_trace_io_input_reg_10_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_11_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_11_MPORT_addr = 5'hb;
  assign Reg_reg_trace_io_input_reg_11_MPORT_data = Reg[Reg_reg_trace_io_input_reg_11_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_12_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_12_MPORT_addr = 5'hc;
  assign Reg_reg_trace_io_input_reg_12_MPORT_data = Reg[Reg_reg_trace_io_input_reg_12_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_13_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_13_MPORT_addr = 5'hd;
  assign Reg_reg_trace_io_input_reg_13_MPORT_data = Reg[Reg_reg_trace_io_input_reg_13_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_14_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_14_MPORT_addr = 5'he;
  assign Reg_reg_trace_io_input_reg_14_MPORT_data = Reg[Reg_reg_trace_io_input_reg_14_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_15_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_15_MPORT_addr = 5'hf;
  assign Reg_reg_trace_io_input_reg_15_MPORT_data = Reg[Reg_reg_trace_io_input_reg_15_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_16_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_16_MPORT_addr = 5'h10;
  assign Reg_reg_trace_io_input_reg_16_MPORT_data = Reg[Reg_reg_trace_io_input_reg_16_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_17_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_17_MPORT_addr = 5'h11;
  assign Reg_reg_trace_io_input_reg_17_MPORT_data = Reg[Reg_reg_trace_io_input_reg_17_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_18_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_18_MPORT_addr = 5'h12;
  assign Reg_reg_trace_io_input_reg_18_MPORT_data = Reg[Reg_reg_trace_io_input_reg_18_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_19_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_19_MPORT_addr = 5'h13;
  assign Reg_reg_trace_io_input_reg_19_MPORT_data = Reg[Reg_reg_trace_io_input_reg_19_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_20_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_20_MPORT_addr = 5'h14;
  assign Reg_reg_trace_io_input_reg_20_MPORT_data = Reg[Reg_reg_trace_io_input_reg_20_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_21_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_21_MPORT_addr = 5'h15;
  assign Reg_reg_trace_io_input_reg_21_MPORT_data = Reg[Reg_reg_trace_io_input_reg_21_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_22_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_22_MPORT_addr = 5'h16;
  assign Reg_reg_trace_io_input_reg_22_MPORT_data = Reg[Reg_reg_trace_io_input_reg_22_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_23_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_23_MPORT_addr = 5'h17;
  assign Reg_reg_trace_io_input_reg_23_MPORT_data = Reg[Reg_reg_trace_io_input_reg_23_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_24_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_24_MPORT_addr = 5'h18;
  assign Reg_reg_trace_io_input_reg_24_MPORT_data = Reg[Reg_reg_trace_io_input_reg_24_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_25_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_25_MPORT_addr = 5'h19;
  assign Reg_reg_trace_io_input_reg_25_MPORT_data = Reg[Reg_reg_trace_io_input_reg_25_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_26_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_26_MPORT_addr = 5'h1a;
  assign Reg_reg_trace_io_input_reg_26_MPORT_data = Reg[Reg_reg_trace_io_input_reg_26_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_27_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_27_MPORT_addr = 5'h1b;
  assign Reg_reg_trace_io_input_reg_27_MPORT_data = Reg[Reg_reg_trace_io_input_reg_27_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_28_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_28_MPORT_addr = 5'h1c;
  assign Reg_reg_trace_io_input_reg_28_MPORT_data = Reg[Reg_reg_trace_io_input_reg_28_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_29_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_29_MPORT_addr = 5'h1d;
  assign Reg_reg_trace_io_input_reg_29_MPORT_data = Reg[Reg_reg_trace_io_input_reg_29_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_30_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_30_MPORT_addr = 5'h1e;
  assign Reg_reg_trace_io_input_reg_30_MPORT_data = Reg[Reg_reg_trace_io_input_reg_30_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_reg_trace_io_input_reg_31_MPORT_en = 1'h1;
  assign Reg_reg_trace_io_input_reg_31_MPORT_addr = 5'h1f;
  assign Reg_reg_trace_io_input_reg_31_MPORT_data = Reg[Reg_reg_trace_io_input_reg_31_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_MPORT_data = io_wdata;
  assign Reg_MPORT_addr = io_waddr;
  assign Reg_MPORT_mask = 1'h1;
  assign Reg_MPORT_en = io_we & _T;
  assign io_rdata1 = io_raddr1 == 5'h0 ? 64'h0 : Reg_io_rdata1_MPORT_data; // @[register.scala 22:21]
  assign io_rdata2 = io_raddr2 == 5'h0 ? 64'h0 : Reg_io_rdata2_MPORT_data; // @[register.scala 23:21]
  assign reg_trace_input_reg_0 = Reg_reg_trace_io_input_reg_0_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_1 = Reg_reg_trace_io_input_reg_1_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_2 = Reg_reg_trace_io_input_reg_2_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_3 = Reg_reg_trace_io_input_reg_3_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_4 = Reg_reg_trace_io_input_reg_4_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_5 = Reg_reg_trace_io_input_reg_5_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_6 = Reg_reg_trace_io_input_reg_6_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_7 = Reg_reg_trace_io_input_reg_7_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_8 = Reg_reg_trace_io_input_reg_8_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_9 = Reg_reg_trace_io_input_reg_9_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_10 = Reg_reg_trace_io_input_reg_10_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_11 = Reg_reg_trace_io_input_reg_11_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_12 = Reg_reg_trace_io_input_reg_12_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_13 = Reg_reg_trace_io_input_reg_13_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_14 = Reg_reg_trace_io_input_reg_14_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_15 = Reg_reg_trace_io_input_reg_15_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_16 = Reg_reg_trace_io_input_reg_16_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_17 = Reg_reg_trace_io_input_reg_17_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_18 = Reg_reg_trace_io_input_reg_18_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_19 = Reg_reg_trace_io_input_reg_19_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_20 = Reg_reg_trace_io_input_reg_20_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_21 = Reg_reg_trace_io_input_reg_21_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_22 = Reg_reg_trace_io_input_reg_22_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_23 = Reg_reg_trace_io_input_reg_23_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_24 = Reg_reg_trace_io_input_reg_24_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_25 = Reg_reg_trace_io_input_reg_25_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_26 = Reg_reg_trace_io_input_reg_26_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_27 = Reg_reg_trace_io_input_reg_27_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_28 = Reg_reg_trace_io_input_reg_28_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_29 = Reg_reg_trace_io_input_reg_29_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_30 = Reg_reg_trace_io_input_reg_30_MPORT_data; // @[register.scala 26:57]
  assign reg_trace_input_reg_31 = Reg_reg_trace_io_input_reg_31_MPORT_data; // @[register.scala 26:57]
  always @(posedge clock) begin
    if (Reg_MPORT_en & Reg_MPORT_mask) begin
      Reg[Reg_MPORT_addr] <= Reg_MPORT_data; // @[register.scala 18:18]
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
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    Reg[initvar] = _RAND_0[63:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IFU(
  input         clock,
  input         reset,
  input         io_ds_allowin,
  input         io_br_taken,
  input  [63:0] io_br_target,
  input         io_br_taken_cancel,
  output [63:0] io_to_ds_pc,
  output        io_fs_to_ds_valid,
  output [31:0] io_inst
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] inst_read_Raddr; // @[IFU.scala 28:27]
  wire [63:0] inst_read_Rdata; // @[IFU.scala 28:27]
  wire [63:0] inst_read_Waddr; // @[IFU.scala 28:27]
  wire [63:0] inst_read_Wdata; // @[IFU.scala 28:27]
  wire [7:0] inst_read_Wmask; // @[IFU.scala 28:27]
  wire  inst_read_Write_en; // @[IFU.scala 28:27]
  wire  inst_read_Read_en; // @[IFU.scala 28:27]
  reg  fs_valid; // @[IFU.scala 18:27]
  reg [63:0] fs_pc; // @[IFU.scala 25:24]
  wire [63:0] seq_pc = fs_pc + 64'h4; // @[IFU.scala 30:24]
  wire  fs_allowin = ~fs_valid | io_ds_allowin; // @[IFU.scala 35:29]
  wire  _GEN_0 = io_br_taken_cancel ? 1'h0 : fs_valid; // @[IFU.scala 40:35 41:18 18:27]
  wire  _GEN_1 = fs_allowin | _GEN_0; // @[IFU.scala 37:36 38:18]
  MEM inst_read ( // @[IFU.scala 28:27]
    .Raddr(inst_read_Raddr),
    .Rdata(inst_read_Rdata),
    .Waddr(inst_read_Waddr),
    .Wdata(inst_read_Wdata),
    .Wmask(inst_read_Wmask),
    .Write_en(inst_read_Write_en),
    .Read_en(inst_read_Read_en)
  );
  assign io_to_ds_pc = fs_pc; // @[IFU.scala 48:17]
  assign io_fs_to_ds_valid = fs_valid; // @[IFU.scala 34:33]
  assign io_inst = inst_read_Rdata[31:0]; // @[IFU.scala 47:34]
  assign inst_read_Raddr = fs_pc; // @[IFU.scala 44:24]
  assign inst_read_Waddr = 64'h0;
  assign inst_read_Wdata = 64'h0;
  assign inst_read_Wmask = 8'h0;
  assign inst_read_Write_en = 1'h0;
  assign inst_read_Read_en = fs_valid; // @[IFU.scala 45:26]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 18:27]
      fs_valid <= 1'h0; // @[IFU.scala 18:27]
    end else begin
      fs_valid <= _GEN_1;
    end
    if (reset) begin // @[IFU.scala 25:24]
      fs_pc <= 64'h7ffffffc; // @[IFU.scala 25:24]
    end else if (fs_allowin) begin // @[IFU.scala 37:36]
      if (io_br_taken) begin // @[IFU.scala 31:19]
        fs_pc <= io_br_target;
      end else begin
        fs_pc <= seq_pc;
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"fs_pc:%x fa_valid:%d\n",fs_pc,fs_valid); // @[IFU.scala 50:11]
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
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  fs_valid = _RAND_0[0:0];
  _RAND_1 = {2{`RANDOM}};
  fs_pc = _RAND_1[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module csr_reg(
  input         clock,
  input         io_wen1,
  input         io_wen2,
  input  [1:0]  io_waddr1,
  input  [63:0] io_wdata1,
  input  [63:0] io_wdata2,
  input  [1:0]  io_raddr,
  output [63:0] io_rdata
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] CSR_Reg [0:3]; // @[csr_reg.scala 19:22]
  wire  CSR_Reg_io_rdata_MPORT_en; // @[csr_reg.scala 19:22]
  wire [1:0] CSR_Reg_io_rdata_MPORT_addr; // @[csr_reg.scala 19:22]
  wire [63:0] CSR_Reg_io_rdata_MPORT_data; // @[csr_reg.scala 19:22]
  wire [63:0] CSR_Reg_MPORT_data; // @[csr_reg.scala 19:22]
  wire [1:0] CSR_Reg_MPORT_addr; // @[csr_reg.scala 19:22]
  wire  CSR_Reg_MPORT_mask; // @[csr_reg.scala 19:22]
  wire  CSR_Reg_MPORT_en; // @[csr_reg.scala 19:22]
  wire [63:0] CSR_Reg_MPORT_1_data; // @[csr_reg.scala 19:22]
  wire [1:0] CSR_Reg_MPORT_1_addr; // @[csr_reg.scala 19:22]
  wire  CSR_Reg_MPORT_1_mask; // @[csr_reg.scala 19:22]
  wire  CSR_Reg_MPORT_1_en; // @[csr_reg.scala 19:22]
  assign CSR_Reg_io_rdata_MPORT_en = 1'h1;
  assign CSR_Reg_io_rdata_MPORT_addr = io_raddr;
  assign CSR_Reg_io_rdata_MPORT_data = CSR_Reg[CSR_Reg_io_rdata_MPORT_addr]; // @[csr_reg.scala 19:22]
  assign CSR_Reg_MPORT_data = io_wdata1;
  assign CSR_Reg_MPORT_addr = io_waddr1;
  assign CSR_Reg_MPORT_mask = 1'h1;
  assign CSR_Reg_MPORT_en = io_wen1;
  assign CSR_Reg_MPORT_1_data = io_wdata2;
  assign CSR_Reg_MPORT_1_addr = 2'h3;
  assign CSR_Reg_MPORT_1_mask = 1'h1;
  assign CSR_Reg_MPORT_1_en = io_wen2;
  assign io_rdata = CSR_Reg_io_rdata_MPORT_data; // @[csr_reg.scala 26:14]
  always @(posedge clock) begin
    if (CSR_Reg_MPORT_en & CSR_Reg_MPORT_mask) begin
      CSR_Reg[CSR_Reg_MPORT_addr] <= CSR_Reg_MPORT_data; // @[csr_reg.scala 19:22]
    end
    if (CSR_Reg_MPORT_1_en & CSR_Reg_MPORT_1_mask) begin
      CSR_Reg[CSR_Reg_MPORT_1_addr] <= CSR_Reg_MPORT_1_data; // @[csr_reg.scala 19:22]
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
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    CSR_Reg[initvar] = _RAND_0[63:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
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
  output        io_br_taken_cancel,
  output        io_ds_allowin,
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
`endif // RANDOMIZE_REG_INIT
  wire  csr_reg_clock; // @[IDU.scala 422:21]
  wire  csr_reg_io_wen1; // @[IDU.scala 422:21]
  wire  csr_reg_io_wen2; // @[IDU.scala 422:21]
  wire [1:0] csr_reg_io_waddr1; // @[IDU.scala 422:21]
  wire [63:0] csr_reg_io_wdata1; // @[IDU.scala 422:21]
  wire [63:0] csr_reg_io_wdata2; // @[IDU.scala 422:21]
  wire [1:0] csr_reg_io_raddr; // @[IDU.scala 422:21]
  wire [63:0] csr_reg_io_rdata; // @[IDU.scala 422:21]
  reg  ds_valid; // @[IDU.scala 80:27]
  reg [63:0] ds_pc; // @[IDU.scala 84:24]
  reg [31:0] inst; // @[IDU.scala 86:23]
  wire [31:0] _br_taken_T_20 = inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _br_taken_T_21 = 32'h6f == _br_taken_T_20; // @[Lookup.scala 31:38]
  wire [31:0] _br_taken_T_22 = inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _br_taken_T_23 = 32'h67 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _br_taken_T_25 = 32'h1063 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _br_taken_T_2 = $signed(io_rdata1) != $signed(io_rdata2); // @[IDU.scala 456:37]
  wire  _br_taken_T_27 = 32'h63 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _br_taken_T_6 = $signed(io_rdata1) == $signed(io_rdata2); // @[IDU.scala 457:37]
  wire  _br_taken_T_29 = 32'h5063 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _br_taken_T_10 = $signed(io_rdata1) >= $signed(io_rdata2); // @[IDU.scala 458:37]
  wire  _br_taken_T_31 = 32'h4063 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _br_taken_T_14 = $signed(io_rdata1) < $signed(io_rdata2); // @[IDU.scala 459:37]
  wire  _br_taken_T_33 = 32'h6063 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _br_taken_T_16 = io_rdata1 < io_rdata2; // @[IDU.scala 460:31]
  wire  _br_taken_T_35 = 32'h7063 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _br_taken_T_18 = io_rdata1 >= io_rdata2; // @[IDU.scala 461:31]
  wire  _br_taken_T_37 = 32'h73 == inst; // @[Lookup.scala 31:38]
  wire  _br_taken_T_39 = 32'h30200073 == inst; // @[Lookup.scala 31:38]
  wire  _br_taken_T_42 = _br_taken_T_35 ? _br_taken_T_18 : _br_taken_T_37 | _br_taken_T_39; // @[Lookup.scala 34:39]
  wire  _br_taken_T_43 = _br_taken_T_33 ? _br_taken_T_16 : _br_taken_T_42; // @[Lookup.scala 34:39]
  wire  _br_taken_T_44 = _br_taken_T_31 ? _br_taken_T_14 : _br_taken_T_43; // @[Lookup.scala 34:39]
  wire  _br_taken_T_45 = _br_taken_T_29 ? _br_taken_T_10 : _br_taken_T_44; // @[Lookup.scala 34:39]
  wire  _br_taken_T_46 = _br_taken_T_27 ? _br_taken_T_6 : _br_taken_T_45; // @[Lookup.scala 34:39]
  wire  _br_taken_T_47 = _br_taken_T_25 ? _br_taken_T_2 : _br_taken_T_46; // @[Lookup.scala 34:39]
  wire  br_taken = _br_taken_T_21 | (_br_taken_T_23 | _br_taken_T_47); // @[Lookup.scala 34:39]
  wire  _src1_is_pc_T_3 = 32'h17 == _br_taken_T_20; // @[Lookup.scala 31:38]
  wire  src1_is_pc = _br_taken_T_21 | (_src1_is_pc_T_3 | (_br_taken_T_25 | (_br_taken_T_27 | (_br_taken_T_29 | (
    _br_taken_T_31 | (_br_taken_T_33 | _br_taken_T_35)))))); // @[Lookup.scala 34:39]
  wire  _inst_type_T_1 = 32'h13 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_5 = 32'h37 == _br_taken_T_20; // @[Lookup.scala 31:38]
  wire  _inst_type_T_11 = 32'h3023 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_13 = 32'h3013 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_15 = 32'h2003 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_16 = inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_17 = 32'h3b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_19 = 32'h40000033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_25 = 32'h3003 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_27 = 32'h1b == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_29 = 32'h33 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_30 = inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_31 = 32'h40005013 == _inst_type_T_30; // @[Lookup.scala 31:38]
  wire  _inst_type_T_33 = 32'h4003 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_35 = 32'h1023 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_37 = 32'h23 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_39 = 32'h6033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_41 = 32'h4013 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_43 = 32'h7033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_45 = 32'h7013 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_47 = 32'h4000003b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_49 = 32'h103b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_51 = 32'h1013 == _inst_type_T_30; // @[Lookup.scala 31:38]
  wire  _inst_type_T_53 = 32'h5013 == _inst_type_T_30; // @[Lookup.scala 31:38]
  wire  _inst_type_T_55 = 32'h101b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_57 = 32'h4000501b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_59 = 32'h501b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_61 = 32'h4000503b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_63 = 32'h503b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_65 = 32'h3033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_67 = 32'h2033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_75 = 32'h2023 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_77 = 32'h1003 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_79 = 32'h5003 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_81 = 32'h2000033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_83 = 32'h200003b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_85 = 32'h200403b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_87 = 32'h200603b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_89 = 32'h4033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_91 = 32'h6013 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_93 = 32'h2005033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_95 = 32'h2004033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_97 = 32'h200503b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_99 = 32'h200703b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_101 = 32'h2007033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_103 = 32'h2006033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_105 = 32'h1033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_107 = 32'h5033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_109 = 32'h40005033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_111 = 32'h2013 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_113 = 32'h6003 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_115 = 32'h3 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_121 = 32'h1073 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_123 = 32'h2073 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire  _inst_type_T_125 = 32'h3073 == _br_taken_T_22; // @[Lookup.scala 31:38]
  wire [6:0] _inst_type_T_126 = _inst_type_T_125 ? 7'h40 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_127 = _inst_type_T_123 ? 7'h40 : _inst_type_T_126; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_128 = _inst_type_T_121 ? 7'h40 : _inst_type_T_127; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_129 = _br_taken_T_37 ? 7'h40 : _inst_type_T_128; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_130 = _br_taken_T_35 ? 7'h45 : _inst_type_T_129; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_131 = _inst_type_T_115 ? 7'h40 : _inst_type_T_130; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_132 = _inst_type_T_113 ? 7'h40 : _inst_type_T_131; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_133 = _inst_type_T_111 ? 7'h40 : _inst_type_T_132; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_134 = _inst_type_T_109 ? 7'h41 : _inst_type_T_133; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_135 = _inst_type_T_107 ? 7'h41 : _inst_type_T_134; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_136 = _inst_type_T_105 ? 7'h41 : _inst_type_T_135; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_137 = _inst_type_T_103 ? 7'h41 : _inst_type_T_136; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_138 = _inst_type_T_101 ? 7'h41 : _inst_type_T_137; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_139 = _inst_type_T_99 ? 7'h41 : _inst_type_T_138; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_140 = _inst_type_T_97 ? 7'h41 : _inst_type_T_139; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_141 = _inst_type_T_95 ? 7'h41 : _inst_type_T_140; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_142 = _inst_type_T_93 ? 7'h41 : _inst_type_T_141; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_143 = _inst_type_T_91 ? 7'h40 : _inst_type_T_142; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_144 = _inst_type_T_89 ? 7'h41 : _inst_type_T_143; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_145 = _inst_type_T_87 ? 7'h41 : _inst_type_T_144; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_146 = _inst_type_T_85 ? 7'h41 : _inst_type_T_145; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_147 = _inst_type_T_83 ? 7'h41 : _inst_type_T_146; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_148 = _inst_type_T_81 ? 7'h41 : _inst_type_T_147; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_149 = _inst_type_T_79 ? 7'h40 : _inst_type_T_148; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_150 = _inst_type_T_77 ? 7'h40 : _inst_type_T_149; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_151 = _inst_type_T_75 ? 7'h44 : _inst_type_T_150; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_152 = _br_taken_T_33 ? 7'h45 : _inst_type_T_151; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_153 = _br_taken_T_31 ? 7'h45 : _inst_type_T_152; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_154 = _br_taken_T_29 ? 7'h45 : _inst_type_T_153; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_155 = _inst_type_T_67 ? 7'h41 : _inst_type_T_154; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_156 = _inst_type_T_65 ? 7'h41 : _inst_type_T_155; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_157 = _inst_type_T_63 ? 7'h41 : _inst_type_T_156; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_158 = _inst_type_T_61 ? 7'h41 : _inst_type_T_157; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_159 = _inst_type_T_59 ? 7'h40 : _inst_type_T_158; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_160 = _inst_type_T_57 ? 7'h40 : _inst_type_T_159; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_161 = _inst_type_T_55 ? 7'h40 : _inst_type_T_160; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_162 = _inst_type_T_53 ? 7'h40 : _inst_type_T_161; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_163 = _inst_type_T_51 ? 7'h40 : _inst_type_T_162; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_164 = _inst_type_T_49 ? 7'h41 : _inst_type_T_163; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_165 = _inst_type_T_47 ? 7'h41 : _inst_type_T_164; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_166 = _inst_type_T_45 ? 7'h40 : _inst_type_T_165; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_167 = _inst_type_T_43 ? 7'h41 : _inst_type_T_166; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_168 = _inst_type_T_41 ? 7'h40 : _inst_type_T_167; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_169 = _inst_type_T_39 ? 7'h41 : _inst_type_T_168; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_170 = _inst_type_T_37 ? 7'h44 : _inst_type_T_169; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_171 = _inst_type_T_35 ? 7'h44 : _inst_type_T_170; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_172 = _inst_type_T_33 ? 7'h40 : _inst_type_T_171; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_173 = _inst_type_T_31 ? 7'h40 : _inst_type_T_172; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_174 = _inst_type_T_29 ? 7'h41 : _inst_type_T_173; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_175 = _inst_type_T_27 ? 7'h40 : _inst_type_T_174; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_176 = _inst_type_T_25 ? 7'h40 : _inst_type_T_175; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_177 = _br_taken_T_27 ? 7'h45 : _inst_type_T_176; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_178 = _br_taken_T_25 ? 7'h45 : _inst_type_T_177; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_179 = _inst_type_T_19 ? 7'h41 : _inst_type_T_178; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_180 = _inst_type_T_17 ? 7'h41 : _inst_type_T_179; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_181 = _inst_type_T_15 ? 7'h40 : _inst_type_T_180; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_182 = _inst_type_T_13 ? 7'h40 : _inst_type_T_181; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_183 = _inst_type_T_11 ? 7'h44 : _inst_type_T_182; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_184 = _br_taken_T_23 ? 7'h40 : _inst_type_T_183; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_185 = _br_taken_T_21 ? 7'h43 : _inst_type_T_184; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_186 = _inst_type_T_5 ? 7'h42 : _inst_type_T_185; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_187 = _src1_is_pc_T_3 ? 7'h42 : _inst_type_T_186; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_188 = _inst_type_T_1 ? 7'h40 : _inst_type_T_187; // @[Lookup.scala 34:39]
  wire [31:0] inst_type = {{25'd0}, _inst_type_T_188}; // @[IDU.scala 185:25 211:15]
  wire [4:0] rs1 = inst[19:15]; // @[IDU.scala 206:16]
  wire  _src2_is_imm_T_4 = 32'h44 == inst_type; // @[Mux.scala 81:61]
  wire  src2_is_imm = 32'h45 == inst_type | (32'h43 == inst_type | (32'h44 == inst_type | (32'h42 == inst_type | 32'h40
     == inst_type))); // @[Mux.scala 81:58]
  wire [4:0] rs2 = inst[24:20]; // @[IDU.scala 205:16]
  wire  _conflict_T_43 = (~src2_is_imm | inst_type == 32'h44 | inst_type == 32'h45) & (rs2 == io_es_rf_dst & rs2 != 5'h0
     & io_es_rf_we & io_es_valid | rs2 == io_ms_rf_dst & rs2 != 5'h0 & io_ms_rf_we & io_ms_valid | rs2 == io_ws_rf_dst
     & rs2 != 5'h0 & io_ws_rf_we & io_ws_valid); // @[IDU.scala 466:309]
  wire  conflict = (~src1_is_pc | inst_type == 32'h45) & (rs1 == io_es_rf_dst & rs1 != 5'h0 & io_es_rf_we & io_es_valid
     | rs1 == io_ms_rf_dst & rs1 != 5'h0 & io_ms_rf_we & io_ms_valid | rs1 == io_ws_rf_dst & rs1 != 5'h0 & io_ws_rf_we
     & io_ws_valid) | _conflict_T_43; // @[IDU.scala 466:247]
  wire  ds_ready_go = ~conflict; // @[IDU.scala 105:20]
  wire  br_taken_cancel = br_taken & ds_ready_go & ds_valid; // @[IDU.scala 94:48]
  wire  ds_allowin = ~ds_valid | ds_ready_go & io_es_allowin; // @[IDU.scala 107:29]
  wire [4:0] rd = inst[11:7]; // @[IDU.scala 207:15]
  wire  _csr_write_T_10 = _inst_type_T_121 | (_inst_type_T_123 | _inst_type_T_125); // @[Lookup.scala 34:39]
  wire [1:0] csr_write = _br_taken_T_37 ? 2'h3 : {{1'd0}, _csr_write_T_10}; // @[Lookup.scala 34:39]
  wire [11:0] imm_imm = inst[31:20]; // @[IDU.scala 51:23]
  wire [51:0] _imm_T_2 = imm_imm[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_3 = {_imm_T_2,imm_imm}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_1 = {inst[31],inst[19:12],inst[20],inst[30:21]}; // @[Cat.scala 31:58]
  wire [42:0] _imm_T_6 = imm_imm_1[19] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_7 = {_imm_T_6,inst[31],inst[19:12],inst[20],inst[30:21],1'h0}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_2 = inst[31:12]; // @[IDU.scala 55:23]
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
  wire  _ALUop_T_3 = 32'h100073 == inst; // @[Lookup.scala 31:38]
  wire [6:0] _ALUop_T_118 = _inst_type_T_125 ? 7'h47 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_119 = _inst_type_T_123 ? 7'h46 : _ALUop_T_118; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_120 = _inst_type_T_121 ? 7'h3f : _ALUop_T_119; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_121 = _br_taken_T_39 ? 7'h3e : _ALUop_T_120; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_122 = _br_taken_T_37 ? 7'h3d : _ALUop_T_121; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_123 = _inst_type_T_115 ? 7'hf : _ALUop_T_122; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_124 = _inst_type_T_113 ? 7'hf : _ALUop_T_123; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_125 = _inst_type_T_111 ? 7'h1f : _ALUop_T_124; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_126 = _inst_type_T_109 ? 7'h39 : _ALUop_T_125; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_127 = _inst_type_T_107 ? 7'h38 : _ALUop_T_126; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_128 = _inst_type_T_105 ? 7'h37 : _ALUop_T_127; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_129 = _inst_type_T_103 ? 7'h34 : _ALUop_T_128; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_130 = _inst_type_T_101 ? 7'h33 : _ALUop_T_129; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_131 = _inst_type_T_99 ? 7'h32 : _ALUop_T_130; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_132 = _inst_type_T_97 ? 7'h35 : _ALUop_T_131; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_133 = _inst_type_T_95 ? 7'h31 : _ALUop_T_132; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_134 = _inst_type_T_93 ? 7'h30 : _ALUop_T_133; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_135 = _inst_type_T_91 ? 7'hb : _ALUop_T_134; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_136 = _inst_type_T_89 ? 7'h2e : _ALUop_T_135; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_137 = _inst_type_T_87 ? 7'h14 : _ALUop_T_136; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_138 = _inst_type_T_85 ? 7'h13 : _ALUop_T_137; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_139 = _inst_type_T_83 ? 7'h12 : _ALUop_T_138; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_140 = _inst_type_T_81 ? 7'h11 : _ALUop_T_139; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_141 = _inst_type_T_79 ? 7'hf : _ALUop_T_140; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_142 = _inst_type_T_77 ? 7'hf : _ALUop_T_141; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_143 = _inst_type_T_75 ? 7'hf : _ALUop_T_142; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_144 = _inst_type_T_67 ? 7'h1f : _ALUop_T_143; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_145 = _inst_type_T_65 ? 7'h1e : _ALUop_T_144; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_146 = _inst_type_T_63 ? 7'h1d : _ALUop_T_145; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_147 = _inst_type_T_61 ? 7'h1c : _ALUop_T_146; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_148 = _inst_type_T_59 ? 7'h1d : _ALUop_T_147; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_149 = _inst_type_T_57 ? 7'h1c : _ALUop_T_148; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_150 = _inst_type_T_55 ? 7'h16 : _ALUop_T_149; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_151 = _inst_type_T_53 ? 7'h38 : _ALUop_T_150; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_152 = _inst_type_T_51 ? 7'h37 : _ALUop_T_151; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_153 = _inst_type_T_49 ? 7'h16 : _ALUop_T_152; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_154 = _inst_type_T_47 ? 7'hd : _ALUop_T_153; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_155 = _inst_type_T_45 ? 7'h8 : _ALUop_T_154; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_156 = _inst_type_T_43 ? 7'h8 : _ALUop_T_155; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_157 = _inst_type_T_41 ? 7'h2e : _ALUop_T_156; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_158 = _inst_type_T_39 ? 7'hb : _ALUop_T_157; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_159 = _inst_type_T_37 ? 7'hf : _ALUop_T_158; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_160 = _inst_type_T_35 ? 7'hf : _ALUop_T_159; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_161 = _inst_type_T_33 ? 7'hf : _ALUop_T_160; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_162 = _inst_type_T_31 ? 7'h15 : _ALUop_T_161; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_163 = _inst_type_T_29 ? 7'hf : _ALUop_T_162; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_164 = _inst_type_T_27 ? 7'hc : _ALUop_T_163; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_165 = _inst_type_T_25 ? 7'hf : _ALUop_T_164; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_166 = _inst_type_T_19 ? 7'he : _ALUop_T_165; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_167 = _inst_type_T_17 ? 7'hc : _ALUop_T_166; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_168 = _inst_type_T_15 ? 7'hf : _ALUop_T_167; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_169 = _inst_type_T_13 ? 7'h1e : _ALUop_T_168; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_170 = _inst_type_T_11 ? 7'hf : _ALUop_T_169; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_171 = _br_taken_T_23 ? 7'h6 : _ALUop_T_170; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_172 = _br_taken_T_21 ? 7'h5 : _ALUop_T_171; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_173 = _inst_type_T_5 ? 7'h4 : _ALUop_T_172; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_174 = _src1_is_pc_T_3 ? 7'hf : _ALUop_T_173; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_175 = _ALUop_T_3 ? 7'h2 : _ALUop_T_174; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_176 = _inst_type_T_1 ? 7'hf : _ALUop_T_175; // @[Lookup.scala 34:39]
  wire  _reg_write_T_26 = _br_taken_T_39 ? 1'h0 : 1'h1; // @[Lookup.scala 34:39]
  wire  _reg_write_T_27 = _br_taken_T_37 ? 1'h0 : _reg_write_T_26; // @[Lookup.scala 34:39]
  wire  _reg_write_T_28 = _br_taken_T_35 ? 1'h0 : _reg_write_T_27; // @[Lookup.scala 34:39]
  wire  _reg_write_T_29 = _br_taken_T_33 ? 1'h0 : _reg_write_T_28; // @[Lookup.scala 34:39]
  wire  _reg_write_T_30 = _br_taken_T_31 ? 1'h0 : _reg_write_T_29; // @[Lookup.scala 34:39]
  wire  _reg_write_T_31 = _br_taken_T_29 ? 1'h0 : _reg_write_T_30; // @[Lookup.scala 34:39]
  wire  _reg_write_T_32 = _br_taken_T_27 ? 1'h0 : _reg_write_T_31; // @[Lookup.scala 34:39]
  wire  _reg_write_T_33 = _br_taken_T_25 ? 1'h0 : _reg_write_T_32; // @[Lookup.scala 34:39]
  wire  _reg_write_T_34 = _inst_type_T_75 ? 1'h0 : _reg_write_T_33; // @[Lookup.scala 34:39]
  wire  _reg_write_T_35 = _inst_type_T_37 ? 1'h0 : _reg_write_T_34; // @[Lookup.scala 34:39]
  wire  _reg_write_T_36 = _inst_type_T_35 ? 1'h0 : _reg_write_T_35; // @[Lookup.scala 34:39]
  wire  _reg_write_T_37 = _inst_type_T_11 ? 1'h0 : _reg_write_T_36; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_14 = _inst_type_T_79 ? 3'h6 : 3'h0; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_15 = _inst_type_T_115 ? 3'h5 : _load_type_T_14; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_16 = _inst_type_T_77 ? 3'h4 : _load_type_T_15; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_17 = _inst_type_T_113 ? 3'h3 : _load_type_T_16; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_18 = _inst_type_T_33 ? 3'h2 : _load_type_T_17; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_19 = _inst_type_T_25 ? 3'h1 : _load_type_T_18; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_8 = _inst_type_T_75 ? 4'hf : 4'h0; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_9 = _inst_type_T_37 ? 4'h1 : _Wmask_T_8; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_10 = _inst_type_T_35 ? 4'h3 : _Wmask_T_9; // @[Lookup.scala 34:39]
  wire [7:0] Wmask = _inst_type_T_11 ? 8'hff : {{4'd0}, _Wmask_T_10}; // @[Lookup.scala 34:39]
  wire [1:0] _csr_index_T_6 = 12'h300 == imm[11:0] ? 2'h2 : {{1'd0}, 12'h341 == imm[11:0]}; // @[Mux.scala 81:58]
  wire [1:0] csr_index = 12'h342 == imm[11:0] ? 2'h3 : _csr_index_T_6; // @[Mux.scala 81:58]
  wire [63:0] _csr_wdata_T = io_rdata1 | csr_reg_io_rdata; // @[IDU.scala 431:29]
  wire [63:0] _csr_wdata_T_1 = ~csr_reg_io_rdata; // @[IDU.scala 432:32]
  wire [63:0] _csr_wdata_T_2 = io_rdata1 & _csr_wdata_T_1; // @[IDU.scala 432:29]
  wire [63:0] _csr_wdata_T_9 = _inst_type_T_125 ? _csr_wdata_T_2 : 64'h0; // @[Lookup.scala 34:39]
  wire [63:0] _csr_wdata_T_10 = _inst_type_T_123 ? _csr_wdata_T : _csr_wdata_T_9; // @[Lookup.scala 34:39]
  wire [63:0] csr_wdata = _inst_type_T_121 ? io_rdata1 : _csr_wdata_T_10; // @[Lookup.scala 34:39]
  wire  _T_4 = csr_write == 2'h3; // @[IDU.scala 437:32]
  wire  _T_5 = csr_write == 2'h1; // @[IDU.scala 437:56]
  wire [1:0] _T_6 = csr_write == 2'h1 ? csr_index : 2'h0; // @[IDU.scala 437:46]
  wire [63:0] _T_10 = _T_5 ? csr_wdata : 64'h0; // @[IDU.scala 438:48]
  wire [63:0] src1 = src1_is_pc ? ds_pc : io_rdata1; // @[IDU.scala 444:16]
  wire [63:0] src2 = src2_is_imm ? imm : io_rdata2; // @[IDU.scala 445:16]
  wire [63:0] _br_target_T_1 = src1 + src2; // @[IDU.scala 448:35]
  wire [63:0] _br_target_T_4 = _br_target_T_1 & 64'hfffffffffffffffe; // @[IDU.scala 449:31]
  wire [31:0] _io_store_data_T_11 = _inst_type_T_75 ? io_rdata2[31:0] : 32'h0; // @[Lookup.scala 34:39]
  wire [31:0] _io_store_data_T_12 = _inst_type_T_37 ? {{24'd0}, io_rdata2[7:0]} : _io_store_data_T_11; // @[Lookup.scala 34:39]
  wire [31:0] _io_store_data_T_13 = _inst_type_T_35 ? {{16'd0}, io_rdata2[15:0]} : _io_store_data_T_12; // @[Lookup.scala 34:39]
  wire  _T_15 = ~reset; // @[IDU.scala 495:11]
  csr_reg csr_reg ( // @[IDU.scala 422:21]
    .clock(csr_reg_clock),
    .io_wen1(csr_reg_io_wen1),
    .io_wen2(csr_reg_io_wen2),
    .io_waddr1(csr_reg_io_waddr1),
    .io_wdata1(csr_reg_io_wdata1),
    .io_wdata2(csr_reg_io_wdata2),
    .io_raddr(csr_reg_io_raddr),
    .io_rdata(csr_reg_io_rdata)
  );
  assign io_ds_to_es_valid = ds_valid & ds_ready_go; // @[IDU.scala 106:32]
  assign io_br_taken = br_taken & ds_valid; // @[IDU.scala 468:29]
  assign io_br_target = _br_taken_T_23 ? _br_target_T_4 : _br_target_T_1; // @[Lookup.scala 34:39]
  assign io_br_taken_cancel = br_taken_cancel & ds_valid; // @[IDU.scala 469:43]
  assign io_ds_allowin = ~ds_valid | ds_ready_go & io_es_allowin; // @[IDU.scala 107:29]
  assign io_raddr1 = inst[19:15]; // @[IDU.scala 206:16]
  assign io_raddr2 = csr_write[0] ? 5'h11 : rs2; // @[IDU.scala 209:21]
  assign io_to_es_pc = ds_pc; // @[IDU.scala 491:17]
  assign io_ALUop = {{25'd0}, _ALUop_T_176}; // @[IDU.scala 184:21 285:11]
  assign io_src1 = csr_write[0] ? csr_reg_io_rdata : src1; // @[IDU.scala 480:19]
  assign io_src2 = src2_is_imm ? imm : io_rdata2; // @[IDU.scala 445:16]
  assign io_rf_dst = inst[11:7]; // @[IDU.scala 207:15]
  assign io_store_data = _inst_type_T_11 ? io_rdata2 : {{32'd0}, _io_store_data_T_13}; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_reg_write = _ALUop_T_3 ? 1'h0 : _reg_write_T_37; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Writemem_en = 32'h44 == inst_type; // @[Mux.scala 81:61]
  assign io_ctrl_sign_Readmem_en = _inst_type_T_25 | (_inst_type_T_15 | (_inst_type_T_113 | (_inst_type_T_77 | (
    _inst_type_T_79 | (_inst_type_T_115 | _inst_type_T_33))))); // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Wmask = _inst_type_T_11 ? 8'hff : {{4'd0}, _Wmask_T_10}; // @[Lookup.scala 34:39]
  assign io_load_type = _inst_type_T_15 ? 3'h0 : _load_type_T_19; // @[Lookup.scala 34:39]
  assign io_ds_valid = ds_valid; // @[IDU.scala 493:17]
  assign csr_reg_clock = clock;
  assign csr_reg_io_wen1 = csr_write[0]; // @[IDU.scala 436:27]
  assign csr_reg_io_wen2 = csr_write[1]; // @[IDU.scala 439:27]
  assign csr_reg_io_waddr1 = csr_write == 2'h3 ? 2'h1 : _T_6; // @[IDU.scala 437:22]
  assign csr_reg_io_wdata1 = _T_4 ? ds_pc : _T_10; // @[IDU.scala 438:22]
  assign csr_reg_io_wdata2 = io_rdata2; // @[IDU.scala 441:16]
  assign csr_reg_io_raddr = 12'h342 == imm[11:0] ? 2'h3 : _csr_index_T_6; // @[Mux.scala 81:58]
  always @(posedge clock) begin
    if (reset) begin // @[IDU.scala 80:27]
      ds_valid <= 1'h0; // @[IDU.scala 80:27]
    end else if (br_taken_cancel & ds_allowin) begin // @[IDU.scala 96:40]
      ds_valid <= 1'h0; // @[IDU.scala 97:18]
    end else if (ds_allowin) begin // @[IDU.scala 98:27]
      ds_valid <= io_fs_to_ds_valid; // @[IDU.scala 99:18]
    end
    if (reset) begin // @[IDU.scala 84:24]
      ds_pc <= 64'h0; // @[IDU.scala 84:24]
    end else if (io_fs_to_ds_valid & ds_allowin) begin // @[IDU.scala 101:40]
      ds_pc <= io_pc; // @[IDU.scala 102:15]
    end
    if (reset) begin // @[IDU.scala 86:23]
      inst <= 32'h0; // @[IDU.scala 86:23]
    end else if (io_fs_to_ds_valid & ds_allowin) begin // @[IDU.scala 101:40]
      inst <= io_from_fs_inst; // @[IDU.scala 103:14]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"ds_pc:%x ds_valid:%d br_taken:%d src1:%x src2:%x  wen:%d wmask:%x\n",ds_pc,ds_valid,
            br_taken,io_src1,io_src2,_src2_is_imm_T_4,Wmask); // @[IDU.scala 495:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_15) begin
          $fwrite(32'h80000002,"conflict:%d es_rf_we:%d rs2:%d es_rf_dst:%d\n",conflict,io_es_rf_we,rs2,io_es_rf_dst); // @[IDU.scala 496:11]
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
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  ds_valid = _RAND_0[0:0];
  _RAND_1 = {2{`RANDOM}};
  ds_pc = _RAND_1[63:0];
  _RAND_2 = {1{`RANDOM}};
  inst = _RAND_2[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module partial_product(
  input  [2:0]  io_y,
  input  [63:0] io_x,
  output        io_c,
  output [63:0] io_p
);
  wire [64:0] _io_p_T = {io_x, 1'h0}; // @[Mul.scala 24:18]
  wire [64:0] _io_p_T_2 = ~_io_p_T; // @[Mul.scala 25:12]
  wire [63:0] _io_p_T_3 = ~io_x; // @[Mul.scala 26:12]
  wire [63:0] _io_p_T_6 = 3'h1 == io_y ? io_x : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_p_T_8 = 3'h2 == io_y ? io_x : _io_p_T_6; // @[Mux.scala 81:58]
  wire [64:0] _io_p_T_10 = 3'h3 == io_y ? _io_p_T : {{1'd0}, _io_p_T_8}; // @[Mux.scala 81:58]
  wire [64:0] _io_p_T_12 = 3'h4 == io_y ? _io_p_T_2 : _io_p_T_10; // @[Mux.scala 81:58]
  wire [64:0] _io_p_T_14 = 3'h5 == io_y ? {{1'd0}, _io_p_T_3} : _io_p_T_12; // @[Mux.scala 81:58]
  wire [64:0] _io_p_T_16 = 3'h6 == io_y ? {{1'd0}, _io_p_T_3} : _io_p_T_14; // @[Mux.scala 81:58]
  wire [64:0] _io_p_T_18 = 3'h7 == io_y ? 65'h0 : _io_p_T_16; // @[Mux.scala 81:58]
  assign io_c = 3'h6 == io_y | (3'h5 == io_y | 3'h4 == io_y); // @[Mux.scala 81:58]
  assign io_p = _io_p_T_18[63:0]; // @[Mul.scala 20:8]
endmodule
module Mul(
  input         clock,
  input         reset,
  input         io_mul_valid,
  input         io_mulw,
  input  [63:0] io_multiplicand,
  input  [63:0] io_multiplier,
  output        io_out_valid,
  output [31:0] io_result_hi,
  output [31:0] io_result_lo
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [127:0] _RAND_2;
  reg [95:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire [2:0] booth_partial_io_y; // @[Mul.scala 91:43]
  wire [63:0] booth_partial_io_x; // @[Mul.scala 91:43]
  wire  booth_partial_io_c; // @[Mul.scala 91:43]
  wire [63:0] booth_partial_io_p; // @[Mul.scala 91:43]
  wire  sign = io_multiplicand[63] ^ io_multiplier[63]; // @[Mul.scala 51:33]
  reg [63:0] res; // @[Mul.scala 53:22]
  reg [1:0] state; // @[Mul.scala 55:24]
  reg [127:0] src1; // @[Mul.scala 57:23]
  reg [64:0] src2; // @[Mul.scala 58:23]
  wire [31:0] _src1_32_T_2 = io_multiplicand[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _src1_32_T_4 = {_src1_32_T_2,io_multiplicand[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] src1_32 = io_mulw ? _src1_32_T_4 : io_multiplicand; // @[Mul.scala 65:19]
  wire [31:0] _src2_32_T_2 = io_multiplier[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _src2_32_T_4 = {_src2_32_T_2,io_multiplier[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] src2_32 = io_mulw ? _src2_32_T_4 : io_multiplier; // @[Mul.scala 66:19]
  wire [63:0] _real_cand_T_5 = src1_32[63] ? 64'hffffffffffffffff : 64'h0; // @[Bitwise.scala 74:12]
  wire [127:0] real_cand = {_real_cand_T_5,src1_32}; // @[Cat.scala 31:58]
  wire [64:0] _real_er_T = {src2_32,1'h0}; // @[Cat.scala 31:58]
  wire [127:0] _GEN_1 = io_mul_valid ? real_cand : src1; // @[Mul.scala 77:44 79:22 57:23]
  wire [63:0] real_er = _real_er_T[63:0]; // @[Mul.scala 61:23 69:13]
  wire [63:0] _res_T_1 = res + booth_partial_io_p; // @[Mul.scala 95:32]
  wire [63:0] _GEN_25 = {{63'd0}, booth_partial_io_c}; // @[Mul.scala 95:53]
  wire [63:0] _res_T_3 = _res_T_1 + _GEN_25; // @[Mul.scala 95:53]
  wire [129:0] _src1_T = {src1, 2'h0}; // @[Mul.scala 97:34]
  wire [63:0] _GEN_3 = src2 != 65'h0 ? _res_T_3 : res; // @[Mul.scala 53:22 94:33 95:25]
  wire [129:0] _GEN_5 = src2 != 65'h0 ? _src1_T : {{2'd0}, src1}; // @[Mul.scala 57:23 94:33 97:26]
  wire [63:0] _GEN_14 = 2'h1 == state ? _GEN_3 : res; // @[Mul.scala 71:18 53:22]
  wire [129:0] _GEN_16 = 2'h1 == state ? _GEN_5 : {{2'd0}, src1}; // @[Mul.scala 71:18 57:23]
  wire [129:0] _GEN_18 = 2'h0 == state ? {{2'd0}, _GEN_1} : _GEN_16; // @[Mul.scala 71:18]
  wire [63:0] _GEN_20 = 2'h0 == state ? res : _GEN_14; // @[Mul.scala 71:18 53:22]
  wire  _T_8 = state == 2'h2; // @[Mul.scala 132:21]
  wire [31:0] _io_result_hi_T_1 = {sign,res[62:32]}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_27 = state == 2'h2 ? _io_result_hi_T_1 : 32'h0; // @[Mul.scala 132:35 149:22]
  wire [31:0] _GEN_28 = state == 2'h2 ? res[31:0] : 32'h0; // @[Mul.scala 132:35 150:22]
  wire  _GEN_31 = state == 2'h1 ? 1'h0 : _T_8; // @[Mul.scala 127:33 129:22]
  wire [31:0] _GEN_32 = state == 2'h1 ? 32'h0 : _GEN_27; // @[Mul.scala 127:33 130:22]
  wire [31:0] _GEN_33 = state == 2'h1 ? 32'h0 : _GEN_28; // @[Mul.scala 127:33 131:22]
  wire [129:0] _GEN_30 = reset ? 130'h0 : _GEN_18; // @[Mul.scala 57:{23,23}]
  partial_product booth_partial ( // @[Mul.scala 91:43]
    .io_y(booth_partial_io_y),
    .io_x(booth_partial_io_x),
    .io_c(booth_partial_io_c),
    .io_p(booth_partial_io_p)
  );
  assign io_out_valid = state == 2'h0 ? 1'h0 : _GEN_31; // @[Mul.scala 122:23 124:22]
  assign io_result_hi = state == 2'h0 ? 32'h0 : _GEN_32; // @[Mul.scala 122:23 125:22]
  assign io_result_lo = state == 2'h0 ? 32'h0 : _GEN_33; // @[Mul.scala 122:23 126:22]
  assign booth_partial_io_y = src2[2:0]; // @[Mul.scala 92:43]
  assign booth_partial_io_x = src1[63:0]; // @[Mul.scala 93:36]
  always @(posedge clock) begin
    if (reset) begin // @[Mul.scala 53:22]
      res <= 64'h0; // @[Mul.scala 53:22]
    end else if (state == 2'h0) begin // @[Mul.scala 122:23]
      res <= _GEN_20;
    end else if (state == 2'h1) begin // @[Mul.scala 127:33]
      res <= _GEN_20;
    end else if (state == 2'h2) begin // @[Mul.scala 132:35]
      res <= 64'h0;
    end else begin
      res <= _GEN_20;
    end
    if (reset) begin // @[Mul.scala 55:24]
      state <= 2'h0; // @[Mul.scala 55:24]
    end else if (2'h0 == state) begin // @[Mul.scala 71:18]
      if (io_mul_valid) begin // @[Mul.scala 77:44]
        state <= 2'h1; // @[Mul.scala 78:23]
      end
    end else if (2'h1 == state) begin // @[Mul.scala 71:18]
      if (!(src2 != 65'h0)) begin // @[Mul.scala 94:33]
        state <= 2'h2; // @[Mul.scala 99:27]
      end
    end else if (2'h2 == state) begin // @[Mul.scala 71:18]
      state <= 2'h0;
    end
    src1 <= _GEN_30[127:0]; // @[Mul.scala 57:{23,23}]
    if (reset) begin // @[Mul.scala 58:23]
      src2 <= 65'h0; // @[Mul.scala 58:23]
    end else if (2'h0 == state) begin // @[Mul.scala 71:18]
      if (io_mul_valid) begin // @[Mul.scala 77:44]
        src2 <= {{1'd0}, real_er}; // @[Mul.scala 80:22]
      end
    end else if (2'h1 == state) begin // @[Mul.scala 71:18]
      if (src2 != 65'h0) begin // @[Mul.scala 94:33]
        src2 <= {{2'd0}, src2[64:2]}; // @[Mul.scala 96:26]
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"state:%d  src1_32:%x  src2_32:%x src1:%x  src2:%x\n",state,src1_32,src2_32,src1,src2); // @[Mul.scala 152:11]
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
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  res = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  state = _RAND_1[1:0];
  _RAND_2 = {4{`RANDOM}};
  src1 = _RAND_2[127:0];
  _RAND_3 = {3{`RANDOM}};
  src2 = _RAND_3[64:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Div(
  input         clock,
  input         reset,
  input  [63:0] io_dividend,
  input  [63:0] io_divisor,
  input         io_div_valid,
  input         io_divw,
  input         io_div_signed,
  output        io_out_valid,
  output [63:0] io_quotient,
  output [63:0] io_remainder
);
`ifdef RANDOMIZE_REG_INIT
  reg [127:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire  dend_neg = io_divw ? io_dividend[31] : io_dividend[63]; // @[Div.scala 25:20]
  wire  sor_neg = io_divw ? io_divisor[31] : io_divisor[63]; // @[Div.scala 26:19]
  wire  quotient_neg = dend_neg & ~sor_neg | ~dend_neg & sor_neg; // @[Div.scala 27:43]
  wire [31:0] _src1_32_s_T_2 = io_dividend[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _src1_32_s_T_4 = {_src1_32_s_T_2,io_dividend[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] src1_32_s = io_divw ? _src1_32_s_T_4 : io_dividend; // @[Div.scala 35:21]
  wire [31:0] _src2_32_s_T_2 = io_divisor[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _src2_32_s_T_4 = {_src2_32_s_T_2,io_divisor[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] src2_32_s = io_divw ? _src2_32_s_T_4 : io_divisor; // @[Div.scala 36:21]
  wire [63:0] src1_32 = io_divw ? {{32'd0}, io_dividend[31:0]} : io_dividend; // @[Div.scala 37:19]
  wire [63:0] src2_32 = io_divw ? {{32'd0}, io_divisor[31:0]} : io_divisor; // @[Div.scala 38:19]
  wire [63:0] _real_cand_T_2 = ~src1_32_s; // @[Div.scala 42:61]
  wire [63:0] _real_cand_T_4 = _real_cand_T_2 + 64'h1; // @[Div.scala 42:71]
  wire [63:0] _real_cand_T_5 = dend_neg ? _real_cand_T_4 : src1_32_s; // @[Div.scala 42:45]
  wire [63:0] real_cand = io_div_signed ? _real_cand_T_5 : src1_32; // @[Div.scala 42:21]
  wire [63:0] _real_er_T_2 = ~src2_32_s; // @[Div.scala 43:58]
  wire [63:0] _real_er_T_4 = _real_er_T_2 + 64'h1; // @[Div.scala 43:68]
  wire [63:0] _real_er_T_5 = sor_neg ? _real_er_T_4 : src2_32_s; // @[Div.scala 43:43]
  wire [63:0] real_er = io_div_signed ? _real_er_T_5 : src2_32; // @[Div.scala 43:19]
  wire [95:0] _src1_T_1 = {32'h0,real_cand}; // @[Cat.scala 31:58]
  wire [64:0] src2 = {1'h0,real_er}; // @[Cat.scala 31:58]
  reg [127:0] div_cand; // @[Div.scala 50:27]
  reg  div_start; // @[Div.scala 51:28]
  reg [63:0] quotient; // @[Div.scala 53:27]
  reg [31:0] step_num; // @[Div.scala 55:27]
  wire  _GEN_0 = io_div_valid | div_start; // @[Div.scala 62:27 63:23 51:28]
  wire [127:0] src1 = {{32'd0}, _src1_T_1}; // @[Div.scala 45:20 47:10]
  wire [127:0] _GEN_1 = io_div_valid ? src1 : div_cand; // @[Div.scala 62:27 64:22 50:27]
  wire [63:0] _GEN_2 = io_div_valid ? 64'h0 : quotient; // @[Div.scala 62:27 65:22 53:27]
  wire [31:0] _GEN_3 = io_div_valid ? 32'h40 : step_num; // @[Div.scala 62:27 67:22 55:27]
  wire [64:0] sub_res = div_cand[127:63] - src2; // @[Div.scala 75:41]
  wire [64:0] _quotient_T_2 = {quotient, 1'h0}; // @[Div.scala 77:57]
  wire [64:0] _quotient_T_4 = _quotient_T_2 | 65'h1; // @[Div.scala 77:81]
  wire [64:0] _quotient_T_5 = sub_res[64] ? _quotient_T_2 : _quotient_T_4; // @[Div.scala 77:28]
  wire [127:0] update_cand = {sub_res, 63'h0}; // @[Div.scala 78:36]
  wire [127:0] _new_cand_T_2 = div_cand & 128'h7fffffffffffffff; // @[Div.scala 79:68]
  wire [127:0] _new_cand_T_3 = _new_cand_T_2 | update_cand; // @[Div.scala 79:93]
  wire [127:0] new_cand = sub_res[64] ? div_cand : _new_cand_T_3; // @[Div.scala 79:28]
  wire [128:0] _div_cand_T = {new_cand, 1'h0}; // @[Div.scala 80:34]
  wire [31:0] _step_num_T_1 = step_num - 32'h1; // @[Div.scala 81:34]
  wire [63:0] _io_remainder_T_3 = ~div_cand[127:64]; // @[Div.scala 87:77]
  wire [63:0] _io_remainder_T_5 = _io_remainder_T_3 + 64'h1; // @[Div.scala 87:94]
  wire [63:0] _io_remainder_T_7 = dend_neg ? _io_remainder_T_5 : div_cand[127:64]; // @[Div.scala 87:56]
  wire [63:0] _io_remainder_T_9 = io_div_signed ? _io_remainder_T_7 : div_cand[127:64]; // @[Div.scala 87:32]
  wire [63:0] _io_quotient_T_2 = ~quotient; // @[Div.scala 89:75]
  wire [63:0] _io_quotient_T_4 = _io_quotient_T_2 + 64'h1; // @[Div.scala 89:84]
  wire [63:0] _io_quotient_T_5 = quotient_neg ? _io_quotient_T_4 : quotient; // @[Div.scala 89:55]
  wire [63:0] _io_quotient_T_6 = io_div_signed ? _io_quotient_T_5 : quotient; // @[Div.scala 89:31]
  wire [64:0] _GEN_8 = $signed(step_num) > 32'sh0 ? _quotient_T_5 : {{1'd0}, _GEN_2}; // @[Div.scala 71:36 77:22]
  wire [128:0] _GEN_9 = $signed(step_num) > 32'sh0 ? _div_cand_T : {{1'd0}, _GEN_1}; // @[Div.scala 71:36 80:22]
  wire [63:0] _GEN_11 = $signed(step_num) > 32'sh0 ? 64'h0 : _io_remainder_T_9; // @[Div.scala 71:36 82:26 87:26]
  wire  _GEN_12 = $signed(step_num) > 32'sh0 ? 1'h0 : 1'h1; // @[Div.scala 71:36 83:26 88:26]
  wire [63:0] _GEN_13 = $signed(step_num) > 32'sh0 ? 64'h0 : _io_quotient_T_6; // @[Div.scala 71:36 84:25 89:25]
  wire  _GEN_14 = $signed(step_num) > 32'sh0 & _GEN_0; // @[Div.scala 71:36 86:23]
  wire [64:0] _GEN_15 = div_start ? _GEN_8 : {{1'd0}, _GEN_2}; // @[Div.scala 70:20]
  wire [128:0] _GEN_16 = div_start ? _GEN_9 : {{1'd0}, _GEN_1}; // @[Div.scala 70:20]
  wire [128:0] _GEN_22 = reset ? 129'h0 : _GEN_16; // @[Div.scala 50:{27,27}]
  wire [64:0] _GEN_23 = reset ? 65'h0 : _GEN_15; // @[Div.scala 53:{27,27}]
  assign io_out_valid = div_start & _GEN_12; // @[Div.scala 70:20 93:22]
  assign io_quotient = div_start ? _GEN_13 : 64'h0; // @[Div.scala 70:20 94:21]
  assign io_remainder = div_start ? _GEN_11 : 64'h0; // @[Div.scala 70:20 92:22]
  always @(posedge clock) begin
    div_cand <= _GEN_22[127:0]; // @[Div.scala 50:{27,27}]
    if (reset) begin // @[Div.scala 51:28]
      div_start <= 1'h0; // @[Div.scala 51:28]
    end else if (div_start) begin // @[Div.scala 70:20]
      div_start <= _GEN_14;
    end else begin
      div_start <= _GEN_0;
    end
    quotient <= _GEN_23[63:0]; // @[Div.scala 53:{27,27}]
    if (reset) begin // @[Div.scala 55:27]
      step_num <= 32'h0; // @[Div.scala 55:27]
    end else if (div_start) begin // @[Div.scala 70:20]
      if ($signed(step_num) > 32'sh0) begin // @[Div.scala 71:36]
        step_num <= _step_num_T_1; // @[Div.scala 81:22]
      end else begin
        step_num <= _GEN_3;
      end
    end else begin
      step_num <= _GEN_3;
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
  div_cand = _RAND_0[127:0];
  _RAND_1 = {1{`RANDOM}};
  div_start = _RAND_1[0:0];
  _RAND_2 = {2{`RANDOM}};
  quotient = _RAND_2[63:0];
  _RAND_3 = {1{`RANDOM}};
  step_num = _RAND_3[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ALU(
  input         clock,
  input         reset,
  input  [63:0] io_src1_value,
  input  [63:0] io_src2_value,
  input  [31:0] io_ALUop,
  input         io_src_valid,
  output        io_alu_busy,
  output [63:0] io_alu_res
);
  wire  Mul_clock; // @[ALU.scala 60:28]
  wire  Mul_reset; // @[ALU.scala 60:28]
  wire  Mul_io_mul_valid; // @[ALU.scala 60:28]
  wire  Mul_io_mulw; // @[ALU.scala 60:28]
  wire [63:0] Mul_io_multiplicand; // @[ALU.scala 60:28]
  wire [63:0] Mul_io_multiplier; // @[ALU.scala 60:28]
  wire  Mul_io_out_valid; // @[ALU.scala 60:28]
  wire [31:0] Mul_io_result_hi; // @[ALU.scala 60:28]
  wire [31:0] Mul_io_result_lo; // @[ALU.scala 60:28]
  wire  Div_clock; // @[ALU.scala 61:28]
  wire  Div_reset; // @[ALU.scala 61:28]
  wire [63:0] Div_io_dividend; // @[ALU.scala 61:28]
  wire [63:0] Div_io_divisor; // @[ALU.scala 61:28]
  wire  Div_io_div_valid; // @[ALU.scala 61:28]
  wire  Div_io_divw; // @[ALU.scala 61:28]
  wire  Div_io_div_signed; // @[ALU.scala 61:28]
  wire  Div_io_out_valid; // @[ALU.scala 61:28]
  wire [63:0] Div_io_quotient; // @[ALU.scala 61:28]
  wire [63:0] Div_io_remainder; // @[ALU.scala 61:28]
  wire  mul_valid = 32'h12 == io_ALUop | 32'h11 == io_ALUop; // @[Mux.scala 81:58]
  wire  div_valid = 32'h32 == io_ALUop | (32'h14 == io_ALUop | (32'h33 == io_ALUop | (32'h34 == io_ALUop | (32'h35 ==
    io_ALUop | (32'h13 == io_ALUop | (32'h30 == io_ALUop | 32'h31 == io_ALUop)))))); // @[Mux.scala 81:58]
  wire  mul_w = io_ALUop == 32'h12; // @[ALU.scala 45:22]
  wire [63:0] add_res = io_src1_value + io_src2_value; // @[ALU.scala 77:30]
  wire [63:0] sub_res = io_src1_value - io_src2_value; // @[ALU.scala 78:30]
  wire [63:0] sra_res = $signed(io_src1_value) >>> io_src2_value[5:0]; // @[ALU.scala 79:60]
  wire [63:0] srl_res = io_src1_value >> io_src2_value[5:0]; // @[ALU.scala 80:30]
  wire [126:0] _GEN_0 = {{63'd0}, io_src1_value}; // @[ALU.scala 81:30]
  wire [126:0] sll_res = _GEN_0 << io_src2_value[5:0]; // @[ALU.scala 81:30]
  wire [31:0] _sraw_res_T_1 = io_src1_value[31:0]; // @[ALU.scala 82:43]
  wire [31:0] sraw_res = $signed(_sraw_res_T_1) >>> io_src2_value[4:0]; // @[ALU.scala 82:46]
  wire [31:0] srlw_res = io_src1_value[31:0] >> io_src2_value[4:0]; // @[ALU.scala 83:37]
  wire [62:0] _GEN_1 = {{31'd0}, io_src1_value[31:0]}; // @[ALU.scala 84:37]
  wire [62:0] sllw_res = _GEN_1 << io_src2_value[4:0]; // @[ALU.scala 84:37]
  wire [63:0] or_res = io_src1_value | io_src2_value; // @[ALU.scala 85:29]
  wire [63:0] xor_res = io_src1_value ^ io_src2_value; // @[ALU.scala 86:30]
  wire [63:0] and_res = io_src1_value & io_src2_value; // @[ALU.scala 87:30]
  wire [63:0] mlu_res = {Mul_io_result_hi,Mul_io_result_lo}; // @[Cat.scala 31:58]
  wire [31:0] divw_res = Div_io_quotient[31:0]; // @[ALU.scala 90:39]
  wire [31:0] remw_res = Div_io_remainder[31:0]; // @[ALU.scala 92:40]
  wire [63:0] _alu_res_T_1 = io_src1_value + 64'h4; // @[ALU.scala 115:29]
  wire  _alu_res_T_4 = io_src1_value < io_src2_value; // @[ALU.scala 118:33]
  wire  _alu_res_T_8 = $signed(io_src1_value) < $signed(io_src2_value); // @[ALU.scala 120:41]
  wire [31:0] _alu_res_T_12 = add_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_14 = {_alu_res_T_12,add_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_17 = sub_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_19 = {_alu_res_T_17,sub_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_22 = sllw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_24 = {_alu_res_T_22,sllw_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_27 = sraw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _alu_res_T_28 = $signed(_sraw_res_T_1) >>> io_src2_value[4:0]; // @[ALU.scala 139:55]
  wire [63:0] _alu_res_T_29 = {_alu_res_T_27,_alu_res_T_28}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_32 = srlw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_34 = {_alu_res_T_32,srlw_res}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_37 = Mul_io_result_lo[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_38 = {_alu_res_T_37,Mul_io_result_lo}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_41 = divw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_42 = {_alu_res_T_41,divw_res}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_49 = remw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_50 = {_alu_res_T_49,remw_res}; // @[Cat.scala 31:58]
  wire [63:0] _alu_res_T_56 = 32'hf == io_ALUop ? add_res : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_58 = 32'h4 == io_ALUop ? io_src2_value : _alu_res_T_56; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_60 = 32'h5 == io_ALUop ? _alu_res_T_1 : _alu_res_T_58; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_62 = 32'h6 == io_ALUop ? _alu_res_T_1 : _alu_res_T_60; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_64 = 32'h1e == io_ALUop ? {{63'd0}, _alu_res_T_4} : _alu_res_T_62; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_66 = 32'h1f == io_ALUop ? {{63'd0}, _alu_res_T_8} : _alu_res_T_64; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_68 = 32'hc == io_ALUop ? _alu_res_T_14 : _alu_res_T_66; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_70 = 32'he == io_ALUop ? sub_res : _alu_res_T_68; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_72 = 32'h15 == io_ALUop ? sra_res : _alu_res_T_70; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_74 = 32'hb == io_ALUop ? or_res : _alu_res_T_72; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_76 = 32'h2e == io_ALUop ? xor_res : _alu_res_T_74; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_78 = 32'h8 == io_ALUop ? and_res : _alu_res_T_76; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_80 = 32'hd == io_ALUop ? _alu_res_T_19 : _alu_res_T_78; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_82 = 32'h16 == io_ALUop ? _alu_res_T_24 : _alu_res_T_80; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_84 = 32'h1c == io_ALUop ? _alu_res_T_29 : _alu_res_T_82; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_86 = 32'h1d == io_ALUop ? _alu_res_T_34 : _alu_res_T_84; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_88 = 32'h11 == io_ALUop ? mlu_res : _alu_res_T_86; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_90 = 32'h12 == io_ALUop ? _alu_res_T_38 : _alu_res_T_88; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_92 = 32'h13 == io_ALUop ? _alu_res_T_42 : _alu_res_T_90; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_94 = 32'h30 == io_ALUop ? Div_io_quotient : _alu_res_T_92; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_96 = 32'h31 == io_ALUop ? Div_io_quotient : _alu_res_T_94; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_98 = 32'h35 == io_ALUop ? _alu_res_T_42 : _alu_res_T_96; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_100 = 32'h14 == io_ALUop ? _alu_res_T_50 : _alu_res_T_98; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_102 = 32'h32 == io_ALUop ? _alu_res_T_50 : _alu_res_T_100; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_104 = 32'h33 == io_ALUop ? Div_io_remainder : _alu_res_T_102; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_106 = 32'h34 == io_ALUop ? Div_io_remainder : _alu_res_T_104; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_108 = 32'h37 == io_ALUop ? sll_res : {{63'd0}, _alu_res_T_106}; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_110 = 32'h39 == io_ALUop ? {{63'd0}, sra_res} : _alu_res_T_108; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_112 = 32'h38 == io_ALUop ? {{63'd0}, srl_res} : _alu_res_T_110; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_114 = 32'h3f == io_ALUop ? {{63'd0}, io_src1_value} : _alu_res_T_112; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_116 = 32'h46 == io_ALUop ? {{63'd0}, io_src1_value} : _alu_res_T_114; // @[Mux.scala 81:58]
  wire [126:0] alu_res = 32'h47 == io_ALUop ? {{63'd0}, io_src1_value} : _alu_res_T_116; // @[Mux.scala 81:58]
  Mul Mul ( // @[ALU.scala 60:28]
    .clock(Mul_clock),
    .reset(Mul_reset),
    .io_mul_valid(Mul_io_mul_valid),
    .io_mulw(Mul_io_mulw),
    .io_multiplicand(Mul_io_multiplicand),
    .io_multiplier(Mul_io_multiplier),
    .io_out_valid(Mul_io_out_valid),
    .io_result_hi(Mul_io_result_hi),
    .io_result_lo(Mul_io_result_lo)
  );
  Div Div ( // @[ALU.scala 61:28]
    .clock(Div_clock),
    .reset(Div_reset),
    .io_dividend(Div_io_dividend),
    .io_divisor(Div_io_divisor),
    .io_div_valid(Div_io_div_valid),
    .io_divw(Div_io_divw),
    .io_div_signed(Div_io_div_signed),
    .io_out_valid(Div_io_out_valid),
    .io_quotient(Div_io_quotient),
    .io_remainder(Div_io_remainder)
  );
  assign io_alu_busy = mul_valid ? ~Mul_io_out_valid : div_valid & ~Div_io_out_valid; // @[ALU.scala 161:23]
  assign io_alu_res = alu_res[63:0]; // @[ALU.scala 162:16]
  assign Mul_clock = clock;
  assign Mul_reset = reset;
  assign Mul_io_mul_valid = mul_valid & io_src_valid; // @[ALU.scala 62:39]
  assign Mul_io_mulw = io_ALUop == 32'h12; // @[ALU.scala 45:22]
  assign Mul_io_multiplicand = io_src1_value; // @[ALU.scala 66:29]
  assign Mul_io_multiplier = io_src2_value; // @[ALU.scala 67:27]
  assign Div_clock = clock;
  assign Div_reset = reset;
  assign Div_io_dividend = io_src1_value; // @[ALU.scala 69:25]
  assign Div_io_divisor = io_src2_value; // @[ALU.scala 70:24]
  assign Div_io_div_valid = div_valid & io_src_valid; // @[ALU.scala 71:39]
  assign Div_io_divw = 32'h32 == io_ALUop | (32'h14 == io_ALUop | (32'h35 == io_ALUop | 32'h13 == io_ALUop)); // @[Mux.scala 81:58]
  assign Div_io_div_signed = 32'h14 == io_ALUop | (32'h34 == io_ALUop | (32'h13 == io_ALUop | 32'h31 == io_ALUop)); // @[Mux.scala 81:58]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"mul_valid:%d mul_w:%d mlu_res:%x\n",mul_valid,mul_w,mlu_res); // @[ALU.scala 158:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module EXU(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_ds_to_es_valid,
  output        io_es_allowin,
  input  [31:0] io_ALUop,
  input  [63:0] io_src1_value,
  input  [63:0] io_src2_value,
  input  [4:0]  io_rf_dst,
  input  [63:0] io_store_data,
  output        io_es_to_ms_valid,
  input  [2:0]  io_load_type,
  output [63:0] io_to_ms_pc,
  output [63:0] io_to_ms_alures,
  output [63:0] io_to_ms_store_data,
  output        io_to_ms_wen,
  output [7:0]  io_to_ms_wstrb,
  output        io_to_ms_ren,
  output [63:0] io_to_ms_maddr,
  output [4:0]  io_to_ms_rf_dst,
  output        io_to_ms_rf_we,
  output [2:0]  io_to_ms_load_type,
  input         io_ctrl_sign_reg_write,
  input         io_ctrl_sign_Writemem_en,
  input         io_ctrl_sign_Readmem_en,
  input  [7:0]  io_ctrl_sign_Wmask,
  output        io_es_valid,
  output        io_es_rf_we,
  output [4:0]  io_es_rf_dst
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
`endif // RANDOMIZE_REG_INIT
  wire  ALU_clock; // @[EXU.scala 37:21]
  wire  ALU_reset; // @[EXU.scala 37:21]
  wire [63:0] ALU_io_src1_value; // @[EXU.scala 37:21]
  wire [63:0] ALU_io_src2_value; // @[EXU.scala 37:21]
  wire [31:0] ALU_io_ALUop; // @[EXU.scala 37:21]
  wire  ALU_io_src_valid; // @[EXU.scala 37:21]
  wire  ALU_io_alu_busy; // @[EXU.scala 37:21]
  wire [63:0] ALU_io_alu_res; // @[EXU.scala 37:21]
  reg [63:0] es_pc; // @[EXU.scala 39:24]
  reg  es_valid; // @[EXU.scala 40:27]
  reg [4:0] es_rd; // @[EXU.scala 44:24]
  reg  es_rf_we; // @[EXU.scala 45:27]
  reg [63:0] src1_value; // @[EXU.scala 47:29]
  reg [63:0] src2_value; // @[EXU.scala 48:29]
  reg [63:0] store_data; // @[EXU.scala 49:29]
  reg [7:0] st_wstrb; // @[EXU.scala 50:27]
  reg  st_we; // @[EXU.scala 51:24]
  reg  ld_we; // @[EXU.scala 52:24]
  reg [31:0] ALUop; // @[EXU.scala 54:24]
  reg [2:0] load_type; // @[EXU.scala 55:28]
  wire  es_ready_go = ~ALU_io_alu_busy; // @[EXU.scala 75:20]
  wire  es_allowin = ~es_valid | es_ready_go; // @[EXU.scala 77:29]
  wire [63:0] alu_res = ALU_io_alu_res; // @[EXU.scala 53:23 95:13]
  ALU ALU ( // @[EXU.scala 37:21]
    .clock(ALU_clock),
    .reset(ALU_reset),
    .io_src1_value(ALU_io_src1_value),
    .io_src2_value(ALU_io_src2_value),
    .io_ALUop(ALU_io_ALUop),
    .io_src_valid(ALU_io_src_valid),
    .io_alu_busy(ALU_io_alu_busy),
    .io_alu_res(ALU_io_alu_res)
  );
  assign io_es_allowin = ~es_valid | es_ready_go; // @[EXU.scala 77:29]
  assign io_es_to_ms_valid = es_valid & es_ready_go; // @[EXU.scala 76:32]
  assign io_to_ms_pc = es_pc; // @[EXU.scala 108:17]
  assign io_to_ms_alures = ALU_io_alu_res; // @[EXU.scala 53:23 95:13]
  assign io_to_ms_store_data = store_data; // @[EXU.scala 111:25]
  assign io_to_ms_wen = st_we; // @[EXU.scala 112:18]
  assign io_to_ms_wstrb = st_wstrb; // @[EXU.scala 113:20]
  assign io_to_ms_ren = ld_we; // @[EXU.scala 114:18]
  assign io_to_ms_maddr = ALU_io_alu_res; // @[EXU.scala 53:23 95:13]
  assign io_to_ms_rf_dst = es_rd; // @[EXU.scala 116:21]
  assign io_to_ms_rf_we = es_rf_we; // @[EXU.scala 117:20]
  assign io_to_ms_load_type = load_type; // @[EXU.scala 121:24]
  assign io_es_valid = es_valid; // @[EXU.scala 118:17]
  assign io_es_rf_we = es_rf_we; // @[EXU.scala 120:17]
  assign io_es_rf_dst = es_rd; // @[EXU.scala 119:18]
  assign ALU_clock = clock;
  assign ALU_reset = reset;
  assign ALU_io_src1_value = ALUop == 32'h6 ? es_pc : src1_value; // @[EXU.scala 91:26]
  assign ALU_io_src2_value = src2_value; // @[EXU.scala 92:20]
  assign ALU_io_ALUop = ALUop; // @[EXU.scala 93:15]
  assign ALU_io_src_valid = es_valid; // @[EXU.scala 94:19]
  always @(posedge clock) begin
    if (reset) begin // @[EXU.scala 39:24]
      es_pc <= 64'h0; // @[EXU.scala 39:24]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 60:42]
      es_pc <= io_pc; // @[EXU.scala 61:15]
    end
    if (reset) begin // @[EXU.scala 40:27]
      es_valid <= 1'h0; // @[EXU.scala 40:27]
    end else if (es_allowin) begin // @[EXU.scala 57:21]
      es_valid <= io_ds_to_es_valid; // @[EXU.scala 58:18]
    end
    if (reset) begin // @[EXU.scala 44:24]
      es_rd <= 5'h0; // @[EXU.scala 44:24]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 60:42]
      es_rd <= io_rf_dst; // @[EXU.scala 66:15]
    end
    if (reset) begin // @[EXU.scala 45:27]
      es_rf_we <= 1'h0; // @[EXU.scala 45:27]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 60:42]
      es_rf_we <= io_ctrl_sign_reg_write; // @[EXU.scala 62:18]
    end
    if (reset) begin // @[EXU.scala 47:29]
      src1_value <= 64'h0; // @[EXU.scala 47:29]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 60:42]
      src1_value <= io_src1_value; // @[EXU.scala 64:20]
    end
    if (reset) begin // @[EXU.scala 48:29]
      src2_value <= 64'h0; // @[EXU.scala 48:29]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 60:42]
      src2_value <= io_src2_value; // @[EXU.scala 65:20]
    end
    if (reset) begin // @[EXU.scala 49:29]
      store_data <= 64'h0; // @[EXU.scala 49:29]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 60:42]
      store_data <= io_store_data; // @[EXU.scala 67:20]
    end
    if (reset) begin // @[EXU.scala 50:27]
      st_wstrb <= 8'h0; // @[EXU.scala 50:27]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 60:42]
      st_wstrb <= io_ctrl_sign_Wmask; // @[EXU.scala 68:18]
    end
    if (reset) begin // @[EXU.scala 51:24]
      st_we <= 1'h0; // @[EXU.scala 51:24]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 60:42]
      st_we <= io_ctrl_sign_Writemem_en; // @[EXU.scala 69:15]
    end
    if (reset) begin // @[EXU.scala 52:24]
      ld_we <= 1'h0; // @[EXU.scala 52:24]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 60:42]
      ld_we <= io_ctrl_sign_Readmem_en; // @[EXU.scala 70:15]
    end
    if (reset) begin // @[EXU.scala 54:24]
      ALUop <= 32'h0; // @[EXU.scala 54:24]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 60:42]
      ALUop <= io_ALUop; // @[EXU.scala 71:15]
    end
    if (reset) begin // @[EXU.scala 55:28]
      load_type <= 3'h0; // @[EXU.scala 55:28]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 60:42]
      load_type <= io_load_type; // @[EXU.scala 72:19]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"es_pc:%x es_valid:%d es_allowin:%d  alu_res:%x src1_value:%x  src2_value:%x\n\n",es_pc,
            es_valid,es_allowin,alu_res,src1_value,src2_value); // @[EXU.scala 122:11]
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
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  es_pc = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  es_valid = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  es_rd = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  es_rf_we = _RAND_3[0:0];
  _RAND_4 = {2{`RANDOM}};
  src1_value = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  src2_value = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  store_data = _RAND_6[63:0];
  _RAND_7 = {1{`RANDOM}};
  st_wstrb = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  st_we = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  ld_we = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  ALUop = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  load_type = _RAND_11[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module LSU(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_es_to_ms_valid,
  input         io_rf_we,
  input  [4:0]  io_rf_dst,
  input  [63:0] io_alu_res,
  input  [63:0] io_store_data,
  input  [2:0]  io_load_type,
  input         io_wen,
  input  [7:0]  io_wstrb,
  input         io_ren,
  input  [63:0] io_maddr,
  output [63:0] io_to_ws_pc,
  output [63:0] io_ms_final_res,
  output        io_ms_to_ws_valid,
  output        io_to_ws_rf_we,
  output [4:0]  io_to_ws_rf_dst,
  output        io_ms_valid,
  output        io_ms_rf_we,
  output [4:0]  io_ms_rf_dst
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [31:0] _RAND_10;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] Mem_modle_Raddr; // @[LSU.scala 71:27]
  wire [63:0] Mem_modle_Rdata; // @[LSU.scala 71:27]
  wire [63:0] Mem_modle_Waddr; // @[LSU.scala 71:27]
  wire [63:0] Mem_modle_Wdata; // @[LSU.scala 71:27]
  wire [7:0] Mem_modle_Wmask; // @[LSU.scala 71:27]
  wire  Mem_modle_Write_en; // @[LSU.scala 71:27]
  wire  Mem_modle_Read_en; // @[LSU.scala 71:27]
  reg  ms_valid; // @[LSU.scala 32:27]
  reg [63:0] ms_pc; // @[LSU.scala 33:24]
  reg  ms_rf_we; // @[LSU.scala 37:27]
  reg [4:0] ms_rf_dst; // @[LSU.scala 38:28]
  reg [63:0] ms_res; // @[LSU.scala 39:25]
  reg [63:0] store_data; // @[LSU.scala 41:29]
  reg  wen; // @[LSU.scala 42:22]
  reg [7:0] wstrb; // @[LSU.scala 43:24]
  reg  ren; // @[LSU.scala 44:22]
  reg [63:0] maddr; // @[LSU.scala 45:24]
  reg [2:0] load_type; // @[LSU.scala 46:28]
  wire [31:0] _rdata_T_2 = Mem_modle_Rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _rdata_T_4 = {_rdata_T_2,Mem_modle_Rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_7 = {56'h0,Mem_modle_Rdata[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_10 = {32'h0,Mem_modle_Rdata[31:0]}; // @[Cat.scala 31:58]
  wire [47:0] _rdata_T_13 = Mem_modle_Rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _rdata_T_15 = {_rdata_T_13,Mem_modle_Rdata[15:0]}; // @[Cat.scala 31:58]
  wire [55:0] _rdata_T_18 = Mem_modle_Rdata[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _rdata_T_20 = {_rdata_T_18,Mem_modle_Rdata[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_23 = {48'h0,Mem_modle_Rdata[15:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_25 = 3'h0 == load_type ? _rdata_T_4 : Mem_modle_Rdata; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_27 = 3'h1 == load_type ? Mem_modle_Rdata : _rdata_T_25; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_29 = 3'h2 == load_type ? _rdata_T_7 : _rdata_T_27; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_31 = 3'h3 == load_type ? _rdata_T_10 : _rdata_T_29; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_33 = 3'h4 == load_type ? _rdata_T_15 : _rdata_T_31; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_35 = 3'h5 == load_type ? _rdata_T_20 : _rdata_T_33; // @[Mux.scala 81:58]
  wire [63:0] rdata = 3'h6 == load_type ? _rdata_T_23 : _rdata_T_35; // @[Mux.scala 81:58]
  MEM Mem_modle ( // @[LSU.scala 71:27]
    .Raddr(Mem_modle_Raddr),
    .Rdata(Mem_modle_Rdata),
    .Waddr(Mem_modle_Waddr),
    .Wdata(Mem_modle_Wdata),
    .Wmask(Mem_modle_Wmask),
    .Write_en(Mem_modle_Write_en),
    .Read_en(Mem_modle_Read_en)
  );
  assign io_to_ws_pc = ms_pc; // @[LSU.scala 92:17]
  assign io_ms_final_res = ren ? rdata : ms_res; // @[LSU.scala 88:27]
  assign io_ms_to_ws_valid = ms_valid; // @[LSU.scala 68:32]
  assign io_to_ws_rf_we = ms_rf_we; // @[LSU.scala 91:20]
  assign io_to_ws_rf_dst = ms_rf_dst; // @[LSU.scala 90:21]
  assign io_ms_valid = ms_valid; // @[LSU.scala 94:17]
  assign io_ms_rf_we = ms_rf_we & ms_valid; // @[LSU.scala 96:28]
  assign io_ms_rf_dst = ms_rf_dst; // @[LSU.scala 95:18]
  assign Mem_modle_Raddr = maddr; // @[LSU.scala 72:24]
  assign Mem_modle_Waddr = maddr; // @[LSU.scala 73:24]
  assign Mem_modle_Wdata = store_data; // @[LSU.scala 74:24]
  assign Mem_modle_Wmask = wstrb; // @[LSU.scala 75:24]
  assign Mem_modle_Write_en = wen & ms_valid; // @[LSU.scala 76:34]
  assign Mem_modle_Read_en = ren; // @[LSU.scala 77:26]
  always @(posedge clock) begin
    if (reset) begin // @[LSU.scala 32:27]
      ms_valid <= 1'h0; // @[LSU.scala 32:27]
    end else begin
      ms_valid <= io_es_to_ms_valid;
    end
    if (reset) begin // @[LSU.scala 33:24]
      ms_pc <= 64'h0; // @[LSU.scala 33:24]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      ms_pc <= io_pc; // @[LSU.scala 53:15]
    end
    if (reset) begin // @[LSU.scala 37:27]
      ms_rf_we <= 1'h0; // @[LSU.scala 37:27]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      ms_rf_we <= io_rf_we; // @[LSU.scala 54:18]
    end
    if (reset) begin // @[LSU.scala 38:28]
      ms_rf_dst <= 5'h0; // @[LSU.scala 38:28]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      ms_rf_dst <= io_rf_dst; // @[LSU.scala 55:19]
    end
    if (reset) begin // @[LSU.scala 39:25]
      ms_res <= 64'h0; // @[LSU.scala 39:25]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      ms_res <= io_alu_res; // @[LSU.scala 56:16]
    end
    if (reset) begin // @[LSU.scala 41:29]
      store_data <= 64'h0; // @[LSU.scala 41:29]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      store_data <= io_store_data; // @[LSU.scala 58:20]
    end
    if (reset) begin // @[LSU.scala 42:22]
      wen <= 1'h0; // @[LSU.scala 42:22]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      wen <= io_wen; // @[LSU.scala 59:13]
    end
    if (reset) begin // @[LSU.scala 43:24]
      wstrb <= 8'h0; // @[LSU.scala 43:24]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      wstrb <= io_wstrb; // @[LSU.scala 60:15]
    end
    if (reset) begin // @[LSU.scala 44:22]
      ren <= 1'h0; // @[LSU.scala 44:22]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      ren <= io_ren; // @[LSU.scala 61:13]
    end
    if (reset) begin // @[LSU.scala 45:24]
      maddr <= 64'h0; // @[LSU.scala 45:24]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      maddr <= io_maddr; // @[LSU.scala 62:15]
    end
    if (reset) begin // @[LSU.scala 46:28]
      load_type <= 3'h0; // @[LSU.scala 46:28]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 52:40]
      load_type <= io_load_type; // @[LSU.scala 63:19]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"ms_pc:%x ms_valid:%d wstrb:%x wdata:%x\n",ms_pc,ms_valid,wstrb,store_data); // @[LSU.scala 98:11]
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
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  ms_valid = _RAND_0[0:0];
  _RAND_1 = {2{`RANDOM}};
  ms_pc = _RAND_1[63:0];
  _RAND_2 = {1{`RANDOM}};
  ms_rf_we = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  ms_rf_dst = _RAND_3[4:0];
  _RAND_4 = {2{`RANDOM}};
  ms_res = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  store_data = _RAND_5[63:0];
  _RAND_6 = {1{`RANDOM}};
  wen = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  wstrb = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  ren = _RAND_8[0:0];
  _RAND_9 = {2{`RANDOM}};
  maddr = _RAND_9[63:0];
  _RAND_10 = {1{`RANDOM}};
  load_type = _RAND_10[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module WBU(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_ms_to_ws_valid,
  input  [63:0] io_ms_final_res,
  input         io_rf_we,
  input  [4:0]  io_rf_dst,
  output        io_we,
  output [4:0]  io_waddr,
  output [63:0] io_wdata,
  output        io_ws_valid,
  output        io_ws_rf_we,
  output [4:0]  io_ws_rf_dst,
  output [63:0] io_ws_pc
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg  ws_valid; // @[WBU.scala 23:27]
  reg [63:0] ws_pc; // @[WBU.scala 24:24]
  reg  ws_rf_we; // @[WBU.scala 28:27]
  reg [4:0] ws_rf_dst; // @[WBU.scala 29:28]
  reg [63:0] ws_res; // @[WBU.scala 30:25]
  assign io_we = ws_rf_we & ws_valid; // @[WBU.scala 59:22]
  assign io_waddr = ws_rf_dst; // @[WBU.scala 60:14]
  assign io_wdata = ws_res; // @[WBU.scala 61:14]
  assign io_ws_valid = ws_valid; // @[WBU.scala 62:17]
  assign io_ws_rf_we = ws_rf_we; // @[WBU.scala 64:17]
  assign io_ws_rf_dst = ws_rf_dst; // @[WBU.scala 63:18]
  assign io_ws_pc = ws_pc; // @[WBU.scala 65:14]
  always @(posedge clock) begin
    if (reset) begin // @[WBU.scala 23:27]
      ws_valid <= 1'h0; // @[WBU.scala 23:27]
    end else begin
      ws_valid <= io_ms_to_ws_valid;
    end
    if (reset) begin // @[WBU.scala 24:24]
      ws_pc <= 64'h0; // @[WBU.scala 24:24]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 41:40]
      ws_pc <= io_pc; // @[WBU.scala 42:15]
    end
    if (reset) begin // @[WBU.scala 28:27]
      ws_rf_we <= 1'h0; // @[WBU.scala 28:27]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 41:40]
      ws_rf_we <= io_rf_we; // @[WBU.scala 43:18]
    end
    if (reset) begin // @[WBU.scala 29:28]
      ws_rf_dst <= 5'h0; // @[WBU.scala 29:28]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 41:40]
      ws_rf_dst <= io_rf_dst; // @[WBU.scala 44:19]
    end
    if (reset) begin // @[WBU.scala 30:25]
      ws_res <= 64'h0; // @[WBU.scala 30:25]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 41:40]
      ws_res <= io_ms_final_res; // @[WBU.scala 45:16]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"ws_pc:%x ws_valid:%d rf_dst:%d rf_we:%d wdata:%x\n",ws_pc,ws_valid,ws_rf_dst,io_we,
            ws_res); // @[WBU.scala 66:11]
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
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  ws_valid = _RAND_0[0:0];
  _RAND_1 = {2{`RANDOM}};
  ws_pc = _RAND_1[63:0];
  _RAND_2 = {1{`RANDOM}};
  ws_rf_we = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  ws_rf_dst = _RAND_3[4:0];
  _RAND_4 = {2{`RANDOM}};
  ws_res = _RAND_4[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module top(
  input         clock,
  input         reset,
  output [31:0] io_inst,
  output [63:0] io_pc,
  output        io_step
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  Register_clock; // @[top.scala 15:25]
  wire [4:0] Register_io_raddr1; // @[top.scala 15:25]
  wire [4:0] Register_io_raddr2; // @[top.scala 15:25]
  wire [63:0] Register_io_rdata1; // @[top.scala 15:25]
  wire [63:0] Register_io_rdata2; // @[top.scala 15:25]
  wire  Register_io_we; // @[top.scala 15:25]
  wire [4:0] Register_io_waddr; // @[top.scala 15:25]
  wire [63:0] Register_io_wdata; // @[top.scala 15:25]
  wire  IFU_clock; // @[top.scala 16:21]
  wire  IFU_reset; // @[top.scala 16:21]
  wire  IFU_io_ds_allowin; // @[top.scala 16:21]
  wire  IFU_io_br_taken; // @[top.scala 16:21]
  wire [63:0] IFU_io_br_target; // @[top.scala 16:21]
  wire  IFU_io_br_taken_cancel; // @[top.scala 16:21]
  wire [63:0] IFU_io_to_ds_pc; // @[top.scala 16:21]
  wire  IFU_io_fs_to_ds_valid; // @[top.scala 16:21]
  wire [31:0] IFU_io_inst; // @[top.scala 16:21]
  wire  IDU_clock; // @[top.scala 17:21]
  wire  IDU_reset; // @[top.scala 17:21]
  wire [63:0] IDU_io_pc; // @[top.scala 17:21]
  wire  IDU_io_fs_to_ds_valid; // @[top.scala 17:21]
  wire  IDU_io_ds_to_es_valid; // @[top.scala 17:21]
  wire  IDU_io_es_allowin; // @[top.scala 17:21]
  wire [31:0] IDU_io_from_fs_inst; // @[top.scala 17:21]
  wire  IDU_io_br_taken; // @[top.scala 17:21]
  wire [63:0] IDU_io_br_target; // @[top.scala 17:21]
  wire  IDU_io_br_taken_cancel; // @[top.scala 17:21]
  wire  IDU_io_ds_allowin; // @[top.scala 17:21]
  wire [4:0] IDU_io_raddr1; // @[top.scala 17:21]
  wire [4:0] IDU_io_raddr2; // @[top.scala 17:21]
  wire [63:0] IDU_io_rdata1; // @[top.scala 17:21]
  wire [63:0] IDU_io_rdata2; // @[top.scala 17:21]
  wire [63:0] IDU_io_to_es_pc; // @[top.scala 17:21]
  wire [31:0] IDU_io_ALUop; // @[top.scala 17:21]
  wire [63:0] IDU_io_src1; // @[top.scala 17:21]
  wire [63:0] IDU_io_src2; // @[top.scala 17:21]
  wire [4:0] IDU_io_rf_dst; // @[top.scala 17:21]
  wire [63:0] IDU_io_store_data; // @[top.scala 17:21]
  wire  IDU_io_ctrl_sign_reg_write; // @[top.scala 17:21]
  wire  IDU_io_ctrl_sign_Writemem_en; // @[top.scala 17:21]
  wire  IDU_io_ctrl_sign_Readmem_en; // @[top.scala 17:21]
  wire [7:0] IDU_io_ctrl_sign_Wmask; // @[top.scala 17:21]
  wire [2:0] IDU_io_load_type; // @[top.scala 17:21]
  wire  IDU_io_es_rf_we; // @[top.scala 17:21]
  wire  IDU_io_ms_rf_we; // @[top.scala 17:21]
  wire  IDU_io_ws_rf_we; // @[top.scala 17:21]
  wire  IDU_io_es_valid; // @[top.scala 17:21]
  wire  IDU_io_ms_valid; // @[top.scala 17:21]
  wire  IDU_io_ws_valid; // @[top.scala 17:21]
  wire [4:0] IDU_io_es_rf_dst; // @[top.scala 17:21]
  wire [4:0] IDU_io_ms_rf_dst; // @[top.scala 17:21]
  wire [4:0] IDU_io_ws_rf_dst; // @[top.scala 17:21]
  wire  IDU_io_ds_valid; // @[top.scala 17:21]
  wire  EXU_clock; // @[top.scala 18:21]
  wire  EXU_reset; // @[top.scala 18:21]
  wire [63:0] EXU_io_pc; // @[top.scala 18:21]
  wire  EXU_io_ds_to_es_valid; // @[top.scala 18:21]
  wire  EXU_io_es_allowin; // @[top.scala 18:21]
  wire [31:0] EXU_io_ALUop; // @[top.scala 18:21]
  wire [63:0] EXU_io_src1_value; // @[top.scala 18:21]
  wire [63:0] EXU_io_src2_value; // @[top.scala 18:21]
  wire [4:0] EXU_io_rf_dst; // @[top.scala 18:21]
  wire [63:0] EXU_io_store_data; // @[top.scala 18:21]
  wire  EXU_io_es_to_ms_valid; // @[top.scala 18:21]
  wire [2:0] EXU_io_load_type; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_pc; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_alures; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_store_data; // @[top.scala 18:21]
  wire  EXU_io_to_ms_wen; // @[top.scala 18:21]
  wire [7:0] EXU_io_to_ms_wstrb; // @[top.scala 18:21]
  wire  EXU_io_to_ms_ren; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_maddr; // @[top.scala 18:21]
  wire [4:0] EXU_io_to_ms_rf_dst; // @[top.scala 18:21]
  wire  EXU_io_to_ms_rf_we; // @[top.scala 18:21]
  wire [2:0] EXU_io_to_ms_load_type; // @[top.scala 18:21]
  wire  EXU_io_ctrl_sign_reg_write; // @[top.scala 18:21]
  wire  EXU_io_ctrl_sign_Writemem_en; // @[top.scala 18:21]
  wire  EXU_io_ctrl_sign_Readmem_en; // @[top.scala 18:21]
  wire [7:0] EXU_io_ctrl_sign_Wmask; // @[top.scala 18:21]
  wire  EXU_io_es_valid; // @[top.scala 18:21]
  wire  EXU_io_es_rf_we; // @[top.scala 18:21]
  wire [4:0] EXU_io_es_rf_dst; // @[top.scala 18:21]
  wire  LSU_clock; // @[top.scala 19:21]
  wire  LSU_reset; // @[top.scala 19:21]
  wire [63:0] LSU_io_pc; // @[top.scala 19:21]
  wire  LSU_io_es_to_ms_valid; // @[top.scala 19:21]
  wire  LSU_io_rf_we; // @[top.scala 19:21]
  wire [4:0] LSU_io_rf_dst; // @[top.scala 19:21]
  wire [63:0] LSU_io_alu_res; // @[top.scala 19:21]
  wire [63:0] LSU_io_store_data; // @[top.scala 19:21]
  wire [2:0] LSU_io_load_type; // @[top.scala 19:21]
  wire  LSU_io_wen; // @[top.scala 19:21]
  wire [7:0] LSU_io_wstrb; // @[top.scala 19:21]
  wire  LSU_io_ren; // @[top.scala 19:21]
  wire [63:0] LSU_io_maddr; // @[top.scala 19:21]
  wire [63:0] LSU_io_to_ws_pc; // @[top.scala 19:21]
  wire [63:0] LSU_io_ms_final_res; // @[top.scala 19:21]
  wire  LSU_io_ms_to_ws_valid; // @[top.scala 19:21]
  wire  LSU_io_to_ws_rf_we; // @[top.scala 19:21]
  wire [4:0] LSU_io_to_ws_rf_dst; // @[top.scala 19:21]
  wire  LSU_io_ms_valid; // @[top.scala 19:21]
  wire  LSU_io_ms_rf_we; // @[top.scala 19:21]
  wire [4:0] LSU_io_ms_rf_dst; // @[top.scala 19:21]
  wire  WBU_clock; // @[top.scala 20:21]
  wire  WBU_reset; // @[top.scala 20:21]
  wire [63:0] WBU_io_pc; // @[top.scala 20:21]
  wire  WBU_io_ms_to_ws_valid; // @[top.scala 20:21]
  wire [63:0] WBU_io_ms_final_res; // @[top.scala 20:21]
  wire  WBU_io_rf_we; // @[top.scala 20:21]
  wire [4:0] WBU_io_rf_dst; // @[top.scala 20:21]
  wire  WBU_io_we; // @[top.scala 20:21]
  wire [4:0] WBU_io_waddr; // @[top.scala 20:21]
  wire [63:0] WBU_io_wdata; // @[top.scala 20:21]
  wire  WBU_io_ws_valid; // @[top.scala 20:21]
  wire  WBU_io_ws_rf_we; // @[top.scala 20:21]
  wire [4:0] WBU_io_ws_rf_dst; // @[top.scala 20:21]
  wire [63:0] WBU_io_ws_pc; // @[top.scala 20:21]
  wire [31:0] dpi_flag; // @[top.scala 87:21]
  wire [31:0] dpi_ecall_flag; // @[top.scala 87:21]
  wire [63:0] dpi_pc; // @[top.scala 87:21]
  reg  diff_step; // @[top.scala 84:28]
  wire [63:0] _dpi_io_pc_T = IDU_io_ds_valid ? EXU_io_pc : IDU_io_pc; // @[top.scala 90:96]
  wire [63:0] _dpi_io_pc_T_1 = EXU_io_es_valid ? LSU_io_pc : _dpi_io_pc_T; // @[top.scala 90:72]
  wire [63:0] _dpi_io_pc_T_2 = LSU_io_ms_valid ? WBU_io_pc : _dpi_io_pc_T_1; // @[top.scala 90:48]
  Register Register ( // @[top.scala 15:25]
    .clock(Register_clock),
    .io_raddr1(Register_io_raddr1),
    .io_raddr2(Register_io_raddr2),
    .io_rdata1(Register_io_rdata1),
    .io_rdata2(Register_io_rdata2),
    .io_we(Register_io_we),
    .io_waddr(Register_io_waddr),
    .io_wdata(Register_io_wdata)
  );
  IFU IFU ( // @[top.scala 16:21]
    .clock(IFU_clock),
    .reset(IFU_reset),
    .io_ds_allowin(IFU_io_ds_allowin),
    .io_br_taken(IFU_io_br_taken),
    .io_br_target(IFU_io_br_target),
    .io_br_taken_cancel(IFU_io_br_taken_cancel),
    .io_to_ds_pc(IFU_io_to_ds_pc),
    .io_fs_to_ds_valid(IFU_io_fs_to_ds_valid),
    .io_inst(IFU_io_inst)
  );
  IDU IDU ( // @[top.scala 17:21]
    .clock(IDU_clock),
    .reset(IDU_reset),
    .io_pc(IDU_io_pc),
    .io_fs_to_ds_valid(IDU_io_fs_to_ds_valid),
    .io_ds_to_es_valid(IDU_io_ds_to_es_valid),
    .io_es_allowin(IDU_io_es_allowin),
    .io_from_fs_inst(IDU_io_from_fs_inst),
    .io_br_taken(IDU_io_br_taken),
    .io_br_target(IDU_io_br_target),
    .io_br_taken_cancel(IDU_io_br_taken_cancel),
    .io_ds_allowin(IDU_io_ds_allowin),
    .io_raddr1(IDU_io_raddr1),
    .io_raddr2(IDU_io_raddr2),
    .io_rdata1(IDU_io_rdata1),
    .io_rdata2(IDU_io_rdata2),
    .io_to_es_pc(IDU_io_to_es_pc),
    .io_ALUop(IDU_io_ALUop),
    .io_src1(IDU_io_src1),
    .io_src2(IDU_io_src2),
    .io_rf_dst(IDU_io_rf_dst),
    .io_store_data(IDU_io_store_data),
    .io_ctrl_sign_reg_write(IDU_io_ctrl_sign_reg_write),
    .io_ctrl_sign_Writemem_en(IDU_io_ctrl_sign_Writemem_en),
    .io_ctrl_sign_Readmem_en(IDU_io_ctrl_sign_Readmem_en),
    .io_ctrl_sign_Wmask(IDU_io_ctrl_sign_Wmask),
    .io_load_type(IDU_io_load_type),
    .io_es_rf_we(IDU_io_es_rf_we),
    .io_ms_rf_we(IDU_io_ms_rf_we),
    .io_ws_rf_we(IDU_io_ws_rf_we),
    .io_es_valid(IDU_io_es_valid),
    .io_ms_valid(IDU_io_ms_valid),
    .io_ws_valid(IDU_io_ws_valid),
    .io_es_rf_dst(IDU_io_es_rf_dst),
    .io_ms_rf_dst(IDU_io_ms_rf_dst),
    .io_ws_rf_dst(IDU_io_ws_rf_dst),
    .io_ds_valid(IDU_io_ds_valid)
  );
  EXU EXU ( // @[top.scala 18:21]
    .clock(EXU_clock),
    .reset(EXU_reset),
    .io_pc(EXU_io_pc),
    .io_ds_to_es_valid(EXU_io_ds_to_es_valid),
    .io_es_allowin(EXU_io_es_allowin),
    .io_ALUop(EXU_io_ALUop),
    .io_src1_value(EXU_io_src1_value),
    .io_src2_value(EXU_io_src2_value),
    .io_rf_dst(EXU_io_rf_dst),
    .io_store_data(EXU_io_store_data),
    .io_es_to_ms_valid(EXU_io_es_to_ms_valid),
    .io_load_type(EXU_io_load_type),
    .io_to_ms_pc(EXU_io_to_ms_pc),
    .io_to_ms_alures(EXU_io_to_ms_alures),
    .io_to_ms_store_data(EXU_io_to_ms_store_data),
    .io_to_ms_wen(EXU_io_to_ms_wen),
    .io_to_ms_wstrb(EXU_io_to_ms_wstrb),
    .io_to_ms_ren(EXU_io_to_ms_ren),
    .io_to_ms_maddr(EXU_io_to_ms_maddr),
    .io_to_ms_rf_dst(EXU_io_to_ms_rf_dst),
    .io_to_ms_rf_we(EXU_io_to_ms_rf_we),
    .io_to_ms_load_type(EXU_io_to_ms_load_type),
    .io_ctrl_sign_reg_write(EXU_io_ctrl_sign_reg_write),
    .io_ctrl_sign_Writemem_en(EXU_io_ctrl_sign_Writemem_en),
    .io_ctrl_sign_Readmem_en(EXU_io_ctrl_sign_Readmem_en),
    .io_ctrl_sign_Wmask(EXU_io_ctrl_sign_Wmask),
    .io_es_valid(EXU_io_es_valid),
    .io_es_rf_we(EXU_io_es_rf_we),
    .io_es_rf_dst(EXU_io_es_rf_dst)
  );
  LSU LSU ( // @[top.scala 19:21]
    .clock(LSU_clock),
    .reset(LSU_reset),
    .io_pc(LSU_io_pc),
    .io_es_to_ms_valid(LSU_io_es_to_ms_valid),
    .io_rf_we(LSU_io_rf_we),
    .io_rf_dst(LSU_io_rf_dst),
    .io_alu_res(LSU_io_alu_res),
    .io_store_data(LSU_io_store_data),
    .io_load_type(LSU_io_load_type),
    .io_wen(LSU_io_wen),
    .io_wstrb(LSU_io_wstrb),
    .io_ren(LSU_io_ren),
    .io_maddr(LSU_io_maddr),
    .io_to_ws_pc(LSU_io_to_ws_pc),
    .io_ms_final_res(LSU_io_ms_final_res),
    .io_ms_to_ws_valid(LSU_io_ms_to_ws_valid),
    .io_to_ws_rf_we(LSU_io_to_ws_rf_we),
    .io_to_ws_rf_dst(LSU_io_to_ws_rf_dst),
    .io_ms_valid(LSU_io_ms_valid),
    .io_ms_rf_we(LSU_io_ms_rf_we),
    .io_ms_rf_dst(LSU_io_ms_rf_dst)
  );
  WBU WBU ( // @[top.scala 20:21]
    .clock(WBU_clock),
    .reset(WBU_reset),
    .io_pc(WBU_io_pc),
    .io_ms_to_ws_valid(WBU_io_ms_to_ws_valid),
    .io_ms_final_res(WBU_io_ms_final_res),
    .io_rf_we(WBU_io_rf_we),
    .io_rf_dst(WBU_io_rf_dst),
    .io_we(WBU_io_we),
    .io_waddr(WBU_io_waddr),
    .io_wdata(WBU_io_wdata),
    .io_ws_valid(WBU_io_ws_valid),
    .io_ws_rf_we(WBU_io_ws_rf_we),
    .io_ws_rf_dst(WBU_io_ws_rf_dst),
    .io_ws_pc(WBU_io_ws_pc)
  );
  DPI dpi ( // @[top.scala 87:21]
    .flag(dpi_flag),
    .ecall_flag(dpi_ecall_flag),
    .pc(dpi_pc)
  );
  assign io_inst = IFU_io_inst; // @[top.scala 83:13]
  assign io_pc = IFU_io_to_ds_pc; // @[top.scala 81:11]
  assign io_step = diff_step; // @[top.scala 86:13]
  assign Register_clock = clock;
  assign Register_io_raddr1 = IDU_io_raddr1; // @[top.scala 34:20]
  assign Register_io_raddr2 = IDU_io_raddr2; // @[top.scala 35:20]
  assign Register_io_we = WBU_io_we; // @[top.scala 77:16]
  assign Register_io_waddr = WBU_io_waddr; // @[top.scala 78:19]
  assign Register_io_wdata = WBU_io_wdata; // @[top.scala 79:19]
  assign IFU_clock = clock;
  assign IFU_reset = reset;
  assign IFU_io_ds_allowin = IDU_io_ds_allowin; // @[top.scala 25:20]
  assign IFU_io_br_taken = IDU_io_br_taken; // @[top.scala 26:18]
  assign IFU_io_br_target = IDU_io_br_target; // @[top.scala 27:19]
  assign IFU_io_br_taken_cancel = IDU_io_br_taken_cancel; // @[top.scala 28:25]
  assign IDU_clock = clock;
  assign IDU_reset = reset;
  assign IDU_io_pc = IFU_io_to_ds_pc; // @[top.scala 30:12]
  assign IDU_io_fs_to_ds_valid = IFU_io_fs_to_ds_valid; // @[top.scala 31:24]
  assign IDU_io_es_allowin = EXU_io_es_allowin; // @[top.scala 32:20]
  assign IDU_io_from_fs_inst = IFU_io_inst; // @[top.scala 33:22]
  assign IDU_io_rdata1 = Register_io_rdata1; // @[top.scala 36:16]
  assign IDU_io_rdata2 = Register_io_rdata2; // @[top.scala 37:16]
  assign IDU_io_es_rf_we = EXU_io_es_rf_we; // @[top.scala 40:18]
  assign IDU_io_ms_rf_we = LSU_io_ms_rf_we; // @[top.scala 43:18]
  assign IDU_io_ws_rf_we = WBU_io_ws_rf_we; // @[top.scala 46:18]
  assign IDU_io_es_valid = EXU_io_es_valid; // @[top.scala 38:18]
  assign IDU_io_ms_valid = LSU_io_ms_valid; // @[top.scala 41:18]
  assign IDU_io_ws_valid = WBU_io_ws_valid; // @[top.scala 44:18]
  assign IDU_io_es_rf_dst = EXU_io_es_rf_dst; // @[top.scala 39:19]
  assign IDU_io_ms_rf_dst = LSU_io_ms_rf_dst; // @[top.scala 42:19]
  assign IDU_io_ws_rf_dst = WBU_io_ws_rf_dst; // @[top.scala 45:19]
  assign EXU_clock = clock;
  assign EXU_reset = reset;
  assign EXU_io_pc = IDU_io_to_es_pc; // @[top.scala 48:12]
  assign EXU_io_ds_to_es_valid = IDU_io_ds_to_es_valid; // @[top.scala 49:24]
  assign EXU_io_ALUop = IDU_io_ALUop; // @[top.scala 51:15]
  assign EXU_io_src1_value = IDU_io_src1; // @[top.scala 52:20]
  assign EXU_io_src2_value = IDU_io_src2; // @[top.scala 53:20]
  assign EXU_io_rf_dst = IDU_io_rf_dst; // @[top.scala 54:16]
  assign EXU_io_store_data = IDU_io_store_data; // @[top.scala 55:20]
  assign EXU_io_load_type = IDU_io_load_type; // @[top.scala 57:19]
  assign EXU_io_ctrl_sign_reg_write = IDU_io_ctrl_sign_reg_write; // @[top.scala 56:19]
  assign EXU_io_ctrl_sign_Writemem_en = IDU_io_ctrl_sign_Writemem_en; // @[top.scala 56:19]
  assign EXU_io_ctrl_sign_Readmem_en = IDU_io_ctrl_sign_Readmem_en; // @[top.scala 56:19]
  assign EXU_io_ctrl_sign_Wmask = IDU_io_ctrl_sign_Wmask; // @[top.scala 56:19]
  assign LSU_clock = clock;
  assign LSU_reset = reset;
  assign LSU_io_pc = EXU_io_to_ms_pc; // @[top.scala 59:12]
  assign LSU_io_es_to_ms_valid = EXU_io_es_to_ms_valid; // @[top.scala 60:24]
  assign LSU_io_rf_we = EXU_io_to_ms_rf_we; // @[top.scala 62:15]
  assign LSU_io_rf_dst = EXU_io_to_ms_rf_dst; // @[top.scala 63:16]
  assign LSU_io_alu_res = EXU_io_to_ms_alures; // @[top.scala 64:17]
  assign LSU_io_store_data = EXU_io_to_ms_store_data; // @[top.scala 65:20]
  assign LSU_io_load_type = EXU_io_to_ms_load_type; // @[top.scala 70:19]
  assign LSU_io_wen = EXU_io_to_ms_wen; // @[top.scala 66:13]
  assign LSU_io_wstrb = EXU_io_to_ms_wstrb; // @[top.scala 67:15]
  assign LSU_io_ren = EXU_io_to_ms_ren; // @[top.scala 68:13]
  assign LSU_io_maddr = EXU_io_to_ms_maddr; // @[top.scala 69:15]
  assign WBU_clock = clock;
  assign WBU_reset = reset;
  assign WBU_io_pc = LSU_io_to_ws_pc; // @[top.scala 72:12]
  assign WBU_io_ms_to_ws_valid = LSU_io_ms_to_ws_valid; // @[top.scala 73:24]
  assign WBU_io_ms_final_res = LSU_io_ms_final_res; // @[top.scala 74:22]
  assign WBU_io_rf_we = LSU_io_to_ws_rf_we; // @[top.scala 75:15]
  assign WBU_io_rf_dst = LSU_io_to_ws_rf_dst; // @[top.scala 76:16]
  assign dpi_flag = {{31'd0}, IDU_io_ALUop == 32'h2}; // @[top.scala 88:17]
  assign dpi_ecall_flag = {{31'd0}, IDU_io_ALUop == 32'h3d}; // @[top.scala 89:23]
  assign dpi_pc = WBU_io_ws_valid ? WBU_io_ws_pc : _dpi_io_pc_T_2; // @[top.scala 90:21]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 84:28]
      diff_step <= 1'h0; // @[top.scala 84:28]
    end else begin
      diff_step <= WBU_io_ws_valid; // @[top.scala 85:15]
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
  diff_step = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
