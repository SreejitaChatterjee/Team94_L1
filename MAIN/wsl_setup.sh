#!/bin/bash
# WSL Ubuntu Setup Script for LiteX + RISC-V Development
# Run this script in WSL Ubuntu terminal

set -e  # Exit on error

echo "========================================"
echo "LiteX + RISC-V Build Environment Setup"
echo "========================================"
echo ""

# Navigate to project directory
PROJECT_DIR="/mnt/c/Users/sreej/OneDrive/Documents/GitHub/Team_94_LP_CyberSecurity/LP_Constraint_Env_Sim"
cd "$PROJECT_DIR"
echo "Working in: $(pwd)"
echo ""

# Step 1: Update and install system dependencies
echo "[1/7] Installing system dependencies..."
sudo apt-get update
sudo apt-get install -y \
    python3-pip \
    python3-venv \
    python3-dev \
    build-essential \
    git \
    wget \
    curl \
    libevent-dev \
    libjson-c-dev \
    verilator
echo "System dependencies installed ✓"
echo ""

# Step 2: Create Python virtual environment
echo "[2/7] Creating Python virtual environment..."
python3 -m venv litex-env
echo "Virtual environment created ✓"
echo ""

# Step 3: Activate virtual environment and upgrade pip
echo "[3/7] Activating virtual environment..."
source litex-env/bin/activate
pip install --upgrade pip
echo "Virtual environment activated ✓"
echo ""

# Step 4: Run LiteX setup
echo "[4/7] Running LiteX setup (this may take a while)..."
chmod +x litex_setup.py
./litex_setup.py --init --install
echo "LiteX setup complete ✓"
echo ""

# Step 5: Install additional Python dependencies
echo "[5/7] Installing additional Python dependencies..."
pip install meson ninja
echo "Additional dependencies installed ✓"
echo ""

# Step 6: Install RISC-V toolchain
echo "[6/7] Installing RISC-V toolchain (requires sudo, may take 10-15 minutes)..."
sudo ./litex_setup.py --gcc=riscv
echo "RISC-V toolchain installed ✓"
echo ""

# Step 7: Clean and build the project
echo "[7/7] Cleaning old build artifacts and building project..."
cd boot
rm -f *.o *.elf *.bin
rm -f wolfcrypt/src/*.o
cd ..

# Build the project
litex_bare_metal_demo --build-path=build/sim
echo ""
echo "========================================"
echo "Build complete! ✓"
echo "========================================"
echo ""
echo "boot.bin has been generated with the FIXED -march flags"
echo "(changed from rv32i2p0_m to rv32im to fix zifencei linker errors)"
echo ""
echo "To run the simulation:"
echo "  litex_sim --csr-json csr.json --cpu-type=vexriscv --cpu-variant=full \\"
echo "    --integrated-main-ram-size=0x06400000 --ram-init=boot.bin"
echo ""
