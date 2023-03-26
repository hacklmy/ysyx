import "DPI-C" function void set_gpr_ptr(input logic [63:0] Regfile []);

module traceregs(
    input [63:0] input_reg_0,
    input [63:0] input_reg_1,
    input [63:0] input_reg_2,
    input [63:0] input_reg_3,
    input [63:0] input_reg_4,
    input [63:0] input_reg_5,
    input [63:0] input_reg_6,
    input [63:0] input_reg_7,
    input [63:0] input_reg_8,
    input [63:0] input_reg_9,
    input [63:0] input_reg_10,
    input [63:0] input_reg_11,
    input [63:0] input_reg_12,
    input [63:0] input_reg_13,
    input [63:0] input_reg_14,
    input [63:0] input_reg_15,
    input [63:0] input_reg_16,
    input [63:0] input_reg_17,
    input [63:0] input_reg_18,
    input [63:0] input_reg_19,
    input [63:0] input_reg_20,
    input [63:0] input_reg_21,
    input [63:0] input_reg_22,
    input [63:0] input_reg_23,
    input [63:0] input_reg_24,
    input [63:0] input_reg_25,
    input [63:0] input_reg_26,
    input [63:0] input_reg_27,
    input [63:0] input_reg_28,
    input [63:0] input_reg_29,
    input [63:0] input_reg_30,
    input [63:0] input_reg_31
);
    wire [63:0] traceregs [0:31];
    assign reg[0] = input_reg_0; 
    assign reg[1] = input_reg_1;
    assign reg[2] = input_reg_2;
    assign reg[3] = input_reg_3;
    assign reg[4] = input_reg_4;
    assign reg[5] = input_reg_5;
    assign reg[6] = input_reg_6;
    assign reg[7] = input_reg_7;
    assign reg[8] = input_reg_8;
    assign reg[9] = input_reg_9;
    assign reg[10] = input_reg_10;
    assign reg[11] = input_reg_11;
    assign reg[12] = input_reg_12;
    assign reg[13] = input_reg_13;
    assign reg[14] = input_reg_14;
    assign reg[15] = input_reg_15;
    assign reg[16] = input_reg_16;
    assign reg[17] = input_reg_17;
    assign reg[18] = input_reg_18;
    assign reg[19] = input_reg_19;
    assign reg[20] = input_reg_20;
    assign reg[21] = input_reg_21;
    assign reg[22] = input_reg_22;
    assign reg[23] = input_reg_23;
    assign reg[24] = input_reg_24;
    assign reg[25] = input_reg_25;
    assign reg[26] = input_reg_26;
    assign reg[27] = input_reg_27;
    assign reg[28] = input_reg_28;
    assign reg[29] = input_reg_29;
    assign reg[30] = input_reg_30;
    assign reg[31] = input_reg_31;
    initial set_gpr_ptr(input_reg);
endmodule
