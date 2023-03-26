import "DPI-C" function void set_gpr_ptr(input logic [63:0] Regfile []);

module traceregs(
    input [63:0] input_reg [0:31]
);
    initial set_gpr_ptr(input_reg);
endmodule