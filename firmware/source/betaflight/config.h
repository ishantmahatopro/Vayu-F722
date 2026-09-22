#pragma once

#define TARGET_NAME "VAYUF7"
#define USE_TARGET_VAYUF7

#define MCU_STM32F722
#define TARGET_BOARD_IDENTIFIER "VAYUF7"

#define USE_ACC
#define USE_GYRO
#define USE_BARO
#define USE_FLASH
#define USE_OSD
#define USE_MAG
#define USE_RANGEFINDER

#define USE_ACC_SPI_ICM42688P
#define USE_GYRO_SPI_ICM42688P
#define USE_BARO_BMP388
#define USE_FLASH_W25Q128
#define USE_OSD_AT7456E

#define USE_UART1
#define USE_UART2
#define USE_UART3
#define USE_UART4
#define USE_UART5
#define USE_UART6

#define USE_SPI1
#define USE_SPI2
#define USE_SPI3
#define USE_I2C1

#define TARGET_RX_SPI_NONE

/* STM32F722RET6 pin mapping for the Vayu F7 board */
#define LED0_PIN PINC13
#define BEEPER_PIN PINB12
#define BIND_BUTTON_PIN PINB2
#define SDCARD_DETECT_PIN NONE

/* SPI1: ICM-42688-P */
#define SPI1_SCK_PIN PINA5
#define SPI1_MISO_PIN PINA6
#define SPI1_MOSI_PIN PINA7
#define SPI1_NSS_PIN PINA4

/* SPI2: AT7456E OSD */
#define SPI2_SCK_PIN PINB13
#define SPI2_MISO_PIN PINB14
#define SPI2_MOSI_PIN PINB15
#define SPI2_NSS_PIN PINB12

/* SPI3: W25Q128 blackbox flash */
#define SPI3_SCK_PIN PINB3
#define SPI3_MISO_PIN PINB4
#define SPI3_MOSI_PIN PINB5
#define SPI3_NSS_PIN PINA15

/* I2C1: BMP388 */
#define I2C1_SCL_PIN PINB8
#define I2C1_SDA_PIN PINB9

/* UART1: telemetry / RX */
#define UART1_TX_PIN PINA9
#define UART1_RX_PIN PINA10

/* UART2: GPS / serial RX */
#define UART2_TX_PIN PINA2
#define UART2_RX_PIN PINA3

/* UART3: ESC telemetry / external serial */
#define UART3_TX_PIN PINB10
#define UART3_RX_PIN PINB11

/* UART4: pads / RX / debug */
#define UART4_TX_PIN PINA0
#define UART4_RX_PIN PINA1

/* UART5: pads / additional serial */
#define UART5_TX_PIN PINC12
#define UART5_RX_PIN PIND2

/* UART6: extra serial / VTX or telemetry */
#define UART6_TX_PIN PINC6
#define UART6_RX_PIN PINC7

/* Motor outputs: timer-backed DShot-capable outputs */
#define MOTOR1_PIN PINA8
#define MOTOR2_PIN PINA9
#define MOTOR3_PIN PINA10
#define MOTOR4_PIN PINA11

#define MOTOR1_TIMER TIM1
#define MOTOR2_TIMER TIM1
#define MOTOR3_TIMER TIM1
#define MOTOR4_TIMER TIM1

#define MOTOR1_TIMER_CHNL 1
#define MOTOR2_TIMER_CHNL 2
#define MOTOR3_TIMER_CHNL 3
#define MOTOR4_TIMER_CHNL 4

#define ADC_CHANNEL_1_PIN PINA0
#define ADC_CHANNEL_2_PIN PINA1
#define ADC_CHANNEL_3_PIN PINA2
#define ADC_CHANNEL_4_PIN PINA3

#define DEFAULT_RX_TYPE RX_TYPE_SERIAL
#define SERIAL_PORT_COUNT 6

#define VTX_POWER_PIN PINB0
#define VTX_ENABLE_PIN PINB1

#define PINIO1_PIN NONE
#define PINIO2_PIN NONE

#define USE_DSHOT
#define USE_DSHOT_BITBANG

#define USE_ESC_SENSOR

#define USE_LED_STRIP
#define USE_OSD

#define USE_TINYGPS
#define USE_GPS
#define USE_GPS_PROTO_UBLOX

#define TARGET_HAS_BEEPER
#define TARGET_HAS_OSD
#define TARGET_HAS_FLASH

#define DEFAULT_FEATURES FEATURE_TX_PROF_SEL
