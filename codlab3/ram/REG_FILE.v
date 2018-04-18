`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:37:19 04/11/2018 
// Design Name: 
// Module Name:    REG_FILE 
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
module REG_FILE(
    input	clk,
    input   rst_n,
    input	[5:0]	  rAddr1,
    output  [31:0]	  rDout1,
    input   [5:0]     rAddr2,
    output  [31:0]    rDout2,
    input	[5:0]	  wAddr,
    input	[31:0]    wDin,
    input			  wEna
    );
    integer i;
    reg [31:0] regfile [0:63];
    initial
     begin
       for(i=0;i<64;i=i+1)
         regfile[i] = 0;
     end
    assign rDout1 = regfile[rAddr1];
    assign rDout2 = regfile[rAddr2];
    always@(negedge clk,negedge rst_n)
      begin
        if(~rst_n)
          begin
             for(i=0;i<64;i=i+1)
              begin
                regfile[i]<=0;
              end
          end
        else if(wEna)
         begin
          regfile[wAddr]<=wDin;
         end   
      end
 

endmodule
