module GRF(  // support "internal forwarding"
    input clk,
    input reset,
    input RegWrite_W,
    input [31:0] pc4_W,
    input [31:0] pc4_D,
    input [31:0] pc8_D,
    input [4:0] A1_D,
    input [4:0] A2_D,
    input [4:0] A3_W,
    input [31:0] RegData,
    output reg [31:0] RD1,
    output reg [31:0] RD2
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
            if(RegWrite_W) begin
                //if(A3_W != 0) $display("%d@%h: $%d <= %h", $time, pc4_W - 4, A3_W, RegData);
                //if(A3_W != 0 ) $display("@%h: $%d <= %h", pc4_W - 4, A3_W, RegData);
                if(A3_W != 5'b00000) register[A3_W] <= RegData;
            end
        end
    end

    always@(*) begin  //internal forwarding
        if((A1_D == A3_W) && (RegWrite_W) && (A3_W != 5'b00000)) RD1 = RegData;
        else RD1 = register[A1_D];

        if((A2_D == A3_W) && (RegWrite_W) && (A3_W != 5'b00000)) RD2 = RegData;
        else RD2 = register[A2_D];
    end


endmodule