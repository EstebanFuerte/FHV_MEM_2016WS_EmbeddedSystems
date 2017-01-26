// ------------------------------------------
// Project:		Implement a edge detector
// Author:		Stefan Stark
// Date:		22.12.2016
// ------------------------------------------

module edgedetect(
	input		logic	rst_n,
	input		logic	clk50m,
	input		logic	in,
	output	logic	risingedge,
	output	logic	fallingedge
);

	logic q1;
	logic q2;

	// define DFF1 - according to script pate 28
	always_ff @ (negedge rst_n or posedge clk50m) begin: d_ff_1
		if (! rst_n) begin
			q1 <= 1'b1;
		end
		else begin
			q1 <= in;
		end
	end : d_ff_1

	// define DFF2 - according to script pate 28
	always_ff @ (negedge rst_n or posedge clk50m) begin: d_ff_2
		if (! rst_n) begin
			q2 <= 1'b1;
		end
		else begin
			q2 <= q1;
		end
	end : d_ff_2

	//always_comb begin
	//	if ((~q1&q2)==1)begin //q1==0 && q2==1
	//		fallingedge = 1;
	//	end
	//	else if ((q1&~q2)==1) begin
	//		risingedge = 1;
	//	end
	//	else
	//		fallingedge = 0;
	//		risingedge = 0;
	//	end
	//end

	assign fallingedge = ~q1 & q2;
	assign risingedge = q1 & ~q2;

endmodule