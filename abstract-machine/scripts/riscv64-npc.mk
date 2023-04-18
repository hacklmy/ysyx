include $(AM_HOME)/scripts/isa/riscv64.mk
include $(AM_HOME)/scripts/platform/npc.mk

AM_SRCS += riscv/npc/start.S \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

    