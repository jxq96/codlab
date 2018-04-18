`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:06:30 04/07/2018
// Design Name:   top
// Module Name:   E:/cod lab/codlab2/regfile/testtop.v
// Project Name:  regfile
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

module testtop;

	// Inputs
	reg clk;

	// Outputs
	wire [31:0] num;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.num(num)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#10;
		
        
		// Add stimulus here
	end
	always
		 begin
			#10;
			clk=~clk;
		 end

      
endmodule

