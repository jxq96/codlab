`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:50:46 04/07/2018 
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
    input clk,
    output [31:0] num
    );
    reg [31:0] calreg1,calreg2;
    wire [31:0] calreg3;
    reg [5:0] readAddr,writeAddr;
    initial
     begin
       readAddr=0;
       writeAddr=2;
     end
     always@(negedge clk)
      begin
        if(readAddr==63)
         readAddr<=readAddr;
         else begin
             readAddr<=readAddr+1;
             writeAddr<=writeAddr+1;
             calreg1<=calreg2;
             calreg2<=calreg3;
         end
      end
      ALU alu(calreg1,calreg2,5'h01,calreg3);
      REG_FILE  regfile(clk,1'b1,readAddr,num,writeAddr,calreg3,1'b1);


endmodule
