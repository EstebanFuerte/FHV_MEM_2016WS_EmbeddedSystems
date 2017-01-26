# This is a TCL command script
# TCL = ToolsCommandLanguage
# The following script will control Modelsim

# (1) Set up sim environment
vlib work
vmap work work

# (2) Compile design files
vlog ../src_sv/garage_door.sv

# (3) Compile test bench
#	--> compile a file
vlog tb_garage_door.sv

# (4) Init the simulation
#	--> specific the toplevel module that we want to simulate
vsim tb_garage_door

# read out all signals
log -r *

# (5) Run simulation
run -all

# (6) Show the wave window
view wave
#do wave_tb_edgedect.tcl