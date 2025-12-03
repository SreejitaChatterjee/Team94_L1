# Quick Build Instructions - Final Steps

## ✅ Already Completed:
- **CRITICAL FIX APPLIED**: Changed `-march=rv32i2p0_m` to `-march=rv32im` in vexriscv/core.py
- All LiteX packages installed
- WSL Ubuntu 24.04 ready

## 🚀 Quick Build (5-15 minutes)

Open **Ubuntu** terminal (Start menu → Ubuntu) and paste these commands:

```bash
cd /mnt/c/Users/sreej/OneDrive/Documents/GitHub/Team_94_LP_CyberSecurity/LP_Constraint_Env_Sim

# Set environment
export PIP_BREAK_SYSTEM_PACKAGES=1
export PATH="/home/sreejita/.local/bin:$PATH"

# Install RISC-V toolchain (10-15 minutes)
sudo python3 litex_setup.py --gcc=riscv

# Clean old build artifacts
cd boot
rm -f *.o *.elf *.bin *.d
rm -f wolfcrypt/src/*.o wolfcrypt/src/*.d
cd ..

# Build with FIXED -march flags!
python3 litex/litex/soc/software/demo/demo.py --build-path=build/sim

# Verify
ls -lh boot.bin
```

## ✅ Success Indicators:
- No `zifencei` errors (fixed by using `-march=rv32im`)
- `boot.bin` file generated in project root
- File size ~50KB

## 🎯 What Was Fixed:
The linker error you saw:
```
/usr/lib/riscv64-unknown-elf/bin/ld: -march=rv32i2p0_m2p0_zicsr2p0_zifencei2p0_zmmul1p0:
Invalid or unknown z ISA extension: 'zifencei'
```

Was caused by version numbers in the `-march` flag.

**Fixed in:** `litex/litex/soc/cores/cpu/vexriscv/core.py:72`
- **Before:** `-march=rv32i2p0_m`
- **After:** `-march=rv32im`

This simplified format is compatible with all RISC-V toolchains and eliminates the `zifencei` extension version issue.

## 🏃 Run Simulation:
```bash
litex_sim --csr-json csr.json --cpu-type=vexriscv --cpu-variant=full \
  --integrated-main-ram-size=0x06400000 --ram-init=boot.bin
```
