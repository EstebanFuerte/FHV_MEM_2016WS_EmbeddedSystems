/* -----------------------------------
Project:    CRC check
Purpose:    Control the CRC process incl. fetch data from memory
Author:     ANM
Version:    v00, 19.01.2017
   ----------------------------------- */

module crc_system(
    input logic                 rst_n,
    input logic                 clk50m,
    input logic                 crc_start,
    input logic [7:0]           mem_data,
    input logic [15:0]          crc_out_target,
    output logic [9:0]          mem_addr,
    output logic                crc_rdy,
    output logic                crc_ok,
    output logic [15:0]         crc_out
);

    // ---- dummy outputs ----
    assign mem_addr = '0;
    assign crc_rdy = 1'b1;
    assign crc_ok = 1'b0;
    assign crc_out = '0;
    
    // ---- TODO: Create your own code here -----
endmodule