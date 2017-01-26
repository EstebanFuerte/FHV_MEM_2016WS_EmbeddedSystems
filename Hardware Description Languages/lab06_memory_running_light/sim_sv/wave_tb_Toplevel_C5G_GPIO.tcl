onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_Toplevel_C5G_GPIO/CLOCK_125_p
add wave -noupdate /tb_Toplevel_C5G_GPIO/CLOCK_50_B5B
add wave -noupdate /tb_Toplevel_C5G_GPIO/CLOCK_50_B6A
add wave -noupdate /tb_Toplevel_C5G_GPIO/CLOCK_50_B7A
add wave -noupdate /tb_Toplevel_C5G_GPIO/CLOCK_50_B8A
add wave -noupdate /tb_Toplevel_C5G_GPIO/LEDG
add wave -noupdate -radix unsigned -childformat {{{/tb_Toplevel_C5G_GPIO/LEDR[9]} -radix unsigned} {{/tb_Toplevel_C5G_GPIO/LEDR[8]} -radix unsigned} {{/tb_Toplevel_C5G_GPIO/LEDR[7]} -radix unsigned} {{/tb_Toplevel_C5G_GPIO/LEDR[6]} -radix unsigned} {{/tb_Toplevel_C5G_GPIO/LEDR[5]} -radix unsigned} {{/tb_Toplevel_C5G_GPIO/LEDR[4]} -radix unsigned} {{/tb_Toplevel_C5G_GPIO/LEDR[3]} -radix unsigned} {{/tb_Toplevel_C5G_GPIO/LEDR[2]} -radix unsigned} {{/tb_Toplevel_C5G_GPIO/LEDR[1]} -radix unsigned} {{/tb_Toplevel_C5G_GPIO/LEDR[0]} -radix unsigned}} -expand -subitemconfig {{/tb_Toplevel_C5G_GPIO/LEDR[9]} {-height 15 -radix unsigned} {/tb_Toplevel_C5G_GPIO/LEDR[8]} {-height 15 -radix unsigned} {/tb_Toplevel_C5G_GPIO/LEDR[7]} {-height 15 -radix unsigned} {/tb_Toplevel_C5G_GPIO/LEDR[6]} {-height 15 -radix unsigned} {/tb_Toplevel_C5G_GPIO/LEDR[5]} {-height 15 -radix unsigned} {/tb_Toplevel_C5G_GPIO/LEDR[4]} {-height 15 -radix unsigned} {/tb_Toplevel_C5G_GPIO/LEDR[3]} {-height 15 -radix unsigned} {/tb_Toplevel_C5G_GPIO/LEDR[2]} {-height 15 -radix unsigned} {/tb_Toplevel_C5G_GPIO/LEDR[1]} {-height 15 -radix unsigned} {/tb_Toplevel_C5G_GPIO/LEDR[0]} {-height 15 -radix unsigned}} /tb_Toplevel_C5G_GPIO/LEDR
add wave -noupdate /tb_Toplevel_C5G_GPIO/CPU_RESET_n
add wave -noupdate /tb_Toplevel_C5G_GPIO/KEY
add wave -noupdate /tb_Toplevel_C5G_GPIO/SW
add wave -noupdate /tb_Toplevel_C5G_GPIO/HEX0
add wave -noupdate /tb_Toplevel_C5G_GPIO/HEX1
add wave -noupdate /tb_Toplevel_C5G_GPIO/GPIO
add wave -noupdate /tb_Toplevel_C5G_GPIO/run_sim
add wave -noupdate -radix unsigned /tb_Toplevel_C5G_GPIO/dut/prescale_value
add wave -noupdate /tb_Toplevel_C5G_GPIO/dut/u1_addr_control/prescale_cnt
add wave -noupdate /tb_Toplevel_C5G_GPIO/dut/u1_addr_control/addr_cnt_en
add wave -noupdate /tb_Toplevel_C5G_GPIO/dut/u1_addr_control/prescale
add wave -noupdate -radix unsigned /tb_Toplevel_C5G_GPIO/dut/mem_addr
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {96998 ns} 0}
quietly wave cursor active 1
configure wave -namecolwidth 378
configure wave -valuecolwidth 96
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
WaveRestoreZoom {96954 ns} {97726 ns}
