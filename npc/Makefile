all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@verilator -Wall --cc --trace --exe --build ./vsrc/top.v ./vsrc/IDU.v ./vsrc/EXU.v ./vsrc/IFU.v ./vsrc/DPI.v ./csrc/main.cpp
	@./obj_dir/Vtop

include ../Makefile
