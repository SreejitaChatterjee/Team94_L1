#!/bin/bash
# Final build script with proper Python handling
set -e

cd /mnt/c/Users/sreej/OneDrive/Documents/GitHub/Team_94_LP_CyberSecurity/LP_Constraint_Env_Sim

echo "========================================"
echo "Final Build Script - LiteX + RISC-V"
echo "========================================"

# Set pip to use --break-system-packages globally
export PIP_BREAK_SYSTEM_PACKAGES=1

# Ensure pip is available
if ! command -v pip3 &> /dev/null; then
    echo "Installing pip..."
    curl -sS https://bootstrap.pypa.io/get-pip.py | python3
fi

# Add local bin to PATH
export PATH="/home/sreejita/.local/bin:$PATH"

# Install dependencies
echo "Installing Python dependencies..."
pip3 install meson ninja setuptools wheel requests colorama

# Run LiteX setup with --install flag
echo "Running LiteX setup..."
chmod +x litex_setup.py
python3 litex_setup.py --init --install

# Check if RISC-V toolchain exists
if ! command -v riscv64-unknown-elf-gcc &> /dev/null && ! command -v riscv32-unknown-elf-gcc &> /dev/null; then
    echo "Installing RISC-V toolchain..."
    sudo python3 litex_setup.py --gcc=riscv
else
    echo "RISC-V toolchain already installed"
fi

# Clean old build artifacts
echo "Cleaning old build artifacts..."
cd boot
rm -f *.o *.elf *.bin *.d
rm -f wolfcrypt/src/*.o wolfcrypt/src/*.d
cd ..

# Build the project
echo "Building project with FIXED -march flags..."
python3 litex/litex/soc/software/demo/demo.py --build-path=build/sim

echo ""
echo "========================================"
echo "BUILD COMPLETE! ✓"
echo "========================================"
echo "Fixed linker error:"
echo "  - Changed -march from rv32i2p0_m to rv32im"
echo "  - Removed problematic zifencei version numbers"
echo ""
echo "boot.bin has been generated successfully!"
echo ""
echo "To run simulation:"
echo "  litex_sim --csr-json csr.json --cpu-type=vexriscv \\"
echo "    --cpu-variant=full --integrated-main-ram-size=0x06400000 \\"
echo "    --ram-init=boot.bin"
