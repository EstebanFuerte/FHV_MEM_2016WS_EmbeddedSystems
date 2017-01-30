onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_crc_fsm/run_sim
add wave -noupdate /tb_crc_fsm/rst_n
add wave -noupdate /tb_crc_fsm/clk50m
add wave -noupdate -divider Input
add wave -noupdate /tb_crc_fsm/crc_en
add wave -noupdate /tb_crc_fsm/crc_start
add wave -noupdate /tb_crc_fsm/crc_rdy
add wave -noupdate -divider Output
add wave -noupdate -radix unsigned /tb_crc_fsm/mem_addr_in
add wave -noupdate -radix unsigned /tb_crc_fsm/mem_addr_out
add wave -noupdate -divider State
add wave -noupdate /tb_crc_fsm/dut/state
add wave -noupdate /tb_crc_fsm/dut/next_state
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {1302367 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 237
configure wave -valuecolwidth 100
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
configure wave -timelineunits ps
update
WaveRestoreZoom {1258933 ps} {1362139 ps}
