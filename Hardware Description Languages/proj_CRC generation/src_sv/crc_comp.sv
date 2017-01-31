/* -----------------------------------
Project:    CRC check
Purpose:    compare CRC calc and from hash
Author:     stst
Version:    v01, 31.01.2017
   ----------------------------------- */
module crc_comp(
	input 	logic			rst_n,
	input 	logic			clk50m,
	input	logic			crc_rdy,
	input 	logic [15:0]	crc_hash,
	input	logic [15:0]	crc_calc,
	output 	logic 			crc_ok
);


always_ff @ (negedge rst_n or posedge clk50m) begin
	if (!rst_n) begin
		crc_ok = 1'b0;
	end	
	else if (crc_rdy) begin
		if(crc_hash == crc_calc) begin
			crc_ok = 1'b1;
		end
		else begin
			crc_ok = 1'b0;
		end
	end
end 

endmodule