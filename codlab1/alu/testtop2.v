`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:51:17 03/29/2018
// Design Name:   top
// Module Name:   E:/cod lab/codlab1/alu/testtop2.v
// Project Name:  alu
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

module testtop2;

	// Inputs
	reg [31:0] a;
	reg [31:0] b;
	reg [4:0] op;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.a(a), 
		.b(b), 
		.op(op), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		a = 2;
		b = 2;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

