// ------------------------------------
// MEM3 -- HDL
// Project:		Test upcounter
// Author:		stst
// Date:		30.01.2017
// ------------------------------------

module tb_upcounter();

	// (1) Create witing to connect the DUT
	logic       rst_n;
    logic       clk50m;
	logic		enable;
	logic [7:0]	count;
	
	// (2) Plug in the DUT
	sevenseg dut
	(
		.*	//possible if they have the same name and type
	);
	
	// (3) Drive the DUT inputs using stimuli
	logic run_sim = 1'b1;
	initial begin : clk_gen
		clk50m = 1'b0;
		while (run_sim)begin
			#10ns clk50m = ~ clk50m;
		end
	end
	
	// General
	initial begin
		$display("-------------------");
		$display("tb_sevenseg started");
		$display("-------------------");
		rst_n = 1'b0;
		enable = 1'b0;
		
		
		// End POR (power on reset)
		#99ns;			// Wait for 99ns (asynchronous to the clock)
        rst_n = 1'b1;   // Release the rst_n, dut leaves reset
		
		
		// Count a few hundred times
		for (int i=0; i<500; i++) begin
			@ (negedge clk50m);
			enable = 1'b1;
			@ (negedge clk50m);
			enable = 1'b0;
			#100ns;
		end
			
		// Stop simulation
		#1us;
		run_sim = 1'b0;             // Stops the clk_gen while loop
		
		$display("-------------------");
		$display("tb_sevenseg finished");
		$display("-------------------");
	end
	
	
endmodule