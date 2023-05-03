module AXI(
  input         clock,
  input         reset,
  input  [31:0] io_axi_in_araddr,
  input         io_axi_in_arvalid,
  input         io_axi_in_rready,
  input  [31:0] io_axi_in_awaddr,
  input         io_axi_in_awvalid,
  input  [31:0] io_axi_in_wdata,
  input  [3:0]  io_axi_in_wstrb,
  input         io_axi_in_wvalid,
  input         io_axi_in_bready,
  output [63:0] io_axi_out_rdata,
  output        io_axi_out_rvalid,
  output        io_axi_out_bvalid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] Mem_modle_Raddr; // @[AXI.scala 26:27]
  wire [63:0] Mem_modle_Rdata; // @[AXI.scala 26:27]
  wire [63:0] Mem_modle_Waddr; // @[AXI.scala 26:27]
  wire [63:0] Mem_modle_Wdata; // @[AXI.scala 26:27]
  wire [7:0] Mem_modle_Wmask; // @[AXI.scala 26:27]
  wire  Mem_modle_Write_en; // @[AXI.scala 26:27]
  wire  Mem_modle_Read_en; // @[AXI.scala 26:27]
  reg  axi_wready; // @[AXI.scala 14:29]
  reg  axi_bvalid; // @[AXI.scala 17:29]
  reg  axi_arready; // @[AXI.scala 19:30]
  reg  axi_rvalid; // @[AXI.scala 21:29]
  reg [2:0] state; // @[AXI.scala 24:24]
  wire  _GEN_1 = io_axi_in_arvalid ? 1'h0 : axi_arready; // @[AXI.scala 47:42 49:29 19:30]
  wire  _GEN_2 = io_axi_in_arvalid | axi_rvalid; // @[AXI.scala 47:42 50:28 21:29]
  wire  _GEN_5 = io_axi_in_awvalid & io_axi_in_wvalid ? 1'h0 : axi_wready; // @[AXI.scala 37:56 40:28 14:29]
  wire  _GEN_6 = io_axi_in_awvalid & io_axi_in_wvalid | axi_bvalid; // @[AXI.scala 37:56 41:28 17:29]
  wire  _GEN_7 = io_axi_in_awvalid & io_axi_in_wvalid ? axi_arready : _GEN_1; // @[AXI.scala 19:30 37:56]
  wire  _GEN_12 = io_axi_in_bready | axi_wready; // @[AXI.scala 54:35 58:28 14:29]
  wire [2:0] _GEN_13 = io_axi_in_rready ? 3'h0 : state; // @[AXI.scala 62:35 63:23 24:24]
  wire  _GEN_14 = io_axi_in_rready | axi_arready; // @[AXI.scala 62:35 64:29 19:30]
  wire  _GEN_15 = io_axi_in_rready ? 1'h0 : axi_rvalid; // @[AXI.scala 62:35 65:28 21:29]
  wire  _GEN_17 = 3'h4 == state ? _GEN_14 : axi_arready; // @[AXI.scala 35:18 19:30]
  wire  _GEN_22 = 3'h3 == state ? _GEN_12 : axi_wready; // @[AXI.scala 35:18 14:29]
  wire  _GEN_23 = 3'h3 == state ? axi_arready : _GEN_17; // @[AXI.scala 35:18 19:30]
  wire  _GEN_27 = 3'h0 == state ? _GEN_5 : _GEN_22; // @[AXI.scala 35:18]
  wire  _GEN_29 = 3'h0 == state ? _GEN_7 : _GEN_23; // @[AXI.scala 35:18]
  MEM Mem_modle ( // @[AXI.scala 26:27]
    .Raddr(Mem_modle_Raddr),
    .Rdata(Mem_modle_Rdata),
    .Waddr(Mem_modle_Waddr),
    .Wdata(Mem_modle_Wdata),
    .Wmask(Mem_modle_Wmask),
    .Write_en(Mem_modle_Write_en),
    .Read_en(Mem_modle_Read_en)
  );
  assign io_axi_out_rdata = Mem_modle_Rdata; // @[AXI.scala 70:22]
  assign io_axi_out_rvalid = axi_rvalid; // @[AXI.scala 71:23]
  assign io_axi_out_bvalid = axi_bvalid; // @[AXI.scala 74:23]
  assign Mem_modle_Raddr = {32'h0,io_axi_in_araddr}; // @[Cat.scala 31:58]
  assign Mem_modle_Waddr = {{32'd0}, io_axi_in_awaddr}; // @[AXI.scala 28:24]
  assign Mem_modle_Wdata = {{32'd0}, io_axi_in_wdata}; // @[AXI.scala 29:24]
  assign Mem_modle_Wmask = {{4'd0}, io_axi_in_wstrb}; // @[AXI.scala 30:24]
  assign Mem_modle_Write_en = axi_wready & io_axi_in_wvalid; // @[AXI.scala 31:48]
  assign Mem_modle_Read_en = axi_arready & io_axi_in_arvalid; // @[AXI.scala 32:48]
  always @(posedge clock) begin
    axi_wready <= reset | _GEN_27; // @[AXI.scala 14:{29,29}]
    if (reset) begin // @[AXI.scala 17:29]
      axi_bvalid <= 1'h0; // @[AXI.scala 17:29]
    end else if (3'h0 == state) begin // @[AXI.scala 35:18]
      axi_bvalid <= _GEN_6;
    end else if (3'h3 == state) begin // @[AXI.scala 35:18]
      if (io_axi_in_bready) begin // @[AXI.scala 54:35]
        axi_bvalid <= 1'h0; // @[AXI.scala 56:28]
      end
    end
    axi_arready <= reset | _GEN_29; // @[AXI.scala 19:{30,30}]
    if (reset) begin // @[AXI.scala 21:29]
      axi_rvalid <= 1'h0; // @[AXI.scala 21:29]
    end else if (3'h0 == state) begin // @[AXI.scala 35:18]
      if (!(io_axi_in_awvalid & io_axi_in_wvalid)) begin // @[AXI.scala 37:56]
        axi_rvalid <= _GEN_2;
      end
    end else if (!(3'h3 == state)) begin // @[AXI.scala 35:18]
      if (3'h4 == state) begin // @[AXI.scala 35:18]
        axi_rvalid <= _GEN_15;
      end
    end
    if (reset) begin // @[AXI.scala 24:24]
      state <= 3'h0; // @[AXI.scala 24:24]
    end else if (3'h0 == state) begin // @[AXI.scala 35:18]
      if (io_axi_in_awvalid & io_axi_in_wvalid) begin // @[AXI.scala 37:56]
        state <= 3'h3; // @[AXI.scala 38:23]
      end else if (io_axi_in_arvalid) begin // @[AXI.scala 47:42]
        state <= 3'h4; // @[AXI.scala 48:23]
      end
    end else if (3'h3 == state) begin // @[AXI.scala 35:18]
      if (io_axi_in_bready) begin // @[AXI.scala 54:35]
        state <= 3'h0; // @[AXI.scala 55:23]
      end
    end else if (3'h4 == state) begin // @[AXI.scala 35:18]
      state <= _GEN_13;
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
  axi_arready = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  axi_rvalid = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  state = _RAND_4[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IFU_AXI(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_pc_valid,
  output        io_inst_valid,
  input         io_inst_ready,
  output [31:0] io_inst
);
  wire  axi_clock; // @[IFU_AXI.scala 16:21]
  wire  axi_reset; // @[IFU_AXI.scala 16:21]
  wire [31:0] axi_io_axi_in_araddr; // @[IFU_AXI.scala 16:21]
  wire  axi_io_axi_in_arvalid; // @[IFU_AXI.scala 16:21]
  wire  axi_io_axi_in_rready; // @[IFU_AXI.scala 16:21]
  wire [31:0] axi_io_axi_in_awaddr; // @[IFU_AXI.scala 16:21]
  wire  axi_io_axi_in_awvalid; // @[IFU_AXI.scala 16:21]
  wire [31:0] axi_io_axi_in_wdata; // @[IFU_AXI.scala 16:21]
  wire [3:0] axi_io_axi_in_wstrb; // @[IFU_AXI.scala 16:21]
  wire  axi_io_axi_in_wvalid; // @[IFU_AXI.scala 16:21]
  wire  axi_io_axi_in_bready; // @[IFU_AXI.scala 16:21]
  wire [63:0] axi_io_axi_out_rdata; // @[IFU_AXI.scala 16:21]
  wire  axi_io_axi_out_rvalid; // @[IFU_AXI.scala 16:21]
  wire  axi_io_axi_out_bvalid; // @[IFU_AXI.scala 16:21]
  AXI axi ( // @[IFU_AXI.scala 16:21]
    .clock(axi_clock),
    .reset(axi_reset),
    .io_axi_in_araddr(axi_io_axi_in_araddr),
    .io_axi_in_arvalid(axi_io_axi_in_arvalid),
    .io_axi_in_rready(axi_io_axi_in_rready),
    .io_axi_in_awaddr(axi_io_axi_in_awaddr),
    .io_axi_in_awvalid(axi_io_axi_in_awvalid),
    .io_axi_in_wdata(axi_io_axi_in_wdata),
    .io_axi_in_wstrb(axi_io_axi_in_wstrb),
    .io_axi_in_wvalid(axi_io_axi_in_wvalid),
    .io_axi_in_bready(axi_io_axi_in_bready),
    .io_axi_out_rdata(axi_io_axi_out_rdata),
    .io_axi_out_rvalid(axi_io_axi_out_rvalid),
    .io_axi_out_bvalid(axi_io_axi_out_bvalid)
  );
  assign io_inst_valid = axi_io_axi_out_rvalid; // @[IFU_AXI.scala 28:19]
  assign io_inst = axi_io_axi_out_rdata[31:0]; // @[IFU_AXI.scala 27:36]
  assign axi_clock = clock;
  assign axi_reset = reset;
  assign axi_io_axi_in_araddr = io_pc[31:0]; // @[IFU_AXI.scala 17:34]
  assign axi_io_axi_in_arvalid = io_pc_valid; // @[IFU_AXI.scala 18:27]
  assign axi_io_axi_in_rready = io_inst_ready; // @[IFU_AXI.scala 19:26]
  assign axi_io_axi_in_awaddr = 32'h0; // @[IFU_AXI.scala 20:26]
  assign axi_io_axi_in_awvalid = 1'h0; // @[IFU_AXI.scala 22:27]
  assign axi_io_axi_in_wdata = 32'h0; // @[IFU_AXI.scala 21:25]
  assign axi_io_axi_in_wstrb = 4'h0; // @[IFU_AXI.scala 23:25]
  assign axi_io_axi_in_wvalid = 1'h0; // @[IFU_AXI.scala 24:26]
  assign axi_io_axi_in_bready = 1'h0; // @[IFU_AXI.scala 25:26]
endmodule
module IDU(
  input         clock,
  input         reset,
  input  [31:0] io_inst,
  input         io_inst_valid,
  output        io_inst_ready,
  output [31:0] io_inst_now,
  output [4:0]  io_rs1,
  output [4:0]  io_rs2,
  output [4:0]  io_rd,
  output [63:0] io_imm,
  output        io_ctrl_sign_reg_write,
  output        io_ctrl_sign_csr_write,
  output        io_ctrl_sign_src2_is_imm,
  output        io_ctrl_sign_src1_is_pc,
  output        io_ctrl_sign_Writemem_en,
  output        io_ctrl_sign_Readmem_en,
  output [7:0]  io_ctrl_sign_Wmask
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg  axi_inst_ready; // @[IDU.scala 51:33]
  wire [4:0] rd = io_inst[11:7]; // @[IDU.scala 150:15]
  wire [31:0] _inst_type_T = io_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_1 = 32'h13 == _inst_type_T; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_2 = io_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_3 = 32'h17 == _inst_type_T_2; // @[Lookup.scala 31:38]
  wire  _inst_type_T_5 = 32'h37 == _inst_type_T_2; // @[Lookup.scala 31:38]
  wire  _inst_type_T_7 = 32'h6f == _inst_type_T_2; // @[Lookup.scala 31:38]
  wire  _inst_type_T_9 = 32'h67 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_11 = 32'h3023 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_13 = 32'h3013 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_15 = 32'h2003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_16 = io_inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_17 = 32'h3b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_19 = 32'h40000033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_21 = 32'h1063 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_23 = 32'h63 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_25 = 32'h3003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_27 = 32'h1b == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_29 = 32'h33 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire [31:0] _inst_type_T_30 = io_inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _inst_type_T_31 = 32'h40005013 == _inst_type_T_30; // @[Lookup.scala 31:38]
  wire  _inst_type_T_33 = 32'h4003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_35 = 32'h1023 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_37 = 32'h23 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_39 = 32'h6033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_41 = 32'h4013 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_43 = 32'h7033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_45 = 32'h7013 == _inst_type_T; // @[Lookup.scala 31:38]
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
  wire  _inst_type_T_69 = 32'h5063 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_71 = 32'h4063 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_73 = 32'h6063 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_75 = 32'h2023 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_77 = 32'h1003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_79 = 32'h5003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_81 = 32'h2000033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_83 = 32'h200003b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_85 = 32'h200403b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_87 = 32'h200603b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_89 = 32'h4033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_91 = 32'h6013 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_93 = 32'h2005033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_95 = 32'h2004033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_97 = 32'h200503b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_99 = 32'h200703b == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_101 = 32'h2007033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_103 = 32'h2006033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_105 = 32'h1033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_107 = 32'h5033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_109 = 32'h40005033 == _inst_type_T_16; // @[Lookup.scala 31:38]
  wire  _inst_type_T_111 = 32'h2013 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_113 = 32'h6003 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_115 = 32'h3 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_117 = 32'h7063 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_119 = 32'h73 == io_inst; // @[Lookup.scala 31:38]
  wire  _inst_type_T_121 = 32'h1073 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_123 = 32'h2073 == _inst_type_T; // @[Lookup.scala 31:38]
  wire  _inst_type_T_125 = 32'h3073 == _inst_type_T; // @[Lookup.scala 31:38]
  wire [6:0] _inst_type_T_126 = _inst_type_T_125 ? 7'h40 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_127 = _inst_type_T_123 ? 7'h40 : _inst_type_T_126; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_128 = _inst_type_T_121 ? 7'h40 : _inst_type_T_127; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_129 = _inst_type_T_119 ? 7'h40 : _inst_type_T_128; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_130 = _inst_type_T_117 ? 7'h45 : _inst_type_T_129; // @[Lookup.scala 34:39]
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
  wire [6:0] _inst_type_T_152 = _inst_type_T_73 ? 7'h45 : _inst_type_T_151; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_153 = _inst_type_T_71 ? 7'h45 : _inst_type_T_152; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_154 = _inst_type_T_69 ? 7'h45 : _inst_type_T_153; // @[Lookup.scala 34:39]
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
  wire [6:0] _inst_type_T_177 = _inst_type_T_23 ? 7'h45 : _inst_type_T_176; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_178 = _inst_type_T_21 ? 7'h45 : _inst_type_T_177; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_179 = _inst_type_T_19 ? 7'h41 : _inst_type_T_178; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_180 = _inst_type_T_17 ? 7'h41 : _inst_type_T_179; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_181 = _inst_type_T_15 ? 7'h40 : _inst_type_T_180; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_182 = _inst_type_T_13 ? 7'h40 : _inst_type_T_181; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_183 = _inst_type_T_11 ? 7'h44 : _inst_type_T_182; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_184 = _inst_type_T_9 ? 7'h40 : _inst_type_T_183; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_185 = _inst_type_T_7 ? 7'h43 : _inst_type_T_184; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_186 = _inst_type_T_5 ? 7'h42 : _inst_type_T_185; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_187 = _inst_type_T_3 ? 7'h42 : _inst_type_T_186; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_188 = _inst_type_T_1 ? 7'h40 : _inst_type_T_187; // @[Lookup.scala 34:39]
  wire [11:0] imm_imm = io_inst[31:20]; // @[IDU.scala 22:23]
  wire [51:0] _imm_T_2 = imm_imm[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_3 = {_imm_T_2,imm_imm}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_1 = {io_inst[31],io_inst[19:12],io_inst[20],io_inst[30:21]}; // @[Cat.scala 31:58]
  wire [42:0] _imm_T_6 = imm_imm_1[19] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_7 = {_imm_T_6,io_inst[31],io_inst[19:12],io_inst[20],io_inst[30:21],1'h0}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_2 = io_inst[31:12]; // @[IDU.scala 26:23]
  wire [31:0] _imm_T_10 = imm_imm_2[19] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_12 = {_imm_T_10,imm_imm_2,12'h0}; // @[Cat.scala 31:58]
  wire [11:0] imm_imm_3 = {io_inst[31:25],rd}; // @[Cat.scala 31:58]
  wire [51:0] _imm_T_15 = imm_imm_3[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_16 = {_imm_T_15,io_inst[31:25],rd}; // @[Cat.scala 31:58]
  wire [11:0] imm_imm_4 = {io_inst[31],io_inst[7],io_inst[30:25],io_inst[11:8]}; // @[Cat.scala 31:58]
  wire [50:0] _imm_T_19 = imm_imm_4[11] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_20 = {_imm_T_19,io_inst[31],io_inst[7],io_inst[30:25],io_inst[11:8],1'h0}; // @[Cat.scala 31:58]
  wire [31:0] inst_type = {{25'd0}, _inst_type_T_188}; // @[IDU.scala 133:25 152:15]
  wire [63:0] _imm_T_22 = 32'h40 == inst_type ? _imm_T_3 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_24 = 32'h43 == inst_type ? _imm_T_7 : _imm_T_22; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_26 = 32'h42 == inst_type ? _imm_T_12 : _imm_T_24; // @[Mux.scala 81:58]
  wire [63:0] _imm_T_28 = 32'h44 == inst_type ? _imm_T_16 : _imm_T_26; // @[Mux.scala 81:58]
  wire  _inst_now_T_3 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
  wire  _inst_now_T_123 = 32'h30200073 == io_inst; // @[Lookup.scala 31:38]
  wire [6:0] _inst_now_T_130 = _inst_type_T_125 ? 7'h47 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_131 = _inst_type_T_123 ? 7'h46 : _inst_now_T_130; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_132 = _inst_type_T_121 ? 7'h3f : _inst_now_T_131; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_133 = _inst_now_T_123 ? 7'h3e : _inst_now_T_132; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_134 = _inst_type_T_119 ? 7'h3d : _inst_now_T_133; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_135 = _inst_type_T_117 ? 7'h3c : _inst_now_T_134; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_136 = _inst_type_T_115 ? 7'h3b : _inst_now_T_135; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_137 = _inst_type_T_113 ? 7'h3a : _inst_now_T_136; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_138 = _inst_type_T_111 ? 7'h36 : _inst_now_T_137; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_139 = _inst_type_T_109 ? 7'h39 : _inst_now_T_138; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_140 = _inst_type_T_107 ? 7'h38 : _inst_now_T_139; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_141 = _inst_type_T_105 ? 7'h37 : _inst_now_T_140; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_142 = _inst_type_T_103 ? 7'h34 : _inst_now_T_141; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_143 = _inst_type_T_101 ? 7'h33 : _inst_now_T_142; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_144 = _inst_type_T_99 ? 7'h32 : _inst_now_T_143; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_145 = _inst_type_T_97 ? 7'h35 : _inst_now_T_144; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_146 = _inst_type_T_95 ? 7'h31 : _inst_now_T_145; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_147 = _inst_type_T_93 ? 7'h30 : _inst_now_T_146; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_148 = _inst_type_T_91 ? 7'h2f : _inst_now_T_147; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_149 = _inst_type_T_89 ? 7'h2e : _inst_now_T_148; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_150 = _inst_type_T_87 ? 7'h14 : _inst_now_T_149; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_151 = _inst_type_T_85 ? 7'h13 : _inst_now_T_150; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_152 = _inst_type_T_83 ? 7'h12 : _inst_now_T_151; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_153 = _inst_type_T_81 ? 7'h11 : _inst_now_T_152; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_154 = _inst_type_T_79 ? 7'h25 : _inst_now_T_153; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_155 = _inst_type_T_77 ? 7'h24 : _inst_now_T_154; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_156 = _inst_type_T_75 ? 7'h27 : _inst_now_T_155; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_157 = _inst_type_T_73 ? 7'h2d : _inst_now_T_156; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_158 = _inst_type_T_71 ? 7'h2c : _inst_now_T_157; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_159 = _inst_type_T_69 ? 7'h2b : _inst_now_T_158; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_160 = _inst_type_T_67 ? 7'h1f : _inst_now_T_159; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_161 = _inst_type_T_65 ? 7'h1e : _inst_now_T_160; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_162 = _inst_type_T_63 ? 7'h1d : _inst_now_T_161; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_163 = _inst_type_T_61 ? 7'h1c : _inst_now_T_162; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_164 = _inst_type_T_59 ? 7'h1b : _inst_now_T_163; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_165 = _inst_type_T_57 ? 7'h1a : _inst_now_T_164; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_166 = _inst_type_T_55 ? 7'h19 : _inst_now_T_165; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_167 = _inst_type_T_53 ? 7'h18 : _inst_now_T_166; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_168 = _inst_type_T_51 ? 7'h17 : _inst_now_T_167; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_169 = _inst_type_T_49 ? 7'h16 : _inst_now_T_168; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_170 = _inst_type_T_47 ? 7'hd : _inst_now_T_169; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_171 = _inst_type_T_45 ? 7'h9 : _inst_now_T_170; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_172 = _inst_type_T_43 ? 7'h8 : _inst_now_T_171; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_173 = _inst_type_T_41 ? 7'ha : _inst_now_T_172; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_174 = _inst_type_T_39 ? 7'hb : _inst_now_T_173; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_175 = _inst_type_T_37 ? 7'h28 : _inst_now_T_174; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_176 = _inst_type_T_35 ? 7'h26 : _inst_now_T_175; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_177 = _inst_type_T_33 ? 7'h23 : _inst_now_T_176; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_178 = _inst_type_T_31 ? 7'h15 : _inst_now_T_177; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_179 = _inst_type_T_29 ? 7'hf : _inst_now_T_178; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_180 = _inst_type_T_27 ? 7'h10 : _inst_now_T_179; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_181 = _inst_type_T_25 ? 7'h22 : _inst_now_T_180; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_182 = _inst_type_T_23 ? 7'h29 : _inst_now_T_181; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_183 = _inst_type_T_21 ? 7'h2a : _inst_now_T_182; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_184 = _inst_type_T_19 ? 7'he : _inst_now_T_183; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_185 = _inst_type_T_17 ? 7'hc : _inst_now_T_184; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_186 = _inst_type_T_15 ? 7'h21 : _inst_now_T_185; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_187 = _inst_type_T_13 ? 7'h20 : _inst_now_T_186; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_188 = _inst_type_T_11 ? 7'h7 : _inst_now_T_187; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_189 = _inst_type_T_9 ? 7'h6 : _inst_now_T_188; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_190 = _inst_type_T_7 ? 7'h5 : _inst_now_T_189; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_191 = _inst_type_T_5 ? 7'h4 : _inst_now_T_190; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_192 = _inst_type_T_3 ? 7'h3 : _inst_now_T_191; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_193 = _inst_now_T_3 ? 7'h2 : _inst_now_T_192; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_194 = _inst_type_T_1 ? 7'h1 : _inst_now_T_193; // @[Lookup.scala 34:39]
  wire  _reg_write_T_26 = _inst_now_T_123 ? 1'h0 : 1'h1; // @[Lookup.scala 34:39]
  wire  _reg_write_T_27 = _inst_type_T_119 ? 1'h0 : _reg_write_T_26; // @[Lookup.scala 34:39]
  wire  _reg_write_T_28 = _inst_type_T_117 ? 1'h0 : _reg_write_T_27; // @[Lookup.scala 34:39]
  wire  _reg_write_T_29 = _inst_type_T_73 ? 1'h0 : _reg_write_T_28; // @[Lookup.scala 34:39]
  wire  _reg_write_T_30 = _inst_type_T_71 ? 1'h0 : _reg_write_T_29; // @[Lookup.scala 34:39]
  wire  _reg_write_T_31 = _inst_type_T_69 ? 1'h0 : _reg_write_T_30; // @[Lookup.scala 34:39]
  wire  _reg_write_T_32 = _inst_type_T_23 ? 1'h0 : _reg_write_T_31; // @[Lookup.scala 34:39]
  wire  _reg_write_T_33 = _inst_type_T_21 ? 1'h0 : _reg_write_T_32; // @[Lookup.scala 34:39]
  wire  _reg_write_T_34 = _inst_type_T_75 ? 1'h0 : _reg_write_T_33; // @[Lookup.scala 34:39]
  wire  _reg_write_T_35 = _inst_type_T_37 ? 1'h0 : _reg_write_T_34; // @[Lookup.scala 34:39]
  wire  _reg_write_T_36 = _inst_type_T_35 ? 1'h0 : _reg_write_T_35; // @[Lookup.scala 34:39]
  wire  _reg_write_T_37 = _inst_type_T_11 ? 1'h0 : _reg_write_T_36; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_8 = _inst_type_T_75 ? 4'hf : 4'h0; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_9 = _inst_type_T_37 ? 4'h1 : _Wmask_T_8; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_10 = _inst_type_T_35 ? 4'h3 : _Wmask_T_9; // @[Lookup.scala 34:39]
  assign io_inst_ready = axi_inst_ready; // @[IDU.scala 53:19]
  assign io_inst_now = {{25'd0}, _inst_now_T_194}; // @[IDU.scala 132:24 226:14]
  assign io_rs1 = io_inst[19:15]; // @[IDU.scala 149:16]
  assign io_rs2 = io_inst[24:20]; // @[IDU.scala 148:16]
  assign io_rd = io_inst[11:7]; // @[IDU.scala 150:15]
  assign io_imm = 32'h45 == inst_type ? _imm_T_20 : _imm_T_28; // @[Mux.scala 81:58]
  assign io_ctrl_sign_reg_write = _inst_now_T_3 ? 1'h0 : _reg_write_T_37; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_csr_write = _inst_type_T_121 | (_inst_type_T_123 | _inst_type_T_125); // @[Lookup.scala 34:39]
  assign io_ctrl_sign_src2_is_imm = 32'h45 == inst_type | (32'h43 == inst_type | (32'h44 == inst_type | (32'h42 ==
    inst_type | 32'h40 == inst_type))); // @[Mux.scala 81:58]
  assign io_ctrl_sign_src1_is_pc = _inst_type_T_7 | (_inst_type_T_3 | (_inst_type_T_21 | (_inst_type_T_23 | (
    _inst_type_T_69 | (_inst_type_T_71 | (_inst_type_T_73 | _inst_type_T_117)))))); // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Writemem_en = 32'h44 == inst_type; // @[Mux.scala 81:61]
  assign io_ctrl_sign_Readmem_en = _inst_type_T_25 | (_inst_type_T_15 | (_inst_type_T_113 | (_inst_type_T_77 | (
    _inst_type_T_79 | (_inst_type_T_115 | _inst_type_T_33))))); // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Wmask = _inst_type_T_11 ? 8'hff : {{4'd0}, _Wmask_T_10}; // @[Lookup.scala 34:39]
  always @(posedge clock) begin
    axi_inst_ready <= reset | ~(io_inst_valid & axi_inst_ready); // @[IDU.scala 51:{33,33} 52:20]
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
  axi_inst_ready = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module EXU_AXI(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  output [63:0] io_pc_next,
  input  [31:0] io_inst_now,
  input  [4:0]  io_rs1,
  input  [4:0]  io_rs2,
  input  [4:0]  io_rd,
  input  [63:0] io_imm,
  input         io_ctrl_sign_reg_write,
  input         io_ctrl_sign_csr_write,
  input         io_ctrl_sign_src2_is_imm,
  input         io_ctrl_sign_src1_is_pc,
  input         io_ctrl_sign_Writemem_en,
  input         io_ctrl_sign_Readmem_en,
  input  [7:0]  io_ctrl_sign_Wmask,
  output [63:0] io_res2rd,
  input         io_inst_valid,
  output        io_mem_end,
  output        io_mem_flag
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] Regfile [0:31]; // @[EXU_AXI.scala 27:22]
  wire  Regfile_src1_value_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_src1_value_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_src1_value_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_src2_value_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_src2_value_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_src2_value_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_value_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_value_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_value_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_MPORT_4_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_MPORT_4_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_MPORT_4_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_io_pc_next_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_io_pc_next_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_io_pc_next_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_io_pc_next_MPORT_1_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_io_pc_next_MPORT_1_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_io_pc_next_MPORT_1_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_io_pc_next_MPORT_2_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_io_pc_next_MPORT_2_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_io_pc_next_MPORT_2_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_io_pc_next_MPORT_3_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_io_pc_next_MPORT_3_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_io_pc_next_MPORT_3_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_io_pc_next_MPORT_4_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_io_pc_next_MPORT_4_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_io_pc_next_MPORT_4_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_io_pc_next_MPORT_5_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_io_pc_next_MPORT_5_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_io_pc_next_MPORT_5_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_io_pc_next_MPORT_6_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_io_pc_next_MPORT_6_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_io_pc_next_MPORT_6_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_io_pc_next_MPORT_7_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_io_pc_next_MPORT_7_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_io_pc_next_MPORT_7_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_io_pc_next_MPORT_8_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_io_pc_next_MPORT_8_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_io_pc_next_MPORT_8_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_io_pc_next_MPORT_9_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_io_pc_next_MPORT_9_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_io_pc_next_MPORT_9_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_io_pc_next_MPORT_10_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_io_pc_next_MPORT_10_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_io_pc_next_MPORT_10_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_io_pc_next_MPORT_11_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_io_pc_next_MPORT_11_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_io_pc_next_MPORT_11_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_0_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_0_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_0_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_1_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_1_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_1_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_2_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_2_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_2_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_3_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_3_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_3_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_4_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_4_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_4_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_5_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_5_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_5_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_6_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_6_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_6_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_7_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_7_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_7_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_8_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_8_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_8_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_9_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_9_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_9_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_10_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_10_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_10_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_11_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_11_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_11_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_12_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_12_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_12_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_13_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_13_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_13_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_14_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_14_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_14_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_15_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_15_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_15_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_16_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_16_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_16_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_17_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_17_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_17_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_18_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_18_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_18_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_19_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_19_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_19_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_20_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_20_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_20_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_21_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_21_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_21_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_22_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_22_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_22_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_23_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_23_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_23_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_24_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_24_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_24_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_25_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_25_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_25_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_26_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_26_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_26_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_27_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_27_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_27_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_28_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_28_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_28_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_29_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_29_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_29_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_30_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_30_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_30_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_reg_trace_io_input_reg_31_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_reg_trace_io_input_reg_31_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_reg_trace_io_input_reg_31_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_mem_wdate_MPORT_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_mem_wdate_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_mem_wdate_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_mem_wdate_MPORT_1_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_mem_wdate_MPORT_1_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_mem_wdate_MPORT_1_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_mem_wdate_MPORT_2_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_mem_wdate_MPORT_2_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_mem_wdate_MPORT_2_data; // @[EXU_AXI.scala 27:22]
  wire  Regfile_mem_wdate_MPORT_3_en; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_mem_wdate_MPORT_3_addr; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_mem_wdate_MPORT_3_data; // @[EXU_AXI.scala 27:22]
  wire [63:0] Regfile_MPORT_data; // @[EXU_AXI.scala 27:22]
  wire [4:0] Regfile_MPORT_addr; // @[EXU_AXI.scala 27:22]
  wire  Regfile_MPORT_mask; // @[EXU_AXI.scala 27:22]
  wire  Regfile_MPORT_en; // @[EXU_AXI.scala 27:22]
  reg [63:0] CSR_Reg [0:3]; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_io_res2rd_MPORT_en; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_io_res2rd_MPORT_addr; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_io_res2rd_MPORT_data; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_io_res2rd_MPORT_1_en; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_io_res2rd_MPORT_1_addr; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_io_res2rd_MPORT_1_data; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_io_res2rd_MPORT_2_en; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_io_res2rd_MPORT_2_addr; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_io_res2rd_MPORT_2_data; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_csr_wdata_MPORT_en; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_csr_wdata_MPORT_addr; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_csr_wdata_MPORT_data; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_csr_wdata_MPORT_1_en; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_csr_wdata_MPORT_1_addr; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_csr_wdata_MPORT_1_data; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_MPORT_2_en; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_MPORT_2_addr; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_MPORT_2_data; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_MPORT_5_en; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_MPORT_5_addr; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_MPORT_5_data; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_MPORT_7_en; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_MPORT_7_addr; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_MPORT_7_data; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_io_pc_next_MPORT_12_en; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_io_pc_next_MPORT_12_addr; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_io_pc_next_MPORT_12_data; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_io_pc_next_MPORT_13_en; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_io_pc_next_MPORT_13_addr; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_io_pc_next_MPORT_13_data; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_reg_trace_io_csr_reg_0_MPORT_en; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_reg_trace_io_csr_reg_1_MPORT_en; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_reg_trace_io_csr_reg_2_MPORT_en; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_MPORT_1_data; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_MPORT_1_addr; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_MPORT_1_mask; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_MPORT_1_en; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_MPORT_3_data; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_MPORT_3_addr; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_MPORT_3_mask; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_MPORT_3_en; // @[EXU_AXI.scala 28:22]
  wire [63:0] CSR_Reg_MPORT_6_data; // @[EXU_AXI.scala 28:22]
  wire [1:0] CSR_Reg_MPORT_6_addr; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_MPORT_6_mask; // @[EXU_AXI.scala 28:22]
  wire  CSR_Reg_MPORT_6_en; // @[EXU_AXI.scala 28:22]
  wire [63:0] reg_trace_input_reg_0; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_1; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_2; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_3; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_4; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_5; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_6; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_7; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_8; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_9; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_10; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_11; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_12; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_13; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_14; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_15; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_16; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_17; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_18; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_19; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_20; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_21; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_22; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_23; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_24; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_25; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_26; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_27; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_28; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_29; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_30; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_input_reg_31; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_csr_reg_0; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_csr_reg_1; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_csr_reg_2; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_csr_reg_3; // @[EXU_AXI.scala 148:27]
  wire [63:0] reg_trace_pc; // @[EXU_AXI.scala 148:27]
  wire  axi_clock; // @[EXU_AXI.scala 173:21]
  wire  axi_reset; // @[EXU_AXI.scala 173:21]
  wire [31:0] axi_io_axi_in_araddr; // @[EXU_AXI.scala 173:21]
  wire  axi_io_axi_in_arvalid; // @[EXU_AXI.scala 173:21]
  wire  axi_io_axi_in_rready; // @[EXU_AXI.scala 173:21]
  wire [31:0] axi_io_axi_in_awaddr; // @[EXU_AXI.scala 173:21]
  wire  axi_io_axi_in_awvalid; // @[EXU_AXI.scala 173:21]
  wire [31:0] axi_io_axi_in_wdata; // @[EXU_AXI.scala 173:21]
  wire [3:0] axi_io_axi_in_wstrb; // @[EXU_AXI.scala 173:21]
  wire  axi_io_axi_in_wvalid; // @[EXU_AXI.scala 173:21]
  wire  axi_io_axi_in_bready; // @[EXU_AXI.scala 173:21]
  wire [63:0] axi_io_axi_out_rdata; // @[EXU_AXI.scala 173:21]
  wire  axi_io_axi_out_rvalid; // @[EXU_AXI.scala 173:21]
  wire  axi_io_axi_out_bvalid; // @[EXU_AXI.scala 173:21]
  wire [11:0] csr_addr = io_imm[11:0]; // @[EXU_AXI.scala 29:26]
  wire [1:0] _csr_index_T_5 = 12'h300 == csr_addr ? 2'h2 : {{1'd0}, 12'h341 == csr_addr}; // @[Mux.scala 81:58]
  wire  _csr_index_T_6 = 12'h342 == csr_addr; // @[Mux.scala 81:61]
  wire [63:0] _src1_value_T_1 = io_rs1 == 5'h0 ? 64'h0 : Regfile_src1_value_MPORT_data; // @[EXU_AXI.scala 37:12]
  wire [63:0] src1_value = io_ctrl_sign_src1_is_pc ? io_pc : _src1_value_T_1; // @[EXU_AXI.scala 39:25]
  wire [63:0] _src2_value_T_1 = io_rs2 == 5'h0 ? 64'h0 : Regfile_src2_value_MPORT_data; // @[EXU_AXI.scala 37:12]
  wire [63:0] src2_value = io_ctrl_sign_src2_is_imm ? io_imm : _src2_value_T_1; // @[EXU_AXI.scala 40:25]
  wire [63:0] add_res = src1_value + src2_value; // @[EXU_AXI.scala 41:30]
  wire [63:0] sub_res = src1_value - src2_value; // @[EXU_AXI.scala 42:30]
  wire [63:0] _sra_res_T = io_ctrl_sign_src1_is_pc ? io_pc : _src1_value_T_1; // @[EXU_AXI.scala 43:37]
  wire [63:0] sra_res = $signed(_sra_res_T) >>> src2_value[5:0]; // @[EXU_AXI.scala 43:60]
  wire [63:0] srl_res = src1_value >> src2_value[5:0]; // @[EXU_AXI.scala 44:30]
  wire [126:0] _GEN_0 = {{63'd0}, src1_value}; // @[EXU_AXI.scala 45:30]
  wire [126:0] sll_res = _GEN_0 << src2_value[5:0]; // @[EXU_AXI.scala 45:30]
  wire [31:0] _sraw_res_T_1 = src1_value[31:0]; // @[EXU_AXI.scala 46:43]
  wire [31:0] sraw_res = $signed(_sraw_res_T_1) >>> src2_value[4:0]; // @[EXU_AXI.scala 46:46]
  wire [31:0] srlw_res = src1_value[31:0] >> src2_value[4:0]; // @[EXU_AXI.scala 47:37]
  wire [62:0] _GEN_1 = {{31'd0}, src1_value[31:0]}; // @[EXU_AXI.scala 48:37]
  wire [62:0] sllw_res = _GEN_1 << src2_value[4:0]; // @[EXU_AXI.scala 48:37]
  wire [63:0] or_res = src1_value | src2_value; // @[EXU_AXI.scala 49:29]
  wire [63:0] xor_res = src1_value ^ src2_value; // @[EXU_AXI.scala 50:30]
  wire [63:0] and_res = src1_value & src2_value; // @[EXU_AXI.scala 51:30]
  wire [127:0] _mlu_res_T = src1_value * src2_value; // @[EXU_AXI.scala 52:31]
  wire [63:0] mlu_res = _mlu_res_T[63:0]; // @[EXU_AXI.scala 52:44]
  wire [63:0] _mluw_res_T_2 = src1_value[31:0] * src2_value[31:0]; // @[EXU_AXI.scala 53:38]
  wire [31:0] mluw_res = _mluw_res_T_2[31:0]; // @[EXU_AXI.scala 53:57]
  wire [31:0] _divw_res_T_3 = src2_value[31:0]; // @[EXU_AXI.scala 54:64]
  wire [32:0] _divw_res_T_4 = $signed(_sraw_res_T_1) / $signed(_divw_res_T_3); // @[EXU_AXI.scala 54:45]
  wire [31:0] divw_res = _divw_res_T_4[31:0]; // @[EXU_AXI.scala 54:71]
  wire [31:0] divuw_res = src1_value[31:0] / src2_value[31:0]; // @[EXU_AXI.scala 55:39]
  wire [31:0] remw_res = $signed(_sraw_res_T_1) % $signed(_divw_res_T_3); // @[EXU_AXI.scala 56:71]
  wire [31:0] remuw_res = src1_value[31:0] % src2_value[31:0]; // @[EXU_AXI.scala 57:39]
  wire [63:0] _div_res_T_1 = io_ctrl_sign_src2_is_imm ? io_imm : _src2_value_T_1; // @[EXU_AXI.scala 58:51]
  wire [64:0] div_res = $signed(_sra_res_T) / $signed(_div_res_T_1); // @[EXU_AXI.scala 58:59]
  wire [63:0] divu_res = src1_value / src2_value; // @[EXU_AXI.scala 59:31]
  wire [63:0] rem_res = $signed(_sra_res_T) % $signed(_div_res_T_1); // @[EXU_AXI.scala 60:59]
  wire [63:0] remu_res = src1_value % src2_value; // @[EXU_AXI.scala 61:31]
  wire [63:0] _io_res2rd_T_1 = io_pc + 64'h4; // @[EXU_AXI.scala 66:24]
  wire  _io_res2rd_T_4 = src1_value < src2_value; // @[EXU_AXI.scala 68:34]
  wire  _io_res2rd_T_10 = $signed(_sra_res_T) < $signed(_div_res_T_1); // @[EXU_AXI.scala 70:42]
  wire [63:0] mem_rdata = axi_io_axi_out_rdata; // @[EXU_AXI.scala 190:15 26:25]
  wire [31:0] _io_res2rd_T_18 = mem_rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_20 = {_io_res2rd_T_18,mem_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_23 = {56'h0,mem_rdata[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_26 = {32'h0,mem_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [47:0] _io_res2rd_T_29 = mem_rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_31 = {_io_res2rd_T_29,mem_rdata[15:0]}; // @[Cat.scala 31:58]
  wire [55:0] _io_res2rd_T_34 = mem_rdata[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_36 = {_io_res2rd_T_34,mem_rdata[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_39 = {48'h0,mem_rdata[15:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_42 = add_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_44 = {_io_res2rd_T_42,add_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_52 = sub_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_54 = {_io_res2rd_T_52,sub_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_57 = sllw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_59 = {_io_res2rd_T_57,sllw_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_67 = sraw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _io_res2rd_T_68 = $signed(_sraw_res_T_1) >>> src2_value[4:0]; // @[EXU_AXI.scala 95:56]
  wire [63:0] _io_res2rd_T_69 = {_io_res2rd_T_67,_io_res2rd_T_68}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_72 = srlw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_74 = {_io_res2rd_T_72,srlw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_87 = mluw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_88 = {_io_res2rd_T_87,mluw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_91 = divw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_92 = {_io_res2rd_T_91,divw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_95 = divuw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_96 = {_io_res2rd_T_95,divuw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_99 = remw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_100 = {_io_res2rd_T_99,remw_res}; // @[Cat.scala 31:58]
  wire [31:0] _io_res2rd_T_103 = remuw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_res2rd_T_104 = {_io_res2rd_T_103,remuw_res}; // @[Cat.scala 31:58]
  wire [63:0] _io_res2rd_T_106 = 32'h1 == io_inst_now ? add_res : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_108 = 32'h3 == io_inst_now ? add_res : _io_res2rd_T_106; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_110 = 32'h4 == io_inst_now ? io_imm : _io_res2rd_T_108; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_112 = 32'h5 == io_inst_now ? _io_res2rd_T_1 : _io_res2rd_T_110; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_114 = 32'h6 == io_inst_now ? _io_res2rd_T_1 : _io_res2rd_T_112; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_116 = 32'h20 == io_inst_now ? {{63'd0}, _io_res2rd_T_4} : _io_res2rd_T_114; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_118 = 32'h1e == io_inst_now ? {{63'd0}, _io_res2rd_T_4} : _io_res2rd_T_116; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_120 = 32'h36 == io_inst_now ? {{63'd0}, _io_res2rd_T_10} : _io_res2rd_T_118; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_122 = 32'h1f == io_inst_now ? {{63'd0}, _io_res2rd_T_10} : _io_res2rd_T_120; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_124 = 32'h21 == io_inst_now ? _io_res2rd_T_20 : _io_res2rd_T_122; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_126 = 32'h22 == io_inst_now ? mem_rdata : _io_res2rd_T_124; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_128 = 32'h23 == io_inst_now ? _io_res2rd_T_23 : _io_res2rd_T_126; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_130 = 32'h3a == io_inst_now ? _io_res2rd_T_26 : _io_res2rd_T_128; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_132 = 32'h24 == io_inst_now ? _io_res2rd_T_31 : _io_res2rd_T_130; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_134 = 32'h3b == io_inst_now ? _io_res2rd_T_36 : _io_res2rd_T_132; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_136 = 32'h25 == io_inst_now ? _io_res2rd_T_39 : _io_res2rd_T_134; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_138 = 32'hc == io_inst_now ? _io_res2rd_T_44 : _io_res2rd_T_136; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_140 = 32'he == io_inst_now ? sub_res : _io_res2rd_T_138; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_142 = 32'h10 == io_inst_now ? _io_res2rd_T_44 : _io_res2rd_T_140; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_144 = 32'hf == io_inst_now ? add_res : _io_res2rd_T_142; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_146 = 32'h15 == io_inst_now ? sra_res : _io_res2rd_T_144; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_148 = 32'hb == io_inst_now ? or_res : _io_res2rd_T_146; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_150 = 32'h2f == io_inst_now ? or_res : _io_res2rd_T_148; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_152 = 32'h2e == io_inst_now ? xor_res : _io_res2rd_T_150; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_154 = 32'ha == io_inst_now ? xor_res : _io_res2rd_T_152; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_156 = 32'h8 == io_inst_now ? and_res : _io_res2rd_T_154; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_158 = 32'h9 == io_inst_now ? and_res : _io_res2rd_T_156; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_160 = 32'hd == io_inst_now ? _io_res2rd_T_54 : _io_res2rd_T_158; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_162 = 32'h16 == io_inst_now ? _io_res2rd_T_59 : _io_res2rd_T_160; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_164 = 32'h17 == io_inst_now ? sll_res : {{63'd0}, _io_res2rd_T_162}; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_166 = 32'h18 == io_inst_now ? {{63'd0}, srl_res} : _io_res2rd_T_164; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_168 = 32'h19 == io_inst_now ? {{63'd0}, _io_res2rd_T_59} : _io_res2rd_T_166; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_170 = 32'h1a == io_inst_now ? {{63'd0}, _io_res2rd_T_69} : _io_res2rd_T_168; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_172 = 32'h1b == io_inst_now ? {{63'd0}, _io_res2rd_T_74} : _io_res2rd_T_170; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_174 = 32'h1c == io_inst_now ? {{63'd0}, _io_res2rd_T_69} : _io_res2rd_T_172; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_176 = 32'h1d == io_inst_now ? {{63'd0}, _io_res2rd_T_74} : _io_res2rd_T_174; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_178 = 32'h11 == io_inst_now ? {{63'd0}, mlu_res} : _io_res2rd_T_176; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_180 = 32'h12 == io_inst_now ? {{63'd0}, _io_res2rd_T_88} : _io_res2rd_T_178; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_182 = 32'h13 == io_inst_now ? {{63'd0}, _io_res2rd_T_92} : _io_res2rd_T_180; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_184 = 32'h30 == io_inst_now ? {{63'd0}, divu_res} : _io_res2rd_T_182; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_186 = 32'h31 == io_inst_now ? {{62'd0}, div_res} : _io_res2rd_T_184; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_188 = 32'h35 == io_inst_now ? {{63'd0}, _io_res2rd_T_96} : _io_res2rd_T_186; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_190 = 32'h14 == io_inst_now ? {{63'd0}, _io_res2rd_T_100} : _io_res2rd_T_188; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_192 = 32'h32 == io_inst_now ? {{63'd0}, _io_res2rd_T_104} : _io_res2rd_T_190; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_194 = 32'h33 == io_inst_now ? {{63'd0}, remu_res} : _io_res2rd_T_192; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_196 = 32'h34 == io_inst_now ? {{63'd0}, rem_res} : _io_res2rd_T_194; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_198 = 32'h37 == io_inst_now ? sll_res : _io_res2rd_T_196; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_200 = 32'h39 == io_inst_now ? {{63'd0}, sra_res} : _io_res2rd_T_198; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_202 = 32'h38 == io_inst_now ? {{63'd0}, srl_res} : _io_res2rd_T_200; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_204 = 32'h3f == io_inst_now ? {{63'd0}, CSR_Reg_io_res2rd_MPORT_data} : _io_res2rd_T_202; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_206 = 32'h46 == io_inst_now ? {{63'd0}, CSR_Reg_io_res2rd_MPORT_1_data} : _io_res2rd_T_204; // @[Mux.scala 81:58]
  wire [126:0] _io_res2rd_T_208 = 32'h47 == io_inst_now ? {{63'd0}, CSR_Reg_io_res2rd_MPORT_2_data} : _io_res2rd_T_206; // @[Mux.scala 81:58]
  wire [63:0] reg_value = io_rd == 5'h0 ? 64'h0 : Regfile_reg_value_MPORT_data; // @[EXU_AXI.scala 37:12]
  wire  _T_1 = io_ctrl_sign_reg_write & io_rd != 5'h0; // @[EXU_AXI.scala 119:50]
  wire [63:0] _csr_wdata_T = src1_value | CSR_Reg_csr_wdata_MPORT_data; // @[EXU_AXI.scala 124:32]
  wire [63:0] _csr_wdata_T_1 = ~CSR_Reg_csr_wdata_MPORT_1_data; // @[EXU_AXI.scala 125:35]
  wire [63:0] _csr_wdata_T_2 = src1_value & _csr_wdata_T_1; // @[EXU_AXI.scala 125:32]
  wire [63:0] _csr_wdata_T_4 = 32'h3f == io_inst_now ? src1_value : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _csr_wdata_T_6 = 32'h46 == io_inst_now ? _csr_wdata_T : _csr_wdata_T_4; // @[Mux.scala 81:58]
  wire [63:0] csr_wdata = 32'h47 == io_inst_now ? _csr_wdata_T_2 : _csr_wdata_T_6; // @[Mux.scala 81:58]
  wire  _T_3 = io_inst_now == 32'h3d; // @[EXU_AXI.scala 128:37]
  wire [63:0] _io_pc_next_T = add_res & 64'hfffffffffffffffe; // @[EXU_AXI.scala 138:28]
  wire [63:0] _io_pc_next_T_3 = io_rs1 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_data; // @[EXU_AXI.scala 139:39]
  wire [63:0] _io_pc_next_T_6 = io_rs2 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_1_data; // @[EXU_AXI.scala 139:67]
  wire [63:0] _io_pc_next_T_8 = $signed(_io_pc_next_T_3) != $signed(_io_pc_next_T_6) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 139:21]
  wire [63:0] _io_pc_next_T_11 = io_rs1 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_2_data; // @[EXU_AXI.scala 140:39]
  wire [63:0] _io_pc_next_T_14 = io_rs2 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_3_data; // @[EXU_AXI.scala 140:67]
  wire [63:0] _io_pc_next_T_16 = $signed(_io_pc_next_T_11) == $signed(_io_pc_next_T_14) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 140:21]
  wire [63:0] _io_pc_next_T_19 = io_rs1 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_4_data; // @[EXU_AXI.scala 141:39]
  wire [63:0] _io_pc_next_T_22 = io_rs2 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_5_data; // @[EXU_AXI.scala 141:66]
  wire [63:0] _io_pc_next_T_24 = $signed(_io_pc_next_T_19) >= $signed(_io_pc_next_T_22) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 141:21]
  wire [63:0] _io_pc_next_T_27 = io_rs1 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_6_data; // @[EXU_AXI.scala 142:39]
  wire [63:0] _io_pc_next_T_30 = io_rs2 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_7_data; // @[EXU_AXI.scala 142:65]
  wire [63:0] _io_pc_next_T_32 = $signed(_io_pc_next_T_27) < $signed(_io_pc_next_T_30) ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 142:21]
  wire [63:0] _io_pc_next_T_34 = io_rs1 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_8_data; // @[EXU_AXI.scala 37:12]
  wire [63:0] _io_pc_next_T_36 = io_rs2 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_9_data; // @[EXU_AXI.scala 37:12]
  wire [63:0] _io_pc_next_T_38 = _io_pc_next_T_34 < _io_pc_next_T_36 ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 143:22]
  wire [63:0] _io_pc_next_T_40 = io_rs1 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_10_data; // @[EXU_AXI.scala 37:12]
  wire [63:0] _io_pc_next_T_42 = io_rs2 == 5'h0 ? 64'h0 : Regfile_io_pc_next_MPORT_11_data; // @[EXU_AXI.scala 37:12]
  wire [63:0] _io_pc_next_T_44 = _io_pc_next_T_40 >= _io_pc_next_T_42 ? add_res : _io_res2rd_T_1; // @[EXU_AXI.scala 144:22]
  wire [63:0] _io_pc_next_T_46 = CSR_Reg_io_pc_next_MPORT_13_data + 64'h4; // @[EXU_AXI.scala 146:33]
  wire [63:0] _io_pc_next_T_48 = 32'h5 == io_inst_now ? add_res : _io_res2rd_T_1; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_50 = 32'h6 == io_inst_now ? _io_pc_next_T : _io_pc_next_T_48; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_52 = 32'h2a == io_inst_now ? _io_pc_next_T_8 : _io_pc_next_T_50; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_54 = 32'h29 == io_inst_now ? _io_pc_next_T_16 : _io_pc_next_T_52; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_56 = 32'h2b == io_inst_now ? _io_pc_next_T_24 : _io_pc_next_T_54; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_58 = 32'h2c == io_inst_now ? _io_pc_next_T_32 : _io_pc_next_T_56; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_60 = 32'h2d == io_inst_now ? _io_pc_next_T_38 : _io_pc_next_T_58; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_62 = 32'h3c == io_inst_now ? _io_pc_next_T_44 : _io_pc_next_T_60; // @[Mux.scala 81:58]
  wire [63:0] _io_pc_next_T_64 = 32'h3d == io_inst_now ? CSR_Reg_io_pc_next_MPORT_12_data : _io_pc_next_T_62; // @[Mux.scala 81:58]
  wire [63:0] _mem_wdate_T_1 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdate_MPORT_data; // @[EXU_AXI.scala 37:12]
  wire [63:0] _mem_wdate_T_3 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdate_MPORT_1_data; // @[EXU_AXI.scala 37:12]
  wire [63:0] _mem_wdate_T_6 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdate_MPORT_2_data; // @[EXU_AXI.scala 37:12]
  wire [63:0] _mem_wdate_T_9 = io_rs2 == 5'h0 ? 64'h0 : Regfile_mem_wdate_MPORT_3_data; // @[EXU_AXI.scala 37:12]
  wire [63:0] _mem_wdate_T_12 = 32'h7 == io_inst_now ? _mem_wdate_T_1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _mem_wdate_T_14 = 32'h26 == io_inst_now ? {{48'd0}, _mem_wdate_T_3[15:0]} : _mem_wdate_T_12; // @[Mux.scala 81:58]
  wire [63:0] _mem_wdate_T_16 = 32'h28 == io_inst_now ? {{56'd0}, _mem_wdate_T_6[7:0]} : _mem_wdate_T_14; // @[Mux.scala 81:58]
  wire [63:0] mem_wdate = 32'h27 == io_inst_now ? {{32'd0}, _mem_wdate_T_9[31:0]} : _mem_wdate_T_16; // @[Mux.scala 81:58]
  reg  axi_arvalid; // @[EXU_AXI.scala 175:30]
  reg  axi_rready; // @[EXU_AXI.scala 176:29]
  reg  axi_awvalid; // @[EXU_AXI.scala 177:30]
  reg  axi_wvalid; // @[EXU_AXI.scala 178:29]
  reg  axi_bready; // @[EXU_AXI.scala 179:29]
  wire  _axi_awvalid_T = io_ctrl_sign_Writemem_en & io_inst_valid; // @[EXU_AXI.scala 183:45]
  traceregs reg_trace ( // @[EXU_AXI.scala 148:27]
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
    .input_reg_31(reg_trace_input_reg_31),
    .csr_reg_0(reg_trace_csr_reg_0),
    .csr_reg_1(reg_trace_csr_reg_1),
    .csr_reg_2(reg_trace_csr_reg_2),
    .csr_reg_3(reg_trace_csr_reg_3),
    .pc(reg_trace_pc)
  );
  AXI axi ( // @[EXU_AXI.scala 173:21]
    .clock(axi_clock),
    .reset(axi_reset),
    .io_axi_in_araddr(axi_io_axi_in_araddr),
    .io_axi_in_arvalid(axi_io_axi_in_arvalid),
    .io_axi_in_rready(axi_io_axi_in_rready),
    .io_axi_in_awaddr(axi_io_axi_in_awaddr),
    .io_axi_in_awvalid(axi_io_axi_in_awvalid),
    .io_axi_in_wdata(axi_io_axi_in_wdata),
    .io_axi_in_wstrb(axi_io_axi_in_wstrb),
    .io_axi_in_wvalid(axi_io_axi_in_wvalid),
    .io_axi_in_bready(axi_io_axi_in_bready),
    .io_axi_out_rdata(axi_io_axi_out_rdata),
    .io_axi_out_rvalid(axi_io_axi_out_rvalid),
    .io_axi_out_bvalid(axi_io_axi_out_bvalid)
  );
  assign Regfile_src1_value_MPORT_en = 1'h1;
  assign Regfile_src1_value_MPORT_addr = io_rs1;
  assign Regfile_src1_value_MPORT_data = Regfile[Regfile_src1_value_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_src2_value_MPORT_en = 1'h1;
  assign Regfile_src2_value_MPORT_addr = io_rs2;
  assign Regfile_src2_value_MPORT_data = Regfile[Regfile_src2_value_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_value_MPORT_en = 1'h1;
  assign Regfile_reg_value_MPORT_addr = io_rd;
  assign Regfile_reg_value_MPORT_data = Regfile[Regfile_reg_value_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_MPORT_4_en = 1'h1;
  assign Regfile_MPORT_4_addr = 5'h11;
  assign Regfile_MPORT_4_data = Regfile[Regfile_MPORT_4_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_io_pc_next_MPORT_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_addr = io_rs1;
  assign Regfile_io_pc_next_MPORT_data = Regfile[Regfile_io_pc_next_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_io_pc_next_MPORT_1_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_1_addr = io_rs2;
  assign Regfile_io_pc_next_MPORT_1_data = Regfile[Regfile_io_pc_next_MPORT_1_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_io_pc_next_MPORT_2_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_2_addr = io_rs1;
  assign Regfile_io_pc_next_MPORT_2_data = Regfile[Regfile_io_pc_next_MPORT_2_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_io_pc_next_MPORT_3_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_3_addr = io_rs2;
  assign Regfile_io_pc_next_MPORT_3_data = Regfile[Regfile_io_pc_next_MPORT_3_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_io_pc_next_MPORT_4_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_4_addr = io_rs1;
  assign Regfile_io_pc_next_MPORT_4_data = Regfile[Regfile_io_pc_next_MPORT_4_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_io_pc_next_MPORT_5_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_5_addr = io_rs2;
  assign Regfile_io_pc_next_MPORT_5_data = Regfile[Regfile_io_pc_next_MPORT_5_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_io_pc_next_MPORT_6_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_6_addr = io_rs1;
  assign Regfile_io_pc_next_MPORT_6_data = Regfile[Regfile_io_pc_next_MPORT_6_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_io_pc_next_MPORT_7_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_7_addr = io_rs2;
  assign Regfile_io_pc_next_MPORT_7_data = Regfile[Regfile_io_pc_next_MPORT_7_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_io_pc_next_MPORT_8_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_8_addr = io_rs1;
  assign Regfile_io_pc_next_MPORT_8_data = Regfile[Regfile_io_pc_next_MPORT_8_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_io_pc_next_MPORT_9_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_9_addr = io_rs2;
  assign Regfile_io_pc_next_MPORT_9_data = Regfile[Regfile_io_pc_next_MPORT_9_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_io_pc_next_MPORT_10_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_10_addr = io_rs1;
  assign Regfile_io_pc_next_MPORT_10_data = Regfile[Regfile_io_pc_next_MPORT_10_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_io_pc_next_MPORT_11_en = 1'h1;
  assign Regfile_io_pc_next_MPORT_11_addr = io_rs2;
  assign Regfile_io_pc_next_MPORT_11_data = Regfile[Regfile_io_pc_next_MPORT_11_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_0_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_0_MPORT_addr = 5'h0;
  assign Regfile_reg_trace_io_input_reg_0_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_0_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_1_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_1_MPORT_addr = 5'h1;
  assign Regfile_reg_trace_io_input_reg_1_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_1_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_2_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_2_MPORT_addr = 5'h2;
  assign Regfile_reg_trace_io_input_reg_2_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_2_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_3_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_3_MPORT_addr = 5'h3;
  assign Regfile_reg_trace_io_input_reg_3_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_3_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_4_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_4_MPORT_addr = 5'h4;
  assign Regfile_reg_trace_io_input_reg_4_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_4_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_5_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_5_MPORT_addr = 5'h5;
  assign Regfile_reg_trace_io_input_reg_5_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_5_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_6_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_6_MPORT_addr = 5'h6;
  assign Regfile_reg_trace_io_input_reg_6_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_6_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_7_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_7_MPORT_addr = 5'h7;
  assign Regfile_reg_trace_io_input_reg_7_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_7_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_8_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_8_MPORT_addr = 5'h8;
  assign Regfile_reg_trace_io_input_reg_8_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_8_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_9_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_9_MPORT_addr = 5'h9;
  assign Regfile_reg_trace_io_input_reg_9_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_9_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_10_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_10_MPORT_addr = 5'ha;
  assign Regfile_reg_trace_io_input_reg_10_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_10_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_11_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_11_MPORT_addr = 5'hb;
  assign Regfile_reg_trace_io_input_reg_11_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_11_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_12_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_12_MPORT_addr = 5'hc;
  assign Regfile_reg_trace_io_input_reg_12_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_12_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_13_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_13_MPORT_addr = 5'hd;
  assign Regfile_reg_trace_io_input_reg_13_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_13_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_14_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_14_MPORT_addr = 5'he;
  assign Regfile_reg_trace_io_input_reg_14_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_14_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_15_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_15_MPORT_addr = 5'hf;
  assign Regfile_reg_trace_io_input_reg_15_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_15_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_16_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_16_MPORT_addr = 5'h10;
  assign Regfile_reg_trace_io_input_reg_16_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_16_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_17_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_17_MPORT_addr = 5'h11;
  assign Regfile_reg_trace_io_input_reg_17_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_17_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_18_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_18_MPORT_addr = 5'h12;
  assign Regfile_reg_trace_io_input_reg_18_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_18_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_19_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_19_MPORT_addr = 5'h13;
  assign Regfile_reg_trace_io_input_reg_19_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_19_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_20_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_20_MPORT_addr = 5'h14;
  assign Regfile_reg_trace_io_input_reg_20_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_20_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_21_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_21_MPORT_addr = 5'h15;
  assign Regfile_reg_trace_io_input_reg_21_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_21_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_22_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_22_MPORT_addr = 5'h16;
  assign Regfile_reg_trace_io_input_reg_22_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_22_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_23_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_23_MPORT_addr = 5'h17;
  assign Regfile_reg_trace_io_input_reg_23_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_23_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_24_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_24_MPORT_addr = 5'h18;
  assign Regfile_reg_trace_io_input_reg_24_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_24_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_25_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_25_MPORT_addr = 5'h19;
  assign Regfile_reg_trace_io_input_reg_25_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_25_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_26_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_26_MPORT_addr = 5'h1a;
  assign Regfile_reg_trace_io_input_reg_26_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_26_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_27_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_27_MPORT_addr = 5'h1b;
  assign Regfile_reg_trace_io_input_reg_27_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_27_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_28_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_28_MPORT_addr = 5'h1c;
  assign Regfile_reg_trace_io_input_reg_28_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_28_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_29_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_29_MPORT_addr = 5'h1d;
  assign Regfile_reg_trace_io_input_reg_29_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_29_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_30_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_30_MPORT_addr = 5'h1e;
  assign Regfile_reg_trace_io_input_reg_30_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_30_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_reg_trace_io_input_reg_31_MPORT_en = 1'h1;
  assign Regfile_reg_trace_io_input_reg_31_MPORT_addr = 5'h1f;
  assign Regfile_reg_trace_io_input_reg_31_MPORT_data = Regfile[Regfile_reg_trace_io_input_reg_31_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_mem_wdate_MPORT_en = 1'h1;
  assign Regfile_mem_wdate_MPORT_addr = io_rs2;
  assign Regfile_mem_wdate_MPORT_data = Regfile[Regfile_mem_wdate_MPORT_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_mem_wdate_MPORT_1_en = 1'h1;
  assign Regfile_mem_wdate_MPORT_1_addr = io_rs2;
  assign Regfile_mem_wdate_MPORT_1_data = Regfile[Regfile_mem_wdate_MPORT_1_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_mem_wdate_MPORT_2_en = 1'h1;
  assign Regfile_mem_wdate_MPORT_2_addr = io_rs2;
  assign Regfile_mem_wdate_MPORT_2_data = Regfile[Regfile_mem_wdate_MPORT_2_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_mem_wdate_MPORT_3_en = 1'h1;
  assign Regfile_mem_wdate_MPORT_3_addr = io_rs2;
  assign Regfile_mem_wdate_MPORT_3_data = Regfile[Regfile_mem_wdate_MPORT_3_addr]; // @[EXU_AXI.scala 27:22]
  assign Regfile_MPORT_data = _T_1 ? io_res2rd : reg_value;
  assign Regfile_MPORT_addr = io_rd;
  assign Regfile_MPORT_mask = 1'h1;
  assign Regfile_MPORT_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_io_res2rd_MPORT_data = CSR_Reg[CSR_Reg_io_res2rd_MPORT_addr]; // @[EXU_AXI.scala 28:22]
  assign CSR_Reg_io_res2rd_MPORT_1_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_1_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_io_res2rd_MPORT_1_data = CSR_Reg[CSR_Reg_io_res2rd_MPORT_1_addr]; // @[EXU_AXI.scala 28:22]
  assign CSR_Reg_io_res2rd_MPORT_2_en = 1'h1;
  assign CSR_Reg_io_res2rd_MPORT_2_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_io_res2rd_MPORT_2_data = CSR_Reg[CSR_Reg_io_res2rd_MPORT_2_addr]; // @[EXU_AXI.scala 28:22]
  assign CSR_Reg_csr_wdata_MPORT_en = 1'h1;
  assign CSR_Reg_csr_wdata_MPORT_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_csr_wdata_MPORT_data = CSR_Reg[CSR_Reg_csr_wdata_MPORT_addr]; // @[EXU_AXI.scala 28:22]
  assign CSR_Reg_csr_wdata_MPORT_1_en = 1'h1;
  assign CSR_Reg_csr_wdata_MPORT_1_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_csr_wdata_MPORT_1_data = CSR_Reg[CSR_Reg_csr_wdata_MPORT_1_addr]; // @[EXU_AXI.scala 28:22]
  assign CSR_Reg_MPORT_2_en = 1'h1;
  assign CSR_Reg_MPORT_2_addr = 2'h1;
  assign CSR_Reg_MPORT_2_data = CSR_Reg[CSR_Reg_MPORT_2_addr]; // @[EXU_AXI.scala 28:22]
  assign CSR_Reg_MPORT_5_en = 1'h1;
  assign CSR_Reg_MPORT_5_addr = 2'h3;
  assign CSR_Reg_MPORT_5_data = CSR_Reg[CSR_Reg_MPORT_5_addr]; // @[EXU_AXI.scala 28:22]
  assign CSR_Reg_MPORT_7_en = 1'h1;
  assign CSR_Reg_MPORT_7_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_MPORT_7_data = CSR_Reg[CSR_Reg_MPORT_7_addr]; // @[EXU_AXI.scala 28:22]
  assign CSR_Reg_io_pc_next_MPORT_12_en = 1'h1;
  assign CSR_Reg_io_pc_next_MPORT_12_addr = 2'h0;
  assign CSR_Reg_io_pc_next_MPORT_12_data = CSR_Reg[CSR_Reg_io_pc_next_MPORT_12_addr]; // @[EXU_AXI.scala 28:22]
  assign CSR_Reg_io_pc_next_MPORT_13_en = 1'h1;
  assign CSR_Reg_io_pc_next_MPORT_13_addr = 2'h1;
  assign CSR_Reg_io_pc_next_MPORT_13_data = CSR_Reg[CSR_Reg_io_pc_next_MPORT_13_addr]; // @[EXU_AXI.scala 28:22]
  assign CSR_Reg_reg_trace_io_csr_reg_0_MPORT_en = 1'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr = 2'h0;
  assign CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data = CSR_Reg[CSR_Reg_reg_trace_io_csr_reg_0_MPORT_addr]; // @[EXU_AXI.scala 28:22]
  assign CSR_Reg_reg_trace_io_csr_reg_1_MPORT_en = 1'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr = 2'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data = CSR_Reg[CSR_Reg_reg_trace_io_csr_reg_1_MPORT_addr]; // @[EXU_AXI.scala 28:22]
  assign CSR_Reg_reg_trace_io_csr_reg_2_MPORT_en = 1'h1;
  assign CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr = 2'h2;
  assign CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data = CSR_Reg[CSR_Reg_reg_trace_io_csr_reg_2_MPORT_addr]; // @[EXU_AXI.scala 28:22]
  assign CSR_Reg_MPORT_1_data = _T_3 ? io_pc : CSR_Reg_MPORT_2_data;
  assign CSR_Reg_MPORT_1_addr = 2'h1;
  assign CSR_Reg_MPORT_1_mask = 1'h1;
  assign CSR_Reg_MPORT_1_en = 1'h1;
  assign CSR_Reg_MPORT_3_data = _T_3 ? Regfile_MPORT_4_data : CSR_Reg_MPORT_5_data;
  assign CSR_Reg_MPORT_3_addr = 2'h3;
  assign CSR_Reg_MPORT_3_mask = 1'h1;
  assign CSR_Reg_MPORT_3_en = 1'h1;
  assign CSR_Reg_MPORT_6_data = io_ctrl_sign_csr_write ? csr_wdata : CSR_Reg_MPORT_7_data;
  assign CSR_Reg_MPORT_6_addr = _csr_index_T_6 ? 2'h3 : _csr_index_T_5;
  assign CSR_Reg_MPORT_6_mask = 1'h1;
  assign CSR_Reg_MPORT_6_en = 1'h1;
  assign io_pc_next = 32'h3e == io_inst_now ? _io_pc_next_T_46 : _io_pc_next_T_64; // @[Mux.scala 81:58]
  assign io_res2rd = _io_res2rd_T_208[63:0]; // @[EXU_AXI.scala 62:15]
  assign io_mem_end = io_ctrl_sign_Readmem_en & axi_rready & axi_io_axi_out_rvalid | io_ctrl_sign_Writemem_en &
    axi_bready & axi_io_axi_out_bvalid; // @[EXU_AXI.scala 202:84]
  assign io_mem_flag = io_ctrl_sign_Readmem_en | io_ctrl_sign_Writemem_en; // @[EXU_AXI.scala 201:44]
  assign reg_trace_input_reg_0 = Regfile_reg_trace_io_input_reg_0_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_1 = Regfile_reg_trace_io_input_reg_1_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_2 = Regfile_reg_trace_io_input_reg_2_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_3 = Regfile_reg_trace_io_input_reg_3_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_4 = Regfile_reg_trace_io_input_reg_4_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_5 = Regfile_reg_trace_io_input_reg_5_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_6 = Regfile_reg_trace_io_input_reg_6_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_7 = Regfile_reg_trace_io_input_reg_7_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_8 = Regfile_reg_trace_io_input_reg_8_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_9 = Regfile_reg_trace_io_input_reg_9_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_10 = Regfile_reg_trace_io_input_reg_10_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_11 = Regfile_reg_trace_io_input_reg_11_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_12 = Regfile_reg_trace_io_input_reg_12_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_13 = Regfile_reg_trace_io_input_reg_13_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_14 = Regfile_reg_trace_io_input_reg_14_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_15 = Regfile_reg_trace_io_input_reg_15_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_16 = Regfile_reg_trace_io_input_reg_16_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_17 = Regfile_reg_trace_io_input_reg_17_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_18 = Regfile_reg_trace_io_input_reg_18_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_19 = Regfile_reg_trace_io_input_reg_19_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_20 = Regfile_reg_trace_io_input_reg_20_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_21 = Regfile_reg_trace_io_input_reg_21_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_22 = Regfile_reg_trace_io_input_reg_22_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_23 = Regfile_reg_trace_io_input_reg_23_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_24 = Regfile_reg_trace_io_input_reg_24_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_25 = Regfile_reg_trace_io_input_reg_25_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_26 = Regfile_reg_trace_io_input_reg_26_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_27 = Regfile_reg_trace_io_input_reg_27_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_28 = Regfile_reg_trace_io_input_reg_28_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_29 = Regfile_reg_trace_io_input_reg_29_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_30 = Regfile_reg_trace_io_input_reg_30_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_input_reg_31 = Regfile_reg_trace_io_input_reg_31_MPORT_data; // @[EXU_AXI.scala 150:57]
  assign reg_trace_csr_reg_0 = CSR_Reg_reg_trace_io_csr_reg_0_MPORT_data; // @[EXU_AXI.scala 153:54]
  assign reg_trace_csr_reg_1 = CSR_Reg_reg_trace_io_csr_reg_1_MPORT_data; // @[EXU_AXI.scala 153:54]
  assign reg_trace_csr_reg_2 = CSR_Reg_reg_trace_io_csr_reg_2_MPORT_data; // @[EXU_AXI.scala 153:54]
  assign reg_trace_csr_reg_3 = 64'h0; // @[EXU_AXI.scala 152:{36,36}]
  assign reg_trace_pc = io_pc; // @[EXU_AXI.scala 151:21]
  assign axi_clock = clock;
  assign axi_reset = reset;
  assign axi_io_axi_in_araddr = add_res[31:0]; // @[EXU_AXI.scala 191:36]
  assign axi_io_axi_in_arvalid = axi_arvalid; // @[EXU_AXI.scala 192:27]
  assign axi_io_axi_in_rready = axi_rready; // @[EXU_AXI.scala 193:26]
  assign axi_io_axi_in_awaddr = add_res[31:0]; // @[EXU_AXI.scala 194:36]
  assign axi_io_axi_in_awvalid = axi_awvalid; // @[EXU_AXI.scala 195:27]
  assign axi_io_axi_in_wdata = mem_wdate[31:0]; // @[EXU_AXI.scala 196:25]
  assign axi_io_axi_in_wstrb = io_ctrl_sign_Wmask[3:0]; // @[EXU_AXI.scala 197:25]
  assign axi_io_axi_in_wvalid = axi_wvalid; // @[EXU_AXI.scala 198:26]
  assign axi_io_axi_in_bready = axi_bready; // @[EXU_AXI.scala 199:26]
  always @(posedge clock) begin
    if (Regfile_MPORT_en & Regfile_MPORT_mask) begin
      Regfile[Regfile_MPORT_addr] <= Regfile_MPORT_data; // @[EXU_AXI.scala 27:22]
    end
    if (CSR_Reg_MPORT_1_en & CSR_Reg_MPORT_1_mask) begin
      CSR_Reg[CSR_Reg_MPORT_1_addr] <= CSR_Reg_MPORT_1_data; // @[EXU_AXI.scala 28:22]
    end
    if (CSR_Reg_MPORT_3_en & CSR_Reg_MPORT_3_mask) begin
      CSR_Reg[CSR_Reg_MPORT_3_addr] <= CSR_Reg_MPORT_3_data; // @[EXU_AXI.scala 28:22]
    end
    if (CSR_Reg_MPORT_6_en & CSR_Reg_MPORT_6_mask) begin
      CSR_Reg[CSR_Reg_MPORT_6_addr] <= CSR_Reg_MPORT_6_data; // @[EXU_AXI.scala 28:22]
    end
    if (reset) begin // @[EXU_AXI.scala 175:30]
      axi_arvalid <= 1'h0; // @[EXU_AXI.scala 175:30]
    end else begin
      axi_arvalid <= io_inst_valid & io_ctrl_sign_Readmem_en; // @[EXU_AXI.scala 181:17]
    end
    axi_rready <= reset | ~(axi_rready & axi_io_axi_out_rvalid); // @[EXU_AXI.scala 176:{29,29} 182:16]
    if (reset) begin // @[EXU_AXI.scala 177:30]
      axi_awvalid <= 1'h0; // @[EXU_AXI.scala 177:30]
    end else begin
      axi_awvalid <= io_ctrl_sign_Writemem_en & io_inst_valid; // @[EXU_AXI.scala 183:17]
    end
    if (reset) begin // @[EXU_AXI.scala 178:29]
      axi_wvalid <= 1'h0; // @[EXU_AXI.scala 178:29]
    end else begin
      axi_wvalid <= _axi_awvalid_T; // @[EXU_AXI.scala 184:16]
    end
    axi_bready <= reset | ~(axi_bready & axi_io_axi_out_bvalid); // @[EXU_AXI.scala 179:{29,29} 185:16]
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
    Regfile[initvar] = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    CSR_Reg[initvar] = _RAND_1[63:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  axi_arvalid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  axi_rready = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  axi_awvalid = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  axi_wvalid = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  axi_bready = _RAND_6[0:0];
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
  output [63:0] io_pc_next,
  output [63:0] io_outval,
  output        io_step
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  ifu_step_clock; // @[top.scala 18:26]
  wire  ifu_step_reset; // @[top.scala 18:26]
  wire [63:0] ifu_step_io_pc; // @[top.scala 18:26]
  wire  ifu_step_io_pc_valid; // @[top.scala 18:26]
  wire  ifu_step_io_inst_valid; // @[top.scala 18:26]
  wire  ifu_step_io_inst_ready; // @[top.scala 18:26]
  wire [31:0] ifu_step_io_inst; // @[top.scala 18:26]
  wire  idu_step_clock; // @[top.scala 26:26]
  wire  idu_step_reset; // @[top.scala 26:26]
  wire [31:0] idu_step_io_inst; // @[top.scala 26:26]
  wire  idu_step_io_inst_valid; // @[top.scala 26:26]
  wire  idu_step_io_inst_ready; // @[top.scala 26:26]
  wire [31:0] idu_step_io_inst_now; // @[top.scala 26:26]
  wire [4:0] idu_step_io_rs1; // @[top.scala 26:26]
  wire [4:0] idu_step_io_rs2; // @[top.scala 26:26]
  wire [4:0] idu_step_io_rd; // @[top.scala 26:26]
  wire [63:0] idu_step_io_imm; // @[top.scala 26:26]
  wire  idu_step_io_ctrl_sign_reg_write; // @[top.scala 26:26]
  wire  idu_step_io_ctrl_sign_csr_write; // @[top.scala 26:26]
  wire  idu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 26:26]
  wire  idu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 26:26]
  wire  idu_step_io_ctrl_sign_Writemem_en; // @[top.scala 26:26]
  wire  idu_step_io_ctrl_sign_Readmem_en; // @[top.scala 26:26]
  wire [7:0] idu_step_io_ctrl_sign_Wmask; // @[top.scala 26:26]
  wire  exu_step_clock; // @[top.scala 31:26]
  wire  exu_step_reset; // @[top.scala 31:26]
  wire [63:0] exu_step_io_pc; // @[top.scala 31:26]
  wire [63:0] exu_step_io_pc_next; // @[top.scala 31:26]
  wire [31:0] exu_step_io_inst_now; // @[top.scala 31:26]
  wire [4:0] exu_step_io_rs1; // @[top.scala 31:26]
  wire [4:0] exu_step_io_rs2; // @[top.scala 31:26]
  wire [4:0] exu_step_io_rd; // @[top.scala 31:26]
  wire [63:0] exu_step_io_imm; // @[top.scala 31:26]
  wire  exu_step_io_ctrl_sign_reg_write; // @[top.scala 31:26]
  wire  exu_step_io_ctrl_sign_csr_write; // @[top.scala 31:26]
  wire  exu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 31:26]
  wire  exu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 31:26]
  wire  exu_step_io_ctrl_sign_Writemem_en; // @[top.scala 31:26]
  wire  exu_step_io_ctrl_sign_Readmem_en; // @[top.scala 31:26]
  wire [7:0] exu_step_io_ctrl_sign_Wmask; // @[top.scala 31:26]
  wire [63:0] exu_step_io_res2rd; // @[top.scala 31:26]
  wire  exu_step_io_inst_valid; // @[top.scala 31:26]
  wire  exu_step_io_mem_end; // @[top.scala 31:26]
  wire  exu_step_io_mem_flag; // @[top.scala 31:26]
  wire [31:0] dpi_flag; // @[top.scala 42:21]
  wire [31:0] dpi_ecall_flag; // @[top.scala 42:21]
  reg [63:0] pc_now; // @[top.scala 15:25]
  reg  axi_pc_valid; // @[top.scala 21:31]
  wire  _exu_step_io_inst_valid_T = ifu_step_io_inst_ready & ifu_step_io_inst_valid; // @[top.scala 40:53]
  wire  _pc_now_T_2 = _exu_step_io_inst_valid_T & ~exu_step_io_mem_flag; // @[top.scala 46:69]
  wire  _pc_now_T_3 = exu_step_io_mem_flag & exu_step_io_mem_end; // @[top.scala 46:122]
  IFU_AXI ifu_step ( // @[top.scala 18:26]
    .clock(ifu_step_clock),
    .reset(ifu_step_reset),
    .io_pc(ifu_step_io_pc),
    .io_pc_valid(ifu_step_io_pc_valid),
    .io_inst_valid(ifu_step_io_inst_valid),
    .io_inst_ready(ifu_step_io_inst_ready),
    .io_inst(ifu_step_io_inst)
  );
  IDU idu_step ( // @[top.scala 26:26]
    .clock(idu_step_clock),
    .reset(idu_step_reset),
    .io_inst(idu_step_io_inst),
    .io_inst_valid(idu_step_io_inst_valid),
    .io_inst_ready(idu_step_io_inst_ready),
    .io_inst_now(idu_step_io_inst_now),
    .io_rs1(idu_step_io_rs1),
    .io_rs2(idu_step_io_rs2),
    .io_rd(idu_step_io_rd),
    .io_imm(idu_step_io_imm),
    .io_ctrl_sign_reg_write(idu_step_io_ctrl_sign_reg_write),
    .io_ctrl_sign_csr_write(idu_step_io_ctrl_sign_csr_write),
    .io_ctrl_sign_src2_is_imm(idu_step_io_ctrl_sign_src2_is_imm),
    .io_ctrl_sign_src1_is_pc(idu_step_io_ctrl_sign_src1_is_pc),
    .io_ctrl_sign_Writemem_en(idu_step_io_ctrl_sign_Writemem_en),
    .io_ctrl_sign_Readmem_en(idu_step_io_ctrl_sign_Readmem_en),
    .io_ctrl_sign_Wmask(idu_step_io_ctrl_sign_Wmask)
  );
  EXU_AXI exu_step ( // @[top.scala 31:26]
    .clock(exu_step_clock),
    .reset(exu_step_reset),
    .io_pc(exu_step_io_pc),
    .io_pc_next(exu_step_io_pc_next),
    .io_inst_now(exu_step_io_inst_now),
    .io_rs1(exu_step_io_rs1),
    .io_rs2(exu_step_io_rs2),
    .io_rd(exu_step_io_rd),
    .io_imm(exu_step_io_imm),
    .io_ctrl_sign_reg_write(exu_step_io_ctrl_sign_reg_write),
    .io_ctrl_sign_csr_write(exu_step_io_ctrl_sign_csr_write),
    .io_ctrl_sign_src2_is_imm(exu_step_io_ctrl_sign_src2_is_imm),
    .io_ctrl_sign_src1_is_pc(exu_step_io_ctrl_sign_src1_is_pc),
    .io_ctrl_sign_Writemem_en(exu_step_io_ctrl_sign_Writemem_en),
    .io_ctrl_sign_Readmem_en(exu_step_io_ctrl_sign_Readmem_en),
    .io_ctrl_sign_Wmask(exu_step_io_ctrl_sign_Wmask),
    .io_res2rd(exu_step_io_res2rd),
    .io_inst_valid(exu_step_io_inst_valid),
    .io_mem_end(exu_step_io_mem_end),
    .io_mem_flag(exu_step_io_mem_flag)
  );
  DPI dpi ( // @[top.scala 42:21]
    .flag(dpi_flag),
    .ecall_flag(dpi_ecall_flag)
  );
  assign io_inst = ifu_step_io_inst; // @[top.scala 20:13]
  assign io_pc = pc_now; // @[top.scala 16:11]
  assign io_pc_next = exu_step_io_pc_next; // @[top.scala 47:16]
  assign io_outval = exu_step_io_res2rd; // @[top.scala 41:15]
  assign io_step = _pc_now_T_2 | _pc_now_T_3; // @[top.scala 48:94]
  assign ifu_step_clock = clock;
  assign ifu_step_reset = reset;
  assign ifu_step_io_pc = pc_now; // @[top.scala 19:20]
  assign ifu_step_io_pc_valid = axi_pc_valid; // @[top.scala 23:26]
  assign ifu_step_io_inst_ready = idu_step_io_inst_ready; // @[top.scala 30:28]
  assign idu_step_clock = clock;
  assign idu_step_reset = reset;
  assign idu_step_io_inst = ifu_step_io_inst; // @[top.scala 28:22]
  assign idu_step_io_inst_valid = ifu_step_io_inst_valid; // @[top.scala 29:28]
  assign exu_step_clock = clock;
  assign exu_step_reset = reset;
  assign exu_step_io_pc = pc_now; // @[top.scala 32:20]
  assign exu_step_io_inst_now = idu_step_io_inst_now; // @[top.scala 33:26]
  assign exu_step_io_rs1 = idu_step_io_rs1; // @[top.scala 35:21]
  assign exu_step_io_rs2 = idu_step_io_rs2; // @[top.scala 36:21]
  assign exu_step_io_rd = idu_step_io_rd; // @[top.scala 37:20]
  assign exu_step_io_imm = idu_step_io_imm; // @[top.scala 38:21]
  assign exu_step_io_ctrl_sign_reg_write = idu_step_io_ctrl_sign_reg_write; // @[top.scala 39:27]
  assign exu_step_io_ctrl_sign_csr_write = idu_step_io_ctrl_sign_csr_write; // @[top.scala 39:27]
  assign exu_step_io_ctrl_sign_src2_is_imm = idu_step_io_ctrl_sign_src2_is_imm; // @[top.scala 39:27]
  assign exu_step_io_ctrl_sign_src1_is_pc = idu_step_io_ctrl_sign_src1_is_pc; // @[top.scala 39:27]
  assign exu_step_io_ctrl_sign_Writemem_en = idu_step_io_ctrl_sign_Writemem_en; // @[top.scala 39:27]
  assign exu_step_io_ctrl_sign_Readmem_en = idu_step_io_ctrl_sign_Readmem_en; // @[top.scala 39:27]
  assign exu_step_io_ctrl_sign_Wmask = idu_step_io_ctrl_sign_Wmask; // @[top.scala 39:27]
  assign exu_step_io_inst_valid = ifu_step_io_inst_ready & ifu_step_io_inst_valid; // @[top.scala 40:53]
  assign dpi_flag = {{31'd0}, idu_step_io_inst_now == 32'h2}; // @[top.scala 43:17]
  assign dpi_ecall_flag = {{31'd0}, idu_step_io_inst_now == 32'h3d}; // @[top.scala 44:23]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 15:25]
      pc_now <= 64'h80000000; // @[top.scala 15:25]
    end else if (_exu_step_io_inst_valid_T & ~exu_step_io_mem_flag | exu_step_io_mem_flag & exu_step_io_mem_end) begin // @[top.scala 46:18]
      pc_now <= exu_step_io_pc_next;
    end
    if (reset) begin // @[top.scala 21:31]
      axi_pc_valid <= 1'h0; // @[top.scala 21:31]
    end else begin
      axi_pc_valid <= 1'h1; // @[top.scala 22:18]
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
  pc_now = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  axi_pc_valid = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
