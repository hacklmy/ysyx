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
  wire [63:0] Reg_MPORT_data; // @[register.scala 18:18]
  wire [4:0] Reg_MPORT_addr; // @[register.scala 18:18]
  wire  Reg_MPORT_mask; // @[register.scala 18:18]
  wire  Reg_MPORT_en; // @[register.scala 18:18]
  assign Reg_io_rdata1_MPORT_en = 1'h1;
  assign Reg_io_rdata1_MPORT_addr = io_raddr1;
  assign Reg_io_rdata1_MPORT_data = Reg[Reg_io_rdata1_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_io_rdata2_MPORT_en = 1'h1;
  assign Reg_io_rdata2_MPORT_addr = io_raddr2;
  assign Reg_io_rdata2_MPORT_data = Reg[Reg_io_rdata2_MPORT_addr]; // @[register.scala 18:18]
  assign Reg_MPORT_data = io_wdata;
  assign Reg_MPORT_addr = io_waddr;
  assign Reg_MPORT_mask = 1'h1;
  assign Reg_MPORT_en = io_we;
  assign io_rdata1 = io_raddr1 == 5'h0 ? 64'h0 : Reg_io_rdata1_MPORT_data; // @[register.scala 22:21]
  assign io_rdata2 = io_raddr2 == 5'h0 ? 64'h0 : Reg_io_rdata2_MPORT_data; // @[register.scala 23:21]
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
          $fwrite(32'h80000002,"fs_pc:%x \n",fs_pc); // @[IFU.scala 50:11]
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
module IDU(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_fs_to_ds_valid,
  output        io_ds_to_es_valid,
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
  output [31:0] io_inst_now,
  output [63:0] io_src1,
  output [63:0] io_src2,
  output [4:0]  io_rf_dst,
  output [63:0] io_store_data,
  output        io_ctrl_sign_reg_write,
  output        io_ctrl_sign_Writemem_en,
  output        io_ctrl_sign_Readmem_en,
  output [7:0]  io_ctrl_sign_Wmask,
  input         io_es_rf_we,
  input         io_ms_rf_we,
  input         io_ws_rf_we,
  input         io_es_valid,
  input         io_ms_valid,
  input         io_ws_valid,
  input  [4:0]  io_es_rf_dst,
  input  [4:0]  io_ms_rf_dst,
  input  [4:0]  io_ws_rf_dst
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg  ds_valid; // @[IDU.scala 77:27]
  reg [63:0] ds_pc; // @[IDU.scala 81:24]
  reg [31:0] inst; // @[IDU.scala 83:23]
  wire [31:0] _inst_now_T = inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _inst_now_T_1 = 32'h13 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_3 = 32'h100073 == inst; // @[Lookup.scala 31:38]
  wire [31:0] _inst_now_T_4 = inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _inst_now_T_5 = 32'h17 == _inst_now_T_4; // @[Lookup.scala 31:38]
  wire  _inst_now_T_7 = 32'h37 == _inst_now_T_4; // @[Lookup.scala 31:38]
  wire  _inst_now_T_9 = 32'h6f == _inst_now_T_4; // @[Lookup.scala 31:38]
  wire  _inst_now_T_11 = 32'h67 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_13 = 32'h3023 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_15 = 32'h3013 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_17 = 32'h2003 == _inst_now_T; // @[Lookup.scala 31:38]
  wire [31:0] _inst_now_T_18 = inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _inst_now_T_19 = 32'h3b == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_21 = 32'h40000033 == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_23 = 32'h1063 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_25 = 32'h63 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_27 = 32'h3003 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_29 = 32'h1b == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_31 = 32'h33 == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire [31:0] _inst_now_T_32 = inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _inst_now_T_33 = 32'h40005013 == _inst_now_T_32; // @[Lookup.scala 31:38]
  wire  _inst_now_T_35 = 32'h4003 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_37 = 32'h1023 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_39 = 32'h23 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_41 = 32'h6033 == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_43 = 32'h4013 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_45 = 32'h7033 == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_47 = 32'h7013 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_49 = 32'h4000003b == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_51 = 32'h103b == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_53 = 32'h1013 == _inst_now_T_32; // @[Lookup.scala 31:38]
  wire  _inst_now_T_55 = 32'h5013 == _inst_now_T_32; // @[Lookup.scala 31:38]
  wire  _inst_now_T_57 = 32'h101b == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_59 = 32'h4000501b == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_61 = 32'h501b == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_63 = 32'h4000503b == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_65 = 32'h503b == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_67 = 32'h3033 == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_69 = 32'h2033 == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_71 = 32'h5063 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_73 = 32'h4063 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_75 = 32'h6063 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_77 = 32'h2023 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_79 = 32'h1003 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_81 = 32'h5003 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_83 = 32'h2000033 == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_85 = 32'h200003b == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_87 = 32'h200403b == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_89 = 32'h200603b == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_91 = 32'h4033 == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_93 = 32'h6013 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_95 = 32'h2005033 == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_97 = 32'h2004033 == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_99 = 32'h200503b == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_101 = 32'h200703b == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_103 = 32'h2007033 == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_105 = 32'h2006033 == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_107 = 32'h1033 == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_109 = 32'h5033 == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_111 = 32'h40005033 == _inst_now_T_18; // @[Lookup.scala 31:38]
  wire  _inst_now_T_113 = 32'h2013 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_115 = 32'h6003 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_117 = 32'h3 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_119 = 32'h7063 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_121 = 32'h73 == inst; // @[Lookup.scala 31:38]
  wire  _inst_now_T_123 = 32'h30200073 == inst; // @[Lookup.scala 31:38]
  wire  _inst_now_T_125 = 32'h1073 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_127 = 32'h2073 == _inst_now_T; // @[Lookup.scala 31:38]
  wire  _inst_now_T_129 = 32'h3073 == _inst_now_T; // @[Lookup.scala 31:38]
  wire [6:0] _inst_now_T_130 = _inst_now_T_129 ? 7'h47 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_131 = _inst_now_T_127 ? 7'h46 : _inst_now_T_130; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_132 = _inst_now_T_125 ? 7'h3f : _inst_now_T_131; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_133 = _inst_now_T_123 ? 7'h3e : _inst_now_T_132; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_134 = _inst_now_T_121 ? 7'h3d : _inst_now_T_133; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_135 = _inst_now_T_119 ? 7'h3c : _inst_now_T_134; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_136 = _inst_now_T_117 ? 7'h3b : _inst_now_T_135; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_137 = _inst_now_T_115 ? 7'h3a : _inst_now_T_136; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_138 = _inst_now_T_113 ? 7'h36 : _inst_now_T_137; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_139 = _inst_now_T_111 ? 7'h39 : _inst_now_T_138; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_140 = _inst_now_T_109 ? 7'h38 : _inst_now_T_139; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_141 = _inst_now_T_107 ? 7'h37 : _inst_now_T_140; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_142 = _inst_now_T_105 ? 7'h34 : _inst_now_T_141; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_143 = _inst_now_T_103 ? 7'h33 : _inst_now_T_142; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_144 = _inst_now_T_101 ? 7'h32 : _inst_now_T_143; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_145 = _inst_now_T_99 ? 7'h35 : _inst_now_T_144; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_146 = _inst_now_T_97 ? 7'h31 : _inst_now_T_145; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_147 = _inst_now_T_95 ? 7'h30 : _inst_now_T_146; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_148 = _inst_now_T_93 ? 7'h2f : _inst_now_T_147; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_149 = _inst_now_T_91 ? 7'h2e : _inst_now_T_148; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_150 = _inst_now_T_89 ? 7'h14 : _inst_now_T_149; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_151 = _inst_now_T_87 ? 7'h13 : _inst_now_T_150; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_152 = _inst_now_T_85 ? 7'h12 : _inst_now_T_151; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_153 = _inst_now_T_83 ? 7'h11 : _inst_now_T_152; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_154 = _inst_now_T_81 ? 7'h25 : _inst_now_T_153; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_155 = _inst_now_T_79 ? 7'h24 : _inst_now_T_154; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_156 = _inst_now_T_77 ? 7'h27 : _inst_now_T_155; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_157 = _inst_now_T_75 ? 7'h2d : _inst_now_T_156; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_158 = _inst_now_T_73 ? 7'h2c : _inst_now_T_157; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_159 = _inst_now_T_71 ? 7'h2b : _inst_now_T_158; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_160 = _inst_now_T_69 ? 7'h1f : _inst_now_T_159; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_161 = _inst_now_T_67 ? 7'h1e : _inst_now_T_160; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_162 = _inst_now_T_65 ? 7'h1d : _inst_now_T_161; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_163 = _inst_now_T_63 ? 7'h1c : _inst_now_T_162; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_164 = _inst_now_T_61 ? 7'h1b : _inst_now_T_163; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_165 = _inst_now_T_59 ? 7'h1a : _inst_now_T_164; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_166 = _inst_now_T_57 ? 7'h19 : _inst_now_T_165; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_167 = _inst_now_T_55 ? 7'h18 : _inst_now_T_166; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_168 = _inst_now_T_53 ? 7'h17 : _inst_now_T_167; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_169 = _inst_now_T_51 ? 7'h16 : _inst_now_T_168; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_170 = _inst_now_T_49 ? 7'hd : _inst_now_T_169; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_171 = _inst_now_T_47 ? 7'h9 : _inst_now_T_170; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_172 = _inst_now_T_45 ? 7'h8 : _inst_now_T_171; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_173 = _inst_now_T_43 ? 7'ha : _inst_now_T_172; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_174 = _inst_now_T_41 ? 7'hb : _inst_now_T_173; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_175 = _inst_now_T_39 ? 7'h28 : _inst_now_T_174; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_176 = _inst_now_T_37 ? 7'h26 : _inst_now_T_175; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_177 = _inst_now_T_35 ? 7'h23 : _inst_now_T_176; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_178 = _inst_now_T_33 ? 7'h15 : _inst_now_T_177; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_179 = _inst_now_T_31 ? 7'hf : _inst_now_T_178; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_180 = _inst_now_T_29 ? 7'h10 : _inst_now_T_179; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_181 = _inst_now_T_27 ? 7'h22 : _inst_now_T_180; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_182 = _inst_now_T_25 ? 7'h29 : _inst_now_T_181; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_183 = _inst_now_T_23 ? 7'h2a : _inst_now_T_182; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_184 = _inst_now_T_21 ? 7'he : _inst_now_T_183; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_185 = _inst_now_T_19 ? 7'hc : _inst_now_T_184; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_186 = _inst_now_T_17 ? 7'h21 : _inst_now_T_185; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_187 = _inst_now_T_15 ? 7'h20 : _inst_now_T_186; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_188 = _inst_now_T_13 ? 7'h7 : _inst_now_T_187; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_189 = _inst_now_T_11 ? 7'h6 : _inst_now_T_188; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_190 = _inst_now_T_9 ? 7'h5 : _inst_now_T_189; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_191 = _inst_now_T_7 ? 7'h4 : _inst_now_T_190; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_192 = _inst_now_T_5 ? 7'h3 : _inst_now_T_191; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_193 = _inst_now_T_3 ? 7'h2 : _inst_now_T_192; // @[Lookup.scala 34:39]
  wire [6:0] _inst_now_T_194 = _inst_now_T_1 ? 7'h1 : _inst_now_T_193; // @[Lookup.scala 34:39]
  wire [31:0] inst_now = {{25'd0}, _inst_now_T_194}; // @[IDU.scala 181:24 281:14]
  wire  _br_taken_T_18 = io_rdata1 >= io_rdata2; // @[IDU.scala 428:33]
  wire  _br_taken_T_16 = io_rdata1 < io_rdata2; // @[IDU.scala 427:33]
  wire  _br_taken_T_14 = $signed(io_rdata1) < $signed(io_rdata2); // @[IDU.scala 426:39]
  wire  _br_taken_T_10 = $signed(io_rdata1) >= $signed(io_rdata2); // @[IDU.scala 425:39]
  wire  _br_taken_T_6 = $signed(io_rdata1) == $signed(io_rdata2); // @[IDU.scala 424:39]
  wire  _br_taken_T_2 = $signed(io_rdata1) != $signed(io_rdata2); // @[IDU.scala 423:39]
  wire  _br_taken_T_25 = 32'h2a == inst_now ? _br_taken_T_2 : 32'h6 == inst_now | 32'h5 == inst_now; // @[Mux.scala 81:58]
  wire  _br_taken_T_27 = 32'h29 == inst_now ? _br_taken_T_6 : _br_taken_T_25; // @[Mux.scala 81:58]
  wire  _br_taken_T_29 = 32'h2b == inst_now ? _br_taken_T_10 : _br_taken_T_27; // @[Mux.scala 81:58]
  wire  _br_taken_T_31 = 32'h2c == inst_now ? _br_taken_T_14 : _br_taken_T_29; // @[Mux.scala 81:58]
  wire  _br_taken_T_33 = 32'h2d == inst_now ? _br_taken_T_16 : _br_taken_T_31; // @[Mux.scala 81:58]
  wire  _br_taken_T_35 = 32'h3c == inst_now ? _br_taken_T_18 : _br_taken_T_33; // @[Mux.scala 81:58]
  wire  br_taken = 32'h3e == inst_now | (32'h3d == inst_now | _br_taken_T_35); // @[Mux.scala 81:58]
  wire  src1_is_pc = _inst_now_T_9 | (_inst_now_T_5 | (_inst_now_T_23 | (_inst_now_T_25 | (_inst_now_T_71 | (
    _inst_now_T_73 | (_inst_now_T_75 | _inst_now_T_119)))))); // @[Lookup.scala 34:39]
  wire [4:0] rs1 = inst[19:15]; // @[IDU.scala 202:16]
  wire [6:0] _inst_type_T_126 = _inst_now_T_129 ? 7'h40 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_127 = _inst_now_T_127 ? 7'h40 : _inst_type_T_126; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_128 = _inst_now_T_125 ? 7'h40 : _inst_type_T_127; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_129 = _inst_now_T_121 ? 7'h40 : _inst_type_T_128; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_130 = _inst_now_T_119 ? 7'h45 : _inst_type_T_129; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_131 = _inst_now_T_117 ? 7'h40 : _inst_type_T_130; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_132 = _inst_now_T_115 ? 7'h40 : _inst_type_T_131; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_133 = _inst_now_T_113 ? 7'h40 : _inst_type_T_132; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_134 = _inst_now_T_111 ? 7'h41 : _inst_type_T_133; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_135 = _inst_now_T_109 ? 7'h41 : _inst_type_T_134; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_136 = _inst_now_T_107 ? 7'h41 : _inst_type_T_135; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_137 = _inst_now_T_105 ? 7'h41 : _inst_type_T_136; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_138 = _inst_now_T_103 ? 7'h41 : _inst_type_T_137; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_139 = _inst_now_T_101 ? 7'h41 : _inst_type_T_138; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_140 = _inst_now_T_99 ? 7'h41 : _inst_type_T_139; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_141 = _inst_now_T_97 ? 7'h41 : _inst_type_T_140; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_142 = _inst_now_T_95 ? 7'h41 : _inst_type_T_141; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_143 = _inst_now_T_93 ? 7'h40 : _inst_type_T_142; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_144 = _inst_now_T_91 ? 7'h41 : _inst_type_T_143; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_145 = _inst_now_T_89 ? 7'h41 : _inst_type_T_144; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_146 = _inst_now_T_87 ? 7'h41 : _inst_type_T_145; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_147 = _inst_now_T_85 ? 7'h41 : _inst_type_T_146; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_148 = _inst_now_T_83 ? 7'h41 : _inst_type_T_147; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_149 = _inst_now_T_81 ? 7'h40 : _inst_type_T_148; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_150 = _inst_now_T_79 ? 7'h40 : _inst_type_T_149; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_151 = _inst_now_T_77 ? 7'h44 : _inst_type_T_150; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_152 = _inst_now_T_75 ? 7'h45 : _inst_type_T_151; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_153 = _inst_now_T_73 ? 7'h45 : _inst_type_T_152; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_154 = _inst_now_T_71 ? 7'h45 : _inst_type_T_153; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_155 = _inst_now_T_69 ? 7'h41 : _inst_type_T_154; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_156 = _inst_now_T_67 ? 7'h41 : _inst_type_T_155; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_157 = _inst_now_T_65 ? 7'h41 : _inst_type_T_156; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_158 = _inst_now_T_63 ? 7'h41 : _inst_type_T_157; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_159 = _inst_now_T_61 ? 7'h40 : _inst_type_T_158; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_160 = _inst_now_T_59 ? 7'h40 : _inst_type_T_159; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_161 = _inst_now_T_57 ? 7'h40 : _inst_type_T_160; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_162 = _inst_now_T_55 ? 7'h40 : _inst_type_T_161; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_163 = _inst_now_T_53 ? 7'h40 : _inst_type_T_162; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_164 = _inst_now_T_51 ? 7'h41 : _inst_type_T_163; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_165 = _inst_now_T_49 ? 7'h41 : _inst_type_T_164; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_166 = _inst_now_T_47 ? 7'h40 : _inst_type_T_165; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_167 = _inst_now_T_45 ? 7'h41 : _inst_type_T_166; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_168 = _inst_now_T_43 ? 7'h40 : _inst_type_T_167; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_169 = _inst_now_T_41 ? 7'h41 : _inst_type_T_168; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_170 = _inst_now_T_39 ? 7'h44 : _inst_type_T_169; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_171 = _inst_now_T_37 ? 7'h44 : _inst_type_T_170; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_172 = _inst_now_T_35 ? 7'h40 : _inst_type_T_171; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_173 = _inst_now_T_33 ? 7'h40 : _inst_type_T_172; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_174 = _inst_now_T_31 ? 7'h41 : _inst_type_T_173; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_175 = _inst_now_T_29 ? 7'h40 : _inst_type_T_174; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_176 = _inst_now_T_27 ? 7'h40 : _inst_type_T_175; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_177 = _inst_now_T_25 ? 7'h45 : _inst_type_T_176; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_178 = _inst_now_T_23 ? 7'h45 : _inst_type_T_177; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_179 = _inst_now_T_21 ? 7'h41 : _inst_type_T_178; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_180 = _inst_now_T_19 ? 7'h41 : _inst_type_T_179; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_181 = _inst_now_T_17 ? 7'h40 : _inst_type_T_180; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_182 = _inst_now_T_15 ? 7'h40 : _inst_type_T_181; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_183 = _inst_now_T_13 ? 7'h44 : _inst_type_T_182; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_184 = _inst_now_T_11 ? 7'h40 : _inst_type_T_183; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_185 = _inst_now_T_9 ? 7'h43 : _inst_type_T_184; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_186 = _inst_now_T_7 ? 7'h42 : _inst_type_T_185; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_187 = _inst_now_T_5 ? 7'h42 : _inst_type_T_186; // @[Lookup.scala 34:39]
  wire [6:0] _inst_type_T_188 = _inst_now_T_1 ? 7'h40 : _inst_type_T_187; // @[Lookup.scala 34:39]
  wire [31:0] inst_type = {{25'd0}, _inst_type_T_188}; // @[IDU.scala 182:25 207:15]
  wire  src2_is_imm = 32'h45 == inst_type | (32'h43 == inst_type | (32'h44 == inst_type | (32'h42 == inst_type | 32'h40
     == inst_type))); // @[Mux.scala 81:58]
  wire [4:0] rs2 = inst[24:20]; // @[IDU.scala 201:16]
  wire  _conflict_T_39 = (~src2_is_imm | inst_type != 32'h45) & (rs2 == io_es_rf_dst & rs2 != 5'h0 & io_es_rf_we &
    io_es_valid | rs2 == io_ms_rf_dst & rs2 != 5'h0 & io_ms_rf_we & io_ms_valid | rs2 == io_ws_rf_dst & rs2 != 5'h0 &
    io_ws_rf_we & io_ws_valid); // @[IDU.scala 433:263]
  wire  conflict = ~src1_is_pc & (rs1 == io_es_rf_dst & rs1 != 5'h0 & io_es_rf_we & io_es_valid | rs1 == io_ms_rf_dst &
    rs1 != 5'h0 & io_ms_rf_we & io_ms_valid | rs1 == io_ws_rf_dst & rs1 != 5'h0 & io_ws_rf_we & io_ws_valid) |
    _conflict_T_39; // @[IDU.scala 433:223]
  wire  ds_ready_go = ~conflict; // @[IDU.scala 102:20]
  wire  br_taken_cancel = br_taken & ds_ready_go; // @[IDU.scala 91:33]
  wire  ds_allowin = ~ds_valid | ds_ready_go; // @[IDU.scala 104:29]
  wire [4:0] rd = inst[11:7]; // @[IDU.scala 203:15]
  wire [11:0] imm_imm = inst[31:20]; // @[IDU.scala 48:23]
  wire [51:0] _imm_T_2 = imm_imm[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_3 = {_imm_T_2,imm_imm}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_1 = {inst[31],inst[19:12],inst[20],inst[30:21]}; // @[Cat.scala 31:58]
  wire [42:0] _imm_T_6 = imm_imm_1[19] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _imm_T_7 = {_imm_T_6,inst[31],inst[19:12],inst[20],inst[30:21],1'h0}; // @[Cat.scala 31:58]
  wire [19:0] imm_imm_2 = inst[31:12]; // @[IDU.scala 52:23]
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
  wire  _reg_write_T_26 = _inst_now_T_123 ? 1'h0 : 1'h1; // @[Lookup.scala 34:39]
  wire  _reg_write_T_27 = _inst_now_T_121 ? 1'h0 : _reg_write_T_26; // @[Lookup.scala 34:39]
  wire  _reg_write_T_28 = _inst_now_T_119 ? 1'h0 : _reg_write_T_27; // @[Lookup.scala 34:39]
  wire  _reg_write_T_29 = _inst_now_T_75 ? 1'h0 : _reg_write_T_28; // @[Lookup.scala 34:39]
  wire  _reg_write_T_30 = _inst_now_T_73 ? 1'h0 : _reg_write_T_29; // @[Lookup.scala 34:39]
  wire  _reg_write_T_31 = _inst_now_T_71 ? 1'h0 : _reg_write_T_30; // @[Lookup.scala 34:39]
  wire  _reg_write_T_32 = _inst_now_T_25 ? 1'h0 : _reg_write_T_31; // @[Lookup.scala 34:39]
  wire  _reg_write_T_33 = _inst_now_T_23 ? 1'h0 : _reg_write_T_32; // @[Lookup.scala 34:39]
  wire  _reg_write_T_34 = _inst_now_T_77 ? 1'h0 : _reg_write_T_33; // @[Lookup.scala 34:39]
  wire  _reg_write_T_35 = _inst_now_T_39 ? 1'h0 : _reg_write_T_34; // @[Lookup.scala 34:39]
  wire  _reg_write_T_36 = _inst_now_T_37 ? 1'h0 : _reg_write_T_35; // @[Lookup.scala 34:39]
  wire  _reg_write_T_37 = _inst_now_T_13 ? 1'h0 : _reg_write_T_36; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_8 = _inst_now_T_77 ? 4'hf : 4'h0; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_9 = _inst_now_T_39 ? 4'h1 : _Wmask_T_8; // @[Lookup.scala 34:39]
  wire [3:0] _Wmask_T_10 = _inst_now_T_37 ? 4'h3 : _Wmask_T_9; // @[Lookup.scala 34:39]
  wire [63:0] src1 = src1_is_pc ? ds_pc : io_rdata1; // @[IDU.scala 411:16]
  wire [63:0] src2 = src2_is_imm ? imm : io_rdata2; // @[IDU.scala 412:16]
  wire [63:0] _br_target_T_1 = src1 + src2; // @[IDU.scala 415:42]
  wire [63:0] _br_target_T_4 = _br_target_T_1 & 64'hfffffffffffffffe; // @[IDU.scala 416:33]
  wire [63:0] _io_store_data_T_4 = 32'h7 == io_inst_now ? io_rdata2 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_store_data_T_6 = 32'h26 == io_inst_now ? {{48'd0}, io_rdata2[15:0]} : _io_store_data_T_4; // @[Mux.scala 81:58]
  wire [63:0] _io_store_data_T_8 = 32'h28 == io_inst_now ? {{56'd0}, io_rdata2[7:0]} : _io_store_data_T_6; // @[Mux.scala 81:58]
  assign io_ds_to_es_valid = ds_valid & ds_ready_go; // @[IDU.scala 103:32]
  assign io_br_taken = 32'h3e == inst_now | (32'h3d == inst_now | _br_taken_T_35); // @[Mux.scala 81:58]
  assign io_br_target = 32'h6 == inst_now ? _br_target_T_4 : _br_target_T_1; // @[Mux.scala 81:58]
  assign io_br_taken_cancel = br_taken & ds_ready_go; // @[IDU.scala 91:33]
  assign io_ds_allowin = ~ds_valid | ds_ready_go; // @[IDU.scala 104:29]
  assign io_raddr1 = inst[19:15]; // @[IDU.scala 202:16]
  assign io_raddr2 = inst[24:20]; // @[IDU.scala 201:16]
  assign io_to_es_pc = ds_pc; // @[IDU.scala 457:17]
  assign io_inst_now = {{25'd0}, _inst_now_T_194}; // @[IDU.scala 181:24 281:14]
  assign io_src1 = src1_is_pc ? ds_pc : io_rdata1; // @[IDU.scala 411:16]
  assign io_src2 = src2_is_imm ? imm : io_rdata2; // @[IDU.scala 412:16]
  assign io_rf_dst = inst[11:7]; // @[IDU.scala 203:15]
  assign io_store_data = 32'h27 == io_inst_now ? {{32'd0}, io_rdata2[31:0]} : _io_store_data_T_8; // @[Mux.scala 81:58]
  assign io_ctrl_sign_reg_write = _inst_now_T_3 ? 1'h0 : _reg_write_T_37; // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Writemem_en = 32'h44 == inst_type; // @[Mux.scala 81:61]
  assign io_ctrl_sign_Readmem_en = _inst_now_T_27 | (_inst_now_T_17 | (_inst_now_T_115 | (_inst_now_T_79 | (
    _inst_now_T_81 | (_inst_now_T_117 | _inst_now_T_35))))); // @[Lookup.scala 34:39]
  assign io_ctrl_sign_Wmask = _inst_now_T_13 ? 8'hff : {{4'd0}, _Wmask_T_10}; // @[Lookup.scala 34:39]
  always @(posedge clock) begin
    if (reset) begin // @[IDU.scala 77:27]
      ds_valid <= 1'h0; // @[IDU.scala 77:27]
    end else if (br_taken_cancel) begin // @[IDU.scala 93:26]
      ds_valid <= 1'h0; // @[IDU.scala 94:18]
    end else if (ds_allowin) begin // @[IDU.scala 95:27]
      ds_valid <= io_fs_to_ds_valid; // @[IDU.scala 96:18]
    end
    if (reset) begin // @[IDU.scala 81:24]
      ds_pc <= 64'h0; // @[IDU.scala 81:24]
    end else if (io_fs_to_ds_valid & ds_allowin) begin // @[IDU.scala 98:40]
      ds_pc <= io_pc; // @[IDU.scala 99:15]
    end
    if (reset) begin // @[IDU.scala 83:23]
      inst <= 32'h0; // @[IDU.scala 83:23]
    end else if (io_fs_to_ds_valid & ds_allowin) begin // @[IDU.scala 98:40]
      inst <= io_from_fs_inst; // @[IDU.scala 100:14]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"ds_pc:%x br_taken:%d\n",ds_pc,br_taken); // @[IDU.scala 459:11]
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
module EXU(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_ds_to_es_valid,
  input  [31:0] io_inst_now,
  input  [4:0]  io_src1_value,
  input  [4:0]  io_src2_value,
  input  [4:0]  io_rf_dst,
  input  [63:0] io_store_data,
  output        io_es_to_ms_valid,
  output [63:0] io_to_ms_pc,
  output [63:0] io_to_ms_alures,
  output [63:0] io_to_ms_store_data,
  output        io_to_ms_wen,
  output [7:0]  io_to_ms_wstrb,
  output        io_to_ms_ren,
  output [63:0] io_to_ms_maddr,
  output [4:0]  io_to_ms_rf_dst,
  output        io_to_ms_rf_we,
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
`endif // RANDOMIZE_REG_INIT
  reg [63:0] es_pc; // @[EXU.scala 35:24]
  reg  es_valid; // @[EXU.scala 36:27]
  reg [4:0] es_rd; // @[EXU.scala 40:24]
  reg  es_rf_we; // @[EXU.scala 41:27]
  reg [63:0] src1_value; // @[EXU.scala 43:29]
  reg [63:0] src2_value; // @[EXU.scala 44:29]
  reg [63:0] store_data; // @[EXU.scala 45:29]
  reg [7:0] st_wstrb; // @[EXU.scala 46:27]
  reg  st_we; // @[EXU.scala 47:24]
  reg  ld_we; // @[EXU.scala 48:24]
  wire [63:0] add_res = src1_value + src2_value; // @[EXU.scala 88:30]
  wire [63:0] sub_res = src1_value - src2_value; // @[EXU.scala 89:30]
  wire [63:0] sra_res = $signed(src1_value) >>> src2_value[5:0]; // @[EXU.scala 90:60]
  wire [63:0] srl_res = src1_value >> src2_value[5:0]; // @[EXU.scala 91:30]
  wire [126:0] _GEN_3 = {{63'd0}, src1_value}; // @[EXU.scala 92:30]
  wire [126:0] sll_res = _GEN_3 << src2_value[5:0]; // @[EXU.scala 92:30]
  wire [31:0] _sraw_res_T_1 = src1_value[31:0]; // @[EXU.scala 93:43]
  wire [31:0] sraw_res = $signed(_sraw_res_T_1) >>> src2_value[4:0]; // @[EXU.scala 93:46]
  wire [31:0] srlw_res = src1_value[31:0] >> src2_value[4:0]; // @[EXU.scala 94:37]
  wire [62:0] _GEN_11 = {{31'd0}, src1_value[31:0]}; // @[EXU.scala 95:37]
  wire [62:0] sllw_res = _GEN_11 << src2_value[4:0]; // @[EXU.scala 95:37]
  wire [63:0] or_res = src1_value | src2_value; // @[EXU.scala 96:29]
  wire [63:0] xor_res = src1_value ^ src2_value; // @[EXU.scala 97:30]
  wire [63:0] and_res = src1_value & src2_value; // @[EXU.scala 98:30]
  wire [127:0] _mlu_res_T = src1_value * src2_value; // @[EXU.scala 99:31]
  wire [63:0] mlu_res = _mlu_res_T[63:0]; // @[EXU.scala 99:44]
  wire [63:0] _mluw_res_T_2 = src1_value[31:0] * src2_value[31:0]; // @[EXU.scala 100:38]
  wire [31:0] mluw_res = _mluw_res_T_2[31:0]; // @[EXU.scala 100:57]
  wire [31:0] _divw_res_T_3 = src2_value[31:0]; // @[EXU.scala 101:64]
  wire [32:0] _divw_res_T_4 = $signed(_sraw_res_T_1) / $signed(_divw_res_T_3); // @[EXU.scala 101:45]
  wire [31:0] divw_res = _divw_res_T_4[31:0]; // @[EXU.scala 101:71]
  wire [31:0] divuw_res = src1_value[31:0] / src2_value[31:0]; // @[EXU.scala 102:39]
  wire [31:0] remw_res = $signed(_sraw_res_T_1) % $signed(_divw_res_T_3); // @[EXU.scala 103:71]
  wire [31:0] remuw_res = src1_value[31:0] % src2_value[31:0]; // @[EXU.scala 104:39]
  wire [64:0] div_res = $signed(src1_value) / $signed(src2_value); // @[EXU.scala 105:59]
  wire [63:0] divu_res = src1_value / src2_value; // @[EXU.scala 106:31]
  wire [63:0] rem_res = $signed(src1_value) % $signed(src2_value); // @[EXU.scala 107:59]
  wire [63:0] remu_res = src1_value % src2_value; // @[EXU.scala 108:31]
  wire [63:0] _alu_res_T_1 = es_pc + 64'h4; // @[EXU.scala 113:24]
  wire  _alu_res_T_4 = src1_value < src2_value; // @[EXU.scala 115:34]
  wire  _alu_res_T_10 = $signed(src1_value) < $signed(src2_value); // @[EXU.scala 117:42]
  wire [31:0] _alu_res_T_18 = add_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_20 = {_alu_res_T_18,add_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_28 = sub_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_30 = {_alu_res_T_28,sub_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_33 = sllw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_35 = {_alu_res_T_33,sllw_res[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_43 = sraw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _alu_res_T_44 = $signed(_sraw_res_T_1) >>> src2_value[4:0]; // @[EXU.scala 142:56]
  wire [63:0] _alu_res_T_45 = {_alu_res_T_43,_alu_res_T_44}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_48 = srlw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_50 = {_alu_res_T_48,srlw_res}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_63 = mluw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_64 = {_alu_res_T_63,mluw_res}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_67 = divw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_68 = {_alu_res_T_67,divw_res}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_71 = divuw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_72 = {_alu_res_T_71,divuw_res}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_75 = remw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_76 = {_alu_res_T_75,remw_res}; // @[Cat.scala 31:58]
  wire [31:0] _alu_res_T_79 = remuw_res[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _alu_res_T_80 = {_alu_res_T_79,remuw_res}; // @[Cat.scala 31:58]
  wire [63:0] _alu_res_T_82 = 32'h1 == io_inst_now ? add_res : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_84 = 32'h3 == io_inst_now ? add_res : _alu_res_T_82; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_86 = 32'h4 == io_inst_now ? src2_value : _alu_res_T_84; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_88 = 32'h5 == io_inst_now ? _alu_res_T_1 : _alu_res_T_86; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_90 = 32'h6 == io_inst_now ? _alu_res_T_1 : _alu_res_T_88; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_92 = 32'h20 == io_inst_now ? {{63'd0}, _alu_res_T_4} : _alu_res_T_90; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_94 = 32'h1e == io_inst_now ? {{63'd0}, _alu_res_T_4} : _alu_res_T_92; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_96 = 32'h36 == io_inst_now ? {{63'd0}, _alu_res_T_10} : _alu_res_T_94; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_98 = 32'h1f == io_inst_now ? {{63'd0}, _alu_res_T_10} : _alu_res_T_96; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_100 = 32'hc == io_inst_now ? _alu_res_T_20 : _alu_res_T_98; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_102 = 32'he == io_inst_now ? sub_res : _alu_res_T_100; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_104 = 32'h10 == io_inst_now ? _alu_res_T_20 : _alu_res_T_102; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_106 = 32'hf == io_inst_now ? add_res : _alu_res_T_104; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_108 = 32'h15 == io_inst_now ? sra_res : _alu_res_T_106; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_110 = 32'hb == io_inst_now ? or_res : _alu_res_T_108; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_112 = 32'h2f == io_inst_now ? or_res : _alu_res_T_110; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_114 = 32'h2e == io_inst_now ? xor_res : _alu_res_T_112; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_116 = 32'ha == io_inst_now ? xor_res : _alu_res_T_114; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_118 = 32'h8 == io_inst_now ? and_res : _alu_res_T_116; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_120 = 32'h9 == io_inst_now ? and_res : _alu_res_T_118; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_122 = 32'hd == io_inst_now ? _alu_res_T_30 : _alu_res_T_120; // @[Mux.scala 81:58]
  wire [63:0] _alu_res_T_124 = 32'h16 == io_inst_now ? _alu_res_T_35 : _alu_res_T_122; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_126 = 32'h17 == io_inst_now ? sll_res : {{63'd0}, _alu_res_T_124}; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_128 = 32'h18 == io_inst_now ? {{63'd0}, srl_res} : _alu_res_T_126; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_130 = 32'h19 == io_inst_now ? {{63'd0}, _alu_res_T_35} : _alu_res_T_128; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_132 = 32'h1a == io_inst_now ? {{63'd0}, _alu_res_T_45} : _alu_res_T_130; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_134 = 32'h1b == io_inst_now ? {{63'd0}, _alu_res_T_50} : _alu_res_T_132; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_136 = 32'h1c == io_inst_now ? {{63'd0}, _alu_res_T_45} : _alu_res_T_134; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_138 = 32'h1d == io_inst_now ? {{63'd0}, _alu_res_T_50} : _alu_res_T_136; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_140 = 32'h11 == io_inst_now ? {{63'd0}, mlu_res} : _alu_res_T_138; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_142 = 32'h12 == io_inst_now ? {{63'd0}, _alu_res_T_64} : _alu_res_T_140; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_144 = 32'h13 == io_inst_now ? {{63'd0}, _alu_res_T_68} : _alu_res_T_142; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_146 = 32'h30 == io_inst_now ? {{63'd0}, divu_res} : _alu_res_T_144; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_148 = 32'h31 == io_inst_now ? {{62'd0}, div_res} : _alu_res_T_146; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_150 = 32'h35 == io_inst_now ? {{63'd0}, _alu_res_T_72} : _alu_res_T_148; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_152 = 32'h14 == io_inst_now ? {{63'd0}, _alu_res_T_76} : _alu_res_T_150; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_154 = 32'h32 == io_inst_now ? {{63'd0}, _alu_res_T_80} : _alu_res_T_152; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_156 = 32'h33 == io_inst_now ? {{63'd0}, remu_res} : _alu_res_T_154; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_158 = 32'h34 == io_inst_now ? {{63'd0}, rem_res} : _alu_res_T_156; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_160 = 32'h37 == io_inst_now ? sll_res : _alu_res_T_158; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_162 = 32'h39 == io_inst_now ? {{63'd0}, sra_res} : _alu_res_T_160; // @[Mux.scala 81:58]
  wire [126:0] _alu_res_T_164 = 32'h38 == io_inst_now ? {{63'd0}, srl_res} : _alu_res_T_162; // @[Mux.scala 81:58]
  wire [63:0] alu_res = _alu_res_T_164[63:0]; // @[EXU.scala 109:13 49:23]
  assign io_es_to_ms_valid = es_valid; // @[EXU.scala 67:32]
  assign io_to_ms_pc = es_pc; // @[EXU.scala 204:17]
  assign io_to_ms_alures = _alu_res_T_164[63:0]; // @[EXU.scala 109:13 49:23]
  assign io_to_ms_store_data = store_data; // @[EXU.scala 207:25]
  assign io_to_ms_wen = st_we; // @[EXU.scala 208:18]
  assign io_to_ms_wstrb = st_wstrb; // @[EXU.scala 209:20]
  assign io_to_ms_ren = ld_we; // @[EXU.scala 210:18]
  assign io_to_ms_maddr = src1_value + src2_value; // @[EXU.scala 88:30]
  assign io_to_ms_rf_dst = es_rd; // @[EXU.scala 212:21]
  assign io_to_ms_rf_we = es_rf_we; // @[EXU.scala 213:20]
  assign io_es_valid = es_valid; // @[EXU.scala 214:17]
  assign io_es_rf_we = es_rf_we; // @[EXU.scala 216:17]
  assign io_es_rf_dst = es_rd; // @[EXU.scala 215:18]
  always @(posedge clock) begin
    if (reset) begin // @[EXU.scala 35:24]
      es_pc <= 64'h0; // @[EXU.scala 35:24]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      es_pc <= io_pc; // @[EXU.scala 55:15]
    end
    if (reset) begin // @[EXU.scala 36:27]
      es_valid <= 1'h0; // @[EXU.scala 36:27]
    end else begin
      es_valid <= io_ds_to_es_valid;
    end
    if (reset) begin // @[EXU.scala 40:24]
      es_rd <= 5'h0; // @[EXU.scala 40:24]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      es_rd <= io_rf_dst; // @[EXU.scala 60:15]
    end
    if (reset) begin // @[EXU.scala 41:27]
      es_rf_we <= 1'h0; // @[EXU.scala 41:27]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      es_rf_we <= io_ctrl_sign_reg_write; // @[EXU.scala 56:18]
    end
    if (reset) begin // @[EXU.scala 43:29]
      src1_value <= 64'h0; // @[EXU.scala 43:29]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      src1_value <= {{59'd0}, io_src1_value}; // @[EXU.scala 58:20]
    end
    if (reset) begin // @[EXU.scala 44:29]
      src2_value <= 64'h0; // @[EXU.scala 44:29]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      src2_value <= {{59'd0}, io_src2_value}; // @[EXU.scala 59:20]
    end
    if (reset) begin // @[EXU.scala 45:29]
      store_data <= 64'h0; // @[EXU.scala 45:29]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      store_data <= io_store_data; // @[EXU.scala 61:20]
    end
    if (reset) begin // @[EXU.scala 46:27]
      st_wstrb <= 8'h0; // @[EXU.scala 46:27]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      st_wstrb <= io_ctrl_sign_Wmask; // @[EXU.scala 62:18]
    end
    if (reset) begin // @[EXU.scala 47:24]
      st_we <= 1'h0; // @[EXU.scala 47:24]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      st_we <= io_ctrl_sign_Writemem_en; // @[EXU.scala 63:15]
    end
    if (reset) begin // @[EXU.scala 48:24]
      ld_we <= 1'h0; // @[EXU.scala 48:24]
    end else if (io_ds_to_es_valid) begin // @[EXU.scala 54:42]
      ld_we <= io_ctrl_sign_Readmem_en; // @[EXU.scala 64:15]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"es_pc:%x alu_res:%x\n",es_pc,alu_res); // @[EXU.scala 217:11]
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
`endif // RANDOMIZE_REG_INIT
  wire [63:0] Mem_modle_Raddr; // @[LSU.scala 65:27]
  wire [63:0] Mem_modle_Rdata; // @[LSU.scala 65:27]
  wire [63:0] Mem_modle_Waddr; // @[LSU.scala 65:27]
  wire [63:0] Mem_modle_Wdata; // @[LSU.scala 65:27]
  wire [7:0] Mem_modle_Wmask; // @[LSU.scala 65:27]
  wire  Mem_modle_Write_en; // @[LSU.scala 65:27]
  wire  Mem_modle_Read_en; // @[LSU.scala 65:27]
  reg  ms_valid; // @[LSU.scala 30:27]
  reg [63:0] ms_pc; // @[LSU.scala 31:24]
  reg  ms_rf_we; // @[LSU.scala 35:27]
  reg [4:0] ms_rf_dst; // @[LSU.scala 36:28]
  reg [63:0] ms_res; // @[LSU.scala 37:25]
  reg [63:0] store_data; // @[LSU.scala 39:29]
  reg  wen; // @[LSU.scala 40:22]
  reg [7:0] wstrb; // @[LSU.scala 41:24]
  reg  ren; // @[LSU.scala 42:22]
  MEM Mem_modle ( // @[LSU.scala 65:27]
    .Raddr(Mem_modle_Raddr),
    .Rdata(Mem_modle_Rdata),
    .Waddr(Mem_modle_Waddr),
    .Wdata(Mem_modle_Wdata),
    .Wmask(Mem_modle_Wmask),
    .Write_en(Mem_modle_Write_en),
    .Read_en(Mem_modle_Read_en)
  );
  assign io_to_ws_pc = ms_pc; // @[LSU.scala 77:17]
  assign io_ms_final_res = ren ? Mem_modle_Rdata : ms_res; // @[LSU.scala 73:27]
  assign io_ms_to_ws_valid = ms_valid; // @[LSU.scala 62:32]
  assign io_to_ws_rf_we = ms_rf_we; // @[LSU.scala 76:20]
  assign io_to_ws_rf_dst = ms_rf_dst; // @[LSU.scala 75:21]
  assign io_ms_valid = ms_valid; // @[LSU.scala 79:17]
  assign io_ms_rf_we = ms_rf_we & ms_valid; // @[LSU.scala 81:28]
  assign io_ms_rf_dst = ms_rf_dst; // @[LSU.scala 80:18]
  assign Mem_modle_Raddr = io_maddr; // @[LSU.scala 66:24]
  assign Mem_modle_Waddr = io_maddr; // @[LSU.scala 67:24]
  assign Mem_modle_Wdata = store_data; // @[LSU.scala 68:24]
  assign Mem_modle_Wmask = wstrb; // @[LSU.scala 69:24]
  assign Mem_modle_Write_en = wen; // @[LSU.scala 70:27]
  assign Mem_modle_Read_en = ren; // @[LSU.scala 71:26]
  always @(posedge clock) begin
    if (reset) begin // @[LSU.scala 30:27]
      ms_valid <= 1'h0; // @[LSU.scala 30:27]
    end else begin
      ms_valid <= io_es_to_ms_valid;
    end
    if (reset) begin // @[LSU.scala 31:24]
      ms_pc <= 64'h0; // @[LSU.scala 31:24]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 48:40]
      ms_pc <= io_pc; // @[LSU.scala 49:15]
    end
    if (reset) begin // @[LSU.scala 35:27]
      ms_rf_we <= 1'h0; // @[LSU.scala 35:27]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 48:40]
      ms_rf_we <= io_rf_we; // @[LSU.scala 50:18]
    end
    if (reset) begin // @[LSU.scala 36:28]
      ms_rf_dst <= 5'h0; // @[LSU.scala 36:28]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 48:40]
      ms_rf_dst <= io_rf_dst; // @[LSU.scala 51:19]
    end
    if (reset) begin // @[LSU.scala 37:25]
      ms_res <= 64'h0; // @[LSU.scala 37:25]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 48:40]
      ms_res <= io_alu_res; // @[LSU.scala 52:16]
    end
    if (reset) begin // @[LSU.scala 39:29]
      store_data <= 64'h0; // @[LSU.scala 39:29]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 48:40]
      store_data <= io_store_data; // @[LSU.scala 54:20]
    end
    if (reset) begin // @[LSU.scala 40:22]
      wen <= 1'h0; // @[LSU.scala 40:22]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 48:40]
      wen <= io_wen; // @[LSU.scala 55:13]
    end
    if (reset) begin // @[LSU.scala 41:24]
      wstrb <= 8'h0; // @[LSU.scala 41:24]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 48:40]
      wstrb <= io_wstrb; // @[LSU.scala 56:15]
    end
    if (reset) begin // @[LSU.scala 42:22]
      ren <= 1'h0; // @[LSU.scala 42:22]
    end else if (io_es_to_ms_valid) begin // @[LSU.scala 48:40]
      ren <= io_ren; // @[LSU.scala 57:13]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"ms_pc:%x\n",ms_pc); // @[LSU.scala 82:11]
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
  output [4:0]  io_ws_rf_dst
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg  ws_valid; // @[WBU.scala 22:27]
  reg [63:0] ws_pc; // @[WBU.scala 23:24]
  reg  ws_rf_we; // @[WBU.scala 27:27]
  reg [4:0] ws_rf_dst; // @[WBU.scala 28:28]
  reg [63:0] ws_res; // @[WBU.scala 29:25]
  assign io_we = ws_rf_we & ws_valid; // @[WBU.scala 58:22]
  assign io_waddr = ws_rf_dst; // @[WBU.scala 59:14]
  assign io_wdata = ws_res; // @[WBU.scala 60:14]
  assign io_ws_valid = ws_valid; // @[WBU.scala 61:17]
  assign io_ws_rf_we = ws_rf_we; // @[WBU.scala 63:17]
  assign io_ws_rf_dst = ws_rf_dst; // @[WBU.scala 62:18]
  always @(posedge clock) begin
    if (reset) begin // @[WBU.scala 22:27]
      ws_valid <= 1'h0; // @[WBU.scala 22:27]
    end else begin
      ws_valid <= io_ms_to_ws_valid;
    end
    if (reset) begin // @[WBU.scala 23:24]
      ws_pc <= 64'h0; // @[WBU.scala 23:24]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 40:40]
      ws_pc <= io_pc; // @[WBU.scala 41:15]
    end
    if (reset) begin // @[WBU.scala 27:27]
      ws_rf_we <= 1'h0; // @[WBU.scala 27:27]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 40:40]
      ws_rf_we <= io_rf_we; // @[WBU.scala 42:18]
    end
    if (reset) begin // @[WBU.scala 28:28]
      ws_rf_dst <= 5'h0; // @[WBU.scala 28:28]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 40:40]
      ws_rf_dst <= io_rf_dst; // @[WBU.scala 43:19]
    end
    if (reset) begin // @[WBU.scala 29:25]
      ws_res <= 64'h0; // @[WBU.scala 29:25]
    end else if (io_ms_to_ws_valid) begin // @[WBU.scala 40:40]
      ws_res <= io_ms_final_res; // @[WBU.scala 44:16]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"ws_pc:%x rf_we:%d wdata:%x\n",ws_pc,ws_rf_we,ws_res); // @[WBU.scala 64:11]
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
  wire [31:0] IDU_io_inst_now; // @[top.scala 17:21]
  wire [63:0] IDU_io_src1; // @[top.scala 17:21]
  wire [63:0] IDU_io_src2; // @[top.scala 17:21]
  wire [4:0] IDU_io_rf_dst; // @[top.scala 17:21]
  wire [63:0] IDU_io_store_data; // @[top.scala 17:21]
  wire  IDU_io_ctrl_sign_reg_write; // @[top.scala 17:21]
  wire  IDU_io_ctrl_sign_Writemem_en; // @[top.scala 17:21]
  wire  IDU_io_ctrl_sign_Readmem_en; // @[top.scala 17:21]
  wire [7:0] IDU_io_ctrl_sign_Wmask; // @[top.scala 17:21]
  wire  IDU_io_es_rf_we; // @[top.scala 17:21]
  wire  IDU_io_ms_rf_we; // @[top.scala 17:21]
  wire  IDU_io_ws_rf_we; // @[top.scala 17:21]
  wire  IDU_io_es_valid; // @[top.scala 17:21]
  wire  IDU_io_ms_valid; // @[top.scala 17:21]
  wire  IDU_io_ws_valid; // @[top.scala 17:21]
  wire [4:0] IDU_io_es_rf_dst; // @[top.scala 17:21]
  wire [4:0] IDU_io_ms_rf_dst; // @[top.scala 17:21]
  wire [4:0] IDU_io_ws_rf_dst; // @[top.scala 17:21]
  wire  EXU_clock; // @[top.scala 18:21]
  wire  EXU_reset; // @[top.scala 18:21]
  wire [63:0] EXU_io_pc; // @[top.scala 18:21]
  wire  EXU_io_ds_to_es_valid; // @[top.scala 18:21]
  wire [31:0] EXU_io_inst_now; // @[top.scala 18:21]
  wire [4:0] EXU_io_src1_value; // @[top.scala 18:21]
  wire [4:0] EXU_io_src2_value; // @[top.scala 18:21]
  wire [4:0] EXU_io_rf_dst; // @[top.scala 18:21]
  wire [63:0] EXU_io_store_data; // @[top.scala 18:21]
  wire  EXU_io_es_to_ms_valid; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_pc; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_alures; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_store_data; // @[top.scala 18:21]
  wire  EXU_io_to_ms_wen; // @[top.scala 18:21]
  wire [7:0] EXU_io_to_ms_wstrb; // @[top.scala 18:21]
  wire  EXU_io_to_ms_ren; // @[top.scala 18:21]
  wire [63:0] EXU_io_to_ms_maddr; // @[top.scala 18:21]
  wire [4:0] EXU_io_to_ms_rf_dst; // @[top.scala 18:21]
  wire  EXU_io_to_ms_rf_we; // @[top.scala 18:21]
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
  wire [31:0] dpi_flag; // @[top.scala 81:21]
  wire [31:0] dpi_ecall_flag; // @[top.scala 81:21]
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
    .io_inst_now(IDU_io_inst_now),
    .io_src1(IDU_io_src1),
    .io_src2(IDU_io_src2),
    .io_rf_dst(IDU_io_rf_dst),
    .io_store_data(IDU_io_store_data),
    .io_ctrl_sign_reg_write(IDU_io_ctrl_sign_reg_write),
    .io_ctrl_sign_Writemem_en(IDU_io_ctrl_sign_Writemem_en),
    .io_ctrl_sign_Readmem_en(IDU_io_ctrl_sign_Readmem_en),
    .io_ctrl_sign_Wmask(IDU_io_ctrl_sign_Wmask),
    .io_es_rf_we(IDU_io_es_rf_we),
    .io_ms_rf_we(IDU_io_ms_rf_we),
    .io_ws_rf_we(IDU_io_ws_rf_we),
    .io_es_valid(IDU_io_es_valid),
    .io_ms_valid(IDU_io_ms_valid),
    .io_ws_valid(IDU_io_ws_valid),
    .io_es_rf_dst(IDU_io_es_rf_dst),
    .io_ms_rf_dst(IDU_io_ms_rf_dst),
    .io_ws_rf_dst(IDU_io_ws_rf_dst)
  );
  EXU EXU ( // @[top.scala 18:21]
    .clock(EXU_clock),
    .reset(EXU_reset),
    .io_pc(EXU_io_pc),
    .io_ds_to_es_valid(EXU_io_ds_to_es_valid),
    .io_inst_now(EXU_io_inst_now),
    .io_src1_value(EXU_io_src1_value),
    .io_src2_value(EXU_io_src2_value),
    .io_rf_dst(EXU_io_rf_dst),
    .io_store_data(EXU_io_store_data),
    .io_es_to_ms_valid(EXU_io_es_to_ms_valid),
    .io_to_ms_pc(EXU_io_to_ms_pc),
    .io_to_ms_alures(EXU_io_to_ms_alures),
    .io_to_ms_store_data(EXU_io_to_ms_store_data),
    .io_to_ms_wen(EXU_io_to_ms_wen),
    .io_to_ms_wstrb(EXU_io_to_ms_wstrb),
    .io_to_ms_ren(EXU_io_to_ms_ren),
    .io_to_ms_maddr(EXU_io_to_ms_maddr),
    .io_to_ms_rf_dst(EXU_io_to_ms_rf_dst),
    .io_to_ms_rf_we(EXU_io_to_ms_rf_we),
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
    .io_ws_rf_dst(WBU_io_ws_rf_dst)
  );
  DPI dpi ( // @[top.scala 81:21]
    .flag(dpi_flag),
    .ecall_flag(dpi_ecall_flag)
  );
  assign io_inst = IFU_io_inst; // @[top.scala 80:13]
  assign io_pc = IFU_io_to_ds_pc; // @[top.scala 78:11]
  assign io_step = WBU_io_ws_valid; // @[top.scala 79:13]
  assign Register_clock = clock;
  assign Register_io_raddr1 = IDU_io_raddr1; // @[top.scala 33:20]
  assign Register_io_raddr2 = IDU_io_raddr2; // @[top.scala 34:20]
  assign Register_io_we = WBU_io_we; // @[top.scala 74:16]
  assign Register_io_waddr = WBU_io_waddr; // @[top.scala 75:19]
  assign Register_io_wdata = WBU_io_wdata; // @[top.scala 76:19]
  assign IFU_clock = clock;
  assign IFU_reset = reset;
  assign IFU_io_ds_allowin = IDU_io_ds_allowin; // @[top.scala 24:20]
  assign IFU_io_br_taken = IDU_io_br_taken; // @[top.scala 25:18]
  assign IFU_io_br_target = IDU_io_br_target; // @[top.scala 26:19]
  assign IFU_io_br_taken_cancel = IDU_io_br_taken_cancel; // @[top.scala 27:25]
  assign IDU_clock = clock;
  assign IDU_reset = reset;
  assign IDU_io_pc = IFU_io_to_ds_pc; // @[top.scala 29:12]
  assign IDU_io_fs_to_ds_valid = IFU_io_fs_to_ds_valid; // @[top.scala 30:24]
  assign IDU_io_from_fs_inst = IFU_io_inst; // @[top.scala 32:22]
  assign IDU_io_rdata1 = Register_io_rdata1; // @[top.scala 35:16]
  assign IDU_io_rdata2 = Register_io_rdata2; // @[top.scala 36:16]
  assign IDU_io_es_rf_we = EXU_io_es_rf_we; // @[top.scala 39:18]
  assign IDU_io_ms_rf_we = LSU_io_ms_rf_we; // @[top.scala 42:18]
  assign IDU_io_ws_rf_we = WBU_io_ws_rf_we; // @[top.scala 45:18]
  assign IDU_io_es_valid = EXU_io_es_valid; // @[top.scala 37:18]
  assign IDU_io_ms_valid = LSU_io_ms_valid; // @[top.scala 40:18]
  assign IDU_io_ws_valid = WBU_io_ws_valid; // @[top.scala 43:18]
  assign IDU_io_es_rf_dst = EXU_io_es_rf_dst; // @[top.scala 38:19]
  assign IDU_io_ms_rf_dst = LSU_io_ms_rf_dst; // @[top.scala 41:19]
  assign IDU_io_ws_rf_dst = WBU_io_ws_rf_dst; // @[top.scala 44:19]
  assign EXU_clock = clock;
  assign EXU_reset = reset;
  assign EXU_io_pc = IDU_io_to_es_pc; // @[top.scala 47:12]
  assign EXU_io_ds_to_es_valid = IDU_io_ds_to_es_valid; // @[top.scala 48:24]
  assign EXU_io_inst_now = IDU_io_inst_now; // @[top.scala 50:18]
  assign EXU_io_src1_value = IDU_io_src1[4:0]; // @[top.scala 51:20]
  assign EXU_io_src2_value = IDU_io_src2[4:0]; // @[top.scala 52:20]
  assign EXU_io_rf_dst = IDU_io_rf_dst; // @[top.scala 53:16]
  assign EXU_io_store_data = IDU_io_store_data; // @[top.scala 54:20]
  assign EXU_io_ctrl_sign_reg_write = IDU_io_ctrl_sign_reg_write; // @[top.scala 55:19]
  assign EXU_io_ctrl_sign_Writemem_en = IDU_io_ctrl_sign_Writemem_en; // @[top.scala 55:19]
  assign EXU_io_ctrl_sign_Readmem_en = IDU_io_ctrl_sign_Readmem_en; // @[top.scala 55:19]
  assign EXU_io_ctrl_sign_Wmask = IDU_io_ctrl_sign_Wmask; // @[top.scala 55:19]
  assign LSU_clock = clock;
  assign LSU_reset = reset;
  assign LSU_io_pc = EXU_io_to_ms_pc; // @[top.scala 57:12]
  assign LSU_io_es_to_ms_valid = EXU_io_es_to_ms_valid; // @[top.scala 58:24]
  assign LSU_io_rf_we = EXU_io_to_ms_rf_we; // @[top.scala 60:15]
  assign LSU_io_rf_dst = EXU_io_to_ms_rf_dst; // @[top.scala 61:16]
  assign LSU_io_alu_res = EXU_io_to_ms_alures; // @[top.scala 62:17]
  assign LSU_io_store_data = EXU_io_to_ms_store_data; // @[top.scala 63:20]
  assign LSU_io_wen = EXU_io_to_ms_wen; // @[top.scala 64:13]
  assign LSU_io_wstrb = EXU_io_to_ms_wstrb; // @[top.scala 65:15]
  assign LSU_io_ren = EXU_io_to_ms_ren; // @[top.scala 66:13]
  assign LSU_io_maddr = EXU_io_to_ms_maddr; // @[top.scala 67:15]
  assign WBU_clock = clock;
  assign WBU_reset = reset;
  assign WBU_io_pc = LSU_io_to_ws_pc; // @[top.scala 69:12]
  assign WBU_io_ms_to_ws_valid = LSU_io_ms_to_ws_valid; // @[top.scala 70:24]
  assign WBU_io_ms_final_res = LSU_io_ms_final_res; // @[top.scala 71:22]
  assign WBU_io_rf_we = LSU_io_to_ws_rf_we; // @[top.scala 72:15]
  assign WBU_io_rf_dst = LSU_io_to_ws_rf_dst; // @[top.scala 73:16]
  assign dpi_flag = {{31'd0}, IDU_io_inst_now == 32'h2}; // @[top.scala 82:17]
  assign dpi_ecall_flag = {{31'd0}, IDU_io_inst_now == 32'h3d}; // @[top.scala 83:23]
endmodule
