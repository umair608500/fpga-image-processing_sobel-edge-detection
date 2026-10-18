`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:45:32 05/11/2026 
// Design Name: 
// Module Name:    line_buffer 
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
module line_buffer (
    input  wire clk,
    input  wire reset,
    input  wire valid,
    input  wire [7:0] pixel_in,

    output reg [7:0] p00,p01,p02,
    output reg [7:0] p10,p11,p12,
    output reg [7:0] p20,p21,p22
);

    reg [7:0] line1 [0:127];
    reg [7:0] line2 [0:127];
    reg [9:0] col;

    integer i;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            col <= 0;
            for (i=0; i<128; i=i+1) begin
                line1[i] <= 0;
                line2[i] <= 0;
            end
            {p00,p01,p02,p10,p11,p12,p20,p21,p22} <= 0;
        end
        else if (valid) begin
            // Shift data through line buffers
            line2[col] <= line1[col];
            line1[col] <= pixel_in;
            
            // Form 3x3 window with safety limits to prevent 'x's
            p22 <= line2[col];
            p21 <= (col > 0) ? line2[col-1] : 0;
            p20 <= (col > 1) ? line2[col-2] : 0;
            
            p12 <= line1[col];
            p11 <= (col > 0) ? line1[col-1] : 0;
            p10 <= (col > 1) ? line1[col-2] : 0;
            
            p02 <= pixel_in;
            p01 <= (col > 0) ? line1[col-1] : 0;
            p00 <= (col > 1) ? line1[col-2] : 0;

            // CRITICAL FIX: Reset the column counter at the end of the 128-pixel row
            if (col == 127) begin
                col <= 0;
            end else begin
                col <= col + 1;
            end
        end
    end

endmodule
 