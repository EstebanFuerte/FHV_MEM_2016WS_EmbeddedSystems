onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_edge_detect/run_sim
add wave -noupdate /tb_edge_detect/rst_n
add wave -noupdate /tb_edge_detect/clk50m
add wave -noupdate -divider In/Out
add wave -noupdate /tb_edge_detect/in
add wave -noupdate /tb_edge_detect/fallingedge
add wave -noupdate /tb_edge_detect/risingedge
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {2120 ns} 0}
quietly wave cursor active 1
configure wave -namecolwidth 267
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
configure wave -timelineunits ns
update
WaveRestoreZoom {2040 ns} {2360 ns}
