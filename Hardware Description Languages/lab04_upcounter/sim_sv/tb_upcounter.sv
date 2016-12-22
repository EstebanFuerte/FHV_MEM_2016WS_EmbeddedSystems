// ------------------------------------------
// Project:		Test the upcounter
// Author:		Stefan Stark
// Date:		22.12.2016
// -----------------------------------------

module tb_upcounter();

	logic		rst_n;
	logic 		clk50m;
	logic		enable;
	logic [7:0]	count;

	// (2)	Plug in the DUT
	upcounter dut
	(
		.*
	);
	
	logic run_sim = 1'b1;
	
	// (3) Drive the DUT inputs using stimuli
	initial begin : clk50
		clk50m = 1'b0;			// initial value for clk50m
		while(run_sim) begin
			#10ns;
			clk50m = ~clk50m;
		end
	end
	
	initial begin : stimuli
		rst_n = 1'b0;
		enable= 1'b0;
		
		//Leave POR
		#99ns;
		rst_n = 1'b1;
		
		//count a few hundered times
		for (int i=0; i<100; i++) begin
			@ (negedge clk50m);
			enable= 1'b1;
			@ (negedge clk50m);
			enable= 1'b0;
			#100ns;
		end
		
		//Stop simulation
		#100us
		run_sim = 1'b0;
	end
	
endmodule