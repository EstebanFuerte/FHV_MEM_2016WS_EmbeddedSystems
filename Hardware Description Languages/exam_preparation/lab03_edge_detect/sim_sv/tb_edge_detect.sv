// ------------------------------------
// MEM3 -- HDL
// Project:		Test for edge detect
// Author:		stst
// Date:		30.01.2017
// ------------------------------------

`timescale 10ns/10ns        // Tell the simulator what the minimum time step shall be

module tb_edge_detect();

	// (1) Create witing to connect the DUT
	logic       rst_n;
    logic       clk50m;
	logic		in;
	logic		risingedge;
	logic		fallingedge;
	
	// (2) Plug in the DUT
	edge_detect dut
	(
		.*	//possible if they have the same name and type
	);
	
	// (3) Drive the DUT inputs using stimuli
	logic run_sim = 1'b1;
	initial begin : clk_gen
		clk50m = 1'b0;
		while (run_sim)begin
			#10ns;
			clk50m = ~ clk50m;
		end
	end
	
	// General
	initial begin
		$display("-------------------");
		$display("tb_sevenseg started");
		$display("-------------------");
		rst_n = 1'b0;
		in = 1'b1;
		
		// End POR (power on reset)
		#99ns;			// Wait for 99ns (asynchronous to the clock)
        rst_n = 1'b1;   // Release the rst_n, dut leaves reset
		
		// create a few edges
		for (int i=0; i<10; i++) begin
            #1us;                   // Wait for 1us
            @ (negedge clk50m)      // Wait for the falling edge of the clock
                                    // >>> Change inputs at the passive edge of the clock <<<
            in = ~in;               // Toggle the signal 'in'
            $display("Input in is now %d",in);
		end
		
		// Stop simulation
		#1us;
		run_sim = 1'b0;             // Stops the clk_gen while loop
		
		$display("-------------------");
		$display("tb_sevenseg finished");
		$display("-------------------");
	end
	
	
endmodule