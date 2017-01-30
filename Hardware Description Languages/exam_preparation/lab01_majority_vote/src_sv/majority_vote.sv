// ------------------------------------
// MEM3 -- HDL
// Project:		Implementation of majority vote
// Author:		stst
// Date:		30.01.2017
// ------------------------------------

module majority_vote(
	// Define inputs and outputs
	input 	logic	x0,
	input 	logic 	x1,
	input 	logic 	x2,
	output	logic 	y

);

// place for signals

always_comb begin  
	// A block with a combinatorial logic start here
	// Inside this block we can use behavorial modelling
	// (i.e. if, case, for, while)
		
	// begin --> {
	// end   --> }
	
	if(x0 == 0 && x1 == 1 && x2 ==1) begin
		y = 1;
	end
	else if (x0 == 1 && x1 == 0 && x2 == 1) begin
		y = 1;
	end
	else if (x0 == 1 && x1 == 1 && x2 ==0) begin
		y = 1;
	end
	else if (x0 == 1 && x1 == 1 && x2 == 1) begin
		y = 1;
	end
	else begin
		// Define output for all possibilities to get 
		// combinatorial logic
		y = 0;
	end
end

endmodule