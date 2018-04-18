`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:06:47 04/07/2018 
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
    reg [5:0] readAddr,cnt;
    //reg wEn;
    //reg [1:0] flag;
    initial
     begin
       readAddr = 0;
       cnt = 0;
       calreg1 = 2;
       calreg2 = 2;
     end
     always@(negedge clk)
      begin
       if(cnt == 63)
        begin
          readAddr<=cnt;
          cnt<=cnt;
        end 
       else if (cnt==0) begin
           readAddr<=0;
           cnt<=cnt+1;
       end 
       else
        begin
          cnt<=cnt+1;
          readAddr<=readAddr+1;
          calreg1<=calreg2;
          calreg2<=calreg3;
        end
      end
    

     alu ALU(calreg1,calreg2,5'h01,calreg3);
     REG_FILE myreg(clk,1'b1,readAddr,num,cnt,calreg2,1'b1);


endmodule
