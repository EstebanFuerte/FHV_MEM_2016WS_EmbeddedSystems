// ------------------------------------
// MEM3 -- HDL
// Project:		Implementation of seven segment decoder
// Author:		stst
// Date:		30.01.2017
// ------------------------------------

module tb_sevenseg();

	// (1) Create witing to connect the DUT
	logic	[3:0]	bin;
	logic	[6:0]	sevenseg;
	logic	[6:0]	sevenseg_n;
	
	// (2) Plug in the DUT
	sevenseg dut
	(
		.*	//possible if they have the same name and type
	);
	
	// (3) Drive the DUT inputs using stimuli
	initial begin
		$display("-------------------");
		$display("tb_sevenseg started");
		$display("-------------------");
		
		bin = 4'd0;
		while (bin<15) begin
			#100ns;
			bin = bin+1;
			$display("Now at %d", bin);
		end
		#100ns;
		bin = 4'd15;
		
		$display("-------------------");
		$display("tb_sevenseg finished");
		$display("-------------------");
	end
	
	
endmodule