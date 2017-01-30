// ------------------------------------
// MEM3 -- HDL
// Project:		Implementation of seven segment decoder
// Author:		stst
// Date:		30.01.2017
// ------------------------------------

module sevenseg(
	// Define inputs and outputs
	input 	logic [3:0] 	bin,
	output	logic [6:0]		sevenseg,
	output	logic [6:0]		sevenseg_n
);

	always_comb begin
		case(bin)
			4'h0:		sevenseg = 7'b0111111;
			4'h1:		sevenseg = 7'b0000110;
			4'h2:		sevenseg = 7'b1011011;
			4'h3:		sevenseg = 7'b1001111;
			4'h4:		sevenseg = 7'b1100110;
			4'h5:		sevenseg = 7'b1101101;
			4'h6:		sevenseg = 7'b1111100;
			4'h7:		sevenseg = 7'b0000111;
			4'h8:		sevenseg = 7'b1111111;
			4'h9:		sevenseg = 7'b1100111;
			4'hA:		sevenseg = 7'b1110111;
			4'hB:		sevenseg = 7'b1111100;
			4'hC: 		sevenseg = 7'b0111001;
			4'hD: 		sevenseg = 7'b1011110;
			4'hE: 		sevenseg = 7'b1111001;
			4'hF: 		sevenseg = 7'b1110001;
			default: 	sevenseg = 7'h0;
		endcase
	end
	
	assign sevenseg_n = ~sevenseg;
	// outside an always - assign is necessary
	

endmodule