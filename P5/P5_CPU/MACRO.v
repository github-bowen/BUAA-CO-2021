// ALU
`define AND 4'b0000
`define OR  4'b0001
`define ADD 4'b0010
`define SUB 4'b0011
`define SLL 4'b0100
`define SRL 4'b0101
`define SRA 4'b0110
`define SLT 4'b0111
`define LUI 4'b1000

// DECODER
`define R_OP        6'b000000
`define ADDI_OP     6'b001000  // no overflow
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

`define RS IR[25:21]
`define RT IR[20:16]
`define RD IR[15:11]

// calculate Tnew in E
`define TNEW_ALU  3'b001
`define TNEW_DM   3'b010
`define TNEW_NONE 3'b111
`define TNEW_PC   3'b000

//EXTOp
`define ZERO_EXT 1'b1
`define SIGN_EXT 1'b0

//MF_GRFRD1_D  MF_GRFRD2_D
`define M_D_ALU 3'b001
`define M_D_PC  3'b010
`define W_D_ALU 3'b011
`define W_D_DM  3'b100
`define W_D_PC  3'b101

//MF_ALUA_E  MF_ALUB_E  MF_MemData_E
`define M_E_ALU 3'b001
`define M_E_PC  3'b010
`define W_E_ALU 3'b011
`define W_E_DM  3'b100
`define W_E_PC  3'b101

//MF_DMWD_M
`define W_M_ALU 2'b01
`define W_M_DM  2'b10
`define W_M_PC  2'b11