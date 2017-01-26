module tb_crc_fsm();

	// (1)	DUT wiring
	logic	rst_n;
	logic	clk50m;
	
	logic			crc_start;		// starts crc calculation
	logic	[9:0]	mem_addr_in;	// actual adress of memory
	
	logic	[9:0]	mem_addr_out;	// next adress of memory
	logic 			crc_en;			// enables the crc_calc
	logic			crc_rdy;		// if the whole memory is read

	
	// (2) Plug in the DUT
	crc_fsm dut
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
		rst_n = 1'b0;
		crc_start = 1'b0;
		mem_addr_in = 10'b0;
		mem_addr_out = 10'b0;
		crc_en = 1'b0;
		crc_rdy = 1'b0;
		
		// Leave PowerOnReset
		#99ns;
		rst_n = 1'b1;
		
		#100ns;
		//crc_en = 1'b1;
		crc_start = 1'b1;
		
		#10ns;
		crc_start = 1'b0;
		
		#100us;
		crc_start = 1'b1;
		
		#200us;
		run_sim = 1'b0;
	end
endmodule
