`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:46:40 03/29/2018 
// Design Name: 
// Module Name:    top2 
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
module top2(
    input [31:0] a,
    input [31:0] b,
    output [31:0] out
    );

    wire [31:0] a1;
    wire [31:0]a2;
    wire [31:0] a3;
    ALU  add1(a,b,5'h01,a1);
    ALU  add2(b,a1,5'h01,a2);
    ALU  add3(a1,a2,5'h01,a3);
    ALU  add4(a2,a3,5'h01,out);


endmodule
