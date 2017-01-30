# This is a TCL command script
#
# The following script will control Modelsim
# Author: stst

# (1) Set up sim environment
vlib work
vmap work work

# (2) Compile design files
vlog ../src_sv/sevenseg.sv

# (3) Compile test bench
#	--> compile a file
vlog tb_sevenseg.sv

# (4) Init the simulation
#	--> specific the toplevel module that we want to simulate
vsim tb_sevenseg

# read out all signals
log -r *

# (5) Run simulation
run 1us

# (6) Show the wave window
view wave
#do wave_tb_majority_vote.tcl