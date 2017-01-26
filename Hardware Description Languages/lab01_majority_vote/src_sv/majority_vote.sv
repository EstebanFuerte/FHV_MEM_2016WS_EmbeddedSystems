// ---------------------
// MEM3 -- HDL
// Project:		Implement a majority voter
// Author:		ANM
// Date:		01.12.2016
// ---------------------

module majority_vote(
	// Define the inputs and outputs of the module
	input	logic		x0,
	input	logic		x1,
	input	logic		x2,
	
	output	logic		y
);

	// Here we need to define how the module works!
	
	//y = !x0&x1&x2 + x0&x1&!x2 + x0&!x1&x2 + x0&x1&x2;
	// Would be possible but is a lot of work.
	
	always_comb begin	// A block with a combinatorial logic start here
		// Inside this block we can use behavorial modelling (i.e. if, case, for, while)
		
		// begin --> {
		// end   --> }
		
		if (x2==0 && x1==1 && x0 == 1) begin
			y = 1;
		end
		else if (x2==1 && x1==0 && x0 == 1) begin
			y = 1;
		end
		else if (x2==1 && x1==1 && x0 == 0) begin
			y = 1;
		end
		else if (x2==1 && x1==1 && x0 == 1) begin
			y = 1;
		end
		else begin
			y = 0;		// Define output for all possibilities to get combinatorial logic
		end
	
	end
	
	


endmodule