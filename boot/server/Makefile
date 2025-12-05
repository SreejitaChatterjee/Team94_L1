# PQC-DTLS Server Makefile
# For Linux host communicating with bare-metal RISC-V client
#
# Directory structure (from server/):
#   ../wolfssl/           - wolfSSL headers
#   ../wolfssl/wolfcrypt/ - wolfCrypt headers  
#   ../wolfcrypt/src/     - wolfCrypt source files
#
# Usage:
#   make              - Build the server
#   make run          - Build and run the server
#   make demo         - Run standalone ML-KEM demo only
#   make clean        - Clean build artifacts

# Compiler settings
CC      ?= gcc
CFLAGS  := -Wall -Wextra -O2 -std=gnu11
LDFLAGS :=

# Paths relative to server/ directory
BOOT_DIR        := ..
WOLFSSL_DIR     := $(BOOT_DIR)/wolfssl
WOLFCRYPT_DIR   := $(BOOT_DIR)/wolfcrypt

# Include paths - ORDER MATTERS!
# Use -iquote for "quoted" includes to search local dirs first
# This prevents /usr/local/include from being searched for local headers
INC_FLAGS := -iquote. -iquote$(BOOT_DIR) -iquote$(WOLFSSL_DIR) -iquote$(WOLFSSL_DIR)/wolfcrypt
# Use -I for <angle bracket> includes
INC_FLAGS += -I. -I$(BOOT_DIR) -I$(WOLFSSL_DIR)

# wolfCrypt source files
WOLFCRYPT_SRCS := $(wildcard $(WOLFCRYPT_DIR)/src/*.c)
WOLFCRYPT_OBJS := $(patsubst $(WOLFCRYPT_DIR)/src/%.c,build/wc_%.o,$(WOLFCRYPT_SRCS))

# Project files
BUILD_DIR   := build
TARGET      := pqc_server
SRCS        := pqc_server.c
OBJS        := $(patsubst %.c,$(BUILD_DIR)/%.o,$(SRCS))

# Compiler flags
CFLAGS += $(INC_FLAGS)
CFLAGS += -DWOLFSSL_USER_SETTINGS

# Linker flags  
LDFLAGS += -lpthread -lm

#============================================================================
# Build targets
#============================================================================

.PHONY: all clean run demo help show-config check-deps

all: check-deps $(BUILD_DIR)/$(TARGET)
	@echo ""
	@echo "========================================"
	@echo "  Build complete: $(BUILD_DIR)/$(TARGET)"
	@echo "  Run with: make run"
	@echo "========================================"

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Compile server source
$(BUILD_DIR)/pqc_server.o: pqc_server.c user_settings.h | $(BUILD_DIR)
	@echo "[CC] $<"
	$(CC) $(CFLAGS) -c $< -o $@

# Compile wolfCrypt sources (suppress warnings from library code)
$(BUILD_DIR)/wc_%.o: $(WOLFCRYPT_DIR)/src/%.c | $(BUILD_DIR)
	@echo "[CC] wolfcrypt/$*.c"
	@$(CC) $(CFLAGS) -w -c $< -o $@

# Link everything
$(BUILD_DIR)/$(TARGET): $(OBJS) $(WOLFCRYPT_OBJS)
	@echo "[LD] $@"
	$(CC) $^ -o $@ $(LDFLAGS)
	@echo ""

#============================================================================
# Run targets
#============================================================================

run: all
	@echo ""
	@echo "========================================="
	@echo "  Starting PQC-DTLS Server"
	@echo "  Server: 192.168.1.100:11111"
	@echo "  Press Ctrl+C to stop"
	@echo "========================================="
	@echo ""
	./$(BUILD_DIR)/$(TARGET)

demo: all
	@echo ""
	@echo "Running standalone ML-KEM demo..."
	./$(BUILD_DIR)/$(TARGET) --demo

#============================================================================
# Dependency checking
#============================================================================

check-deps:
	@echo "Checking dependencies..."
	@test -f user_settings.h || (echo "ERROR: user_settings.h not found"; exit 1)
	@test -d $(WOLFSSL_DIR) || (echo "ERROR: $(WOLFSSL_DIR) not found"; exit 1)
	@test -d $(WOLFCRYPT_DIR)/src || (echo "ERROR: $(WOLFCRYPT_DIR)/src not found"; exit 1)
	@echo "  user_settings.h: OK"
	@echo "  wolfssl dir: OK"
	@echo "  wolfcrypt/src: OK ($(words $(WOLFCRYPT_SRCS)) source files)"
	@echo ""

show-config:
	@echo ""
	@echo "=== Server Configuration ==="
	@echo "  Server IP:     192.168.1.100"
	@echo "  Server Port:   11111"
	@echo "  Client Port:   22222"
	@echo ""
	@echo "=== Build Configuration ==="
	@echo "  CC:            $(CC)"
	@echo "  WOLFSSL_DIR:   $(WOLFSSL_DIR)"
	@echo "  WOLFCRYPT_DIR: $(WOLFCRYPT_DIR)"
	@echo ""
	@echo "=== Include Paths ==="
	@echo "  $(INC_FLAGS)" | tr ' ' '\n' | grep -E '^-[iI]' | sed 's/^/  /'
	@echo ""
	@echo "=== wolfCrypt Sources ==="
	@echo "  $(words $(WOLFCRYPT_SRCS)) files found"
	@ls $(WOLFCRYPT_DIR)/src/*.c 2>/dev/null | head -5 | xargs -I{} basename {} | sed 's/^/    /'
	@echo "    ..."
	@echo ""

#============================================================================
# Cleanup
#============================================================================

clean:
	@echo "Cleaning build artifacts..."
	rm -rf $(BUILD_DIR)
	@echo "Done"

#============================================================================
# Help
#============================================================================

help:
	@echo ""
	@echo "PQC-DTLS Server Build System"
	@echo "============================"
	@echo ""
	@echo "Targets:"
	@echo "  make          - Build the server"
	@echo "  make run      - Build and run server"
	@echo "  make demo     - Run ML-KEM standalone demo"
	@echo "  make clean    - Remove build files"
	@echo "  make show-config - Show configuration"
	@echo ""
	@echo "Expected directory layout:"
	@echo "  boot/"
	@echo "  ├── server/           <- You are here"
	@echo "  │   ├── Makefile"
	@echo "  │   ├── pqc_server.c"
	@echo "  │   └── user_settings.h"
	@echo "  ├── wolfssl/          <- Headers"
	@echo "  │   └── wolfcrypt/    <- More headers"
	@echo "  └── wolfcrypt/"
	@echo "      └── src/          <- Source files"
	@echo ""