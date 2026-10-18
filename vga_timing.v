`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:43:31 05/16/2026 
// Design Name: 
// Module Name:    vga_timing 
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
module vga_timing (
    input  wire clk,
    input  wire reset,

    // CHANGED: These are now 'wire' instead of 'reg'
    output wire [9:0] x,
    output wire [8:0] y,

    output wire hsync,
    output wire vsync,
    output wire display_active
);

    parameter H_VISIBLE = 640;
    parameter H_FRONT   = 16;
    parameter H_SYNC    = 96;
    parameter H_BACK    = 48;
    parameter H_TOTAL   = 800;

    parameter V_VISIBLE = 480;
    parameter V_FRONT   = 10;
    parameter V_SYNC    = 2;
    parameter V_BACK    = 33;
    parameter V_TOTAL   = 525;

    reg [9:0] h_count;
    reg [9:0] v_count;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            h_count <= 0;
            v_count <= 0;
        end
        else begin
            if (h_count == H_TOTAL - 1) begin
                h_count <= 0;
                if (v_count == V_TOTAL - 1)
                    v_count <= 0;
                else
                    v_count <= v_count + 1;
            end
            else
                h_count <= h_count + 1;
        end
    end

    // CRITICAL FIX: Update x and y instantly without clock delay
    assign x = (h_count < H_VISIBLE) ? h_count : 0;
    assign y = (v_count < V_VISIBLE) ? v_count : 0;

    assign hsync = ~((h_count >= (H_VISIBLE + H_FRONT)) &&
                     (h_count <  (H_VISIBLE + H_FRONT + H_SYNC)));

    assign vsync = ~((v_count >= (V_VISIBLE + V_FRONT)) &&
                     (v_count <  (V_VISIBLE + V_FRONT + V_SYNC)));

    assign display_active =
        (h_count < H_VISIBLE) &&
        (v_count < V_VISIBLE);

endmodule