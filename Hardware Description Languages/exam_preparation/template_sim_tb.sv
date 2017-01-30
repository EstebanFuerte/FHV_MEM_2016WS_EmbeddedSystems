// ------------------------------------
// MEM3 -- HDL
// Project:		
// Author:		stst
// Date:		30.01.2017
// ------------------------------------

module tb_sevenseg();

	// (1) Create witing to connect the DUT

	
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
		
		
		$display("-------------------");
		$display("tb_sevenseg finished");
		$display("-------------------");
	end
	
	
endmodule