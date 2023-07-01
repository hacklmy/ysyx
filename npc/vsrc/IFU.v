/* verilator lint_off UNUSED */
module IFU(
  input         clock,
  input         reset,
  input         io_ds_allowin,
  input         io_ds_ready_go,
  input         io_ds_valid,
  input         io_br_taken,
  input  [63:0] io_br_target,
  output [63:0] io_to_ds_pc,
  output        io_fs_to_ds_valid,
  output [31:0] io_inst,
  input  [63:0] io_axi_in_rdata,
  input         io_axi_in_rvalid,
  output [31:0] io_axi_out_araddr,
  output        io_axi_out_arvalid,
  output        io_axi_out_rready,
  input         io_fence,
  output        io_clear_cache,
  input         io_cache_init
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] br_target; // @[IFU.scala 31:28]
  reg  fs_valid; // @[IFU.scala 36:27]
  reg  cache_init; // @[IFU.scala 42:29]
  wire  _T_1 = fs_valid & io_ds_allowin; // @[IFU.scala 45:31]
  wire  _GEN_1 = fs_valid & io_ds_allowin & cache_init ? 1'h0 : cache_init; // @[IFU.scala 45:60 46:20 42:29]
  wire  _GEN_2 = io_cache_init | _GEN_1; // @[IFU.scala 43:24 44:20]
  reg [63:0] fs_pc; // @[IFU.scala 49:24]
  reg [31:0] fs_inst; // @[IFU.scala 50:26]
  wire [63:0] seq_pc = fs_pc + 64'h4; // @[IFU.scala 73:24]
  wire [63:0] _pc_next_T = io_ds_valid ? io_br_target : br_target; // @[IFU.scala 74:35]
  wire [63:0] pc_next = io_br_taken ? _pc_next_T : seq_pc; // @[IFU.scala 74:19]
  wire  fs_allowin = ~fs_valid | _T_1; // @[IFU.scala 79:29]
  assign io_to_ds_pc = fs_pc; // @[IFU.scala 91:17]
  assign io_fs_to_ds_valid = fs_valid; // @[IFU.scala 78:33]
  assign io_inst = fs_inst; // @[IFU.scala 117:13]
  assign io_axi_out_araddr = pc_next[31:0]; // @[IFU.scala 101:23]
  assign io_axi_out_arvalid = io_ds_ready_go; // @[IFU.scala 102:24]
  assign io_axi_out_rready = ~fs_valid | _T_1; // @[IFU.scala 79:29]
  assign io_clear_cache = io_fence & ~cache_init; // @[IFU.scala 54:32]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 31:28]
      br_target <= 64'h0; // @[IFU.scala 31:28]
    end else if (io_ds_valid & io_ds_ready_go) begin // @[IFU.scala 32:40]
      br_target <= io_br_target; // @[IFU.scala 33:19]
    end
    if (reset) begin // @[IFU.scala 36:27]
      fs_valid <= 1'h0; // @[IFU.scala 36:27]
    end else if (fs_allowin) begin // @[IFU.scala 80:21]
      fs_valid <= io_axi_in_rvalid; // @[IFU.scala 81:18]
    end
    if (reset) begin // @[IFU.scala 42:29]
      cache_init <= 1'h0; // @[IFU.scala 42:29]
    end else begin
      cache_init <= _GEN_2;
    end
    if (reset) begin // @[IFU.scala 49:24]
      fs_pc <= 64'h7ffffffc; // @[IFU.scala 49:24]
    end else if (io_axi_in_rvalid & fs_allowin) begin // @[IFU.scala 83:36]
      if (io_br_taken) begin // @[IFU.scala 74:19]
        if (io_ds_valid) begin // @[IFU.scala 74:35]
          fs_pc <= io_br_target;
        end else begin
          fs_pc <= br_target;
        end
      end else begin
        fs_pc <= seq_pc;
      end
    end
    if (reset) begin // @[IFU.scala 50:26]
      fs_inst <= 32'h0; // @[IFU.scala 50:26]
    end else if (io_axi_in_rvalid & fs_allowin) begin // @[IFU.scala 83:36]
      fs_inst <= io_axi_in_rdata[31:0]; // @[IFU.scala 85:17]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,
            "fs_pc:%x fs_valid:%d fs_allowin:%d fs_inst:%x arvalid:%d rvalid:%d rdata:%x next_pc:%x br_taken:%d fs_ds_valid:%d\n"
            ,fs_pc,fs_valid,fs_allowin,fs_inst,io_axi_out_arvalid,io_axi_in_rvalid,io_axi_in_rdata[31:0],pc_next,
            io_br_taken,fs_valid); // @[IFU.scala 120:11]
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
  br_target = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  fs_valid = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  cache_init = _RAND_2[0:0];
  _RAND_3 = {2{`RANDOM}};
  fs_pc = _RAND_3[63:0];
  _RAND_4 = {1{`RANDOM}};
  fs_inst = _RAND_4[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
/* verilator lint_on UNUSED */
