/* verilator lint_off UNUSED */

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
/* verilator lint_on UNUSED */
