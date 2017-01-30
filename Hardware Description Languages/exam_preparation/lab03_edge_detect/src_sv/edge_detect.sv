// ------------------------------------
// MEM3 -- HDL
// Project:		Implementation of a edge detect
// Author:		stst
// Date:		30.01.2017
// ------------------------------------

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
// 

module edge_detect(
	// Define inputs and outputs
	input 	logic		rst_n,
	input 	logic		clk50m,
	input 	logic		in,
	output	logic		risingedge,
	output 	logic		fallingedge
);

	// place for wires
	logic	in_ff1, in_ff2;

	
	// D-FF
	always_ff @ (negedge rst_n or posedge clk50m) begin
		if(!rst_n) begin
			in_ff1 <= 1'b1;
		end
		else begin
			in_ff1 <= in;
		end
	end
	
	always_ff @ (negedge rst_n or posedge clk50m) begin
		if(!rst_n) begin
			in_ff2 <= 1'b1;
		end
		else begin
			in_ff2 <= in_ff1;
		end
	end	
	
	// outside an always - assign is necessary
	assign risingedge  =  in_ff1 & ~in_ff2;
    assign fallingedge = ~in_ff1 &  in_ff2;
	

endmodule