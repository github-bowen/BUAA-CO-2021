module DM(
    input clk,
    input reset,
    input [31:0] PC,
    input [31:0] A,
    input [31:0] WD,
    input WE,
    output [31:0] RD
    );
    reg [31:0] dm[0:1023];
    integer i;

    initial begin
        for(i = 0; i < 1024; i = i + 1)
            dm[i] <= 32'b0;
    end

    always@(posedge clk) begin
        if(reset) begin
            for(i = 0; i < 1024; i = i + 1)
                dm[i] <= 32'b0;
        end
        else if(WE) begin
            $display("@%h: *%h <= %h", PC, A, WD);
            dm[A[11:2]] <= WD;
        end
    end

    assign RD = dm[A[11:2]];


endmodule
