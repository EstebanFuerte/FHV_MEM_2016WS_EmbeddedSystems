/* ---------------------------------------------
Project:	Garage door
Purpose:	Control the behaviour of a door
Author:		stst
Version:	V00, 12.01.2017
--------------------------------------------- */

module garage_door(
	input logic			rst_n,
	input logic			clk50m,
	input logic			up,		// push button to open the door
	input logic 		dn,		// push button to close the door
	input logic			top,	// sensor that indicates that the doro is open
	input logic			bottom,	// sensor that indicates that the door is closed
	input logic			lb,		// light barrier for safety
	
	output logic		left,	// motor turns left and the door opens
	output logic		right,	// motor turns right and the door closes
	output logic		wl		// warning light when door is moving
);

// ---- define states ----
enum logic [1:0] {OPEN, CLOSED, MOVE_DOWN, MOVE_UP} state, next_state;

// ---- sequential part of the FSM ----
// sequential part = FF ... very short part
always_ff @ (negedge rst_n or posedge clk50m) begin
	if (!rst_n) begin
		state <= MOVE_DOWN;
	end
	else begin
		state <= next_state;		// assign next state at each clk cycle
	end
end

// ---- combinatorial part of the FSM ----
always_comb begin
	case (state)
	
	OPEN : begin
		//define outputs
		left	= 1'b0;
		right	= 1'b0;
		wl 		= 1'b0;
		//define tarnsistions (next_state)
		if (dn) begin
			next_state = MOVE_DOWN;
		end
		else begin
			next_state = state;
		end
	end
	
	CLOSED : begin
		//define outputs
		left	= 1'b0;
		right	= 1'b0;
		wl 		= 1'b0;
		//define tarnsistions (next_state)
		if (up) begin
			next_state = MOVE_UP;
		end
		else begin
			next_state = state;
		end
	end
	
	MOVE_DOWN : begin
		//define outputs
		left	= 1'b0;
		right	= 1'b1;
		wl 		= 1'b1;
		//define tarnsistions (next_state)
		if (bottom) begin
			next_state = CLOSED;
		end
		else if (lb|| up) begin
			next_state = MOVE_UP;
		end
		else begin
			next_state = state;
		end
	end
	
	MOVE_UP : begin
		//define outputs
		left	= 1'b1;
		right	= 1'b0;
		wl 		= 1'b1;
		//define tarnsistions (next_state)
		if (top) begin
			next_state = OPEN;
		end
		else if (dn) begin
			next_state = MOVE_DOWN;
		end
		else begin
			next_state = state;
		end
	end
	
	default begin
		//define outputs
		left	= 1'b0;
		right	= 1'b0;
		wl 		= 1'b0;
		//define transistion (next_state)
		next_state = MOVE_DOWN;
	end
	
	
	
	endcase
end

endmodule