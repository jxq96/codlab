`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:01:47 03/29/2018
// Design Name:   top
// Module Name:   E:/cod lab/codlab1/alu/testtop1.v
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

module testtop1;

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
		a = 5;
		b = 2;
		op = 5'h00;

		// Wait 100 ns for global reset to finish
		#100;
		op=5'h01;
		#100;
		op=5'h02;
		#100;
		op=5'h03;
		#100;
		op=5'h04;
		#100;
		op=5'h05;
		#100;
		op=5'h06;
        
		// Add stimulus here

	end
      
endmodule

