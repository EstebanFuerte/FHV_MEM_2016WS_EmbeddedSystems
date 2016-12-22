// ------------------------------------------
// Project:		Test the 7 segment decoder
// Author:		Stefan Stark
// Date:		15.12.2016
// ------------------------------------------

module tb_sevenseg();

	// (1) Create the wiring to connect the DUT
	logic	[3:0]	bin;
	logic	[6:0]	sevenseg;
	logic	[6:0]	sevenseg_n;
	
	// (2) Plug in the DUT
	sevenseg dut
	(
		.*
	);
	
	// (3) Drive the DUT inputs using stimuli
	initial begin
		bin = 4'd0;
		while (bin<15) begin
			# 100ns;
			bin = bin+1;
		end
	end

endmodule
	