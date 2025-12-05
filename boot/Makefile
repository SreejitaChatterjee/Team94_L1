BUILD_DIR?=../build/

include $(BUILD_DIR)/software/include/generated/variables.mak
include $(SOC_DIRECTORY)/software/common.mak

#Wolf includes
SRCS += $(wildcard wolfcrypt/src/*.c)
SRCS += $(wildcard src/*.c)

OBJECTS  = crt0.o main.o
OBJECTS += $(SRCS:.c=.o)

INC  = -I./wolfssl -I./wolfssl/wolfcrypt -I.

all: boot.bin

%.bin: %.elf
	$(OBJCOPY) -O binary $< $@
ifneq ($(OS),Windows_NT)
	chmod -x $@
endif

vpath %.a $(PACKAGES:%=../%)

CFLAGS += $(INC) 
CFLAGS += -DWOLFSSL_USER_SETTINGS
CFLAGS += -DWOLFSSL_SMALL_STACK
CFLAGS += -DWOLFSSL_STATIC_MEMORY
CFLAGS += -DHAVE_THREAD_LS

# Note: libliteeth is linked via PACKAGES, not separately
boot.elf: $(OBJECTS)
	$(CC) $(LDFLAGS) -T linker.ld -N -o $@ \
		$(OBJECTS) \
		$(PACKAGES:%=-L$(BUILD_DIR)/software/%) \
		-L$(BUILD_DIR)/software/libliteeth \
		-Wl,--gc-sections \
		-Wl,-Map,$@.map \
		-Wl,--start-group \
		$(LIBS:lib%=-l%) \
		-lliteeth \
		-Wl,--end-group
ifneq ($(OS),Windows_NT)
	chmod -x $@
endif

# pull in dependency info for *existing* .o files
-include $(OBJECTS:.o=.d)

donut.o: CFLAGS   += -w

VPATH = $(BIOS_DIRECTORY):$(BIOS_DIRECTORY)/cmds:$(CPU_DIRECTORY)

%.o: %.cpp
	$(compilexx)

%.o: %.c
	$(compile)

%.o: %.S
	$(assemble)

clean:
	$(RM) $(OBJECTS) boot.elf boot.bin .*~ *~

.PHONY: all clean