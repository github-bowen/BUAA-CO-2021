module GRF(
    input clk,
    input reset,
    input WE3,
    input [31:0] PC,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    output [31:0] RD1,
    output [31:0] RD2
    );
    reg [31:0] register[0:31];
    integer i;

    initial begin
        for(i = 0; i < 32; i = i + 1)
            register[i] <= 32'b0;
    end

    always@(posedge clk) begin
        if(reset) begin
            for(i = 0; i < 32; i = i + 1)
            register[i] <= 32'b0;
        end
        else begin
            if(WE3) begin
                $display("@%h: $%d <= %h", PC, A3, WD);
                if(A3 != 5'b00000) register[A3] <= WD;
            end
        end
    end

    assign RD1 = register[A1];
    assign RD2 = register[A2];


endmodule
