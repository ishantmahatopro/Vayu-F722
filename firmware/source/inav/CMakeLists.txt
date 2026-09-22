set(TARGET VAYUF7)

add_definitions(-DSTM32F7)
add_definitions(-DSTM32F722xx)
add_definitions(-DTARGET_VAYUF7)
add_definitions(-DTARGET_BOARD_IDENTIFIER=\"VAYUF7\")

set(TARGET_SRC
    target.c
)

set(TARGET_DEFINITIONS
    USE_ACC
    USE_GYRO
    USE_BARO
    USE_FLASH
    USE_OSD
    USE_MAG
    USE_PWM_OUTPUT
    USE_DSHOT
)

list(APPEND TARGET_DEFINITIONS
    USE_SPI
    USE_SPI_DEVICE_1
    USE_SPI_DEVICE_2
    USE_SPI_DEVICE_3
    USE_I2C
    USE_I2C_DEVICE_1
)

# This file is intentionally kept as a lightweight target scaffold for the
# upstream iNav tree. The real firmware validation must be executed in the
# matching iNav repository using the actual target build flow.
