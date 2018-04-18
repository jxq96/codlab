`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:20:03 04/07/2018
// Design Name:   top
// Module Name:   E:/cod lab/test/test/test.v
// Project Name:  test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		clk = 1;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
	always begin
		#10;
		clk=~clk;
	end
      
endmodule

