onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_garagedoor/run_sim
add wave -noupdate /tb_garagedoor/rst_n
add wave -noupdate /tb_garagedoor/clk50m
add wave -noupdate -divider Input
add wave -noupdate /tb_garagedoor/buttonDown
add wave -noupdate /tb_garagedoor/buttonUp
add wave -noupdate /tb_garagedoor/lb
add wave -noupdate /tb_garagedoor/so
add wave -noupdate /tb_garagedoor/su
add wave -noupdate -divider output
add wave -noupdate /tb_garagedoor/ls
add wave -noupdate /tb_garagedoor/rs
add wave -noupdate /tb_garagedoor/bl
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {1294698 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 257
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
WaveRestoreZoom {1130635 ps} {1437115 ps}
