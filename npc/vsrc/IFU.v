/* verilator lint_off UNUSED */
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
  output        io_axi_out_rready
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg  br_taken; // @[IFU.scala 22:27]
  reg  fs_valid; // @[IFU.scala 24:27]
  reg  fs_ready_go; // @[IFU.scala 25:30]
  reg [63:0] fs_pc; // @[IFU.scala 31:24]
  reg [31:0] fs_inst; // @[IFU.scala 32:26]
  wire  fs_allowin = ~fs_valid | fs_ready_go & io_ds_allowin; // @[IFU.scala 60:29]
  wire  _GEN_0 = fs_allowin ? 1'h0 : br_taken; // @[IFU.scala 40:42 41:18 22:27]
  wire  _GEN_1 = io_br_taken | _GEN_0; // @[IFU.scala 38:22 39:18]
  wire  _GEN_3 = io_axi_in_rvalid | fs_ready_go; // @[IFU.scala 44:27 46:21 25:30]
  wire  fs_to_ds_valid = fs_valid & fs_ready_go; // @[IFU.scala 59:33]
  wire [63:0] seq_pc = fs_pc + 64'h4; // @[IFU.scala 55:24]
  wire [63:0] pc_next = br_taken ? io_br_target : seq_pc; // @[IFU.scala 56:19]
  wire  _GEN_5 = fs_allowin | fs_valid; // @[IFU.scala 62:36 63:18 24:27]
  reg  inst_ready; // @[IFU.scala 73:29]
  wire  _GEN_7 = io_axi_in_rvalid & inst_ready & io_axi_in_rlast ? 1'h0 : 1'h1; // @[IFU.scala 74:60 75:20 77:20]
  assign io_to_ds_pc = fs_pc; // @[IFU.scala 70:17]
  assign io_fs_to_ds_valid = fs_valid & fs_ready_go; // @[IFU.scala 59:33]
  assign io_inst = fs_inst; // @[IFU.scala 96:13]
  assign io_axi_out_araddr = fs_pc[31:0]; // @[IFU.scala 80:31]
  assign io_axi_out_arvalid = fs_valid; // @[IFU.scala 81:24]
  assign io_axi_out_rready = inst_ready; // @[IFU.scala 85:23]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 22:27]
      br_taken <= 1'h0; // @[IFU.scala 22:27]
    end else begin
      br_taken <= _GEN_1;
    end
    if (reset) begin // @[IFU.scala 24:27]
      fs_valid <= 1'h0; // @[IFU.scala 24:27]
    end else begin
      fs_valid <= _GEN_5;
    end
    if (reset) begin // @[IFU.scala 25:30]
      fs_ready_go <= 1'h0; // @[IFU.scala 25:30]
    end else if (fs_to_ds_valid & io_ds_allowin) begin // @[IFU.scala 48:42]
      fs_ready_go <= 1'h0; // @[IFU.scala 49:21]
    end else begin
      fs_ready_go <= _GEN_3;
    end
    if (reset) begin // @[IFU.scala 31:24]
      fs_pc <= 64'h7ffffffc; // @[IFU.scala 31:24]
    end else if (fs_allowin) begin // @[IFU.scala 62:36]
      if (br_taken) begin // @[IFU.scala 56:19]
        fs_pc <= io_br_target;
      end else begin
        fs_pc <= seq_pc;
      end
    end
    if (reset) begin // @[IFU.scala 32:26]
      fs_inst <= 32'h0; // @[IFU.scala 32:26]
    end else if (io_axi_in_rvalid) begin // @[IFU.scala 44:27]
      fs_inst <= io_axi_in_rdata[31:0]; // @[IFU.scala 45:17]
    end
    inst_ready <= reset | _GEN_7; // @[IFU.scala 73:{29,29}]
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"fs_pc:%x fs_valid:%d fs_inst:%x rvalid:%d next_pc:%x\n",fs_pc,fs_valid,fs_inst,
            io_axi_in_rvalid,pc_next); // @[IFU.scala 98:11]
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
  br_taken = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  fs_valid = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  fs_ready_go = _RAND_2[0:0];
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
/* verilator lint_on UNUSED */
