onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_crc_system/run_sim
add wave -noupdate /tb_crc_system/rst_n
add wave -noupdate /tb_crc_system/clk50m
add wave -noupdate -divider Input
add wave -noupdate /tb_crc_system/crc_start
add wave -noupdate /tb_crc_system/mem_data
add wave -noupdate /tb_crc_system/crc_out_target
add wave -noupdate -divider Output_FSM
add wave -noupdate -radix unsigned /tb_crc_system/mem_addr
add wave -noupdate /tb_crc_system/crc_rdy
add wave -noupdate /tb_crc_system/dut/u1_crc_fsm/state
add wave -noupdate /tb_crc_system/dut/u1_crc_fsm/next_state
add wave -noupdate -divider Output_crcCalc
add wave -noupdate /tb_crc_system/crc_out
add wave -noupdate -divider Output_CRCComp
add wave -noupdate /tb_crc_system/crc_ok
add wave -noupdate /tb_crc_system/dut/u1_crc_comp/crc_rdy
add wave -noupdate /tb_crc_system/dut/u1_crc_comp/crc_calc
add wave -noupdate /tb_crc_system/dut/u1_crc_comp/crc_hash
add wave -noupdate /tb_crc_system/dut/u1_crc_comp/crc_ok
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {61661118 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 283
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
WaveRestoreZoom {61517419 ps} {61804817 ps}
