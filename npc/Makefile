all:
	@echo "Write this Makefile by your self."


sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@verilator -Wall --cc --trace --exe --build -lreadline ./vsrc/top.v ./vsrc/IDU.v ./vsrc/EXU.v ./vsrc/IFU.v ./vsrc/DPI.v ./csrc/main.cpp
	@./obj_dir/Vtop

copy_top:
	sed -n '/module top/,/endmodule/p' vsrc/output/top.v > vsrc/top.v
	sed -n '/module IFU/,/endmodule/p' vsrc/output/top.v > vsrc/IFU.v
	echo "/* verilator lint_off UNUSED */" > vsrc/IDU.v
	sed -n '/module IDU/,/endmodule/p' vsrc/output/top.v >> vsrc/IDU.v
	echo "/* verilator lint_on UNUSED */" >> vsrc/IDU.v
	echo "/* verilator lint_off UNUSED */" > vsrc/EXU.v
	sed -n '/module EXU/,/endmodule/p' vsrc/output/top.v >> vsrc/EXU.v
	echo "/* verilator lint_on UNUSED */" >> vsrc/EXU.v

include ../Makefile
