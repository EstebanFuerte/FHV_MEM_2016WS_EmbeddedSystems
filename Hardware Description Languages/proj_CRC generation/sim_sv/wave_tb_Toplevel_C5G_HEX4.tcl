onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_Toplevel_C5G_HEX4/CLOCK_50_B5B
add wave -noupdate /tb_Toplevel_C5G_HEX4/LEDG
add wave -noupdate /tb_Toplevel_C5G_HEX4/LEDR
add wave -noupdate /tb_Toplevel_C5G_HEX4/CPU_RESET_n
add wave -noupdate /tb_Toplevel_C5G_HEX4/KEY
add wave -noupdate /tb_Toplevel_C5G_HEX4/SW
add wave -noupdate /tb_Toplevel_C5G_HEX4/HEX0
add wave -noupdate /tb_Toplevel_C5G_HEX4/HEX1
add wave -noupdate /tb_Toplevel_C5G_HEX4/HEX2
add wave -noupdate /tb_Toplevel_C5G_HEX4/HEX3
add wave -noupdate /tb_Toplevel_C5G_HEX4/run_sim
add wave -noupdate -divider Toplevel
add wave -noupdate -radix unsigned /tb_Toplevel_C5G_HEX4/dut/mem_addr
add wave -noupdate -format Analog-Step -height 74 -max 1023.0000000000001 -radix unsigned /tb_Toplevel_C5G_HEX4/dut/mem_addr
add wave -noupdate -radix hexadecimal /tb_Toplevel_C5G_HEX4/dut/mem_data
add wave -noupdate -divider crc_system
add wave -noupdate /tb_Toplevel_C5G_HEX4/dut/u1_crc_system/state
add wave -noupdate /tb_Toplevel_C5G_HEX4/dut/u1_crc_system/state_next
add wave -noupdate /tb_Toplevel_C5G_HEX4/dut/u1_crc_system/mem_clr
add wave -noupdate /tb_Toplevel_C5G_HEX4/dut/u1_crc_system/mem_inc
add wave -noupdate /tb_Toplevel_C5G_HEX4/dut/u1_crc_system/crc_start
add wave -noupdate /tb_Toplevel_C5G_HEX4/dut/u1_crc_system/crc_rdy
add wave -noupdate /tb_Toplevel_C5G_HEX4/dut/u1_crc_system/crc_ok
add wave -noupdate -radix hexadecimal /tb_Toplevel_C5G_HEX4/dut/u1_crc_system/crc_out
add wave -noupdate /tb_Toplevel_C5G_HEX4/dut/u1_crc_system/mem_clr
add wave -noupdate /tb_Toplevel_C5G_HEX4/dut/u1_crc_system/mem_inc
add wave -noupdate /tb_Toplevel_C5G_HEX4/dut/u1_crc_system/crc_en
add wave -noupdate /tb_Toplevel_C5G_HEX4/action
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {66141600 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 323
configure wave -valuecolwidth 122
configure wave -justifyvalue left
configure wave -signalnamewidth 0
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ns
update
WaveRestoreZoom {0 ps} {321468 ns}
