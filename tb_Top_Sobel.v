`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:30:00 05/11/2026 
// Design Name:    Top_Sobel Testbench
// Module Name:    tb_Top_Sobel 
// Project Name:   Sobel Edge Detection
// Target Devices: 
// Tool versions: 
// Description:    Testbench for Sobel edge detection system
//
// Dependencies:   Top_Sobel.v, BlockROM.v, BlockRAM.v, line_buffer.v,
//                 SobelCOre.v, Sum.v, Count.v
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module tb_Top_Sobel_Sequential;

    reg clk_50;
    reg reset;

    // Outputs
    wire [7:0] pixel;
    wire hsync;
    wire vsync;
    wire [7:0] vga_r;
    wire [7:0] vga_g;
    wire [7:0] vga_b;

    // Instantiate the UUT
    Top_Sobel uut (
        .clk_50(clk_50),
        .reset(reset),
        .pixel(pixel),
        .hsync(hsync),
        .vsync(vsync),
        .vga_r(vga_r),
        .vga_g(vga_g),
        .vga_b(vga_b)
    );

    // Generate 50MHz clock
    always #10 clk_50 = ~clk_50;

    integer file;
    integer i;

    initial begin
        // 1. Initialize
        clk_50 = 0;
        reset = 1;
        #100;
        reset = 0;

        // 2. Wait for the image to finish processing
        // Instead of `uut.CE.done`, we wait for the write address to hit the end
        $display("Processing image... this will take a moment.");
        wait(uut.write_addr == 16383);
        @(posedge uut.clk); // Wait one extra clock cycle to let the last write finish

        $display("Done at %0t - starting readback", $time);

        // 3. Open the text file
        file = $fopen("filtered_output.txt", "w");

        // 4. Force the memory to stop writing so we can safely read from it
        // (Using Verilog 'force' lets us control internal signals from the testbench)
        force uut.valid2 = 0;

        // 5. Read all 16384 locations sequentially (Just like your friend!)
        for (i = 0; i < 16384; i = i + 1) begin
            // Force the BlockRAM address to 'i'
            force uut.write_addr = i;
            
            // BlockRAM has a read latency, so we wait 2 clock cycles for the data
            @(posedge uut.clk); 
            @(posedge uut.clk); 
            
            // Write the memory output (pixel_b) to the file
            $fwrite(file, "%0d\n", uut.pixel_b);
        end

        // 6. Cleanup
        release uut.write_addr;
        release uut.valid2;
        
        $fclose(file);
        $display("Dump complete! You can now check filtered_output.txt");
        $finish;
    end

endmodule 