module IFU(
  input  [63:0] io_ipc,
  output [63:0] io_opc
);
  assign io_opc = io_ipc; // @[IFU.scala 9:12]
endmodule
