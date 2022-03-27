`timescale 1ns / 1ps
module BlockChecker(
    input clk,
    input reset,
    input [7:0] in,
    output result
    );
    parameter b0 = 0;  // ""
    parameter b1 = 1;  // "b"
    parameter b2 = 2;  // "be"
    parameter b3 = 3;  // "beg"
    parameter b4 = 4;  // "begi"
    parameter b5 = 5;  // "begin"

    parameter e0 = 6;  // ""
    parameter e1 = 7;  // "e"
    parameter e2 = 8;  // "en"
    parameter e3 = 9;  // "end"

    reg [4:0] b_state, e_state;
    reg [15:0] b_count, e_count;
    reg error_flag, if_former_isspace, first_to_error;

    initial initialization;

    always@(posedge clk, posedge reset) begin
        if(reset) initialization;
        else begin
            if(b_count >= e_count || first_to_error) begin
                //the state_trans of "begin"
                case(b_state)
                    b0: begin 
                            if(if_former_isspace) b_state <= (in == "b" || in == "B") ? b1 : b0;
                            if_former_isspace <= (in == " ") ? 1 : 0;
                    end
                    b1: begin 
                            b_state <= (in == "e" || in == "E") ? b2 : b0;
                            if_former_isspace <= (in == " ") ? 1 : 0;
                    end
                    b2: begin
                            b_state <= (in == "g" || in == "G") ? b3 : b0;
                            if_former_isspace <= (in == " ") ? 1 : 0;
                    end
                    b3: begin 
                            b_state <= (in == "i" || in == "I") ? b4 : b0;
                            if_former_isspace <= (in == " ") ? 1 : 0;
                    end
                    b4: begin
                            b_state <= (in == "n" || in == "N") ? b5 : b0;
                            if_former_isspace <= (in == " ") ? 1 : 0;
                            b_count <= (in == "n" || in == "N") ? b_count + 1 : b_count;
                    end
                    b5: begin
                            b_state <= b0;
                            if(in != " ") b_count = b_count - 1;
                    end
                endcase
                // the state_trans of "end"
                case(e_state)
                    e0: begin
                            if(if_former_isspace) e_state <= (in == "e" || in == "E") ? e1 : e0;
                            if_former_isspace <= (in == " ") ? 1 : 0;
                    end
                    e1: begin
                            e_state <= (in == "n" || in == "N") ? e2 : e0;
                            if_former_isspace <= (in == " ") ? 1 : 0;
                    end
                    e2: begin
                            e_state <= (in == "d" || in == "D") ? e3 : e0;
                            if_former_isspace <= (in == " ") ? 1 : 0;
                            e_count <= (in == "d" || in == "D") ? e_count + 1 : e_count;
                    end
                    e3: begin
                            e_state <= e0;
                            if(in != " ") e_count = e_count - 1;
                    end
                endcase
            end
            // if error occurred (flag will keep 1 until "reset" is on)
            if(e_count > b_count) begin
                if(first_to_error) begin
                    if(in == " ") begin
                        error_flag <= 1;
                        first_to_error <= 0;
                    end
				end
            end
            
        end
    end

    assign result = error_flag ? 0 : 
                    (b_count == e_count) ? 1 : 0;
    task initialization;
        begin
            if_former_isspace <= 1;
            b_state <= b0;
            e_state <= e0;
            b_count <= 0;
            e_count <= 0;
            error_flag <= 0;
            first_to_error <= 1;
        end
    endtask

endmodule
