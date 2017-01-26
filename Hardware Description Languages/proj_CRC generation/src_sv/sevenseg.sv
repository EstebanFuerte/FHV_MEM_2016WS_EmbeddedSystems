// ---------------------
// MEM3 -- HDL
// Project:		Binary to seven segment decoder
// Author:		ANM
// Date:		15.12.2016
// ---------------------

module sevenseg(
	input	logic	[3:0]	bin,
	output	logic	[6:0]	sevenseg,
	output	logic	[6:0]	sevenseg_n
);

// Let's use a case statement to describe the comb logic
		
		// sevenseg contains gfe_dcba
		//	    a
		//	  +----+
		//	 +      +
		//	 |      |
		//	f|      |b
		//	 +  g   +
		//	  +----+
		//	 +      +
		//	 |      |
		//	e|      |c
		//	 +      +
		//	  +----+
		//	    d
		
	always_comb begin
		case (bin)
			//                    gfedcba
			4'h0:	sevenseg = 7'b0111111;
			4'h1:	sevenseg = 7'b0000110;
			4'h2:	sevenseg = 7'b1011011;
			4'h3:	sevenseg = 7'b1001111;
			4'h4:	sevenseg = 7'b1100110;
			4'h5:	sevenseg = 7'b1101101;
			4'h6:	sevenseg = 7'b1111101;
			4'h7:	sevenseg = 7'b0000111;
			4'h8:	sevenseg = 7'b1111111;
			4'h9:	sevenseg = 7'b1101111;
			4'ha:	sevenseg = 7'b1110111;
			4'hb:	sevenseg = 7'b1111100;
			4'hc:	sevenseg = 7'b1011000;
			4'hd:	sevenseg = 7'b1011110;
			4'he:	sevenseg = 7'b1111001;
			4'hf:	sevenseg = 7'b1110001;
			default:sevenseg = 7'b0000000;
		endcase
	end
	
	assign sevenseg_n = ~sevenseg;
	
endmodule