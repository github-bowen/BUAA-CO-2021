`include "MACRO.v"

module STALL_CONTROLL(
    input [31:0] IR_D,
    input [31:0] IR_E,
    input [31:0] IR_M,
    input [31:0] IR_W,
    input eret_D,
    input busy,
    input start,
    output reg pc_en,
    output reg D_en,
    output reg E_clr
    );
    wire Tuse_A1_0, Tuse_A1_1, Tuse_A2_0, Tuse_A2_1, Tuse_A2_2;
    wire [2:0] Tnew_E, Tnew_M;
    wire [4:0] A1_D, A2_D, A3_D, A3_E, A3_M, A3_W;

    wire Stall, Stall_A1, Stall_A2;
    wire Stall_A1_0_E1, Stall_A1_0_E2, Stall_A1_0_M1, Stall_A1_1_E2;
    wire Stall_A2_0_E1, Stall_A2_0_E2, Stall_A2_0_M1, Stall_A2_1_E2;

    wire Stall_MDU, MDU_IR_D;

    wire mtc0_D, mtc0_E, mtc0_M, mtc0_W;
    wire Stall_eret;

    initial begin
        pc_en = 1;
        D_en = 1;
        E_clr = 0;
    end

    DECODER StallDdecoder (
        .IR(IR_D),
        .A1(A1_D),
        .A2(A2_D),
        .Tuse_A1_0(Tuse_A1_0),
        .Tuse_A1_1(Tuse_A1_1),
        .Tuse_A2_0(Tuse_A2_0),
        .Tuse_A2_1(Tuse_A2_1),
        .Tuse_A2_2(Tuse_A2_2),
        .MDU_IR(MDU_IR_D),
        .CP0_WE(mtc0_D),
        .A3(A3_D)
    );

    DECODER StallEdecoder (
        .IR(IR_E),
        .A3(A3_E),
        .Tnew(Tnew_E),
        .CP0_WE(mtc0_E)
    );

    DECODER StallMdecoder (
        .IR(IR_M),
        .A3(A3_M),
        .Tnew(Tnew_M),
        .CP0_WE(mtc0_M)
    );

    DECODER StallWdecoder (
        .IR(IR_W),
        .A3(A3_W),
        .CP0_WE(mtc0_W)
    );

    //E: busy or start;  D: MDU_IR
    assign Stall_MDU = (busy || start) && MDU_IR_D;

    //F: eret(use epc($14))  D/E/M: mtc0(write epc($14))
    assign Stall_eret = eret_D && (
                            (mtc0_E && A3_E == `epc_Addr) ||
                            (mtc0_M && A3_M == `epc_Addr)
                        );

    //Stall from A1
	assign Stall_A1_0_E1 = Tuse_A1_0 && 
                           (Tnew_E == `TNEW_ALU || Tnew_E == `TNEW_HI || Tnew_E == `TNEW_LO) && 
                           (A1_D == A3_E) && 
                           (A3_E != 0);

	assign Stall_A1_0_E2 = Tuse_A1_0 && 
                           (Tnew_E == `TNEW_DM  || Tnew_E == `TNEW_CP0) &&
                           (A1_D == A3_E) && 
                           (A3_E != 0);

	assign Stall_A1_0_M1 = Tuse_A1_0 && 
                           (Tnew_M == `TNEW_DM  || Tnew_M == `TNEW_CP0) && 
                           (A1_D == A3_M) && 
                           (A3_M != 0);

	assign Stall_A1_1_E2 = Tuse_A1_1 && 
                           (Tnew_E == `TNEW_DM  || Tnew_E == `TNEW_CP0) && 
                           (A1_D == A3_E) && 
                           (A3_E != 0);
	//Stall from A2
	assign Stall_A2_0_E1 = Tuse_A2_0 && 
                           (Tnew_E == `TNEW_ALU || Tnew_E == `TNEW_HI || Tnew_E == `TNEW_LO) && 
                           (A2_D == A3_E) && 
                           (A3_E != 0);

	assign Stall_A2_0_E2 = Tuse_A2_0 && 
                           (Tnew_E == `TNEW_DM  || Tnew_E == `TNEW_CP0) && 
                           (A2_D == A3_E) && 
                           (A3_E != 0);

	assign Stall_A2_0_M1 = Tuse_A2_0 && 
                           (Tnew_M == `TNEW_DM  || Tnew_M == `TNEW_CP0) && 
                           (A2_D == A3_M) && 
                           (A3_M != 0);

	assign Stall_A2_1_E2 = Tuse_A2_1 && 
                           (Tnew_E == `TNEW_DM  || Tnew_E == `TNEW_CP0) && 
                           (A2_D == A3_E) && 
                           (A3_E != 0);
		
	assign Stall_A1 = Stall_A1_0_E1 || Stall_A1_0_E2 || Stall_A1_0_M1 || Stall_A1_1_E2;
	assign Stall_A2 = Stall_A2_0_E1 || Stall_A2_0_E2 || Stall_A2_0_M1 || Stall_A2_1_E2;
	
	assign Stall = Stall_A1 || Stall_A2 || Stall_MDU || Stall_eret;


	always@(*) begin	
		if(Stall) begin
            pc_en = 0;
            D_en = 0;
            E_clr = 1;
        end
        else begin
            pc_en = 1;
            D_en = 1;
            E_clr = 0;
        end
	end

endmodule
