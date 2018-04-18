`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:40:42 04/11/2018 
// Design Name: 
// Module Name:    control
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
module control(
    input clk,
    input rst_n,
    output reg [5:0] RAddr1,
    output reg [5:0] RAddr2,
    output reg [5:0] WAddr,
    output reg  ctr,
    output reg [5:0] init_control
    );
    
    reg [5:0] Addr=0;
    reg c_control=0;
    reg [5:0] init=0;

    always@(posedge clk,negedge rst_n)
    begin
      if(~rst_n)
       init<=0;
       else if (init<3) begin
           init<=init+1;   //when init accumulate to 3 ,then init keep as 3 until reset.
       end
    end

    always@(*)
    begin
      if(init==3)begin
        RAddr1 = Addr;  //now Addr==0 , after this time , alu read from REG_FILE and calculate
        RAddr2 = Addr+1;
        WAddr = Addr+2;
        ctr = c_control;
      end
      else begin
        RAddr1 = init;
        RAddr2 = Addr;
        WAddr = init-1;
        ctr = 1;
      end
    end

    always@(*)begin
      init_control = init;
    end

    always@(posedge clk,negedge rst_n)begin
      if(~rst_n)
        Addr<=0;
       else if (init<3) begin
           Addr<=0;
       end 
       else if (Addr<=5'd60&&c_control==1) begin
           Addr<=Addr+1;
       end
    end

    always@(posedge clk,negedge rst_n)
      begin
        if(~rst_n)
          c_control<=0;
        else if(init==1)
          c_control<=1;
        else if (Addr==5'd61) begin
          c_control<=0;
        end
      end

endmodule
