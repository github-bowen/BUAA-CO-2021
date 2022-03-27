`timescale 1ns / 1ps
module CP0_tb;

	// Inputs
	reg [4:0] CP0_addr;
	reg [31:0] CP0_data_in;
	reg [31:0] pc_M_in;
	reg [6:2] ExcCode_in;
	reg [5:0] HWInt;
	reg CP0_WE;
	reg eret;
	reg clk;
	reg reset;
	reg bd_M;

	// Outputs
	wire Req;
	wire [31:0] epc_out;
	wire [31:0] CP0_data_out;

	// Instantiate the Unit Under Test (UUT)
	CP0 uut (
		.CP0_addr(CP0_addr), 
		.CP0_data_in(CP0_data_in), 
		.pc_M_in(pc_M_in), 
		.ExcCode_in(ExcCode_in), 
		.HWInt(HWInt), 
		.CP0_WE(CP0_WE), 
		.eret(eret), 
		.clk(clk), 
		.reset(reset), 
		.bd_M(bd_M), 
		.Req(Req), 
		.epc_out(epc_out), 
		.CP0_data_out(CP0_data_out)
	);

	initial begin
		// Initialize Inputs
		CP0_addr = 0;
		CP0_data_in = 0;
		pc_M_in = 0;
		ExcCode_in = 0;
		HWInt = 0;
		CP0_WE = 0;
		eret = 0;
		reset = 1;
		clk = 0;
		bd_M = 0;

		// Wait 10 ns for global reset to finish
		#10;
        reset = 0;
		// Add stimulus here
		CP0_WE = 1;
		CP0_addr = 12;
		CP0_data_in = {16'b0, 6'b000111, 8'b0, 0, 1};
		#10;
		CP0_WE = 0;
		HWInt = 6'b000111;
		ExcCode_in = 8;
		bd_M = 1;
		#10;
		HWInt = 0;
		ExcCode_in = 0;
		#50;
		eret = 1;
		#10;
		eret = 0;

	end

	always #5 clk = ~clk;

	always@(posedge clk) begin
		if(reset) pc_M_in <= 32'h3000;
		else if(Req) pc_M_in <= 32'h4180;
		else if(eret) pc_M_in <= epc_out;
		else pc_M_in <= pc_M_in + 4;
	end
      
endmodule

