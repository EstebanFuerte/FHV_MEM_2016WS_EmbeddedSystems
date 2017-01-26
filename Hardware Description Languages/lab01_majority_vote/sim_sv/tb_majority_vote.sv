// ---------------------------
// MEM3 -- HDL
// Project:		Test the majority_vote module
// Author:		ANM
// Date:		01.12.2016
// ---------------------------

module tb_majority_vote();

	// (1) Create the wiring to connect the DUT with
	//     DUT --> device under test
	logic		x0;
	logic		x1;
	logic		x2;
	logic		y;
	
	// (2) Plug in the DUT
	// 		The DUT is a submodule of the test bench
	
	// Syntax	Name of the submodule	Name in the tb
				majority_vote			dut
				(
				// Now connect the inputs and outputs
				// .submodule name			(wire name)
					.x0		(x0),
					.x1		(x1),
					.x2		(x2),
					.y		(y)
				);
	
	// (3) Drive the DUT inputs using stimuli
	
	initial begin
		// Set all inputs here
		// Lines are executed with zero time delay
		x0 = 0;
		x1 = 0;
		x2 = 0;
		# 100ns;		// Wait for 100ns
		x0 = 1;
		x1 = 0;
		x2 = 0;
		# 100ns;		// Wait for 100ns
		x0 = 0;
		x1 = 1;
		x2 = 0;
		# 100ns;		// Wait for 100ns
		x0 = 1;
		x1 = 1;
		x2 = 0;
		# 100ns;		// Wait for 100ns
		x0 = 0;
		x1 = 0;
		x2 = 1;
		# 100ns;		// Wait for 100ns
		x0 = 1;
		x1 = 0;
		x2 = 1;
		# 100ns;		// Wait for 100ns
		x0 = 0;
		x1 = 1;
		x2 = 1;
		# 100ns;		// Wait for 100ns
		x0 = 1;
		x1 = 1;
		x2 = 1;
		# 100ns;		// Wait for 100ns
	end


endmodule