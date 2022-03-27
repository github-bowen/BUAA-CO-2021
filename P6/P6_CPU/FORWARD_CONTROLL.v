`include "MACRO.v"

module FORWARD_CONTROLL(
    input [31:0] IR_D,
    input [31:0] IR_E,
    input [31:0] IR_M,
    input [31:0] IR_W,
    output [3:0] MF_GRFRD1_D_sel,
    output [3:0] MF_GRFRD2_D_sel,
	output [3:0] MF_ALUA_E_sel,
    output [3:0] MF_ALUB_E_sel,
    output [3:0] MF_MemData_E_sel,
    output [2:0] MF_DMWD_M_sel
    );

    wire [4:0] A1_D, A2_D, A3_D,A1_E, A2_E, A3_E, A1_M, A2_M, A3_M, A1_W, A2_W, A3_W;
	wire [2:0] Tnew_M, Tnew_W;
    wire RegWrite_M, RegWrite_W;

    DECODER Foward_D (
        .IR(IR_D),
        .A1(A1_D),
        .A2(A2_D),
        .A3(A3_D),
        .RegWrite(RegWrite_D)
    );

    DECODER Foward_E (
        .IR(IR_E),
        .A1(A1_E),
        .A2(A2_E),
        .A3(A3_E),
        .RegWrite(RegWrite_E)
    );

    DECODER Foward_M (
        .IR(IR_M),
        .A1(A1_M),
        .A2(A2_M),
        .A3(A3_M),
        .Tnew(Tnew_M),
        .RegWrite(RegWrite_M)
    );

    DECODER Foward_W (
        .IR(IR_W),
        .A1(A1_W),
        .A2(A2_W),
        .A3(A3_W),
        .Tnew(Tnew_W),
        .RegWrite(RegWrite_W)
    );

    assign MF_GRFRD1_D_sel = 
            ((A1_D == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_ALU) && RegWrite_M) ? `M_D_ALU :
            ((A1_D == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_PC) && RegWrite_M) ? `M_D_PC :
            ((A1_D == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_HI) && RegWrite_M) ? `M_D_HI :
            ((A1_D == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_LO) && RegWrite_M) ? `M_D_LO :
			((A1_D == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_ALU) && RegWrite_W) ? `W_D_ALU :
            ((A1_D == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_DM)  && RegWrite_W) ? `W_D_DM  : 
            ((A1_D == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_PC) && RegWrite_W) ? `W_D_PC :
            ((A1_D == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_HI) && RegWrite_W) ? `W_D_HI :
            ((A1_D == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_LO) && RegWrite_W) ? `W_D_LO :
                                                                      4'b0000;

    assign MF_GRFRD2_D_sel = 
            ((A2_D == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_ALU) && RegWrite_M) ? `M_D_ALU :
            ((A2_D == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_PC) && RegWrite_M) ? `M_D_PC :
            ((A2_D == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_HI) && RegWrite_M) ? `M_D_HI :
            ((A2_D == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_LO) && RegWrite_M) ? `M_D_LO :
			((A2_D == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_ALU) && RegWrite_W) ? `W_D_ALU :
            ((A2_D == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_DM)  && RegWrite_W) ? `W_D_DM  : 
            ((A2_D == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_PC) && RegWrite_W) ? `W_D_PC :
            ((A2_D == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_HI) && RegWrite_W) ? `W_D_HI :
            ((A2_D == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_LO) && RegWrite_W) ? `W_D_LO :
                                                                      4'b0000;

	assign MF_ALUA_E_sel = 
            ((A1_E == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_ALU) && RegWrite_M) ? `M_E_ALU :
            ((A1_E == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_PC) && RegWrite_M) ? `M_E_PC :
            ((A1_E == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_HI) && RegWrite_M) ? `M_E_HI :
            ((A1_E == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_LO) && RegWrite_M) ? `M_E_LO :
			((A1_E == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_ALU) && RegWrite_W) ? `W_E_ALU :
            ((A1_E == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_DM)  && RegWrite_W) ? `W_E_DM  :
            ((A1_E == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_PC) && RegWrite_W) ? `W_E_PC : 
            ((A1_E == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_HI) && RegWrite_W) ? `W_E_HI : 
            ((A1_E == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_LO) && RegWrite_W) ? `W_E_LO : 
                                                                      4'b0000;

    assign MF_ALUB_E_sel = 
            ((A2_E == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_ALU) && RegWrite_M) ? `M_E_ALU :
            ((A2_E == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_PC) && RegWrite_M) ? `M_E_PC :
            ((A2_E == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_HI) && RegWrite_M) ? `M_E_HI :
            ((A2_E == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_LO) && RegWrite_M) ? `M_E_LO :
			((A2_E == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_ALU) && RegWrite_W) ? `W_E_ALU :
            ((A2_E == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_DM)  && RegWrite_W) ? `W_E_DM  :
            ((A2_E == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_PC) && RegWrite_W) ? `W_E_PC : 
            ((A2_E == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_HI) && RegWrite_W) ? `W_E_HI : 
            ((A2_E == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_LO) && RegWrite_W) ? `W_E_LO : 
                                                                      4'b0000;


    assign MF_MemData_E_sel = 
            ((A2_E == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_ALU) && RegWrite_M) ? `M_E_ALU :
            ((A2_E == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_PC) && RegWrite_M) ? `M_E_PC :
            ((A2_E == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_HI) && RegWrite_M) ? `M_E_HI :
            ((A2_E == A3_M) && (A3_M != 0) && (Tnew_M == `TNEW_LO) && RegWrite_M) ? `M_E_LO :
			((A2_E == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_ALU) && RegWrite_W) ? `W_E_ALU :
            ((A2_E == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_DM)  && RegWrite_W) ? `W_E_DM  : 
            ((A2_E == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_PC) && RegWrite_W) ? `W_E_PC : 
            ((A2_E == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_HI) && RegWrite_W) ? `W_E_HI : 
            ((A2_E == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_LO) && RegWrite_W) ? `W_E_LO : 
                                                                      4'b0000;

    assign MF_DMWD_M_sel = 
			((A2_M == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_ALU) && RegWrite_W) ? `W_M_ALU :
            ((A2_M == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_DM)  && RegWrite_W) ? `W_M_DM  :
            ((A2_M == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_PC) && RegWrite_W) ? `W_M_PC :  
            ((A2_M == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_HI) && RegWrite_W) ? `W_M_HI :  
            ((A2_M == A3_W) && (A3_W != 0) && (Tnew_W == `TNEW_LO) && RegWrite_W) ? `W_M_LO :  
                                                                      3'b000;

endmodule
