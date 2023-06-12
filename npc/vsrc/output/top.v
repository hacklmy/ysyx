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
  wire [2:0] booth_partial_io_y; // @[Mul.scala 92:43]
  wire [63:0] booth_partial_io_x; // @[Mul.scala 92:43]
  wire  booth_partial_io_c; // @[Mul.scala 92:43]
  wire [63:0] booth_partial_io_p; // @[Mul.scala 92:43]
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
  wire [63:0] _res_T_1 = res + booth_partial_io_p; // @[Mul.scala 96:32]
  wire [63:0] _GEN_25 = {{63'd0}, booth_partial_io_c}; // @[Mul.scala 96:53]
  wire [63:0] _res_T_3 = _res_T_1 + _GEN_25; // @[Mul.scala 96:53]
  wire [129:0] _src1_T = {src1, 2'h0}; // @[Mul.scala 98:34]
  wire [63:0] _GEN_3 = src2 != 65'h0 ? _res_T_3 : res; // @[Mul.scala 54:22 95:33 96:25]
  wire [129:0] _GEN_5 = src2 != 65'h0 ? _src1_T : {{2'd0}, src1}; // @[Mul.scala 58:23 95:33 98:26]
  wire [1:0] _GEN_11 = io_out_ready ? 2'h0 : state; // @[Mul.scala 106:41 107:23 56:24]
  wire [63:0] _GEN_14 = 2'h1 == state ? _GEN_3 : res; // @[Mul.scala 72:18 54:22]
  wire [129:0] _GEN_16 = 2'h1 == state ? _GEN_5 : {{2'd0}, src1}; // @[Mul.scala 72:18 58:23]
  wire [129:0] _GEN_18 = 2'h0 == state ? {{2'd0}, _GEN_1} : _GEN_16; // @[Mul.scala 72:18]
  wire [63:0] _GEN_20 = 2'h0 == state ? res : _GEN_14; // @[Mul.scala 72:18 54:22]
  wire  _T_9 = state == 2'h2; // @[Mul.scala 121:21]
  wire [31:0] _io_result_hi_T_1 = {sign,res[62:32]}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_27 = state == 2'h2 ? _io_result_hi_T_1 : 32'h0; // @[Mul.scala 121:35 138:22]
  wire [31:0] _GEN_28 = state == 2'h2 ? res[31:0] : 32'h0; // @[Mul.scala 121:35 139:22]
  wire  _GEN_31 = state == 2'h1 ? 1'h0 : _T_9; // @[Mul.scala 116:33 118:22]
  wire [31:0] _GEN_32 = state == 2'h1 ? 32'h0 : _GEN_27; // @[Mul.scala 116:33 119:22]
  wire [31:0] _GEN_33 = state == 2'h1 ? 32'h0 : _GEN_28; // @[Mul.scala 116:33 120:22]
  wire [129:0] _GEN_30 = reset ? 130'h0 : _GEN_18; // @[Mul.scala 58:{23,23}]
  partial_product booth_partial ( // @[Mul.scala 92:43]
    .io_y(booth_partial_io_y),
    .io_x(booth_partial_io_x),
    .io_c(booth_partial_io_c),
    .io_p(booth_partial_io_p)
  );
  assign io_out_valid = state == 2'h0 ? 1'h0 : _GEN_31; // @[Mul.scala 111:23 113:22]
  assign io_result_hi = state == 2'h0 ? 32'h0 : _GEN_32; // @[Mul.scala 111:23 114:22]
  assign io_result_lo = state == 2'h0 ? 32'h0 : _GEN_33; // @[Mul.scala 111:23 115:22]
  assign booth_partial_io_y = src2[2:0]; // @[Mul.scala 93:43]
  assign booth_partial_io_x = src1[63:0]; // @[Mul.scala 94:36]
  always @(posedge clock) begin
    if (reset) begin // @[Mul.scala 54:22]
      res <= 64'h0; // @[Mul.scala 54:22]
    end else if (state == 2'h0) begin // @[Mul.scala 111:23]
      res <= _GEN_20;
    end else if (state == 2'h1) begin // @[Mul.scala 116:33]
      res <= _GEN_20;
    end else if (state == 2'h2) begin // @[Mul.scala 121:35]
      res <= 64'h0;
    end else begin
      res <= _GEN_20;
    end
    if (reset) begin // @[Mul.scala 56:24]
      state <= 2'h0; // @[Mul.scala 56:24]
    end else if (2'h0 == state) begin // @[Mul.scala 72:18]
      if (io_mul_valid) begin // @[Mul.scala 78:44]
        state <= 2'h1; // @[Mul.scala 79:23]
      end
    end else if (2'h1 == state) begin // @[Mul.scala 72:18]
      if (!(src2 != 65'h0)) begin // @[Mul.scala 95:33]
        state <= 2'h2; // @[Mul.scala 100:27]
      end
    end else if (2'h2 == state) begin // @[Mul.scala 72:18]
      state <= _GEN_11;
    end
    src1 <= _GEN_30[127:0]; // @[Mul.scala 58:{23,23}]
    if (reset) begin // @[Mul.scala 59:23]
      src2 <= 65'h0; // @[Mul.scala 59:23]
    end else if (2'h0 == state) begin // @[Mul.scala 72:18]
      if (io_mul_valid) begin // @[Mul.scala 78:44]
        src2 <= {{1'd0}, real_er}; // @[Mul.scala 81:22]
      end
    end else if (2'h1 == state) begin // @[Mul.scala 72:18]
      if (src2 != 65'h0) begin // @[Mul.scala 95:33]
        src2 <= {{2'd0}, src2[64:2]}; // @[Mul.scala 97:26]
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
  input         io_out_ready,
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
  wire  _GEN_0 = io_div_valid | div_start; // @[Div.scala 63:27 64:23 52:28]
  wire [127:0] src1 = {{32'd0}, _src1_T_1}; // @[Div.scala 46:20 48:10]
  wire [127:0] _GEN_1 = io_div_valid ? src1 : div_cand; // @[Div.scala 63:27 65:22 51:27]
  wire [63:0] _GEN_2 = io_div_valid ? 64'h0 : quotient; // @[Div.scala 63:27 66:22 54:27]
  wire [31:0] _GEN_3 = io_div_valid ? 32'h40 : step_num; // @[Div.scala 63:27 68:22 56:27]
  wire [64:0] sub_res = div_cand[127:63] - src2; // @[Div.scala 76:41]
  wire [64:0] _quotient_T_2 = {quotient, 1'h0}; // @[Div.scala 78:57]
  wire [64:0] _quotient_T_4 = _quotient_T_2 | 65'h1; // @[Div.scala 78:81]
  wire [64:0] _quotient_T_5 = sub_res[64] ? _quotient_T_2 : _quotient_T_4; // @[Div.scala 78:28]
  wire [127:0] update_cand = {sub_res, 63'h0}; // @[Div.scala 79:36]
  wire [127:0] _new_cand_T_2 = div_cand & 128'h7fffffffffffffff; // @[Div.scala 80:68]
  wire [127:0] _new_cand_T_3 = _new_cand_T_2 | update_cand; // @[Div.scala 80:93]
  wire [127:0] new_cand = sub_res[64] ? div_cand : _new_cand_T_3; // @[Div.scala 80:28]
  wire [128:0] _div_cand_T = {new_cand, 1'h0}; // @[Div.scala 81:34]
  wire [31:0] _step_num_T_1 = step_num - 32'h1; // @[Div.scala 82:34]
  wire [63:0] _io_remainder_T_3 = ~div_cand[127:64]; // @[Div.scala 90:77]
  wire [63:0] _io_remainder_T_5 = _io_remainder_T_3 + 64'h1; // @[Div.scala 90:94]
  wire [63:0] _io_remainder_T_7 = dend_neg ? _io_remainder_T_5 : div_cand[127:64]; // @[Div.scala 90:56]
  wire [63:0] _io_remainder_T_9 = io_div_signed ? _io_remainder_T_7 : div_cand[127:64]; // @[Div.scala 90:32]
  wire [63:0] _io_quotient_T_2 = ~quotient; // @[Div.scala 92:75]
  wire [63:0] _io_quotient_T_4 = _io_quotient_T_2 + 64'h1; // @[Div.scala 92:84]
  wire [63:0] _io_quotient_T_5 = quotient_neg ? _io_quotient_T_4 : quotient; // @[Div.scala 92:55]
  wire [63:0] _io_quotient_T_6 = io_div_signed ? _io_quotient_T_5 : quotient; // @[Div.scala 92:31]
  wire [64:0] _GEN_9 = $signed(step_num) > 32'sh0 ? _quotient_T_5 : {{1'd0}, _GEN_2}; // @[Div.scala 72:36 78:22]
  wire [128:0] _GEN_10 = $signed(step_num) > 32'sh0 ? _div_cand_T : {{1'd0}, _GEN_1}; // @[Div.scala 72:36 81:22]
  wire [63:0] _GEN_12 = $signed(step_num) > 32'sh0 ? 64'h0 : _io_remainder_T_9; // @[Div.scala 72:36 83:26 90:26]
  wire  _GEN_13 = $signed(step_num) > 32'sh0 ? 1'h0 : 1'h1; // @[Div.scala 72:36 84:26 91:26]
  wire [63:0] _GEN_14 = $signed(step_num) > 32'sh0 ? 64'h0 : _io_quotient_T_6; // @[Div.scala 72:36 85:25 92:25]
  wire [64:0] _GEN_16 = div_start ? _GEN_9 : {{1'd0}, _GEN_2}; // @[Div.scala 71:20]
  wire [128:0] _GEN_17 = div_start ? _GEN_10 : {{1'd0}, _GEN_1}; // @[Div.scala 71:20]
  wire [128:0] _GEN_23 = reset ? 129'h0 : _GEN_17; // @[Div.scala 51:{27,27}]
  wire [64:0] _GEN_24 = reset ? 65'h0 : _GEN_16; // @[Div.scala 54:{27,27}]
  assign io_out_valid = div_start & _GEN_13; // @[Div.scala 71:20 96:22]
  assign io_quotient = div_start ? _GEN_14 : 64'h0; // @[Div.scala 71:20 97:21]
  assign io_remainder = div_start ? _GEN_12 : 64'h0; // @[Div.scala 71:20 95:22]
  always @(posedge clock) begin
    div_cand <= _GEN_23[127:0]; // @[Div.scala 51:{27,27}]
    if (reset) begin // @[Div.scala 52:28]
      div_start <= 1'h0; // @[Div.scala 52:28]
    end else if (div_start) begin // @[Div.scala 71:20]
      if ($signed(step_num) > 32'sh0) begin // @[Div.scala 72:36]
        div_start <= _GEN_0;
      end else if (io_out_ready) begin // @[Div.scala 87:31]
        div_start <= 1'h0; // @[Div.scala 88:27]
      end else begin
        div_start <= _GEN_0;
      end
    end else begin
      div_start <= _GEN_0;
    end
    quotient <= _GEN_24[63:0]; // @[Div.scala 54:{27,27}]
    if (reset) begin // @[Div.scala 56:27]
      step_num <= 32'h0; // @[Div.scala 56:27]
    end else if (div_start) begin // @[Div.scala 71:20]
      if ($signed(step_num) > 32'sh0) begin // @[Div.scala 72:36]
        step_num <= _step_num_T_1; // @[Div.scala 82:22]
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
  input         io_res_ready,
  output        io_alu_busy,
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
  wire  Div_io_out_ready; // @[ALU.scala 62:28]
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
    .io_out_ready(Div_io_out_ready),
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
  assign Div_io_out_ready = io_res_ready; // @[ALU.scala 77:26]
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
  wire  ALU_io_res_ready; // @[EXU.scala 37:21]
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
    .io_res_ready(ALU_io_res_ready),
    .io_alu_busy(ALU_io_alu_busy),
    .io_alu_res(ALU_io_alu_res)
  );
  assign io_es_allowin = ~es_valid | es_ready_go & io_ms_allowin; // @[EXU.scala 77:29]
  assign io_es_to_ms_valid = es_valid & es_ready_go; // @[EXU.scala 76:32]
  assign io_to_ms_pc = es_pc; // @[EXU.scala 90:17]
  assign io_to_ms_alures = ALU_io_alu_res; // @[EXU.scala 53:23 85:13]
  assign io_to_ms_store_data = store_data; // @[EXU.scala 93:25]
  assign io_to_ms_wen = st_we; // @[EXU.scala 94:18]
  assign io_to_ms_wstrb = st_wstrb; // @[EXU.scala 95:20]
  assign io_to_ms_ren = ld_we; // @[EXU.scala 96:18]
  assign io_to_ms_maddr = ALU_io_alu_res; // @[EXU.scala 53:23 85:13]
  assign io_to_ms_rf_dst = es_rd; // @[EXU.scala 98:21]
  assign io_to_ms_rf_we = es_rf_we; // @[EXU.scala 99:20]
  assign io_to_ms_load_type = load_type; // @[EXU.scala 103:24]
  assign io_es_valid = es_valid; // @[EXU.scala 100:17]
  assign io_es_rf_we = es_rf_we; // @[EXU.scala 102:17]
  assign io_es_rf_dst = es_rd; // @[EXU.scala 101:18]
  assign ALU_clock = clock;
  assign ALU_reset = reset;
  assign ALU_io_src1_value = ALUop == 32'h6 ? es_pc : src1_value; // @[EXU.scala 81:26]
  assign ALU_io_src2_value = src2_value; // @[EXU.scala 82:20]
  assign ALU_io_ALUop = ALUop; // @[EXU.scala 83:15]
  assign ALU_io_src_valid = es_valid; // @[EXU.scala 84:19]
  assign ALU_io_res_ready = io_ms_allowin; // @[EXU.scala 86:19]
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
  reg [63:0] _RAND_96;
  reg [63:0] _RAND_97;
  reg [63:0] _RAND_98;
  reg [63:0] _RAND_99;
  reg [63:0] _RAND_100;
  reg [63:0] _RAND_101;
  reg [63:0] _RAND_102;
  reg [63:0] _RAND_103;
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
  reg [63:0] receive_data_0; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_1; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_2; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_3; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_4; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_5; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_6; // @[i_cache.scala 29:31]
  reg [63:0] receive_data_7; // @[i_cache.scala 29:31]
  reg [2:0] receive_num; // @[i_cache.scala 30:30]
  reg [1:0] quene_0; // @[i_cache.scala 31:24]
  reg [1:0] quene_1; // @[i_cache.scala 31:24]
  reg [1:0] quene_2; // @[i_cache.scala 31:24]
  reg [1:0] quene_3; // @[i_cache.scala 31:24]
  reg [1:0] quene_4; // @[i_cache.scala 31:24]
  reg [1:0] quene_5; // @[i_cache.scala 31:24]
  reg [1:0] quene_6; // @[i_cache.scala 31:24]
  reg [1:0] quene_7; // @[i_cache.scala 31:24]
  reg [1:0] quene_8; // @[i_cache.scala 31:24]
  reg [1:0] quene_9; // @[i_cache.scala 31:24]
  reg [1:0] quene_10; // @[i_cache.scala 31:24]
  reg [1:0] quene_11; // @[i_cache.scala 31:24]
  reg [1:0] quene_12; // @[i_cache.scala 31:24]
  reg [1:0] quene_13; // @[i_cache.scala 31:24]
  reg [1:0] quene_14; // @[i_cache.scala 31:24]
  reg [1:0] quene_15; // @[i_cache.scala 31:24]
  wire [5:0] offset = io_from_ifu_araddr[5:0]; // @[i_cache.scala 33:36]
  wire [3:0] index = io_from_ifu_araddr[9:6]; // @[i_cache.scala 34:35]
  wire [21:0] tag = io_from_ifu_araddr[31:10]; // @[i_cache.scala 35:33]
  wire [8:0] shift_bit = {offset, 3'h0}; // @[i_cache.scala 36:28]
  wire [31:0] _GEN_1 = 4'h1 == index ? tag_0_1 : tag_0_0; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_2 = 4'h2 == index ? tag_0_2 : _GEN_1; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_3 = 4'h3 == index ? tag_0_3 : _GEN_2; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_4 = 4'h4 == index ? tag_0_4 : _GEN_3; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_5 = 4'h5 == index ? tag_0_5 : _GEN_4; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_6 = 4'h6 == index ? tag_0_6 : _GEN_5; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_7 = 4'h7 == index ? tag_0_7 : _GEN_6; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_8 = 4'h8 == index ? tag_0_8 : _GEN_7; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_9 = 4'h9 == index ? tag_0_9 : _GEN_8; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_10 = 4'ha == index ? tag_0_10 : _GEN_9; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_11 = 4'hb == index ? tag_0_11 : _GEN_10; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_12 = 4'hc == index ? tag_0_12 : _GEN_11; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_13 = 4'hd == index ? tag_0_13 : _GEN_12; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_14 = 4'he == index ? tag_0_14 : _GEN_13; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_15 = 4'hf == index ? tag_0_15 : _GEN_14; // @[i_cache.scala 38:{31,31}]
  wire [31:0] _GEN_1243 = {{10'd0}, tag}; // @[i_cache.scala 38:31]
  wire  _GEN_17 = 4'h1 == index ? valid_0_1 : valid_0_0; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_18 = 4'h2 == index ? valid_0_2 : _GEN_17; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_19 = 4'h3 == index ? valid_0_3 : _GEN_18; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_20 = 4'h4 == index ? valid_0_4 : _GEN_19; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_21 = 4'h5 == index ? valid_0_5 : _GEN_20; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_22 = 4'h6 == index ? valid_0_6 : _GEN_21; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_23 = 4'h7 == index ? valid_0_7 : _GEN_22; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_24 = 4'h8 == index ? valid_0_8 : _GEN_23; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_25 = 4'h9 == index ? valid_0_9 : _GEN_24; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_26 = 4'ha == index ? valid_0_10 : _GEN_25; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_27 = 4'hb == index ? valid_0_11 : _GEN_26; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_28 = 4'hc == index ? valid_0_12 : _GEN_27; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_29 = 4'hd == index ? valid_0_13 : _GEN_28; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_30 = 4'he == index ? valid_0_14 : _GEN_29; // @[i_cache.scala 38:{57,57}]
  wire  _GEN_31 = 4'hf == index ? valid_0_15 : _GEN_30; // @[i_cache.scala 38:{57,57}]
  wire  way0_hit = _GEN_15 == _GEN_1243 & _GEN_31; // @[i_cache.scala 38:40]
  wire [31:0] _GEN_33 = 4'h1 == index ? tag_1_1 : tag_1_0; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_34 = 4'h2 == index ? tag_1_2 : _GEN_33; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_35 = 4'h3 == index ? tag_1_3 : _GEN_34; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_36 = 4'h4 == index ? tag_1_4 : _GEN_35; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_37 = 4'h5 == index ? tag_1_5 : _GEN_36; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_38 = 4'h6 == index ? tag_1_6 : _GEN_37; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_39 = 4'h7 == index ? tag_1_7 : _GEN_38; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_40 = 4'h8 == index ? tag_1_8 : _GEN_39; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_41 = 4'h9 == index ? tag_1_9 : _GEN_40; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_42 = 4'ha == index ? tag_1_10 : _GEN_41; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_43 = 4'hb == index ? tag_1_11 : _GEN_42; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_44 = 4'hc == index ? tag_1_12 : _GEN_43; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_45 = 4'hd == index ? tag_1_13 : _GEN_44; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_46 = 4'he == index ? tag_1_14 : _GEN_45; // @[i_cache.scala 40:{31,31}]
  wire [31:0] _GEN_47 = 4'hf == index ? tag_1_15 : _GEN_46; // @[i_cache.scala 40:{31,31}]
  wire  _GEN_49 = 4'h1 == index ? valid_1_1 : valid_1_0; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_50 = 4'h2 == index ? valid_1_2 : _GEN_49; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_51 = 4'h3 == index ? valid_1_3 : _GEN_50; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_52 = 4'h4 == index ? valid_1_4 : _GEN_51; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_53 = 4'h5 == index ? valid_1_5 : _GEN_52; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_54 = 4'h6 == index ? valid_1_6 : _GEN_53; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_55 = 4'h7 == index ? valid_1_7 : _GEN_54; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_56 = 4'h8 == index ? valid_1_8 : _GEN_55; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_57 = 4'h9 == index ? valid_1_9 : _GEN_56; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_58 = 4'ha == index ? valid_1_10 : _GEN_57; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_59 = 4'hb == index ? valid_1_11 : _GEN_58; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_60 = 4'hc == index ? valid_1_12 : _GEN_59; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_61 = 4'hd == index ? valid_1_13 : _GEN_60; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_62 = 4'he == index ? valid_1_14 : _GEN_61; // @[i_cache.scala 40:{57,57}]
  wire  _GEN_63 = 4'hf == index ? valid_1_15 : _GEN_62; // @[i_cache.scala 40:{57,57}]
  wire  way1_hit = _GEN_47 == _GEN_1243 & _GEN_63; // @[i_cache.scala 40:40]
  wire [1:0] _unuse_way_T_2 = ~_GEN_63 ? 2'h2 : 2'h0; // @[i_cache.scala 43:50]
  wire [1:0] unuse_way = ~_GEN_31 ? 2'h1 : _unuse_way_T_2; // @[i_cache.scala 43:21]
  reg [2:0] state; // @[i_cache.scala 45:24]
  wire [2:0] _GEN_66 = io_from_ifu_rready ? 3'h0 : state; // @[i_cache.scala 45:24 58:41 59:27]
  wire [2:0] _GEN_67 = way1_hit ? _GEN_66 : 3'h2; // @[i_cache.scala 62:33 67:23]
  wire [2:0] _GEN_68 = way1_hit ? receive_num : 3'h0; // @[i_cache.scala 30:30 62:33 69:29]
  wire [63:0] _GEN_71 = 3'h0 == receive_num ? io_from_axi_rdata : receive_data_0; // @[i_cache.scala 29:31 74:{43,43}]
  wire [63:0] _GEN_72 = 3'h1 == receive_num ? io_from_axi_rdata : receive_data_1; // @[i_cache.scala 29:31 74:{43,43}]
  wire [63:0] _GEN_73 = 3'h2 == receive_num ? io_from_axi_rdata : receive_data_2; // @[i_cache.scala 29:31 74:{43,43}]
  wire [63:0] _GEN_74 = 3'h3 == receive_num ? io_from_axi_rdata : receive_data_3; // @[i_cache.scala 29:31 74:{43,43}]
  wire [63:0] _GEN_75 = 3'h4 == receive_num ? io_from_axi_rdata : receive_data_4; // @[i_cache.scala 29:31 74:{43,43}]
  wire [63:0] _GEN_76 = 3'h5 == receive_num ? io_from_axi_rdata : receive_data_5; // @[i_cache.scala 29:31 74:{43,43}]
  wire [63:0] _GEN_77 = 3'h6 == receive_num ? io_from_axi_rdata : receive_data_6; // @[i_cache.scala 29:31 74:{43,43}]
  wire [63:0] _GEN_78 = 3'h7 == receive_num ? io_from_axi_rdata : receive_data_7; // @[i_cache.scala 29:31 74:{43,43}]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[i_cache.scala 75:44]
  wire [2:0] _GEN_79 = io_from_axi_rlast ? 3'h3 : state; // @[i_cache.scala 45:24 76:40 77:27]
  wire [63:0] _GEN_80 = io_from_axi_rvalid ? _GEN_71 : receive_data_0; // @[i_cache.scala 29:31 73:37]
  wire [63:0] _GEN_81 = io_from_axi_rvalid ? _GEN_72 : receive_data_1; // @[i_cache.scala 29:31 73:37]
  wire [63:0] _GEN_82 = io_from_axi_rvalid ? _GEN_73 : receive_data_2; // @[i_cache.scala 29:31 73:37]
  wire [63:0] _GEN_83 = io_from_axi_rvalid ? _GEN_74 : receive_data_3; // @[i_cache.scala 29:31 73:37]
  wire [63:0] _GEN_84 = io_from_axi_rvalid ? _GEN_75 : receive_data_4; // @[i_cache.scala 29:31 73:37]
  wire [63:0] _GEN_85 = io_from_axi_rvalid ? _GEN_76 : receive_data_5; // @[i_cache.scala 29:31 73:37]
  wire [63:0] _GEN_86 = io_from_axi_rvalid ? _GEN_77 : receive_data_6; // @[i_cache.scala 29:31 73:37]
  wire [63:0] _GEN_87 = io_from_axi_rvalid ? _GEN_78 : receive_data_7; // @[i_cache.scala 29:31 73:37]
  wire [2:0] _GEN_88 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[i_cache.scala 73:37 75:29 30:30]
  wire [2:0] _GEN_89 = io_from_axi_rvalid ? _GEN_79 : state; // @[i_cache.scala 45:24 73:37]
  wire [511:0] _ram_0_T = {receive_data_7,receive_data_6,receive_data_5,receive_data_4,receive_data_3,receive_data_2,
    receive_data_1,receive_data_0}; // @[Cat.scala 31:58]
  wire [511:0] _GEN_90 = 4'h0 == index ? _ram_0_T : ram_0_0; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_91 = 4'h1 == index ? _ram_0_T : ram_0_1; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_92 = 4'h2 == index ? _ram_0_T : ram_0_2; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_93 = 4'h3 == index ? _ram_0_T : ram_0_3; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_94 = 4'h4 == index ? _ram_0_T : ram_0_4; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_95 = 4'h5 == index ? _ram_0_T : ram_0_5; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_96 = 4'h6 == index ? _ram_0_T : ram_0_6; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_97 = 4'h7 == index ? _ram_0_T : ram_0_7; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_98 = 4'h8 == index ? _ram_0_T : ram_0_8; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_99 = 4'h9 == index ? _ram_0_T : ram_0_9; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_100 = 4'ha == index ? _ram_0_T : ram_0_10; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_101 = 4'hb == index ? _ram_0_T : ram_0_11; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_102 = 4'hc == index ? _ram_0_T : ram_0_12; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_103 = 4'hd == index ? _ram_0_T : ram_0_13; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_104 = 4'he == index ? _ram_0_T : ram_0_14; // @[i_cache.scala 19:24 84:{30,30}]
  wire [511:0] _GEN_105 = 4'hf == index ? _ram_0_T : ram_0_15; // @[i_cache.scala 19:24 84:{30,30}]
  wire [31:0] _GEN_106 = 4'h0 == index ? _GEN_1243 : tag_0_0; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_107 = 4'h1 == index ? _GEN_1243 : tag_0_1; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_108 = 4'h2 == index ? _GEN_1243 : tag_0_2; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_109 = 4'h3 == index ? _GEN_1243 : tag_0_3; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_110 = 4'h4 == index ? _GEN_1243 : tag_0_4; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_111 = 4'h5 == index ? _GEN_1243 : tag_0_5; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_112 = 4'h6 == index ? _GEN_1243 : tag_0_6; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_113 = 4'h7 == index ? _GEN_1243 : tag_0_7; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_114 = 4'h8 == index ? _GEN_1243 : tag_0_8; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_115 = 4'h9 == index ? _GEN_1243 : tag_0_9; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_116 = 4'ha == index ? _GEN_1243 : tag_0_10; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_117 = 4'hb == index ? _GEN_1243 : tag_0_11; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_118 = 4'hc == index ? _GEN_1243 : tag_0_12; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_119 = 4'hd == index ? _GEN_1243 : tag_0_13; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_120 = 4'he == index ? _GEN_1243 : tag_0_14; // @[i_cache.scala 21:24 85:{30,30}]
  wire [31:0] _GEN_121 = 4'hf == index ? _GEN_1243 : tag_0_15; // @[i_cache.scala 21:24 85:{30,30}]
  wire  _GEN_1247 = 4'h0 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_122 = 4'h0 == index | valid_0_0; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1249 = 4'h1 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_123 = 4'h1 == index | valid_0_1; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1254 = 4'h2 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_124 = 4'h2 == index | valid_0_2; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1259 = 4'h3 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_125 = 4'h3 == index | valid_0_3; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1263 = 4'h4 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_126 = 4'h4 == index | valid_0_4; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1265 = 4'h5 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_127 = 4'h5 == index | valid_0_5; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1266 = 4'h6 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_128 = 4'h6 == index | valid_0_6; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1267 = 4'h7 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_129 = 4'h7 == index | valid_0_7; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1268 = 4'h8 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_130 = 4'h8 == index | valid_0_8; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1269 = 4'h9 == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_131 = 4'h9 == index | valid_0_9; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1270 = 4'ha == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_132 = 4'ha == index | valid_0_10; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1271 = 4'hb == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_133 = 4'hb == index | valid_0_11; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1272 = 4'hc == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_134 = 4'hc == index | valid_0_12; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1273 = 4'hd == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_135 = 4'hd == index | valid_0_13; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1274 = 4'he == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_136 = 4'he == index | valid_0_14; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_1275 = 4'hf == index; // @[i_cache.scala 23:26 86:{32,32}]
  wire  _GEN_137 = 4'hf == index | valid_0_15; // @[i_cache.scala 23:26 86:{32,32}]
  wire [1:0] _GEN_139 = 4'h1 == index ? quene_1 : quene_0; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_140 = 4'h2 == index ? quene_2 : _GEN_139; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_141 = 4'h3 == index ? quene_3 : _GEN_140; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_142 = 4'h4 == index ? quene_4 : _GEN_141; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_143 = 4'h5 == index ? quene_5 : _GEN_142; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_144 = 4'h6 == index ? quene_6 : _GEN_143; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_145 = 4'h7 == index ? quene_7 : _GEN_144; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_146 = 4'h8 == index ? quene_8 : _GEN_145; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_147 = 4'h9 == index ? quene_9 : _GEN_146; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_148 = 4'ha == index ? quene_10 : _GEN_147; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_149 = 4'hb == index ? quene_11 : _GEN_148; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_150 = 4'hc == index ? quene_12 : _GEN_149; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_151 = 4'hd == index ? quene_13 : _GEN_150; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_152 = 4'he == index ? quene_14 : _GEN_151; // @[i_cache.scala 87:{46,46}]
  wire [1:0] _GEN_153 = 4'hf == index ? quene_15 : _GEN_152; // @[i_cache.scala 87:{46,46}]
  wire [2:0] _quene_T = {_GEN_153, 1'h0}; // @[i_cache.scala 87:46]
  wire [1:0] _GEN_154 = 4'h0 == index ? _quene_T[1:0] : quene_0; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_155 = 4'h1 == index ? _quene_T[1:0] : quene_1; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_156 = 4'h2 == index ? _quene_T[1:0] : quene_2; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_157 = 4'h3 == index ? _quene_T[1:0] : quene_3; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_158 = 4'h4 == index ? _quene_T[1:0] : quene_4; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_159 = 4'h5 == index ? _quene_T[1:0] : quene_5; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_160 = 4'h6 == index ? _quene_T[1:0] : quene_6; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_161 = 4'h7 == index ? _quene_T[1:0] : quene_7; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_162 = 4'h8 == index ? _quene_T[1:0] : quene_8; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_163 = 4'h9 == index ? _quene_T[1:0] : quene_9; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_164 = 4'ha == index ? _quene_T[1:0] : quene_10; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_165 = 4'hb == index ? _quene_T[1:0] : quene_11; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_166 = 4'hc == index ? _quene_T[1:0] : quene_12; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_167 = 4'hd == index ? _quene_T[1:0] : quene_13; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_168 = 4'he == index ? _quene_T[1:0] : quene_14; // @[i_cache.scala 31:24 87:{30,30}]
  wire [1:0] _GEN_169 = 4'hf == index ? _quene_T[1:0] : quene_15; // @[i_cache.scala 31:24 87:{30,30}]
  wire [511:0] _GEN_170 = 4'h0 == index ? _ram_0_T : ram_1_0; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_171 = 4'h1 == index ? _ram_0_T : ram_1_1; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_172 = 4'h2 == index ? _ram_0_T : ram_1_2; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_173 = 4'h3 == index ? _ram_0_T : ram_1_3; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_174 = 4'h4 == index ? _ram_0_T : ram_1_4; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_175 = 4'h5 == index ? _ram_0_T : ram_1_5; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_176 = 4'h6 == index ? _ram_0_T : ram_1_6; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_177 = 4'h7 == index ? _ram_0_T : ram_1_7; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_178 = 4'h8 == index ? _ram_0_T : ram_1_8; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_179 = 4'h9 == index ? _ram_0_T : ram_1_9; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_180 = 4'ha == index ? _ram_0_T : ram_1_10; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_181 = 4'hb == index ? _ram_0_T : ram_1_11; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_182 = 4'hc == index ? _ram_0_T : ram_1_12; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_183 = 4'hd == index ? _ram_0_T : ram_1_13; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_184 = 4'he == index ? _ram_0_T : ram_1_14; // @[i_cache.scala 20:24 89:{30,30}]
  wire [511:0] _GEN_185 = 4'hf == index ? _ram_0_T : ram_1_15; // @[i_cache.scala 20:24 89:{30,30}]
  wire [31:0] _GEN_186 = 4'h0 == index ? _GEN_1243 : tag_1_0; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_187 = 4'h1 == index ? _GEN_1243 : tag_1_1; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_188 = 4'h2 == index ? _GEN_1243 : tag_1_2; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_189 = 4'h3 == index ? _GEN_1243 : tag_1_3; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_190 = 4'h4 == index ? _GEN_1243 : tag_1_4; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_191 = 4'h5 == index ? _GEN_1243 : tag_1_5; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_192 = 4'h6 == index ? _GEN_1243 : tag_1_6; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_193 = 4'h7 == index ? _GEN_1243 : tag_1_7; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_194 = 4'h8 == index ? _GEN_1243 : tag_1_8; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_195 = 4'h9 == index ? _GEN_1243 : tag_1_9; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_196 = 4'ha == index ? _GEN_1243 : tag_1_10; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_197 = 4'hb == index ? _GEN_1243 : tag_1_11; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_198 = 4'hc == index ? _GEN_1243 : tag_1_12; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_199 = 4'hd == index ? _GEN_1243 : tag_1_13; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_200 = 4'he == index ? _GEN_1243 : tag_1_14; // @[i_cache.scala 22:24 90:{30,30}]
  wire [31:0] _GEN_201 = 4'hf == index ? _GEN_1243 : tag_1_15; // @[i_cache.scala 22:24 90:{30,30}]
  wire  _GEN_202 = _GEN_1247 | valid_1_0; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_203 = _GEN_1249 | valid_1_1; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_204 = _GEN_1254 | valid_1_2; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_205 = _GEN_1259 | valid_1_3; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_206 = _GEN_1263 | valid_1_4; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_207 = _GEN_1265 | valid_1_5; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_208 = _GEN_1266 | valid_1_6; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_209 = _GEN_1267 | valid_1_7; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_210 = _GEN_1268 | valid_1_8; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_211 = _GEN_1269 | valid_1_9; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_212 = _GEN_1270 | valid_1_10; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_213 = _GEN_1271 | valid_1_11; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_214 = _GEN_1272 | valid_1_12; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_215 = _GEN_1273 | valid_1_13; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_216 = _GEN_1274 | valid_1_14; // @[i_cache.scala 24:26 91:{32,32}]
  wire  _GEN_217 = _GEN_1275 | valid_1_15; // @[i_cache.scala 24:26 91:{32,32}]
  wire [2:0] _quene_T_2 = _quene_T | 3'h1; // @[i_cache.scala 92:55]
  wire [1:0] _GEN_218 = 4'h0 == index ? _quene_T_2[1:0] : quene_0; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_219 = 4'h1 == index ? _quene_T_2[1:0] : quene_1; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_220 = 4'h2 == index ? _quene_T_2[1:0] : quene_2; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_221 = 4'h3 == index ? _quene_T_2[1:0] : quene_3; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_222 = 4'h4 == index ? _quene_T_2[1:0] : quene_4; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_223 = 4'h5 == index ? _quene_T_2[1:0] : quene_5; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_224 = 4'h6 == index ? _quene_T_2[1:0] : quene_6; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_225 = 4'h7 == index ? _quene_T_2[1:0] : quene_7; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_226 = 4'h8 == index ? _quene_T_2[1:0] : quene_8; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_227 = 4'h9 == index ? _quene_T_2[1:0] : quene_9; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_228 = 4'ha == index ? _quene_T_2[1:0] : quene_10; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_229 = 4'hb == index ? _quene_T_2[1:0] : quene_11; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_230 = 4'hc == index ? _quene_T_2[1:0] : quene_12; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_231 = 4'hd == index ? _quene_T_2[1:0] : quene_13; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_232 = 4'he == index ? _quene_T_2[1:0] : quene_14; // @[i_cache.scala 31:24 92:{30,30}]
  wire [1:0] _GEN_233 = 4'hf == index ? _quene_T_2[1:0] : quene_15; // @[i_cache.scala 31:24 92:{30,30}]
  wire [511:0] _GEN_362 = quene_1 == 2'h0 ? _GEN_90 : ram_0_0; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_363 = quene_1 == 2'h0 ? _GEN_91 : ram_0_1; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_364 = quene_1 == 2'h0 ? _GEN_92 : ram_0_2; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_365 = quene_1 == 2'h0 ? _GEN_93 : ram_0_3; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_366 = quene_1 == 2'h0 ? _GEN_94 : ram_0_4; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_367 = quene_1 == 2'h0 ? _GEN_95 : ram_0_5; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_368 = quene_1 == 2'h0 ? _GEN_96 : ram_0_6; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_369 = quene_1 == 2'h0 ? _GEN_97 : ram_0_7; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_370 = quene_1 == 2'h0 ? _GEN_98 : ram_0_8; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_371 = quene_1 == 2'h0 ? _GEN_99 : ram_0_9; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_372 = quene_1 == 2'h0 ? _GEN_100 : ram_0_10; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_373 = quene_1 == 2'h0 ? _GEN_101 : ram_0_11; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_374 = quene_1 == 2'h0 ? _GEN_102 : ram_0_12; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_375 = quene_1 == 2'h0 ? _GEN_103 : ram_0_13; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_376 = quene_1 == 2'h0 ? _GEN_104 : ram_0_14; // @[i_cache.scala 19:24 94:37]
  wire [511:0] _GEN_377 = quene_1 == 2'h0 ? _GEN_105 : ram_0_15; // @[i_cache.scala 19:24 94:37]
  wire [31:0] _GEN_378 = quene_1 == 2'h0 ? _GEN_106 : tag_0_0; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_379 = quene_1 == 2'h0 ? _GEN_107 : tag_0_1; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_380 = quene_1 == 2'h0 ? _GEN_108 : tag_0_2; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_381 = quene_1 == 2'h0 ? _GEN_109 : tag_0_3; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_382 = quene_1 == 2'h0 ? _GEN_110 : tag_0_4; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_383 = quene_1 == 2'h0 ? _GEN_111 : tag_0_5; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_384 = quene_1 == 2'h0 ? _GEN_112 : tag_0_6; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_385 = quene_1 == 2'h0 ? _GEN_113 : tag_0_7; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_386 = quene_1 == 2'h0 ? _GEN_114 : tag_0_8; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_387 = quene_1 == 2'h0 ? _GEN_115 : tag_0_9; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_388 = quene_1 == 2'h0 ? _GEN_116 : tag_0_10; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_389 = quene_1 == 2'h0 ? _GEN_117 : tag_0_11; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_390 = quene_1 == 2'h0 ? _GEN_118 : tag_0_12; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_391 = quene_1 == 2'h0 ? _GEN_119 : tag_0_13; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_392 = quene_1 == 2'h0 ? _GEN_120 : tag_0_14; // @[i_cache.scala 21:24 94:37]
  wire [31:0] _GEN_393 = quene_1 == 2'h0 ? _GEN_121 : tag_0_15; // @[i_cache.scala 21:24 94:37]
  wire  _GEN_394 = quene_1 == 2'h0 ? _GEN_122 : valid_0_0; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_395 = quene_1 == 2'h0 ? _GEN_123 : valid_0_1; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_396 = quene_1 == 2'h0 ? _GEN_124 : valid_0_2; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_397 = quene_1 == 2'h0 ? _GEN_125 : valid_0_3; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_398 = quene_1 == 2'h0 ? _GEN_126 : valid_0_4; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_399 = quene_1 == 2'h0 ? _GEN_127 : valid_0_5; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_400 = quene_1 == 2'h0 ? _GEN_128 : valid_0_6; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_401 = quene_1 == 2'h0 ? _GEN_129 : valid_0_7; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_402 = quene_1 == 2'h0 ? _GEN_130 : valid_0_8; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_403 = quene_1 == 2'h0 ? _GEN_131 : valid_0_9; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_404 = quene_1 == 2'h0 ? _GEN_132 : valid_0_10; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_405 = quene_1 == 2'h0 ? _GEN_133 : valid_0_11; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_406 = quene_1 == 2'h0 ? _GEN_134 : valid_0_12; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_407 = quene_1 == 2'h0 ? _GEN_135 : valid_0_13; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_408 = quene_1 == 2'h0 ? _GEN_136 : valid_0_14; // @[i_cache.scala 23:26 94:37]
  wire  _GEN_409 = quene_1 == 2'h0 ? _GEN_137 : valid_0_15; // @[i_cache.scala 23:26 94:37]
  wire [1:0] _GEN_410 = quene_1 == 2'h0 ? _GEN_154 : _GEN_218; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_411 = quene_1 == 2'h0 ? _GEN_155 : _GEN_219; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_412 = quene_1 == 2'h0 ? _GEN_156 : _GEN_220; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_413 = quene_1 == 2'h0 ? _GEN_157 : _GEN_221; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_414 = quene_1 == 2'h0 ? _GEN_158 : _GEN_222; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_415 = quene_1 == 2'h0 ? _GEN_159 : _GEN_223; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_416 = quene_1 == 2'h0 ? _GEN_160 : _GEN_224; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_417 = quene_1 == 2'h0 ? _GEN_161 : _GEN_225; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_418 = quene_1 == 2'h0 ? _GEN_162 : _GEN_226; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_419 = quene_1 == 2'h0 ? _GEN_163 : _GEN_227; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_420 = quene_1 == 2'h0 ? _GEN_164 : _GEN_228; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_421 = quene_1 == 2'h0 ? _GEN_165 : _GEN_229; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_422 = quene_1 == 2'h0 ? _GEN_166 : _GEN_230; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_423 = quene_1 == 2'h0 ? _GEN_167 : _GEN_231; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_424 = quene_1 == 2'h0 ? _GEN_168 : _GEN_232; // @[i_cache.scala 94:37]
  wire [1:0] _GEN_425 = quene_1 == 2'h0 ? _GEN_169 : _GEN_233; // @[i_cache.scala 94:37]
  wire [511:0] _GEN_426 = quene_1 == 2'h0 ? ram_1_0 : _GEN_170; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_427 = quene_1 == 2'h0 ? ram_1_1 : _GEN_171; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_428 = quene_1 == 2'h0 ? ram_1_2 : _GEN_172; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_429 = quene_1 == 2'h0 ? ram_1_3 : _GEN_173; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_430 = quene_1 == 2'h0 ? ram_1_4 : _GEN_174; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_431 = quene_1 == 2'h0 ? ram_1_5 : _GEN_175; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_432 = quene_1 == 2'h0 ? ram_1_6 : _GEN_176; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_433 = quene_1 == 2'h0 ? ram_1_7 : _GEN_177; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_434 = quene_1 == 2'h0 ? ram_1_8 : _GEN_178; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_435 = quene_1 == 2'h0 ? ram_1_9 : _GEN_179; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_436 = quene_1 == 2'h0 ? ram_1_10 : _GEN_180; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_437 = quene_1 == 2'h0 ? ram_1_11 : _GEN_181; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_438 = quene_1 == 2'h0 ? ram_1_12 : _GEN_182; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_439 = quene_1 == 2'h0 ? ram_1_13 : _GEN_183; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_440 = quene_1 == 2'h0 ? ram_1_14 : _GEN_184; // @[i_cache.scala 20:24 94:37]
  wire [511:0] _GEN_441 = quene_1 == 2'h0 ? ram_1_15 : _GEN_185; // @[i_cache.scala 20:24 94:37]
  wire [31:0] _GEN_442 = quene_1 == 2'h0 ? tag_1_0 : _GEN_186; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_443 = quene_1 == 2'h0 ? tag_1_1 : _GEN_187; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_444 = quene_1 == 2'h0 ? tag_1_2 : _GEN_188; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_445 = quene_1 == 2'h0 ? tag_1_3 : _GEN_189; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_446 = quene_1 == 2'h0 ? tag_1_4 : _GEN_190; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_447 = quene_1 == 2'h0 ? tag_1_5 : _GEN_191; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_448 = quene_1 == 2'h0 ? tag_1_6 : _GEN_192; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_449 = quene_1 == 2'h0 ? tag_1_7 : _GEN_193; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_450 = quene_1 == 2'h0 ? tag_1_8 : _GEN_194; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_451 = quene_1 == 2'h0 ? tag_1_9 : _GEN_195; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_452 = quene_1 == 2'h0 ? tag_1_10 : _GEN_196; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_453 = quene_1 == 2'h0 ? tag_1_11 : _GEN_197; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_454 = quene_1 == 2'h0 ? tag_1_12 : _GEN_198; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_455 = quene_1 == 2'h0 ? tag_1_13 : _GEN_199; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_456 = quene_1 == 2'h0 ? tag_1_14 : _GEN_200; // @[i_cache.scala 22:24 94:37]
  wire [31:0] _GEN_457 = quene_1 == 2'h0 ? tag_1_15 : _GEN_201; // @[i_cache.scala 22:24 94:37]
  wire  _GEN_458 = quene_1 == 2'h0 ? valid_1_0 : _GEN_202; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_459 = quene_1 == 2'h0 ? valid_1_1 : _GEN_203; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_460 = quene_1 == 2'h0 ? valid_1_2 : _GEN_204; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_461 = quene_1 == 2'h0 ? valid_1_3 : _GEN_205; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_462 = quene_1 == 2'h0 ? valid_1_4 : _GEN_206; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_463 = quene_1 == 2'h0 ? valid_1_5 : _GEN_207; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_464 = quene_1 == 2'h0 ? valid_1_6 : _GEN_208; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_465 = quene_1 == 2'h0 ? valid_1_7 : _GEN_209; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_466 = quene_1 == 2'h0 ? valid_1_8 : _GEN_210; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_467 = quene_1 == 2'h0 ? valid_1_9 : _GEN_211; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_468 = quene_1 == 2'h0 ? valid_1_10 : _GEN_212; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_469 = quene_1 == 2'h0 ? valid_1_11 : _GEN_213; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_470 = quene_1 == 2'h0 ? valid_1_12 : _GEN_214; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_471 = quene_1 == 2'h0 ? valid_1_13 : _GEN_215; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_472 = quene_1 == 2'h0 ? valid_1_14 : _GEN_216; // @[i_cache.scala 24:26 94:37]
  wire  _GEN_473 = quene_1 == 2'h0 ? valid_1_15 : _GEN_217; // @[i_cache.scala 24:26 94:37]
  wire [511:0] _GEN_474 = unuse_way == 2'h2 ? _GEN_170 : _GEN_426; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_475 = unuse_way == 2'h2 ? _GEN_171 : _GEN_427; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_476 = unuse_way == 2'h2 ? _GEN_172 : _GEN_428; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_477 = unuse_way == 2'h2 ? _GEN_173 : _GEN_429; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_478 = unuse_way == 2'h2 ? _GEN_174 : _GEN_430; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_479 = unuse_way == 2'h2 ? _GEN_175 : _GEN_431; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_480 = unuse_way == 2'h2 ? _GEN_176 : _GEN_432; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_481 = unuse_way == 2'h2 ? _GEN_177 : _GEN_433; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_482 = unuse_way == 2'h2 ? _GEN_178 : _GEN_434; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_483 = unuse_way == 2'h2 ? _GEN_179 : _GEN_435; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_484 = unuse_way == 2'h2 ? _GEN_180 : _GEN_436; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_485 = unuse_way == 2'h2 ? _GEN_181 : _GEN_437; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_486 = unuse_way == 2'h2 ? _GEN_182 : _GEN_438; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_487 = unuse_way == 2'h2 ? _GEN_183 : _GEN_439; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_488 = unuse_way == 2'h2 ? _GEN_184 : _GEN_440; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_489 = unuse_way == 2'h2 ? _GEN_185 : _GEN_441; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_490 = unuse_way == 2'h2 ? _GEN_186 : _GEN_442; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_491 = unuse_way == 2'h2 ? _GEN_187 : _GEN_443; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_492 = unuse_way == 2'h2 ? _GEN_188 : _GEN_444; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_493 = unuse_way == 2'h2 ? _GEN_189 : _GEN_445; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_494 = unuse_way == 2'h2 ? _GEN_190 : _GEN_446; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_495 = unuse_way == 2'h2 ? _GEN_191 : _GEN_447; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_496 = unuse_way == 2'h2 ? _GEN_192 : _GEN_448; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_497 = unuse_way == 2'h2 ? _GEN_193 : _GEN_449; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_498 = unuse_way == 2'h2 ? _GEN_194 : _GEN_450; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_499 = unuse_way == 2'h2 ? _GEN_195 : _GEN_451; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_500 = unuse_way == 2'h2 ? _GEN_196 : _GEN_452; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_501 = unuse_way == 2'h2 ? _GEN_197 : _GEN_453; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_502 = unuse_way == 2'h2 ? _GEN_198 : _GEN_454; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_503 = unuse_way == 2'h2 ? _GEN_199 : _GEN_455; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_504 = unuse_way == 2'h2 ? _GEN_200 : _GEN_456; // @[i_cache.scala 88:40]
  wire [31:0] _GEN_505 = unuse_way == 2'h2 ? _GEN_201 : _GEN_457; // @[i_cache.scala 88:40]
  wire  _GEN_506 = unuse_way == 2'h2 ? _GEN_202 : _GEN_458; // @[i_cache.scala 88:40]
  wire  _GEN_507 = unuse_way == 2'h2 ? _GEN_203 : _GEN_459; // @[i_cache.scala 88:40]
  wire  _GEN_508 = unuse_way == 2'h2 ? _GEN_204 : _GEN_460; // @[i_cache.scala 88:40]
  wire  _GEN_509 = unuse_way == 2'h2 ? _GEN_205 : _GEN_461; // @[i_cache.scala 88:40]
  wire  _GEN_510 = unuse_way == 2'h2 ? _GEN_206 : _GEN_462; // @[i_cache.scala 88:40]
  wire  _GEN_511 = unuse_way == 2'h2 ? _GEN_207 : _GEN_463; // @[i_cache.scala 88:40]
  wire  _GEN_512 = unuse_way == 2'h2 ? _GEN_208 : _GEN_464; // @[i_cache.scala 88:40]
  wire  _GEN_513 = unuse_way == 2'h2 ? _GEN_209 : _GEN_465; // @[i_cache.scala 88:40]
  wire  _GEN_514 = unuse_way == 2'h2 ? _GEN_210 : _GEN_466; // @[i_cache.scala 88:40]
  wire  _GEN_515 = unuse_way == 2'h2 ? _GEN_211 : _GEN_467; // @[i_cache.scala 88:40]
  wire  _GEN_516 = unuse_way == 2'h2 ? _GEN_212 : _GEN_468; // @[i_cache.scala 88:40]
  wire  _GEN_517 = unuse_way == 2'h2 ? _GEN_213 : _GEN_469; // @[i_cache.scala 88:40]
  wire  _GEN_518 = unuse_way == 2'h2 ? _GEN_214 : _GEN_470; // @[i_cache.scala 88:40]
  wire  _GEN_519 = unuse_way == 2'h2 ? _GEN_215 : _GEN_471; // @[i_cache.scala 88:40]
  wire  _GEN_520 = unuse_way == 2'h2 ? _GEN_216 : _GEN_472; // @[i_cache.scala 88:40]
  wire  _GEN_521 = unuse_way == 2'h2 ? _GEN_217 : _GEN_473; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_522 = unuse_way == 2'h2 ? _GEN_218 : _GEN_410; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_523 = unuse_way == 2'h2 ? _GEN_219 : _GEN_411; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_524 = unuse_way == 2'h2 ? _GEN_220 : _GEN_412; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_525 = unuse_way == 2'h2 ? _GEN_221 : _GEN_413; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_526 = unuse_way == 2'h2 ? _GEN_222 : _GEN_414; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_527 = unuse_way == 2'h2 ? _GEN_223 : _GEN_415; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_528 = unuse_way == 2'h2 ? _GEN_224 : _GEN_416; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_529 = unuse_way == 2'h2 ? _GEN_225 : _GEN_417; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_530 = unuse_way == 2'h2 ? _GEN_226 : _GEN_418; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_531 = unuse_way == 2'h2 ? _GEN_227 : _GEN_419; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_532 = unuse_way == 2'h2 ? _GEN_228 : _GEN_420; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_533 = unuse_way == 2'h2 ? _GEN_229 : _GEN_421; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_534 = unuse_way == 2'h2 ? _GEN_230 : _GEN_422; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_535 = unuse_way == 2'h2 ? _GEN_231 : _GEN_423; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_536 = unuse_way == 2'h2 ? _GEN_232 : _GEN_424; // @[i_cache.scala 88:40]
  wire [1:0] _GEN_537 = unuse_way == 2'h2 ? _GEN_233 : _GEN_425; // @[i_cache.scala 88:40]
  wire [511:0] _GEN_538 = unuse_way == 2'h2 ? ram_0_0 : _GEN_362; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_539 = unuse_way == 2'h2 ? ram_0_1 : _GEN_363; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_540 = unuse_way == 2'h2 ? ram_0_2 : _GEN_364; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_541 = unuse_way == 2'h2 ? ram_0_3 : _GEN_365; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_542 = unuse_way == 2'h2 ? ram_0_4 : _GEN_366; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_543 = unuse_way == 2'h2 ? ram_0_5 : _GEN_367; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_544 = unuse_way == 2'h2 ? ram_0_6 : _GEN_368; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_545 = unuse_way == 2'h2 ? ram_0_7 : _GEN_369; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_546 = unuse_way == 2'h2 ? ram_0_8 : _GEN_370; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_547 = unuse_way == 2'h2 ? ram_0_9 : _GEN_371; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_548 = unuse_way == 2'h2 ? ram_0_10 : _GEN_372; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_549 = unuse_way == 2'h2 ? ram_0_11 : _GEN_373; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_550 = unuse_way == 2'h2 ? ram_0_12 : _GEN_374; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_551 = unuse_way == 2'h2 ? ram_0_13 : _GEN_375; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_552 = unuse_way == 2'h2 ? ram_0_14 : _GEN_376; // @[i_cache.scala 19:24 88:40]
  wire [511:0] _GEN_553 = unuse_way == 2'h2 ? ram_0_15 : _GEN_377; // @[i_cache.scala 19:24 88:40]
  wire [31:0] _GEN_554 = unuse_way == 2'h2 ? tag_0_0 : _GEN_378; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_555 = unuse_way == 2'h2 ? tag_0_1 : _GEN_379; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_556 = unuse_way == 2'h2 ? tag_0_2 : _GEN_380; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_557 = unuse_way == 2'h2 ? tag_0_3 : _GEN_381; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_558 = unuse_way == 2'h2 ? tag_0_4 : _GEN_382; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_559 = unuse_way == 2'h2 ? tag_0_5 : _GEN_383; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_560 = unuse_way == 2'h2 ? tag_0_6 : _GEN_384; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_561 = unuse_way == 2'h2 ? tag_0_7 : _GEN_385; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_562 = unuse_way == 2'h2 ? tag_0_8 : _GEN_386; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_563 = unuse_way == 2'h2 ? tag_0_9 : _GEN_387; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_564 = unuse_way == 2'h2 ? tag_0_10 : _GEN_388; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_565 = unuse_way == 2'h2 ? tag_0_11 : _GEN_389; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_566 = unuse_way == 2'h2 ? tag_0_12 : _GEN_390; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_567 = unuse_way == 2'h2 ? tag_0_13 : _GEN_391; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_568 = unuse_way == 2'h2 ? tag_0_14 : _GEN_392; // @[i_cache.scala 21:24 88:40]
  wire [31:0] _GEN_569 = unuse_way == 2'h2 ? tag_0_15 : _GEN_393; // @[i_cache.scala 21:24 88:40]
  wire  _GEN_570 = unuse_way == 2'h2 ? valid_0_0 : _GEN_394; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_571 = unuse_way == 2'h2 ? valid_0_1 : _GEN_395; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_572 = unuse_way == 2'h2 ? valid_0_2 : _GEN_396; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_573 = unuse_way == 2'h2 ? valid_0_3 : _GEN_397; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_574 = unuse_way == 2'h2 ? valid_0_4 : _GEN_398; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_575 = unuse_way == 2'h2 ? valid_0_5 : _GEN_399; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_576 = unuse_way == 2'h2 ? valid_0_6 : _GEN_400; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_577 = unuse_way == 2'h2 ? valid_0_7 : _GEN_401; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_578 = unuse_way == 2'h2 ? valid_0_8 : _GEN_402; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_579 = unuse_way == 2'h2 ? valid_0_9 : _GEN_403; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_580 = unuse_way == 2'h2 ? valid_0_10 : _GEN_404; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_581 = unuse_way == 2'h2 ? valid_0_11 : _GEN_405; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_582 = unuse_way == 2'h2 ? valid_0_12 : _GEN_406; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_583 = unuse_way == 2'h2 ? valid_0_13 : _GEN_407; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_584 = unuse_way == 2'h2 ? valid_0_14 : _GEN_408; // @[i_cache.scala 23:26 88:40]
  wire  _GEN_585 = unuse_way == 2'h2 ? valid_0_15 : _GEN_409; // @[i_cache.scala 23:26 88:40]
  wire [511:0] _GEN_586 = unuse_way == 2'h1 ? _GEN_90 : _GEN_538; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_587 = unuse_way == 2'h1 ? _GEN_91 : _GEN_539; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_588 = unuse_way == 2'h1 ? _GEN_92 : _GEN_540; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_589 = unuse_way == 2'h1 ? _GEN_93 : _GEN_541; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_590 = unuse_way == 2'h1 ? _GEN_94 : _GEN_542; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_591 = unuse_way == 2'h1 ? _GEN_95 : _GEN_543; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_592 = unuse_way == 2'h1 ? _GEN_96 : _GEN_544; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_593 = unuse_way == 2'h1 ? _GEN_97 : _GEN_545; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_594 = unuse_way == 2'h1 ? _GEN_98 : _GEN_546; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_595 = unuse_way == 2'h1 ? _GEN_99 : _GEN_547; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_596 = unuse_way == 2'h1 ? _GEN_100 : _GEN_548; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_597 = unuse_way == 2'h1 ? _GEN_101 : _GEN_549; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_598 = unuse_way == 2'h1 ? _GEN_102 : _GEN_550; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_599 = unuse_way == 2'h1 ? _GEN_103 : _GEN_551; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_600 = unuse_way == 2'h1 ? _GEN_104 : _GEN_552; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_601 = unuse_way == 2'h1 ? _GEN_105 : _GEN_553; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_602 = unuse_way == 2'h1 ? _GEN_106 : _GEN_554; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_603 = unuse_way == 2'h1 ? _GEN_107 : _GEN_555; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_604 = unuse_way == 2'h1 ? _GEN_108 : _GEN_556; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_605 = unuse_way == 2'h1 ? _GEN_109 : _GEN_557; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_606 = unuse_way == 2'h1 ? _GEN_110 : _GEN_558; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_607 = unuse_way == 2'h1 ? _GEN_111 : _GEN_559; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_608 = unuse_way == 2'h1 ? _GEN_112 : _GEN_560; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_609 = unuse_way == 2'h1 ? _GEN_113 : _GEN_561; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_610 = unuse_way == 2'h1 ? _GEN_114 : _GEN_562; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_611 = unuse_way == 2'h1 ? _GEN_115 : _GEN_563; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_612 = unuse_way == 2'h1 ? _GEN_116 : _GEN_564; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_613 = unuse_way == 2'h1 ? _GEN_117 : _GEN_565; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_614 = unuse_way == 2'h1 ? _GEN_118 : _GEN_566; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_615 = unuse_way == 2'h1 ? _GEN_119 : _GEN_567; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_616 = unuse_way == 2'h1 ? _GEN_120 : _GEN_568; // @[i_cache.scala 83:34]
  wire [31:0] _GEN_617 = unuse_way == 2'h1 ? _GEN_121 : _GEN_569; // @[i_cache.scala 83:34]
  wire  _GEN_618 = unuse_way == 2'h1 ? _GEN_122 : _GEN_570; // @[i_cache.scala 83:34]
  wire  _GEN_619 = unuse_way == 2'h1 ? _GEN_123 : _GEN_571; // @[i_cache.scala 83:34]
  wire  _GEN_620 = unuse_way == 2'h1 ? _GEN_124 : _GEN_572; // @[i_cache.scala 83:34]
  wire  _GEN_621 = unuse_way == 2'h1 ? _GEN_125 : _GEN_573; // @[i_cache.scala 83:34]
  wire  _GEN_622 = unuse_way == 2'h1 ? _GEN_126 : _GEN_574; // @[i_cache.scala 83:34]
  wire  _GEN_623 = unuse_way == 2'h1 ? _GEN_127 : _GEN_575; // @[i_cache.scala 83:34]
  wire  _GEN_624 = unuse_way == 2'h1 ? _GEN_128 : _GEN_576; // @[i_cache.scala 83:34]
  wire  _GEN_625 = unuse_way == 2'h1 ? _GEN_129 : _GEN_577; // @[i_cache.scala 83:34]
  wire  _GEN_626 = unuse_way == 2'h1 ? _GEN_130 : _GEN_578; // @[i_cache.scala 83:34]
  wire  _GEN_627 = unuse_way == 2'h1 ? _GEN_131 : _GEN_579; // @[i_cache.scala 83:34]
  wire  _GEN_628 = unuse_way == 2'h1 ? _GEN_132 : _GEN_580; // @[i_cache.scala 83:34]
  wire  _GEN_629 = unuse_way == 2'h1 ? _GEN_133 : _GEN_581; // @[i_cache.scala 83:34]
  wire  _GEN_630 = unuse_way == 2'h1 ? _GEN_134 : _GEN_582; // @[i_cache.scala 83:34]
  wire  _GEN_631 = unuse_way == 2'h1 ? _GEN_135 : _GEN_583; // @[i_cache.scala 83:34]
  wire  _GEN_632 = unuse_way == 2'h1 ? _GEN_136 : _GEN_584; // @[i_cache.scala 83:34]
  wire  _GEN_633 = unuse_way == 2'h1 ? _GEN_137 : _GEN_585; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_634 = unuse_way == 2'h1 ? _GEN_154 : _GEN_522; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_635 = unuse_way == 2'h1 ? _GEN_155 : _GEN_523; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_636 = unuse_way == 2'h1 ? _GEN_156 : _GEN_524; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_637 = unuse_way == 2'h1 ? _GEN_157 : _GEN_525; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_638 = unuse_way == 2'h1 ? _GEN_158 : _GEN_526; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_639 = unuse_way == 2'h1 ? _GEN_159 : _GEN_527; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_640 = unuse_way == 2'h1 ? _GEN_160 : _GEN_528; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_641 = unuse_way == 2'h1 ? _GEN_161 : _GEN_529; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_642 = unuse_way == 2'h1 ? _GEN_162 : _GEN_530; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_643 = unuse_way == 2'h1 ? _GEN_163 : _GEN_531; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_644 = unuse_way == 2'h1 ? _GEN_164 : _GEN_532; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_645 = unuse_way == 2'h1 ? _GEN_165 : _GEN_533; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_646 = unuse_way == 2'h1 ? _GEN_166 : _GEN_534; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_647 = unuse_way == 2'h1 ? _GEN_167 : _GEN_535; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_648 = unuse_way == 2'h1 ? _GEN_168 : _GEN_536; // @[i_cache.scala 83:34]
  wire [1:0] _GEN_649 = unuse_way == 2'h1 ? _GEN_169 : _GEN_537; // @[i_cache.scala 83:34]
  wire [511:0] _GEN_650 = unuse_way == 2'h1 ? ram_1_0 : _GEN_474; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_651 = unuse_way == 2'h1 ? ram_1_1 : _GEN_475; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_652 = unuse_way == 2'h1 ? ram_1_2 : _GEN_476; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_653 = unuse_way == 2'h1 ? ram_1_3 : _GEN_477; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_654 = unuse_way == 2'h1 ? ram_1_4 : _GEN_478; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_655 = unuse_way == 2'h1 ? ram_1_5 : _GEN_479; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_656 = unuse_way == 2'h1 ? ram_1_6 : _GEN_480; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_657 = unuse_way == 2'h1 ? ram_1_7 : _GEN_481; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_658 = unuse_way == 2'h1 ? ram_1_8 : _GEN_482; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_659 = unuse_way == 2'h1 ? ram_1_9 : _GEN_483; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_660 = unuse_way == 2'h1 ? ram_1_10 : _GEN_484; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_661 = unuse_way == 2'h1 ? ram_1_11 : _GEN_485; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_662 = unuse_way == 2'h1 ? ram_1_12 : _GEN_486; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_663 = unuse_way == 2'h1 ? ram_1_13 : _GEN_487; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_664 = unuse_way == 2'h1 ? ram_1_14 : _GEN_488; // @[i_cache.scala 20:24 83:34]
  wire [511:0] _GEN_665 = unuse_way == 2'h1 ? ram_1_15 : _GEN_489; // @[i_cache.scala 20:24 83:34]
  wire [31:0] _GEN_666 = unuse_way == 2'h1 ? tag_1_0 : _GEN_490; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_667 = unuse_way == 2'h1 ? tag_1_1 : _GEN_491; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_668 = unuse_way == 2'h1 ? tag_1_2 : _GEN_492; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_669 = unuse_way == 2'h1 ? tag_1_3 : _GEN_493; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_670 = unuse_way == 2'h1 ? tag_1_4 : _GEN_494; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_671 = unuse_way == 2'h1 ? tag_1_5 : _GEN_495; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_672 = unuse_way == 2'h1 ? tag_1_6 : _GEN_496; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_673 = unuse_way == 2'h1 ? tag_1_7 : _GEN_497; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_674 = unuse_way == 2'h1 ? tag_1_8 : _GEN_498; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_675 = unuse_way == 2'h1 ? tag_1_9 : _GEN_499; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_676 = unuse_way == 2'h1 ? tag_1_10 : _GEN_500; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_677 = unuse_way == 2'h1 ? tag_1_11 : _GEN_501; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_678 = unuse_way == 2'h1 ? tag_1_12 : _GEN_502; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_679 = unuse_way == 2'h1 ? tag_1_13 : _GEN_503; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_680 = unuse_way == 2'h1 ? tag_1_14 : _GEN_504; // @[i_cache.scala 22:24 83:34]
  wire [31:0] _GEN_681 = unuse_way == 2'h1 ? tag_1_15 : _GEN_505; // @[i_cache.scala 22:24 83:34]
  wire  _GEN_682 = unuse_way == 2'h1 ? valid_1_0 : _GEN_506; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_683 = unuse_way == 2'h1 ? valid_1_1 : _GEN_507; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_684 = unuse_way == 2'h1 ? valid_1_2 : _GEN_508; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_685 = unuse_way == 2'h1 ? valid_1_3 : _GEN_509; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_686 = unuse_way == 2'h1 ? valid_1_4 : _GEN_510; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_687 = unuse_way == 2'h1 ? valid_1_5 : _GEN_511; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_688 = unuse_way == 2'h1 ? valid_1_6 : _GEN_512; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_689 = unuse_way == 2'h1 ? valid_1_7 : _GEN_513; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_690 = unuse_way == 2'h1 ? valid_1_8 : _GEN_514; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_691 = unuse_way == 2'h1 ? valid_1_9 : _GEN_515; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_692 = unuse_way == 2'h1 ? valid_1_10 : _GEN_516; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_693 = unuse_way == 2'h1 ? valid_1_11 : _GEN_517; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_694 = unuse_way == 2'h1 ? valid_1_12 : _GEN_518; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_695 = unuse_way == 2'h1 ? valid_1_13 : _GEN_519; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_696 = unuse_way == 2'h1 ? valid_1_14 : _GEN_520; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_697 = unuse_way == 2'h1 ? valid_1_15 : _GEN_521; // @[i_cache.scala 24:26 83:34]
  wire  _GEN_698 = 3'h4 == state ? 1'h0 : valid_0_0; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_699 = 3'h4 == state ? 1'h0 : valid_0_1; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_700 = 3'h4 == state ? 1'h0 : valid_0_2; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_701 = 3'h4 == state ? 1'h0 : valid_0_3; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_702 = 3'h4 == state ? 1'h0 : valid_0_4; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_703 = 3'h4 == state ? 1'h0 : valid_0_5; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_704 = 3'h4 == state ? 1'h0 : valid_0_6; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_705 = 3'h4 == state ? 1'h0 : valid_0_7; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_706 = 3'h4 == state ? 1'h0 : valid_0_8; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_707 = 3'h4 == state ? 1'h0 : valid_0_9; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_708 = 3'h4 == state ? 1'h0 : valid_0_10; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_709 = 3'h4 == state ? 1'h0 : valid_0_11; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_710 = 3'h4 == state ? 1'h0 : valid_0_12; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_711 = 3'h4 == state ? 1'h0 : valid_0_13; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_712 = 3'h4 == state ? 1'h0 : valid_0_14; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_713 = 3'h4 == state ? 1'h0 : valid_0_15; // @[i_cache.scala 47:18 108:49 23:26]
  wire  _GEN_714 = 3'h4 == state ? 1'h0 : valid_1_0; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_715 = 3'h4 == state ? 1'h0 : valid_1_1; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_716 = 3'h4 == state ? 1'h0 : valid_1_2; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_717 = 3'h4 == state ? 1'h0 : valid_1_3; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_718 = 3'h4 == state ? 1'h0 : valid_1_4; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_719 = 3'h4 == state ? 1'h0 : valid_1_5; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_720 = 3'h4 == state ? 1'h0 : valid_1_6; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_721 = 3'h4 == state ? 1'h0 : valid_1_7; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_722 = 3'h4 == state ? 1'h0 : valid_1_8; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_723 = 3'h4 == state ? 1'h0 : valid_1_9; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_724 = 3'h4 == state ? 1'h0 : valid_1_10; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_725 = 3'h4 == state ? 1'h0 : valid_1_11; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_726 = 3'h4 == state ? 1'h0 : valid_1_12; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_727 = 3'h4 == state ? 1'h0 : valid_1_13; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_728 = 3'h4 == state ? 1'h0 : valid_1_14; // @[i_cache.scala 47:18 109:49 24:26]
  wire  _GEN_729 = 3'h4 == state ? 1'h0 : valid_1_15; // @[i_cache.scala 47:18 109:49 24:26]
  wire [2:0] _GEN_730 = 3'h4 == state ? 3'h0 : state; // @[i_cache.scala 110:18 47:18 45:24]
  wire [2:0] _GEN_731 = 3'h3 == state ? 3'h1 : _GEN_730; // @[i_cache.scala 47:18 82:19]
  wire [511:0] _GEN_732 = 3'h3 == state ? _GEN_586 : ram_0_0; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_733 = 3'h3 == state ? _GEN_587 : ram_0_1; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_734 = 3'h3 == state ? _GEN_588 : ram_0_2; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_735 = 3'h3 == state ? _GEN_589 : ram_0_3; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_736 = 3'h3 == state ? _GEN_590 : ram_0_4; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_737 = 3'h3 == state ? _GEN_591 : ram_0_5; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_738 = 3'h3 == state ? _GEN_592 : ram_0_6; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_739 = 3'h3 == state ? _GEN_593 : ram_0_7; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_740 = 3'h3 == state ? _GEN_594 : ram_0_8; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_741 = 3'h3 == state ? _GEN_595 : ram_0_9; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_742 = 3'h3 == state ? _GEN_596 : ram_0_10; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_743 = 3'h3 == state ? _GEN_597 : ram_0_11; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_744 = 3'h3 == state ? _GEN_598 : ram_0_12; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_745 = 3'h3 == state ? _GEN_599 : ram_0_13; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_746 = 3'h3 == state ? _GEN_600 : ram_0_14; // @[i_cache.scala 47:18 19:24]
  wire [511:0] _GEN_747 = 3'h3 == state ? _GEN_601 : ram_0_15; // @[i_cache.scala 47:18 19:24]
  wire [31:0] _GEN_748 = 3'h3 == state ? _GEN_602 : tag_0_0; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_749 = 3'h3 == state ? _GEN_603 : tag_0_1; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_750 = 3'h3 == state ? _GEN_604 : tag_0_2; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_751 = 3'h3 == state ? _GEN_605 : tag_0_3; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_752 = 3'h3 == state ? _GEN_606 : tag_0_4; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_753 = 3'h3 == state ? _GEN_607 : tag_0_5; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_754 = 3'h3 == state ? _GEN_608 : tag_0_6; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_755 = 3'h3 == state ? _GEN_609 : tag_0_7; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_756 = 3'h3 == state ? _GEN_610 : tag_0_8; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_757 = 3'h3 == state ? _GEN_611 : tag_0_9; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_758 = 3'h3 == state ? _GEN_612 : tag_0_10; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_759 = 3'h3 == state ? _GEN_613 : tag_0_11; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_760 = 3'h3 == state ? _GEN_614 : tag_0_12; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_761 = 3'h3 == state ? _GEN_615 : tag_0_13; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_762 = 3'h3 == state ? _GEN_616 : tag_0_14; // @[i_cache.scala 47:18 21:24]
  wire [31:0] _GEN_763 = 3'h3 == state ? _GEN_617 : tag_0_15; // @[i_cache.scala 47:18 21:24]
  wire  _GEN_764 = 3'h3 == state ? _GEN_618 : _GEN_698; // @[i_cache.scala 47:18]
  wire  _GEN_765 = 3'h3 == state ? _GEN_619 : _GEN_699; // @[i_cache.scala 47:18]
  wire  _GEN_766 = 3'h3 == state ? _GEN_620 : _GEN_700; // @[i_cache.scala 47:18]
  wire  _GEN_767 = 3'h3 == state ? _GEN_621 : _GEN_701; // @[i_cache.scala 47:18]
  wire  _GEN_768 = 3'h3 == state ? _GEN_622 : _GEN_702; // @[i_cache.scala 47:18]
  wire  _GEN_769 = 3'h3 == state ? _GEN_623 : _GEN_703; // @[i_cache.scala 47:18]
  wire  _GEN_770 = 3'h3 == state ? _GEN_624 : _GEN_704; // @[i_cache.scala 47:18]
  wire  _GEN_771 = 3'h3 == state ? _GEN_625 : _GEN_705; // @[i_cache.scala 47:18]
  wire  _GEN_772 = 3'h3 == state ? _GEN_626 : _GEN_706; // @[i_cache.scala 47:18]
  wire  _GEN_773 = 3'h3 == state ? _GEN_627 : _GEN_707; // @[i_cache.scala 47:18]
  wire  _GEN_774 = 3'h3 == state ? _GEN_628 : _GEN_708; // @[i_cache.scala 47:18]
  wire  _GEN_775 = 3'h3 == state ? _GEN_629 : _GEN_709; // @[i_cache.scala 47:18]
  wire  _GEN_776 = 3'h3 == state ? _GEN_630 : _GEN_710; // @[i_cache.scala 47:18]
  wire  _GEN_777 = 3'h3 == state ? _GEN_631 : _GEN_711; // @[i_cache.scala 47:18]
  wire  _GEN_778 = 3'h3 == state ? _GEN_632 : _GEN_712; // @[i_cache.scala 47:18]
  wire  _GEN_779 = 3'h3 == state ? _GEN_633 : _GEN_713; // @[i_cache.scala 47:18]
  wire [1:0] _GEN_780 = 3'h3 == state ? _GEN_634 : quene_0; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_781 = 3'h3 == state ? _GEN_635 : quene_1; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_782 = 3'h3 == state ? _GEN_636 : quene_2; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_783 = 3'h3 == state ? _GEN_637 : quene_3; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_784 = 3'h3 == state ? _GEN_638 : quene_4; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_785 = 3'h3 == state ? _GEN_639 : quene_5; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_786 = 3'h3 == state ? _GEN_640 : quene_6; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_787 = 3'h3 == state ? _GEN_641 : quene_7; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_788 = 3'h3 == state ? _GEN_642 : quene_8; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_789 = 3'h3 == state ? _GEN_643 : quene_9; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_790 = 3'h3 == state ? _GEN_644 : quene_10; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_791 = 3'h3 == state ? _GEN_645 : quene_11; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_792 = 3'h3 == state ? _GEN_646 : quene_12; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_793 = 3'h3 == state ? _GEN_647 : quene_13; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_794 = 3'h3 == state ? _GEN_648 : quene_14; // @[i_cache.scala 47:18 31:24]
  wire [1:0] _GEN_795 = 3'h3 == state ? _GEN_649 : quene_15; // @[i_cache.scala 47:18 31:24]
  wire [511:0] _GEN_796 = 3'h3 == state ? _GEN_650 : ram_1_0; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_797 = 3'h3 == state ? _GEN_651 : ram_1_1; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_798 = 3'h3 == state ? _GEN_652 : ram_1_2; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_799 = 3'h3 == state ? _GEN_653 : ram_1_3; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_800 = 3'h3 == state ? _GEN_654 : ram_1_4; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_801 = 3'h3 == state ? _GEN_655 : ram_1_5; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_802 = 3'h3 == state ? _GEN_656 : ram_1_6; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_803 = 3'h3 == state ? _GEN_657 : ram_1_7; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_804 = 3'h3 == state ? _GEN_658 : ram_1_8; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_805 = 3'h3 == state ? _GEN_659 : ram_1_9; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_806 = 3'h3 == state ? _GEN_660 : ram_1_10; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_807 = 3'h3 == state ? _GEN_661 : ram_1_11; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_808 = 3'h3 == state ? _GEN_662 : ram_1_12; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_809 = 3'h3 == state ? _GEN_663 : ram_1_13; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_810 = 3'h3 == state ? _GEN_664 : ram_1_14; // @[i_cache.scala 47:18 20:24]
  wire [511:0] _GEN_811 = 3'h3 == state ? _GEN_665 : ram_1_15; // @[i_cache.scala 47:18 20:24]
  wire [31:0] _GEN_812 = 3'h3 == state ? _GEN_666 : tag_1_0; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_813 = 3'h3 == state ? _GEN_667 : tag_1_1; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_814 = 3'h3 == state ? _GEN_668 : tag_1_2; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_815 = 3'h3 == state ? _GEN_669 : tag_1_3; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_816 = 3'h3 == state ? _GEN_670 : tag_1_4; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_817 = 3'h3 == state ? _GEN_671 : tag_1_5; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_818 = 3'h3 == state ? _GEN_672 : tag_1_6; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_819 = 3'h3 == state ? _GEN_673 : tag_1_7; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_820 = 3'h3 == state ? _GEN_674 : tag_1_8; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_821 = 3'h3 == state ? _GEN_675 : tag_1_9; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_822 = 3'h3 == state ? _GEN_676 : tag_1_10; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_823 = 3'h3 == state ? _GEN_677 : tag_1_11; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_824 = 3'h3 == state ? _GEN_678 : tag_1_12; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_825 = 3'h3 == state ? _GEN_679 : tag_1_13; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_826 = 3'h3 == state ? _GEN_680 : tag_1_14; // @[i_cache.scala 47:18 22:24]
  wire [31:0] _GEN_827 = 3'h3 == state ? _GEN_681 : tag_1_15; // @[i_cache.scala 47:18 22:24]
  wire  _GEN_828 = 3'h3 == state ? _GEN_682 : _GEN_714; // @[i_cache.scala 47:18]
  wire  _GEN_829 = 3'h3 == state ? _GEN_683 : _GEN_715; // @[i_cache.scala 47:18]
  wire  _GEN_830 = 3'h3 == state ? _GEN_684 : _GEN_716; // @[i_cache.scala 47:18]
  wire  _GEN_831 = 3'h3 == state ? _GEN_685 : _GEN_717; // @[i_cache.scala 47:18]
  wire  _GEN_832 = 3'h3 == state ? _GEN_686 : _GEN_718; // @[i_cache.scala 47:18]
  wire  _GEN_833 = 3'h3 == state ? _GEN_687 : _GEN_719; // @[i_cache.scala 47:18]
  wire  _GEN_834 = 3'h3 == state ? _GEN_688 : _GEN_720; // @[i_cache.scala 47:18]
  wire  _GEN_835 = 3'h3 == state ? _GEN_689 : _GEN_721; // @[i_cache.scala 47:18]
  wire  _GEN_836 = 3'h3 == state ? _GEN_690 : _GEN_722; // @[i_cache.scala 47:18]
  wire  _GEN_837 = 3'h3 == state ? _GEN_691 : _GEN_723; // @[i_cache.scala 47:18]
  wire  _GEN_838 = 3'h3 == state ? _GEN_692 : _GEN_724; // @[i_cache.scala 47:18]
  wire  _GEN_839 = 3'h3 == state ? _GEN_693 : _GEN_725; // @[i_cache.scala 47:18]
  wire  _GEN_840 = 3'h3 == state ? _GEN_694 : _GEN_726; // @[i_cache.scala 47:18]
  wire  _GEN_841 = 3'h3 == state ? _GEN_695 : _GEN_727; // @[i_cache.scala 47:18]
  wire  _GEN_842 = 3'h3 == state ? _GEN_696 : _GEN_728; // @[i_cache.scala 47:18]
  wire  _GEN_843 = 3'h3 == state ? _GEN_697 : _GEN_729; // @[i_cache.scala 47:18]
  wire [511:0] _GEN_1211 = 4'h1 == index ? ram_0_1 : ram_0_0; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1212 = 4'h2 == index ? ram_0_2 : _GEN_1211; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1213 = 4'h3 == index ? ram_0_3 : _GEN_1212; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1214 = 4'h4 == index ? ram_0_4 : _GEN_1213; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1215 = 4'h5 == index ? ram_0_5 : _GEN_1214; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1216 = 4'h6 == index ? ram_0_6 : _GEN_1215; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1217 = 4'h7 == index ? ram_0_7 : _GEN_1216; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1218 = 4'h8 == index ? ram_0_8 : _GEN_1217; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1219 = 4'h9 == index ? ram_0_9 : _GEN_1218; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1220 = 4'ha == index ? ram_0_10 : _GEN_1219; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1221 = 4'hb == index ? ram_0_11 : _GEN_1220; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1222 = 4'hc == index ? ram_0_12 : _GEN_1221; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1223 = 4'hd == index ? ram_0_13 : _GEN_1222; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1224 = 4'he == index ? ram_0_14 : _GEN_1223; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _GEN_1225 = 4'hf == index ? ram_0_15 : _GEN_1224; // @[i_cache.scala 155:{49,49}]
  wire [511:0] _io_to_ifu_rdata_T = _GEN_1225 >> shift_bit; // @[i_cache.scala 155:49]
  wire [511:0] _GEN_1227 = 4'h1 == index ? ram_1_1 : ram_1_0; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1228 = 4'h2 == index ? ram_1_2 : _GEN_1227; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1229 = 4'h3 == index ? ram_1_3 : _GEN_1228; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1230 = 4'h4 == index ? ram_1_4 : _GEN_1229; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1231 = 4'h5 == index ? ram_1_5 : _GEN_1230; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1232 = 4'h6 == index ? ram_1_6 : _GEN_1231; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1233 = 4'h7 == index ? ram_1_7 : _GEN_1232; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1234 = 4'h8 == index ? ram_1_8 : _GEN_1233; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1235 = 4'h9 == index ? ram_1_9 : _GEN_1234; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1236 = 4'ha == index ? ram_1_10 : _GEN_1235; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1237 = 4'hb == index ? ram_1_11 : _GEN_1236; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1238 = 4'hc == index ? ram_1_12 : _GEN_1237; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1239 = 4'hd == index ? ram_1_13 : _GEN_1238; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1240 = 4'he == index ? ram_1_14 : _GEN_1239; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _GEN_1241 = 4'hf == index ? ram_1_15 : _GEN_1240; // @[i_cache.scala 164:{49,49}]
  wire [511:0] _io_to_ifu_rdata_T_1 = _GEN_1241 >> shift_bit; // @[i_cache.scala 164:49]
  wire [511:0] _GEN_1242 = way1_hit ? _io_to_ifu_rdata_T_1 : 512'h0; // @[i_cache.scala 163:33 164:33 172:33]
  wire [511:0] _GEN_1246 = way0_hit ? _io_to_ifu_rdata_T : _GEN_1242; // @[i_cache.scala 154:23 155:33]
  wire  _GEN_1248 = way0_hit | way1_hit; // @[i_cache.scala 154:23 157:34]
  wire  _T_9 = state == 3'h2; // @[i_cache.scala 180:21]
  wire [63:0] _GEN_1324 = {{32'd0}, io_from_ifu_araddr}; // @[i_cache.scala 189:49]
  wire [63:0] _io_to_axi_araddr_T = _GEN_1324 & 64'hffffffffffffffc0; // @[i_cache.scala 189:49]
  wire [63:0] _GEN_1252 = state == 3'h2 ? _io_to_axi_araddr_T : {{32'd0}, io_from_ifu_araddr}; // @[i_cache.scala 180:29 189:26 229:26]
  wire [2:0] _GEN_1253 = state == 3'h2 ? 3'h7 : 3'h0; // @[i_cache.scala 180:29 190:25 231:25]
  wire [63:0] _GEN_1257 = state == 3'h1 ? {{32'd0}, io_from_ifu_araddr} : _GEN_1252; // @[i_cache.scala 137:25 139:26]
  wire [2:0] _GEN_1258 = state == 3'h1 ? 3'h0 : _GEN_1253; // @[i_cache.scala 137:25 140:25]
  wire [511:0] _GEN_1262 = state == 3'h1 ? _GEN_1246 : 512'h0; // @[i_cache.scala 137:25]
  assign io_to_ifu_rdata = _GEN_1262[63:0];
  assign io_to_ifu_rlast = state == 3'h1 & _GEN_1248; // @[i_cache.scala 137:25]
  assign io_to_ifu_rvalid = state == 3'h1 & _GEN_1248; // @[i_cache.scala 137:25]
  assign io_to_axi_araddr = _GEN_1257[31:0];
  assign io_to_axi_arlen = {{5'd0}, _GEN_1258};
  assign io_to_axi_arvalid = state == 3'h1 ? 1'h0 : _T_9; // @[i_cache.scala 137:25 138:27]
  assign io_to_axi_rready = state == 3'h1 ? 1'h0 : io_from_ifu_rready; // @[i_cache.scala 137:25 143:26]
  assign io_cache_init = state == 3'h4; // @[i_cache.scala 245:27]
  always @(posedge clock) begin
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_0 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_0 <= _GEN_732;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_1 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_1 <= _GEN_733;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_2 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_2 <= _GEN_734;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_3 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_3 <= _GEN_735;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_4 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_4 <= _GEN_736;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_5 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_5 <= _GEN_737;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_6 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_6 <= _GEN_738;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_7 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_7 <= _GEN_739;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_8 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_8 <= _GEN_740;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_9 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_9 <= _GEN_741;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_10 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_10 <= _GEN_742;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_11 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_11 <= _GEN_743;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_12 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_12 <= _GEN_744;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_13 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_13 <= _GEN_745;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_14 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_14 <= _GEN_746;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      ram_0_15 <= 512'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_0_15 <= _GEN_747;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_0 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_0 <= _GEN_796;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_1 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_1 <= _GEN_797;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_2 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_2 <= _GEN_798;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_3 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_3 <= _GEN_799;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_4 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_4 <= _GEN_800;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_5 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_5 <= _GEN_801;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_6 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_6 <= _GEN_802;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_7 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_7 <= _GEN_803;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_8 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_8 <= _GEN_804;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_9 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_9 <= _GEN_805;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_10 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_10 <= _GEN_806;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_11 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_11 <= _GEN_807;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_12 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_12 <= _GEN_808;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_13 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_13 <= _GEN_809;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_14 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_14 <= _GEN_810;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      ram_1_15 <= 512'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          ram_1_15 <= _GEN_811;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_0 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_0 <= _GEN_748;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_1 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_1 <= _GEN_749;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_2 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_2 <= _GEN_750;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_3 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_3 <= _GEN_751;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_4 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_4 <= _GEN_752;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_5 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_5 <= _GEN_753;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_6 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_6 <= _GEN_754;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_7 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_7 <= _GEN_755;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_8 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_8 <= _GEN_756;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_9 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_9 <= _GEN_757;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_10 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_10 <= _GEN_758;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_11 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_11 <= _GEN_759;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_12 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_12 <= _GEN_760;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_13 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_13 <= _GEN_761;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_14 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_14 <= _GEN_762;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:24]
      tag_0_15 <= 32'h0; // @[i_cache.scala 21:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_0_15 <= _GEN_763;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_0 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_0 <= _GEN_812;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_1 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_1 <= _GEN_813;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_2 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_2 <= _GEN_814;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_3 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_3 <= _GEN_815;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_4 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_4 <= _GEN_816;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_5 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_5 <= _GEN_817;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_6 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_6 <= _GEN_818;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_7 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_7 <= _GEN_819;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_8 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_8 <= _GEN_820;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_9 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_9 <= _GEN_821;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_10 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_10 <= _GEN_822;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_11 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_11 <= _GEN_823;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_12 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_12 <= _GEN_824;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_13 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_13 <= _GEN_825;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_14 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_14 <= _GEN_826;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:24]
      tag_1_15 <= 32'h0; // @[i_cache.scala 22:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          tag_1_15 <= _GEN_827;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_0 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_0 <= _GEN_764;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_1 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_1 <= _GEN_765;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_2 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_2 <= _GEN_766;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_3 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_3 <= _GEN_767;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_4 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_4 <= _GEN_768;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_5 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_5 <= _GEN_769;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_6 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_6 <= _GEN_770;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_7 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_7 <= _GEN_771;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_8 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_8 <= _GEN_772;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_9 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_9 <= _GEN_773;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_10 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_10 <= _GEN_774;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_11 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_11 <= _GEN_775;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_12 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_12 <= _GEN_776;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_13 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_13 <= _GEN_777;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_14 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_14 <= _GEN_778;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:26]
      valid_0_15 <= 1'h0; // @[i_cache.scala 23:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_0_15 <= _GEN_779;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_0 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_0 <= _GEN_828;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_1 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_1 <= _GEN_829;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_2 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_2 <= _GEN_830;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_3 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_3 <= _GEN_831;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_4 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_4 <= _GEN_832;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_5 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_5 <= _GEN_833;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_6 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_6 <= _GEN_834;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_7 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_7 <= _GEN_835;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_8 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_8 <= _GEN_836;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_9 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_9 <= _GEN_837;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_10 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_10 <= _GEN_838;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_11 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_11 <= _GEN_839;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_12 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_12 <= _GEN_840;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_13 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_13 <= _GEN_841;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_14 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_14 <= _GEN_842;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 24:26]
      valid_1_15 <= 1'h0; // @[i_cache.scala 24:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          valid_1_15 <= _GEN_843;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_0 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_0 <= _GEN_80;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_1 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_1 <= _GEN_81;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_2 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_2 <= _GEN_82;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_3 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_3 <= _GEN_83;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_4 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_4 <= _GEN_84;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_5 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_5 <= _GEN_85;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_6 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_6 <= _GEN_86;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 29:31]
      receive_data_7 <= 64'h0; // @[i_cache.scala 29:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (3'h2 == state) begin // @[i_cache.scala 47:18]
          receive_data_7 <= _GEN_87;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 30:30]
      receive_num <= 3'h0; // @[i_cache.scala 30:30]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (3'h1 == state) begin // @[i_cache.scala 47:18]
        if (!(way0_hit)) begin // @[i_cache.scala 57:27]
          receive_num <= _GEN_68;
        end
      end else if (3'h2 == state) begin // @[i_cache.scala 47:18]
        receive_num <= _GEN_88;
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_0 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_0 <= _GEN_780;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_1 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_1 <= _GEN_781;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_2 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_2 <= _GEN_782;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_3 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_3 <= _GEN_783;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_4 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_4 <= _GEN_784;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_5 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_5 <= _GEN_785;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_6 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_6 <= _GEN_786;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_7 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_7 <= _GEN_787;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_8 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_8 <= _GEN_788;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_9 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_9 <= _GEN_789;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_10 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_10 <= _GEN_790;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_11 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_11 <= _GEN_791;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_12 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_12 <= _GEN_792;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_13 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_13 <= _GEN_793;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_14 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_14 <= _GEN_794;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 31:24]
      quene_15 <= 2'h0; // @[i_cache.scala 31:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 47:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 47:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 47:18]
          quene_15 <= _GEN_795;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 45:24]
      state <= 3'h0; // @[i_cache.scala 45:24]
    end else if (3'h0 == state) begin // @[i_cache.scala 47:18]
      if (io_clear_cache) begin // @[i_cache.scala 49:33]
        state <= 3'h4; // @[i_cache.scala 50:23]
      end else if (io_from_ifu_arvalid) begin // @[i_cache.scala 51:44]
        state <= 3'h1; // @[i_cache.scala 52:23]
      end
    end else if (3'h1 == state) begin // @[i_cache.scala 47:18]
      if (way0_hit) begin // @[i_cache.scala 57:27]
        state <= _GEN_66;
      end else begin
        state <= _GEN_67;
      end
    end else if (3'h2 == state) begin // @[i_cache.scala 47:18]
      state <= _GEN_89;
    end else begin
      state <= _GEN_731;
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
  _RAND_96 = {2{`RANDOM}};
  receive_data_0 = _RAND_96[63:0];
  _RAND_97 = {2{`RANDOM}};
  receive_data_1 = _RAND_97[63:0];
  _RAND_98 = {2{`RANDOM}};
  receive_data_2 = _RAND_98[63:0];
  _RAND_99 = {2{`RANDOM}};
  receive_data_3 = _RAND_99[63:0];
  _RAND_100 = {2{`RANDOM}};
  receive_data_4 = _RAND_100[63:0];
  _RAND_101 = {2{`RANDOM}};
  receive_data_5 = _RAND_101[63:0];
  _RAND_102 = {2{`RANDOM}};
  receive_data_6 = _RAND_102[63:0];
  _RAND_103 = {2{`RANDOM}};
  receive_data_7 = _RAND_103[63:0];
  _RAND_104 = {1{`RANDOM}};
  receive_num = _RAND_104[2:0];
  _RAND_105 = {1{`RANDOM}};
  quene_0 = _RAND_105[1:0];
  _RAND_106 = {1{`RANDOM}};
  quene_1 = _RAND_106[1:0];
  _RAND_107 = {1{`RANDOM}};
  quene_2 = _RAND_107[1:0];
  _RAND_108 = {1{`RANDOM}};
  quene_3 = _RAND_108[1:0];
  _RAND_109 = {1{`RANDOM}};
  quene_4 = _RAND_109[1:0];
  _RAND_110 = {1{`RANDOM}};
  quene_5 = _RAND_110[1:0];
  _RAND_111 = {1{`RANDOM}};
  quene_6 = _RAND_111[1:0];
  _RAND_112 = {1{`RANDOM}};
  quene_7 = _RAND_112[1:0];
  _RAND_113 = {1{`RANDOM}};
  quene_8 = _RAND_113[1:0];
  _RAND_114 = {1{`RANDOM}};
  quene_9 = _RAND_114[1:0];
  _RAND_115 = {1{`RANDOM}};
  quene_10 = _RAND_115[1:0];
  _RAND_116 = {1{`RANDOM}};
  quene_11 = _RAND_116[1:0];
  _RAND_117 = {1{`RANDOM}};
  quene_12 = _RAND_117[1:0];
  _RAND_118 = {1{`RANDOM}};
  quene_13 = _RAND_118[1:0];
  _RAND_119 = {1{`RANDOM}};
  quene_14 = _RAND_119[1:0];
  _RAND_120 = {1{`RANDOM}};
  quene_15 = _RAND_120[1:0];
  _RAND_121 = {1{`RANDOM}};
  state = _RAND_121[2:0];
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
  reg [511:0] _RAND_128;
  reg [31:0] _RAND_129;
  reg [63:0] _RAND_130;
  reg [63:0] _RAND_131;
  reg [63:0] _RAND_132;
  reg [63:0] _RAND_133;
  reg [63:0] _RAND_134;
  reg [63:0] _RAND_135;
  reg [63:0] _RAND_136;
  reg [63:0] _RAND_137;
  reg [31:0] _RAND_138;
  reg [31:0] _RAND_139;
  reg [31:0] _RAND_140;
  reg [31:0] _RAND_141;
  reg [31:0] _RAND_142;
  reg [31:0] _RAND_143;
  reg [31:0] _RAND_144;
  reg [31:0] _RAND_145;
  reg [31:0] _RAND_146;
  reg [31:0] _RAND_147;
  reg [31:0] _RAND_148;
  reg [31:0] _RAND_149;
  reg [31:0] _RAND_150;
  reg [31:0] _RAND_151;
  reg [31:0] _RAND_152;
  reg [31:0] _RAND_153;
  reg [31:0] _RAND_154;
  reg [31:0] _RAND_155;
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
  reg [31:0] tag_0_0; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_1; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_2; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_3; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_4; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_5; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_6; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_7; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_8; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_9; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_10; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_11; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_12; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_13; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_14; // @[d_cache.scala 22:24]
  reg [31:0] tag_0_15; // @[d_cache.scala 22:24]
  reg [31:0] tag_1_0; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_1; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_2; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_3; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_4; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_5; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_6; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_7; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_8; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_9; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_10; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_11; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_12; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_13; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_14; // @[d_cache.scala 23:24]
  reg [31:0] tag_1_15; // @[d_cache.scala 23:24]
  reg  valid_0_0; // @[d_cache.scala 24:26]
  reg  valid_0_1; // @[d_cache.scala 24:26]
  reg  valid_0_2; // @[d_cache.scala 24:26]
  reg  valid_0_3; // @[d_cache.scala 24:26]
  reg  valid_0_4; // @[d_cache.scala 24:26]
  reg  valid_0_5; // @[d_cache.scala 24:26]
  reg  valid_0_6; // @[d_cache.scala 24:26]
  reg  valid_0_7; // @[d_cache.scala 24:26]
  reg  valid_0_8; // @[d_cache.scala 24:26]
  reg  valid_0_9; // @[d_cache.scala 24:26]
  reg  valid_0_10; // @[d_cache.scala 24:26]
  reg  valid_0_11; // @[d_cache.scala 24:26]
  reg  valid_0_12; // @[d_cache.scala 24:26]
  reg  valid_0_13; // @[d_cache.scala 24:26]
  reg  valid_0_14; // @[d_cache.scala 24:26]
  reg  valid_0_15; // @[d_cache.scala 24:26]
  reg  valid_1_0; // @[d_cache.scala 25:26]
  reg  valid_1_1; // @[d_cache.scala 25:26]
  reg  valid_1_2; // @[d_cache.scala 25:26]
  reg  valid_1_3; // @[d_cache.scala 25:26]
  reg  valid_1_4; // @[d_cache.scala 25:26]
  reg  valid_1_5; // @[d_cache.scala 25:26]
  reg  valid_1_6; // @[d_cache.scala 25:26]
  reg  valid_1_7; // @[d_cache.scala 25:26]
  reg  valid_1_8; // @[d_cache.scala 25:26]
  reg  valid_1_9; // @[d_cache.scala 25:26]
  reg  valid_1_10; // @[d_cache.scala 25:26]
  reg  valid_1_11; // @[d_cache.scala 25:26]
  reg  valid_1_12; // @[d_cache.scala 25:26]
  reg  valid_1_13; // @[d_cache.scala 25:26]
  reg  valid_1_14; // @[d_cache.scala 25:26]
  reg  valid_1_15; // @[d_cache.scala 25:26]
  reg  dirty_0_0; // @[d_cache.scala 26:26]
  reg  dirty_0_1; // @[d_cache.scala 26:26]
  reg  dirty_0_2; // @[d_cache.scala 26:26]
  reg  dirty_0_3; // @[d_cache.scala 26:26]
  reg  dirty_0_4; // @[d_cache.scala 26:26]
  reg  dirty_0_5; // @[d_cache.scala 26:26]
  reg  dirty_0_6; // @[d_cache.scala 26:26]
  reg  dirty_0_7; // @[d_cache.scala 26:26]
  reg  dirty_0_8; // @[d_cache.scala 26:26]
  reg  dirty_0_9; // @[d_cache.scala 26:26]
  reg  dirty_0_10; // @[d_cache.scala 26:26]
  reg  dirty_0_11; // @[d_cache.scala 26:26]
  reg  dirty_0_12; // @[d_cache.scala 26:26]
  reg  dirty_0_13; // @[d_cache.scala 26:26]
  reg  dirty_0_14; // @[d_cache.scala 26:26]
  reg  dirty_0_15; // @[d_cache.scala 26:26]
  reg  dirty_1_0; // @[d_cache.scala 27:26]
  reg  dirty_1_1; // @[d_cache.scala 27:26]
  reg  dirty_1_2; // @[d_cache.scala 27:26]
  reg  dirty_1_3; // @[d_cache.scala 27:26]
  reg  dirty_1_4; // @[d_cache.scala 27:26]
  reg  dirty_1_5; // @[d_cache.scala 27:26]
  reg  dirty_1_6; // @[d_cache.scala 27:26]
  reg  dirty_1_7; // @[d_cache.scala 27:26]
  reg  dirty_1_8; // @[d_cache.scala 27:26]
  reg  dirty_1_9; // @[d_cache.scala 27:26]
  reg  dirty_1_10; // @[d_cache.scala 27:26]
  reg  dirty_1_11; // @[d_cache.scala 27:26]
  reg  dirty_1_12; // @[d_cache.scala 27:26]
  reg  dirty_1_13; // @[d_cache.scala 27:26]
  reg  dirty_1_14; // @[d_cache.scala 27:26]
  reg  dirty_1_15; // @[d_cache.scala 27:26]
  reg [511:0] write_back_data; // @[d_cache.scala 31:34]
  reg [31:0] write_back_addr; // @[d_cache.scala 32:34]
  reg [63:0] receive_data_0; // @[d_cache.scala 37:31]
  reg [63:0] receive_data_1; // @[d_cache.scala 37:31]
  reg [63:0] receive_data_2; // @[d_cache.scala 37:31]
  reg [63:0] receive_data_3; // @[d_cache.scala 37:31]
  reg [63:0] receive_data_4; // @[d_cache.scala 37:31]
  reg [63:0] receive_data_5; // @[d_cache.scala 37:31]
  reg [63:0] receive_data_6; // @[d_cache.scala 37:31]
  reg [63:0] receive_data_7; // @[d_cache.scala 37:31]
  reg [2:0] receive_num; // @[d_cache.scala 38:30]
  reg [1:0] quene_0; // @[d_cache.scala 39:24]
  reg [1:0] quene_1; // @[d_cache.scala 39:24]
  reg [1:0] quene_2; // @[d_cache.scala 39:24]
  reg [1:0] quene_3; // @[d_cache.scala 39:24]
  reg [1:0] quene_4; // @[d_cache.scala 39:24]
  reg [1:0] quene_5; // @[d_cache.scala 39:24]
  reg [1:0] quene_6; // @[d_cache.scala 39:24]
  reg [1:0] quene_7; // @[d_cache.scala 39:24]
  reg [1:0] quene_8; // @[d_cache.scala 39:24]
  reg [1:0] quene_9; // @[d_cache.scala 39:24]
  reg [1:0] quene_10; // @[d_cache.scala 39:24]
  reg [1:0] quene_11; // @[d_cache.scala 39:24]
  reg [1:0] quene_12; // @[d_cache.scala 39:24]
  reg [1:0] quene_13; // @[d_cache.scala 39:24]
  reg [1:0] quene_14; // @[d_cache.scala 39:24]
  reg [1:0] quene_15; // @[d_cache.scala 39:24]
  wire [5:0] offset = io_from_lsu_araddr[5:0]; // @[d_cache.scala 41:36]
  wire [3:0] index = io_from_lsu_araddr[9:6]; // @[d_cache.scala 42:35]
  wire [21:0] tag = io_from_lsu_araddr[31:10]; // @[d_cache.scala 43:33]
  wire [8:0] shift_bit = {offset, 3'h0}; // @[d_cache.scala 45:28]
  wire [63:0] _wmask_T_4 = io_from_lsu_wstrb == 8'hff ? 64'hffffffffffffffff : 64'h0; // @[d_cache.scala 58:20]
  wire [63:0] _wmask_T_5 = io_from_lsu_wstrb == 8'hf ? 64'hffffffff : _wmask_T_4; // @[d_cache.scala 57:20]
  wire [63:0] _wmask_T_6 = io_from_lsu_wstrb == 8'h3 ? 64'hffff : _wmask_T_5; // @[d_cache.scala 56:20]
  wire [63:0] wmask = io_from_lsu_wstrb == 8'h1 ? 64'hff : _wmask_T_6; // @[d_cache.scala 55:20]
  wire [31:0] _GEN_1 = 4'h1 == index ? tag_0_1 : tag_0_0; // @[d_cache.scala 78:{31,31}]
  wire [31:0] _GEN_2 = 4'h2 == index ? tag_0_2 : _GEN_1; // @[d_cache.scala 78:{31,31}]
  wire [31:0] _GEN_3 = 4'h3 == index ? tag_0_3 : _GEN_2; // @[d_cache.scala 78:{31,31}]
  wire [31:0] _GEN_4 = 4'h4 == index ? tag_0_4 : _GEN_3; // @[d_cache.scala 78:{31,31}]
  wire [31:0] _GEN_5 = 4'h5 == index ? tag_0_5 : _GEN_4; // @[d_cache.scala 78:{31,31}]
  wire [31:0] _GEN_6 = 4'h6 == index ? tag_0_6 : _GEN_5; // @[d_cache.scala 78:{31,31}]
  wire [31:0] _GEN_7 = 4'h7 == index ? tag_0_7 : _GEN_6; // @[d_cache.scala 78:{31,31}]
  wire [31:0] _GEN_8 = 4'h8 == index ? tag_0_8 : _GEN_7; // @[d_cache.scala 78:{31,31}]
  wire [31:0] _GEN_9 = 4'h9 == index ? tag_0_9 : _GEN_8; // @[d_cache.scala 78:{31,31}]
  wire [31:0] _GEN_10 = 4'ha == index ? tag_0_10 : _GEN_9; // @[d_cache.scala 78:{31,31}]
  wire [31:0] _GEN_11 = 4'hb == index ? tag_0_11 : _GEN_10; // @[d_cache.scala 78:{31,31}]
  wire [31:0] _GEN_12 = 4'hc == index ? tag_0_12 : _GEN_11; // @[d_cache.scala 78:{31,31}]
  wire [31:0] _GEN_13 = 4'hd == index ? tag_0_13 : _GEN_12; // @[d_cache.scala 78:{31,31}]
  wire [31:0] _GEN_14 = 4'he == index ? tag_0_14 : _GEN_13; // @[d_cache.scala 78:{31,31}]
  wire [31:0] _GEN_15 = 4'hf == index ? tag_0_15 : _GEN_14; // @[d_cache.scala 78:{31,31}]
  wire [31:0] _GEN_2284 = {{10'd0}, tag}; // @[d_cache.scala 78:31]
  wire  _GEN_17 = 4'h1 == index ? valid_0_1 : valid_0_0; // @[d_cache.scala 78:{57,57}]
  wire  _GEN_18 = 4'h2 == index ? valid_0_2 : _GEN_17; // @[d_cache.scala 78:{57,57}]
  wire  _GEN_19 = 4'h3 == index ? valid_0_3 : _GEN_18; // @[d_cache.scala 78:{57,57}]
  wire  _GEN_20 = 4'h4 == index ? valid_0_4 : _GEN_19; // @[d_cache.scala 78:{57,57}]
  wire  _GEN_21 = 4'h5 == index ? valid_0_5 : _GEN_20; // @[d_cache.scala 78:{57,57}]
  wire  _GEN_22 = 4'h6 == index ? valid_0_6 : _GEN_21; // @[d_cache.scala 78:{57,57}]
  wire  _GEN_23 = 4'h7 == index ? valid_0_7 : _GEN_22; // @[d_cache.scala 78:{57,57}]
  wire  _GEN_24 = 4'h8 == index ? valid_0_8 : _GEN_23; // @[d_cache.scala 78:{57,57}]
  wire  _GEN_25 = 4'h9 == index ? valid_0_9 : _GEN_24; // @[d_cache.scala 78:{57,57}]
  wire  _GEN_26 = 4'ha == index ? valid_0_10 : _GEN_25; // @[d_cache.scala 78:{57,57}]
  wire  _GEN_27 = 4'hb == index ? valid_0_11 : _GEN_26; // @[d_cache.scala 78:{57,57}]
  wire  _GEN_28 = 4'hc == index ? valid_0_12 : _GEN_27; // @[d_cache.scala 78:{57,57}]
  wire  _GEN_29 = 4'hd == index ? valid_0_13 : _GEN_28; // @[d_cache.scala 78:{57,57}]
  wire  _GEN_30 = 4'he == index ? valid_0_14 : _GEN_29; // @[d_cache.scala 78:{57,57}]
  wire  _GEN_31 = 4'hf == index ? valid_0_15 : _GEN_30; // @[d_cache.scala 78:{57,57}]
  wire  way0_hit = _GEN_15 == _GEN_2284 & _GEN_31; // @[d_cache.scala 78:40]
  wire [31:0] _GEN_33 = 4'h1 == index ? tag_1_1 : tag_1_0; // @[d_cache.scala 80:{31,31}]
  wire [31:0] _GEN_34 = 4'h2 == index ? tag_1_2 : _GEN_33; // @[d_cache.scala 80:{31,31}]
  wire [31:0] _GEN_35 = 4'h3 == index ? tag_1_3 : _GEN_34; // @[d_cache.scala 80:{31,31}]
  wire [31:0] _GEN_36 = 4'h4 == index ? tag_1_4 : _GEN_35; // @[d_cache.scala 80:{31,31}]
  wire [31:0] _GEN_37 = 4'h5 == index ? tag_1_5 : _GEN_36; // @[d_cache.scala 80:{31,31}]
  wire [31:0] _GEN_38 = 4'h6 == index ? tag_1_6 : _GEN_37; // @[d_cache.scala 80:{31,31}]
  wire [31:0] _GEN_39 = 4'h7 == index ? tag_1_7 : _GEN_38; // @[d_cache.scala 80:{31,31}]
  wire [31:0] _GEN_40 = 4'h8 == index ? tag_1_8 : _GEN_39; // @[d_cache.scala 80:{31,31}]
  wire [31:0] _GEN_41 = 4'h9 == index ? tag_1_9 : _GEN_40; // @[d_cache.scala 80:{31,31}]
  wire [31:0] _GEN_42 = 4'ha == index ? tag_1_10 : _GEN_41; // @[d_cache.scala 80:{31,31}]
  wire [31:0] _GEN_43 = 4'hb == index ? tag_1_11 : _GEN_42; // @[d_cache.scala 80:{31,31}]
  wire [31:0] _GEN_44 = 4'hc == index ? tag_1_12 : _GEN_43; // @[d_cache.scala 80:{31,31}]
  wire [31:0] _GEN_45 = 4'hd == index ? tag_1_13 : _GEN_44; // @[d_cache.scala 80:{31,31}]
  wire [31:0] _GEN_46 = 4'he == index ? tag_1_14 : _GEN_45; // @[d_cache.scala 80:{31,31}]
  wire [31:0] _GEN_47 = 4'hf == index ? tag_1_15 : _GEN_46; // @[d_cache.scala 80:{31,31}]
  wire  _GEN_49 = 4'h1 == index ? valid_1_1 : valid_1_0; // @[d_cache.scala 80:{57,57}]
  wire  _GEN_50 = 4'h2 == index ? valid_1_2 : _GEN_49; // @[d_cache.scala 80:{57,57}]
  wire  _GEN_51 = 4'h3 == index ? valid_1_3 : _GEN_50; // @[d_cache.scala 80:{57,57}]
  wire  _GEN_52 = 4'h4 == index ? valid_1_4 : _GEN_51; // @[d_cache.scala 80:{57,57}]
  wire  _GEN_53 = 4'h5 == index ? valid_1_5 : _GEN_52; // @[d_cache.scala 80:{57,57}]
  wire  _GEN_54 = 4'h6 == index ? valid_1_6 : _GEN_53; // @[d_cache.scala 80:{57,57}]
  wire  _GEN_55 = 4'h7 == index ? valid_1_7 : _GEN_54; // @[d_cache.scala 80:{57,57}]
  wire  _GEN_56 = 4'h8 == index ? valid_1_8 : _GEN_55; // @[d_cache.scala 80:{57,57}]
  wire  _GEN_57 = 4'h9 == index ? valid_1_9 : _GEN_56; // @[d_cache.scala 80:{57,57}]
  wire  _GEN_58 = 4'ha == index ? valid_1_10 : _GEN_57; // @[d_cache.scala 80:{57,57}]
  wire  _GEN_59 = 4'hb == index ? valid_1_11 : _GEN_58; // @[d_cache.scala 80:{57,57}]
  wire  _GEN_60 = 4'hc == index ? valid_1_12 : _GEN_59; // @[d_cache.scala 80:{57,57}]
  wire  _GEN_61 = 4'hd == index ? valid_1_13 : _GEN_60; // @[d_cache.scala 80:{57,57}]
  wire  _GEN_62 = 4'he == index ? valid_1_14 : _GEN_61; // @[d_cache.scala 80:{57,57}]
  wire  _GEN_63 = 4'hf == index ? valid_1_15 : _GEN_62; // @[d_cache.scala 80:{57,57}]
  wire  way1_hit = _GEN_47 == _GEN_2284 & _GEN_63; // @[d_cache.scala 80:40]
  wire [1:0] _unuse_way_T_2 = ~_GEN_63 ? 2'h2 : 2'h0; // @[d_cache.scala 83:50]
  wire [1:0] unuse_way = ~_GEN_31 ? 2'h1 : _unuse_way_T_2; // @[d_cache.scala 83:21]
  reg [3:0] state; // @[d_cache.scala 85:24]
  wire  _T_1 = io_from_lsu_araddr >= 32'ha0000000; // @[d_cache.scala 93:41]
  wire [3:0] _GEN_65 = _T_1 ? 4'h8 : 4'h2; // @[d_cache.scala 100:27 102:27 99:58]
  wire [3:0] _GEN_69 = way1_hit ? 4'h0 : 4'h3; // @[d_cache.scala 114:33 120:23]
  wire [2:0] _GEN_70 = way1_hit ? receive_num : 3'h0; // @[d_cache.scala 114:33 121:29 38:30]
  wire [63:0] _ram_0_T = io_from_lsu_wdata & wmask; // @[d_cache.scala 127:53]
  wire [574:0] _GEN_2508 = {{511'd0}, _ram_0_T}; // @[d_cache.scala 127:62]
  wire [574:0] _ram_0_T_1 = _GEN_2508 << shift_bit; // @[d_cache.scala 127:62]
  wire [574:0] _GEN_2509 = {{511'd0}, wmask}; // @[d_cache.scala 127:102]
  wire [574:0] _ram_0_T_2 = _GEN_2509 << shift_bit; // @[d_cache.scala 127:102]
  wire [574:0] _ram_0_T_3 = ~_ram_0_T_2; // @[d_cache.scala 127:94]
  wire [511:0] _GEN_74 = 4'h1 == index ? ram_0_1 : ram_0_0; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_75 = 4'h2 == index ? ram_0_2 : _GEN_74; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_76 = 4'h3 == index ? ram_0_3 : _GEN_75; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_77 = 4'h4 == index ? ram_0_4 : _GEN_76; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_78 = 4'h5 == index ? ram_0_5 : _GEN_77; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_79 = 4'h6 == index ? ram_0_6 : _GEN_78; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_80 = 4'h7 == index ? ram_0_7 : _GEN_79; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_81 = 4'h8 == index ? ram_0_8 : _GEN_80; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_82 = 4'h9 == index ? ram_0_9 : _GEN_81; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_83 = 4'ha == index ? ram_0_10 : _GEN_82; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_84 = 4'hb == index ? ram_0_11 : _GEN_83; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_85 = 4'hc == index ? ram_0_12 : _GEN_84; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_86 = 4'hd == index ? ram_0_13 : _GEN_85; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_87 = 4'he == index ? ram_0_14 : _GEN_86; // @[d_cache.scala 127:{92,92}]
  wire [511:0] _GEN_88 = 4'hf == index ? ram_0_15 : _GEN_87; // @[d_cache.scala 127:{92,92}]
  wire [574:0] _GEN_2291 = {{63'd0}, _GEN_88}; // @[d_cache.scala 127:92]
  wire [574:0] _ram_0_T_4 = _GEN_2291 & _ram_0_T_3; // @[d_cache.scala 127:92]
  wire [574:0] _ram_0_T_5 = _ram_0_T_1 | _ram_0_T_4; // @[d_cache.scala 127:76]
  wire [511:0] _GEN_89 = 4'h0 == index ? _ram_0_T_5[511:0] : ram_0_0; // @[d_cache.scala 127:{30,30} 19:24]
  wire [511:0] _GEN_90 = 4'h1 == index ? _ram_0_T_5[511:0] : ram_0_1; // @[d_cache.scala 127:{30,30} 19:24]
  wire [511:0] _GEN_91 = 4'h2 == index ? _ram_0_T_5[511:0] : ram_0_2; // @[d_cache.scala 127:{30,30} 19:24]
  wire [511:0] _GEN_92 = 4'h3 == index ? _ram_0_T_5[511:0] : ram_0_3; // @[d_cache.scala 127:{30,30} 19:24]
  wire [511:0] _GEN_93 = 4'h4 == index ? _ram_0_T_5[511:0] : ram_0_4; // @[d_cache.scala 127:{30,30} 19:24]
  wire [511:0] _GEN_94 = 4'h5 == index ? _ram_0_T_5[511:0] : ram_0_5; // @[d_cache.scala 127:{30,30} 19:24]
  wire [511:0] _GEN_95 = 4'h6 == index ? _ram_0_T_5[511:0] : ram_0_6; // @[d_cache.scala 127:{30,30} 19:24]
  wire [511:0] _GEN_96 = 4'h7 == index ? _ram_0_T_5[511:0] : ram_0_7; // @[d_cache.scala 127:{30,30} 19:24]
  wire [511:0] _GEN_97 = 4'h8 == index ? _ram_0_T_5[511:0] : ram_0_8; // @[d_cache.scala 127:{30,30} 19:24]
  wire [511:0] _GEN_98 = 4'h9 == index ? _ram_0_T_5[511:0] : ram_0_9; // @[d_cache.scala 127:{30,30} 19:24]
  wire [511:0] _GEN_99 = 4'ha == index ? _ram_0_T_5[511:0] : ram_0_10; // @[d_cache.scala 127:{30,30} 19:24]
  wire [511:0] _GEN_100 = 4'hb == index ? _ram_0_T_5[511:0] : ram_0_11; // @[d_cache.scala 127:{30,30} 19:24]
  wire [511:0] _GEN_101 = 4'hc == index ? _ram_0_T_5[511:0] : ram_0_12; // @[d_cache.scala 127:{30,30} 19:24]
  wire [511:0] _GEN_102 = 4'hd == index ? _ram_0_T_5[511:0] : ram_0_13; // @[d_cache.scala 127:{30,30} 19:24]
  wire [511:0] _GEN_103 = 4'he == index ? _ram_0_T_5[511:0] : ram_0_14; // @[d_cache.scala 127:{30,30} 19:24]
  wire [511:0] _GEN_104 = 4'hf == index ? _ram_0_T_5[511:0] : ram_0_15; // @[d_cache.scala 127:{30,30} 19:24]
  wire  _GEN_2292 = 4'h0 == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_105 = 4'h0 == index | dirty_0_0; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_2293 = 4'h1 == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_106 = 4'h1 == index | dirty_0_1; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_2295 = 4'h2 == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_107 = 4'h2 == index | dirty_0_2; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_2297 = 4'h3 == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_108 = 4'h3 == index | dirty_0_3; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_2299 = 4'h4 == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_109 = 4'h4 == index | dirty_0_4; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_2302 = 4'h5 == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_110 = 4'h5 == index | dirty_0_5; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_2303 = 4'h6 == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_111 = 4'h6 == index | dirty_0_6; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_2308 = 4'h7 == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_112 = 4'h7 == index | dirty_0_7; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_2309 = 4'h8 == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_113 = 4'h8 == index | dirty_0_8; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_2313 = 4'h9 == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_114 = 4'h9 == index | dirty_0_9; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_2317 = 4'ha == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_115 = 4'ha == index | dirty_0_10; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_2319 = 4'hb == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_116 = 4'hb == index | dirty_0_11; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_2321 = 4'hc == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_117 = 4'hc == index | dirty_0_12; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_2322 = 4'hd == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_118 = 4'hd == index | dirty_0_13; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_2326 = 4'he == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_119 = 4'he == index | dirty_0_14; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_2327 = 4'hf == index; // @[d_cache.scala 131:{32,32} 26:26]
  wire  _GEN_120 = 4'hf == index | dirty_0_15; // @[d_cache.scala 131:{32,32} 26:26]
  wire [511:0] _GEN_122 = 4'h1 == index ? ram_1_1 : ram_1_0; // @[d_cache.scala 136:{92,92}]
  wire [511:0] _GEN_123 = 4'h2 == index ? ram_1_2 : _GEN_122; // @[d_cache.scala 136:{92,92}]
  wire [511:0] _GEN_124 = 4'h3 == index ? ram_1_3 : _GEN_123; // @[d_cache.scala 136:{92,92}]
  wire [511:0] _GEN_125 = 4'h4 == index ? ram_1_4 : _GEN_124; // @[d_cache.scala 136:{92,92}]
  wire [511:0] _GEN_126 = 4'h5 == index ? ram_1_5 : _GEN_125; // @[d_cache.scala 136:{92,92}]
  wire [511:0] _GEN_127 = 4'h6 == index ? ram_1_6 : _GEN_126; // @[d_cache.scala 136:{92,92}]
  wire [511:0] _GEN_128 = 4'h7 == index ? ram_1_7 : _GEN_127; // @[d_cache.scala 136:{92,92}]
  wire [511:0] _GEN_129 = 4'h8 == index ? ram_1_8 : _GEN_128; // @[d_cache.scala 136:{92,92}]
  wire [511:0] _GEN_130 = 4'h9 == index ? ram_1_9 : _GEN_129; // @[d_cache.scala 136:{92,92}]
  wire [511:0] _GEN_131 = 4'ha == index ? ram_1_10 : _GEN_130; // @[d_cache.scala 136:{92,92}]
  wire [511:0] _GEN_132 = 4'hb == index ? ram_1_11 : _GEN_131; // @[d_cache.scala 136:{92,92}]
  wire [511:0] _GEN_133 = 4'hc == index ? ram_1_12 : _GEN_132; // @[d_cache.scala 136:{92,92}]
  wire [511:0] _GEN_134 = 4'hd == index ? ram_1_13 : _GEN_133; // @[d_cache.scala 136:{92,92}]
  wire [511:0] _GEN_135 = 4'he == index ? ram_1_14 : _GEN_134; // @[d_cache.scala 136:{92,92}]
  wire [511:0] _GEN_136 = 4'hf == index ? ram_1_15 : _GEN_135; // @[d_cache.scala 136:{92,92}]
  wire [574:0] _GEN_2332 = {{63'd0}, _GEN_136}; // @[d_cache.scala 136:92]
  wire [574:0] _ram_1_T_4 = _GEN_2332 & _ram_0_T_3; // @[d_cache.scala 136:92]
  wire [574:0] _ram_1_T_5 = _ram_0_T_1 | _ram_1_T_4; // @[d_cache.scala 136:76]
  wire [511:0] _GEN_137 = 4'h0 == index ? _ram_1_T_5[511:0] : ram_1_0; // @[d_cache.scala 136:{30,30} 20:24]
  wire [511:0] _GEN_138 = 4'h1 == index ? _ram_1_T_5[511:0] : ram_1_1; // @[d_cache.scala 136:{30,30} 20:24]
  wire [511:0] _GEN_139 = 4'h2 == index ? _ram_1_T_5[511:0] : ram_1_2; // @[d_cache.scala 136:{30,30} 20:24]
  wire [511:0] _GEN_140 = 4'h3 == index ? _ram_1_T_5[511:0] : ram_1_3; // @[d_cache.scala 136:{30,30} 20:24]
  wire [511:0] _GEN_141 = 4'h4 == index ? _ram_1_T_5[511:0] : ram_1_4; // @[d_cache.scala 136:{30,30} 20:24]
  wire [511:0] _GEN_142 = 4'h5 == index ? _ram_1_T_5[511:0] : ram_1_5; // @[d_cache.scala 136:{30,30} 20:24]
  wire [511:0] _GEN_143 = 4'h6 == index ? _ram_1_T_5[511:0] : ram_1_6; // @[d_cache.scala 136:{30,30} 20:24]
  wire [511:0] _GEN_144 = 4'h7 == index ? _ram_1_T_5[511:0] : ram_1_7; // @[d_cache.scala 136:{30,30} 20:24]
  wire [511:0] _GEN_145 = 4'h8 == index ? _ram_1_T_5[511:0] : ram_1_8; // @[d_cache.scala 136:{30,30} 20:24]
  wire [511:0] _GEN_146 = 4'h9 == index ? _ram_1_T_5[511:0] : ram_1_9; // @[d_cache.scala 136:{30,30} 20:24]
  wire [511:0] _GEN_147 = 4'ha == index ? _ram_1_T_5[511:0] : ram_1_10; // @[d_cache.scala 136:{30,30} 20:24]
  wire [511:0] _GEN_148 = 4'hb == index ? _ram_1_T_5[511:0] : ram_1_11; // @[d_cache.scala 136:{30,30} 20:24]
  wire [511:0] _GEN_149 = 4'hc == index ? _ram_1_T_5[511:0] : ram_1_12; // @[d_cache.scala 136:{30,30} 20:24]
  wire [511:0] _GEN_150 = 4'hd == index ? _ram_1_T_5[511:0] : ram_1_13; // @[d_cache.scala 136:{30,30} 20:24]
  wire [511:0] _GEN_151 = 4'he == index ? _ram_1_T_5[511:0] : ram_1_14; // @[d_cache.scala 136:{30,30} 20:24]
  wire [511:0] _GEN_152 = 4'hf == index ? _ram_1_T_5[511:0] : ram_1_15; // @[d_cache.scala 136:{30,30} 20:24]
  wire  _GEN_153 = _GEN_2292 | dirty_1_0; // @[d_cache.scala 143:{32,32} 27:26]
  wire  _GEN_154 = _GEN_2293 | dirty_1_1; // @[d_cache.scala 143:{32,32} 27:26]
  wire  _GEN_155 = _GEN_2295 | dirty_1_2; // @[d_cache.scala 143:{32,32} 27:26]
  wire  _GEN_156 = _GEN_2297 | dirty_1_3; // @[d_cache.scala 143:{32,32} 27:26]
  wire  _GEN_157 = _GEN_2299 | dirty_1_4; // @[d_cache.scala 143:{32,32} 27:26]
  wire  _GEN_158 = _GEN_2302 | dirty_1_5; // @[d_cache.scala 143:{32,32} 27:26]
  wire  _GEN_159 = _GEN_2303 | dirty_1_6; // @[d_cache.scala 143:{32,32} 27:26]
  wire  _GEN_160 = _GEN_2308 | dirty_1_7; // @[d_cache.scala 143:{32,32} 27:26]
  wire  _GEN_161 = _GEN_2309 | dirty_1_8; // @[d_cache.scala 143:{32,32} 27:26]
  wire  _GEN_162 = _GEN_2313 | dirty_1_9; // @[d_cache.scala 143:{32,32} 27:26]
  wire  _GEN_163 = _GEN_2317 | dirty_1_10; // @[d_cache.scala 143:{32,32} 27:26]
  wire  _GEN_164 = _GEN_2319 | dirty_1_11; // @[d_cache.scala 143:{32,32} 27:26]
  wire  _GEN_165 = _GEN_2321 | dirty_1_12; // @[d_cache.scala 143:{32,32} 27:26]
  wire  _GEN_166 = _GEN_2322 | dirty_1_13; // @[d_cache.scala 143:{32,32} 27:26]
  wire  _GEN_167 = _GEN_2326 | dirty_1_14; // @[d_cache.scala 143:{32,32} 27:26]
  wire  _GEN_168 = _GEN_2327 | dirty_1_15; // @[d_cache.scala 143:{32,32} 27:26]
  wire [3:0] _GEN_169 = way1_hit ? 4'h0 : 4'h4; // @[d_cache.scala 133:33 134:23 145:23]
  wire [511:0] _GEN_170 = way1_hit ? _GEN_137 : ram_1_0; // @[d_cache.scala 133:33 20:24]
  wire [511:0] _GEN_171 = way1_hit ? _GEN_138 : ram_1_1; // @[d_cache.scala 133:33 20:24]
  wire [511:0] _GEN_172 = way1_hit ? _GEN_139 : ram_1_2; // @[d_cache.scala 133:33 20:24]
  wire [511:0] _GEN_173 = way1_hit ? _GEN_140 : ram_1_3; // @[d_cache.scala 133:33 20:24]
  wire [511:0] _GEN_174 = way1_hit ? _GEN_141 : ram_1_4; // @[d_cache.scala 133:33 20:24]
  wire [511:0] _GEN_175 = way1_hit ? _GEN_142 : ram_1_5; // @[d_cache.scala 133:33 20:24]
  wire [511:0] _GEN_176 = way1_hit ? _GEN_143 : ram_1_6; // @[d_cache.scala 133:33 20:24]
  wire [511:0] _GEN_177 = way1_hit ? _GEN_144 : ram_1_7; // @[d_cache.scala 133:33 20:24]
  wire [511:0] _GEN_178 = way1_hit ? _GEN_145 : ram_1_8; // @[d_cache.scala 133:33 20:24]
  wire [511:0] _GEN_179 = way1_hit ? _GEN_146 : ram_1_9; // @[d_cache.scala 133:33 20:24]
  wire [511:0] _GEN_180 = way1_hit ? _GEN_147 : ram_1_10; // @[d_cache.scala 133:33 20:24]
  wire [511:0] _GEN_181 = way1_hit ? _GEN_148 : ram_1_11; // @[d_cache.scala 133:33 20:24]
  wire [511:0] _GEN_182 = way1_hit ? _GEN_149 : ram_1_12; // @[d_cache.scala 133:33 20:24]
  wire [511:0] _GEN_183 = way1_hit ? _GEN_150 : ram_1_13; // @[d_cache.scala 133:33 20:24]
  wire [511:0] _GEN_184 = way1_hit ? _GEN_151 : ram_1_14; // @[d_cache.scala 133:33 20:24]
  wire [511:0] _GEN_185 = way1_hit ? _GEN_152 : ram_1_15; // @[d_cache.scala 133:33 20:24]
  wire  _GEN_186 = way1_hit ? _GEN_153 : dirty_1_0; // @[d_cache.scala 133:33 27:26]
  wire  _GEN_187 = way1_hit ? _GEN_154 : dirty_1_1; // @[d_cache.scala 133:33 27:26]
  wire  _GEN_188 = way1_hit ? _GEN_155 : dirty_1_2; // @[d_cache.scala 133:33 27:26]
  wire  _GEN_189 = way1_hit ? _GEN_156 : dirty_1_3; // @[d_cache.scala 133:33 27:26]
  wire  _GEN_190 = way1_hit ? _GEN_157 : dirty_1_4; // @[d_cache.scala 133:33 27:26]
  wire  _GEN_191 = way1_hit ? _GEN_158 : dirty_1_5; // @[d_cache.scala 133:33 27:26]
  wire  _GEN_192 = way1_hit ? _GEN_159 : dirty_1_6; // @[d_cache.scala 133:33 27:26]
  wire  _GEN_193 = way1_hit ? _GEN_160 : dirty_1_7; // @[d_cache.scala 133:33 27:26]
  wire  _GEN_194 = way1_hit ? _GEN_161 : dirty_1_8; // @[d_cache.scala 133:33 27:26]
  wire  _GEN_195 = way1_hit ? _GEN_162 : dirty_1_9; // @[d_cache.scala 133:33 27:26]
  wire  _GEN_196 = way1_hit ? _GEN_163 : dirty_1_10; // @[d_cache.scala 133:33 27:26]
  wire  _GEN_197 = way1_hit ? _GEN_164 : dirty_1_11; // @[d_cache.scala 133:33 27:26]
  wire  _GEN_198 = way1_hit ? _GEN_165 : dirty_1_12; // @[d_cache.scala 133:33 27:26]
  wire  _GEN_199 = way1_hit ? _GEN_166 : dirty_1_13; // @[d_cache.scala 133:33 27:26]
  wire  _GEN_200 = way1_hit ? _GEN_167 : dirty_1_14; // @[d_cache.scala 133:33 27:26]
  wire  _GEN_201 = way1_hit ? _GEN_168 : dirty_1_15; // @[d_cache.scala 133:33 27:26]
  wire [3:0] _GEN_202 = way0_hit ? 4'h0 : _GEN_169; // @[d_cache.scala 125:27 126:23]
  wire [511:0] _GEN_203 = way0_hit ? _GEN_89 : ram_0_0; // @[d_cache.scala 125:27 19:24]
  wire [511:0] _GEN_204 = way0_hit ? _GEN_90 : ram_0_1; // @[d_cache.scala 125:27 19:24]
  wire [511:0] _GEN_205 = way0_hit ? _GEN_91 : ram_0_2; // @[d_cache.scala 125:27 19:24]
  wire [511:0] _GEN_206 = way0_hit ? _GEN_92 : ram_0_3; // @[d_cache.scala 125:27 19:24]
  wire [511:0] _GEN_207 = way0_hit ? _GEN_93 : ram_0_4; // @[d_cache.scala 125:27 19:24]
  wire [511:0] _GEN_208 = way0_hit ? _GEN_94 : ram_0_5; // @[d_cache.scala 125:27 19:24]
  wire [511:0] _GEN_209 = way0_hit ? _GEN_95 : ram_0_6; // @[d_cache.scala 125:27 19:24]
  wire [511:0] _GEN_210 = way0_hit ? _GEN_96 : ram_0_7; // @[d_cache.scala 125:27 19:24]
  wire [511:0] _GEN_211 = way0_hit ? _GEN_97 : ram_0_8; // @[d_cache.scala 125:27 19:24]
  wire [511:0] _GEN_212 = way0_hit ? _GEN_98 : ram_0_9; // @[d_cache.scala 125:27 19:24]
  wire [511:0] _GEN_213 = way0_hit ? _GEN_99 : ram_0_10; // @[d_cache.scala 125:27 19:24]
  wire [511:0] _GEN_214 = way0_hit ? _GEN_100 : ram_0_11; // @[d_cache.scala 125:27 19:24]
  wire [511:0] _GEN_215 = way0_hit ? _GEN_101 : ram_0_12; // @[d_cache.scala 125:27 19:24]
  wire [511:0] _GEN_216 = way0_hit ? _GEN_102 : ram_0_13; // @[d_cache.scala 125:27 19:24]
  wire [511:0] _GEN_217 = way0_hit ? _GEN_103 : ram_0_14; // @[d_cache.scala 125:27 19:24]
  wire [511:0] _GEN_218 = way0_hit ? _GEN_104 : ram_0_15; // @[d_cache.scala 125:27 19:24]
  wire  _GEN_219 = way0_hit ? _GEN_105 : dirty_0_0; // @[d_cache.scala 125:27 26:26]
  wire  _GEN_220 = way0_hit ? _GEN_106 : dirty_0_1; // @[d_cache.scala 125:27 26:26]
  wire  _GEN_221 = way0_hit ? _GEN_107 : dirty_0_2; // @[d_cache.scala 125:27 26:26]
  wire  _GEN_222 = way0_hit ? _GEN_108 : dirty_0_3; // @[d_cache.scala 125:27 26:26]
  wire  _GEN_223 = way0_hit ? _GEN_109 : dirty_0_4; // @[d_cache.scala 125:27 26:26]
  wire  _GEN_224 = way0_hit ? _GEN_110 : dirty_0_5; // @[d_cache.scala 125:27 26:26]
  wire  _GEN_225 = way0_hit ? _GEN_111 : dirty_0_6; // @[d_cache.scala 125:27 26:26]
  wire  _GEN_226 = way0_hit ? _GEN_112 : dirty_0_7; // @[d_cache.scala 125:27 26:26]
  wire  _GEN_227 = way0_hit ? _GEN_113 : dirty_0_8; // @[d_cache.scala 125:27 26:26]
  wire  _GEN_228 = way0_hit ? _GEN_114 : dirty_0_9; // @[d_cache.scala 125:27 26:26]
  wire  _GEN_229 = way0_hit ? _GEN_115 : dirty_0_10; // @[d_cache.scala 125:27 26:26]
  wire  _GEN_230 = way0_hit ? _GEN_116 : dirty_0_11; // @[d_cache.scala 125:27 26:26]
  wire  _GEN_231 = way0_hit ? _GEN_117 : dirty_0_12; // @[d_cache.scala 125:27 26:26]
  wire  _GEN_232 = way0_hit ? _GEN_118 : dirty_0_13; // @[d_cache.scala 125:27 26:26]
  wire  _GEN_233 = way0_hit ? _GEN_119 : dirty_0_14; // @[d_cache.scala 125:27 26:26]
  wire  _GEN_234 = way0_hit ? _GEN_120 : dirty_0_15; // @[d_cache.scala 125:27 26:26]
  wire [511:0] _GEN_235 = way0_hit ? ram_1_0 : _GEN_170; // @[d_cache.scala 125:27 20:24]
  wire [511:0] _GEN_236 = way0_hit ? ram_1_1 : _GEN_171; // @[d_cache.scala 125:27 20:24]
  wire [511:0] _GEN_237 = way0_hit ? ram_1_2 : _GEN_172; // @[d_cache.scala 125:27 20:24]
  wire [511:0] _GEN_238 = way0_hit ? ram_1_3 : _GEN_173; // @[d_cache.scala 125:27 20:24]
  wire [511:0] _GEN_239 = way0_hit ? ram_1_4 : _GEN_174; // @[d_cache.scala 125:27 20:24]
  wire [511:0] _GEN_240 = way0_hit ? ram_1_5 : _GEN_175; // @[d_cache.scala 125:27 20:24]
  wire [511:0] _GEN_241 = way0_hit ? ram_1_6 : _GEN_176; // @[d_cache.scala 125:27 20:24]
  wire [511:0] _GEN_242 = way0_hit ? ram_1_7 : _GEN_177; // @[d_cache.scala 125:27 20:24]
  wire [511:0] _GEN_243 = way0_hit ? ram_1_8 : _GEN_178; // @[d_cache.scala 125:27 20:24]
  wire [511:0] _GEN_244 = way0_hit ? ram_1_9 : _GEN_179; // @[d_cache.scala 125:27 20:24]
  wire [511:0] _GEN_245 = way0_hit ? ram_1_10 : _GEN_180; // @[d_cache.scala 125:27 20:24]
  wire [511:0] _GEN_246 = way0_hit ? ram_1_11 : _GEN_181; // @[d_cache.scala 125:27 20:24]
  wire [511:0] _GEN_247 = way0_hit ? ram_1_12 : _GEN_182; // @[d_cache.scala 125:27 20:24]
  wire [511:0] _GEN_248 = way0_hit ? ram_1_13 : _GEN_183; // @[d_cache.scala 125:27 20:24]
  wire [511:0] _GEN_249 = way0_hit ? ram_1_14 : _GEN_184; // @[d_cache.scala 125:27 20:24]
  wire [511:0] _GEN_250 = way0_hit ? ram_1_15 : _GEN_185; // @[d_cache.scala 125:27 20:24]
  wire  _GEN_251 = way0_hit ? dirty_1_0 : _GEN_186; // @[d_cache.scala 125:27 27:26]
  wire  _GEN_252 = way0_hit ? dirty_1_1 : _GEN_187; // @[d_cache.scala 125:27 27:26]
  wire  _GEN_253 = way0_hit ? dirty_1_2 : _GEN_188; // @[d_cache.scala 125:27 27:26]
  wire  _GEN_254 = way0_hit ? dirty_1_3 : _GEN_189; // @[d_cache.scala 125:27 27:26]
  wire  _GEN_255 = way0_hit ? dirty_1_4 : _GEN_190; // @[d_cache.scala 125:27 27:26]
  wire  _GEN_256 = way0_hit ? dirty_1_5 : _GEN_191; // @[d_cache.scala 125:27 27:26]
  wire  _GEN_257 = way0_hit ? dirty_1_6 : _GEN_192; // @[d_cache.scala 125:27 27:26]
  wire  _GEN_258 = way0_hit ? dirty_1_7 : _GEN_193; // @[d_cache.scala 125:27 27:26]
  wire  _GEN_259 = way0_hit ? dirty_1_8 : _GEN_194; // @[d_cache.scala 125:27 27:26]
  wire  _GEN_260 = way0_hit ? dirty_1_9 : _GEN_195; // @[d_cache.scala 125:27 27:26]
  wire  _GEN_261 = way0_hit ? dirty_1_10 : _GEN_196; // @[d_cache.scala 125:27 27:26]
  wire  _GEN_262 = way0_hit ? dirty_1_11 : _GEN_197; // @[d_cache.scala 125:27 27:26]
  wire  _GEN_263 = way0_hit ? dirty_1_12 : _GEN_198; // @[d_cache.scala 125:27 27:26]
  wire  _GEN_264 = way0_hit ? dirty_1_13 : _GEN_199; // @[d_cache.scala 125:27 27:26]
  wire  _GEN_265 = way0_hit ? dirty_1_14 : _GEN_200; // @[d_cache.scala 125:27 27:26]
  wire  _GEN_266 = way0_hit ? dirty_1_15 : _GEN_201; // @[d_cache.scala 125:27 27:26]
  wire [63:0] _GEN_267 = 3'h0 == receive_num ? io_from_axi_rdata : receive_data_0; // @[d_cache.scala 150:{43,43} 37:31]
  wire [63:0] _GEN_268 = 3'h1 == receive_num ? io_from_axi_rdata : receive_data_1; // @[d_cache.scala 150:{43,43} 37:31]
  wire [63:0] _GEN_269 = 3'h2 == receive_num ? io_from_axi_rdata : receive_data_2; // @[d_cache.scala 150:{43,43} 37:31]
  wire [63:0] _GEN_270 = 3'h3 == receive_num ? io_from_axi_rdata : receive_data_3; // @[d_cache.scala 150:{43,43} 37:31]
  wire [63:0] _GEN_271 = 3'h4 == receive_num ? io_from_axi_rdata : receive_data_4; // @[d_cache.scala 150:{43,43} 37:31]
  wire [63:0] _GEN_272 = 3'h5 == receive_num ? io_from_axi_rdata : receive_data_5; // @[d_cache.scala 150:{43,43} 37:31]
  wire [63:0] _GEN_273 = 3'h6 == receive_num ? io_from_axi_rdata : receive_data_6; // @[d_cache.scala 150:{43,43} 37:31]
  wire [63:0] _GEN_274 = 3'h7 == receive_num ? io_from_axi_rdata : receive_data_7; // @[d_cache.scala 150:{43,43} 37:31]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[d_cache.scala 151:44]
  wire [3:0] _GEN_275 = io_from_axi_rlast ? 4'h5 : state; // @[d_cache.scala 152:40 153:27 85:24]
  wire [63:0] _GEN_276 = io_from_axi_rvalid ? _GEN_267 : receive_data_0; // @[d_cache.scala 149:37 37:31]
  wire [63:0] _GEN_277 = io_from_axi_rvalid ? _GEN_268 : receive_data_1; // @[d_cache.scala 149:37 37:31]
  wire [63:0] _GEN_278 = io_from_axi_rvalid ? _GEN_269 : receive_data_2; // @[d_cache.scala 149:37 37:31]
  wire [63:0] _GEN_279 = io_from_axi_rvalid ? _GEN_270 : receive_data_3; // @[d_cache.scala 149:37 37:31]
  wire [63:0] _GEN_280 = io_from_axi_rvalid ? _GEN_271 : receive_data_4; // @[d_cache.scala 149:37 37:31]
  wire [63:0] _GEN_281 = io_from_axi_rvalid ? _GEN_272 : receive_data_5; // @[d_cache.scala 149:37 37:31]
  wire [63:0] _GEN_282 = io_from_axi_rvalid ? _GEN_273 : receive_data_6; // @[d_cache.scala 149:37 37:31]
  wire [63:0] _GEN_283 = io_from_axi_rvalid ? _GEN_274 : receive_data_7; // @[d_cache.scala 149:37 37:31]
  wire [2:0] _GEN_284 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[d_cache.scala 149:37 151:29 38:30]
  wire [3:0] _GEN_285 = io_from_axi_rvalid ? _GEN_275 : state; // @[d_cache.scala 149:37 85:24]
  wire [3:0] _GEN_286 = io_from_axi_bvalid ? 4'h0 : state; // @[d_cache.scala 158:37 159:23 85:24]
  wire [511:0] _ram_0_T_6 = {receive_data_7,receive_data_6,receive_data_5,receive_data_4,receive_data_3,receive_data_2,
    receive_data_1,receive_data_0}; // @[Cat.scala 31:58]
  wire [511:0] _GEN_287 = 4'h0 == index ? _ram_0_T_6 : ram_0_0; // @[d_cache.scala 165:{30,30} 19:24]
  wire [511:0] _GEN_288 = 4'h1 == index ? _ram_0_T_6 : ram_0_1; // @[d_cache.scala 165:{30,30} 19:24]
  wire [511:0] _GEN_289 = 4'h2 == index ? _ram_0_T_6 : ram_0_2; // @[d_cache.scala 165:{30,30} 19:24]
  wire [511:0] _GEN_290 = 4'h3 == index ? _ram_0_T_6 : ram_0_3; // @[d_cache.scala 165:{30,30} 19:24]
  wire [511:0] _GEN_291 = 4'h4 == index ? _ram_0_T_6 : ram_0_4; // @[d_cache.scala 165:{30,30} 19:24]
  wire [511:0] _GEN_292 = 4'h5 == index ? _ram_0_T_6 : ram_0_5; // @[d_cache.scala 165:{30,30} 19:24]
  wire [511:0] _GEN_293 = 4'h6 == index ? _ram_0_T_6 : ram_0_6; // @[d_cache.scala 165:{30,30} 19:24]
  wire [511:0] _GEN_294 = 4'h7 == index ? _ram_0_T_6 : ram_0_7; // @[d_cache.scala 165:{30,30} 19:24]
  wire [511:0] _GEN_295 = 4'h8 == index ? _ram_0_T_6 : ram_0_8; // @[d_cache.scala 165:{30,30} 19:24]
  wire [511:0] _GEN_296 = 4'h9 == index ? _ram_0_T_6 : ram_0_9; // @[d_cache.scala 165:{30,30} 19:24]
  wire [511:0] _GEN_297 = 4'ha == index ? _ram_0_T_6 : ram_0_10; // @[d_cache.scala 165:{30,30} 19:24]
  wire [511:0] _GEN_298 = 4'hb == index ? _ram_0_T_6 : ram_0_11; // @[d_cache.scala 165:{30,30} 19:24]
  wire [511:0] _GEN_299 = 4'hc == index ? _ram_0_T_6 : ram_0_12; // @[d_cache.scala 165:{30,30} 19:24]
  wire [511:0] _GEN_300 = 4'hd == index ? _ram_0_T_6 : ram_0_13; // @[d_cache.scala 165:{30,30} 19:24]
  wire [511:0] _GEN_301 = 4'he == index ? _ram_0_T_6 : ram_0_14; // @[d_cache.scala 165:{30,30} 19:24]
  wire [511:0] _GEN_302 = 4'hf == index ? _ram_0_T_6 : ram_0_15; // @[d_cache.scala 165:{30,30} 19:24]
  wire [31:0] _GEN_303 = 4'h0 == index ? _GEN_2284 : tag_0_0; // @[d_cache.scala 166:{30,30} 22:24]
  wire [31:0] _GEN_304 = 4'h1 == index ? _GEN_2284 : tag_0_1; // @[d_cache.scala 166:{30,30} 22:24]
  wire [31:0] _GEN_305 = 4'h2 == index ? _GEN_2284 : tag_0_2; // @[d_cache.scala 166:{30,30} 22:24]
  wire [31:0] _GEN_306 = 4'h3 == index ? _GEN_2284 : tag_0_3; // @[d_cache.scala 166:{30,30} 22:24]
  wire [31:0] _GEN_307 = 4'h4 == index ? _GEN_2284 : tag_0_4; // @[d_cache.scala 166:{30,30} 22:24]
  wire [31:0] _GEN_308 = 4'h5 == index ? _GEN_2284 : tag_0_5; // @[d_cache.scala 166:{30,30} 22:24]
  wire [31:0] _GEN_309 = 4'h6 == index ? _GEN_2284 : tag_0_6; // @[d_cache.scala 166:{30,30} 22:24]
  wire [31:0] _GEN_310 = 4'h7 == index ? _GEN_2284 : tag_0_7; // @[d_cache.scala 166:{30,30} 22:24]
  wire [31:0] _GEN_311 = 4'h8 == index ? _GEN_2284 : tag_0_8; // @[d_cache.scala 166:{30,30} 22:24]
  wire [31:0] _GEN_312 = 4'h9 == index ? _GEN_2284 : tag_0_9; // @[d_cache.scala 166:{30,30} 22:24]
  wire [31:0] _GEN_313 = 4'ha == index ? _GEN_2284 : tag_0_10; // @[d_cache.scala 166:{30,30} 22:24]
  wire [31:0] _GEN_314 = 4'hb == index ? _GEN_2284 : tag_0_11; // @[d_cache.scala 166:{30,30} 22:24]
  wire [31:0] _GEN_315 = 4'hc == index ? _GEN_2284 : tag_0_12; // @[d_cache.scala 166:{30,30} 22:24]
  wire [31:0] _GEN_316 = 4'hd == index ? _GEN_2284 : tag_0_13; // @[d_cache.scala 166:{30,30} 22:24]
  wire [31:0] _GEN_317 = 4'he == index ? _GEN_2284 : tag_0_14; // @[d_cache.scala 166:{30,30} 22:24]
  wire [31:0] _GEN_318 = 4'hf == index ? _GEN_2284 : tag_0_15; // @[d_cache.scala 166:{30,30} 22:24]
  wire  _GEN_319 = _GEN_2292 | valid_0_0; // @[d_cache.scala 167:{32,32} 24:26]
  wire  _GEN_320 = _GEN_2293 | valid_0_1; // @[d_cache.scala 167:{32,32} 24:26]
  wire  _GEN_321 = _GEN_2295 | valid_0_2; // @[d_cache.scala 167:{32,32} 24:26]
  wire  _GEN_322 = _GEN_2297 | valid_0_3; // @[d_cache.scala 167:{32,32} 24:26]
  wire  _GEN_323 = _GEN_2299 | valid_0_4; // @[d_cache.scala 167:{32,32} 24:26]
  wire  _GEN_324 = _GEN_2302 | valid_0_5; // @[d_cache.scala 167:{32,32} 24:26]
  wire  _GEN_325 = _GEN_2303 | valid_0_6; // @[d_cache.scala 167:{32,32} 24:26]
  wire  _GEN_326 = _GEN_2308 | valid_0_7; // @[d_cache.scala 167:{32,32} 24:26]
  wire  _GEN_327 = _GEN_2309 | valid_0_8; // @[d_cache.scala 167:{32,32} 24:26]
  wire  _GEN_328 = _GEN_2313 | valid_0_9; // @[d_cache.scala 167:{32,32} 24:26]
  wire  _GEN_329 = _GEN_2317 | valid_0_10; // @[d_cache.scala 167:{32,32} 24:26]
  wire  _GEN_330 = _GEN_2319 | valid_0_11; // @[d_cache.scala 167:{32,32} 24:26]
  wire  _GEN_331 = _GEN_2321 | valid_0_12; // @[d_cache.scala 167:{32,32} 24:26]
  wire  _GEN_332 = _GEN_2322 | valid_0_13; // @[d_cache.scala 167:{32,32} 24:26]
  wire  _GEN_333 = _GEN_2326 | valid_0_14; // @[d_cache.scala 167:{32,32} 24:26]
  wire  _GEN_334 = _GEN_2327 | valid_0_15; // @[d_cache.scala 167:{32,32} 24:26]
  wire [1:0] _GEN_336 = 4'h1 == index ? quene_1 : quene_0; // @[d_cache.scala 168:{46,46}]
  wire [1:0] _GEN_337 = 4'h2 == index ? quene_2 : _GEN_336; // @[d_cache.scala 168:{46,46}]
  wire [1:0] _GEN_338 = 4'h3 == index ? quene_3 : _GEN_337; // @[d_cache.scala 168:{46,46}]
  wire [1:0] _GEN_339 = 4'h4 == index ? quene_4 : _GEN_338; // @[d_cache.scala 168:{46,46}]
  wire [1:0] _GEN_340 = 4'h5 == index ? quene_5 : _GEN_339; // @[d_cache.scala 168:{46,46}]
  wire [1:0] _GEN_341 = 4'h6 == index ? quene_6 : _GEN_340; // @[d_cache.scala 168:{46,46}]
  wire [1:0] _GEN_342 = 4'h7 == index ? quene_7 : _GEN_341; // @[d_cache.scala 168:{46,46}]
  wire [1:0] _GEN_343 = 4'h8 == index ? quene_8 : _GEN_342; // @[d_cache.scala 168:{46,46}]
  wire [1:0] _GEN_344 = 4'h9 == index ? quene_9 : _GEN_343; // @[d_cache.scala 168:{46,46}]
  wire [1:0] _GEN_345 = 4'ha == index ? quene_10 : _GEN_344; // @[d_cache.scala 168:{46,46}]
  wire [1:0] _GEN_346 = 4'hb == index ? quene_11 : _GEN_345; // @[d_cache.scala 168:{46,46}]
  wire [1:0] _GEN_347 = 4'hc == index ? quene_12 : _GEN_346; // @[d_cache.scala 168:{46,46}]
  wire [1:0] _GEN_348 = 4'hd == index ? quene_13 : _GEN_347; // @[d_cache.scala 168:{46,46}]
  wire [1:0] _GEN_349 = 4'he == index ? quene_14 : _GEN_348; // @[d_cache.scala 168:{46,46}]
  wire [1:0] _GEN_350 = 4'hf == index ? quene_15 : _GEN_349; // @[d_cache.scala 168:{46,46}]
  wire [2:0] _quene_T = {_GEN_350, 1'h0}; // @[d_cache.scala 168:46]
  wire [1:0] _GEN_351 = 4'h0 == index ? _quene_T[1:0] : quene_0; // @[d_cache.scala 168:{30,30} 39:24]
  wire [1:0] _GEN_352 = 4'h1 == index ? _quene_T[1:0] : quene_1; // @[d_cache.scala 168:{30,30} 39:24]
  wire [1:0] _GEN_353 = 4'h2 == index ? _quene_T[1:0] : quene_2; // @[d_cache.scala 168:{30,30} 39:24]
  wire [1:0] _GEN_354 = 4'h3 == index ? _quene_T[1:0] : quene_3; // @[d_cache.scala 168:{30,30} 39:24]
  wire [1:0] _GEN_355 = 4'h4 == index ? _quene_T[1:0] : quene_4; // @[d_cache.scala 168:{30,30} 39:24]
  wire [1:0] _GEN_356 = 4'h5 == index ? _quene_T[1:0] : quene_5; // @[d_cache.scala 168:{30,30} 39:24]
  wire [1:0] _GEN_357 = 4'h6 == index ? _quene_T[1:0] : quene_6; // @[d_cache.scala 168:{30,30} 39:24]
  wire [1:0] _GEN_358 = 4'h7 == index ? _quene_T[1:0] : quene_7; // @[d_cache.scala 168:{30,30} 39:24]
  wire [1:0] _GEN_359 = 4'h8 == index ? _quene_T[1:0] : quene_8; // @[d_cache.scala 168:{30,30} 39:24]
  wire [1:0] _GEN_360 = 4'h9 == index ? _quene_T[1:0] : quene_9; // @[d_cache.scala 168:{30,30} 39:24]
  wire [1:0] _GEN_361 = 4'ha == index ? _quene_T[1:0] : quene_10; // @[d_cache.scala 168:{30,30} 39:24]
  wire [1:0] _GEN_362 = 4'hb == index ? _quene_T[1:0] : quene_11; // @[d_cache.scala 168:{30,30} 39:24]
  wire [1:0] _GEN_363 = 4'hc == index ? _quene_T[1:0] : quene_12; // @[d_cache.scala 168:{30,30} 39:24]
  wire [1:0] _GEN_364 = 4'hd == index ? _quene_T[1:0] : quene_13; // @[d_cache.scala 168:{30,30} 39:24]
  wire [1:0] _GEN_365 = 4'he == index ? _quene_T[1:0] : quene_14; // @[d_cache.scala 168:{30,30} 39:24]
  wire [1:0] _GEN_366 = 4'hf == index ? _quene_T[1:0] : quene_15; // @[d_cache.scala 168:{30,30} 39:24]
  wire [511:0] _GEN_367 = 4'h0 == index ? _ram_0_T_6 : ram_1_0; // @[d_cache.scala 171:{30,30} 20:24]
  wire [511:0] _GEN_368 = 4'h1 == index ? _ram_0_T_6 : ram_1_1; // @[d_cache.scala 171:{30,30} 20:24]
  wire [511:0] _GEN_369 = 4'h2 == index ? _ram_0_T_6 : ram_1_2; // @[d_cache.scala 171:{30,30} 20:24]
  wire [511:0] _GEN_370 = 4'h3 == index ? _ram_0_T_6 : ram_1_3; // @[d_cache.scala 171:{30,30} 20:24]
  wire [511:0] _GEN_371 = 4'h4 == index ? _ram_0_T_6 : ram_1_4; // @[d_cache.scala 171:{30,30} 20:24]
  wire [511:0] _GEN_372 = 4'h5 == index ? _ram_0_T_6 : ram_1_5; // @[d_cache.scala 171:{30,30} 20:24]
  wire [511:0] _GEN_373 = 4'h6 == index ? _ram_0_T_6 : ram_1_6; // @[d_cache.scala 171:{30,30} 20:24]
  wire [511:0] _GEN_374 = 4'h7 == index ? _ram_0_T_6 : ram_1_7; // @[d_cache.scala 171:{30,30} 20:24]
  wire [511:0] _GEN_375 = 4'h8 == index ? _ram_0_T_6 : ram_1_8; // @[d_cache.scala 171:{30,30} 20:24]
  wire [511:0] _GEN_376 = 4'h9 == index ? _ram_0_T_6 : ram_1_9; // @[d_cache.scala 171:{30,30} 20:24]
  wire [511:0] _GEN_377 = 4'ha == index ? _ram_0_T_6 : ram_1_10; // @[d_cache.scala 171:{30,30} 20:24]
  wire [511:0] _GEN_378 = 4'hb == index ? _ram_0_T_6 : ram_1_11; // @[d_cache.scala 171:{30,30} 20:24]
  wire [511:0] _GEN_379 = 4'hc == index ? _ram_0_T_6 : ram_1_12; // @[d_cache.scala 171:{30,30} 20:24]
  wire [511:0] _GEN_380 = 4'hd == index ? _ram_0_T_6 : ram_1_13; // @[d_cache.scala 171:{30,30} 20:24]
  wire [511:0] _GEN_381 = 4'he == index ? _ram_0_T_6 : ram_1_14; // @[d_cache.scala 171:{30,30} 20:24]
  wire [511:0] _GEN_382 = 4'hf == index ? _ram_0_T_6 : ram_1_15; // @[d_cache.scala 171:{30,30} 20:24]
  wire [31:0] _GEN_383 = 4'h0 == index ? _GEN_2284 : tag_1_0; // @[d_cache.scala 172:{30,30} 23:24]
  wire [31:0] _GEN_384 = 4'h1 == index ? _GEN_2284 : tag_1_1; // @[d_cache.scala 172:{30,30} 23:24]
  wire [31:0] _GEN_385 = 4'h2 == index ? _GEN_2284 : tag_1_2; // @[d_cache.scala 172:{30,30} 23:24]
  wire [31:0] _GEN_386 = 4'h3 == index ? _GEN_2284 : tag_1_3; // @[d_cache.scala 172:{30,30} 23:24]
  wire [31:0] _GEN_387 = 4'h4 == index ? _GEN_2284 : tag_1_4; // @[d_cache.scala 172:{30,30} 23:24]
  wire [31:0] _GEN_388 = 4'h5 == index ? _GEN_2284 : tag_1_5; // @[d_cache.scala 172:{30,30} 23:24]
  wire [31:0] _GEN_389 = 4'h6 == index ? _GEN_2284 : tag_1_6; // @[d_cache.scala 172:{30,30} 23:24]
  wire [31:0] _GEN_390 = 4'h7 == index ? _GEN_2284 : tag_1_7; // @[d_cache.scala 172:{30,30} 23:24]
  wire [31:0] _GEN_391 = 4'h8 == index ? _GEN_2284 : tag_1_8; // @[d_cache.scala 172:{30,30} 23:24]
  wire [31:0] _GEN_392 = 4'h9 == index ? _GEN_2284 : tag_1_9; // @[d_cache.scala 172:{30,30} 23:24]
  wire [31:0] _GEN_393 = 4'ha == index ? _GEN_2284 : tag_1_10; // @[d_cache.scala 172:{30,30} 23:24]
  wire [31:0] _GEN_394 = 4'hb == index ? _GEN_2284 : tag_1_11; // @[d_cache.scala 172:{30,30} 23:24]
  wire [31:0] _GEN_395 = 4'hc == index ? _GEN_2284 : tag_1_12; // @[d_cache.scala 172:{30,30} 23:24]
  wire [31:0] _GEN_396 = 4'hd == index ? _GEN_2284 : tag_1_13; // @[d_cache.scala 172:{30,30} 23:24]
  wire [31:0] _GEN_397 = 4'he == index ? _GEN_2284 : tag_1_14; // @[d_cache.scala 172:{30,30} 23:24]
  wire [31:0] _GEN_398 = 4'hf == index ? _GEN_2284 : tag_1_15; // @[d_cache.scala 172:{30,30} 23:24]
  wire  _GEN_399 = _GEN_2292 | valid_1_0; // @[d_cache.scala 173:{32,32} 25:26]
  wire  _GEN_400 = _GEN_2293 | valid_1_1; // @[d_cache.scala 173:{32,32} 25:26]
  wire  _GEN_401 = _GEN_2295 | valid_1_2; // @[d_cache.scala 173:{32,32} 25:26]
  wire  _GEN_402 = _GEN_2297 | valid_1_3; // @[d_cache.scala 173:{32,32} 25:26]
  wire  _GEN_403 = _GEN_2299 | valid_1_4; // @[d_cache.scala 173:{32,32} 25:26]
  wire  _GEN_404 = _GEN_2302 | valid_1_5; // @[d_cache.scala 173:{32,32} 25:26]
  wire  _GEN_405 = _GEN_2303 | valid_1_6; // @[d_cache.scala 173:{32,32} 25:26]
  wire  _GEN_406 = _GEN_2308 | valid_1_7; // @[d_cache.scala 173:{32,32} 25:26]
  wire  _GEN_407 = _GEN_2309 | valid_1_8; // @[d_cache.scala 173:{32,32} 25:26]
  wire  _GEN_408 = _GEN_2313 | valid_1_9; // @[d_cache.scala 173:{32,32} 25:26]
  wire  _GEN_409 = _GEN_2317 | valid_1_10; // @[d_cache.scala 173:{32,32} 25:26]
  wire  _GEN_410 = _GEN_2319 | valid_1_11; // @[d_cache.scala 173:{32,32} 25:26]
  wire  _GEN_411 = _GEN_2321 | valid_1_12; // @[d_cache.scala 173:{32,32} 25:26]
  wire  _GEN_412 = _GEN_2322 | valid_1_13; // @[d_cache.scala 173:{32,32} 25:26]
  wire  _GEN_413 = _GEN_2326 | valid_1_14; // @[d_cache.scala 173:{32,32} 25:26]
  wire  _GEN_414 = _GEN_2327 | valid_1_15; // @[d_cache.scala 173:{32,32} 25:26]
  wire [2:0] _quene_T_2 = _quene_T | 3'h1; // @[d_cache.scala 174:55]
  wire [1:0] _GEN_415 = 4'h0 == index ? _quene_T_2[1:0] : quene_0; // @[d_cache.scala 174:{30,30} 39:24]
  wire [1:0] _GEN_416 = 4'h1 == index ? _quene_T_2[1:0] : quene_1; // @[d_cache.scala 174:{30,30} 39:24]
  wire [1:0] _GEN_417 = 4'h2 == index ? _quene_T_2[1:0] : quene_2; // @[d_cache.scala 174:{30,30} 39:24]
  wire [1:0] _GEN_418 = 4'h3 == index ? _quene_T_2[1:0] : quene_3; // @[d_cache.scala 174:{30,30} 39:24]
  wire [1:0] _GEN_419 = 4'h4 == index ? _quene_T_2[1:0] : quene_4; // @[d_cache.scala 174:{30,30} 39:24]
  wire [1:0] _GEN_420 = 4'h5 == index ? _quene_T_2[1:0] : quene_5; // @[d_cache.scala 174:{30,30} 39:24]
  wire [1:0] _GEN_421 = 4'h6 == index ? _quene_T_2[1:0] : quene_6; // @[d_cache.scala 174:{30,30} 39:24]
  wire [1:0] _GEN_422 = 4'h7 == index ? _quene_T_2[1:0] : quene_7; // @[d_cache.scala 174:{30,30} 39:24]
  wire [1:0] _GEN_423 = 4'h8 == index ? _quene_T_2[1:0] : quene_8; // @[d_cache.scala 174:{30,30} 39:24]
  wire [1:0] _GEN_424 = 4'h9 == index ? _quene_T_2[1:0] : quene_9; // @[d_cache.scala 174:{30,30} 39:24]
  wire [1:0] _GEN_425 = 4'ha == index ? _quene_T_2[1:0] : quene_10; // @[d_cache.scala 174:{30,30} 39:24]
  wire [1:0] _GEN_426 = 4'hb == index ? _quene_T_2[1:0] : quene_11; // @[d_cache.scala 174:{30,30} 39:24]
  wire [1:0] _GEN_427 = 4'hc == index ? _quene_T_2[1:0] : quene_12; // @[d_cache.scala 174:{30,30} 39:24]
  wire [1:0] _GEN_428 = 4'hd == index ? _quene_T_2[1:0] : quene_13; // @[d_cache.scala 174:{30,30} 39:24]
  wire [1:0] _GEN_429 = 4'he == index ? _quene_T_2[1:0] : quene_14; // @[d_cache.scala 174:{30,30} 39:24]
  wire [1:0] _GEN_430 = 4'hf == index ? _quene_T_2[1:0] : quene_15; // @[d_cache.scala 174:{30,30} 39:24]
  wire  _GEN_432 = 4'h1 == index ? dirty_0_1 : dirty_0_0; // @[d_cache.scala 178:{40,40}]
  wire  _GEN_433 = 4'h2 == index ? dirty_0_2 : _GEN_432; // @[d_cache.scala 178:{40,40}]
  wire  _GEN_434 = 4'h3 == index ? dirty_0_3 : _GEN_433; // @[d_cache.scala 178:{40,40}]
  wire  _GEN_435 = 4'h4 == index ? dirty_0_4 : _GEN_434; // @[d_cache.scala 178:{40,40}]
  wire  _GEN_436 = 4'h5 == index ? dirty_0_5 : _GEN_435; // @[d_cache.scala 178:{40,40}]
  wire  _GEN_437 = 4'h6 == index ? dirty_0_6 : _GEN_436; // @[d_cache.scala 178:{40,40}]
  wire  _GEN_438 = 4'h7 == index ? dirty_0_7 : _GEN_437; // @[d_cache.scala 178:{40,40}]
  wire  _GEN_439 = 4'h8 == index ? dirty_0_8 : _GEN_438; // @[d_cache.scala 178:{40,40}]
  wire  _GEN_440 = 4'h9 == index ? dirty_0_9 : _GEN_439; // @[d_cache.scala 178:{40,40}]
  wire  _GEN_441 = 4'ha == index ? dirty_0_10 : _GEN_440; // @[d_cache.scala 178:{40,40}]
  wire  _GEN_442 = 4'hb == index ? dirty_0_11 : _GEN_441; // @[d_cache.scala 178:{40,40}]
  wire  _GEN_443 = 4'hc == index ? dirty_0_12 : _GEN_442; // @[d_cache.scala 178:{40,40}]
  wire  _GEN_444 = 4'hd == index ? dirty_0_13 : _GEN_443; // @[d_cache.scala 178:{40,40}]
  wire  _GEN_445 = 4'he == index ? dirty_0_14 : _GEN_444; // @[d_cache.scala 178:{40,40}]
  wire  _GEN_446 = 4'hf == index ? dirty_0_15 : _GEN_445; // @[d_cache.scala 178:{40,40}]
  wire [41:0] _write_back_addr_T_1 = {_GEN_15,index,6'h0}; // @[Cat.scala 31:58]
  wire  _GEN_479 = 4'h0 == index ? 1'h0 : dirty_0_0; // @[d_cache.scala 183:{40,40} 26:26]
  wire  _GEN_480 = 4'h1 == index ? 1'h0 : dirty_0_1; // @[d_cache.scala 183:{40,40} 26:26]
  wire  _GEN_481 = 4'h2 == index ? 1'h0 : dirty_0_2; // @[d_cache.scala 183:{40,40} 26:26]
  wire  _GEN_482 = 4'h3 == index ? 1'h0 : dirty_0_3; // @[d_cache.scala 183:{40,40} 26:26]
  wire  _GEN_483 = 4'h4 == index ? 1'h0 : dirty_0_4; // @[d_cache.scala 183:{40,40} 26:26]
  wire  _GEN_484 = 4'h5 == index ? 1'h0 : dirty_0_5; // @[d_cache.scala 183:{40,40} 26:26]
  wire  _GEN_485 = 4'h6 == index ? 1'h0 : dirty_0_6; // @[d_cache.scala 183:{40,40} 26:26]
  wire  _GEN_486 = 4'h7 == index ? 1'h0 : dirty_0_7; // @[d_cache.scala 183:{40,40} 26:26]
  wire  _GEN_487 = 4'h8 == index ? 1'h0 : dirty_0_8; // @[d_cache.scala 183:{40,40} 26:26]
  wire  _GEN_488 = 4'h9 == index ? 1'h0 : dirty_0_9; // @[d_cache.scala 183:{40,40} 26:26]
  wire  _GEN_489 = 4'ha == index ? 1'h0 : dirty_0_10; // @[d_cache.scala 183:{40,40} 26:26]
  wire  _GEN_490 = 4'hb == index ? 1'h0 : dirty_0_11; // @[d_cache.scala 183:{40,40} 26:26]
  wire  _GEN_491 = 4'hc == index ? 1'h0 : dirty_0_12; // @[d_cache.scala 183:{40,40} 26:26]
  wire  _GEN_492 = 4'hd == index ? 1'h0 : dirty_0_13; // @[d_cache.scala 183:{40,40} 26:26]
  wire  _GEN_493 = 4'he == index ? 1'h0 : dirty_0_14; // @[d_cache.scala 183:{40,40} 26:26]
  wire  _GEN_494 = 4'hf == index ? 1'h0 : dirty_0_15; // @[d_cache.scala 183:{40,40} 26:26]
  wire [511:0] _GEN_591 = _GEN_446 ? _GEN_88 : write_back_data; // @[d_cache.scala 178:47 179:41 31:34]
  wire [41:0] _GEN_592 = _GEN_446 ? _write_back_addr_T_1 : {{10'd0}, write_back_addr}; // @[d_cache.scala 178:47 180:41 32:34]
  wire [511:0] _GEN_593 = _GEN_446 ? _GEN_287 : _GEN_287; // @[d_cache.scala 178:47]
  wire [511:0] _GEN_594 = _GEN_446 ? _GEN_288 : _GEN_288; // @[d_cache.scala 178:47]
  wire [511:0] _GEN_595 = _GEN_446 ? _GEN_289 : _GEN_289; // @[d_cache.scala 178:47]
  wire [511:0] _GEN_596 = _GEN_446 ? _GEN_290 : _GEN_290; // @[d_cache.scala 178:47]
  wire [511:0] _GEN_597 = _GEN_446 ? _GEN_291 : _GEN_291; // @[d_cache.scala 178:47]
  wire [511:0] _GEN_598 = _GEN_446 ? _GEN_292 : _GEN_292; // @[d_cache.scala 178:47]
  wire [511:0] _GEN_599 = _GEN_446 ? _GEN_293 : _GEN_293; // @[d_cache.scala 178:47]
  wire [511:0] _GEN_600 = _GEN_446 ? _GEN_294 : _GEN_294; // @[d_cache.scala 178:47]
  wire [511:0] _GEN_601 = _GEN_446 ? _GEN_295 : _GEN_295; // @[d_cache.scala 178:47]
  wire [511:0] _GEN_602 = _GEN_446 ? _GEN_296 : _GEN_296; // @[d_cache.scala 178:47]
  wire [511:0] _GEN_603 = _GEN_446 ? _GEN_297 : _GEN_297; // @[d_cache.scala 178:47]
  wire [511:0] _GEN_604 = _GEN_446 ? _GEN_298 : _GEN_298; // @[d_cache.scala 178:47]
  wire [511:0] _GEN_605 = _GEN_446 ? _GEN_299 : _GEN_299; // @[d_cache.scala 178:47]
  wire [511:0] _GEN_606 = _GEN_446 ? _GEN_300 : _GEN_300; // @[d_cache.scala 178:47]
  wire [511:0] _GEN_607 = _GEN_446 ? _GEN_301 : _GEN_301; // @[d_cache.scala 178:47]
  wire [511:0] _GEN_608 = _GEN_446 ? _GEN_302 : _GEN_302; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_609 = _GEN_446 ? _GEN_303 : _GEN_303; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_610 = _GEN_446 ? _GEN_304 : _GEN_304; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_611 = _GEN_446 ? _GEN_305 : _GEN_305; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_612 = _GEN_446 ? _GEN_306 : _GEN_306; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_613 = _GEN_446 ? _GEN_307 : _GEN_307; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_614 = _GEN_446 ? _GEN_308 : _GEN_308; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_615 = _GEN_446 ? _GEN_309 : _GEN_309; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_616 = _GEN_446 ? _GEN_310 : _GEN_310; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_617 = _GEN_446 ? _GEN_311 : _GEN_311; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_618 = _GEN_446 ? _GEN_312 : _GEN_312; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_619 = _GEN_446 ? _GEN_313 : _GEN_313; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_620 = _GEN_446 ? _GEN_314 : _GEN_314; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_621 = _GEN_446 ? _GEN_315 : _GEN_315; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_622 = _GEN_446 ? _GEN_316 : _GEN_316; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_623 = _GEN_446 ? _GEN_317 : _GEN_317; // @[d_cache.scala 178:47]
  wire [31:0] _GEN_624 = _GEN_446 ? _GEN_318 : _GEN_318; // @[d_cache.scala 178:47]
  wire  _GEN_625 = _GEN_446 ? _GEN_479 : dirty_0_0; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_626 = _GEN_446 ? _GEN_480 : dirty_0_1; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_627 = _GEN_446 ? _GEN_481 : dirty_0_2; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_628 = _GEN_446 ? _GEN_482 : dirty_0_3; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_629 = _GEN_446 ? _GEN_483 : dirty_0_4; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_630 = _GEN_446 ? _GEN_484 : dirty_0_5; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_631 = _GEN_446 ? _GEN_485 : dirty_0_6; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_632 = _GEN_446 ? _GEN_486 : dirty_0_7; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_633 = _GEN_446 ? _GEN_487 : dirty_0_8; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_634 = _GEN_446 ? _GEN_488 : dirty_0_9; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_635 = _GEN_446 ? _GEN_489 : dirty_0_10; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_636 = _GEN_446 ? _GEN_490 : dirty_0_11; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_637 = _GEN_446 ? _GEN_491 : dirty_0_12; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_638 = _GEN_446 ? _GEN_492 : dirty_0_13; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_639 = _GEN_446 ? _GEN_493 : dirty_0_14; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_640 = _GEN_446 ? _GEN_494 : dirty_0_15; // @[d_cache.scala 178:47 26:26]
  wire  _GEN_641 = _GEN_446 ? _GEN_319 : _GEN_319; // @[d_cache.scala 178:47]
  wire  _GEN_642 = _GEN_446 ? _GEN_320 : _GEN_320; // @[d_cache.scala 178:47]
  wire  _GEN_643 = _GEN_446 ? _GEN_321 : _GEN_321; // @[d_cache.scala 178:47]
  wire  _GEN_644 = _GEN_446 ? _GEN_322 : _GEN_322; // @[d_cache.scala 178:47]
  wire  _GEN_645 = _GEN_446 ? _GEN_323 : _GEN_323; // @[d_cache.scala 178:47]
  wire  _GEN_646 = _GEN_446 ? _GEN_324 : _GEN_324; // @[d_cache.scala 178:47]
  wire  _GEN_647 = _GEN_446 ? _GEN_325 : _GEN_325; // @[d_cache.scala 178:47]
  wire  _GEN_648 = _GEN_446 ? _GEN_326 : _GEN_326; // @[d_cache.scala 178:47]
  wire  _GEN_649 = _GEN_446 ? _GEN_327 : _GEN_327; // @[d_cache.scala 178:47]
  wire  _GEN_650 = _GEN_446 ? _GEN_328 : _GEN_328; // @[d_cache.scala 178:47]
  wire  _GEN_651 = _GEN_446 ? _GEN_329 : _GEN_329; // @[d_cache.scala 178:47]
  wire  _GEN_652 = _GEN_446 ? _GEN_330 : _GEN_330; // @[d_cache.scala 178:47]
  wire  _GEN_653 = _GEN_446 ? _GEN_331 : _GEN_331; // @[d_cache.scala 178:47]
  wire  _GEN_654 = _GEN_446 ? _GEN_332 : _GEN_332; // @[d_cache.scala 178:47]
  wire  _GEN_655 = _GEN_446 ? _GEN_333 : _GEN_333; // @[d_cache.scala 178:47]
  wire  _GEN_656 = _GEN_446 ? _GEN_334 : _GEN_334; // @[d_cache.scala 178:47]
  wire [3:0] _GEN_657 = _GEN_446 ? 4'h6 : 4'h1; // @[d_cache.scala 178:47 185:31 188:31]
  wire [1:0] _GEN_658 = _GEN_446 ? _GEN_351 : _GEN_351; // @[d_cache.scala 178:47]
  wire [1:0] _GEN_659 = _GEN_446 ? _GEN_352 : _GEN_352; // @[d_cache.scala 178:47]
  wire [1:0] _GEN_660 = _GEN_446 ? _GEN_353 : _GEN_353; // @[d_cache.scala 178:47]
  wire [1:0] _GEN_661 = _GEN_446 ? _GEN_354 : _GEN_354; // @[d_cache.scala 178:47]
  wire [1:0] _GEN_662 = _GEN_446 ? _GEN_355 : _GEN_355; // @[d_cache.scala 178:47]
  wire [1:0] _GEN_663 = _GEN_446 ? _GEN_356 : _GEN_356; // @[d_cache.scala 178:47]
  wire [1:0] _GEN_664 = _GEN_446 ? _GEN_357 : _GEN_357; // @[d_cache.scala 178:47]
  wire [1:0] _GEN_665 = _GEN_446 ? _GEN_358 : _GEN_358; // @[d_cache.scala 178:47]
  wire [1:0] _GEN_666 = _GEN_446 ? _GEN_359 : _GEN_359; // @[d_cache.scala 178:47]
  wire [1:0] _GEN_667 = _GEN_446 ? _GEN_360 : _GEN_360; // @[d_cache.scala 178:47]
  wire [1:0] _GEN_668 = _GEN_446 ? _GEN_361 : _GEN_361; // @[d_cache.scala 178:47]
  wire [1:0] _GEN_669 = _GEN_446 ? _GEN_362 : _GEN_362; // @[d_cache.scala 178:47]
  wire [1:0] _GEN_670 = _GEN_446 ? _GEN_363 : _GEN_363; // @[d_cache.scala 178:47]
  wire [1:0] _GEN_671 = _GEN_446 ? _GEN_364 : _GEN_364; // @[d_cache.scala 178:47]
  wire [1:0] _GEN_672 = _GEN_446 ? _GEN_365 : _GEN_365; // @[d_cache.scala 178:47]
  wire [1:0] _GEN_673 = _GEN_446 ? _GEN_366 : _GEN_366; // @[d_cache.scala 178:47]
  wire  _GEN_675 = 4'h1 == index ? dirty_1_1 : dirty_1_0; // @[d_cache.scala 195:{40,40}]
  wire  _GEN_676 = 4'h2 == index ? dirty_1_2 : _GEN_675; // @[d_cache.scala 195:{40,40}]
  wire  _GEN_677 = 4'h3 == index ? dirty_1_3 : _GEN_676; // @[d_cache.scala 195:{40,40}]
  wire  _GEN_678 = 4'h4 == index ? dirty_1_4 : _GEN_677; // @[d_cache.scala 195:{40,40}]
  wire  _GEN_679 = 4'h5 == index ? dirty_1_5 : _GEN_678; // @[d_cache.scala 195:{40,40}]
  wire  _GEN_680 = 4'h6 == index ? dirty_1_6 : _GEN_679; // @[d_cache.scala 195:{40,40}]
  wire  _GEN_681 = 4'h7 == index ? dirty_1_7 : _GEN_680; // @[d_cache.scala 195:{40,40}]
  wire  _GEN_682 = 4'h8 == index ? dirty_1_8 : _GEN_681; // @[d_cache.scala 195:{40,40}]
  wire  _GEN_683 = 4'h9 == index ? dirty_1_9 : _GEN_682; // @[d_cache.scala 195:{40,40}]
  wire  _GEN_684 = 4'ha == index ? dirty_1_10 : _GEN_683; // @[d_cache.scala 195:{40,40}]
  wire  _GEN_685 = 4'hb == index ? dirty_1_11 : _GEN_684; // @[d_cache.scala 195:{40,40}]
  wire  _GEN_686 = 4'hc == index ? dirty_1_12 : _GEN_685; // @[d_cache.scala 195:{40,40}]
  wire  _GEN_687 = 4'hd == index ? dirty_1_13 : _GEN_686; // @[d_cache.scala 195:{40,40}]
  wire  _GEN_688 = 4'he == index ? dirty_1_14 : _GEN_687; // @[d_cache.scala 195:{40,40}]
  wire  _GEN_689 = 4'hf == index ? dirty_1_15 : _GEN_688; // @[d_cache.scala 195:{40,40}]
  wire [41:0] _write_back_addr_T_3 = {_GEN_47,index,6'h0}; // @[Cat.scala 31:58]
  wire  _GEN_722 = 4'h0 == index ? 1'h0 : dirty_1_0; // @[d_cache.scala 200:{40,40} 27:26]
  wire  _GEN_723 = 4'h1 == index ? 1'h0 : dirty_1_1; // @[d_cache.scala 200:{40,40} 27:26]
  wire  _GEN_724 = 4'h2 == index ? 1'h0 : dirty_1_2; // @[d_cache.scala 200:{40,40} 27:26]
  wire  _GEN_725 = 4'h3 == index ? 1'h0 : dirty_1_3; // @[d_cache.scala 200:{40,40} 27:26]
  wire  _GEN_726 = 4'h4 == index ? 1'h0 : dirty_1_4; // @[d_cache.scala 200:{40,40} 27:26]
  wire  _GEN_727 = 4'h5 == index ? 1'h0 : dirty_1_5; // @[d_cache.scala 200:{40,40} 27:26]
  wire  _GEN_728 = 4'h6 == index ? 1'h0 : dirty_1_6; // @[d_cache.scala 200:{40,40} 27:26]
  wire  _GEN_729 = 4'h7 == index ? 1'h0 : dirty_1_7; // @[d_cache.scala 200:{40,40} 27:26]
  wire  _GEN_730 = 4'h8 == index ? 1'h0 : dirty_1_8; // @[d_cache.scala 200:{40,40} 27:26]
  wire  _GEN_731 = 4'h9 == index ? 1'h0 : dirty_1_9; // @[d_cache.scala 200:{40,40} 27:26]
  wire  _GEN_732 = 4'ha == index ? 1'h0 : dirty_1_10; // @[d_cache.scala 200:{40,40} 27:26]
  wire  _GEN_733 = 4'hb == index ? 1'h0 : dirty_1_11; // @[d_cache.scala 200:{40,40} 27:26]
  wire  _GEN_734 = 4'hc == index ? 1'h0 : dirty_1_12; // @[d_cache.scala 200:{40,40} 27:26]
  wire  _GEN_735 = 4'hd == index ? 1'h0 : dirty_1_13; // @[d_cache.scala 200:{40,40} 27:26]
  wire  _GEN_736 = 4'he == index ? 1'h0 : dirty_1_14; // @[d_cache.scala 200:{40,40} 27:26]
  wire  _GEN_737 = 4'hf == index ? 1'h0 : dirty_1_15; // @[d_cache.scala 200:{40,40} 27:26]
  wire [511:0] _GEN_834 = _GEN_689 ? _GEN_136 : write_back_data; // @[d_cache.scala 195:47 196:41 31:34]
  wire [41:0] _GEN_835 = _GEN_689 ? _write_back_addr_T_3 : {{10'd0}, write_back_addr}; // @[d_cache.scala 195:47 197:41 32:34]
  wire [511:0] _GEN_836 = _GEN_689 ? _GEN_367 : _GEN_367; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_837 = _GEN_689 ? _GEN_368 : _GEN_368; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_838 = _GEN_689 ? _GEN_369 : _GEN_369; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_839 = _GEN_689 ? _GEN_370 : _GEN_370; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_840 = _GEN_689 ? _GEN_371 : _GEN_371; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_841 = _GEN_689 ? _GEN_372 : _GEN_372; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_842 = _GEN_689 ? _GEN_373 : _GEN_373; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_843 = _GEN_689 ? _GEN_374 : _GEN_374; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_844 = _GEN_689 ? _GEN_375 : _GEN_375; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_845 = _GEN_689 ? _GEN_376 : _GEN_376; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_846 = _GEN_689 ? _GEN_377 : _GEN_377; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_847 = _GEN_689 ? _GEN_378 : _GEN_378; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_848 = _GEN_689 ? _GEN_379 : _GEN_379; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_849 = _GEN_689 ? _GEN_380 : _GEN_380; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_850 = _GEN_689 ? _GEN_381 : _GEN_381; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_851 = _GEN_689 ? _GEN_382 : _GEN_382; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_852 = _GEN_689 ? _GEN_383 : _GEN_383; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_853 = _GEN_689 ? _GEN_384 : _GEN_384; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_854 = _GEN_689 ? _GEN_385 : _GEN_385; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_855 = _GEN_689 ? _GEN_386 : _GEN_386; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_856 = _GEN_689 ? _GEN_387 : _GEN_387; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_857 = _GEN_689 ? _GEN_388 : _GEN_388; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_858 = _GEN_689 ? _GEN_389 : _GEN_389; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_859 = _GEN_689 ? _GEN_390 : _GEN_390; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_860 = _GEN_689 ? _GEN_391 : _GEN_391; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_861 = _GEN_689 ? _GEN_392 : _GEN_392; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_862 = _GEN_689 ? _GEN_393 : _GEN_393; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_863 = _GEN_689 ? _GEN_394 : _GEN_394; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_864 = _GEN_689 ? _GEN_395 : _GEN_395; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_865 = _GEN_689 ? _GEN_396 : _GEN_396; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_866 = _GEN_689 ? _GEN_397 : _GEN_397; // @[d_cache.scala 195:47]
  wire [31:0] _GEN_867 = _GEN_689 ? _GEN_398 : _GEN_398; // @[d_cache.scala 195:47]
  wire  _GEN_868 = _GEN_689 ? _GEN_722 : dirty_1_0; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_869 = _GEN_689 ? _GEN_723 : dirty_1_1; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_870 = _GEN_689 ? _GEN_724 : dirty_1_2; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_871 = _GEN_689 ? _GEN_725 : dirty_1_3; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_872 = _GEN_689 ? _GEN_726 : dirty_1_4; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_873 = _GEN_689 ? _GEN_727 : dirty_1_5; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_874 = _GEN_689 ? _GEN_728 : dirty_1_6; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_875 = _GEN_689 ? _GEN_729 : dirty_1_7; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_876 = _GEN_689 ? _GEN_730 : dirty_1_8; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_877 = _GEN_689 ? _GEN_731 : dirty_1_9; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_878 = _GEN_689 ? _GEN_732 : dirty_1_10; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_879 = _GEN_689 ? _GEN_733 : dirty_1_11; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_880 = _GEN_689 ? _GEN_734 : dirty_1_12; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_881 = _GEN_689 ? _GEN_735 : dirty_1_13; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_882 = _GEN_689 ? _GEN_736 : dirty_1_14; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_883 = _GEN_689 ? _GEN_737 : dirty_1_15; // @[d_cache.scala 195:47 27:26]
  wire  _GEN_884 = _GEN_689 ? _GEN_399 : _GEN_399; // @[d_cache.scala 195:47]
  wire  _GEN_885 = _GEN_689 ? _GEN_400 : _GEN_400; // @[d_cache.scala 195:47]
  wire  _GEN_886 = _GEN_689 ? _GEN_401 : _GEN_401; // @[d_cache.scala 195:47]
  wire  _GEN_887 = _GEN_689 ? _GEN_402 : _GEN_402; // @[d_cache.scala 195:47]
  wire  _GEN_888 = _GEN_689 ? _GEN_403 : _GEN_403; // @[d_cache.scala 195:47]
  wire  _GEN_889 = _GEN_689 ? _GEN_404 : _GEN_404; // @[d_cache.scala 195:47]
  wire  _GEN_890 = _GEN_689 ? _GEN_405 : _GEN_405; // @[d_cache.scala 195:47]
  wire  _GEN_891 = _GEN_689 ? _GEN_406 : _GEN_406; // @[d_cache.scala 195:47]
  wire  _GEN_892 = _GEN_689 ? _GEN_407 : _GEN_407; // @[d_cache.scala 195:47]
  wire  _GEN_893 = _GEN_689 ? _GEN_408 : _GEN_408; // @[d_cache.scala 195:47]
  wire  _GEN_894 = _GEN_689 ? _GEN_409 : _GEN_409; // @[d_cache.scala 195:47]
  wire  _GEN_895 = _GEN_689 ? _GEN_410 : _GEN_410; // @[d_cache.scala 195:47]
  wire  _GEN_896 = _GEN_689 ? _GEN_411 : _GEN_411; // @[d_cache.scala 195:47]
  wire  _GEN_897 = _GEN_689 ? _GEN_412 : _GEN_412; // @[d_cache.scala 195:47]
  wire  _GEN_898 = _GEN_689 ? _GEN_413 : _GEN_413; // @[d_cache.scala 195:47]
  wire  _GEN_899 = _GEN_689 ? _GEN_414 : _GEN_414; // @[d_cache.scala 195:47]
  wire [3:0] _GEN_900 = _GEN_689 ? 4'h6 : 4'h1; // @[d_cache.scala 195:47 202:31 205:31]
  wire [1:0] _GEN_901 = _GEN_689 ? _GEN_415 : _GEN_415; // @[d_cache.scala 195:47]
  wire [1:0] _GEN_902 = _GEN_689 ? _GEN_416 : _GEN_416; // @[d_cache.scala 195:47]
  wire [1:0] _GEN_903 = _GEN_689 ? _GEN_417 : _GEN_417; // @[d_cache.scala 195:47]
  wire [1:0] _GEN_904 = _GEN_689 ? _GEN_418 : _GEN_418; // @[d_cache.scala 195:47]
  wire [1:0] _GEN_905 = _GEN_689 ? _GEN_419 : _GEN_419; // @[d_cache.scala 195:47]
  wire [1:0] _GEN_906 = _GEN_689 ? _GEN_420 : _GEN_420; // @[d_cache.scala 195:47]
  wire [1:0] _GEN_907 = _GEN_689 ? _GEN_421 : _GEN_421; // @[d_cache.scala 195:47]
  wire [1:0] _GEN_908 = _GEN_689 ? _GEN_422 : _GEN_422; // @[d_cache.scala 195:47]
  wire [1:0] _GEN_909 = _GEN_689 ? _GEN_423 : _GEN_423; // @[d_cache.scala 195:47]
  wire [1:0] _GEN_910 = _GEN_689 ? _GEN_424 : _GEN_424; // @[d_cache.scala 195:47]
  wire [1:0] _GEN_911 = _GEN_689 ? _GEN_425 : _GEN_425; // @[d_cache.scala 195:47]
  wire [1:0] _GEN_912 = _GEN_689 ? _GEN_426 : _GEN_426; // @[d_cache.scala 195:47]
  wire [1:0] _GEN_913 = _GEN_689 ? _GEN_427 : _GEN_427; // @[d_cache.scala 195:47]
  wire [1:0] _GEN_914 = _GEN_689 ? _GEN_428 : _GEN_428; // @[d_cache.scala 195:47]
  wire [1:0] _GEN_915 = _GEN_689 ? _GEN_429 : _GEN_429; // @[d_cache.scala 195:47]
  wire [1:0] _GEN_916 = _GEN_689 ? _GEN_430 : _GEN_430; // @[d_cache.scala 195:47]
  wire [511:0] _GEN_917 = quene_1 == 2'h0 ? _GEN_591 : _GEN_834; // @[d_cache.scala 176:37]
  wire [41:0] _GEN_918 = quene_1 == 2'h0 ? _GEN_592 : _GEN_835; // @[d_cache.scala 176:37]
  wire [511:0] _GEN_919 = quene_1 == 2'h0 ? _GEN_593 : ram_0_0; // @[d_cache.scala 176:37 19:24]
  wire [511:0] _GEN_920 = quene_1 == 2'h0 ? _GEN_594 : ram_0_1; // @[d_cache.scala 176:37 19:24]
  wire [511:0] _GEN_921 = quene_1 == 2'h0 ? _GEN_595 : ram_0_2; // @[d_cache.scala 176:37 19:24]
  wire [511:0] _GEN_922 = quene_1 == 2'h0 ? _GEN_596 : ram_0_3; // @[d_cache.scala 176:37 19:24]
  wire [511:0] _GEN_923 = quene_1 == 2'h0 ? _GEN_597 : ram_0_4; // @[d_cache.scala 176:37 19:24]
  wire [511:0] _GEN_924 = quene_1 == 2'h0 ? _GEN_598 : ram_0_5; // @[d_cache.scala 176:37 19:24]
  wire [511:0] _GEN_925 = quene_1 == 2'h0 ? _GEN_599 : ram_0_6; // @[d_cache.scala 176:37 19:24]
  wire [511:0] _GEN_926 = quene_1 == 2'h0 ? _GEN_600 : ram_0_7; // @[d_cache.scala 176:37 19:24]
  wire [511:0] _GEN_927 = quene_1 == 2'h0 ? _GEN_601 : ram_0_8; // @[d_cache.scala 176:37 19:24]
  wire [511:0] _GEN_928 = quene_1 == 2'h0 ? _GEN_602 : ram_0_9; // @[d_cache.scala 176:37 19:24]
  wire [511:0] _GEN_929 = quene_1 == 2'h0 ? _GEN_603 : ram_0_10; // @[d_cache.scala 176:37 19:24]
  wire [511:0] _GEN_930 = quene_1 == 2'h0 ? _GEN_604 : ram_0_11; // @[d_cache.scala 176:37 19:24]
  wire [511:0] _GEN_931 = quene_1 == 2'h0 ? _GEN_605 : ram_0_12; // @[d_cache.scala 176:37 19:24]
  wire [511:0] _GEN_932 = quene_1 == 2'h0 ? _GEN_606 : ram_0_13; // @[d_cache.scala 176:37 19:24]
  wire [511:0] _GEN_933 = quene_1 == 2'h0 ? _GEN_607 : ram_0_14; // @[d_cache.scala 176:37 19:24]
  wire [511:0] _GEN_934 = quene_1 == 2'h0 ? _GEN_608 : ram_0_15; // @[d_cache.scala 176:37 19:24]
  wire [31:0] _GEN_935 = quene_1 == 2'h0 ? _GEN_609 : tag_0_0; // @[d_cache.scala 176:37 22:24]
  wire [31:0] _GEN_936 = quene_1 == 2'h0 ? _GEN_610 : tag_0_1; // @[d_cache.scala 176:37 22:24]
  wire [31:0] _GEN_937 = quene_1 == 2'h0 ? _GEN_611 : tag_0_2; // @[d_cache.scala 176:37 22:24]
  wire [31:0] _GEN_938 = quene_1 == 2'h0 ? _GEN_612 : tag_0_3; // @[d_cache.scala 176:37 22:24]
  wire [31:0] _GEN_939 = quene_1 == 2'h0 ? _GEN_613 : tag_0_4; // @[d_cache.scala 176:37 22:24]
  wire [31:0] _GEN_940 = quene_1 == 2'h0 ? _GEN_614 : tag_0_5; // @[d_cache.scala 176:37 22:24]
  wire [31:0] _GEN_941 = quene_1 == 2'h0 ? _GEN_615 : tag_0_6; // @[d_cache.scala 176:37 22:24]
  wire [31:0] _GEN_942 = quene_1 == 2'h0 ? _GEN_616 : tag_0_7; // @[d_cache.scala 176:37 22:24]
  wire [31:0] _GEN_943 = quene_1 == 2'h0 ? _GEN_617 : tag_0_8; // @[d_cache.scala 176:37 22:24]
  wire [31:0] _GEN_944 = quene_1 == 2'h0 ? _GEN_618 : tag_0_9; // @[d_cache.scala 176:37 22:24]
  wire [31:0] _GEN_945 = quene_1 == 2'h0 ? _GEN_619 : tag_0_10; // @[d_cache.scala 176:37 22:24]
  wire [31:0] _GEN_946 = quene_1 == 2'h0 ? _GEN_620 : tag_0_11; // @[d_cache.scala 176:37 22:24]
  wire [31:0] _GEN_947 = quene_1 == 2'h0 ? _GEN_621 : tag_0_12; // @[d_cache.scala 176:37 22:24]
  wire [31:0] _GEN_948 = quene_1 == 2'h0 ? _GEN_622 : tag_0_13; // @[d_cache.scala 176:37 22:24]
  wire [31:0] _GEN_949 = quene_1 == 2'h0 ? _GEN_623 : tag_0_14; // @[d_cache.scala 176:37 22:24]
  wire [31:0] _GEN_950 = quene_1 == 2'h0 ? _GEN_624 : tag_0_15; // @[d_cache.scala 176:37 22:24]
  wire  _GEN_951 = quene_1 == 2'h0 ? _GEN_625 : dirty_0_0; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_952 = quene_1 == 2'h0 ? _GEN_626 : dirty_0_1; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_953 = quene_1 == 2'h0 ? _GEN_627 : dirty_0_2; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_954 = quene_1 == 2'h0 ? _GEN_628 : dirty_0_3; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_955 = quene_1 == 2'h0 ? _GEN_629 : dirty_0_4; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_956 = quene_1 == 2'h0 ? _GEN_630 : dirty_0_5; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_957 = quene_1 == 2'h0 ? _GEN_631 : dirty_0_6; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_958 = quene_1 == 2'h0 ? _GEN_632 : dirty_0_7; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_959 = quene_1 == 2'h0 ? _GEN_633 : dirty_0_8; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_960 = quene_1 == 2'h0 ? _GEN_634 : dirty_0_9; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_961 = quene_1 == 2'h0 ? _GEN_635 : dirty_0_10; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_962 = quene_1 == 2'h0 ? _GEN_636 : dirty_0_11; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_963 = quene_1 == 2'h0 ? _GEN_637 : dirty_0_12; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_964 = quene_1 == 2'h0 ? _GEN_638 : dirty_0_13; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_965 = quene_1 == 2'h0 ? _GEN_639 : dirty_0_14; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_966 = quene_1 == 2'h0 ? _GEN_640 : dirty_0_15; // @[d_cache.scala 176:37 26:26]
  wire  _GEN_967 = quene_1 == 2'h0 ? _GEN_641 : valid_0_0; // @[d_cache.scala 176:37 24:26]
  wire  _GEN_968 = quene_1 == 2'h0 ? _GEN_642 : valid_0_1; // @[d_cache.scala 176:37 24:26]
  wire  _GEN_969 = quene_1 == 2'h0 ? _GEN_643 : valid_0_2; // @[d_cache.scala 176:37 24:26]
  wire  _GEN_970 = quene_1 == 2'h0 ? _GEN_644 : valid_0_3; // @[d_cache.scala 176:37 24:26]
  wire  _GEN_971 = quene_1 == 2'h0 ? _GEN_645 : valid_0_4; // @[d_cache.scala 176:37 24:26]
  wire  _GEN_972 = quene_1 == 2'h0 ? _GEN_646 : valid_0_5; // @[d_cache.scala 176:37 24:26]
  wire  _GEN_973 = quene_1 == 2'h0 ? _GEN_647 : valid_0_6; // @[d_cache.scala 176:37 24:26]
  wire  _GEN_974 = quene_1 == 2'h0 ? _GEN_648 : valid_0_7; // @[d_cache.scala 176:37 24:26]
  wire  _GEN_975 = quene_1 == 2'h0 ? _GEN_649 : valid_0_8; // @[d_cache.scala 176:37 24:26]
  wire  _GEN_976 = quene_1 == 2'h0 ? _GEN_650 : valid_0_9; // @[d_cache.scala 176:37 24:26]
  wire  _GEN_977 = quene_1 == 2'h0 ? _GEN_651 : valid_0_10; // @[d_cache.scala 176:37 24:26]
  wire  _GEN_978 = quene_1 == 2'h0 ? _GEN_652 : valid_0_11; // @[d_cache.scala 176:37 24:26]
  wire  _GEN_979 = quene_1 == 2'h0 ? _GEN_653 : valid_0_12; // @[d_cache.scala 176:37 24:26]
  wire  _GEN_980 = quene_1 == 2'h0 ? _GEN_654 : valid_0_13; // @[d_cache.scala 176:37 24:26]
  wire  _GEN_981 = quene_1 == 2'h0 ? _GEN_655 : valid_0_14; // @[d_cache.scala 176:37 24:26]
  wire  _GEN_982 = quene_1 == 2'h0 ? _GEN_656 : valid_0_15; // @[d_cache.scala 176:37 24:26]
  wire [3:0] _GEN_983 = quene_1 == 2'h0 ? _GEN_657 : _GEN_900; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_984 = quene_1 == 2'h0 ? _GEN_658 : _GEN_901; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_985 = quene_1 == 2'h0 ? _GEN_659 : _GEN_902; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_986 = quene_1 == 2'h0 ? _GEN_660 : _GEN_903; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_987 = quene_1 == 2'h0 ? _GEN_661 : _GEN_904; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_988 = quene_1 == 2'h0 ? _GEN_662 : _GEN_905; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_989 = quene_1 == 2'h0 ? _GEN_663 : _GEN_906; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_990 = quene_1 == 2'h0 ? _GEN_664 : _GEN_907; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_991 = quene_1 == 2'h0 ? _GEN_665 : _GEN_908; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_992 = quene_1 == 2'h0 ? _GEN_666 : _GEN_909; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_993 = quene_1 == 2'h0 ? _GEN_667 : _GEN_910; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_994 = quene_1 == 2'h0 ? _GEN_668 : _GEN_911; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_995 = quene_1 == 2'h0 ? _GEN_669 : _GEN_912; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_996 = quene_1 == 2'h0 ? _GEN_670 : _GEN_913; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_997 = quene_1 == 2'h0 ? _GEN_671 : _GEN_914; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_998 = quene_1 == 2'h0 ? _GEN_672 : _GEN_915; // @[d_cache.scala 176:37]
  wire [1:0] _GEN_999 = quene_1 == 2'h0 ? _GEN_673 : _GEN_916; // @[d_cache.scala 176:37]
  wire [511:0] _GEN_1000 = quene_1 == 2'h0 ? ram_1_0 : _GEN_836; // @[d_cache.scala 176:37 20:24]
  wire [511:0] _GEN_1001 = quene_1 == 2'h0 ? ram_1_1 : _GEN_837; // @[d_cache.scala 176:37 20:24]
  wire [511:0] _GEN_1002 = quene_1 == 2'h0 ? ram_1_2 : _GEN_838; // @[d_cache.scala 176:37 20:24]
  wire [511:0] _GEN_1003 = quene_1 == 2'h0 ? ram_1_3 : _GEN_839; // @[d_cache.scala 176:37 20:24]
  wire [511:0] _GEN_1004 = quene_1 == 2'h0 ? ram_1_4 : _GEN_840; // @[d_cache.scala 176:37 20:24]
  wire [511:0] _GEN_1005 = quene_1 == 2'h0 ? ram_1_5 : _GEN_841; // @[d_cache.scala 176:37 20:24]
  wire [511:0] _GEN_1006 = quene_1 == 2'h0 ? ram_1_6 : _GEN_842; // @[d_cache.scala 176:37 20:24]
  wire [511:0] _GEN_1007 = quene_1 == 2'h0 ? ram_1_7 : _GEN_843; // @[d_cache.scala 176:37 20:24]
  wire [511:0] _GEN_1008 = quene_1 == 2'h0 ? ram_1_8 : _GEN_844; // @[d_cache.scala 176:37 20:24]
  wire [511:0] _GEN_1009 = quene_1 == 2'h0 ? ram_1_9 : _GEN_845; // @[d_cache.scala 176:37 20:24]
  wire [511:0] _GEN_1010 = quene_1 == 2'h0 ? ram_1_10 : _GEN_846; // @[d_cache.scala 176:37 20:24]
  wire [511:0] _GEN_1011 = quene_1 == 2'h0 ? ram_1_11 : _GEN_847; // @[d_cache.scala 176:37 20:24]
  wire [511:0] _GEN_1012 = quene_1 == 2'h0 ? ram_1_12 : _GEN_848; // @[d_cache.scala 176:37 20:24]
  wire [511:0] _GEN_1013 = quene_1 == 2'h0 ? ram_1_13 : _GEN_849; // @[d_cache.scala 176:37 20:24]
  wire [511:0] _GEN_1014 = quene_1 == 2'h0 ? ram_1_14 : _GEN_850; // @[d_cache.scala 176:37 20:24]
  wire [511:0] _GEN_1015 = quene_1 == 2'h0 ? ram_1_15 : _GEN_851; // @[d_cache.scala 176:37 20:24]
  wire [31:0] _GEN_1016 = quene_1 == 2'h0 ? tag_1_0 : _GEN_852; // @[d_cache.scala 176:37 23:24]
  wire [31:0] _GEN_1017 = quene_1 == 2'h0 ? tag_1_1 : _GEN_853; // @[d_cache.scala 176:37 23:24]
  wire [31:0] _GEN_1018 = quene_1 == 2'h0 ? tag_1_2 : _GEN_854; // @[d_cache.scala 176:37 23:24]
  wire [31:0] _GEN_1019 = quene_1 == 2'h0 ? tag_1_3 : _GEN_855; // @[d_cache.scala 176:37 23:24]
  wire [31:0] _GEN_1020 = quene_1 == 2'h0 ? tag_1_4 : _GEN_856; // @[d_cache.scala 176:37 23:24]
  wire [31:0] _GEN_1021 = quene_1 == 2'h0 ? tag_1_5 : _GEN_857; // @[d_cache.scala 176:37 23:24]
  wire [31:0] _GEN_1022 = quene_1 == 2'h0 ? tag_1_6 : _GEN_858; // @[d_cache.scala 176:37 23:24]
  wire [31:0] _GEN_1023 = quene_1 == 2'h0 ? tag_1_7 : _GEN_859; // @[d_cache.scala 176:37 23:24]
  wire [31:0] _GEN_1024 = quene_1 == 2'h0 ? tag_1_8 : _GEN_860; // @[d_cache.scala 176:37 23:24]
  wire [31:0] _GEN_1025 = quene_1 == 2'h0 ? tag_1_9 : _GEN_861; // @[d_cache.scala 176:37 23:24]
  wire [31:0] _GEN_1026 = quene_1 == 2'h0 ? tag_1_10 : _GEN_862; // @[d_cache.scala 176:37 23:24]
  wire [31:0] _GEN_1027 = quene_1 == 2'h0 ? tag_1_11 : _GEN_863; // @[d_cache.scala 176:37 23:24]
  wire [31:0] _GEN_1028 = quene_1 == 2'h0 ? tag_1_12 : _GEN_864; // @[d_cache.scala 176:37 23:24]
  wire [31:0] _GEN_1029 = quene_1 == 2'h0 ? tag_1_13 : _GEN_865; // @[d_cache.scala 176:37 23:24]
  wire [31:0] _GEN_1030 = quene_1 == 2'h0 ? tag_1_14 : _GEN_866; // @[d_cache.scala 176:37 23:24]
  wire [31:0] _GEN_1031 = quene_1 == 2'h0 ? tag_1_15 : _GEN_867; // @[d_cache.scala 176:37 23:24]
  wire  _GEN_1032 = quene_1 == 2'h0 ? dirty_1_0 : _GEN_868; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1033 = quene_1 == 2'h0 ? dirty_1_1 : _GEN_869; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1034 = quene_1 == 2'h0 ? dirty_1_2 : _GEN_870; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1035 = quene_1 == 2'h0 ? dirty_1_3 : _GEN_871; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1036 = quene_1 == 2'h0 ? dirty_1_4 : _GEN_872; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1037 = quene_1 == 2'h0 ? dirty_1_5 : _GEN_873; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1038 = quene_1 == 2'h0 ? dirty_1_6 : _GEN_874; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1039 = quene_1 == 2'h0 ? dirty_1_7 : _GEN_875; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1040 = quene_1 == 2'h0 ? dirty_1_8 : _GEN_876; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1041 = quene_1 == 2'h0 ? dirty_1_9 : _GEN_877; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1042 = quene_1 == 2'h0 ? dirty_1_10 : _GEN_878; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1043 = quene_1 == 2'h0 ? dirty_1_11 : _GEN_879; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1044 = quene_1 == 2'h0 ? dirty_1_12 : _GEN_880; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1045 = quene_1 == 2'h0 ? dirty_1_13 : _GEN_881; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1046 = quene_1 == 2'h0 ? dirty_1_14 : _GEN_882; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1047 = quene_1 == 2'h0 ? dirty_1_15 : _GEN_883; // @[d_cache.scala 176:37 27:26]
  wire  _GEN_1048 = quene_1 == 2'h0 ? valid_1_0 : _GEN_884; // @[d_cache.scala 176:37 25:26]
  wire  _GEN_1049 = quene_1 == 2'h0 ? valid_1_1 : _GEN_885; // @[d_cache.scala 176:37 25:26]
  wire  _GEN_1050 = quene_1 == 2'h0 ? valid_1_2 : _GEN_886; // @[d_cache.scala 176:37 25:26]
  wire  _GEN_1051 = quene_1 == 2'h0 ? valid_1_3 : _GEN_887; // @[d_cache.scala 176:37 25:26]
  wire  _GEN_1052 = quene_1 == 2'h0 ? valid_1_4 : _GEN_888; // @[d_cache.scala 176:37 25:26]
  wire  _GEN_1053 = quene_1 == 2'h0 ? valid_1_5 : _GEN_889; // @[d_cache.scala 176:37 25:26]
  wire  _GEN_1054 = quene_1 == 2'h0 ? valid_1_6 : _GEN_890; // @[d_cache.scala 176:37 25:26]
  wire  _GEN_1055 = quene_1 == 2'h0 ? valid_1_7 : _GEN_891; // @[d_cache.scala 176:37 25:26]
  wire  _GEN_1056 = quene_1 == 2'h0 ? valid_1_8 : _GEN_892; // @[d_cache.scala 176:37 25:26]
  wire  _GEN_1057 = quene_1 == 2'h0 ? valid_1_9 : _GEN_893; // @[d_cache.scala 176:37 25:26]
  wire  _GEN_1058 = quene_1 == 2'h0 ? valid_1_10 : _GEN_894; // @[d_cache.scala 176:37 25:26]
  wire  _GEN_1059 = quene_1 == 2'h0 ? valid_1_11 : _GEN_895; // @[d_cache.scala 176:37 25:26]
  wire  _GEN_1060 = quene_1 == 2'h0 ? valid_1_12 : _GEN_896; // @[d_cache.scala 176:37 25:26]
  wire  _GEN_1061 = quene_1 == 2'h0 ? valid_1_13 : _GEN_897; // @[d_cache.scala 176:37 25:26]
  wire  _GEN_1062 = quene_1 == 2'h0 ? valid_1_14 : _GEN_898; // @[d_cache.scala 176:37 25:26]
  wire  _GEN_1063 = quene_1 == 2'h0 ? valid_1_15 : _GEN_899; // @[d_cache.scala 176:37 25:26]
  wire [3:0] _GEN_1064 = unuse_way == 2'h2 ? 4'h1 : _GEN_983; // @[d_cache.scala 169:40 170:23]
  wire [511:0] _GEN_1065 = unuse_way == 2'h2 ? _GEN_367 : _GEN_1000; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1066 = unuse_way == 2'h2 ? _GEN_368 : _GEN_1001; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1067 = unuse_way == 2'h2 ? _GEN_369 : _GEN_1002; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1068 = unuse_way == 2'h2 ? _GEN_370 : _GEN_1003; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1069 = unuse_way == 2'h2 ? _GEN_371 : _GEN_1004; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1070 = unuse_way == 2'h2 ? _GEN_372 : _GEN_1005; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1071 = unuse_way == 2'h2 ? _GEN_373 : _GEN_1006; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1072 = unuse_way == 2'h2 ? _GEN_374 : _GEN_1007; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1073 = unuse_way == 2'h2 ? _GEN_375 : _GEN_1008; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1074 = unuse_way == 2'h2 ? _GEN_376 : _GEN_1009; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1075 = unuse_way == 2'h2 ? _GEN_377 : _GEN_1010; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1076 = unuse_way == 2'h2 ? _GEN_378 : _GEN_1011; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1077 = unuse_way == 2'h2 ? _GEN_379 : _GEN_1012; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1078 = unuse_way == 2'h2 ? _GEN_380 : _GEN_1013; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1079 = unuse_way == 2'h2 ? _GEN_381 : _GEN_1014; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1080 = unuse_way == 2'h2 ? _GEN_382 : _GEN_1015; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1081 = unuse_way == 2'h2 ? _GEN_383 : _GEN_1016; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1082 = unuse_way == 2'h2 ? _GEN_384 : _GEN_1017; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1083 = unuse_way == 2'h2 ? _GEN_385 : _GEN_1018; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1084 = unuse_way == 2'h2 ? _GEN_386 : _GEN_1019; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1085 = unuse_way == 2'h2 ? _GEN_387 : _GEN_1020; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1086 = unuse_way == 2'h2 ? _GEN_388 : _GEN_1021; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1087 = unuse_way == 2'h2 ? _GEN_389 : _GEN_1022; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1088 = unuse_way == 2'h2 ? _GEN_390 : _GEN_1023; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1089 = unuse_way == 2'h2 ? _GEN_391 : _GEN_1024; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1090 = unuse_way == 2'h2 ? _GEN_392 : _GEN_1025; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1091 = unuse_way == 2'h2 ? _GEN_393 : _GEN_1026; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1092 = unuse_way == 2'h2 ? _GEN_394 : _GEN_1027; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1093 = unuse_way == 2'h2 ? _GEN_395 : _GEN_1028; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1094 = unuse_way == 2'h2 ? _GEN_396 : _GEN_1029; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1095 = unuse_way == 2'h2 ? _GEN_397 : _GEN_1030; // @[d_cache.scala 169:40]
  wire [31:0] _GEN_1096 = unuse_way == 2'h2 ? _GEN_398 : _GEN_1031; // @[d_cache.scala 169:40]
  wire  _GEN_1097 = unuse_way == 2'h2 ? _GEN_399 : _GEN_1048; // @[d_cache.scala 169:40]
  wire  _GEN_1098 = unuse_way == 2'h2 ? _GEN_400 : _GEN_1049; // @[d_cache.scala 169:40]
  wire  _GEN_1099 = unuse_way == 2'h2 ? _GEN_401 : _GEN_1050; // @[d_cache.scala 169:40]
  wire  _GEN_1100 = unuse_way == 2'h2 ? _GEN_402 : _GEN_1051; // @[d_cache.scala 169:40]
  wire  _GEN_1101 = unuse_way == 2'h2 ? _GEN_403 : _GEN_1052; // @[d_cache.scala 169:40]
  wire  _GEN_1102 = unuse_way == 2'h2 ? _GEN_404 : _GEN_1053; // @[d_cache.scala 169:40]
  wire  _GEN_1103 = unuse_way == 2'h2 ? _GEN_405 : _GEN_1054; // @[d_cache.scala 169:40]
  wire  _GEN_1104 = unuse_way == 2'h2 ? _GEN_406 : _GEN_1055; // @[d_cache.scala 169:40]
  wire  _GEN_1105 = unuse_way == 2'h2 ? _GEN_407 : _GEN_1056; // @[d_cache.scala 169:40]
  wire  _GEN_1106 = unuse_way == 2'h2 ? _GEN_408 : _GEN_1057; // @[d_cache.scala 169:40]
  wire  _GEN_1107 = unuse_way == 2'h2 ? _GEN_409 : _GEN_1058; // @[d_cache.scala 169:40]
  wire  _GEN_1108 = unuse_way == 2'h2 ? _GEN_410 : _GEN_1059; // @[d_cache.scala 169:40]
  wire  _GEN_1109 = unuse_way == 2'h2 ? _GEN_411 : _GEN_1060; // @[d_cache.scala 169:40]
  wire  _GEN_1110 = unuse_way == 2'h2 ? _GEN_412 : _GEN_1061; // @[d_cache.scala 169:40]
  wire  _GEN_1111 = unuse_way == 2'h2 ? _GEN_413 : _GEN_1062; // @[d_cache.scala 169:40]
  wire  _GEN_1112 = unuse_way == 2'h2 ? _GEN_414 : _GEN_1063; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1113 = unuse_way == 2'h2 ? _GEN_415 : _GEN_984; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1114 = unuse_way == 2'h2 ? _GEN_416 : _GEN_985; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1115 = unuse_way == 2'h2 ? _GEN_417 : _GEN_986; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1116 = unuse_way == 2'h2 ? _GEN_418 : _GEN_987; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1117 = unuse_way == 2'h2 ? _GEN_419 : _GEN_988; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1118 = unuse_way == 2'h2 ? _GEN_420 : _GEN_989; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1119 = unuse_way == 2'h2 ? _GEN_421 : _GEN_990; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1120 = unuse_way == 2'h2 ? _GEN_422 : _GEN_991; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1121 = unuse_way == 2'h2 ? _GEN_423 : _GEN_992; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1122 = unuse_way == 2'h2 ? _GEN_424 : _GEN_993; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1123 = unuse_way == 2'h2 ? _GEN_425 : _GEN_994; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1124 = unuse_way == 2'h2 ? _GEN_426 : _GEN_995; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1125 = unuse_way == 2'h2 ? _GEN_427 : _GEN_996; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1126 = unuse_way == 2'h2 ? _GEN_428 : _GEN_997; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1127 = unuse_way == 2'h2 ? _GEN_429 : _GEN_998; // @[d_cache.scala 169:40]
  wire [1:0] _GEN_1128 = unuse_way == 2'h2 ? _GEN_430 : _GEN_999; // @[d_cache.scala 169:40]
  wire [511:0] _GEN_1129 = unuse_way == 2'h2 ? write_back_data : _GEN_917; // @[d_cache.scala 169:40 31:34]
  wire [41:0] _GEN_1130 = unuse_way == 2'h2 ? {{10'd0}, write_back_addr} : _GEN_918; // @[d_cache.scala 169:40 32:34]
  wire [511:0] _GEN_1131 = unuse_way == 2'h2 ? ram_0_0 : _GEN_919; // @[d_cache.scala 169:40 19:24]
  wire [511:0] _GEN_1132 = unuse_way == 2'h2 ? ram_0_1 : _GEN_920; // @[d_cache.scala 169:40 19:24]
  wire [511:0] _GEN_1133 = unuse_way == 2'h2 ? ram_0_2 : _GEN_921; // @[d_cache.scala 169:40 19:24]
  wire [511:0] _GEN_1134 = unuse_way == 2'h2 ? ram_0_3 : _GEN_922; // @[d_cache.scala 169:40 19:24]
  wire [511:0] _GEN_1135 = unuse_way == 2'h2 ? ram_0_4 : _GEN_923; // @[d_cache.scala 169:40 19:24]
  wire [511:0] _GEN_1136 = unuse_way == 2'h2 ? ram_0_5 : _GEN_924; // @[d_cache.scala 169:40 19:24]
  wire [511:0] _GEN_1137 = unuse_way == 2'h2 ? ram_0_6 : _GEN_925; // @[d_cache.scala 169:40 19:24]
  wire [511:0] _GEN_1138 = unuse_way == 2'h2 ? ram_0_7 : _GEN_926; // @[d_cache.scala 169:40 19:24]
  wire [511:0] _GEN_1139 = unuse_way == 2'h2 ? ram_0_8 : _GEN_927; // @[d_cache.scala 169:40 19:24]
  wire [511:0] _GEN_1140 = unuse_way == 2'h2 ? ram_0_9 : _GEN_928; // @[d_cache.scala 169:40 19:24]
  wire [511:0] _GEN_1141 = unuse_way == 2'h2 ? ram_0_10 : _GEN_929; // @[d_cache.scala 169:40 19:24]
  wire [511:0] _GEN_1142 = unuse_way == 2'h2 ? ram_0_11 : _GEN_930; // @[d_cache.scala 169:40 19:24]
  wire [511:0] _GEN_1143 = unuse_way == 2'h2 ? ram_0_12 : _GEN_931; // @[d_cache.scala 169:40 19:24]
  wire [511:0] _GEN_1144 = unuse_way == 2'h2 ? ram_0_13 : _GEN_932; // @[d_cache.scala 169:40 19:24]
  wire [511:0] _GEN_1145 = unuse_way == 2'h2 ? ram_0_14 : _GEN_933; // @[d_cache.scala 169:40 19:24]
  wire [511:0] _GEN_1146 = unuse_way == 2'h2 ? ram_0_15 : _GEN_934; // @[d_cache.scala 169:40 19:24]
  wire [31:0] _GEN_1147 = unuse_way == 2'h2 ? tag_0_0 : _GEN_935; // @[d_cache.scala 169:40 22:24]
  wire [31:0] _GEN_1148 = unuse_way == 2'h2 ? tag_0_1 : _GEN_936; // @[d_cache.scala 169:40 22:24]
  wire [31:0] _GEN_1149 = unuse_way == 2'h2 ? tag_0_2 : _GEN_937; // @[d_cache.scala 169:40 22:24]
  wire [31:0] _GEN_1150 = unuse_way == 2'h2 ? tag_0_3 : _GEN_938; // @[d_cache.scala 169:40 22:24]
  wire [31:0] _GEN_1151 = unuse_way == 2'h2 ? tag_0_4 : _GEN_939; // @[d_cache.scala 169:40 22:24]
  wire [31:0] _GEN_1152 = unuse_way == 2'h2 ? tag_0_5 : _GEN_940; // @[d_cache.scala 169:40 22:24]
  wire [31:0] _GEN_1153 = unuse_way == 2'h2 ? tag_0_6 : _GEN_941; // @[d_cache.scala 169:40 22:24]
  wire [31:0] _GEN_1154 = unuse_way == 2'h2 ? tag_0_7 : _GEN_942; // @[d_cache.scala 169:40 22:24]
  wire [31:0] _GEN_1155 = unuse_way == 2'h2 ? tag_0_8 : _GEN_943; // @[d_cache.scala 169:40 22:24]
  wire [31:0] _GEN_1156 = unuse_way == 2'h2 ? tag_0_9 : _GEN_944; // @[d_cache.scala 169:40 22:24]
  wire [31:0] _GEN_1157 = unuse_way == 2'h2 ? tag_0_10 : _GEN_945; // @[d_cache.scala 169:40 22:24]
  wire [31:0] _GEN_1158 = unuse_way == 2'h2 ? tag_0_11 : _GEN_946; // @[d_cache.scala 169:40 22:24]
  wire [31:0] _GEN_1159 = unuse_way == 2'h2 ? tag_0_12 : _GEN_947; // @[d_cache.scala 169:40 22:24]
  wire [31:0] _GEN_1160 = unuse_way == 2'h2 ? tag_0_13 : _GEN_948; // @[d_cache.scala 169:40 22:24]
  wire [31:0] _GEN_1161 = unuse_way == 2'h2 ? tag_0_14 : _GEN_949; // @[d_cache.scala 169:40 22:24]
  wire [31:0] _GEN_1162 = unuse_way == 2'h2 ? tag_0_15 : _GEN_950; // @[d_cache.scala 169:40 22:24]
  wire  _GEN_1163 = unuse_way == 2'h2 ? dirty_0_0 : _GEN_951; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1164 = unuse_way == 2'h2 ? dirty_0_1 : _GEN_952; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1165 = unuse_way == 2'h2 ? dirty_0_2 : _GEN_953; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1166 = unuse_way == 2'h2 ? dirty_0_3 : _GEN_954; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1167 = unuse_way == 2'h2 ? dirty_0_4 : _GEN_955; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1168 = unuse_way == 2'h2 ? dirty_0_5 : _GEN_956; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1169 = unuse_way == 2'h2 ? dirty_0_6 : _GEN_957; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1170 = unuse_way == 2'h2 ? dirty_0_7 : _GEN_958; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1171 = unuse_way == 2'h2 ? dirty_0_8 : _GEN_959; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1172 = unuse_way == 2'h2 ? dirty_0_9 : _GEN_960; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1173 = unuse_way == 2'h2 ? dirty_0_10 : _GEN_961; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1174 = unuse_way == 2'h2 ? dirty_0_11 : _GEN_962; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1175 = unuse_way == 2'h2 ? dirty_0_12 : _GEN_963; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1176 = unuse_way == 2'h2 ? dirty_0_13 : _GEN_964; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1177 = unuse_way == 2'h2 ? dirty_0_14 : _GEN_965; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1178 = unuse_way == 2'h2 ? dirty_0_15 : _GEN_966; // @[d_cache.scala 169:40 26:26]
  wire  _GEN_1179 = unuse_way == 2'h2 ? valid_0_0 : _GEN_967; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1180 = unuse_way == 2'h2 ? valid_0_1 : _GEN_968; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1181 = unuse_way == 2'h2 ? valid_0_2 : _GEN_969; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1182 = unuse_way == 2'h2 ? valid_0_3 : _GEN_970; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1183 = unuse_way == 2'h2 ? valid_0_4 : _GEN_971; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1184 = unuse_way == 2'h2 ? valid_0_5 : _GEN_972; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1185 = unuse_way == 2'h2 ? valid_0_6 : _GEN_973; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1186 = unuse_way == 2'h2 ? valid_0_7 : _GEN_974; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1187 = unuse_way == 2'h2 ? valid_0_8 : _GEN_975; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1188 = unuse_way == 2'h2 ? valid_0_9 : _GEN_976; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1189 = unuse_way == 2'h2 ? valid_0_10 : _GEN_977; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1190 = unuse_way == 2'h2 ? valid_0_11 : _GEN_978; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1191 = unuse_way == 2'h2 ? valid_0_12 : _GEN_979; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1192 = unuse_way == 2'h2 ? valid_0_13 : _GEN_980; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1193 = unuse_way == 2'h2 ? valid_0_14 : _GEN_981; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1194 = unuse_way == 2'h2 ? valid_0_15 : _GEN_982; // @[d_cache.scala 169:40 24:26]
  wire  _GEN_1195 = unuse_way == 2'h2 ? dirty_1_0 : _GEN_1032; // @[d_cache.scala 169:40 27:26]
  wire  _GEN_1196 = unuse_way == 2'h2 ? dirty_1_1 : _GEN_1033; // @[d_cache.scala 169:40 27:26]
  wire  _GEN_1197 = unuse_way == 2'h2 ? dirty_1_2 : _GEN_1034; // @[d_cache.scala 169:40 27:26]
  wire  _GEN_1198 = unuse_way == 2'h2 ? dirty_1_3 : _GEN_1035; // @[d_cache.scala 169:40 27:26]
  wire  _GEN_1199 = unuse_way == 2'h2 ? dirty_1_4 : _GEN_1036; // @[d_cache.scala 169:40 27:26]
  wire  _GEN_1200 = unuse_way == 2'h2 ? dirty_1_5 : _GEN_1037; // @[d_cache.scala 169:40 27:26]
  wire  _GEN_1201 = unuse_way == 2'h2 ? dirty_1_6 : _GEN_1038; // @[d_cache.scala 169:40 27:26]
  wire  _GEN_1202 = unuse_way == 2'h2 ? dirty_1_7 : _GEN_1039; // @[d_cache.scala 169:40 27:26]
  wire  _GEN_1203 = unuse_way == 2'h2 ? dirty_1_8 : _GEN_1040; // @[d_cache.scala 169:40 27:26]
  wire  _GEN_1204 = unuse_way == 2'h2 ? dirty_1_9 : _GEN_1041; // @[d_cache.scala 169:40 27:26]
  wire  _GEN_1205 = unuse_way == 2'h2 ? dirty_1_10 : _GEN_1042; // @[d_cache.scala 169:40 27:26]
  wire  _GEN_1206 = unuse_way == 2'h2 ? dirty_1_11 : _GEN_1043; // @[d_cache.scala 169:40 27:26]
  wire  _GEN_1207 = unuse_way == 2'h2 ? dirty_1_12 : _GEN_1044; // @[d_cache.scala 169:40 27:26]
  wire  _GEN_1208 = unuse_way == 2'h2 ? dirty_1_13 : _GEN_1045; // @[d_cache.scala 169:40 27:26]
  wire  _GEN_1209 = unuse_way == 2'h2 ? dirty_1_14 : _GEN_1046; // @[d_cache.scala 169:40 27:26]
  wire  _GEN_1210 = unuse_way == 2'h2 ? dirty_1_15 : _GEN_1047; // @[d_cache.scala 169:40 27:26]
  wire [3:0] _GEN_1211 = unuse_way == 2'h1 ? 4'h1 : _GEN_1064; // @[d_cache.scala 163:34 164:23]
  wire [511:0] _GEN_1212 = unuse_way == 2'h1 ? _GEN_287 : _GEN_1131; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1213 = unuse_way == 2'h1 ? _GEN_288 : _GEN_1132; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1214 = unuse_way == 2'h1 ? _GEN_289 : _GEN_1133; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1215 = unuse_way == 2'h1 ? _GEN_290 : _GEN_1134; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1216 = unuse_way == 2'h1 ? _GEN_291 : _GEN_1135; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1217 = unuse_way == 2'h1 ? _GEN_292 : _GEN_1136; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1218 = unuse_way == 2'h1 ? _GEN_293 : _GEN_1137; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1219 = unuse_way == 2'h1 ? _GEN_294 : _GEN_1138; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1220 = unuse_way == 2'h1 ? _GEN_295 : _GEN_1139; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1221 = unuse_way == 2'h1 ? _GEN_296 : _GEN_1140; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1222 = unuse_way == 2'h1 ? _GEN_297 : _GEN_1141; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1223 = unuse_way == 2'h1 ? _GEN_298 : _GEN_1142; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1224 = unuse_way == 2'h1 ? _GEN_299 : _GEN_1143; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1225 = unuse_way == 2'h1 ? _GEN_300 : _GEN_1144; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1226 = unuse_way == 2'h1 ? _GEN_301 : _GEN_1145; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1227 = unuse_way == 2'h1 ? _GEN_302 : _GEN_1146; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1228 = unuse_way == 2'h1 ? _GEN_303 : _GEN_1147; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1229 = unuse_way == 2'h1 ? _GEN_304 : _GEN_1148; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1230 = unuse_way == 2'h1 ? _GEN_305 : _GEN_1149; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1231 = unuse_way == 2'h1 ? _GEN_306 : _GEN_1150; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1232 = unuse_way == 2'h1 ? _GEN_307 : _GEN_1151; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1233 = unuse_way == 2'h1 ? _GEN_308 : _GEN_1152; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1234 = unuse_way == 2'h1 ? _GEN_309 : _GEN_1153; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1235 = unuse_way == 2'h1 ? _GEN_310 : _GEN_1154; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1236 = unuse_way == 2'h1 ? _GEN_311 : _GEN_1155; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1237 = unuse_way == 2'h1 ? _GEN_312 : _GEN_1156; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1238 = unuse_way == 2'h1 ? _GEN_313 : _GEN_1157; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1239 = unuse_way == 2'h1 ? _GEN_314 : _GEN_1158; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1240 = unuse_way == 2'h1 ? _GEN_315 : _GEN_1159; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1241 = unuse_way == 2'h1 ? _GEN_316 : _GEN_1160; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1242 = unuse_way == 2'h1 ? _GEN_317 : _GEN_1161; // @[d_cache.scala 163:34]
  wire [31:0] _GEN_1243 = unuse_way == 2'h1 ? _GEN_318 : _GEN_1162; // @[d_cache.scala 163:34]
  wire  _GEN_1244 = unuse_way == 2'h1 ? _GEN_319 : _GEN_1179; // @[d_cache.scala 163:34]
  wire  _GEN_1245 = unuse_way == 2'h1 ? _GEN_320 : _GEN_1180; // @[d_cache.scala 163:34]
  wire  _GEN_1246 = unuse_way == 2'h1 ? _GEN_321 : _GEN_1181; // @[d_cache.scala 163:34]
  wire  _GEN_1247 = unuse_way == 2'h1 ? _GEN_322 : _GEN_1182; // @[d_cache.scala 163:34]
  wire  _GEN_1248 = unuse_way == 2'h1 ? _GEN_323 : _GEN_1183; // @[d_cache.scala 163:34]
  wire  _GEN_1249 = unuse_way == 2'h1 ? _GEN_324 : _GEN_1184; // @[d_cache.scala 163:34]
  wire  _GEN_1250 = unuse_way == 2'h1 ? _GEN_325 : _GEN_1185; // @[d_cache.scala 163:34]
  wire  _GEN_1251 = unuse_way == 2'h1 ? _GEN_326 : _GEN_1186; // @[d_cache.scala 163:34]
  wire  _GEN_1252 = unuse_way == 2'h1 ? _GEN_327 : _GEN_1187; // @[d_cache.scala 163:34]
  wire  _GEN_1253 = unuse_way == 2'h1 ? _GEN_328 : _GEN_1188; // @[d_cache.scala 163:34]
  wire  _GEN_1254 = unuse_way == 2'h1 ? _GEN_329 : _GEN_1189; // @[d_cache.scala 163:34]
  wire  _GEN_1255 = unuse_way == 2'h1 ? _GEN_330 : _GEN_1190; // @[d_cache.scala 163:34]
  wire  _GEN_1256 = unuse_way == 2'h1 ? _GEN_331 : _GEN_1191; // @[d_cache.scala 163:34]
  wire  _GEN_1257 = unuse_way == 2'h1 ? _GEN_332 : _GEN_1192; // @[d_cache.scala 163:34]
  wire  _GEN_1258 = unuse_way == 2'h1 ? _GEN_333 : _GEN_1193; // @[d_cache.scala 163:34]
  wire  _GEN_1259 = unuse_way == 2'h1 ? _GEN_334 : _GEN_1194; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1260 = unuse_way == 2'h1 ? _GEN_351 : _GEN_1113; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1261 = unuse_way == 2'h1 ? _GEN_352 : _GEN_1114; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1262 = unuse_way == 2'h1 ? _GEN_353 : _GEN_1115; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1263 = unuse_way == 2'h1 ? _GEN_354 : _GEN_1116; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1264 = unuse_way == 2'h1 ? _GEN_355 : _GEN_1117; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1265 = unuse_way == 2'h1 ? _GEN_356 : _GEN_1118; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1266 = unuse_way == 2'h1 ? _GEN_357 : _GEN_1119; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1267 = unuse_way == 2'h1 ? _GEN_358 : _GEN_1120; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1268 = unuse_way == 2'h1 ? _GEN_359 : _GEN_1121; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1269 = unuse_way == 2'h1 ? _GEN_360 : _GEN_1122; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1270 = unuse_way == 2'h1 ? _GEN_361 : _GEN_1123; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1271 = unuse_way == 2'h1 ? _GEN_362 : _GEN_1124; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1272 = unuse_way == 2'h1 ? _GEN_363 : _GEN_1125; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1273 = unuse_way == 2'h1 ? _GEN_364 : _GEN_1126; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1274 = unuse_way == 2'h1 ? _GEN_365 : _GEN_1127; // @[d_cache.scala 163:34]
  wire [1:0] _GEN_1275 = unuse_way == 2'h1 ? _GEN_366 : _GEN_1128; // @[d_cache.scala 163:34]
  wire [511:0] _GEN_1276 = unuse_way == 2'h1 ? ram_1_0 : _GEN_1065; // @[d_cache.scala 163:34 20:24]
  wire [511:0] _GEN_1277 = unuse_way == 2'h1 ? ram_1_1 : _GEN_1066; // @[d_cache.scala 163:34 20:24]
  wire [511:0] _GEN_1278 = unuse_way == 2'h1 ? ram_1_2 : _GEN_1067; // @[d_cache.scala 163:34 20:24]
  wire [511:0] _GEN_1279 = unuse_way == 2'h1 ? ram_1_3 : _GEN_1068; // @[d_cache.scala 163:34 20:24]
  wire [511:0] _GEN_1280 = unuse_way == 2'h1 ? ram_1_4 : _GEN_1069; // @[d_cache.scala 163:34 20:24]
  wire [511:0] _GEN_1281 = unuse_way == 2'h1 ? ram_1_5 : _GEN_1070; // @[d_cache.scala 163:34 20:24]
  wire [511:0] _GEN_1282 = unuse_way == 2'h1 ? ram_1_6 : _GEN_1071; // @[d_cache.scala 163:34 20:24]
  wire [511:0] _GEN_1283 = unuse_way == 2'h1 ? ram_1_7 : _GEN_1072; // @[d_cache.scala 163:34 20:24]
  wire [511:0] _GEN_1284 = unuse_way == 2'h1 ? ram_1_8 : _GEN_1073; // @[d_cache.scala 163:34 20:24]
  wire [511:0] _GEN_1285 = unuse_way == 2'h1 ? ram_1_9 : _GEN_1074; // @[d_cache.scala 163:34 20:24]
  wire [511:0] _GEN_1286 = unuse_way == 2'h1 ? ram_1_10 : _GEN_1075; // @[d_cache.scala 163:34 20:24]
  wire [511:0] _GEN_1287 = unuse_way == 2'h1 ? ram_1_11 : _GEN_1076; // @[d_cache.scala 163:34 20:24]
  wire [511:0] _GEN_1288 = unuse_way == 2'h1 ? ram_1_12 : _GEN_1077; // @[d_cache.scala 163:34 20:24]
  wire [511:0] _GEN_1289 = unuse_way == 2'h1 ? ram_1_13 : _GEN_1078; // @[d_cache.scala 163:34 20:24]
  wire [511:0] _GEN_1290 = unuse_way == 2'h1 ? ram_1_14 : _GEN_1079; // @[d_cache.scala 163:34 20:24]
  wire [511:0] _GEN_1291 = unuse_way == 2'h1 ? ram_1_15 : _GEN_1080; // @[d_cache.scala 163:34 20:24]
  wire [31:0] _GEN_1292 = unuse_way == 2'h1 ? tag_1_0 : _GEN_1081; // @[d_cache.scala 163:34 23:24]
  wire [31:0] _GEN_1293 = unuse_way == 2'h1 ? tag_1_1 : _GEN_1082; // @[d_cache.scala 163:34 23:24]
  wire [31:0] _GEN_1294 = unuse_way == 2'h1 ? tag_1_2 : _GEN_1083; // @[d_cache.scala 163:34 23:24]
  wire [31:0] _GEN_1295 = unuse_way == 2'h1 ? tag_1_3 : _GEN_1084; // @[d_cache.scala 163:34 23:24]
  wire [31:0] _GEN_1296 = unuse_way == 2'h1 ? tag_1_4 : _GEN_1085; // @[d_cache.scala 163:34 23:24]
  wire [31:0] _GEN_1297 = unuse_way == 2'h1 ? tag_1_5 : _GEN_1086; // @[d_cache.scala 163:34 23:24]
  wire [31:0] _GEN_1298 = unuse_way == 2'h1 ? tag_1_6 : _GEN_1087; // @[d_cache.scala 163:34 23:24]
  wire [31:0] _GEN_1299 = unuse_way == 2'h1 ? tag_1_7 : _GEN_1088; // @[d_cache.scala 163:34 23:24]
  wire [31:0] _GEN_1300 = unuse_way == 2'h1 ? tag_1_8 : _GEN_1089; // @[d_cache.scala 163:34 23:24]
  wire [31:0] _GEN_1301 = unuse_way == 2'h1 ? tag_1_9 : _GEN_1090; // @[d_cache.scala 163:34 23:24]
  wire [31:0] _GEN_1302 = unuse_way == 2'h1 ? tag_1_10 : _GEN_1091; // @[d_cache.scala 163:34 23:24]
  wire [31:0] _GEN_1303 = unuse_way == 2'h1 ? tag_1_11 : _GEN_1092; // @[d_cache.scala 163:34 23:24]
  wire [31:0] _GEN_1304 = unuse_way == 2'h1 ? tag_1_12 : _GEN_1093; // @[d_cache.scala 163:34 23:24]
  wire [31:0] _GEN_1305 = unuse_way == 2'h1 ? tag_1_13 : _GEN_1094; // @[d_cache.scala 163:34 23:24]
  wire [31:0] _GEN_1306 = unuse_way == 2'h1 ? tag_1_14 : _GEN_1095; // @[d_cache.scala 163:34 23:24]
  wire [31:0] _GEN_1307 = unuse_way == 2'h1 ? tag_1_15 : _GEN_1096; // @[d_cache.scala 163:34 23:24]
  wire  _GEN_1308 = unuse_way == 2'h1 ? valid_1_0 : _GEN_1097; // @[d_cache.scala 163:34 25:26]
  wire  _GEN_1309 = unuse_way == 2'h1 ? valid_1_1 : _GEN_1098; // @[d_cache.scala 163:34 25:26]
  wire  _GEN_1310 = unuse_way == 2'h1 ? valid_1_2 : _GEN_1099; // @[d_cache.scala 163:34 25:26]
  wire  _GEN_1311 = unuse_way == 2'h1 ? valid_1_3 : _GEN_1100; // @[d_cache.scala 163:34 25:26]
  wire  _GEN_1312 = unuse_way == 2'h1 ? valid_1_4 : _GEN_1101; // @[d_cache.scala 163:34 25:26]
  wire  _GEN_1313 = unuse_way == 2'h1 ? valid_1_5 : _GEN_1102; // @[d_cache.scala 163:34 25:26]
  wire  _GEN_1314 = unuse_way == 2'h1 ? valid_1_6 : _GEN_1103; // @[d_cache.scala 163:34 25:26]
  wire  _GEN_1315 = unuse_way == 2'h1 ? valid_1_7 : _GEN_1104; // @[d_cache.scala 163:34 25:26]
  wire  _GEN_1316 = unuse_way == 2'h1 ? valid_1_8 : _GEN_1105; // @[d_cache.scala 163:34 25:26]
  wire  _GEN_1317 = unuse_way == 2'h1 ? valid_1_9 : _GEN_1106; // @[d_cache.scala 163:34 25:26]
  wire  _GEN_1318 = unuse_way == 2'h1 ? valid_1_10 : _GEN_1107; // @[d_cache.scala 163:34 25:26]
  wire  _GEN_1319 = unuse_way == 2'h1 ? valid_1_11 : _GEN_1108; // @[d_cache.scala 163:34 25:26]
  wire  _GEN_1320 = unuse_way == 2'h1 ? valid_1_12 : _GEN_1109; // @[d_cache.scala 163:34 25:26]
  wire  _GEN_1321 = unuse_way == 2'h1 ? valid_1_13 : _GEN_1110; // @[d_cache.scala 163:34 25:26]
  wire  _GEN_1322 = unuse_way == 2'h1 ? valid_1_14 : _GEN_1111; // @[d_cache.scala 163:34 25:26]
  wire  _GEN_1323 = unuse_way == 2'h1 ? valid_1_15 : _GEN_1112; // @[d_cache.scala 163:34 25:26]
  wire [511:0] _GEN_1324 = unuse_way == 2'h1 ? write_back_data : _GEN_1129; // @[d_cache.scala 163:34 31:34]
  wire [41:0] _GEN_1325 = unuse_way == 2'h1 ? {{10'd0}, write_back_addr} : _GEN_1130; // @[d_cache.scala 163:34 32:34]
  wire  _GEN_1326 = unuse_way == 2'h1 ? dirty_0_0 : _GEN_1163; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1327 = unuse_way == 2'h1 ? dirty_0_1 : _GEN_1164; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1328 = unuse_way == 2'h1 ? dirty_0_2 : _GEN_1165; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1329 = unuse_way == 2'h1 ? dirty_0_3 : _GEN_1166; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1330 = unuse_way == 2'h1 ? dirty_0_4 : _GEN_1167; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1331 = unuse_way == 2'h1 ? dirty_0_5 : _GEN_1168; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1332 = unuse_way == 2'h1 ? dirty_0_6 : _GEN_1169; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1333 = unuse_way == 2'h1 ? dirty_0_7 : _GEN_1170; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1334 = unuse_way == 2'h1 ? dirty_0_8 : _GEN_1171; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1335 = unuse_way == 2'h1 ? dirty_0_9 : _GEN_1172; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1336 = unuse_way == 2'h1 ? dirty_0_10 : _GEN_1173; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1337 = unuse_way == 2'h1 ? dirty_0_11 : _GEN_1174; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1338 = unuse_way == 2'h1 ? dirty_0_12 : _GEN_1175; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1339 = unuse_way == 2'h1 ? dirty_0_13 : _GEN_1176; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1340 = unuse_way == 2'h1 ? dirty_0_14 : _GEN_1177; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1341 = unuse_way == 2'h1 ? dirty_0_15 : _GEN_1178; // @[d_cache.scala 163:34 26:26]
  wire  _GEN_1342 = unuse_way == 2'h1 ? dirty_1_0 : _GEN_1195; // @[d_cache.scala 163:34 27:26]
  wire  _GEN_1343 = unuse_way == 2'h1 ? dirty_1_1 : _GEN_1196; // @[d_cache.scala 163:34 27:26]
  wire  _GEN_1344 = unuse_way == 2'h1 ? dirty_1_2 : _GEN_1197; // @[d_cache.scala 163:34 27:26]
  wire  _GEN_1345 = unuse_way == 2'h1 ? dirty_1_3 : _GEN_1198; // @[d_cache.scala 163:34 27:26]
  wire  _GEN_1346 = unuse_way == 2'h1 ? dirty_1_4 : _GEN_1199; // @[d_cache.scala 163:34 27:26]
  wire  _GEN_1347 = unuse_way == 2'h1 ? dirty_1_5 : _GEN_1200; // @[d_cache.scala 163:34 27:26]
  wire  _GEN_1348 = unuse_way == 2'h1 ? dirty_1_6 : _GEN_1201; // @[d_cache.scala 163:34 27:26]
  wire  _GEN_1349 = unuse_way == 2'h1 ? dirty_1_7 : _GEN_1202; // @[d_cache.scala 163:34 27:26]
  wire  _GEN_1350 = unuse_way == 2'h1 ? dirty_1_8 : _GEN_1203; // @[d_cache.scala 163:34 27:26]
  wire  _GEN_1351 = unuse_way == 2'h1 ? dirty_1_9 : _GEN_1204; // @[d_cache.scala 163:34 27:26]
  wire  _GEN_1352 = unuse_way == 2'h1 ? dirty_1_10 : _GEN_1205; // @[d_cache.scala 163:34 27:26]
  wire  _GEN_1353 = unuse_way == 2'h1 ? dirty_1_11 : _GEN_1206; // @[d_cache.scala 163:34 27:26]
  wire  _GEN_1354 = unuse_way == 2'h1 ? dirty_1_12 : _GEN_1207; // @[d_cache.scala 163:34 27:26]
  wire  _GEN_1355 = unuse_way == 2'h1 ? dirty_1_13 : _GEN_1208; // @[d_cache.scala 163:34 27:26]
  wire  _GEN_1356 = unuse_way == 2'h1 ? dirty_1_14 : _GEN_1209; // @[d_cache.scala 163:34 27:26]
  wire  _GEN_1357 = unuse_way == 2'h1 ? dirty_1_15 : _GEN_1210; // @[d_cache.scala 163:34 27:26]
  wire [511:0] _write_back_data_T = {{64'd0}, write_back_data[511:64]}; // @[d_cache.scala 216:52]
  wire [511:0] _GEN_1358 = io_from_axi_wready ? _write_back_data_T : write_back_data; // @[d_cache.scala 215:37 216:33 31:34]
  wire [3:0] _GEN_1359 = io_from_axi_bvalid ? 4'h1 : state; // @[d_cache.scala 218:37 219:23 85:24]
  wire [3:0] _GEN_1360 = io_from_axi_rvalid ? 4'h0 : state; // @[d_cache.scala 223:37 224:23 85:24]
  wire [3:0] _GEN_1361 = 4'h8 == state ? _GEN_286 : state; // @[d_cache.scala 90:18 85:24]
  wire [3:0] _GEN_1362 = 4'h7 == state ? _GEN_1360 : _GEN_1361; // @[d_cache.scala 90:18]
  wire [511:0] _GEN_1363 = 4'h6 == state ? _GEN_1358 : write_back_data; // @[d_cache.scala 90:18 31:34]
  wire [3:0] _GEN_1364 = 4'h6 == state ? _GEN_1359 : _GEN_1362; // @[d_cache.scala 90:18]
  wire [3:0] _GEN_1365 = 4'h5 == state ? _GEN_1211 : _GEN_1364; // @[d_cache.scala 90:18]
  wire [511:0] _GEN_1366 = 4'h5 == state ? _GEN_1212 : ram_0_0; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1367 = 4'h5 == state ? _GEN_1213 : ram_0_1; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1368 = 4'h5 == state ? _GEN_1214 : ram_0_2; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1369 = 4'h5 == state ? _GEN_1215 : ram_0_3; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1370 = 4'h5 == state ? _GEN_1216 : ram_0_4; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1371 = 4'h5 == state ? _GEN_1217 : ram_0_5; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1372 = 4'h5 == state ? _GEN_1218 : ram_0_6; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1373 = 4'h5 == state ? _GEN_1219 : ram_0_7; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1374 = 4'h5 == state ? _GEN_1220 : ram_0_8; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1375 = 4'h5 == state ? _GEN_1221 : ram_0_9; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1376 = 4'h5 == state ? _GEN_1222 : ram_0_10; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1377 = 4'h5 == state ? _GEN_1223 : ram_0_11; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1378 = 4'h5 == state ? _GEN_1224 : ram_0_12; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1379 = 4'h5 == state ? _GEN_1225 : ram_0_13; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1380 = 4'h5 == state ? _GEN_1226 : ram_0_14; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1381 = 4'h5 == state ? _GEN_1227 : ram_0_15; // @[d_cache.scala 90:18 19:24]
  wire [31:0] _GEN_1382 = 4'h5 == state ? _GEN_1228 : tag_0_0; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1383 = 4'h5 == state ? _GEN_1229 : tag_0_1; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1384 = 4'h5 == state ? _GEN_1230 : tag_0_2; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1385 = 4'h5 == state ? _GEN_1231 : tag_0_3; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1386 = 4'h5 == state ? _GEN_1232 : tag_0_4; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1387 = 4'h5 == state ? _GEN_1233 : tag_0_5; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1388 = 4'h5 == state ? _GEN_1234 : tag_0_6; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1389 = 4'h5 == state ? _GEN_1235 : tag_0_7; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1390 = 4'h5 == state ? _GEN_1236 : tag_0_8; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1391 = 4'h5 == state ? _GEN_1237 : tag_0_9; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1392 = 4'h5 == state ? _GEN_1238 : tag_0_10; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1393 = 4'h5 == state ? _GEN_1239 : tag_0_11; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1394 = 4'h5 == state ? _GEN_1240 : tag_0_12; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1395 = 4'h5 == state ? _GEN_1241 : tag_0_13; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1396 = 4'h5 == state ? _GEN_1242 : tag_0_14; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1397 = 4'h5 == state ? _GEN_1243 : tag_0_15; // @[d_cache.scala 90:18 22:24]
  wire  _GEN_1398 = 4'h5 == state ? _GEN_1244 : valid_0_0; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1399 = 4'h5 == state ? _GEN_1245 : valid_0_1; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1400 = 4'h5 == state ? _GEN_1246 : valid_0_2; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1401 = 4'h5 == state ? _GEN_1247 : valid_0_3; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1402 = 4'h5 == state ? _GEN_1248 : valid_0_4; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1403 = 4'h5 == state ? _GEN_1249 : valid_0_5; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1404 = 4'h5 == state ? _GEN_1250 : valid_0_6; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1405 = 4'h5 == state ? _GEN_1251 : valid_0_7; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1406 = 4'h5 == state ? _GEN_1252 : valid_0_8; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1407 = 4'h5 == state ? _GEN_1253 : valid_0_9; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1408 = 4'h5 == state ? _GEN_1254 : valid_0_10; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1409 = 4'h5 == state ? _GEN_1255 : valid_0_11; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1410 = 4'h5 == state ? _GEN_1256 : valid_0_12; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1411 = 4'h5 == state ? _GEN_1257 : valid_0_13; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1412 = 4'h5 == state ? _GEN_1258 : valid_0_14; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1413 = 4'h5 == state ? _GEN_1259 : valid_0_15; // @[d_cache.scala 90:18 24:26]
  wire [1:0] _GEN_1414 = 4'h5 == state ? _GEN_1260 : quene_0; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1415 = 4'h5 == state ? _GEN_1261 : quene_1; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1416 = 4'h5 == state ? _GEN_1262 : quene_2; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1417 = 4'h5 == state ? _GEN_1263 : quene_3; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1418 = 4'h5 == state ? _GEN_1264 : quene_4; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1419 = 4'h5 == state ? _GEN_1265 : quene_5; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1420 = 4'h5 == state ? _GEN_1266 : quene_6; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1421 = 4'h5 == state ? _GEN_1267 : quene_7; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1422 = 4'h5 == state ? _GEN_1268 : quene_8; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1423 = 4'h5 == state ? _GEN_1269 : quene_9; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1424 = 4'h5 == state ? _GEN_1270 : quene_10; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1425 = 4'h5 == state ? _GEN_1271 : quene_11; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1426 = 4'h5 == state ? _GEN_1272 : quene_12; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1427 = 4'h5 == state ? _GEN_1273 : quene_13; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1428 = 4'h5 == state ? _GEN_1274 : quene_14; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1429 = 4'h5 == state ? _GEN_1275 : quene_15; // @[d_cache.scala 90:18 39:24]
  wire [511:0] _GEN_1430 = 4'h5 == state ? _GEN_1276 : ram_1_0; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1431 = 4'h5 == state ? _GEN_1277 : ram_1_1; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1432 = 4'h5 == state ? _GEN_1278 : ram_1_2; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1433 = 4'h5 == state ? _GEN_1279 : ram_1_3; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1434 = 4'h5 == state ? _GEN_1280 : ram_1_4; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1435 = 4'h5 == state ? _GEN_1281 : ram_1_5; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1436 = 4'h5 == state ? _GEN_1282 : ram_1_6; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1437 = 4'h5 == state ? _GEN_1283 : ram_1_7; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1438 = 4'h5 == state ? _GEN_1284 : ram_1_8; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1439 = 4'h5 == state ? _GEN_1285 : ram_1_9; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1440 = 4'h5 == state ? _GEN_1286 : ram_1_10; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1441 = 4'h5 == state ? _GEN_1287 : ram_1_11; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1442 = 4'h5 == state ? _GEN_1288 : ram_1_12; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1443 = 4'h5 == state ? _GEN_1289 : ram_1_13; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1444 = 4'h5 == state ? _GEN_1290 : ram_1_14; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1445 = 4'h5 == state ? _GEN_1291 : ram_1_15; // @[d_cache.scala 90:18 20:24]
  wire [31:0] _GEN_1446 = 4'h5 == state ? _GEN_1292 : tag_1_0; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1447 = 4'h5 == state ? _GEN_1293 : tag_1_1; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1448 = 4'h5 == state ? _GEN_1294 : tag_1_2; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1449 = 4'h5 == state ? _GEN_1295 : tag_1_3; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1450 = 4'h5 == state ? _GEN_1296 : tag_1_4; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1451 = 4'h5 == state ? _GEN_1297 : tag_1_5; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1452 = 4'h5 == state ? _GEN_1298 : tag_1_6; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1453 = 4'h5 == state ? _GEN_1299 : tag_1_7; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1454 = 4'h5 == state ? _GEN_1300 : tag_1_8; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1455 = 4'h5 == state ? _GEN_1301 : tag_1_9; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1456 = 4'h5 == state ? _GEN_1302 : tag_1_10; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1457 = 4'h5 == state ? _GEN_1303 : tag_1_11; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1458 = 4'h5 == state ? _GEN_1304 : tag_1_12; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1459 = 4'h5 == state ? _GEN_1305 : tag_1_13; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1460 = 4'h5 == state ? _GEN_1306 : tag_1_14; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1461 = 4'h5 == state ? _GEN_1307 : tag_1_15; // @[d_cache.scala 90:18 23:24]
  wire  _GEN_1462 = 4'h5 == state ? _GEN_1308 : valid_1_0; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1463 = 4'h5 == state ? _GEN_1309 : valid_1_1; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1464 = 4'h5 == state ? _GEN_1310 : valid_1_2; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1465 = 4'h5 == state ? _GEN_1311 : valid_1_3; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1466 = 4'h5 == state ? _GEN_1312 : valid_1_4; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1467 = 4'h5 == state ? _GEN_1313 : valid_1_5; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1468 = 4'h5 == state ? _GEN_1314 : valid_1_6; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1469 = 4'h5 == state ? _GEN_1315 : valid_1_7; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1470 = 4'h5 == state ? _GEN_1316 : valid_1_8; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1471 = 4'h5 == state ? _GEN_1317 : valid_1_9; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1472 = 4'h5 == state ? _GEN_1318 : valid_1_10; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1473 = 4'h5 == state ? _GEN_1319 : valid_1_11; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1474 = 4'h5 == state ? _GEN_1320 : valid_1_12; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1475 = 4'h5 == state ? _GEN_1321 : valid_1_13; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1476 = 4'h5 == state ? _GEN_1322 : valid_1_14; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1477 = 4'h5 == state ? _GEN_1323 : valid_1_15; // @[d_cache.scala 90:18 25:26]
  wire [511:0] _GEN_1478 = 4'h5 == state ? _GEN_1324 : _GEN_1363; // @[d_cache.scala 90:18]
  wire [41:0] _GEN_1479 = 4'h5 == state ? _GEN_1325 : {{10'd0}, write_back_addr}; // @[d_cache.scala 90:18 32:34]
  wire  _GEN_1480 = 4'h5 == state ? _GEN_1326 : dirty_0_0; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1481 = 4'h5 == state ? _GEN_1327 : dirty_0_1; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1482 = 4'h5 == state ? _GEN_1328 : dirty_0_2; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1483 = 4'h5 == state ? _GEN_1329 : dirty_0_3; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1484 = 4'h5 == state ? _GEN_1330 : dirty_0_4; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1485 = 4'h5 == state ? _GEN_1331 : dirty_0_5; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1486 = 4'h5 == state ? _GEN_1332 : dirty_0_6; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1487 = 4'h5 == state ? _GEN_1333 : dirty_0_7; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1488 = 4'h5 == state ? _GEN_1334 : dirty_0_8; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1489 = 4'h5 == state ? _GEN_1335 : dirty_0_9; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1490 = 4'h5 == state ? _GEN_1336 : dirty_0_10; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1491 = 4'h5 == state ? _GEN_1337 : dirty_0_11; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1492 = 4'h5 == state ? _GEN_1338 : dirty_0_12; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1493 = 4'h5 == state ? _GEN_1339 : dirty_0_13; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1494 = 4'h5 == state ? _GEN_1340 : dirty_0_14; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1495 = 4'h5 == state ? _GEN_1341 : dirty_0_15; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1496 = 4'h5 == state ? _GEN_1342 : dirty_1_0; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1497 = 4'h5 == state ? _GEN_1343 : dirty_1_1; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1498 = 4'h5 == state ? _GEN_1344 : dirty_1_2; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1499 = 4'h5 == state ? _GEN_1345 : dirty_1_3; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1500 = 4'h5 == state ? _GEN_1346 : dirty_1_4; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1501 = 4'h5 == state ? _GEN_1347 : dirty_1_5; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1502 = 4'h5 == state ? _GEN_1348 : dirty_1_6; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1503 = 4'h5 == state ? _GEN_1349 : dirty_1_7; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1504 = 4'h5 == state ? _GEN_1350 : dirty_1_8; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1505 = 4'h5 == state ? _GEN_1351 : dirty_1_9; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1506 = 4'h5 == state ? _GEN_1352 : dirty_1_10; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1507 = 4'h5 == state ? _GEN_1353 : dirty_1_11; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1508 = 4'h5 == state ? _GEN_1354 : dirty_1_12; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1509 = 4'h5 == state ? _GEN_1355 : dirty_1_13; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1510 = 4'h5 == state ? _GEN_1356 : dirty_1_14; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1511 = 4'h5 == state ? _GEN_1357 : dirty_1_15; // @[d_cache.scala 90:18 27:26]
  wire [3:0] _GEN_1512 = 4'h4 == state ? _GEN_286 : _GEN_1365; // @[d_cache.scala 90:18]
  wire [511:0] _GEN_1513 = 4'h4 == state ? ram_0_0 : _GEN_1366; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1514 = 4'h4 == state ? ram_0_1 : _GEN_1367; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1515 = 4'h4 == state ? ram_0_2 : _GEN_1368; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1516 = 4'h4 == state ? ram_0_3 : _GEN_1369; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1517 = 4'h4 == state ? ram_0_4 : _GEN_1370; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1518 = 4'h4 == state ? ram_0_5 : _GEN_1371; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1519 = 4'h4 == state ? ram_0_6 : _GEN_1372; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1520 = 4'h4 == state ? ram_0_7 : _GEN_1373; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1521 = 4'h4 == state ? ram_0_8 : _GEN_1374; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1522 = 4'h4 == state ? ram_0_9 : _GEN_1375; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1523 = 4'h4 == state ? ram_0_10 : _GEN_1376; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1524 = 4'h4 == state ? ram_0_11 : _GEN_1377; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1525 = 4'h4 == state ? ram_0_12 : _GEN_1378; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1526 = 4'h4 == state ? ram_0_13 : _GEN_1379; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1527 = 4'h4 == state ? ram_0_14 : _GEN_1380; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1528 = 4'h4 == state ? ram_0_15 : _GEN_1381; // @[d_cache.scala 90:18 19:24]
  wire [31:0] _GEN_1529 = 4'h4 == state ? tag_0_0 : _GEN_1382; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1530 = 4'h4 == state ? tag_0_1 : _GEN_1383; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1531 = 4'h4 == state ? tag_0_2 : _GEN_1384; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1532 = 4'h4 == state ? tag_0_3 : _GEN_1385; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1533 = 4'h4 == state ? tag_0_4 : _GEN_1386; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1534 = 4'h4 == state ? tag_0_5 : _GEN_1387; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1535 = 4'h4 == state ? tag_0_6 : _GEN_1388; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1536 = 4'h4 == state ? tag_0_7 : _GEN_1389; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1537 = 4'h4 == state ? tag_0_8 : _GEN_1390; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1538 = 4'h4 == state ? tag_0_9 : _GEN_1391; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1539 = 4'h4 == state ? tag_0_10 : _GEN_1392; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1540 = 4'h4 == state ? tag_0_11 : _GEN_1393; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1541 = 4'h4 == state ? tag_0_12 : _GEN_1394; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1542 = 4'h4 == state ? tag_0_13 : _GEN_1395; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1543 = 4'h4 == state ? tag_0_14 : _GEN_1396; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1544 = 4'h4 == state ? tag_0_15 : _GEN_1397; // @[d_cache.scala 90:18 22:24]
  wire  _GEN_1545 = 4'h4 == state ? valid_0_0 : _GEN_1398; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1546 = 4'h4 == state ? valid_0_1 : _GEN_1399; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1547 = 4'h4 == state ? valid_0_2 : _GEN_1400; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1548 = 4'h4 == state ? valid_0_3 : _GEN_1401; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1549 = 4'h4 == state ? valid_0_4 : _GEN_1402; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1550 = 4'h4 == state ? valid_0_5 : _GEN_1403; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1551 = 4'h4 == state ? valid_0_6 : _GEN_1404; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1552 = 4'h4 == state ? valid_0_7 : _GEN_1405; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1553 = 4'h4 == state ? valid_0_8 : _GEN_1406; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1554 = 4'h4 == state ? valid_0_9 : _GEN_1407; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1555 = 4'h4 == state ? valid_0_10 : _GEN_1408; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1556 = 4'h4 == state ? valid_0_11 : _GEN_1409; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1557 = 4'h4 == state ? valid_0_12 : _GEN_1410; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1558 = 4'h4 == state ? valid_0_13 : _GEN_1411; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1559 = 4'h4 == state ? valid_0_14 : _GEN_1412; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1560 = 4'h4 == state ? valid_0_15 : _GEN_1413; // @[d_cache.scala 90:18 24:26]
  wire [1:0] _GEN_1561 = 4'h4 == state ? quene_0 : _GEN_1414; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1562 = 4'h4 == state ? quene_1 : _GEN_1415; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1563 = 4'h4 == state ? quene_2 : _GEN_1416; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1564 = 4'h4 == state ? quene_3 : _GEN_1417; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1565 = 4'h4 == state ? quene_4 : _GEN_1418; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1566 = 4'h4 == state ? quene_5 : _GEN_1419; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1567 = 4'h4 == state ? quene_6 : _GEN_1420; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1568 = 4'h4 == state ? quene_7 : _GEN_1421; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1569 = 4'h4 == state ? quene_8 : _GEN_1422; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1570 = 4'h4 == state ? quene_9 : _GEN_1423; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1571 = 4'h4 == state ? quene_10 : _GEN_1424; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1572 = 4'h4 == state ? quene_11 : _GEN_1425; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1573 = 4'h4 == state ? quene_12 : _GEN_1426; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1574 = 4'h4 == state ? quene_13 : _GEN_1427; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1575 = 4'h4 == state ? quene_14 : _GEN_1428; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1576 = 4'h4 == state ? quene_15 : _GEN_1429; // @[d_cache.scala 90:18 39:24]
  wire [511:0] _GEN_1577 = 4'h4 == state ? ram_1_0 : _GEN_1430; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1578 = 4'h4 == state ? ram_1_1 : _GEN_1431; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1579 = 4'h4 == state ? ram_1_2 : _GEN_1432; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1580 = 4'h4 == state ? ram_1_3 : _GEN_1433; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1581 = 4'h4 == state ? ram_1_4 : _GEN_1434; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1582 = 4'h4 == state ? ram_1_5 : _GEN_1435; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1583 = 4'h4 == state ? ram_1_6 : _GEN_1436; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1584 = 4'h4 == state ? ram_1_7 : _GEN_1437; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1585 = 4'h4 == state ? ram_1_8 : _GEN_1438; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1586 = 4'h4 == state ? ram_1_9 : _GEN_1439; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1587 = 4'h4 == state ? ram_1_10 : _GEN_1440; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1588 = 4'h4 == state ? ram_1_11 : _GEN_1441; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1589 = 4'h4 == state ? ram_1_12 : _GEN_1442; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1590 = 4'h4 == state ? ram_1_13 : _GEN_1443; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1591 = 4'h4 == state ? ram_1_14 : _GEN_1444; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1592 = 4'h4 == state ? ram_1_15 : _GEN_1445; // @[d_cache.scala 90:18 20:24]
  wire [31:0] _GEN_1593 = 4'h4 == state ? tag_1_0 : _GEN_1446; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1594 = 4'h4 == state ? tag_1_1 : _GEN_1447; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1595 = 4'h4 == state ? tag_1_2 : _GEN_1448; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1596 = 4'h4 == state ? tag_1_3 : _GEN_1449; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1597 = 4'h4 == state ? tag_1_4 : _GEN_1450; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1598 = 4'h4 == state ? tag_1_5 : _GEN_1451; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1599 = 4'h4 == state ? tag_1_6 : _GEN_1452; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1600 = 4'h4 == state ? tag_1_7 : _GEN_1453; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1601 = 4'h4 == state ? tag_1_8 : _GEN_1454; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1602 = 4'h4 == state ? tag_1_9 : _GEN_1455; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1603 = 4'h4 == state ? tag_1_10 : _GEN_1456; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1604 = 4'h4 == state ? tag_1_11 : _GEN_1457; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1605 = 4'h4 == state ? tag_1_12 : _GEN_1458; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1606 = 4'h4 == state ? tag_1_13 : _GEN_1459; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1607 = 4'h4 == state ? tag_1_14 : _GEN_1460; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1608 = 4'h4 == state ? tag_1_15 : _GEN_1461; // @[d_cache.scala 90:18 23:24]
  wire  _GEN_1609 = 4'h4 == state ? valid_1_0 : _GEN_1462; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1610 = 4'h4 == state ? valid_1_1 : _GEN_1463; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1611 = 4'h4 == state ? valid_1_2 : _GEN_1464; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1612 = 4'h4 == state ? valid_1_3 : _GEN_1465; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1613 = 4'h4 == state ? valid_1_4 : _GEN_1466; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1614 = 4'h4 == state ? valid_1_5 : _GEN_1467; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1615 = 4'h4 == state ? valid_1_6 : _GEN_1468; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1616 = 4'h4 == state ? valid_1_7 : _GEN_1469; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1617 = 4'h4 == state ? valid_1_8 : _GEN_1470; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1618 = 4'h4 == state ? valid_1_9 : _GEN_1471; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1619 = 4'h4 == state ? valid_1_10 : _GEN_1472; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1620 = 4'h4 == state ? valid_1_11 : _GEN_1473; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1621 = 4'h4 == state ? valid_1_12 : _GEN_1474; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1622 = 4'h4 == state ? valid_1_13 : _GEN_1475; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1623 = 4'h4 == state ? valid_1_14 : _GEN_1476; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1624 = 4'h4 == state ? valid_1_15 : _GEN_1477; // @[d_cache.scala 90:18 25:26]
  wire [511:0] _GEN_1625 = 4'h4 == state ? write_back_data : _GEN_1478; // @[d_cache.scala 90:18 31:34]
  wire [41:0] _GEN_1626 = 4'h4 == state ? {{10'd0}, write_back_addr} : _GEN_1479; // @[d_cache.scala 90:18 32:34]
  wire  _GEN_1627 = 4'h4 == state ? dirty_0_0 : _GEN_1480; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1628 = 4'h4 == state ? dirty_0_1 : _GEN_1481; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1629 = 4'h4 == state ? dirty_0_2 : _GEN_1482; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1630 = 4'h4 == state ? dirty_0_3 : _GEN_1483; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1631 = 4'h4 == state ? dirty_0_4 : _GEN_1484; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1632 = 4'h4 == state ? dirty_0_5 : _GEN_1485; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1633 = 4'h4 == state ? dirty_0_6 : _GEN_1486; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1634 = 4'h4 == state ? dirty_0_7 : _GEN_1487; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1635 = 4'h4 == state ? dirty_0_8 : _GEN_1488; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1636 = 4'h4 == state ? dirty_0_9 : _GEN_1489; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1637 = 4'h4 == state ? dirty_0_10 : _GEN_1490; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1638 = 4'h4 == state ? dirty_0_11 : _GEN_1491; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1639 = 4'h4 == state ? dirty_0_12 : _GEN_1492; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1640 = 4'h4 == state ? dirty_0_13 : _GEN_1493; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1641 = 4'h4 == state ? dirty_0_14 : _GEN_1494; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1642 = 4'h4 == state ? dirty_0_15 : _GEN_1495; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1643 = 4'h4 == state ? dirty_1_0 : _GEN_1496; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1644 = 4'h4 == state ? dirty_1_1 : _GEN_1497; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1645 = 4'h4 == state ? dirty_1_2 : _GEN_1498; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1646 = 4'h4 == state ? dirty_1_3 : _GEN_1499; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1647 = 4'h4 == state ? dirty_1_4 : _GEN_1500; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1648 = 4'h4 == state ? dirty_1_5 : _GEN_1501; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1649 = 4'h4 == state ? dirty_1_6 : _GEN_1502; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1650 = 4'h4 == state ? dirty_1_7 : _GEN_1503; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1651 = 4'h4 == state ? dirty_1_8 : _GEN_1504; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1652 = 4'h4 == state ? dirty_1_9 : _GEN_1505; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1653 = 4'h4 == state ? dirty_1_10 : _GEN_1506; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1654 = 4'h4 == state ? dirty_1_11 : _GEN_1507; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1655 = 4'h4 == state ? dirty_1_12 : _GEN_1508; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1656 = 4'h4 == state ? dirty_1_13 : _GEN_1509; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1657 = 4'h4 == state ? dirty_1_14 : _GEN_1510; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1658 = 4'h4 == state ? dirty_1_15 : _GEN_1511; // @[d_cache.scala 90:18 27:26]
  wire [63:0] _GEN_1659 = 4'h3 == state ? _GEN_276 : receive_data_0; // @[d_cache.scala 90:18 37:31]
  wire [63:0] _GEN_1660 = 4'h3 == state ? _GEN_277 : receive_data_1; // @[d_cache.scala 90:18 37:31]
  wire [63:0] _GEN_1661 = 4'h3 == state ? _GEN_278 : receive_data_2; // @[d_cache.scala 90:18 37:31]
  wire [63:0] _GEN_1662 = 4'h3 == state ? _GEN_279 : receive_data_3; // @[d_cache.scala 90:18 37:31]
  wire [63:0] _GEN_1663 = 4'h3 == state ? _GEN_280 : receive_data_4; // @[d_cache.scala 90:18 37:31]
  wire [63:0] _GEN_1664 = 4'h3 == state ? _GEN_281 : receive_data_5; // @[d_cache.scala 90:18 37:31]
  wire [63:0] _GEN_1665 = 4'h3 == state ? _GEN_282 : receive_data_6; // @[d_cache.scala 90:18 37:31]
  wire [63:0] _GEN_1666 = 4'h3 == state ? _GEN_283 : receive_data_7; // @[d_cache.scala 90:18 37:31]
  wire [2:0] _GEN_1667 = 4'h3 == state ? _GEN_284 : receive_num; // @[d_cache.scala 90:18 38:30]
  wire [3:0] _GEN_1668 = 4'h3 == state ? _GEN_285 : _GEN_1512; // @[d_cache.scala 90:18]
  wire [511:0] _GEN_1669 = 4'h3 == state ? ram_0_0 : _GEN_1513; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1670 = 4'h3 == state ? ram_0_1 : _GEN_1514; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1671 = 4'h3 == state ? ram_0_2 : _GEN_1515; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1672 = 4'h3 == state ? ram_0_3 : _GEN_1516; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1673 = 4'h3 == state ? ram_0_4 : _GEN_1517; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1674 = 4'h3 == state ? ram_0_5 : _GEN_1518; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1675 = 4'h3 == state ? ram_0_6 : _GEN_1519; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1676 = 4'h3 == state ? ram_0_7 : _GEN_1520; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1677 = 4'h3 == state ? ram_0_8 : _GEN_1521; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1678 = 4'h3 == state ? ram_0_9 : _GEN_1522; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1679 = 4'h3 == state ? ram_0_10 : _GEN_1523; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1680 = 4'h3 == state ? ram_0_11 : _GEN_1524; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1681 = 4'h3 == state ? ram_0_12 : _GEN_1525; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1682 = 4'h3 == state ? ram_0_13 : _GEN_1526; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1683 = 4'h3 == state ? ram_0_14 : _GEN_1527; // @[d_cache.scala 90:18 19:24]
  wire [511:0] _GEN_1684 = 4'h3 == state ? ram_0_15 : _GEN_1528; // @[d_cache.scala 90:18 19:24]
  wire [31:0] _GEN_1685 = 4'h3 == state ? tag_0_0 : _GEN_1529; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1686 = 4'h3 == state ? tag_0_1 : _GEN_1530; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1687 = 4'h3 == state ? tag_0_2 : _GEN_1531; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1688 = 4'h3 == state ? tag_0_3 : _GEN_1532; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1689 = 4'h3 == state ? tag_0_4 : _GEN_1533; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1690 = 4'h3 == state ? tag_0_5 : _GEN_1534; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1691 = 4'h3 == state ? tag_0_6 : _GEN_1535; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1692 = 4'h3 == state ? tag_0_7 : _GEN_1536; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1693 = 4'h3 == state ? tag_0_8 : _GEN_1537; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1694 = 4'h3 == state ? tag_0_9 : _GEN_1538; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1695 = 4'h3 == state ? tag_0_10 : _GEN_1539; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1696 = 4'h3 == state ? tag_0_11 : _GEN_1540; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1697 = 4'h3 == state ? tag_0_12 : _GEN_1541; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1698 = 4'h3 == state ? tag_0_13 : _GEN_1542; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1699 = 4'h3 == state ? tag_0_14 : _GEN_1543; // @[d_cache.scala 90:18 22:24]
  wire [31:0] _GEN_1700 = 4'h3 == state ? tag_0_15 : _GEN_1544; // @[d_cache.scala 90:18 22:24]
  wire  _GEN_1701 = 4'h3 == state ? valid_0_0 : _GEN_1545; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1702 = 4'h3 == state ? valid_0_1 : _GEN_1546; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1703 = 4'h3 == state ? valid_0_2 : _GEN_1547; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1704 = 4'h3 == state ? valid_0_3 : _GEN_1548; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1705 = 4'h3 == state ? valid_0_4 : _GEN_1549; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1706 = 4'h3 == state ? valid_0_5 : _GEN_1550; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1707 = 4'h3 == state ? valid_0_6 : _GEN_1551; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1708 = 4'h3 == state ? valid_0_7 : _GEN_1552; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1709 = 4'h3 == state ? valid_0_8 : _GEN_1553; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1710 = 4'h3 == state ? valid_0_9 : _GEN_1554; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1711 = 4'h3 == state ? valid_0_10 : _GEN_1555; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1712 = 4'h3 == state ? valid_0_11 : _GEN_1556; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1713 = 4'h3 == state ? valid_0_12 : _GEN_1557; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1714 = 4'h3 == state ? valid_0_13 : _GEN_1558; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1715 = 4'h3 == state ? valid_0_14 : _GEN_1559; // @[d_cache.scala 90:18 24:26]
  wire  _GEN_1716 = 4'h3 == state ? valid_0_15 : _GEN_1560; // @[d_cache.scala 90:18 24:26]
  wire [1:0] _GEN_1717 = 4'h3 == state ? quene_0 : _GEN_1561; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1718 = 4'h3 == state ? quene_1 : _GEN_1562; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1719 = 4'h3 == state ? quene_2 : _GEN_1563; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1720 = 4'h3 == state ? quene_3 : _GEN_1564; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1721 = 4'h3 == state ? quene_4 : _GEN_1565; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1722 = 4'h3 == state ? quene_5 : _GEN_1566; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1723 = 4'h3 == state ? quene_6 : _GEN_1567; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1724 = 4'h3 == state ? quene_7 : _GEN_1568; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1725 = 4'h3 == state ? quene_8 : _GEN_1569; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1726 = 4'h3 == state ? quene_9 : _GEN_1570; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1727 = 4'h3 == state ? quene_10 : _GEN_1571; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1728 = 4'h3 == state ? quene_11 : _GEN_1572; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1729 = 4'h3 == state ? quene_12 : _GEN_1573; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1730 = 4'h3 == state ? quene_13 : _GEN_1574; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1731 = 4'h3 == state ? quene_14 : _GEN_1575; // @[d_cache.scala 90:18 39:24]
  wire [1:0] _GEN_1732 = 4'h3 == state ? quene_15 : _GEN_1576; // @[d_cache.scala 90:18 39:24]
  wire [511:0] _GEN_1733 = 4'h3 == state ? ram_1_0 : _GEN_1577; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1734 = 4'h3 == state ? ram_1_1 : _GEN_1578; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1735 = 4'h3 == state ? ram_1_2 : _GEN_1579; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1736 = 4'h3 == state ? ram_1_3 : _GEN_1580; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1737 = 4'h3 == state ? ram_1_4 : _GEN_1581; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1738 = 4'h3 == state ? ram_1_5 : _GEN_1582; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1739 = 4'h3 == state ? ram_1_6 : _GEN_1583; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1740 = 4'h3 == state ? ram_1_7 : _GEN_1584; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1741 = 4'h3 == state ? ram_1_8 : _GEN_1585; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1742 = 4'h3 == state ? ram_1_9 : _GEN_1586; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1743 = 4'h3 == state ? ram_1_10 : _GEN_1587; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1744 = 4'h3 == state ? ram_1_11 : _GEN_1588; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1745 = 4'h3 == state ? ram_1_12 : _GEN_1589; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1746 = 4'h3 == state ? ram_1_13 : _GEN_1590; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1747 = 4'h3 == state ? ram_1_14 : _GEN_1591; // @[d_cache.scala 90:18 20:24]
  wire [511:0] _GEN_1748 = 4'h3 == state ? ram_1_15 : _GEN_1592; // @[d_cache.scala 90:18 20:24]
  wire [31:0] _GEN_1749 = 4'h3 == state ? tag_1_0 : _GEN_1593; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1750 = 4'h3 == state ? tag_1_1 : _GEN_1594; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1751 = 4'h3 == state ? tag_1_2 : _GEN_1595; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1752 = 4'h3 == state ? tag_1_3 : _GEN_1596; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1753 = 4'h3 == state ? tag_1_4 : _GEN_1597; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1754 = 4'h3 == state ? tag_1_5 : _GEN_1598; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1755 = 4'h3 == state ? tag_1_6 : _GEN_1599; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1756 = 4'h3 == state ? tag_1_7 : _GEN_1600; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1757 = 4'h3 == state ? tag_1_8 : _GEN_1601; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1758 = 4'h3 == state ? tag_1_9 : _GEN_1602; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1759 = 4'h3 == state ? tag_1_10 : _GEN_1603; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1760 = 4'h3 == state ? tag_1_11 : _GEN_1604; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1761 = 4'h3 == state ? tag_1_12 : _GEN_1605; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1762 = 4'h3 == state ? tag_1_13 : _GEN_1606; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1763 = 4'h3 == state ? tag_1_14 : _GEN_1607; // @[d_cache.scala 90:18 23:24]
  wire [31:0] _GEN_1764 = 4'h3 == state ? tag_1_15 : _GEN_1608; // @[d_cache.scala 90:18 23:24]
  wire  _GEN_1765 = 4'h3 == state ? valid_1_0 : _GEN_1609; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1766 = 4'h3 == state ? valid_1_1 : _GEN_1610; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1767 = 4'h3 == state ? valid_1_2 : _GEN_1611; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1768 = 4'h3 == state ? valid_1_3 : _GEN_1612; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1769 = 4'h3 == state ? valid_1_4 : _GEN_1613; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1770 = 4'h3 == state ? valid_1_5 : _GEN_1614; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1771 = 4'h3 == state ? valid_1_6 : _GEN_1615; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1772 = 4'h3 == state ? valid_1_7 : _GEN_1616; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1773 = 4'h3 == state ? valid_1_8 : _GEN_1617; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1774 = 4'h3 == state ? valid_1_9 : _GEN_1618; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1775 = 4'h3 == state ? valid_1_10 : _GEN_1619; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1776 = 4'h3 == state ? valid_1_11 : _GEN_1620; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1777 = 4'h3 == state ? valid_1_12 : _GEN_1621; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1778 = 4'h3 == state ? valid_1_13 : _GEN_1622; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1779 = 4'h3 == state ? valid_1_14 : _GEN_1623; // @[d_cache.scala 90:18 25:26]
  wire  _GEN_1780 = 4'h3 == state ? valid_1_15 : _GEN_1624; // @[d_cache.scala 90:18 25:26]
  wire [511:0] _GEN_1781 = 4'h3 == state ? write_back_data : _GEN_1625; // @[d_cache.scala 90:18 31:34]
  wire [41:0] _GEN_1782 = 4'h3 == state ? {{10'd0}, write_back_addr} : _GEN_1626; // @[d_cache.scala 90:18 32:34]
  wire  _GEN_1783 = 4'h3 == state ? dirty_0_0 : _GEN_1627; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1784 = 4'h3 == state ? dirty_0_1 : _GEN_1628; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1785 = 4'h3 == state ? dirty_0_2 : _GEN_1629; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1786 = 4'h3 == state ? dirty_0_3 : _GEN_1630; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1787 = 4'h3 == state ? dirty_0_4 : _GEN_1631; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1788 = 4'h3 == state ? dirty_0_5 : _GEN_1632; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1789 = 4'h3 == state ? dirty_0_6 : _GEN_1633; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1790 = 4'h3 == state ? dirty_0_7 : _GEN_1634; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1791 = 4'h3 == state ? dirty_0_8 : _GEN_1635; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1792 = 4'h3 == state ? dirty_0_9 : _GEN_1636; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1793 = 4'h3 == state ? dirty_0_10 : _GEN_1637; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1794 = 4'h3 == state ? dirty_0_11 : _GEN_1638; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1795 = 4'h3 == state ? dirty_0_12 : _GEN_1639; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1796 = 4'h3 == state ? dirty_0_13 : _GEN_1640; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1797 = 4'h3 == state ? dirty_0_14 : _GEN_1641; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1798 = 4'h3 == state ? dirty_0_15 : _GEN_1642; // @[d_cache.scala 90:18 26:26]
  wire  _GEN_1799 = 4'h3 == state ? dirty_1_0 : _GEN_1643; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1800 = 4'h3 == state ? dirty_1_1 : _GEN_1644; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1801 = 4'h3 == state ? dirty_1_2 : _GEN_1645; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1802 = 4'h3 == state ? dirty_1_3 : _GEN_1646; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1803 = 4'h3 == state ? dirty_1_4 : _GEN_1647; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1804 = 4'h3 == state ? dirty_1_5 : _GEN_1648; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1805 = 4'h3 == state ? dirty_1_6 : _GEN_1649; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1806 = 4'h3 == state ? dirty_1_7 : _GEN_1650; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1807 = 4'h3 == state ? dirty_1_8 : _GEN_1651; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1808 = 4'h3 == state ? dirty_1_9 : _GEN_1652; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1809 = 4'h3 == state ? dirty_1_10 : _GEN_1653; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1810 = 4'h3 == state ? dirty_1_11 : _GEN_1654; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1811 = 4'h3 == state ? dirty_1_12 : _GEN_1655; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1812 = 4'h3 == state ? dirty_1_13 : _GEN_1656; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1813 = 4'h3 == state ? dirty_1_14 : _GEN_1657; // @[d_cache.scala 90:18 27:26]
  wire  _GEN_1814 = 4'h3 == state ? dirty_1_15 : _GEN_1658; // @[d_cache.scala 90:18 27:26]
  wire [41:0] _GEN_1970 = 4'h2 == state ? {{10'd0}, write_back_addr} : _GEN_1782; // @[d_cache.scala 90:18 32:34]
  wire [41:0] _GEN_2126 = 4'h1 == state ? {{10'd0}, write_back_addr} : _GEN_1970; // @[d_cache.scala 90:18 32:34]
  wire [41:0] _GEN_2282 = 4'h0 == state ? {{10'd0}, write_back_addr} : _GEN_2126; // @[d_cache.scala 90:18 32:34]
  wire [511:0] _io_to_lsu_rdata_T = _GEN_88 >> shift_bit; // @[d_cache.scala 267:49]
  wire [511:0] _io_to_lsu_rdata_T_1 = _GEN_136 >> shift_bit; // @[d_cache.scala 275:49]
  wire [511:0] _GEN_2283 = way1_hit ? _io_to_lsu_rdata_T_1 : 512'h0; // @[d_cache.scala 274:33 275:33 283:33]
  wire [511:0] _GEN_2287 = way0_hit ? _io_to_lsu_rdata_T : _GEN_2283; // @[d_cache.scala 266:23 267:33]
  wire  _GEN_2289 = way0_hit | way1_hit; // @[d_cache.scala 266:23 269:34]
  wire [63:0] _GEN_2506 = {{32'd0}, io_from_lsu_araddr}; // @[d_cache.scala 342:49]
  wire [63:0] _io_to_axi_araddr_T = _GEN_2506 & 64'hffffffffffffffc0; // @[d_cache.scala 342:49]
  wire  _T_23 = state == 4'h7; // @[d_cache.scala 422:21]
  wire [63:0] _GEN_2294 = state == 4'h7 ? io_from_axi_rdata : 64'h0; // @[d_cache.scala 422:30 423:19 426:25]
  wire  _GEN_2296 = state == 4'h7 & io_from_axi_rvalid; // @[d_cache.scala 422:30 423:19 428:26]
  wire  _GEN_2298 = state == 4'h7 & io_from_axi_wready; // @[d_cache.scala 422:30 423:19 430:26]
  wire  _GEN_2304 = state == 4'h7 & io_from_lsu_arvalid; // @[d_cache.scala 422:30 424:19 433:27]
  wire [31:0] _GEN_2306 = state == 4'h7 ? io_from_lsu_awaddr : 32'h0; // @[d_cache.scala 422:30 424:19 439:26]
  wire  _GEN_2310 = state == 4'h7 & io_from_lsu_awvalid; // @[d_cache.scala 422:30 424:19 440:27]
  wire [63:0] _GEN_2311 = state == 4'h7 ? io_from_lsu_wdata : 64'h0; // @[d_cache.scala 422:30 424:19 444:25]
  wire [7:0] _GEN_2312 = state == 4'h7 ? io_from_lsu_wstrb : 8'h0; // @[d_cache.scala 422:30 424:19 445:25]
  wire  _GEN_2314 = state == 4'h7 & io_from_lsu_wvalid; // @[d_cache.scala 422:30 424:19 447:26]
  wire [63:0] _GEN_2316 = state == 4'h6 ? 64'h0 : _GEN_2294; // @[d_cache.scala 398:35 399:25]
  wire  _GEN_2318 = state == 4'h6 ? 1'h0 : _GEN_2296; // @[d_cache.scala 398:35 401:26]
  wire  _GEN_2320 = state == 4'h6 ? 1'h0 : _GEN_2298; // @[d_cache.scala 398:35 403:26]
  wire  _GEN_2323 = state == 4'h6 ? 1'h0 : _GEN_2304; // @[d_cache.scala 398:35 406:27]
  wire [31:0] _GEN_2324 = state == 4'h6 ? 32'h0 : io_from_lsu_araddr; // @[d_cache.scala 398:35 407:26]
  wire [7:0] _GEN_2325 = state == 4'h6 ? 8'h7 : 8'h0; // @[d_cache.scala 398:35 408:25]
  wire  _GEN_2328 = state == 4'h6 ? 1'h0 : 1'h1; // @[d_cache.scala 398:35 411:26]
  wire [31:0] _GEN_2329 = state == 4'h6 ? write_back_addr : _GEN_2306; // @[d_cache.scala 398:35 412:26]
  wire  _GEN_2330 = state == 4'h6 | _GEN_2310; // @[d_cache.scala 398:35 413:27]
  wire [63:0] _GEN_2334 = state == 4'h6 ? write_back_data[63:0] : _GEN_2311; // @[d_cache.scala 398:35 417:25]
  wire [7:0] _GEN_2335 = state == 4'h6 ? 8'hff : _GEN_2312; // @[d_cache.scala 398:35 418:25]
  wire  _GEN_2337 = state == 4'h6 | _GEN_2314; // @[d_cache.scala 398:35 420:26]
  wire  _GEN_2338 = state == 4'h6 | _T_23; // @[d_cache.scala 398:35 421:26]
  wire [63:0] _GEN_2339 = state == 4'h4 | state == 4'h8 ? 64'h0 : _GEN_2316; // @[d_cache.scala 357:50 358:25]
  wire  _GEN_2341 = state == 4'h4 | state == 4'h8 ? 1'h0 : _GEN_2318; // @[d_cache.scala 357:50 360:26]
  wire  _GEN_2343 = state == 4'h4 | state == 4'h8 ? io_from_axi_wready : _GEN_2320; // @[d_cache.scala 357:50 362:26]
  wire  _GEN_2346 = state == 4'h4 | state == 4'h8 ? 1'h0 : _GEN_2323; // @[d_cache.scala 357:50 365:27]
  wire [31:0] _GEN_2347 = state == 4'h4 | state == 4'h8 ? 32'h0 : _GEN_2324; // @[d_cache.scala 357:50 366:26]
  wire [7:0] _GEN_2348 = state == 4'h4 | state == 4'h8 ? 8'h0 : _GEN_2325; // @[d_cache.scala 357:50 367:25]
  wire  _GEN_2351 = state == 4'h4 | state == 4'h8 | _GEN_2328; // @[d_cache.scala 357:50 370:26]
  wire [31:0] _GEN_2352 = state == 4'h4 | state == 4'h8 ? io_from_lsu_awaddr : _GEN_2329; // @[d_cache.scala 357:50 371:26]
  wire  _GEN_2353 = state == 4'h4 | state == 4'h8 ? io_from_lsu_awvalid : _GEN_2330; // @[d_cache.scala 357:50 372:27]
  wire [63:0] _GEN_2357 = state == 4'h4 | state == 4'h8 ? io_from_lsu_wdata : _GEN_2334; // @[d_cache.scala 357:50 376:25]
  wire [7:0] _GEN_2358 = state == 4'h4 | state == 4'h8 ? io_from_lsu_wstrb : _GEN_2335; // @[d_cache.scala 357:50 377:25]
  wire  _GEN_2360 = state == 4'h4 | state == 4'h8 ? io_from_lsu_wvalid : _GEN_2337; // @[d_cache.scala 357:50 379:26]
  wire  _GEN_2361 = state == 4'h4 | state == 4'h8 | _GEN_2338; // @[d_cache.scala 357:50 380:26]
  wire [63:0] _GEN_2362 = state == 4'h3 ? 64'h0 : _GEN_2339; // @[d_cache.scala 333:31 334:25]
  wire  _GEN_2364 = state == 4'h3 ? 1'h0 : _GEN_2341; // @[d_cache.scala 333:31 336:26]
  wire  _GEN_2366 = state == 4'h3 ? 1'h0 : _GEN_2343; // @[d_cache.scala 333:31 338:26]
  wire  _GEN_2369 = state == 4'h3 | _GEN_2346; // @[d_cache.scala 333:31 341:27]
  wire [63:0] _GEN_2370 = state == 4'h3 ? _io_to_axi_araddr_T : {{32'd0}, _GEN_2347}; // @[d_cache.scala 333:31 342:26]
  wire [7:0] _GEN_2371 = state == 4'h3 ? 8'h7 : _GEN_2348; // @[d_cache.scala 333:31 343:25]
  wire  _GEN_2374 = state == 4'h3 | _GEN_2351; // @[d_cache.scala 333:31 346:26]
  wire [31:0] _GEN_2375 = state == 4'h3 ? 32'h0 : _GEN_2352; // @[d_cache.scala 333:31 347:26]
  wire  _GEN_2376 = state == 4'h3 ? 1'h0 : _GEN_2353; // @[d_cache.scala 333:31 348:27]
  wire [7:0] _GEN_2377 = state == 4'h3 ? 8'h0 : _GEN_2348; // @[d_cache.scala 333:31 349:25]
  wire [63:0] _GEN_2380 = state == 4'h3 ? 64'h0 : _GEN_2357; // @[d_cache.scala 333:31 352:25]
  wire [7:0] _GEN_2381 = state == 4'h3 ? 8'h0 : _GEN_2358; // @[d_cache.scala 333:31 353:25]
  wire  _GEN_2383 = state == 4'h3 ? 1'h0 : _GEN_2360; // @[d_cache.scala 333:31 355:26]
  wire  _GEN_2384 = state == 4'h3 ? 1'h0 : _GEN_2361; // @[d_cache.scala 333:31 356:26]
  wire  _GEN_2385 = state == 4'h2 ? 1'h0 : _GEN_2369; // @[d_cache.scala 291:33 292:27]
  wire [63:0] _GEN_2386 = state == 4'h2 ? {{32'd0}, io_from_lsu_araddr} : _GEN_2370; // @[d_cache.scala 291:33 293:26]
  wire [7:0] _GEN_2387 = state == 4'h2 ? 8'h0 : _GEN_2371; // @[d_cache.scala 291:33 294:25]
  wire  _GEN_2390 = state == 4'h2 ? 1'h0 : _GEN_2374; // @[d_cache.scala 291:33 297:26]
  wire [31:0] _GEN_2391 = state == 4'h2 ? 32'h0 : _GEN_2375; // @[d_cache.scala 291:33 298:26]
  wire  _GEN_2392 = state == 4'h2 ? 1'h0 : _GEN_2376; // @[d_cache.scala 291:33 299:27]
  wire [7:0] _GEN_2393 = state == 4'h2 ? 8'h0 : _GEN_2377; // @[d_cache.scala 291:33 300:25]
  wire [63:0] _GEN_2396 = state == 4'h2 ? 64'h0 : _GEN_2380; // @[d_cache.scala 291:33 303:25]
  wire [7:0] _GEN_2397 = state == 4'h2 ? 8'h0 : _GEN_2381; // @[d_cache.scala 291:33 304:25]
  wire  _GEN_2399 = state == 4'h2 ? 1'h0 : _GEN_2383; // @[d_cache.scala 291:33 306:26]
  wire  _GEN_2400 = state == 4'h2 ? 1'h0 : _GEN_2384; // @[d_cache.scala 291:33 307:26]
  wire [63:0] _GEN_2401 = state == 4'h2 ? 64'h0 : _GEN_2362; // @[d_cache.scala 291:33]
  wire  _GEN_2403 = state == 4'h2 ? 1'h0 : _GEN_2364; // @[d_cache.scala 291:33]
  wire  _GEN_2405 = state == 4'h2 ? _GEN_2289 : _GEN_2366; // @[d_cache.scala 291:33]
  wire [63:0] _GEN_2409 = state == 4'h1 ? {{32'd0}, io_from_lsu_araddr} : _GEN_2386; // @[d_cache.scala 249:27 251:26]
  wire [511:0] _GEN_2424 = state == 4'h1 ? _GEN_2287 : {{448'd0}, _GEN_2401}; // @[d_cache.scala 249:27]
  wire [41:0] _GEN_2507 = reset ? 42'h0 : _GEN_2282; // @[d_cache.scala 32:{34,34}]
  assign io_to_lsu_rdata = _GEN_2424[63:0];
  assign io_to_lsu_rvalid = state == 4'h1 ? _GEN_2289 : _GEN_2403; // @[d_cache.scala 249:27]
  assign io_to_lsu_wready = state == 4'h1 ? 1'h0 : _GEN_2405; // @[d_cache.scala 249:27]
  assign io_to_axi_araddr = _GEN_2409[31:0];
  assign io_to_axi_arlen = state == 4'h1 ? 8'h0 : _GEN_2387; // @[d_cache.scala 249:27 252:25]
  assign io_to_axi_arvalid = state == 4'h1 ? 1'h0 : _GEN_2385; // @[d_cache.scala 249:27 250:27]
  assign io_to_axi_rready = state == 4'h1 ? 1'h0 : _GEN_2390; // @[d_cache.scala 249:27 255:26]
  assign io_to_axi_awaddr = state == 4'h1 ? 32'h0 : _GEN_2391; // @[d_cache.scala 249:27 256:26]
  assign io_to_axi_awlen = state == 4'h1 ? 8'h0 : _GEN_2393; // @[d_cache.scala 249:27 258:25]
  assign io_to_axi_awvalid = state == 4'h1 ? 1'h0 : _GEN_2392; // @[d_cache.scala 249:27 257:27]
  assign io_to_axi_wdata = state == 4'h1 ? 64'h0 : _GEN_2396; // @[d_cache.scala 249:27 261:25]
  assign io_to_axi_wstrb = state == 4'h1 ? 8'h0 : _GEN_2397; // @[d_cache.scala 249:27 262:25]
  assign io_to_axi_wvalid = state == 4'h1 ? 1'h0 : _GEN_2399; // @[d_cache.scala 249:27 264:26]
  assign io_to_axi_bready = state == 4'h1 ? 1'h0 : _GEN_2400; // @[d_cache.scala 249:27 265:26]
  always @(posedge clock) begin
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_0 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_0 <= _GEN_203;
        end else begin
          ram_0_0 <= _GEN_1669;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_1 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_1 <= _GEN_204;
        end else begin
          ram_0_1 <= _GEN_1670;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_2 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_2 <= _GEN_205;
        end else begin
          ram_0_2 <= _GEN_1671;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_3 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_3 <= _GEN_206;
        end else begin
          ram_0_3 <= _GEN_1672;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_4 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_4 <= _GEN_207;
        end else begin
          ram_0_4 <= _GEN_1673;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_5 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_5 <= _GEN_208;
        end else begin
          ram_0_5 <= _GEN_1674;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_6 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_6 <= _GEN_209;
        end else begin
          ram_0_6 <= _GEN_1675;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_7 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_7 <= _GEN_210;
        end else begin
          ram_0_7 <= _GEN_1676;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_8 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_8 <= _GEN_211;
        end else begin
          ram_0_8 <= _GEN_1677;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_9 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_9 <= _GEN_212;
        end else begin
          ram_0_9 <= _GEN_1678;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_10 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_10 <= _GEN_213;
        end else begin
          ram_0_10 <= _GEN_1679;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_11 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_11 <= _GEN_214;
        end else begin
          ram_0_11 <= _GEN_1680;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_12 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_12 <= _GEN_215;
        end else begin
          ram_0_12 <= _GEN_1681;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_13 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_13 <= _GEN_216;
        end else begin
          ram_0_13 <= _GEN_1682;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_14 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_14 <= _GEN_217;
        end else begin
          ram_0_14 <= _GEN_1683;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 19:24]
      ram_0_15 <= 512'h0; // @[d_cache.scala 19:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_0_15 <= _GEN_218;
        end else begin
          ram_0_15 <= _GEN_1684;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_0 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_0 <= _GEN_235;
        end else begin
          ram_1_0 <= _GEN_1733;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_1 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_1 <= _GEN_236;
        end else begin
          ram_1_1 <= _GEN_1734;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_2 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_2 <= _GEN_237;
        end else begin
          ram_1_2 <= _GEN_1735;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_3 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_3 <= _GEN_238;
        end else begin
          ram_1_3 <= _GEN_1736;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_4 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_4 <= _GEN_239;
        end else begin
          ram_1_4 <= _GEN_1737;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_5 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_5 <= _GEN_240;
        end else begin
          ram_1_5 <= _GEN_1738;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_6 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_6 <= _GEN_241;
        end else begin
          ram_1_6 <= _GEN_1739;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_7 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_7 <= _GEN_242;
        end else begin
          ram_1_7 <= _GEN_1740;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_8 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_8 <= _GEN_243;
        end else begin
          ram_1_8 <= _GEN_1741;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_9 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_9 <= _GEN_244;
        end else begin
          ram_1_9 <= _GEN_1742;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_10 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_10 <= _GEN_245;
        end else begin
          ram_1_10 <= _GEN_1743;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_11 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_11 <= _GEN_246;
        end else begin
          ram_1_11 <= _GEN_1744;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_12 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_12 <= _GEN_247;
        end else begin
          ram_1_12 <= _GEN_1745;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_13 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_13 <= _GEN_248;
        end else begin
          ram_1_13 <= _GEN_1746;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_14 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_14 <= _GEN_249;
        end else begin
          ram_1_14 <= _GEN_1747;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 20:24]
      ram_1_15 <= 512'h0; // @[d_cache.scala 20:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          ram_1_15 <= _GEN_250;
        end else begin
          ram_1_15 <= _GEN_1748;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_0 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_0 <= _GEN_1685;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_1 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_1 <= _GEN_1686;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_2 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_2 <= _GEN_1687;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_3 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_3 <= _GEN_1688;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_4 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_4 <= _GEN_1689;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_5 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_5 <= _GEN_1690;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_6 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_6 <= _GEN_1691;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_7 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_7 <= _GEN_1692;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_8 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_8 <= _GEN_1693;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_9 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_9 <= _GEN_1694;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_10 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_10 <= _GEN_1695;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_11 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_11 <= _GEN_1696;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_12 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_12 <= _GEN_1697;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_13 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_13 <= _GEN_1698;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_14 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_14 <= _GEN_1699;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 22:24]
      tag_0_15 <= 32'h0; // @[d_cache.scala 22:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_0_15 <= _GEN_1700;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_0 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_0 <= _GEN_1749;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_1 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_1 <= _GEN_1750;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_2 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_2 <= _GEN_1751;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_3 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_3 <= _GEN_1752;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_4 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_4 <= _GEN_1753;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_5 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_5 <= _GEN_1754;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_6 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_6 <= _GEN_1755;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_7 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_7 <= _GEN_1756;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_8 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_8 <= _GEN_1757;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_9 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_9 <= _GEN_1758;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_10 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_10 <= _GEN_1759;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_11 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_11 <= _GEN_1760;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_12 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_12 <= _GEN_1761;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_13 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_13 <= _GEN_1762;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_14 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_14 <= _GEN_1763;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 23:24]
      tag_1_15 <= 32'h0; // @[d_cache.scala 23:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          tag_1_15 <= _GEN_1764;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_0 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_0 <= _GEN_1701;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_1 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_1 <= _GEN_1702;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_2 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_2 <= _GEN_1703;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_3 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_3 <= _GEN_1704;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_4 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_4 <= _GEN_1705;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_5 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_5 <= _GEN_1706;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_6 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_6 <= _GEN_1707;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_7 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_7 <= _GEN_1708;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_8 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_8 <= _GEN_1709;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_9 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_9 <= _GEN_1710;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_10 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_10 <= _GEN_1711;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_11 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_11 <= _GEN_1712;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_12 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_12 <= _GEN_1713;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_13 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_13 <= _GEN_1714;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_14 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_14 <= _GEN_1715;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 24:26]
      valid_0_15 <= 1'h0; // @[d_cache.scala 24:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_0_15 <= _GEN_1716;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_0 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_0 <= _GEN_1765;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_1 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_1 <= _GEN_1766;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_2 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_2 <= _GEN_1767;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_3 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_3 <= _GEN_1768;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_4 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_4 <= _GEN_1769;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_5 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_5 <= _GEN_1770;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_6 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_6 <= _GEN_1771;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_7 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_7 <= _GEN_1772;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_8 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_8 <= _GEN_1773;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_9 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_9 <= _GEN_1774;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_10 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_10 <= _GEN_1775;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_11 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_11 <= _GEN_1776;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_12 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_12 <= _GEN_1777;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_13 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_13 <= _GEN_1778;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_14 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_14 <= _GEN_1779;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 25:26]
      valid_1_15 <= 1'h0; // @[d_cache.scala 25:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          valid_1_15 <= _GEN_1780;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_0 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_0 <= _GEN_219;
        end else begin
          dirty_0_0 <= _GEN_1783;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_1 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_1 <= _GEN_220;
        end else begin
          dirty_0_1 <= _GEN_1784;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_2 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_2 <= _GEN_221;
        end else begin
          dirty_0_2 <= _GEN_1785;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_3 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_3 <= _GEN_222;
        end else begin
          dirty_0_3 <= _GEN_1786;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_4 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_4 <= _GEN_223;
        end else begin
          dirty_0_4 <= _GEN_1787;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_5 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_5 <= _GEN_224;
        end else begin
          dirty_0_5 <= _GEN_1788;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_6 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_6 <= _GEN_225;
        end else begin
          dirty_0_6 <= _GEN_1789;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_7 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_7 <= _GEN_226;
        end else begin
          dirty_0_7 <= _GEN_1790;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_8 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_8 <= _GEN_227;
        end else begin
          dirty_0_8 <= _GEN_1791;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_9 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_9 <= _GEN_228;
        end else begin
          dirty_0_9 <= _GEN_1792;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_10 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_10 <= _GEN_229;
        end else begin
          dirty_0_10 <= _GEN_1793;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_11 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_11 <= _GEN_230;
        end else begin
          dirty_0_11 <= _GEN_1794;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_12 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_12 <= _GEN_231;
        end else begin
          dirty_0_12 <= _GEN_1795;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_13 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_13 <= _GEN_232;
        end else begin
          dirty_0_13 <= _GEN_1796;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_14 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_14 <= _GEN_233;
        end else begin
          dirty_0_14 <= _GEN_1797;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 26:26]
      dirty_0_15 <= 1'h0; // @[d_cache.scala 26:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_0_15 <= _GEN_234;
        end else begin
          dirty_0_15 <= _GEN_1798;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_0 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_0 <= _GEN_251;
        end else begin
          dirty_1_0 <= _GEN_1799;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_1 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_1 <= _GEN_252;
        end else begin
          dirty_1_1 <= _GEN_1800;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_2 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_2 <= _GEN_253;
        end else begin
          dirty_1_2 <= _GEN_1801;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_3 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_3 <= _GEN_254;
        end else begin
          dirty_1_3 <= _GEN_1802;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_4 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_4 <= _GEN_255;
        end else begin
          dirty_1_4 <= _GEN_1803;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_5 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_5 <= _GEN_256;
        end else begin
          dirty_1_5 <= _GEN_1804;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_6 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_6 <= _GEN_257;
        end else begin
          dirty_1_6 <= _GEN_1805;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_7 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_7 <= _GEN_258;
        end else begin
          dirty_1_7 <= _GEN_1806;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_8 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_8 <= _GEN_259;
        end else begin
          dirty_1_8 <= _GEN_1807;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_9 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_9 <= _GEN_260;
        end else begin
          dirty_1_9 <= _GEN_1808;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_10 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_10 <= _GEN_261;
        end else begin
          dirty_1_10 <= _GEN_1809;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_11 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_11 <= _GEN_262;
        end else begin
          dirty_1_11 <= _GEN_1810;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_12 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_12 <= _GEN_263;
        end else begin
          dirty_1_12 <= _GEN_1811;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_13 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_13 <= _GEN_264;
        end else begin
          dirty_1_13 <= _GEN_1812;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_14 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_14 <= _GEN_265;
        end else begin
          dirty_1_14 <= _GEN_1813;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 27:26]
      dirty_1_15 <= 1'h0; // @[d_cache.scala 27:26]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (4'h2 == state) begin // @[d_cache.scala 90:18]
          dirty_1_15 <= _GEN_266;
        end else begin
          dirty_1_15 <= _GEN_1814;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 31:34]
      write_back_data <= 512'h0; // @[d_cache.scala 31:34]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          write_back_data <= _GEN_1781;
        end
      end
    end
    write_back_addr <= _GEN_2507[31:0]; // @[d_cache.scala 32:{34,34}]
    if (reset) begin // @[d_cache.scala 37:31]
      receive_data_0 <= 64'h0; // @[d_cache.scala 37:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          receive_data_0 <= _GEN_1659;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 37:31]
      receive_data_1 <= 64'h0; // @[d_cache.scala 37:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          receive_data_1 <= _GEN_1660;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 37:31]
      receive_data_2 <= 64'h0; // @[d_cache.scala 37:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          receive_data_2 <= _GEN_1661;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 37:31]
      receive_data_3 <= 64'h0; // @[d_cache.scala 37:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          receive_data_3 <= _GEN_1662;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 37:31]
      receive_data_4 <= 64'h0; // @[d_cache.scala 37:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          receive_data_4 <= _GEN_1663;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 37:31]
      receive_data_5 <= 64'h0; // @[d_cache.scala 37:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          receive_data_5 <= _GEN_1664;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 37:31]
      receive_data_6 <= 64'h0; // @[d_cache.scala 37:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          receive_data_6 <= _GEN_1665;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 37:31]
      receive_data_7 <= 64'h0; // @[d_cache.scala 37:31]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          receive_data_7 <= _GEN_1666;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 38:30]
      receive_num <= 3'h0; // @[d_cache.scala 38:30]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (4'h1 == state) begin // @[d_cache.scala 90:18]
        if (!(way0_hit)) begin // @[d_cache.scala 108:27]
          receive_num <= _GEN_70;
        end
      end else if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
        receive_num <= _GEN_1667;
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_0 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_0 <= _GEN_1717;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_1 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_1 <= _GEN_1718;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_2 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_2 <= _GEN_1719;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_3 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_3 <= _GEN_1720;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_4 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_4 <= _GEN_1721;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_5 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_5 <= _GEN_1722;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_6 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_6 <= _GEN_1723;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_7 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_7 <= _GEN_1724;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_8 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_8 <= _GEN_1725;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_9 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_9 <= _GEN_1726;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_10 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_10 <= _GEN_1727;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_11 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_11 <= _GEN_1728;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_12 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_12 <= _GEN_1729;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_13 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_13 <= _GEN_1730;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_14 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_14 <= _GEN_1731;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 39:24]
      quene_15 <= 2'h0; // @[d_cache.scala 39:24]
    end else if (!(4'h0 == state)) begin // @[d_cache.scala 90:18]
      if (!(4'h1 == state)) begin // @[d_cache.scala 90:18]
        if (!(4'h2 == state)) begin // @[d_cache.scala 90:18]
          quene_15 <= _GEN_1732;
        end
      end
    end
    if (reset) begin // @[d_cache.scala 85:24]
      state <= 4'h0; // @[d_cache.scala 85:24]
    end else if (4'h0 == state) begin // @[d_cache.scala 90:18]
      if (io_from_lsu_arvalid) begin // @[d_cache.scala 92:38]
        if (io_from_lsu_araddr >= 32'ha0000000) begin // @[d_cache.scala 93:58]
          state <= 4'h7; // @[d_cache.scala 94:27]
        end else begin
          state <= 4'h1; // @[d_cache.scala 96:27]
        end
      end else if (io_from_lsu_awvalid) begin // @[d_cache.scala 98:44]
        state <= _GEN_65;
      end
    end else if (4'h1 == state) begin // @[d_cache.scala 90:18]
      if (way0_hit) begin // @[d_cache.scala 108:27]
        state <= 4'h0;
      end else begin
        state <= _GEN_69;
      end
    end else if (4'h2 == state) begin // @[d_cache.scala 90:18]
      state <= _GEN_202;
    end else begin
      state <= _GEN_1668;
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
  _RAND_128 = {16{`RANDOM}};
  write_back_data = _RAND_128[511:0];
  _RAND_129 = {1{`RANDOM}};
  write_back_addr = _RAND_129[31:0];
  _RAND_130 = {2{`RANDOM}};
  receive_data_0 = _RAND_130[63:0];
  _RAND_131 = {2{`RANDOM}};
  receive_data_1 = _RAND_131[63:0];
  _RAND_132 = {2{`RANDOM}};
  receive_data_2 = _RAND_132[63:0];
  _RAND_133 = {2{`RANDOM}};
  receive_data_3 = _RAND_133[63:0];
  _RAND_134 = {2{`RANDOM}};
  receive_data_4 = _RAND_134[63:0];
  _RAND_135 = {2{`RANDOM}};
  receive_data_5 = _RAND_135[63:0];
  _RAND_136 = {2{`RANDOM}};
  receive_data_6 = _RAND_136[63:0];
  _RAND_137 = {2{`RANDOM}};
  receive_data_7 = _RAND_137[63:0];
  _RAND_138 = {1{`RANDOM}};
  receive_num = _RAND_138[2:0];
  _RAND_139 = {1{`RANDOM}};
  quene_0 = _RAND_139[1:0];
  _RAND_140 = {1{`RANDOM}};
  quene_1 = _RAND_140[1:0];
  _RAND_141 = {1{`RANDOM}};
  quene_2 = _RAND_141[1:0];
  _RAND_142 = {1{`RANDOM}};
  quene_3 = _RAND_142[1:0];
  _RAND_143 = {1{`RANDOM}};
  quene_4 = _RAND_143[1:0];
  _RAND_144 = {1{`RANDOM}};
  quene_5 = _RAND_144[1:0];
  _RAND_145 = {1{`RANDOM}};
  quene_6 = _RAND_145[1:0];
  _RAND_146 = {1{`RANDOM}};
  quene_7 = _RAND_146[1:0];
  _RAND_147 = {1{`RANDOM}};
  quene_8 = _RAND_147[1:0];
  _RAND_148 = {1{`RANDOM}};
  quene_9 = _RAND_148[1:0];
  _RAND_149 = {1{`RANDOM}};
  quene_10 = _RAND_149[1:0];
  _RAND_150 = {1{`RANDOM}};
  quene_11 = _RAND_150[1:0];
  _RAND_151 = {1{`RANDOM}};
  quene_12 = _RAND_151[1:0];
  _RAND_152 = {1{`RANDOM}};
  quene_13 = _RAND_152[1:0];
  _RAND_153 = {1{`RANDOM}};
  quene_14 = _RAND_153[1:0];
  _RAND_154 = {1{`RANDOM}};
  quene_15 = _RAND_154[1:0];
  _RAND_155 = {1{`RANDOM}};
  state = _RAND_155[3:0];
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
