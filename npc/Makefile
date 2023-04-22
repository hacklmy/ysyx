LDFLAGS += --diff=/home/lmy/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so
HEAD_PATH	?= /home/lmy/ysyx-workbench/npc/csrc/include
CFLAGS			+= -I${INC_PATH}

all:
	@echo "Write this Makefile by your self."

verilog:
	cd vsrc && sbt run

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@verilator --cc --trace --exe --build ./vsrc/*.v ./csrc/main.cpp ./csrc/*.c $(addprefix -CFLAGS , $(CFLAGS)) --top-module top --LDFLAGS "-fsanitize=address -lSDL2 -ldl $(shell llvm-config --cxxflags) -fPIE $(shell llvm-config --libs)"
	@./obj_dir/Vtop

copy_top:
	sed -n '/module top/,/endmodule/p' vsrc/output/top.v > vsrc/top.v
	echo "/* verilator lint_off UNUSED */" > vsrc/IFU.v
	sed -n '/module IFU/,/endmodule/p' vsrc/output/top.v >> vsrc/IFU.v
	echo "/* verilator lint_on UNUSED */" >> vsrc/IFU.v
	echo "/* verilator lint_off UNUSED */" > vsrc/IDU.v
	sed -n '/module IDU/,/endmodule/p' vsrc/output/top.v >> vsrc/IDU.v
	echo "/* verilator lint_on UNUSED */" >> vsrc/IDU.v
	echo "/* verilator lint_off UNUSED */" > vsrc/EXU.v
	echo "/* verilator lint_off WIDTH */" >> vsrc/EXU.v
	sed -n '/module EXU/,/endmodule/p' vsrc/output/top.v >> vsrc/EXU.v
	echo "/* verilator lint_on WIDTH */" >> vsrc/EXU.v
	echo "/* verilator lint_on UNUSED */" >> vsrc/EXU.v

include ../Makefile
