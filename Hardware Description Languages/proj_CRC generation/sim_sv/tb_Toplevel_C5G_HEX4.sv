`default_nettype none
`timescale 10ns/1ns


module tb_Toplevel_C5G_HEX4();

    //(1) DUT wiring
    logic                       CLOCK_125_p;
    logic                       CLOCK_50_B5B;
    logic                       CLOCK_50_B6A;
    logic                       CLOCK_50_B7A;
    logic                       CLOCK_50_B8A;
    logic [7:0]                 LEDG;
    logic [9:0]                 LEDR;
    logic                       CPU_RESET_n;
    logic [3:0]                 KEY;
    logic [9:0]                 SW;
    logic [6:0]                 HEX0;
    logic [6:0]                 HEX1;
    logic [6:0]                 HEX2;
    logic [6:0]                 HEX3;

    //(2) DUT
    Toplevel_C5G_HEX4    dut(.*);
    
    // (3) Stimulate the DUT
    logic   run_sim = 1'b1;
    string  action = "none";
    int     error_cnt = 0;
    
    
    
   
    
    
    initial begin : clk_gen
        CLOCK_50_B5B = 1'b0;
        while (run_sim) begin
            #10ns;
            CLOCK_50_B5B = !CLOCK_50_B5B;
        end
    end
    
    initial begin : stimuli
        $display("-------------------------------------");
        $display("tb_Toplevel_C5G_HEX4 started");
        $display("-------------------------------------");
        
        action = "init"; $display("%s", action);
        CPU_RESET_n = 1'b0;
        KEY         = '1;
        SW          = '0;
        // read correct memory content
        action = "load memory with correct data"; $display("%s", action);
        $readmemh("rom_data8bit_addr10bit.txt", tb_Toplevel_C5G_HEX4.dut.u1_rom_data8bit_addr10bit.altsyncram_component.m_default.altsyncram_inst.mem_data);
        assign tb_Toplevel_C5G_HEX4.dut.u1_crc_hash_data.LPM_CONSTANT_component.int_value = 16'hbd38;
        
        #99ns;
        action = "por"; $display("%s", action);
        CPU_RESET_n = 1'b1;
        
        #1us;
        @(negedge CLOCK_50_B5B);
        action = "start crc with correct memory content"; $display("%s", action);
        KEY[0] = 1'b0;
        @(negedge CLOCK_50_B5B);
        KEY[0] = 1'b1;
        
        // wait for crc system to indicate that it's ready
        while(!LEDR[0]) begin
            @ (negedge CLOCK_50_B5B);
        end
        action = "eval CRC_OUT for correct memory"; $display("%s", action);
        #1us;
        if ( (LEDR[0] == 1'b1) && (LEDG[0] == 1'b1) ) begin
            $display("\tcrc check with correct memory passed --> pass.");
        end
        else begin
            $error("\tcrc check with correct memory failed.");
            error_cnt++;
        end
        
        // ---- single bit error in memory --> CRC should fail ----
        #1us
        action = "load memory with single bit error data"; $display("%s", action);
        $readmemh("rom_data8bit_addr10bit_error_onebit.txt", tb_Toplevel_C5G_HEX4.dut.u1_rom_data8bit_addr10bit.altsyncram_component.m_default.altsyncram_inst.mem_data);
        
        
        #1us;
        @(negedge CLOCK_50_B5B);
        action = "start crc with single bit error memory"; $display("%s", action);
        KEY[0] = 1'b0;
        @(negedge CLOCK_50_B5B);
        KEY[0] = 1'b1;
        
        
        // wait for crc system to indicate that it's ready
        while(!LEDR[0]) begin
            @ (negedge CLOCK_50_B5B);
        end

        action = "eval CRC_OUT for single bit error memory"; $display("%s", action);
        #1us;
        if ( (LEDR[0] == 1'b1) && (LEDG[0] == 1'b0) ) begin
            $display("\tcrc check with single bit error memory failed --> pass.");
        end
        else begin
            $error("\tcrc check with single bit error memory failed.");
            error_cnt++;
        end
        
        // ---- two bit error in memory --> CRC should fail ----
        #1us
        action = "load memory with two bit error data"; $display("%s", action);
        $readmemh("rom_data8bit_addr10bit_error_twobit.txt", tb_Toplevel_C5G_HEX4.dut.u1_rom_data8bit_addr10bit.altsyncram_component.m_default.altsyncram_inst.mem_data);
        
        
        #1us;
        @(negedge CLOCK_50_B5B);
        action = "start crc with double bit error memory"; $display("%s", action);
        KEY[0] = 1'b0;
        @(negedge CLOCK_50_B5B);
        KEY[0] = 1'b1;
        
        // wait for crc system to indicate that it's ready
        while(!LEDR[0]) begin
            @ (negedge CLOCK_50_B5B);
        end

        action = "eval CRC_OUT for double bit error memory"; $display("%s", action);
        #1us;
        if ( (LEDR[0] == 1'b1) && (LEDG[0] == 1'b0) ) begin
            $display("\tcrc check with double bit error memory failed --> pass.");
        end
        else begin
            $error("\tcrc check with double bit error memory failed.");
            error_cnt++;
        end
        
        
        
        
        #1us;
        action = "stop"; $display("%s", action);
        run_sim = 1'b0;
        
        $display("-------------------------------------");
        if (error_cnt == 0) begin
            $display("Pass: tb_Toplevel_C5G_HEX4 finished w/o errors.");
        end
        else begin
            $display("FAIL: tb_Toplevel_C5G_HEX4 finished with %d errors.", error_cnt);
        end
        $display("-------------------------------------");
        
    end

endmodule