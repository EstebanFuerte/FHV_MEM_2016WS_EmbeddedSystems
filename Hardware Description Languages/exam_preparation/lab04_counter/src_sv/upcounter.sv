// ------------------------------------
// MEM3 -- HDL
// Project:		Implementation of an upcounter
// Author:		stst
// Date:		30.01.2017
// ------------------------------------

module sevenseg(
	// Define inputs and outputs
	input	logic		rst_n,
	input 	logic		clk50m,
	input 	logic		enable,
	output 	logic [7:0]	count
);

	// place for wires
	logic [7:0] count_new;
	
	// Combinatorial logic
	always_comb begin
		if(enable) begin
			count_new = count + 8'd1;
		end
		else begin
			count_new = count;
		end
	end
	
	// D-FF
	always_ff @ (negedge rst_n or posedge clk50m) begin : d_ff_1
			if (!rst_n) begin		// async reset (active low)
				count <= 8'd0;		// reset value
			end
			else begin				// synchronous behaviour
				count <= count_new;
			end
	end: d_ff_1

endmodule