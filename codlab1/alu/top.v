`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:00:59 03/29/2018 
// Design Name: 
// Module Name:    top 
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
module top(
    input [31:0] a,
    input [31:0] b,
    input [4:0]  op,
    output [31:0] out
    );
    parameter	A_NOP	= 5'h00;	//空运算 	
    parameter	A_ADD	= 5'h01;	//符号加
    parameter	A_SUB	= 5'h02;	//符号减
    parameter	A_AND   = 5'h03;	//与
    parameter	A_OR    = 5'h04;	//或
    parameter	A_XOR   = 5'h05;	//异或
    parameter	A_NOR   = 5'h06;	//或非

    ALU test(a,b,op,out);



endmodule
