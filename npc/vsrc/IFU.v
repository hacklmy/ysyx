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
  wire [63:0] pc_next = io_br_taken ? io_br_target : seq_pc; // @[IFU.scala 68:19]
  wire  fs_allowin = ~fs_valid | fs_ready_go & io_ds_allowin; // @[IFU.scala 72:29]
  wire  _GEN_5 = fs_allowin | fs_valid; // @[IFU.scala 74:36 75:18 29:27]
  reg  inst_ready; // @[IFU.scala 85:29]
  wire  _GEN_7 = io_axi_in_rvalid & inst_ready & io_axi_in_rlast ? 1'h0 : 1'h1; // @[IFU.scala 86:60 87:20 89:20]
  assign io_to_ds_pc = fs_pc; // @[IFU.scala 82:17]
  assign io_fs_to_ds_valid = fs_valid & fs_ready_go; // @[IFU.scala 71:33]
  assign io_inst = fs_inst; // @[IFU.scala 108:13]
  assign io_axi_out_araddr = pc_next[31:0]; // @[IFU.scala 92:23]
  assign io_axi_out_arvalid = ~fs_valid | fs_ready_go & io_ds_allowin; // @[IFU.scala 72:29]
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
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"fs_pc:%x fs_valid:%d fs_allowin:%d fs_inst:%x rvalid:%d next_pc:%x\n",fs_pc,fs_valid,
            fs_allowin,fs_inst,io_axi_in_rvalid,pc_next); // @[IFU.scala 111:11]
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
/* verilator lint_on UNUSED */
