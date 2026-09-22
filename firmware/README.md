# Vayu F7 firmware targets

This directory contains the custom upstream target scaffolding for the Vayu F7 hardware.

The board is designed around an STM32F722RET6, a 3-axis gyro / accel sensor, a BMP388 barometer, a W25Q128 blackbox flash chip, and a standard FPV serial / video stack. The target files here are intentionally kept generic so they can be dropped into the upstream build trees for Betaflight and iNav without depending on a vendor-specific firmware package.

## Included targets

- `source/betaflight/config.h` — Betaflight target definition for a custom `VAYUF7` target.
- `source/inav/CMakeLists.txt` — iNav target registration
- `source/inav/target.c` — timer and output mapping
- `source/inav/target.h` — board identifier and peripheral map

## Hardware assumptions

The scaffold is aligned to the live Vayu F7 schematic and current design notes:

- MCU: STM32F722RET6
- Gyro / accel: ICM-42688-P on SPI1
- Barometer: BMP388 on I2C1
- OSD: AT7456E on SPI2
- Blackbox flash: W25Q128 on SPI3
- Motor outputs: 4 timer-backed outputs on TIM1/TIM2-style mappings
- UARTs: standard serial ports for RX / GPS / telemetry / VTX / debug

## Building upstream targets

### Betaflight

1. Clone the upstream Betaflight repository.
2. Install the required toolchain.
3. Copy `source/betaflight/config.h` into the relevant custom target directory in the Betaflight tree.
4. Build with the normal target generation flow for the board.
5. Flash the resulting firmware through USB DFU or SWD.

### iNav

1. Clone the upstream iNav repository.
2. Add the files in `source/inav/` into the matching target subdirectory.
3. Regenerate the target config and build via the normal iNav CMake flow.
4. Flash the compiled firmware using the standard method for the project.

## Notes

These files are a recovery scaffold for upstream firmware integration. They are not a complete factory firmware build, and they should be used as the starting point for final target validation inside the proper Betaflight / iNav upstream repos.
