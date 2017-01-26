/* ----------------------------------
Project:    Memory_running_light
Purpose:    Use a memory content to display a running light
Author:     ANM
Version:    v00, 13.01.2017
   ---------------------------------- */
`include "header.sv"
module memory_verilog(
    input   logic           rst_n,
    input   logic           clk50m,
    input   logic   [`ADDR_W-1:0]   addr,
    output  logic   [`DATA_W-1:0]   data
);

    logic [`DATA_W-1:0]             mem_array [31:0] = '{10'd0, 10'd0, 10'd0, 10'd512, 10'd768, 10'd896, 10'd960, 10'd992, 10'd496, 10'd248, 10'd124, 10'd62, 10'd31, 10'd15, 10'd7, 10'd3, 10'd1, 10'd0, 10'd1, 10'd3, 10'd7, 10'd15, 10'd31, 10'd62, 10'd124, 10'd248, 10'd496, 10'd992, 10'd896, 10'd768, 10'd512, 10'd0};
    
    
    always_ff @ (negedge rst_n or posedge clk50m) begin
        if (!rst_n) begin
            data <= '0;
        end
        else begin
            data <= mem_array[addr];
        end
    end

endmodule