module IFU(
  input  [63:0] io_ipc,
  output [63:0] io_opc
);
  assign io_opc = io_ipc; // @[IFU.scala 9:12]
endmodule
module IDU(
  input  [31:0] io_inst,
  output [31:0] io_insttype,
  output [4:0]  io_src1,
  output [4:0]  io_rd,
  output [63:0] io_imm,
  output        io_reg_write
);
  wire [31:0] _src2_T = io_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _src2_T_1 = 32'h13 == _src2_T; // @[Lookup.scala 31:38]
  wire [11:0] imm_I = _src2_T_1 ? io_inst[31:20] : 12'h0; // @[Lookup.scala 34:39]
  wire  _insttype_T_3 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
  wire [1:0] _insttype_T_4 = _insttype_T_3 ? 2'h2 : 2'h0; // @[Lookup.scala 34:39]
  wire [1:0] _insttype_T_5 = _src2_T_1 ? 2'h1 : _insttype_T_4; // @[Lookup.scala 34:39]
  wire [51:0] _io_imm_T_2 = imm_I[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  assign io_insttype = {{30'd0}, _insttype_T_5}; // @[IDU.scala 29:24 56:14]
  assign io_src1 = _src2_T_1 ? io_inst[19:15] : 5'h0; // @[Lookup.scala 34:39]
  assign io_rd = _src2_T_1 ? io_inst[11:7] : 5'h0; // @[Lookup.scala 34:39]
  assign io_imm = {_io_imm_T_2,imm_I}; // @[Cat.scala 31:58]
  assign io_reg_write = 32'h13 == _src2_T; // @[Lookup.scala 31:38]
endmodule
module EXU(
  input         clock,
  input  [31:0] io_insttype,
  input  [4:0]  io_src1,
  input  [4:0]  io_rd,
  input  [63:0] io_imm,
  input         io_reg_write,
  output [63:0] io_res2rd
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] Regfile [0:31]; // @[EXU.scala 15:22]
  wire  Regfile_src1_value_MPORT_en; // @[EXU.scala 15:22]
  wire [4:0] Regfile_src1_value_MPORT_addr; // @[EXU.scala 15:22]
  wire [63:0] Regfile_src1_value_MPORT_data; // @[EXU.scala 15:22]
  wire  Regfile_src2_value_MPORT_en; // @[EXU.scala 15:22]
  wire [4:0] Regfile_src2_value_MPORT_addr; // @[EXU.scala 15:22]
  wire [63:0] Regfile_src2_value_MPORT_data; // @[EXU.scala 15:22]
  wire  Regfile_reg_value_MPORT_en; // @[EXU.scala 15:22]
  wire [4:0] Regfile_reg_value_MPORT_addr; // @[EXU.scala 15:22]
  wire [63:0] Regfile_reg_value_MPORT_data; // @[EXU.scala 15:22]
  wire [63:0] Regfile_MPORT_data; // @[EXU.scala 15:22]
  wire [4:0] Regfile_MPORT_addr; // @[EXU.scala 15:22]
  wire  Regfile_MPORT_mask; // @[EXU.scala 15:22]
  wire  Regfile_MPORT_en; // @[EXU.scala 15:22]
  wire [63:0] src1_value = io_src1 == 5'h0 ? 64'h0 : Regfile_src1_value_MPORT_data; // @[EXU.scala 17:12]
  wire [63:0] I_res = src1_value + io_imm; // @[EXU.scala 21:28]
  wire [63:0] reg_value = io_rd == 5'h0 ? 64'h0 : Regfile_reg_value_MPORT_data; // @[EXU.scala 17:12]
  assign Regfile_src1_value_MPORT_en = 1'h1;
  assign Regfile_src1_value_MPORT_addr = io_src1;
  assign Regfile_src1_value_MPORT_data = Regfile[Regfile_src1_value_MPORT_addr]; // @[EXU.scala 15:22]
  assign Regfile_src2_value_MPORT_en = 1'h1;
  assign Regfile_src2_value_MPORT_addr = 5'h0;
  assign Regfile_src2_value_MPORT_data = Regfile[Regfile_src2_value_MPORT_addr]; // @[EXU.scala 15:22]
  assign Regfile_reg_value_MPORT_en = 1'h1;
  assign Regfile_reg_value_MPORT_addr = io_rd;
  assign Regfile_reg_value_MPORT_data = Regfile[Regfile_reg_value_MPORT_addr]; // @[EXU.scala 15:22]
  assign Regfile_MPORT_data = io_reg_write ? io_res2rd : reg_value;
  assign Regfile_MPORT_addr = io_rd;
  assign Regfile_MPORT_mask = 1'h1;
  assign Regfile_MPORT_en = 1'h1;
  assign io_res2rd = 32'h1 == io_insttype ? I_res : 64'h0; // @[Mux.scala 81:58]
  always @(posedge clock) begin
    if (Regfile_MPORT_en & Regfile_MPORT_mask) begin
      Regfile[Regfile_MPORT_addr] <= Regfile_MPORT_data; // @[EXU.scala 15:22]
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
    Regfile[initvar] = _RAND_0[63:0];
`endif // RANDOMIZE_MEM_INIT
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
  input  [31:0] io_inst,
  output [63:0] io_pc,
  output [63:0] io_outval
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] ifu_step_io_ipc; // @[top.scala 13:26]
  wire [63:0] ifu_step_io_opc; // @[top.scala 13:26]
  wire [31:0] idu_step_io_inst; // @[top.scala 18:26]
  wire [31:0] idu_step_io_insttype; // @[top.scala 18:26]
  wire [4:0] idu_step_io_src1; // @[top.scala 18:26]
  wire [4:0] idu_step_io_rd; // @[top.scala 18:26]
  wire [63:0] idu_step_io_imm; // @[top.scala 18:26]
  wire  idu_step_io_reg_write; // @[top.scala 18:26]
  wire  exu_step_clock; // @[top.scala 20:26]
  wire [31:0] exu_step_io_insttype; // @[top.scala 20:26]
  wire [4:0] exu_step_io_src1; // @[top.scala 20:26]
  wire [4:0] exu_step_io_rd; // @[top.scala 20:26]
  wire [63:0] exu_step_io_imm; // @[top.scala 20:26]
  wire  exu_step_io_reg_write; // @[top.scala 20:26]
  wire [63:0] exu_step_io_res2rd; // @[top.scala 20:26]
  wire [31:0] dpi_flag; // @[top.scala 28:21]
  reg [63:0] pc_now; // @[top.scala 11:25]
  wire [63:0] _pc_now_T_1 = pc_now + 64'h4; // @[top.scala 31:22]
  IFU ifu_step ( // @[top.scala 13:26]
    .io_ipc(ifu_step_io_ipc),
    .io_opc(ifu_step_io_opc)
  );
  IDU idu_step ( // @[top.scala 18:26]
    .io_inst(idu_step_io_inst),
    .io_insttype(idu_step_io_insttype),
    .io_src1(idu_step_io_src1),
    .io_rd(idu_step_io_rd),
    .io_imm(idu_step_io_imm),
    .io_reg_write(idu_step_io_reg_write)
  );
  EXU exu_step ( // @[top.scala 20:26]
    .clock(exu_step_clock),
    .io_insttype(exu_step_io_insttype),
    .io_src1(exu_step_io_src1),
    .io_rd(exu_step_io_rd),
    .io_imm(exu_step_io_imm),
    .io_reg_write(exu_step_io_reg_write),
    .io_res2rd(exu_step_io_res2rd)
  );
  DPI dpi ( // @[top.scala 28:21]
    .flag(dpi_flag)
  );
  assign io_pc = ifu_step_io_opc; // @[top.scala 15:11]
  assign io_outval = exu_step_io_res2rd; // @[top.scala 27:15]
  assign ifu_step_io_ipc = pc_now; // @[top.scala 14:21]
  assign idu_step_io_inst = io_inst; // @[top.scala 19:22]
  assign exu_step_clock = clock;
  assign exu_step_io_insttype = idu_step_io_insttype; // @[top.scala 21:26]
  assign exu_step_io_src1 = idu_step_io_src1; // @[top.scala 23:22]
  assign exu_step_io_rd = idu_step_io_rd; // @[top.scala 25:20]
  assign exu_step_io_imm = idu_step_io_imm; // @[top.scala 26:21]
  assign exu_step_io_reg_write = idu_step_io_reg_write; // @[top.scala 22:27]
  assign dpi_flag = {{31'd0}, idu_step_io_insttype == 32'h2}; // @[top.scala 29:17]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 11:25]
      pc_now <= 64'h80000000; // @[top.scala 11:25]
    end else begin
      pc_now <= _pc_now_T_1; // @[top.scala 31:12]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"%x\n",idu_step_io_insttype); // @[top.scala 30:11]
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
  pc_now = _RAND_0[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
