/* -----------------------------------
Project:    CRC check
Purpose:    Control the CRC process incl. fetch data from memory
Author:     stst
Version:    v00, 31.01.2017
   ----------------------------------- */

module crc_system(
    input logic                 rst_n,
    input logic                 clk50m,
    input logic                 crc_start,
    input logic [7:0]           mem_data,
    input logic [15:0]          crc_out_target,
    output logic [9:0]          mem_addr,
    output logic                crc_rdy,
    output logic                crc_ok,
    output logic [15:0]         crc_out
);
	// Wires
	logic			crc_rdy_sig;
	logic			crc_en_sig;
	//logic [15:0]	crc_out_sig = 16'b0000000000000100;
	logic [15:0]	crc_out_sig;
	
	assign			crc_rdy = crc_rdy_sig;
	assign			crc_out = crc_out_sig;

	// include crc fsm
	crc_fsm u1_crc_fsm(
		.rst_n			(rst_n),
		.clk50m			(clk50m),
		.crc_start		(crc_start),
		.mem_addr_out	(mem_addr),
		.crc_en			(crc_en_sig),			
		.crc_rdy		(crc_rdy_sig)
	);

	// include crc compare
	crc_comp u1_crc_comp(
		.rst_n			(rst_n),
		.clk50m			(clk50m),
		.crc_rdy		(crc_rdy_sig),
		.crc_hash		(crc_out_target),
		.crc_calc		(crc_out_sig),
		.crc_ok			(crc_ok)
	);

	// include crc16_usb_8bitdata
	crc16_usb_8bitdata u1_crc16_usb_8bitdata(
		.rst_n			(rst_n),
		.clk 			(clk50m),
		.crc_start		(crc_start),
		.data_in		(mem_data),
		.crc_en			(crc_en_sig),
		.crc_out		(crc_out_sig)
	);
endmodule