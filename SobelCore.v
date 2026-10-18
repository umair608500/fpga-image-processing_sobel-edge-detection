`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:53:24 05/11/2026 
// Design Name: 
// Module Name:    SobelCOre 
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
module SobelCore(
    input  wire clk,
    input  wire reset,
	 input  wire valid,
    input  wire [7:0] w00,w01,w02,
    input  wire [7:0] w10,w11,w12,
    input  wire [7:0] w20,w21,w22,

    output reg signed [11:0] gx,
    output reg signed [11:0] gy
);

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            gx <= 0;
            gy <= 0;
        end
        else if (valid) begin

            gx <= (w02 + (w12<<1) + w22)
                - (w00 + (w10<<1) + w20);

            gy <= (w20 + (w21<<1) + w22)
                - (w00 + (w01<<1) + w02);
        end
    end

endmodule
