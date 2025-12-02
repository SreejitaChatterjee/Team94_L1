BUILD_DIR?=../build/

include $(BUILD_DIR)/software/include/generated/variables.mak
include $(SOC_DIRECTORY)/software/common.mak

# Wolf includes - minimal set for ML-KEM only
WOLF_SRCS = wolfcrypt/src/wc_mlkem.c \
            wolfcrypt/src/wc_mlkem_poly.c \
            wolfcrypt/src/sha3.c \
            wolfcrypt/src/sha256.c \
            wolfcrypt/src/random.c \
            wolfcrypt/src/memory.c \
            wolfcrypt/src/wc_port.c \
            wolfcrypt/src/error.c \
            wolfcrypt/src/hash.c

OBJECTS  = crt0.o main.o
OBJECTS += $(WOLF_SRCS:.c=.o)
INC  = -I./wolfssl -I./wolfssl/wolfcrypt -I.

all: boot.bin

%.bin: %.elf
	$(OBJCOPY) -O binary $< $@
ifneq ($(OS),Windows_NT)
	chmod -x $@
endif

vpath %.a $(PACKAGES:%=../%)

# CFLAGS += $(INC) -DWOLFSSL_USER_SETTINGS

CFLAGS += $(INC) 
CFLAGS += -DWOLFSSL_USER_SETTINGS

boot.elf: $(OBJECTS)
	$(CC) $(LDFLAGS) -T linker.ld -N -o $@ \
		$(OBJECTS) \
		$(PACKAGES:%=-L$(BUILD_DIR)/software/%) \
		-Wl,--whole-archive \
		-Wl,--gc-sections \
		-Wl,-Map,$@.map \
		$(LIBS:lib%=-l%)

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
