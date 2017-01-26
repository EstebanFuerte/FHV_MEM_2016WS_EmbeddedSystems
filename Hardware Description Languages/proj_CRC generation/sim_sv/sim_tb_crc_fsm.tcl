

# (1) Set up sim environment
vlib work
vmap work work

# (2) Compile design files
vlog ../src_sv/crc_fsm.sv

# (3) Compile test bench
#	--> compile a file
vlog tb_crc_fsm.sv

# (4) Init the simulation
#	--> specific the toplevel module that we want to simulate
vsim tb_crc_fsm

# read out all signals
log -r *

# (5) Run simulation
run -all

# (6) Show the wave window
view wave
#do wave_tb_edgedect.tcl