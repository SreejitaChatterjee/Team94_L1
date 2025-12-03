BUILD_DIR?=../build/

include $(BUILD_DIR)/software/include/generated/variables.mak
include $(SOC_DIRECTORY)/software/common.mak

# ============================================================================
# PQC-DTLS 1.3 Demo Build Configuration
# Inter IIT Tech Meet 14.0 - QTrino Labs
#
# Memory-optimized build using wolfCrypt primitives
# ============================================================================

# wolfCrypt core sources
WOLF_CORE_SRCS = wolfcrypt/src/wc_port.c \
                 wolfcrypt/src/memory.c \
                 wolfcrypt/src/error.c \
                 wolfcrypt/src/hash.c \
                 wolfcrypt/src/random.c \
                 wolfcrypt/src/wolfmath.c

# Hash algorithms (required for PQC)
WOLF_HASH_SRCS = wolfcrypt/src/sha256.c \
                 wolfcrypt/src/sha3.c

# AES-GCM for authenticated encryption
WOLF_SYM_SRCS = wolfcrypt/src/aes.c

# ML-KEM (Kyber) for post-quantum key encapsulation
WOLF_MLKEM_SRCS = wolfcrypt/src/wc_mlkem.c \
                  wolfcrypt/src/wc_mlkem_poly.c

# Math library (SP optimized for RISC-V)
WOLF_MATH_SRCS = wolfcrypt/src/sp_int.c

# Combine all wolfCrypt sources
WOLF_SRCS = $(WOLF_CORE_SRCS) \
            $(WOLF_HASH_SRCS) \
            $(WOLF_SYM_SRCS) \
            $(WOLF_MLKEM_SRCS) \
            $(WOLF_MATH_SRCS)

# Main application objects
OBJECTS  = crt0.o main.o
OBJECTS += $(WOLF_SRCS:.c=.o)

# Include paths
INC  = -I. -I./wolfssl -I./wolfssl/wolfcrypt

all: boot.bin

%.bin: %.elf
	$(OBJCOPY) -O binary $< $@
ifneq ($(OS),Windows_NT)
	chmod -x $@
endif

vpath %.a $(PACKAGES:%=../%)

# Compiler flags
CFLAGS += $(INC)
CFLAGS += -DWOLFSSL_USER_SETTINGS

boot.elf: $(OBJECTS)
	$(CC) $(LDFLAGS) -T linker.ld -N -o $@ \
		$(OBJECTS) \
		$(PACKAGES:%=-L$(BUILD_DIR)/software/%) \
		-Wl,--gc-sections \
		-Wl,-Map,$@.map \
		-lbase -lc -lcompiler_rt

ifneq ($(OS),Windows_NT)
	chmod -x $@
endif

# pull in dependency info for *existing* .o files
-include $(OBJECTS:.o=.d)

# Suppress warnings for wolfSSL sources
$(WOLF_SRCS:.c=.o): CFLAGS += -w

VPATH = $(BIOS_DIRECTORY):$(BIOS_DIRECTORY)/cmds:$(CPU_DIRECTORY)

%.o: %.cpp
	$(compilexx)

%.o: %.c
	$(compile)

%.o: %.S
	$(assemble)

clean:
	$(RM) $(OBJECTS) boot.elf boot.bin .*~ *~
	$(RM) -r wolfcrypt/src/*.o wolfcrypt/src/*.d

.PHONY: all clean
