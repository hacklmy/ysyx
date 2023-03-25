/* verilator lint_off UNUSED */
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);


module EXU(
  input         clock,
  input  [63:0] io_pc,
  output [63:0] io_pc_next,
  input  [31:0] io_inst_now,
  input  [4:0]  io_rs1,
  input  [4:0]  io_rs2,
  input  [4:0]  io_rd,
  input  [63:0] io_imm,
  input         io_ctrl_sign_reg_write,
  input         io_ctrl_sign_src2_is_imm,
  input         io_ctrl_sign_src1_is_pc,
  output [63:0] io_res2rd
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] Regfile [0:31]; // @[EXU.scala 19:22]
  initial set_gpr_ptr(Regfile);
  wire  Regfile_src1_value_MPORT_en; // @[EXU.scala 19:22]
  wire [4:0] Regfile_src1_value_MPORT_addr; // @[EXU.scala 19:22]
  wire [63:0] Regfile_src1_value_MPORT_data; // @[EXU.scala 19:22]
  wire  Regfile_src2_value_MPORT_en; // @[EXU.scala 19:22]
  wire [4:0] Regfile_src2_value_MPORT_addr; // @[EXU.scala 19:22]
  wire [63:0] Regfile_src2_value_MPORT_data; // @[EXU.scala 19:22]
  wire  Regfile_reg_value_MPORT_en; // @[EXU.scala 19:22]
  wire [4:0] Regfile_reg_value_MPORT_addr; // @[EXU.scala 19:22]
  wire [63:0] Regfile_reg_value_MPORT_data; // @[EXU.scala 19:22]
  wire [63:0] Regfile_MPORT_data; // @[EXU.scala 19:22]
  wire [4:0] Regfile_MPORT_addr; // @[EXU.scala 19:22]
  wire  Regfile_MPORT_mask; // @[EXU.scala 19:22]
  wire  Regfile_MPORT_en; // @[EXU.scala 19:22]
  wire [63:0] _src1_value_T_1 = io_rs1 == 5'h0 ? 64'h0 : Regfile_src1_value_MPORT_data; // @[EXU.scala 21:12]
  wire [63:0] src1_value = io_ctrl_sign_src1_is_pc ? io_pc : _src1_value_T_1; // @[EXU.scala 23:25]
  wire [63:0] _src2_value_T_1 = io_rs2 == 5'h0 ? 64'h0 : Regfile_src2_value_MPORT_data; // @[EXU.scala 21:12]
  wire [63:0] src2_value = io_ctrl_sign_src2_is_imm ? io_imm : _src2_value_T_1; // @[EXU.scala 24:25]
  wire [63:0] add_res = src1_value + src2_value; // @[EXU.scala 25:30]
  wire [63:0] _io_res2rd_T_1 = io_pc + 64'h4; // @[EXU.scala 30:24]
  wire [63:0] _io_res2rd_T_5 = 32'h1 == io_inst_now ? add_res : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_7 = 32'h3 == io_inst_now ? add_res : _io_res2rd_T_5; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_9 = 32'h4 == io_inst_now ? io_imm : _io_res2rd_T_7; // @[Mux.scala 81:58]
  wire [63:0] _io_res2rd_T_11 = 32'h5 == io_inst_now ? _io_res2rd_T_1 : _io_res2rd_T_9; // @[Mux.scala 81:58]
  wire [63:0] reg_value = io_rd == 5'h0 ? 64'h0 : Regfile_reg_value_MPORT_data; // @[EXU.scala 21:12]
  wire [63:0] _io_pc_next_T_2 = add_res & 64'hfffffffffffffffe; // @[EXU.scala 37:28]
  wire [63:0] _io_pc_next_T_4 = 32'h5 == io_inst_now ? add_res : _io_res2rd_T_1; // @[Mux.scala 81:58]
  assign Regfile_src1_value_MPORT_en = 1'h1;
  assign Regfile_src1_value_MPORT_addr = io_rs1;
  assign Regfile_src1_value_MPORT_data = Regfile[Regfile_src1_value_MPORT_addr]; // @[EXU.scala 19:22]
  assign Regfile_src2_value_MPORT_en = 1'h1;
  assign Regfile_src2_value_MPORT_addr = io_rs2;
  assign Regfile_src2_value_MPORT_data = Regfile[Regfile_src2_value_MPORT_addr]; // @[EXU.scala 19:22]
  assign Regfile_reg_value_MPORT_en = 1'h1;
  assign Regfile_reg_value_MPORT_addr = io_rd;
  assign Regfile_reg_value_MPORT_data = Regfile[Regfile_reg_value_MPORT_addr]; // @[EXU.scala 19:22]
  assign Regfile_MPORT_data = io_ctrl_sign_reg_write ? io_res2rd : reg_value;
  assign Regfile_MPORT_addr = io_rd;
  assign Regfile_MPORT_mask = 1'h1;
  assign Regfile_MPORT_en = 1'h1;
  assign io_pc_next = 32'h6 == io_inst_now ? _io_pc_next_T_2 : _io_pc_next_T_4; // @[Mux.scala 81:58]
  assign io_res2rd = 32'h6 == io_inst_now ? _io_res2rd_T_1 : _io_res2rd_T_11; // @[Mux.scala 81:58]
  always @(posedge clock) begin
    if (Regfile_MPORT_en & Regfile_MPORT_mask) begin
      Regfile[Regfile_MPORT_addr] <= Regfile_MPORT_data; // @[EXU.scala 19:22]
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
/* verilator lint_on UNUSED */
