module DM(
    input clk,
    input reset,
    input [31:0] pc4_M,
    input [31:0] MemAddr, // from ALUResult_E
    input [31:0] MemData, // from V2_M
    input MemWrite_M,
    output [31:0] DM_RD
    );
    reg [31:0] dm[0:3071]; // 3072 = 3 * 1024  log2 3072 = 10log2 3
    integer i;

    initial begin
        for(i = 0; i < 3072; i = i + 1)
            dm[i] <= 32'b0;
    end

    always@(posedge clk) begin
        if(reset) begin
            for(i = 0; i < 3072; i = i + 1)
                dm[i] <= 32'b0;
        end
        else if(MemWrite_M) begin
            $display("%d@%h: *%h <= %h", $time, pc4_M - 4, MemAddr, MemData);
            //$display("@%h: *%h <= %h", pc4_M - 4, MemAddr, MemData);
            dm[MemAddr[13:2]] <= MemData;
        end
    end

    assign DM_RD = dm[MemAddr[13:2]];

endmodule
