import "DPI-C" function void ebreak_handle(input int flag);
import "DPI-C" function void ecall_handle(input int flag);

module DPI(
    input wire[31:0] flag,
    input wire[31:0] ecall_flag
);

always@(*)begin
    ebreak_handle(flag);
    ecall_handle(ecall_flag);
end

endmodule
