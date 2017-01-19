/* ----------------------------------
Project:    Memory_running_light
Purpose:    Use a memory content to display a running light
Author:     ANM
Version:    v00, 13.01.2017
   ---------------------------------- */
`include "header.sv"
`default_nettype none
`timescale 10ns/1ns

module tb_Toplevel_C5G_GPIO();

    // (1) DUT wiring
    logic 		          		CLOCK_125_p;
	logic 		          		CLOCK_50_B5B;
	logic 		          		CLOCK_50_B6A;
	logic 		          		CLOCK_50_B7A;
	logic 		          		CLOCK_50_B8A;
	logic		     [7:0]		LEDG;
	logic		     [9:0]		LEDR;
	logic 		          		CPU_RESET_n;
	logic 		     [3:0]		KEY;
	logic 		     [9:0]		SW;
	logic		     [6:0]		HEX0;
	logic		     [6:0]		HEX1;
	logic 		    [35:0]		GPIO;
    
    // (2) DUT instance
    Toplevel_C5G_GPIO dut(.*);
    
    
    // (3) DUT stimuliation
    logic                       run_sim = 1'b1;
    string                      action = "none";
    
    initial begin : clk_gen
        CLOCK_125_p     = 1'b0;
        CLOCK_50_B5B    = 1'b0;
        CLOCK_50_B6A    = 1'b0;
        CLOCK_50_B7A    = 1'b0;
        CLOCK_50_B8A    = 1'b0;
        
        // only activate CLOCK_50_B5B as this is the only clock that is used
        while (run_sim) begin
            #10ns;
            CLOCK_50_B5B = !CLOCK_50_B5B;
        end
    end
    
    
    initial begin : test_patten
        $display("-------------------------");
        $display("tb_Toplevel_C5G_GPIO started");
        $display("-------------------------");
        
        action = "init";
        $display("\t%s",action);
        CPU_RESET_n                 = 1'b0;
        KEY                         = 4'b1111;
        SW                          = 10'h000;
        // --- init memory by loading a txt value --> use hex values in the txt file!
        $readmemh("memory_hex_five_running_lights.txt", tb_Toplevel_C5G_GPIO.dut.u1_memory_ip.altsyncram_component.m_default.altsyncram_inst.mem_data);
        // --- assign a value by using hierachical names ---
        tb_Toplevel_C5G_GPIO.dut.u1_addr_end_ip.LPM_CONSTANT_component.int_value = 5'd28;
        
        
        #99ns;
        action = "por";
        $display("\t%s",action);
        CPU_RESET_n                 = 1'b1;
        
        
        
        #100us;
        action = "stopping";
        $display("\t%s",action);
        run_sim = 1'b0;
        $display("-------------------------");
        $display("tb_Toplevel_C5G_GPIO finished");
        $display("-------------------------");
    end

endmodule
    