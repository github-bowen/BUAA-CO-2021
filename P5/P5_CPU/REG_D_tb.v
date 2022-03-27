`timescale 1ns / 1ps

module REG_D_tb;

	// Inputs
	reg [31:0] IR_F;
	reg [31:0] pc4_F;
	reg [31:0] pc8_F;
	reg D_en;
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] IR_D;
	wire [31:0] pc4_D;
	wire [31:0] pc8_D;

	// Instantiate the Unit Under Test (UUT)
	REG_D uut (
		.IR_F(IR_F), 
		.pc4_F(pc4_F), 
		.pc8_F(pc8_F), 
		.D_en(D_en), 
		.clk(clk), 
		.reset(reset), 
		.IR_D(IR_D), 
		.pc4_D(pc4_D), 
		.pc8_D(pc8_D)
	);

	initial begin
		// Initialize Inputs
		IR_F = 32'habcd_1234;
		pc4_F = 32'h0000_3004;
		pc8_F = 32'h0000_3008;
		D_en = 1;
		clk = 0;
		reset = 1;

		// Wait 10 ns for global reset to finish
		#10;
        reset = 0;
		// Add stimulus here
		#30;
		D_en = 0;
		#20;
		D_en = 1;
		reset = 1;
		#10;
		reset = 0;
	end

	always #5 clk = ~clk;
    always begin
		#10;
		if(reset) begin
			pc4_F = 32'h0000_3004;
			pc8_F = 32'h0000_3008;
		end
		else if(D_en) begin
			pc4_F = pc4_F + 4;
			pc8_F = pc4_F + 4;
		end
	end
endmodule

