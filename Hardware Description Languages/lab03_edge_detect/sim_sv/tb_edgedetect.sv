// ------------------------------------------
// Project:		Test the edge detector
// Author:		Stefan Stark
// Date:		22.12.2016
// ------------------------------------------

module tb_edgedetect();
	
	// (1) Create the wiring to connect the DUT
	logic	rst_n;
	logic 	clk50m;
	logic	in;
	logic	risingedge;
	logic	fallingedge;
	
	// (2)	Plug in the DUT
	edgedetect dut
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
		in = 1'b1;
		
		# 100ns;
		rst_n = 1'b1;
		# 100ns;
		
		
		in = 1'b1;
		# 200ns;
		in = 1'b0;
		# 100ns;
		in = 1'b0;
		# 100ns;
		in = 1'b1;
		# 100ns;
		in = 1'b1;
		# 100ns;
		in = 1'b0;
		
		run_sim = 1'b0;
	end
endmodule