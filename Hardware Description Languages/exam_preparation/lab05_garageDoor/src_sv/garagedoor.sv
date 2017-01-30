// ------------------------------------
// MEM3 -- HDL
// Project:		
// Author:		stst
// Date:		30.01.2017
// ------------------------------------

module garagedoor(
	input	logic	rst_n,
	input 	logic	clk50m,
	input	logic	so,			// sensor oben
	input 	logic	su,			// sensor unten
	input 	logic	buttonUp,	// to open door
	input	logic	buttonDown,	// to close door
	input 	logic	lb,

	output	logic	ls,		// ls side of the motor - 1 = open
	output 	logic	rs,		// rs side of the motor - 1 = close
	output 	logic	bl		// blink light
);

	enum logic [1:0] {OPEN, CLOSED, MOVE_DOWN, MOVE_UP} state, next_state;
	
	//sequential part of the FSM
	always_ff @ (negedge rst_n or posedge clk50m) begin
		if (!rst_n) begin
			state <= MOVE_DOWN;			// default state
		end
		else begin
			state <= next_state;
		end
	end
	
	//combinatrioal part of the FSM
	always_comb begin
		case (state)
		
		OPEN : begin
			//define outputs
			ls    = 1'b0;
			rs   = 1'b0;
			bl      = 1'b0;
			//define transitions (next_state)
			if (buttonDown) begin
				next_state = MOVE_DOWN;
			end
			else begin
				next_state = state;
			end
		end
		
		MOVE_DOWN : begin
			//define outputs
			ls    = 1'b0;
			rs   = 1'b1;
			bl      = 1'b1;
			//define transitions (next_state)
			if (su) begin
				next_state = CLOSED;
			end
			else if (lb || buttonUp) begin
				next_state = MOVE_UP;
			end
			else begin
				next_state = state;
			end
		end
		
		CLOSED : begin
			//define outputs
			ls    = 1'b0;
			rs   = 1'b0;
			bl      = 1'b0;
			//define transitions (next_state)
			if (buttonUp) begin
				next_state = MOVE_UP;
			end
			else begin
				next_state = state;
			end
		end
		
		MOVE_UP : begin
			//define outputs
			ls    = 1'b1;
			rs   = 1'b0;
			bl      = 1'b1;
			//define transitions (next_state)
			if (so) begin
				next_state = OPEN;
			end
			else if (buttonDown) begin
				next_state = MOVE_DOWN;
			end
			else begin
				next_state = state;
			end
		end
		
		default : begin
			//define outputs
			ls    = 1'b0;
			rs   = 1'b0;
			bl      = 1'b0;
			//define transitions (next_state)
			next_state = MOVE_DOWN;
		end
		
		endcase
	end

endmodule