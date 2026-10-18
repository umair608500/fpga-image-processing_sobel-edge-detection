`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:42:48 05/16/2026 
// Design Name: 
// Module Name:    clk_div_25 
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
module clk_div_25 (
    input  wire clk_50,
    input  wire reset,
    output reg  clk_25
);

    always @(posedge clk_50 or posedge reset) begin
        if (reset)
            clk_25 <= 0;
        else
            clk_25 <= ~clk_25;
    end

endmodule
