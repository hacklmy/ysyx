import "DPI-C" function void pmem_read(
  input longint Raddr, output longint Rdata);
import "DPI-C" function void pmem_write(
  input longint Waddr, input longint Wdata, input byte Wmask);

/* verilator lint_off UNUSED */

module MEM (
    input [63:0] Raddr,
    input [63:0] Waddr,
    input [63:0] Wdata,
    input [7:0] Wmask,
    input Write_en,
    output [63:0] Rdata
);
 
 always @(*) begin
    pmem_read(Raddr, Rdata);
    if(Write_en)
      pmem_write(Waddr, Wdata, Wmask);
 end
endmodule
/* verilator lint_on UNUSED */

