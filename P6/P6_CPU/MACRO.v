// ALUOp
`define AND   4'b0000
`define OR    4'b0001
`define ADD   4'b0010
`define SUB   4'b0011
`define SLL   4'b0100
`define SRL   4'b0101
`define SRA   4'b0110
`define SLT   4'b0111
`define LUI   4'b1000
`define SLLV  4'b1001
`define SRLV  4'b1010
`define SRAV  4'b1011
`define XOR   4'b1100
`define NOR   4'b1101
`define SLTU  4'b1110



// DECODER
`define R_OP          6'b000000
`define ADDI_OP       6'b001000  // no overflow
`define ADDIU_OP      6'b001001
`define ANDI_OP       6'b001100
`define ORI_OP        6'b001101
`define XORI_OP       6'b001110
`define SLTI_OP       6'b001010
`define SLTIU_OP      6'b001011

`define LUI_OP        6'b001111

`define LW_OP         6'b100011
`define LB_OP         6'b100000
`define LBU_OP        6'b100100
`define LH_OP         6'b100001
`define LHU_OP        6'b100101
`define SW_OP         6'b101011
`define SB_OP         6'b101000
`define SH_OP         6'b101001

`define BEQ_OP        6'b000100
`define BNE_OP        6'b000101
`define BLEZ_OP       6'b000110
`define BGTZ_OP       6'b000111
`define BLTZ_BGEZ_OP  6'b000001

`define J_OP          6'b000010
`define JAL_OP        6'b000011

`define BLTZ_RT       5'b00000
`define BGEZ_RT       5'b00001

`define AND_FUNCT     6'b100100
`define OR_FUNCT      6'b100101
`define XOR_FUNCT     6'b100110
`define NOR_FUNCT     6'b100111

`define ADD_FUNCT     6'b100000
`define ADDU_FUNCT    6'b100001
`define SUB_FUNCT     6'b100010
`define SUBU_FUNCT    6'b100011

`define SLL_FUNCT     6'b000000
`define SRL_FUNCT     6'b000010
`define SRA_FUNCT     6'b000011
`define SLLV_FUNCT    6'b000100
`define SRLV_FUNCT    6'b000110
`define SRAV_FUNCT    6'b000111
`define SLT_FUNCT     6'b101010
`define SLTU_FUNCT    6'b101011

`define JALR_FUNCT    6'b001001
`define JR_FUNCT      6'b001000

`define MULT_FUNCT    6'b011000
`define MULTU_FUNCT   6'b011001
`define DIV_FUNCT     6'b011010
`define DIVU_FUNCT    6'b011011
`define MFHI_FUNCT    6'b010000
`define MFLO_FUNCT    6'b010010
`define MTHI_FUNCT    6'b010001
`define MTLO_FUNCT    6'b010011

`define RS IR[25:21]
`define RT IR[20:16]
`define RD IR[15:11]

// calculate Tnew in E
`define TNEW_ALU  3'b001
`define TNEW_DM   3'b010
`define TNEW_HI   3'b011
`define TNEW_LO   3'b100  //in fact, TNEW_HI = TNEW_LO, here let them different in order to 
                          //distinguish instructions MFHI and MFLO , convenient for FORWARDING
`define TNEW_NONE 3'b111
`define TNEW_PC   3'b000

//EXTOp
`define ZERO_EXT 1'b1
`define SIGN_EXT 1'b0

//MF_GRFRD1_D  MF_GRFRD2_D
`define M_D_ALU 4'b0001
`define M_D_PC  4'b0010
`define M_D_HI  4'b0110
`define M_D_LO  4'b0111
`define W_D_ALU 4'b0011
`define W_D_DM  4'b0100
`define W_D_PC  4'b0101
`define W_D_HI  4'b1000
`define W_D_LO  4'b1001

//MF_ALUA_E  MF_ALUB_E  MF_MemData_E
`define M_E_ALU 4'b0001
`define M_E_PC  4'b0010
`define M_E_HI  4'b0110
`define M_E_LO  4'b0111
`define W_E_ALU 4'b0011
`define W_E_DM  4'b0100
`define W_E_PC  4'b0101
`define W_E_HI  4'b1000
`define W_E_LO  4'b1001

//MDU
`define MULT    4'b0000
`define MULTU   4'b0001
`define DIV     4'b0010
`define DIVU    4'b0011
`define MTHI    4'b0100
`define MTLO    4'b0101
`define NONE    4'b1111

`define MULT_T   5'd4
`define DIV_T   5'd9

//MF_DMWD_M
`define W_M_ALU 3'b001
`define W_M_DM  3'b010
`define W_M_PC  3'b011
`define W_M_HI  3'b100
`define W_M_LO  3'b101