/* -----------------------------------
Project:    CRC check
Purpose:    fsm to increase memory adress, enable crc_calc and crc_compare
Author:     stst
Version:    v00, 26.01.2017
   ----------------------------------- */
module crc_fsm(
	input logic				rst_n,
	input logic				clk50m,
	
	
	input logic				crc_start,		// starts crc calculation
	input logic		[9:0]	mem_addr_in,	// actual adress of memory
	
	output logic	[9:0]	mem_addr_out,	// next adress of memory
	output logic 			crc_en,			// enables the crc_calc
	output logic			crc_rdy			// if the whole memory is read
);

	logic cnt_en;						// enable for counter
	logic rst_counter;					// resets memory counter

// ---- define states ----
enum logic [2:0] {IDLE, FETCH_DATA, WAIT, PROCESS_CRC, DONE} state, next_state;

// ----- counter to increase adress ----
always_ff @ (negedge rst_n or posedge clk50m) begin
	if (!rst_n || rst_counter) begin
		mem_addr_out = 10'b0;
	end	
	else if (cnt_en) begin
		mem_addr_out = mem_addr_in + 10'b1;
	end
	else begin
		mem_addr_out = mem_addr_in;
	end
end

// ----- sequential part of the FSM ----
always_ff @ (negedge rst_n or posedge clk50m) begin
	if (!rst_n) begin
		state <= IDLE;
	end
	else begin
		state <= next_state;			// assign next state each clk cycle
	end

end

// ---- combinatorial part of the FSM ----
always_comb begin
	case (state)
	
		IDLE : begin
			// define outputs
			cnt_en = 10'b0;
			crc_en = 1'b0;
			crc_rdy = 1'b0;
			rst_counter = 1'b1;
			// define transistions (next_state)
			if (crc_start) begin
				next_state = FETCH_DATA;
			end
			else begin
				next_state = state;
			end
		end
		
		FETCH_DATA : begin
			// define outputs
			cnt_en = 1'b1;
			crc_en = 1'b0;
			crc_rdy = 1'b0;
			rst_counter = 1'b0;
			// define transistions (next_state)
			next_state = WAIT;
		end
		
		WAIT : begin
			// define outputs
			cnt_en = 1'b0;
			crc_en = 1'b1;
			crc_rdy = 1'b0;
			rst_counter = 1'b0;
			// define transistions (next_state)
			next_state = PROCESS_CRC;
			
		end
			
		PROCESS_CRC : begin
			if (mem_addr_in >= 10'd1023) begin
				cnt_en = 1'b0;
				crc_en = 1'b0;
				crc_rdy = 1'b1;
				rst_counter = 1'b0;
				next_state = DONE;
			end
			else begin
				cnt_en = 1'b0;
				crc_en = 1'b1;
				crc_rdy = 1'b0;
				rst_counter = 1'b0;
				next_state = FETCH_DATA;
			end
		end
		
		DONE : begin
			// define outputs
			cnt_en = 1'b0;
			crc_en = 1'b0;
			crc_rdy = 1'b0;
			// define transistions (next_state)
			if (crc_start) begin
				next_state = FETCH_DATA;
				rst_counter = 1'b1;
			end
			else begin
				next_state = state;
			end
		end
		
		default begin
			//define output
			cnt_en = 1'b0;
			crc_en = 1'b0;
			crc_rdy = 1'b0;
			rst_counter = 1'b1;
			next_state = IDLE;
		end
	endcase
end	
endmodule