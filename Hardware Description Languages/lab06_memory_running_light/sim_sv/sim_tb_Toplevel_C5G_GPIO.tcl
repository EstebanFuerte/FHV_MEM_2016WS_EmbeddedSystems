# init sim environment
vlib work
vmap work work

# compile sources
# vlog +incdir+../header_sv	../src_sv/memory_verilog.sv
vlog +incdir+../header_sv 	../fpga/Toplevel_C5G_GPIO/ip/memory_ip.v
vlog +incdir+../header_sv 	../fpga/Toplevel_C5G_GPIO/ip/addr_end_ip.v
vlog +incdir+../header_sv	../src_sv/addr_control.sv
vlog +incdir+../header_sv	../src_sv/sevenseg.sv
vlog +incdir+../header_sv	../src_sv/edge_detect.sv
vlog +incdir+../header_sv	../src_sv/upcounter.sv
vlog +incdir+../header_sv	../fpga/Toplevel_C5G_GPIO/Toplevel_C5G_GPIO.sv

# compile TB
vlog +incdir+../header_sv	tb_Toplevel_C5G_GPIO.sv

# init simulation
# Add the '-L altera_mf_ver -L lpm_ver' syntax to include Altera IP
vsim -L altera_mf_ver -L lpm_ver tb_Toplevel_C5G_GPIO
do wave_tb_Toplevel_C5G_GPIO.tcl
log -r *

# run simulation
run -all

# wavform
view wave