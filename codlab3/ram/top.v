`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:30:34 04/11/2018 
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
    input rst_n,
    output reg  [31:0] tmp
    );

    wire [31:0] alu_out,RE_OUT1,RE_OUT2,RAM_OUT;
    wire [5:0]  WAddr,RAddr1,RAddr2;
    wire ctr;
    wire  [5:0] where;
    //reg [31:0] tmp=0;
    reg we=0;
    ALU myALU(RE_OUT1,RE_OUT2,5'h01,alu_out);
    REG_FILE myREG_FILE(clk,rst_n,RAddr1,RE_OUT1,RAddr2,RE_OUT2,WAddr,tmp,ctr);
    RAM myRAM(clk,1,we,WAddr,alu_out,clk,1,RAddr1,RAM_OUT);
    control mycontrol(clk,rst_n,RAddr1,RAddr2,WAddr,ctr,where);

    always@(*)
     begin
       if(where<3)
         tmp = RAM_OUT;
       else begin
           tmp = alu_out;
       end  
     end

     always@(*)
      begin
        if(where<3)
         we = 0;
         else if(RAddr1 < 61)
          we = 1;
      end
endmodule
