`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:10:06 04/12/2018
// Design Name:   top
// Module Name:   E:/cod lab/codlab3/ram/testtop1.v
// Project Name:  ram
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

module testtop1;

	// Inputs
	reg clk;
	reg rst_n;

	// Outputs
	wire [31:0] tmp;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.tmp(tmp)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;

		// Wait 100 ns for global reset to finish
		#10;
        rst_n=1;
		// Add stimulus here

	end
	always begin
		#10;
	  clk=~clk;
	end
      
endmodule

