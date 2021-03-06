module tb_garage_door();

	// (1) DUT wiring
	logic	rst_n;
	logic	clk50m;
	logic	up;		
	logic	dn;		
	logic	top;	
	logic	bottom;	
	logic	lb;		

	logic	left;	
	logic	right;	
	logic	wl;
	
	// (2) Plug in the DUT
	garage_door dut
	(
		.*
	);
	
	// (3) Drive the DUT  using stimuli
	logic run_sim = 1'b1;
	
	initial begin : clk50
		clk50m = 1'b0;			// initial value for clk50m
		while(run_sim) begin
			#10ns;
			clk50m = ~clk50m;
		end
	end
	
	
	initial begin: stimuli
		rst_n 	= 1'b0;
		up 		= 1'b0;
		dn 		= 1'b0;
		top 	= 1'b0;
		bottom 	= 1'b0;
		lb 		= 1'b0;
		
		#99ns;
		rst_n	= 1'b1;
		
		up 		= 1'b1;
		#100ns;
		top 	= 1'b1;
		#100ns;
		
		up		= 1'b0;
		#100ns
		dn		= 1'b1;
		#100ns
		lb		= 1'b1;
		#100ns
		
		dn		= 1'b1;
		#100ns
		bottom	= 1'b1;
		
		#100us
		run_sim = 1'b0;		
		
	end

endmodule