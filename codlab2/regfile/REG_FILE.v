`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:53:10 04/07/2018 
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
    input	[5:0]	  rAddr,
    output  [31:0]	  rDout,
    input	[5:0]	  wAddr,
    input	[31:0]    wDin,
    input			  wEna
    );
    integer i;
    reg [31:0] regfile [0:63];
    initial
     begin
       regfile[0]=2;
       regfile[1]=2;
     end
    assign rDout = regfile[rAddr];
    always@(negedge clk,negedge rst_n)
      begin
        if(~rst_n)
          begin
             regfile[0]<=2;
             regfile[1]<=2;
             for(i=2;i<64;i=i+1)
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
