#include "target.h"

void targetInit(void)
{
    // This scaffold intentionally leaves the actual upstream target runtime
    // initialization to the corresponding iNav build tree.
    // The Vayu F7 board uses the standard STM32F722 peripheral set with
    // SPI1 / SPI2 / SPI3, I2C1, and timer-backed motor outputs.

    // Example setup pattern only; final values must be validated against the
    // exact iNav target configuration used by the upstream project.
    initBoardHardware();
}

void targetConfigureMotorOutputs(void)
{
    // Motor mapping for the Vayu F7 design.
    // The actual output channels are assigned in the upstream target definition.
    // The board is intended to support 4 standard FPV motor outputs with DShot.

    motorConfig[0].io = MOTOR_OUTPUT_1;
    motorConfig[1].io = MOTOR_OUTPUT_2;
    motorConfig[2].io = MOTOR_OUTPUT_3;
    motorConfig[3].io = MOTOR_OUTPUT_4;
}
