// ------------------------------------
// MEM3 -- HDL
// Project:		
// Author:		stst
// Date:		30.01.2017
// ------------------------------------

module sevenseg(
	// Define inputs and outputs
);

	// place for wires
	//logic	in_ff1, in_ff2;
	
	// Combinatorial logic
	always_comb begin
		// describe complex combinatorial logic
		// if, case for or while can be used
		// Output signals need to be defined for all conditions
	end
	
	
	// Sequential logic
	// To describe sequential logic (FFs, counters)
	// Only changes o fthe output signal needs to specified
	// D-FF:
	always_ff @ (negedge rst_n or posedge clk50m) begin : d_ff_1
			if (!rst_n) begin		// async reset (active low)
				q <= 1'b0;			// reset value
			end
			else begin				// synchronous behaviour
				q <= d;				// at rising edge of the clk, q follows d
			end
	end: d:ff1
	
	// 4bit Counter
	always_ff @ (negedge rst_n or posedge clk50m) begin : 4bit_up_cnd
		if(!rst_n) begin			// async reset (avtive low)
			cnt <= '0;				// '0 is all zeros
		end
		else if (load) begin
			cnt <= data_in;
		end
		else if(en) begin
			cnt <= cnt +4'd1;
		end
		// no else is requiered here
	
	end: 4bit_up_cnd
	
	// outside an always - assign is necessary
	// connection of submodules
	// connection of other signals
	// concentration of signals
	// Simple logic operations
	// assign risingedge  =  in_ff1 & ~in_ff2;
    // assign fallingedge = ~in_ff1 &  in_ff2;

endmodule