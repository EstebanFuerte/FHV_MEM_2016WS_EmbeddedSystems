// ---------------------
// MEM3 -- HDL
// Project:		Edge detection
// Author:		ANM
// Date:		22.12.2016
// ---------------------

module edge_detect(
    input   logic       rst_n,
    input   logic       clk50m,
    input   logic       in,
    output  logic       risingedge,
    output  logic       fallingedge
    
);
//                        +---------+                  +---------+
//          in            |         |   in_ff1         |         |  in_ff2
//       +----------------+ D     Q +------------------+ D     Q +------------+
//                        |         |                  |         |
//                        |         |                  |         |
//                   +----+ clk     |            +-----+ clk     |
//                   |    |         |            |     |         |
//                   |    +---------+            |     +---------+
//       clk50m      |                           |
//       +-----------+---------------------------+
//       
//       
//       
//                               in_ff1  +-------+                                in_ff1  +-------+
//                               +-------+       |  risingedge                    +-------+not    | fallingedge
//                                       |    and+---------------+                        |    and+---------------+
//                               in_ff2  |       |                                in_ff2  |       |
//                               +-------+not    |                                +-------+       |
//                                       +-------+                                        +-------+



    logic in_ff1, in_ff2;

    always_ff @ (negedge rst_n or posedge clk50m) begin
        if (!rst_n) begin
            in_ff1 <= 1'b1;
        end
        else begin
            in_ff1 <= in;
        end
    end

    always_ff @ (negedge rst_n or posedge clk50m) begin
        if (!rst_n) begin
            in_ff2 <= 1'b1;
        end
        else begin
            in_ff2 <= in_ff1;
        end
    end

    assign risingedge  =  in_ff1 & ~in_ff2;
    assign fallingedge = ~in_ff1 &  in_ff2;

endmodule