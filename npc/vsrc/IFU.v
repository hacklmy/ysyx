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
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  reg  br_taken_cancel; // @[IFU.scala 28:34]
  reg [63:0] br_target; // @[IFU.scala 31:28]
  reg  fs_valid; // @[IFU.scala 32:27]
  reg  cache_init; // @[IFU.scala 38:29]
  wire  fs_ready_go = fs_valid & ~(io_br_taken & io_ds_valid); // @[IFU.scala 73:29]
  wire  fs_to_ds_valid = fs_valid & fs_ready_go; // @[IFU.scala 74:33]
  wire  _GEN_0 = fs_to_ds_valid & io_ds_allowin & cache_init ? 1'h0 : cache_init; // @[IFU.scala 41:60 42:20 38:29]
  wire  _GEN_1 = io_cache_init | _GEN_0; // @[IFU.scala 39:24 40:20]
  reg  br_taken; // @[IFU.scala 44:27]
  reg [63:0] fs_pc; // @[IFU.scala 45:24]
  reg [31:0] fs_inst; // @[IFU.scala 46:26]
  wire  _T_3 = io_br_taken & io_ds_ready_go & io_axi_in_rvalid; // @[IFU.scala 52:37]
  wire  _GEN_2 = br_taken_cancel & fs_to_ds_valid & io_ds_allowin ? 1'h0 : br_taken_cancel; // @[IFU.scala 54:67 55:25 28:34]
  wire  _GEN_3 = io_br_taken & io_ds_ready_go & io_axi_in_rvalid | _GEN_2; // @[IFU.scala 52:52 53:25]
  wire  _T_8 = ~br_taken_cancel; // @[IFU.scala 58:55]
  wire  fs_allowin = ~fs_valid | fs_ready_go & io_ds_allowin; // @[IFU.scala 75:29]
  wire  _GEN_4 = br_taken & io_axi_in_rvalid & fs_allowin ? 1'h0 : br_taken; // @[IFU.scala 61:52 62:18 44:27]
  wire  _GEN_5 = _T_3 & ~br_taken_cancel | _GEN_4; // @[IFU.scala 58:72 59:18]
  wire [63:0] seq_pc = fs_pc + 64'h4; // @[IFU.scala 69:24]
  wire [63:0] pc_next = br_taken ? br_target : seq_pc; // @[IFU.scala 70:19]
  assign io_to_ds_pc = fs_pc; // @[IFU.scala 89:17]
  assign io_fs_to_ds_valid = fs_valid & fs_ready_go; // @[IFU.scala 74:33]
  assign io_inst = fs_inst; // @[IFU.scala 115:13]
  assign io_axi_out_araddr = pc_next[31:0]; // @[IFU.scala 99:23]
  assign io_axi_out_arvalid = io_ds_ready_go; // @[IFU.scala 100:24]
  assign io_axi_out_rready = ~fs_valid | fs_ready_go & io_ds_allowin; // @[IFU.scala 75:29]
  assign io_clear_cache = io_fence & ~cache_init; // @[IFU.scala 50:32]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 28:34]
      br_taken_cancel <= 1'h0; // @[IFU.scala 28:34]
    end else begin
      br_taken_cancel <= _GEN_3;
    end
    if (reset) begin // @[IFU.scala 31:28]
      br_target <= 64'h0; // @[IFU.scala 31:28]
    end else if (_T_3 & ~br_taken_cancel) begin // @[IFU.scala 58:72]
      br_target <= io_br_target; // @[IFU.scala 60:19]
    end
    if (reset) begin // @[IFU.scala 32:27]
      fs_valid <= 1'h0; // @[IFU.scala 32:27]
    end else if (io_br_taken & _T_8) begin // @[IFU.scala 76:42]
      fs_valid <= 1'h0; // @[IFU.scala 77:18]
    end else if (fs_allowin) begin // @[IFU.scala 78:27]
      fs_valid <= io_axi_in_rvalid; // @[IFU.scala 79:18]
    end
    if (reset) begin // @[IFU.scala 38:29]
      cache_init <= 1'h0; // @[IFU.scala 38:29]
    end else begin
      cache_init <= _GEN_1;
    end
    if (reset) begin // @[IFU.scala 44:27]
      br_taken <= 1'h0; // @[IFU.scala 44:27]
    end else begin
      br_taken <= _GEN_5;
    end
    if (reset) begin // @[IFU.scala 45:24]
      fs_pc <= 64'h7ffffffc; // @[IFU.scala 45:24]
    end else if (io_axi_in_rvalid & fs_allowin) begin // @[IFU.scala 81:36]
      if (br_taken) begin // @[IFU.scala 70:19]
        fs_pc <= br_target;
      end else begin
        fs_pc <= seq_pc;
      end
    end
    if (reset) begin // @[IFU.scala 46:26]
      fs_inst <= 32'h0; // @[IFU.scala 46:26]
    end else if (io_axi_in_rvalid & fs_allowin) begin // @[IFU.scala 81:36]
      fs_inst <= io_axi_in_rdata[31:0]; // @[IFU.scala 83:17]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,
            "fs_pc:%x fs_valid:%d fs_allowin:%d fs_inst:%x arvalid:%d rvalid:%d rdata:%x next_pc:%x br_taken:%d fs_ds_valid:%d\n"
            ,fs_pc,fs_valid,fs_allowin,fs_inst,io_axi_out_arvalid,io_axi_in_rvalid,io_axi_in_rdata[31:0],pc_next,
            br_taken,fs_to_ds_valid); // @[IFU.scala 118:11]
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
  _RAND_1 = {2{`RANDOM}};
  br_target = _RAND_1[63:0];
  _RAND_2 = {1{`RANDOM}};
  fs_valid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  cache_init = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  br_taken = _RAND_4[0:0];
  _RAND_5 = {2{`RANDOM}};
  fs_pc = _RAND_5[63:0];
  _RAND_6 = {1{`RANDOM}};
  fs_inst = _RAND_6[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
/* verilator lint_on UNUSED */
