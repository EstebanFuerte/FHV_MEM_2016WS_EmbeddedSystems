// ------------------------------------
// MEM3 -- HDL
// Project:		
// Author:		stst
// Date:		30.01.2017
// ------------------------------------

module sevenseg(
	// Define inputs and outputs
);

	// place for wires
	//logic	in_ff1, in_ff2;
	// or states
	//enum logic [1:0] {OPEN, CLOSED, MOVE_DOWN, MOVE_UP} state, next_state;
	
	// Combinatorial logic
	always_comb begin
		// describe complex combinatorial logic
		// if, case for or while can be used
		// Output signals need to be defined for all conditions
	end
	
	
	// Sequential logic
	// To describe sequential logic (FFs, counters)
	// Only changes o fthe output signal needs to specified
	// D-FF:
	always_ff @ (negedge rst_n or posedge clk50m) begin : d_ff_1
			if (!rst_n) begin		// async reset (active low)
				q <= 1'b0;			// reset value
			end
			else begin				// synchronous behaviour
				q <= d;				// at rising edge of the clk, q follows d
			end
	end: d:ff1
	
	// 4bit Counter
	always_ff @ (negedge rst_n or posedge clk50m) begin : 4bit_up_cnd
		if(!rst_n) begin			// async reset (avtive low)
			cnt <= '0;				// '0 is all zeros
		end
		else if (load) begin
			cnt <= data_in;
		end
		else if(en) begin
			cnt <= cnt +4'd1;
		end
		// no else is requiered here
	
	end: 4bit_up_cnd
	
	// outside an always - assign is necessary
	// connection of submodules
	// connection of other signals
	// concentration of signals
	// Simple logic operations
	// assign risingedge  =  in_ff1 & ~in_ff2;
    // assign fallingedge = ~in_ff1 &  in_ff2;
	
	/* FSM specific parts
	// define states
	enum logic [1:0] {OPEN, CLOSED, MOVE_DOWN, MOVE_UP} state, next_state;
	
	//sequential part of the FSM
	always_ff @ (negedge rst_n or posedge clk50m) begin
    if (!rst_n) begin
        state <= MOVE_DOWN;
    end
    else begin
        state <= next_state;
    end
	
	//combinatrioal part of the FSM
	always_comb begin
    case (state)
    
    OPEN : begin
        //define outputs
        left    = 1'b0;
        right   = 1'b0;
        wl      = 1'b0;
        //define transitions (next_state)
        if (dn) begin
            next_state = MOVE_DOWN;
        end
        else begin
            next_state = state;
        end
    end
    
    MOVE_DOWN : begin
        //define outputs
        left    = 1'b0;
        right   = 1'b1;
        wl      = 1'b1;
        //define transitions (next_state)
        if (bottom) begin
            next_state = CLOSED;
        end
        else if (lb || up) begin
            next_state = MOVE_UP;
        end
        else begin
            next_state = state;
        end
    end
    
    CLOSED : begin
        //define outputs
        left    = 1'b0;
        right   = 1'b0;
        wl      = 1'b0;
        //define transitions (next_state)
        if (up) begin
            next_state = MOVE_UP;
        end
        else begin
            next_state = state;
        end
    end
    
    MOVE_UP : begin
        //define outputs
        left    = 1'b1;
        right   = 1'b0;
        wl      = 1'b1;
        //define transitions (next_state)
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
    
    default : begin
        //define outputs
        left    = 1'b0;
        right   = 1'b0;
        wl      = 1'b0;
        //define transitions (next_state)
        next_state = MOVE_DOWN;
    end
    
    endcase
end
end
	
	
	*/


endmodule