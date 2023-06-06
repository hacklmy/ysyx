module Register(
  input   clock
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
  assign Reg_io_rdata1_MPORT_addr = 5'h0;
  assign Reg_io_rdata1_MPORT_data = Reg[Reg_io_rdata1_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_io_rdata2_MPORT_en = 1'h1;
  assign Reg_io_rdata2_MPORT_addr = 5'h0;
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
  assign Reg_MPORT_data = 64'h0;
  assign Reg_MPORT_addr = 5'h0;
  assign Reg_MPORT_mask = 1'h1;
  assign Reg_MPORT_en = 1'h0;
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
  output [63:0] io_to_ds_pc,
  output [31:0] io_inst,
  input  [63:0] io_axi_in_rdata,
  input         io_axi_in_rlast,
  input         io_axi_in_rvalid,
  output [31:0] io_axi_out_araddr,
  output        io_axi_out_arvalid,
  output        io_axi_out_rready
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  reg  fs_valid; // @[IFU.scala 20:27]
  reg [63:0] fs_pc; // @[IFU.scala 27:24]
  reg [31:0] fs_inst; // @[IFU.scala 28:26]
  wire [63:0] seq_pc = fs_pc + 64'h4; // @[IFU.scala 41:24]
  wire  fs_allowin = ~fs_valid; // @[IFU.scala 46:19]
  wire  _GEN_3 = fs_allowin | fs_valid; // @[IFU.scala 48:36 49:18]
  reg  inst_ready; // @[IFU.scala 61:29]
  wire  _GEN_5 = io_axi_in_rvalid & inst_ready & io_axi_in_rlast ? 1'h0 : 1'h1; // @[IFU.scala 62:60 63:20 65:20]
  assign io_to_ds_pc = fs_pc; // @[IFU.scala 58:17]
  assign io_inst = fs_inst; // @[IFU.scala 84:13]
  assign io_axi_out_araddr = fs_pc[31:0]; // @[IFU.scala 68:31]
  assign io_axi_out_arvalid = fs_valid; // @[IFU.scala 69:24]
  assign io_axi_out_rready = inst_ready; // @[IFU.scala 73:23]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 20:27]
      fs_valid <= 1'h0; // @[IFU.scala 20:27]
    end else begin
      fs_valid <= _GEN_3;
    end
    if (reset) begin // @[IFU.scala 27:24]
      fs_pc <= 64'h7ffffffc; // @[IFU.scala 27:24]
    end else if (fs_allowin) begin // @[IFU.scala 48:36]
      fs_pc <= seq_pc; // @[IFU.scala 50:15]
    end
    if (reset) begin // @[IFU.scala 28:26]
      fs_inst <= 32'h0; // @[IFU.scala 28:26]
    end else if (io_axi_in_rvalid) begin // @[IFU.scala 30:27]
      fs_inst <= io_axi_in_rdata[31:0]; // @[IFU.scala 31:17]
    end
    inst_ready <= reset | _GEN_5; // @[IFU.scala 61:{29,29}]
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"fs_pc:%x fa_valid:%d\n",fs_pc,fs_valid); // @[IFU.scala 86:11]
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
  _RAND_2 = {1{`RANDOM}};
  fs_inst = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  inst_ready = _RAND_3[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IDU(
  input  [63:0] io_pc
);
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
  wire [31:0] _GEN_32 = io_lsu_axi_in_arvalid ? 32'h0 : _GEN_1; // @[axi_arbiter.scala 54:46 56:28]
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
  wire [31:0] _GEN_63 = io_lsu_axi_in_awvalid ? 32'h0 : _GEN_32; // @[axi_arbiter.scala 49:40 51:28]
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
  wire [31:0] _GEN_158 = state == 2'h1 ? io_ifu_axi_in_araddr : 32'h0; // @[axi_arbiter.scala 70:39 71:24]
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
  input         io_from_axi_rvalid
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
  reg [511:0] ram_0_0; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_1; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_2; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_3; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_4; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_5; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_6; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_7; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_8; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_9; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_10; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_11; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_12; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_13; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_14; // @[i_cache.scala 17:24]
  reg [511:0] ram_0_15; // @[i_cache.scala 17:24]
  reg [511:0] ram_1_0; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_1; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_2; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_3; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_4; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_5; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_6; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_7; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_8; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_9; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_10; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_11; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_12; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_13; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_14; // @[i_cache.scala 18:24]
  reg [511:0] ram_1_15; // @[i_cache.scala 18:24]
  reg [31:0] tag_0_0; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_1; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_2; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_3; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_4; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_5; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_6; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_7; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_8; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_9; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_10; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_11; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_12; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_13; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_14; // @[i_cache.scala 19:24]
  reg [31:0] tag_0_15; // @[i_cache.scala 19:24]
  reg [31:0] tag_1_0; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_1; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_2; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_3; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_4; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_5; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_6; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_7; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_8; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_9; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_10; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_11; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_12; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_13; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_14; // @[i_cache.scala 20:24]
  reg [31:0] tag_1_15; // @[i_cache.scala 20:24]
  reg  valid_0_0; // @[i_cache.scala 21:26]
  reg  valid_0_1; // @[i_cache.scala 21:26]
  reg  valid_0_2; // @[i_cache.scala 21:26]
  reg  valid_0_3; // @[i_cache.scala 21:26]
  reg  valid_0_4; // @[i_cache.scala 21:26]
  reg  valid_0_5; // @[i_cache.scala 21:26]
  reg  valid_0_6; // @[i_cache.scala 21:26]
  reg  valid_0_7; // @[i_cache.scala 21:26]
  reg  valid_0_8; // @[i_cache.scala 21:26]
  reg  valid_0_9; // @[i_cache.scala 21:26]
  reg  valid_0_10; // @[i_cache.scala 21:26]
  reg  valid_0_11; // @[i_cache.scala 21:26]
  reg  valid_0_12; // @[i_cache.scala 21:26]
  reg  valid_0_13; // @[i_cache.scala 21:26]
  reg  valid_0_14; // @[i_cache.scala 21:26]
  reg  valid_0_15; // @[i_cache.scala 21:26]
  reg  valid_1_0; // @[i_cache.scala 22:26]
  reg  valid_1_1; // @[i_cache.scala 22:26]
  reg  valid_1_2; // @[i_cache.scala 22:26]
  reg  valid_1_3; // @[i_cache.scala 22:26]
  reg  valid_1_4; // @[i_cache.scala 22:26]
  reg  valid_1_5; // @[i_cache.scala 22:26]
  reg  valid_1_6; // @[i_cache.scala 22:26]
  reg  valid_1_7; // @[i_cache.scala 22:26]
  reg  valid_1_8; // @[i_cache.scala 22:26]
  reg  valid_1_9; // @[i_cache.scala 22:26]
  reg  valid_1_10; // @[i_cache.scala 22:26]
  reg  valid_1_11; // @[i_cache.scala 22:26]
  reg  valid_1_12; // @[i_cache.scala 22:26]
  reg  valid_1_13; // @[i_cache.scala 22:26]
  reg  valid_1_14; // @[i_cache.scala 22:26]
  reg  valid_1_15; // @[i_cache.scala 22:26]
  reg  way0_hit; // @[i_cache.scala 23:27]
  reg  way1_hit; // @[i_cache.scala 24:27]
  reg [1:0] unuse_way; // @[i_cache.scala 26:28]
  reg [63:0] receive_data_0; // @[i_cache.scala 27:31]
  reg [63:0] receive_data_1; // @[i_cache.scala 27:31]
  reg [63:0] receive_data_2; // @[i_cache.scala 27:31]
  reg [63:0] receive_data_3; // @[i_cache.scala 27:31]
  reg [63:0] receive_data_4; // @[i_cache.scala 27:31]
  reg [63:0] receive_data_5; // @[i_cache.scala 27:31]
  reg [63:0] receive_data_6; // @[i_cache.scala 27:31]
  reg [63:0] receive_data_7; // @[i_cache.scala 27:31]
  reg [2:0] receive_num; // @[i_cache.scala 28:30]
  reg  quene; // @[i_cache.scala 29:24]
  wire [5:0] offset = io_from_ifu_araddr[5:0]; // @[i_cache.scala 31:36]
  wire [3:0] index = io_from_ifu_araddr[9:6]; // @[i_cache.scala 32:35]
  wire [21:0] tag = io_from_ifu_araddr[31:10]; // @[i_cache.scala 33:33]
  wire [8:0] shift_bit = {offset, 3'h0}; // @[i_cache.scala 34:28]
  wire [31:0] _GEN_1 = 4'h1 == index ? tag_0_1 : tag_0_0; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_2 = 4'h2 == index ? tag_0_2 : _GEN_1; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_3 = 4'h3 == index ? tag_0_3 : _GEN_2; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_4 = 4'h4 == index ? tag_0_4 : _GEN_3; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_5 = 4'h5 == index ? tag_0_5 : _GEN_4; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_6 = 4'h6 == index ? tag_0_6 : _GEN_5; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_7 = 4'h7 == index ? tag_0_7 : _GEN_6; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_8 = 4'h8 == index ? tag_0_8 : _GEN_7; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_9 = 4'h9 == index ? tag_0_9 : _GEN_8; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_10 = 4'ha == index ? tag_0_10 : _GEN_9; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_11 = 4'hb == index ? tag_0_11 : _GEN_10; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_12 = 4'hc == index ? tag_0_12 : _GEN_11; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_13 = 4'hd == index ? tag_0_13 : _GEN_12; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_14 = 4'he == index ? tag_0_14 : _GEN_13; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_15 = 4'hf == index ? tag_0_15 : _GEN_14; // @[i_cache.scala 36:{24,24}]
  wire [31:0] _GEN_1029 = {{10'd0}, tag}; // @[i_cache.scala 36:24]
  wire  _GEN_17 = 4'h1 == index ? valid_0_1 : valid_0_0; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_18 = 4'h2 == index ? valid_0_2 : _GEN_17; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_19 = 4'h3 == index ? valid_0_3 : _GEN_18; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_20 = 4'h4 == index ? valid_0_4 : _GEN_19; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_21 = 4'h5 == index ? valid_0_5 : _GEN_20; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_22 = 4'h6 == index ? valid_0_6 : _GEN_21; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_23 = 4'h7 == index ? valid_0_7 : _GEN_22; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_24 = 4'h8 == index ? valid_0_8 : _GEN_23; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_25 = 4'h9 == index ? valid_0_9 : _GEN_24; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_26 = 4'ha == index ? valid_0_10 : _GEN_25; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_27 = 4'hb == index ? valid_0_11 : _GEN_26; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_28 = 4'hc == index ? valid_0_12 : _GEN_27; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_29 = 4'hd == index ? valid_0_13 : _GEN_28; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_30 = 4'he == index ? valid_0_14 : _GEN_29; // @[i_cache.scala 36:{50,50}]
  wire  _GEN_31 = 4'hf == index ? valid_0_15 : _GEN_30; // @[i_cache.scala 36:{50,50}]
  wire  _T_2 = _GEN_15 == _GEN_1029 & _GEN_31; // @[i_cache.scala 36:33]
  wire [31:0] _GEN_34 = 4'h1 == index ? tag_1_1 : tag_1_0; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_35 = 4'h2 == index ? tag_1_2 : _GEN_34; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_36 = 4'h3 == index ? tag_1_3 : _GEN_35; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_37 = 4'h4 == index ? tag_1_4 : _GEN_36; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_38 = 4'h5 == index ? tag_1_5 : _GEN_37; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_39 = 4'h6 == index ? tag_1_6 : _GEN_38; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_40 = 4'h7 == index ? tag_1_7 : _GEN_39; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_41 = 4'h8 == index ? tag_1_8 : _GEN_40; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_42 = 4'h9 == index ? tag_1_9 : _GEN_41; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_43 = 4'ha == index ? tag_1_10 : _GEN_42; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_44 = 4'hb == index ? tag_1_11 : _GEN_43; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_45 = 4'hc == index ? tag_1_12 : _GEN_44; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_46 = 4'hd == index ? tag_1_13 : _GEN_45; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_47 = 4'he == index ? tag_1_14 : _GEN_46; // @[i_cache.scala 41:{24,24}]
  wire [31:0] _GEN_48 = 4'hf == index ? tag_1_15 : _GEN_47; // @[i_cache.scala 41:{24,24}]
  wire  _GEN_50 = 4'h1 == index ? valid_1_1 : valid_1_0; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_51 = 4'h2 == index ? valid_1_2 : _GEN_50; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_52 = 4'h3 == index ? valid_1_3 : _GEN_51; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_53 = 4'h4 == index ? valid_1_4 : _GEN_52; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_54 = 4'h5 == index ? valid_1_5 : _GEN_53; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_55 = 4'h6 == index ? valid_1_6 : _GEN_54; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_56 = 4'h7 == index ? valid_1_7 : _GEN_55; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_57 = 4'h8 == index ? valid_1_8 : _GEN_56; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_58 = 4'h9 == index ? valid_1_9 : _GEN_57; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_59 = 4'ha == index ? valid_1_10 : _GEN_58; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_60 = 4'hb == index ? valid_1_11 : _GEN_59; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_61 = 4'hc == index ? valid_1_12 : _GEN_60; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_62 = 4'hd == index ? valid_1_13 : _GEN_61; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_63 = 4'he == index ? valid_1_14 : _GEN_62; // @[i_cache.scala 41:{50,50}]
  wire  _GEN_64 = 4'hf == index ? valid_1_15 : _GEN_63; // @[i_cache.scala 41:{50,50}]
  wire  _T_5 = _GEN_48 == _GEN_1029 & _GEN_64; // @[i_cache.scala 41:33]
  reg [2:0] state; // @[i_cache.scala 55:24]
  wire [2:0] _GEN_69 = io_from_ifu_rready ? 3'h0 : state; // @[i_cache.scala 55:24 66:41 67:27]
  wire [2:0] _GEN_70 = way1_hit ? _GEN_69 : 3'h2; // @[i_cache.scala 70:33 75:23]
  wire [2:0] _GEN_71 = way1_hit ? receive_num : 3'h0; // @[i_cache.scala 28:30 70:33 77:29]
  wire [63:0] _GEN_74 = 3'h0 == receive_num ? io_from_axi_rdata : receive_data_0; // @[i_cache.scala 27:31 82:{43,43}]
  wire [63:0] _GEN_75 = 3'h1 == receive_num ? io_from_axi_rdata : receive_data_1; // @[i_cache.scala 27:31 82:{43,43}]
  wire [63:0] _GEN_76 = 3'h2 == receive_num ? io_from_axi_rdata : receive_data_2; // @[i_cache.scala 27:31 82:{43,43}]
  wire [63:0] _GEN_77 = 3'h3 == receive_num ? io_from_axi_rdata : receive_data_3; // @[i_cache.scala 27:31 82:{43,43}]
  wire [63:0] _GEN_78 = 3'h4 == receive_num ? io_from_axi_rdata : receive_data_4; // @[i_cache.scala 27:31 82:{43,43}]
  wire [63:0] _GEN_79 = 3'h5 == receive_num ? io_from_axi_rdata : receive_data_5; // @[i_cache.scala 27:31 82:{43,43}]
  wire [63:0] _GEN_80 = 3'h6 == receive_num ? io_from_axi_rdata : receive_data_6; // @[i_cache.scala 27:31 82:{43,43}]
  wire [63:0] _GEN_81 = 3'h7 == receive_num ? io_from_axi_rdata : receive_data_7; // @[i_cache.scala 27:31 82:{43,43}]
  wire [2:0] _receive_num_T_1 = receive_num + 3'h1; // @[i_cache.scala 83:44]
  wire [2:0] _GEN_82 = io_from_axi_rlast ? 3'h3 : state; // @[i_cache.scala 55:24 84:40 85:27]
  wire [63:0] _GEN_83 = io_from_axi_rvalid ? _GEN_74 : receive_data_0; // @[i_cache.scala 27:31 81:37]
  wire [63:0] _GEN_84 = io_from_axi_rvalid ? _GEN_75 : receive_data_1; // @[i_cache.scala 27:31 81:37]
  wire [63:0] _GEN_85 = io_from_axi_rvalid ? _GEN_76 : receive_data_2; // @[i_cache.scala 27:31 81:37]
  wire [63:0] _GEN_86 = io_from_axi_rvalid ? _GEN_77 : receive_data_3; // @[i_cache.scala 27:31 81:37]
  wire [63:0] _GEN_87 = io_from_axi_rvalid ? _GEN_78 : receive_data_4; // @[i_cache.scala 27:31 81:37]
  wire [63:0] _GEN_88 = io_from_axi_rvalid ? _GEN_79 : receive_data_5; // @[i_cache.scala 27:31 81:37]
  wire [63:0] _GEN_89 = io_from_axi_rvalid ? _GEN_80 : receive_data_6; // @[i_cache.scala 27:31 81:37]
  wire [63:0] _GEN_90 = io_from_axi_rvalid ? _GEN_81 : receive_data_7; // @[i_cache.scala 27:31 81:37]
  wire [2:0] _GEN_91 = io_from_axi_rvalid ? _receive_num_T_1 : receive_num; // @[i_cache.scala 81:37 83:29 28:30]
  wire [2:0] _GEN_92 = io_from_axi_rvalid ? _GEN_82 : state; // @[i_cache.scala 55:24 81:37]
  wire [511:0] _ram_0_T = {receive_data_7,receive_data_6,receive_data_5,receive_data_4,receive_data_3,receive_data_2,
    receive_data_1,receive_data_0}; // @[Cat.scala 31:58]
  wire [511:0] _GEN_93 = 4'h0 == index ? _ram_0_T : ram_0_0; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_94 = 4'h1 == index ? _ram_0_T : ram_0_1; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_95 = 4'h2 == index ? _ram_0_T : ram_0_2; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_96 = 4'h3 == index ? _ram_0_T : ram_0_3; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_97 = 4'h4 == index ? _ram_0_T : ram_0_4; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_98 = 4'h5 == index ? _ram_0_T : ram_0_5; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_99 = 4'h6 == index ? _ram_0_T : ram_0_6; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_100 = 4'h7 == index ? _ram_0_T : ram_0_7; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_101 = 4'h8 == index ? _ram_0_T : ram_0_8; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_102 = 4'h9 == index ? _ram_0_T : ram_0_9; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_103 = 4'ha == index ? _ram_0_T : ram_0_10; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_104 = 4'hb == index ? _ram_0_T : ram_0_11; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_105 = 4'hc == index ? _ram_0_T : ram_0_12; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_106 = 4'hd == index ? _ram_0_T : ram_0_13; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_107 = 4'he == index ? _ram_0_T : ram_0_14; // @[i_cache.scala 17:24 92:{30,30}]
  wire [511:0] _GEN_108 = 4'hf == index ? _ram_0_T : ram_0_15; // @[i_cache.scala 17:24 92:{30,30}]
  wire [31:0] _GEN_109 = 4'h0 == index ? _GEN_1029 : tag_0_0; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_110 = 4'h1 == index ? _GEN_1029 : tag_0_1; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_111 = 4'h2 == index ? _GEN_1029 : tag_0_2; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_112 = 4'h3 == index ? _GEN_1029 : tag_0_3; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_113 = 4'h4 == index ? _GEN_1029 : tag_0_4; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_114 = 4'h5 == index ? _GEN_1029 : tag_0_5; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_115 = 4'h6 == index ? _GEN_1029 : tag_0_6; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_116 = 4'h7 == index ? _GEN_1029 : tag_0_7; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_117 = 4'h8 == index ? _GEN_1029 : tag_0_8; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_118 = 4'h9 == index ? _GEN_1029 : tag_0_9; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_119 = 4'ha == index ? _GEN_1029 : tag_0_10; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_120 = 4'hb == index ? _GEN_1029 : tag_0_11; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_121 = 4'hc == index ? _GEN_1029 : tag_0_12; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_122 = 4'hd == index ? _GEN_1029 : tag_0_13; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_123 = 4'he == index ? _GEN_1029 : tag_0_14; // @[i_cache.scala 19:24 93:{30,30}]
  wire [31:0] _GEN_124 = 4'hf == index ? _GEN_1029 : tag_0_15; // @[i_cache.scala 19:24 93:{30,30}]
  wire  _GEN_1033 = 4'h0 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_125 = 4'h0 == index | valid_0_0; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1035 = 4'h1 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_126 = 4'h1 == index | valid_0_1; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1040 = 4'h2 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_127 = 4'h2 == index | valid_0_2; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1045 = 4'h3 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_128 = 4'h3 == index | valid_0_3; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1049 = 4'h4 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_129 = 4'h4 == index | valid_0_4; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1051 = 4'h5 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_130 = 4'h5 == index | valid_0_5; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1052 = 4'h6 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_131 = 4'h6 == index | valid_0_6; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1053 = 4'h7 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_132 = 4'h7 == index | valid_0_7; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1054 = 4'h8 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_133 = 4'h8 == index | valid_0_8; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1055 = 4'h9 == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_134 = 4'h9 == index | valid_0_9; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1056 = 4'ha == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_135 = 4'ha == index | valid_0_10; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1057 = 4'hb == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_136 = 4'hb == index | valid_0_11; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1058 = 4'hc == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_137 = 4'hc == index | valid_0_12; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1059 = 4'hd == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_138 = 4'hd == index | valid_0_13; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1060 = 4'he == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_139 = 4'he == index | valid_0_14; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_1061 = 4'hf == index; // @[i_cache.scala 21:26 94:{32,32}]
  wire  _GEN_140 = 4'hf == index | valid_0_15; // @[i_cache.scala 21:26 94:{32,32}]
  wire [511:0] _GEN_141 = 4'h0 == index ? _ram_0_T : ram_1_0; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_142 = 4'h1 == index ? _ram_0_T : ram_1_1; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_143 = 4'h2 == index ? _ram_0_T : ram_1_2; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_144 = 4'h3 == index ? _ram_0_T : ram_1_3; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_145 = 4'h4 == index ? _ram_0_T : ram_1_4; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_146 = 4'h5 == index ? _ram_0_T : ram_1_5; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_147 = 4'h6 == index ? _ram_0_T : ram_1_6; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_148 = 4'h7 == index ? _ram_0_T : ram_1_7; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_149 = 4'h8 == index ? _ram_0_T : ram_1_8; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_150 = 4'h9 == index ? _ram_0_T : ram_1_9; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_151 = 4'ha == index ? _ram_0_T : ram_1_10; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_152 = 4'hb == index ? _ram_0_T : ram_1_11; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_153 = 4'hc == index ? _ram_0_T : ram_1_12; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_154 = 4'hd == index ? _ram_0_T : ram_1_13; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_155 = 4'he == index ? _ram_0_T : ram_1_14; // @[i_cache.scala 18:24 97:{30,30}]
  wire [511:0] _GEN_156 = 4'hf == index ? _ram_0_T : ram_1_15; // @[i_cache.scala 18:24 97:{30,30}]
  wire [31:0] _GEN_157 = 4'h0 == index ? _GEN_1029 : tag_1_0; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_158 = 4'h1 == index ? _GEN_1029 : tag_1_1; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_159 = 4'h2 == index ? _GEN_1029 : tag_1_2; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_160 = 4'h3 == index ? _GEN_1029 : tag_1_3; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_161 = 4'h4 == index ? _GEN_1029 : tag_1_4; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_162 = 4'h5 == index ? _GEN_1029 : tag_1_5; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_163 = 4'h6 == index ? _GEN_1029 : tag_1_6; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_164 = 4'h7 == index ? _GEN_1029 : tag_1_7; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_165 = 4'h8 == index ? _GEN_1029 : tag_1_8; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_166 = 4'h9 == index ? _GEN_1029 : tag_1_9; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_167 = 4'ha == index ? _GEN_1029 : tag_1_10; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_168 = 4'hb == index ? _GEN_1029 : tag_1_11; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_169 = 4'hc == index ? _GEN_1029 : tag_1_12; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_170 = 4'hd == index ? _GEN_1029 : tag_1_13; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_171 = 4'he == index ? _GEN_1029 : tag_1_14; // @[i_cache.scala 20:24 98:{30,30}]
  wire [31:0] _GEN_172 = 4'hf == index ? _GEN_1029 : tag_1_15; // @[i_cache.scala 20:24 98:{30,30}]
  wire  _GEN_173 = _GEN_1033 | valid_1_0; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_174 = _GEN_1035 | valid_1_1; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_175 = _GEN_1040 | valid_1_2; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_176 = _GEN_1045 | valid_1_3; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_177 = _GEN_1049 | valid_1_4; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_178 = _GEN_1051 | valid_1_5; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_179 = _GEN_1052 | valid_1_6; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_180 = _GEN_1053 | valid_1_7; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_181 = _GEN_1054 | valid_1_8; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_182 = _GEN_1055 | valid_1_9; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_183 = _GEN_1056 | valid_1_10; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_184 = _GEN_1057 | valid_1_11; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_185 = _GEN_1058 | valid_1_12; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_186 = _GEN_1059 | valid_1_13; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_187 = _GEN_1060 | valid_1_14; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _GEN_188 = _GEN_1061 | valid_1_15; // @[i_cache.scala 22:26 99:{32,32}]
  wire  _T_14 = ~quene; // @[i_cache.scala 102:27]
  wire [511:0] _GEN_285 = ~quene ? _GEN_93 : ram_0_0; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_286 = ~quene ? _GEN_94 : ram_0_1; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_287 = ~quene ? _GEN_95 : ram_0_2; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_288 = ~quene ? _GEN_96 : ram_0_3; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_289 = ~quene ? _GEN_97 : ram_0_4; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_290 = ~quene ? _GEN_98 : ram_0_5; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_291 = ~quene ? _GEN_99 : ram_0_6; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_292 = ~quene ? _GEN_100 : ram_0_7; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_293 = ~quene ? _GEN_101 : ram_0_8; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_294 = ~quene ? _GEN_102 : ram_0_9; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_295 = ~quene ? _GEN_103 : ram_0_10; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_296 = ~quene ? _GEN_104 : ram_0_11; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_297 = ~quene ? _GEN_105 : ram_0_12; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_298 = ~quene ? _GEN_106 : ram_0_13; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_299 = ~quene ? _GEN_107 : ram_0_14; // @[i_cache.scala 102:34 17:24]
  wire [511:0] _GEN_300 = ~quene ? _GEN_108 : ram_0_15; // @[i_cache.scala 102:34 17:24]
  wire [31:0] _GEN_301 = ~quene ? _GEN_109 : tag_0_0; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_302 = ~quene ? _GEN_110 : tag_0_1; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_303 = ~quene ? _GEN_111 : tag_0_2; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_304 = ~quene ? _GEN_112 : tag_0_3; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_305 = ~quene ? _GEN_113 : tag_0_4; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_306 = ~quene ? _GEN_114 : tag_0_5; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_307 = ~quene ? _GEN_115 : tag_0_6; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_308 = ~quene ? _GEN_116 : tag_0_7; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_309 = ~quene ? _GEN_117 : tag_0_8; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_310 = ~quene ? _GEN_118 : tag_0_9; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_311 = ~quene ? _GEN_119 : tag_0_10; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_312 = ~quene ? _GEN_120 : tag_0_11; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_313 = ~quene ? _GEN_121 : tag_0_12; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_314 = ~quene ? _GEN_122 : tag_0_13; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_315 = ~quene ? _GEN_123 : tag_0_14; // @[i_cache.scala 102:34 19:24]
  wire [31:0] _GEN_316 = ~quene ? _GEN_124 : tag_0_15; // @[i_cache.scala 102:34 19:24]
  wire  _GEN_317 = ~quene ? _GEN_125 : valid_0_0; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_318 = ~quene ? _GEN_126 : valid_0_1; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_319 = ~quene ? _GEN_127 : valid_0_2; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_320 = ~quene ? _GEN_128 : valid_0_3; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_321 = ~quene ? _GEN_129 : valid_0_4; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_322 = ~quene ? _GEN_130 : valid_0_5; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_323 = ~quene ? _GEN_131 : valid_0_6; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_324 = ~quene ? _GEN_132 : valid_0_7; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_325 = ~quene ? _GEN_133 : valid_0_8; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_326 = ~quene ? _GEN_134 : valid_0_9; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_327 = ~quene ? _GEN_135 : valid_0_10; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_328 = ~quene ? _GEN_136 : valid_0_11; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_329 = ~quene ? _GEN_137 : valid_0_12; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_330 = ~quene ? _GEN_138 : valid_0_13; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_331 = ~quene ? _GEN_139 : valid_0_14; // @[i_cache.scala 102:34 21:26]
  wire  _GEN_332 = ~quene ? _GEN_140 : valid_0_15; // @[i_cache.scala 102:34 21:26]
  wire [511:0] _GEN_334 = ~quene ? ram_1_0 : _GEN_141; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_335 = ~quene ? ram_1_1 : _GEN_142; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_336 = ~quene ? ram_1_2 : _GEN_143; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_337 = ~quene ? ram_1_3 : _GEN_144; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_338 = ~quene ? ram_1_4 : _GEN_145; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_339 = ~quene ? ram_1_5 : _GEN_146; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_340 = ~quene ? ram_1_6 : _GEN_147; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_341 = ~quene ? ram_1_7 : _GEN_148; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_342 = ~quene ? ram_1_8 : _GEN_149; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_343 = ~quene ? ram_1_9 : _GEN_150; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_344 = ~quene ? ram_1_10 : _GEN_151; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_345 = ~quene ? ram_1_11 : _GEN_152; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_346 = ~quene ? ram_1_12 : _GEN_153; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_347 = ~quene ? ram_1_13 : _GEN_154; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_348 = ~quene ? ram_1_14 : _GEN_155; // @[i_cache.scala 102:34 18:24]
  wire [511:0] _GEN_349 = ~quene ? ram_1_15 : _GEN_156; // @[i_cache.scala 102:34 18:24]
  wire [31:0] _GEN_350 = ~quene ? tag_1_0 : _GEN_157; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_351 = ~quene ? tag_1_1 : _GEN_158; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_352 = ~quene ? tag_1_2 : _GEN_159; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_353 = ~quene ? tag_1_3 : _GEN_160; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_354 = ~quene ? tag_1_4 : _GEN_161; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_355 = ~quene ? tag_1_5 : _GEN_162; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_356 = ~quene ? tag_1_6 : _GEN_163; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_357 = ~quene ? tag_1_7 : _GEN_164; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_358 = ~quene ? tag_1_8 : _GEN_165; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_359 = ~quene ? tag_1_9 : _GEN_166; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_360 = ~quene ? tag_1_10 : _GEN_167; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_361 = ~quene ? tag_1_11 : _GEN_168; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_362 = ~quene ? tag_1_12 : _GEN_169; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_363 = ~quene ? tag_1_13 : _GEN_170; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_364 = ~quene ? tag_1_14 : _GEN_171; // @[i_cache.scala 102:34 20:24]
  wire [31:0] _GEN_365 = ~quene ? tag_1_15 : _GEN_172; // @[i_cache.scala 102:34 20:24]
  wire  _GEN_366 = ~quene ? valid_1_0 : _GEN_173; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_367 = ~quene ? valid_1_1 : _GEN_174; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_368 = ~quene ? valid_1_2 : _GEN_175; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_369 = ~quene ? valid_1_3 : _GEN_176; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_370 = ~quene ? valid_1_4 : _GEN_177; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_371 = ~quene ? valid_1_5 : _GEN_178; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_372 = ~quene ? valid_1_6 : _GEN_179; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_373 = ~quene ? valid_1_7 : _GEN_180; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_374 = ~quene ? valid_1_8 : _GEN_181; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_375 = ~quene ? valid_1_9 : _GEN_182; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_376 = ~quene ? valid_1_10 : _GEN_183; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_377 = ~quene ? valid_1_11 : _GEN_184; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_378 = ~quene ? valid_1_12 : _GEN_185; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_379 = ~quene ? valid_1_13 : _GEN_186; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_380 = ~quene ? valid_1_14 : _GEN_187; // @[i_cache.scala 102:34 22:26]
  wire  _GEN_381 = ~quene ? valid_1_15 : _GEN_188; // @[i_cache.scala 102:34 22:26]
  wire [511:0] _GEN_382 = unuse_way == 2'h2 ? _GEN_141 : _GEN_334; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_383 = unuse_way == 2'h2 ? _GEN_142 : _GEN_335; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_384 = unuse_way == 2'h2 ? _GEN_143 : _GEN_336; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_385 = unuse_way == 2'h2 ? _GEN_144 : _GEN_337; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_386 = unuse_way == 2'h2 ? _GEN_145 : _GEN_338; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_387 = unuse_way == 2'h2 ? _GEN_146 : _GEN_339; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_388 = unuse_way == 2'h2 ? _GEN_147 : _GEN_340; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_389 = unuse_way == 2'h2 ? _GEN_148 : _GEN_341; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_390 = unuse_way == 2'h2 ? _GEN_149 : _GEN_342; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_391 = unuse_way == 2'h2 ? _GEN_150 : _GEN_343; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_392 = unuse_way == 2'h2 ? _GEN_151 : _GEN_344; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_393 = unuse_way == 2'h2 ? _GEN_152 : _GEN_345; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_394 = unuse_way == 2'h2 ? _GEN_153 : _GEN_346; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_395 = unuse_way == 2'h2 ? _GEN_154 : _GEN_347; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_396 = unuse_way == 2'h2 ? _GEN_155 : _GEN_348; // @[i_cache.scala 96:40]
  wire [511:0] _GEN_397 = unuse_way == 2'h2 ? _GEN_156 : _GEN_349; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_398 = unuse_way == 2'h2 ? _GEN_157 : _GEN_350; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_399 = unuse_way == 2'h2 ? _GEN_158 : _GEN_351; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_400 = unuse_way == 2'h2 ? _GEN_159 : _GEN_352; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_401 = unuse_way == 2'h2 ? _GEN_160 : _GEN_353; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_402 = unuse_way == 2'h2 ? _GEN_161 : _GEN_354; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_403 = unuse_way == 2'h2 ? _GEN_162 : _GEN_355; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_404 = unuse_way == 2'h2 ? _GEN_163 : _GEN_356; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_405 = unuse_way == 2'h2 ? _GEN_164 : _GEN_357; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_406 = unuse_way == 2'h2 ? _GEN_165 : _GEN_358; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_407 = unuse_way == 2'h2 ? _GEN_166 : _GEN_359; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_408 = unuse_way == 2'h2 ? _GEN_167 : _GEN_360; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_409 = unuse_way == 2'h2 ? _GEN_168 : _GEN_361; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_410 = unuse_way == 2'h2 ? _GEN_169 : _GEN_362; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_411 = unuse_way == 2'h2 ? _GEN_170 : _GEN_363; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_412 = unuse_way == 2'h2 ? _GEN_171 : _GEN_364; // @[i_cache.scala 96:40]
  wire [31:0] _GEN_413 = unuse_way == 2'h2 ? _GEN_172 : _GEN_365; // @[i_cache.scala 96:40]
  wire  _GEN_414 = unuse_way == 2'h2 ? _GEN_173 : _GEN_366; // @[i_cache.scala 96:40]
  wire  _GEN_415 = unuse_way == 2'h2 ? _GEN_174 : _GEN_367; // @[i_cache.scala 96:40]
  wire  _GEN_416 = unuse_way == 2'h2 ? _GEN_175 : _GEN_368; // @[i_cache.scala 96:40]
  wire  _GEN_417 = unuse_way == 2'h2 ? _GEN_176 : _GEN_369; // @[i_cache.scala 96:40]
  wire  _GEN_418 = unuse_way == 2'h2 ? _GEN_177 : _GEN_370; // @[i_cache.scala 96:40]
  wire  _GEN_419 = unuse_way == 2'h2 ? _GEN_178 : _GEN_371; // @[i_cache.scala 96:40]
  wire  _GEN_420 = unuse_way == 2'h2 ? _GEN_179 : _GEN_372; // @[i_cache.scala 96:40]
  wire  _GEN_421 = unuse_way == 2'h2 ? _GEN_180 : _GEN_373; // @[i_cache.scala 96:40]
  wire  _GEN_422 = unuse_way == 2'h2 ? _GEN_181 : _GEN_374; // @[i_cache.scala 96:40]
  wire  _GEN_423 = unuse_way == 2'h2 ? _GEN_182 : _GEN_375; // @[i_cache.scala 96:40]
  wire  _GEN_424 = unuse_way == 2'h2 ? _GEN_183 : _GEN_376; // @[i_cache.scala 96:40]
  wire  _GEN_425 = unuse_way == 2'h2 ? _GEN_184 : _GEN_377; // @[i_cache.scala 96:40]
  wire  _GEN_426 = unuse_way == 2'h2 ? _GEN_185 : _GEN_378; // @[i_cache.scala 96:40]
  wire  _GEN_427 = unuse_way == 2'h2 ? _GEN_186 : _GEN_379; // @[i_cache.scala 96:40]
  wire  _GEN_428 = unuse_way == 2'h2 ? _GEN_187 : _GEN_380; // @[i_cache.scala 96:40]
  wire  _GEN_429 = unuse_way == 2'h2 ? _GEN_188 : _GEN_381; // @[i_cache.scala 96:40]
  wire  _GEN_430 = unuse_way == 2'h2 ? 1'h0 : _T_14; // @[i_cache.scala 100:23 96:40]
  wire [511:0] _GEN_431 = unuse_way == 2'h2 ? ram_0_0 : _GEN_285; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_432 = unuse_way == 2'h2 ? ram_0_1 : _GEN_286; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_433 = unuse_way == 2'h2 ? ram_0_2 : _GEN_287; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_434 = unuse_way == 2'h2 ? ram_0_3 : _GEN_288; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_435 = unuse_way == 2'h2 ? ram_0_4 : _GEN_289; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_436 = unuse_way == 2'h2 ? ram_0_5 : _GEN_290; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_437 = unuse_way == 2'h2 ? ram_0_6 : _GEN_291; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_438 = unuse_way == 2'h2 ? ram_0_7 : _GEN_292; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_439 = unuse_way == 2'h2 ? ram_0_8 : _GEN_293; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_440 = unuse_way == 2'h2 ? ram_0_9 : _GEN_294; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_441 = unuse_way == 2'h2 ? ram_0_10 : _GEN_295; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_442 = unuse_way == 2'h2 ? ram_0_11 : _GEN_296; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_443 = unuse_way == 2'h2 ? ram_0_12 : _GEN_297; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_444 = unuse_way == 2'h2 ? ram_0_13 : _GEN_298; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_445 = unuse_way == 2'h2 ? ram_0_14 : _GEN_299; // @[i_cache.scala 17:24 96:40]
  wire [511:0] _GEN_446 = unuse_way == 2'h2 ? ram_0_15 : _GEN_300; // @[i_cache.scala 17:24 96:40]
  wire [31:0] _GEN_447 = unuse_way == 2'h2 ? tag_0_0 : _GEN_301; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_448 = unuse_way == 2'h2 ? tag_0_1 : _GEN_302; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_449 = unuse_way == 2'h2 ? tag_0_2 : _GEN_303; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_450 = unuse_way == 2'h2 ? tag_0_3 : _GEN_304; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_451 = unuse_way == 2'h2 ? tag_0_4 : _GEN_305; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_452 = unuse_way == 2'h2 ? tag_0_5 : _GEN_306; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_453 = unuse_way == 2'h2 ? tag_0_6 : _GEN_307; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_454 = unuse_way == 2'h2 ? tag_0_7 : _GEN_308; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_455 = unuse_way == 2'h2 ? tag_0_8 : _GEN_309; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_456 = unuse_way == 2'h2 ? tag_0_9 : _GEN_310; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_457 = unuse_way == 2'h2 ? tag_0_10 : _GEN_311; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_458 = unuse_way == 2'h2 ? tag_0_11 : _GEN_312; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_459 = unuse_way == 2'h2 ? tag_0_12 : _GEN_313; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_460 = unuse_way == 2'h2 ? tag_0_13 : _GEN_314; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_461 = unuse_way == 2'h2 ? tag_0_14 : _GEN_315; // @[i_cache.scala 19:24 96:40]
  wire [31:0] _GEN_462 = unuse_way == 2'h2 ? tag_0_15 : _GEN_316; // @[i_cache.scala 19:24 96:40]
  wire  _GEN_463 = unuse_way == 2'h2 ? valid_0_0 : _GEN_317; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_464 = unuse_way == 2'h2 ? valid_0_1 : _GEN_318; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_465 = unuse_way == 2'h2 ? valid_0_2 : _GEN_319; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_466 = unuse_way == 2'h2 ? valid_0_3 : _GEN_320; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_467 = unuse_way == 2'h2 ? valid_0_4 : _GEN_321; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_468 = unuse_way == 2'h2 ? valid_0_5 : _GEN_322; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_469 = unuse_way == 2'h2 ? valid_0_6 : _GEN_323; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_470 = unuse_way == 2'h2 ? valid_0_7 : _GEN_324; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_471 = unuse_way == 2'h2 ? valid_0_8 : _GEN_325; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_472 = unuse_way == 2'h2 ? valid_0_9 : _GEN_326; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_473 = unuse_way == 2'h2 ? valid_0_10 : _GEN_327; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_474 = unuse_way == 2'h2 ? valid_0_11 : _GEN_328; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_475 = unuse_way == 2'h2 ? valid_0_12 : _GEN_329; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_476 = unuse_way == 2'h2 ? valid_0_13 : _GEN_330; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_477 = unuse_way == 2'h2 ? valid_0_14 : _GEN_331; // @[i_cache.scala 21:26 96:40]
  wire  _GEN_478 = unuse_way == 2'h2 ? valid_0_15 : _GEN_332; // @[i_cache.scala 21:26 96:40]
  wire [511:0] _GEN_479 = unuse_way == 2'h1 ? _GEN_93 : _GEN_431; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_480 = unuse_way == 2'h1 ? _GEN_94 : _GEN_432; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_481 = unuse_way == 2'h1 ? _GEN_95 : _GEN_433; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_482 = unuse_way == 2'h1 ? _GEN_96 : _GEN_434; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_483 = unuse_way == 2'h1 ? _GEN_97 : _GEN_435; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_484 = unuse_way == 2'h1 ? _GEN_98 : _GEN_436; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_485 = unuse_way == 2'h1 ? _GEN_99 : _GEN_437; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_486 = unuse_way == 2'h1 ? _GEN_100 : _GEN_438; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_487 = unuse_way == 2'h1 ? _GEN_101 : _GEN_439; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_488 = unuse_way == 2'h1 ? _GEN_102 : _GEN_440; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_489 = unuse_way == 2'h1 ? _GEN_103 : _GEN_441; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_490 = unuse_way == 2'h1 ? _GEN_104 : _GEN_442; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_491 = unuse_way == 2'h1 ? _GEN_105 : _GEN_443; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_492 = unuse_way == 2'h1 ? _GEN_106 : _GEN_444; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_493 = unuse_way == 2'h1 ? _GEN_107 : _GEN_445; // @[i_cache.scala 91:34]
  wire [511:0] _GEN_494 = unuse_way == 2'h1 ? _GEN_108 : _GEN_446; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_495 = unuse_way == 2'h1 ? _GEN_109 : _GEN_447; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_496 = unuse_way == 2'h1 ? _GEN_110 : _GEN_448; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_497 = unuse_way == 2'h1 ? _GEN_111 : _GEN_449; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_498 = unuse_way == 2'h1 ? _GEN_112 : _GEN_450; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_499 = unuse_way == 2'h1 ? _GEN_113 : _GEN_451; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_500 = unuse_way == 2'h1 ? _GEN_114 : _GEN_452; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_501 = unuse_way == 2'h1 ? _GEN_115 : _GEN_453; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_502 = unuse_way == 2'h1 ? _GEN_116 : _GEN_454; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_503 = unuse_way == 2'h1 ? _GEN_117 : _GEN_455; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_504 = unuse_way == 2'h1 ? _GEN_118 : _GEN_456; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_505 = unuse_way == 2'h1 ? _GEN_119 : _GEN_457; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_506 = unuse_way == 2'h1 ? _GEN_120 : _GEN_458; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_507 = unuse_way == 2'h1 ? _GEN_121 : _GEN_459; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_508 = unuse_way == 2'h1 ? _GEN_122 : _GEN_460; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_509 = unuse_way == 2'h1 ? _GEN_123 : _GEN_461; // @[i_cache.scala 91:34]
  wire [31:0] _GEN_510 = unuse_way == 2'h1 ? _GEN_124 : _GEN_462; // @[i_cache.scala 91:34]
  wire  _GEN_511 = unuse_way == 2'h1 ? _GEN_125 : _GEN_463; // @[i_cache.scala 91:34]
  wire  _GEN_512 = unuse_way == 2'h1 ? _GEN_126 : _GEN_464; // @[i_cache.scala 91:34]
  wire  _GEN_513 = unuse_way == 2'h1 ? _GEN_127 : _GEN_465; // @[i_cache.scala 91:34]
  wire  _GEN_514 = unuse_way == 2'h1 ? _GEN_128 : _GEN_466; // @[i_cache.scala 91:34]
  wire  _GEN_515 = unuse_way == 2'h1 ? _GEN_129 : _GEN_467; // @[i_cache.scala 91:34]
  wire  _GEN_516 = unuse_way == 2'h1 ? _GEN_130 : _GEN_468; // @[i_cache.scala 91:34]
  wire  _GEN_517 = unuse_way == 2'h1 ? _GEN_131 : _GEN_469; // @[i_cache.scala 91:34]
  wire  _GEN_518 = unuse_way == 2'h1 ? _GEN_132 : _GEN_470; // @[i_cache.scala 91:34]
  wire  _GEN_519 = unuse_way == 2'h1 ? _GEN_133 : _GEN_471; // @[i_cache.scala 91:34]
  wire  _GEN_520 = unuse_way == 2'h1 ? _GEN_134 : _GEN_472; // @[i_cache.scala 91:34]
  wire  _GEN_521 = unuse_way == 2'h1 ? _GEN_135 : _GEN_473; // @[i_cache.scala 91:34]
  wire  _GEN_522 = unuse_way == 2'h1 ? _GEN_136 : _GEN_474; // @[i_cache.scala 91:34]
  wire  _GEN_523 = unuse_way == 2'h1 ? _GEN_137 : _GEN_475; // @[i_cache.scala 91:34]
  wire  _GEN_524 = unuse_way == 2'h1 ? _GEN_138 : _GEN_476; // @[i_cache.scala 91:34]
  wire  _GEN_525 = unuse_way == 2'h1 ? _GEN_139 : _GEN_477; // @[i_cache.scala 91:34]
  wire  _GEN_526 = unuse_way == 2'h1 ? _GEN_140 : _GEN_478; // @[i_cache.scala 91:34]
  wire  _GEN_527 = unuse_way == 2'h1 | _GEN_430; // @[i_cache.scala 91:34 95:23]
  wire [511:0] _GEN_528 = unuse_way == 2'h1 ? ram_1_0 : _GEN_382; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_529 = unuse_way == 2'h1 ? ram_1_1 : _GEN_383; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_530 = unuse_way == 2'h1 ? ram_1_2 : _GEN_384; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_531 = unuse_way == 2'h1 ? ram_1_3 : _GEN_385; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_532 = unuse_way == 2'h1 ? ram_1_4 : _GEN_386; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_533 = unuse_way == 2'h1 ? ram_1_5 : _GEN_387; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_534 = unuse_way == 2'h1 ? ram_1_6 : _GEN_388; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_535 = unuse_way == 2'h1 ? ram_1_7 : _GEN_389; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_536 = unuse_way == 2'h1 ? ram_1_8 : _GEN_390; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_537 = unuse_way == 2'h1 ? ram_1_9 : _GEN_391; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_538 = unuse_way == 2'h1 ? ram_1_10 : _GEN_392; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_539 = unuse_way == 2'h1 ? ram_1_11 : _GEN_393; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_540 = unuse_way == 2'h1 ? ram_1_12 : _GEN_394; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_541 = unuse_way == 2'h1 ? ram_1_13 : _GEN_395; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_542 = unuse_way == 2'h1 ? ram_1_14 : _GEN_396; // @[i_cache.scala 18:24 91:34]
  wire [511:0] _GEN_543 = unuse_way == 2'h1 ? ram_1_15 : _GEN_397; // @[i_cache.scala 18:24 91:34]
  wire [31:0] _GEN_544 = unuse_way == 2'h1 ? tag_1_0 : _GEN_398; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_545 = unuse_way == 2'h1 ? tag_1_1 : _GEN_399; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_546 = unuse_way == 2'h1 ? tag_1_2 : _GEN_400; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_547 = unuse_way == 2'h1 ? tag_1_3 : _GEN_401; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_548 = unuse_way == 2'h1 ? tag_1_4 : _GEN_402; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_549 = unuse_way == 2'h1 ? tag_1_5 : _GEN_403; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_550 = unuse_way == 2'h1 ? tag_1_6 : _GEN_404; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_551 = unuse_way == 2'h1 ? tag_1_7 : _GEN_405; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_552 = unuse_way == 2'h1 ? tag_1_8 : _GEN_406; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_553 = unuse_way == 2'h1 ? tag_1_9 : _GEN_407; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_554 = unuse_way == 2'h1 ? tag_1_10 : _GEN_408; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_555 = unuse_way == 2'h1 ? tag_1_11 : _GEN_409; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_556 = unuse_way == 2'h1 ? tag_1_12 : _GEN_410; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_557 = unuse_way == 2'h1 ? tag_1_13 : _GEN_411; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_558 = unuse_way == 2'h1 ? tag_1_14 : _GEN_412; // @[i_cache.scala 20:24 91:34]
  wire [31:0] _GEN_559 = unuse_way == 2'h1 ? tag_1_15 : _GEN_413; // @[i_cache.scala 20:24 91:34]
  wire  _GEN_560 = unuse_way == 2'h1 ? valid_1_0 : _GEN_414; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_561 = unuse_way == 2'h1 ? valid_1_1 : _GEN_415; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_562 = unuse_way == 2'h1 ? valid_1_2 : _GEN_416; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_563 = unuse_way == 2'h1 ? valid_1_3 : _GEN_417; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_564 = unuse_way == 2'h1 ? valid_1_4 : _GEN_418; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_565 = unuse_way == 2'h1 ? valid_1_5 : _GEN_419; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_566 = unuse_way == 2'h1 ? valid_1_6 : _GEN_420; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_567 = unuse_way == 2'h1 ? valid_1_7 : _GEN_421; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_568 = unuse_way == 2'h1 ? valid_1_8 : _GEN_422; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_569 = unuse_way == 2'h1 ? valid_1_9 : _GEN_423; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_570 = unuse_way == 2'h1 ? valid_1_10 : _GEN_424; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_571 = unuse_way == 2'h1 ? valid_1_11 : _GEN_425; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_572 = unuse_way == 2'h1 ? valid_1_12 : _GEN_426; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_573 = unuse_way == 2'h1 ? valid_1_13 : _GEN_427; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_574 = unuse_way == 2'h1 ? valid_1_14 : _GEN_428; // @[i_cache.scala 22:26 91:34]
  wire  _GEN_575 = unuse_way == 2'h1 ? valid_1_15 : _GEN_429; // @[i_cache.scala 22:26 91:34]
  wire [2:0] _GEN_576 = 3'h4 == state ? 3'h1 : state; // @[i_cache.scala 57:18 116:19 55:24]
  wire [2:0] _GEN_577 = 3'h3 == state ? 3'h4 : _GEN_576; // @[i_cache.scala 57:18 90:19]
  wire [511:0] _GEN_578 = 3'h3 == state ? _GEN_479 : ram_0_0; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_579 = 3'h3 == state ? _GEN_480 : ram_0_1; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_580 = 3'h3 == state ? _GEN_481 : ram_0_2; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_581 = 3'h3 == state ? _GEN_482 : ram_0_3; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_582 = 3'h3 == state ? _GEN_483 : ram_0_4; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_583 = 3'h3 == state ? _GEN_484 : ram_0_5; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_584 = 3'h3 == state ? _GEN_485 : ram_0_6; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_585 = 3'h3 == state ? _GEN_486 : ram_0_7; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_586 = 3'h3 == state ? _GEN_487 : ram_0_8; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_587 = 3'h3 == state ? _GEN_488 : ram_0_9; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_588 = 3'h3 == state ? _GEN_489 : ram_0_10; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_589 = 3'h3 == state ? _GEN_490 : ram_0_11; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_590 = 3'h3 == state ? _GEN_491 : ram_0_12; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_591 = 3'h3 == state ? _GEN_492 : ram_0_13; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_592 = 3'h3 == state ? _GEN_493 : ram_0_14; // @[i_cache.scala 57:18 17:24]
  wire [511:0] _GEN_593 = 3'h3 == state ? _GEN_494 : ram_0_15; // @[i_cache.scala 57:18 17:24]
  wire [31:0] _GEN_594 = 3'h3 == state ? _GEN_495 : tag_0_0; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_595 = 3'h3 == state ? _GEN_496 : tag_0_1; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_596 = 3'h3 == state ? _GEN_497 : tag_0_2; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_597 = 3'h3 == state ? _GEN_498 : tag_0_3; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_598 = 3'h3 == state ? _GEN_499 : tag_0_4; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_599 = 3'h3 == state ? _GEN_500 : tag_0_5; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_600 = 3'h3 == state ? _GEN_501 : tag_0_6; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_601 = 3'h3 == state ? _GEN_502 : tag_0_7; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_602 = 3'h3 == state ? _GEN_503 : tag_0_8; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_603 = 3'h3 == state ? _GEN_504 : tag_0_9; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_604 = 3'h3 == state ? _GEN_505 : tag_0_10; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_605 = 3'h3 == state ? _GEN_506 : tag_0_11; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_606 = 3'h3 == state ? _GEN_507 : tag_0_12; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_607 = 3'h3 == state ? _GEN_508 : tag_0_13; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_608 = 3'h3 == state ? _GEN_509 : tag_0_14; // @[i_cache.scala 57:18 19:24]
  wire [31:0] _GEN_609 = 3'h3 == state ? _GEN_510 : tag_0_15; // @[i_cache.scala 57:18 19:24]
  wire  _GEN_610 = 3'h3 == state ? _GEN_511 : valid_0_0; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_611 = 3'h3 == state ? _GEN_512 : valid_0_1; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_612 = 3'h3 == state ? _GEN_513 : valid_0_2; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_613 = 3'h3 == state ? _GEN_514 : valid_0_3; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_614 = 3'h3 == state ? _GEN_515 : valid_0_4; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_615 = 3'h3 == state ? _GEN_516 : valid_0_5; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_616 = 3'h3 == state ? _GEN_517 : valid_0_6; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_617 = 3'h3 == state ? _GEN_518 : valid_0_7; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_618 = 3'h3 == state ? _GEN_519 : valid_0_8; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_619 = 3'h3 == state ? _GEN_520 : valid_0_9; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_620 = 3'h3 == state ? _GEN_521 : valid_0_10; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_621 = 3'h3 == state ? _GEN_522 : valid_0_11; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_622 = 3'h3 == state ? _GEN_523 : valid_0_12; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_623 = 3'h3 == state ? _GEN_524 : valid_0_13; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_624 = 3'h3 == state ? _GEN_525 : valid_0_14; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_625 = 3'h3 == state ? _GEN_526 : valid_0_15; // @[i_cache.scala 57:18 21:26]
  wire  _GEN_626 = 3'h3 == state ? _GEN_527 : quene; // @[i_cache.scala 57:18 29:24]
  wire [511:0] _GEN_627 = 3'h3 == state ? _GEN_528 : ram_1_0; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_628 = 3'h3 == state ? _GEN_529 : ram_1_1; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_629 = 3'h3 == state ? _GEN_530 : ram_1_2; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_630 = 3'h3 == state ? _GEN_531 : ram_1_3; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_631 = 3'h3 == state ? _GEN_532 : ram_1_4; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_632 = 3'h3 == state ? _GEN_533 : ram_1_5; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_633 = 3'h3 == state ? _GEN_534 : ram_1_6; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_634 = 3'h3 == state ? _GEN_535 : ram_1_7; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_635 = 3'h3 == state ? _GEN_536 : ram_1_8; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_636 = 3'h3 == state ? _GEN_537 : ram_1_9; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_637 = 3'h3 == state ? _GEN_538 : ram_1_10; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_638 = 3'h3 == state ? _GEN_539 : ram_1_11; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_639 = 3'h3 == state ? _GEN_540 : ram_1_12; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_640 = 3'h3 == state ? _GEN_541 : ram_1_13; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_641 = 3'h3 == state ? _GEN_542 : ram_1_14; // @[i_cache.scala 57:18 18:24]
  wire [511:0] _GEN_642 = 3'h3 == state ? _GEN_543 : ram_1_15; // @[i_cache.scala 57:18 18:24]
  wire [31:0] _GEN_643 = 3'h3 == state ? _GEN_544 : tag_1_0; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_644 = 3'h3 == state ? _GEN_545 : tag_1_1; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_645 = 3'h3 == state ? _GEN_546 : tag_1_2; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_646 = 3'h3 == state ? _GEN_547 : tag_1_3; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_647 = 3'h3 == state ? _GEN_548 : tag_1_4; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_648 = 3'h3 == state ? _GEN_549 : tag_1_5; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_649 = 3'h3 == state ? _GEN_550 : tag_1_6; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_650 = 3'h3 == state ? _GEN_551 : tag_1_7; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_651 = 3'h3 == state ? _GEN_552 : tag_1_8; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_652 = 3'h3 == state ? _GEN_553 : tag_1_9; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_653 = 3'h3 == state ? _GEN_554 : tag_1_10; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_654 = 3'h3 == state ? _GEN_555 : tag_1_11; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_655 = 3'h3 == state ? _GEN_556 : tag_1_12; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_656 = 3'h3 == state ? _GEN_557 : tag_1_13; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_657 = 3'h3 == state ? _GEN_558 : tag_1_14; // @[i_cache.scala 57:18 20:24]
  wire [31:0] _GEN_658 = 3'h3 == state ? _GEN_559 : tag_1_15; // @[i_cache.scala 57:18 20:24]
  wire  _GEN_659 = 3'h3 == state ? _GEN_560 : valid_1_0; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_660 = 3'h3 == state ? _GEN_561 : valid_1_1; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_661 = 3'h3 == state ? _GEN_562 : valid_1_2; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_662 = 3'h3 == state ? _GEN_563 : valid_1_3; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_663 = 3'h3 == state ? _GEN_564 : valid_1_4; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_664 = 3'h3 == state ? _GEN_565 : valid_1_5; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_665 = 3'h3 == state ? _GEN_566 : valid_1_6; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_666 = 3'h3 == state ? _GEN_567 : valid_1_7; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_667 = 3'h3 == state ? _GEN_568 : valid_1_8; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_668 = 3'h3 == state ? _GEN_569 : valid_1_9; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_669 = 3'h3 == state ? _GEN_570 : valid_1_10; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_670 = 3'h3 == state ? _GEN_571 : valid_1_11; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_671 = 3'h3 == state ? _GEN_572 : valid_1_12; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_672 = 3'h3 == state ? _GEN_573 : valid_1_13; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_673 = 3'h3 == state ? _GEN_574 : valid_1_14; // @[i_cache.scala 57:18 22:26]
  wire  _GEN_674 = 3'h3 == state ? _GEN_575 : valid_1_15; // @[i_cache.scala 57:18 22:26]
  wire [511:0] _GEN_997 = 4'h1 == index ? ram_0_1 : ram_0_0; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_998 = 4'h2 == index ? ram_0_2 : _GEN_997; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_999 = 4'h3 == index ? ram_0_3 : _GEN_998; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1000 = 4'h4 == index ? ram_0_4 : _GEN_999; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1001 = 4'h5 == index ? ram_0_5 : _GEN_1000; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1002 = 4'h6 == index ? ram_0_6 : _GEN_1001; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1003 = 4'h7 == index ? ram_0_7 : _GEN_1002; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1004 = 4'h8 == index ? ram_0_8 : _GEN_1003; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1005 = 4'h9 == index ? ram_0_9 : _GEN_1004; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1006 = 4'ha == index ? ram_0_10 : _GEN_1005; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1007 = 4'hb == index ? ram_0_11 : _GEN_1006; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1008 = 4'hc == index ? ram_0_12 : _GEN_1007; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1009 = 4'hd == index ? ram_0_13 : _GEN_1008; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1010 = 4'he == index ? ram_0_14 : _GEN_1009; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _GEN_1011 = 4'hf == index ? ram_0_15 : _GEN_1010; // @[i_cache.scala 161:{49,49}]
  wire [511:0] _io_to_ifu_rdata_T = _GEN_1011 >> shift_bit; // @[i_cache.scala 161:49]
  wire [511:0] _GEN_1013 = 4'h1 == index ? ram_1_1 : ram_1_0; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1014 = 4'h2 == index ? ram_1_2 : _GEN_1013; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1015 = 4'h3 == index ? ram_1_3 : _GEN_1014; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1016 = 4'h4 == index ? ram_1_4 : _GEN_1015; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1017 = 4'h5 == index ? ram_1_5 : _GEN_1016; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1018 = 4'h6 == index ? ram_1_6 : _GEN_1017; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1019 = 4'h7 == index ? ram_1_7 : _GEN_1018; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1020 = 4'h8 == index ? ram_1_8 : _GEN_1019; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1021 = 4'h9 == index ? ram_1_9 : _GEN_1020; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1022 = 4'ha == index ? ram_1_10 : _GEN_1021; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1023 = 4'hb == index ? ram_1_11 : _GEN_1022; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1024 = 4'hc == index ? ram_1_12 : _GEN_1023; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1025 = 4'hd == index ? ram_1_13 : _GEN_1024; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1026 = 4'he == index ? ram_1_14 : _GEN_1025; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _GEN_1027 = 4'hf == index ? ram_1_15 : _GEN_1026; // @[i_cache.scala 170:{49,49}]
  wire [511:0] _io_to_ifu_rdata_T_1 = _GEN_1027 >> shift_bit; // @[i_cache.scala 170:49]
  wire [511:0] _GEN_1028 = way1_hit ? _io_to_ifu_rdata_T_1 : 512'h0; // @[i_cache.scala 169:33 170:33 178:33]
  wire [511:0] _GEN_1032 = way0_hit ? _io_to_ifu_rdata_T : _GEN_1028; // @[i_cache.scala 160:23 161:33]
  wire  _GEN_1034 = way0_hit | way1_hit; // @[i_cache.scala 160:23 163:34]
  wire  _T_17 = state == 3'h2; // @[i_cache.scala 186:21]
  wire [63:0] _GEN_1110 = {{32'd0}, io_from_ifu_araddr}; // @[i_cache.scala 195:49]
  wire [63:0] _io_to_axi_araddr_T = _GEN_1110 & 64'hffffffffffffffc0; // @[i_cache.scala 195:49]
  wire [63:0] _GEN_1038 = state == 3'h2 ? _io_to_axi_araddr_T : {{32'd0}, io_from_ifu_araddr}; // @[i_cache.scala 186:29 195:26 235:26]
  wire [2:0] _GEN_1039 = state == 3'h2 ? 3'h7 : 3'h0; // @[i_cache.scala 186:29 196:25 237:25]
  wire [63:0] _GEN_1043 = state == 3'h1 ? {{32'd0}, io_from_ifu_araddr} : _GEN_1038; // @[i_cache.scala 143:25 145:26]
  wire [2:0] _GEN_1044 = state == 3'h1 ? 3'h0 : _GEN_1039; // @[i_cache.scala 143:25 146:25]
  wire [511:0] _GEN_1048 = state == 3'h1 ? _GEN_1032 : 512'h0; // @[i_cache.scala 143:25]
  assign io_to_ifu_rdata = _GEN_1048[63:0];
  assign io_to_ifu_rlast = state == 3'h1 & _GEN_1034; // @[i_cache.scala 143:25]
  assign io_to_ifu_rvalid = state == 3'h1 & _GEN_1034; // @[i_cache.scala 143:25]
  assign io_to_axi_araddr = _GEN_1043[31:0];
  assign io_to_axi_arlen = {{5'd0}, _GEN_1044};
  assign io_to_axi_arvalid = state == 3'h1 ? 1'h0 : _T_17; // @[i_cache.scala 143:25 144:27]
  assign io_to_axi_rready = state == 3'h1 ? 1'h0 : io_from_ifu_rready; // @[i_cache.scala 143:25 149:26]
  always @(posedge clock) begin
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_0 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_0 <= _GEN_578;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_1 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_1 <= _GEN_579;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_2 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_2 <= _GEN_580;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_3 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_3 <= _GEN_581;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_4 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_4 <= _GEN_582;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_5 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_5 <= _GEN_583;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_6 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_6 <= _GEN_584;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_7 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_7 <= _GEN_585;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_8 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_8 <= _GEN_586;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_9 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_9 <= _GEN_587;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_10 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_10 <= _GEN_588;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_11 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_11 <= _GEN_589;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_12 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_12 <= _GEN_590;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_13 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_13 <= _GEN_591;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_14 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_14 <= _GEN_592;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 17:24]
      ram_0_15 <= 512'h0; // @[i_cache.scala 17:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_0_15 <= _GEN_593;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_0 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_0 <= _GEN_627;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_1 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_1 <= _GEN_628;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_2 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_2 <= _GEN_629;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_3 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_3 <= _GEN_630;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_4 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_4 <= _GEN_631;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_5 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_5 <= _GEN_632;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_6 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_6 <= _GEN_633;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_7 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_7 <= _GEN_634;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_8 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_8 <= _GEN_635;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_9 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_9 <= _GEN_636;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_10 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_10 <= _GEN_637;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_11 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_11 <= _GEN_638;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_12 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_12 <= _GEN_639;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_13 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_13 <= _GEN_640;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_14 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_14 <= _GEN_641;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 18:24]
      ram_1_15 <= 512'h0; // @[i_cache.scala 18:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          ram_1_15 <= _GEN_642;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_0 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_0 <= _GEN_594;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_1 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_1 <= _GEN_595;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_2 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_2 <= _GEN_596;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_3 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_3 <= _GEN_597;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_4 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_4 <= _GEN_598;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_5 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_5 <= _GEN_599;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_6 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_6 <= _GEN_600;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_7 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_7 <= _GEN_601;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_8 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_8 <= _GEN_602;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_9 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_9 <= _GEN_603;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_10 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_10 <= _GEN_604;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_11 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_11 <= _GEN_605;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_12 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_12 <= _GEN_606;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_13 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_13 <= _GEN_607;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_14 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_14 <= _GEN_608;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 19:24]
      tag_0_15 <= 32'h0; // @[i_cache.scala 19:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_0_15 <= _GEN_609;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_0 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_0 <= _GEN_643;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_1 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_1 <= _GEN_644;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_2 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_2 <= _GEN_645;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_3 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_3 <= _GEN_646;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_4 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_4 <= _GEN_647;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_5 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_5 <= _GEN_648;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_6 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_6 <= _GEN_649;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_7 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_7 <= _GEN_650;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_8 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_8 <= _GEN_651;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_9 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_9 <= _GEN_652;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_10 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_10 <= _GEN_653;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_11 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_11 <= _GEN_654;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_12 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_12 <= _GEN_655;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_13 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_13 <= _GEN_656;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_14 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_14 <= _GEN_657;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 20:24]
      tag_1_15 <= 32'h0; // @[i_cache.scala 20:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          tag_1_15 <= _GEN_658;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_0 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_0 <= _GEN_610;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_1 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_1 <= _GEN_611;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_2 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_2 <= _GEN_612;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_3 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_3 <= _GEN_613;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_4 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_4 <= _GEN_614;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_5 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_5 <= _GEN_615;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_6 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_6 <= _GEN_616;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_7 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_7 <= _GEN_617;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_8 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_8 <= _GEN_618;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_9 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_9 <= _GEN_619;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_10 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_10 <= _GEN_620;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_11 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_11 <= _GEN_621;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_12 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_12 <= _GEN_622;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_13 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_13 <= _GEN_623;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_14 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_14 <= _GEN_624;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 21:26]
      valid_0_15 <= 1'h0; // @[i_cache.scala 21:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_0_15 <= _GEN_625;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_0 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_0 <= _GEN_659;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_1 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_1 <= _GEN_660;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_2 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_2 <= _GEN_661;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_3 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_3 <= _GEN_662;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_4 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_4 <= _GEN_663;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_5 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_5 <= _GEN_664;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_6 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_6 <= _GEN_665;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_7 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_7 <= _GEN_666;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_8 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_8 <= _GEN_667;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_9 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_9 <= _GEN_668;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_10 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_10 <= _GEN_669;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_11 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_11 <= _GEN_670;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_12 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_12 <= _GEN_671;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_13 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_13 <= _GEN_672;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_14 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_14 <= _GEN_673;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 22:26]
      valid_1_15 <= 1'h0; // @[i_cache.scala 22:26]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          valid_1_15 <= _GEN_674;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 23:27]
      way0_hit <= 1'h0; // @[i_cache.scala 23:27]
    end else begin
      way0_hit <= _T_2;
    end
    if (reset) begin // @[i_cache.scala 24:27]
      way1_hit <= 1'h0; // @[i_cache.scala 24:27]
    end else begin
      way1_hit <= _T_5;
    end
    if (reset) begin // @[i_cache.scala 26:28]
      unuse_way <= 2'h0; // @[i_cache.scala 26:28]
    end else if (~_GEN_31) begin // @[i_cache.scala 47:31]
      unuse_way <= 2'h1; // @[i_cache.scala 48:19]
    end else if (~_GEN_64) begin // @[i_cache.scala 49:37]
      unuse_way <= 2'h2; // @[i_cache.scala 50:19]
    end else begin
      unuse_way <= 2'h0; // @[i_cache.scala 52:19]
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_0 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_0 <= _GEN_83;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_1 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_1 <= _GEN_84;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_2 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_2 <= _GEN_85;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_3 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_3 <= _GEN_86;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_4 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_4 <= _GEN_87;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_5 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_5 <= _GEN_88;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_6 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_6 <= _GEN_89;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 27:31]
      receive_data_7 <= 64'h0; // @[i_cache.scala 27:31]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (3'h2 == state) begin // @[i_cache.scala 57:18]
          receive_data_7 <= _GEN_90;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 28:30]
      receive_num <= 3'h0; // @[i_cache.scala 28:30]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (3'h1 == state) begin // @[i_cache.scala 57:18]
        if (!(way0_hit)) begin // @[i_cache.scala 65:27]
          receive_num <= _GEN_71;
        end
      end else if (3'h2 == state) begin // @[i_cache.scala 57:18]
        receive_num <= _GEN_91;
      end
    end
    if (reset) begin // @[i_cache.scala 29:24]
      quene <= 1'h0; // @[i_cache.scala 29:24]
    end else if (!(3'h0 == state)) begin // @[i_cache.scala 57:18]
      if (!(3'h1 == state)) begin // @[i_cache.scala 57:18]
        if (!(3'h2 == state)) begin // @[i_cache.scala 57:18]
          quene <= _GEN_626;
        end
      end
    end
    if (reset) begin // @[i_cache.scala 55:24]
      state <= 3'h0; // @[i_cache.scala 55:24]
    end else if (3'h0 == state) begin // @[i_cache.scala 57:18]
      if (io_from_ifu_arvalid) begin // @[i_cache.scala 59:38]
        state <= 3'h1; // @[i_cache.scala 60:23]
      end
    end else if (3'h1 == state) begin // @[i_cache.scala 57:18]
      if (way0_hit) begin // @[i_cache.scala 65:27]
        state <= _GEN_69;
      end else begin
        state <= _GEN_70;
      end
    end else if (3'h2 == state) begin // @[i_cache.scala 57:18]
      state <= _GEN_92;
    end else begin
      state <= _GEN_577;
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
  wire  Register_clock; // @[top.scala 15:25]
  wire  IFU_clock; // @[top.scala 16:21]
  wire  IFU_reset; // @[top.scala 16:21]
  wire [63:0] IFU_io_to_ds_pc; // @[top.scala 16:21]
  wire [31:0] IFU_io_inst; // @[top.scala 16:21]
  wire [63:0] IFU_io_axi_in_rdata; // @[top.scala 16:21]
  wire  IFU_io_axi_in_rlast; // @[top.scala 16:21]
  wire  IFU_io_axi_in_rvalid; // @[top.scala 16:21]
  wire [31:0] IFU_io_axi_out_araddr; // @[top.scala 16:21]
  wire  IFU_io_axi_out_arvalid; // @[top.scala 16:21]
  wire  IFU_io_axi_out_rready; // @[top.scala 16:21]
  wire [63:0] IDU_io_pc; // @[top.scala 17:21]
  wire  arbiter_clock; // @[top.scala 21:25]
  wire  arbiter_reset; // @[top.scala 21:25]
  wire [31:0] arbiter_io_ifu_axi_in_araddr; // @[top.scala 21:25]
  wire [7:0] arbiter_io_ifu_axi_in_arlen; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_in_arvalid; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_in_rready; // @[top.scala 21:25]
  wire [63:0] arbiter_io_ifu_axi_out_rdata; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_out_rlast; // @[top.scala 21:25]
  wire  arbiter_io_ifu_axi_out_rvalid; // @[top.scala 21:25]
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
  wire  d_cache_clock; // @[top.scala 23:25]
  wire  d_cache_reset; // @[top.scala 23:25]
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
  wire [31:0] dpi_flag; // @[top.scala 104:21]
  wire [31:0] dpi_ecall_flag; // @[top.scala 104:21]
  wire [63:0] dpi_pc; // @[top.scala 104:21]
  Register Register ( // @[top.scala 15:25]
    .clock(Register_clock)
  );
  IFU IFU ( // @[top.scala 16:21]
    .clock(IFU_clock),
    .reset(IFU_reset),
    .io_to_ds_pc(IFU_io_to_ds_pc),
    .io_inst(IFU_io_inst),
    .io_axi_in_rdata(IFU_io_axi_in_rdata),
    .io_axi_in_rlast(IFU_io_axi_in_rlast),
    .io_axi_in_rvalid(IFU_io_axi_in_rvalid),
    .io_axi_out_araddr(IFU_io_axi_out_araddr),
    .io_axi_out_arvalid(IFU_io_axi_out_arvalid),
    .io_axi_out_rready(IFU_io_axi_out_rready)
  );
  IDU IDU ( // @[top.scala 17:21]
    .io_pc(IDU_io_pc)
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
    .io_from_axi_rvalid(i_cache_io_from_axi_rvalid)
  );
  D_CACHE d_cache ( // @[top.scala 23:25]
    .clock(d_cache_clock),
    .reset(d_cache_reset),
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
  DPI dpi ( // @[top.scala 104:21]
    .flag(dpi_flag),
    .ecall_flag(dpi_ecall_flag),
    .pc(dpi_pc)
  );
  assign io_inst = IFU_io_inst; // @[top.scala 100:13]
  assign io_pc = IFU_io_to_ds_pc; // @[top.scala 98:11]
  assign io_step = 1'h0; // @[top.scala 103:13]
  assign Register_clock = clock;
  assign IFU_clock = clock;
  assign IFU_reset = reset;
  assign IFU_io_axi_in_rdata = i_cache_io_to_ifu_rdata; // @[top.scala 29:16]
  assign IFU_io_axi_in_rlast = i_cache_io_to_ifu_rlast; // @[top.scala 29:16]
  assign IFU_io_axi_in_rvalid = i_cache_io_to_ifu_rvalid; // @[top.scala 29:16]
  assign IDU_io_pc = IFU_io_to_ds_pc; // @[top.scala 47:12]
  assign arbiter_clock = clock;
  assign arbiter_reset = reset;
  assign arbiter_io_ifu_axi_in_araddr = i_cache_io_to_axi_araddr; // @[top.scala 27:27]
  assign arbiter_io_ifu_axi_in_arlen = i_cache_io_to_axi_arlen; // @[top.scala 27:27]
  assign arbiter_io_ifu_axi_in_arvalid = i_cache_io_to_axi_arvalid; // @[top.scala 27:27]
  assign arbiter_io_ifu_axi_in_rready = i_cache_io_to_axi_rready; // @[top.scala 27:27]
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
  assign d_cache_clock = clock;
  assign d_cache_reset = reset;
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
  assign dpi_flag = 32'h0; // @[top.scala 105:17]
  assign dpi_ecall_flag = 32'h0; // @[top.scala 106:23]
  assign dpi_pc = IDU_io_pc; // @[top.scala 107:96]
endmodule
