vlib work
vmap work work

# Compile Sources
vlog ../fpga/Toplevel_C5G_HEX4/ip/rom_data8bit_addr10bit.v
vlog ../fpga/Toplevel_C5G_HEX4/ip/crc_hash_data.v
vlog ../fpga/Toplevel_C5G_HEX4/Toplevel_C5G_HEX4.sv

vlog ../src_sv/crc_fsm.sv
vlog ../src_sv/crc_system.sv
vlog ../src_sv/crc_comp.sv
vlog ../src_sv/crc16_usb_8bitdata.sv
vlog ../src_sv/edgedetect.sv

vlog ../src_sv/crc_system.sv
vlog ../src_sv/sevenseg.sv

# Compile TB
vlog tb_Toplevel_C5G_HEX4.sv

# Run simulation
vsim  -L altera_mf_ver -L lpm_ver tb_Toplevel_C5G_HEX4
# Note: The expression '-L altera_mf_ver -L lpm_ver' is required when Altera IP shall be simulated
log -r *
do wave_tb_Toplevel_C5G_HEX4.tcl

run -all


view wave