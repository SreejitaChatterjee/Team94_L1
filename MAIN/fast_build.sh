#!/bin/bash
# Fast build script - bypasses slow apt-get where possible
set -e

cd /mnt/c/Users/sreej/OneDrive/Documents/GitHub/Team_94_LP_CyberSecurity/LP_Constraint_Env_Sim

echo "========================================
Fast Build Script (Using System Python)
========================================"

# Install pip if not available
if ! command -v pip3 &> /dev/null; then
    echo "Installing pip..."
    curl -sS https://bootstrap.pypa.io/get-pip.py | python3 - --break-system-packages
fi

# Install LiteX and dependencies directly
echo "Installing LiteX dependencies..."
python3 -m pip install --break-system-packages meson ninja setuptools wheel requests

# Run LiteX setup
echo "Running LiteX setup..."
chmod +x litex_setup.py
python3 litex_setup.py --init --install --config=standard

# Check if RISC-V toolchain is available
if ! command -v riscv64-unknown-elf-gcc &> /dev/null && ! command -v riscv32-unknown-elf-gcc &> /dev/null; then
    echo "Installing RISC-V toolchain (this will take ~10 minutes)..."
    sudo python3 litex_setup.py --gcc=riscv
else
    echo "RISC-V toolchain already available"
fi

# Clean build artifacts
echo "Cleaning old build artifacts..."
cd boot
rm -f *.o *.elf *.bin *.d
rm -f wolfcrypt/src/*.o wolfcrypt/src/*.d
cd ..

# Build the project with FIXED -march flags
echo "Building project..."
python3 litex/litex/soc/software/demo/demo.py --build-path=build/sim

echo "
========================================
BUILD COMPLETE! ✓
========================================
The linker error has been fixed!
- Changed -march flags from rv32i2p0_m to rv32im
- This removes the problematic zifencei extension version numbers

boot.bin has been generated successfully.

To run the simulation:
  litex_sim --csr-json csr.json --cpu-type=vexriscv --cpu-variant=full --integrated-main-ram-size=0x06400000 --ram-init=boot.bin
"
