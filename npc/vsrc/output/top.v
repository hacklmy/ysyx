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
  output [63:0] io_to_ds_pc,
  output        io_fs_to_ds_valid,
  output [31:0] io_inst,
  input  [63:0] io_axi_in_rdata,
  input         io_axi_in_rlast,
  input         io_axi_in_rvalid,
  output [31:0] io_axi_out_araddr,
  output        io_axi_out_arvalid,
  output        io_axi_out_rready,
  input         io_fence,
  output        io_clear_cache,
  input         io_cache_init
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg  fs_valid; // @[IFU.scala 29:27]
  reg  fs_ready_go; // @[IFU.scala 30:30]
  reg  cache_init; // @[IFU.scala 35:29]
  wire  fs_to_ds_valid = fs_valid & fs_ready_go; // @[IFU.scala 71:33]
  wire  _T = fs_to_ds_valid & io_ds_allowin; // @[IFU.scala 38:31]
  wire  _GEN_0 = fs_to_ds_valid & io_ds_allowin & cache_init ? 1'h0 : cache_init; // @[IFU.scala 38:60 39:20 35:29]
  wire  _GEN_1 = io_cache_init | _GEN_0; // @[IFU.scala 36:24 37:20]
  reg [63:0] fs_pc; // @[IFU.scala 42:24]
  reg [31:0] fs_inst; // @[IFU.scala 43:26]
  wire  _GEN_3 = io_axi_in_rvalid | fs_ready_go; // @[IFU.scala 56:27 58:21 30:30]
  wire [63:0] seq_pc = fs_pc + 64'h4; // @[IFU.scala 67:24]
  wire  fs_allowin = ~fs_valid | fs_ready_go & io_ds_allowin; // @[IFU.scala 72:29]
  wire  _GEN_5 = fs_allowin | fs_valid; // @[IFU.scala 74:36 75:18 29:27]
  reg  inst_ready; // @[IFU.scala 85:29]
  wire  _GEN_7 = io_axi_in_rvalid & inst_ready & io_axi_in_rlast ? 1'h0 : 1'h1; // @[IFU.scala 86:60 87:20 89:20]
  assign io_to_ds_pc = fs_pc; // @[IFU.scala 82:17]
  assign io_fs_to_ds_valid = fs_valid & fs_ready_go; // @[IFU.scala 71:33]
  assign io_inst = fs_inst; // @[IFU.scala 108:13]
  assign io_axi_out_araddr = fs_pc[31:0]; // @[IFU.scala 92:31]
  assign io_axi_out_arvalid = fs_valid & ~fs_ready_go; // @[IFU.scala 93:36]
  assign io_axi_out_rready = inst_ready; // @[IFU.scala 97:23]
  assign io_clear_cache = io_fence & ~cache_init; // @[IFU.scala 54:32]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 29:27]
      fs_valid <= 1'h0; // @[IFU.scala 29:27]
    end else begin
      fs_valid <= _GEN_5;
    end
    if (reset) begin // @[IFU.scala 30:30]
      fs_ready_go <= 1'h0; // @[IFU.scala 30:30]
    end else if (_T) begin // @[IFU.scala 60:42]
      fs_ready_go <= 1'h0; // @[IFU.scala 61:21]
    end else begin
      fs_ready_go <= _GEN_3;
    end
    if (reset) begin // @[IFU.scala 35:29]
      cache_init <= 1'h0; // @[IFU.scala 35:29]
    end else begin
      cache_init <= _GEN_1;
    end
    if (reset) begin // @[IFU.scala 42:24]
      fs_pc <= 64'h7ffffffc; // @[IFU.scala 42:24]
    end else if (fs_allowin) begin // @[IFU.scala 74:36]
      if (io_br_taken) begin // @[IFU.scala 68:19]
        fs_pc <= io_br_target;
      end else begin
        fs_pc <= seq_pc;
      end
    end
    if (reset) begin // @[IFU.scala 43:26]
      fs_inst <= 32'h0; // @[IFU.scala 43:26]
    end else if (io_axi_in_rvalid) begin // @[IFU.scala 56:27]
      fs_inst <= io_axi_in_rdata[31:0]; // @[IFU.scala 57:17]
    end
    inst_ready <= reset | _GEN_7; // @[IFU.scala 85:{29,29}]
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
  _RAND_1 = {1{`RANDOM}};
  fs_ready_go = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  cache_init = _RAND_2[0:0];
  _RAND_3 = {2{`RANDOM}};
  fs_pc = _RAND_3[63:0];
  _RAND_4 = {1{`RANDOM}};
  fs_inst = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  inst_ready = _RAND_5[0:0];
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
  output        io_ds_allowin,
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
  wire  csr_reg_clock; // @[IDU.scala 433:21]
  wire  csr_reg_io_wen1; // @[IDU.scala 433:21]
  wire  csr_reg_io_wen2; // @[IDU.scala 433:21]
  wire [1:0] csr_reg_io_waddr1; // @[IDU.scala 433:21]
  wire [63:0] csr_reg_io_wdata1; // @[IDU.scala 433:21]
  wire [63:0] csr_reg_io_wdata2; // @[IDU.scala 433:21]
  wire [1:0] csr_reg_io_raddr; // @[IDU.scala 433:21]
  wire [63:0] csr_reg_io_rdata; // @[IDU.scala 433:21]
  reg  ds_valid; // @[IDU.scala 104:27]
  reg [63:0] ds_pc; // @[IDU.scala 108:24]
  reg [31:0] inst; // @[IDU.scala 110:23]
  reg  br_taken_cancel; // @[IDU.scala 114:34]
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
  wire [31:0] inst_type = {{25'd0}, _inst_type_T_188}; // @[IDU.scala 221:15 58:25]
  wire  _csr_write_T_10 = _inst_type_T_121 | (_inst_type_T_123 | _inst_type_T_125); // @[Lookup.scala 34:39]
  wire [1:0] csr_write = _inst_type_T_119 ? 2'h3 : {{1'd0}, _csr_write_T_10}; // @[Lookup.scala 34:39]
  wire  _conflict_T_3 = csr_write == 2'h1; // @[IDU.scala 477:66]
  wire [4:0] rs1 = inst[19:15]; // @[IDU.scala 211:16]
  wire  src2_is_imm = 32'h45 == inst_type | (32'h43 == inst_type | (32'h44 == inst_type | (32'h42 == inst_type | 32'h40
     == inst_type))); // @[Mux.scala 81:58]
  wire  _conflict_T_28 = csr_write == 2'h3; // @[IDU.scala 477:339]
  wire [4:0] rs2 = csr_write[0] ? 5'h11 : inst[24:20]; // @[IDU.scala 210:15]
  wire  _conflict_T_47 = (~src2_is_imm | inst_type == 32'h44 | inst_type == 32'h45 | csr_write == 2'h3) & (rs2 ==
    io_es_rf_dst & rs2 != 5'h0 & io_es_rf_we & io_es_valid | rs2 == io_ms_rf_dst & rs2 != 5'h0 & io_ms_rf_we &
    io_ms_valid | rs2 == io_ws_rf_dst & rs2 != 5'h0 & io_ws_rf_we & io_ws_valid); // @[IDU.scala 477:347]
  wire  conflict = (~src1_is_pc | inst_type == 32'h45 | csr_write == 2'h1) & (rs1 == io_es_rf_dst & rs1 != 5'h0 &
    io_es_rf_we & io_es_valid | rs1 == io_ms_rf_dst & rs1 != 5'h0 & io_ms_rf_we & io_ms_valid | rs1 == io_ws_rf_dst &
    rs1 != 5'h0 & io_ws_rf_we & io_ws_valid) | _conflict_T_47; // @[IDU.scala 477:268]
  wire  _ALUop_T_3 = 32'h100073 == inst; // @[Lookup.scala 31:38]
  wire  _ALUop_T_111 = 32'h30200073 == inst; // @[Lookup.scala 31:38]
  wire [6:0] _ALUop_T_118 = _inst_type_T_125 ? 7'h47 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_119 = _inst_type_T_123 ? 7'h46 : _ALUop_T_118; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_120 = _inst_type_T_121 ? 7'h3f : _ALUop_T_119; // @[Lookup.scala 34:39]
  wire [6:0] _ALUop_T_121 = _ALUop_T_111 ? 7'h3e : _ALUop_T_120; // @[Lookup.scala 34:39]
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
  wire [31:0] ALUop = {{25'd0}, _ALUop_T_176}; // @[IDU.scala 295:11 57:21]
  wire  ds_ready_go = ~conflict & (ALUop == 32'h6 & io_fs_to_ds_valid & ds_valid | ALUop != 32'h6); // @[IDU.scala 135:30]
  wire  ds_allowin = ~ds_valid | ds_ready_go & io_es_allowin; // @[IDU.scala 137:29]
  wire  _T_1 = ~br_taken_cancel; // @[IDU.scala 118:26]
  wire  _br_taken_T_2 = $signed(io_rdata1) != $signed(io_rdata2); // @[IDU.scala 467:37]
  wire  _br_taken_T_6 = $signed(io_rdata1) == $signed(io_rdata2); // @[IDU.scala 468:37]
  wire  _br_taken_T_10 = $signed(io_rdata1) >= $signed(io_rdata2); // @[IDU.scala 469:37]
  wire  _br_taken_T_14 = $signed(io_rdata1) < $signed(io_rdata2); // @[IDU.scala 470:37]
  wire  _br_taken_T_16 = io_rdata1 < io_rdata2; // @[IDU.scala 471:31]
  wire  _br_taken_T_18 = io_rdata1 >= io_rdata2; // @[IDU.scala 472:31]
  wire  _br_taken_T_42 = _src1_is_pc_T_15 ? _br_taken_T_18 : _inst_type_T_119 | _ALUop_T_111; // @[Lookup.scala 34:39]
  wire  _br_taken_T_43 = _src1_is_pc_T_13 ? _br_taken_T_16 : _br_taken_T_42; // @[Lookup.scala 34:39]
  wire  _br_taken_T_44 = _src1_is_pc_T_11 ? _br_taken_T_14 : _br_taken_T_43; // @[Lookup.scala 34:39]
  wire  _br_taken_T_45 = _src1_is_pc_T_9 ? _br_taken_T_10 : _br_taken_T_44; // @[Lookup.scala 34:39]
  wire  _br_taken_T_46 = _src1_is_pc_T_7 ? _br_taken_T_6 : _br_taken_T_45; // @[Lookup.scala 34:39]
  wire  _br_taken_T_47 = _src1_is_pc_T_5 ? _br_taken_T_2 : _br_taken_T_46; // @[Lookup.scala 34:39]
  wire  br_taken = _src1_is_pc_T_1 | (_inst_type_T_9 | _br_taken_T_47); // @[Lookup.scala 34:39]
  wire  _T_2 = br_taken & ~br_taken_cancel; // @[IDU.scala 118:23]
  wire [4:0] rd = inst[11:7]; // @[IDU.scala 212:15]
  wire  fence = 32'h100f == inst; // @[Lookup.scala 31:38]
  wire [11:0] imm_imm = inst[31:20]; // @[IDU.scala 75:23]
  wire [51:0] _imm_T_2 = imm_imm[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_3 = {_imm_T_2,imm_imm}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_1 = {inst[31],inst[19:12],inst[20],inst[30:21]}; // @[Cat.scala 31:58]
  wire [42:0] _imm_T_6 = imm_imm_1[19] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_7 = {_imm_T_6,inst[31],inst[19:12],inst[20],inst[30:21],1'h0}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_2 = inst[31:12]; // @[IDU.scala 79:23]
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
  wire  _reg_write_T_28 = fence ? 1'h0 : 1'h1; // @[Lookup.scala 34:39]
  wire  _reg_write_T_29 = _ALUop_T_111 ? 1'h0 : _reg_write_T_28; // @[Lookup.scala 34:39]
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
  wire [63:0] _csr_wdata_T = io_rdata1 | csr_reg_io_rdata; // @[IDU.scala 442:29]
  wire [63:0] _csr_wdata_T_1 = ~csr_reg_io_rdata; // @[IDU.scala 443:32]
  wire [63:0] _csr_wdata_T_2 = io_rdata1 & _csr_wdata_T_1; // @[IDU.scala 443:29]
  wire [63:0] _csr_wdata_T_9 = _inst_type_T_125 ? _csr_wdata_T_2 : 64'h0; // @[Lookup.scala 34:39]
  wire [63:0] _csr_wdata_T_10 = _inst_type_T_123 ? _csr_wdata_T : _csr_wdata_T_9; // @[Lookup.scala 34:39]
  wire [63:0] csr_wdata = _inst_type_T_121 ? io_rdata1 : _csr_wdata_T_10; // @[Lookup.scala 34:39]
  wire [1:0] _T_11 = ALUop == 32'h3e ? 2'h1 : csr_index; // @[IDU.scala 446:48]
  wire [1:0] _T_18 = _conflict_T_3 ? csr_index : 2'h0; // @[IDU.scala 448:46]
  wire [63:0] _T_22 = _conflict_T_3 ? csr_wdata : 64'h0; // @[IDU.scala 449:48]
  wire [63:0] src1 = src1_is_pc ? ds_pc : io_rdata1; // @[IDU.scala 455:16]
  wire [63:0] src2 = src2_is_imm ? imm : io_rdata2; // @[IDU.scala 456:16]
  wire [63:0] _br_target_T_1 = src1 + src2; // @[IDU.scala 459:35]
  wire [63:0] _br_target_T_4 = _br_target_T_1 & 64'hfffffffffffffffe; // @[IDU.scala 460:31]
  wire [63:0] _br_target_T_6 = csr_reg_io_rdata + 64'h4; // @[IDU.scala 462:28]
  wire [63:0] _br_target_T_13 = _ALUop_T_111 ? _br_target_T_6 : _br_target_T_1; // @[Lookup.scala 34:39]
  wire [63:0] _br_target_T_14 = _inst_type_T_119 ? csr_reg_io_rdata : _br_target_T_13; // @[Lookup.scala 34:39]
  wire [31:0] _io_store_data_T_11 = _inst_type_T_75 ? io_rdata2[31:0] : 32'h0; // @[Lookup.scala 34:39]
  wire [31:0] _io_store_data_T_12 = _inst_type_T_37 ? {{24'd0}, io_rdata2[7:0]} : _io_store_data_T_11; // @[Lookup.scala 34:39]
  wire [31:0] _io_store_data_T_13 = _inst_type_T_35 ? {{16'd0}, io_rdata2[15:0]} : _io_store_data_T_12; // @[Lookup.scala 34:39]
  csr_reg csr_reg ( // @[IDU.scala 433:21]
    .clock(csr_reg_clock),
    .io_wen1(csr_reg_io_wen1),
    .io_wen2(csr_reg_io_wen2),
    .io_waddr1(csr_reg_io_waddr1),
    .io_wdata1(csr_reg_io_wdata1),
    .io_wdata2(csr_reg_io_wdata2),
    .io_raddr(csr_reg_io_raddr),
    .io_rdata(csr_reg_io_rdata)
  );
  assign io_ds_to_es_valid = ds_valid & ds_ready_go; // @[IDU.scala 136:32]
  assign io_br_taken = br_taken & _T_1; // @[IDU.scala 479:29]
  assign io_br_target = _inst_type_T_9 ? _br_target_T_4 : _br_target_T_14; // @[Lookup.scala 34:39]
  assign io_ds_allowin = ~ds_valid | ds_ready_go & io_es_allowin; // @[IDU.scala 137:29]
  assign io_fence = 32'h100f == inst; // @[Lookup.scala 31:38]
  assign io_raddr1 = inst[19:15]; // @[IDU.scala 211:16]
  assign io_raddr2 = csr_write[0] ? 5'h11 : inst[24:20]; // @[IDU.scala 210:15]
  assign io_to_es_pc = ds_pc; // @[IDU.scala 502:17]
  assign io_ALUop = {{25'd0}, _ALUop_T_176}; // @[IDU.scala 295:11 57:21]
  assign io_src1 = csr_write[0] ? csr_reg_io_rdata : src1; // @[IDU.scala 491:19]
  assign io_src2 = src2_is_imm ? imm : io_rdata2; // @[IDU.scala 456:16]
  assign io_rf_dst = inst[11:7]; // @[IDU.scala 212:15]
  assign io_store_data = _inst_type_T_11 ? io_rdata2 : {{32'd0}, _io_store_data_T_13}; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_reg_write = _ALUop_T_3 ? 1'h0 : _reg_write_T_40; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Writemem_en = 32'h44 == inst_type; // @[Mux.scala 81:61]
  assign io_ctrl_sign_Readmem_en = _inst_type_T_25 | (_inst_type_T_15 | (_inst_type_T_113 | (_inst_type_T_77 | (
    _inst_type_T_79 | (_inst_type_T_115 | _inst_type_T_33))))); // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Wmask = _inst_type_T_11 ? 8'hff : {{4'd0}, _Wmask_T_10}; // @[Lookup.scala 34:39]
  assign io_load_type = _inst_type_T_15 ? 3'h1 : _load_type_T_19; // @[Lookup.scala 34:39]
  assign io_ds_valid = ds_valid; // @[IDU.scala 504:17]
  assign csr_reg_clock = clock;
  assign csr_reg_io_wen1 = csr_write[0] & ds_valid; // @[IDU.scala 447:38]
  assign csr_reg_io_wen2 = csr_write[1] & ds_valid; // @[IDU.scala 450:38]
  assign csr_reg_io_waddr1 = _conflict_T_28 ? 2'h1 : _T_18; // @[IDU.scala 448:22]
  assign csr_reg_io_wdata1 = _conflict_T_28 ? ds_pc : _T_22; // @[IDU.scala 449:22]
  assign csr_reg_io_wdata2 = io_rdata2; // @[IDU.scala 452:16]
  assign csr_reg_io_raddr = csr_write[1] ? 2'h0 : _T_11; // @[IDU.scala 446:21]
  always @(posedge clock) begin
    if (reset) begin // @[IDU.scala 104:27]
      ds_valid <= 1'h0; // @[IDU.scala 104:27]
    end else if (br_taken & ds_allowin & io_fs_to_ds_valid & _T_1) begin // @[IDU.scala 126:74]
      ds_valid <= 1'h0; // @[IDU.scala 127:18]
    end else if (ds_allowin) begin // @[IDU.scala 128:27]
      ds_valid <= io_fs_to_ds_valid; // @[IDU.scala 129:18]
    end
    if (reset) begin // @[IDU.scala 108:24]
      ds_pc <= 64'h0; // @[IDU.scala 108:24]
    end else if (io_fs_to_ds_valid & ds_allowin) begin // @[IDU.scala 131:40]
      ds_pc <= io_pc; // @[IDU.scala 132:15]
    end
    if (reset) begin // @[IDU.scala 110:23]
      inst <= 32'h0; // @[IDU.scala 110:23]
    end else if (io_fs_to_ds_valid & ds_allowin) begin // @[IDU.scala 131:40]
      inst <= io_from_fs_inst; // @[IDU.scala 133:14]
    end
    if (reset) begin // @[IDU.scala 114:34]
      br_taken_cancel <= 1'h0; // @[IDU.scala 114:34]
    end else if (ds_allowin & io_fs_to_ds_valid) begin // @[IDU.scala 117:42]
      br_taken_cancel <= _T_2;
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
  wire  es_allowin = ~es_valid | es_ready_go & io_ms_allowin; // @[EXU.scala 77:29]
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
  assign io_es_allowin = ~es_valid | es_ready_go & io_ms_allowin; // @[EXU.scala 77:29]
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
  output        io_ms_valid,
  output        io_ms_rf_we,
  output [4:0]  io_ms_rf_dst,
  input  [63:0] io_axi_in_rdata,
  input         io_axi_in_rvalid,
  input         io_axi_in_wready,
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
  reg [31:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [63:0] _RAND_12;
`endif // RANDOMIZE_REG_INIT
  reg  ms_valid; // @[LSU.scala 34:27]
  reg [63:0] ms_pc; // @[LSU.scala 35:24]
  reg  ms_ready_go; // @[LSU.scala 37:30]
  reg  ms_rf_we; // @[LSU.scala 39:27]
  reg [4:0] ms_rf_dst; // @[LSU.scala 40:28]
  reg [63:0] ms_res; // @[LSU.scala 41:25]
  reg [63:0] store_data; // @[LSU.scala 43:29]
  reg  wen; // @[LSU.scala 44:22]
  reg [7:0] wstrb; // @[LSU.scala 45:24]
  reg  ren; // @[LSU.scala 46:22]
  reg [63:0] maddr; // @[LSU.scala 47:24]
  reg [2:0] load_type; // @[LSU.scala 48:28]
  wire  ms_allowin = ~ms_valid | ms_ready_go; // @[LSU.scala 69:29]
  wire  _GEN_8 = io_es_to_ms_valid & ms_allowin ? io_ren : ren; // @[LSU.scala 54:40 62:13 46:22]
  wire  _GEN_11 = io_es_to_ms_valid & ms_allowin ? ~(io_wen | io_ren) : ms_ready_go; // @[LSU.scala 54:40 65:21 37:30]
  reg [63:0] mem_rdata; // @[LSU.scala 73:28]
  wire  _GEN_14 = ms_valid & ren & io_axi_in_rvalid | _GEN_11; // @[LSU.scala 78:52 81:21]
  wire  _GEN_16 = ms_valid & wen & io_axi_in_wready | _GEN_14; // @[LSU.scala 75:46 77:21]
  wire [31:0] _rdata_T_2 = mem_rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _rdata_T_4 = {_rdata_T_2,mem_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_7 = {56'h0,mem_rdata[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_10 = {32'h0,mem_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [47:0] _rdata_T_13 = mem_rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _rdata_T_15 = {_rdata_T_13,mem_rdata[15:0]}; // @[Cat.scala 31:58]
  wire [55:0] _rdata_T_18 = mem_rdata[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _rdata_T_20 = {_rdata_T_18,mem_rdata[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_23 = {48'h0,mem_rdata[15:0]}; // @[Cat.scala 31:58]
  wire [63:0] _rdata_T_25 = 3'h1 == load_type ? _rdata_T_4 : mem_rdata; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_27 = 3'h2 == load_type ? mem_rdata : _rdata_T_25; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_29 = 3'h3 == load_type ? _rdata_T_7 : _rdata_T_27; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_31 = 3'h4 == load_type ? _rdata_T_10 : _rdata_T_29; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_33 = 3'h5 == load_type ? _rdata_T_15 : _rdata_T_31; // @[Mux.scala 81:58]
  wire [63:0] _rdata_T_35 = 3'h6 == load_type ? _rdata_T_20 : _rdata_T_33; // @[Mux.scala 81:58]
  wire [63:0] rdata = 3'h7 == load_type ? _rdata_T_23 : _rdata_T_35; // @[Mux.scala 81:58]
  assign io_ms_allowin = ~ms_valid | ms_ready_go; // @[LSU.scala 69:29]
  assign io_to_ws_pc = ms_pc; // @[LSU.scala 116:17]
  assign io_ms_final_res = load_type != 3'h0 ? rdata : ms_res; // @[LSU.scala 112:27]
  assign io_ms_to_ws_valid = ms_valid & ms_ready_go; // @[LSU.scala 70:32]
  assign io_to_ws_rf_we = ms_rf_we; // @[LSU.scala 115:20]
  assign io_to_ws_rf_dst = ms_rf_dst; // @[LSU.scala 114:21]
  assign io_ms_valid = ms_valid; // @[LSU.scala 118:17]
  assign io_ms_rf_we = ms_rf_we & ms_valid; // @[LSU.scala 120:28]
  assign io_ms_rf_dst = ms_rf_dst; // @[LSU.scala 119:18]
  assign io_axi_out_araddr = maddr[31:0]; // @[LSU.scala 85:23]
  assign io_axi_out_arvalid = ren & ms_valid; // @[LSU.scala 86:31]
  assign io_axi_out_awaddr = maddr[31:0]; // @[LSU.scala 91:23]
  assign io_axi_out_awvalid = wen & ms_valid; // @[LSU.scala 92:31]
  assign io_axi_out_wdata = store_data; // @[LSU.scala 96:22]
  assign io_axi_out_wstrb = wstrb; // @[LSU.scala 97:22]
  assign io_axi_out_wvalid = wen; // @[LSU.scala 99:23]
  always @(posedge clock) begin
    if (reset) begin // @[LSU.scala 34:27]
      ms_valid <= 1'h0; // @[LSU.scala 34:27]
    end else if (ms_allowin) begin // @[LSU.scala 51:21]
      ms_valid <= io_es_to_ms_valid; // @[LSU.scala 52:18]
    end
    if (reset) begin // @[LSU.scala 35:24]
      ms_pc <= 64'h0; // @[LSU.scala 35:24]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 54:40]
      ms_pc <= io_pc; // @[LSU.scala 55:15]
    end
    ms_ready_go <= reset | _GEN_16; // @[LSU.scala 37:{30,30}]
    if (reset) begin // @[LSU.scala 39:27]
      ms_rf_we <= 1'h0; // @[LSU.scala 39:27]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 54:40]
      ms_rf_we <= io_rf_we; // @[LSU.scala 56:18]
    end
    if (reset) begin // @[LSU.scala 40:28]
      ms_rf_dst <= 5'h0; // @[LSU.scala 40:28]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 54:40]
      ms_rf_dst <= io_rf_dst; // @[LSU.scala 57:19]
    end
    if (reset) begin // @[LSU.scala 41:25]
      ms_res <= 64'h0; // @[LSU.scala 41:25]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 54:40]
      ms_res <= io_alu_res; // @[LSU.scala 58:16]
    end
    if (reset) begin // @[LSU.scala 43:29]
      store_data <= 64'h0; // @[LSU.scala 43:29]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 54:40]
      store_data <= io_store_data; // @[LSU.scala 59:20]
    end
    if (reset) begin // @[LSU.scala 44:22]
      wen <= 1'h0; // @[LSU.scala 44:22]
    end else if (ms_valid & wen & io_axi_in_wready) begin // @[LSU.scala 75:46]
      wen <= 1'h0; // @[LSU.scala 76:13]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 54:40]
      wen <= io_wen; // @[LSU.scala 60:13]
    end
    if (reset) begin // @[LSU.scala 45:24]
      wstrb <= 8'h0; // @[LSU.scala 45:24]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 54:40]
      wstrb <= io_wstrb; // @[LSU.scala 61:15]
    end
    if (reset) begin // @[LSU.scala 46:22]
      ren <= 1'h0; // @[LSU.scala 46:22]
    end else if (ms_valid & wen & io_axi_in_wready) begin // @[LSU.scala 75:46]
      ren <= _GEN_8;
    end else if (ms_valid & ren & io_axi_in_rvalid) begin // @[LSU.scala 78:52]
      ren <= 1'h0; // @[LSU.scala 80:13]
    end else begin
      ren <= _GEN_8;
    end
    if (reset) begin // @[LSU.scala 47:24]
      maddr <= 64'h0; // @[LSU.scala 47:24]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 54:40]
      maddr <= io_maddr; // @[LSU.scala 63:15]
    end
    if (reset) begin // @[LSU.scala 48:28]
      load_type <= 3'h0; // @[LSU.scala 48:28]
    end else if (io_es_to_ms_valid & ms_allowin) begin // @[LSU.scala 54:40]
      load_type <= io_load_type; // @[LSU.scala 64:19]
    end
    if (reset) begin // @[LSU.scala 73:28]
      mem_rdata <= 64'h0; // @[LSU.scala 73:28]
    end else if (!(ms_valid & wen & io_axi_in_wready)) begin // @[LSU.scala 75:46]
      if (ms_valid & ren & io_axi_in_rvalid) begin // @[LSU.scala 78:52]
        mem_rdata <= io_axi_in_rdata; // @[LSU.scala 79:19]
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
  _RAND_0 = {1{`RANDOM}};
  ms_valid = _RAND_0[0:0];
  _RAND_1 = {2{`RANDOM}};
  ms_pc = _RAND_1[63:0];
  _RAND_2 = {1{`RANDOM}};
  ms_ready_go = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  ms_rf_we = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  ms_rf_dst = _RAND_4[4:0];
  _RAND_5 = {2{`RANDOM}};
  ms_res = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  store_data = _RAND_6[63:0];
  _RAND_7 = {1{`RANDOM}};
  wen = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  wstrb = _RAND_8[7:0];
  _RAND_9 = {1{`RANDOM}};
  ren = _RAND_9[0:0];
  _RAND_10 = {2{`RANDOM}};
  maddr = _RAND_10[63:0];
  _RAND_11 = {1{`RANDOM}};
  load_type = _RAND_11[2:0];
  _RAND_12 = {2{`RANDOM}};
  mem_rdata = _RAND_12[63:0];
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
  input         io_lsu_axi_in_rready,
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
  input         io_axi_in_rvalid,
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
  wire [1:0] _GEN_0 = io_ifu_axi_in_arvalid ? 2'h1 : state; // @[axi_arbiter.scala 59:46 60:23 18:24]
  wire [31:0] _GEN_1 = io_ifu_axi_in_arvalid ? io_ifu_axi_in_araddr : 32'h0; // @[axi_arbiter.scala 59:46 61:28 65:28]
  wire [7:0] _GEN_2 = io_ifu_axi_in_arvalid ? io_ifu_axi_in_arlen : 8'h0; // @[axi_arbiter.scala 59:46 61:28 65:28]
  wire  _GEN_6 = io_ifu_axi_in_arvalid & io_ifu_axi_in_rready; // @[axi_arbiter.scala 59:46 61:28 65:28]
  wire [63:0] _GEN_18 = io_ifu_axi_in_arvalid ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 59:46 62:32 67:32]
  wire  _GEN_19 = io_ifu_axi_in_arvalid & io_axi_in_rlast; // @[axi_arbiter.scala 59:46 62:32 67:32]
  wire  _GEN_20 = io_ifu_axi_in_arvalid & io_axi_in_rvalid; // @[axi_arbiter.scala 59:46 62:32 67:32]
  wire [31:0] _GEN_32 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_araddr : _GEN_1; // @[axi_arbiter.scala 54:46 56:28]
  wire [7:0] _GEN_33 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_arlen : _GEN_2; // @[axi_arbiter.scala 54:46 56:28]
  wire  _GEN_36 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_arvalid : io_ifu_axi_in_arvalid; // @[axi_arbiter.scala 54:46 56:28]
  wire  _GEN_37 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_rready : _GEN_6; // @[axi_arbiter.scala 54:46 56:28]
  wire [31:0] _GEN_38 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_awaddr : 32'h0; // @[axi_arbiter.scala 54:46 56:28]
  wire [7:0] _GEN_39 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_awlen : 8'h0; // @[axi_arbiter.scala 54:46 56:28]
  wire  _GEN_42 = io_lsu_axi_in_arvalid & io_lsu_axi_in_awvalid; // @[axi_arbiter.scala 54:46 56:28]
  wire [63:0] _GEN_43 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_wdata : 64'h0; // @[axi_arbiter.scala 54:46 56:28]
  wire [7:0] _GEN_44 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_wstrb : 8'h0; // @[axi_arbiter.scala 54:46 56:28]
  wire  _GEN_46 = io_lsu_axi_in_arvalid & io_lsu_axi_in_wvalid; // @[axi_arbiter.scala 54:46 56:28]
  wire  _GEN_47 = io_lsu_axi_in_arvalid & io_lsu_axi_in_bready; // @[axi_arbiter.scala 54:46 56:28]
  wire [63:0] _GEN_49 = io_lsu_axi_in_arvalid ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 54:46 57:32]
  wire  _GEN_50 = io_lsu_axi_in_arvalid & io_axi_in_rlast; // @[axi_arbiter.scala 54:46 57:32]
  wire  _GEN_51 = io_lsu_axi_in_arvalid & io_axi_in_rvalid; // @[axi_arbiter.scala 54:46 57:32]
  wire  _GEN_53 = io_lsu_axi_in_arvalid & io_axi_in_wready; // @[axi_arbiter.scala 54:46 57:32]
  wire  _GEN_54 = io_lsu_axi_in_arvalid & io_axi_in_bvalid; // @[axi_arbiter.scala 54:46 57:32]
  wire [63:0] _GEN_56 = io_lsu_axi_in_arvalid ? 64'h0 : _GEN_18; // @[axi_arbiter.scala 54:46 58:32]
  wire  _GEN_57 = io_lsu_axi_in_arvalid ? 1'h0 : _GEN_19; // @[axi_arbiter.scala 54:46 58:32]
  wire  _GEN_58 = io_lsu_axi_in_arvalid ? 1'h0 : _GEN_20; // @[axi_arbiter.scala 54:46 58:32]
  wire [31:0] _GEN_63 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_araddr : _GEN_32; // @[axi_arbiter.scala 49:40 51:28]
  wire [7:0] _GEN_64 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_arlen : _GEN_33; // @[axi_arbiter.scala 49:40 51:28]
  wire  _GEN_67 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_arvalid : _GEN_36; // @[axi_arbiter.scala 49:40 51:28]
  wire  _GEN_68 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_rready : _GEN_37; // @[axi_arbiter.scala 49:40 51:28]
  wire [31:0] _GEN_69 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_awaddr : _GEN_38; // @[axi_arbiter.scala 49:40 51:28]
  wire [7:0] _GEN_70 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_awlen : _GEN_39; // @[axi_arbiter.scala 49:40 51:28]
  wire  _GEN_73 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_awvalid : _GEN_42; // @[axi_arbiter.scala 49:40 51:28]
  wire [63:0] _GEN_74 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_wdata : _GEN_43; // @[axi_arbiter.scala 49:40 51:28]
  wire [7:0] _GEN_75 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_wstrb : _GEN_44; // @[axi_arbiter.scala 49:40 51:28]
  wire  _GEN_77 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_wvalid : _GEN_46; // @[axi_arbiter.scala 49:40 51:28]
  wire  _GEN_78 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_bready : _GEN_47; // @[axi_arbiter.scala 49:40 51:28]
  wire [63:0] _GEN_80 = io_lsu_axi_in_awvalid ? io_axi_in_rdata : _GEN_49; // @[axi_arbiter.scala 49:40 52:32]
  wire  _GEN_81 = io_lsu_axi_in_awvalid ? io_axi_in_rlast : _GEN_50; // @[axi_arbiter.scala 49:40 52:32]
  wire  _GEN_82 = io_lsu_axi_in_awvalid ? io_axi_in_rvalid : _GEN_51; // @[axi_arbiter.scala 49:40 52:32]
  wire  _GEN_84 = io_lsu_axi_in_awvalid ? io_axi_in_wready : _GEN_53; // @[axi_arbiter.scala 49:40 52:32]
  wire  _GEN_85 = io_lsu_axi_in_awvalid ? io_axi_in_bvalid : _GEN_54; // @[axi_arbiter.scala 49:40 52:32]
  wire [63:0] _GEN_87 = io_lsu_axi_in_awvalid ? 64'h0 : _GEN_56; // @[axi_arbiter.scala 49:40 53:32]
  wire  _GEN_88 = io_lsu_axi_in_awvalid ? 1'h0 : _GEN_57; // @[axi_arbiter.scala 49:40 53:32]
  wire  _GEN_89 = io_lsu_axi_in_awvalid ? 1'h0 : _GEN_58; // @[axi_arbiter.scala 49:40 53:32]
  wire [1:0] _GEN_94 = io_lsu_axi_out_rvalid & io_lsu_axi_in_rready & io_lsu_axi_out_rlast ? 2'h0 : state; // @[axi_arbiter.scala 82:88 83:23 18:24]
  wire [1:0] _GEN_95 = io_lsu_axi_out_bvalid & io_lsu_axi_in_bready ? 2'h0 : state; // @[axi_arbiter.scala 90:64 91:23 18:24]
  wire [31:0] _GEN_96 = state == 2'h3 ? io_lsu_axi_in_araddr : 32'h0; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire [7:0] _GEN_97 = state == 2'h3 ? io_lsu_axi_in_arlen : 8'h0; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire  _GEN_100 = state == 2'h3 & io_lsu_axi_in_arvalid; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire  _GEN_101 = state == 2'h3 & io_lsu_axi_in_rready; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire [31:0] _GEN_102 = state == 2'h3 ? io_lsu_axi_in_awaddr : 32'h0; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire [7:0] _GEN_103 = state == 2'h3 ? io_lsu_axi_in_awlen : 8'h0; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire  _GEN_106 = state == 2'h3 & io_lsu_axi_in_awvalid; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire [63:0] _GEN_107 = state == 2'h3 ? io_lsu_axi_in_wdata : 64'h0; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire [7:0] _GEN_108 = state == 2'h3 ? io_lsu_axi_in_wstrb : 8'h0; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire  _GEN_110 = state == 2'h3 & io_lsu_axi_in_wvalid; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire  _GEN_111 = state == 2'h3 & io_lsu_axi_in_bready; // @[axi_arbiter.scala 86:39 87:24 95:24]
  wire [63:0] _GEN_113 = state == 2'h3 ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 86:39 88:28 96:28]
  wire  _GEN_114 = state == 2'h3 & io_axi_in_rlast; // @[axi_arbiter.scala 86:39 88:28 96:28]
  wire  _GEN_115 = state == 2'h3 & io_axi_in_rvalid; // @[axi_arbiter.scala 86:39 88:28 96:28]
  wire  _GEN_117 = state == 2'h3 & io_axi_in_wready; // @[axi_arbiter.scala 86:39 88:28 96:28]
  wire  _GEN_118 = state == 2'h3 & io_axi_in_bvalid; // @[axi_arbiter.scala 86:39 88:28 96:28]
  wire [1:0] _GEN_126 = state == 2'h3 ? _GEN_95 : state; // @[axi_arbiter.scala 18:24 86:39]
  wire [31:0] _GEN_127 = state == 2'h2 ? io_lsu_axi_in_araddr : _GEN_96; // @[axi_arbiter.scala 78:39 79:24]
  wire [7:0] _GEN_128 = state == 2'h2 ? io_lsu_axi_in_arlen : _GEN_97; // @[axi_arbiter.scala 78:39 79:24]
  wire  _GEN_131 = state == 2'h2 ? io_lsu_axi_in_arvalid : _GEN_100; // @[axi_arbiter.scala 78:39 79:24]
  wire  _GEN_132 = state == 2'h2 ? io_lsu_axi_in_rready : _GEN_101; // @[axi_arbiter.scala 78:39 79:24]
  wire [31:0] _GEN_133 = state == 2'h2 ? io_lsu_axi_in_awaddr : _GEN_102; // @[axi_arbiter.scala 78:39 79:24]
  wire [7:0] _GEN_134 = state == 2'h2 ? io_lsu_axi_in_awlen : _GEN_103; // @[axi_arbiter.scala 78:39 79:24]
  wire  _GEN_137 = state == 2'h2 ? io_lsu_axi_in_awvalid : _GEN_106; // @[axi_arbiter.scala 78:39 79:24]
  wire [63:0] _GEN_138 = state == 2'h2 ? io_lsu_axi_in_wdata : _GEN_107; // @[axi_arbiter.scala 78:39 79:24]
  wire [7:0] _GEN_139 = state == 2'h2 ? io_lsu_axi_in_wstrb : _GEN_108; // @[axi_arbiter.scala 78:39 79:24]
  wire  _GEN_141 = state == 2'h2 ? io_lsu_axi_in_wvalid : _GEN_110; // @[axi_arbiter.scala 78:39 79:24]
  wire  _GEN_142 = state == 2'h2 ? io_lsu_axi_in_bready : _GEN_111; // @[axi_arbiter.scala 78:39 79:24]
  wire [63:0] _GEN_144 = state == 2'h2 ? io_axi_in_rdata : _GEN_113; // @[axi_arbiter.scala 78:39 80:28]
  wire  _GEN_145 = state == 2'h2 ? io_axi_in_rlast : _GEN_114; // @[axi_arbiter.scala 78:39 80:28]
  wire  _GEN_146 = state == 2'h2 ? io_axi_in_rvalid : _GEN_115; // @[axi_arbiter.scala 78:39 80:28]
  wire  _GEN_148 = state == 2'h2 ? io_axi_in_wready : _GEN_117; // @[axi_arbiter.scala 78:39 80:28]
  wire  _GEN_149 = state == 2'h2 ? io_axi_in_bvalid : _GEN_118; // @[axi_arbiter.scala 78:39 80:28]
  wire [31:0] _GEN_158 = state == 2'h1 ? io_ifu_axi_in_araddr : _GEN_127; // @[axi_arbiter.scala 70:39 71:24]
  wire [7:0] _GEN_159 = state == 2'h1 ? io_ifu_axi_in_arlen : _GEN_128; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_162 = state == 2'h1 ? io_ifu_axi_in_arvalid : _GEN_131; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_163 = state == 2'h1 ? io_ifu_axi_in_rready : _GEN_132; // @[axi_arbiter.scala 70:39 71:24]
  wire [31:0] _GEN_164 = state == 2'h1 ? 32'h0 : _GEN_133; // @[axi_arbiter.scala 70:39 71:24]
  wire [7:0] _GEN_165 = state == 2'h1 ? 8'h0 : _GEN_134; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_168 = state == 2'h1 ? 1'h0 : _GEN_137; // @[axi_arbiter.scala 70:39 71:24]
  wire [63:0] _GEN_169 = state == 2'h1 ? 64'h0 : _GEN_138; // @[axi_arbiter.scala 70:39 71:24]
  wire [7:0] _GEN_170 = state == 2'h1 ? 8'h0 : _GEN_139; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_172 = state == 2'h1 ? 1'h0 : _GEN_141; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_173 = state == 2'h1 ? 1'h0 : _GEN_142; // @[axi_arbiter.scala 70:39 71:24]
  wire [63:0] _GEN_175 = state == 2'h1 ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 70:39 72:28]
  wire  _GEN_176 = state == 2'h1 & io_axi_in_rlast; // @[axi_arbiter.scala 70:39 72:28]
  wire  _GEN_177 = state == 2'h1 & io_axi_in_rvalid; // @[axi_arbiter.scala 70:39 72:28]
  wire [63:0] _GEN_182 = state == 2'h1 ? 64'h0 : _GEN_144; // @[axi_arbiter.scala 70:39 73:28]
  wire  _GEN_183 = state == 2'h1 ? 1'h0 : _GEN_145; // @[axi_arbiter.scala 70:39 73:28]
  wire  _GEN_184 = state == 2'h1 ? 1'h0 : _GEN_146; // @[axi_arbiter.scala 70:39 73:28]
  wire  _GEN_186 = state == 2'h1 ? 1'h0 : _GEN_148; // @[axi_arbiter.scala 70:39 73:28]
  wire  _GEN_187 = state == 2'h1 ? 1'h0 : _GEN_149; // @[axi_arbiter.scala 70:39 73:28]
  assign io_ifu_axi_out_rdata = state == 2'h0 ? _GEN_87 : _GEN_175; // @[axi_arbiter.scala 48:27]
  assign io_ifu_axi_out_rlast = state == 2'h0 ? _GEN_88 : _GEN_176; // @[axi_arbiter.scala 48:27]
  assign io_ifu_axi_out_rvalid = state == 2'h0 ? _GEN_89 : _GEN_177; // @[axi_arbiter.scala 48:27]
  assign io_lsu_axi_out_rdata = state == 2'h0 ? _GEN_80 : _GEN_182; // @[axi_arbiter.scala 48:27]
  assign io_lsu_axi_out_rlast = state == 2'h0 ? _GEN_81 : _GEN_183; // @[axi_arbiter.scala 48:27]
  assign io_lsu_axi_out_rvalid = state == 2'h0 ? _GEN_82 : _GEN_184; // @[axi_arbiter.scala 48:27]
  assign io_lsu_axi_out_wready = state == 2'h0 ? _GEN_84 : _GEN_186; // @[axi_arbiter.scala 48:27]
  assign io_lsu_axi_out_bvalid = state == 2'h0 ? _GEN_85 : _GEN_187; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_araddr = state == 2'h0 ? _GEN_63 : _GEN_158; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_arlen = state == 2'h0 ? _GEN_64 : _GEN_159; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_arvalid = state == 2'h0 ? _GEN_67 : _GEN_162; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_rready = state == 2'h0 ? _GEN_68 : _GEN_163; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_awaddr = state == 2'h0 ? _GEN_69 : _GEN_164; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_awlen = state == 2'h0 ? _GEN_70 : _GEN_165; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_awvalid = state == 2'h0 ? _GEN_73 : _GEN_168; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_wdata = state == 2'h0 ? _GEN_74 : _GEN_169; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_wstrb = state == 2'h0 ? _GEN_75 : _GEN_170; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_wvalid = state == 2'h0 ? _GEN_77 : _GEN_172; // @[axi_arbiter.scala 48:27]
  assign io_axi_out_bready = state == 2'h0 ? _GEN_78 : _GEN_173; // @[axi_arbiter.scala 48:27]
  always @(posedge clock) begin
    if (reset) begin // @[axi_arbiter.scala 18:24]
      state <= 2'h0; // @[axi_arbiter.scala 18:24]
    end else if (state == 2'h0) begin // @[axi_arbiter.scala 48:27]
      if (io_lsu_axi_in_awvalid) begin // @[axi_arbiter.scala 49:40]
        state <= 2'h3; // @[axi_arbiter.scala 50:23]
      end else if (io_lsu_axi_in_arvalid) begin // @[axi_arbiter.scala 54:46]
        state <= 2'h2; // @[axi_arbiter.scala 55:23]
      end else begin
        state <= _GEN_0;
      end
    end else if (state == 2'h1) begin // @[axi_arbiter.scala 70:39]
      if (io_ifu_axi_out_rvalid & io_ifu_axi_in_rready & io_ifu_axi_out_rlast) begin // @[axi_arbiter.scala 74:88]
        state <= 2'h0; // @[axi_arbiter.scala 75:23]
      end
    end else if (state == 2'h2) begin // @[axi_arbiter.scala 78:39]
      state <= _GEN_94;
    end else begin
      state <= _GEN_126;
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
  output        io_to_lsu_wready,
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
  reg [31:0] _RAND_99;
  reg [31:0] _RAND_100;
  reg [31:0] _RAND_101;
  reg [31:0] _RAND_102;
  reg [31:0] _RAND_103;
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
  reg [31:0] _RAND_122;
  reg [31:0] _RAND_123;
  reg [31:0] _RAND_124;
  reg [31:0] _RAND_125;
  reg [31:0] _RAND_126;
  reg [31:0] _RAND_127;
  reg [31:0] _RAND_128;
  reg [31:0] _RAND_129;
  reg [511:0] _RAND_130;
  reg [31:0] _RAND_131;
  reg [31:0] _RAND_132;
  reg [63:0] _RAND_133;
  reg [63:0] _RAND_134;
  reg [63:0] _RAND_135;
  reg [63:0] _RAND_136;
  reg [63:0] _RAND_137;
  reg [63:0] _RAND_138;
  reg [63:0] _RAND_139;
  reg [63:0] _RAND_140;
  reg [31:0] _RAND_141;
  reg [31:0] _RAND_142;
  reg [31:0] _RAND_143;
`endif // RANDOMIZE_REG_INIT
  reg [511:0] ram_0_0; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_1; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_2; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_3; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_4; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_5; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_6; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_7; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_8; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_9; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_10; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_11; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_12; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_13; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_14; // @[d_cache.scala 19:24]
  reg [511:0] ram_0_15; // @[d_cache.scala 19:24]
  reg [511:0] ram_1_0; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_1; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_2; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_3; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_4; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_5; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_6; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_7; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_8; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_9; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_10; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_11; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_12; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_13; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_14; // @[d_cache.scala 20:24]
  reg [511:0] ram_1_15; // @[d_cache.scala 20:24]
  reg [31:0] tag_0_0; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_1; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_2; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_3; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_4; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_5; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_6; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_7; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_8; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_9; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_10; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_11; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_12; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_13; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_14; // @[d_cache.scala 28:24]
  reg [31:0] tag_0_15; // @[d_cache.scala 28:24]
  reg [31:0] tag_1_0; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_1; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_2; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_3; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_4; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_5; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_6; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_7; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_8; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_9; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_10; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_11; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_12; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_13; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_14; // @[d_cache.scala 29:24]
  reg [31:0] tag_1_15; // @[d_cache.scala 29:24]
  reg  valid_0_0; // @[d_cache.scala 30:26]
  reg  valid_0_1; // @[d_cache.scala 30:26]
  reg  valid_0_2; // @[d_cache.scala 30:26]
  reg  valid_0_3; // @[d_cache.scala 30:26]
  reg  valid_0_4; // @[d_cache.scala 30:26]
  reg  valid_0_5; // @[d_cache.scala 30:26]
  reg  valid_0_6; // @[d_cache.scala 30:26]
  reg  valid_0_7; // @[d_cache.scala 30:26]
  reg  valid_0_8; // @[d_cache.scala 30:26]
  reg  valid_0_9; // @[d_cache.scala 30:26]
  reg  valid_0_10; // @[d_cache.scala 30:26]
  reg  valid_0_11; // @[d_cache.scala 30:26]
  reg  valid_0_12; // @[d_cache.scala 30:26]
  reg  valid_0_13; // @[d_cache.scala 30:26]
  reg  valid_0_14; // @[d_cache.scala 30:26]
  reg  valid_0_15; // @[d_cache.scala 30:26]
  reg  valid_1_0; // @[d_cache.scala 31:26]
  reg  valid_1_1; // @[d_cache.scala 31:26]
  reg  valid_1_2; // @[d_cache.scala 31:26]
  reg  valid_1_3; // @[d_cache.scala 31:26]
  reg  valid_1_4; // @[d_cache.scala 31:26]
  reg  valid_1_5; // @[d_cache.scala 31:26]
  reg  valid_1_6; // @[d_cache.scala 31:26]
  reg  valid_1_7; // @[d_cache.scala 31:26]
  reg  valid_1_8; // @[d_cache.scala 31:26]
  reg  valid_1_9; // @[d_cache.scala 31:26]
  reg  valid_1_10; // @[d_cache.scala 31:26]
  reg  valid_1_11; // @[d_cache.scala 31:26]
  reg  valid_1_12; // @[d_cache.scala 31:26]
  reg  valid_1_13; // @[d_cache.scala 31:26]
  reg  valid_1_14; // @[d_cache.scala 31:26]
  reg  valid_1_15; // @[d_cache.scala 31:26]
  reg  dirty_0_0; // @[d_cache.scala 32:26]
  reg  dirty_0_1; // @[d_cache.scala 32:26]
  reg  dirty_0_2; // @[d_cache.scala 32:26]
  reg  dirty_0_3; // @[d_cache.scala 32:26]
  reg  dirty_0_4; // @[d_cache.scala 32:26]
  reg  dirty_0_5; // @[d_cache.scala 32:26]
  reg  dirty_0_6; // @[d_cache.scala 32:26]
  reg  dirty_0_7; // @[d_cache.scala 32:26]
  reg  dirty_0_8; // @[d_cache.scala 32:26]
  reg  dirty_0_9; // @[d_cache.scala 32:26]
  reg  dirty_0_10; // @[d_cache.scala 32:26]
  reg  dirty_0_11; // @[d_cache.scala 32:26]
  reg  dirty_0_12; // @[d_cache.scala 32:26]
  reg  dirty_0_13; // @[d_cache.scala 32:26]
  reg  dirty_0_14; // @[d_cache.scala 32:26]
  reg  dirty_0_15; // @[d_cache.scala 32:26]
  reg  dirty_1_0; // @[d_cache.scala 33:26]
  reg  dirty_1_1; // @[d_cache.scala 33:26]
  reg  dirty_1_2; // @[d_cache.scala 33:26]
  reg  dirty_1_3; // @[d_cache.scala 33:26]
  reg  dirty_1_4; // @[d_cache.scala 33:26]
  reg  dirty_1_5; // @[d_cache.scala 33:26]
  reg  dirty_1_6; // @[d_cache.scala 33:26]
  reg  dirty_1_7; // @[d_cache.scala 33:26]
  reg  dirty_1_8; // @[d_cache.scala 33:26]
  reg  dirty_1_9; // @[d_cache.scala 33:26]
  reg  dirty_1_10; // @[d_cache.scala 33:26]
  reg  dirty_1_11; // @[d_cache.scala 33:26]
  reg  dirty_1_12; // @[d_cache.scala 33:26]
  reg  dirty_1_13; // @[d_cache.scala 33:26]
  reg  dirty_1_14; // @[d_cache.scala 33:26]
  reg  dirty_1_15; // @[d_cache.scala 33:26]
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
  wire [5:0] offset = io_from_lsu_araddr[5:0]; // @[d_cache.scala 46:36]
  wire [3:0] index = io_from_lsu_araddr[9:6]; // @[d_cache.scala 47:35]
  wire [21:0] tag = io_from_lsu_araddr[31:10]; // @[d_cache.scala 48:33]
  wire [8:0] shift_bit = {offset, 3'h0}; // @[d_cache.scala 50:28]
  wire [63:0] _wmask_T_4 = io_from_lsu_wstrb == 8'hff ? 64'hffffffffffffffff : 64'h0; // @[d_cache.scala 63:20]
  wire [63:0] _wmask_T_5 = io_from_lsu_wstrb == 8'hf ? 64'hffffffff : _wmask_T_4; // @[d_cache.scala 62:20]
  wire [63:0] _wmask_T_6 = io_from_lsu_wstrb == 8'h3 ? 64'hffff : _wmask_T_5; // @[d_cache.scala 61:20]
  wire [63:0] wmask = io_from_lsu_wstrb == 8'h1 ? 64'hff : _wmask_T_6; // @[d_cache.scala 60:20]
  wire [31:0] _GEN_1 = 4'h1 == index ? tag_0_1 : tag_0_0; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_2 = 4'h2 == index ? tag_0_2 : _GEN_1; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_3 = 4'h3 == index ? tag_0_3 : _GEN_2; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_4 = 4'h4 == index ? tag_0_4 : _GEN_3; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_5 = 4'h5 == index ? tag_0_5 : _GEN_4; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_6 = 4'h6 == index ? tag_0_6 : _GEN_5; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_7 = 4'h7 == index ? tag_0_7 : _GEN_6; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_8 = 4'h8 == index ? tag_0_8 : _GEN_7; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_9 = 4'h9 == index ? tag_0_9 : _GEN_8; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_10 = 4'ha == index ? tag_0_10 : _GEN_9; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_11 = 4'hb == index ? tag_0_11 : _GEN_10; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_12 = 4'hc == index ? tag_0_12 : _GEN_11; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_13 = 4'hd == index ? tag_0_13 : _GEN_12; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_14 = 4'he == index ? tag_0_14 : _GEN_13; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_15 = 4'hf == index ? tag_0_15 : _GEN_14; // @[d_cache.scala 65:{24,24}]
  wire [31:0] _GEN_2012 = {{10'd0}, tag}; // @[d_cache.scala 65:24]
  wire  _GEN_17 = 4'h1 == index ? valid_0_1 : valid_0_0; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_18 = 4'h2 == index ? valid_0_2 : _GEN_17; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_19 = 4'h3 == index ? valid_0_3 : _GEN_18; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_20 = 4'h4 == index ? valid_0_4 : _GEN_19; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_21 = 4'h5 == index ? valid_0_5 : _GEN_20; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_22 = 4'h6 == index ? valid_0_6 : _GEN_21; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_23 = 4'h7 == index ? valid_0_7 : _GEN_22; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_24 = 4'h8 == index ? valid_0_8 : _GEN_23; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_25 = 4'h9 == index ? valid_0_9 : _GEN_24; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_26 = 4'ha == index ? valid_0_10 : _GEN_25; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_27 = 4'hb == index ? valid_0_11 : _GEN_26; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_28 = 4'hc == index ? valid_0_12 : _GEN_27; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_29 = 4'hd == index ? valid_0_13 : _GEN_28; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_30 = 4'he == index ? valid_0_14 : _GEN_29; // @[d_cache.scala 65:{50,50}]
  wire  _GEN_31 = 4'hf == index ? valid_0_15 : _GEN_30; // @[d_cache.scala 65:{50,50}]
  wire  _T_2 = _GEN_15 == _GEN_2012 & _GEN_31; // @[d_cache.scala 65:33]
  wire [31:0] _GEN_34 = 4'h1 == index ? tag_1_1 : tag_1_0; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_35 = 4'h2 == index ? tag_1_2 : _GEN_34; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_36 = 4'h3 == index ? tag_1_3 : _GEN_35; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_37 = 4'h4 == index ? tag_1_4 : _GEN_36; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_38 = 4'h5 == index ? tag_1_5 : _GEN_37; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_39 = 4'h6 == index ? tag_1_6 : _GEN_38; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_40 = 4'h7 == index ? tag_1_7 : _GEN_39; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_41 = 4'h8 == index ? tag_1_8 : _GEN_40; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_42 = 4'h9 == index ? tag_1_9 : _GEN_41; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_43 = 4'ha == index ? tag_1_10 : _GEN_42; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_44 = 4'hb == index ? tag_1_11 : _GEN_43; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_45 = 4'hc == index ? tag_1_12 : _GEN_44; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_46 = 4'hd == index ? tag_1_13 : _GEN_45; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_47 = 4'he == index ? tag_1_14 : _GEN_46; // @[d_cache.scala 70:{24,24}]
  wire [31:0] _GEN_48 = 4'hf == index ? tag_1_15 : _GEN_47; // @[d_cache.scala 70:{24,24}]
  wire  _GEN_50 = 4'h1 == index ? valid_1_1 : valid_1_0; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_51 = 4'h2 == index ? valid_1_2 : _GEN_50; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_52 = 4'h3 == index ? valid_1_3 : _GEN_51; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_53 = 4'h4 == index ? valid_1_4 : _GEN_52; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_54 = 4'h5 == index ? valid_1_5 : _GEN_53; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_55 = 4'h6 == index ? valid_1_6 : _GEN_54; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_56 = 4'h7 == index ? valid_1_7 : _GEN_55; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_57 = 4'h8 == index ? valid_1_8 : _GEN_56; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_58 = 4'h9 == index ? valid_1_9 : _GEN_57; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_59 = 4'ha == index ? valid_1_10 : _GEN_58; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_60 = 4'hb == index ? valid_1_11 : _GEN_59; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_61 = 4'hc == index ? valid_1_12 : _GEN_60; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_62 = 4'hd == index ? valid_1_13 : _GEN_61; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_63 = 4'he == index ? valid_1_14 : _GEN_62; // @[d_cache.scala 70:{50,50}]
  wire  _GEN_64 = 4'hf == index ? valid_1_15 : _GEN_63; // @[d_cache.scala 70:{50,50}]
  wire  _T_5 = _GEN_48 == _GEN_2012 & _GEN_64; // @[d_cache.scala 70:33]
  reg [3:0] state; // @[d_cache.scala 84:24]
  wire  _T_9 = io_from_lsu_araddr >= 32'ha0000000; // @[d_cache.scala 92:41]
  wire [3:0] _GEN_69 = _T_9 ? 4'h9 : 4'h2; // @[d_cache.scala 101:27 98:58 99:27]
  wire [3:0] _GEN_73 = way1_hit ? 4'h0 : 4'h3; // @[d_cache.scala 113:33 119:23]
  wire [2:0] _GEN_74 = way1_hit ? receive_num : 3'h0; // @[d_cache.scala 113:33 120:29 43:30]
  wire [63:0] _ram_0_T = io_from_lsu_wdata & wmask; // @[d_cache.scala 126:53]
  wire [574:0] _GEN_2236 = {{511'd0}, _ram_0_T}; // @[d_cache.scala 126:62]
  wire [574:0] _ram_0_T_1 = _GEN_2236 << shift_bit; // @[d_cache.scala 126:62]
  wire [574:0] _GEN_2237 = {{511'd0}, wmask}; // @[d_cache.scala 126:102]
  wire [574:0] _ram_0_T_2 = _GEN_2237 << shift_bit; // @[d_cache.scala 126:102]
  wire [574:0] _ram_0_T_3 = ~_ram_0_T_2; // @[d_cache.scala 126:94]
  wire [511:0] _GEN_78 = 4'h1 == index ? ram_0_1 : ram_0_0; // @[d_cache.scala 126:{92,92}]
  wire [511:0] _GEN_79 = 4'h2 == index ? ram_0_2 : _GEN_78; // @[d_cache.scala 126:{92,92}]
  wire [511:0] _GEN_80 = 4'h3 == index ? ram_0_3 : _GEN_79; // @[d_cache.scala 126:{92,92}]
  wire [511:0] _GEN_81 = 4'h4 == index ? ram_0_4 : _GEN_80; // @[d_cache.scala 126:{92,92}]
  wire [511:0] _GEN_82 = 4'h5 == index ? ram_0_5 : _GEN_81; // @[d_cache.scala 126:{92,92}]
  wire [511:0] _GEN_83 = 4'h6 == index ? ram_0_6 : _GEN_82; // @[d_cache.scala 126:{92,92}]
  wire [511:0] _GEN_84 = 4'h7 == index ? ram_0_7 : _GEN_83; // @[d_cache.scala 126:{92,92}]
  wire [511:0] _GEN_85 = 4'h8 == index ? ram_0_8 : _GEN_84; // @[d_cache.scala 126:{92,92}]
  wire [511:0] _GEN_86 = 4'h9 == index ? ram_0_9 : _GEN_85; // @[d_cache.scala 126:{92,92}]
  wire [511:0] _GEN_87 = 4'ha == index ? ram_0_10 : _GEN_86; // @[d_cache.scala 126:{92,92}]
  wire [511:0] _GEN_88 = 4'hb == index ? ram_0_11 : _GEN_87; // @[d_cache.scala 126:{92,92}]
  wire [511:0] _GEN_89 = 4'hc == index ? ram_0_12 : _GEN_88; // @[d_cache.scala 126:{92,92}]
  wire [511:0] _GEN_90 = 4'hd == index ? ram_0_13 : _GEN_89; // @[d_cache.scala 126:{92,92}]
  wire [511:0] _GEN_91 = 4'he == index ? ram_0_14 : _GEN_90; // @[d_cache.scala 126:{92,92}]
  wire [511:0] _GEN_92 = 4'hf == index ? ram_0_15 : _GEN_91; // @[d_cache.scala 126:{92,92}]
  wire [574:0] _GEN_2019 = {{63'd0}, _GEN_92}; // @[d_cache.scala 126:92]
  wire [574:0] _ram_0_T_4 = _GEN_2019 & _ram_0_T_3; // @[d_cache.scala 126:92]
  wire [574:0] _ram_0_T_5 = _ram_0_T_1 | _ram_0_T_4; // @[d_cache.scala 126:76]
  wire [511:0] _GEN_93 = 4'h0 == index ? _ram_0_T_5[511:0] : ram_0_0; // @[d_cache.scala 126:{30,30} 19:24]
  wire [511:0] _GEN_94 = 4'h1 == index ? _ram_0_T_5[511:0] : ram_0_1; // @[d_cache.scala 126:{30,30} 19:24]
  wire [511:0] _GEN_95 = 4'h2 == index ? _ram_0_T_5[511:0] : ram_0_2; // @[d_cache.scala 126:{30,30} 19:24]
  wire [511:0] _GEN_96 = 4'h3 == index ? _ram_0_T_5[511:0] : ram_0_3; // @[d_cache.scala 126:{30,30} 19:24]
  wire [511:0] _GEN_97 = 4'h4 == index ? _ram_0_T_5[511:0] : ram_0_4; // @[d_cache.scala 126:{30,30} 19:24]
  wire [511:0] _GEN_98 = 4'h5 == index ? _ram_0_T_5[511:0] : ram_0_5; // @[d_cache.scala 126:{30,30} 19:24]
  wire [511:0] _GEN_99 = 4'h6 == index ? _ram_0_T_5[511:0] : ram_0_6; // @[d_cache.scala 126:{30,30} 19:24]
  wire [511:0] _GEN_100 = 4'h7 == index ? _ram_0_T_5[511:0] : ram_0_7; // @[d_cache.scala 126:{30,30} 19:24]
  wire [511:0] _GEN_101 = 4'h8 == index ? _ram_0_T_5[511:0] : ram_0_8; // @[d_cache.scala 126:{30,30} 19:24]
  wire [511:0] _GEN_102 = 4'h9 == index ? _ram_0_T_5[511:0] : ram_0_9; // @[d_cache.scala 126:{30,30} 19:24]
  wire [511:0] _GEN_103 = 4'ha == index ? _ram_0_T_5[511:0] : ram_0_10; // @[d_cache.scala 126:{30,30} 19:24]
  wire [511:0] _GEN_104 = 4'hb == index ? _ram_0_T_5[511:0] : ram_0_11; // @[d_cache.scala 126:{30,30} 19:24]
  wire [511:0] _GEN_105 = 4'hc == index ? _ram_0_T_5[511:0] : ram_0_12; // @[d_cache.scala 126:{30,30} 19:24]
  wire [511:0] _GEN_106 = 4'hd == index ? _ram_0_T_5[511:0] : ram_0_13; // @[d_cache.scala 126:{30,30} 19:24]
  wire [511:0] _GEN_107 = 4'he == index ? _ram_0_T_5[511:0] : ram_0_14; // @[d_cache.scala 126:{30,30} 19:24]
  wire [511:0] _GEN_108 = 4'hf == index ? _ram_0_T_5[511:0] : ram_0_15; // @[d_cache.scala 126:{30,30} 19:24]
  wire  _GEN_2020 = 4'h0 == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_109 = 4'h0 == index | dirty_0_0; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_2021 = 4'h1 == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_110 = 4'h1 == index | dirty_0_1; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_2023 = 4'h2 == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_111 = 4'h2 == index | dirty_0_2; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_2025 = 4'h3 == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_112 = 4'h3 == index | dirty_0_3; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_2027 = 4'h4 == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_113 = 4'h4 == index | dirty_0_4; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_2030 = 4'h5 == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_114 = 4'h5 == index | dirty_0_5; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_2031 = 4'h6 == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_115 = 4'h6 == index | dirty_0_6; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_2036 = 4'h7 == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_116 = 4'h7 == index | dirty_0_7; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_2037 = 4'h8 == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_117 = 4'h8 == index | dirty_0_8; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_2041 = 4'h9 == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_118 = 4'h9 == index | dirty_0_9; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_2045 = 4'ha == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_119 = 4'ha == index | dirty_0_10; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_2047 = 4'hb == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_120 = 4'hb == index | dirty_0_11; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_2049 = 4'hc == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_121 = 4'hc == index | dirty_0_12; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_2050 = 4'hd == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_122 = 4'hd == index | dirty_0_13; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_2054 = 4'he == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_123 = 4'he == index | dirty_0_14; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_2055 = 4'hf == index; // @[d_cache.scala 130:{32,32} 32:26]
  wire  _GEN_124 = 4'hf == index | dirty_0_15; // @[d_cache.scala 130:{32,32} 32:26]
  wire [511:0] _GEN_126 = 4'h1 == index ? ram_1_1 : ram_1_0; // @[d_cache.scala 135:{92,92}]
  wire [511:0] _GEN_127 = 4'h2 == index ? ram_1_2 : _GEN_126; // @[d_cache.scala 135:{92,92}]
  wire [511:0] _GEN_128 = 4'h3 == index ? ram_1_3 : _GEN_127; // @[d_cache.scala 135:{92,92}]
  wire [511:0] _GEN_129 = 4'h4 == index ? ram_1_4 : _GEN_128; // @[d_cache.scala 135:{92,92}]
  wire [511:0] _GEN_130 = 4'h5 == index ? ram_1_5 : _GEN_129; // @[d_cache.scala 135:{92,92}]
  wire [511:0] _GEN_131 = 4'h6 == index ? ram_1_6 : _GEN_130; // @[d_cache.scala 135:{92,92}]
  wire [511:0] _GEN_132 = 4'h7 == index ? ram_1_7 : _GEN_131; // @[d_cache.scala 135:{92,92}]
  wire [511:0] _GEN_133 = 4'h8 == index ? ram_1_8 : _GEN_132; // @[d_cache.scala 135:{92,92}]
  wire [511:0] _GEN_134 = 4'h9 == index ? ram_1_9 : _GEN_133; // @[d_cache.scala 135:{92,92}]
  wire [511:0] _GEN_135 = 4'ha == index ? ram_1_10 : _GEN_134; // @[d_cache.scala 135:{92,92}]
  wire [511:0] _GEN_136 = 4'hb == index ? ram_1_11 : _GEN_135; // @[d_cache.scala 135:{92,92}]
  wire [511:0] _GEN_137 = 4'hc == index ? ram_1_12 : _GEN_136; // @[d_cache.scala 135:{92,92}]
  wire [511:0] _GEN_138 = 4'hd == index ? ram_1_13 : _GEN_137; // @[d_cache.scala 135:{92,92}]
  wire [511:0] _GEN_139 = 4'he == index ? ram_1_14 : _GEN_138; // @[d_cache.scala 135:{92,92}]
  wire [511:0] _GEN_140 = 4'hf == index ? ram_1_15 : _GEN_139; // @[d_cache.scala 135:{92,92}]
  wire [574:0] _GEN_2060 = {{63'd0}, _GEN_140}; // @[d_cache.scala 135:92]
  wire [574:0] _ram_1_T_4 = _GEN_2060 & _ram_0_T_3; // @[d_cache.scala 135:92]
  wire [574:0] _ram_1_T_5 = _ram_0_T_1 | _ram_1_T_4; // @[d_cache.scala 135:76]
  wire [511:0] _GEN_141 = 4'h0 == index ? _ram_1_T_5[511:0] : ram_1_0; // @[d_cache.scala 135:{30,30} 20:24]
  wire [511:0] _GEN_142 = 4'h1 == index ? _ram_1_T_5[511:0] : ram_1_1; // @[d_cache.scala 135:{30,30} 20:24]
  wire [511:0] _GEN_143 = 4'h2 == index ? _ram_1_T_5[511:0] : ram_1_2; // @[d_cache.scala 135:{30,30} 20:24]
  wire [511:0] _GEN_144 = 4'h3 == index ? _ram_1_T_5[511:0] : ram_1_3; // @[d_cache.scala 135:{30,30} 20:24]
  wire [511:0] _GEN_145 = 4'h4 == index ? _ram_1_T_5[511:0] : ram_1_4; // @[d_cache.scala 135:{30,30} 20:24]
  wire [511:0] _GEN_146 = 4'h5 == index ? _ram_1_T_5[511:0] : ram_1_5; // @[d_cache.scala 135:{30,30} 20:24]
  wire [511:0] _GEN_147 = 4'h6 == index ? _ram_1_T_5[511:0] : ram_1_6; // @[d_cache.scala 135:{30,30} 20:24]
  wire [511:0] _GEN_148 = 4'h7 == index ? _ram_1_T_5[511:0] : ram_1_7; // @[d_cache.scala 135:{30,30} 20:24]
  wire [511:0] _GEN_149 = 4'h8 == index ? _ram_1_T_5[511:0] : ram_1_8; // @[d_cache.scala 135:{30,30} 20:24]
  wire [511:0] _GEN_150 = 4'h9 == index ? _ram_1_T_5[511:0] : ram_1_9; // @[d_cache.scala 135:{30,30} 20:24]
  wire [511:0] _GEN_151 = 4'ha == index ? _ram_1_T_5[511:0] : ram_1_10; // @[d_cache.scala 135:{30,30} 20:24]
  wire [511:0] _GEN_152 = 4'hb == index ? _ram_1_T_5[511:0] : ram_1_11; // @[d_cache.scala 135:{30,30} 20:24]
  wire [511:0] _GEN_153 = 4'hc == index ? _ram_1_T_5[511:0] : ram_1_12; // @[d_cache.scala 135:{30,30} 20:24]
  wire [511:0] _GEN_154 = 4'hd == index ? _ram_1_T_5[511:0] : ram_1_13; // @[d_cache.scala 135:{30,30} 20:24]
  wire [511:0] _GEN_155 = 4'he == index ? _ram_1_T_5[511:0] : ram_1_14; // @[d_cache.scala 135:{30,30} 20:24]
  wire [511:0] _GEN_156 = 4'hf == index ? _ram_1_T_5[511:0] : ram_1_15; // @[d_cache.scala 135:{30,30} 20:24]
  wire  _GEN_157 = _GEN_2020 | dirty_1_0; // @[d_cache.scala 142:{32,32} 33:26]
  wire  _GEN_158 = _GEN_2021 | dirty_1_1; // @[d_cache.scala 142:{32,32} 33:26]
  wire  _GEN_159 = _GEN_2023 | dirty_1_2; // @[d_cache.scala 142:{32,32} 33:26]
  wire  _GEN_160 = _GEN_2025 | dirty_1_3; // @[d_cache.scala 142:{32,32} 33:26]
  wire  _GEN_161 = _GEN_2027 | dirty_1_4; // @[d_cache.scala 142:{32,32} 33:26]
  wire  _GEN_162 = _GEN_2030 | dirty_1_5; // @[d_cache.scala 142:{32,32} 33:26]
  wire  _GEN_163 = _GEN_2031 | dirty_1_6; // @[d_cache.scala 142:{32,32} 33:26]
  wire  _GEN_164 = _GEN_2036 | dirty_1_7; // @[d_cache.scala 142:{32,32} 33:26]
  wire  _GEN_165 = _GEN_2037 | dirty_1_8; // @[d_cache.scala 142:{32,32} 33:26]
  wire  _GEN_166 = _GEN_2041 | dirty_1_9; // @[d_cache.scala 142:{32,32} 33:26]
  wire  _GEN_167 = _GEN_2045 | dirty_1_10; // @[d_cache.scala 142:{32,32} 33:26]
  wire  _GEN_168 = _GEN_2047 | dirty_1_11; // @[d_cache.scala 142:{32,32} 33:26]
  wire  _GEN_169 = _GEN_2049 | dirty_1_12; // @[d_cache.scala 142:{32,32} 33:26]
  wire  _GEN_170 = _GEN_2050 | dirty_1_13; // @[d_cache.scala 142:{32,32} 33:26]
  wire  _GEN_171 = _GEN_2054 | dirty_1_14; // @[d_cache.scala 142:{32,32} 33:26]
  wire  _GEN_172 = _GEN_2055 | dirty_1_15; // @[d_cache.scala 142:{32,32} 33:26]
  wire [3:0] _GEN_173 = way1_hit ? 4'h0 : 4'h4; // @[d_cache.scala 132:33 133:23 144:23]
  wire [511:0] _GEN_174 = way1_hit ? _GEN_141 : ram_1_0; // @[d_cache.scala 132:33 20:24]
  wire [511:0] _GEN_175 = way1_hit ? _GEN_142 : ram_1_1; // @[d_cache.scala 132:33 20:24]
  wire [511:0] _GEN_176 = way1_hit ? _GEN_143 : ram_1_2; // @[d_cache.scala 132:33 20:24]
  wire [511:0] _GEN_177 = way1_hit ? _GEN_144 : ram_1_3; // @[d_cache.scala 132:33 20:24]
  wire [511:0] _GEN_178 = way1_hit ? _GEN_145 : ram_1_4; // @[d_cache.scala 132:33 20:24]
  wire [511:0] _GEN_179 = way1_hit ? _GEN_146 : ram_1_5; // @[d_cache.scala 132:33 20:24]
  wire [511:0] _GEN_180 = way1_hit ? _GEN_147 : ram_1_6; // @[d_cache.scala 132:33 20:24]
  wire [511:0] _GEN_181 = way1_hit ? _GEN_148 : ram_1_7; // @[d_cache.scala 132:33 20:24]
  wire [511:0] _GEN_182 = way1_hit ? _GEN_149 : ram_1_8; // @[d_cache.scala 132:33 20:24]
  wire [511:0] _GEN_183 = way1_hit ? _GEN_150 : ram_1_9; // @[d_cache.scala 132:33 20:24]
  wire [511:0] _GEN_184 = way1_hit ? _GEN_151 : ram_1_10; // @[d_cache.scala 132:33 20:24]
  wire [511:0] _GEN_185 = way1_hit ? _GEN_152 : ram_1_11; // @[d_cache.scala 132:33 20:24]
  wire [511:0] _GEN_186 = way1_hit ? _GEN_153 : ram_1_12; // @[d_cache.scala 132:33 20:24]
  wire [511:0] _GEN_187 = way1_hit ? _GEN_154 : ram_1_13; // @[d_cache.scala 132:33 20:24]
  wire [511:0] _GEN_188 = way1_hit ? _GEN_155 : ram_1_14; // @[d_cache.scala 132:33 20:24]
  wire [511:0] _GEN_189 = way1_hit ? _GEN_156 : ram_1_15; // @[d_cache.scala 132:33 20:24]
  wire  _GEN_190 = way1_hit ? _GEN_157 : dirty_1_0; // @[d_cache.scala 132:33 33:26]
  wire  _GEN_191 = way1_hit ? _GEN_158 : dirty_1_1; // @[d_cache.scala 132:33 33:26]
  wire  _GEN_192 = way1_hit ? _GEN_159 : dirty_1_2; // @[d_cache.scala 132:33 33:26]
  wire  _GEN_193 = way1_hit ? _GEN_160 : dirty_1_3; // @[d_cache.scala 132:33 33:26]
  wire  _GEN_194 = way1_hit ? _GEN_161 : dirty_1_4; // @[d_cache.scala 132:33 33:26]
  wire  _GEN_195 = way1_hit ? _GEN_162 : dirty_1_5; // @[d_cache.scala 132:33 33:26]
  wire  _GEN_196 = way1_hit ? _GEN_163 : dirty_1_6; // @[d_cache.scala 132:33 33:26]
  wire  _GEN_197 = way1_hit ? _GEN_164 : dirty_1_7; // @[d_cache.scala 132:33 33:26]
  wire  _GEN_198 = way1_hit ? _GEN_165 : dirty_1_8; // @[d_cache.scala 132:33 33:26]
  wire  _GEN_199 = way1_hit ? _GEN_166 : dirty_1_9; // @[d_cache.scala 132:33 33:26]
  wire  _GEN_200 = way1_hit ? _GEN_167 : dirty_1_10; // @[d_cache.scala 132:33 33:26]
  wire  _GEN_201 = way1_hit ? _GEN_168 : dirty_1_11; // @[d_cache.scala 132:33 33:26]
  wire  _GEN_202 = way1_hit ? _GEN_169 : dirty_1_12; // @[d_cache.scala 132:33 33:26]
  wire  _GEN_203 = way1_hit ? _GEN_170 : dirty_1_13; // @[d_cache.scala 132:33 33:26]
  wire  _GEN_204 = way1_hit ? _GEN_171 : dirty_1_14; // @[d_cache.scala 132:33 33:26]
  wire  _GEN_205 = way1_hit ? _GEN_172 : dirty_1_15; // @[d_cache.scala 132:33 33:26]
  wire [3:0] _GEN_206 = way0_hit ? 4'h0 : _GEN_173; // @[d_cache.scala 124:27 125:23]
  wire [511:0] _GEN_207 = way0_hit ? _GEN_93 : ram_0_0; // @[d_cache.scala 124:27 19:24]
  wire [511:0] _GEN_208 = way0_hit ? _GEN_94 : ram_0_1; // @[d_cache.scala 124:27 19:24]
  wire [511:0] _GEN_209 = way0_hit ? _GEN_95 : ram_0_2; // @[d_cache.scala 124:27 19:24]
  wire [511:0] _GEN_210 = way0_hit ? _GEN_96 : ram_0_3; // @[d_cache.scala 124:27 19:24]
  wire [511:0] _GEN_211 = way0_hit ? _GEN_97 : ram_0_4; // @[d_cache.scala 124:27 19:24]
  wire [511:0] _GEN_212 = way0_hit ? _GEN_98 : ram_0_5; // @[d_cache.scala 124:27 19:24]
  wire [511:0] _GEN_213 = way0_hit ? _GEN_99 : ram_0_6; // @[d_cache.scala 124:27 19:24]
  wire [511:0] _GEN_214 = way0_hit ? _GEN_100 : ram_0_7; // @[d_cache.scala 124:27 19:24]
  wire [511:0] _GEN_215 = way0_hit ? _GEN_101 : ram_0_8; // @[d_cache.scala 124:27 19:24]
  wire [511:0] _GEN_216 = way0_hit ? _GEN_102 : ram_0_9; // @[d_cache.scala 124:27 19:24]
  wire [511:0] _GEN_217 = way0_hit ? _GEN_103 : ram_0_10; // @[d_cache.scala 124:27 19:24]
  wire [511:0] _GEN_218 = way0_hit ? _GEN_104 : ram_0_11; // @[d_cache.scala 124:27 19:24]
  wire [511:0] _GEN_219 = way0_hit ? _GEN_105 : ram_0_12; // @[d_cache.scala 124:27 19:24]
  wire [511:0] _GEN_220 = way0_hit ? _GEN_106 : ram_0_13; // @[d_cache.scala 124:27 19:24]
  wire [511:0] _GEN_221 = way0_hit ? _GEN_107 : ram_0_14; // @[d_cache.scala 124:27 19:24]
  wire [511:0] _GEN_222 = way0_hit ? _GEN_108 : ram_0_15; // @[d_cache.scala 124:27 19:24]
  wire  _GEN_223 = way0_hit ? _GEN_109 : dirty_0_0; // @[d_cache.scala 124:27 32:26]
  wire  _GEN_224 = way0_hit ? _GEN_110 : dirty_0_1; // @[d_cache.scala 124:27 32:26]
  wire  _GEN_225 = way0_hit ? _GEN_111 : dirty_0_2; // @[d_cache.scala 124:27 32:26]
  wire  _GEN_226 = way0_hit ? _GEN_112 : dirty_0_3; // @[d_cache.scala 124:27 32:26]
  wire  _GEN_227 = way0_hit ? _GEN_113 : dirty_0_4; // @[d_cache.scala 124:27 32:26]
  wire  _GEN_228 = way0_hit ? _GEN_114 : dirty_0_5; // @[d_cache.scala 124:27 32:26]
  wire  _GEN_229 = way0_hit ? _GEN_115 : dirty_0_6; // @[d_cache.scala 124:27 32:26]
  wire  _GEN_230 = way0_hit ? _GEN_116 : dirty_0_7; // @[d_cache.scala 124:27 32:26]
  wire  _GEN_231 = way0_hit ? _GEN_117 : dirty_0_8; // @[d_cache.scala 124:27 32:26]
  wire  _GEN_232 = way0_hit ? _GEN_118 : dirty_0_9; // @[d_cache.scala 124:27 32:26]
  wire  _GEN_233 = way0_hit ? _GEN_119 : dirty_0_10; // @[d_cache.scala 124:27 32:26]
  wire  _GEN_234 = way0_hit ? _GEN_120 : dirty_0_11; // @[d_cache.scala 124:27 32:26]
  wire  _GEN_235 = way0_hit ? _GEN_121 : dirty_0_12; // @[d_cache.scala 124:27 32:26]
  wire  _GEN_236 = way0_hit ? _GEN_122 : dirty_0_13; // @[d_cache.scala 124:27 32:26]
  wire  _GEN_237 = way0_hit ? _GEN_123 : dirty_0_14; // @[d_cache.scala 124:27 32:26]
  wire  _GEN_238 = way0_hit ? _GEN_124 : dirty_0_15; // @[d_cache.scala 124:27 32:26]
  wire [511:0] _GEN_239 = way0_hit ? ram_1_0 : _GEN_174; // @[d_cache.scala 124:27 20:24]
  wire [511:0] _GEN_240 = way0_hit ? ram_1_1 : _GEN_175; // @[d_cache.scala 124:27 20:24]
  wire [511:0] _GEN_241 = way0_hit ? ram_1_2 : _GEN_176; // @[d_cache.scala 124:27 20:24]
  wire [511:0] _GEN_242 = way0_hit ? ram_1_3 : _GEN_177; // @[d_cache.scala 124:27 20:24]
  wire [511:0] _GEN_243 = way0_hit ? ram_1_4 : _GEN_178; // @[d_cache.scala 124:27 20:24]
  wire [511:0] _GEN_244 = way0_hit ? ram_1_5 : _GEN_179; // @[d_cache.scala 124:27 20:24]
  wire [511:0] _GEN_245 = way0_hit ? ram_1_6 : _GEN_180; // @[d_cache.scala 124:27 20:24]
  wire [511:0] _GEN_246 = way0_hit ? ram_1_7 : _GEN_181; // @[d_cache.scala 124:27 20:24]
  wire [511:0] _GEN_247 = way0_hit ? ram_1_8 : _GEN_182; // @[d_cache.scala 124:27 20:24]
  wire [511:0] _GEN_248 = way0_hit ? ram_1_9 : _GEN_183; // @[d_cache.scala 124:27 20:24]
  wire [511:0] _GEN_249 = way0_hit ? ram_1_10 : _GEN_184; // @[d_cache.scala 124:27 20:24]
  wire [511:0] _GEN_250 = way0_hit ? ram_1_11 : _GEN_185; // @[d_cache.scala 124:27 20:24]
  wire [511:0] _GEN_251 = way0_hit ? ram_1_12 : _GEN_186; // @[d_cache.scala 124:27 20:24]
  wire [511:0] _GEN_252 = way0_hit ? ram_1_13 : _GEN_187; // @[d_cache.scala 124:27 20:24]
  wire [511:0] _GEN_253 = way0_hit ? ram_1_14 : _GEN_188; // @[d_cache.scala 124:27 20:24]
  wire [511:0] _GEN_254 = way0_hit ? ram_1_15 : _GEN_189; // @[d_cache.scala 124:27 20:24]
  wire  _GEN_255 = way0_hit ? dirty_1_0 : _GEN_190; // @[d_cache.scala 124:27 33:26]
  wire  _GEN_256 = way0_hit ? dirty_1_1 : _GEN_191; // @[d_cache.scala 124:27 33:26]
  wire  _GEN_257 = way0_hit ? dirty_1_2 : _GEN_192; // @[d_cache.scala 124:27 33:26]
  wire  _GEN_258 = way0_hit ? dirty_1_3 : _GEN_193; // @[d_cache.scala 124:27 33:26]
  wire  _GEN_259 = way0_hit ? dirty_1_4 : _GEN_194; // @[d_cache.scala 124:27 33:26]
  wire  _GEN_260 = way0_hit ? dirty_1_5 : _GEN_195; // @[d_cache.scala 124:27 33:26]
  wire  _GEN_261 = way0_hit ? dirty_1_6 : _GEN_196; // @[d_cache.scala 124:27 33:26]
  wire  _GEN_262 = way0_hit ? dirty_1_7 : _GEN_197; // @[d_cache.scala 124:27 33:26]
  wire  _GEN_263 = way0_hit ? dirty_1_8 : _GEN_198; // @[d_cache.scala 124:27 33:26]
  wire  _GEN_264 = way0_hit ? dirty_1_9 : _GEN_199; // @[d_cache.scala 124:27 33:26]
  wire  _GEN_265 = way0_hit ? dirty_1_10 : _GEN_200; // @[d_cache.scala 124:27 33:26]
  wire  _GEN_266 = way0_hit ? dirty_1_11 : _GEN_201; // @[d_cache.scala 124:27 33:26]
  wire  _GEN_267 = way0_hit ? dirty_1_12 : _GEN_202; // @[d_cache.scala 124:27 33:26]
  wire  _GEN_268 = way0_hit ? dirty_1_13 : _GEN_203; // @[d_cache.scala 124:27 33:26]
  wire  _GEN_269 = way0_hit ? dirty_1_14 : _GEN_204; // @[d_cache.scala 124:27 33:26]
  wire  _GEN_270 = way0_hit ? dirty_1_15 : _GEN_205; // @[d_cache.scala 124:27 33:26]
  wire [63:0] _GEN_271 = 3'h0 == receive_num ? io_from_axi_rdata : receive_data_0; // @[d_cache.scala 149:{43,43} 42:31]
  wire [63:0] _GEN_272 = 3'h1 == receive_num ? io_from_axi_rdata : receive_data_1; // @[d_cache.scala 149:{43,43} 42:31]
  wire [63:0] _GEN_273 = 3'h2 == receive_num ? io_from_axi_rdata : receive_data_2; // @[d_cache.scala 149:{43,43} 42:31]
  wire [63:0] _GEN_274 = 3'h3 == receive_num ? io_from_axi_rdata : receive_data_3; // @[d_cache.scala 149:{43,43} 42:31]
  wire [63:0] _GEN_275 = 3'h4 == receive_num ? io_from_axi_rdata : receive_data_4; // @[d_cache.scala 149:{43,43} 42:31]
  wire [63:0] _GEN_276 = 3'h5 == receive_num ? io_from_axi_rdata : receive_data_5; // @[d_cache.scala 149:{43,43} 42:31]
  wire [63:0] _GEN_277 = 3'h6 == receive_num ? io_from_axi_rdata : receive_data_6; // @[d_cache.scala 149:{43,43} 42:31]
  wire [63:0] _GEN_278 = 3'h7 == receive_num ? io_from_axi_rdata : receive_data_7; // @[d_cache.scala 149:{43,43} 42:31]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[d_cache.scala 150:44]
  wire [3:0] _GEN_279 = io_from_axi_rlast ? 4'h5 : state; // @[d_cache.scala 151:40 152:27 84:24]
  wire [63:0] _GEN_280 = io_from_axi_rvalid ? _GEN_271 : receive_data_0; // @[d_cache.scala 148:37 42:31]
  wire [63:0] _GEN_281 = io_from_axi_rvalid ? _GEN_272 : receive_data_1; // @[d_cache.scala 148:37 42:31]
  wire [63:0] _GEN_282 = io_from_axi_rvalid ? _GEN_273 : receive_data_2; // @[d_cache.scala 148:37 42:31]
  wire [63:0] _GEN_283 = io_from_axi_rvalid ? _GEN_274 : receive_data_3; // @[d_cache.scala 148:37 42:31]
  wire [63:0] _GEN_284 = io_from_axi_rvalid ? _GEN_275 : receive_data_4; // @[d_cache.scala 148:37 42:31]
  wire [63:0] _GEN_285 = io_from_axi_rvalid ? _GEN_276 : receive_data_5; // @[d_cache.scala 148:37 42:31]
  wire [63:0] _GEN_286 = io_from_axi_rvalid ? _GEN_277 : receive_data_6; // @[d_cache.scala 148:37 42:31]
  wire [63:0] _GEN_287 = io_from_axi_rvalid ? _GEN_278 : receive_data_7; // @[d_cache.scala 148:37 42:31]
  wire [2:0] _GEN_288 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[d_cache.scala 148:37 150:29 43:30]
  wire [3:0] _GEN_289 = io_from_axi_rvalid ? _GEN_279 : state; // @[d_cache.scala 148:37 84:24]
  wire [3:0] _GEN_290 = io_from_axi_bvalid ? 4'h0 : state; // @[d_cache.scala 157:37 158:23 84:24]
  wire [511:0] _ram_0_T_6 = {receive_data_7,receive_data_6,receive_data_5,receive_data_4,receive_data_3,receive_data_2,
    receive_data_1,receive_data_0}; // @[Cat.scala 31:58]
  wire [511:0] _GEN_291 = 4'h0 == index ? _ram_0_T_6 : ram_0_0; // @[d_cache.scala 164:{30,30} 19:24]
  wire [511:0] _GEN_292 = 4'h1 == index ? _ram_0_T_6 : ram_0_1; // @[d_cache.scala 164:{30,30} 19:24]
  wire [511:0] _GEN_293 = 4'h2 == index ? _ram_0_T_6 : ram_0_2; // @[d_cache.scala 164:{30,30} 19:24]
  wire [511:0] _GEN_294 = 4'h3 == index ? _ram_0_T_6 : ram_0_3; // @[d_cache.scala 164:{30,30} 19:24]
  wire [511:0] _GEN_295 = 4'h4 == index ? _ram_0_T_6 : ram_0_4; // @[d_cache.scala 164:{30,30} 19:24]
  wire [511:0] _GEN_296 = 4'h5 == index ? _ram_0_T_6 : ram_0_5; // @[d_cache.scala 164:{30,30} 19:24]
  wire [511:0] _GEN_297 = 4'h6 == index ? _ram_0_T_6 : ram_0_6; // @[d_cache.scala 164:{30,30} 19:24]
  wire [511:0] _GEN_298 = 4'h7 == index ? _ram_0_T_6 : ram_0_7; // @[d_cache.scala 164:{30,30} 19:24]
  wire [511:0] _GEN_299 = 4'h8 == index ? _ram_0_T_6 : ram_0_8; // @[d_cache.scala 164:{30,30} 19:24]
  wire [511:0] _GEN_300 = 4'h9 == index ? _ram_0_T_6 : ram_0_9; // @[d_cache.scala 164:{30,30} 19:24]
  wire [511:0] _GEN_301 = 4'ha == index ? _ram_0_T_6 : ram_0_10; // @[d_cache.scala 164:{30,30} 19:24]
  wire [511:0] _GEN_302 = 4'hb == index ? _ram_0_T_6 : ram_0_11; // @[d_cache.scala 164:{30,30} 19:24]
  wire [511:0] _GEN_303 = 4'hc == index ? _ram_0_T_6 : ram_0_12; // @[d_cache.scala 164:{30,30} 19:24]
  wire [511:0] _GEN_304 = 4'hd == index ? _ram_0_T_6 : ram_0_13; // @[d_cache.scala 164:{30,30} 19:24]
  wire [511:0] _GEN_305 = 4'he == index ? _ram_0_T_6 : ram_0_14; // @[d_cache.scala 164:{30,30} 19:24]
  wire [511:0] _GEN_306 = 4'hf == index ? _ram_0_T_6 : ram_0_15; // @[d_cache.scala 164:{30,30} 19:24]
  wire [31:0] _GEN_307 = 4'h0 == index ? _GEN_2012 : tag_0_0; // @[d_cache.scala 165:{30,30} 28:24]
  wire [31:0] _GEN_308 = 4'h1 == index ? _GEN_2012 : tag_0_1; // @[d_cache.scala 165:{30,30} 28:24]
  wire [31:0] _GEN_309 = 4'h2 == index ? _GEN_2012 : tag_0_2; // @[d_cache.scala 165:{30,30} 28:24]
  wire [31:0] _GEN_310 = 4'h3 == index ? _GEN_2012 : tag_0_3; // @[d_cache.scala 165:{30,30} 28:24]
  wire [31:0] _GEN_311 = 4'h4 == index ? _GEN_2012 : tag_0_4; // @[d_cache.scala 165:{30,30} 28:24]
  wire [31:0] _GEN_312 = 4'h5 == index ? _GEN_2012 : tag_0_5; // @[d_cache.scala 165:{30,30} 28:24]
  wire [31:0] _GEN_313 = 4'h6 == index ? _GEN_2012 : tag_0_6; // @[d_cache.scala 165:{30,30} 28:24]
  wire [31:0] _GEN_314 = 4'h7 == index ? _GEN_2012 : tag_0_7; // @[d_cache.scala 165:{30,30} 28:24]
  wire [31:0] _GEN_315 = 4'h8 == index ? _GEN_2012 : tag_0_8; // @[d_cache.scala 165:{30,30} 28:24]
  wire [31:0] _GEN_316 = 4'h9 == index ? _GEN_2012 : tag_0_9; // @[d_cache.scala 165:{30,30} 28:24]
  wire [31:0] _GEN_317 = 4'ha == index ? _GEN_2012 : tag_0_10; // @[d_cache.scala 165:{30,30} 28:24]
  wire [31:0] _GEN_318 = 4'hb == index ? _GEN_2012 : tag_0_11; // @[d_cache.scala 165:{30,30} 28:24]
  wire [31:0] _GEN_319 = 4'hc == index ? _GEN_2012 : tag_0_12; // @[d_cache.scala 165:{30,30} 28:24]
  wire [31:0] _GEN_320 = 4'hd == index ? _GEN_2012 : tag_0_13; // @[d_cache.scala 165:{30,30} 28:24]
  wire [31:0] _GEN_321 = 4'he == index ? _GEN_2012 : tag_0_14; // @[d_cache.scala 165:{30,30} 28:24]
  wire [31:0] _GEN_322 = 4'hf == index ? _GEN_2012 : tag_0_15; // @[d_cache.scala 165:{30,30} 28:24]
  wire  _GEN_323 = _GEN_2020 | valid_0_0; // @[d_cache.scala 166:{32,32} 30:26]
  wire  _GEN_324 = _GEN_2021 | valid_0_1; // @[d_cache.scala 166:{32,32} 30:26]
  wire  _GEN_325 = _GEN_2023 | valid_0_2; // @[d_cache.scala 166:{32,32} 30:26]
  wire  _GEN_326 = _GEN_2025 | valid_0_3; // @[d_cache.scala 166:{32,32} 30:26]
  wire  _GEN_327 = _GEN_2027 | valid_0_4; // @[d_cache.scala 166:{32,32} 30:26]
  wire  _GEN_328 = _GEN_2030 | valid_0_5; // @[d_cache.scala 166:{32,32} 30:26]
  wire  _GEN_329 = _GEN_2031 | valid_0_6; // @[d_cache.scala 166:{32,32} 30:26]
  wire  _GEN_330 = _GEN_2036 | valid_0_7; // @[d_cache.scala 166:{32,32} 30:26]
  wire  _GEN_331 = _GEN_2037 | valid_0_8; // @[d_cache.scala 166:{32,32} 30:26]
  wire  _GEN_332 = _GEN_2041 | valid_0_9; // @[d_cache.scala 166:{32,32} 30:26]
  wire  _GEN_333 = _GEN_2045 | valid_0_10; // @[d_cache.scala 166:{32,32} 30:26]
  wire  _GEN_334 = _GEN_2047 | valid_0_11; // @[d_cache.scala 166:{32,32} 30:26]
  wire  _GEN_335 = _GEN_2049 | valid_0_12; // @[d_cache.scala 166:{32,32} 30:26]
  wire  _GEN_336 = _GEN_2050 | valid_0_13; // @[d_cache.scala 166:{32,32} 30:26]
  wire  _GEN_337 = _GEN_2054 | valid_0_14; // @[d_cache.scala 166:{32,32} 30:26]
  wire  _GEN_338 = _GEN_2055 | valid_0_15; // @[d_cache.scala 166:{32,32} 30:26]
  wire [511:0] _GEN_339 = 4'h0 == index ? _ram_0_T_6 : ram_1_0; // @[d_cache.scala 170:{30,30} 20:24]
  wire [511:0] _GEN_340 = 4'h1 == index ? _ram_0_T_6 : ram_1_1; // @[d_cache.scala 170:{30,30} 20:24]
  wire [511:0] _GEN_341 = 4'h2 == index ? _ram_0_T_6 : ram_1_2; // @[d_cache.scala 170:{30,30} 20:24]
  wire [511:0] _GEN_342 = 4'h3 == index ? _ram_0_T_6 : ram_1_3; // @[d_cache.scala 170:{30,30} 20:24]
  wire [511:0] _GEN_343 = 4'h4 == index ? _ram_0_T_6 : ram_1_4; // @[d_cache.scala 170:{30,30} 20:24]
  wire [511:0] _GEN_344 = 4'h5 == index ? _ram_0_T_6 : ram_1_5; // @[d_cache.scala 170:{30,30} 20:24]
  wire [511:0] _GEN_345 = 4'h6 == index ? _ram_0_T_6 : ram_1_6; // @[d_cache.scala 170:{30,30} 20:24]
  wire [511:0] _GEN_346 = 4'h7 == index ? _ram_0_T_6 : ram_1_7; // @[d_cache.scala 170:{30,30} 20:24]
  wire [511:0] _GEN_347 = 4'h8 == index ? _ram_0_T_6 : ram_1_8; // @[d_cache.scala 170:{30,30} 20:24]
  wire [511:0] _GEN_348 = 4'h9 == index ? _ram_0_T_6 : ram_1_9; // @[d_cache.scala 170:{30,30} 20:24]
  wire [511:0] _GEN_349 = 4'ha == index ? _ram_0_T_6 : ram_1_10; // @[d_cache.scala 170:{30,30} 20:24]
  wire [511:0] _GEN_350 = 4'hb == index ? _ram_0_T_6 : ram_1_11; // @[d_cache.scala 170:{30,30} 20:24]
  wire [511:0] _GEN_351 = 4'hc == index ? _ram_0_T_6 : ram_1_12; // @[d_cache.scala 170:{30,30} 20:24]
  wire [511:0] _GEN_352 = 4'hd == index ? _ram_0_T_6 : ram_1_13; // @[d_cache.scala 170:{30,30} 20:24]
  wire [511:0] _GEN_353 = 4'he == index ? _ram_0_T_6 : ram_1_14; // @[d_cache.scala 170:{30,30} 20:24]
  wire [511:0] _GEN_354 = 4'hf == index ? _ram_0_T_6 : ram_1_15; // @[d_cache.scala 170:{30,30} 20:24]
  wire [31:0] _GEN_355 = 4'h0 == index ? _GEN_2012 : tag_1_0; // @[d_cache.scala 171:{30,30} 29:24]
  wire [31:0] _GEN_356 = 4'h1 == index ? _GEN_2012 : tag_1_1; // @[d_cache.scala 171:{30,30} 29:24]
  wire [31:0] _GEN_357 = 4'h2 == index ? _GEN_2012 : tag_1_2; // @[d_cache.scala 171:{30,30} 29:24]
  wire [31:0] _GEN_358 = 4'h3 == index ? _GEN_2012 : tag_1_3; // @[d_cache.scala 171:{30,30} 29:24]
  wire [31:0] _GEN_359 = 4'h4 == index ? _GEN_2012 : tag_1_4; // @[d_cache.scala 171:{30,30} 29:24]
  wire [31:0] _GEN_360 = 4'h5 == index ? _GEN_2012 : tag_1_5; // @[d_cache.scala 171:{30,30} 29:24]
  wire [31:0] _GEN_361 = 4'h6 == index ? _GEN_2012 : tag_1_6; // @[d_cache.scala 171:{30,30} 29:24]
  wire [31:0] _GEN_362 = 4'h7 == index ? _GEN_2012 : tag_1_7; // @[d_cache.scala 171:{30,30} 29:24]
  wire [31:0] _GEN_363 = 4'h8 == index ? _GEN_2012 : tag_1_8; // @[d_cache.scala 171:{30,30} 29:24]
  wire [31:0] _GEN_364 = 4'h9 == index ? _GEN_2012 : tag_1_9; // @[d_cache.scala 171:{30,30} 29:24]
  wire [31:0] _GEN_365 = 4'ha == index ? _GEN_2012 : tag_1_10; // @[d_cache.scala 171:{30,30} 29:24]
  wire [31:0] _GEN_366 = 4'hb == index ? _GEN_2012 : tag_1_11; // @[d_cache.scala 171:{30,30} 29:24]
  wire [31:0] _GEN_367 = 4'hc == index ? _GEN_2012 : tag_1_12; // @[d_cache.scala 171:{30,30} 29:24]
  wire [31:0] _GEN_368 = 4'hd == index ? _GEN_2012 : tag_1_13; // @[d_cache.scala 171:{30,30} 29:24]
  wire [31:0] _GEN_369 = 4'he == index ? _GEN_2012 : tag_1_14; // @[d_cache.scala 171:{30,30} 29:24]
  wire [31:0] _GEN_370 = 4'hf == index ? _GEN_2012 : tag_1_15; // @[d_cache.scala 171:{30,30} 29:24]
  wire  _GEN_371 = _GEN_2020 | valid_1_0; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _GEN_372 = _GEN_2021 | valid_1_1; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _GEN_373 = _GEN_2023 | valid_1_2; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _GEN_374 = _GEN_2025 | valid_1_3; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _GEN_375 = _GEN_2027 | valid_1_4; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _GEN_376 = _GEN_2030 | valid_1_5; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _GEN_377 = _GEN_2031 | valid_1_6; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _GEN_378 = _GEN_2036 | valid_1_7; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _GEN_379 = _GEN_2037 | valid_1_8; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _GEN_380 = _GEN_2041 | valid_1_9; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _GEN_381 = _GEN_2045 | valid_1_10; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _GEN_382 = _GEN_2047 | valid_1_11; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _GEN_383 = _GEN_2049 | valid_1_12; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _GEN_384 = _GEN_2050 | valid_1_13; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _GEN_385 = _GEN_2054 | valid_1_14; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _GEN_386 = _GEN_2055 | valid_1_15; // @[d_cache.scala 172:{32,32} 31:26]
  wire  _T_18 = ~quene; // @[d_cache.scala 175:27]
  wire  _GEN_388 = 4'h1 == index ? dirty_0_1 : dirty_0_0; // @[d_cache.scala 177:{40,40}]
  wire  _GEN_389 = 4'h2 == index ? dirty_0_2 : _GEN_388; // @[d_cache.scala 177:{40,40}]
  wire  _GEN_390 = 4'h3 == index ? dirty_0_3 : _GEN_389; // @[d_cache.scala 177:{40,40}]
  wire  _GEN_391 = 4'h4 == index ? dirty_0_4 : _GEN_390; // @[d_cache.scala 177:{40,40}]
  wire  _GEN_392 = 4'h5 == index ? dirty_0_5 : _GEN_391; // @[d_cache.scala 177:{40,40}]
  wire  _GEN_393 = 4'h6 == index ? dirty_0_6 : _GEN_392; // @[d_cache.scala 177:{40,40}]
  wire  _GEN_394 = 4'h7 == index ? dirty_0_7 : _GEN_393; // @[d_cache.scala 177:{40,40}]
  wire  _GEN_395 = 4'h8 == index ? dirty_0_8 : _GEN_394; // @[d_cache.scala 177:{40,40}]
  wire  _GEN_396 = 4'h9 == index ? dirty_0_9 : _GEN_395; // @[d_cache.scala 177:{40,40}]
  wire  _GEN_397 = 4'ha == index ? dirty_0_10 : _GEN_396; // @[d_cache.scala 177:{40,40}]
  wire  _GEN_398 = 4'hb == index ? dirty_0_11 : _GEN_397; // @[d_cache.scala 177:{40,40}]
  wire  _GEN_399 = 4'hc == index ? dirty_0_12 : _GEN_398; // @[d_cache.scala 177:{40,40}]
  wire  _GEN_400 = 4'hd == index ? dirty_0_13 : _GEN_399; // @[d_cache.scala 177:{40,40}]
  wire  _GEN_401 = 4'he == index ? dirty_0_14 : _GEN_400; // @[d_cache.scala 177:{40,40}]
  wire  _GEN_402 = 4'hf == index ? dirty_0_15 : _GEN_401; // @[d_cache.scala 177:{40,40}]
  wire [41:0] _write_back_addr_T_1 = {_GEN_15,index,6'h0}; // @[Cat.scala 31:58]
  wire  _GEN_435 = 4'h0 == index ? 1'h0 : dirty_0_0; // @[d_cache.scala 182:{40,40} 32:26]
  wire  _GEN_436 = 4'h1 == index ? 1'h0 : dirty_0_1; // @[d_cache.scala 182:{40,40} 32:26]
  wire  _GEN_437 = 4'h2 == index ? 1'h0 : dirty_0_2; // @[d_cache.scala 182:{40,40} 32:26]
  wire  _GEN_438 = 4'h3 == index ? 1'h0 : dirty_0_3; // @[d_cache.scala 182:{40,40} 32:26]
  wire  _GEN_439 = 4'h4 == index ? 1'h0 : dirty_0_4; // @[d_cache.scala 182:{40,40} 32:26]
  wire  _GEN_440 = 4'h5 == index ? 1'h0 : dirty_0_5; // @[d_cache.scala 182:{40,40} 32:26]
  wire  _GEN_441 = 4'h6 == index ? 1'h0 : dirty_0_6; // @[d_cache.scala 182:{40,40} 32:26]
  wire  _GEN_442 = 4'h7 == index ? 1'h0 : dirty_0_7; // @[d_cache.scala 182:{40,40} 32:26]
  wire  _GEN_443 = 4'h8 == index ? 1'h0 : dirty_0_8; // @[d_cache.scala 182:{40,40} 32:26]
  wire  _GEN_444 = 4'h9 == index ? 1'h0 : dirty_0_9; // @[d_cache.scala 182:{40,40} 32:26]
  wire  _GEN_445 = 4'ha == index ? 1'h0 : dirty_0_10; // @[d_cache.scala 182:{40,40} 32:26]
  wire  _GEN_446 = 4'hb == index ? 1'h0 : dirty_0_11; // @[d_cache.scala 182:{40,40} 32:26]
  wire  _GEN_447 = 4'hc == index ? 1'h0 : dirty_0_12; // @[d_cache.scala 182:{40,40} 32:26]
  wire  _GEN_448 = 4'hd == index ? 1'h0 : dirty_0_13; // @[d_cache.scala 182:{40,40} 32:26]
  wire  _GEN_449 = 4'he == index ? 1'h0 : dirty_0_14; // @[d_cache.scala 182:{40,40} 32:26]
  wire  _GEN_450 = 4'hf == index ? 1'h0 : dirty_0_15; // @[d_cache.scala 182:{40,40} 32:26]
  wire [511:0] _GEN_515 = _GEN_402 ? _GEN_92 : write_back_data; // @[d_cache.scala 177:47 178:41 37:34]
  wire [41:0] _GEN_516 = _GEN_402 ? _write_back_addr_T_1 : {{10'd0}, write_back_addr}; // @[d_cache.scala 177:47 179:41 38:34]
  wire [511:0] _GEN_517 = _GEN_402 ? _GEN_291 : _GEN_291; // @[d_cache.scala 177:47]
  wire [511:0] _GEN_518 = _GEN_402 ? _GEN_292 : _GEN_292; // @[d_cache.scala 177:47]
  wire [511:0] _GEN_519 = _GEN_402 ? _GEN_293 : _GEN_293; // @[d_cache.scala 177:47]
  wire [511:0] _GEN_520 = _GEN_402 ? _GEN_294 : _GEN_294; // @[d_cache.scala 177:47]
  wire [511:0] _GEN_521 = _GEN_402 ? _GEN_295 : _GEN_295; // @[d_cache.scala 177:47]
  wire [511:0] _GEN_522 = _GEN_402 ? _GEN_296 : _GEN_296; // @[d_cache.scala 177:47]
  wire [511:0] _GEN_523 = _GEN_402 ? _GEN_297 : _GEN_297; // @[d_cache.scala 177:47]
  wire [511:0] _GEN_524 = _GEN_402 ? _GEN_298 : _GEN_298; // @[d_cache.scala 177:47]
  wire [511:0] _GEN_525 = _GEN_402 ? _GEN_299 : _GEN_299; // @[d_cache.scala 177:47]
  wire [511:0] _GEN_526 = _GEN_402 ? _GEN_300 : _GEN_300; // @[d_cache.scala 177:47]
  wire [511:0] _GEN_527 = _GEN_402 ? _GEN_301 : _GEN_301; // @[d_cache.scala 177:47]
  wire [511:0] _GEN_528 = _GEN_402 ? _GEN_302 : _GEN_302; // @[d_cache.scala 177:47]
  wire [511:0] _GEN_529 = _GEN_402 ? _GEN_303 : _GEN_303; // @[d_cache.scala 177:47]
  wire [511:0] _GEN_530 = _GEN_402 ? _GEN_304 : _GEN_304; // @[d_cache.scala 177:47]
  wire [511:0] _GEN_531 = _GEN_402 ? _GEN_305 : _GEN_305; // @[d_cache.scala 177:47]
  wire [511:0] _GEN_532 = _GEN_402 ? _GEN_306 : _GEN_306; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_533 = _GEN_402 ? _GEN_307 : _GEN_307; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_534 = _GEN_402 ? _GEN_308 : _GEN_308; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_535 = _GEN_402 ? _GEN_309 : _GEN_309; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_536 = _GEN_402 ? _GEN_310 : _GEN_310; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_537 = _GEN_402 ? _GEN_311 : _GEN_311; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_538 = _GEN_402 ? _GEN_312 : _GEN_312; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_539 = _GEN_402 ? _GEN_313 : _GEN_313; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_540 = _GEN_402 ? _GEN_314 : _GEN_314; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_541 = _GEN_402 ? _GEN_315 : _GEN_315; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_542 = _GEN_402 ? _GEN_316 : _GEN_316; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_543 = _GEN_402 ? _GEN_317 : _GEN_317; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_544 = _GEN_402 ? _GEN_318 : _GEN_318; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_545 = _GEN_402 ? _GEN_319 : _GEN_319; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_546 = _GEN_402 ? _GEN_320 : _GEN_320; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_547 = _GEN_402 ? _GEN_321 : _GEN_321; // @[d_cache.scala 177:47]
  wire [31:0] _GEN_548 = _GEN_402 ? _GEN_322 : _GEN_322; // @[d_cache.scala 177:47]
  wire  _GEN_549 = _GEN_402 ? _GEN_435 : dirty_0_0; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_550 = _GEN_402 ? _GEN_436 : dirty_0_1; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_551 = _GEN_402 ? _GEN_437 : dirty_0_2; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_552 = _GEN_402 ? _GEN_438 : dirty_0_3; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_553 = _GEN_402 ? _GEN_439 : dirty_0_4; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_554 = _GEN_402 ? _GEN_440 : dirty_0_5; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_555 = _GEN_402 ? _GEN_441 : dirty_0_6; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_556 = _GEN_402 ? _GEN_442 : dirty_0_7; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_557 = _GEN_402 ? _GEN_443 : dirty_0_8; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_558 = _GEN_402 ? _GEN_444 : dirty_0_9; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_559 = _GEN_402 ? _GEN_445 : dirty_0_10; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_560 = _GEN_402 ? _GEN_446 : dirty_0_11; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_561 = _GEN_402 ? _GEN_447 : dirty_0_12; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_562 = _GEN_402 ? _GEN_448 : dirty_0_13; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_563 = _GEN_402 ? _GEN_449 : dirty_0_14; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_564 = _GEN_402 ? _GEN_450 : dirty_0_15; // @[d_cache.scala 177:47 32:26]
  wire  _GEN_565 = _GEN_402 ? _GEN_323 : _GEN_323; // @[d_cache.scala 177:47]
  wire  _GEN_566 = _GEN_402 ? _GEN_324 : _GEN_324; // @[d_cache.scala 177:47]
  wire  _GEN_567 = _GEN_402 ? _GEN_325 : _GEN_325; // @[d_cache.scala 177:47]
  wire  _GEN_568 = _GEN_402 ? _GEN_326 : _GEN_326; // @[d_cache.scala 177:47]
  wire  _GEN_569 = _GEN_402 ? _GEN_327 : _GEN_327; // @[d_cache.scala 177:47]
  wire  _GEN_570 = _GEN_402 ? _GEN_328 : _GEN_328; // @[d_cache.scala 177:47]
  wire  _GEN_571 = _GEN_402 ? _GEN_329 : _GEN_329; // @[d_cache.scala 177:47]
  wire  _GEN_572 = _GEN_402 ? _GEN_330 : _GEN_330; // @[d_cache.scala 177:47]
  wire  _GEN_573 = _GEN_402 ? _GEN_331 : _GEN_331; // @[d_cache.scala 177:47]
  wire  _GEN_574 = _GEN_402 ? _GEN_332 : _GEN_332; // @[d_cache.scala 177:47]
  wire  _GEN_575 = _GEN_402 ? _GEN_333 : _GEN_333; // @[d_cache.scala 177:47]
  wire  _GEN_576 = _GEN_402 ? _GEN_334 : _GEN_334; // @[d_cache.scala 177:47]
  wire  _GEN_577 = _GEN_402 ? _GEN_335 : _GEN_335; // @[d_cache.scala 177:47]
  wire  _GEN_578 = _GEN_402 ? _GEN_336 : _GEN_336; // @[d_cache.scala 177:47]
  wire  _GEN_579 = _GEN_402 ? _GEN_337 : _GEN_337; // @[d_cache.scala 177:47]
  wire  _GEN_580 = _GEN_402 ? _GEN_338 : _GEN_338; // @[d_cache.scala 177:47]
  wire [3:0] _GEN_581 = _GEN_402 ? 4'h6 : 4'h7; // @[d_cache.scala 177:47 184:31 187:31]
  wire  _GEN_584 = 4'h1 == index ? dirty_1_1 : dirty_1_0; // @[d_cache.scala 194:{40,40}]
  wire  _GEN_585 = 4'h2 == index ? dirty_1_2 : _GEN_584; // @[d_cache.scala 194:{40,40}]
  wire  _GEN_586 = 4'h3 == index ? dirty_1_3 : _GEN_585; // @[d_cache.scala 194:{40,40}]
  wire  _GEN_587 = 4'h4 == index ? dirty_1_4 : _GEN_586; // @[d_cache.scala 194:{40,40}]
  wire  _GEN_588 = 4'h5 == index ? dirty_1_5 : _GEN_587; // @[d_cache.scala 194:{40,40}]
  wire  _GEN_589 = 4'h6 == index ? dirty_1_6 : _GEN_588; // @[d_cache.scala 194:{40,40}]
  wire  _GEN_590 = 4'h7 == index ? dirty_1_7 : _GEN_589; // @[d_cache.scala 194:{40,40}]
  wire  _GEN_591 = 4'h8 == index ? dirty_1_8 : _GEN_590; // @[d_cache.scala 194:{40,40}]
  wire  _GEN_592 = 4'h9 == index ? dirty_1_9 : _GEN_591; // @[d_cache.scala 194:{40,40}]
  wire  _GEN_593 = 4'ha == index ? dirty_1_10 : _GEN_592; // @[d_cache.scala 194:{40,40}]
  wire  _GEN_594 = 4'hb == index ? dirty_1_11 : _GEN_593; // @[d_cache.scala 194:{40,40}]
  wire  _GEN_595 = 4'hc == index ? dirty_1_12 : _GEN_594; // @[d_cache.scala 194:{40,40}]
  wire  _GEN_596 = 4'hd == index ? dirty_1_13 : _GEN_595; // @[d_cache.scala 194:{40,40}]
  wire  _GEN_597 = 4'he == index ? dirty_1_14 : _GEN_596; // @[d_cache.scala 194:{40,40}]
  wire  _GEN_598 = 4'hf == index ? dirty_1_15 : _GEN_597; // @[d_cache.scala 194:{40,40}]
  wire [41:0] _write_back_addr_T_3 = {_GEN_48,index,6'h0}; // @[Cat.scala 31:58]
  wire  _GEN_631 = 4'h0 == index ? 1'h0 : dirty_1_0; // @[d_cache.scala 199:{40,40} 33:26]
  wire  _GEN_632 = 4'h1 == index ? 1'h0 : dirty_1_1; // @[d_cache.scala 199:{40,40} 33:26]
  wire  _GEN_633 = 4'h2 == index ? 1'h0 : dirty_1_2; // @[d_cache.scala 199:{40,40} 33:26]
  wire  _GEN_634 = 4'h3 == index ? 1'h0 : dirty_1_3; // @[d_cache.scala 199:{40,40} 33:26]
  wire  _GEN_635 = 4'h4 == index ? 1'h0 : dirty_1_4; // @[d_cache.scala 199:{40,40} 33:26]
  wire  _GEN_636 = 4'h5 == index ? 1'h0 : dirty_1_5; // @[d_cache.scala 199:{40,40} 33:26]
  wire  _GEN_637 = 4'h6 == index ? 1'h0 : dirty_1_6; // @[d_cache.scala 199:{40,40} 33:26]
  wire  _GEN_638 = 4'h7 == index ? 1'h0 : dirty_1_7; // @[d_cache.scala 199:{40,40} 33:26]
  wire  _GEN_639 = 4'h8 == index ? 1'h0 : dirty_1_8; // @[d_cache.scala 199:{40,40} 33:26]
  wire  _GEN_640 = 4'h9 == index ? 1'h0 : dirty_1_9; // @[d_cache.scala 199:{40,40} 33:26]
  wire  _GEN_641 = 4'ha == index ? 1'h0 : dirty_1_10; // @[d_cache.scala 199:{40,40} 33:26]
  wire  _GEN_642 = 4'hb == index ? 1'h0 : dirty_1_11; // @[d_cache.scala 199:{40,40} 33:26]
  wire  _GEN_643 = 4'hc == index ? 1'h0 : dirty_1_12; // @[d_cache.scala 199:{40,40} 33:26]
  wire  _GEN_644 = 4'hd == index ? 1'h0 : dirty_1_13; // @[d_cache.scala 199:{40,40} 33:26]
  wire  _GEN_645 = 4'he == index ? 1'h0 : dirty_1_14; // @[d_cache.scala 199:{40,40} 33:26]
  wire  _GEN_646 = 4'hf == index ? 1'h0 : dirty_1_15; // @[d_cache.scala 199:{40,40} 33:26]
  wire [511:0] _GEN_711 = _GEN_598 ? _GEN_140 : write_back_data; // @[d_cache.scala 194:47 195:41 37:34]
  wire [41:0] _GEN_712 = _GEN_598 ? _write_back_addr_T_3 : {{10'd0}, write_back_addr}; // @[d_cache.scala 194:47 196:41 38:34]
  wire [511:0] _GEN_713 = _GEN_598 ? _GEN_339 : _GEN_339; // @[d_cache.scala 194:47]
  wire [511:0] _GEN_714 = _GEN_598 ? _GEN_340 : _GEN_340; // @[d_cache.scala 194:47]
  wire [511:0] _GEN_715 = _GEN_598 ? _GEN_341 : _GEN_341; // @[d_cache.scala 194:47]
  wire [511:0] _GEN_716 = _GEN_598 ? _GEN_342 : _GEN_342; // @[d_cache.scala 194:47]
  wire [511:0] _GEN_717 = _GEN_598 ? _GEN_343 : _GEN_343; // @[d_cache.scala 194:47]
  wire [511:0] _GEN_718 = _GEN_598 ? _GEN_344 : _GEN_344; // @[d_cache.scala 194:47]
  wire [511:0] _GEN_719 = _GEN_598 ? _GEN_345 : _GEN_345; // @[d_cache.scala 194:47]
  wire [511:0] _GEN_720 = _GEN_598 ? _GEN_346 : _GEN_346; // @[d_cache.scala 194:47]
  wire [511:0] _GEN_721 = _GEN_598 ? _GEN_347 : _GEN_347; // @[d_cache.scala 194:47]
  wire [511:0] _GEN_722 = _GEN_598 ? _GEN_348 : _GEN_348; // @[d_cache.scala 194:47]
  wire [511:0] _GEN_723 = _GEN_598 ? _GEN_349 : _GEN_349; // @[d_cache.scala 194:47]
  wire [511:0] _GEN_724 = _GEN_598 ? _GEN_350 : _GEN_350; // @[d_cache.scala 194:47]
  wire [511:0] _GEN_725 = _GEN_598 ? _GEN_351 : _GEN_351; // @[d_cache.scala 194:47]
  wire [511:0] _GEN_726 = _GEN_598 ? _GEN_352 : _GEN_352; // @[d_cache.scala 194:47]
  wire [511:0] _GEN_727 = _GEN_598 ? _GEN_353 : _GEN_353; // @[d_cache.scala 194:47]
  wire [511:0] _GEN_728 = _GEN_598 ? _GEN_354 : _GEN_354; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_729 = _GEN_598 ? _GEN_355 : _GEN_355; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_730 = _GEN_598 ? _GEN_356 : _GEN_356; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_731 = _GEN_598 ? _GEN_357 : _GEN_357; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_732 = _GEN_598 ? _GEN_358 : _GEN_358; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_733 = _GEN_598 ? _GEN_359 : _GEN_359; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_734 = _GEN_598 ? _GEN_360 : _GEN_360; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_735 = _GEN_598 ? _GEN_361 : _GEN_361; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_736 = _GEN_598 ? _GEN_362 : _GEN_362; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_737 = _GEN_598 ? _GEN_363 : _GEN_363; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_738 = _GEN_598 ? _GEN_364 : _GEN_364; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_739 = _GEN_598 ? _GEN_365 : _GEN_365; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_740 = _GEN_598 ? _GEN_366 : _GEN_366; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_741 = _GEN_598 ? _GEN_367 : _GEN_367; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_742 = _GEN_598 ? _GEN_368 : _GEN_368; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_743 = _GEN_598 ? _GEN_369 : _GEN_369; // @[d_cache.scala 194:47]
  wire [31:0] _GEN_744 = _GEN_598 ? _GEN_370 : _GEN_370; // @[d_cache.scala 194:47]
  wire  _GEN_745 = _GEN_598 ? _GEN_631 : dirty_1_0; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_746 = _GEN_598 ? _GEN_632 : dirty_1_1; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_747 = _GEN_598 ? _GEN_633 : dirty_1_2; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_748 = _GEN_598 ? _GEN_634 : dirty_1_3; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_749 = _GEN_598 ? _GEN_635 : dirty_1_4; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_750 = _GEN_598 ? _GEN_636 : dirty_1_5; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_751 = _GEN_598 ? _GEN_637 : dirty_1_6; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_752 = _GEN_598 ? _GEN_638 : dirty_1_7; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_753 = _GEN_598 ? _GEN_639 : dirty_1_8; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_754 = _GEN_598 ? _GEN_640 : dirty_1_9; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_755 = _GEN_598 ? _GEN_641 : dirty_1_10; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_756 = _GEN_598 ? _GEN_642 : dirty_1_11; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_757 = _GEN_598 ? _GEN_643 : dirty_1_12; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_758 = _GEN_598 ? _GEN_644 : dirty_1_13; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_759 = _GEN_598 ? _GEN_645 : dirty_1_14; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_760 = _GEN_598 ? _GEN_646 : dirty_1_15; // @[d_cache.scala 194:47 33:26]
  wire  _GEN_761 = _GEN_598 ? _GEN_371 : _GEN_371; // @[d_cache.scala 194:47]
  wire  _GEN_762 = _GEN_598 ? _GEN_372 : _GEN_372; // @[d_cache.scala 194:47]
  wire  _GEN_763 = _GEN_598 ? _GEN_373 : _GEN_373; // @[d_cache.scala 194:47]
  wire  _GEN_764 = _GEN_598 ? _GEN_374 : _GEN_374; // @[d_cache.scala 194:47]
  wire  _GEN_765 = _GEN_598 ? _GEN_375 : _GEN_375; // @[d_cache.scala 194:47]
  wire  _GEN_766 = _GEN_598 ? _GEN_376 : _GEN_376; // @[d_cache.scala 194:47]
  wire  _GEN_767 = _GEN_598 ? _GEN_377 : _GEN_377; // @[d_cache.scala 194:47]
  wire  _GEN_768 = _GEN_598 ? _GEN_378 : _GEN_378; // @[d_cache.scala 194:47]
  wire  _GEN_769 = _GEN_598 ? _GEN_379 : _GEN_379; // @[d_cache.scala 194:47]
  wire  _GEN_770 = _GEN_598 ? _GEN_380 : _GEN_380; // @[d_cache.scala 194:47]
  wire  _GEN_771 = _GEN_598 ? _GEN_381 : _GEN_381; // @[d_cache.scala 194:47]
  wire  _GEN_772 = _GEN_598 ? _GEN_382 : _GEN_382; // @[d_cache.scala 194:47]
  wire  _GEN_773 = _GEN_598 ? _GEN_383 : _GEN_383; // @[d_cache.scala 194:47]
  wire  _GEN_774 = _GEN_598 ? _GEN_384 : _GEN_384; // @[d_cache.scala 194:47]
  wire  _GEN_775 = _GEN_598 ? _GEN_385 : _GEN_385; // @[d_cache.scala 194:47]
  wire  _GEN_776 = _GEN_598 ? _GEN_386 : _GEN_386; // @[d_cache.scala 194:47]
  wire [3:0] _GEN_777 = _GEN_598 ? 4'h6 : 4'h7; // @[d_cache.scala 194:47 201:31 204:31]
  wire [511:0] _GEN_779 = ~quene ? _GEN_515 : _GEN_711; // @[d_cache.scala 175:34]
  wire [41:0] _GEN_780 = ~quene ? _GEN_516 : _GEN_712; // @[d_cache.scala 175:34]
  wire [511:0] _GEN_781 = ~quene ? _GEN_517 : ram_0_0; // @[d_cache.scala 175:34 19:24]
  wire [511:0] _GEN_782 = ~quene ? _GEN_518 : ram_0_1; // @[d_cache.scala 175:34 19:24]
  wire [511:0] _GEN_783 = ~quene ? _GEN_519 : ram_0_2; // @[d_cache.scala 175:34 19:24]
  wire [511:0] _GEN_784 = ~quene ? _GEN_520 : ram_0_3; // @[d_cache.scala 175:34 19:24]
  wire [511:0] _GEN_785 = ~quene ? _GEN_521 : ram_0_4; // @[d_cache.scala 175:34 19:24]
  wire [511:0] _GEN_786 = ~quene ? _GEN_522 : ram_0_5; // @[d_cache.scala 175:34 19:24]
  wire [511:0] _GEN_787 = ~quene ? _GEN_523 : ram_0_6; // @[d_cache.scala 175:34 19:24]
  wire [511:0] _GEN_788 = ~quene ? _GEN_524 : ram_0_7; // @[d_cache.scala 175:34 19:24]
  wire [511:0] _GEN_789 = ~quene ? _GEN_525 : ram_0_8; // @[d_cache.scala 175:34 19:24]
  wire [511:0] _GEN_790 = ~quene ? _GEN_526 : ram_0_9; // @[d_cache.scala 175:34 19:24]
  wire [511:0] _GEN_791 = ~quene ? _GEN_527 : ram_0_10; // @[d_cache.scala 175:34 19:24]
  wire [511:0] _GEN_792 = ~quene ? _GEN_528 : ram_0_11; // @[d_cache.scala 175:34 19:24]
  wire [511:0] _GEN_793 = ~quene ? _GEN_529 : ram_0_12; // @[d_cache.scala 175:34 19:24]
  wire [511:0] _GEN_794 = ~quene ? _GEN_530 : ram_0_13; // @[d_cache.scala 175:34 19:24]
  wire [511:0] _GEN_795 = ~quene ? _GEN_531 : ram_0_14; // @[d_cache.scala 175:34 19:24]
  wire [511:0] _GEN_796 = ~quene ? _GEN_532 : ram_0_15; // @[d_cache.scala 175:34 19:24]
  wire [31:0] _GEN_797 = ~quene ? _GEN_533 : tag_0_0; // @[d_cache.scala 175:34 28:24]
  wire [31:0] _GEN_798 = ~quene ? _GEN_534 : tag_0_1; // @[d_cache.scala 175:34 28:24]
  wire [31:0] _GEN_799 = ~quene ? _GEN_535 : tag_0_2; // @[d_cache.scala 175:34 28:24]
  wire [31:0] _GEN_800 = ~quene ? _GEN_536 : tag_0_3; // @[d_cache.scala 175:34 28:24]
  wire [31:0] _GEN_801 = ~quene ? _GEN_537 : tag_0_4; // @[d_cache.scala 175:34 28:24]
  wire [31:0] _GEN_802 = ~quene ? _GEN_538 : tag_0_5; // @[d_cache.scala 175:34 28:24]
  wire [31:0] _GEN_803 = ~quene ? _GEN_539 : tag_0_6; // @[d_cache.scala 175:34 28:24]
  wire [31:0] _GEN_804 = ~quene ? _GEN_540 : tag_0_7; // @[d_cache.scala 175:34 28:24]
  wire [31:0] _GEN_805 = ~quene ? _GEN_541 : tag_0_8; // @[d_cache.scala 175:34 28:24]
  wire [31:0] _GEN_806 = ~quene ? _GEN_542 : tag_0_9; // @[d_cache.scala 175:34 28:24]
  wire [31:0] _GEN_807 = ~quene ? _GEN_543 : tag_0_10; // @[d_cache.scala 175:34 28:24]
  wire [31:0] _GEN_808 = ~quene ? _GEN_544 : tag_0_11; // @[d_cache.scala 175:34 28:24]
  wire [31:0] _GEN_809 = ~quene ? _GEN_545 : tag_0_12; // @[d_cache.scala 175:34 28:24]
  wire [31:0] _GEN_810 = ~quene ? _GEN_546 : tag_0_13; // @[d_cache.scala 175:34 28:24]
  wire [31:0] _GEN_811 = ~quene ? _GEN_547 : tag_0_14; // @[d_cache.scala 175:34 28:24]
  wire [31:0] _GEN_812 = ~quene ? _GEN_548 : tag_0_15; // @[d_cache.scala 175:34 28:24]
  wire  _GEN_813 = ~quene ? _GEN_549 : dirty_0_0; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_814 = ~quene ? _GEN_550 : dirty_0_1; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_815 = ~quene ? _GEN_551 : dirty_0_2; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_816 = ~quene ? _GEN_552 : dirty_0_3; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_817 = ~quene ? _GEN_553 : dirty_0_4; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_818 = ~quene ? _GEN_554 : dirty_0_5; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_819 = ~quene ? _GEN_555 : dirty_0_6; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_820 = ~quene ? _GEN_556 : dirty_0_7; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_821 = ~quene ? _GEN_557 : dirty_0_8; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_822 = ~quene ? _GEN_558 : dirty_0_9; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_823 = ~quene ? _GEN_559 : dirty_0_10; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_824 = ~quene ? _GEN_560 : dirty_0_11; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_825 = ~quene ? _GEN_561 : dirty_0_12; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_826 = ~quene ? _GEN_562 : dirty_0_13; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_827 = ~quene ? _GEN_563 : dirty_0_14; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_828 = ~quene ? _GEN_564 : dirty_0_15; // @[d_cache.scala 175:34 32:26]
  wire  _GEN_829 = ~quene ? _GEN_565 : valid_0_0; // @[d_cache.scala 175:34 30:26]
  wire  _GEN_830 = ~quene ? _GEN_566 : valid_0_1; // @[d_cache.scala 175:34 30:26]
  wire  _GEN_831 = ~quene ? _GEN_567 : valid_0_2; // @[d_cache.scala 175:34 30:26]
  wire  _GEN_832 = ~quene ? _GEN_568 : valid_0_3; // @[d_cache.scala 175:34 30:26]
  wire  _GEN_833 = ~quene ? _GEN_569 : valid_0_4; // @[d_cache.scala 175:34 30:26]
  wire  _GEN_834 = ~quene ? _GEN_570 : valid_0_5; // @[d_cache.scala 175:34 30:26]
  wire  _GEN_835 = ~quene ? _GEN_571 : valid_0_6; // @[d_cache.scala 175:34 30:26]
  wire  _GEN_836 = ~quene ? _GEN_572 : valid_0_7; // @[d_cache.scala 175:34 30:26]
  wire  _GEN_837 = ~quene ? _GEN_573 : valid_0_8; // @[d_cache.scala 175:34 30:26]
  wire  _GEN_838 = ~quene ? _GEN_574 : valid_0_9; // @[d_cache.scala 175:34 30:26]
  wire  _GEN_839 = ~quene ? _GEN_575 : valid_0_10; // @[d_cache.scala 175:34 30:26]
  wire  _GEN_840 = ~quene ? _GEN_576 : valid_0_11; // @[d_cache.scala 175:34 30:26]
  wire  _GEN_841 = ~quene ? _GEN_577 : valid_0_12; // @[d_cache.scala 175:34 30:26]
  wire  _GEN_842 = ~quene ? _GEN_578 : valid_0_13; // @[d_cache.scala 175:34 30:26]
  wire  _GEN_843 = ~quene ? _GEN_579 : valid_0_14; // @[d_cache.scala 175:34 30:26]
  wire  _GEN_844 = ~quene ? _GEN_580 : valid_0_15; // @[d_cache.scala 175:34 30:26]
  wire [3:0] _GEN_845 = ~quene ? _GEN_581 : _GEN_777; // @[d_cache.scala 175:34]
  wire [511:0] _GEN_847 = ~quene ? ram_1_0 : _GEN_713; // @[d_cache.scala 175:34 20:24]
  wire [511:0] _GEN_848 = ~quene ? ram_1_1 : _GEN_714; // @[d_cache.scala 175:34 20:24]
  wire [511:0] _GEN_849 = ~quene ? ram_1_2 : _GEN_715; // @[d_cache.scala 175:34 20:24]
  wire [511:0] _GEN_850 = ~quene ? ram_1_3 : _GEN_716; // @[d_cache.scala 175:34 20:24]
  wire [511:0] _GEN_851 = ~quene ? ram_1_4 : _GEN_717; // @[d_cache.scala 175:34 20:24]
  wire [511:0] _GEN_852 = ~quene ? ram_1_5 : _GEN_718; // @[d_cache.scala 175:34 20:24]
  wire [511:0] _GEN_853 = ~quene ? ram_1_6 : _GEN_719; // @[d_cache.scala 175:34 20:24]
  wire [511:0] _GEN_854 = ~quene ? ram_1_7 : _GEN_720; // @[d_cache.scala 175:34 20:24]
  wire [511:0] _GEN_855 = ~quene ? ram_1_8 : _GEN_721; // @[d_cache.scala 175:34 20:24]
  wire [511:0] _GEN_856 = ~quene ? ram_1_9 : _GEN_722; // @[d_cache.scala 175:34 20:24]
  wire [511:0] _GEN_857 = ~quene ? ram_1_10 : _GEN_723; // @[d_cache.scala 175:34 20:24]
  wire [511:0] _GEN_858 = ~quene ? ram_1_11 : _GEN_724; // @[d_cache.scala 175:34 20:24]
  wire [511:0] _GEN_859 = ~quene ? ram_1_12 : _GEN_725; // @[d_cache.scala 175:34 20:24]
  wire [511:0] _GEN_860 = ~quene ? ram_1_13 : _GEN_726; // @[d_cache.scala 175:34 20:24]
  wire [511:0] _GEN_861 = ~quene ? ram_1_14 : _GEN_727; // @[d_cache.scala 175:34 20:24]
  wire [511:0] _GEN_862 = ~quene ? ram_1_15 : _GEN_728; // @[d_cache.scala 175:34 20:24]
  wire [31:0] _GEN_863 = ~quene ? tag_1_0 : _GEN_729; // @[d_cache.scala 175:34 29:24]
  wire [31:0] _GEN_864 = ~quene ? tag_1_1 : _GEN_730; // @[d_cache.scala 175:34 29:24]
  wire [31:0] _GEN_865 = ~quene ? tag_1_2 : _GEN_731; // @[d_cache.scala 175:34 29:24]
  wire [31:0] _GEN_866 = ~quene ? tag_1_3 : _GEN_732; // @[d_cache.scala 175:34 29:24]
  wire [31:0] _GEN_867 = ~quene ? tag_1_4 : _GEN_733; // @[d_cache.scala 175:34 29:24]
  wire [31:0] _GEN_868 = ~quene ? tag_1_5 : _GEN_734; // @[d_cache.scala 175:34 29:24]
  wire [31:0] _GEN_869 = ~quene ? tag_1_6 : _GEN_735; // @[d_cache.scala 175:34 29:24]
  wire [31:0] _GEN_870 = ~quene ? tag_1_7 : _GEN_736; // @[d_cache.scala 175:34 29:24]
  wire [31:0] _GEN_871 = ~quene ? tag_1_8 : _GEN_737; // @[d_cache.scala 175:34 29:24]
  wire [31:0] _GEN_872 = ~quene ? tag_1_9 : _GEN_738; // @[d_cache.scala 175:34 29:24]
  wire [31:0] _GEN_873 = ~quene ? tag_1_10 : _GEN_739; // @[d_cache.scala 175:34 29:24]
  wire [31:0] _GEN_874 = ~quene ? tag_1_11 : _GEN_740; // @[d_cache.scala 175:34 29:24]
  wire [31:0] _GEN_875 = ~quene ? tag_1_12 : _GEN_741; // @[d_cache.scala 175:34 29:24]
  wire [31:0] _GEN_876 = ~quene ? tag_1_13 : _GEN_742; // @[d_cache.scala 175:34 29:24]
  wire [31:0] _GEN_877 = ~quene ? tag_1_14 : _GEN_743; // @[d_cache.scala 175:34 29:24]
  wire [31:0] _GEN_878 = ~quene ? tag_1_15 : _GEN_744; // @[d_cache.scala 175:34 29:24]
  wire  _GEN_879 = ~quene ? dirty_1_0 : _GEN_745; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_880 = ~quene ? dirty_1_1 : _GEN_746; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_881 = ~quene ? dirty_1_2 : _GEN_747; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_882 = ~quene ? dirty_1_3 : _GEN_748; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_883 = ~quene ? dirty_1_4 : _GEN_749; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_884 = ~quene ? dirty_1_5 : _GEN_750; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_885 = ~quene ? dirty_1_6 : _GEN_751; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_886 = ~quene ? dirty_1_7 : _GEN_752; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_887 = ~quene ? dirty_1_8 : _GEN_753; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_888 = ~quene ? dirty_1_9 : _GEN_754; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_889 = ~quene ? dirty_1_10 : _GEN_755; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_890 = ~quene ? dirty_1_11 : _GEN_756; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_891 = ~quene ? dirty_1_12 : _GEN_757; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_892 = ~quene ? dirty_1_13 : _GEN_758; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_893 = ~quene ? dirty_1_14 : _GEN_759; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_894 = ~quene ? dirty_1_15 : _GEN_760; // @[d_cache.scala 175:34 33:26]
  wire  _GEN_895 = ~quene ? valid_1_0 : _GEN_761; // @[d_cache.scala 175:34 31:26]
  wire  _GEN_896 = ~quene ? valid_1_1 : _GEN_762; // @[d_cache.scala 175:34 31:26]
  wire  _GEN_897 = ~quene ? valid_1_2 : _GEN_763; // @[d_cache.scala 175:34 31:26]
  wire  _GEN_898 = ~quene ? valid_1_3 : _GEN_764; // @[d_cache.scala 175:34 31:26]
  wire  _GEN_899 = ~quene ? valid_1_4 : _GEN_765; // @[d_cache.scala 175:34 31:26]
  wire  _GEN_900 = ~quene ? valid_1_5 : _GEN_766; // @[d_cache.scala 175:34 31:26]
  wire  _GEN_901 = ~quene ? valid_1_6 : _GEN_767; // @[d_cache.scala 175:34 31:26]
  wire  _GEN_902 = ~quene ? valid_1_7 : _GEN_768; // @[d_cache.scala 175:34 31:26]
  wire  _GEN_903 = ~quene ? valid_1_8 : _GEN_769; // @[d_cache.scala 175:34 31:26]
  wire  _GEN_904 = ~quene ? valid_1_9 : _GEN_770; // @[d_cache.scala 175:34 31:26]
  wire  _GEN_905 = ~quene ? valid_1_10 : _GEN_771; // @[d_cache.scala 175:34 31:26]
  wire  _GEN_906 = ~quene ? valid_1_11 : _GEN_772; // @[d_cache.scala 175:34 31:26]
  wire  _GEN_907 = ~quene ? valid_1_12 : _GEN_773; // @[d_cache.scala 175:34 31:26]
  wire  _GEN_908 = ~quene ? valid_1_13 : _GEN_774; // @[d_cache.scala 175:34 31:26]
  wire  _GEN_909 = ~quene ? valid_1_14 : _GEN_775; // @[d_cache.scala 175:34 31:26]
  wire  _GEN_910 = ~quene ? valid_1_15 : _GEN_776; // @[d_cache.scala 175:34 31:26]
  wire [3:0] _GEN_911 = unuse_way == 2'h2 ? 4'h7 : _GEN_845; // @[d_cache.scala 168:40 169:23]
  wire [511:0] _GEN_912 = unuse_way == 2'h2 ? _GEN_339 : _GEN_847; // @[d_cache.scala 168:40]
  wire [511:0] _GEN_913 = unuse_way == 2'h2 ? _GEN_340 : _GEN_848; // @[d_cache.scala 168:40]
  wire [511:0] _GEN_914 = unuse_way == 2'h2 ? _GEN_341 : _GEN_849; // @[d_cache.scala 168:40]
  wire [511:0] _GEN_915 = unuse_way == 2'h2 ? _GEN_342 : _GEN_850; // @[d_cache.scala 168:40]
  wire [511:0] _GEN_916 = unuse_way == 2'h2 ? _GEN_343 : _GEN_851; // @[d_cache.scala 168:40]
  wire [511:0] _GEN_917 = unuse_way == 2'h2 ? _GEN_344 : _GEN_852; // @[d_cache.scala 168:40]
  wire [511:0] _GEN_918 = unuse_way == 2'h2 ? _GEN_345 : _GEN_853; // @[d_cache.scala 168:40]
  wire [511:0] _GEN_919 = unuse_way == 2'h2 ? _GEN_346 : _GEN_854; // @[d_cache.scala 168:40]
  wire [511:0] _GEN_920 = unuse_way == 2'h2 ? _GEN_347 : _GEN_855; // @[d_cache.scala 168:40]
  wire [511:0] _GEN_921 = unuse_way == 2'h2 ? _GEN_348 : _GEN_856; // @[d_cache.scala 168:40]
  wire [511:0] _GEN_922 = unuse_way == 2'h2 ? _GEN_349 : _GEN_857; // @[d_cache.scala 168:40]
  wire [511:0] _GEN_923 = unuse_way == 2'h2 ? _GEN_350 : _GEN_858; // @[d_cache.scala 168:40]
  wire [511:0] _GEN_924 = unuse_way == 2'h2 ? _GEN_351 : _GEN_859; // @[d_cache.scala 168:40]
  wire [511:0] _GEN_925 = unuse_way == 2'h2 ? _GEN_352 : _GEN_860; // @[d_cache.scala 168:40]
  wire [511:0] _GEN_926 = unuse_way == 2'h2 ? _GEN_353 : _GEN_861; // @[d_cache.scala 168:40]
  wire [511:0] _GEN_927 = unuse_way == 2'h2 ? _GEN_354 : _GEN_862; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_928 = unuse_way == 2'h2 ? _GEN_355 : _GEN_863; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_929 = unuse_way == 2'h2 ? _GEN_356 : _GEN_864; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_930 = unuse_way == 2'h2 ? _GEN_357 : _GEN_865; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_931 = unuse_way == 2'h2 ? _GEN_358 : _GEN_866; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_932 = unuse_way == 2'h2 ? _GEN_359 : _GEN_867; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_933 = unuse_way == 2'h2 ? _GEN_360 : _GEN_868; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_934 = unuse_way == 2'h2 ? _GEN_361 : _GEN_869; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_935 = unuse_way == 2'h2 ? _GEN_362 : _GEN_870; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_936 = unuse_way == 2'h2 ? _GEN_363 : _GEN_871; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_937 = unuse_way == 2'h2 ? _GEN_364 : _GEN_872; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_938 = unuse_way == 2'h2 ? _GEN_365 : _GEN_873; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_939 = unuse_way == 2'h2 ? _GEN_366 : _GEN_874; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_940 = unuse_way == 2'h2 ? _GEN_367 : _GEN_875; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_941 = unuse_way == 2'h2 ? _GEN_368 : _GEN_876; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_942 = unuse_way == 2'h2 ? _GEN_369 : _GEN_877; // @[d_cache.scala 168:40]
  wire [31:0] _GEN_943 = unuse_way == 2'h2 ? _GEN_370 : _GEN_878; // @[d_cache.scala 168:40]
  wire  _GEN_944 = unuse_way == 2'h2 ? _GEN_371 : _GEN_895; // @[d_cache.scala 168:40]
  wire  _GEN_945 = unuse_way == 2'h2 ? _GEN_372 : _GEN_896; // @[d_cache.scala 168:40]
  wire  _GEN_946 = unuse_way == 2'h2 ? _GEN_373 : _GEN_897; // @[d_cache.scala 168:40]
  wire  _GEN_947 = unuse_way == 2'h2 ? _GEN_374 : _GEN_898; // @[d_cache.scala 168:40]
  wire  _GEN_948 = unuse_way == 2'h2 ? _GEN_375 : _GEN_899; // @[d_cache.scala 168:40]
  wire  _GEN_949 = unuse_way == 2'h2 ? _GEN_376 : _GEN_900; // @[d_cache.scala 168:40]
  wire  _GEN_950 = unuse_way == 2'h2 ? _GEN_377 : _GEN_901; // @[d_cache.scala 168:40]
  wire  _GEN_951 = unuse_way == 2'h2 ? _GEN_378 : _GEN_902; // @[d_cache.scala 168:40]
  wire  _GEN_952 = unuse_way == 2'h2 ? _GEN_379 : _GEN_903; // @[d_cache.scala 168:40]
  wire  _GEN_953 = unuse_way == 2'h2 ? _GEN_380 : _GEN_904; // @[d_cache.scala 168:40]
  wire  _GEN_954 = unuse_way == 2'h2 ? _GEN_381 : _GEN_905; // @[d_cache.scala 168:40]
  wire  _GEN_955 = unuse_way == 2'h2 ? _GEN_382 : _GEN_906; // @[d_cache.scala 168:40]
  wire  _GEN_956 = unuse_way == 2'h2 ? _GEN_383 : _GEN_907; // @[d_cache.scala 168:40]
  wire  _GEN_957 = unuse_way == 2'h2 ? _GEN_384 : _GEN_908; // @[d_cache.scala 168:40]
  wire  _GEN_958 = unuse_way == 2'h2 ? _GEN_385 : _GEN_909; // @[d_cache.scala 168:40]
  wire  _GEN_959 = unuse_way == 2'h2 ? _GEN_386 : _GEN_910; // @[d_cache.scala 168:40]
  wire  _GEN_960 = unuse_way == 2'h2 ? 1'h0 : _T_18; // @[d_cache.scala 168:40 173:23]
  wire [511:0] _GEN_961 = unuse_way == 2'h2 ? write_back_data : _GEN_779; // @[d_cache.scala 168:40 37:34]
  wire [41:0] _GEN_962 = unuse_way == 2'h2 ? {{10'd0}, write_back_addr} : _GEN_780; // @[d_cache.scala 168:40 38:34]
  wire [511:0] _GEN_963 = unuse_way == 2'h2 ? ram_0_0 : _GEN_781; // @[d_cache.scala 168:40 19:24]
  wire [511:0] _GEN_964 = unuse_way == 2'h2 ? ram_0_1 : _GEN_782; // @[d_cache.scala 168:40 19:24]
  wire [511:0] _GEN_965 = unuse_way == 2'h2 ? ram_0_2 : _GEN_783; // @[d_cache.scala 168:40 19:24]
  wire [511:0] _GEN_966 = unuse_way == 2'h2 ? ram_0_3 : _GEN_784; // @[d_cache.scala 168:40 19:24]
  wire [511:0] _GEN_967 = unuse_way == 2'h2 ? ram_0_4 : _GEN_785; // @[d_cache.scala 168:40 19:24]
  wire [511:0] _GEN_968 = unuse_way == 2'h2 ? ram_0_5 : _GEN_786; // @[d_cache.scala 168:40 19:24]
  wire [511:0] _GEN_969 = unuse_way == 2'h2 ? ram_0_6 : _GEN_787; // @[d_cache.scala 168:40 19:24]
  wire [511:0] _GEN_970 = unuse_way == 2'h2 ? ram_0_7 : _GEN_788; // @[d_cache.scala 168:40 19:24]
  wire [511:0] _GEN_971 = unuse_way == 2'h2 ? ram_0_8 : _GEN_789; // @[d_cache.scala 168:40 19:24]
  wire [511:0] _GEN_972 = unuse_way == 2'h2 ? ram_0_9 : _GEN_790; // @[d_cache.scala 168:40 19:24]
  wire [511:0] _GEN_973 = unuse_way == 2'h2 ? ram_0_10 : _GEN_791; // @[d_cache.scala 168:40 19:24]
  wire [511:0] _GEN_974 = unuse_way == 2'h2 ? ram_0_11 : _GEN_792; // @[d_cache.scala 168:40 19:24]
  wire [511:0] _GEN_975 = unuse_way == 2'h2 ? ram_0_12 : _GEN_793; // @[d_cache.scala 168:40 19:24]
  wire [511:0] _GEN_976 = unuse_way == 2'h2 ? ram_0_13 : _GEN_794; // @[d_cache.scala 168:40 19:24]
  wire [511:0] _GEN_977 = unuse_way == 2'h2 ? ram_0_14 : _GEN_795; // @[d_cache.scala 168:40 19:24]
  wire [511:0] _GEN_978 = unuse_way == 2'h2 ? ram_0_15 : _GEN_796; // @[d_cache.scala 168:40 19:24]
  wire [31:0] _GEN_979 = unuse_way == 2'h2 ? tag_0_0 : _GEN_797; // @[d_cache.scala 168:40 28:24]
  wire [31:0] _GEN_980 = unuse_way == 2'h2 ? tag_0_1 : _GEN_798; // @[d_cache.scala 168:40 28:24]
  wire [31:0] _GEN_981 = unuse_way == 2'h2 ? tag_0_2 : _GEN_799; // @[d_cache.scala 168:40 28:24]
  wire [31:0] _GEN_982 = unuse_way == 2'h2 ? tag_0_3 : _GEN_800; // @[d_cache.scala 168:40 28:24]
  wire [31:0] _GEN_983 = unuse_way == 2'h2 ? tag_0_4 : _GEN_801; // @[d_cache.scala 168:40 28:24]
  wire [31:0] _GEN_984 = unuse_way == 2'h2 ? tag_0_5 : _GEN_802; // @[d_cache.scala 168:40 28:24]
  wire [31:0] _GEN_985 = unuse_way == 2'h2 ? tag_0_6 : _GEN_803; // @[d_cache.scala 168:40 28:24]
  wire [31:0] _GEN_986 = unuse_way == 2'h2 ? tag_0_7 : _GEN_804; // @[d_cache.scala 168:40 28:24]
  wire [31:0] _GEN_987 = unuse_way == 2'h2 ? tag_0_8 : _GEN_805; // @[d_cache.scala 168:40 28:24]
  wire [31:0] _GEN_988 = unuse_way == 2'h2 ? tag_0_9 : _GEN_806; // @[d_cache.scala 168:40 28:24]
  wire [31:0] _GEN_989 = unuse_way == 2'h2 ? tag_0_10 : _GEN_807; // @[d_cache.scala 168:40 28:24]
  wire [31:0] _GEN_990 = unuse_way == 2'h2 ? tag_0_11 : _GEN_808; // @[d_cache.scala 168:40 28:24]
  wire [31:0] _GEN_991 = unuse_way == 2'h2 ? tag_0_12 : _GEN_809; // @[d_cache.scala 168:40 28:24]
  wire [31:0] _GEN_992 = unuse_way == 2'h2 ? tag_0_13 : _GEN_810; // @[d_cache.scala 168:40 28:24]
  wire [31:0] _GEN_993 = unuse_way == 2'h2 ? tag_0_14 : _GEN_811; // @[d_cache.scala 168:40 28:24]
  wire [31:0] _GEN_994 = unuse_way == 2'h2 ? tag_0_15 : _GEN_812; // @[d_cache.scala 168:40 28:24]
  wire  _GEN_995 = unuse_way == 2'h2 ? dirty_0_0 : _GEN_813; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_996 = unuse_way == 2'h2 ? dirty_0_1 : _GEN_814; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_997 = unuse_way == 2'h2 ? dirty_0_2 : _GEN_815; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_998 = unuse_way == 2'h2 ? dirty_0_3 : _GEN_816; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_999 = unuse_way == 2'h2 ? dirty_0_4 : _GEN_817; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_1000 = unuse_way == 2'h2 ? dirty_0_5 : _GEN_818; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_1001 = unuse_way == 2'h2 ? dirty_0_6 : _GEN_819; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_1002 = unuse_way == 2'h2 ? dirty_0_7 : _GEN_820; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_1003 = unuse_way == 2'h2 ? dirty_0_8 : _GEN_821; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_1004 = unuse_way == 2'h2 ? dirty_0_9 : _GEN_822; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_1005 = unuse_way == 2'h2 ? dirty_0_10 : _GEN_823; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_1006 = unuse_way == 2'h2 ? dirty_0_11 : _GEN_824; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_1007 = unuse_way == 2'h2 ? dirty_0_12 : _GEN_825; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_1008 = unuse_way == 2'h2 ? dirty_0_13 : _GEN_826; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_1009 = unuse_way == 2'h2 ? dirty_0_14 : _GEN_827; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_1010 = unuse_way == 2'h2 ? dirty_0_15 : _GEN_828; // @[d_cache.scala 168:40 32:26]
  wire  _GEN_1011 = unuse_way == 2'h2 ? valid_0_0 : _GEN_829; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1012 = unuse_way == 2'h2 ? valid_0_1 : _GEN_830; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1013 = unuse_way == 2'h2 ? valid_0_2 : _GEN_831; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1014 = unuse_way == 2'h2 ? valid_0_3 : _GEN_832; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1015 = unuse_way == 2'h2 ? valid_0_4 : _GEN_833; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1016 = unuse_way == 2'h2 ? valid_0_5 : _GEN_834; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1017 = unuse_way == 2'h2 ? valid_0_6 : _GEN_835; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1018 = unuse_way == 2'h2 ? valid_0_7 : _GEN_836; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1019 = unuse_way == 2'h2 ? valid_0_8 : _GEN_837; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1020 = unuse_way == 2'h2 ? valid_0_9 : _GEN_838; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1021 = unuse_way == 2'h2 ? valid_0_10 : _GEN_839; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1022 = unuse_way == 2'h2 ? valid_0_11 : _GEN_840; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1023 = unuse_way == 2'h2 ? valid_0_12 : _GEN_841; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1024 = unuse_way == 2'h2 ? valid_0_13 : _GEN_842; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1025 = unuse_way == 2'h2 ? valid_0_14 : _GEN_843; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1026 = unuse_way == 2'h2 ? valid_0_15 : _GEN_844; // @[d_cache.scala 168:40 30:26]
  wire  _GEN_1027 = unuse_way == 2'h2 ? dirty_1_0 : _GEN_879; // @[d_cache.scala 168:40 33:26]
  wire  _GEN_1028 = unuse_way == 2'h2 ? dirty_1_1 : _GEN_880; // @[d_cache.scala 168:40 33:26]
  wire  _GEN_1029 = unuse_way == 2'h2 ? dirty_1_2 : _GEN_881; // @[d_cache.scala 168:40 33:26]
  wire  _GEN_1030 = unuse_way == 2'h2 ? dirty_1_3 : _GEN_882; // @[d_cache.scala 168:40 33:26]
  wire  _GEN_1031 = unuse_way == 2'h2 ? dirty_1_4 : _GEN_883; // @[d_cache.scala 168:40 33:26]
  wire  _GEN_1032 = unuse_way == 2'h2 ? dirty_1_5 : _GEN_884; // @[d_cache.scala 168:40 33:26]
  wire  _GEN_1033 = unuse_way == 2'h2 ? dirty_1_6 : _GEN_885; // @[d_cache.scala 168:40 33:26]
  wire  _GEN_1034 = unuse_way == 2'h2 ? dirty_1_7 : _GEN_886; // @[d_cache.scala 168:40 33:26]
  wire  _GEN_1035 = unuse_way == 2'h2 ? dirty_1_8 : _GEN_887; // @[d_cache.scala 168:40 33:26]
  wire  _GEN_1036 = unuse_way == 2'h2 ? dirty_1_9 : _GEN_888; // @[d_cache.scala 168:40 33:26]
  wire  _GEN_1037 = unuse_way == 2'h2 ? dirty_1_10 : _GEN_889; // @[d_cache.scala 168:40 33:26]
  wire  _GEN_1038 = unuse_way == 2'h2 ? dirty_1_11 : _GEN_890; // @[d_cache.scala 168:40 33:26]
  wire  _GEN_1039 = unuse_way == 2'h2 ? dirty_1_12 : _GEN_891; // @[d_cache.scala 168:40 33:26]
  wire  _GEN_1040 = unuse_way == 2'h2 ? dirty_1_13 : _GEN_892; // @[d_cache.scala 168:40 33:26]
  wire  _GEN_1041 = unuse_way == 2'h2 ? dirty_1_14 : _GEN_893; // @[d_cache.scala 168:40 33:26]
  wire  _GEN_1042 = unuse_way == 2'h2 ? dirty_1_15 : _GEN_894; // @[d_cache.scala 168:40 33:26]
  wire [3:0] _GEN_1043 = unuse_way == 2'h1 ? 4'h7 : _GEN_911; // @[d_cache.scala 162:34 163:23]
  wire [511:0] _GEN_1044 = unuse_way == 2'h1 ? _GEN_291 : _GEN_963; // @[d_cache.scala 162:34]
  wire [511:0] _GEN_1045 = unuse_way == 2'h1 ? _GEN_292 : _GEN_964; // @[d_cache.scala 162:34]
  wire [511:0] _GEN_1046 = unuse_way == 2'h1 ? _GEN_293 : _GEN_965; // @[d_cache.scala 162:34]
  wire [511:0] _GEN_1047 = unuse_way == 2'h1 ? _GEN_294 : _GEN_966; // @[d_cache.scala 162:34]
  wire [511:0] _GEN_1048 = unuse_way == 2'h1 ? _GEN_295 : _GEN_967; // @[d_cache.scala 162:34]
  wire [511:0] _GEN_1049 = unuse_way == 2'h1 ? _GEN_296 : _GEN_968; // @[d_cache.scala 162:34]
  wire [511:0] _GEN_1050 = unuse_way == 2'h1 ? _GEN_297 : _GEN_969; // @[d_cache.scala 162:34]
  wire [511:0] _GEN_1051 = unuse_way == 2'h1 ? _GEN_298 : _GEN_970; // @[d_cache.scala 162:34]
  wire [511:0] _GEN_1052 = unuse_way == 2'h1 ? _GEN_299 : _GEN_971; // @[d_cache.scala 162:34]
  wire [511:0] _GEN_1053 = unuse_way == 2'h1 ? _GEN_300 : _GEN_972; // @[d_cache.scala 162:34]
  wire [511:0] _GEN_1054 = unuse_way == 2'h1 ? _GEN_301 : _GEN_973; // @[d_cache.scala 162:34]
  wire [511:0] _GEN_1055 = unuse_way == 2'h1 ? _GEN_302 : _GEN_974; // @[d_cache.scala 162:34]
  wire [511:0] _GEN_1056 = unuse_way == 2'h1 ? _GEN_303 : _GEN_975; // @[d_cache.scala 162:34]
  wire [511:0] _GEN_1057 = unuse_way == 2'h1 ? _GEN_304 : _GEN_976; // @[d_cache.scala 162:34]
  wire [511:0] _GEN_1058 = unuse_way == 2'h1 ? _GEN_305 : _GEN_977; // @[d_cache.scala 162:34]
  wire [511:0] _GEN_1059 = unuse_way == 2'h1 ? _GEN_306 : _GEN_978; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1060 = unuse_way == 2'h1 ? _GEN_307 : _GEN_979; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1061 = unuse_way == 2'h1 ? _GEN_308 : _GEN_980; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1062 = unuse_way == 2'h1 ? _GEN_309 : _GEN_981; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1063 = unuse_way == 2'h1 ? _GEN_310 : _GEN_982; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1064 = unuse_way == 2'h1 ? _GEN_311 : _GEN_983; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1065 = unuse_way == 2'h1 ? _GEN_312 : _GEN_984; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1066 = unuse_way == 2'h1 ? _GEN_313 : _GEN_985; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1067 = unuse_way == 2'h1 ? _GEN_314 : _GEN_986; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1068 = unuse_way == 2'h1 ? _GEN_315 : _GEN_987; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1069 = unuse_way == 2'h1 ? _GEN_316 : _GEN_988; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1070 = unuse_way == 2'h1 ? _GEN_317 : _GEN_989; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1071 = unuse_way == 2'h1 ? _GEN_318 : _GEN_990; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1072 = unuse_way == 2'h1 ? _GEN_319 : _GEN_991; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1073 = unuse_way == 2'h1 ? _GEN_320 : _GEN_992; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1074 = unuse_way == 2'h1 ? _GEN_321 : _GEN_993; // @[d_cache.scala 162:34]
  wire [31:0] _GEN_1075 = unuse_way == 2'h1 ? _GEN_322 : _GEN_994; // @[d_cache.scala 162:34]
  wire  _GEN_1076 = unuse_way == 2'h1 ? _GEN_323 : _GEN_1011; // @[d_cache.scala 162:34]
  wire  _GEN_1077 = unuse_way == 2'h1 ? _GEN_324 : _GEN_1012; // @[d_cache.scala 162:34]
  wire  _GEN_1078 = unuse_way == 2'h1 ? _GEN_325 : _GEN_1013; // @[d_cache.scala 162:34]
  wire  _GEN_1079 = unuse_way == 2'h1 ? _GEN_326 : _GEN_1014; // @[d_cache.scala 162:34]
  wire  _GEN_1080 = unuse_way == 2'h1 ? _GEN_327 : _GEN_1015; // @[d_cache.scala 162:34]
  wire  _GEN_1081 = unuse_way == 2'h1 ? _GEN_328 : _GEN_1016; // @[d_cache.scala 162:34]
  wire  _GEN_1082 = unuse_way == 2'h1 ? _GEN_329 : _GEN_1017; // @[d_cache.scala 162:34]
  wire  _GEN_1083 = unuse_way == 2'h1 ? _GEN_330 : _GEN_1018; // @[d_cache.scala 162:34]
  wire  _GEN_1084 = unuse_way == 2'h1 ? _GEN_331 : _GEN_1019; // @[d_cache.scala 162:34]
  wire  _GEN_1085 = unuse_way == 2'h1 ? _GEN_332 : _GEN_1020; // @[d_cache.scala 162:34]
  wire  _GEN_1086 = unuse_way == 2'h1 ? _GEN_333 : _GEN_1021; // @[d_cache.scala 162:34]
  wire  _GEN_1087 = unuse_way == 2'h1 ? _GEN_334 : _GEN_1022; // @[d_cache.scala 162:34]
  wire  _GEN_1088 = unuse_way == 2'h1 ? _GEN_335 : _GEN_1023; // @[d_cache.scala 162:34]
  wire  _GEN_1089 = unuse_way == 2'h1 ? _GEN_336 : _GEN_1024; // @[d_cache.scala 162:34]
  wire  _GEN_1090 = unuse_way == 2'h1 ? _GEN_337 : _GEN_1025; // @[d_cache.scala 162:34]
  wire  _GEN_1091 = unuse_way == 2'h1 ? _GEN_338 : _GEN_1026; // @[d_cache.scala 162:34]
  wire  _GEN_1092 = unuse_way == 2'h1 | _GEN_960; // @[d_cache.scala 162:34 167:23]
  wire [511:0] _GEN_1093 = unuse_way == 2'h1 ? ram_1_0 : _GEN_912; // @[d_cache.scala 162:34 20:24]
  wire [511:0] _GEN_1094 = unuse_way == 2'h1 ? ram_1_1 : _GEN_913; // @[d_cache.scala 162:34 20:24]
  wire [511:0] _GEN_1095 = unuse_way == 2'h1 ? ram_1_2 : _GEN_914; // @[d_cache.scala 162:34 20:24]
  wire [511:0] _GEN_1096 = unuse_way == 2'h1 ? ram_1_3 : _GEN_915; // @[d_cache.scala 162:34 20:24]
  wire [511:0] _GEN_1097 = unuse_way == 2'h1 ? ram_1_4 : _GEN_916; // @[d_cache.scala 162:34 20:24]
  wire [511:0] _GEN_1098 = unuse_way == 2'h1 ? ram_1_5 : _GEN_917; // @[d_cache.scala 162:34 20:24]
  wire [511:0] _GEN_1099 = unuse_way == 2'h1 ? ram_1_6 : _GEN_918; // @[d_cache.scala 162:34 20:24]
  wire [511:0] _GEN_1100 = unuse_way == 2'h1 ? ram_1_7 : _GEN_919; // @[d_cache.scala 162:34 20:24]
  wire [511:0] _GEN_1101 = unuse_way == 2'h1 ? ram_1_8 : _GEN_920; // @[d_cache.scala 162:34 20:24]
  wire [511:0] _GEN_1102 = unuse_way == 2'h1 ? ram_1_9 : _GEN_921; // @[d_cache.scala 162:34 20:24]
  wire [511:0] _GEN_1103 = unuse_way == 2'h1 ? ram_1_10 : _GEN_922; // @[d_cache.scala 162:34 20:24]
  wire [511:0] _GEN_1104 = unuse_way == 2'h1 ? ram_1_11 : _GEN_923; // @[d_cache.scala 162:34 20:24]
  wire [511:0] _GEN_1105 = unuse_way == 2'h1 ? ram_1_12 : _GEN_924; // @[d_cache.scala 162:34 20:24]
  wire [511:0] _GEN_1106 = unuse_way == 2'h1 ? ram_1_13 : _GEN_925; // @[d_cache.scala 162:34 20:24]
  wire [511:0] _GEN_1107 = unuse_way == 2'h1 ? ram_1_14 : _GEN_926; // @[d_cache.scala 162:34 20:24]
  wire [511:0] _GEN_1108 = unuse_way == 2'h1 ? ram_1_15 : _GEN_927; // @[d_cache.scala 162:34 20:24]
  wire [31:0] _GEN_1109 = unuse_way == 2'h1 ? tag_1_0 : _GEN_928; // @[d_cache.scala 162:34 29:24]
  wire [31:0] _GEN_1110 = unuse_way == 2'h1 ? tag_1_1 : _GEN_929; // @[d_cache.scala 162:34 29:24]
  wire [31:0] _GEN_1111 = unuse_way == 2'h1 ? tag_1_2 : _GEN_930; // @[d_cache.scala 162:34 29:24]
  wire [31:0] _GEN_1112 = unuse_way == 2'h1 ? tag_1_3 : _GEN_931; // @[d_cache.scala 162:34 29:24]
  wire [31:0] _GEN_1113 = unuse_way == 2'h1 ? tag_1_4 : _GEN_932; // @[d_cache.scala 162:34 29:24]
  wire [31:0] _GEN_1114 = unuse_way == 2'h1 ? tag_1_5 : _GEN_933; // @[d_cache.scala 162:34 29:24]
  wire [31:0] _GEN_1115 = unuse_way == 2'h1 ? tag_1_6 : _GEN_934; // @[d_cache.scala 162:34 29:24]
  wire [31:0] _GEN_1116 = unuse_way == 2'h1 ? tag_1_7 : _GEN_935; // @[d_cache.scala 162:34 29:24]
  wire [31:0] _GEN_1117 = unuse_way == 2'h1 ? tag_1_8 : _GEN_936; // @[d_cache.scala 162:34 29:24]
  wire [31:0] _GEN_1118 = unuse_way == 2'h1 ? tag_1_9 : _GEN_937; // @[d_cache.scala 162:34 29:24]
  wire [31:0] _GEN_1119 = unuse_way == 2'h1 ? tag_1_10 : _GEN_938; // @[d_cache.scala 162:34 29:24]
  wire [31:0] _GEN_1120 = unuse_way == 2'h1 ? tag_1_11 : _GEN_939; // @[d_cache.scala 162:34 29:24]
  wire [31:0] _GEN_1121 = unuse_way == 2'h1 ? tag_1_12 : _GEN_940; // @[d_cache.scala 162:34 29:24]
  wire [31:0] _GEN_1122 = unuse_way == 2'h1 ? tag_1_13 : _GEN_941; // @[d_cache.scala 162:34 29:24]
  wire [31:0] _GEN_1123 = unuse_way == 2'h1 ? tag_1_14 : _GEN_942; // @[d_cache.scala 162:34 29:24]
  wire [31:0] _GEN_1124 = unuse_way == 2'h1 ? tag_1_15 : _GEN_943; // @[d_cache.scala 162:34 29:24]
  wire  _GEN_1125 = unuse_way == 2'h1 ? valid_1_0 : _GEN_944; // @[d_cache.scala 162:34 31:26]
  wire  _GEN_1126 = unuse_way == 2'h1 ? valid_1_1 : _GEN_945; // @[d_cache.scala 162:34 31:26]
  wire  _GEN_1127 = unuse_way == 2'h1 ? valid_1_2 : _GEN_946; // @[d_cache.scala 162:34 31:26]
  wire  _GEN_1128 = unuse_way == 2'h1 ? valid_1_3 : _GEN_947; // @[d_cache.scala 162:34 31:26]
  wire  _GEN_1129 = unuse_way == 2'h1 ? valid_1_4 : _GEN_948; // @[d_cache.scala 162:34 31:26]
  wire  _GEN_1130 = unuse_way == 2'h1 ? valid_1_5 : _GEN_949; // @[d_cache.scala 162:34 31:26]
  wire  _GEN_1131 = unuse_way == 2'h1 ? valid_1_6 : _GEN_950; // @[d_cache.scala 162:34 31:26]
  wire  _GEN_1132 = unuse_way == 2'h1 ? valid_1_7 : _GEN_951; // @[d_cache.scala 162:34 31:26]
  wire  _GEN_1133 = unuse_way == 2'h1 ? valid_1_8 : _GEN_952; // @[d_cache.scala 162:34 31:26]
  wire  _GEN_1134 = unuse_way == 2'h1 ? valid_1_9 : _GEN_953; // @[d_cache.scala 162:34 31:26]
  wire  _GEN_1135 = unuse_way == 2'h1 ? valid_1_10 : _GEN_954; // @[d_cache.scala 162:34 31:26]
  wire  _GEN_1136 = unuse_way == 2'h1 ? valid_1_11 : _GEN_955; // @[d_cache.scala 162:34 31:26]
  wire  _GEN_1137 = unuse_way == 2'h1 ? valid_1_12 : _GEN_956; // @[d_cache.scala 162:34 31:26]
  wire  _GEN_1138 = unuse_way == 2'h1 ? valid_1_13 : _GEN_957; // @[d_cache.scala 162:34 31:26]
  wire  _GEN_1139 = unuse_way == 2'h1 ? valid_1_14 : _GEN_958; // @[d_cache.scala 162:34 31:26]
  wire  _GEN_1140 = unuse_way == 2'h1 ? valid_1_15 : _GEN_959; // @[d_cache.scala 162:34 31:26]
  wire [511:0] _GEN_1141 = unuse_way == 2'h1 ? write_back_data : _GEN_961; // @[d_cache.scala 162:34 37:34]
  wire [41:0] _GEN_1142 = unuse_way == 2'h1 ? {{10'd0}, write_back_addr} : _GEN_962; // @[d_cache.scala 162:34 38:34]
  wire  _GEN_1143 = unuse_way == 2'h1 ? dirty_0_0 : _GEN_995; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1144 = unuse_way == 2'h1 ? dirty_0_1 : _GEN_996; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1145 = unuse_way == 2'h1 ? dirty_0_2 : _GEN_997; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1146 = unuse_way == 2'h1 ? dirty_0_3 : _GEN_998; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1147 = unuse_way == 2'h1 ? dirty_0_4 : _GEN_999; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1148 = unuse_way == 2'h1 ? dirty_0_5 : _GEN_1000; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1149 = unuse_way == 2'h1 ? dirty_0_6 : _GEN_1001; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1150 = unuse_way == 2'h1 ? dirty_0_7 : _GEN_1002; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1151 = unuse_way == 2'h1 ? dirty_0_8 : _GEN_1003; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1152 = unuse_way == 2'h1 ? dirty_0_9 : _GEN_1004; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1153 = unuse_way == 2'h1 ? dirty_0_10 : _GEN_1005; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1154 = unuse_way == 2'h1 ? dirty_0_11 : _GEN_1006; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1155 = unuse_way == 2'h1 ? dirty_0_12 : _GEN_1007; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1156 = unuse_way == 2'h1 ? dirty_0_13 : _GEN_1008; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1157 = unuse_way == 2'h1 ? dirty_0_14 : _GEN_1009; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1158 = unuse_way == 2'h1 ? dirty_0_15 : _GEN_1010; // @[d_cache.scala 162:34 32:26]
  wire  _GEN_1159 = unuse_way == 2'h1 ? dirty_1_0 : _GEN_1027; // @[d_cache.scala 162:34 33:26]
  wire  _GEN_1160 = unuse_way == 2'h1 ? dirty_1_1 : _GEN_1028; // @[d_cache.scala 162:34 33:26]
  wire  _GEN_1161 = unuse_way == 2'h1 ? dirty_1_2 : _GEN_1029; // @[d_cache.scala 162:34 33:26]
  wire  _GEN_1162 = unuse_way == 2'h1 ? dirty_1_3 : _GEN_1030; // @[d_cache.scala 162:34 33:26]
  wire  _GEN_1163 = unuse_way == 2'h1 ? dirty_1_4 : _GEN_1031; // @[d_cache.scala 162:34 33:26]
  wire  _GEN_1164 = unuse_way == 2'h1 ? dirty_1_5 : _GEN_1032; // @[d_cache.scala 162:34 33:26]
  wire  _GEN_1165 = unuse_way == 2'h1 ? dirty_1_6 : _GEN_1033; // @[d_cache.scala 162:34 33:26]
  wire  _GEN_1166 = unuse_way == 2'h1 ? dirty_1_7 : _GEN_1034; // @[d_cache.scala 162:34 33:26]
  wire  _GEN_1167 = unuse_way == 2'h1 ? dirty_1_8 : _GEN_1035; // @[d_cache.scala 162:34 33:26]
  wire  _GEN_1168 = unuse_way == 2'h1 ? dirty_1_9 : _GEN_1036; // @[d_cache.scala 162:34 33:26]
  wire  _GEN_1169 = unuse_way == 2'h1 ? dirty_1_10 : _GEN_1037; // @[d_cache.scala 162:34 33:26]
  wire  _GEN_1170 = unuse_way == 2'h1 ? dirty_1_11 : _GEN_1038; // @[d_cache.scala 162:34 33:26]
  wire  _GEN_1171 = unuse_way == 2'h1 ? dirty_1_12 : _GEN_1039; // @[d_cache.scala 162:34 33:26]
  wire  _GEN_1172 = unuse_way == 2'h1 ? dirty_1_13 : _GEN_1040; // @[d_cache.scala 162:34 33:26]
  wire  _GEN_1173 = unuse_way == 2'h1 ? dirty_1_14 : _GEN_1041; // @[d_cache.scala 162:34 33:26]
  wire  _GEN_1174 = unuse_way == 2'h1 ? dirty_1_15 : _GEN_1042; // @[d_cache.scala 162:34 33:26]
  wire [511:0] _write_back_data_T = {{64'd0}, write_back_data[511:64]}; // @[d_cache.scala 215:52]
  wire [511:0] _GEN_1175 = io_from_axi_wready ? _write_back_data_T : write_back_data; // @[d_cache.scala 214:37 215:33 37:34]
  wire [3:0] _GEN_1176 = io_from_axi_bvalid ? 4'h7 : state; // @[d_cache.scala 217:37 218:23 84:24]
  wire [3:0] _GEN_1177 = io_from_axi_rvalid ? 4'h0 : state; // @[d_cache.scala 225:37 226:23 84:24]
  wire [3:0] _GEN_1178 = 4'h9 == state ? _GEN_290 : state; // @[d_cache.scala 89:18 84:24]
  wire [3:0] _GEN_1179 = 4'h8 == state ? _GEN_1177 : _GEN_1178; // @[d_cache.scala 89:18]
  wire [3:0] _GEN_1180 = 4'h7 == state ? 4'h1 : _GEN_1179; // @[d_cache.scala 89:18 222:19]
  wire [511:0] _GEN_1181 = 4'h6 == state ? _GEN_1175 : write_back_data; // @[d_cache.scala 89:18 37:34]
  wire [3:0] _GEN_1182 = 4'h6 == state ? _GEN_1176 : _GEN_1180; // @[d_cache.scala 89:18]
  wire [3:0] _GEN_1183 = 4'h5 == state ? _GEN_1043 : _GEN_1182; // @[d_cache.scala 89:18]
  wire [511:0] _GEN_1184 = 4'h5 == state ? _GEN_1044 : ram_0_0; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1185 = 4'h5 == state ? _GEN_1045 : ram_0_1; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1186 = 4'h5 == state ? _GEN_1046 : ram_0_2; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1187 = 4'h5 == state ? _GEN_1047 : ram_0_3; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1188 = 4'h5 == state ? _GEN_1048 : ram_0_4; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1189 = 4'h5 == state ? _GEN_1049 : ram_0_5; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1190 = 4'h5 == state ? _GEN_1050 : ram_0_6; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1191 = 4'h5 == state ? _GEN_1051 : ram_0_7; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1192 = 4'h5 == state ? _GEN_1052 : ram_0_8; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1193 = 4'h5 == state ? _GEN_1053 : ram_0_9; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1194 = 4'h5 == state ? _GEN_1054 : ram_0_10; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1195 = 4'h5 == state ? _GEN_1055 : ram_0_11; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1196 = 4'h5 == state ? _GEN_1056 : ram_0_12; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1197 = 4'h5 == state ? _GEN_1057 : ram_0_13; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1198 = 4'h5 == state ? _GEN_1058 : ram_0_14; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1199 = 4'h5 == state ? _GEN_1059 : ram_0_15; // @[d_cache.scala 89:18 19:24]
  wire [31:0] _GEN_1200 = 4'h5 == state ? _GEN_1060 : tag_0_0; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1201 = 4'h5 == state ? _GEN_1061 : tag_0_1; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1202 = 4'h5 == state ? _GEN_1062 : tag_0_2; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1203 = 4'h5 == state ? _GEN_1063 : tag_0_3; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1204 = 4'h5 == state ? _GEN_1064 : tag_0_4; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1205 = 4'h5 == state ? _GEN_1065 : tag_0_5; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1206 = 4'h5 == state ? _GEN_1066 : tag_0_6; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1207 = 4'h5 == state ? _GEN_1067 : tag_0_7; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1208 = 4'h5 == state ? _GEN_1068 : tag_0_8; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1209 = 4'h5 == state ? _GEN_1069 : tag_0_9; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1210 = 4'h5 == state ? _GEN_1070 : tag_0_10; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1211 = 4'h5 == state ? _GEN_1071 : tag_0_11; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1212 = 4'h5 == state ? _GEN_1072 : tag_0_12; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1213 = 4'h5 == state ? _GEN_1073 : tag_0_13; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1214 = 4'h5 == state ? _GEN_1074 : tag_0_14; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1215 = 4'h5 == state ? _GEN_1075 : tag_0_15; // @[d_cache.scala 89:18 28:24]
  wire  _GEN_1216 = 4'h5 == state ? _GEN_1076 : valid_0_0; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1217 = 4'h5 == state ? _GEN_1077 : valid_0_1; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1218 = 4'h5 == state ? _GEN_1078 : valid_0_2; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1219 = 4'h5 == state ? _GEN_1079 : valid_0_3; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1220 = 4'h5 == state ? _GEN_1080 : valid_0_4; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1221 = 4'h5 == state ? _GEN_1081 : valid_0_5; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1222 = 4'h5 == state ? _GEN_1082 : valid_0_6; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1223 = 4'h5 == state ? _GEN_1083 : valid_0_7; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1224 = 4'h5 == state ? _GEN_1084 : valid_0_8; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1225 = 4'h5 == state ? _GEN_1085 : valid_0_9; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1226 = 4'h5 == state ? _GEN_1086 : valid_0_10; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1227 = 4'h5 == state ? _GEN_1087 : valid_0_11; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1228 = 4'h5 == state ? _GEN_1088 : valid_0_12; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1229 = 4'h5 == state ? _GEN_1089 : valid_0_13; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1230 = 4'h5 == state ? _GEN_1090 : valid_0_14; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1231 = 4'h5 == state ? _GEN_1091 : valid_0_15; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1232 = 4'h5 == state ? _GEN_1092 : quene; // @[d_cache.scala 89:18 44:24]
  wire [511:0] _GEN_1233 = 4'h5 == state ? _GEN_1093 : ram_1_0; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1234 = 4'h5 == state ? _GEN_1094 : ram_1_1; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1235 = 4'h5 == state ? _GEN_1095 : ram_1_2; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1236 = 4'h5 == state ? _GEN_1096 : ram_1_3; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1237 = 4'h5 == state ? _GEN_1097 : ram_1_4; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1238 = 4'h5 == state ? _GEN_1098 : ram_1_5; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1239 = 4'h5 == state ? _GEN_1099 : ram_1_6; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1240 = 4'h5 == state ? _GEN_1100 : ram_1_7; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1241 = 4'h5 == state ? _GEN_1101 : ram_1_8; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1242 = 4'h5 == state ? _GEN_1102 : ram_1_9; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1243 = 4'h5 == state ? _GEN_1103 : ram_1_10; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1244 = 4'h5 == state ? _GEN_1104 : ram_1_11; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1245 = 4'h5 == state ? _GEN_1105 : ram_1_12; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1246 = 4'h5 == state ? _GEN_1106 : ram_1_13; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1247 = 4'h5 == state ? _GEN_1107 : ram_1_14; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1248 = 4'h5 == state ? _GEN_1108 : ram_1_15; // @[d_cache.scala 89:18 20:24]
  wire [31:0] _GEN_1249 = 4'h5 == state ? _GEN_1109 : tag_1_0; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1250 = 4'h5 == state ? _GEN_1110 : tag_1_1; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1251 = 4'h5 == state ? _GEN_1111 : tag_1_2; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1252 = 4'h5 == state ? _GEN_1112 : tag_1_3; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1253 = 4'h5 == state ? _GEN_1113 : tag_1_4; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1254 = 4'h5 == state ? _GEN_1114 : tag_1_5; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1255 = 4'h5 == state ? _GEN_1115 : tag_1_6; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1256 = 4'h5 == state ? _GEN_1116 : tag_1_7; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1257 = 4'h5 == state ? _GEN_1117 : tag_1_8; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1258 = 4'h5 == state ? _GEN_1118 : tag_1_9; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1259 = 4'h5 == state ? _GEN_1119 : tag_1_10; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1260 = 4'h5 == state ? _GEN_1120 : tag_1_11; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1261 = 4'h5 == state ? _GEN_1121 : tag_1_12; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1262 = 4'h5 == state ? _GEN_1122 : tag_1_13; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1263 = 4'h5 == state ? _GEN_1123 : tag_1_14; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1264 = 4'h5 == state ? _GEN_1124 : tag_1_15; // @[d_cache.scala 89:18 29:24]
  wire  _GEN_1265 = 4'h5 == state ? _GEN_1125 : valid_1_0; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1266 = 4'h5 == state ? _GEN_1126 : valid_1_1; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1267 = 4'h5 == state ? _GEN_1127 : valid_1_2; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1268 = 4'h5 == state ? _GEN_1128 : valid_1_3; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1269 = 4'h5 == state ? _GEN_1129 : valid_1_4; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1270 = 4'h5 == state ? _GEN_1130 : valid_1_5; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1271 = 4'h5 == state ? _GEN_1131 : valid_1_6; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1272 = 4'h5 == state ? _GEN_1132 : valid_1_7; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1273 = 4'h5 == state ? _GEN_1133 : valid_1_8; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1274 = 4'h5 == state ? _GEN_1134 : valid_1_9; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1275 = 4'h5 == state ? _GEN_1135 : valid_1_10; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1276 = 4'h5 == state ? _GEN_1136 : valid_1_11; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1277 = 4'h5 == state ? _GEN_1137 : valid_1_12; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1278 = 4'h5 == state ? _GEN_1138 : valid_1_13; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1279 = 4'h5 == state ? _GEN_1139 : valid_1_14; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1280 = 4'h5 == state ? _GEN_1140 : valid_1_15; // @[d_cache.scala 89:18 31:26]
  wire [511:0] _GEN_1281 = 4'h5 == state ? _GEN_1141 : _GEN_1181; // @[d_cache.scala 89:18]
  wire [41:0] _GEN_1282 = 4'h5 == state ? _GEN_1142 : {{10'd0}, write_back_addr}; // @[d_cache.scala 89:18 38:34]
  wire  _GEN_1283 = 4'h5 == state ? _GEN_1143 : dirty_0_0; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1284 = 4'h5 == state ? _GEN_1144 : dirty_0_1; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1285 = 4'h5 == state ? _GEN_1145 : dirty_0_2; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1286 = 4'h5 == state ? _GEN_1146 : dirty_0_3; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1287 = 4'h5 == state ? _GEN_1147 : dirty_0_4; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1288 = 4'h5 == state ? _GEN_1148 : dirty_0_5; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1289 = 4'h5 == state ? _GEN_1149 : dirty_0_6; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1290 = 4'h5 == state ? _GEN_1150 : dirty_0_7; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1291 = 4'h5 == state ? _GEN_1151 : dirty_0_8; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1292 = 4'h5 == state ? _GEN_1152 : dirty_0_9; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1293 = 4'h5 == state ? _GEN_1153 : dirty_0_10; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1294 = 4'h5 == state ? _GEN_1154 : dirty_0_11; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1295 = 4'h5 == state ? _GEN_1155 : dirty_0_12; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1296 = 4'h5 == state ? _GEN_1156 : dirty_0_13; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1297 = 4'h5 == state ? _GEN_1157 : dirty_0_14; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1298 = 4'h5 == state ? _GEN_1158 : dirty_0_15; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1299 = 4'h5 == state ? _GEN_1159 : dirty_1_0; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1300 = 4'h5 == state ? _GEN_1160 : dirty_1_1; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1301 = 4'h5 == state ? _GEN_1161 : dirty_1_2; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1302 = 4'h5 == state ? _GEN_1162 : dirty_1_3; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1303 = 4'h5 == state ? _GEN_1163 : dirty_1_4; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1304 = 4'h5 == state ? _GEN_1164 : dirty_1_5; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1305 = 4'h5 == state ? _GEN_1165 : dirty_1_6; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1306 = 4'h5 == state ? _GEN_1166 : dirty_1_7; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1307 = 4'h5 == state ? _GEN_1167 : dirty_1_8; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1308 = 4'h5 == state ? _GEN_1168 : dirty_1_9; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1309 = 4'h5 == state ? _GEN_1169 : dirty_1_10; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1310 = 4'h5 == state ? _GEN_1170 : dirty_1_11; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1311 = 4'h5 == state ? _GEN_1171 : dirty_1_12; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1312 = 4'h5 == state ? _GEN_1172 : dirty_1_13; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1313 = 4'h5 == state ? _GEN_1173 : dirty_1_14; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1314 = 4'h5 == state ? _GEN_1174 : dirty_1_15; // @[d_cache.scala 89:18 33:26]
  wire [3:0] _GEN_1315 = 4'h4 == state ? _GEN_290 : _GEN_1183; // @[d_cache.scala 89:18]
  wire [511:0] _GEN_1316 = 4'h4 == state ? ram_0_0 : _GEN_1184; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1317 = 4'h4 == state ? ram_0_1 : _GEN_1185; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1318 = 4'h4 == state ? ram_0_2 : _GEN_1186; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1319 = 4'h4 == state ? ram_0_3 : _GEN_1187; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1320 = 4'h4 == state ? ram_0_4 : _GEN_1188; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1321 = 4'h4 == state ? ram_0_5 : _GEN_1189; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1322 = 4'h4 == state ? ram_0_6 : _GEN_1190; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1323 = 4'h4 == state ? ram_0_7 : _GEN_1191; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1324 = 4'h4 == state ? ram_0_8 : _GEN_1192; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1325 = 4'h4 == state ? ram_0_9 : _GEN_1193; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1326 = 4'h4 == state ? ram_0_10 : _GEN_1194; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1327 = 4'h4 == state ? ram_0_11 : _GEN_1195; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1328 = 4'h4 == state ? ram_0_12 : _GEN_1196; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1329 = 4'h4 == state ? ram_0_13 : _GEN_1197; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1330 = 4'h4 == state ? ram_0_14 : _GEN_1198; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1331 = 4'h4 == state ? ram_0_15 : _GEN_1199; // @[d_cache.scala 89:18 19:24]
  wire [31:0] _GEN_1332 = 4'h4 == state ? tag_0_0 : _GEN_1200; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1333 = 4'h4 == state ? tag_0_1 : _GEN_1201; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1334 = 4'h4 == state ? tag_0_2 : _GEN_1202; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1335 = 4'h4 == state ? tag_0_3 : _GEN_1203; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1336 = 4'h4 == state ? tag_0_4 : _GEN_1204; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1337 = 4'h4 == state ? tag_0_5 : _GEN_1205; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1338 = 4'h4 == state ? tag_0_6 : _GEN_1206; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1339 = 4'h4 == state ? tag_0_7 : _GEN_1207; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1340 = 4'h4 == state ? tag_0_8 : _GEN_1208; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1341 = 4'h4 == state ? tag_0_9 : _GEN_1209; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1342 = 4'h4 == state ? tag_0_10 : _GEN_1210; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1343 = 4'h4 == state ? tag_0_11 : _GEN_1211; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1344 = 4'h4 == state ? tag_0_12 : _GEN_1212; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1345 = 4'h4 == state ? tag_0_13 : _GEN_1213; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1346 = 4'h4 == state ? tag_0_14 : _GEN_1214; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1347 = 4'h4 == state ? tag_0_15 : _GEN_1215; // @[d_cache.scala 89:18 28:24]
  wire  _GEN_1348 = 4'h4 == state ? valid_0_0 : _GEN_1216; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1349 = 4'h4 == state ? valid_0_1 : _GEN_1217; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1350 = 4'h4 == state ? valid_0_2 : _GEN_1218; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1351 = 4'h4 == state ? valid_0_3 : _GEN_1219; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1352 = 4'h4 == state ? valid_0_4 : _GEN_1220; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1353 = 4'h4 == state ? valid_0_5 : _GEN_1221; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1354 = 4'h4 == state ? valid_0_6 : _GEN_1222; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1355 = 4'h4 == state ? valid_0_7 : _GEN_1223; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1356 = 4'h4 == state ? valid_0_8 : _GEN_1224; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1357 = 4'h4 == state ? valid_0_9 : _GEN_1225; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1358 = 4'h4 == state ? valid_0_10 : _GEN_1226; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1359 = 4'h4 == state ? valid_0_11 : _GEN_1227; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1360 = 4'h4 == state ? valid_0_12 : _GEN_1228; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1361 = 4'h4 == state ? valid_0_13 : _GEN_1229; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1362 = 4'h4 == state ? valid_0_14 : _GEN_1230; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1363 = 4'h4 == state ? valid_0_15 : _GEN_1231; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1364 = 4'h4 == state ? quene : _GEN_1232; // @[d_cache.scala 89:18 44:24]
  wire [511:0] _GEN_1365 = 4'h4 == state ? ram_1_0 : _GEN_1233; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1366 = 4'h4 == state ? ram_1_1 : _GEN_1234; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1367 = 4'h4 == state ? ram_1_2 : _GEN_1235; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1368 = 4'h4 == state ? ram_1_3 : _GEN_1236; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1369 = 4'h4 == state ? ram_1_4 : _GEN_1237; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1370 = 4'h4 == state ? ram_1_5 : _GEN_1238; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1371 = 4'h4 == state ? ram_1_6 : _GEN_1239; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1372 = 4'h4 == state ? ram_1_7 : _GEN_1240; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1373 = 4'h4 == state ? ram_1_8 : _GEN_1241; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1374 = 4'h4 == state ? ram_1_9 : _GEN_1242; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1375 = 4'h4 == state ? ram_1_10 : _GEN_1243; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1376 = 4'h4 == state ? ram_1_11 : _GEN_1244; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1377 = 4'h4 == state ? ram_1_12 : _GEN_1245; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1378 = 4'h4 == state ? ram_1_13 : _GEN_1246; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1379 = 4'h4 == state ? ram_1_14 : _GEN_1247; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1380 = 4'h4 == state ? ram_1_15 : _GEN_1248; // @[d_cache.scala 89:18 20:24]
  wire [31:0] _GEN_1381 = 4'h4 == state ? tag_1_0 : _GEN_1249; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1382 = 4'h4 == state ? tag_1_1 : _GEN_1250; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1383 = 4'h4 == state ? tag_1_2 : _GEN_1251; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1384 = 4'h4 == state ? tag_1_3 : _GEN_1252; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1385 = 4'h4 == state ? tag_1_4 : _GEN_1253; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1386 = 4'h4 == state ? tag_1_5 : _GEN_1254; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1387 = 4'h4 == state ? tag_1_6 : _GEN_1255; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1388 = 4'h4 == state ? tag_1_7 : _GEN_1256; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1389 = 4'h4 == state ? tag_1_8 : _GEN_1257; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1390 = 4'h4 == state ? tag_1_9 : _GEN_1258; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1391 = 4'h4 == state ? tag_1_10 : _GEN_1259; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1392 = 4'h4 == state ? tag_1_11 : _GEN_1260; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1393 = 4'h4 == state ? tag_1_12 : _GEN_1261; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1394 = 4'h4 == state ? tag_1_13 : _GEN_1262; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1395 = 4'h4 == state ? tag_1_14 : _GEN_1263; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1396 = 4'h4 == state ? tag_1_15 : _GEN_1264; // @[d_cache.scala 89:18 29:24]
  wire  _GEN_1397 = 4'h4 == state ? valid_1_0 : _GEN_1265; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1398 = 4'h4 == state ? valid_1_1 : _GEN_1266; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1399 = 4'h4 == state ? valid_1_2 : _GEN_1267; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1400 = 4'h4 == state ? valid_1_3 : _GEN_1268; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1401 = 4'h4 == state ? valid_1_4 : _GEN_1269; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1402 = 4'h4 == state ? valid_1_5 : _GEN_1270; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1403 = 4'h4 == state ? valid_1_6 : _GEN_1271; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1404 = 4'h4 == state ? valid_1_7 : _GEN_1272; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1405 = 4'h4 == state ? valid_1_8 : _GEN_1273; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1406 = 4'h4 == state ? valid_1_9 : _GEN_1274; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1407 = 4'h4 == state ? valid_1_10 : _GEN_1275; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1408 = 4'h4 == state ? valid_1_11 : _GEN_1276; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1409 = 4'h4 == state ? valid_1_12 : _GEN_1277; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1410 = 4'h4 == state ? valid_1_13 : _GEN_1278; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1411 = 4'h4 == state ? valid_1_14 : _GEN_1279; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1412 = 4'h4 == state ? valid_1_15 : _GEN_1280; // @[d_cache.scala 89:18 31:26]
  wire [511:0] _GEN_1413 = 4'h4 == state ? write_back_data : _GEN_1281; // @[d_cache.scala 89:18 37:34]
  wire [41:0] _GEN_1414 = 4'h4 == state ? {{10'd0}, write_back_addr} : _GEN_1282; // @[d_cache.scala 89:18 38:34]
  wire  _GEN_1415 = 4'h4 == state ? dirty_0_0 : _GEN_1283; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1416 = 4'h4 == state ? dirty_0_1 : _GEN_1284; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1417 = 4'h4 == state ? dirty_0_2 : _GEN_1285; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1418 = 4'h4 == state ? dirty_0_3 : _GEN_1286; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1419 = 4'h4 == state ? dirty_0_4 : _GEN_1287; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1420 = 4'h4 == state ? dirty_0_5 : _GEN_1288; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1421 = 4'h4 == state ? dirty_0_6 : _GEN_1289; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1422 = 4'h4 == state ? dirty_0_7 : _GEN_1290; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1423 = 4'h4 == state ? dirty_0_8 : _GEN_1291; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1424 = 4'h4 == state ? dirty_0_9 : _GEN_1292; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1425 = 4'h4 == state ? dirty_0_10 : _GEN_1293; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1426 = 4'h4 == state ? dirty_0_11 : _GEN_1294; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1427 = 4'h4 == state ? dirty_0_12 : _GEN_1295; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1428 = 4'h4 == state ? dirty_0_13 : _GEN_1296; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1429 = 4'h4 == state ? dirty_0_14 : _GEN_1297; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1430 = 4'h4 == state ? dirty_0_15 : _GEN_1298; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1431 = 4'h4 == state ? dirty_1_0 : _GEN_1299; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1432 = 4'h4 == state ? dirty_1_1 : _GEN_1300; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1433 = 4'h4 == state ? dirty_1_2 : _GEN_1301; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1434 = 4'h4 == state ? dirty_1_3 : _GEN_1302; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1435 = 4'h4 == state ? dirty_1_4 : _GEN_1303; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1436 = 4'h4 == state ? dirty_1_5 : _GEN_1304; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1437 = 4'h4 == state ? dirty_1_6 : _GEN_1305; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1438 = 4'h4 == state ? dirty_1_7 : _GEN_1306; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1439 = 4'h4 == state ? dirty_1_8 : _GEN_1307; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1440 = 4'h4 == state ? dirty_1_9 : _GEN_1308; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1441 = 4'h4 == state ? dirty_1_10 : _GEN_1309; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1442 = 4'h4 == state ? dirty_1_11 : _GEN_1310; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1443 = 4'h4 == state ? dirty_1_12 : _GEN_1311; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1444 = 4'h4 == state ? dirty_1_13 : _GEN_1312; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1445 = 4'h4 == state ? dirty_1_14 : _GEN_1313; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1446 = 4'h4 == state ? dirty_1_15 : _GEN_1314; // @[d_cache.scala 89:18 33:26]
  wire [63:0] _GEN_1447 = 4'h3 == state ? _GEN_280 : receive_data_0; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1448 = 4'h3 == state ? _GEN_281 : receive_data_1; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1449 = 4'h3 == state ? _GEN_282 : receive_data_2; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1450 = 4'h3 == state ? _GEN_283 : receive_data_3; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1451 = 4'h3 == state ? _GEN_284 : receive_data_4; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1452 = 4'h3 == state ? _GEN_285 : receive_data_5; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1453 = 4'h3 == state ? _GEN_286 : receive_data_6; // @[d_cache.scala 89:18 42:31]
  wire [63:0] _GEN_1454 = 4'h3 == state ? _GEN_287 : receive_data_7; // @[d_cache.scala 89:18 42:31]
  wire [2:0] _GEN_1455 = 4'h3 == state ? _GEN_288 : receive_num; // @[d_cache.scala 89:18 43:30]
  wire [3:0] _GEN_1456 = 4'h3 == state ? _GEN_289 : _GEN_1315; // @[d_cache.scala 89:18]
  wire [511:0] _GEN_1457 = 4'h3 == state ? ram_0_0 : _GEN_1316; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1458 = 4'h3 == state ? ram_0_1 : _GEN_1317; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1459 = 4'h3 == state ? ram_0_2 : _GEN_1318; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1460 = 4'h3 == state ? ram_0_3 : _GEN_1319; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1461 = 4'h3 == state ? ram_0_4 : _GEN_1320; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1462 = 4'h3 == state ? ram_0_5 : _GEN_1321; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1463 = 4'h3 == state ? ram_0_6 : _GEN_1322; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1464 = 4'h3 == state ? ram_0_7 : _GEN_1323; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1465 = 4'h3 == state ? ram_0_8 : _GEN_1324; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1466 = 4'h3 == state ? ram_0_9 : _GEN_1325; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1467 = 4'h3 == state ? ram_0_10 : _GEN_1326; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1468 = 4'h3 == state ? ram_0_11 : _GEN_1327; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1469 = 4'h3 == state ? ram_0_12 : _GEN_1328; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1470 = 4'h3 == state ? ram_0_13 : _GEN_1329; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1471 = 4'h3 == state ? ram_0_14 : _GEN_1330; // @[d_cache.scala 89:18 19:24]
  wire [511:0] _GEN_1472 = 4'h3 == state ? ram_0_15 : _GEN_1331; // @[d_cache.scala 89:18 19:24]
  wire [31:0] _GEN_1473 = 4'h3 == state ? tag_0_0 : _GEN_1332; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1474 = 4'h3 == state ? tag_0_1 : _GEN_1333; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1475 = 4'h3 == state ? tag_0_2 : _GEN_1334; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1476 = 4'h3 == state ? tag_0_3 : _GEN_1335; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1477 = 4'h3 == state ? tag_0_4 : _GEN_1336; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1478 = 4'h3 == state ? tag_0_5 : _GEN_1337; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1479 = 4'h3 == state ? tag_0_6 : _GEN_1338; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1480 = 4'h3 == state ? tag_0_7 : _GEN_1339; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1481 = 4'h3 == state ? tag_0_8 : _GEN_1340; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1482 = 4'h3 == state ? tag_0_9 : _GEN_1341; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1483 = 4'h3 == state ? tag_0_10 : _GEN_1342; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1484 = 4'h3 == state ? tag_0_11 : _GEN_1343; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1485 = 4'h3 == state ? tag_0_12 : _GEN_1344; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1486 = 4'h3 == state ? tag_0_13 : _GEN_1345; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1487 = 4'h3 == state ? tag_0_14 : _GEN_1346; // @[d_cache.scala 89:18 28:24]
  wire [31:0] _GEN_1488 = 4'h3 == state ? tag_0_15 : _GEN_1347; // @[d_cache.scala 89:18 28:24]
  wire  _GEN_1489 = 4'h3 == state ? valid_0_0 : _GEN_1348; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1490 = 4'h3 == state ? valid_0_1 : _GEN_1349; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1491 = 4'h3 == state ? valid_0_2 : _GEN_1350; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1492 = 4'h3 == state ? valid_0_3 : _GEN_1351; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1493 = 4'h3 == state ? valid_0_4 : _GEN_1352; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1494 = 4'h3 == state ? valid_0_5 : _GEN_1353; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1495 = 4'h3 == state ? valid_0_6 : _GEN_1354; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1496 = 4'h3 == state ? valid_0_7 : _GEN_1355; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1497 = 4'h3 == state ? valid_0_8 : _GEN_1356; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1498 = 4'h3 == state ? valid_0_9 : _GEN_1357; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1499 = 4'h3 == state ? valid_0_10 : _GEN_1358; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1500 = 4'h3 == state ? valid_0_11 : _GEN_1359; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1501 = 4'h3 == state ? valid_0_12 : _GEN_1360; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1502 = 4'h3 == state ? valid_0_13 : _GEN_1361; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1503 = 4'h3 == state ? valid_0_14 : _GEN_1362; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1504 = 4'h3 == state ? valid_0_15 : _GEN_1363; // @[d_cache.scala 89:18 30:26]
  wire  _GEN_1505 = 4'h3 == state ? quene : _GEN_1364; // @[d_cache.scala 89:18 44:24]
  wire [511:0] _GEN_1506 = 4'h3 == state ? ram_1_0 : _GEN_1365; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1507 = 4'h3 == state ? ram_1_1 : _GEN_1366; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1508 = 4'h3 == state ? ram_1_2 : _GEN_1367; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1509 = 4'h3 == state ? ram_1_3 : _GEN_1368; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1510 = 4'h3 == state ? ram_1_4 : _GEN_1369; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1511 = 4'h3 == state ? ram_1_5 : _GEN_1370; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1512 = 4'h3 == state ? ram_1_6 : _GEN_1371; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1513 = 4'h3 == state ? ram_1_7 : _GEN_1372; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1514 = 4'h3 == state ? ram_1_8 : _GEN_1373; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1515 = 4'h3 == state ? ram_1_9 : _GEN_1374; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1516 = 4'h3 == state ? ram_1_10 : _GEN_1375; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1517 = 4'h3 == state ? ram_1_11 : _GEN_1376; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1518 = 4'h3 == state ? ram_1_12 : _GEN_1377; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1519 = 4'h3 == state ? ram_1_13 : _GEN_1378; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1520 = 4'h3 == state ? ram_1_14 : _GEN_1379; // @[d_cache.scala 89:18 20:24]
  wire [511:0] _GEN_1521 = 4'h3 == state ? ram_1_15 : _GEN_1380; // @[d_cache.scala 89:18 20:24]
  wire [31:0] _GEN_1522 = 4'h3 == state ? tag_1_0 : _GEN_1381; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1523 = 4'h3 == state ? tag_1_1 : _GEN_1382; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1524 = 4'h3 == state ? tag_1_2 : _GEN_1383; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1525 = 4'h3 == state ? tag_1_3 : _GEN_1384; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1526 = 4'h3 == state ? tag_1_4 : _GEN_1385; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1527 = 4'h3 == state ? tag_1_5 : _GEN_1386; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1528 = 4'h3 == state ? tag_1_6 : _GEN_1387; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1529 = 4'h3 == state ? tag_1_7 : _GEN_1388; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1530 = 4'h3 == state ? tag_1_8 : _GEN_1389; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1531 = 4'h3 == state ? tag_1_9 : _GEN_1390; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1532 = 4'h3 == state ? tag_1_10 : _GEN_1391; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1533 = 4'h3 == state ? tag_1_11 : _GEN_1392; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1534 = 4'h3 == state ? tag_1_12 : _GEN_1393; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1535 = 4'h3 == state ? tag_1_13 : _GEN_1394; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1536 = 4'h3 == state ? tag_1_14 : _GEN_1395; // @[d_cache.scala 89:18 29:24]
  wire [31:0] _GEN_1537 = 4'h3 == state ? tag_1_15 : _GEN_1396; // @[d_cache.scala 89:18 29:24]
  wire  _GEN_1538 = 4'h3 == state ? valid_1_0 : _GEN_1397; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1539 = 4'h3 == state ? valid_1_1 : _GEN_1398; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1540 = 4'h3 == state ? valid_1_2 : _GEN_1399; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1541 = 4'h3 == state ? valid_1_3 : _GEN_1400; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1542 = 4'h3 == state ? valid_1_4 : _GEN_1401; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1543 = 4'h3 == state ? valid_1_5 : _GEN_1402; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1544 = 4'h3 == state ? valid_1_6 : _GEN_1403; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1545 = 4'h3 == state ? valid_1_7 : _GEN_1404; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1546 = 4'h3 == state ? valid_1_8 : _GEN_1405; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1547 = 4'h3 == state ? valid_1_9 : _GEN_1406; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1548 = 4'h3 == state ? valid_1_10 : _GEN_1407; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1549 = 4'h3 == state ? valid_1_11 : _GEN_1408; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1550 = 4'h3 == state ? valid_1_12 : _GEN_1409; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1551 = 4'h3 == state ? valid_1_13 : _GEN_1410; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1552 = 4'h3 == state ? valid_1_14 : _GEN_1411; // @[d_cache.scala 89:18 31:26]
  wire  _GEN_1553 = 4'h3 == state ? valid_1_15 : _GEN_1412; // @[d_cache.scala 89:18 31:26]
  wire [511:0] _GEN_1554 = 4'h3 == state ? write_back_data : _GEN_1413; // @[d_cache.scala 89:18 37:34]
  wire [41:0] _GEN_1555 = 4'h3 == state ? {{10'd0}, write_back_addr} : _GEN_1414; // @[d_cache.scala 89:18 38:34]
  wire  _GEN_1556 = 4'h3 == state ? dirty_0_0 : _GEN_1415; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1557 = 4'h3 == state ? dirty_0_1 : _GEN_1416; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1558 = 4'h3 == state ? dirty_0_2 : _GEN_1417; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1559 = 4'h3 == state ? dirty_0_3 : _GEN_1418; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1560 = 4'h3 == state ? dirty_0_4 : _GEN_1419; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1561 = 4'h3 == state ? dirty_0_5 : _GEN_1420; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1562 = 4'h3 == state ? dirty_0_6 : _GEN_1421; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1563 = 4'h3 == state ? dirty_0_7 : _GEN_1422; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1564 = 4'h3 == state ? dirty_0_8 : _GEN_1423; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1565 = 4'h3 == state ? dirty_0_9 : _GEN_1424; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1566 = 4'h3 == state ? dirty_0_10 : _GEN_1425; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1567 = 4'h3 == state ? dirty_0_11 : _GEN_1426; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1568 = 4'h3 == state ? dirty_0_12 : _GEN_1427; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1569 = 4'h3 == state ? dirty_0_13 : _GEN_1428; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1570 = 4'h3 == state ? dirty_0_14 : _GEN_1429; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1571 = 4'h3 == state ? dirty_0_15 : _GEN_1430; // @[d_cache.scala 89:18 32:26]
  wire  _GEN_1572 = 4'h3 == state ? dirty_1_0 : _GEN_1431; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1573 = 4'h3 == state ? dirty_1_1 : _GEN_1432; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1574 = 4'h3 == state ? dirty_1_2 : _GEN_1433; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1575 = 4'h3 == state ? dirty_1_3 : _GEN_1434; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1576 = 4'h3 == state ? dirty_1_4 : _GEN_1435; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1577 = 4'h3 == state ? dirty_1_5 : _GEN_1436; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1578 = 4'h3 == state ? dirty_1_6 : _GEN_1437; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1579 = 4'h3 == state ? dirty_1_7 : _GEN_1438; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1580 = 4'h3 == state ? dirty_1_8 : _GEN_1439; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1581 = 4'h3 == state ? dirty_1_9 : _GEN_1440; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1582 = 4'h3 == state ? dirty_1_10 : _GEN_1441; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1583 = 4'h3 == state ? dirty_1_11 : _GEN_1442; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1584 = 4'h3 == state ? dirty_1_12 : _GEN_1443; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1585 = 4'h3 == state ? dirty_1_13 : _GEN_1444; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1586 = 4'h3 == state ? dirty_1_14 : _GEN_1445; // @[d_cache.scala 89:18 33:26]
  wire  _GEN_1587 = 4'h3 == state ? dirty_1_15 : _GEN_1446; // @[d_cache.scala 89:18 33:26]
  wire [41:0] _GEN_1728 = 4'h2 == state ? {{10'd0}, write_back_addr} : _GEN_1555; // @[d_cache.scala 89:18 38:34]
  wire [41:0] _GEN_1869 = 4'h1 == state ? {{10'd0}, write_back_addr} : _GEN_1728; // @[d_cache.scala 89:18 38:34]
  wire [41:0] _GEN_2010 = 4'h0 == state ? {{10'd0}, write_back_addr} : _GEN_1869; // @[d_cache.scala 89:18 38:34]
  wire [511:0] _io_to_lsu_rdata_T = _GEN_92 >> shift_bit; // @[d_cache.scala 269:49]
  wire [511:0] _io_to_lsu_rdata_T_1 = _GEN_140 >> shift_bit; // @[d_cache.scala 277:49]
  wire [511:0] _GEN_2011 = way1_hit ? _io_to_lsu_rdata_T_1 : 512'h0; // @[d_cache.scala 276:33 277:33 285:33]
  wire [511:0] _GEN_2015 = way0_hit ? _io_to_lsu_rdata_T : _GEN_2011; // @[d_cache.scala 268:23 269:33]
  wire  _GEN_2017 = way0_hit | way1_hit; // @[d_cache.scala 268:23 271:34]
  wire [63:0] _GEN_2234 = {{32'd0}, io_from_lsu_araddr}; // @[d_cache.scala 344:49]
  wire [63:0] _io_to_axi_araddr_T = _GEN_2234 & 64'hffffffffffffffc0; // @[d_cache.scala 344:49]
  wire  _T_32 = state == 4'h8; // @[d_cache.scala 424:21]
  wire [63:0] _GEN_2022 = state == 4'h8 ? io_from_axi_rdata : 64'h0; // @[d_cache.scala 424:30 425:19 428:25]
  wire  _GEN_2024 = state == 4'h8 & io_from_axi_rvalid; // @[d_cache.scala 424:30 425:19 430:26]
  wire  _GEN_2026 = state == 4'h8 & io_from_axi_wready; // @[d_cache.scala 424:30 425:19 432:26]
  wire  _GEN_2032 = state == 4'h8 & io_from_lsu_arvalid; // @[d_cache.scala 424:30 426:19 435:27]
  wire [31:0] _GEN_2034 = state == 4'h8 ? io_from_lsu_awaddr : 32'h0; // @[d_cache.scala 424:30 426:19 441:26]
  wire  _GEN_2038 = state == 4'h8 & io_from_lsu_awvalid; // @[d_cache.scala 424:30 426:19 442:27]
  wire [63:0] _GEN_2039 = state == 4'h8 ? io_from_lsu_wdata : 64'h0; // @[d_cache.scala 424:30 426:19 446:25]
  wire [7:0] _GEN_2040 = state == 4'h8 ? io_from_lsu_wstrb : 8'h0; // @[d_cache.scala 424:30 426:19 447:25]
  wire  _GEN_2042 = state == 4'h8 & io_from_lsu_wvalid; // @[d_cache.scala 424:30 426:19 449:26]
  wire [63:0] _GEN_2044 = state == 4'h6 ? 64'h0 : _GEN_2022; // @[d_cache.scala 400:35 401:25]
  wire  _GEN_2046 = state == 4'h6 ? 1'h0 : _GEN_2024; // @[d_cache.scala 400:35 403:26]
  wire  _GEN_2048 = state == 4'h6 ? 1'h0 : _GEN_2026; // @[d_cache.scala 400:35 405:26]
  wire  _GEN_2051 = state == 4'h6 ? 1'h0 : _GEN_2032; // @[d_cache.scala 400:35 408:27]
  wire [31:0] _GEN_2052 = state == 4'h6 ? 32'h0 : io_from_lsu_araddr; // @[d_cache.scala 400:35 409:26]
  wire [7:0] _GEN_2053 = state == 4'h6 ? 8'h7 : 8'h0; // @[d_cache.scala 400:35 410:25]
  wire  _GEN_2056 = state == 4'h6 ? 1'h0 : 1'h1; // @[d_cache.scala 400:35 413:26]
  wire [31:0] _GEN_2057 = state == 4'h6 ? write_back_addr : _GEN_2034; // @[d_cache.scala 400:35 414:26]
  wire  _GEN_2058 = state == 4'h6 | _GEN_2038; // @[d_cache.scala 400:35 415:27]
  wire [63:0] _GEN_2062 = state == 4'h6 ? write_back_data[63:0] : _GEN_2039; // @[d_cache.scala 400:35 419:25]
  wire [7:0] _GEN_2063 = state == 4'h6 ? 8'hff : _GEN_2040; // @[d_cache.scala 400:35 420:25]
  wire  _GEN_2065 = state == 4'h6 | _GEN_2042; // @[d_cache.scala 400:35 422:26]
  wire  _GEN_2066 = state == 4'h6 | _T_32; // @[d_cache.scala 400:35 423:26]
  wire [63:0] _GEN_2067 = state == 4'h4 | state == 4'h9 ? 64'h0 : _GEN_2044; // @[d_cache.scala 359:50 360:25]
  wire  _GEN_2069 = state == 4'h4 | state == 4'h9 ? 1'h0 : _GEN_2046; // @[d_cache.scala 359:50 362:26]
  wire  _GEN_2071 = state == 4'h4 | state == 4'h9 ? io_from_axi_wready : _GEN_2048; // @[d_cache.scala 359:50 364:26]
  wire  _GEN_2074 = state == 4'h4 | state == 4'h9 ? 1'h0 : _GEN_2051; // @[d_cache.scala 359:50 367:27]
  wire [31:0] _GEN_2075 = state == 4'h4 | state == 4'h9 ? 32'h0 : _GEN_2052; // @[d_cache.scala 359:50 368:26]
  wire [7:0] _GEN_2076 = state == 4'h4 | state == 4'h9 ? 8'h0 : _GEN_2053; // @[d_cache.scala 359:50 369:25]
  wire  _GEN_2079 = state == 4'h4 | state == 4'h9 | _GEN_2056; // @[d_cache.scala 359:50 372:26]
  wire [31:0] _GEN_2080 = state == 4'h4 | state == 4'h9 ? io_from_lsu_awaddr : _GEN_2057; // @[d_cache.scala 359:50 373:26]
  wire  _GEN_2081 = state == 4'h4 | state == 4'h9 ? io_from_lsu_awvalid : _GEN_2058; // @[d_cache.scala 359:50 374:27]
  wire [63:0] _GEN_2085 = state == 4'h4 | state == 4'h9 ? io_from_lsu_wdata : _GEN_2062; // @[d_cache.scala 359:50 378:25]
  wire [7:0] _GEN_2086 = state == 4'h4 | state == 4'h9 ? io_from_lsu_wstrb : _GEN_2063; // @[d_cache.scala 359:50 379:25]
  wire  _GEN_2088 = state == 4'h4 | state == 4'h9 ? io_from_lsu_wvalid : _GEN_2065; // @[d_cache.scala 359:50 381:26]
  wire  _GEN_2089 = state == 4'h4 | state == 4'h9 | _GEN_2066; // @[d_cache.scala 359:50 382:26]
  wire [63:0] _GEN_2090 = state == 4'h3 ? 64'h0 : _GEN_2067; // @[d_cache.scala 335:31 336:25]
  wire  _GEN_2092 = state == 4'h3 ? 1'h0 : _GEN_2069; // @[d_cache.scala 335:31 338:26]
  wire  _GEN_2094 = state == 4'h3 ? 1'h0 : _GEN_2071; // @[d_cache.scala 335:31 340:26]
  wire  _GEN_2097 = state == 4'h3 | _GEN_2074; // @[d_cache.scala 335:31 343:27]
  wire [63:0] _GEN_2098 = state == 4'h3 ? _io_to_axi_araddr_T : {{32'd0}, _GEN_2075}; // @[d_cache.scala 335:31 344:26]
  wire [7:0] _GEN_2099 = state == 4'h3 ? 8'h7 : _GEN_2076; // @[d_cache.scala 335:31 345:25]
  wire  _GEN_2102 = state == 4'h3 | _GEN_2079; // @[d_cache.scala 335:31 348:26]
  wire [31:0] _GEN_2103 = state == 4'h3 ? 32'h0 : _GEN_2080; // @[d_cache.scala 335:31 349:26]
  wire  _GEN_2104 = state == 4'h3 ? 1'h0 : _GEN_2081; // @[d_cache.scala 335:31 350:27]
  wire [7:0] _GEN_2105 = state == 4'h3 ? 8'h0 : _GEN_2076; // @[d_cache.scala 335:31 351:25]
  wire [63:0] _GEN_2108 = state == 4'h3 ? 64'h0 : _GEN_2085; // @[d_cache.scala 335:31 354:25]
  wire [7:0] _GEN_2109 = state == 4'h3 ? 8'h0 : _GEN_2086; // @[d_cache.scala 335:31 355:25]
  wire  _GEN_2111 = state == 4'h3 ? 1'h0 : _GEN_2088; // @[d_cache.scala 335:31 357:26]
  wire  _GEN_2112 = state == 4'h3 ? 1'h0 : _GEN_2089; // @[d_cache.scala 335:31 358:26]
  wire  _GEN_2113 = state == 4'h2 ? 1'h0 : _GEN_2097; // @[d_cache.scala 293:33 294:27]
  wire [63:0] _GEN_2114 = state == 4'h2 ? {{32'd0}, io_from_lsu_araddr} : _GEN_2098; // @[d_cache.scala 293:33 295:26]
  wire [7:0] _GEN_2115 = state == 4'h2 ? 8'h0 : _GEN_2099; // @[d_cache.scala 293:33 296:25]
  wire  _GEN_2118 = state == 4'h2 ? 1'h0 : _GEN_2102; // @[d_cache.scala 293:33 299:26]
  wire [31:0] _GEN_2119 = state == 4'h2 ? 32'h0 : _GEN_2103; // @[d_cache.scala 293:33 300:26]
  wire  _GEN_2120 = state == 4'h2 ? 1'h0 : _GEN_2104; // @[d_cache.scala 293:33 301:27]
  wire [7:0] _GEN_2121 = state == 4'h2 ? 8'h0 : _GEN_2105; // @[d_cache.scala 293:33 302:25]
  wire [63:0] _GEN_2124 = state == 4'h2 ? 64'h0 : _GEN_2108; // @[d_cache.scala 293:33 305:25]
  wire [7:0] _GEN_2125 = state == 4'h2 ? 8'h0 : _GEN_2109; // @[d_cache.scala 293:33 306:25]
  wire  _GEN_2127 = state == 4'h2 ? 1'h0 : _GEN_2111; // @[d_cache.scala 293:33 308:26]
  wire  _GEN_2128 = state == 4'h2 ? 1'h0 : _GEN_2112; // @[d_cache.scala 293:33 309:26]
  wire [63:0] _GEN_2129 = state == 4'h2 ? 64'h0 : _GEN_2090; // @[d_cache.scala 293:33]
  wire  _GEN_2131 = state == 4'h2 ? 1'h0 : _GEN_2092; // @[d_cache.scala 293:33]
  wire  _GEN_2133 = state == 4'h2 ? _GEN_2017 : _GEN_2094; // @[d_cache.scala 293:33]
  wire [63:0] _GEN_2137 = state == 4'h1 ? {{32'd0}, io_from_lsu_araddr} : _GEN_2114; // @[d_cache.scala 251:27 253:26]
  wire [511:0] _GEN_2152 = state == 4'h1 ? _GEN_2015 : {{448'd0}, _GEN_2129}; // @[d_cache.scala 251:27]
  wire [41:0] _GEN_2235 = reset ? 42'h0 : _GEN_2010; // @[d_cache.scala 38:{34,34}]
  assign io_to_lsu_rdata = _GEN_2152[63:0];
  assign io_to_lsu_rvalid = state == 4'h1 ? _GEN_2017 : _GEN_2131; // @[d_cache.scala 251:27]
  assign io_to_lsu_wready = state == 4'h1 ? 1'h0 : _GEN_2133; // @[d_cache.scala 251:27]
  assign io_to_axi_araddr = _GEN_2137[31:0];
  assign io_to_axi_arlen = state == 4'h1 ? 8'h0 : _GEN_2115; // @[d_cache.scala 251:27 254:25]
  assign io_to_axi_arvalid = state == 4'h1 ? 1'h0 : _GEN_2113; // @[d_cache.scala 251:27 252:27]
  assign io_to_axi_rready = state == 4'h1 ? 1'h0 : _GEN_2118; // @[d_cache.scala 251:27 257:26]
  assign io_to_axi_awaddr = state == 4'h1 ? 32'h0 : _GEN_2119; // @[d_cache.scala 251:27 258:26]
  assign io_to_axi_awlen = state == 4'h1 ? 8'h0 : _GEN_2121; // @[d_cache.scala 251:27 260:25]
  assign io_to_axi_awvalid = state == 4'h1 ? 1'h0 : _GEN_2120; // @[d_cache.scala 251:27 259:27]
  assign io_to_axi_wdata = state == 4'h1 ? 64'h0 : _GEN_2124; // @[d_cache.scala 251:27 263:25]
  assign io_to_axi_wstrb = state == 4'h1 ? 8'h0 : _GEN_2125; // @[d_cache.scala 251:27 264:25]
  assign io_to_axi_wvalid = state == 4'h1 ? 1'h0 : _GEN_2127; // @[d_cache.scala 251:27 266:26]
  assign io_to_axi_bready = state == 4'h1 ? 1'h0 : _GEN_2128; // @[d_cache.scala 251:27 267:26]
  always @(posedge clock) begin
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_0 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_0 <= _GEN_207;
        end else begin
          ram_0_0 <= _GEN_1457;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_1 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_1 <= _GEN_208;
        end else begin
          ram_0_1 <= _GEN_1458;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_2 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_2 <= _GEN_209;
        end else begin
          ram_0_2 <= _GEN_1459;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_3 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_3 <= _GEN_210;
        end else begin
          ram_0_3 <= _GEN_1460;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_4 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_4 <= _GEN_211;
        end else begin
          ram_0_4 <= _GEN_1461;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_5 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_5 <= _GEN_212;
        end else begin
          ram_0_5 <= _GEN_1462;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_6 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_6 <= _GEN_213;
        end else begin
          ram_0_6 <= _GEN_1463;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_7 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_7 <= _GEN_214;
        end else begin
          ram_0_7 <= _GEN_1464;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_8 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_8 <= _GEN_215;
        end else begin
          ram_0_8 <= _GEN_1465;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_9 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_9 <= _GEN_216;
        end else begin
          ram_0_9 <= _GEN_1466;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_10 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_10 <= _GEN_217;
        end else begin
          ram_0_10 <= _GEN_1467;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_11 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_11 <= _GEN_218;
        end else begin
          ram_0_11 <= _GEN_1468;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_12 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_12 <= _GEN_219;
        end else begin
          ram_0_12 <= _GEN_1469;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_13 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_13 <= _GEN_220;
        end else begin
          ram_0_13 <= _GEN_1470;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_14 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_14 <= _GEN_221;
        end else begin
          ram_0_14 <= _GEN_1471;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_15 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_0_15 <= _GEN_222;
        end else begin
          ram_0_15 <= _GEN_1472;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_0 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_0 <= _GEN_239;
        end else begin
          ram_1_0 <= _GEN_1506;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_1 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_1 <= _GEN_240;
        end else begin
          ram_1_1 <= _GEN_1507;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_2 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_2 <= _GEN_241;
        end else begin
          ram_1_2 <= _GEN_1508;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_3 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_3 <= _GEN_242;
        end else begin
          ram_1_3 <= _GEN_1509;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_4 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_4 <= _GEN_243;
        end else begin
          ram_1_4 <= _GEN_1510;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_5 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_5 <= _GEN_244;
        end else begin
          ram_1_5 <= _GEN_1511;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_6 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_6 <= _GEN_245;
        end else begin
          ram_1_6 <= _GEN_1512;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_7 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_7 <= _GEN_246;
        end else begin
          ram_1_7 <= _GEN_1513;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_8 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_8 <= _GEN_247;
        end else begin
          ram_1_8 <= _GEN_1514;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_9 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_9 <= _GEN_248;
        end else begin
          ram_1_9 <= _GEN_1515;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_10 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_10 <= _GEN_249;
        end else begin
          ram_1_10 <= _GEN_1516;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_11 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_11 <= _GEN_250;
        end else begin
          ram_1_11 <= _GEN_1517;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_12 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_12 <= _GEN_251;
        end else begin
          ram_1_12 <= _GEN_1518;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_13 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_13 <= _GEN_252;
        end else begin
          ram_1_13 <= _GEN_1519;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_14 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_14 <= _GEN_253;
        end else begin
          ram_1_14 <= _GEN_1520;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_15 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          ram_1_15 <= _GEN_254;
        end else begin
          ram_1_15 <= _GEN_1521;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_0 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_0 <= _GEN_1473;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_1 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_1 <= _GEN_1474;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_2 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_2 <= _GEN_1475;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_3 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_3 <= _GEN_1476;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_4 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_4 <= _GEN_1477;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_5 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_5 <= _GEN_1478;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_6 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_6 <= _GEN_1479;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_7 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_7 <= _GEN_1480;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_8 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_8 <= _GEN_1481;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_9 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_9 <= _GEN_1482;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_10 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_10 <= _GEN_1483;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_11 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_11 <= _GEN_1484;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_12 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_12 <= _GEN_1485;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_13 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_13 <= _GEN_1486;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_14 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_14 <= _GEN_1487;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 28:24]
      tag_0_15 <= 32'h0; // @[d_cache.scala 28:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_0_15 <= _GEN_1488;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_0 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_0 <= _GEN_1522;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_1 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_1 <= _GEN_1523;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_2 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_2 <= _GEN_1524;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_3 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_3 <= _GEN_1525;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_4 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_4 <= _GEN_1526;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_5 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_5 <= _GEN_1527;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_6 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_6 <= _GEN_1528;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_7 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_7 <= _GEN_1529;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_8 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_8 <= _GEN_1530;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_9 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_9 <= _GEN_1531;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_10 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_10 <= _GEN_1532;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_11 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_11 <= _GEN_1533;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_12 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_12 <= _GEN_1534;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_13 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_13 <= _GEN_1535;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_14 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_14 <= _GEN_1536;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 29:24]
      tag_1_15 <= 32'h0; // @[d_cache.scala 29:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          tag_1_15 <= _GEN_1537;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_0 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_0 <= _GEN_1489;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_1 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_1 <= _GEN_1490;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_2 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_2 <= _GEN_1491;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_3 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_3 <= _GEN_1492;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_4 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_4 <= _GEN_1493;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_5 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_5 <= _GEN_1494;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_6 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_6 <= _GEN_1495;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_7 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_7 <= _GEN_1496;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_8 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_8 <= _GEN_1497;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_9 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_9 <= _GEN_1498;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_10 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_10 <= _GEN_1499;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_11 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_11 <= _GEN_1500;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_12 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_12 <= _GEN_1501;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_13 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_13 <= _GEN_1502;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_14 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_14 <= _GEN_1503;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 30:26]
      valid_0_15 <= 1'h0; // @[d_cache.scala 30:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_0_15 <= _GEN_1504;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_0 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_0 <= _GEN_1538;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_1 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_1 <= _GEN_1539;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_2 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_2 <= _GEN_1540;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_3 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_3 <= _GEN_1541;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_4 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_4 <= _GEN_1542;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_5 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_5 <= _GEN_1543;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_6 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_6 <= _GEN_1544;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_7 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_7 <= _GEN_1545;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_8 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_8 <= _GEN_1546;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_9 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_9 <= _GEN_1547;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_10 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_10 <= _GEN_1548;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_11 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_11 <= _GEN_1549;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_12 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_12 <= _GEN_1550;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_13 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_13 <= _GEN_1551;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_14 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_14 <= _GEN_1552;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:26]
      valid_1_15 <= 1'h0; // @[d_cache.scala 31:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          valid_1_15 <= _GEN_1553;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_0 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_0 <= _GEN_223;
        end else begin
          dirty_0_0 <= _GEN_1556;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_1 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_1 <= _GEN_224;
        end else begin
          dirty_0_1 <= _GEN_1557;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_2 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_2 <= _GEN_225;
        end else begin
          dirty_0_2 <= _GEN_1558;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_3 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_3 <= _GEN_226;
        end else begin
          dirty_0_3 <= _GEN_1559;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_4 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_4 <= _GEN_227;
        end else begin
          dirty_0_4 <= _GEN_1560;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_5 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_5 <= _GEN_228;
        end else begin
          dirty_0_5 <= _GEN_1561;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_6 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_6 <= _GEN_229;
        end else begin
          dirty_0_6 <= _GEN_1562;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_7 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_7 <= _GEN_230;
        end else begin
          dirty_0_7 <= _GEN_1563;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_8 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_8 <= _GEN_231;
        end else begin
          dirty_0_8 <= _GEN_1564;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_9 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_9 <= _GEN_232;
        end else begin
          dirty_0_9 <= _GEN_1565;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_10 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_10 <= _GEN_233;
        end else begin
          dirty_0_10 <= _GEN_1566;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_11 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_11 <= _GEN_234;
        end else begin
          dirty_0_11 <= _GEN_1567;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_12 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_12 <= _GEN_235;
        end else begin
          dirty_0_12 <= _GEN_1568;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_13 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_13 <= _GEN_236;
        end else begin
          dirty_0_13 <= _GEN_1569;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_14 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_14 <= _GEN_237;
        end else begin
          dirty_0_14 <= _GEN_1570;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 32:26]
      dirty_0_15 <= 1'h0; // @[d_cache.scala 32:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_0_15 <= _GEN_238;
        end else begin
          dirty_0_15 <= _GEN_1571;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_0 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_0 <= _GEN_255;
        end else begin
          dirty_1_0 <= _GEN_1572;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_1 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_1 <= _GEN_256;
        end else begin
          dirty_1_1 <= _GEN_1573;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_2 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_2 <= _GEN_257;
        end else begin
          dirty_1_2 <= _GEN_1574;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_3 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_3 <= _GEN_258;
        end else begin
          dirty_1_3 <= _GEN_1575;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_4 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_4 <= _GEN_259;
        end else begin
          dirty_1_4 <= _GEN_1576;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_5 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_5 <= _GEN_260;
        end else begin
          dirty_1_5 <= _GEN_1577;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_6 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_6 <= _GEN_261;
        end else begin
          dirty_1_6 <= _GEN_1578;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_7 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_7 <= _GEN_262;
        end else begin
          dirty_1_7 <= _GEN_1579;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_8 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_8 <= _GEN_263;
        end else begin
          dirty_1_8 <= _GEN_1580;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_9 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_9 <= _GEN_264;
        end else begin
          dirty_1_9 <= _GEN_1581;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_10 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_10 <= _GEN_265;
        end else begin
          dirty_1_10 <= _GEN_1582;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_11 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_11 <= _GEN_266;
        end else begin
          dirty_1_11 <= _GEN_1583;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_12 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_12 <= _GEN_267;
        end else begin
          dirty_1_12 <= _GEN_1584;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_13 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_13 <= _GEN_268;
        end else begin
          dirty_1_13 <= _GEN_1585;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_14 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_14 <= _GEN_269;
        end else begin
          dirty_1_14 <= _GEN_1586;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 33:26]
      dirty_1_15 <= 1'h0; // @[d_cache.scala 33:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (4'h2 == state) begin // @[d_cache.scala 89:18]
          dirty_1_15 <= _GEN_270;
        end else begin
          dirty_1_15 <= _GEN_1587;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 34:27]
      way0_hit <= 1'h0; // @[d_cache.scala 34:27]
    end else begin
      way0_hit <= _T_2;
    end
    if (reset) begin // @[d_cache.scala 35:27]
      way1_hit <= 1'h0; // @[d_cache.scala 35:27]
    end else begin
      way1_hit <= _T_5;
    end
    if (reset) begin // @[d_cache.scala 37:34]
      write_back_data <= 512'h0; // @[d_cache.scala 37:34]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          write_back_data <= _GEN_1554;
        end
      end
    end
    write_back_addr <= _GEN_2235[31:0]; // @[d_cache.scala 38:{34,34}]
    if (reset) begin // @[d_cache.scala 41:28]
      unuse_way <= 2'h0; // @[d_cache.scala 41:28]
    end else if (~_GEN_31) begin // @[d_cache.scala 76:31]
      unuse_way <= 2'h1; // @[d_cache.scala 77:19]
    end else if (~_GEN_64) begin // @[d_cache.scala 78:37]
      unuse_way <= 2'h2; // @[d_cache.scala 79:19]
    end else begin
      unuse_way <= 2'h0; // @[d_cache.scala 81:19]
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_0 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_0 <= _GEN_1447;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_1 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_1 <= _GEN_1448;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_2 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_2 <= _GEN_1449;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_3 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_3 <= _GEN_1450;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_4 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_4 <= _GEN_1451;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_5 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_5 <= _GEN_1452;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_6 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_6 <= _GEN_1453;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 42:31]
      receive_data_7 <= 64'h0; // @[d_cache.scala 42:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          receive_data_7 <= _GEN_1454;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 43:30]
      receive_num <= 3'h0; // @[d_cache.scala 43:30]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (4'h1 == state) begin // @[d_cache.scala 89:18]
        if (!(way0_hit)) begin // @[d_cache.scala 107:27]
          receive_num <= _GEN_74;
        end
      end else if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
        receive_num <= _GEN_1455;
      end
    end
    if (reset) begin // @[d_cache.scala 44:24]
      quene <= 1'h0; // @[d_cache.scala 44:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 89:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 89:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 89:18]
          quene <= _GEN_1505;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 84:24]
      state <= 4'h0; // @[d_cache.scala 84:24]
    end else if (4'h0 == state) begin // @[d_cache.scala 89:18]
      if (io_from_lsu_arvalid) begin // @[d_cache.scala 91:38]
        if (io_from_lsu_araddr >= 32'ha0000000) begin // @[d_cache.scala 92:58]
          state <= 4'h8; // @[d_cache.scala 93:27]
        end else begin
          state <= 4'h1; // @[d_cache.scala 95:27]
        end
      end else if (io_from_lsu_awvalid) begin // @[d_cache.scala 97:44]
        state <= _GEN_69;
      end
    end else if (4'h1 == state) begin // @[d_cache.scala 89:18]
      if (way0_hit) begin // @[d_cache.scala 107:27]
        state <= 4'h0;
      end else begin
        state <= _GEN_73;
      end
    end else if (4'h2 == state) begin // @[d_cache.scala 89:18]
      state <= _GEN_206;
    end else begin
      state <= _GEN_1456;
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
  dirty_0_0 = _RAND_96[0:0];
  _RAND_97 = {1{`RANDOM}};
  dirty_0_1 = _RAND_97[0:0];
  _RAND_98 = {1{`RANDOM}};
  dirty_0_2 = _RAND_98[0:0];
  _RAND_99 = {1{`RANDOM}};
  dirty_0_3 = _RAND_99[0:0];
  _RAND_100 = {1{`RANDOM}};
  dirty_0_4 = _RAND_100[0:0];
  _RAND_101 = {1{`RANDOM}};
  dirty_0_5 = _RAND_101[0:0];
  _RAND_102 = {1{`RANDOM}};
  dirty_0_6 = _RAND_102[0:0];
  _RAND_103 = {1{`RANDOM}};
  dirty_0_7 = _RAND_103[0:0];
  _RAND_104 = {1{`RANDOM}};
  dirty_0_8 = _RAND_104[0:0];
  _RAND_105 = {1{`RANDOM}};
  dirty_0_9 = _RAND_105[0:0];
  _RAND_106 = {1{`RANDOM}};
  dirty_0_10 = _RAND_106[0:0];
  _RAND_107 = {1{`RANDOM}};
  dirty_0_11 = _RAND_107[0:0];
  _RAND_108 = {1{`RANDOM}};
  dirty_0_12 = _RAND_108[0:0];
  _RAND_109 = {1{`RANDOM}};
  dirty_0_13 = _RAND_109[0:0];
  _RAND_110 = {1{`RANDOM}};
  dirty_0_14 = _RAND_110[0:0];
  _RAND_111 = {1{`RANDOM}};
  dirty_0_15 = _RAND_111[0:0];
  _RAND_112 = {1{`RANDOM}};
  dirty_1_0 = _RAND_112[0:0];
  _RAND_113 = {1{`RANDOM}};
  dirty_1_1 = _RAND_113[0:0];
  _RAND_114 = {1{`RANDOM}};
  dirty_1_2 = _RAND_114[0:0];
  _RAND_115 = {1{`RANDOM}};
  dirty_1_3 = _RAND_115[0:0];
  _RAND_116 = {1{`RANDOM}};
  dirty_1_4 = _RAND_116[0:0];
  _RAND_117 = {1{`RANDOM}};
  dirty_1_5 = _RAND_117[0:0];
  _RAND_118 = {1{`RANDOM}};
  dirty_1_6 = _RAND_118[0:0];
  _RAND_119 = {1{`RANDOM}};
  dirty_1_7 = _RAND_119[0:0];
  _RAND_120 = {1{`RANDOM}};
  dirty_1_8 = _RAND_120[0:0];
  _RAND_121 = {1{`RANDOM}};
  dirty_1_9 = _RAND_121[0:0];
  _RAND_122 = {1{`RANDOM}};
  dirty_1_10 = _RAND_122[0:0];
  _RAND_123 = {1{`RANDOM}};
  dirty_1_11 = _RAND_123[0:0];
  _RAND_124 = {1{`RANDOM}};
  dirty_1_12 = _RAND_124[0:0];
  _RAND_125 = {1{`RANDOM}};
  dirty_1_13 = _RAND_125[0:0];
  _RAND_126 = {1{`RANDOM}};
  dirty_1_14 = _RAND_126[0:0];
  _RAND_127 = {1{`RANDOM}};
  dirty_1_15 = _RAND_127[0:0];
  _RAND_128 = {1{`RANDOM}};
  way0_hit = _RAND_128[0:0];
  _RAND_129 = {1{`RANDOM}};
  way1_hit = _RAND_129[0:0];
  _RAND_130 = {16{`RANDOM}};
  write_back_data = _RAND_130[511:0];
  _RAND_131 = {1{`RANDOM}};
  write_back_addr = _RAND_131[31:0];
  _RAND_132 = {1{`RANDOM}};
  unuse_way = _RAND_132[1:0];
  _RAND_133 = {2{`RANDOM}};
  receive_data_0 = _RAND_133[63:0];
  _RAND_134 = {2{`RANDOM}};
  receive_data_1 = _RAND_134[63:0];
  _RAND_135 = {2{`RANDOM}};
  receive_data_2 = _RAND_135[63:0];
  _RAND_136 = {2{`RANDOM}};
  receive_data_3 = _RAND_136[63:0];
  _RAND_137 = {2{`RANDOM}};
  receive_data_4 = _RAND_137[63:0];
  _RAND_138 = {2{`RANDOM}};
  receive_data_5 = _RAND_138[63:0];
  _RAND_139 = {2{`RANDOM}};
  receive_data_6 = _RAND_139[63:0];
  _RAND_140 = {2{`RANDOM}};
  receive_data_7 = _RAND_140[63:0];
  _RAND_141 = {1{`RANDOM}};
  receive_num = _RAND_141[2:0];
  _RAND_142 = {1{`RANDOM}};
  quene = _RAND_142[0:0];
  _RAND_143 = {1{`RANDOM}};
  state = _RAND_143[3:0];
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
  output        io_axi_out_rvalid,
  output        io_axi_out_wready,
  output        io_axi_out_bvalid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
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
  reg  axi_rvalid; // @[AXI.scala 21:29]
  reg [7:0] arlen; // @[AXI.scala 22:24]
  reg [7:0] awlen; // @[AXI.scala 23:24]
  reg [63:0] araddr; // @[AXI.scala 24:25]
  reg [63:0] awaddr; // @[AXI.scala 25:25]
  reg [2:0] state; // @[AXI.scala 28:24]
  wire  _GEN_4 = io_axi_in_arvalid | axi_rvalid; // @[AXI.scala 55:42 60:28 21:29]
  wire  _GEN_7 = io_axi_in_awvalid & io_axi_in_wvalid | axi_wready; // @[AXI.scala 43:56 46:28 14:29]
  wire [63:0] _awaddr_T_1 = awaddr + 64'h8; // @[AXI.scala 72:38]
  wire [7:0] _awlen_T_1 = awlen - 8'h1; // @[AXI.scala 73:36]
  wire [63:0] _GEN_14 = io_axi_in_wvalid & axi_wready ? _awaddr_T_1 : awaddr; // @[AXI.scala 25:25 71:60 72:28]
  wire [7:0] _GEN_15 = io_axi_in_wvalid & axi_wready ? _awlen_T_1 : awlen; // @[AXI.scala 23:24 71:60 73:27]
  wire  _GEN_18 = awlen == 8'h0 | axi_bvalid; // @[AXI.scala 64:30 68:28 17:29]
  wire  _T_7 = arlen == 8'h0; // @[AXI.scala 78:23]
  wire [2:0] _GEN_22 = io_axi_in_rready ? 3'h0 : state; // @[AXI.scala 28:24 79:39 80:27]
  wire  _GEN_24 = io_axi_in_rready ? 1'h0 : axi_rvalid; // @[AXI.scala 21:29 79:39 82:32]
  wire [63:0] _araddr_T_1 = araddr + 64'h8; // @[AXI.scala 86:38]
  wire [7:0] _arlen_T_1 = arlen - 8'h1; // @[AXI.scala 87:36]
  wire [63:0] _GEN_25 = io_axi_in_rready ? _araddr_T_1 : araddr; // @[AXI.scala 24:25 85:39 86:28]
  wire [7:0] _GEN_26 = io_axi_in_rready ? _arlen_T_1 : arlen; // @[AXI.scala 22:24 85:39 87:27]
  wire [2:0] _GEN_27 = arlen == 8'h0 ? _GEN_22 : state; // @[AXI.scala 28:24 78:30]
  wire  _GEN_29 = arlen == 8'h0 ? _GEN_24 : axi_rvalid; // @[AXI.scala 21:29 78:30]
  wire [63:0] _GEN_30 = arlen == 8'h0 ? araddr : _GEN_25; // @[AXI.scala 24:25 78:30]
  wire [7:0] _GEN_31 = arlen == 8'h0 ? arlen : _GEN_26; // @[AXI.scala 22:24 78:30]
  wire [2:0] _GEN_32 = io_axi_in_bready ? 3'h0 : state; // @[AXI.scala 92:35 93:23 28:24]
  wire  _GEN_33 = io_axi_in_bready ? 1'h0 : axi_bvalid; // @[AXI.scala 92:35 94:28 17:29]
  wire [2:0] _GEN_35 = 3'h3 == state ? _GEN_32 : state; // @[AXI.scala 41:18 28:24]
  wire  _GEN_36 = 3'h3 == state ? _GEN_33 : axi_bvalid; // @[AXI.scala 41:18 17:29]
  MEM Mem_modle ( // @[AXI.scala 30:27]
    .Raddr(Mem_modle_Raddr),
    .Rdata(Mem_modle_Rdata),
    .Waddr(Mem_modle_Waddr),
    .Wdata(Mem_modle_Wdata),
    .Wmask(Mem_modle_Wmask),
    .Write_en(Mem_modle_Write_en),
    .Read_en(Mem_modle_Read_en)
  );
  assign io_axi_out_rdata = Mem_modle_Rdata; // @[AXI.scala 108:22]
  assign io_axi_out_rlast = state == 3'h1 & _T_7; // @[AXI.scala 110:41]
  assign io_axi_out_rvalid = axi_rvalid; // @[AXI.scala 109:23]
  assign io_axi_out_wready = axi_wready; // @[AXI.scala 112:23]
  assign io_axi_out_bvalid = axi_bvalid; // @[AXI.scala 113:23]
  assign Mem_modle_Raddr = araddr; // @[AXI.scala 31:24]
  assign Mem_modle_Waddr = awaddr; // @[AXI.scala 32:24]
  assign Mem_modle_Wdata = io_axi_in_wdata; // @[AXI.scala 33:24]
  assign Mem_modle_Wmask = io_axi_in_wstrb; // @[AXI.scala 34:24]
  assign Mem_modle_Write_en = axi_wready; // @[AXI.scala 35:27]
  assign Mem_modle_Read_en = axi_rvalid; // @[AXI.scala 36:26]
  always @(posedge clock) begin
    if (reset) begin // @[AXI.scala 14:29]
      axi_wready <= 1'h0; // @[AXI.scala 14:29]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      axi_wready <= _GEN_7;
    end else if (3'h2 == state) begin // @[AXI.scala 41:18]
      if (awlen == 8'h0) begin // @[AXI.scala 64:30]
        axi_wready <= 1'h0; // @[AXI.scala 65:28]
      end
    end
    if (reset) begin // @[AXI.scala 17:29]
      axi_bvalid <= 1'h0; // @[AXI.scala 17:29]
    end else if (!(3'h0 == state)) begin // @[AXI.scala 41:18]
      if (3'h2 == state) begin // @[AXI.scala 41:18]
        axi_bvalid <= _GEN_18;
      end else if (!(3'h1 == state)) begin // @[AXI.scala 41:18]
        axi_bvalid <= _GEN_36;
      end
    end
    if (reset) begin // @[AXI.scala 21:29]
      axi_rvalid <= 1'h0; // @[AXI.scala 21:29]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (!(io_axi_in_awvalid & io_axi_in_wvalid)) begin // @[AXI.scala 43:56]
        axi_rvalid <= _GEN_4;
      end
    end else if (!(3'h2 == state)) begin // @[AXI.scala 41:18]
      if (3'h1 == state) begin // @[AXI.scala 41:18]
        axi_rvalid <= _GEN_29;
      end
    end
    if (reset) begin // @[AXI.scala 22:24]
      arlen <= 8'h0; // @[AXI.scala 22:24]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (!(io_axi_in_awvalid & io_axi_in_wvalid)) begin // @[AXI.scala 43:56]
        if (io_axi_in_arvalid) begin // @[AXI.scala 55:42]
          arlen <= io_axi_in_arlen; // @[AXI.scala 57:23]
        end
      end
    end else if (!(3'h2 == state)) begin // @[AXI.scala 41:18]
      if (3'h1 == state) begin // @[AXI.scala 41:18]
        arlen <= _GEN_31;
      end
    end
    if (reset) begin // @[AXI.scala 23:24]
      awlen <= 8'h0; // @[AXI.scala 23:24]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (io_axi_in_awvalid & io_axi_in_wvalid) begin // @[AXI.scala 43:56]
        awlen <= io_axi_in_awlen; // @[AXI.scala 48:23]
      end
    end else if (3'h2 == state) begin // @[AXI.scala 41:18]
      if (!(awlen == 8'h0)) begin // @[AXI.scala 64:30]
        awlen <= _GEN_15;
      end
    end
    if (reset) begin // @[AXI.scala 24:25]
      araddr <= 64'h0; // @[AXI.scala 24:25]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (!(io_axi_in_awvalid & io_axi_in_wvalid)) begin // @[AXI.scala 43:56]
        if (io_axi_in_arvalid) begin // @[AXI.scala 55:42]
          araddr <= {{32'd0}, io_axi_in_araddr}; // @[AXI.scala 58:24]
        end
      end
    end else if (!(3'h2 == state)) begin // @[AXI.scala 41:18]
      if (3'h1 == state) begin // @[AXI.scala 41:18]
        araddr <= _GEN_30;
      end
    end
    if (reset) begin // @[AXI.scala 25:25]
      awaddr <= 64'h0; // @[AXI.scala 25:25]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (io_axi_in_awvalid & io_axi_in_wvalid) begin // @[AXI.scala 43:56]
        awaddr <= {{32'd0}, io_axi_in_awaddr}; // @[AXI.scala 49:24]
      end
    end else if (3'h2 == state) begin // @[AXI.scala 41:18]
      if (!(awlen == 8'h0)) begin // @[AXI.scala 64:30]
        awaddr <= _GEN_14;
      end
    end
    if (reset) begin // @[AXI.scala 28:24]
      state <= 3'h0; // @[AXI.scala 28:24]
    end else if (3'h0 == state) begin // @[AXI.scala 41:18]
      if (io_axi_in_awvalid & io_axi_in_wvalid) begin // @[AXI.scala 43:56]
        state <= 3'h2; // @[AXI.scala 44:23]
      end else if (io_axi_in_arvalid) begin // @[AXI.scala 55:42]
        state <= 3'h1; // @[AXI.scala 56:23]
      end
    end else if (3'h2 == state) begin // @[AXI.scala 41:18]
      if (awlen == 8'h0) begin // @[AXI.scala 64:30]
        state <= 3'h3; // @[AXI.scala 69:23]
      end
    end else if (3'h1 == state) begin // @[AXI.scala 41:18]
      state <= _GEN_27;
    end else begin
      state <= _GEN_35;
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
  axi_rvalid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  arlen = _RAND_3[7:0];
  _RAND_4 = {1{`RANDOM}};
  awlen = _RAND_4[7:0];
  _RAND_5 = {2{`RANDOM}};
  araddr = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  awaddr = _RAND_6[63:0];
  _RAND_7 = {1{`RANDOM}};
  state = _RAND_7[2:0];
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
  wire [63:0] IFU_io_to_ds_pc; // @[top.scala 16:21]
  wire  IFU_io_fs_to_ds_valid; // @[top.scala 16:21]
  wire [31:0] IFU_io_inst; // @[top.scala 16:21]
  wire [63:0] IFU_io_axi_in_rdata; // @[top.scala 16:21]
  wire  IFU_io_axi_in_rlast; // @[top.scala 16:21]
  wire  IFU_io_axi_in_rvalid; // @[top.scala 16:21]
  wire [31:0] IFU_io_axi_out_araddr; // @[top.scala 16:21]
  wire  IFU_io_axi_out_arvalid; // @[top.scala 16:21]
  wire  IFU_io_axi_out_rready; // @[top.scala 16:21]
  wire  IFU_io_fence; // @[top.scala 16:21]
  wire  IFU_io_clear_cache; // @[top.scala 16:21]
  wire  IFU_io_cache_init; // @[top.scala 16:21]
  wire  IDU_clock; // @[top.scala 17:21]
  wire  IDU_reset; // @[top.scala 17:21]
  wire [63:0] IDU_io_pc; // @[top.scala 17:21]
  wire  IDU_io_fs_to_ds_valid; // @[top.scala 17:21]
  wire  IDU_io_ds_to_es_valid; // @[top.scala 17:21]
  wire  IDU_io_es_allowin; // @[top.scala 17:21]
  wire [31:0] IDU_io_from_fs_inst; // @[top.scala 17:21]
  wire  IDU_io_br_taken; // @[top.scala 17:21]
  wire [63:0] IDU_io_br_target; // @[top.scala 17:21]
  wire  IDU_io_ds_allowin; // @[top.scala 17:21]
  wire  IDU_io_fence; // @[top.scala 17:21]
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
  wire  EXU_io_ms_allowin; // @[top.scala 18:21]
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
  wire  LSU_io_ms_allowin; // @[top.scala 19:21]
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
  wire [63:0] LSU_io_axi_in_rdata; // @[top.scala 19:21]
  wire  LSU_io_axi_in_rvalid; // @[top.scala 19:21]
  wire  LSU_io_axi_in_wready; // @[top.scala 19:21]
  wire [31:0] LSU_io_axi_out_araddr; // @[top.scala 19:21]
  wire  LSU_io_axi_out_arvalid; // @[top.scala 19:21]
  wire [31:0] LSU_io_axi_out_awaddr; // @[top.scala 19:21]
  wire  LSU_io_axi_out_awvalid; // @[top.scala 19:21]
  wire [63:0] LSU_io_axi_out_wdata; // @[top.scala 19:21]
  wire [7:0] LSU_io_axi_out_wstrb; // @[top.scala 19:21]
  wire  LSU_io_axi_out_wvalid; // @[top.scala 19:21]
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
  wire  arbiter_clock; // @[top.scala 21:25]
  wire  arbiter_reset; // @[top.scala 21:25]
  wire [31:0] arbiter_io_ifu_axi_in_araddr; // @[top.scala 21:25]
  wire [7:0] arbiter_io_ifu_axi_in_arlen; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_in_arvalid; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_in_rready; // @[top.scala 21:25]
  wire [63:0] arbiter_io_ifu_axi_out_rdata; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_out_rlast; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_out_rvalid; // @[top.scala 21:25]
  wire [31:0] arbiter_io_lsu_axi_in_araddr; // @[top.scala 21:25]
  wire [7:0] arbiter_io_lsu_axi_in_arlen; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_in_arvalid; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_in_rready; // @[top.scala 21:25]
  wire [31:0] arbiter_io_lsu_axi_in_awaddr; // @[top.scala 21:25]
  wire [7:0] arbiter_io_lsu_axi_in_awlen; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_in_awvalid; // @[top.scala 21:25]
  wire [63:0] arbiter_io_lsu_axi_in_wdata; // @[top.scala 21:25]
  wire [7:0] arbiter_io_lsu_axi_in_wstrb; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_in_wvalid; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_in_bready; // @[top.scala 21:25]
  wire [63:0] arbiter_io_lsu_axi_out_rdata; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_out_rlast; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_out_rvalid; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_out_wready; // @[top.scala 21:25]
  wire  arbiter_io_lsu_axi_out_bvalid; // @[top.scala 21:25]
  wire [63:0] arbiter_io_axi_in_rdata; // @[top.scala 21:25]
  wire  arbiter_io_axi_in_rlast; // @[top.scala 21:25]
  wire  arbiter_io_axi_in_rvalid; // @[top.scala 21:25]
  wire  arbiter_io_axi_in_wready; // @[top.scala 21:25]
  wire  arbiter_io_axi_in_bvalid; // @[top.scala 21:25]
  wire [31:0] arbiter_io_axi_out_araddr; // @[top.scala 21:25]
  wire [7:0] arbiter_io_axi_out_arlen; // @[top.scala 21:25]
  wire  arbiter_io_axi_out_arvalid; // @[top.scala 21:25]
  wire  arbiter_io_axi_out_rready; // @[top.scala 21:25]
  wire [31:0] arbiter_io_axi_out_awaddr; // @[top.scala 21:25]
  wire [7:0] arbiter_io_axi_out_awlen; // @[top.scala 21:25]
  wire  arbiter_io_axi_out_awvalid; // @[top.scala 21:25]
  wire [63:0] arbiter_io_axi_out_wdata; // @[top.scala 21:25]
  wire [7:0] arbiter_io_axi_out_wstrb; // @[top.scala 21:25]
  wire  arbiter_io_axi_out_wvalid; // @[top.scala 21:25]
  wire  arbiter_io_axi_out_bready; // @[top.scala 21:25]
  wire  i_cache_clock; // @[top.scala 22:25]
  wire  i_cache_reset; // @[top.scala 22:25]
  wire [31:0] i_cache_io_from_ifu_araddr; // @[top.scala 22:25]
  wire  i_cache_io_from_ifu_arvalid; // @[top.scala 22:25]
  wire  i_cache_io_from_ifu_rready; // @[top.scala 22:25]
  wire [63:0] i_cache_io_to_ifu_rdata; // @[top.scala 22:25]
  wire  i_cache_io_to_ifu_rlast; // @[top.scala 22:25]
  wire  i_cache_io_to_ifu_rvalid; // @[top.scala 22:25]
  wire [31:0] i_cache_io_to_axi_araddr; // @[top.scala 22:25]
  wire [7:0] i_cache_io_to_axi_arlen; // @[top.scala 22:25]
  wire  i_cache_io_to_axi_arvalid; // @[top.scala 22:25]
  wire  i_cache_io_to_axi_rready; // @[top.scala 22:25]
  wire [63:0] i_cache_io_from_axi_rdata; // @[top.scala 22:25]
  wire  i_cache_io_from_axi_rlast; // @[top.scala 22:25]
  wire  i_cache_io_from_axi_rvalid; // @[top.scala 22:25]
  wire  i_cache_io_cache_init; // @[top.scala 22:25]
  wire  i_cache_io_clear_cache; // @[top.scala 22:25]
  wire  d_cache_clock; // @[top.scala 23:25]
  wire  d_cache_reset; // @[top.scala 23:25]
  wire [31:0] d_cache_io_from_lsu_araddr; // @[top.scala 23:25]
  wire  d_cache_io_from_lsu_arvalid; // @[top.scala 23:25]
  wire [31:0] d_cache_io_from_lsu_awaddr; // @[top.scala 23:25]
  wire  d_cache_io_from_lsu_awvalid; // @[top.scala 23:25]
  wire [63:0] d_cache_io_from_lsu_wdata; // @[top.scala 23:25]
  wire [7:0] d_cache_io_from_lsu_wstrb; // @[top.scala 23:25]
  wire  d_cache_io_from_lsu_wvalid; // @[top.scala 23:25]
  wire [63:0] d_cache_io_to_lsu_rdata; // @[top.scala 23:25]
  wire  d_cache_io_to_lsu_rvalid; // @[top.scala 23:25]
  wire  d_cache_io_to_lsu_wready; // @[top.scala 23:25]
  wire [31:0] d_cache_io_to_axi_araddr; // @[top.scala 23:25]
  wire [7:0] d_cache_io_to_axi_arlen; // @[top.scala 23:25]
  wire  d_cache_io_to_axi_arvalid; // @[top.scala 23:25]
  wire  d_cache_io_to_axi_rready; // @[top.scala 23:25]
  wire [31:0] d_cache_io_to_axi_awaddr; // @[top.scala 23:25]
  wire [7:0] d_cache_io_to_axi_awlen; // @[top.scala 23:25]
  wire  d_cache_io_to_axi_awvalid; // @[top.scala 23:25]
  wire [63:0] d_cache_io_to_axi_wdata; // @[top.scala 23:25]
  wire [7:0] d_cache_io_to_axi_wstrb; // @[top.scala 23:25]
  wire  d_cache_io_to_axi_wvalid; // @[top.scala 23:25]
  wire  d_cache_io_to_axi_bready; // @[top.scala 23:25]
  wire [63:0] d_cache_io_from_axi_rdata; // @[top.scala 23:25]
  wire  d_cache_io_from_axi_rlast; // @[top.scala 23:25]
  wire  d_cache_io_from_axi_rvalid; // @[top.scala 23:25]
  wire  d_cache_io_from_axi_wready; // @[top.scala 23:25]
  wire  d_cache_io_from_axi_bvalid; // @[top.scala 23:25]
  wire  axi_clock; // @[top.scala 24:21]
  wire  axi_reset; // @[top.scala 24:21]
  wire [31:0] axi_io_axi_in_araddr; // @[top.scala 24:21]
  wire [7:0] axi_io_axi_in_arlen; // @[top.scala 24:21]
  wire  axi_io_axi_in_arvalid; // @[top.scala 24:21]
  wire  axi_io_axi_in_rready; // @[top.scala 24:21]
  wire [31:0] axi_io_axi_in_awaddr; // @[top.scala 24:21]
  wire [7:0] axi_io_axi_in_awlen; // @[top.scala 24:21]
  wire  axi_io_axi_in_awvalid; // @[top.scala 24:21]
  wire [63:0] axi_io_axi_in_wdata; // @[top.scala 24:21]
  wire [7:0] axi_io_axi_in_wstrb; // @[top.scala 24:21]
  wire  axi_io_axi_in_wvalid; // @[top.scala 24:21]
  wire  axi_io_axi_in_bready; // @[top.scala 24:21]
  wire [63:0] axi_io_axi_out_rdata; // @[top.scala 24:21]
  wire  axi_io_axi_out_rlast; // @[top.scala 24:21]
  wire  axi_io_axi_out_rvalid; // @[top.scala 24:21]
  wire  axi_io_axi_out_wready; // @[top.scala 24:21]
  wire  axi_io_axi_out_bvalid; // @[top.scala 24:21]
  wire [31:0] dpi_flag; // @[top.scala 107:21]
  wire [31:0] dpi_ecall_flag; // @[top.scala 107:21]
  wire [63:0] dpi_pc; // @[top.scala 107:21]
  reg  diff_step; // @[top.scala 104:28]
  wire [63:0] _dpi_io_pc_T = IDU_io_ds_valid ? EXU_io_pc : IDU_io_pc; // @[top.scala 110:96]
  wire [63:0] _dpi_io_pc_T_1 = EXU_io_es_valid ? LSU_io_pc : _dpi_io_pc_T; // @[top.scala 110:72]
  wire [63:0] _dpi_io_pc_T_2 = LSU_io_ms_valid ? WBU_io_pc : _dpi_io_pc_T_1; // @[top.scala 110:48]
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
    .io_to_ds_pc(IFU_io_to_ds_pc),
    .io_fs_to_ds_valid(IFU_io_fs_to_ds_valid),
    .io_inst(IFU_io_inst),
    .io_axi_in_rdata(IFU_io_axi_in_rdata),
    .io_axi_in_rlast(IFU_io_axi_in_rlast),
    .io_axi_in_rvalid(IFU_io_axi_in_rvalid),
    .io_axi_out_araddr(IFU_io_axi_out_araddr),
    .io_axi_out_arvalid(IFU_io_axi_out_arvalid),
    .io_axi_out_rready(IFU_io_axi_out_rready),
    .io_fence(IFU_io_fence),
    .io_clear_cache(IFU_io_clear_cache),
    .io_cache_init(IFU_io_cache_init)
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
    .io_ds_allowin(IDU_io_ds_allowin),
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
    .io_es_rf_dst(EXU_io_es_rf_dst)
  );
  LSU LSU ( // @[top.scala 19:21]
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
    .io_ms_valid(LSU_io_ms_valid),
    .io_ms_rf_we(LSU_io_ms_rf_we),
    .io_ms_rf_dst(LSU_io_ms_rf_dst),
    .io_axi_in_rdata(LSU_io_axi_in_rdata),
    .io_axi_in_rvalid(LSU_io_axi_in_rvalid),
    .io_axi_in_wready(LSU_io_axi_in_wready),
    .io_axi_out_araddr(LSU_io_axi_out_araddr),
    .io_axi_out_arvalid(LSU_io_axi_out_arvalid),
    .io_axi_out_awaddr(LSU_io_axi_out_awaddr),
    .io_axi_out_awvalid(LSU_io_axi_out_awvalid),
    .io_axi_out_wdata(LSU_io_axi_out_wdata),
    .io_axi_out_wstrb(LSU_io_axi_out_wstrb),
    .io_axi_out_wvalid(LSU_io_axi_out_wvalid)
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
  AXI_ARBITER arbiter ( // @[top.scala 21:25]
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
    .io_lsu_axi_in_rready(arbiter_io_lsu_axi_in_rready),
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
    .io_axi_in_rvalid(arbiter_io_axi_in_rvalid),
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
  I_CACHE i_cache ( // @[top.scala 22:25]
    .clock(i_cache_clock),
    .reset(i_cache_reset),
    .io_from_ifu_araddr(i_cache_io_from_ifu_araddr),
    .io_from_ifu_arvalid(i_cache_io_from_ifu_arvalid),
    .io_from_ifu_rready(i_cache_io_from_ifu_rready),
    .io_to_ifu_rdata(i_cache_io_to_ifu_rdata),
    .io_to_ifu_rlast(i_cache_io_to_ifu_rlast),
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
  D_CACHE d_cache ( // @[top.scala 23:25]
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
    .io_to_lsu_wready(d_cache_io_to_lsu_wready),
    .io_to_axi_araddr(d_cache_io_to_axi_araddr),
    .io_to_axi_arlen(d_cache_io_to_axi_arlen),
    .io_to_axi_arvalid(d_cache_io_to_axi_arvalid),
    .io_to_axi_rready(d_cache_io_to_axi_rready),
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
  AXI axi ( // @[top.scala 24:21]
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
    .io_axi_out_rvalid(axi_io_axi_out_rvalid),
    .io_axi_out_wready(axi_io_axi_out_wready),
    .io_axi_out_bvalid(axi_io_axi_out_bvalid)
  );
  DPI dpi ( // @[top.scala 107:21]
    .flag(dpi_flag),
    .ecall_flag(dpi_ecall_flag),
    .pc(dpi_pc)
  );
  assign io_inst = IFU_io_inst; // @[top.scala 103:13]
  assign io_pc = IFU_io_to_ds_pc; // @[top.scala 101:11]
  assign io_step = diff_step; // @[top.scala 106:13]
  assign Register_clock = clock;
  assign Register_io_raddr1 = IDU_io_raddr1; // @[top.scala 54:20]
  assign Register_io_raddr2 = IDU_io_raddr2; // @[top.scala 55:20]
  assign Register_io_we = WBU_io_we; // @[top.scala 97:16]
  assign Register_io_waddr = WBU_io_waddr; // @[top.scala 98:19]
  assign Register_io_wdata = WBU_io_wdata; // @[top.scala 99:19]
  assign IFU_clock = clock;
  assign IFU_reset = reset;
  assign IFU_io_ds_allowin = IDU_io_ds_allowin; // @[top.scala 42:20]
  assign IFU_io_br_taken = IDU_io_br_taken; // @[top.scala 43:18]
  assign IFU_io_br_target = IDU_io_br_target; // @[top.scala 44:19]
  assign IFU_io_axi_in_rdata = i_cache_io_to_ifu_rdata; // @[top.scala 29:16]
  assign IFU_io_axi_in_rlast = i_cache_io_to_ifu_rlast; // @[top.scala 29:16]
  assign IFU_io_axi_in_rvalid = i_cache_io_to_ifu_rvalid; // @[top.scala 29:16]
  assign IFU_io_fence = IDU_io_fence; // @[top.scala 46:15]
  assign IFU_io_cache_init = i_cache_io_cache_init; // @[top.scala 47:20]
  assign IDU_clock = clock;
  assign IDU_reset = reset;
  assign IDU_io_pc = IFU_io_to_ds_pc; // @[top.scala 50:12]
  assign IDU_io_fs_to_ds_valid = IFU_io_fs_to_ds_valid; // @[top.scala 51:24]
  assign IDU_io_es_allowin = EXU_io_es_allowin; // @[top.scala 52:20]
  assign IDU_io_from_fs_inst = IFU_io_inst; // @[top.scala 53:22]
  assign IDU_io_rdata1 = Register_io_rdata1; // @[top.scala 56:16]
  assign IDU_io_rdata2 = Register_io_rdata2; // @[top.scala 57:16]
  assign IDU_io_es_rf_we = EXU_io_es_rf_we; // @[top.scala 60:18]
  assign IDU_io_ms_rf_we = LSU_io_ms_rf_we; // @[top.scala 63:18]
  assign IDU_io_ws_rf_we = WBU_io_ws_rf_we; // @[top.scala 66:18]
  assign IDU_io_es_valid = EXU_io_es_valid; // @[top.scala 58:18]
  assign IDU_io_ms_valid = LSU_io_ms_valid; // @[top.scala 61:18]
  assign IDU_io_ws_valid = WBU_io_ws_valid; // @[top.scala 64:18]
  assign IDU_io_es_rf_dst = EXU_io_es_rf_dst; // @[top.scala 59:19]
  assign IDU_io_ms_rf_dst = LSU_io_ms_rf_dst; // @[top.scala 62:19]
  assign IDU_io_ws_rf_dst = WBU_io_ws_rf_dst; // @[top.scala 65:19]
  assign EXU_clock = clock;
  assign EXU_reset = reset;
  assign EXU_io_pc = IDU_io_to_es_pc; // @[top.scala 68:12]
  assign EXU_io_ds_to_es_valid = IDU_io_ds_to_es_valid; // @[top.scala 69:24]
  assign EXU_io_ms_allowin = LSU_io_ms_allowin; // @[top.scala 70:20]
  assign EXU_io_ALUop = IDU_io_ALUop; // @[top.scala 71:15]
  assign EXU_io_src1_value = IDU_io_src1; // @[top.scala 72:20]
  assign EXU_io_src2_value = IDU_io_src2; // @[top.scala 73:20]
  assign EXU_io_rf_dst = IDU_io_rf_dst; // @[top.scala 74:16]
  assign EXU_io_store_data = IDU_io_store_data; // @[top.scala 75:20]
  assign EXU_io_load_type = IDU_io_load_type; // @[top.scala 77:19]
  assign EXU_io_ctrl_sign_reg_write = IDU_io_ctrl_sign_reg_write; // @[top.scala 76:19]
  assign EXU_io_ctrl_sign_Writemem_en = IDU_io_ctrl_sign_Writemem_en; // @[top.scala 76:19]
  assign EXU_io_ctrl_sign_Readmem_en = IDU_io_ctrl_sign_Readmem_en; // @[top.scala 76:19]
  assign EXU_io_ctrl_sign_Wmask = IDU_io_ctrl_sign_Wmask; // @[top.scala 76:19]
  assign LSU_clock = clock;
  assign LSU_reset = reset;
  assign LSU_io_pc = EXU_io_to_ms_pc; // @[top.scala 79:12]
  assign LSU_io_es_to_ms_valid = EXU_io_es_to_ms_valid; // @[top.scala 80:24]
  assign LSU_io_rf_we = EXU_io_to_ms_rf_we; // @[top.scala 82:15]
  assign LSU_io_rf_dst = EXU_io_to_ms_rf_dst; // @[top.scala 83:16]
  assign LSU_io_alu_res = EXU_io_to_ms_alures; // @[top.scala 84:17]
  assign LSU_io_store_data = EXU_io_to_ms_store_data; // @[top.scala 85:20]
  assign LSU_io_load_type = EXU_io_to_ms_load_type; // @[top.scala 90:19]
  assign LSU_io_wen = EXU_io_to_ms_wen; // @[top.scala 86:13]
  assign LSU_io_wstrb = EXU_io_to_ms_wstrb; // @[top.scala 87:15]
  assign LSU_io_ren = EXU_io_to_ms_ren; // @[top.scala 88:13]
  assign LSU_io_maddr = EXU_io_to_ms_maddr; // @[top.scala 89:15]
  assign LSU_io_axi_in_rdata = d_cache_io_to_lsu_rdata; // @[top.scala 34:16]
  assign LSU_io_axi_in_rvalid = d_cache_io_to_lsu_rvalid; // @[top.scala 34:16]
  assign LSU_io_axi_in_wready = d_cache_io_to_lsu_wready; // @[top.scala 34:16]
  assign WBU_clock = clock;
  assign WBU_reset = reset;
  assign WBU_io_pc = LSU_io_to_ws_pc; // @[top.scala 92:12]
  assign WBU_io_ms_to_ws_valid = LSU_io_ms_to_ws_valid; // @[top.scala 93:24]
  assign WBU_io_ms_final_res = LSU_io_ms_final_res; // @[top.scala 94:22]
  assign WBU_io_rf_we = LSU_io_to_ws_rf_we; // @[top.scala 95:15]
  assign WBU_io_rf_dst = LSU_io_to_ws_rf_dst; // @[top.scala 96:16]
  assign arbiter_clock = clock;
  assign arbiter_reset = reset;
  assign arbiter_io_ifu_axi_in_araddr = i_cache_io_to_axi_araddr; // @[top.scala 27:27]
  assign arbiter_io_ifu_axi_in_arlen = i_cache_io_to_axi_arlen; // @[top.scala 27:27]
  assign arbiter_io_ifu_axi_in_arvalid = i_cache_io_to_axi_arvalid; // @[top.scala 27:27]
  assign arbiter_io_ifu_axi_in_rready = i_cache_io_to_axi_rready; // @[top.scala 27:27]
  assign arbiter_io_lsu_axi_in_araddr = d_cache_io_to_axi_araddr; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_arlen = d_cache_io_to_axi_arlen; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_arvalid = d_cache_io_to_axi_arvalid; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_rready = d_cache_io_to_axi_rready; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_awaddr = d_cache_io_to_axi_awaddr; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_awlen = d_cache_io_to_axi_awlen; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_awvalid = d_cache_io_to_axi_awvalid; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_wdata = d_cache_io_to_axi_wdata; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_wstrb = d_cache_io_to_axi_wstrb; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_wvalid = d_cache_io_to_axi_wvalid; // @[top.scala 32:27]
  assign arbiter_io_lsu_axi_in_bready = d_cache_io_to_axi_bready; // @[top.scala 32:27]
  assign arbiter_io_axi_in_rdata = axi_io_axi_out_rdata; // @[top.scala 37:23]
  assign arbiter_io_axi_in_rlast = axi_io_axi_out_rlast; // @[top.scala 37:23]
  assign arbiter_io_axi_in_rvalid = axi_io_axi_out_rvalid; // @[top.scala 37:23]
  assign arbiter_io_axi_in_wready = axi_io_axi_out_wready; // @[top.scala 37:23]
  assign arbiter_io_axi_in_bvalid = axi_io_axi_out_bvalid; // @[top.scala 37:23]
  assign i_cache_clock = clock;
  assign i_cache_reset = reset;
  assign i_cache_io_from_ifu_araddr = IFU_io_axi_out_araddr; // @[top.scala 30:25]
  assign i_cache_io_from_ifu_arvalid = IFU_io_axi_out_arvalid; // @[top.scala 30:25]
  assign i_cache_io_from_ifu_rready = IFU_io_axi_out_rready; // @[top.scala 30:25]
  assign i_cache_io_from_axi_rdata = arbiter_io_ifu_axi_out_rdata; // @[top.scala 28:25]
  assign i_cache_io_from_axi_rlast = arbiter_io_ifu_axi_out_rlast; // @[top.scala 28:25]
  assign i_cache_io_from_axi_rvalid = arbiter_io_ifu_axi_out_rvalid; // @[top.scala 28:25]
  assign i_cache_io_clear_cache = IFU_io_clear_cache; // @[top.scala 48:28]
  assign d_cache_clock = clock;
  assign d_cache_reset = reset;
  assign d_cache_io_from_lsu_araddr = LSU_io_axi_out_araddr; // @[top.scala 35:25]
  assign d_cache_io_from_lsu_arvalid = LSU_io_axi_out_arvalid; // @[top.scala 35:25]
  assign d_cache_io_from_lsu_awaddr = LSU_io_axi_out_awaddr; // @[top.scala 35:25]
  assign d_cache_io_from_lsu_awvalid = LSU_io_axi_out_awvalid; // @[top.scala 35:25]
  assign d_cache_io_from_lsu_wdata = LSU_io_axi_out_wdata; // @[top.scala 35:25]
  assign d_cache_io_from_lsu_wstrb = LSU_io_axi_out_wstrb; // @[top.scala 35:25]
  assign d_cache_io_from_lsu_wvalid = LSU_io_axi_out_wvalid; // @[top.scala 35:25]
  assign d_cache_io_from_axi_rdata = arbiter_io_lsu_axi_out_rdata; // @[top.scala 33:25]
  assign d_cache_io_from_axi_rlast = arbiter_io_lsu_axi_out_rlast; // @[top.scala 33:25]
  assign d_cache_io_from_axi_rvalid = arbiter_io_lsu_axi_out_rvalid; // @[top.scala 33:25]
  assign d_cache_io_from_axi_wready = arbiter_io_lsu_axi_out_wready; // @[top.scala 33:25]
  assign d_cache_io_from_axi_bvalid = arbiter_io_lsu_axi_out_bvalid; // @[top.scala 33:25]
  assign axi_clock = clock;
  assign axi_reset = reset;
  assign axi_io_axi_in_araddr = arbiter_io_axi_out_araddr; // @[top.scala 38:19]
  assign axi_io_axi_in_arlen = arbiter_io_axi_out_arlen; // @[top.scala 38:19]
  assign axi_io_axi_in_arvalid = arbiter_io_axi_out_arvalid; // @[top.scala 38:19]
  assign axi_io_axi_in_rready = arbiter_io_axi_out_rready; // @[top.scala 38:19]
  assign axi_io_axi_in_awaddr = arbiter_io_axi_out_awaddr; // @[top.scala 38:19]
  assign axi_io_axi_in_awlen = arbiter_io_axi_out_awlen; // @[top.scala 38:19]
  assign axi_io_axi_in_awvalid = arbiter_io_axi_out_awvalid; // @[top.scala 38:19]
  assign axi_io_axi_in_wdata = arbiter_io_axi_out_wdata; // @[top.scala 38:19]
  assign axi_io_axi_in_wstrb = arbiter_io_axi_out_wstrb; // @[top.scala 38:19]
  assign axi_io_axi_in_wvalid = arbiter_io_axi_out_wvalid; // @[top.scala 38:19]
  assign axi_io_axi_in_bready = arbiter_io_axi_out_bready; // @[top.scala 38:19]
  assign dpi_flag = {{31'd0}, IDU_io_ALUop == 32'h2}; // @[top.scala 108:17]
  assign dpi_ecall_flag = {{31'd0}, IDU_io_ALUop == 32'h3d}; // @[top.scala 109:23]
  assign dpi_pc = WBU_io_ws_valid ? WBU_io_ws_pc : _dpi_io_pc_T_2; // @[top.scala 110:21]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 104:28]
      diff_step <= 1'h0; // @[top.scala 104:28]
    end else begin
      diff_step <= WBU_io_ws_valid; // @[top.scala 105:15]
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
