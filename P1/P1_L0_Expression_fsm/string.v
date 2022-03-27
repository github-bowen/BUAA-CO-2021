`timescale 1ns / 1ps
module string(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );
    parameter s0 = 0; // nothing
    parameter s1 = 1; // when in is num(current last char is "" or signal("*" or "+"))
    parameter s2 = 2; // when in is signal(current last char is num)
    parameter s3 = 3; // Error_state
    reg [1:0] state;

    initial state <= s0;

    always @(posedge clk, posedge clr) begin
        if(clr) state <= s0;
        else begin
            case(state)
                s0: state <= (in >= "0" && in <= "9") ? s1 : s3;
                s1: state <= (in == "*" || in == "+") ? s2 : s3;
                s2: state <= (in >= "0" && in <= "9") ? s1 : s3;
            endcase
        end
    end

    assign out = (state == s1);
endmodule
