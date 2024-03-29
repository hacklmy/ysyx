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
  input         io_ds_ready_go,
  input         io_ds_valid,
  input         io_br_taken,
  input  [63:0] io_br_target,
  output [63:0] io_to_ds_pc,
  output        io_fs_to_ds_valid,
  output [31:0] io_inst,
  input         io_axi_in_arready,
  input  [63:0] io_axi_in_rdata,
  input         io_axi_in_rvalid,
  output [31:0] io_axi_out_araddr,
  output        io_axi_out_arvalid,
  output        io_axi_out_rready,
  input         io_fence,
  output        io_clear_cache,
  input         io_cache_init
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] br_target; // @[IFU.scala 31:28]
  reg  fs_valid; // @[IFU.scala 36:27]
  reg [63:0] fs_pc_next; // @[IFU.scala 42:29]
  reg  cache_init; // @[IFU.scala 43:29]
  wire  _T_1 = fs_valid & io_ds_allowin; // @[IFU.scala 46:31]
  wire  _GEN_1 = fs_valid & io_ds_allowin & cache_init ? 1'h0 : cache_init; // @[IFU.scala 46:60 47:20 43:29]
  wire  _GEN_2 = io_cache_init | _GEN_1; // @[IFU.scala 44:24 45:20]
  reg [63:0] fs_pc; // @[IFU.scala 50:24]
  reg [31:0] fs_inst; // @[IFU.scala 51:26]
  wire [63:0] seq_pc = fs_pc + 64'h4; // @[IFU.scala 74:24]
  wire [63:0] _pc_next_T = io_ds_valid ? io_br_target : br_target; // @[IFU.scala 75:35]
  wire [63:0] pc_next = io_br_taken ? _pc_next_T : seq_pc; // @[IFU.scala 75:19]
  wire  fs_allowin = ~fs_valid | _T_1; // @[IFU.scala 83:29]
  assign io_to_ds_pc = fs_pc; // @[IFU.scala 95:17]
  assign io_fs_to_ds_valid = fs_valid; // @[IFU.scala 82:33]
  assign io_inst = fs_inst; // @[IFU.scala 121:13]
  assign io_axi_out_araddr = pc_next[31:0]; // @[IFU.scala 105:23]
  assign io_axi_out_arvalid = io_ds_ready_go; // @[IFU.scala 106:24]
  assign io_axi_out_rready = ~fs_valid | _T_1; // @[IFU.scala 83:29]
  assign io_clear_cache = io_fence & ~cache_init; // @[IFU.scala 55:32]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 31:28]
      br_target <= 64'h0; // @[IFU.scala 31:28]
    end else if (io_ds_valid & io_ds_ready_go) begin // @[IFU.scala 32:40]
      br_target <= io_br_target; // @[IFU.scala 33:19]
    end
    if (reset) begin // @[IFU.scala 36:27]
      fs_valid <= 1'h0; // @[IFU.scala 36:27]
    end else if (fs_allowin) begin // @[IFU.scala 84:21]
      fs_valid <= io_axi_in_rvalid; // @[IFU.scala 85:18]
    end
    if (reset) begin // @[IFU.scala 42:29]
      fs_pc_next <= 64'h0; // @[IFU.scala 42:29]
    end else if (io_axi_in_arready & io_ds_ready_go) begin // @[IFU.scala 76:46]
      if (io_br_taken) begin // @[IFU.scala 75:19]
        if (io_ds_valid) begin // @[IFU.scala 75:35]
          fs_pc_next <= io_br_target;
        end else begin
          fs_pc_next <= br_target;
        end
      end else begin
        fs_pc_next <= seq_pc;
      end
    end
    if (reset) begin // @[IFU.scala 43:29]
      cache_init <= 1'h0; // @[IFU.scala 43:29]
    end else begin
      cache_init <= _GEN_2;
    end
    if (reset) begin // @[IFU.scala 50:24]
      fs_pc <= 64'h7ffffffc; // @[IFU.scala 50:24]
    end else if (io_axi_in_rvalid & fs_allowin) begin // @[IFU.scala 87:36]
      fs_pc <= fs_pc_next; // @[IFU.scala 88:15]
    end
    if (reset) begin // @[IFU.scala 51:26]
      fs_inst <= 32'h0; // @[IFU.scala 51:26]
    end else if (io_axi_in_rvalid & fs_allowin) begin // @[IFU.scala 87:36]
      fs_inst <= io_axi_in_rdata[31:0]; // @[IFU.scala 89:17]
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
  _RAND_0 = {2{`RANDOM}};
  br_target = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  fs_valid = _RAND_1[0:0];
  _RAND_2 = {2{`RANDOM}};
  fs_pc_next = _RAND_2[63:0];
  _RAND_3 = {1{`RANDOM}};
  cache_init = _RAND_3[0:0];
  _RAND_4 = {2{`RANDOM}};
  fs_pc = _RAND_4[63:0];
  _RAND_5 = {1{`RANDOM}};
  fs_inst = _RAND_5[31:0];
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
  wire [63:0] CSR_Reg_MPORT_2_data; // @[csr_reg.scala 19:22]
  wire [1:0] CSR_Reg_MPORT_2_addr; // @[csr_reg.scala 19:22]
  wire  CSR_Reg_MPORT_2_mask; // @[csr_reg.scala 19:22]
  wire  CSR_Reg_MPORT_2_en; // @[csr_reg.scala 19:22]
  assign CSR_Reg_io_rdata_MPORT_en = 1'h1;
  assign CSR_Reg_io_rdata_MPORT_addr = io_raddr;
  assign CSR_Reg_io_rdata_MPORT_data = CSR_Reg[CSR_Reg_io_rdata_MPORT_addr]; // @[csr_reg.scala 19:22]
  assign CSR_Reg_MPORT_data = 64'ha00001800;
  assign CSR_Reg_MPORT_addr = 2'h2;
  assign CSR_Reg_MPORT_mask = 1'h1;
  assign CSR_Reg_MPORT_en = 1'h1;
  assign CSR_Reg_MPORT_1_data = io_wdata1;
  assign CSR_Reg_MPORT_1_addr = io_waddr1;
  assign CSR_Reg_MPORT_1_mask = 1'h1;
  assign CSR_Reg_MPORT_1_en = io_wen1;
  assign CSR_Reg_MPORT_2_data = 64'hb;
  assign CSR_Reg_MPORT_2_addr = 2'h3;
  assign CSR_Reg_MPORT_2_mask = 1'h1;
  assign CSR_Reg_MPORT_2_en = io_wen2;
  assign io_rdata = CSR_Reg_io_rdata_MPORT_data; // @[csr_reg.scala 27:14]
  always @(posedge clock) begin
    if (CSR_Reg_MPORT_en & CSR_Reg_MPORT_mask) begin
      CSR_Reg[CSR_Reg_MPORT_addr] <= CSR_Reg_MPORT_data; // @[csr_reg.scala 19:22]
    end
    if (CSR_Reg_MPORT_1_en & CSR_Reg_MPORT_1_mask) begin
      CSR_Reg[CSR_Reg_MPORT_1_addr] <= CSR_Reg_MPORT_1_data; // @[csr_reg.scala 19:22]
    end
    if (CSR_Reg_MPORT_2_en & CSR_Reg_MPORT_2_mask) begin
      CSR_Reg[CSR_Reg_MPORT_2_addr] <= CSR_Reg_MPORT_2_data; // @[csr_reg.scala 19:22]
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
  wire  csr_reg_clock; // @[IDU.scala 449:21]
  wire  csr_reg_io_wen1; // @[IDU.scala 449:21]
  wire  csr_reg_io_wen2; // @[IDU.scala 449:21]
  wire [1:0] csr_reg_io_waddr1; // @[IDU.scala 449:21]
  wire [63:0] csr_reg_io_wdata1; // @[IDU.scala 449:21]
  wire [1:0] csr_reg_io_raddr; // @[IDU.scala 449:21]
  wire [63:0] csr_reg_io_rdata; // @[IDU.scala 449:21]
  reg  ds_valid; // @[IDU.scala 112:27]
  reg [63:0] ds_pc; // @[IDU.scala 116:24]
  reg [31:0] inst; // @[IDU.scala 118:23]
  reg  br_taken_cancel; // @[IDU.scala 122:34]
  wire [31:0] _src1_is_pc_T = inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _src1_is_pc_T_1 = 32'h6f == _src1_is_pc_T; // @[Lookup.scala 31:38]
  wire  _src1_is_pc_T_3 = 32'h17 == _src1_is_pc_T; // @[Lookup.scala 31:38]
  wire [31:0] _src1_is_pc_T_4 = inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _src1_is_pc_T_5 = 32'h1063 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _src1_is_pc_T_7 = 32'h63 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _src1_is_pc_T_9 = 32'h5063 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _src1_is_pc_T_11 = 32'h4063 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _src1_is_pc_T_13 = 32'h6063 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _src1_is_pc_T_15 = 32'h7063 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  src1_is_pc = _src1_is_pc_T_1 | (_src1_is_pc_T_3 | (_src1_is_pc_T_5 | (_src1_is_pc_T_7 | (_src1_is_pc_T_9 | (
    _src1_is_pc_T_11 | (_src1_is_pc_T_13 | _src1_is_pc_T_15)))))); // @[Lookup.scala 34:39]
  wire  _inst_type_T_1 = 32'h13 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_5 = 32'h37 == _src1_is_pc_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_9 = 32'h67 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_11 = 32'h3023 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_13 = 32'h3013 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_15 = 32'h2003 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_16 = inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_17 = 32'h3b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_19 = 32'h40000033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_25 = 32'h3003 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_27 = 32'h1b == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_29 = 32'h33 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_30 = inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_31 = 32'h40005013 == _inst_type_T_30; // @[Lookup.scala 31:38]
  wire  _inst_type_T_33 = 32'h4003 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_35 = 32'h1023 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_37 = 32'h23 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_39 = 32'h6033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_41 = 32'h4013 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_43 = 32'h7033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_45 = 32'h7013 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
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
  wire  _inst_type_T_75 = 32'h2023 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_77 = 32'h1003 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_79 = 32'h5003 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_81 = 32'h2000033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_83 = 32'h200003b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_85 = 32'h200403b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_87 = 32'h200603b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_89 = 32'h4033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_91 = 32'h6013 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_93 = 32'h2005033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_95 = 32'h2004033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_97 = 32'h200503b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_99 = 32'h200703b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_101 = 32'h2007033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_103 = 32'h2006033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_105 = 32'h1033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_107 = 32'h5033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_109 = 32'h40005033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_111 = 32'h2013 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_113 = 32'h6003 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_115 = 32'h3 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_119 = 32'h73 == inst; // @[Lookup.scala 31:38]
  wire  _inst_type_T_121 = 32'h1073 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_123 = 32'h2073 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire  _inst_type_T_125 = 32'h3073 == _src1_is_pc_T_4; // @[Lookup.scala 31:38]
  wire [6:0] _inst_type_T_126 = _inst_type_T_125 ? 7'h40 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_127 = _inst_type_T_123 ? 7'h40 : _inst_type_T_126; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_128 = _inst_type_T_121 ? 7'h40 : _inst_type_T_127; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_129 = _inst_type_T_119 ? 7'h40 : _inst_type_T_128; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_130 = _src1_is_pc_T_15 ? 7'h45 : _inst_type_T_129; // @[Lookup.scala 34:39]
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
  wire [6:0] _inst_type_T_152 = _src1_is_pc_T_13 ? 7'h45 : _inst_type_T_151; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_153 = _src1_is_pc_T_11 ? 7'h45 : _inst_type_T_152; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_154 = _src1_is_pc_T_9 ? 7'h45 : _inst_type_T_153; // @[Lookup.scala 34:39]
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
  wire [6:0] _inst_type_T_177 = _src1_is_pc_T_7 ? 7'h45 : _inst_type_T_176; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_178 = _src1_is_pc_T_5 ? 7'h45 : _inst_type_T_177; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_179 = _inst_type_T_19 ? 7'h41 : _inst_type_T_178; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_180 = _inst_type_T_17 ? 7'h41 : _inst_type_T_179; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_181 = _inst_type_T_15 ? 7'h40 : _inst_type_T_180; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_182 = _inst_type_T_13 ? 7'h40 : _inst_type_T_181; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_183 = _inst_type_T_11 ? 7'h44 : _inst_type_T_182; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_184 = _inst_type_T_9 ? 7'h40 : _inst_type_T_183; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_185 = _src1_is_pc_T_1 ? 7'h43 : _inst_type_T_184; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_186 = _inst_type_T_5 ? 7'h42 : _inst_type_T_185; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_187 = _src1_is_pc_T_3 ? 7'h42 : _inst_type_T_186; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_188 = _inst_type_T_1 ? 7'h40 : _inst_type_T_187; // @[Lookup.scala 34:39]
  wire [31:0] inst_type = {{25'd0}, _inst_type_T_188}; // @[IDU.scala 237:15 66:25]
  wire  _conflict_es_rs1_T_1 = inst_type == 32'h45; // @[IDU.scala 492:47]
  wire  _csr_write_T_10 = _inst_type_T_121 | (_inst_type_T_123 | _inst_type_T_125); // @[Lookup.scala 34:39]
  wire [1:0] csr_write = _inst_type_T_119 ? 2'h3 : {{1'd0}, _csr_write_T_10}; // @[Lookup.scala 34:39]
  wire  _conflict_es_rs1_T_3 = csr_write == 2'h1; // @[IDU.scala 492:72]
  wire  _conflict_es_rs1_T_4 = ~src1_is_pc | inst_type == 32'h45 | csr_write == 2'h1; // @[IDU.scala 492:59]
  wire [4:0] rs1 = inst[19:15]; // @[IDU.scala 227:16]
  wire  _conflict_es_rs1_T_6 = rs1 != 5'h0; // @[IDU.scala 492:111]
  wire  conflict_es_rs1 = (~src1_is_pc | inst_type == 32'h45 | csr_write == 2'h1) & (rs1 == io_es_rf_dst & rs1 != 5'h0
     & io_es_rf_we & io_es_valid); // @[IDU.scala 492:81]
  wire  conflict_ms_rs1 = _conflict_es_rs1_T_4 & (rs1 == io_ms_rf_dst & _conflict_es_rs1_T_6 & io_ms_rf_we & io_ms_valid
    ); // @[IDU.scala 493:81]
  wire  conflict_ws_rs1 = _conflict_es_rs1_T_4 & (rs1 == io_ws_rf_dst & _conflict_es_rs1_T_6 & io_ws_rf_we & io_ws_valid
    ); // @[IDU.scala 494:81]
  wire  src2_is_imm = 32'h45 == inst_type | (32'h43 == inst_type | (32'h44 == inst_type | (32'h42 == inst_type | 32'h40
     == inst_type))); // @[Mux.scala 81:58]
  wire  _conflict_es_rs2_T_5 = csr_write == 2'h3; // @[IDU.scala 495:92]
  wire  _conflict_es_rs2_T_6 = ~src2_is_imm | inst_type == 32'h44 | _conflict_es_rs1_T_1 | csr_write == 2'h3; // @[IDU.scala 495:81]
  wire [4:0] rs2 = csr_write[0] ? 5'h11 : inst[24:20]; // @[IDU.scala 226:15]
  wire  _conflict_es_rs2_T_8 = rs2 != 5'h0; // @[IDU.scala 495:130]
  wire  conflict_es_rs2 = (~src2_is_imm | inst_type == 32'h44 | _conflict_es_rs1_T_1 | csr_write == 2'h3) & (rs2 ==
    io_es_rf_dst & rs2 != 5'h0 & io_es_rf_we & io_es_valid); // @[IDU.scala 495:100]
  wire  conflict_ms_rs2 = _conflict_es_rs2_T_6 & (rs2 == io_ms_rf_dst & _conflict_es_rs2_T_8 & io_ms_rf_we & io_ms_valid
    ); // @[IDU.scala 496:100]
  wire  conflict_ws_rs2 = _conflict_es_rs2_T_6 & (rs2 == io_ws_rf_dst & _conflict_es_rs2_T_8 & io_ws_rf_we & io_ws_valid
    ); // @[IDU.scala 497:100]
  wire  _ds_ready_go_T_33 = conflict_es_rs2 & (io_es_fwd_ready & ~io_es_ld) | ~conflict_es_rs2 & conflict_ms_rs2 &
    io_ms_fwd_ready | ~conflict_es_rs2 & ~conflict_ms_rs2 & conflict_ws_rs2 | ~(conflict_es_rs2 | conflict_ms_rs2 |
    conflict_ws_rs2); // @[IDU.scala 150:459]
  wire  ds_ready_go = (conflict_es_rs1 & (io_es_fwd_ready & ~io_es_ld) | ~conflict_es_rs1 & conflict_ms_rs1 &
    io_ms_fwd_ready | ~conflict_es_rs1 & ~conflict_ms_rs1 & conflict_ws_rs1 | ~(conflict_es_rs1 | conflict_ms_rs1 |
    conflict_ws_rs1)) & _ds_ready_go_T_33; // @[IDU.scala 150:265]
  wire  ds_allowin = ~ds_valid | ds_ready_go & io_es_allowin; // @[IDU.scala 152:29]
  wire  _T = ds_allowin & io_fs_to_ds_valid; // @[IDU.scala 133:21]
  wire [63:0] _rdata1_T = conflict_ws_rs1 ? io_ws_fwd_res : io_rdata1; // @[IDU.scala 498:86]
  wire [63:0] _rdata1_T_1 = conflict_ms_rs1 ? io_ms_fwd_res : _rdata1_T; // @[IDU.scala 498:52]
  wire [63:0] rdata1 = conflict_es_rs1 ? io_es_fwd_res : _rdata1_T_1; // @[IDU.scala 498:18]
  wire [63:0] _br_taken_T = conflict_es_rs1 ? io_es_fwd_res : _rdata1_T_1; // @[IDU.scala 483:27]
  wire [63:0] _rdata2_T = conflict_ws_rs2 ? io_ws_fwd_res : io_rdata2; // @[IDU.scala 499:86]
  wire [63:0] _rdata2_T_1 = conflict_ms_rs2 ? io_ms_fwd_res : _rdata2_T; // @[IDU.scala 499:52]
  wire [63:0] rdata2 = conflict_es_rs2 ? io_es_fwd_res : _rdata2_T_1; // @[IDU.scala 499:18]
  wire [63:0] _br_taken_T_1 = conflict_es_rs2 ? io_es_fwd_res : _rdata2_T_1; // @[IDU.scala 483:45]
  wire  _br_taken_T_2 = $signed(_br_taken_T) != $signed(_br_taken_T_1); // @[IDU.scala 483:34]
  wire  _br_taken_T_6 = $signed(_br_taken_T) == $signed(_br_taken_T_1); // @[IDU.scala 484:34]
  wire  _br_taken_T_10 = $signed(_br_taken_T) >= $signed(_br_taken_T_1); // @[IDU.scala 485:34]
  wire  _br_taken_T_14 = $signed(_br_taken_T) < $signed(_br_taken_T_1); // @[IDU.scala 486:34]
  wire  _br_taken_T_16 = rdata1 < rdata2; // @[IDU.scala 487:28]
  wire  _br_taken_T_18 = rdata1 >= rdata2; // @[IDU.scala 488:28]
  wire  _br_taken_T_39 = 32'h30200073 == inst; // @[Lookup.scala 31:38]
  wire  _br_taken_T_42 = _src1_is_pc_T_15 ? _br_taken_T_18 : _inst_type_T_119 | _br_taken_T_39; // @[Lookup.scala 34:39]
  wire  _br_taken_T_43 = _src1_is_pc_T_13 ? _br_taken_T_16 : _br_taken_T_42; // @[Lookup.scala 34:39]
  wire  _br_taken_T_44 = _src1_is_pc_T_11 ? _br_taken_T_14 : _br_taken_T_43; // @[Lookup.scala 34:39]
  wire  _br_taken_T_45 = _src1_is_pc_T_9 ? _br_taken_T_10 : _br_taken_T_44; // @[Lookup.scala 34:39]
  wire  _br_taken_T_46 = _src1_is_pc_T_7 ? _br_taken_T_6 : _br_taken_T_45; // @[Lookup.scala 34:39]
  wire  _br_taken_T_47 = _src1_is_pc_T_5 ? _br_taken_T_2 : _br_taken_T_46; // @[Lookup.scala 34:39]
  wire  br_taken = _src1_is_pc_T_1 | (_inst_type_T_9 | _br_taken_T_47); // @[Lookup.scala 34:39]
  wire  _T_2 = ~br_taken_cancel; // @[IDU.scala 133:57]
  wire  _GEN_0 = _T & br_taken_cancel ? 1'h0 : br_taken_cancel; // @[IDU.scala 135:67 136:25 122:34]
  wire  _GEN_1 = ds_allowin & io_fs_to_ds_valid & br_taken & ~br_taken_cancel | _GEN_0; // @[IDU.scala 133:74 134:25]
  wire  _T_7 = br_taken & _T_2; // @[IDU.scala 140:19]
  wire [4:0] rd = inst[11:7]; // @[IDU.scala 228:15]
  wire  fence = 32'h100f == inst; // @[Lookup.scala 31:38]
  wire [11:0] imm_imm = inst[31:20]; // @[IDU.scala 83:23]
  wire [51:0] _imm_T_2 = imm_imm[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_3 = {_imm_T_2,imm_imm}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_1 = {inst[31],inst[19:12],inst[20],inst[30:21]}; // @[Cat.scala 31:58]
  wire [42:0] _imm_T_6 = imm_imm_1[19] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_7 = {_imm_T_6,inst[31],inst[19:12],inst[20],inst[30:21],1'h0}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_2 = inst[31:12]; // @[IDU.scala 87:23]
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
  wire [6:0] _ALUop_T_122 = _inst_type_T_119 ? 7'h3d : _ALUop_T_121; // @[Lookup.scala 34:39]
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
  wire [6:0] _ALUop_T_171 = _inst_type_T_9 ? 7'h6 : _ALUop_T_170; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_172 = _src1_is_pc_T_1 ? 7'h5 : _ALUop_T_171; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_173 = _inst_type_T_5 ? 7'h4 : _ALUop_T_172; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_174 = _src1_is_pc_T_3 ? 7'hf : _ALUop_T_173; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_175 = _ALUop_T_3 ? 7'h2 : _ALUop_T_174; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_176 = _inst_type_T_1 ? 7'hf : _ALUop_T_175; // @[Lookup.scala 34:39]
  wire  _reg_write_T_28 = fence ? 1'h0 : 1'h1; // @[Lookup.scala 34:39]
  wire  _reg_write_T_29 = _br_taken_T_39 ? 1'h0 : _reg_write_T_28; // @[Lookup.scala 34:39]
  wire  _reg_write_T_30 = _inst_type_T_119 ? 1'h0 : _reg_write_T_29; // @[Lookup.scala 34:39]
  wire  _reg_write_T_31 = _src1_is_pc_T_15 ? 1'h0 : _reg_write_T_30; // @[Lookup.scala 34:39]
  wire  _reg_write_T_32 = _src1_is_pc_T_13 ? 1'h0 : _reg_write_T_31; // @[Lookup.scala 34:39]
  wire  _reg_write_T_33 = _src1_is_pc_T_11 ? 1'h0 : _reg_write_T_32; // @[Lookup.scala 34:39]
  wire  _reg_write_T_34 = _src1_is_pc_T_9 ? 1'h0 : _reg_write_T_33; // @[Lookup.scala 34:39]
  wire  _reg_write_T_35 = _src1_is_pc_T_7 ? 1'h0 : _reg_write_T_34; // @[Lookup.scala 34:39]
  wire  _reg_write_T_36 = _src1_is_pc_T_5 ? 1'h0 : _reg_write_T_35; // @[Lookup.scala 34:39]
  wire  _reg_write_T_37 = _inst_type_T_75 ? 1'h0 : _reg_write_T_36; // @[Lookup.scala 34:39]
  wire  _reg_write_T_38 = _inst_type_T_37 ? 1'h0 : _reg_write_T_37; // @[Lookup.scala 34:39]
  wire  _reg_write_T_39 = _inst_type_T_35 ? 1'h0 : _reg_write_T_38; // @[Lookup.scala 34:39]
  wire  _reg_write_T_40 = _inst_type_T_11 ? 1'h0 : _reg_write_T_39; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_14 = _inst_type_T_79 ? 3'h7 : 3'h0; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_15 = _inst_type_T_115 ? 3'h6 : _load_type_T_14; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_16 = _inst_type_T_77 ? 3'h5 : _load_type_T_15; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_17 = _inst_type_T_113 ? 3'h4 : _load_type_T_16; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_18 = _inst_type_T_33 ? 3'h3 : _load_type_T_17; // @[Lookup.scala 34:39]
  wire [2:0] _load_type_T_19 = _inst_type_T_25 ? 3'h2 : _load_type_T_18; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_8 = _inst_type_T_75 ? 4'hf : 4'h0; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_9 = _inst_type_T_37 ? 4'h1 : _Wmask_T_8; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_10 = _inst_type_T_35 ? 4'h3 : _Wmask_T_9; // @[Lookup.scala 34:39]
  wire [1:0] _csr_index_T_6 = 12'h300 == imm[11:0] ? 2'h2 : {{1'd0}, 12'h341 == imm[11:0]}; // @[Mux.scala 81:58]
  wire [1:0] csr_index = 12'h342 == imm[11:0] ? 2'h3 : _csr_index_T_6; // @[Mux.scala 81:58]
  wire [63:0] _csr_wdata_T = rdata1 | csr_reg_io_rdata; // @[IDU.scala 458:26]
  wire [63:0] _csr_wdata_T_1 = ~csr_reg_io_rdata; // @[IDU.scala 459:29]
  wire [63:0] _csr_wdata_T_2 = rdata1 & _csr_wdata_T_1; // @[IDU.scala 459:26]
  wire [63:0] _csr_wdata_T_9 = _inst_type_T_125 ? _csr_wdata_T_2 : 64'h0; // @[Lookup.scala 34:39]
  wire [63:0] _csr_wdata_T_10 = _inst_type_T_123 ? _csr_wdata_T : _csr_wdata_T_9; // @[Lookup.scala 34:39]
  wire [63:0] csr_wdata = _inst_type_T_121 ? rdata1 : _csr_wdata_T_10; // @[Lookup.scala 34:39]
  wire [31:0] ALUop = {{25'd0}, _ALUop_T_176}; // @[IDU.scala 311:11 65:21]
  wire [1:0] _T_17 = ALUop == 32'h3e ? 2'h1 : csr_index; // @[IDU.scala 462:48]
  wire [1:0] _T_24 = _conflict_es_rs1_T_3 ? csr_index : 2'h0; // @[IDU.scala 464:46]
  wire [63:0] _T_28 = _conflict_es_rs1_T_3 ? csr_wdata : 64'h0; // @[IDU.scala 465:48]
  wire [63:0] src1 = src1_is_pc ? ds_pc : rdata1; // @[IDU.scala 471:16]
  wire [63:0] src2 = src2_is_imm ? imm : rdata2; // @[IDU.scala 472:16]
  wire [63:0] _br_target_T_1 = src1 + src2; // @[IDU.scala 475:35]
  wire [63:0] _br_target_T_4 = _br_target_T_1 & 64'hfffffffffffffffe; // @[IDU.scala 476:31]
  wire [63:0] _br_target_T_11 = _br_taken_T_39 ? csr_reg_io_rdata : _br_target_T_1; // @[Lookup.scala 34:39]
  wire [63:0] _br_target_T_12 = _inst_type_T_119 ? csr_reg_io_rdata : _br_target_T_11; // @[Lookup.scala 34:39]
  wire [31:0] _io_store_data_T_11 = _inst_type_T_75 ? rdata2[31:0] : 32'h0; // @[Lookup.scala 34:39]
  wire [31:0] _io_store_data_T_12 = _inst_type_T_37 ? {{24'd0}, rdata2[7:0]} : _io_store_data_T_11; // @[Lookup.scala 34:39]
  wire [31:0] _io_store_data_T_13 = _inst_type_T_35 ? {{16'd0}, rdata2[15:0]} : _io_store_data_T_12; // @[Lookup.scala 34:39]
  csr_reg csr_reg ( // @[IDU.scala 449:21]
    .clock(csr_reg_clock),
    .io_wen1(csr_reg_io_wen1),
    .io_wen2(csr_reg_io_wen2),
    .io_waddr1(csr_reg_io_waddr1),
    .io_wdata1(csr_reg_io_wdata1),
    .io_raddr(csr_reg_io_raddr),
    .io_rdata(csr_reg_io_rdata)
  );
  assign io_ds_to_es_valid = ds_valid & ds_ready_go; // @[IDU.scala 151:32]
  assign io_br_taken = br_taken & ds_ready_go & _T_2; // @[IDU.scala 503:44]
  assign io_br_target = _inst_type_T_9 ? _br_target_T_4 : _br_target_T_12; // @[Lookup.scala 34:39]
  assign io_ds_allowin = ~ds_valid | ds_ready_go & io_es_allowin; // @[IDU.scala 152:29]
  assign io_ds_ready_go = (conflict_es_rs1 & (io_es_fwd_ready & ~io_es_ld) | ~conflict_es_rs1 & conflict_ms_rs1 &
    io_ms_fwd_ready | ~conflict_es_rs1 & ~conflict_ms_rs1 & conflict_ws_rs1 | ~(conflict_es_rs1 | conflict_ms_rs1 |
    conflict_ws_rs1)) & _ds_ready_go_T_33; // @[IDU.scala 150:265]
  assign io_fence = 32'h100f == inst; // @[Lookup.scala 31:38]
  assign io_raddr1 = inst[19:15]; // @[IDU.scala 227:16]
  assign io_raddr2 = csr_write[0] ? 5'h11 : inst[24:20]; // @[IDU.scala 226:15]
  assign io_to_es_pc = ds_pc; // @[IDU.scala 526:17]
  assign io_ALUop = {{25'd0}, _ALUop_T_176}; // @[IDU.scala 311:11 65:21]
  assign io_src1 = csr_write[0] ? csr_reg_io_rdata : src1; // @[IDU.scala 515:19]
  assign io_src2 = src2_is_imm ? imm : rdata2; // @[IDU.scala 472:16]
  assign io_rf_dst = inst[11:7]; // @[IDU.scala 228:15]
  assign io_store_data = _inst_type_T_11 ? rdata2 : {{32'd0}, _io_store_data_T_13}; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_reg_write = _ALUop_T_3 ? 1'h0 : _reg_write_T_40; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Writemem_en = 32'h44 == inst_type; // @[Mux.scala 81:61]
  assign io_ctrl_sign_Readmem_en = _inst_type_T_25 | (_inst_type_T_15 | (_inst_type_T_113 | (_inst_type_T_77 | (
    _inst_type_T_79 | (_inst_type_T_115 | _inst_type_T_33))))); // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Wmask = _inst_type_T_11 ? 8'hff : {{4'd0}, _Wmask_T_10}; // @[Lookup.scala 34:39]
  assign io_load_type = _inst_type_T_15 ? 3'h1 : _load_type_T_19; // @[Lookup.scala 34:39]
  assign io_ds_valid = ds_valid; // @[IDU.scala 528:17]
  assign csr_reg_clock = clock;
  assign csr_reg_io_wen1 = csr_write[0] & ds_valid; // @[IDU.scala 463:38]
  assign csr_reg_io_wen2 = csr_write[1] & ds_valid; // @[IDU.scala 466:38]
  assign csr_reg_io_waddr1 = _conflict_es_rs2_T_5 ? 2'h1 : _T_24; // @[IDU.scala 464:22]
  assign csr_reg_io_wdata1 = _conflict_es_rs2_T_5 ? ds_pc : _T_28; // @[IDU.scala 465:22]
  assign csr_reg_io_raddr = csr_write[1] ? 2'h0 : _T_17; // @[IDU.scala 462:21]
  always @(posedge clock) begin
    if (reset) begin // @[IDU.scala 112:27]
      ds_valid <= 1'h0; // @[IDU.scala 112:27]
    end else if (br_taken & _T_2 & ds_allowin) begin // @[IDU.scala 140:53]
      ds_valid <= 1'h0; // @[IDU.scala 141:18]
    end else if (ds_allowin) begin // @[IDU.scala 142:27]
      ds_valid <= io_fs_to_ds_valid; // @[IDU.scala 143:18]
    end
    if (reset) begin // @[IDU.scala 116:24]
      ds_pc <= 64'h0; // @[IDU.scala 116:24]
    end else if (io_fs_to_ds_valid & ds_allowin & ~_T_7) begin // @[IDU.scala 145:75]
      ds_pc <= io_pc; // @[IDU.scala 146:15]
    end
    if (reset) begin // @[IDU.scala 118:23]
      inst <= 32'h0; // @[IDU.scala 118:23]
    end else if (io_fs_to_ds_valid & ds_allowin & ~_T_7) begin // @[IDU.scala 145:75]
      inst <= io_from_fs_inst; // @[IDU.scala 147:14]
    end
    if (reset) begin // @[IDU.scala 122:34]
      br_taken_cancel <= 1'h0; // @[IDU.scala 122:34]
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
  input         io_out_ready,
  output [31:0] io_result_hi,
  output [31:0] io_result_lo
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [127:0] _RAND_2;
  reg [95:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire [2:0] booth_partial_io_y; // @[Mul.scala 72:31]
  wire [63:0] booth_partial_io_x; // @[Mul.scala 72:31]
  wire  booth_partial_io_c; // @[Mul.scala 72:31]
  wire [63:0] booth_partial_io_p; // @[Mul.scala 72:31]
  wire  sign = io_multiplicand[63] ^ io_multiplier[63]; // @[Mul.scala 52:33]
  reg [63:0] res; // @[Mul.scala 54:22]
  reg [1:0] state; // @[Mul.scala 56:24]
  reg [127:0] src1; // @[Mul.scala 58:23]
  reg [64:0] src2; // @[Mul.scala 59:23]
  wire [31:0] _src1_32_T_2 = io_multiplicand[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _src1_32_T_4 = {_src1_32_T_2,io_multiplicand[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] src1_32 = io_mulw ? _src1_32_T_4 : io_multiplicand; // @[Mul.scala 66:19]
  wire [31:0] _src2_32_T_2 = io_multiplier[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _src2_32_T_4 = {_src2_32_T_2,io_multiplier[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] src2_32 = io_mulw ? _src2_32_T_4 : io_multiplier; // @[Mul.scala 67:19]
  wire [63:0] _real_cand_T_5 = src1_32[63] ? 64'hffffffffffffffff : 64'h0; // @[Bitwise.scala 74:12]
  wire [127:0] real_cand = {_real_cand_T_5,src1_32}; // @[Cat.scala 31:58]
  wire [64:0] _real_er_T = {src2_32,1'h0}; // @[Cat.scala 31:58]
  wire [127:0] _GEN_1 = io_mul_valid ? real_cand : src1; // @[Mul.scala 78:44 80:22 58:23]
  wire [63:0] real_er = _real_er_T[63:0]; // @[Mul.scala 62:23 70:13]
  wire  _T_4 = src2 != 65'h0; // @[Mul.scala 89:26]
  wire [63:0] _res_T_1 = res + booth_partial_io_p; // @[Mul.scala 90:32]
  wire [63:0] _GEN_21 = {{63'd0}, booth_partial_io_c}; // @[Mul.scala 90:53]
  wire [63:0] _res_T_3 = _res_T_1 + _GEN_21; // @[Mul.scala 90:53]
  wire [129:0] _src1_T = {src1, 2'h0}; // @[Mul.scala 92:34]
  wire [1:0] _GEN_4 = io_out_ready ? 2'h0 : state; // @[Mul.scala 56:24 94:39 95:31]
  wire [129:0] _GEN_7 = src2 != 65'h0 ? _src1_T : {{2'd0}, src1}; // @[Mul.scala 58:23 89:33 92:26]
  wire [129:0] _GEN_16 = 2'h1 == state ? _GEN_7 : {{2'd0}, src1}; // @[Mul.scala 76:18 58:23]
  wire [129:0] _GEN_18 = 2'h0 == state ? {{2'd0}, _GEN_1} : _GEN_16; // @[Mul.scala 76:18]
  wire [31:0] _io_result_hi_T_1 = {sign,res[62:32]}; // @[Cat.scala 31:58]
  wire  _GEN_22 = _T_4 ? 1'h0 : 1'h1; // @[Mul.scala 108:35 110:26 116:26]
  wire [31:0] _GEN_23 = _T_4 ? 32'h0 : _io_result_hi_T_1; // @[Mul.scala 108:35 111:26 114:26]
  wire [31:0] _GEN_24 = _T_4 ? 32'h0 : res[31:0]; // @[Mul.scala 108:35 112:26 115:26]
  wire  _GEN_26 = state == 2'h1 & _GEN_22; // @[Mul.scala 107:33 121:22]
  wire [31:0] _GEN_27 = state == 2'h1 ? _GEN_23 : 32'h0; // @[Mul.scala 107:33 122:22]
  wire [31:0] _GEN_28 = state == 2'h1 ? _GEN_24 : 32'h0; // @[Mul.scala 107:33 123:22]
  wire [129:0] _GEN_25 = reset ? 130'h0 : _GEN_18; // @[Mul.scala 58:{23,23}]
  partial_product booth_partial ( // @[Mul.scala 72:31]
    .io_y(booth_partial_io_y),
    .io_x(booth_partial_io_x),
    .io_c(booth_partial_io_c),
    .io_p(booth_partial_io_p)
  );
  assign io_out_valid = state == 2'h0 ? 1'h0 : _GEN_26; // @[Mul.scala 102:23 104:22]
  assign io_result_hi = state == 2'h0 ? 32'h0 : _GEN_27; // @[Mul.scala 102:23 105:22]
  assign io_result_lo = state == 2'h0 ? 32'h0 : _GEN_28; // @[Mul.scala 102:23 106:22]
  assign booth_partial_io_y = src2[2:0]; // @[Mul.scala 73:31]
  assign booth_partial_io_x = src1[63:0]; // @[Mul.scala 74:24]
  always @(posedge clock) begin
    if (reset) begin // @[Mul.scala 54:22]
      res <= 64'h0; // @[Mul.scala 54:22]
    end else if (2'h0 == state) begin // @[Mul.scala 76:18]
      if (io_mul_valid) begin // @[Mul.scala 78:44]
        res <= 64'h0; // @[Mul.scala 82:21]
      end
    end else if (2'h1 == state) begin // @[Mul.scala 76:18]
      if (src2 != 65'h0) begin // @[Mul.scala 89:33]
        res <= _res_T_3; // @[Mul.scala 90:25]
      end
    end
    if (reset) begin // @[Mul.scala 56:24]
      state <= 2'h0; // @[Mul.scala 56:24]
    end else if (2'h0 == state) begin // @[Mul.scala 76:18]
      if (io_mul_valid) begin // @[Mul.scala 78:44]
        state <= 2'h1; // @[Mul.scala 79:23]
      end
    end else if (2'h1 == state) begin // @[Mul.scala 76:18]
      if (!(src2 != 65'h0)) begin // @[Mul.scala 89:33]
        state <= _GEN_4;
      end
    end
    src1 <= _GEN_25[127:0]; // @[Mul.scala 58:{23,23}]
    if (reset) begin // @[Mul.scala 59:23]
      src2 <= 65'h0; // @[Mul.scala 59:23]
    end else if (2'h0 == state) begin // @[Mul.scala 76:18]
      if (io_mul_valid) begin // @[Mul.scala 78:44]
        src2 <= {{1'd0}, real_er}; // @[Mul.scala 81:22]
      end
    end else if (2'h1 == state) begin // @[Mul.scala 76:18]
      if (src2 != 65'h0) begin // @[Mul.scala 89:33]
        src2 <= {{2'd0}, src2[64:2]}; // @[Mul.scala 91:26]
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
  wire  dend_neg = io_divw ? io_dividend[31] : io_dividend[63]; // @[Div.scala 26:20]
  wire  sor_neg = io_divw ? io_divisor[31] : io_divisor[63]; // @[Div.scala 27:19]
  wire  quotient_neg = dend_neg & ~sor_neg | ~dend_neg & sor_neg; // @[Div.scala 28:43]
  wire [31:0] _src1_32_s_T_2 = io_dividend[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _src1_32_s_T_4 = {_src1_32_s_T_2,io_dividend[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] src1_32_s = io_divw ? _src1_32_s_T_4 : io_dividend; // @[Div.scala 36:21]
  wire [31:0] _src2_32_s_T_2 = io_divisor[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _src2_32_s_T_4 = {_src2_32_s_T_2,io_divisor[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] src2_32_s = io_divw ? _src2_32_s_T_4 : io_divisor; // @[Div.scala 37:21]
  wire [63:0] src1_32 = io_divw ? {{32'd0}, io_dividend[31:0]} : io_dividend; // @[Div.scala 38:19]
  wire [63:0] src2_32 = io_divw ? {{32'd0}, io_divisor[31:0]} : io_divisor; // @[Div.scala 39:19]
  wire [63:0] _real_cand_T_2 = ~src1_32_s; // @[Div.scala 43:61]
  wire [63:0] _real_cand_T_4 = _real_cand_T_2 + 64'h1; // @[Div.scala 43:71]
  wire [63:0] _real_cand_T_5 = dend_neg ? _real_cand_T_4 : src1_32_s; // @[Div.scala 43:45]
  wire [63:0] real_cand = io_div_signed ? _real_cand_T_5 : src1_32; // @[Div.scala 43:21]
  wire [63:0] _real_er_T_2 = ~src2_32_s; // @[Div.scala 44:58]
  wire [63:0] _real_er_T_4 = _real_er_T_2 + 64'h1; // @[Div.scala 44:68]
  wire [63:0] _real_er_T_5 = sor_neg ? _real_er_T_4 : src2_32_s; // @[Div.scala 44:43]
  wire [63:0] real_er = io_div_signed ? _real_er_T_5 : src2_32; // @[Div.scala 44:19]
  wire [95:0] _src1_T_1 = {32'h0,real_cand}; // @[Cat.scala 31:58]
  wire [64:0] src2 = {1'h0,real_er}; // @[Cat.scala 31:58]
  reg [127:0] div_cand; // @[Div.scala 51:27]
  reg  div_start; // @[Div.scala 52:28]
  reg [63:0] quotient; // @[Div.scala 54:27]
  reg [31:0] step_num; // @[Div.scala 56:27]
  wire  _GEN_0 = div_start & $signed(step_num) <= 32'sh0 ? 1'h0 : div_start; // @[Div.scala 69:56 70:23 52:28]
  wire  _GEN_1 = io_div_valid & ~div_start | _GEN_0; // @[Div.scala 63:41 64:23]
  wire [127:0] src1 = {{32'd0}, _src1_T_1}; // @[Div.scala 46:20 48:10]
  wire [127:0] _GEN_2 = io_div_valid & ~div_start ? src1 : div_cand; // @[Div.scala 63:41 65:22 51:27]
  wire [63:0] _GEN_3 = io_div_valid & ~div_start ? 64'h0 : quotient; // @[Div.scala 63:41 66:22 54:27]
  wire [31:0] _GEN_4 = io_div_valid & ~div_start ? 32'h40 : step_num; // @[Div.scala 63:41 68:22 56:27]
  wire [64:0] sub_res = div_cand[127:63] - src2; // @[Div.scala 78:41]
  wire [64:0] _quotient_T_2 = {quotient, 1'h0}; // @[Div.scala 80:57]
  wire [64:0] _quotient_T_4 = _quotient_T_2 | 65'h1; // @[Div.scala 80:81]
  wire [64:0] _quotient_T_5 = sub_res[64] ? _quotient_T_2 : _quotient_T_4; // @[Div.scala 80:28]
  wire [127:0] update_cand = {sub_res, 63'h0}; // @[Div.scala 81:36]
  wire [127:0] _new_cand_T_2 = div_cand & 128'h7fffffffffffffff; // @[Div.scala 82:68]
  wire [127:0] _new_cand_T_3 = _new_cand_T_2 | update_cand; // @[Div.scala 82:93]
  wire [127:0] new_cand = sub_res[64] ? div_cand : _new_cand_T_3; // @[Div.scala 82:28]
  wire [128:0] _div_cand_T = {new_cand, 1'h0}; // @[Div.scala 83:34]
  wire [31:0] _step_num_T_1 = step_num - 32'h1; // @[Div.scala 84:34]
  wire [63:0] _io_remainder_T_3 = ~div_cand[127:64]; // @[Div.scala 89:77]
  wire [63:0] _io_remainder_T_5 = _io_remainder_T_3 + 64'h1; // @[Div.scala 89:94]
  wire [63:0] _io_remainder_T_7 = dend_neg ? _io_remainder_T_5 : div_cand[127:64]; // @[Div.scala 89:56]
  wire [63:0] _io_remainder_T_9 = io_div_signed ? _io_remainder_T_7 : div_cand[127:64]; // @[Div.scala 89:32]
  wire [63:0] _io_quotient_T_2 = ~quotient; // @[Div.scala 91:75]
  wire [63:0] _io_quotient_T_4 = _io_quotient_T_2 + 64'h1; // @[Div.scala 91:84]
  wire [63:0] _io_quotient_T_5 = quotient_neg ? _io_quotient_T_4 : quotient; // @[Div.scala 91:55]
  wire [63:0] _io_quotient_T_6 = io_div_signed ? _io_quotient_T_5 : quotient; // @[Div.scala 91:31]
  wire [64:0] _GEN_9 = $signed(step_num) > 32'sh0 ? _quotient_T_5 : {{1'd0}, _GEN_3}; // @[Div.scala 74:36 80:22]
  wire [128:0] _GEN_10 = $signed(step_num) > 32'sh0 ? _div_cand_T : {{1'd0}, _GEN_2}; // @[Div.scala 74:36 83:22]
  wire [63:0] _GEN_12 = $signed(step_num) > 32'sh0 ? 64'h0 : _io_remainder_T_9; // @[Div.scala 74:36 85:26 89:26]
  wire  _GEN_13 = $signed(step_num) > 32'sh0 ? 1'h0 : 1'h1; // @[Div.scala 74:36 86:26 90:26]
  wire [63:0] _GEN_14 = $signed(step_num) > 32'sh0 ? 64'h0 : _io_quotient_T_6; // @[Div.scala 74:36 87:25 91:25]
  wire [64:0] _GEN_15 = div_start ? _GEN_9 : {{1'd0}, _GEN_3}; // @[Div.scala 73:20]
  wire [128:0] _GEN_16 = div_start ? _GEN_10 : {{1'd0}, _GEN_2}; // @[Div.scala 73:20]
  wire [128:0] _GEN_21 = reset ? 129'h0 : _GEN_16; // @[Div.scala 51:{27,27}]
  wire [64:0] _GEN_22 = reset ? 65'h0 : _GEN_15; // @[Div.scala 54:{27,27}]
  assign io_out_valid = div_start & _GEN_13; // @[Div.scala 73:20 95:22]
  assign io_quotient = div_start ? _GEN_14 : 64'h0; // @[Div.scala 73:20 96:21]
  assign io_remainder = div_start ? _GEN_12 : 64'h0; // @[Div.scala 73:20 94:22]
  always @(posedge clock) begin
    div_cand <= _GEN_21[127:0]; // @[Div.scala 51:{27,27}]
    if (reset) begin // @[Div.scala 52:28]
      div_start <= 1'h0; // @[Div.scala 52:28]
    end else begin
      div_start <= _GEN_1;
    end
    quotient <= _GEN_22[63:0]; // @[Div.scala 54:{27,27}]
    if (reset) begin // @[Div.scala 56:27]
      step_num <= 32'h0; // @[Div.scala 56:27]
    end else if (div_start) begin // @[Div.scala 73:20]
      if ($signed(step_num) > 32'sh0) begin // @[Div.scala 74:36]
        step_num <= _step_num_T_1; // @[Div.scala 84:22]
      end else begin
        step_num <= _GEN_4;
      end
    end else begin
      step_num <= _GEN_4;
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
  input         io_res_ready,
  output [63:0] io_alu_res
);
  wire  Mul_clock; // @[ALU.scala 61:28]
  wire  Mul_reset; // @[ALU.scala 61:28]
  wire  Mul_io_mul_valid; // @[ALU.scala 61:28]
  wire  Mul_io_mulw; // @[ALU.scala 61:28]
  wire [63:0] Mul_io_multiplicand; // @[ALU.scala 61:28]
  wire [63:0] Mul_io_multiplier; // @[ALU.scala 61:28]
  wire  Mul_io_out_valid; // @[ALU.scala 61:28]
  wire  Mul_io_out_ready; // @[ALU.scala 61:28]
  wire [31:0] Mul_io_result_hi; // @[ALU.scala 61:28]
  wire [31:0] Mul_io_result_lo; // @[ALU.scala 61:28]
  wire  Div_clock; // @[ALU.scala 62:28]
  wire  Div_reset; // @[ALU.scala 62:28]
  wire [63:0] Div_io_dividend; // @[ALU.scala 62:28]
  wire [63:0] Div_io_divisor; // @[ALU.scala 62:28]
  wire  Div_io_div_valid; // @[ALU.scala 62:28]
  wire  Div_io_divw; // @[ALU.scala 62:28]
  wire  Div_io_div_signed; // @[ALU.scala 62:28]
  wire  Div_io_out_valid; // @[ALU.scala 62:28]
  wire [63:0] Div_io_quotient; // @[ALU.scala 62:28]
  wire [63:0] Div_io_remainder; // @[ALU.scala 62:28]
  wire  mul_valid = 32'h12 == io_ALUop | 32'h11 == io_ALUop; // @[Mux.scala 81:58]
  wire  div_valid = 32'h32 == io_ALUop | (32'h14 == io_ALUop | (32'h33 == io_ALUop | (32'h34 == io_ALUop | (32'h35 ==
    io_ALUop | (32'h13 == io_ALUop | (32'h30 == io_ALUop | 32'h31 == io_ALUop)))))); // @[Mux.scala 81:58]
  wire [63:0] add_res = io_src1_value + io_src2_value; // @[ALU.scala 80:30]
  wire [63:0] sub_res = io_src1_value - io_src2_value; // @[ALU.scala 81:30]
  wire [63:0] sra_res = $signed(io_src1_value) >>> io_src2_value[5:0]; // @[ALU.scala 82:60]
  wire [63:0] srl_res = io_src1_value >> io_src2_value[5:0]; // @[ALU.scala 83:30]
  wire [126:0] _GEN_0 = {{63'd0}, io_src1_value}; // @[ALU.scala 84:30]
  wire [126:0] sll_res = _GEN_0 << io_src2_value[5:0]; // @[ALU.scala 84:30]
  wire [31:0] _sraw_res_T_1 = io_src1_value[31:0]; // @[ALU.scala 85:43]
  wire [31:0] sraw_res = $signed(_sraw_res_T_1) >>> io_src2_value[4:0]; // @[ALU.scala 85:46]
  wire [31:0] srlw_res = io_src1_value[31:0] >> io_src2_value[4:0]; // @[ALU.scala 86:37]
  wire [62:0] _GEN_1 = {{31'd0}, io_src1_value[31:0]}; // @[ALU.scala 87:37]
  wire [62:0] sllw_res = _GEN_1 << io_src2_value[4:0]; // @[ALU.scala 87:37]
  wire [63:0] or_res = io_src1_value | io_src2_value; // @[ALU.scala 88:29]
  wire [63:0] xor_res = io_src1_value ^ io_src2_value; // @[ALU.scala 89:30]
  wire [63:0] and_res = io_src1_value & io_src2_value; // @[ALU.scala 90:30]
  wire [63:0] mlu_res = {Mul_io_result_hi,Mul_io_result_lo}; // @[Cat.scala 31:58]
  wire [31:0] divw_res = Div_io_quotient[31:0]; // @[ALU.scala 93:39]
  wire [31:0] remw_res = Div_io_remainder[31:0]; // @[ALU.scala 95:40]
  wire [63:0] _alu_res_T_1 = io_src1_value + 64'h4; // @[ALU.scala 118:29]
  wire  _alu_res_T_4 = io_src1_value < io_src2_value; // @[ALU.scala 121:33]
  wire  _alu_res_T_8 = $signed(io_src1_value) < $signed(io_src2_value); // @[ALU.scala 123:41]
  wire [31:0] _alu_res_T_12 = add_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_14 = {_alu_res_T_12,add_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_17 = sub_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_19 = {_alu_res_T_17,sub_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_22 = sllw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_24 = {_alu_res_T_22,sllw_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_27 = sraw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _alu_res_T_28 = $signed(_sraw_res_T_1) >>> io_src2_value[4:0]; // @[ALU.scala 142:55]
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
  Mul Mul ( // @[ALU.scala 61:28]
    .clock(Mul_clock),
    .reset(Mul_reset),
    .io_mul_valid(Mul_io_mul_valid),
    .io_mulw(Mul_io_mulw),
    .io_multiplicand(Mul_io_multiplicand),
    .io_multiplier(Mul_io_multiplier),
    .io_out_valid(Mul_io_out_valid),
    .io_out_ready(Mul_io_out_ready),
    .io_result_hi(Mul_io_result_hi),
    .io_result_lo(Mul_io_result_lo)
  );
  Div Div ( // @[ALU.scala 62:28]
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
  assign io_alu_busy = mul_valid ? ~Mul_io_out_valid : div_valid & ~Div_io_out_valid; // @[ALU.scala 164:23]
  assign io_alu_res = alu_res[63:0]; // @[ALU.scala 165:16]
  assign Mul_clock = clock;
  assign Mul_reset = reset;
  assign Mul_io_mul_valid = mul_valid & io_src_valid; // @[ALU.scala 63:39]
  assign Mul_io_mulw = io_ALUop == 32'h12; // @[ALU.scala 46:22]
  assign Mul_io_multiplicand = io_src1_value; // @[ALU.scala 67:29]
  assign Mul_io_multiplier = io_src2_value; // @[ALU.scala 68:27]
  assign Mul_io_out_ready = io_res_ready; // @[ALU.scala 69:26]
  assign Div_clock = clock;
  assign Div_reset = reset;
  assign Div_io_dividend = io_src1_value; // @[ALU.scala 71:25]
  assign Div_io_divisor = io_src2_value; // @[ALU.scala 72:24]
  assign Div_io_div_valid = div_valid & io_src_valid; // @[ALU.scala 73:39]
  assign Div_io_divw = 32'h32 == io_ALUop | (32'h14 == io_ALUop | (32'h35 == io_ALUop | 32'h13 == io_ALUop)); // @[Mux.scala 81:58]
  assign Div_io_div_signed = 32'h14 == io_ALUop | (32'h34 == io_ALUop | (32'h13 == io_ALUop | 32'h31 == io_ALUop)); // @[Mux.scala 81:58]
endmodule
module EXU(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_ds_to_es_valid,
  input         io_ms_allowin,
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
  output [4:0]  io_es_rf_dst,
  output        io_es_fwd_ready,
  output [63:0] io_es_fwd_res,
  output        io_es_ld
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
  wire  ALU_clock; // @[EXU.scala 40:21]
  wire  ALU_reset; // @[EXU.scala 40:21]
  wire [63:0] ALU_io_src1_value; // @[EXU.scala 40:21]
  wire [63:0] ALU_io_src2_value; // @[EXU.scala 40:21]
  wire [31:0] ALU_io_ALUop; // @[EXU.scala 40:21]
  wire  ALU_io_src_valid; // @[EXU.scala 40:21]
  wire  ALU_io_alu_busy; // @[EXU.scala 40:21]
  wire  ALU_io_res_ready; // @[EXU.scala 40:21]
  wire [63:0] ALU_io_alu_res; // @[EXU.scala 40:21]
  reg [63:0] es_pc; // @[EXU.scala 42:24]
  reg  es_valid; // @[EXU.scala 43:27]
  reg [4:0] es_rd; // @[EXU.scala 47:24]
  reg  es_rf_we; // @[EXU.scala 48:27]
  reg [63:0] src1_value; // @[EXU.scala 50:29]
  reg [63:0] src2_value; // @[EXU.scala 51:29]
  reg [63:0] store_data; // @[EXU.scala 52:29]
  reg [7:0] st_wstrb; // @[EXU.scala 53:27]
  reg  st_we; // @[EXU.scala 54:24]
  reg  ld_we; // @[EXU.scala 55:24]
  reg [31:0] ALUop; // @[EXU.scala 57:24]
  reg [2:0] load_type; // @[EXU.scala 58:28]
  wire  es_ready_go = ~ALU_io_alu_busy; // @[EXU.scala 78:20]
  wire  es_allowin = ~es_valid | es_ready_go & io_ms_allowin; // @[EXU.scala 80:29]
  ALU ALU ( // @[EXU.scala 40:21]
    .clock(ALU_clock),
    .reset(ALU_reset),
    .io_src1_value(ALU_io_src1_value),
    .io_src2_value(ALU_io_src2_value),
    .io_ALUop(ALU_io_ALUop),
    .io_src_valid(ALU_io_src_valid),
    .io_alu_busy(ALU_io_alu_busy),
    .io_res_ready(ALU_io_res_ready),
    .io_alu_res(ALU_io_alu_res)
  );
  assign io_es_allowin = ~es_valid | es_ready_go & io_ms_allowin; // @[EXU.scala 80:29]
  assign io_es_to_ms_valid = es_valid & es_ready_go; // @[EXU.scala 79:32]
  assign io_to_ms_pc = es_pc; // @[EXU.scala 112:17]
  assign io_to_ms_alures = ALU_io_alu_res; // @[EXU.scala 56:23 98:13]
  assign io_to_ms_store_data = store_data; // @[EXU.scala 115:25]
  assign io_to_ms_wen = st_we; // @[EXU.scala 116:18]
  assign io_to_ms_wstrb = st_wstrb; // @[EXU.scala 117:20]
  assign io_to_ms_ren = ld_we; // @[EXU.scala 118:18]
  assign io_to_ms_maddr = ALU_io_alu_res; // @[EXU.scala 56:23 98:13]
  assign io_to_ms_rf_dst = es_rd; // @[EXU.scala 120:21]
  assign io_to_ms_rf_we = es_rf_we; // @[EXU.scala 121:20]
  assign io_to_ms_load_type = load_type; // @[EXU.scala 125:24]
  assign io_es_valid = es_valid; // @[EXU.scala 122:17]
  assign io_es_rf_we = es_rf_we; // @[EXU.scala 124:17]
  assign io_es_rf_dst = es_rd; // @[EXU.scala 123:18]
  assign io_es_fwd_ready = es_valid & es_ready_go; // @[EXU.scala 79:32]
  assign io_es_fwd_res = ALU_io_alu_res; // @[EXU.scala 56:23 98:13]
  assign io_es_ld = ld_we & es_valid; // @[EXU.scala 128:23]
  assign ALU_clock = clock;
  assign ALU_reset = reset;
  assign ALU_io_src1_value = ALUop == 32'h6 ? es_pc : src1_value; // @[EXU.scala 94:26]
  assign ALU_io_src2_value = src2_value; // @[EXU.scala 95:20]
  assign ALU_io_ALUop = ALUop; // @[EXU.scala 96:15]
  assign ALU_io_src_valid = es_valid; // @[EXU.scala 97:19]
  assign ALU_io_res_ready = io_ms_allowin; // @[EXU.scala 99:19]
  always @(posedge clock) begin
    if (reset) begin // @[EXU.scala 42:24]
      es_pc <= 64'h0; // @[EXU.scala 42:24]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 63:42]
      es_pc <= io_pc; // @[EXU.scala 64:15]
    end
    if (reset) begin // @[EXU.scala 43:27]
      es_valid <= 1'h0; // @[EXU.scala 43:27]
    end else if (es_allowin) begin // @[EXU.scala 60:21]
      es_valid <= io_ds_to_es_valid; // @[EXU.scala 61:18]
    end
    if (reset) begin // @[EXU.scala 47:24]
      es_rd <= 5'h0; // @[EXU.scala 47:24]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 63:42]
      es_rd <= io_rf_dst; // @[EXU.scala 69:15]
    end
    if (reset) begin // @[EXU.scala 48:27]
      es_rf_we <= 1'h0; // @[EXU.scala 48:27]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 63:42]
      es_rf_we <= io_ctrl_sign_reg_write; // @[EXU.scala 65:18]
    end
    if (reset) begin // @[EXU.scala 50:29]
      src1_value <= 64'h0; // @[EXU.scala 50:29]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 63:42]
      src1_value <= io_src1_value; // @[EXU.scala 67:20]
    end
    if (reset) begin // @[EXU.scala 51:29]
      src2_value <= 64'h0; // @[EXU.scala 51:29]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 63:42]
      src2_value <= io_src2_value; // @[EXU.scala 68:20]
    end
    if (reset) begin // @[EXU.scala 52:29]
      store_data <= 64'h0; // @[EXU.scala 52:29]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 63:42]
      store_data <= io_store_data; // @[EXU.scala 70:20]
    end
    if (reset) begin // @[EXU.scala 53:27]
      st_wstrb <= 8'h0; // @[EXU.scala 53:27]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 63:42]
      st_wstrb <= io_ctrl_sign_Wmask; // @[EXU.scala 71:18]
    end
    if (reset) begin // @[EXU.scala 54:24]
      st_we <= 1'h0; // @[EXU.scala 54:24]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 63:42]
      st_we <= io_ctrl_sign_Writemem_en; // @[EXU.scala 72:15]
    end
    if (reset) begin // @[EXU.scala 55:24]
      ld_we <= 1'h0; // @[EXU.scala 55:24]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 63:42]
      ld_we <= io_ctrl_sign_Readmem_en; // @[EXU.scala 73:15]
    end
    if (reset) begin // @[EXU.scala 57:24]
      ALUop <= 32'h0; // @[EXU.scala 57:24]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 63:42]
      ALUop <= io_ALUop; // @[EXU.scala 74:15]
    end
    if (reset) begin // @[EXU.scala 58:28]
      load_type <= 3'h0; // @[EXU.scala 58:28]
    end else if (io_ds_to_es_valid & es_allowin) begin // @[EXU.scala 63:42]
      load_type <= io_load_type; // @[EXU.scala 75:19]
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
  output        io_ms_allowin,
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
  output        io_to_ws_device,
  output        io_ms_valid,
  output        io_ms_rf_we,
  output [4:0]  io_ms_rf_dst,
  output        io_ms_fwd_ready,
  output [63:0] io_ms_fwd_res,
  input  [63:0] io_axi_in_rdata,
  input         io_axi_in_rvalid,
  input         io_axi_in_bvalid,
  output [31:0] io_axi_out_araddr,
  output        io_axi_out_arvalid,
  output [31:0] io_axi_out_awaddr,
  output        io_axi_out_awvalid,
  output [63:0] io_axi_out_wdata,
  output [7:0]  io_axi_out_wstrb,
  output        io_axi_out_wvalid
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
  reg  ms_valid; // @[LSU.scala 37:27]
  reg [63:0] ms_pc; // @[LSU.scala 38:24]
  reg  ms_rf_we; // @[LSU.scala 42:27]
  reg [4:0] ms_rf_dst; // @[LSU.scala 43:28]
  reg [63:0] ms_res; // @[LSU.scala 44:25]
  reg [63:0] store_data; // @[LSU.scala 46:29]
  reg  wen; // @[LSU.scala 47:22]
  reg [7:0] wstrb; // @[LSU.scala 48:24]
  reg  ren; // @[LSU.scala 49:22]
  reg [63:0] maddr; // @[LSU.scala 50:24]
  reg [2:0] load_type; // @[LSU.scala 51:28]
  wire  ms_ready_go = wen & io_axi_in_bvalid | ren & io_axi_in_rvalid | ~(wen | ren); // @[LSU.scala 71:75]
  wire  ms_allowin = ~ms_valid | ms_ready_go; // @[LSU.scala 72:29]
  wire [31:0] _rdata_T_2 = io_axi_in_rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _rdata_T_4 = {_rdata_T_2,io_axi_in_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_7 = {56'h0,io_axi_in_rdata[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_10 = {32'h0,io_axi_in_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [47:0] _rdata_T_13 = io_axi_in_rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _rdata_T_15 = {_rdata_T_13,io_axi_in_rdata[15:0]}; // @[Cat.scala 31:58]
  wire [55:0] _rdata_T_18 = io_axi_in_rdata[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _rdata_T_20 = {_rdata_T_18,io_axi_in_rdata[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_23 = {48'h0,io_axi_in_rdata[15:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_25 = 3'h1 == load_type ? _rdata_T_4 : io_axi_in_rdata; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_27 = 3'h2 == load_type ? io_axi_in_rdata : _rdata_T_25; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_29 = 3'h3 == load_type ? _rdata_T_7 : _rdata_T_27; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_31 = 3'h4 == load_type ? _rdata_T_10 : _rdata_T_29; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_33 = 3'h5 == load_type ? _rdata_T_15 : _rdata_T_31; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_35 = 3'h6 == load_type ? _rdata_T_20 : _rdata_T_33; // @[Mux.scala 81:58]
  wire [63:0] rdata = 3'h7 == load_type ? _rdata_T_23 : _rdata_T_35; // @[Mux.scala 81:58]
  wire  _io_ms_final_res_T = load_type != 3'h0; // @[LSU.scala 116:37]
  assign io_ms_allowin = ~ms_valid | ms_ready_go; // @[LSU.scala 72:29]
  assign io_to_ws_pc = ms_pc; // @[LSU.scala 120:17]
  assign io_ms_final_res = load_type != 3'h0 ? rdata : ms_res; // @[LSU.scala 116:27]
  assign io_ms_to_ws_valid = ms_valid & ms_ready_go; // @[LSU.scala 73:32]
  assign io_to_ws_rf_we = ms_rf_we; // @[LSU.scala 119:20]
  assign io_to_ws_rf_dst = ms_rf_dst; // @[LSU.scala 118:21]
  assign io_to_ws_device = maddr >= 64'ha0000000 & (ren | wen); // @[LSU.scala 121:50]
  assign io_ms_valid = ms_valid; // @[LSU.scala 123:17]
  assign io_ms_rf_we = ms_rf_we & ms_valid; // @[LSU.scala 125:28]
  assign io_ms_rf_dst = ms_rf_dst; // @[LSU.scala 124:18]
  assign io_ms_fwd_ready = ms_valid & ms_ready_go; // @[LSU.scala 73:32]
  assign io_ms_fwd_res = _io_ms_final_res_T ? rdata : ms_res; // @[LSU.scala 128:25]
  assign io_axi_out_araddr = maddr[31:0]; // @[LSU.scala 89:23]
  assign io_axi_out_arvalid = ren & ms_valid; // @[LSU.scala 90:31]
  assign io_axi_out_awaddr = maddr[31:0]; // @[LSU.scala 95:23]
  assign io_axi_out_awvalid = wen & ms_valid; // @[LSU.scala 96:31]
  assign io_axi_out_wdata = store_data; // @[LSU.scala 100:22]
  assign io_axi_out_wstrb = wstrb; // @[LSU.scala 101:22]
  assign io_axi_out_wvalid = wen; // @[LSU.scala 103:23]
  always @(posedge clock) begin
    if (reset) begin // @[LSU.scala 37:27]
      ms_valid <= 1'h0; // @[LSU.scala 37:27]
    end else if (ms_allowin) begin // @[LSU.scala 54:21]
      ms_valid <= io_es_to_ms_valid; // @[LSU.scala 55:18]
    end
    if (reset) begin // @[LSU.scala 38:24]
      ms_pc <= 64'h0; // @[LSU.scala 38:24]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 57:40]
      ms_pc <= io_pc; // @[LSU.scala 58:15]
    end
    if (reset) begin // @[LSU.scala 42:27]
      ms_rf_we <= 1'h0; // @[LSU.scala 42:27]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 57:40]
      ms_rf_we <= io_rf_we; // @[LSU.scala 59:18]
    end
    if (reset) begin // @[LSU.scala 43:28]
      ms_rf_dst <= 5'h0; // @[LSU.scala 43:28]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 57:40]
      ms_rf_dst <= io_rf_dst; // @[LSU.scala 60:19]
    end
    if (reset) begin // @[LSU.scala 44:25]
      ms_res <= 64'h0; // @[LSU.scala 44:25]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 57:40]
      ms_res <= io_alu_res; // @[LSU.scala 61:16]
    end
    if (reset) begin // @[LSU.scala 46:29]
      store_data <= 64'h0; // @[LSU.scala 46:29]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 57:40]
      store_data <= io_store_data; // @[LSU.scala 62:20]
    end
    if (reset) begin // @[LSU.scala 47:22]
      wen <= 1'h0; // @[LSU.scala 47:22]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 57:40]
      wen <= io_wen; // @[LSU.scala 63:13]
    end
    if (reset) begin // @[LSU.scala 48:24]
      wstrb <= 8'h0; // @[LSU.scala 48:24]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 57:40]
      wstrb <= io_wstrb; // @[LSU.scala 64:15]
    end
    if (reset) begin // @[LSU.scala 49:22]
      ren <= 1'h0; // @[LSU.scala 49:22]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 57:40]
      ren <= io_ren; // @[LSU.scala 65:13]
    end
    if (reset) begin // @[LSU.scala 50:24]
      maddr <= 64'h0; // @[LSU.scala 50:24]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 57:40]
      maddr <= io_maddr; // @[LSU.scala 66:15]
    end
    if (reset) begin // @[LSU.scala 51:28]
      load_type <= 3'h0; // @[LSU.scala 51:28]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 57:40]
      load_type <= io_load_type; // @[LSU.scala 67:19]
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
  output [63:0] io_ws_fwd_res,
  output [63:0] io_ws_pc,
  input         io_device_access,
  output        io_skip
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg  ws_valid; // @[WBU.scala 28:27]
  reg [63:0] ws_pc; // @[WBU.scala 29:24]
  reg  ws_rf_we; // @[WBU.scala 33:27]
  reg [4:0] ws_rf_dst; // @[WBU.scala 34:28]
  reg [63:0] ws_res; // @[WBU.scala 35:25]
  reg  device_access; // @[WBU.scala 36:32]
  assign io_we = ws_rf_we & ws_valid; // @[WBU.scala 66:22]
  assign io_waddr = ws_rf_dst; // @[WBU.scala 67:14]
  assign io_wdata = ws_res; // @[WBU.scala 68:14]
  assign io_ws_valid = ws_valid; // @[WBU.scala 69:17]
  assign io_ws_rf_we = ws_rf_we; // @[WBU.scala 71:17]
  assign io_ws_rf_dst = ws_rf_dst; // @[WBU.scala 70:18]
  assign io_ws_fwd_res = ws_res; // @[WBU.scala 73:19]
  assign io_ws_pc = ws_pc; // @[WBU.scala 74:14]
  assign io_skip = device_access & ws_valid; // @[WBU.scala 75:30]
  always @(posedge clock) begin
    if (reset) begin // @[WBU.scala 28:27]
      ws_valid <= 1'h0; // @[WBU.scala 28:27]
    end else begin
      ws_valid <= io_ms_to_ws_valid;
    end
    if (reset) begin // @[WBU.scala 29:24]
      ws_pc <= 64'h0; // @[WBU.scala 29:24]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 47:40]
      ws_pc <= io_pc; // @[WBU.scala 48:15]
    end
    if (reset) begin // @[WBU.scala 33:27]
      ws_rf_we <= 1'h0; // @[WBU.scala 33:27]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 47:40]
      ws_rf_we <= io_rf_we; // @[WBU.scala 49:18]
    end
    if (reset) begin // @[WBU.scala 34:28]
      ws_rf_dst <= 5'h0; // @[WBU.scala 34:28]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 47:40]
      ws_rf_dst <= io_rf_dst; // @[WBU.scala 50:19]
    end
    if (reset) begin // @[WBU.scala 35:25]
      ws_res <= 64'h0; // @[WBU.scala 35:25]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 47:40]
      ws_res <= io_ms_final_res; // @[WBU.scala 51:16]
    end
    if (reset) begin // @[WBU.scala 36:32]
      device_access <= 1'h0; // @[WBU.scala 36:32]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 47:40]
      device_access <= io_device_access; // @[WBU.scala 52:23]
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
  ws_valid = _RAND_0[0:0];
  _RAND_1 = {2{`RANDOM}};
  ws_pc = _RAND_1[63:0];
  _RAND_2 = {1{`RANDOM}};
  ws_rf_we = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  ws_rf_dst = _RAND_3[4:0];
  _RAND_4 = {2{`RANDOM}};
  ws_res = _RAND_4[63:0];
  _RAND_5 = {1{`RANDOM}};
  device_access = _RAND_5[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module AXI_ARBITER(
  input         clock,
  input         reset,
  input  [31:0] io_ifu_axi_in_araddr,
  input  [7:0]  io_ifu_axi_in_arlen,
  input         io_ifu_axi_in_arvalid,
  input         io_ifu_axi_in_rready,
  output [63:0] io_ifu_axi_out_rdata,
  output        io_ifu_axi_out_rlast,
  output        io_ifu_axi_out_rvalid,
  input  [31:0] io_lsu_axi_in_araddr,
  input  [7:0]  io_lsu_axi_in_arlen,
  input         io_lsu_axi_in_arvalid,
  input  [31:0] io_lsu_axi_in_awaddr,
  input  [7:0]  io_lsu_axi_in_awlen,
  input         io_lsu_axi_in_awvalid,
  input  [63:0] io_lsu_axi_in_wdata,
  input  [7:0]  io_lsu_axi_in_wstrb,
  input         io_lsu_axi_in_wvalid,
  input         io_lsu_axi_in_bready,
  output [63:0] io_lsu_axi_out_rdata,
  output        io_lsu_axi_out_rlast,
  output        io_lsu_axi_out_rvalid,
  output        io_lsu_axi_out_wready,
  output        io_lsu_axi_out_bvalid,
  input  [63:0] io_axi_in_rdata,
  input         io_axi_in_rlast,
  input         io_axi_in_wready,
  input         io_axi_in_bvalid,
  output [31:0] io_axi_out_araddr,
  output [7:0]  io_axi_out_arlen,
  output        io_axi_out_arvalid,
  output        io_axi_out_rready,
  output [31:0] io_axi_out_awaddr,
  output [7:0]  io_axi_out_awlen,
  output        io_axi_out_awvalid,
  output [63:0] io_axi_out_wdata,
  output [7:0]  io_axi_out_wstrb,
  output        io_axi_out_wvalid,
  output        io_axi_out_bready
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] state; // @[axi_arbiter.scala 18:24]
  wire [1:0] _GEN_0 = io_ifu_axi_in_arvalid ? 2'h1 : state; // @[axi_arbiter.scala 61:46 62:23 18:24]
  wire [31:0] _GEN_1 = io_ifu_axi_in_arvalid ? io_ifu_axi_in_araddr : 32'h0; // @[axi_arbiter.scala 48:16 61:46 63:28]
  wire [7:0] _GEN_2 = io_ifu_axi_in_arvalid ? io_ifu_axi_in_arlen : 8'h0; // @[axi_arbiter.scala 48:16 61:46 63:28]
  wire  _GEN_6 = io_ifu_axi_in_arvalid & io_ifu_axi_in_rready; // @[axi_arbiter.scala 48:16 61:46 63:28]
  wire [63:0] _GEN_18 = io_ifu_axi_in_arvalid ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 50:20 61:46 64:32]
  wire  _GEN_19 = io_ifu_axi_in_arvalid & io_axi_in_rlast; // @[axi_arbiter.scala 50:20 61:46 64:32]
  wire [31:0] _GEN_25 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_araddr : _GEN_1; // @[axi_arbiter.scala 57:46 59:28]
  wire [7:0] _GEN_26 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_arlen : _GEN_2; // @[axi_arbiter.scala 57:46 59:28]
  wire  _GEN_29 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_arvalid : io_ifu_axi_in_arvalid; // @[axi_arbiter.scala 57:46 59:28]
  wire  _GEN_30 = io_lsu_axi_in_arvalid | _GEN_6; // @[axi_arbiter.scala 57:46 59:28]
  wire [31:0] _GEN_31 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_awaddr : 32'h0; // @[axi_arbiter.scala 57:46 59:28]
  wire [7:0] _GEN_32 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_awlen : 8'h0; // @[axi_arbiter.scala 57:46 59:28]
  wire  _GEN_35 = io_lsu_axi_in_arvalid & io_lsu_axi_in_awvalid; // @[axi_arbiter.scala 57:46 59:28]
  wire [63:0] _GEN_36 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_wdata : 64'h0; // @[axi_arbiter.scala 57:46 59:28]
  wire [7:0] _GEN_37 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_wstrb : 8'h0; // @[axi_arbiter.scala 57:46 59:28]
  wire  _GEN_39 = io_lsu_axi_in_arvalid & io_lsu_axi_in_wvalid; // @[axi_arbiter.scala 57:46 59:28]
  wire  _GEN_40 = io_lsu_axi_in_arvalid & io_lsu_axi_in_bready; // @[axi_arbiter.scala 57:46 59:28]
  wire [63:0] _GEN_42 = io_lsu_axi_in_arvalid ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 49:20 57:46 60:32]
  wire  _GEN_43 = io_lsu_axi_in_arvalid & io_axi_in_rlast; // @[axi_arbiter.scala 49:20 57:46 60:32]
  wire  _GEN_46 = io_lsu_axi_in_arvalid & io_axi_in_wready; // @[axi_arbiter.scala 49:20 57:46 60:32]
  wire  _GEN_47 = io_lsu_axi_in_arvalid & io_axi_in_bvalid; // @[axi_arbiter.scala 49:20 57:46 60:32]
  wire [63:0] _GEN_49 = io_lsu_axi_in_arvalid ? 64'h0 : _GEN_18; // @[axi_arbiter.scala 50:20 57:46]
  wire  _GEN_50 = io_lsu_axi_in_arvalid ? 1'h0 : _GEN_19; // @[axi_arbiter.scala 50:20 57:46]
  wire  _GEN_51 = io_lsu_axi_in_arvalid ? 1'h0 : io_ifu_axi_in_arvalid; // @[axi_arbiter.scala 50:20 57:46]
  wire [31:0] _GEN_56 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_araddr : _GEN_25; // @[axi_arbiter.scala 53:40 55:28]
  wire [7:0] _GEN_57 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_arlen : _GEN_26; // @[axi_arbiter.scala 53:40 55:28]
  wire  _GEN_60 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_arvalid : _GEN_29; // @[axi_arbiter.scala 53:40 55:28]
  wire  _GEN_61 = io_lsu_axi_in_awvalid | _GEN_30; // @[axi_arbiter.scala 53:40 55:28]
  wire [31:0] _GEN_62 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_awaddr : _GEN_31; // @[axi_arbiter.scala 53:40 55:28]
  wire [7:0] _GEN_63 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_awlen : _GEN_32; // @[axi_arbiter.scala 53:40 55:28]
  wire  _GEN_66 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_awvalid : _GEN_35; // @[axi_arbiter.scala 53:40 55:28]
  wire [63:0] _GEN_67 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_wdata : _GEN_36; // @[axi_arbiter.scala 53:40 55:28]
  wire [7:0] _GEN_68 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_wstrb : _GEN_37; // @[axi_arbiter.scala 53:40 55:28]
  wire  _GEN_70 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_wvalid : _GEN_39; // @[axi_arbiter.scala 53:40 55:28]
  wire  _GEN_71 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_bready : _GEN_40; // @[axi_arbiter.scala 53:40 55:28]
  wire [63:0] _GEN_73 = io_lsu_axi_in_awvalid ? io_axi_in_rdata : _GEN_42; // @[axi_arbiter.scala 53:40 56:32]
  wire  _GEN_74 = io_lsu_axi_in_awvalid ? io_axi_in_rlast : _GEN_43; // @[axi_arbiter.scala 53:40 56:32]
  wire  _GEN_75 = io_lsu_axi_in_awvalid | io_lsu_axi_in_arvalid; // @[axi_arbiter.scala 53:40 56:32]
  wire  _GEN_77 = io_lsu_axi_in_awvalid ? io_axi_in_wready : _GEN_46; // @[axi_arbiter.scala 53:40 56:32]
  wire  _GEN_78 = io_lsu_axi_in_awvalid ? io_axi_in_bvalid : _GEN_47; // @[axi_arbiter.scala 53:40 56:32]
  wire [63:0] _GEN_80 = io_lsu_axi_in_awvalid ? 64'h0 : _GEN_49; // @[axi_arbiter.scala 50:20 53:40]
  wire  _GEN_81 = io_lsu_axi_in_awvalid ? 1'h0 : _GEN_50; // @[axi_arbiter.scala 50:20 53:40]
  wire  _GEN_82 = io_lsu_axi_in_awvalid ? 1'h0 : _GEN_51; // @[axi_arbiter.scala 50:20 53:40]
  wire [1:0] _GEN_87 = io_lsu_axi_out_rvalid & io_lsu_axi_out_rlast ? 2'h0 : state; // @[axi_arbiter.scala 77:88 78:23 18:24]
  wire [1:0] _GEN_88 = io_lsu_axi_out_bvalid & io_lsu_axi_in_bready ? 2'h0 : state; // @[axi_arbiter.scala 84:64 85:23 18:24]
  wire [31:0] _GEN_89 = 2'h3 == state ? io_lsu_axi_in_araddr : 32'h0; // @[axi_arbiter.scala 48:16 51:18 82:24]
  wire [7:0] _GEN_90 = 2'h3 == state ? io_lsu_axi_in_arlen : 8'h0; // @[axi_arbiter.scala 48:16 51:18 82:24]
  wire  _GEN_93 = 2'h3 == state & io_lsu_axi_in_arvalid; // @[axi_arbiter.scala 48:16 51:18 82:24]
  wire [31:0] _GEN_95 = 2'h3 == state ? io_lsu_axi_in_awaddr : 32'h0; // @[axi_arbiter.scala 48:16 51:18 82:24]
  wire [7:0] _GEN_96 = 2'h3 == state ? io_lsu_axi_in_awlen : 8'h0; // @[axi_arbiter.scala 48:16 51:18 82:24]
  wire  _GEN_99 = 2'h3 == state & io_lsu_axi_in_awvalid; // @[axi_arbiter.scala 48:16 51:18 82:24]
  wire [63:0] _GEN_100 = 2'h3 == state ? io_lsu_axi_in_wdata : 64'h0; // @[axi_arbiter.scala 48:16 51:18 82:24]
  wire [7:0] _GEN_101 = 2'h3 == state ? io_lsu_axi_in_wstrb : 8'h0; // @[axi_arbiter.scala 48:16 51:18 82:24]
  wire  _GEN_103 = 2'h3 == state & io_lsu_axi_in_wvalid; // @[axi_arbiter.scala 48:16 51:18 82:24]
  wire  _GEN_104 = 2'h3 == state & io_lsu_axi_in_bready; // @[axi_arbiter.scala 48:16 51:18 82:24]
  wire [63:0] _GEN_106 = 2'h3 == state ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 51:18 49:20 83:28]
  wire  _GEN_107 = 2'h3 == state & io_axi_in_rlast; // @[axi_arbiter.scala 51:18 49:20 83:28]
  wire  _GEN_110 = 2'h3 == state & io_axi_in_wready; // @[axi_arbiter.scala 51:18 49:20 83:28]
  wire  _GEN_111 = 2'h3 == state & io_axi_in_bvalid; // @[axi_arbiter.scala 51:18 49:20 83:28]
  wire [1:0] _GEN_112 = 2'h3 == state ? _GEN_88 : state; // @[axi_arbiter.scala 51:18 18:24]
  wire [31:0] _GEN_113 = 2'h2 == state ? io_lsu_axi_in_araddr : _GEN_89; // @[axi_arbiter.scala 51:18 75:24]
  wire [7:0] _GEN_114 = 2'h2 == state ? io_lsu_axi_in_arlen : _GEN_90; // @[axi_arbiter.scala 51:18 75:24]
  wire  _GEN_117 = 2'h2 == state ? io_lsu_axi_in_arvalid : _GEN_93; // @[axi_arbiter.scala 51:18 75:24]
  wire  _GEN_118 = 2'h2 == state | 2'h3 == state; // @[axi_arbiter.scala 51:18 75:24]
  wire [31:0] _GEN_119 = 2'h2 == state ? io_lsu_axi_in_awaddr : _GEN_95; // @[axi_arbiter.scala 51:18 75:24]
  wire [7:0] _GEN_120 = 2'h2 == state ? io_lsu_axi_in_awlen : _GEN_96; // @[axi_arbiter.scala 51:18 75:24]
  wire  _GEN_123 = 2'h2 == state ? io_lsu_axi_in_awvalid : _GEN_99; // @[axi_arbiter.scala 51:18 75:24]
  wire [63:0] _GEN_124 = 2'h2 == state ? io_lsu_axi_in_wdata : _GEN_100; // @[axi_arbiter.scala 51:18 75:24]
  wire [7:0] _GEN_125 = 2'h2 == state ? io_lsu_axi_in_wstrb : _GEN_101; // @[axi_arbiter.scala 51:18 75:24]
  wire  _GEN_127 = 2'h2 == state ? io_lsu_axi_in_wvalid : _GEN_103; // @[axi_arbiter.scala 51:18 75:24]
  wire  _GEN_128 = 2'h2 == state ? io_lsu_axi_in_bready : _GEN_104; // @[axi_arbiter.scala 51:18 75:24]
  wire [63:0] _GEN_130 = 2'h2 == state ? io_axi_in_rdata : _GEN_106; // @[axi_arbiter.scala 51:18 76:28]
  wire  _GEN_131 = 2'h2 == state ? io_axi_in_rlast : _GEN_107; // @[axi_arbiter.scala 51:18 76:28]
  wire  _GEN_134 = 2'h2 == state ? io_axi_in_wready : _GEN_110; // @[axi_arbiter.scala 51:18 76:28]
  wire  _GEN_135 = 2'h2 == state ? io_axi_in_bvalid : _GEN_111; // @[axi_arbiter.scala 51:18 76:28]
  wire [31:0] _GEN_137 = 2'h1 == state ? io_ifu_axi_in_araddr : _GEN_113; // @[axi_arbiter.scala 51:18 68:24]
  wire [7:0] _GEN_138 = 2'h1 == state ? io_ifu_axi_in_arlen : _GEN_114; // @[axi_arbiter.scala 51:18 68:24]
  wire  _GEN_141 = 2'h1 == state ? io_ifu_axi_in_arvalid : _GEN_117; // @[axi_arbiter.scala 51:18 68:24]
  wire  _GEN_142 = 2'h1 == state ? io_ifu_axi_in_rready : _GEN_118; // @[axi_arbiter.scala 51:18 68:24]
  wire [31:0] _GEN_143 = 2'h1 == state ? 32'h0 : _GEN_119; // @[axi_arbiter.scala 51:18 68:24]
  wire [7:0] _GEN_144 = 2'h1 == state ? 8'h0 : _GEN_120; // @[axi_arbiter.scala 51:18 68:24]
  wire  _GEN_147 = 2'h1 == state ? 1'h0 : _GEN_123; // @[axi_arbiter.scala 51:18 68:24]
  wire [63:0] _GEN_148 = 2'h1 == state ? 64'h0 : _GEN_124; // @[axi_arbiter.scala 51:18 68:24]
  wire [7:0] _GEN_149 = 2'h1 == state ? 8'h0 : _GEN_125; // @[axi_arbiter.scala 51:18 68:24]
  wire  _GEN_151 = 2'h1 == state ? 1'h0 : _GEN_127; // @[axi_arbiter.scala 51:18 68:24]
  wire  _GEN_152 = 2'h1 == state ? 1'h0 : _GEN_128; // @[axi_arbiter.scala 51:18 68:24]
  wire [63:0] _GEN_154 = 2'h1 == state ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 51:18 50:20 69:28]
  wire  _GEN_155 = 2'h1 == state & io_axi_in_rlast; // @[axi_arbiter.scala 51:18 50:20 69:28]
  wire [63:0] _GEN_162 = 2'h1 == state ? 64'h0 : _GEN_130; // @[axi_arbiter.scala 51:18 49:20]
  wire  _GEN_163 = 2'h1 == state ? 1'h0 : _GEN_131; // @[axi_arbiter.scala 51:18 49:20]
  wire  _GEN_164 = 2'h1 == state ? 1'h0 : _GEN_118; // @[axi_arbiter.scala 51:18 49:20]
  wire  _GEN_166 = 2'h1 == state ? 1'h0 : _GEN_134; // @[axi_arbiter.scala 51:18 49:20]
  wire  _GEN_167 = 2'h1 == state ? 1'h0 : _GEN_135; // @[axi_arbiter.scala 51:18 49:20]
  assign io_ifu_axi_out_rdata = 2'h0 == state ? _GEN_80 : _GEN_154; // @[axi_arbiter.scala 51:18]
  assign io_ifu_axi_out_rlast = 2'h0 == state ? _GEN_81 : _GEN_155; // @[axi_arbiter.scala 51:18]
  assign io_ifu_axi_out_rvalid = 2'h0 == state ? _GEN_82 : 2'h1 == state; // @[axi_arbiter.scala 51:18]
  assign io_lsu_axi_out_rdata = 2'h0 == state ? _GEN_73 : _GEN_162; // @[axi_arbiter.scala 51:18]
  assign io_lsu_axi_out_rlast = 2'h0 == state ? _GEN_74 : _GEN_163; // @[axi_arbiter.scala 51:18]
  assign io_lsu_axi_out_rvalid = 2'h0 == state ? _GEN_75 : _GEN_164; // @[axi_arbiter.scala 51:18]
  assign io_lsu_axi_out_wready = 2'h0 == state ? _GEN_77 : _GEN_166; // @[axi_arbiter.scala 51:18]
  assign io_lsu_axi_out_bvalid = 2'h0 == state ? _GEN_78 : _GEN_167; // @[axi_arbiter.scala 51:18]
  assign io_axi_out_araddr = 2'h0 == state ? _GEN_56 : _GEN_137; // @[axi_arbiter.scala 51:18]
  assign io_axi_out_arlen = 2'h0 == state ? _GEN_57 : _GEN_138; // @[axi_arbiter.scala 51:18]
  assign io_axi_out_arvalid = 2'h0 == state ? _GEN_60 : _GEN_141; // @[axi_arbiter.scala 51:18]
  assign io_axi_out_rready = 2'h0 == state ? _GEN_61 : _GEN_142; // @[axi_arbiter.scala 51:18]
  assign io_axi_out_awaddr = 2'h0 == state ? _GEN_62 : _GEN_143; // @[axi_arbiter.scala 51:18]
  assign io_axi_out_awlen = 2'h0 == state ? _GEN_63 : _GEN_144; // @[axi_arbiter.scala 51:18]
  assign io_axi_out_awvalid = 2'h0 == state ? _GEN_66 : _GEN_147; // @[axi_arbiter.scala 51:18]
  assign io_axi_out_wdata = 2'h0 == state ? _GEN_67 : _GEN_148; // @[axi_arbiter.scala 51:18]
  assign io_axi_out_wstrb = 2'h0 == state ? _GEN_68 : _GEN_149; // @[axi_arbiter.scala 51:18]
  assign io_axi_out_wvalid = 2'h0 == state ? _GEN_70 : _GEN_151; // @[axi_arbiter.scala 51:18]
  assign io_axi_out_bready = 2'h0 == state ? _GEN_71 : _GEN_152; // @[axi_arbiter.scala 51:18]
  always @(posedge clock) begin
    if (reset) begin // @[axi_arbiter.scala 18:24]
      state <= 2'h0; // @[axi_arbiter.scala 18:24]
    end else if (2'h0 == state) begin // @[axi_arbiter.scala 51:18]
      if (io_lsu_axi_in_awvalid) begin // @[axi_arbiter.scala 53:40]
        state <= 2'h3; // @[axi_arbiter.scala 54:23]
      end else if (io_lsu_axi_in_arvalid) begin // @[axi_arbiter.scala 57:46]
        state <= 2'h2; // @[axi_arbiter.scala 58:23]
      end else begin
        state <= _GEN_0;
      end
    end else if (2'h1 == state) begin // @[axi_arbiter.scala 51:18]
      if (io_ifu_axi_out_rvalid & io_ifu_axi_in_rready & io_ifu_axi_out_rlast) begin // @[axi_arbiter.scala 70:88]
        state <= 2'h0; // @[axi_arbiter.scala 71:23]
      end
    end else if (2'h2 == state) begin // @[axi_arbiter.scala 51:18]
      state <= _GEN_87;
    end else begin
      state <= _GEN_112;
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
  state = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module I_CACHE(
  input         clock,
  input         reset,
  input  [31:0] io_from_ifu_araddr,
  input         io_from_ifu_arvalid,
  input         io_from_ifu_rready,
  output        io_to_ifu_arready,
  output [63:0] io_to_ifu_rdata,
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
`ifdef RANDOMIZE_MEM_INIT
  reg [127:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_REG_INIT
  reg [127:0] cacheLine [0:255]; // @[i_cache.scala 18:24]
  wire  cacheLine_rdata_MPORT_en; // @[i_cache.scala 18:24]
  wire [7:0] cacheLine_rdata_MPORT_addr; // @[i_cache.scala 18:24]
  wire [127:0] cacheLine_rdata_MPORT_data; // @[i_cache.scala 18:24]
  wire  cacheLine_rdata_MPORT_1_en; // @[i_cache.scala 18:24]
  wire [7:0] cacheLine_rdata_MPORT_1_addr; // @[i_cache.scala 18:24]
  wire [127:0] cacheLine_rdata_MPORT_1_data; // @[i_cache.scala 18:24]
  wire  cacheLine_rdata_MPORT_2_en; // @[i_cache.scala 18:24]
  wire [7:0] cacheLine_rdata_MPORT_2_addr; // @[i_cache.scala 18:24]
  wire [127:0] cacheLine_rdata_MPORT_2_data; // @[i_cache.scala 18:24]
  wire  cacheLine_rdata_MPORT_3_en; // @[i_cache.scala 18:24]
  wire [7:0] cacheLine_rdata_MPORT_3_addr; // @[i_cache.scala 18:24]
  wire [127:0] cacheLine_rdata_MPORT_3_data; // @[i_cache.scala 18:24]
  wire [127:0] cacheLine_MPORT_data; // @[i_cache.scala 18:24]
  wire [7:0] cacheLine_MPORT_addr; // @[i_cache.scala 18:24]
  wire  cacheLine_MPORT_mask; // @[i_cache.scala 18:24]
  wire  cacheLine_MPORT_en; // @[i_cache.scala 18:24]
  wire [127:0] cacheLine_MPORT_5_data; // @[i_cache.scala 18:24]
  wire [7:0] cacheLine_MPORT_5_addr; // @[i_cache.scala 18:24]
  wire  cacheLine_MPORT_5_mask; // @[i_cache.scala 18:24]
  wire  cacheLine_MPORT_5_en; // @[i_cache.scala 18:24]
  reg  validMem [0:255]; // @[i_cache.scala 19:23]
  wire  validMem_valid_0_MPORT_en; // @[i_cache.scala 19:23]
  wire [7:0] validMem_valid_0_MPORT_addr; // @[i_cache.scala 19:23]
  wire  validMem_valid_0_MPORT_data; // @[i_cache.scala 19:23]
  wire  validMem_valid_1_MPORT_en; // @[i_cache.scala 19:23]
  wire [7:0] validMem_valid_1_MPORT_addr; // @[i_cache.scala 19:23]
  wire  validMem_valid_1_MPORT_data; // @[i_cache.scala 19:23]
  wire  validMem_valid_2_MPORT_en; // @[i_cache.scala 19:23]
  wire [7:0] validMem_valid_2_MPORT_addr; // @[i_cache.scala 19:23]
  wire  validMem_valid_2_MPORT_data; // @[i_cache.scala 19:23]
  wire  validMem_valid_3_MPORT_en; // @[i_cache.scala 19:23]
  wire [7:0] validMem_valid_3_MPORT_addr; // @[i_cache.scala 19:23]
  wire  validMem_valid_3_MPORT_data; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_2_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_2_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_2_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_2_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_7_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_7_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_7_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_7_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_10_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_10_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_10_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_10_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_11_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_11_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_11_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_11_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_12_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_12_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_12_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_12_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_13_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_13_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_13_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_13_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_14_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_14_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_14_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_14_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_15_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_15_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_15_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_15_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_16_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_16_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_16_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_16_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_17_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_17_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_17_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_17_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_18_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_18_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_18_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_18_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_19_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_19_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_19_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_19_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_20_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_20_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_20_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_20_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_21_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_21_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_21_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_21_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_22_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_22_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_22_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_22_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_23_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_23_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_23_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_23_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_24_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_24_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_24_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_24_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_25_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_25_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_25_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_25_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_26_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_26_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_26_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_26_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_27_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_27_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_27_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_27_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_28_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_28_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_28_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_28_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_29_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_29_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_29_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_29_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_30_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_30_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_30_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_30_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_31_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_31_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_31_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_31_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_32_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_32_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_32_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_32_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_33_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_33_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_33_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_33_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_34_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_34_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_34_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_34_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_35_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_35_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_35_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_35_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_36_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_36_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_36_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_36_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_37_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_37_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_37_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_37_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_38_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_38_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_38_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_38_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_39_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_39_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_39_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_39_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_40_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_40_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_40_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_40_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_41_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_41_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_41_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_41_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_42_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_42_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_42_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_42_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_43_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_43_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_43_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_43_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_44_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_44_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_44_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_44_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_45_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_45_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_45_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_45_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_46_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_46_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_46_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_46_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_47_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_47_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_47_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_47_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_48_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_48_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_48_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_48_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_49_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_49_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_49_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_49_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_50_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_50_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_50_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_50_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_51_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_51_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_51_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_51_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_52_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_52_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_52_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_52_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_53_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_53_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_53_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_53_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_54_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_54_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_54_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_54_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_55_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_55_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_55_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_55_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_56_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_56_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_56_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_56_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_57_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_57_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_57_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_57_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_58_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_58_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_58_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_58_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_59_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_59_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_59_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_59_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_60_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_60_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_60_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_60_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_61_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_61_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_61_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_61_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_62_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_62_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_62_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_62_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_63_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_63_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_63_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_63_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_64_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_64_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_64_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_64_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_65_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_65_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_65_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_65_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_66_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_66_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_66_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_66_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_67_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_67_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_67_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_67_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_68_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_68_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_68_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_68_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_69_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_69_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_69_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_69_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_70_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_70_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_70_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_70_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_71_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_71_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_71_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_71_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_72_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_72_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_72_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_72_en; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_73_data; // @[i_cache.scala 19:23]
  wire [7:0] validMem_MPORT_73_addr; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_73_mask; // @[i_cache.scala 19:23]
  wire  validMem_MPORT_73_en; // @[i_cache.scala 19:23]
  reg [31:0] tagMem [0:255]; // @[i_cache.scala 21:21]
  wire  tagMem_tagMatch_0_MPORT_en; // @[i_cache.scala 21:21]
  wire [7:0] tagMem_tagMatch_0_MPORT_addr; // @[i_cache.scala 21:21]
  wire [31:0] tagMem_tagMatch_0_MPORT_data; // @[i_cache.scala 21:21]
  wire  tagMem_tagMatch_1_MPORT_en; // @[i_cache.scala 21:21]
  wire [7:0] tagMem_tagMatch_1_MPORT_addr; // @[i_cache.scala 21:21]
  wire [31:0] tagMem_tagMatch_1_MPORT_data; // @[i_cache.scala 21:21]
  wire  tagMem_tagMatch_2_MPORT_en; // @[i_cache.scala 21:21]
  wire [7:0] tagMem_tagMatch_2_MPORT_addr; // @[i_cache.scala 21:21]
  wire [31:0] tagMem_tagMatch_2_MPORT_data; // @[i_cache.scala 21:21]
  wire  tagMem_tagMatch_3_MPORT_en; // @[i_cache.scala 21:21]
  wire [7:0] tagMem_tagMatch_3_MPORT_addr; // @[i_cache.scala 21:21]
  wire [31:0] tagMem_tagMatch_3_MPORT_data; // @[i_cache.scala 21:21]
  wire [31:0] tagMem_MPORT_1_data; // @[i_cache.scala 21:21]
  wire [7:0] tagMem_MPORT_1_addr; // @[i_cache.scala 21:21]
  wire  tagMem_MPORT_1_mask; // @[i_cache.scala 21:21]
  wire  tagMem_MPORT_1_en; // @[i_cache.scala 21:21]
  wire [31:0] tagMem_MPORT_6_data; // @[i_cache.scala 21:21]
  wire [7:0] tagMem_MPORT_6_addr; // @[i_cache.scala 21:21]
  wire  tagMem_MPORT_6_mask; // @[i_cache.scala 21:21]
  wire  tagMem_MPORT_6_en; // @[i_cache.scala 21:21]
  reg [7:0] quene [0:63]; // @[i_cache.scala 79:20]
  wire  quene_replace_way_MPORT_en; // @[i_cache.scala 79:20]
  wire [5:0] quene_replace_way_MPORT_addr; // @[i_cache.scala 79:20]
  wire [7:0] quene_replace_way_MPORT_data; // @[i_cache.scala 79:20]
  wire  quene_MPORT_4_en; // @[i_cache.scala 79:20]
  wire [5:0] quene_MPORT_4_addr; // @[i_cache.scala 79:20]
  wire [7:0] quene_MPORT_4_data; // @[i_cache.scala 79:20]
  wire  quene_MPORT_9_en; // @[i_cache.scala 79:20]
  wire [5:0] quene_MPORT_9_addr; // @[i_cache.scala 79:20]
  wire [7:0] quene_MPORT_9_data; // @[i_cache.scala 79:20]
  wire [7:0] quene_MPORT_3_data; // @[i_cache.scala 79:20]
  wire [5:0] quene_MPORT_3_addr; // @[i_cache.scala 79:20]
  wire  quene_MPORT_3_mask; // @[i_cache.scala 79:20]
  wire  quene_MPORT_3_en; // @[i_cache.scala 79:20]
  wire [7:0] quene_MPORT_8_data; // @[i_cache.scala 79:20]
  wire [5:0] quene_MPORT_8_addr; // @[i_cache.scala 79:20]
  wire  quene_MPORT_8_mask; // @[i_cache.scala 79:20]
  wire  quene_MPORT_8_en; // @[i_cache.scala 79:20]
  reg [31:0] addr; // @[i_cache.scala 36:23]
  wire [3:0] offset = addr[3:0]; // @[i_cache.scala 37:22]
  wire [5:0] index = addr[9:4]; // @[i_cache.scala 38:21]
  wire [21:0] tag = addr[31:10]; // @[i_cache.scala 39:19]
  wire [7:0] _GEN_463 = {{2'd0}, index}; // @[i_cache.scala 44:48]
  wire [8:0] _valid_0_T_1 = {{1'd0}, _GEN_463}; // @[i_cache.scala 44:48]
  wire [8:0] _GEN_473 = {{3'd0}, index}; // @[i_cache.scala 44:48]
  wire [8:0] _valid_2_T_2 = 9'h80 + _GEN_473; // @[i_cache.scala 44:48]
  wire [8:0] _valid_3_T_2 = 9'hc0 + _GEN_473; // @[i_cache.scala 44:48]
  wire  valid_0 = validMem_valid_0_MPORT_data; // @[i_cache.scala 42:21 44:18]
  wire  valid_1 = validMem_valid_1_MPORT_data; // @[i_cache.scala 42:21 44:18]
  wire  valid_2 = validMem_valid_2_MPORT_data; // @[i_cache.scala 42:21 44:18]
  wire  valid_3 = validMem_valid_3_MPORT_data; // @[i_cache.scala 42:21 44:18]
  wire  allvalid = valid_0 & valid_1 & valid_2 & valid_3; // @[i_cache.scala 46:35]
  wire  _foundUnvalidIndex_T = ~valid_0; // @[i_cache.scala 48:10]
  wire  _foundUnvalidIndex_T_1 = ~valid_1; // @[i_cache.scala 49:10]
  wire  _foundUnvalidIndex_T_2 = ~valid_2; // @[i_cache.scala 50:10]
  wire  _foundUnvalidIndex_T_3 = ~valid_3; // @[i_cache.scala 51:10]
  wire [1:0] _foundUnvalidIndex_T_4 = _foundUnvalidIndex_T_3 ? 2'h3 : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] _foundUnvalidIndex_T_5 = _foundUnvalidIndex_T_2 ? 2'h2 : _foundUnvalidIndex_T_4; // @[Mux.scala 101:16]
  wire [1:0] _foundUnvalidIndex_T_6 = _foundUnvalidIndex_T_1 ? 2'h1 : _foundUnvalidIndex_T_5; // @[Mux.scala 101:16]
  wire [1:0] foundUnvalidIndex = _foundUnvalidIndex_T ? 2'h0 : _foundUnvalidIndex_T_6; // @[Mux.scala 101:16]
  wire [7:0] _GEN_475 = {foundUnvalidIndex, 6'h0}; // @[i_cache.scala 53:43]
  wire [8:0] _unvalidIndex_T = {{1'd0}, _GEN_475}; // @[i_cache.scala 53:43]
  wire [8:0] unvalidIndex = _unvalidIndex_T + _GEN_473; // @[i_cache.scala 53:51]
  wire [31:0] _GEN_478 = {{10'd0}, tag}; // @[i_cache.scala 58:71]
  wire  tagMatch_0 = valid_0 & tagMem_tagMatch_0_MPORT_data == _GEN_478; // @[i_cache.scala 58:33]
  wire  tagMatch_1 = valid_1 & tagMem_tagMatch_1_MPORT_data == _GEN_478; // @[i_cache.scala 58:33]
  wire  tagMatch_2 = valid_2 & tagMem_tagMatch_2_MPORT_data == _GEN_478; // @[i_cache.scala 58:33]
  wire  tagMatch_3 = valid_3 & tagMem_tagMatch_3_MPORT_data == _GEN_478; // @[i_cache.scala 58:33]
  wire  anyMatch = tagMatch_0 | tagMatch_1 | tagMatch_2 | tagMatch_3; // @[i_cache.scala 60:38]
  wire [1:0] _foundtagIndex_T = tagMatch_3 ? 2'h3 : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] _foundtagIndex_T_1 = tagMatch_2 ? 2'h2 : _foundtagIndex_T; // @[Mux.scala 101:16]
  wire [1:0] _foundtagIndex_T_2 = tagMatch_1 ? 2'h1 : _foundtagIndex_T_1; // @[Mux.scala 101:16]
  wire [1:0] foundtagIndex = tagMatch_0 ? 2'h0 : _foundtagIndex_T_2; // @[Mux.scala 101:16]
  wire [7:0] _GEN_485 = {foundtagIndex, 6'h0}; // @[i_cache.scala 67:35]
  wire [8:0] _tagIndex_T = {{1'd0}, _GEN_485}; // @[i_cache.scala 67:35]
  wire [8:0] tagIndex = _tagIndex_T + _GEN_473; // @[i_cache.scala 67:43]
  reg [63:0] receive_data_0; // @[i_cache.scala 77:31]
  reg [63:0] receive_data_1; // @[i_cache.scala 77:31]
  reg [2:0] receive_num; // @[i_cache.scala 78:30]
  wire [1:0] replace_way = quene_replace_way_MPORT_data[7:6]; // @[i_cache.scala 81:35]
  wire [7:0] _GEN_487 = {replace_way, 6'h0}; // @[i_cache.scala 82:34]
  wire [8:0] _replaceIndex_T = {{1'd0}, _GEN_487}; // @[i_cache.scala 82:34]
  wire [8:0] _replaceIndex_T_2 = _replaceIndex_T + _GEN_473; // @[i_cache.scala 82:42]
  reg [2:0] state; // @[i_cache.scala 91:24]
  wire  _T = 3'h0 == state; // @[i_cache.scala 95:18]
  wire [2:0] _GEN_4 = io_from_ifu_rready ? 3'h0 : state; // @[i_cache.scala 106:41 107:27 91:24]
  wire [63:0] _GEN_7 = ~receive_num[0] ? io_from_axi_rdata : receive_data_0; // @[i_cache.scala 116:{43,43} 77:31]
  wire [63:0] _GEN_8 = receive_num[0] ? io_from_axi_rdata : receive_data_1; // @[i_cache.scala 116:{43,43} 77:31]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[i_cache.scala 117:44]
  wire [2:0] _GEN_9 = io_from_axi_rlast ? 3'h3 : state; // @[i_cache.scala 118:40 119:27 91:24]
  wire [63:0] _GEN_10 = io_from_axi_rvalid ? _GEN_7 : receive_data_0; // @[i_cache.scala 115:37 77:31]
  wire [63:0] _GEN_11 = io_from_axi_rvalid ? _GEN_8 : receive_data_1; // @[i_cache.scala 115:37 77:31]
  wire [2:0] _GEN_12 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[i_cache.scala 115:37 117:29 78:30]
  wire [2:0] _GEN_13 = io_from_axi_rvalid ? _GEN_9 : state; // @[i_cache.scala 115:37 91:24]
  wire  _T_5 = ~allvalid; // @[i_cache.scala 125:18]
  wire [9:0] _GEN_489 = {quene_MPORT_4_data, 2'h0}; // @[i_cache.scala 129:47]
  wire [10:0] _T_10 = {{1'd0}, _GEN_489}; // @[i_cache.scala 129:47]
  wire [10:0] _GEN_490 = {{9'd0}, foundUnvalidIndex}; // @[i_cache.scala 129:55]
  wire [10:0] _T_11 = _T_10 | _GEN_490; // @[i_cache.scala 129:55]
  wire [31:0] replaceIndex = {{23'd0}, _replaceIndex_T_2}; // @[i_cache.scala 69:28 82:18]
  wire [9:0] _GEN_491 = {quene_MPORT_9_data, 2'h0}; // @[i_cache.scala 134:47]
  wire [10:0] _T_16 = {{1'd0}, _GEN_491}; // @[i_cache.scala 134:47]
  wire [10:0] _GEN_492 = {{9'd0}, replace_way}; // @[i_cache.scala 134:55]
  wire [10:0] _T_17 = _T_16 | _GEN_492; // @[i_cache.scala 134:55]
  wire  _GEN_26 = ~allvalid ? 1'h0 : 1'h1; // @[i_cache.scala 125:28 18:24 131:26]
  wire [2:0] _GEN_100 = 3'h4 == state ? 3'h0 : state; // @[i_cache.scala 141:18 95:18 91:24]
  wire [2:0] _GEN_101 = 3'h3 == state ? 3'h1 : _GEN_100; // @[i_cache.scala 95:18 124:19]
  wire  _GEN_124 = 3'h3 == state ? 1'h0 : 3'h4 == state; // @[i_cache.scala 95:18 19:23]
  wire  _GEN_194 = 3'h2 == state ? 1'h0 : 3'h3 == state & _T_5; // @[i_cache.scala 95:18 18:24]
  wire  _GEN_204 = 3'h2 == state ? 1'h0 : 3'h3 == state & _GEN_26; // @[i_cache.scala 95:18 18:24]
  wire  _GEN_214 = 3'h2 == state ? 1'h0 : _GEN_124; // @[i_cache.scala 95:18 19:23]
  wire  _GEN_284 = 3'h1 == state ? 1'h0 : _GEN_194; // @[i_cache.scala 95:18 18:24]
  wire  _GEN_294 = 3'h1 == state ? 1'h0 : _GEN_204; // @[i_cache.scala 95:18 18:24]
  wire  _GEN_304 = 3'h1 == state ? 1'h0 : _GEN_214; // @[i_cache.scala 95:18 19:23]
  wire [31:0] _rdata_T_10 = 2'h1 == offset[3:2] ? cacheLine_rdata_MPORT_1_data[63:32] : cacheLine_rdata_MPORT_data[31:0]
    ; // @[Mux.scala 81:58]
  wire [31:0] _rdata_T_12 = 2'h2 == offset[3:2] ? cacheLine_rdata_MPORT_2_data[95:64] : _rdata_T_10; // @[Mux.scala 81:58]
  wire [31:0] _rdata_T_14 = 2'h3 == offset[3:2] ? cacheLine_rdata_MPORT_3_data[127:96] : _rdata_T_12; // @[Mux.scala 81:58]
  wire  _T_20 = state == 3'h2; // @[i_cache.scala 175:21]
  wire [63:0] _GEN_493 = {{32'd0}, addr}; // @[i_cache.scala 184:35]
  wire [63:0] _io_to_axi_araddr_T = _GEN_493 & 64'hfffffffffffffff0; // @[i_cache.scala 184:35]
  wire  _GEN_460 = state == 3'h2 ? 1'h0 : state == 3'h0; // @[i_cache.scala 175:29 177:27 201:27]
  wire [63:0] _GEN_462 = state == 3'h2 ? _io_to_axi_araddr_T : {{32'd0}, addr}; // @[i_cache.scala 175:29 184:26 208:26]
  wire  _GEN_464 = state == 3'h2 | io_from_ifu_rready; // @[i_cache.scala 175:29 188:26 209:26]
  wire  _GEN_465 = state == 3'h1 ? 1'h0 : _T_20; // @[i_cache.scala 151:25 152:27]
  wire [63:0] _GEN_466 = state == 3'h1 ? {{32'd0}, addr} : _GEN_462; // @[i_cache.scala 151:25 153:26]
  wire [63:0] rdata = {{32'd0}, _rdata_T_14}; // @[i_cache.scala 144:21 145:11]
  assign cacheLine_rdata_MPORT_en = 1'h1;
  assign cacheLine_rdata_MPORT_addr = tagIndex[7:0];
  assign cacheLine_rdata_MPORT_data = cacheLine[cacheLine_rdata_MPORT_addr]; // @[i_cache.scala 18:24]
  assign cacheLine_rdata_MPORT_1_en = 1'h1;
  assign cacheLine_rdata_MPORT_1_addr = tagIndex[7:0];
  assign cacheLine_rdata_MPORT_1_data = cacheLine[cacheLine_rdata_MPORT_1_addr]; // @[i_cache.scala 18:24]
  assign cacheLine_rdata_MPORT_2_en = 1'h1;
  assign cacheLine_rdata_MPORT_2_addr = tagIndex[7:0];
  assign cacheLine_rdata_MPORT_2_data = cacheLine[cacheLine_rdata_MPORT_2_addr]; // @[i_cache.scala 18:24]
  assign cacheLine_rdata_MPORT_3_en = 1'h1;
  assign cacheLine_rdata_MPORT_3_addr = tagIndex[7:0];
  assign cacheLine_rdata_MPORT_3_data = cacheLine[cacheLine_rdata_MPORT_3_addr]; // @[i_cache.scala 18:24]
  assign cacheLine_MPORT_data = {receive_data_1,receive_data_0};
  assign cacheLine_MPORT_addr = unvalidIndex[7:0];
  assign cacheLine_MPORT_mask = 1'h1;
  assign cacheLine_MPORT_en = _T ? 1'h0 : _GEN_284;
  assign cacheLine_MPORT_5_data = {receive_data_1,receive_data_0};
  assign cacheLine_MPORT_5_addr = replaceIndex[7:0];
  assign cacheLine_MPORT_5_mask = 1'h1;
  assign cacheLine_MPORT_5_en = _T ? 1'h0 : _GEN_294;
  assign validMem_valid_0_MPORT_en = 1'h1;
  assign validMem_valid_0_MPORT_addr = _valid_0_T_1[7:0];
  assign validMem_valid_0_MPORT_data = validMem[validMem_valid_0_MPORT_addr]; // @[i_cache.scala 19:23]
  assign validMem_valid_1_MPORT_en = 1'h1;
  assign validMem_valid_1_MPORT_addr = 8'h40 + _GEN_463;
  assign validMem_valid_1_MPORT_data = validMem[validMem_valid_1_MPORT_addr]; // @[i_cache.scala 19:23]
  assign validMem_valid_2_MPORT_en = 1'h1;
  assign validMem_valid_2_MPORT_addr = _valid_2_T_2[7:0];
  assign validMem_valid_2_MPORT_data = validMem[validMem_valid_2_MPORT_addr]; // @[i_cache.scala 19:23]
  assign validMem_valid_3_MPORT_en = 1'h1;
  assign validMem_valid_3_MPORT_addr = _valid_3_T_2[7:0];
  assign validMem_valid_3_MPORT_data = validMem[validMem_valid_3_MPORT_addr]; // @[i_cache.scala 19:23]
  assign validMem_MPORT_2_data = 1'h1;
  assign validMem_MPORT_2_addr = unvalidIndex[7:0];
  assign validMem_MPORT_2_mask = 1'h1;
  assign validMem_MPORT_2_en = _T ? 1'h0 : _GEN_284;
  assign validMem_MPORT_7_data = 1'h1;
  assign validMem_MPORT_7_addr = replaceIndex[7:0];
  assign validMem_MPORT_7_mask = 1'h1;
  assign validMem_MPORT_7_en = _T ? 1'h0 : _GEN_294;
  assign validMem_MPORT_10_data = 1'h0;
  assign validMem_MPORT_10_addr = 8'h0;
  assign validMem_MPORT_10_mask = 1'h1;
  assign validMem_MPORT_10_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_11_data = 1'h0;
  assign validMem_MPORT_11_addr = 8'h1;
  assign validMem_MPORT_11_mask = 1'h1;
  assign validMem_MPORT_11_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_12_data = 1'h0;
  assign validMem_MPORT_12_addr = 8'h2;
  assign validMem_MPORT_12_mask = 1'h1;
  assign validMem_MPORT_12_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_13_data = 1'h0;
  assign validMem_MPORT_13_addr = 8'h3;
  assign validMem_MPORT_13_mask = 1'h1;
  assign validMem_MPORT_13_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_14_data = 1'h0;
  assign validMem_MPORT_14_addr = 8'h4;
  assign validMem_MPORT_14_mask = 1'h1;
  assign validMem_MPORT_14_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_15_data = 1'h0;
  assign validMem_MPORT_15_addr = 8'h5;
  assign validMem_MPORT_15_mask = 1'h1;
  assign validMem_MPORT_15_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_16_data = 1'h0;
  assign validMem_MPORT_16_addr = 8'h6;
  assign validMem_MPORT_16_mask = 1'h1;
  assign validMem_MPORT_16_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_17_data = 1'h0;
  assign validMem_MPORT_17_addr = 8'h7;
  assign validMem_MPORT_17_mask = 1'h1;
  assign validMem_MPORT_17_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_18_data = 1'h0;
  assign validMem_MPORT_18_addr = 8'h8;
  assign validMem_MPORT_18_mask = 1'h1;
  assign validMem_MPORT_18_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_19_data = 1'h0;
  assign validMem_MPORT_19_addr = 8'h9;
  assign validMem_MPORT_19_mask = 1'h1;
  assign validMem_MPORT_19_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_20_data = 1'h0;
  assign validMem_MPORT_20_addr = 8'ha;
  assign validMem_MPORT_20_mask = 1'h1;
  assign validMem_MPORT_20_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_21_data = 1'h0;
  assign validMem_MPORT_21_addr = 8'hb;
  assign validMem_MPORT_21_mask = 1'h1;
  assign validMem_MPORT_21_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_22_data = 1'h0;
  assign validMem_MPORT_22_addr = 8'hc;
  assign validMem_MPORT_22_mask = 1'h1;
  assign validMem_MPORT_22_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_23_data = 1'h0;
  assign validMem_MPORT_23_addr = 8'hd;
  assign validMem_MPORT_23_mask = 1'h1;
  assign validMem_MPORT_23_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_24_data = 1'h0;
  assign validMem_MPORT_24_addr = 8'he;
  assign validMem_MPORT_24_mask = 1'h1;
  assign validMem_MPORT_24_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_25_data = 1'h0;
  assign validMem_MPORT_25_addr = 8'hf;
  assign validMem_MPORT_25_mask = 1'h1;
  assign validMem_MPORT_25_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_26_data = 1'h0;
  assign validMem_MPORT_26_addr = 8'h10;
  assign validMem_MPORT_26_mask = 1'h1;
  assign validMem_MPORT_26_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_27_data = 1'h0;
  assign validMem_MPORT_27_addr = 8'h11;
  assign validMem_MPORT_27_mask = 1'h1;
  assign validMem_MPORT_27_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_28_data = 1'h0;
  assign validMem_MPORT_28_addr = 8'h12;
  assign validMem_MPORT_28_mask = 1'h1;
  assign validMem_MPORT_28_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_29_data = 1'h0;
  assign validMem_MPORT_29_addr = 8'h13;
  assign validMem_MPORT_29_mask = 1'h1;
  assign validMem_MPORT_29_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_30_data = 1'h0;
  assign validMem_MPORT_30_addr = 8'h14;
  assign validMem_MPORT_30_mask = 1'h1;
  assign validMem_MPORT_30_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_31_data = 1'h0;
  assign validMem_MPORT_31_addr = 8'h15;
  assign validMem_MPORT_31_mask = 1'h1;
  assign validMem_MPORT_31_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_32_data = 1'h0;
  assign validMem_MPORT_32_addr = 8'h16;
  assign validMem_MPORT_32_mask = 1'h1;
  assign validMem_MPORT_32_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_33_data = 1'h0;
  assign validMem_MPORT_33_addr = 8'h17;
  assign validMem_MPORT_33_mask = 1'h1;
  assign validMem_MPORT_33_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_34_data = 1'h0;
  assign validMem_MPORT_34_addr = 8'h18;
  assign validMem_MPORT_34_mask = 1'h1;
  assign validMem_MPORT_34_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_35_data = 1'h0;
  assign validMem_MPORT_35_addr = 8'h19;
  assign validMem_MPORT_35_mask = 1'h1;
  assign validMem_MPORT_35_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_36_data = 1'h0;
  assign validMem_MPORT_36_addr = 8'h1a;
  assign validMem_MPORT_36_mask = 1'h1;
  assign validMem_MPORT_36_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_37_data = 1'h0;
  assign validMem_MPORT_37_addr = 8'h1b;
  assign validMem_MPORT_37_mask = 1'h1;
  assign validMem_MPORT_37_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_38_data = 1'h0;
  assign validMem_MPORT_38_addr = 8'h1c;
  assign validMem_MPORT_38_mask = 1'h1;
  assign validMem_MPORT_38_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_39_data = 1'h0;
  assign validMem_MPORT_39_addr = 8'h1d;
  assign validMem_MPORT_39_mask = 1'h1;
  assign validMem_MPORT_39_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_40_data = 1'h0;
  assign validMem_MPORT_40_addr = 8'h1e;
  assign validMem_MPORT_40_mask = 1'h1;
  assign validMem_MPORT_40_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_41_data = 1'h0;
  assign validMem_MPORT_41_addr = 8'h1f;
  assign validMem_MPORT_41_mask = 1'h1;
  assign validMem_MPORT_41_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_42_data = 1'h0;
  assign validMem_MPORT_42_addr = 8'h20;
  assign validMem_MPORT_42_mask = 1'h1;
  assign validMem_MPORT_42_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_43_data = 1'h0;
  assign validMem_MPORT_43_addr = 8'h21;
  assign validMem_MPORT_43_mask = 1'h1;
  assign validMem_MPORT_43_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_44_data = 1'h0;
  assign validMem_MPORT_44_addr = 8'h22;
  assign validMem_MPORT_44_mask = 1'h1;
  assign validMem_MPORT_44_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_45_data = 1'h0;
  assign validMem_MPORT_45_addr = 8'h23;
  assign validMem_MPORT_45_mask = 1'h1;
  assign validMem_MPORT_45_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_46_data = 1'h0;
  assign validMem_MPORT_46_addr = 8'h24;
  assign validMem_MPORT_46_mask = 1'h1;
  assign validMem_MPORT_46_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_47_data = 1'h0;
  assign validMem_MPORT_47_addr = 8'h25;
  assign validMem_MPORT_47_mask = 1'h1;
  assign validMem_MPORT_47_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_48_data = 1'h0;
  assign validMem_MPORT_48_addr = 8'h26;
  assign validMem_MPORT_48_mask = 1'h1;
  assign validMem_MPORT_48_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_49_data = 1'h0;
  assign validMem_MPORT_49_addr = 8'h27;
  assign validMem_MPORT_49_mask = 1'h1;
  assign validMem_MPORT_49_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_50_data = 1'h0;
  assign validMem_MPORT_50_addr = 8'h28;
  assign validMem_MPORT_50_mask = 1'h1;
  assign validMem_MPORT_50_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_51_data = 1'h0;
  assign validMem_MPORT_51_addr = 8'h29;
  assign validMem_MPORT_51_mask = 1'h1;
  assign validMem_MPORT_51_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_52_data = 1'h0;
  assign validMem_MPORT_52_addr = 8'h2a;
  assign validMem_MPORT_52_mask = 1'h1;
  assign validMem_MPORT_52_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_53_data = 1'h0;
  assign validMem_MPORT_53_addr = 8'h2b;
  assign validMem_MPORT_53_mask = 1'h1;
  assign validMem_MPORT_53_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_54_data = 1'h0;
  assign validMem_MPORT_54_addr = 8'h2c;
  assign validMem_MPORT_54_mask = 1'h1;
  assign validMem_MPORT_54_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_55_data = 1'h0;
  assign validMem_MPORT_55_addr = 8'h2d;
  assign validMem_MPORT_55_mask = 1'h1;
  assign validMem_MPORT_55_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_56_data = 1'h0;
  assign validMem_MPORT_56_addr = 8'h2e;
  assign validMem_MPORT_56_mask = 1'h1;
  assign validMem_MPORT_56_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_57_data = 1'h0;
  assign validMem_MPORT_57_addr = 8'h2f;
  assign validMem_MPORT_57_mask = 1'h1;
  assign validMem_MPORT_57_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_58_data = 1'h0;
  assign validMem_MPORT_58_addr = 8'h30;
  assign validMem_MPORT_58_mask = 1'h1;
  assign validMem_MPORT_58_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_59_data = 1'h0;
  assign validMem_MPORT_59_addr = 8'h31;
  assign validMem_MPORT_59_mask = 1'h1;
  assign validMem_MPORT_59_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_60_data = 1'h0;
  assign validMem_MPORT_60_addr = 8'h32;
  assign validMem_MPORT_60_mask = 1'h1;
  assign validMem_MPORT_60_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_61_data = 1'h0;
  assign validMem_MPORT_61_addr = 8'h33;
  assign validMem_MPORT_61_mask = 1'h1;
  assign validMem_MPORT_61_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_62_data = 1'h0;
  assign validMem_MPORT_62_addr = 8'h34;
  assign validMem_MPORT_62_mask = 1'h1;
  assign validMem_MPORT_62_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_63_data = 1'h0;
  assign validMem_MPORT_63_addr = 8'h35;
  assign validMem_MPORT_63_mask = 1'h1;
  assign validMem_MPORT_63_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_64_data = 1'h0;
  assign validMem_MPORT_64_addr = 8'h36;
  assign validMem_MPORT_64_mask = 1'h1;
  assign validMem_MPORT_64_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_65_data = 1'h0;
  assign validMem_MPORT_65_addr = 8'h37;
  assign validMem_MPORT_65_mask = 1'h1;
  assign validMem_MPORT_65_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_66_data = 1'h0;
  assign validMem_MPORT_66_addr = 8'h38;
  assign validMem_MPORT_66_mask = 1'h1;
  assign validMem_MPORT_66_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_67_data = 1'h0;
  assign validMem_MPORT_67_addr = 8'h39;
  assign validMem_MPORT_67_mask = 1'h1;
  assign validMem_MPORT_67_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_68_data = 1'h0;
  assign validMem_MPORT_68_addr = 8'h3a;
  assign validMem_MPORT_68_mask = 1'h1;
  assign validMem_MPORT_68_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_69_data = 1'h0;
  assign validMem_MPORT_69_addr = 8'h3b;
  assign validMem_MPORT_69_mask = 1'h1;
  assign validMem_MPORT_69_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_70_data = 1'h0;
  assign validMem_MPORT_70_addr = 8'h3c;
  assign validMem_MPORT_70_mask = 1'h1;
  assign validMem_MPORT_70_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_71_data = 1'h0;
  assign validMem_MPORT_71_addr = 8'h3d;
  assign validMem_MPORT_71_mask = 1'h1;
  assign validMem_MPORT_71_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_72_data = 1'h0;
  assign validMem_MPORT_72_addr = 8'h3e;
  assign validMem_MPORT_72_mask = 1'h1;
  assign validMem_MPORT_72_en = _T ? 1'h0 : _GEN_304;
  assign validMem_MPORT_73_data = 1'h0;
  assign validMem_MPORT_73_addr = 8'h3f;
  assign validMem_MPORT_73_mask = 1'h1;
  assign validMem_MPORT_73_en = _T ? 1'h0 : _GEN_304;
  assign tagMem_tagMatch_0_MPORT_en = 1'h1;
  assign tagMem_tagMatch_0_MPORT_addr = _valid_0_T_1[7:0];
  assign tagMem_tagMatch_0_MPORT_data = tagMem[tagMem_tagMatch_0_MPORT_addr]; // @[i_cache.scala 21:21]
  assign tagMem_tagMatch_1_MPORT_en = 1'h1;
  assign tagMem_tagMatch_1_MPORT_addr = 8'h40 + _GEN_463;
  assign tagMem_tagMatch_1_MPORT_data = tagMem[tagMem_tagMatch_1_MPORT_addr]; // @[i_cache.scala 21:21]
  assign tagMem_tagMatch_2_MPORT_en = 1'h1;
  assign tagMem_tagMatch_2_MPORT_addr = _valid_2_T_2[7:0];
  assign tagMem_tagMatch_2_MPORT_data = tagMem[tagMem_tagMatch_2_MPORT_addr]; // @[i_cache.scala 21:21]
  assign tagMem_tagMatch_3_MPORT_en = 1'h1;
  assign tagMem_tagMatch_3_MPORT_addr = _valid_3_T_2[7:0];
  assign tagMem_tagMatch_3_MPORT_data = tagMem[tagMem_tagMatch_3_MPORT_addr]; // @[i_cache.scala 21:21]
  assign tagMem_MPORT_1_data = {{10'd0}, tag};
  assign tagMem_MPORT_1_addr = unvalidIndex[7:0];
  assign tagMem_MPORT_1_mask = 1'h1;
  assign tagMem_MPORT_1_en = _T ? 1'h0 : _GEN_284;
  assign tagMem_MPORT_6_data = {{10'd0}, tag};
  assign tagMem_MPORT_6_addr = replaceIndex[7:0];
  assign tagMem_MPORT_6_mask = 1'h1;
  assign tagMem_MPORT_6_en = _T ? 1'h0 : _GEN_294;
  assign quene_replace_way_MPORT_en = 1'h1;
  assign quene_replace_way_MPORT_addr = addr[9:4];
  assign quene_replace_way_MPORT_data = quene[quene_replace_way_MPORT_addr]; // @[i_cache.scala 79:20]
  assign quene_MPORT_4_en = _T ? 1'h0 : _GEN_284;
  assign quene_MPORT_4_addr = addr[9:4];
  assign quene_MPORT_4_data = quene[quene_MPORT_4_addr]; // @[i_cache.scala 79:20]
  assign quene_MPORT_9_en = _T ? 1'h0 : _GEN_294;
  assign quene_MPORT_9_addr = addr[9:4];
  assign quene_MPORT_9_data = quene[quene_MPORT_9_addr]; // @[i_cache.scala 79:20]
  assign quene_MPORT_3_data = _T_11[7:0];
  assign quene_MPORT_3_addr = addr[9:4];
  assign quene_MPORT_3_mask = 1'h1;
  assign quene_MPORT_3_en = _T ? 1'h0 : _GEN_284;
  assign quene_MPORT_8_data = _T_17[7:0];
  assign quene_MPORT_8_addr = addr[9:4];
  assign quene_MPORT_8_mask = 1'h1;
  assign quene_MPORT_8_en = _T ? 1'h0 : _GEN_294;
  assign io_to_ifu_arready = state == 3'h1 ? 1'h0 : _GEN_460; // @[i_cache.scala 151:25 169:27]
  assign io_to_ifu_rdata = state == 3'h1 ? rdata : 64'h0; // @[i_cache.scala 151:25 168:25]
  assign io_to_ifu_rvalid = state == 3'h1 & anyMatch; // @[i_cache.scala 151:25 170:26]
  assign io_to_axi_araddr = _GEN_466[31:0];
  assign io_to_axi_arlen = {{7'd0}, _GEN_465};
  assign io_to_axi_arvalid = state == 3'h1 ? 1'h0 : _T_20; // @[i_cache.scala 151:25 152:27]
  assign io_to_axi_rready = state == 3'h1 ? 1'h0 : _GEN_464; // @[i_cache.scala 151:25 157:26]
  assign io_cache_init = state == 3'h4; // @[i_cache.scala 224:27]
  always @(posedge clock) begin
    if (cacheLine_MPORT_en & cacheLine_MPORT_mask) begin
      cacheLine[cacheLine_MPORT_addr] <= cacheLine_MPORT_data; // @[i_cache.scala 18:24]
    end
    if (cacheLine_MPORT_5_en & cacheLine_MPORT_5_mask) begin
      cacheLine[cacheLine_MPORT_5_addr] <= cacheLine_MPORT_5_data; // @[i_cache.scala 18:24]
    end
    if (validMem_MPORT_2_en & validMem_MPORT_2_mask) begin
      validMem[validMem_MPORT_2_addr] <= validMem_MPORT_2_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_7_en & validMem_MPORT_7_mask) begin
      validMem[validMem_MPORT_7_addr] <= validMem_MPORT_7_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_10_en & validMem_MPORT_10_mask) begin
      validMem[validMem_MPORT_10_addr] <= validMem_MPORT_10_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_11_en & validMem_MPORT_11_mask) begin
      validMem[validMem_MPORT_11_addr] <= validMem_MPORT_11_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_12_en & validMem_MPORT_12_mask) begin
      validMem[validMem_MPORT_12_addr] <= validMem_MPORT_12_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_13_en & validMem_MPORT_13_mask) begin
      validMem[validMem_MPORT_13_addr] <= validMem_MPORT_13_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_14_en & validMem_MPORT_14_mask) begin
      validMem[validMem_MPORT_14_addr] <= validMem_MPORT_14_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_15_en & validMem_MPORT_15_mask) begin
      validMem[validMem_MPORT_15_addr] <= validMem_MPORT_15_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_16_en & validMem_MPORT_16_mask) begin
      validMem[validMem_MPORT_16_addr] <= validMem_MPORT_16_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_17_en & validMem_MPORT_17_mask) begin
      validMem[validMem_MPORT_17_addr] <= validMem_MPORT_17_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_18_en & validMem_MPORT_18_mask) begin
      validMem[validMem_MPORT_18_addr] <= validMem_MPORT_18_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_19_en & validMem_MPORT_19_mask) begin
      validMem[validMem_MPORT_19_addr] <= validMem_MPORT_19_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_20_en & validMem_MPORT_20_mask) begin
      validMem[validMem_MPORT_20_addr] <= validMem_MPORT_20_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_21_en & validMem_MPORT_21_mask) begin
      validMem[validMem_MPORT_21_addr] <= validMem_MPORT_21_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_22_en & validMem_MPORT_22_mask) begin
      validMem[validMem_MPORT_22_addr] <= validMem_MPORT_22_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_23_en & validMem_MPORT_23_mask) begin
      validMem[validMem_MPORT_23_addr] <= validMem_MPORT_23_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_24_en & validMem_MPORT_24_mask) begin
      validMem[validMem_MPORT_24_addr] <= validMem_MPORT_24_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_25_en & validMem_MPORT_25_mask) begin
      validMem[validMem_MPORT_25_addr] <= validMem_MPORT_25_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_26_en & validMem_MPORT_26_mask) begin
      validMem[validMem_MPORT_26_addr] <= validMem_MPORT_26_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_27_en & validMem_MPORT_27_mask) begin
      validMem[validMem_MPORT_27_addr] <= validMem_MPORT_27_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_28_en & validMem_MPORT_28_mask) begin
      validMem[validMem_MPORT_28_addr] <= validMem_MPORT_28_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_29_en & validMem_MPORT_29_mask) begin
      validMem[validMem_MPORT_29_addr] <= validMem_MPORT_29_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_30_en & validMem_MPORT_30_mask) begin
      validMem[validMem_MPORT_30_addr] <= validMem_MPORT_30_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_31_en & validMem_MPORT_31_mask) begin
      validMem[validMem_MPORT_31_addr] <= validMem_MPORT_31_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_32_en & validMem_MPORT_32_mask) begin
      validMem[validMem_MPORT_32_addr] <= validMem_MPORT_32_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_33_en & validMem_MPORT_33_mask) begin
      validMem[validMem_MPORT_33_addr] <= validMem_MPORT_33_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_34_en & validMem_MPORT_34_mask) begin
      validMem[validMem_MPORT_34_addr] <= validMem_MPORT_34_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_35_en & validMem_MPORT_35_mask) begin
      validMem[validMem_MPORT_35_addr] <= validMem_MPORT_35_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_36_en & validMem_MPORT_36_mask) begin
      validMem[validMem_MPORT_36_addr] <= validMem_MPORT_36_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_37_en & validMem_MPORT_37_mask) begin
      validMem[validMem_MPORT_37_addr] <= validMem_MPORT_37_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_38_en & validMem_MPORT_38_mask) begin
      validMem[validMem_MPORT_38_addr] <= validMem_MPORT_38_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_39_en & validMem_MPORT_39_mask) begin
      validMem[validMem_MPORT_39_addr] <= validMem_MPORT_39_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_40_en & validMem_MPORT_40_mask) begin
      validMem[validMem_MPORT_40_addr] <= validMem_MPORT_40_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_41_en & validMem_MPORT_41_mask) begin
      validMem[validMem_MPORT_41_addr] <= validMem_MPORT_41_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_42_en & validMem_MPORT_42_mask) begin
      validMem[validMem_MPORT_42_addr] <= validMem_MPORT_42_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_43_en & validMem_MPORT_43_mask) begin
      validMem[validMem_MPORT_43_addr] <= validMem_MPORT_43_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_44_en & validMem_MPORT_44_mask) begin
      validMem[validMem_MPORT_44_addr] <= validMem_MPORT_44_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_45_en & validMem_MPORT_45_mask) begin
      validMem[validMem_MPORT_45_addr] <= validMem_MPORT_45_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_46_en & validMem_MPORT_46_mask) begin
      validMem[validMem_MPORT_46_addr] <= validMem_MPORT_46_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_47_en & validMem_MPORT_47_mask) begin
      validMem[validMem_MPORT_47_addr] <= validMem_MPORT_47_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_48_en & validMem_MPORT_48_mask) begin
      validMem[validMem_MPORT_48_addr] <= validMem_MPORT_48_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_49_en & validMem_MPORT_49_mask) begin
      validMem[validMem_MPORT_49_addr] <= validMem_MPORT_49_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_50_en & validMem_MPORT_50_mask) begin
      validMem[validMem_MPORT_50_addr] <= validMem_MPORT_50_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_51_en & validMem_MPORT_51_mask) begin
      validMem[validMem_MPORT_51_addr] <= validMem_MPORT_51_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_52_en & validMem_MPORT_52_mask) begin
      validMem[validMem_MPORT_52_addr] <= validMem_MPORT_52_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_53_en & validMem_MPORT_53_mask) begin
      validMem[validMem_MPORT_53_addr] <= validMem_MPORT_53_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_54_en & validMem_MPORT_54_mask) begin
      validMem[validMem_MPORT_54_addr] <= validMem_MPORT_54_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_55_en & validMem_MPORT_55_mask) begin
      validMem[validMem_MPORT_55_addr] <= validMem_MPORT_55_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_56_en & validMem_MPORT_56_mask) begin
      validMem[validMem_MPORT_56_addr] <= validMem_MPORT_56_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_57_en & validMem_MPORT_57_mask) begin
      validMem[validMem_MPORT_57_addr] <= validMem_MPORT_57_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_58_en & validMem_MPORT_58_mask) begin
      validMem[validMem_MPORT_58_addr] <= validMem_MPORT_58_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_59_en & validMem_MPORT_59_mask) begin
      validMem[validMem_MPORT_59_addr] <= validMem_MPORT_59_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_60_en & validMem_MPORT_60_mask) begin
      validMem[validMem_MPORT_60_addr] <= validMem_MPORT_60_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_61_en & validMem_MPORT_61_mask) begin
      validMem[validMem_MPORT_61_addr] <= validMem_MPORT_61_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_62_en & validMem_MPORT_62_mask) begin
      validMem[validMem_MPORT_62_addr] <= validMem_MPORT_62_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_63_en & validMem_MPORT_63_mask) begin
      validMem[validMem_MPORT_63_addr] <= validMem_MPORT_63_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_64_en & validMem_MPORT_64_mask) begin
      validMem[validMem_MPORT_64_addr] <= validMem_MPORT_64_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_65_en & validMem_MPORT_65_mask) begin
      validMem[validMem_MPORT_65_addr] <= validMem_MPORT_65_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_66_en & validMem_MPORT_66_mask) begin
      validMem[validMem_MPORT_66_addr] <= validMem_MPORT_66_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_67_en & validMem_MPORT_67_mask) begin
      validMem[validMem_MPORT_67_addr] <= validMem_MPORT_67_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_68_en & validMem_MPORT_68_mask) begin
      validMem[validMem_MPORT_68_addr] <= validMem_MPORT_68_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_69_en & validMem_MPORT_69_mask) begin
      validMem[validMem_MPORT_69_addr] <= validMem_MPORT_69_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_70_en & validMem_MPORT_70_mask) begin
      validMem[validMem_MPORT_70_addr] <= validMem_MPORT_70_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_71_en & validMem_MPORT_71_mask) begin
      validMem[validMem_MPORT_71_addr] <= validMem_MPORT_71_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_72_en & validMem_MPORT_72_mask) begin
      validMem[validMem_MPORT_72_addr] <= validMem_MPORT_72_data; // @[i_cache.scala 19:23]
    end
    if (validMem_MPORT_73_en & validMem_MPORT_73_mask) begin
      validMem[validMem_MPORT_73_addr] <= validMem_MPORT_73_data; // @[i_cache.scala 19:23]
    end
    if (tagMem_MPORT_1_en & tagMem_MPORT_1_mask) begin
      tagMem[tagMem_MPORT_1_addr] <= tagMem_MPORT_1_data; // @[i_cache.scala 21:21]
    end
    if (tagMem_MPORT_6_en & tagMem_MPORT_6_mask) begin
      tagMem[tagMem_MPORT_6_addr] <= tagMem_MPORT_6_data; // @[i_cache.scala 21:21]
    end
    if (quene_MPORT_3_en & quene_MPORT_3_mask) begin
      quene[quene_MPORT_3_addr] <= quene_MPORT_3_data; // @[i_cache.scala 79:20]
    end
    if (quene_MPORT_8_en & quene_MPORT_8_mask) begin
      quene[quene_MPORT_8_addr] <= quene_MPORT_8_data; // @[i_cache.scala 79:20]
    end
    if (reset) begin // @[i_cache.scala 36:23]
      addr <= 32'h0; // @[i_cache.scala 36:23]
    end else if (3'h0 == state) begin // @[i_cache.scala 95:18]
      if (!(io_clear_cache)) begin // @[i_cache.scala 97:33]
        if (io_from_ifu_arvalid) begin // @[i_cache.scala 99:44]
          addr <= io_from_ifu_araddr; // @[i_cache.scala 100:22]
        end
      end
    end
    if (reset) begin // @[i_cache.scala 77:31]
      receive_data_0 <= 64'h0; // @[i_cache.scala 77:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 95:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 95:18]
        if (3'h2 == state) begin // @[i_cache.scala 95:18]
          receive_data_0 <= _GEN_10;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 77:31]
      receive_data_1 <= 64'h0; // @[i_cache.scala 77:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 95:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 95:18]
        if (3'h2 == state) begin // @[i_cache.scala 95:18]
          receive_data_1 <= _GEN_11;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 78:30]
      receive_num <= 3'h0; // @[i_cache.scala 78:30]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 95:18]
      if (3'h1 == state) begin // @[i_cache.scala 95:18]
        if (!(anyMatch)) begin // @[i_cache.scala 105:27]
          receive_num <= 3'h0; // @[i_cache.scala 111:29]
        end
      end else if (3'h2 == state) begin // @[i_cache.scala 95:18]
        receive_num <= _GEN_12;
      end
    end
    if (reset) begin // @[i_cache.scala 91:24]
      state <= 3'h0; // @[i_cache.scala 91:24]
    end else if (3'h0 == state) begin // @[i_cache.scala 95:18]
      if (io_clear_cache) begin // @[i_cache.scala 97:33]
        state <= 3'h4; // @[i_cache.scala 98:23]
      end else if (io_from_ifu_arvalid) begin // @[i_cache.scala 99:44]
        state <= 3'h1; // @[i_cache.scala 101:23]
      end
    end else if (3'h1 == state) begin // @[i_cache.scala 95:18]
      if (anyMatch) begin // @[i_cache.scala 105:27]
        state <= _GEN_4;
      end else begin
        state <= 3'h2; // @[i_cache.scala 110:23]
      end
    end else if (3'h2 == state) begin // @[i_cache.scala 95:18]
      state <= _GEN_13;
    end else begin
      state <= _GEN_101;
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
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    quene[initvar] = _RAND_3[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  addr = _RAND_4[31:0];
  _RAND_5 = {2{`RANDOM}};
  receive_data_0 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  receive_data_1 = _RAND_6[63:0];
  _RAND_7 = {1{`RANDOM}};
  receive_num = _RAND_7[2:0];
  _RAND_8 = {1{`RANDOM}};
  state = _RAND_8[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
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
  reg [127:0] cacheLine [0:63]; // @[d_cache.scala 24:24]
  wire  cacheLine_rdata_MPORT_en; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_rdata_MPORT_addr; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_rdata_MPORT_data; // @[d_cache.scala 24:24]
  wire  cacheLine_rdata_MPORT_1_en; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_rdata_MPORT_1_addr; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_rdata_MPORT_1_data; // @[d_cache.scala 24:24]
  wire  cacheLine_ldata_MPORT_en; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_ldata_MPORT_addr; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_ldata_MPORT_data; // @[d_cache.scala 24:24]
  wire  cacheLine_ldata_MPORT_1_en; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_ldata_MPORT_1_addr; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_ldata_MPORT_1_data; // @[d_cache.scala 24:24]
  wire  cacheLine_write_back_data_MPORT_en; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_write_back_data_MPORT_addr; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_write_back_data_MPORT_data; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_MPORT_data; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_MPORT_addr; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_mask; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_en; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_MPORT_2_data; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_MPORT_2_addr; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_2_mask; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_2_en; // @[d_cache.scala 24:24]
  wire [127:0] cacheLine_MPORT_7_data; // @[d_cache.scala 24:24]
  wire [5:0] cacheLine_MPORT_7_addr; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_7_mask; // @[d_cache.scala 24:24]
  wire  cacheLine_MPORT_7_en; // @[d_cache.scala 24:24]
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
  wire  validMem_MPORT_4_data; // @[d_cache.scala 25:23]
  wire [5:0] validMem_MPORT_4_addr; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_4_mask; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_4_en; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_9_data; // @[d_cache.scala 25:23]
  wire [5:0] validMem_MPORT_9_addr; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_9_mask; // @[d_cache.scala 25:23]
  wire  validMem_MPORT_9_en; // @[d_cache.scala 25:23]
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
  wire [31:0] tagMem_MPORT_3_data; // @[d_cache.scala 28:21]
  wire [5:0] tagMem_MPORT_3_addr; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_3_mask; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_3_en; // @[d_cache.scala 28:21]
  wire [31:0] tagMem_MPORT_8_data; // @[d_cache.scala 28:21]
  wire [5:0] tagMem_MPORT_8_addr; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_8_mask; // @[d_cache.scala 28:21]
  wire  tagMem_MPORT_8_en; // @[d_cache.scala 28:21]
  reg  dirtyMem [0:63]; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_12_en; // @[d_cache.scala 29:23]
  wire [5:0] dirtyMem_MPORT_12_addr; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_12_data; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_1_data; // @[d_cache.scala 29:23]
  wire [5:0] dirtyMem_MPORT_1_addr; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_1_mask; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_1_en; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_13_data; // @[d_cache.scala 29:23]
  wire [5:0] dirtyMem_MPORT_13_addr; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_13_mask; // @[d_cache.scala 29:23]
  wire  dirtyMem_MPORT_13_en; // @[d_cache.scala 29:23]
  reg [7:0] quene [0:15]; // @[d_cache.scala 77:20]
  wire  quene_replace_way_MPORT_en; // @[d_cache.scala 77:20]
  wire [3:0] quene_replace_way_MPORT_addr; // @[d_cache.scala 77:20]
  wire [7:0] quene_replace_way_MPORT_data; // @[d_cache.scala 77:20]
  wire  quene_MPORT_6_en; // @[d_cache.scala 77:20]
  wire [3:0] quene_MPORT_6_addr; // @[d_cache.scala 77:20]
  wire [7:0] quene_MPORT_6_data; // @[d_cache.scala 77:20]
  wire  quene_MPORT_11_en; // @[d_cache.scala 77:20]
  wire [3:0] quene_MPORT_11_addr; // @[d_cache.scala 77:20]
  wire [7:0] quene_MPORT_11_data; // @[d_cache.scala 77:20]
  wire [7:0] quene_MPORT_5_data; // @[d_cache.scala 77:20]
  wire [3:0] quene_MPORT_5_addr; // @[d_cache.scala 77:20]
  wire  quene_MPORT_5_mask; // @[d_cache.scala 77:20]
  wire  quene_MPORT_5_en; // @[d_cache.scala 77:20]
  wire [7:0] quene_MPORT_10_data; // @[d_cache.scala 77:20]
  wire [3:0] quene_MPORT_10_addr; // @[d_cache.scala 77:20]
  wire  quene_MPORT_10_mask; // @[d_cache.scala 77:20]
  wire  quene_MPORT_10_en; // @[d_cache.scala 77:20]
  wire [3:0] offset = io_from_lsu_araddr[3:0]; // @[d_cache.scala 20:36]
  wire [3:0] index = io_from_lsu_araddr[7:4]; // @[d_cache.scala 21:35]
  wire [23:0] tag = io_from_lsu_araddr[31:8]; // @[d_cache.scala 22:33]
  wire [7:0] _GEN_2 = {{4'd0}, index}; // @[d_cache.scala 41:48]
  wire [8:0] _valid_0_T_1 = {{1'd0}, _GEN_2}; // @[d_cache.scala 41:48]
  wire [7:0] _valid_1_T_2 = 8'h10 + _GEN_2; // @[d_cache.scala 41:48]
  wire [8:0] _GEN_6 = {{5'd0}, index}; // @[d_cache.scala 41:48]
  wire [8:0] _valid_2_T_2 = 9'h20 + _GEN_6; // @[d_cache.scala 41:48]
  wire [8:0] _valid_3_T_2 = 9'h30 + _GEN_6; // @[d_cache.scala 41:48]
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
  wire [5:0] _GEN_11 = {foundUnvalidIndex, 4'h0}; // @[d_cache.scala 50:43]
  wire [8:0] _unvalidIndex_T = {{3'd0}, _GEN_11}; // @[d_cache.scala 50:43]
  wire [8:0] unvalidIndex = _unvalidIndex_T + _GEN_6; // @[d_cache.scala 50:51]
  wire [31:0] _GEN_18 = {{8'd0}, tag}; // @[d_cache.scala 55:71]
  wire  tagMatch_0 = valid_0 & tagMem_tagMatch_0_MPORT_data == _GEN_18; // @[d_cache.scala 55:33]
  wire  tagMatch_1 = valid_1 & tagMem_tagMatch_1_MPORT_data == _GEN_18; // @[d_cache.scala 55:33]
  wire  tagMatch_2 = valid_2 & tagMem_tagMatch_2_MPORT_data == _GEN_18; // @[d_cache.scala 55:33]
  wire  tagMatch_3 = valid_3 & tagMem_tagMatch_3_MPORT_data == _GEN_18; // @[d_cache.scala 55:33]
  wire  anyMatch = tagMatch_0 | tagMatch_1 | tagMatch_2 | tagMatch_3; // @[d_cache.scala 57:38]
  wire [1:0] _foundtagIndex_T = tagMatch_3 ? 2'h3 : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] _foundtagIndex_T_1 = tagMatch_2 ? 2'h2 : _foundtagIndex_T; // @[Mux.scala 101:16]
  wire [1:0] _foundtagIndex_T_2 = tagMatch_1 ? 2'h1 : _foundtagIndex_T_1; // @[Mux.scala 101:16]
  wire [1:0] foundtagIndex = tagMatch_0 ? 2'h0 : _foundtagIndex_T_2; // @[Mux.scala 101:16]
  wire [5:0] _GEN_138 = {foundtagIndex, 4'h0}; // @[d_cache.scala 64:35]
  wire [8:0] _tagIndex_T = {{3'd0}, _GEN_138}; // @[d_cache.scala 64:35]
  wire [8:0] tagIndex = _tagIndex_T + _GEN_6; // @[d_cache.scala 64:43]
  reg [127:0] write_back_data; // @[d_cache.scala 70:34]
  reg [31:0] write_back_addr; // @[d_cache.scala 71:34]
  reg [63:0] receive_data_0; // @[d_cache.scala 75:31]
  reg [63:0] receive_data_1; // @[d_cache.scala 75:31]
  reg [2:0] receive_num; // @[d_cache.scala 76:30]
  wire [1:0] replace_way = quene_replace_way_MPORT_data[7:6]; // @[d_cache.scala 79:35]
  wire [5:0] _GEN_177 = {replace_way, 4'h0}; // @[d_cache.scala 80:34]
  wire [8:0] _replaceIndex_T = {{3'd0}, _GEN_177}; // @[d_cache.scala 80:34]
  wire [8:0] _replaceIndex_T_2 = _replaceIndex_T + _GEN_6; // @[d_cache.scala 80:42]
  wire [5:0] shift_bit_t = {offset[2:0], 3'h0}; // @[d_cache.scala 82:35]
  wire [63:0] _wmask_T_4 = io_from_lsu_wstrb == 8'hff ? 64'hffffffffffffffff : 64'h0; // @[d_cache.scala 92:20]
  wire [63:0] _wmask_T_5 = io_from_lsu_wstrb == 8'hf ? 64'hffffffff : _wmask_T_4; // @[d_cache.scala 91:20]
  wire [63:0] _wmask_T_6 = io_from_lsu_wstrb == 8'h3 ? 64'hffff : _wmask_T_5; // @[d_cache.scala 90:20]
  wire [63:0] wmask = io_from_lsu_wstrb == 8'h1 ? 64'hff : _wmask_T_6; // @[d_cache.scala 89:20]
  wire [126:0] _GEN_247 = {{63'd0}, wmask}; // @[d_cache.scala 94:25]
  wire [126:0] _mask_shift_T = _GEN_247 << shift_bit_t; // @[d_cache.scala 94:25]
  wire [63:0] rdata = offset[3] ? cacheLine_rdata_MPORT_data[127:64] : cacheLine_rdata_MPORT_1_data[63:0]; // @[d_cache.scala 95:17]
  wire [63:0] ldata = offset[3] ? cacheLine_ldata_MPORT_data[63:0] : cacheLine_ldata_MPORT_1_data[127:64]; // @[d_cache.scala 96:17]
  wire [63:0] _change_data_T = io_from_lsu_wdata & wmask; // @[d_cache.scala 97:40]
  wire [126:0] _GEN_250 = {{63'd0}, _change_data_T}; // @[d_cache.scala 97:49]
  wire [126:0] _change_data_T_1 = _GEN_250 << shift_bit_t; // @[d_cache.scala 97:49]
  wire [63:0] mask_shift = _mask_shift_T[63:0]; // @[d_cache.scala 93:26 94:16]
  wire [63:0] _change_data_T_2 = ~mask_shift; // @[d_cache.scala 97:76]
  wire [63:0] _change_data_T_3 = rdata & _change_data_T_2; // @[d_cache.scala 97:74]
  wire [126:0] _GEN_185 = {{63'd0}, _change_data_T_3}; // @[d_cache.scala 97:65]
  wire [126:0] _change_data_T_4 = _change_data_T_1 | _GEN_185; // @[d_cache.scala 97:65]
  reg [2:0] state; // @[d_cache.scala 103:24]
  wire  _T = 3'h0 == state; // @[d_cache.scala 132:18]
  wire  _T_3 = (io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000; // @[d_cache.scala 134:60]
  wire [2:0] _GEN_0 = io_from_lsu_awvalid ? 3'h2 : state; // @[d_cache.scala 140:44 141:23 103:24]
  wire [63:0] _GEN_3 = (io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000 ?
    io_from_axi_rdata : 64'h0; // @[d_cache.scala 109:21 134:99 135:27]
  wire  _GEN_5 = (io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000 & io_from_axi_rvalid; // @[d_cache.scala 111:22 134:99 135:27]
  wire  _GEN_8 = (io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000 & io_from_axi_bvalid; // @[d_cache.scala 114:22 134:99 135:27]
  wire  _GEN_13 = (io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000 & io_from_lsu_arvalid
    ; // @[d_cache.scala 116:23 134:99 136:27]
  wire [31:0] _GEN_15 = (io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000 ?
    io_from_lsu_awaddr : 32'h0; // @[d_cache.scala 122:22 134:99 136:27]
  wire  _GEN_19 = (io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000 & io_from_lsu_awvalid
    ; // @[d_cache.scala 123:23 134:99 136:27]
  wire [63:0] _GEN_20 = (io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000 ?
    io_from_lsu_wdata : 64'h0; // @[d_cache.scala 127:21 134:99 136:27]
  wire [7:0] _GEN_21 = (io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000 ?
    io_from_lsu_wstrb : 8'h0; // @[d_cache.scala 128:21 134:99 136:27]
  wire  _GEN_23 = (io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000 & io_from_lsu_wvalid; // @[d_cache.scala 130:22 134:99 136:27]
  wire [63:0] _io_to_lsu_rdata_T = rdata >> shift_bit_t; // @[d_cache.scala 145:38]
  wire [63:0] change_data = _change_data_T_4[63:0]; // @[d_cache.scala 85:27 97:17]
  wire [127:0] _T_9 = {change_data,ldata}; // @[Cat.scala 31:58]
  wire [127:0] _T_10 = {ldata,change_data}; // @[Cat.scala 31:58]
  wire [2:0] _GEN_30 = anyMatch ? 3'h0 : 3'h4; // @[d_cache.scala 161:27 171:23]
  wire [63:0] _GEN_189 = {{32'd0}, io_from_lsu_araddr}; // @[d_cache.scala 176:53]
  wire [63:0] _io_to_axi_araddr_T = _GEN_189 & 64'hfffffffffffffff0; // @[d_cache.scala 176:53]
  wire [63:0] _GEN_37 = ~receive_num[0] ? io_from_axi_rdata : receive_data_0; // @[d_cache.scala 182:{43,43} 75:31]
  wire [63:0] _GEN_38 = receive_num[0] ? io_from_axi_rdata : receive_data_1; // @[d_cache.scala 182:{43,43} 75:31]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[d_cache.scala 183:44]
  wire [2:0] _GEN_39 = io_from_axi_rlast ? 3'h5 : state; // @[d_cache.scala 103:24 184:40 185:27]
  wire [63:0] _GEN_40 = io_from_axi_rvalid ? _GEN_37 : receive_data_0; // @[d_cache.scala 181:37 75:31]
  wire [63:0] _GEN_41 = io_from_axi_rvalid ? _GEN_38 : receive_data_1; // @[d_cache.scala 181:37 75:31]
  wire [2:0] _GEN_42 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[d_cache.scala 181:37 183:29 76:30]
  wire [2:0] _GEN_43 = io_from_axi_rvalid ? _GEN_39 : state; // @[d_cache.scala 103:24 181:37]
  wire [2:0] _GEN_44 = io_from_axi_bvalid ? 3'h0 : state; // @[d_cache.scala 203:59 204:23 103:24]
  wire  _T_18 = ~allvalid; // @[d_cache.scala 208:18]
  wire [9:0] _GEN_190 = {quene_MPORT_6_data, 2'h0}; // @[d_cache.scala 216:47]
  wire [10:0] _T_23 = {{1'd0}, _GEN_190}; // @[d_cache.scala 216:47]
  wire [10:0] _GEN_193 = {{9'd0}, foundUnvalidIndex}; // @[d_cache.scala 216:55]
  wire [10:0] _T_24 = _T_23 | _GEN_193; // @[d_cache.scala 216:55]
  wire [31:0] replaceIndex = {{23'd0}, _replaceIndex_T_2}; // @[d_cache.scala 66:28 80:18]
  wire [9:0] _GEN_226 = {quene_MPORT_11_data, 2'h0}; // @[d_cache.scala 221:47]
  wire [10:0] _T_29 = {{1'd0}, _GEN_226}; // @[d_cache.scala 221:47]
  wire [10:0] _GEN_227 = {{9'd0}, replace_way}; // @[d_cache.scala 221:55]
  wire [10:0] _T_30 = _T_29 | _GEN_227; // @[d_cache.scala 221:55]
  wire  _T_32 = dirtyMem_MPORT_12_data; // @[d_cache.scala 222:44]
  wire [39:0] _write_back_addr_T_2 = {tagMem_write_back_addr_MPORT_data,index,4'h0}; // @[Cat.scala 31:58]
  wire [127:0] _GEN_48 = dirtyMem_MPORT_12_data ? cacheLine_write_back_data_MPORT_data : write_back_data; // @[d_cache.scala 222:51 224:37 70:34]
  wire [39:0] _GEN_50 = dirtyMem_MPORT_12_data ? _write_back_addr_T_2 : {{8'd0}, write_back_addr}; // @[d_cache.scala 222:51 225:37 71:34]
  wire [2:0] _GEN_54 = dirtyMem_MPORT_12_data ? 3'h6 : 3'h1; // @[d_cache.scala 222:51 227:27 229:27]
  wire [2:0] _GEN_55 = ~allvalid ? 3'h1 : _GEN_54; // @[d_cache.scala 208:28 209:23]
  wire  _GEN_68 = ~allvalid ? 1'h0 : 1'h1; // @[d_cache.scala 208:28 24:24 218:26]
  wire  _GEN_79 = ~allvalid ? 1'h0 : _T_32; // @[d_cache.scala 208:28 24:24]
  wire [127:0] _GEN_80 = ~allvalid ? write_back_data : _GEN_48; // @[d_cache.scala 208:28 70:34]
  wire [39:0] _GEN_82 = ~allvalid ? {{8'd0}, write_back_addr} : _GEN_50; // @[d_cache.scala 208:28 71:34]
  wire [127:0] _write_back_data_T_1 = {{64'd0}, write_back_data[127:64]}; // @[d_cache.scala 245:52]
  wire [127:0] _GEN_86 = io_from_axi_wready ? _write_back_data_T_1 : write_back_data; // @[d_cache.scala 244:37 245:33 70:34]
  wire [2:0] _GEN_87 = io_from_axi_bvalid ? 3'h1 : state; // @[d_cache.scala 247:37 248:23 103:24]
  wire [31:0] _GEN_88 = 3'h6 == state ? write_back_addr : 32'h0; // @[d_cache.scala 132:18 122:22 234:30]
  wire [63:0] _GEN_91 = 3'h6 == state ? write_back_data[63:0] : 64'h0; // @[d_cache.scala 132:18 127:21 239:29]
  wire [7:0] _GEN_92 = 3'h6 == state ? 8'hff : 8'h0; // @[d_cache.scala 132:18 128:21 240:29]
  wire [127:0] _GEN_93 = 3'h6 == state ? _GEN_86 : write_back_data; // @[d_cache.scala 132:18 70:34]
  wire [2:0] _GEN_94 = 3'h6 == state ? _GEN_87 : state; // @[d_cache.scala 132:18 103:24]
  wire [2:0] _GEN_95 = 3'h5 == state ? _GEN_55 : _GEN_94; // @[d_cache.scala 132:18]
  wire [127:0] _GEN_120 = 3'h5 == state ? _GEN_80 : _GEN_93; // @[d_cache.scala 132:18]
  wire [39:0] _GEN_122 = 3'h5 == state ? _GEN_82 : {{8'd0}, write_back_addr}; // @[d_cache.scala 132:18 71:34]
  wire [31:0] _GEN_126 = 3'h5 == state ? 32'h0 : _GEN_88; // @[d_cache.scala 132:18 122:22]
  wire  _GEN_127 = 3'h5 == state ? 1'h0 : 3'h6 == state; // @[d_cache.scala 132:18 123:23]
  wire [63:0] _GEN_129 = 3'h5 == state ? 64'h0 : _GEN_91; // @[d_cache.scala 132:18 127:21]
  wire [7:0] _GEN_130 = 3'h5 == state ? 8'h0 : _GEN_92; // @[d_cache.scala 132:18 128:21]
  wire  _GEN_132 = 3'h4 == state & io_from_axi_bvalid; // @[d_cache.scala 132:18 114:22 191:30]
  wire [31:0] _GEN_134 = 3'h4 == state ? io_from_lsu_awaddr : _GEN_126; // @[d_cache.scala 132:18 193:30]
  wire  _GEN_135 = 3'h4 == state ? io_from_lsu_awvalid : _GEN_127; // @[d_cache.scala 132:18 194:31]
  wire [7:0] _GEN_136 = 3'h4 == state ? 8'h0 : {{7'd0}, _GEN_127}; // @[d_cache.scala 132:18 195:29]
  wire [63:0] _GEN_139 = 3'h4 == state ? io_from_lsu_wdata : _GEN_129; // @[d_cache.scala 132:18 198:29]
  wire [7:0] _GEN_140 = 3'h4 == state ? io_from_lsu_wstrb : _GEN_130; // @[d_cache.scala 132:18 199:29]
  wire  _GEN_142 = 3'h4 == state ? io_from_lsu_wvalid : _GEN_127; // @[d_cache.scala 132:18 201:30]
  wire  _GEN_143 = 3'h4 == state | _GEN_127; // @[d_cache.scala 132:18 202:30]
  wire [2:0] _GEN_144 = 3'h4 == state ? _GEN_44 : _GEN_95; // @[d_cache.scala 132:18]
  wire  _GEN_147 = 3'h4 == state ? 1'h0 : 3'h5 == state & _T_18; // @[d_cache.scala 132:18 24:24]
  wire  _GEN_157 = 3'h4 == state ? 1'h0 : 3'h5 == state & _GEN_68; // @[d_cache.scala 132:18 24:24]
  wire  _GEN_168 = 3'h4 == state ? 1'h0 : 3'h5 == state & _GEN_79; // @[d_cache.scala 132:18 24:24]
  wire [127:0] _GEN_169 = 3'h4 == state ? write_back_data : _GEN_120; // @[d_cache.scala 132:18 70:34]
  wire [39:0] _GEN_171 = 3'h4 == state ? {{8'd0}, write_back_addr} : _GEN_122; // @[d_cache.scala 132:18 71:34]
  wire [63:0] _GEN_176 = 3'h3 == state ? _io_to_axi_araddr_T : {{32'd0}, io_from_lsu_araddr}; // @[d_cache.scala 132:18 117:22 176:30]
  wire [63:0] _GEN_179 = 3'h3 == state ? _GEN_40 : receive_data_0; // @[d_cache.scala 132:18 75:31]
  wire [63:0] _GEN_180 = 3'h3 == state ? _GEN_41 : receive_data_1; // @[d_cache.scala 132:18 75:31]
  wire [2:0] _GEN_181 = 3'h3 == state ? _GEN_42 : receive_num; // @[d_cache.scala 132:18 76:30]
  wire [2:0] _GEN_182 = 3'h3 == state ? _GEN_43 : _GEN_144; // @[d_cache.scala 132:18]
  wire  _GEN_184 = 3'h3 == state ? 1'h0 : _GEN_132; // @[d_cache.scala 132:18 114:22]
  wire [31:0] _GEN_186 = 3'h3 == state ? 32'h0 : _GEN_134; // @[d_cache.scala 132:18 122:22]
  wire  _GEN_187 = 3'h3 == state ? 1'h0 : _GEN_135; // @[d_cache.scala 132:18 123:23]
  wire [7:0] _GEN_188 = 3'h3 == state ? 8'h0 : _GEN_136; // @[d_cache.scala 132:18 124:21]
  wire [63:0] _GEN_191 = 3'h3 == state ? 64'h0 : _GEN_139; // @[d_cache.scala 132:18 127:21]
  wire [7:0] _GEN_192 = 3'h3 == state ? 8'h0 : _GEN_140; // @[d_cache.scala 132:18 128:21]
  wire  _GEN_194 = 3'h3 == state ? 1'h0 : _GEN_142; // @[d_cache.scala 132:18 130:22]
  wire  _GEN_195 = 3'h3 == state ? 1'h0 : _GEN_143; // @[d_cache.scala 132:18 131:22]
  wire  _GEN_198 = 3'h3 == state ? 1'h0 : _GEN_147; // @[d_cache.scala 132:18 24:24]
  wire  _GEN_208 = 3'h3 == state ? 1'h0 : _GEN_157; // @[d_cache.scala 132:18 24:24]
  wire  _GEN_219 = 3'h3 == state ? 1'h0 : _GEN_168; // @[d_cache.scala 132:18 24:24]
  wire [127:0] _GEN_220 = 3'h3 == state ? write_back_data : _GEN_169; // @[d_cache.scala 132:18 70:34]
  wire [39:0] _GEN_222 = 3'h3 == state ? {{8'd0}, write_back_addr} : _GEN_171; // @[d_cache.scala 132:18 71:34]
  wire  _GEN_228 = 3'h2 == state ? anyMatch : _GEN_184; // @[d_cache.scala 132:18 160:30]
  wire  _GEN_236 = 3'h2 == state ? 1'h0 : 3'h3 == state; // @[d_cache.scala 132:18 116:23]
  wire [63:0] _GEN_237 = 3'h2 == state ? {{32'd0}, io_from_lsu_araddr} : _GEN_176; // @[d_cache.scala 132:18 117:22]
  wire [31:0] _GEN_243 = 3'h2 == state ? 32'h0 : _GEN_186; // @[d_cache.scala 132:18 122:22]
  wire  _GEN_244 = 3'h2 == state ? 1'h0 : _GEN_187; // @[d_cache.scala 132:18 123:23]
  wire [7:0] _GEN_245 = 3'h2 == state ? 8'h0 : _GEN_188; // @[d_cache.scala 132:18 124:21]
  wire [63:0] _GEN_248 = 3'h2 == state ? 64'h0 : _GEN_191; // @[d_cache.scala 132:18 127:21]
  wire [7:0] _GEN_249 = 3'h2 == state ? 8'h0 : _GEN_192; // @[d_cache.scala 132:18 128:21]
  wire  _GEN_251 = 3'h2 == state ? 1'h0 : _GEN_194; // @[d_cache.scala 132:18 130:22]
  wire  _GEN_252 = 3'h2 == state ? 1'h0 : _GEN_195; // @[d_cache.scala 132:18 131:22]
  wire  _GEN_255 = 3'h2 == state ? 1'h0 : _GEN_198; // @[d_cache.scala 132:18 24:24]
  wire  _GEN_265 = 3'h2 == state ? 1'h0 : _GEN_208; // @[d_cache.scala 132:18 24:24]
  wire  _GEN_276 = 3'h2 == state ? 1'h0 : _GEN_219; // @[d_cache.scala 132:18 24:24]
  wire [39:0] _GEN_279 = 3'h2 == state ? {{8'd0}, write_back_addr} : _GEN_222; // @[d_cache.scala 132:18 71:34]
  wire [63:0] _GEN_283 = 3'h1 == state ? _io_to_lsu_rdata_T : 64'h0; // @[d_cache.scala 132:18 109:21 145:29]
  wire  _GEN_284 = 3'h1 == state & anyMatch; // @[d_cache.scala 132:18 111:22 146:30]
  wire  _GEN_290 = 3'h1 == state ? 1'h0 : _GEN_228; // @[d_cache.scala 132:18 114:22]
  wire  _GEN_293 = 3'h1 == state ? 1'h0 : 3'h2 == state & anyMatch; // @[d_cache.scala 132:18 24:24]
  wire  _GEN_297 = 3'h1 == state ? 1'h0 : _GEN_236; // @[d_cache.scala 132:18 116:23]
  wire [63:0] _GEN_298 = 3'h1 == state ? {{32'd0}, io_from_lsu_araddr} : _GEN_237; // @[d_cache.scala 132:18 117:22]
  wire [31:0] _GEN_303 = 3'h1 == state ? 32'h0 : _GEN_243; // @[d_cache.scala 132:18 122:22]
  wire  _GEN_304 = 3'h1 == state ? 1'h0 : _GEN_244; // @[d_cache.scala 132:18 123:23]
  wire [7:0] _GEN_305 = 3'h1 == state ? 8'h0 : _GEN_245; // @[d_cache.scala 132:18 124:21]
  wire [63:0] _GEN_308 = 3'h1 == state ? 64'h0 : _GEN_248; // @[d_cache.scala 132:18 127:21]
  wire [7:0] _GEN_309 = 3'h1 == state ? 8'h0 : _GEN_249; // @[d_cache.scala 132:18 128:21]
  wire  _GEN_311 = 3'h1 == state ? 1'h0 : _GEN_251; // @[d_cache.scala 132:18 130:22]
  wire  _GEN_312 = 3'h1 == state ? 1'h0 : _GEN_252; // @[d_cache.scala 132:18 131:22]
  wire  _GEN_315 = 3'h1 == state ? 1'h0 : _GEN_255; // @[d_cache.scala 132:18 24:24]
  wire  _GEN_325 = 3'h1 == state ? 1'h0 : _GEN_265; // @[d_cache.scala 132:18 24:24]
  wire  _GEN_336 = 3'h1 == state ? 1'h0 : _GEN_276; // @[d_cache.scala 132:18 24:24]
  wire [39:0] _GEN_339 = 3'h1 == state ? {{8'd0}, write_back_addr} : _GEN_279; // @[d_cache.scala 132:18 71:34]
  wire [63:0] _GEN_350 = 3'h0 == state ? {{32'd0}, io_from_lsu_araddr} : _GEN_298; // @[d_cache.scala 132:18]
  wire [39:0] _GEN_402 = 3'h0 == state ? {{8'd0}, write_back_addr} : _GEN_339; // @[d_cache.scala 132:18 71:34]
  wire [39:0] _GEN_246 = reset ? 40'h0 : _GEN_402; // @[d_cache.scala 71:{34,34}]
  assign cacheLine_rdata_MPORT_en = 1'h1;
  assign cacheLine_rdata_MPORT_addr = tagIndex[5:0];
  assign cacheLine_rdata_MPORT_data = cacheLine[cacheLine_rdata_MPORT_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_rdata_MPORT_1_en = 1'h1;
  assign cacheLine_rdata_MPORT_1_addr = tagIndex[5:0];
  assign cacheLine_rdata_MPORT_1_data = cacheLine[cacheLine_rdata_MPORT_1_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_ldata_MPORT_en = 1'h1;
  assign cacheLine_ldata_MPORT_addr = tagIndex[5:0];
  assign cacheLine_ldata_MPORT_data = cacheLine[cacheLine_ldata_MPORT_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_ldata_MPORT_1_en = 1'h1;
  assign cacheLine_ldata_MPORT_1_addr = tagIndex[5:0];
  assign cacheLine_ldata_MPORT_1_data = cacheLine[cacheLine_ldata_MPORT_1_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_write_back_data_MPORT_en = _T ? 1'h0 : _GEN_336;
  assign cacheLine_write_back_data_MPORT_addr = replaceIndex[5:0];
  assign cacheLine_write_back_data_MPORT_data = cacheLine[cacheLine_write_back_data_MPORT_addr]; // @[d_cache.scala 24:24]
  assign cacheLine_MPORT_data = offset[3] ? _T_9 : _T_10;
  assign cacheLine_MPORT_addr = tagIndex[5:0];
  assign cacheLine_MPORT_mask = 1'h1;
  assign cacheLine_MPORT_en = _T ? 1'h0 : _GEN_293;
  assign cacheLine_MPORT_2_data = {receive_data_1,receive_data_0};
  assign cacheLine_MPORT_2_addr = unvalidIndex[5:0];
  assign cacheLine_MPORT_2_mask = 1'h1;
  assign cacheLine_MPORT_2_en = _T ? 1'h0 : _GEN_315;
  assign cacheLine_MPORT_7_data = {receive_data_1,receive_data_0};
  assign cacheLine_MPORT_7_addr = replaceIndex[5:0];
  assign cacheLine_MPORT_7_mask = 1'h1;
  assign cacheLine_MPORT_7_en = _T ? 1'h0 : _GEN_325;
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
  assign validMem_MPORT_4_data = 1'h1;
  assign validMem_MPORT_4_addr = unvalidIndex[5:0];
  assign validMem_MPORT_4_mask = 1'h1;
  assign validMem_MPORT_4_en = _T ? 1'h0 : _GEN_315;
  assign validMem_MPORT_9_data = 1'h1;
  assign validMem_MPORT_9_addr = replaceIndex[5:0];
  assign validMem_MPORT_9_mask = 1'h1;
  assign validMem_MPORT_9_en = _T ? 1'h0 : _GEN_325;
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
  assign tagMem_write_back_addr_MPORT_en = _T ? 1'h0 : _GEN_336;
  assign tagMem_write_back_addr_MPORT_addr = replaceIndex[5:0];
  assign tagMem_write_back_addr_MPORT_data = tagMem[tagMem_write_back_addr_MPORT_addr]; // @[d_cache.scala 28:21]
  assign tagMem_MPORT_3_data = {{8'd0}, tag};
  assign tagMem_MPORT_3_addr = unvalidIndex[5:0];
  assign tagMem_MPORT_3_mask = 1'h1;
  assign tagMem_MPORT_3_en = _T ? 1'h0 : _GEN_315;
  assign tagMem_MPORT_8_data = {{8'd0}, tag};
  assign tagMem_MPORT_8_addr = replaceIndex[5:0];
  assign tagMem_MPORT_8_mask = 1'h1;
  assign tagMem_MPORT_8_en = _T ? 1'h0 : _GEN_325;
  assign dirtyMem_MPORT_12_en = _T ? 1'h0 : _GEN_325;
  assign dirtyMem_MPORT_12_addr = replaceIndex[5:0];
  assign dirtyMem_MPORT_12_data = dirtyMem[dirtyMem_MPORT_12_addr]; // @[d_cache.scala 29:23]
  assign dirtyMem_MPORT_1_data = 1'h1;
  assign dirtyMem_MPORT_1_addr = tagIndex[5:0];
  assign dirtyMem_MPORT_1_mask = 1'h1;
  assign dirtyMem_MPORT_1_en = _T ? 1'h0 : _GEN_293;
  assign dirtyMem_MPORT_13_data = 1'h0;
  assign dirtyMem_MPORT_13_addr = replaceIndex[5:0];
  assign dirtyMem_MPORT_13_mask = 1'h1;
  assign dirtyMem_MPORT_13_en = _T ? 1'h0 : _GEN_336;
  assign quene_replace_way_MPORT_en = 1'h1;
  assign quene_replace_way_MPORT_addr = io_from_lsu_araddr[7:4];
  assign quene_replace_way_MPORT_data = quene[quene_replace_way_MPORT_addr]; // @[d_cache.scala 77:20]
  assign quene_MPORT_6_en = _T ? 1'h0 : _GEN_315;
  assign quene_MPORT_6_addr = io_from_lsu_araddr[7:4];
  assign quene_MPORT_6_data = quene[quene_MPORT_6_addr]; // @[d_cache.scala 77:20]
  assign quene_MPORT_11_en = _T ? 1'h0 : _GEN_325;
  assign quene_MPORT_11_addr = io_from_lsu_araddr[7:4];
  assign quene_MPORT_11_data = quene[quene_MPORT_11_addr]; // @[d_cache.scala 77:20]
  assign quene_MPORT_5_data = _T_24[7:0];
  assign quene_MPORT_5_addr = io_from_lsu_araddr[7:4];
  assign quene_MPORT_5_mask = 1'h1;
  assign quene_MPORT_5_en = _T ? 1'h0 : _GEN_315;
  assign quene_MPORT_10_data = _T_30[7:0];
  assign quene_MPORT_10_addr = io_from_lsu_araddr[7:4];
  assign quene_MPORT_10_mask = 1'h1;
  assign quene_MPORT_10_en = _T ? 1'h0 : _GEN_325;
  assign io_to_lsu_rdata = 3'h0 == state ? _GEN_3 : _GEN_283; // @[d_cache.scala 132:18]
  assign io_to_lsu_rvalid = 3'h0 == state ? _GEN_5 : _GEN_284; // @[d_cache.scala 132:18]
  assign io_to_lsu_bvalid = 3'h0 == state ? _GEN_8 : _GEN_290; // @[d_cache.scala 132:18]
  assign io_to_axi_araddr = _GEN_350[31:0];
  assign io_to_axi_arlen = 3'h0 == state ? 8'h0 : {{7'd0}, _GEN_297}; // @[d_cache.scala 132:18]
  assign io_to_axi_arvalid = 3'h0 == state ? _GEN_13 : _GEN_297; // @[d_cache.scala 132:18]
  assign io_to_axi_awaddr = 3'h0 == state ? _GEN_15 : _GEN_303; // @[d_cache.scala 132:18]
  assign io_to_axi_awlen = 3'h0 == state ? 8'h0 : _GEN_305; // @[d_cache.scala 132:18]
  assign io_to_axi_awvalid = 3'h0 == state ? _GEN_19 : _GEN_304; // @[d_cache.scala 132:18]
  assign io_to_axi_wdata = 3'h0 == state ? _GEN_20 : _GEN_308; // @[d_cache.scala 132:18]
  assign io_to_axi_wstrb = 3'h0 == state ? _GEN_21 : _GEN_309; // @[d_cache.scala 132:18]
  assign io_to_axi_wvalid = 3'h0 == state ? _GEN_23 : _GEN_311; // @[d_cache.scala 132:18]
  assign io_to_axi_bready = 3'h0 == state ? _T_3 : _GEN_312; // @[d_cache.scala 132:18]
  always @(posedge clock) begin
    if (cacheLine_MPORT_en & cacheLine_MPORT_mask) begin
      cacheLine[cacheLine_MPORT_addr] <= cacheLine_MPORT_data; // @[d_cache.scala 24:24]
    end
    if (cacheLine_MPORT_2_en & cacheLine_MPORT_2_mask) begin
      cacheLine[cacheLine_MPORT_2_addr] <= cacheLine_MPORT_2_data; // @[d_cache.scala 24:24]
    end
    if (cacheLine_MPORT_7_en & cacheLine_MPORT_7_mask) begin
      cacheLine[cacheLine_MPORT_7_addr] <= cacheLine_MPORT_7_data; // @[d_cache.scala 24:24]
    end
    if (validMem_MPORT_4_en & validMem_MPORT_4_mask) begin
      validMem[validMem_MPORT_4_addr] <= validMem_MPORT_4_data; // @[d_cache.scala 25:23]
    end
    if (validMem_MPORT_9_en & validMem_MPORT_9_mask) begin
      validMem[validMem_MPORT_9_addr] <= validMem_MPORT_9_data; // @[d_cache.scala 25:23]
    end
    if (tagMem_MPORT_3_en & tagMem_MPORT_3_mask) begin
      tagMem[tagMem_MPORT_3_addr] <= tagMem_MPORT_3_data; // @[d_cache.scala 28:21]
    end
    if (tagMem_MPORT_8_en & tagMem_MPORT_8_mask) begin
      tagMem[tagMem_MPORT_8_addr] <= tagMem_MPORT_8_data; // @[d_cache.scala 28:21]
    end
    if (dirtyMem_MPORT_1_en & dirtyMem_MPORT_1_mask) begin
      dirtyMem[dirtyMem_MPORT_1_addr] <= dirtyMem_MPORT_1_data; // @[d_cache.scala 29:23]
    end
    if (dirtyMem_MPORT_13_en & dirtyMem_MPORT_13_mask) begin
      dirtyMem[dirtyMem_MPORT_13_addr] <= dirtyMem_MPORT_13_data; // @[d_cache.scala 29:23]
    end
    if (quene_MPORT_5_en & quene_MPORT_5_mask) begin
      quene[quene_MPORT_5_addr] <= quene_MPORT_5_data; // @[d_cache.scala 77:20]
    end
    if (quene_MPORT_10_en & quene_MPORT_10_mask) begin
      quene[quene_MPORT_10_addr] <= quene_MPORT_10_data; // @[d_cache.scala 77:20]
    end
    if (reset) begin // @[d_cache.scala 70:34]
      write_back_data <= 128'h0; // @[d_cache.scala 70:34]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 132:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 132:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 132:18]
          write_back_data <= _GEN_220;
        end
      end
    end
    write_back_addr <= _GEN_246[31:0]; // @[d_cache.scala 71:{34,34}]
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_0 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 132:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 132:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 132:18]
          receive_data_0 <= _GEN_179;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 75:31]
      receive_data_1 <= 64'h0; // @[d_cache.scala 75:31]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 132:18]
      if (!(3'h1 == state)) begin // @[d_cache.scala 132:18]
        if (!(3'h2 == state)) begin // @[d_cache.scala 132:18]
          receive_data_1 <= _GEN_180;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 76:30]
      receive_num <= 3'h0; // @[d_cache.scala 76:30]
    end else if (!(3'h0 == state)) begin // @[d_cache.scala 132:18]
      if (3'h1 == state) begin // @[d_cache.scala 132:18]
        if (!(anyMatch)) begin // @[d_cache.scala 148:27]
          receive_num <= 3'h0; // @[d_cache.scala 154:29]
        end
      end else if (!(3'h2 == state)) begin // @[d_cache.scala 132:18]
        receive_num <= _GEN_181;
      end
    end
    if (reset) begin // @[d_cache.scala 103:24]
      state <= 3'h0; // @[d_cache.scala 103:24]
    end else if (3'h0 == state) begin // @[d_cache.scala 132:18]
      if ((io_from_lsu_arvalid | io_from_lsu_awvalid) & io_from_lsu_araddr >= 32'ha0000000) begin // @[d_cache.scala 134:99]
        state <= 3'h0; // @[d_cache.scala 137:23]
      end else if (io_from_lsu_arvalid) begin // @[d_cache.scala 138:44]
        state <= 3'h1; // @[d_cache.scala 139:23]
      end else begin
        state <= _GEN_0;
      end
    end else if (3'h1 == state) begin // @[d_cache.scala 132:18]
      if (anyMatch) begin // @[d_cache.scala 148:27]
        state <= 3'h0;
      end else begin
        state <= 3'h3; // @[d_cache.scala 153:23]
      end
    end else if (3'h2 == state) begin // @[d_cache.scala 132:18]
      state <= _GEN_30;
    end else begin
      state <= _GEN_182;
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
  _RAND_4 = {1{`RANDOM}};
  for (initvar = 0; initvar < 16; initvar = initvar+1)
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
module AXI(
  input         clock,
  input         reset,
  input  [31:0] io_axi_in_araddr,
  input  [7:0]  io_axi_in_arlen,
  input         io_axi_in_arvalid,
  input         io_axi_in_rready,
  input  [31:0] io_axi_in_awaddr,
  input  [7:0]  io_axi_in_awlen,
  input         io_axi_in_awvalid,
  input  [63:0] io_axi_in_wdata,
  input  [7:0]  io_axi_in_wstrb,
  input         io_axi_in_wvalid,
  input         io_axi_in_bready,
  output [63:0] io_axi_out_rdata,
  output        io_axi_out_rlast,
  output        io_axi_out_wready,
  output        io_axi_out_bvalid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] Mem_modle_Raddr; // @[AXI.scala 30:27]
  wire [63:0] Mem_modle_Rdata; // @[AXI.scala 30:27]
  wire [63:0] Mem_modle_Waddr; // @[AXI.scala 30:27]
  wire [63:0] Mem_modle_Wdata; // @[AXI.scala 30:27]
  wire [7:0] Mem_modle_Wmask; // @[AXI.scala 30:27]
  wire  Mem_modle_Write_en; // @[AXI.scala 30:27]
  wire  Mem_modle_Read_en; // @[AXI.scala 30:27]
  reg  axi_wready; // @[AXI.scala 14:29]
  reg  axi_bvalid; // @[AXI.scala 17:29]
  reg [7:0] arlen; // @[AXI.scala 22:24]
  reg [7:0] awlen; // @[AXI.scala 23:24]
  reg [63:0] araddr; // @[AXI.scala 24:25]
  reg [63:0] awaddr; // @[AXI.scala 25:25]
  reg [2:0] state; // @[AXI.scala 28:24]
  wire  _Mem_modle_io_Raddr_T = state == 3'h0; // @[AXI.scala 31:36]
  wire [7:0] _awlen_T_1 = io_axi_in_awlen - 8'h1; // @[AXI.scala 54:46]
  wire [31:0] _awaddr_T_1 = io_axi_in_awaddr + 32'h8; // @[AXI.scala 55:48]
  wire  _GEN_2 = io_axi_in_awlen == 8'h0 ? 1'h0 : axi_wready; // @[AXI.scala 14:29 44:44 47:32]
  wire  _GEN_3 = io_axi_in_awlen == 8'h0 | axi_bvalid; // @[AXI.scala 17:29 44:44 48:32]
  wire  _T_3 = io_axi_in_arlen == 8'h0; // @[AXI.scala 64:37]
  wire [7:0] _arlen_T_1 = io_axi_in_arlen - 8'h1; // @[AXI.scala 68:46]
  wire [31:0] _araddr_T_1 = io_axi_in_araddr + 32'h8; // @[AXI.scala 69:48]
  wire [2:0] _GEN_6 = io_axi_in_arlen == 8'h0 ? 3'h0 : 3'h1; // @[AXI.scala 64:44 65:27 67:27]
  wire [7:0] _GEN_7 = io_axi_in_arlen == 8'h0 ? arlen : _arlen_T_1; // @[AXI.scala 22:24 64:44 68:27]
  wire [63:0] _GEN_8 = io_axi_in_arlen == 8'h0 ? araddr : {{32'd0}, _araddr_T_1}; // @[AXI.scala 24:25 64:44 69:28]
  wire  _GEN_16 = io_axi_in_awvalid & io_axi_in_wvalid ? _GEN_2 : axi_wready; // @[AXI.scala 14:29 43:56]
  wire [63:0] _awaddr_T_3 = awaddr + 64'h8; // @[AXI.scala 85:38]
  wire [7:0] _awlen_T_3 = awlen - 8'h1; // @[AXI.scala 86:36]
  wire [63:0] _GEN_23 = io_axi_in_wvalid & axi_wready ? _awaddr_T_3 : awaddr; // @[AXI.scala 25:25 84:60 85:28]
  wire [7:0] _GEN_24 = io_axi_in_wvalid & axi_wready ? _awlen_T_3 : awlen; // @[AXI.scala 23:24 84:60 86:27]
  wire  _GEN_25 = awlen == 8'h0 ? 1'h0 : axi_wready; // @[AXI.scala 77:30 78:28 14:29]
  wire  _GEN_27 = awlen == 8'h0 | axi_bvalid; // @[AXI.scala 77:30 81:28 17:29]
  wire  _T_9 = arlen == 8'h0; // @[AXI.scala 91:23]
  wire [2:0] _GEN_31 = io_axi_in_rready ? 3'h0 : state; // @[AXI.scala 28:24 92:39 93:27]
  wire [63:0] _araddr_T_3 = araddr + 64'h8; // @[AXI.scala 99:38]
  wire [7:0] _arlen_T_3 = arlen - 8'h1; // @[AXI.scala 100:36]
  wire [63:0] _GEN_33 = io_axi_in_rready ? _araddr_T_3 : araddr; // @[AXI.scala 24:25 98:39 99:28]
  wire [7:0] _GEN_34 = io_axi_in_rready ? _arlen_T_3 : arlen; // @[AXI.scala 100:27 22:24 98:39]
  wire [2:0] _GEN_35 = arlen == 8'h0 ? _GEN_31 : state; // @[AXI.scala 28:24 91:30]
  wire [63:0] _GEN_37 = arlen == 8'h0 ? araddr : _GEN_33; // @[AXI.scala 24:25 91:30]
  wire [7:0] _GEN_38 = arlen == 8'h0 ? arlen : _GEN_34; // @[AXI.scala 22:24 91:30]
  wire [2:0] _GEN_39 = io_axi_in_bready ? 3'h0 : state; // @[AXI.scala 105:35 106:23 28:24]
  wire  _GEN_40 = io_axi_in_bready ? 1'h0 : axi_bvalid; // @[AXI.scala 105:35 107:28 17:29]
  wire  _GEN_42 = io_axi_in_bready | axi_wready; // @[AXI.scala 105:35 109:28 14:29]
  wire [2:0] _GEN_43 = 3'h3 == state ? _GEN_39 : state; // @[AXI.scala 41:18 28:24]
  wire  _GEN_44 = 3'h3 == state ? _GEN_40 : axi_bvalid; // @[AXI.scala 41:18 17:29]
  wire  _GEN_46 = 3'h3 == state ? _GEN_42 : axi_wready; // @[AXI.scala 41:18 14:29]
  wire  _GEN_53 = 3'h1 == state ? axi_wready : _GEN_46; // @[AXI.scala 41:18 14:29]
  wire  _GEN_54 = 3'h2 == state ? _GEN_25 : _GEN_53; // @[AXI.scala 41:18]
  wire  _GEN_65 = 3'h0 == state ? _GEN_16 : _GEN_54; // @[AXI.scala 41:18]
  MEM Mem_modle ( // @[AXI.scala 30:27]
    .Raddr(Mem_modle_Raddr),
    .Rdata(Mem_modle_Rdata),
    .Waddr(Mem_modle_Waddr),
    .Wdata(Mem_modle_Wdata),
    .Wmask(Mem_modle_Wmask),
    .Write_en(Mem_modle_Write_en),
    .Read_en(Mem_modle_Read_en)
  );
  assign io_axi_out_rdata = Mem_modle_Rdata; // @[AXI.scala 121:22]
  assign io_axi_out_rlast = state == 3'h1 & _T_9 | _T_3; // @[AXI.scala 123:58]
  assign io_axi_out_wready = axi_wready; // @[AXI.scala 125:23]
  assign io_axi_out_bvalid = axi_bvalid; // @[AXI.scala 126:23]
  assign Mem_modle_Raddr = state == 3'h0 ? {{32'd0}, io_axi_in_araddr} : araddr; // @[AXI.scala 31:30]
  assign Mem_modle_Waddr = _Mem_modle_io_Raddr_T ? {{32'd0}, io_axi_in_awaddr} : awaddr; // @[AXI.scala 32:30]
  assign Mem_modle_Wdata = io_axi_in_wdata; // @[AXI.scala 33:24]
  assign Mem_modle_Wmask = io_axi_in_wstrb; // @[AXI.scala 34:24]
  assign Mem_modle_Write_en = axi_wready & io_axi_in_awvalid; // @[AXI.scala 35:48]
  assign Mem_modle_Read_en = io_axi_in_arvalid; // @[AXI.scala 36:47]
  always @(posedge clock) begin
    axi_wready <= reset | _GEN_65; // @[AXI.scala 14:{29,29}]
    if (reset) begin // @[AXI.scala 17:29]
      axi_bvalid <= 1'h0; // @[AXI.scala 17:29]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (io_axi_in_awvalid & io_axi_in_wvalid) begin // @[AXI.scala 43:56]
        axi_bvalid <= _GEN_3;
      end
    end else if (3'h2 == state) begin // @[AXI.scala 41:18]
      axi_bvalid <= _GEN_27;
    end else if (!(3'h1 == state)) begin // @[AXI.scala 41:18]
      axi_bvalid <= _GEN_44;
    end
    if (reset) begin // @[AXI.scala 22:24]
      arlen <= 8'h0; // @[AXI.scala 22:24]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (!(io_axi_in_awvalid & io_axi_in_wvalid)) begin // @[AXI.scala 43:56]
        if (io_axi_in_arvalid) begin // @[AXI.scala 63:42]
          arlen <= _GEN_7;
        end
      end
    end else if (!(3'h2 == state)) begin // @[AXI.scala 41:18]
      if (3'h1 == state) begin // @[AXI.scala 41:18]
        arlen <= _GEN_38;
      end
    end
    if (reset) begin // @[AXI.scala 23:24]
      awlen <= 8'h0; // @[AXI.scala 23:24]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (io_axi_in_awvalid & io_axi_in_wvalid) begin // @[AXI.scala 43:56]
        if (!(io_axi_in_awlen == 8'h0)) begin // @[AXI.scala 44:44]
          awlen <= _awlen_T_1; // @[AXI.scala 54:27]
        end
      end
    end else if (3'h2 == state) begin // @[AXI.scala 41:18]
      if (!(awlen == 8'h0)) begin // @[AXI.scala 77:30]
        awlen <= _GEN_24;
      end
    end
    if (reset) begin // @[AXI.scala 24:25]
      araddr <= 64'h0; // @[AXI.scala 24:25]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (!(io_axi_in_awvalid & io_axi_in_wvalid)) begin // @[AXI.scala 43:56]
        if (io_axi_in_arvalid) begin // @[AXI.scala 63:42]
          araddr <= _GEN_8;
        end
      end
    end else if (!(3'h2 == state)) begin // @[AXI.scala 41:18]
      if (3'h1 == state) begin // @[AXI.scala 41:18]
        araddr <= _GEN_37;
      end
    end
    if (reset) begin // @[AXI.scala 25:25]
      awaddr <= 64'h0; // @[AXI.scala 25:25]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (io_axi_in_awvalid & io_axi_in_wvalid) begin // @[AXI.scala 43:56]
        if (!(io_axi_in_awlen == 8'h0)) begin // @[AXI.scala 44:44]
          awaddr <= {{32'd0}, _awaddr_T_1}; // @[AXI.scala 55:28]
        end
      end
    end else if (3'h2 == state) begin // @[AXI.scala 41:18]
      if (!(awlen == 8'h0)) begin // @[AXI.scala 77:30]
        awaddr <= _GEN_23;
      end
    end
    if (reset) begin // @[AXI.scala 28:24]
      state <= 3'h0; // @[AXI.scala 28:24]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (io_axi_in_awvalid & io_axi_in_wvalid) begin // @[AXI.scala 43:56]
        if (io_axi_in_awlen == 8'h0) begin // @[AXI.scala 44:44]
          state <= 3'h3; // @[AXI.scala 45:27]
        end else begin
          state <= 3'h2; // @[AXI.scala 50:27]
        end
      end else if (io_axi_in_arvalid) begin // @[AXI.scala 63:42]
        state <= _GEN_6;
      end
    end else if (3'h2 == state) begin // @[AXI.scala 41:18]
      if (awlen == 8'h0) begin // @[AXI.scala 77:30]
        state <= 3'h3; // @[AXI.scala 82:23]
      end
    end else if (3'h1 == state) begin // @[AXI.scala 41:18]
      state <= _GEN_35;
    end else begin
      state <= _GEN_43;
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
  axi_wready = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  axi_bvalid = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  arlen = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  awlen = _RAND_3[7:0];
  _RAND_4 = {2{`RANDOM}};
  araddr = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  awaddr = _RAND_5[63:0];
  _RAND_6 = {1{`RANDOM}};
  state = _RAND_6[2:0];
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
  output        io_step,
  output        io_skip
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  Register_clock; // @[top.scala 16:25]
  wire [4:0] Register_io_raddr1; // @[top.scala 16:25]
  wire [4:0] Register_io_raddr2; // @[top.scala 16:25]
  wire [63:0] Register_io_rdata1; // @[top.scala 16:25]
  wire [63:0] Register_io_rdata2; // @[top.scala 16:25]
  wire  Register_io_we; // @[top.scala 16:25]
  wire [4:0] Register_io_waddr; // @[top.scala 16:25]
  wire [63:0] Register_io_wdata; // @[top.scala 16:25]
  wire  IFU_clock; // @[top.scala 17:21]
  wire  IFU_reset; // @[top.scala 17:21]
  wire  IFU_io_ds_allowin; // @[top.scala 17:21]
  wire  IFU_io_ds_ready_go; // @[top.scala 17:21]
  wire  IFU_io_ds_valid; // @[top.scala 17:21]
  wire  IFU_io_br_taken; // @[top.scala 17:21]
  wire [63:0] IFU_io_br_target; // @[top.scala 17:21]
  wire [63:0] IFU_io_to_ds_pc; // @[top.scala 17:21]
  wire  IFU_io_fs_to_ds_valid; // @[top.scala 17:21]
  wire [31:0] IFU_io_inst; // @[top.scala 17:21]
  wire  IFU_io_axi_in_arready; // @[top.scala 17:21]
  wire [63:0] IFU_io_axi_in_rdata; // @[top.scala 17:21]
  wire  IFU_io_axi_in_rvalid; // @[top.scala 17:21]
  wire [31:0] IFU_io_axi_out_araddr; // @[top.scala 17:21]
  wire  IFU_io_axi_out_arvalid; // @[top.scala 17:21]
  wire  IFU_io_axi_out_rready; // @[top.scala 17:21]
  wire  IFU_io_fence; // @[top.scala 17:21]
  wire  IFU_io_clear_cache; // @[top.scala 17:21]
  wire  IFU_io_cache_init; // @[top.scala 17:21]
  wire  IDU_clock; // @[top.scala 18:21]
  wire  IDU_reset; // @[top.scala 18:21]
  wire [63:0] IDU_io_pc; // @[top.scala 18:21]
  wire  IDU_io_fs_to_ds_valid; // @[top.scala 18:21]
  wire  IDU_io_ds_to_es_valid; // @[top.scala 18:21]
  wire  IDU_io_es_allowin; // @[top.scala 18:21]
  wire [31:0] IDU_io_from_fs_inst; // @[top.scala 18:21]
  wire  IDU_io_br_taken; // @[top.scala 18:21]
  wire [63:0] IDU_io_br_target; // @[top.scala 18:21]
  wire  IDU_io_ds_allowin; // @[top.scala 18:21]
  wire  IDU_io_ds_ready_go; // @[top.scala 18:21]
  wire  IDU_io_fence; // @[top.scala 18:21]
  wire [4:0] IDU_io_raddr1; // @[top.scala 18:21]
  wire [4:0] IDU_io_raddr2; // @[top.scala 18:21]
  wire [63:0] IDU_io_rdata1; // @[top.scala 18:21]
  wire [63:0] IDU_io_rdata2; // @[top.scala 18:21]
  wire [63:0] IDU_io_to_es_pc; // @[top.scala 18:21]
  wire [31:0] IDU_io_ALUop; // @[top.scala 18:21]
  wire [63:0] IDU_io_src1; // @[top.scala 18:21]
  wire [63:0] IDU_io_src2; // @[top.scala 18:21]
  wire [4:0] IDU_io_rf_dst; // @[top.scala 18:21]
  wire [63:0] IDU_io_store_data; // @[top.scala 18:21]
  wire  IDU_io_ctrl_sign_reg_write; // @[top.scala 18:21]
  wire  IDU_io_ctrl_sign_Writemem_en; // @[top.scala 18:21]
  wire  IDU_io_ctrl_sign_Readmem_en; // @[top.scala 18:21]
  wire [7:0] IDU_io_ctrl_sign_Wmask; // @[top.scala 18:21]
  wire [2:0] IDU_io_load_type; // @[top.scala 18:21]
  wire  IDU_io_es_ld; // @[top.scala 18:21]
  wire [63:0] IDU_io_es_fwd_res; // @[top.scala 18:21]
  wire [63:0] IDU_io_ms_fwd_res; // @[top.scala 18:21]
  wire [63:0] IDU_io_ws_fwd_res; // @[top.scala 18:21]
  wire  IDU_io_es_fwd_ready; // @[top.scala 18:21]
  wire  IDU_io_ms_fwd_ready; // @[top.scala 18:21]
  wire  IDU_io_es_rf_we; // @[top.scala 18:21]
  wire  IDU_io_ms_rf_we; // @[top.scala 18:21]
  wire  IDU_io_ws_rf_we; // @[top.scala 18:21]
  wire  IDU_io_es_valid; // @[top.scala 18:21]
  wire  IDU_io_ms_valid; // @[top.scala 18:21]
  wire  IDU_io_ws_valid; // @[top.scala 18:21]
  wire [4:0] IDU_io_es_rf_dst; // @[top.scala 18:21]
  wire [4:0] IDU_io_ms_rf_dst; // @[top.scala 18:21]
  wire [4:0] IDU_io_ws_rf_dst; // @[top.scala 18:21]
  wire  IDU_io_ds_valid; // @[top.scala 18:21]
  wire  EXU_clock; // @[top.scala 19:21]
  wire  EXU_reset; // @[top.scala 19:21]
  wire [63:0] EXU_io_pc; // @[top.scala 19:21]
  wire  EXU_io_ds_to_es_valid; // @[top.scala 19:21]
  wire  EXU_io_ms_allowin; // @[top.scala 19:21]
  wire  EXU_io_es_allowin; // @[top.scala 19:21]
  wire [31:0] EXU_io_ALUop; // @[top.scala 19:21]
  wire [63:0] EXU_io_src1_value; // @[top.scala 19:21]
  wire [63:0] EXU_io_src2_value; // @[top.scala 19:21]
  wire [4:0] EXU_io_rf_dst; // @[top.scala 19:21]
  wire [63:0] EXU_io_store_data; // @[top.scala 19:21]
  wire  EXU_io_es_to_ms_valid; // @[top.scala 19:21]
  wire [2:0] EXU_io_load_type; // @[top.scala 19:21]
  wire [63:0] EXU_io_to_ms_pc; // @[top.scala 19:21]
  wire [63:0] EXU_io_to_ms_alures; // @[top.scala 19:21]
  wire [63:0] EXU_io_to_ms_store_data; // @[top.scala 19:21]
  wire  EXU_io_to_ms_wen; // @[top.scala 19:21]
  wire [7:0] EXU_io_to_ms_wstrb; // @[top.scala 19:21]
  wire  EXU_io_to_ms_ren; // @[top.scala 19:21]
  wire [63:0] EXU_io_to_ms_maddr; // @[top.scala 19:21]
  wire [4:0] EXU_io_to_ms_rf_dst; // @[top.scala 19:21]
  wire  EXU_io_to_ms_rf_we; // @[top.scala 19:21]
  wire [2:0] EXU_io_to_ms_load_type; // @[top.scala 19:21]
  wire  EXU_io_ctrl_sign_reg_write; // @[top.scala 19:21]
  wire  EXU_io_ctrl_sign_Writemem_en; // @[top.scala 19:21]
  wire  EXU_io_ctrl_sign_Readmem_en; // @[top.scala 19:21]
  wire [7:0] EXU_io_ctrl_sign_Wmask; // @[top.scala 19:21]
  wire  EXU_io_es_valid; // @[top.scala 19:21]
  wire  EXU_io_es_rf_we; // @[top.scala 19:21]
  wire [4:0] EXU_io_es_rf_dst; // @[top.scala 19:21]
  wire  EXU_io_es_fwd_ready; // @[top.scala 19:21]
  wire [63:0] EXU_io_es_fwd_res; // @[top.scala 19:21]
  wire  EXU_io_es_ld; // @[top.scala 19:21]
  wire  LSU_clock; // @[top.scala 20:21]
  wire  LSU_reset; // @[top.scala 20:21]
  wire [63:0] LSU_io_pc; // @[top.scala 20:21]
  wire  LSU_io_es_to_ms_valid; // @[top.scala 20:21]
  wire  LSU_io_ms_allowin; // @[top.scala 20:21]
  wire  LSU_io_rf_we; // @[top.scala 20:21]
  wire [4:0] LSU_io_rf_dst; // @[top.scala 20:21]
  wire [63:0] LSU_io_alu_res; // @[top.scala 20:21]
  wire [63:0] LSU_io_store_data; // @[top.scala 20:21]
  wire [2:0] LSU_io_load_type; // @[top.scala 20:21]
  wire  LSU_io_wen; // @[top.scala 20:21]
  wire [7:0] LSU_io_wstrb; // @[top.scala 20:21]
  wire  LSU_io_ren; // @[top.scala 20:21]
  wire [63:0] LSU_io_maddr; // @[top.scala 20:21]
  wire [63:0] LSU_io_to_ws_pc; // @[top.scala 20:21]
  wire [63:0] LSU_io_ms_final_res; // @[top.scala 20:21]
  wire  LSU_io_ms_to_ws_valid; // @[top.scala 20:21]
  wire  LSU_io_to_ws_rf_we; // @[top.scala 20:21]
  wire [4:0] LSU_io_to_ws_rf_dst; // @[top.scala 20:21]
  wire  LSU_io_to_ws_device; // @[top.scala 20:21]
  wire  LSU_io_ms_valid; // @[top.scala 20:21]
  wire  LSU_io_ms_rf_we; // @[top.scala 20:21]
  wire [4:0] LSU_io_ms_rf_dst; // @[top.scala 20:21]
  wire  LSU_io_ms_fwd_ready; // @[top.scala 20:21]
  wire [63:0] LSU_io_ms_fwd_res; // @[top.scala 20:21]
  wire [63:0] LSU_io_axi_in_rdata; // @[top.scala 20:21]
  wire  LSU_io_axi_in_rvalid; // @[top.scala 20:21]
  wire  LSU_io_axi_in_bvalid; // @[top.scala 20:21]
  wire [31:0] LSU_io_axi_out_araddr; // @[top.scala 20:21]
  wire  LSU_io_axi_out_arvalid; // @[top.scala 20:21]
  wire [31:0] LSU_io_axi_out_awaddr; // @[top.scala 20:21]
  wire  LSU_io_axi_out_awvalid; // @[top.scala 20:21]
  wire [63:0] LSU_io_axi_out_wdata; // @[top.scala 20:21]
  wire [7:0] LSU_io_axi_out_wstrb; // @[top.scala 20:21]
  wire  LSU_io_axi_out_wvalid; // @[top.scala 20:21]
  wire  WBU_clock; // @[top.scala 21:21]
  wire  WBU_reset; // @[top.scala 21:21]
  wire [63:0] WBU_io_pc; // @[top.scala 21:21]
  wire  WBU_io_ms_to_ws_valid; // @[top.scala 21:21]
  wire [63:0] WBU_io_ms_final_res; // @[top.scala 21:21]
  wire  WBU_io_rf_we; // @[top.scala 21:21]
  wire [4:0] WBU_io_rf_dst; // @[top.scala 21:21]
  wire  WBU_io_we; // @[top.scala 21:21]
  wire [4:0] WBU_io_waddr; // @[top.scala 21:21]
  wire [63:0] WBU_io_wdata; // @[top.scala 21:21]
  wire  WBU_io_ws_valid; // @[top.scala 21:21]
  wire  WBU_io_ws_rf_we; // @[top.scala 21:21]
  wire [4:0] WBU_io_ws_rf_dst; // @[top.scala 21:21]
  wire [63:0] WBU_io_ws_fwd_res; // @[top.scala 21:21]
  wire [63:0] WBU_io_ws_pc; // @[top.scala 21:21]
  wire  WBU_io_device_access; // @[top.scala 21:21]
  wire  WBU_io_skip; // @[top.scala 21:21]
  wire  arbiter_clock; // @[top.scala 22:25]
  wire  arbiter_reset; // @[top.scala 22:25]
  wire [31:0] arbiter_io_ifu_axi_in_araddr; // @[top.scala 22:25]
  wire [7:0] arbiter_io_ifu_axi_in_arlen; // @[top.scala 22:25]
  wire  arbiter_io_ifu_axi_in_arvalid; // @[top.scala 22:25]
  wire  arbiter_io_ifu_axi_in_rready; // @[top.scala 22:25]
  wire [63:0] arbiter_io_ifu_axi_out_rdata; // @[top.scala 22:25]
  wire  arbiter_io_ifu_axi_out_rlast; // @[top.scala 22:25]
  wire  arbiter_io_ifu_axi_out_rvalid; // @[top.scala 22:25]
  wire [31:0] arbiter_io_lsu_axi_in_araddr; // @[top.scala 22:25]
  wire [7:0] arbiter_io_lsu_axi_in_arlen; // @[top.scala 22:25]
  wire  arbiter_io_lsu_axi_in_arvalid; // @[top.scala 22:25]
  wire [31:0] arbiter_io_lsu_axi_in_awaddr; // @[top.scala 22:25]
  wire [7:0] arbiter_io_lsu_axi_in_awlen; // @[top.scala 22:25]
  wire  arbiter_io_lsu_axi_in_awvalid; // @[top.scala 22:25]
  wire [63:0] arbiter_io_lsu_axi_in_wdata; // @[top.scala 22:25]
  wire [7:0] arbiter_io_lsu_axi_in_wstrb; // @[top.scala 22:25]
  wire  arbiter_io_lsu_axi_in_wvalid; // @[top.scala 22:25]
  wire  arbiter_io_lsu_axi_in_bready; // @[top.scala 22:25]
  wire [63:0] arbiter_io_lsu_axi_out_rdata; // @[top.scala 22:25]
  wire  arbiter_io_lsu_axi_out_rlast; // @[top.scala 22:25]
  wire  arbiter_io_lsu_axi_out_rvalid; // @[top.scala 22:25]
  wire  arbiter_io_lsu_axi_out_wready; // @[top.scala 22:25]
  wire  arbiter_io_lsu_axi_out_bvalid; // @[top.scala 22:25]
  wire [63:0] arbiter_io_axi_in_rdata; // @[top.scala 22:25]
  wire  arbiter_io_axi_in_rlast; // @[top.scala 22:25]
  wire  arbiter_io_axi_in_wready; // @[top.scala 22:25]
  wire  arbiter_io_axi_in_bvalid; // @[top.scala 22:25]
  wire [31:0] arbiter_io_axi_out_araddr; // @[top.scala 22:25]
  wire [7:0] arbiter_io_axi_out_arlen; // @[top.scala 22:25]
  wire  arbiter_io_axi_out_arvalid; // @[top.scala 22:25]
  wire  arbiter_io_axi_out_rready; // @[top.scala 22:25]
  wire [31:0] arbiter_io_axi_out_awaddr; // @[top.scala 22:25]
  wire [7:0] arbiter_io_axi_out_awlen; // @[top.scala 22:25]
  wire  arbiter_io_axi_out_awvalid; // @[top.scala 22:25]
  wire [63:0] arbiter_io_axi_out_wdata; // @[top.scala 22:25]
  wire [7:0] arbiter_io_axi_out_wstrb; // @[top.scala 22:25]
  wire  arbiter_io_axi_out_wvalid; // @[top.scala 22:25]
  wire  arbiter_io_axi_out_bready; // @[top.scala 22:25]
  wire  i_cache_clock; // @[top.scala 23:25]
  wire  i_cache_reset; // @[top.scala 23:25]
  wire [31:0] i_cache_io_from_ifu_araddr; // @[top.scala 23:25]
  wire  i_cache_io_from_ifu_arvalid; // @[top.scala 23:25]
  wire  i_cache_io_from_ifu_rready; // @[top.scala 23:25]
  wire  i_cache_io_to_ifu_arready; // @[top.scala 23:25]
  wire [63:0] i_cache_io_to_ifu_rdata; // @[top.scala 23:25]
  wire  i_cache_io_to_ifu_rvalid; // @[top.scala 23:25]
  wire [31:0] i_cache_io_to_axi_araddr; // @[top.scala 23:25]
  wire [7:0] i_cache_io_to_axi_arlen; // @[top.scala 23:25]
  wire  i_cache_io_to_axi_arvalid; // @[top.scala 23:25]
  wire  i_cache_io_to_axi_rready; // @[top.scala 23:25]
  wire [63:0] i_cache_io_from_axi_rdata; // @[top.scala 23:25]
  wire  i_cache_io_from_axi_rlast; // @[top.scala 23:25]
  wire  i_cache_io_from_axi_rvalid; // @[top.scala 23:25]
  wire  i_cache_io_cache_init; // @[top.scala 23:25]
  wire  i_cache_io_clear_cache; // @[top.scala 23:25]
  wire  d_cache_clock; // @[top.scala 24:25]
  wire  d_cache_reset; // @[top.scala 24:25]
  wire [31:0] d_cache_io_from_lsu_araddr; // @[top.scala 24:25]
  wire  d_cache_io_from_lsu_arvalid; // @[top.scala 24:25]
  wire [31:0] d_cache_io_from_lsu_awaddr; // @[top.scala 24:25]
  wire  d_cache_io_from_lsu_awvalid; // @[top.scala 24:25]
  wire [63:0] d_cache_io_from_lsu_wdata; // @[top.scala 24:25]
  wire [7:0] d_cache_io_from_lsu_wstrb; // @[top.scala 24:25]
  wire  d_cache_io_from_lsu_wvalid; // @[top.scala 24:25]
  wire [63:0] d_cache_io_to_lsu_rdata; // @[top.scala 24:25]
  wire  d_cache_io_to_lsu_rvalid; // @[top.scala 24:25]
  wire  d_cache_io_to_lsu_bvalid; // @[top.scala 24:25]
  wire [31:0] d_cache_io_to_axi_araddr; // @[top.scala 24:25]
  wire [7:0] d_cache_io_to_axi_arlen; // @[top.scala 24:25]
  wire  d_cache_io_to_axi_arvalid; // @[top.scala 24:25]
  wire [31:0] d_cache_io_to_axi_awaddr; // @[top.scala 24:25]
  wire [7:0] d_cache_io_to_axi_awlen; // @[top.scala 24:25]
  wire  d_cache_io_to_axi_awvalid; // @[top.scala 24:25]
  wire [63:0] d_cache_io_to_axi_wdata; // @[top.scala 24:25]
  wire [7:0] d_cache_io_to_axi_wstrb; // @[top.scala 24:25]
  wire  d_cache_io_to_axi_wvalid; // @[top.scala 24:25]
  wire  d_cache_io_to_axi_bready; // @[top.scala 24:25]
  wire [63:0] d_cache_io_from_axi_rdata; // @[top.scala 24:25]
  wire  d_cache_io_from_axi_rlast; // @[top.scala 24:25]
  wire  d_cache_io_from_axi_rvalid; // @[top.scala 24:25]
  wire  d_cache_io_from_axi_wready; // @[top.scala 24:25]
  wire  d_cache_io_from_axi_bvalid; // @[top.scala 24:25]
  wire  axi_clock; // @[top.scala 25:21]
  wire  axi_reset; // @[top.scala 25:21]
  wire [31:0] axi_io_axi_in_araddr; // @[top.scala 25:21]
  wire [7:0] axi_io_axi_in_arlen; // @[top.scala 25:21]
  wire  axi_io_axi_in_arvalid; // @[top.scala 25:21]
  wire  axi_io_axi_in_rready; // @[top.scala 25:21]
  wire [31:0] axi_io_axi_in_awaddr; // @[top.scala 25:21]
  wire [7:0] axi_io_axi_in_awlen; // @[top.scala 25:21]
  wire  axi_io_axi_in_awvalid; // @[top.scala 25:21]
  wire [63:0] axi_io_axi_in_wdata; // @[top.scala 25:21]
  wire [7:0] axi_io_axi_in_wstrb; // @[top.scala 25:21]
  wire  axi_io_axi_in_wvalid; // @[top.scala 25:21]
  wire  axi_io_axi_in_bready; // @[top.scala 25:21]
  wire [63:0] axi_io_axi_out_rdata; // @[top.scala 25:21]
  wire  axi_io_axi_out_rlast; // @[top.scala 25:21]
  wire  axi_io_axi_out_wready; // @[top.scala 25:21]
  wire  axi_io_axi_out_bvalid; // @[top.scala 25:21]
  wire [31:0] dpi_flag; // @[top.scala 121:21]
  wire [31:0] dpi_ecall_flag; // @[top.scala 121:21]
  wire [63:0] dpi_pc; // @[top.scala 121:21]
  reg  diff_step; // @[top.scala 115:28]
  reg  skip; // @[top.scala 118:23]
  wire [63:0] _dpi_io_pc_T = IDU_io_ds_valid ? EXU_io_pc : IDU_io_pc; // @[top.scala 124:96]
  wire [63:0] _dpi_io_pc_T_1 = EXU_io_es_valid ? LSU_io_pc : _dpi_io_pc_T; // @[top.scala 124:72]
  wire [63:0] _dpi_io_pc_T_2 = LSU_io_ms_valid ? WBU_io_pc : _dpi_io_pc_T_1; // @[top.scala 124:48]
  Register Register ( // @[top.scala 16:25]
    .clock(Register_clock),
    .io_raddr1(Register_io_raddr1),
    .io_raddr2(Register_io_raddr2),
    .io_rdata1(Register_io_rdata1),
    .io_rdata2(Register_io_rdata2),
    .io_we(Register_io_we),
    .io_waddr(Register_io_waddr),
    .io_wdata(Register_io_wdata)
  );
  IFU IFU ( // @[top.scala 17:21]
    .clock(IFU_clock),
    .reset(IFU_reset),
    .io_ds_allowin(IFU_io_ds_allowin),
    .io_ds_ready_go(IFU_io_ds_ready_go),
    .io_ds_valid(IFU_io_ds_valid),
    .io_br_taken(IFU_io_br_taken),
    .io_br_target(IFU_io_br_target),
    .io_to_ds_pc(IFU_io_to_ds_pc),
    .io_fs_to_ds_valid(IFU_io_fs_to_ds_valid),
    .io_inst(IFU_io_inst),
    .io_axi_in_arready(IFU_io_axi_in_arready),
    .io_axi_in_rdata(IFU_io_axi_in_rdata),
    .io_axi_in_rvalid(IFU_io_axi_in_rvalid),
    .io_axi_out_araddr(IFU_io_axi_out_araddr),
    .io_axi_out_arvalid(IFU_io_axi_out_arvalid),
    .io_axi_out_rready(IFU_io_axi_out_rready),
    .io_fence(IFU_io_fence),
    .io_clear_cache(IFU_io_clear_cache),
    .io_cache_init(IFU_io_cache_init)
  );
  IDU IDU ( // @[top.scala 18:21]
    .clock(IDU_clock),
    .reset(IDU_reset),
    .io_pc(IDU_io_pc),
    .io_fs_to_ds_valid(IDU_io_fs_to_ds_valid),
    .io_ds_to_es_valid(IDU_io_ds_to_es_valid),
    .io_es_allowin(IDU_io_es_allowin),
    .io_from_fs_inst(IDU_io_from_fs_inst),
    .io_br_taken(IDU_io_br_taken),
    .io_br_target(IDU_io_br_target),
    .io_ds_allowin(IDU_io_ds_allowin),
    .io_ds_ready_go(IDU_io_ds_ready_go),
    .io_fence(IDU_io_fence),
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
    .io_es_ld(IDU_io_es_ld),
    .io_es_fwd_res(IDU_io_es_fwd_res),
    .io_ms_fwd_res(IDU_io_ms_fwd_res),
    .io_ws_fwd_res(IDU_io_ws_fwd_res),
    .io_es_fwd_ready(IDU_io_es_fwd_ready),
    .io_ms_fwd_ready(IDU_io_ms_fwd_ready),
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
  EXU EXU ( // @[top.scala 19:21]
    .clock(EXU_clock),
    .reset(EXU_reset),
    .io_pc(EXU_io_pc),
    .io_ds_to_es_valid(EXU_io_ds_to_es_valid),
    .io_ms_allowin(EXU_io_ms_allowin),
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
    .io_es_rf_dst(EXU_io_es_rf_dst),
    .io_es_fwd_ready(EXU_io_es_fwd_ready),
    .io_es_fwd_res(EXU_io_es_fwd_res),
    .io_es_ld(EXU_io_es_ld)
  );
  LSU LSU ( // @[top.scala 20:21]
    .clock(LSU_clock),
    .reset(LSU_reset),
    .io_pc(LSU_io_pc),
    .io_es_to_ms_valid(LSU_io_es_to_ms_valid),
    .io_ms_allowin(LSU_io_ms_allowin),
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
    .io_to_ws_device(LSU_io_to_ws_device),
    .io_ms_valid(LSU_io_ms_valid),
    .io_ms_rf_we(LSU_io_ms_rf_we),
    .io_ms_rf_dst(LSU_io_ms_rf_dst),
    .io_ms_fwd_ready(LSU_io_ms_fwd_ready),
    .io_ms_fwd_res(LSU_io_ms_fwd_res),
    .io_axi_in_rdata(LSU_io_axi_in_rdata),
    .io_axi_in_rvalid(LSU_io_axi_in_rvalid),
    .io_axi_in_bvalid(LSU_io_axi_in_bvalid),
    .io_axi_out_araddr(LSU_io_axi_out_araddr),
    .io_axi_out_arvalid(LSU_io_axi_out_arvalid),
    .io_axi_out_awaddr(LSU_io_axi_out_awaddr),
    .io_axi_out_awvalid(LSU_io_axi_out_awvalid),
    .io_axi_out_wdata(LSU_io_axi_out_wdata),
    .io_axi_out_wstrb(LSU_io_axi_out_wstrb),
    .io_axi_out_wvalid(LSU_io_axi_out_wvalid)
  );
  WBU WBU ( // @[top.scala 21:21]
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
    .io_ws_fwd_res(WBU_io_ws_fwd_res),
    .io_ws_pc(WBU_io_ws_pc),
    .io_device_access(WBU_io_device_access),
    .io_skip(WBU_io_skip)
  );
  AXI_ARBITER arbiter ( // @[top.scala 22:25]
    .clock(arbiter_clock),
    .reset(arbiter_reset),
    .io_ifu_axi_in_araddr(arbiter_io_ifu_axi_in_araddr),
    .io_ifu_axi_in_arlen(arbiter_io_ifu_axi_in_arlen),
    .io_ifu_axi_in_arvalid(arbiter_io_ifu_axi_in_arvalid),
    .io_ifu_axi_in_rready(arbiter_io_ifu_axi_in_rready),
    .io_ifu_axi_out_rdata(arbiter_io_ifu_axi_out_rdata),
    .io_ifu_axi_out_rlast(arbiter_io_ifu_axi_out_rlast),
    .io_ifu_axi_out_rvalid(arbiter_io_ifu_axi_out_rvalid),
    .io_lsu_axi_in_araddr(arbiter_io_lsu_axi_in_araddr),
    .io_lsu_axi_in_arlen(arbiter_io_lsu_axi_in_arlen),
    .io_lsu_axi_in_arvalid(arbiter_io_lsu_axi_in_arvalid),
    .io_lsu_axi_in_awaddr(arbiter_io_lsu_axi_in_awaddr),
    .io_lsu_axi_in_awlen(arbiter_io_lsu_axi_in_awlen),
    .io_lsu_axi_in_awvalid(arbiter_io_lsu_axi_in_awvalid),
    .io_lsu_axi_in_wdata(arbiter_io_lsu_axi_in_wdata),
    .io_lsu_axi_in_wstrb(arbiter_io_lsu_axi_in_wstrb),
    .io_lsu_axi_in_wvalid(arbiter_io_lsu_axi_in_wvalid),
    .io_lsu_axi_in_bready(arbiter_io_lsu_axi_in_bready),
    .io_lsu_axi_out_rdata(arbiter_io_lsu_axi_out_rdata),
    .io_lsu_axi_out_rlast(arbiter_io_lsu_axi_out_rlast),
    .io_lsu_axi_out_rvalid(arbiter_io_lsu_axi_out_rvalid),
    .io_lsu_axi_out_wready(arbiter_io_lsu_axi_out_wready),
    .io_lsu_axi_out_bvalid(arbiter_io_lsu_axi_out_bvalid),
    .io_axi_in_rdata(arbiter_io_axi_in_rdata),
    .io_axi_in_rlast(arbiter_io_axi_in_rlast),
    .io_axi_in_wready(arbiter_io_axi_in_wready),
    .io_axi_in_bvalid(arbiter_io_axi_in_bvalid),
    .io_axi_out_araddr(arbiter_io_axi_out_araddr),
    .io_axi_out_arlen(arbiter_io_axi_out_arlen),
    .io_axi_out_arvalid(arbiter_io_axi_out_arvalid),
    .io_axi_out_rready(arbiter_io_axi_out_rready),
    .io_axi_out_awaddr(arbiter_io_axi_out_awaddr),
    .io_axi_out_awlen(arbiter_io_axi_out_awlen),
    .io_axi_out_awvalid(arbiter_io_axi_out_awvalid),
    .io_axi_out_wdata(arbiter_io_axi_out_wdata),
    .io_axi_out_wstrb(arbiter_io_axi_out_wstrb),
    .io_axi_out_wvalid(arbiter_io_axi_out_wvalid),
    .io_axi_out_bready(arbiter_io_axi_out_bready)
  );
  I_CACHE i_cache ( // @[top.scala 23:25]
    .clock(i_cache_clock),
    .reset(i_cache_reset),
    .io_from_ifu_araddr(i_cache_io_from_ifu_araddr),
    .io_from_ifu_arvalid(i_cache_io_from_ifu_arvalid),
    .io_from_ifu_rready(i_cache_io_from_ifu_rready),
    .io_to_ifu_arready(i_cache_io_to_ifu_arready),
    .io_to_ifu_rdata(i_cache_io_to_ifu_rdata),
    .io_to_ifu_rvalid(i_cache_io_to_ifu_rvalid),
    .io_to_axi_araddr(i_cache_io_to_axi_araddr),
    .io_to_axi_arlen(i_cache_io_to_axi_arlen),
    .io_to_axi_arvalid(i_cache_io_to_axi_arvalid),
    .io_to_axi_rready(i_cache_io_to_axi_rready),
    .io_from_axi_rdata(i_cache_io_from_axi_rdata),
    .io_from_axi_rlast(i_cache_io_from_axi_rlast),
    .io_from_axi_rvalid(i_cache_io_from_axi_rvalid),
    .io_cache_init(i_cache_io_cache_init),
    .io_clear_cache(i_cache_io_clear_cache)
  );
  D_CACHE d_cache ( // @[top.scala 24:25]
    .clock(d_cache_clock),
    .reset(d_cache_reset),
    .io_from_lsu_araddr(d_cache_io_from_lsu_araddr),
    .io_from_lsu_arvalid(d_cache_io_from_lsu_arvalid),
    .io_from_lsu_awaddr(d_cache_io_from_lsu_awaddr),
    .io_from_lsu_awvalid(d_cache_io_from_lsu_awvalid),
    .io_from_lsu_wdata(d_cache_io_from_lsu_wdata),
    .io_from_lsu_wstrb(d_cache_io_from_lsu_wstrb),
    .io_from_lsu_wvalid(d_cache_io_from_lsu_wvalid),
    .io_to_lsu_rdata(d_cache_io_to_lsu_rdata),
    .io_to_lsu_rvalid(d_cache_io_to_lsu_rvalid),
    .io_to_lsu_bvalid(d_cache_io_to_lsu_bvalid),
    .io_to_axi_araddr(d_cache_io_to_axi_araddr),
    .io_to_axi_arlen(d_cache_io_to_axi_arlen),
    .io_to_axi_arvalid(d_cache_io_to_axi_arvalid),
    .io_to_axi_awaddr(d_cache_io_to_axi_awaddr),
    .io_to_axi_awlen(d_cache_io_to_axi_awlen),
    .io_to_axi_awvalid(d_cache_io_to_axi_awvalid),
    .io_to_axi_wdata(d_cache_io_to_axi_wdata),
    .io_to_axi_wstrb(d_cache_io_to_axi_wstrb),
    .io_to_axi_wvalid(d_cache_io_to_axi_wvalid),
    .io_to_axi_bready(d_cache_io_to_axi_bready),
    .io_from_axi_rdata(d_cache_io_from_axi_rdata),
    .io_from_axi_rlast(d_cache_io_from_axi_rlast),
    .io_from_axi_rvalid(d_cache_io_from_axi_rvalid),
    .io_from_axi_wready(d_cache_io_from_axi_wready),
    .io_from_axi_bvalid(d_cache_io_from_axi_bvalid)
  );
  AXI axi ( // @[top.scala 25:21]
    .clock(axi_clock),
    .reset(axi_reset),
    .io_axi_in_araddr(axi_io_axi_in_araddr),
    .io_axi_in_arlen(axi_io_axi_in_arlen),
    .io_axi_in_arvalid(axi_io_axi_in_arvalid),
    .io_axi_in_rready(axi_io_axi_in_rready),
    .io_axi_in_awaddr(axi_io_axi_in_awaddr),
    .io_axi_in_awlen(axi_io_axi_in_awlen),
    .io_axi_in_awvalid(axi_io_axi_in_awvalid),
    .io_axi_in_wdata(axi_io_axi_in_wdata),
    .io_axi_in_wstrb(axi_io_axi_in_wstrb),
    .io_axi_in_wvalid(axi_io_axi_in_wvalid),
    .io_axi_in_bready(axi_io_axi_in_bready),
    .io_axi_out_rdata(axi_io_axi_out_rdata),
    .io_axi_out_rlast(axi_io_axi_out_rlast),
    .io_axi_out_wready(axi_io_axi_out_wready),
    .io_axi_out_bvalid(axi_io_axi_out_bvalid)
  );
  DPI dpi ( // @[top.scala 121:21]
    .flag(dpi_flag),
    .ecall_flag(dpi_ecall_flag),
    .pc(dpi_pc)
  );
  assign io_inst = IFU_io_inst; // @[top.scala 114:13]
  assign io_pc = IFU_io_to_ds_pc; // @[top.scala 112:11]
  assign io_step = diff_step; // @[top.scala 117:13]
  assign io_skip = skip; // @[top.scala 120:13]
  assign Register_clock = clock;
  assign Register_io_raddr1 = IDU_io_raddr1; // @[top.scala 57:20]
  assign Register_io_raddr2 = IDU_io_raddr2; // @[top.scala 58:20]
  assign Register_io_we = WBU_io_we; // @[top.scala 108:16]
  assign Register_io_waddr = WBU_io_waddr; // @[top.scala 109:19]
  assign Register_io_wdata = WBU_io_wdata; // @[top.scala 110:19]
  assign IFU_clock = clock;
  assign IFU_reset = reset;
  assign IFU_io_ds_allowin = IDU_io_ds_allowin; // @[top.scala 45:20]
  assign IFU_io_ds_ready_go = IDU_io_ds_ready_go; // @[top.scala 44:21]
  assign IFU_io_ds_valid = IDU_io_ds_valid; // @[top.scala 43:18]
  assign IFU_io_br_taken = IDU_io_br_taken; // @[top.scala 46:18]
  assign IFU_io_br_target = IDU_io_br_target; // @[top.scala 47:19]
  assign IFU_io_axi_in_arready = i_cache_io_to_ifu_arready; // @[top.scala 30:16]
  assign IFU_io_axi_in_rdata = i_cache_io_to_ifu_rdata; // @[top.scala 30:16]
  assign IFU_io_axi_in_rvalid = i_cache_io_to_ifu_rvalid; // @[top.scala 30:16]
  assign IFU_io_fence = IDU_io_fence; // @[top.scala 49:15]
  assign IFU_io_cache_init = i_cache_io_cache_init; // @[top.scala 50:20]
  assign IDU_clock = clock;
  assign IDU_reset = reset;
  assign IDU_io_pc = IFU_io_to_ds_pc; // @[top.scala 53:12]
  assign IDU_io_fs_to_ds_valid = IFU_io_fs_to_ds_valid; // @[top.scala 54:24]
  assign IDU_io_es_allowin = EXU_io_es_allowin; // @[top.scala 55:20]
  assign IDU_io_from_fs_inst = IFU_io_inst; // @[top.scala 56:22]
  assign IDU_io_rdata1 = Register_io_rdata1; // @[top.scala 59:16]
  assign IDU_io_rdata2 = Register_io_rdata2; // @[top.scala 60:16]
  assign IDU_io_es_ld = EXU_io_es_ld; // @[top.scala 76:15]
  assign IDU_io_es_fwd_res = EXU_io_es_fwd_res; // @[top.scala 71:20]
  assign IDU_io_ms_fwd_res = LSU_io_ms_fwd_res; // @[top.scala 73:20]
  assign IDU_io_ws_fwd_res = WBU_io_ws_fwd_res; // @[top.scala 75:20]
  assign IDU_io_es_fwd_ready = EXU_io_es_fwd_ready; // @[top.scala 70:22]
  assign IDU_io_ms_fwd_ready = LSU_io_ms_fwd_ready; // @[top.scala 72:22]
  assign IDU_io_es_rf_we = EXU_io_es_rf_we; // @[top.scala 63:18]
  assign IDU_io_ms_rf_we = LSU_io_ms_rf_we; // @[top.scala 66:18]
  assign IDU_io_ws_rf_we = WBU_io_ws_rf_we; // @[top.scala 69:18]
  assign IDU_io_es_valid = EXU_io_es_valid; // @[top.scala 61:18]
  assign IDU_io_ms_valid = LSU_io_ms_valid; // @[top.scala 64:18]
  assign IDU_io_ws_valid = WBU_io_ws_valid; // @[top.scala 67:18]
  assign IDU_io_es_rf_dst = EXU_io_es_rf_dst; // @[top.scala 62:19]
  assign IDU_io_ms_rf_dst = LSU_io_ms_rf_dst; // @[top.scala 65:19]
  assign IDU_io_ws_rf_dst = WBU_io_ws_rf_dst; // @[top.scala 68:19]
  assign EXU_clock = clock;
  assign EXU_reset = reset;
  assign EXU_io_pc = IDU_io_to_es_pc; // @[top.scala 78:12]
  assign EXU_io_ds_to_es_valid = IDU_io_ds_to_es_valid; // @[top.scala 79:24]
  assign EXU_io_ms_allowin = LSU_io_ms_allowin; // @[top.scala 80:20]
  assign EXU_io_ALUop = IDU_io_ALUop; // @[top.scala 81:15]
  assign EXU_io_src1_value = IDU_io_src1; // @[top.scala 82:20]
  assign EXU_io_src2_value = IDU_io_src2; // @[top.scala 83:20]
  assign EXU_io_rf_dst = IDU_io_rf_dst; // @[top.scala 84:16]
  assign EXU_io_store_data = IDU_io_store_data; // @[top.scala 85:20]
  assign EXU_io_load_type = IDU_io_load_type; // @[top.scala 87:19]
  assign EXU_io_ctrl_sign_reg_write = IDU_io_ctrl_sign_reg_write; // @[top.scala 86:19]
  assign EXU_io_ctrl_sign_Writemem_en = IDU_io_ctrl_sign_Writemem_en; // @[top.scala 86:19]
  assign EXU_io_ctrl_sign_Readmem_en = IDU_io_ctrl_sign_Readmem_en; // @[top.scala 86:19]
  assign EXU_io_ctrl_sign_Wmask = IDU_io_ctrl_sign_Wmask; // @[top.scala 86:19]
  assign LSU_clock = clock;
  assign LSU_reset = reset;
  assign LSU_io_pc = EXU_io_to_ms_pc; // @[top.scala 89:12]
  assign LSU_io_es_to_ms_valid = EXU_io_es_to_ms_valid; // @[top.scala 90:24]
  assign LSU_io_rf_we = EXU_io_to_ms_rf_we; // @[top.scala 92:15]
  assign LSU_io_rf_dst = EXU_io_to_ms_rf_dst; // @[top.scala 93:16]
  assign LSU_io_alu_res = EXU_io_to_ms_alures; // @[top.scala 94:17]
  assign LSU_io_store_data = EXU_io_to_ms_store_data; // @[top.scala 95:20]
  assign LSU_io_load_type = EXU_io_to_ms_load_type; // @[top.scala 100:19]
  assign LSU_io_wen = EXU_io_to_ms_wen; // @[top.scala 96:13]
  assign LSU_io_wstrb = EXU_io_to_ms_wstrb; // @[top.scala 97:15]
  assign LSU_io_ren = EXU_io_to_ms_ren; // @[top.scala 98:13]
  assign LSU_io_maddr = EXU_io_to_ms_maddr; // @[top.scala 99:15]
  assign LSU_io_axi_in_rdata = d_cache_io_to_lsu_rdata; // @[top.scala 35:16]
  assign LSU_io_axi_in_rvalid = d_cache_io_to_lsu_rvalid; // @[top.scala 35:16]
  assign LSU_io_axi_in_bvalid = d_cache_io_to_lsu_bvalid; // @[top.scala 35:16]
  assign WBU_clock = clock;
  assign WBU_reset = reset;
  assign WBU_io_pc = LSU_io_to_ws_pc; // @[top.scala 102:12]
  assign WBU_io_ms_to_ws_valid = LSU_io_ms_to_ws_valid; // @[top.scala 103:24]
  assign WBU_io_ms_final_res = LSU_io_ms_final_res; // @[top.scala 104:22]
  assign WBU_io_rf_we = LSU_io_to_ws_rf_we; // @[top.scala 105:15]
  assign WBU_io_rf_dst = LSU_io_to_ws_rf_dst; // @[top.scala 106:16]
  assign WBU_io_device_access = LSU_io_to_ws_device; // @[top.scala 107:23]
  assign arbiter_clock = clock;
  assign arbiter_reset = reset;
  assign arbiter_io_ifu_axi_in_araddr = i_cache_io_to_axi_araddr; // @[top.scala 28:27]
  assign arbiter_io_ifu_axi_in_arlen = i_cache_io_to_axi_arlen; // @[top.scala 28:27]
  assign arbiter_io_ifu_axi_in_arvalid = i_cache_io_to_axi_arvalid; // @[top.scala 28:27]
  assign arbiter_io_ifu_axi_in_rready = i_cache_io_to_axi_rready; // @[top.scala 28:27]
  assign arbiter_io_lsu_axi_in_araddr = d_cache_io_to_axi_araddr; // @[top.scala 33:27]
  assign arbiter_io_lsu_axi_in_arlen = d_cache_io_to_axi_arlen; // @[top.scala 33:27]
  assign arbiter_io_lsu_axi_in_arvalid = d_cache_io_to_axi_arvalid; // @[top.scala 33:27]
  assign arbiter_io_lsu_axi_in_awaddr = d_cache_io_to_axi_awaddr; // @[top.scala 33:27]
  assign arbiter_io_lsu_axi_in_awlen = d_cache_io_to_axi_awlen; // @[top.scala 33:27]
  assign arbiter_io_lsu_axi_in_awvalid = d_cache_io_to_axi_awvalid; // @[top.scala 33:27]
  assign arbiter_io_lsu_axi_in_wdata = d_cache_io_to_axi_wdata; // @[top.scala 33:27]
  assign arbiter_io_lsu_axi_in_wstrb = d_cache_io_to_axi_wstrb; // @[top.scala 33:27]
  assign arbiter_io_lsu_axi_in_wvalid = d_cache_io_to_axi_wvalid; // @[top.scala 33:27]
  assign arbiter_io_lsu_axi_in_bready = d_cache_io_to_axi_bready; // @[top.scala 33:27]
  assign arbiter_io_axi_in_rdata = axi_io_axi_out_rdata; // @[top.scala 38:23]
  assign arbiter_io_axi_in_rlast = axi_io_axi_out_rlast; // @[top.scala 38:23]
  assign arbiter_io_axi_in_wready = axi_io_axi_out_wready; // @[top.scala 38:23]
  assign arbiter_io_axi_in_bvalid = axi_io_axi_out_bvalid; // @[top.scala 38:23]
  assign i_cache_clock = clock;
  assign i_cache_reset = reset;
  assign i_cache_io_from_ifu_araddr = IFU_io_axi_out_araddr; // @[top.scala 31:25]
  assign i_cache_io_from_ifu_arvalid = IFU_io_axi_out_arvalid; // @[top.scala 31:25]
  assign i_cache_io_from_ifu_rready = IFU_io_axi_out_rready; // @[top.scala 31:25]
  assign i_cache_io_from_axi_rdata = arbiter_io_ifu_axi_out_rdata; // @[top.scala 29:25]
  assign i_cache_io_from_axi_rlast = arbiter_io_ifu_axi_out_rlast; // @[top.scala 29:25]
  assign i_cache_io_from_axi_rvalid = arbiter_io_ifu_axi_out_rvalid; // @[top.scala 29:25]
  assign i_cache_io_clear_cache = IFU_io_clear_cache; // @[top.scala 51:28]
  assign d_cache_clock = clock;
  assign d_cache_reset = reset;
  assign d_cache_io_from_lsu_araddr = LSU_io_axi_out_araddr; // @[top.scala 36:25]
  assign d_cache_io_from_lsu_arvalid = LSU_io_axi_out_arvalid; // @[top.scala 36:25]
  assign d_cache_io_from_lsu_awaddr = LSU_io_axi_out_awaddr; // @[top.scala 36:25]
  assign d_cache_io_from_lsu_awvalid = LSU_io_axi_out_awvalid; // @[top.scala 36:25]
  assign d_cache_io_from_lsu_wdata = LSU_io_axi_out_wdata; // @[top.scala 36:25]
  assign d_cache_io_from_lsu_wstrb = LSU_io_axi_out_wstrb; // @[top.scala 36:25]
  assign d_cache_io_from_lsu_wvalid = LSU_io_axi_out_wvalid; // @[top.scala 36:25]
  assign d_cache_io_from_axi_rdata = arbiter_io_lsu_axi_out_rdata; // @[top.scala 34:25]
  assign d_cache_io_from_axi_rlast = arbiter_io_lsu_axi_out_rlast; // @[top.scala 34:25]
  assign d_cache_io_from_axi_rvalid = arbiter_io_lsu_axi_out_rvalid; // @[top.scala 34:25]
  assign d_cache_io_from_axi_wready = arbiter_io_lsu_axi_out_wready; // @[top.scala 34:25]
  assign d_cache_io_from_axi_bvalid = arbiter_io_lsu_axi_out_bvalid; // @[top.scala 34:25]
  assign axi_clock = clock;
  assign axi_reset = reset;
  assign axi_io_axi_in_araddr = arbiter_io_axi_out_araddr; // @[top.scala 39:19]
  assign axi_io_axi_in_arlen = arbiter_io_axi_out_arlen; // @[top.scala 39:19]
  assign axi_io_axi_in_arvalid = arbiter_io_axi_out_arvalid; // @[top.scala 39:19]
  assign axi_io_axi_in_rready = arbiter_io_axi_out_rready; // @[top.scala 39:19]
  assign axi_io_axi_in_awaddr = arbiter_io_axi_out_awaddr; // @[top.scala 39:19]
  assign axi_io_axi_in_awlen = arbiter_io_axi_out_awlen; // @[top.scala 39:19]
  assign axi_io_axi_in_awvalid = arbiter_io_axi_out_awvalid; // @[top.scala 39:19]
  assign axi_io_axi_in_wdata = arbiter_io_axi_out_wdata; // @[top.scala 39:19]
  assign axi_io_axi_in_wstrb = arbiter_io_axi_out_wstrb; // @[top.scala 39:19]
  assign axi_io_axi_in_wvalid = arbiter_io_axi_out_wvalid; // @[top.scala 39:19]
  assign axi_io_axi_in_bready = arbiter_io_axi_out_bready; // @[top.scala 39:19]
  assign dpi_flag = {{31'd0}, IDU_io_ALUop == 32'h2}; // @[top.scala 122:17]
  assign dpi_ecall_flag = {{31'd0}, IDU_io_ALUop == 32'h3d}; // @[top.scala 123:23]
  assign dpi_pc = WBU_io_ws_valid ? WBU_io_ws_pc : _dpi_io_pc_T_2; // @[top.scala 124:21]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 115:28]
      diff_step <= 1'h0; // @[top.scala 115:28]
    end else begin
      diff_step <= WBU_io_ws_valid; // @[top.scala 116:15]
    end
    if (reset) begin // @[top.scala 118:23]
      skip <= 1'h0; // @[top.scala 118:23]
    end else begin
      skip <= WBU_io_skip; // @[top.scala 119:10]
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
  _RAND_1 = {1{`RANDOM}};
  skip = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
