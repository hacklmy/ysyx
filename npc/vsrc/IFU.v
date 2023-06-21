/* verilator lint_off UNUSED */
module IFU(
  input         clock,
  input         reset,
  input         io_ds_allowin,
  input         io_ds_ready_go,
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
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg  br_taken_cancel; // @[IFU.scala 27:34]
  reg  fs_valid; // @[IFU.scala 30:27]
  reg  cache_init; // @[IFU.scala 36:29]
  wire  _T = fs_valid & io_ds_allowin; // @[IFU.scala 39:31]
  wire  _GEN_0 = fs_valid & io_ds_allowin & cache_init ? 1'h0 : cache_init; // @[IFU.scala 39:60 40:20 36:29]
  wire  _GEN_1 = io_cache_init | _GEN_0; // @[IFU.scala 37:24 38:20]
  reg  br_taken; // @[IFU.scala 42:27]
  reg [63:0] fs_pc; // @[IFU.scala 43:24]
  reg [31:0] fs_inst; // @[IFU.scala 44:26]
  wire  _T_2 = io_br_taken & io_ds_ready_go; // @[IFU.scala 50:21]
  wire  _GEN_2 = br_taken_cancel & fs_valid & io_ds_allowin ? 1'h0 : br_taken_cancel; // @[IFU.scala 52:67 53:25 27:34]
  wire  _GEN_3 = io_br_taken & io_ds_ready_go & io_axi_in_rvalid | _GEN_2; // @[IFU.scala 50:52 51:25]
  wire  fs_allowin = ~fs_valid | _T; // @[IFU.scala 72:29]
  wire  _GEN_4 = br_taken_cancel & io_axi_in_rvalid & fs_allowin ? 1'h0 : br_taken; // @[IFU.scala 58:59 59:18 42:27]
  wire  _GEN_5 = _T_2 | _GEN_4; // @[IFU.scala 56:38 57:18]
  wire [63:0] seq_pc = fs_pc + 64'h4; // @[IFU.scala 66:24]
  wire [63:0] pc_next = br_taken ? io_br_target : seq_pc; // @[IFU.scala 67:19]
  assign io_to_ds_pc = fs_pc; // @[IFU.scala 86:17]
  assign io_fs_to_ds_valid = fs_valid; // @[IFU.scala 71:33]
  assign io_inst = fs_inst; // @[IFU.scala 112:13]
  assign io_axi_out_araddr = pc_next[31:0]; // @[IFU.scala 96:23]
  assign io_axi_out_arvalid = io_ds_ready_go; // @[IFU.scala 97:24]
  assign io_axi_out_rready = ~fs_valid | _T; // @[IFU.scala 72:29]
  assign io_clear_cache = io_fence & ~cache_init; // @[IFU.scala 48:32]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 27:34]
      br_taken_cancel <= 1'h0; // @[IFU.scala 27:34]
    end else begin
      br_taken_cancel <= _GEN_3;
    end
    if (reset) begin // @[IFU.scala 30:27]
      fs_valid <= 1'h0; // @[IFU.scala 30:27]
    end else if (io_br_taken & ~br_taken_cancel) begin // @[IFU.scala 73:42]
      fs_valid <= 1'h0; // @[IFU.scala 74:18]
    end else if (fs_allowin) begin // @[IFU.scala 75:27]
      fs_valid <= io_axi_in_rvalid; // @[IFU.scala 76:18]
    end
    if (reset) begin // @[IFU.scala 36:29]
      cache_init <= 1'h0; // @[IFU.scala 36:29]
    end else begin
      cache_init <= _GEN_1;
    end
    if (reset) begin // @[IFU.scala 42:27]
      br_taken <= 1'h0; // @[IFU.scala 42:27]
    end else begin
      br_taken <= _GEN_5;
    end
    if (reset) begin // @[IFU.scala 43:24]
      fs_pc <= 64'h7ffffffc; // @[IFU.scala 43:24]
    end else if (io_axi_in_rvalid & fs_allowin) begin // @[IFU.scala 78:36]
      if (br_taken) begin // @[IFU.scala 67:19]
        fs_pc <= io_br_target;
      end else begin
        fs_pc <= seq_pc;
      end
    end
    if (reset) begin // @[IFU.scala 44:26]
      fs_inst <= 32'h0; // @[IFU.scala 44:26]
    end else if (io_axi_in_rvalid & fs_allowin) begin // @[IFU.scala 78:36]
      fs_inst <= io_axi_in_rdata[31:0]; // @[IFU.scala 80:17]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,
            "fs_pc:%x fs_valid:%d fs_allowin:%d fs_inst:%x arvalid:%d rvalid:%d rdata:%x next_pc:%x br_taken:%d fs_ds_valid:%d\n"
            ,fs_pc,fs_valid,fs_allowin,fs_inst,io_axi_out_arvalid,io_axi_in_rvalid,io_axi_in_rdata[31:0],pc_next,
            br_taken,fs_valid); // @[IFU.scala 115:11]
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
  br_taken_cancel = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  fs_valid = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  cache_init = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  br_taken = _RAND_3[0:0];
  _RAND_4 = {2{`RANDOM}};
  fs_pc = _RAND_4[63:0];
  _RAND_5 = {1{`RANDOM}};
  fs_inst = _RAND_5[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
/* verilator lint_on UNUSED */
