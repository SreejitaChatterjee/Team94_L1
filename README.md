# PQC-DTLS 1.3 Implementation on RISC-V + LiteX

**Team 94 - Inter IIT Tech Meet 14.0 (Qtrino Labs)**

This project implements a **Post-Quantum Cryptography (PQC) secured DTLS 1.3 communication channel** between a bare-metal RISC-V embedded system (client) and a Linux host (server), using **ML-KEM-512** (FIPS 203) for quantum-resistant key exchange.

---

## Key Features

- **Quantum-Resistant Security**: Uses ML-KEM-512, a NIST-standardized post-quantum key encapsulation mechanism
- **Bare-Metal Embedded Client**: Runs on RISC-V softcore (VexRiscv) in LiteX SoC simulation
- **Hardware Ethernet**: Uses LiteETH for real UDP/IP networking (not UART emulation)
- **Symmetric Encryption**: AES-128-GCM for authenticated encryption after key exchange
- **wolfSSL Integration**: Leverages wolfSSL's wolfCrypt library for all cryptographic operations

---

## Table of Contents

1. [Architecture Overview](#architecture-overview)
2. [Directory Structure](#directory-structure)
3. [Cryptographic Algorithms](#cryptographic-algorithms)
4. [Protocol Specification](#protocol-specification)
5. [Prerequisites](#prerequisites)
6. [Environment Setup](#environment-setup)
7. [Building the RISC-V Firmware (Client)](#building-the-risc-v-firmware-client)
8. [Building and Running the DTLS Server](#building-and-running-the-dtls-server)
9. [Network Configuration](#network-configuration)
10. [Running the Demo](#running-the-demo)
11. [Firmware Behavior Description](#firmware-behavior-description)
12. [Protocol Flow Diagram](#protocol-flow-diagram)
13. [Security Considerations](#security-considerations)
14. [Troubleshooting](#troubleshooting)
15. [References](#references)

---

## Architecture Overview

```
+-----------------------------------------------------------------------------+
|                              HOST MACHINE (Linux)                           |
|  +-----------------------------------------------------------------------+  |
|  |                         PQC-DTLS Server                               |  |
|  |  +-----------+  +-----------+  +-----------+  +----------+            |  |
|  |  |   ML-KEM  |  |  AES-GCM  |  |  SHA-256  |  |   UDP    |            |  |
|  |  | Encapsulate| |  Encrypt/ |  |    Key    |  |  Socket  |            |  |
|  |  |           |  |  Decrypt  |  | Derivation|  |          |            |  |
|  |  +-----------+  +-----------+  +-----------+  +----------+            |  |
|  +-----------------------------------------------------------------------+  |
|                                      |                                      |
|                              TAP Interface (tap0)                           |
|                              192.168.1.100/24                               |
+--------------------------------------+--------------------------------------+
                                       |
                              Virtual Network
                                       |
+--------------------------------------+--------------------------------------+
|                              LiteX Simulation                               |
|                                      |                                      |
|  +-----------------------------------------------------------------------+  |
|  |                    LiteETH (Ethernet MAC + PHY)                       |  |
|  |                         192.168.1.50/24                               |  |
|  +-----------------------------------------------------------------------+  |
|                                      |                                      |
|  +-----------------------------------------------------------------------+  |
|  |                       PQC-DTLS Client (Bare-Metal)                    |  |
|  |  +-----------+  +-----------+  +-----------+  +----------+            |  |
|  |  |   ML-KEM  |  |  AES-GCM  |  |  SHA-256  |  | LiteETH  |            |  |
|  |  |  KeyGen + |  |  Encrypt/ |  |    Key    |  |   UDP    |            |  |
|  |  |Decapsulate|  |  Decrypt  |  | Derivation|  |   API    |            |  |
|  |  +-----------+  +-----------+  +-----------+  +----------+            |  |
|  +-----------------------------------------------------------------------+  |
|                                      |                                      |
|  +-----------------------------------------------------------------------+  |
|  |                      VexRiscv RISC-V Softcore                         |  |
|  |                    (32-bit, RV32IM, ~100MHz)                          |  |
|  +-----------------------------------------------------------------------+  |
+-----------------------------------------------------------------------------+
```

---

## Directory Structure

```
Team94_L1/
|
+-- LP_Constraint_Env_Sim/           # Main LiteX simulation environment
|   |
|   +-- boot/                        # Embedded client firmware
|   |   +-- main.c                   # PQC-DTLS 1.3 client implementation
|   |   +-- Makefile                 # LiteX build system integration
|   |   +-- linker.ld                # Memory layout for RISC-V SoC
|   |   +-- crt0.o                   # C runtime startup object
|   |   +-- boot.bin                 # Compiled binary (output)
|   |   +-- boot.elf                 # ELF executable (output)
|   |   |
|   |   +-- server/                  # Linux DTLS server
|   |   |   +-- pqc_dtls_server.c    # DTLS 1.3 server (uses system wolfSSL)
|   |   |   +-- pqc_server.c         # Legacy custom protocol server
|   |   |   +-- Makefile             # Server build system
|   |   |   +-- user_settings.h      # wolfSSL/wolfCrypt configuration
|   |   |
|   |   +-- wolfssl/                 # wolfSSL headers
|   |   |   +-- wolfcrypt/           # wolfCrypt crypto headers
|   |   |       +-- wc_mlkem.h       # ML-KEM API
|   |   |       +-- aes.h            # AES API
|   |   |       +-- sha256.h         # SHA-256 API
|   |   |
|   |   +-- wolfcrypt/               # wolfCrypt source files
|   |       +-- src/
|   |           +-- wc_mlkem.c       # ML-KEM implementation
|   |           +-- aes.c            # AES implementation
|   |           +-- sha256.c         # SHA-256 implementation
|   |           +-- sha3.c           # SHA-3/SHAKE (for ML-KEM)
|   |           +-- ... (104 source files)
|   |
|   +-- build/                       # LiteX build output
|   |   +-- sim/software/
|   |       +-- include/generated/   # Auto-generated headers
|   |       +-- libliteeth/          # Ethernet library
|   |
|   +-- report/                      # Technical report
|   |   +-- Team94_Report.pdf
|   |   +-- Team94_Report.tex
|   |
|   +-- litex/                       # LiteX framework
|   +-- liteeth/                     # LiteETH Ethernet core
|   +-- migen/                       # Migen HDL library
|   +-- pythondata-cpu-vexriscv/     # VexRiscv CPU core
|
+-- boot/                            # Alternate boot directory (root level)
|   +-- main.c                       # Client firmware (copy)
|   +-- server/                      # Server implementation
|
+-- README.md                        # This file
+-- requirements.txt                 # Python dependencies
```

---

## Cryptographic Algorithms

### ML-KEM-512 (Module-Lattice Key Encapsulation Mechanism)

ML-KEM is the NIST-standardized post-quantum key encapsulation mechanism (formerly known as CRYSTALS-Kyber). It provides security against both classical and quantum computer attacks.

| Parameter | ML-KEM-512 Value |
|-----------|------------------|
| Security Level | NIST Level 1 (128-bit classical) |
| Public Key Size | 800 bytes |
| Secret Key Size | 1632 bytes |
| Ciphertext Size | 768 bytes |
| Shared Secret Size | 32 bytes |
| Algorithm Basis | Module Learning With Errors (MLWE) |

**How ML-KEM Works:**

1. **Key Generation (Client)**: Generate public/private key pair using polynomial operations
2. **Encapsulation (Server)**: Using client's public key, generate and encrypt a shared secret
3. **Decapsulation (Client)**: Using private key, decrypt and recover the shared secret

### AES-128-GCM (Authenticated Encryption)

| Parameter | Value |
|-----------|-------|
| Key Size | 128 bits (16 bytes) |
| IV/Nonce Size | 96 bits (12 bytes) |
| Tag Size | 128 bits (16 bytes) |
| Mode | Authenticated Encryption with Associated Data (AEAD) |

### SHA-256 (Key Derivation)

```
input  = shared_secret (32 bytes) || "client_key" (10 bytes)
hash   = SHA-256(input)
key    = hash[0:15]    # First 16 bytes -> AES-128 key
iv     = hash[16:27]   # Next 12 bytes -> AES-GCM nonce
```

---

## Protocol Specification

### Message Format

```
+------------+----------+----------+-------------------+
|  msg_type  | len_high |  len_low |      payload      |
|   1 byte   |  1 byte  |  1 byte  |     len bytes     |
+------------+----------+----------+-------------------+
```

### Message Types

| Type | Value | Direction | Payload | Description |
|------|-------|-----------|---------|-------------|
| CLIENT_HELLO | 0x01 | C->S | 32 bytes random | Initiates handshake |
| SERVER_HELLO | 0x02 | S->C | 32 bytes random | Server acknowledgment |
| KEY_EXCHANGE | 0x03 | C->S | 800 bytes ML-KEM public key | Client's PQ public key |
| KEY_EXCHANGE | 0x03 | S->C | 768 bytes ciphertext | Encapsulated shared secret |
| FINISHED | 0x05 | C<->S | Encrypted verification | Handshake verification |
| ENCRYPTED_DATA | 0x04 | C<->S | IV + ciphertext + tag | Application data |

---

## Prerequisites

- **Operating System**: Linux (Ubuntu 20.04+) or WSL2 on Windows
- **Python**: 3.8+
- **Build Tools**: `build-essential`, `cmake`, `gcc`, `make`
- **RISC-V Toolchain**: `riscv64-unknown-elf-gcc` (installed via LiteX)
- **Verilator**: For LiteX simulation
- **wolfSSL**: With DTLS 1.3 and ML-KEM support (for server)

---

## Environment Setup

### Step 1: Clone and Setup

```bash
git clone https://github.com/YOUR_REPO/Team94_L1.git
cd Team94_L1/LP_Constraint_Env_Sim

# Create Python virtual environment
python3 -m venv litex-env
source litex-env/bin/activate
```

### Step 2: Install LiteX

```bash
chmod +x litex_setup.py
./litex_setup.py --init --install
pip3 install meson ninja
```

### Step 3: Install RISC-V Toolchain

```bash
sudo ./litex_setup.py --gcc=riscv
```

### Step 4: Install System Dependencies

```bash
sudo apt install libevent-dev libjson-c-dev verilator
```

### Step 5: Install wolfSSL (for DTLS Server)

```bash
git clone https://github.com/wolfSSL/wolfssl.git
cd wolfssl
./autogen.sh
./configure --enable-dtls13 --enable-kyber --enable-experimental \
            --enable-dtls --enable-dtls-frag-ch
make
sudo make install
sudo ldconfig
cd ..
```

---

## Building the RISC-V Firmware (Client)

### Step 1: Generate LiteX Build Environment

```bash
cd LP_Constraint_Env_Sim

litex_sim --csr-json csr.json --cpu-type=vexriscv --cpu-variant=full \
          --integrated-main-ram-size=0x06400000 --with-ethernet --build
```

### Step 2: Build the Client Firmware

```bash
cd boot
make clean
make

# Output: boot.bin, boot.elf
```

---

## Building and Running the DTLS Server

### Build the Server

```bash
cd LP_Constraint_Env_Sim/boot/server

# Build DTLS 1.3 server
make dtls13

# Output: build/pqc_dtls_server
```

### Run ML-KEM Demo (Verification)

```bash
make demo
```

Expected output:
```
========================================
  Standalone ML-KEM-512 Test
========================================
[Alice] KeyGen OK
[Bob] Encapsulation OK
[Alice] Decapsulation OK
*** ML-KEM SUCCESS - Shared secrets match! ***
```

---

## Network Configuration

### TAP Interface Setup

```bash
# Create TAP interface
sudo ip tuntap add dev tap0 mode tap user $USER
sudo ip addr add 192.168.1.100/24 dev tap0
sudo ip link set tap0 up

# Verify
ip addr show tap0
```

### Network Topology

```
+-------------------+                    +-------------------+
|   Linux Host      |                    |  LiteX Simulation |
|  192.168.1.100    |<---- tap0 -------->|  192.168.1.50     |
|     :11111        |    (virtual)       |     :22222        |
|    (Server)       |                    |    (Client)       |
+-------------------+                    +-------------------+
```

| Entity | IP Address | Port | Role |
|--------|------------|------|------|
| Server (Linux) | 192.168.1.100 | 11111 | Listens for connections |
| Client (RISC-V) | 192.168.1.50 | 22222 | Initiates connection |

---

## Running the Demo

### Terminal 1: Start the DTLS Server

```bash
cd LP_Constraint_Env_Sim/boot/server
make run13
```

### Terminal 2: Run LiteX Simulation

```bash
cd LP_Constraint_Env_Sim

litex_sim --csr-json csr.json --cpu-type=vexriscv --cpu-variant=full \
          --integrated-main-ram-size=0x06400000 \
          --with-ethernet --ethernet-tap tap0 \
          --ram-init=boot/boot.bin
```

### Expected Client Output

```
========================================
  PQC-DTLS 1.3 Client (LiteETH)
========================================
[NET] Client: 192.168.1.50:22222
[NET] Server: 192.168.1.100:11111
[NET] ARP resolution successful
[DTLS] Starting handshake...

========================================
  DTLS Handshake Complete!
========================================
[DTLS] Sending: "Hello from RISC-V PQC-DTLS 1.3 Client!"
*** DTLS 1.3 PQC Demo Complete ***
```

---

## Firmware Behavior Description

### Client Firmware (`boot/main.c`)

#### 1. Initialization Sequence

1. Configure interrupts and UART for debug output
2. Initialize LiteETH (Ethernet MAC/PHY)
3. Configure IP addresses (Client: 192.168.1.50, Server: 192.168.1.100)
4. Perform ARP resolution for server

#### 2. DTLS 1.3 Handshake

1. Initialize wolfSSL library and create DTLS 1.3 context
2. Configure ML-KEM key exchange
3. Set custom I/O callbacks for LiteETH UDP
4. Perform handshake (ClientHello -> ServerHello -> Key Exchange -> Finished)

#### 3. Memory Configuration

| Region | Size | Purpose |
|--------|------|---------|
| Stack | 500KB | Function call stack |
| Heap | 500KB | Dynamic memory allocation |
| Main RAM | 100MB | Code, data, wolfCrypt buffers |

---

## Protocol Flow Diagram

```
    Client (RISC-V)                              Server (Linux)
         |                                            |
         |  -------- CLIENT_HELLO (random) -------->  |
         |  <------- SERVER_HELLO (random) --------   |
         |                                            |
         |          [ML-KEM KeyGen]                   |
         |                                            |
         |  -------- KEY_EXCHANGE (pubkey) -------->  |
         |                         [ML-KEM Encapsulate]
         |  <------- KEY_EXCHANGE (ciphertext) -----  |
         |                                            |
         |  [ML-KEM Decapsulate]                      |
         |  [Key Derivation]          [Key Derivation]|
         |                                            |
         |  -------- FINISHED (encrypted) --------->  |
         |  <------- FINISHED (encrypted) ----------  |
         |                                            |
         |=========== HANDSHAKE COMPLETE ============|
         |                                            |
         |  ======== ENCRYPTED_DATA ===============>  |
         |  <======= ENCRYPTED_DATA ===============   |
```

---

## Security Considerations

### Current Implementation Status

| Aspect | Status | Production Recommendation |
|--------|--------|---------------------------|
| **RNG (Client)** | Software PRNG | Use hardware TRNG |
| **RNG (Server)** | /dev/urandom | Acceptable |
| **Key Storage** | RAM only | Use secure element/HSM |
| **Replay Protection** | None | Add sequence numbers |
| **Perfect Forward Secrecy** | New keys per session | Implemented |

### Quantum Security

| Attack Type | Classical Computer | Quantum Computer |
|-------------|-------------------|------------------|
| Key Recovery (ML-KEM-512) | 2^143 operations | 2^107 operations |
| Brute Force (AES-128) | 2^128 operations | 2^64 operations (Grover) |

---

## Troubleshooting

### Build Errors

**`riscv64-unknown-elf-gcc: command not found`**
```bash
sudo ./litex_setup.py --gcc=riscv
export PATH="/opt/riscv/bin:$PATH"
```

**`user_settings.h not found`**
```bash
# Ensure include paths in Makefile
CFLAGS += -I./wolfssl -I./wolfssl/wolfcrypt -I.
```

**`-march=rv32i2p0: Invalid or unknown z ISA extension`**
```bash
# Edit litex/litex/soc/cores/cpu/vexriscv/core.py
# Change: -march=rv32i2p0_m -> -march=rv32im
```

### Network Errors

**`ARP resolution failed`**
```bash
ip link show tap0              # Check TAP is up
netstat -ulnp | grep 11111     # Check server running
```

**`bind: Cannot assign requested address`**
```bash
sudo ip tuntap add dev tap0 mode tap user $USER
sudo ip addr add 192.168.1.100/24 dev tap0
sudo ip link set tap0 up
```

### Runtime Errors

**`wolfSSL_connect failed: -308`**
- Timeout error - ensure server is running before client
- Verify ARP resolution succeeded

**`ML-KEM not available`**
```bash
# Rebuild wolfSSL with Kyber support
./configure --enable-kyber --enable-experimental
make && sudo make install
```

---

## References

### Standards

1. **FIPS 203**: ML-KEM Standard - https://csrc.nist.gov/publications/detail/fips/203/final
2. **RFC 9147**: DTLS 1.3 - https://datatracker.ietf.org/doc/html/rfc9147
3. **NIST PQC**: https://csrc.nist.gov/projects/post-quantum-cryptography

### Libraries

4. **wolfSSL**: https://www.wolfssl.com/documentation/
5. **LiteX**: https://github.com/enjoy-digital/litex
6. **LiteETH**: https://github.com/enjoy-digital/liteeth
7. **VexRiscv**: https://github.com/SpinalHDL/VexRiscv

---

## License

- **wolfSSL**: GPLv2 or Commercial License
- **LiteX**: BSD License
- **VexRiscv**: MIT License

---

## Authors

**Team 94** - Inter IIT Tech Meet 14.0

---

## Version History

| Version | Date | Changes |
|---------|------|---------|
| 1.0.0 | 2024-12-05 | Initial implementation with ML-KEM-512 + DTLS 1.3 |
