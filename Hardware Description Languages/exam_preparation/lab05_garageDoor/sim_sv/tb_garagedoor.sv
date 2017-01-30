// ------------------------------------
// MEM3 -- HDL
// Project:		Test FSM of garage door
// Author:		stst
// Date:		30.01.2017
// ------------------------------------

module tb_garagedoor();

	// (1) Create witing to connect the DUT
	logic       rst_n;
    logic       clk50m;
	logic		so;
	logic		su;
	logic		buttonUp;
	logic		buttonDown;
	logic		ls;
	logic		rs;
	logic		bl;
	logic		lb;
	
	// (2) Plug in the DUT
	garagedoor dut
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
		buttonDown = 1'b0;
		buttonUp = 1'b0;
		lb = 1'b0;
		so = 1'b0;
		su = 1'b0;
		
		
		// End POR (power on reset)
		#99ns;			// Wait for 99ns (asynchronous to the clock)
        rst_n = 1'b1;   // Release the rst_n, dut leaves reset
		
		
		//press buttonup
		buttonUp = 1'b1;
		#100ns;
		so=1'b1;
		buttonUp = 1'b0;
		#1us;
		
		//pres buttondown + lightbarier
		buttonDown = 1'b1;
		#100ns;
		lb = 1'b1;
		#1us;
		
		// Stop simulation
		#1us;
		run_sim = 1'b0;             // Stops the clk_gen while loop
		
		$display("-------------------");
		$display("tb_sevenseg finished");
		$display("-------------------");
	end
	
	
endmodule