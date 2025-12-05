# PQC-DTLS 1.3 Server Makefile
# Uses system-installed wolfSSL
#
# Prerequisites:
#   wolfSSL with DTLS 1.3 and ML-KEM support:
#   ./configure --enable-dtls13 --enable-kyber --enable-experimental \
#               --enable-dtls --enable-dtls-frag-ch
#   make && sudo make install
#
# Usage:
#   make dtls13     - Build DTLS 1.3 server
#   make run13      - Run DTLS 1.3 server
#   make demo       - Run ML-KEM demo only

CC      := gcc
CFLAGS  := -Wall -Wextra -O2 -std=gnu11
LDFLAGS := -lwolfssl -lpthread -lm

BUILD_DIR := build

# Targets
.PHONY: all dtls13 legacy run13 run demo clean help

all: dtls13

# DTLS 1.3 server using system wolfSSL
dtls13: $(BUILD_DIR)/pqc_dtls_server
	@echo ""
	@echo "Built: $(BUILD_DIR)/pqc_dtls_server"
	@echo "Run with: make run13"

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/pqc_dtls_server: pqc_dtls_server.c | $(BUILD_DIR)
	@echo "[CC] pqc_dtls_server.c (using system wolfSSL)"
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

# Legacy custom protocol server (uses local wolfcrypt)
legacy: $(BUILD_DIR)/pqc_server
	@echo ""
	@echo "Built: $(BUILD_DIR)/pqc_server (legacy custom protocol)"

WOLFCRYPT_DIR := ../wolfcrypt
WOLFCRYPT_SRCS := $(wildcard $(WOLFCRYPT_DIR)/src/*.c)
WOLFCRYPT_OBJS := $(patsubst $(WOLFCRYPT_DIR)/src/%.c,$(BUILD_DIR)/wc_%.o,$(WOLFCRYPT_SRCS))

$(BUILD_DIR)/pqc_server.o: pqc_server.c | $(BUILD_DIR)
	@echo "[CC] pqc_server.c"
	$(CC) $(CFLAGS) -I. -I.. -I../wolfssl -DWOLFSSL_USER_SETTINGS -c $< -o $@

$(BUILD_DIR)/wc_%.o: $(WOLFCRYPT_DIR)/src/%.c | $(BUILD_DIR)
	@echo "[CC] wolfcrypt/$*.c"
	@$(CC) $(CFLAGS) -I. -I.. -I../wolfssl -DWOLFSSL_USER_SETTINGS -w -c $< -o $@

$(BUILD_DIR)/pqc_server: $(BUILD_DIR)/pqc_server.o $(WOLFCRYPT_OBJS)
	@echo "[LD] pqc_server"
	$(CC) $^ -o $@ -lpthread -lm

# Run targets
run13: dtls13
	@echo ""
	@echo "========================================="
	@echo "  Starting DTLS 1.3 PQC Server"
	@echo "  Port: 11111"
	@echo "  Press Ctrl+C to stop"
	@echo "========================================="
	./$(BUILD_DIR)/pqc_dtls_server

run: legacy
	./$(BUILD_DIR)/pqc_server

demo: dtls13
	./$(BUILD_DIR)/pqc_dtls_server --demo

# Cleanup
clean:
	rm -rf $(BUILD_DIR)

# Help
help:
	@echo ""
	@echo "PQC-DTLS Server Build System"
	@echo "============================"
	@echo ""
	@echo "DTLS 1.3 (recommended):"
	@echo "  make dtls13   - Build DTLS 1.3 server (requires system wolfSSL)"
	@echo "  make run13    - Build and run DTLS 1.3 server"
	@echo "  make demo     - Run ML-KEM standalone demo"
	@echo ""
	@echo "Legacy (custom protocol):"
	@echo "  make legacy   - Build custom protocol server (uses local wolfcrypt)"
	@echo "  make run      - Run custom protocol server"
	@echo ""
	@echo "Other:"
	@echo "  make clean    - Remove build files"
	@echo ""
	@echo "wolfSSL Installation:"
	@echo "  cd wolfssl"
	@echo "  ./configure --enable-dtls13 --enable-kyber --enable-experimental \\"
	@echo "              --enable-dtls --enable-dtls-frag-ch"
	@echo "  make && sudo make install && sudo ldconfig"
	@echo ""
