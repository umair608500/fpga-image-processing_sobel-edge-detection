`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:10:41 05/11/2026 
// Design Name: 
// Module Name:    Top_Sobel 
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
module Top_Sobel(
    input  wire clk_50,
    input  wire reset,
    output [7:0] pixel, 
    output wire hsync,
    output wire vsync,
    output wire [7:0] vga_r,
    output wire [7:0] vga_g,
    output wire [7:0] vga_b
);

    wire clk;
    clk_div_25 U0 (.clk_50(clk_50), .reset(reset), .clk_25(clk));

    // FIX 1: Bit widths fixed to match vga_timing module
    wire [9:0] x; 
    wire [8:0] y; 
    wire display_active;
    
    vga_timing U2 (
        .clk(clk), .reset(reset),
        .x(x), .y(y),
        .hsync(hsync), .vsync(vsync),
        .display_active(display_active)
    );

    // FIX 2: Restrict the valid processing window to exactly 128x128 pixels
    wire process_active = display_active && (x < 128) && (y < 128);

    wire [13:0] addr_a;
    assign addr_a = (y << 7) + x;

    wire [7:0] pixel_a;
    B1 B1 (
  .clka(clk),
  .wea(1'b0),        // Explicitly disable write
  .addra(addr_a),
  .dina(8'b0),       // Ground data input
  .douta(pixel_a)
);
    wire [7:0] p00,p01,p02,p10,p11,p12,p20,p21,p22;

    // Use 'process_active' instead of 'display_active'
    line_buffer LB (
        .clk(clk),
        .reset(reset),
        .pixel_in(pixel_a),
        .valid(process_active), 
        .p00(p00),.p01(p01),.p02(p02),
        .p10(p10),.p11(p11),.p12(p12),
        .p20(p20),.p21(p21),.p22(p22)
    );
    
    wire signed [11:0] gx, gy;
    SobelCore S1 (
        .clk(clk),
        .reset(reset),
        .valid(process_active),
        .w00(p00),.w01(p01),.w02(p02),
        .w10(p10),.w11(p11),.w12(p12),
        .w20(p20),.w21(p21),.w22(p22),
        .gx(gx),
        .gy(gy)
    );

    wire [7:0] pixel_out;
    wire valid2;

    Sum S2 (
        .clk(clk),
        .reset(reset),
        .valid(process_active),
        .gx(gx),
        .gy(gy),
        .edge_out(pixel_out),
        .out_valid(valid2)
    );
    
    // FIX 3: Sequential write address to handle pipeline delays safely
    reg [13:0] write_addr;
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            write_addr <= 0;
        end else if (valid2) begin
            write_addr <= write_addr + 1;
        end
    end

    wire [7:0] pixel_b;
    BlockRAM B2 (
      .clka(clk),
      .wea(valid2),
      .addra(write_addr), // Using the internal sequential counter
      .dina(pixel_out),
      .douta(pixel_b)
    );
    
    assign pixel = pixel_out;
    
    // Output black outside of our 128x128 image box
    assign vga_r = process_active ? pixel_out : 8'd0;
    assign vga_g = process_active ? pixel_out : 8'd0;
    assign vga_b = process_active ? pixel_out : 8'd0;

endmodule
