`include "MACRO.v"

module MDU(  // mutiply-divide unit
    input [31:0] in1,
    input [31:0] in2,
    input [3:0] MDUOp,
    input start_E,
    input clk,
    input reset,
    input Req,
    output reg [31:0] hi,
    output reg [31:0] lo,
    output reg busy
    );
    reg [31:0] temp_hi, temp_lo;
    reg [5:0] Time;

    initial begin
        temp_hi <= 0;
        temp_lo <= 0;
        hi <= 0;
        lo <= 0;
        busy <= 0;
        Time <= 0;
    end

    always@(posedge clk) begin
        if(reset) begin
            temp_hi <= 0;
            temp_lo <= 0;
            hi <= 0;
            lo <= 0;
            busy <= 0;
            Time <= 0;
        end
        else if(!Req) begin
            
            case(MDUOp)
                `MTHI: hi <= in1;
                `MTLO: lo <= in1;
            endcase

            if(start_E == 1) begin
                busy <= 1;
                case(MDUOp)
                    `MULT: begin
                        {temp_hi, temp_lo} <= {{32{in1[31]}}, in1} * {{32{in2[31]}}, in2};
                        Time <= `MULT_T;
                    end
                    `MULTU: begin
                        {temp_hi, temp_lo} <= {32'b0, in1} * {32'b0, in2};
                        Time <= `MULT_T;
                    end
                    `DIV: begin
                        temp_lo <= $signed(in1) / $signed(in2);
                        temp_hi <= $signed(in1) % $signed(in2);
                        Time <= `DIV_T;
                    end
                    `DIVU: begin
                        temp_lo <= {1'b0, in1} / {1'b0, in2};
                        temp_hi <= {1'b0, in1} % {1'b0, in2};
                        Time <= `DIV_T;
                    end
                endcase
            end
            else if(busy) begin
                if(Time == 0) begin
                    hi <= temp_hi;
                    lo <= temp_lo;
                    busy <= 0;
                end
                else Time <= Time - 1;
            end
        end
    end
    


endmodule
