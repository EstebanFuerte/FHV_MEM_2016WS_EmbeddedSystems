

# (1) Set up sim environment
vlib work
vmap work work

# (2) Compile design files
vlog ../src_sv/crc_fsm.sv
vlog ../src_sv/crc_system.sv
vlog ../src_sv/crc_comp.sv
vlog ../src_sv/crc16_usb_8bitdata.sv

# (3) Compile test bench
#	--> compile a file
vlog tb_crc_system.sv

# (4) Init the simulation
#	--> specific the toplevel module that we want to simulate
vsim tb_crc_system

# read out all signals
log -r *

# (5) Run simulation
run -all

# (6) Show the wave window
view wave
do wave_tb_crc_system.tcl