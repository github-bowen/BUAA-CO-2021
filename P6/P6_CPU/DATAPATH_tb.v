`timescale 1ns / 1ps

module DATAPATH_tb;

	// Inputs
	reg clk;
	reg reset;
	reg pc_en;
	reg D_en;
	reg E_clr;
	reg [2:0] MF_ALUA_E_sel;
	reg [2:0] MF_ALUB_E_sel;
	reg [2:0] MF_MemData_E_sel;
	reg [1:0] MF_DMWD_M_sel;

	// Outputs
	wire [31:0] IR_D_out;
	wire [31:0] IR_E_out;
	wire [31:0] IR_M_out;
	wire [31:0] IR_W_out;

	// Instantiate the Unit Under Test (UUT)
	DATAPATH uut (
		.clk(clk), 
		.reset(reset), 
		.pc_en(pc_en), 
		.D_en(D_en), 
		.E_clr(E_clr), 
		.MF_ALUA_E_sel(MF_ALUA_E_sel), 
		.MF_ALUB_E_sel(MF_ALUB_E_sel), 
		.MF_MemData_E_sel(MF_MemData_E_sel), 
		.MF_DMWD_M_sel(MF_DMWD_M_sel), 
		.IR_D_out(IR_D_out), 
		.IR_E_out(IR_E_out), 
		.IR_M_out(IR_M_out), 
		.IR_W_out(IR_W_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		pc_en = 1;
		D_en = 1;
		E_clr = 0;
		MF_ALUA_E_sel = 0;
		MF_ALUB_E_sel = 0;
		MF_MemData_E_sel = 0;
		MF_DMWD_M_sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
        reset = 0;
		// Add stimulus here
		
	end

	always #5 clk = ~clk;
      
endmodule

