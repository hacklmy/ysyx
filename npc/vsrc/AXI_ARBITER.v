module AXI_ARBITER(
  input         clock,
  input         reset,
  input  [31:0] io_ifu_axi_in_araddr,
  input         io_ifu_axi_in_arvalid,
  input         io_ifu_axi_in_rready,
  output [63:0] io_ifu_axi_out_rdata,
  output        io_ifu_axi_out_rvalid,
  input  [31:0] io_lsu_axi_in_araddr,
  input         io_lsu_axi_in_arvalid,
  input         io_lsu_axi_in_rready,
  input  [31:0] io_lsu_axi_in_awaddr,
  input         io_lsu_axi_in_awvalid,
  input  [31:0] io_lsu_axi_in_wdata,
  input  [7:0]  io_lsu_axi_in_wstrb,
  input         io_lsu_axi_in_wvalid,
  input         io_lsu_axi_in_bready,
  output        io_lsu_axi_out_arready,
  output [63:0] io_lsu_axi_out_rdata,
  output        io_lsu_axi_out_rvalid,
  output        io_lsu_axi_out_awready,
  output        io_lsu_axi_out_wready,
  output        io_lsu_axi_out_bvalid,
  input         io_axi_in_arready,
  input  [63:0] io_axi_in_rdata,
  input         io_axi_in_rvalid,
  input         io_axi_in_awready,
  input         io_axi_in_wready,
  input         io_axi_in_bvalid,
  output [31:0] io_axi_out_araddr,
  output        io_axi_out_arvalid,
  output        io_axi_out_rready,
  output [31:0] io_axi_out_awaddr,
  output        io_axi_out_awvalid,
  output [31:0] io_axi_out_wdata,
  output [7:0]  io_axi_out_wstrb,
  output        io_axi_out_wvalid,
  output        io_axi_out_bready
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] state; // @[axi_arbiter.scala 18:24]
  wire  _T_1 = ~reset; // @[axi_arbiter.scala 38:11]
  wire [1:0] _GEN_0 = io_ifu_axi_in_arvalid ? 2'h1 : state; // @[axi_arbiter.scala 51:46 52:23 18:24]
  wire [31:0] _GEN_1 = io_ifu_axi_in_arvalid ? io_ifu_axi_in_araddr : 32'h0; // @[axi_arbiter.scala 51:46 53:28 57:28]
  wire  _GEN_3 = io_ifu_axi_in_arvalid & io_ifu_axi_in_rready; // @[axi_arbiter.scala 51:46 53:28 57:28]
  wire [63:0] _GEN_11 = io_ifu_axi_in_arvalid ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 51:46 54:32 59:32]
  wire  _GEN_12 = io_ifu_axi_in_arvalid & io_axi_in_rvalid; // @[axi_arbiter.scala 51:46 54:32 59:32]
  wire [31:0] _GEN_23 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_araddr : _GEN_1; // @[axi_arbiter.scala 46:46 48:28]
  wire  _GEN_24 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_arvalid : io_ifu_axi_in_arvalid; // @[axi_arbiter.scala 46:46 48:28]
  wire  _GEN_25 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_rready : _GEN_3; // @[axi_arbiter.scala 46:46 48:28]
  wire [31:0] _GEN_26 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_awaddr : 32'h0; // @[axi_arbiter.scala 46:46 48:28]
  wire  _GEN_27 = io_lsu_axi_in_arvalid & io_lsu_axi_in_awvalid; // @[axi_arbiter.scala 46:46 48:28]
  wire [31:0] _GEN_28 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_wdata : 32'h0; // @[axi_arbiter.scala 46:46 48:28]
  wire [7:0] _GEN_29 = io_lsu_axi_in_arvalid ? io_lsu_axi_in_wstrb : 8'h0; // @[axi_arbiter.scala 46:46 48:28]
  wire  _GEN_30 = io_lsu_axi_in_arvalid & io_lsu_axi_in_wvalid; // @[axi_arbiter.scala 46:46 48:28]
  wire  _GEN_31 = io_lsu_axi_in_arvalid & io_lsu_axi_in_bready; // @[axi_arbiter.scala 46:46 48:28]
  wire  _GEN_32 = io_lsu_axi_in_arvalid & io_axi_in_arready; // @[axi_arbiter.scala 46:46 49:32]
  wire [63:0] _GEN_33 = io_lsu_axi_in_arvalid ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 46:46 49:32]
  wire  _GEN_34 = io_lsu_axi_in_arvalid & io_axi_in_rvalid; // @[axi_arbiter.scala 46:46 49:32]
  wire  _GEN_35 = io_lsu_axi_in_arvalid & io_axi_in_awready; // @[axi_arbiter.scala 46:46 49:32]
  wire  _GEN_36 = io_lsu_axi_in_arvalid & io_axi_in_wready; // @[axi_arbiter.scala 46:46 49:32]
  wire  _GEN_37 = io_lsu_axi_in_arvalid & io_axi_in_bvalid; // @[axi_arbiter.scala 46:46 49:32]
  wire [63:0] _GEN_39 = io_lsu_axi_in_arvalid ? 64'h0 : _GEN_11; // @[axi_arbiter.scala 46:46 50:32]
  wire  _GEN_40 = io_lsu_axi_in_arvalid ? 1'h0 : _GEN_12; // @[axi_arbiter.scala 46:46 50:32]
  wire [31:0] _GEN_45 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_araddr : _GEN_23; // @[axi_arbiter.scala 41:40 43:28]
  wire  _GEN_46 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_arvalid : _GEN_24; // @[axi_arbiter.scala 41:40 43:28]
  wire  _GEN_47 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_rready : _GEN_25; // @[axi_arbiter.scala 41:40 43:28]
  wire [31:0] _GEN_48 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_awaddr : _GEN_26; // @[axi_arbiter.scala 41:40 43:28]
  wire  _GEN_49 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_awvalid : _GEN_27; // @[axi_arbiter.scala 41:40 43:28]
  wire [31:0] _GEN_50 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_wdata : _GEN_28; // @[axi_arbiter.scala 41:40 43:28]
  wire [7:0] _GEN_51 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_wstrb : _GEN_29; // @[axi_arbiter.scala 41:40 43:28]
  wire  _GEN_52 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_wvalid : _GEN_30; // @[axi_arbiter.scala 41:40 43:28]
  wire  _GEN_53 = io_lsu_axi_in_awvalid ? io_lsu_axi_in_bready : _GEN_31; // @[axi_arbiter.scala 41:40 43:28]
  wire  _GEN_54 = io_lsu_axi_in_awvalid ? io_axi_in_arready : _GEN_32; // @[axi_arbiter.scala 41:40 44:32]
  wire [63:0] _GEN_55 = io_lsu_axi_in_awvalid ? io_axi_in_rdata : _GEN_33; // @[axi_arbiter.scala 41:40 44:32]
  wire  _GEN_56 = io_lsu_axi_in_awvalid ? io_axi_in_rvalid : _GEN_34; // @[axi_arbiter.scala 41:40 44:32]
  wire  _GEN_57 = io_lsu_axi_in_awvalid ? io_axi_in_awready : _GEN_35; // @[axi_arbiter.scala 41:40 44:32]
  wire  _GEN_58 = io_lsu_axi_in_awvalid ? io_axi_in_wready : _GEN_36; // @[axi_arbiter.scala 41:40 44:32]
  wire  _GEN_59 = io_lsu_axi_in_awvalid ? io_axi_in_bvalid : _GEN_37; // @[axi_arbiter.scala 41:40 44:32]
  wire [63:0] _GEN_61 = io_lsu_axi_in_awvalid ? 64'h0 : _GEN_39; // @[axi_arbiter.scala 41:40 45:32]
  wire  _GEN_62 = io_lsu_axi_in_awvalid ? 1'h0 : _GEN_40; // @[axi_arbiter.scala 41:40 45:32]
  wire [1:0] _GEN_67 = io_lsu_axi_out_rvalid & io_lsu_axi_in_rready ? 2'h0 : state; // @[axi_arbiter.scala 74:64 75:23 18:24]
  wire [1:0] _GEN_68 = io_lsu_axi_out_bvalid & io_lsu_axi_in_bready ? 2'h0 : state; // @[axi_arbiter.scala 82:64 83:23 18:24]
  wire [31:0] _GEN_69 = state == 2'h3 ? io_lsu_axi_in_araddr : 32'h0; // @[axi_arbiter.scala 78:39 79:24 87:24]
  wire  _GEN_70 = state == 2'h3 & io_lsu_axi_in_arvalid; // @[axi_arbiter.scala 78:39 79:24 87:24]
  wire  _GEN_71 = state == 2'h3 & io_lsu_axi_in_rready; // @[axi_arbiter.scala 78:39 79:24 87:24]
  wire [31:0] _GEN_72 = state == 2'h3 ? io_lsu_axi_in_awaddr : 32'h0; // @[axi_arbiter.scala 78:39 79:24 87:24]
  wire  _GEN_73 = state == 2'h3 & io_lsu_axi_in_awvalid; // @[axi_arbiter.scala 78:39 79:24 87:24]
  wire [31:0] _GEN_74 = state == 2'h3 ? io_lsu_axi_in_wdata : 32'h0; // @[axi_arbiter.scala 78:39 79:24 87:24]
  wire [7:0] _GEN_75 = state == 2'h3 ? io_lsu_axi_in_wstrb : 8'h0; // @[axi_arbiter.scala 78:39 79:24 87:24]
  wire  _GEN_76 = state == 2'h3 & io_lsu_axi_in_wvalid; // @[axi_arbiter.scala 78:39 79:24 87:24]
  wire  _GEN_77 = state == 2'h3 & io_lsu_axi_in_bready; // @[axi_arbiter.scala 78:39 79:24 87:24]
  wire  _GEN_78 = state == 2'h3 & io_axi_in_arready; // @[axi_arbiter.scala 78:39 80:28 88:28]
  wire [63:0] _GEN_79 = state == 2'h3 ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 78:39 80:28 88:28]
  wire  _GEN_80 = state == 2'h3 & io_axi_in_rvalid; // @[axi_arbiter.scala 78:39 80:28 88:28]
  wire  _GEN_81 = state == 2'h3 & io_axi_in_awready; // @[axi_arbiter.scala 78:39 80:28 88:28]
  wire  _GEN_82 = state == 2'h3 & io_axi_in_wready; // @[axi_arbiter.scala 78:39 80:28 88:28]
  wire  _GEN_83 = state == 2'h3 & io_axi_in_bvalid; // @[axi_arbiter.scala 78:39 80:28 88:28]
  wire [1:0] _GEN_90 = state == 2'h3 ? _GEN_68 : state; // @[axi_arbiter.scala 18:24 78:39]
  wire [31:0] _GEN_91 = state == 2'h2 ? io_lsu_axi_in_araddr : _GEN_69; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_92 = state == 2'h2 ? io_lsu_axi_in_arvalid : _GEN_70; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_93 = state == 2'h2 ? io_lsu_axi_in_rready : _GEN_71; // @[axi_arbiter.scala 70:39 71:24]
  wire [31:0] _GEN_94 = state == 2'h2 ? io_lsu_axi_in_awaddr : _GEN_72; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_95 = state == 2'h2 ? io_lsu_axi_in_awvalid : _GEN_73; // @[axi_arbiter.scala 70:39 71:24]
  wire [31:0] _GEN_96 = state == 2'h2 ? io_lsu_axi_in_wdata : _GEN_74; // @[axi_arbiter.scala 70:39 71:24]
  wire [7:0] _GEN_97 = state == 2'h2 ? io_lsu_axi_in_wstrb : _GEN_75; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_98 = state == 2'h2 ? io_lsu_axi_in_wvalid : _GEN_76; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_99 = state == 2'h2 ? io_lsu_axi_in_bready : _GEN_77; // @[axi_arbiter.scala 70:39 71:24]
  wire  _GEN_100 = state == 2'h2 ? io_axi_in_arready : _GEN_78; // @[axi_arbiter.scala 70:39 72:28]
  wire [63:0] _GEN_101 = state == 2'h2 ? io_axi_in_rdata : _GEN_79; // @[axi_arbiter.scala 70:39 72:28]
  wire  _GEN_102 = state == 2'h2 ? io_axi_in_rvalid : _GEN_80; // @[axi_arbiter.scala 70:39 72:28]
  wire  _GEN_103 = state == 2'h2 ? io_axi_in_awready : _GEN_81; // @[axi_arbiter.scala 70:39 72:28]
  wire  _GEN_104 = state == 2'h2 ? io_axi_in_wready : _GEN_82; // @[axi_arbiter.scala 70:39 72:28]
  wire  _GEN_105 = state == 2'h2 ? io_axi_in_bvalid : _GEN_83; // @[axi_arbiter.scala 70:39 72:28]
  wire [31:0] _GEN_113 = state == 2'h1 ? io_ifu_axi_in_araddr : _GEN_91; // @[axi_arbiter.scala 62:39 63:24]
  wire  _GEN_114 = state == 2'h1 ? io_ifu_axi_in_arvalid : _GEN_92; // @[axi_arbiter.scala 62:39 63:24]
  wire  _GEN_115 = state == 2'h1 ? io_ifu_axi_in_rready : _GEN_93; // @[axi_arbiter.scala 62:39 63:24]
  wire [31:0] _GEN_116 = state == 2'h1 ? 32'h0 : _GEN_94; // @[axi_arbiter.scala 62:39 63:24]
  wire  _GEN_117 = state == 2'h1 ? 1'h0 : _GEN_95; // @[axi_arbiter.scala 62:39 63:24]
  wire [31:0] _GEN_118 = state == 2'h1 ? 32'h0 : _GEN_96; // @[axi_arbiter.scala 62:39 63:24]
  wire [7:0] _GEN_119 = state == 2'h1 ? 8'h0 : _GEN_97; // @[axi_arbiter.scala 62:39 63:24]
  wire  _GEN_120 = state == 2'h1 ? 1'h0 : _GEN_98; // @[axi_arbiter.scala 62:39 63:24]
  wire  _GEN_121 = state == 2'h1 ? 1'h0 : _GEN_99; // @[axi_arbiter.scala 62:39 63:24]
  wire [63:0] _GEN_123 = state == 2'h1 ? io_axi_in_rdata : 64'h0; // @[axi_arbiter.scala 62:39 64:28]
  wire  _GEN_124 = state == 2'h1 & io_axi_in_rvalid; // @[axi_arbiter.scala 62:39 64:28]
  wire  _GEN_128 = state == 2'h1 ? 1'h0 : _GEN_100; // @[axi_arbiter.scala 62:39 65:28]
  wire [63:0] _GEN_129 = state == 2'h1 ? 64'h0 : _GEN_101; // @[axi_arbiter.scala 62:39 65:28]
  wire  _GEN_130 = state == 2'h1 ? 1'h0 : _GEN_102; // @[axi_arbiter.scala 62:39 65:28]
  wire  _GEN_131 = state == 2'h1 ? 1'h0 : _GEN_103; // @[axi_arbiter.scala 62:39 65:28]
  wire  _GEN_132 = state == 2'h1 ? 1'h0 : _GEN_104; // @[axi_arbiter.scala 62:39 65:28]
  wire  _GEN_133 = state == 2'h1 ? 1'h0 : _GEN_105; // @[axi_arbiter.scala 62:39 65:28]
  assign io_ifu_axi_out_rdata = state == 2'h0 ? _GEN_61 : _GEN_123; // @[axi_arbiter.scala 40:27]
  assign io_ifu_axi_out_rvalid = state == 2'h0 ? _GEN_62 : _GEN_124; // @[axi_arbiter.scala 40:27]
  assign io_lsu_axi_out_arready = state == 2'h0 ? _GEN_54 : _GEN_128; // @[axi_arbiter.scala 40:27]
  assign io_lsu_axi_out_rdata = state == 2'h0 ? _GEN_55 : _GEN_129; // @[axi_arbiter.scala 40:27]
  assign io_lsu_axi_out_rvalid = state == 2'h0 ? _GEN_56 : _GEN_130; // @[axi_arbiter.scala 40:27]
  assign io_lsu_axi_out_awready = state == 2'h0 ? _GEN_57 : _GEN_131; // @[axi_arbiter.scala 40:27]
  assign io_lsu_axi_out_wready = state == 2'h0 ? _GEN_58 : _GEN_132; // @[axi_arbiter.scala 40:27]
  assign io_lsu_axi_out_bvalid = state == 2'h0 ? _GEN_59 : _GEN_133; // @[axi_arbiter.scala 40:27]
  assign io_axi_out_araddr = state == 2'h0 ? _GEN_45 : _GEN_113; // @[axi_arbiter.scala 40:27]
  assign io_axi_out_arvalid = state == 2'h0 ? _GEN_46 : _GEN_114; // @[axi_arbiter.scala 40:27]
  assign io_axi_out_rready = state == 2'h0 ? _GEN_47 : _GEN_115; // @[axi_arbiter.scala 40:27]
  assign io_axi_out_awaddr = state == 2'h0 ? _GEN_48 : _GEN_116; // @[axi_arbiter.scala 40:27]
  assign io_axi_out_awvalid = state == 2'h0 ? _GEN_49 : _GEN_117; // @[axi_arbiter.scala 40:27]
  assign io_axi_out_wdata = state == 2'h0 ? _GEN_50 : _GEN_118; // @[axi_arbiter.scala 40:27]
  assign io_axi_out_wstrb = state == 2'h0 ? _GEN_51 : _GEN_119; // @[axi_arbiter.scala 40:27]
  assign io_axi_out_wvalid = state == 2'h0 ? _GEN_52 : _GEN_120; // @[axi_arbiter.scala 40:27]
  assign io_axi_out_bready = state == 2'h0 ? _GEN_53 : _GEN_121; // @[axi_arbiter.scala 40:27]
  always @(posedge clock) begin
    if (reset) begin // @[axi_arbiter.scala 18:24]
      state <= 2'h0; // @[axi_arbiter.scala 18:24]
    end else if (state == 2'h0) begin // @[axi_arbiter.scala 40:27]
      if (io_lsu_axi_in_awvalid) begin // @[axi_arbiter.scala 41:40]
        state <= 2'h3; // @[axi_arbiter.scala 42:23]
      end else if (io_lsu_axi_in_arvalid) begin // @[axi_arbiter.scala 46:46]
        state <= 2'h2; // @[axi_arbiter.scala 47:23]
      end else begin
        state <= _GEN_0;
      end
    end else if (state == 2'h1) begin // @[axi_arbiter.scala 62:39]
      if (io_ifu_axi_out_rvalid & io_ifu_axi_in_rready) begin // @[axi_arbiter.scala 66:64]
        state <= 2'h0; // @[axi_arbiter.scala 67:23]
      end
    end else if (state == 2'h2) begin // @[axi_arbiter.scala 70:39]
      state <= _GEN_67;
    end else begin
      state <= _GEN_90;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"arbiter state:%d\n",state); // @[axi_arbiter.scala 38:11]
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
          $fwrite(32'h80000002,"ifu_arvalid:%d lsu_awvalid:%d lsu_arvalid:%d\n",io_ifu_axi_in_arvalid,
            io_lsu_axi_in_awvalid,io_lsu_axi_in_arvalid); // @[axi_arbiter.scala 39:11]
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
  state = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
