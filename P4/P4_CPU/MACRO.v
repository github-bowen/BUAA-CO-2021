// ALU
`define AND 4'b0000
`define OR  4'b0001
`define ADD 4'b0010
`define SUB 4'b0011
`define SLL 4'b0100
`define SRL 4'b0101
`define SRA 4'b0110
`define SLT 4'b0111

// controller
`define R_OP        6'b000000
`define ORI_OP      6'b001101
`define LW_OP       6'b100011
`define SW_OP       6'b101011
`define BEQ_OP      6'b000100
`define LUI_OP      6'b001111
`define J_OP        6'b000010
`define JAL_OP      6'b000011

`define ADDU_FUNCT  6'b100001
`define SUBU_FUNCT  6'b100011
`define SLL_FUNCT   6'b000000
`define SRL_FUNCT   6'b000010
`define SRA_FUNCT   6'b000011
`define SLT_FUNCT   6'b101010
`define JALR_FUNCT  6'b001001
`define JR_FUNCT    6'b001000