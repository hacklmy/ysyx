/* verilator lint_off UNUSED */
module IFU(
  input         clock,
  input         reset,
  input         io_ds_allowin,
  input         io_br_taken,
  input  [63:0] io_br_target,
  input         io_br_taken_cancel,
  output [63:0] io_to_ds_pc,
  output        io_fs_to_ds_valid
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
  assign io_to_ds_pc = fs_pc; // @[IFU.scala 47:17]
  assign io_fs_to_ds_valid = fs_valid; // @[IFU.scala 34:33]
  assign inst_read_Raddr = fs_pc; // @[IFU.scala 44:24]
  assign inst_read_Waddr = 64'h0;
  assign inst_read_Wdata = 64'h0;
  assign inst_read_Wmask = 8'h0;
  assign inst_read_Write_en = 1'h0;
  assign inst_read_Read_en = 1'h0;
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
/* verilator lint_on UNUSED */
