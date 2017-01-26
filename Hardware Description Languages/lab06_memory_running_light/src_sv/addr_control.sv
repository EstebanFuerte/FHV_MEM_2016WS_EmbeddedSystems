/* ----------------------------------
Project:    Memory_running_light
Purpose:    Use a memory content to display a running light
Author:     ANM
Version:    v00, 13.01.2017
   ---------------------------------- */
`include "header.sv"

module addr_control(
    input   logic                       rst_n,
    input   logic                       clk50m,
    input   logic [`PRESCALE_W-1:0]     prescale,
    input   logic [`ADDR_W-1:0]         addr_end,
    output  logic [`ADDR_W-1:0]         addr
);


    logic [`PRESCALE_W-1:0]             prescale_cnt;
    logic [`ADDR_W-1:0]                   addr_cnt;
    logic                               addr_cnt_en;
    
    // ---- prescaler ----
    always_ff @ (negedge rst_n or posedge clk50m) begin
        if (!rst_n) begin
            prescale_cnt                <= '0;
            addr_cnt_en                 <= 1'b0;
        end
        else if (prescale_cnt < prescale) begin
            prescale_cnt                <= prescale_cnt + `PRESCALE_W'd1;
            addr_cnt_en                 <= 1'b0;
        end
        else begin
            prescale_cnt                <= '0;
            addr_cnt_en                 <= 1'b1;
        end
    end
    
    // ---- address counter ----
    always_ff @ (negedge rst_n or posedge clk50m) begin
        if (!rst_n) begin
            addr                        <= '0;
        end
        else if ( addr_cnt_en && (addr < addr_end) )  begin
            addr                        <= addr + `ADDR_W'd1;
        end
        else if ( addr_cnt_en && (addr >= addr_end) ) begin
            addr                        <= '0;
        end
    end



endmodule