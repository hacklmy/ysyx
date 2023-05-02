AM_SRCS := platform/npc/trm.c \
           platform/npc/ioe/ioe.c \
           platform/npc/ioe/timer.c \
           platform/npc/ioe/input.c \
           platform/npc/ioe/gpu.c \
           platform/npc/ioe/audio.c \
           platform/npc/ioe/disk.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
CFLAGS += -DMAINARGS=\"$(mainargs)\"
CFLAGS += -I$(AM_HOME)/am/src/platform/npc/include
.PHONY: $(AM_HOME)/am/src/platform/npc/trm.c

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin
	@echo + OBJCOPY "->" /home/lmy/ysyx-workbench/npc/image.bin
	@cp $(IMAGE).bin /home/lmy/ysyx-workbench/npc/image.bin 
	@cp $(IMAGE).elf /home/lmy/ysyx-workbench/npc/image.elf

run: image
	$(MAKE) -C /home/lmy/ysyx-workbench/npc sim