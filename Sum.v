`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:01:32 05/11/2026 
// Design Name: 
// Module Name:    Sum 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Sum(
    input  wire clk,
    input  wire reset,
	 input  wire valid,
    input  wire signed [11:0] gx,
    input  wire signed [11:0] gy,
    output reg [7:0] edge_out,
    output reg out_valid
);

    reg [11:0] ax, ay;
    reg [12:0] sum;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            edge_out <= 0;
            out_valid <= 0;
        end
        else if(valid) begin

            ax = (gx < 0) ? -gx : gx;
            ay = (gy < 0) ? -gy : gy;

            sum = ax + ay;

            edge_out <= (sum > 255) ? 8'd255 : sum[7:0];
            out_valid <= 1;

        end
		 else 
				out_valid<=0;
    end

endmodule
