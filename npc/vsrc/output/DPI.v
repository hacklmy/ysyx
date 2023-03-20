import "DPI-C" function void ebreak_handle(input int flag);

module DPI(
    input wire[31:0] flag
);

always@(*)begin
    ebreak_handle(flag);
end

endmodule