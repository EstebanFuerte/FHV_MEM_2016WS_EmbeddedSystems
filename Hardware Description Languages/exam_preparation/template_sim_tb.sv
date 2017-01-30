// ------------------------------------
// MEM3 -- HDL
// Project:
// Author:		stst
// Date:		30.01.2017
// ------------------------------------

module tb_sevenseg();

	// (1) Create witing to connect the DUT
/* 	For Simulations with clks
	logic       rst_n;
    logic       clk50m; */
	
	// (2) Plug in the DUT
	sevenseg dut
	(
		.*	//possible if they have the same name and type
	);
	
	// (3) Drive the DUT inputs using stimuli
	
/* 	For Simulations with clks
	logic run_sim = 1'b1;
	initial begin : clk_gen
		clk50m = 1'b0;
		while (run_sim)begin
			#10ns clk50m = ~ clk50m;
		end
	end*/
	
	// General
	initial begin
		$display("-------------------");
		$display("tb_sevenseg started");
		$display("-------------------");
		/* For Simulations with clks
		rst_n = 1'b0;
		
		// End POR (power on reset)
		#99ns;			// Wait for 99ns (asynchronous to the clock)
        rst_n = 1'b1;   // Release the rst_n, dut leaves reset
        */
		
		
		// Stop simulation
		#1us;
		/* 	For Simulations with clks
		run_sim = 1'b0;             // Stops the clk_gen while loop
		*/
		
		$display("-------------------");
		$display("tb_sevenseg finished");
		$display("-------------------");
	end
	
	
endmodule