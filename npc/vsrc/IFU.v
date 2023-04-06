/* verilator lint_off UNUSED */
module IFU(
  input  [63:0] io_pc,
  output [31:0] io_inst
);
  wire [63:0] inst_read_Raddr; // @[IFU.scala 11:27]
  wire [63:0] inst_read_Rdata; // @[IFU.scala 11:27]
  wire [63:0] inst_read_Waddr; // @[IFU.scala 11:27]
  wire [63:0] inst_read_Wdata; // @[IFU.scala 11:27]
  wire [7:0] inst_read_Wmask; // @[IFU.scala 11:27]
  wire  inst_read_Write_en; // @[IFU.scala 11:27]
  MEM inst_read ( // @[IFU.scala 11:27]
    .Raddr(inst_read_Raddr),
    .Rdata(inst_read_Rdata),
    .Waddr(inst_read_Waddr),
    .Wdata(inst_read_Wdata),
    .Wmask(inst_read_Wmask),
    .Write_en(inst_read_Write_en)
  );
  assign io_inst = inst_read_Rdata[31:0]; // @[IFU.scala 13:34]
  assign inst_read_Raddr = io_pc; // @[IFU.scala 12:24]
  assign inst_read_Waddr = 64'h0;
  assign inst_read_Wdata = 64'h0;
  assign inst_read_Wmask = 8'h0;
  assign inst_read_Write_en = 1'h0;
endmodule
/* verilator lint_on UNUSED */
