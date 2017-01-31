module tb_crc_system();

	// (1)	DUT wiring
	logic         	rst_n;
	logic    		clk50m;
	logic        	crc_start;
	logic [7:0]  	mem_data;
	logic [15:0] 	crc_out_target;
	logic [9:0]   	mem_addr;
	logic         	crc_rdy;
	logic         	crc_ok;
	logic [15:0]  	crc_out;	

	
	// (2) Plug in the DUT
	crc_system dut
	(
		.*
	);
	
	// (3) Drive the DUT using stimuli
	logic run_sim = 1'b1;
	
	initial begin : clk50
		clk50m = 1'b0;
		while(run_sim) begin
			#10ns;
			clk50m = ~clk50m;
		end
	end
	
	initial begin: stimuli
		rst_n 			= 1'b0;
		crc_start 		= 1'b0;
		mem_data 		= 8'hac;
		crc_out_target 	= 16'd32043;
		mem_addr		= 10'b0;
		crc_rdy			= 1'b0;
		crc_ok			= 1'b0;
		crc_out			= 16'b0;
		
		// Leave PowerOnReset
		#99ns;
		rst_n = 1'b1;
		
		#100ns;
		crc_start = 1'b1;
		#40ns;
		crc_start = 1'b0;
		
		#80us
		crc_start = 1'b1;
		#40ns;
		crc_start = 1'b0;		
		
		#200us;
		run_sim = 1'b0;
	end
endmodule
