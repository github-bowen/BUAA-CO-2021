`timescale 1ns / 1ps
module gray(
    input Clk,
    input Reset,
    input En,
    output [2:0] Output,
    output Overflow
    );
    reg [2:0] status;
    reg if_overflow;
    parameter s0 = 3'b000,
              s1 = 3'b001,
              s2 = 3'b011,
              s3 = 3'b010,
              s4 = 3'b110,
              s5 = 3'b111,
              s6 = 3'b101,
              s7 = 3'b100;

    initial begin
        status <= s0;
        if_overflow <= 0;
    end

    always @(posedge Clk) begin
        if(Reset) begin
            status <= s0;
            if_overflow <= 0;
        end
        else begin
            if(En) begin
                case(status)
                    s0: status <= s1;
                    s1: status <= s2;
                    s2: status <= s3;
                    s3: status <= s4;
                    s4: status <= s5;
                    s5: status <= s6;
                    s6: status <= s7;
                    s7: begin 
                            status <= s0;
                            if_overflow <= 1;
                    end
                endcase
            end
        end
    end


    assign Output = status;
    assign Overflow = if_overflow;
endmodule
