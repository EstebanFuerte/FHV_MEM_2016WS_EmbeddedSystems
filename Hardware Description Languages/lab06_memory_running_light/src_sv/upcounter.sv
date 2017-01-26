// ---------------------
// MEM3 -- HDL
// Project:		Sync 8bit up counter
// Author:		ANM
// Date:		22.12.2016
// ---------------------

module upcounter(
    input   logic       rst_n,
    input   logic       clk50m,
    input   logic       enable,
    output  logic [7:0] count
);

    logic [7:0] count_new;

    always_ff @ (negedge rst_n or posedge clk50m) begin
        if (!rst_n) begin
            count <= 8'd0;
        end
        else begin
            count <= count_new;
        end
    end
    
    always_comb begin
        if (enable) begin
            count_new = count + 8'd1;
        end
        else begin
            count_new = count;
        end
    end
    
    
    // Alternative
    // always_ff @ (negedge rst_n or posedge clk50m) begin
    //     if (!rst_n) begin
    //         count <= 8'd0;
    //     end
    //     else if (enable) begin
    //         count <= count + 8'd1;
    //     end
    // end



endmodule
