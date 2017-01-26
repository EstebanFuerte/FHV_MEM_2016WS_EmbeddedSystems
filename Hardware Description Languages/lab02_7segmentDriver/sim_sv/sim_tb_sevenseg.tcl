# This is a TCL command script
# The following script will control Modelsim

# (1) Set up sim enviornment
vlib work
vmap work work

# (2) Compile design files
vlog ../src_sv/sevenseg.sv

# (3) Compile test bench
vlog tb_sevenseg.sv

# (4) Init the simulation
vsim tb_sevenseg

log -r *

# (5) Run simulation
run 2us

# (6) Show the wave window
view wave