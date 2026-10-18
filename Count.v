`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:15:23 05/11/2026 
// Design Name: 
// Module Name:    Count 
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
module Count(
	input clk,
	input reset,
	output reg [7:0] X,
	output reg [7:0] Y
    );
always @(posedge clk or posedge reset) begin
	if(reset) begin
		X<=8'd0;
		Y<=8'd0;
	end
	else 
		if(X==127) begin
			X<=8'd0;
			if(Y==127) 
				Y<=8'd0;
			else 
				Y<=Y+1;
		end
		else 
			X<=X+1;
end
endmodule
