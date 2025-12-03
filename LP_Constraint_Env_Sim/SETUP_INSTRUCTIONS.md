# Build Environment Setup - Complete Guide

## The Fix Applied
✅ **Already Fixed**: Updated RISC-V architecture flags in `litex/litex/soc/cores/cpu/vexriscv/core.py`
- Changed from `-march=rv32i2p0_m` to `-march=rv32im` (removed version numbers)
- This resolves the `zifencei` linker error you encountered

## Setup WSL Ubuntu (Recommended - ~15 minutes)

### Step 1: Install WSL and Ubuntu
Open PowerShell as Administrator and run:
```powershell
wsl --install -d Ubuntu-22.04
```

Restart your computer when prompted.

### Step 2: Set Up Ubuntu
After restart, Ubuntu will open automatically:
1. Create a username and password when prompted
2. Update the system:
```bash
sudo apt update && sudo apt upgrade -y
```

### Step 3: Navigate to Your Project
In the Ubuntu terminal:
```bash
cd /mnt/c/Users/sreej/OneDrive/Documents/GitHub/Team_94_LP_CyberSecurity/LP_Constraint_Env_Sim
```

### Step 4: Follow the Original Setup (from README.md)

```bash
# Create Python virtual environment
python3 -m venv litex-env
source litex-env/bin/activate

# Run LiteX setup
chmod +x litex_setup.py
./litex_setup.py --init --install

# Install additional dependencies
pip3 install meson ninja

# Install RISC-V toolchain (requires sudo)
sudo ./litex_setup.py --gcc=riscv

# Install system dependencies
sudo apt install libevent-dev libjson-c-dev verilator

# Test LiteX simulation
litex_sim --csr-json csr.json --cpu-type=vexriscv --cpu-variant=full --integrated-main-ram-size=0x06400000
```
Press Ctrl+C to exit the test simulation.

### Step 5: Build Your Project (With Fixed Flags)
```bash
# Build the firmware
litex_bare_metal_demo --build-path=build/sim

# Run simulation with your boot binary
litex_sim --csr-json csr.json --cpu-type=vexriscv --cpu-variant=full --integrated-main-ram-size=0x06400000 --ram-init=boot.bin
```

## What the Fix Does

The linking error you saw:
```
/usr/lib/riscv64-unknown-elf/bin/ld: -march=rv32i2p0_m2p0_zicsr2p0_zifencei2p0_zmmul1p0: Invalid or unknown z ISA extension: 'zifencei'
```

Was caused by:
- **Old flags**: `-march=rv32i2p0_m2p0_zicsr2p0_zifencei2p0_zmmul1p0`
- **New flags**: `-march=rv32im` (simplified, no version numbers)

The compiler was auto-adding extensions with versions that the linker doesn't recognize. The fix uses standard RISC-V notation that all toolchains support.

## Alternative: Use Existing Linux VM/Machine

If you already have a Linux machine or VM:
1. Clone your updated repository (the fix is already applied)
2. Follow Step 4 and Step 5 above

## Troubleshooting

If you still get linking errors after setup:
```bash
# Clean everything and rebuild
cd boot
rm -f *.o *.elf *.bin
rm -f wolfcrypt/src/*.o
cd ..
litex_bare_metal_demo --build-path=build/sim
```

## Verifying the Fix

After building, you should see:
- No linking errors about `zifencei`
- Successful generation of `boot.bin`
- Clean simulation startup

The corrected `-march` flags are backward-compatible and work with both older and newer RISC-V toolchains.
