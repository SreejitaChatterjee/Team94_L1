# Post-Quantum Cryptography DTLS Implementation

## Project Overview

This project implements a **Post-Quantum Cryptography (PQC) secured communication channel** between a bare-metal RISC-V embedded system and a Linux host. It demonstrates quantum-resistant key exchange using **ML-KEM-512** (formerly known as Kyber) combined with **AES-GCM** authenticated encryption, all running over UDP.

### Key Features

- **Quantum-Resistant Security**: Uses ML-KEM-512, a NIST-standardized post-quantum key encapsulation mechanism
- **Bare-Metal Embedded Client**: Runs on RISC-V softcore (VexRiscv) in LiteX SoC simulation
- **Hardware Ethernet**: Uses LiteETH for real UDP/IP networking (not UART emulation)
- **Symmetric Encryption**: AES-128-GCM for authenticated encryption after key exchange
- **wolfSSL Integration**: Leverages wolfSSL's wolfCrypt library for all cryptographic operations

---

## Table of Contents

1. [Architecture Overview](#architecture-overview)
2. [Cryptographic Algorithms](#cryptographic-algorithms)
3. [Protocol Specification](#protocol-specification)
4. [Directory Structure](#directory-structure)
5. [Client Implementation (RISC-V)](#client-implementation-risc-v)
6. [Server Implementation (Linux)](#server-implementation-linux)
7. [Build Instructions](#build-instructions)
8. [Network Configuration](#network-configuration)
9. [Running the Demo](#running-the-demo)
10. [Protocol Flow Diagram](#protocol-flow-diagram)
11. [Security Considerations](#security-considerations)
12. [Troubleshooting](#troubleshooting)
13. [References](#references)

---

## Architecture Overview

```
┌─────────────────────────────────────────────────────────────────────────────┐
│                              HOST MACHINE (Linux)                           │
│  ┌─────────────────────────────────────────────────────────────────────┐   │
│  │                         PQC-DTLS Server                              │   │
│  │  ┌─────────────┐  ┌─────────────┐  ┌─────────────┐  ┌────────────┐  │   │
│  │  │   ML-KEM    │  │   AES-GCM   │  │   SHA-256   │  │    UDP     │  │   │
│  │  │ Encapsulate │  │  Encrypt/   │  │    Key      │  │   Socket   │  │   │
│  │  │             │  │  Decrypt    │  │ Derivation  │  │            │  │   │
│  │  └─────────────┘  └─────────────┘  └─────────────┘  └────────────┘  │   │
│  └─────────────────────────────────────────────────────────────────────┘   │
│                                      │                                      │
│                              TAP Interface (tap0)                           │
│                              192.168.1.100/24                               │
└──────────────────────────────────────┼──────────────────────────────────────┘
                                       │
                              Virtual Network
                                       │
┌──────────────────────────────────────┼──────────────────────────────────────┐
│                              LiteX Simulation                               │
│                                      │                                      │
│  ┌─────────────────────────────────────────────────────────────────────┐   │
│  │                    LiteETH (Ethernet MAC + PHY)                      │   │
│  │                         192.168.1.50/24                              │   │
│  └─────────────────────────────────────────────────────────────────────┘   │
│                                      │                                      │
│  ┌─────────────────────────────────────────────────────────────────────┐   │
│  │                       PQC-DTLS Client (Bare-Metal)                   │   │
│  │  ┌─────────────┐  ┌─────────────┐  ┌─────────────┐  ┌────────────┐  │   │
│  │  │   ML-KEM    │  │   AES-GCM   │  │   SHA-256   │  │  LiteETH   │  │   │
│  │  │  KeyGen +   │  │  Encrypt/   │  │    Key      │  │    UDP     │  │   │
│  │  │ Decapsulate │  │  Decrypt    │  │ Derivation  │  │    API     │  │   │
│  │  └─────────────┘  └─────────────┘  └─────────────┘  └────────────┘  │   │
│  └─────────────────────────────────────────────────────────────────────┘   │
│                                      │                                      │
│  ┌─────────────────────────────────────────────────────────────────────┐   │
│  │                      VexRiscv RISC-V Softcore                        │   │
│  │                    (32-bit, RV32IM, ~100MHz)                         │   │
│  └─────────────────────────────────────────────────────────────────────┘   │
└─────────────────────────────────────────────────────────────────────────────┘
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

1. **Key Generation (Client)**:
   - Generate a random seed
   - Create public/private key pair using polynomial operations over a ring
   - Public key can be shared; private key is kept secret

2. **Encapsulation (Server)**:
   - Using client's public key, generate a random shared secret
   - Encrypt the shared secret into a ciphertext
   - Only the holder of the private key can recover the shared secret

3. **Decapsulation (Client)**:
   - Using the private key, decrypt the ciphertext
   - Recover the identical shared secret

### AES-128-GCM (Advanced Encryption Standard - Galois/Counter Mode)

After key exchange, symmetric encryption is used for efficient bulk data transfer.

| Parameter | Value |
|-----------|-------|
| Key Size | 128 bits (16 bytes) |
| IV/Nonce Size | 96 bits (12 bytes) |
| Tag Size | 128 bits (16 bytes) |
| Mode | Authenticated Encryption with Associated Data (AEAD) |

### SHA-256 (Key Derivation)

The shared secret from ML-KEM is processed through SHA-256 to derive the AES key and IV:

```
input  = shared_secret (32 bytes) || "client_key" (10 bytes)
hash   = SHA-256(input)
key    = hash[0:15]    # First 16 bytes → AES-128 key
iv     = hash[16:27]   # Next 12 bytes → AES-GCM nonce
```

---

## Protocol Specification

### Message Format

All messages follow this structure:

```
┌──────────────┬────────────┬────────────┬─────────────────────┐
│  msg_type    │  len_high  │  len_low   │      payload        │
│   1 byte     │   1 byte   │   1 byte   │    len bytes        │
└──────────────┴────────────┴────────────┴─────────────────────┘
```

### Message Types

| Type | Value | Direction | Payload | Description |
|------|-------|-----------|---------|-------------|
| CLIENT_HELLO | 0x01 | C→S | 32 bytes random | Initiates handshake |
| SERVER_HELLO | 0x02 | S→C | 32 bytes random | Server acknowledgment |
| KEY_EXCHANGE | 0x03 | C→S | 800 bytes ML-KEM public key | Client's PQ public key |
| KEY_EXCHANGE | 0x03 | S→C | 768 bytes ciphertext | Encapsulated shared secret |
| FINISHED | 0x05 | C→S | Encrypted "CLIENT_FINISHED" + tag | Handshake verification |
| FINISHED | 0x05 | S→C | Encrypted "SERVER_FINISHED" + tag | Handshake verification |
| ENCRYPTED_DATA | 0x04 | C↔S | IV + ciphertext + tag | Application data |

### Encrypted Data Format

```
┌──────────────┬─────────────────────┬──────────────┐
│     IV       │     Ciphertext      │     Tag      │
│   12 bytes   │     N bytes         │   16 bytes   │
└──────────────┴─────────────────────┴──────────────┘
```

---

## Directory Structure

```
Constraint_Env_Sim/
├── boot/                           # Embedded client code
│   ├── main.c                      # PQC-DTLS client implementation
│   ├── Makefile                    # LiteX build system integration
│   ├── linker.ld                   # Memory layout for RISC-V
│   ├── crt0.o                      # C runtime startup
│   ├── boot.bin                    # Compiled binary (output)
│   ├── boot.elf                    # ELF executable (output)
│   │
│   ├── server/                     # Linux server code
│   │   ├── pqc_server.c            # PQC-DTLS server implementation
│   │   ├── Makefile                # Server build system
│   │   ├── user_settings.h         # wolfSSL configuration
│   │   └── build/                  # Compiled server (output)
│   │       └── pqc_server
│   │
│   ├── wolfssl/                    # wolfSSL headers
│   │   ├── ssl.h
│   │   ├── wolfcrypt/              # wolfCrypt headers
│   │   │   ├── settings.h
│   │   │   ├── wc_mlkem.h          # ML-KEM API
│   │   │   ├── aes.h               # AES API
│   │   │   ├── sha256.h            # SHA-256 API
│   │   │   ├── random.h            # RNG API
│   │   │   └── ...
│   │   └── ...
│   │
│   ├── wolfcrypt/                  # wolfCrypt source files
│   │   └── src/
│   │       ├── wc_mlkem.c          # ML-KEM implementation
│   │       ├── wc_mlkem_poly.c     # ML-KEM polynomial operations
│   │       ├── aes.c               # AES implementation
│   │       ├── sha256.c            # SHA-256 implementation
│   │       ├── sha3.c              # SHA-3/SHAKE (for ML-KEM)
│   │       ├── random.c            # RNG implementation
│   │       └── ... (104 source files)
│   │
│   └── src/                        # wolfSSL TLS source (optional)
│       ├── ssl.c
│       ├── tls13.c
│       └── ...
│
├── build/                          # LiteX build output
│   └── sim/
│       └── software/
│           ├── include/generated/  # Auto-generated headers
│           │   ├── csr.h           # CSR definitions
│           │   └── variables.mak   # Build variables
│           └── libliteeth/         # Ethernet library
│
├── litex/                          # LiteX framework
├── liteeth/                        # LiteETH Ethernet core
├── migen/                          # Migen HDL library
└── pythondata-cpu-vexriscv/        # VexRiscv CPU core
```

---

## Client Implementation (RISC-V)

### File: `boot/main.c`

The client runs on bare-metal RISC-V and initiates the PQC-DTLS handshake.

#### Key Components

**1. Network Configuration**
```c
#define CLIENT_IP_1     192
#define CLIENT_IP_2     168
#define CLIENT_IP_3     1
#define CLIENT_IP_4     50

#define SERVER_IP_1     192
#define SERVER_IP_2     168
#define SERVER_IP_3     1
#define SERVER_IP_4     100

#define CLIENT_PORT     22222
#define SERVER_PORT     11111
```

**2. LiteETH Integration**
```c
/* Initialize Ethernet */
eth_init();
udp_start(client_mac, client_ip);
udp_set_callback(udp_rx_callback);

/* ARP resolution */
udp_arp_resolve(server_ip);

/* Send/Receive */
uint8_t *txbuf = udp_get_tx_buffer();
udp_send(CLIENT_PORT, SERVER_PORT, length);
udp_service();  /* Poll for incoming packets */
```

**3. Custom RNG (Embedded)**
```c
/* Simple PRNG for demonstration - NOT cryptographically secure! */
int CustomRngGenerateBlock(unsigned char *output, unsigned int sz) {
    static unsigned int seed = 0xDEADBEEF;
    for (unsigned int i = 0; i < sz; i++) {
        seed = seed * 1103515245 + 12345;
        output[i] = (unsigned char)(seed >> 16);
    }
    return 0;
}
```

> ⚠️ **Warning**: Production systems should use a hardware random number generator (TRNG).

**4. ML-KEM Key Exchange**
```c
/* Generate key pair */
MlKemKey *key = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);
wc_MlKemKey_MakeKey(key, &rng);

/* Export public key */
uint8_t pub_key[WC_ML_KEM_512_PUBLIC_KEY_SIZE];  // 800 bytes
wc_MlKemKey_EncodePublicKey(key, pub_key, sizeof(pub_key));

/* Decapsulate server's ciphertext */
wc_MlKemKey_Decapsulate(key, shared_secret, ciphertext, ct_len);
```

**5. AES-GCM Encryption**
```c
Aes aes;
wc_AesGcmSetKey(&aes, client_key, 16);
wc_AesGcmEncrypt(&aes, ciphertext, plaintext, len,
                  iv, 12, tag, 16, NULL, 0);
```

### Client Makefile

```makefile
BUILD_DIR?=../build/

include $(BUILD_DIR)/software/include/generated/variables.mak
include $(SOC_DIRECTORY)/software/common.mak

SRCS += $(wildcard wolfcrypt/src/*.c)
SRCS += $(wildcard src/*.c)

OBJECTS  = crt0.o main.o
OBJECTS += $(SRCS:.c=.o)

CFLAGS += -I./wolfssl -I./wolfssl/wolfcrypt -I.
CFLAGS += -DWOLFSSL_USER_SETTINGS
CFLAGS += -DWOLFSSL_SMALL_STACK
CFLAGS += -DWOLFSSL_STATIC_MEMORY

boot.elf: $(OBJECTS)
    $(CC) $(LDFLAGS) -T linker.ld -N -o $@ \
        $(OBJECTS) \
        -L$(BUILD_DIR)/software/libliteeth \
        -lliteeth
```

---

## Server Implementation (Linux)

### File: `boot/server/pqc_server.c`

The server runs on the Linux host and responds to client connections.

#### Key Components

**1. Stub Functions for wolfCrypt Compatibility**

Since the wolfCrypt sources are compiled with embedded settings, we provide stub implementations:

```c
/* CA lookup stubs - not used in this demo */
void* GetCA(void* cm, const unsigned char* hash) {
    return NULL;
}

void* GetCAByName(void* cm, const unsigned char* hash) {
    return NULL;
}

/* RNG using /dev/urandom */
int CustomRngGenerateBlock(unsigned char* output, unsigned int sz) {
    FILE* f = fopen("/dev/urandom", "rb");
    if (f == NULL) {
        /* Fallback PRNG */
        static unsigned int seed = 0;
        if (seed == 0) seed = (unsigned int)time(NULL);
        for (unsigned int i = 0; i < sz; i++) {
            seed = seed * 1103515245 + 12345;
            output[i] = (unsigned char)(seed >> 16);
        }
        return 0;
    }
    size_t ret = fread(output, 1, sz, f);
    fclose(f);
    return (ret == sz) ? 0 : -1;
}
```

**2. UDP Socket Setup**
```c
sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
setsockopt(sock_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

struct sockaddr_in server_addr = {
    .sin_family = AF_INET,
    .sin_port = htons(11111),
    .sin_addr.s_addr = INADDR_ANY  /* Bind to all interfaces */
};
bind(sock_fd, (struct sockaddr*)&server_addr, sizeof(server_addr));
```

**3. ML-KEM Encapsulation**
```c
/* Decode client's public key */
MlKemKey *kem_key = wc_MlKemKey_New(WC_ML_KEM_512, NULL, INVALID_DEVID);
wc_MlKemKey_DecodePublicKey(kem_key, client_pubkey, len);

/* Encapsulate - creates ciphertext and shared secret */
uint8_t ciphertext[WC_ML_KEM_512_CIPHER_TEXT_SIZE];  // 768 bytes
wc_MlKemKey_Encapsulate(kem_key, ciphertext, shared_secret, &rng);
```

**4. Key Derivation (Must Match Client)**
```c
void derive_keys(const uint8_t *ss) {
    wc_Sha256 sha;
    uint8_t hash[32];

    wc_InitSha256(&sha);
    wc_Sha256Update(&sha, ss, 32);
    wc_Sha256Update(&sha, "client_key", 10);
    wc_Sha256Final(&sha, hash);

    memcpy(server_key, hash, 16);      // AES key
    memcpy(server_iv, hash + 16, 12);  // AES IV
}
```

### Server Makefile

```makefile
CC      ?= gcc
CFLAGS  := -Wall -Wextra -O2 -std=gnu11

# Paths relative to server/ directory
BOOT_DIR        := ..
WOLFSSL_DIR     := $(BOOT_DIR)/wolfssl
WOLFCRYPT_DIR   := $(BOOT_DIR)/wolfcrypt

# Include paths
INC_FLAGS := -iquote. -iquote$(BOOT_DIR) -iquote$(WOLFSSL_DIR)
INC_FLAGS += -I. -I$(BOOT_DIR) -I$(WOLFSSL_DIR)

# wolfCrypt sources
WOLFCRYPT_SRCS := $(wildcard $(WOLFCRYPT_DIR)/src/*.c)
WOLFCRYPT_OBJS := $(patsubst $(WOLFCRYPT_DIR)/src/%.c,build/wc_%.o,$(WOLFCRYPT_SRCS))

CFLAGS += $(INC_FLAGS) -DWOLFSSL_USER_SETTINGS
LDFLAGS += -lpthread -lm

build/pqc_server: build/pqc_server.o $(WOLFCRYPT_OBJS)
    $(CC) $^ -o $@ $(LDFLAGS)
```

---

## Build Instructions

### Prerequisites

- **Linux Host**: Ubuntu 20.04+ or similar
- **RISC-V Toolchain**: `riscv64-unknown-elf-gcc` or `riscv32-unknown-elf-gcc`
- **LiteX**: Installed and configured with simulation support
- **Python 3.8+**: For LiteX scripts

### Building the Client (RISC-V)

```bash
# Navigate to boot directory
cd Constraint_Env_Sim/boot

# Build the client
make clean
make

# Output: boot.bin, boot.elf
```

### Building the Server (Linux)

```bash
# Navigate to server directory
cd Constraint_Env_Sim/boot/server

# Build the server
make clean
make

# Output: build/pqc_server
```

### Build Verification

```bash
# Server should show ML-KEM demo working
make demo

# Expected output:
# ========================================
#   Standalone ML-KEM-512 Demo
# ========================================
# [Alice] Generating key pair...
# [Alice] KeyGen OK
# [Bob] Encapsulating...
# [Bob] Encapsulation OK
# [Alice] Decapsulating...
# [Alice] Decapsulation OK
# *** SUCCESS: Shared secrets match! ***
```

---

## Network Configuration

### TAP Interface Setup (for LiteX Simulation)

```bash
# Create TAP interface
sudo ip tuntap add dev tap0 mode tap user $USER

# Assign IP address (this is the server's address)
sudo ip addr add 192.168.1.100/24 dev tap0

# Bring interface up
sudo ip link set tap0 up

# Verify
ip addr show tap0
```

### Network Topology

```
┌─────────────────┐                    ┌─────────────────┐
│   Linux Host    │                    │  LiteX Client   │
│                 │                    │                 │
│  192.168.1.100  │◄──── tap0 ────────►│  192.168.1.50   │
│     :11111      │    (virtual)       │     :22222      │
│   (Server)      │                    │   (Client)      │
└─────────────────┘                    └─────────────────┘
```

### IP Address Configuration

| Entity | IP Address | Port | Role |
|--------|------------|------|------|
| Server (Linux) | 192.168.1.100 | 11111 | Listens for connections |
| Client (RISC-V) | 192.168.1.50 | 22222 | Initiates connection |

### Firewall Rules (if needed)

```bash
# Allow UDP traffic on port 11111
sudo ufw allow 11111/udp

# Or using iptables
sudo iptables -A INPUT -p udp --dport 11111 -j ACCEPT
```

---

## Running the Demo

### Step 1: Start the Server

```bash
cd Constraint_Env_Sim/boot/server
make run
```

Expected output:
```
=========================================
  Starting PQC-DTLS Server
  Server: 192.168.1.100:11111
  Press Ctrl+C to stop
=========================================

========================================
  PQC-DTLS Server (Linux UDP)
  Using ML-KEM-512 + AES-GCM
========================================

[Init] Initializing RNG...
[Init] RNG initialized

========================================
  Standalone ML-KEM-512 Demo
========================================
[Alice] Generating key pair...
*** SUCCESS: Shared secrets match! ***

[Init] Initializing network...
[Server] Creating UDP socket...
[Server] Listening on port 11111

========================================
  PQC-DTLS Server Ready
  Waiting for client connection...
========================================
```

### Step 2: Start the LiteX Simulation

```bash
cd Constraint_Env_Sim
python3 sim.py --with-ethernet --ethernet-tap tap0
```

### Step 3: Load Client Firmware

The client firmware (`boot.bin`) is automatically loaded by LiteX, or you can load it manually via the serial console.

### Step 4: Observe Handshake

**Server Output:**
```
[2024-12-05 13:45:01] [RX] Type=0x01 Len=32 from 192.168.1.50:22222
[Server] Received ClientHello
ClientRandom: a1b2c3d4e5f6... (32 bytes)
[Server] Sending ServerHello...

[2024-12-05 13:45:01] [RX] Type=0x03 Len=800 from 192.168.1.50:22222
[Server] Received client public key
[Server] Performing ML-KEM encapsulation...
[Server] ML-KEM encapsulation OK
Shared Secret: 7e6c2b944cfc26f3... (32 bytes)
[Server] Sending ciphertext to client...

[2024-12-05 13:45:02] [RX] Type=0x05 Len=31 from 192.168.1.50:22222
[Server] Received client Finished message
[Server] Decrypted Finished: "CLIENT_FINISHED"
[Server] Sending server Finished...
[Server] Handshake complete!

[2024-12-05 13:45:02] [RX] Type=0x04 Len=62 from 192.168.1.50:22222
[Server] Received encrypted data
[Server] Decrypted message: "Hello from RISC-V PQC-DTLS Client!"
```

**Client Output (via UART):**
```
========================================
  PQC-DTLS Client (LiteETH UDP)
========================================

RNG initialized
[NET] Initializing LiteETH...
[NET] Client IP: 192.168.1.50:22222
[NET] Server IP: 192.168.1.100:11111
[NET] ARP resolution successful

[Client] Starting handshake...
[Client] Sending ClientHello...
[Client] Generating ML-KEM key pair...
[Client] ML-KEM KeyGen OK
[Client] Sent public key to server
[Client] Waiting for server response...
[Client] Decapsulating shared secret...
Shared Secret: 7e6c2b944cfc26f3... (32 bytes)

[Client] Sending Finished message...
[Client] Waiting for server Finished...
[Client] Received server Finished

========================================
  Handshake Complete!
========================================

[Client] Sending encrypted data: "Hello from RISC-V PQC-DTLS Client!"

*** PQC-DTLS Communication Successful! ***
```

---

## Protocol Flow Diagram

```
    Client (RISC-V)                              Server (Linux)
         │                                            │
         │  ──────── CLIENT_HELLO (random) ────────►  │
         │                                            │
         │  ◄─────── SERVER_HELLO (random) ────────── │
         │                                            │
         │          ┌──────────────────┐              │
         │          │ ML-KEM KeyGen    │              │
         │          │ (public, private)│              │
         │          └──────────────────┘              │
         │                                            │
         │  ──────── KEY_EXCHANGE (pubkey) ────────►  │
         │                    │                       │
         │                    │    ┌─────────────────────────────┐
         │                    │    │ ML-KEM Encapsulate          │
         │                    │    │ (pubkey) → (ct, shared_sec) │
         │                    │    └─────────────────────────────┘
         │                    │                       │
         │  ◄─────── KEY_EXCHANGE (ciphertext) ────── │
         │                                            │
         │  ┌─────────────────────────────┐           │
         │  │ ML-KEM Decapsulate          │           │
         │  │ (ct, private) → shared_sec  │           │
         │  └─────────────────────────────┘           │
         │                                            │
         │  ┌─────────────────────────────┐    ┌─────────────────────────────┐
         │  │ Key Derivation              │    │ Key Derivation              │
         │  │ SHA256(ss || "client_key")  │    │ SHA256(ss || "client_key")  │
         │  │ → AES key + IV              │    │ → AES key + IV              │
         │  └─────────────────────────────┘    └─────────────────────────────┘
         │                                            │
         │  ──────── FINISHED (encrypted) ─────────►  │
         │                                            │
         │  ◄─────── FINISHED (encrypted) ─────────── │
         │                                            │
         ╞═══════════ HANDSHAKE COMPLETE ════════════╡
         │                                            │
         │  ════════ ENCRYPTED_DATA ═══════════════►  │
         │  ◄═══════ ENCRYPTED_DATA ═══════════════   │
         │                                            │
```

---

## Security Considerations

### Current Implementation Limitations

| Aspect | Current Status | Production Recommendation |
|--------|----------------|---------------------------|
| **RNG (Client)** | ⚠️ Software PRNG | Use hardware TRNG |
| **RNG (Server)** | ✅ /dev/urandom | Acceptable for most uses |
| **Key Storage** | ⚠️ RAM only | Use secure element/HSM |
| **Replay Protection** | ❌ None | Add sequence numbers |
| **Session Resumption** | ❌ None | Implement session tickets |
| **Certificate Auth** | ❌ None | Add X.509 certificates |
| **Perfect Forward Secrecy** | ✅ New keys per session | Already implemented |

### Quantum Security Analysis

| Attack Type | Classical Computer | Quantum Computer |
|-------------|-------------------|------------------|
| Key Recovery (ML-KEM-512) | 2^143 operations | 2^107 operations |
| Brute Force (AES-128) | 2^128 operations | 2^64 operations (Grover) |

> **Note**: ML-KEM-512 provides NIST Security Level 1, equivalent to AES-128. For higher security, use ML-KEM-768 (Level 3) or ML-KEM-1024 (Level 5).

### Recommended Improvements for Production

1. **Hardware RNG**: Use the RISC-V platform's TRNG if available
2. **Secure Boot**: Verify firmware integrity before execution
3. **Memory Protection**: Clear sensitive data after use
4. **Anti-Replay**: Implement timestamp/sequence number verification
5. **Mutual Authentication**: Add server authentication using certificates

---

## Troubleshooting

### Build Errors

**Error: `user_settings.h not found`**
```bash
# Ensure you're using the correct include paths
make show-config

# The -iquote flag should prioritize local directories
```

**Error: `undefined reference to CustomRngGenerateBlock`**
```bash
# The server provides stub implementations
# Make sure pqc_server.c contains the CustomRngGenerateBlock function
```

**Error: `unknown type name 'wc_Shake'`**
```bash
# ML-KEM requires SHA-3/SHAKE
# Ensure user_settings.h contains:
#   #define WOLFSSL_SHA3
#   #define WOLFSSL_SHAKE128
#   #define WOLFSSL_SHAKE256
```

### Network Errors

**Error: `bind: Cannot assign requested address`**
```bash
# The IP address doesn't exist on your system
# Either:
# 1. Create the TAP interface with that IP
sudo ip addr add 192.168.1.100/24 dev tap0

# 2. Or modify pqc_server.c to use 0.0.0.0
#define SERVER_IP "0.0.0.0"
```

**Error: `ARP resolution failed`**
```bash
# Server is not reachable from client
# Check:
# 1. TAP interface is up
ip link show tap0

# 2. IP forwarding (if needed)
sudo sysctl net.ipv4.ip_forward=1

# 3. Server is actually running
netstat -ulnp | grep 11111
```

### Runtime Errors

**Error: `ML-KEM KeyGen failed: -173`**
```bash
# RNG issue - ensure random source is available
# On server: Check /dev/urandom exists
# On client: CustomRngGenerateBlock is defined
```

**Error: `Decryption failed: -180`**
```bash
# Key mismatch - shared secrets don't match
# Verify:
# 1. Both sides use same ML-KEM parameter (512)
# 2. Key derivation function is identical
# 3. No packet corruption
```

---

## References

### Standards and Specifications

1. **FIPS 203**: Module-Lattice-Based Key-Encapsulation Mechanism Standard (ML-KEM)
   - https://csrc.nist.gov/publications/detail/fips/203/final

2. **NIST Post-Quantum Cryptography**: 
   - https://csrc.nist.gov/projects/post-quantum-cryptography

3. **AES-GCM (NIST SP 800-38D)**:
   - https://csrc.nist.gov/publications/detail/sp/800-38d/final

### Libraries and Tools

4. **wolfSSL Documentation**:
   - https://www.wolfssl.com/documentation/manuals/wolfssl/

5. **wolfSSL ML-KEM/Kyber**:
   - https://www.wolfssl.com/documentation/manuals/wolfssl/chapter07.html

6. **LiteX SoC Builder**:
   - https://github.com/enjoy-digital/litex

7. **LiteETH Ethernet Core**:
   - https://github.com/enjoy-digital/liteeth

8. **VexRiscv CPU**:
   - https://github.com/SpinalHDL/VexRiscv

### Additional Reading

9. **"Post-Quantum Cryptography" (Bernstein & Lange)**
10. **"A Graduate Course in Applied Cryptography" (Boneh & Shoup)**

---

## License

This project is provided for educational and research purposes. See individual component licenses:

- **wolfSSL**: GPLv2 or Commercial License
- **LiteX**: BSD License
- **VexRiscv**: MIT License

---

## Authors and Acknowledgments

- Implementation based on wolfSSL's ML-KEM support
- LiteX framework by Enjoy-Digital
- VexRiscv CPU by SpinalHDL team

---

## Version History

| Version | Date | Changes |
|---------|------|---------|
| 1.0.0 | 2024-12-05 | Initial release with ML-KEM-512 + AES-GCM |
