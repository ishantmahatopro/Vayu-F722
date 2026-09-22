#pragma once

#define TARGET_BOARD_IDENTIFIER "VAYUF7"
#define USE_TARGET_VAYUF7
#define USE_ACC
#define USE_GYRO
#define USE_BARO
#define USE_FLASH
#define USE_OSD
#define USE_MAG
#define USE_PWM_OUTPUT
#define USE_DSHOT

#define TARGET_MCU STM32F722xx

#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2
#define USE_SPI_DEVICE_3
#define USE_I2C
#define USE_I2C_DEVICE_1

#define USE_UART1
#define USE_UART2
#define USE_UART3
#define USE_UART4
#define USE_UART5
#define USE_UART6

/* Sensor mapping for the Vayu F7 board */
#define ACC_SPI_INSTANCE SPI1
#define GYRO_SPI_INSTANCE SPI1
#define OSD_SPI_INSTANCE SPI2
#define FLASH_SPI_INSTANCE SPI3
#define BARO_I2C_INSTANCE I2C1

/* GPIO mapping: realistic board assignments for the Vayu F7 hardware */
#define ACC_CS_PIN GPIO_PIN_4
#define GYRO_CS_PIN GPIO_PIN_4
#define FLASH_CS_PIN GPIO_PIN_15
#define OSD_CS_PIN GPIO_PIN_12

#define SPI1_SCK_PIN GPIO_PIN_5
#define SPI1_MISO_PIN GPIO_PIN_6
#define SPI1_MOSI_PIN GPIO_PIN_7

#define SPI2_SCK_PIN GPIO_PIN_13
#define SPI2_MISO_PIN GPIO_PIN_14
#define SPI2_MOSI_PIN GPIO_PIN_15

#define SPI3_SCK_PIN GPIO_PIN_3
#define SPI3_MISO_PIN GPIO_PIN_4
#define SPI3_MOSI_PIN GPIO_PIN_5

#define I2C1_SCL_PIN GPIO_PIN_8
#define I2C1_SDA_PIN GPIO_PIN_9

#define UART1_TX_PIN GPIO_PIN_9
#define UART1_RX_PIN GPIO_PIN_10
#define UART2_TX_PIN GPIO_PIN_2
#define UART2_RX_PIN GPIO_PIN_3
#define UART3_TX_PIN GPIO_PIN_10
#define UART3_RX_PIN GPIO_PIN_11
#define UART4_TX_PIN GPIO_PIN_0
#define UART4_RX_PIN GPIO_PIN_1

#define MOTOR_OUTPUT_1 GPIO_PIN_8
#define MOTOR_OUTPUT_2 GPIO_PIN_9
#define MOTOR_OUTPUT_3 GPIO_PIN_10
#define MOTOR_OUTPUT_4 GPIO_PIN_11

void targetInit(void);
void targetConfigureMotorOutputs(void);

#ifndef __cplusplus
extern "C" {
#endif

extern void initBoardHardware(void);
extern void motorConfig;

#ifndef __cplusplus
}
#endif
