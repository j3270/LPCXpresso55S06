/*
 * Copyright 2017-2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
    kPIN_MUX_DirectionInput = 0U,        /* Input direction */
    kPIN_MUX_DirectionOutput = 1U,       /* Output direction */
    kPIN_MUX_DirectionInputOrOutput = 2U /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M33 */

#define IOCON_PIO_DIGITAL_EN 0x0100u  /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC1 0x01u         /*!<@brief Selects pin function 1 */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x00u    /*!<@brief No addition pin function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name FC0_RXD_SDA_MOSI_DATA (number 61), U11[14]/U22[14]/FC0_USART_RXD
  @{ */
/*!
 * @brief Device name: FLEXCOMM0 */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PERIPHERAL FLEXCOMM0
/*!
 * @brief FLEXCOMM0 signal: RXD_SDA_MOSI_DATA */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_SIGNAL RXD_SDA_MOSI_DATA
/*!
 * @brief Pin name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PIN_NAME FC0_RXD_SDA_MOSI_DATA
/*!
 * @brief Label */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_LABEL "U11[14]/U22[14]/FC0_USART_RXD"
/*!
 * @brief Identifier name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_NAME "DEBUG_UART_RX"
/* @} */

/*! @name FC0_TXD_SCL_MISO_WS (number 63), J10[18]/U11[13]/U22[13]/FC0_USART_TXD
  @{ */
/*!
 * @brief Device name: FLEXCOMM0 */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PERIPHERAL FLEXCOMM0
/*!
 * @brief FLEXCOMM0 signal: TXD_SCL_MISO_WS */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_SIGNAL TXD_SCL_MISO_WS
/*!
 * @brief Pin name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PIN_NAME FC0_TXD_SCL_MISO_WS
/*!
 * @brief Label */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_LABEL "J10[18]/U11[13]/U22[13]/FC0_USART_TXD"
/*!
 * @brief Identifier name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_NAME "DEBUG_UART_TX"
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void); /* Function assigned for the Cortex-M33 */

#define IOCON_PIO_ASW_DI 0x00u        /*!<@brief Analog switch is open (disabled) */
#define IOCON_PIO_DIGITAL_EN 0x0100u  /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC6 0x06u         /*!<@brief Selects pin function 6 */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x00u    /*!<@brief No addition pin function */
#define IOCON_PIO_MODE_PULLDOWN 0x10u /*!<@brief Selects pull-down function */
#define IOCON_PIO_MODE_PULLUP 0x20u   /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name SWO (number 13), J9[15]/U18[12]/N4M_SWO
  @{ */
/*!
 * @brief Device name: SWD */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWO_PERIPHERAL SWD
/*!
 * @brief SWD signal: SWO */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWO_SIGNAL SWO
/*!
 * @brief Pin name */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWO_PIN_NAME SWO
/*!
 * @brief Label */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWO_LABEL "J9[15]/U18[12]/N4M_SWO"
/*!
 * @brief Identifier name */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWO_NAME "DEBUG_SWD_SWO"
/* @} */

/*! @name SWCLK (number 6), J9[19]/J10[8]/U18[4]/N4M_SWDCLK
  @{ */
/*!
 * @brief Device name: SWD */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDCLK_PERIPHERAL SWD
/*!
 * @brief SWD signal: SWCLK */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDCLK_SIGNAL SWCLK
/*!
 * @brief Pin name */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDCLK_PIN_NAME SWCLK
/*!
 * @brief Label */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDCLK_LABEL "J9[19]/J10[8]/U18[4]/N4M_SWDCLK"
/*!
 * @brief Identifier name */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDCLK_NAME "DEBUG_SWD_SWDCLK"
/* @} */

/*! @name SWDIO (number 5), J9[17]/J10[6]/U18[8]/N4M_SWDIO
  @{ */
/*!
 * @brief Device name: SWD */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_PERIPHERAL SWD
/*!
 * @brief SWD signal: SWDIO */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_SIGNAL SWDIO
/*!
 * @brief Pin name */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_PIN_NAME SWDIO
/*!
 * @brief Label */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_LABEL "J9[17]/J10[6]/U18[8]/N4M_SWDIO"
/*!
 * @brief Identifier name */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_NAME "DEBUG_SWD_SWDIO"
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitSWD_DEBUGPins(void); /* Function assigned for the Cortex-M33 */

#define IOCON_PIO_ASW_DI 0x00u        /*!<@brief Analog switch is open (disabled) */
#define IOCON_PIO_DIGITAL_EN 0x0100u  /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC0 0x00u         /*!<@brief Selects pin function 0 */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_PULLUP 0x20u   /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name PIO0_18 (number 38), J12[4]/Q4[G2]/ARD_LEDG_PWM
  @{ */
/*!
 * @brief Device name: GPIO */
#define BOARD_INITLEDSPINS_LED_GREEN_PERIPHERAL GPIO
/*!
 * @brief GPIO signal: PIO0 */
#define BOARD_INITLEDSPINS_LED_GREEN_SIGNAL PIO0
/*!
 * @brief GPIO device name: GPIO */
#define BOARD_INITLEDSPINS_LED_GREEN_GPIO GPIO
/*!
 * @brief PIO0 pin index: 18 */
#define BOARD_INITLEDSPINS_LED_GREEN_GPIO_PIN 18U
/*!
 * @brief PORT device name: 0U */
#define BOARD_INITLEDSPINS_LED_GREEN_PORT 0U
/*!
 * @brief 0U pin index: 18 */
#define BOARD_INITLEDSPINS_LED_GREEN_PIN 18U
/*!
 * @brief GPIO PIO0 channel: 18 */
#define BOARD_INITLEDSPINS_LED_GREEN_CHANNEL 18
/*!
 * @brief Pin name */
#define BOARD_INITLEDSPINS_LED_GREEN_PIN_NAME PIO0_18
/*!
 * @brief Label */
#define BOARD_INITLEDSPINS_LED_GREEN_LABEL "J12[4]/Q4[G2]/ARD_LEDG_PWM"
/*!
 * @brief Identifier name */
#define BOARD_INITLEDSPINS_LED_GREEN_NAME "LED_GREEN"
/*!
 * @brief Direction */
#define BOARD_INITLEDSPINS_LED_GREEN_DIRECTION kPIN_MUX_DirectionOutput
/* @} */

/*! @name PIO0_21 (number 49), J9[2]/J9[13]/J12[5]/Q5[G1]/ARD_LEDR_PWM
  @{ */
/*!
 * @brief Device name: GPIO */
#define BOARD_INITLEDSPINS_LED_RED_PERIPHERAL GPIO
/*!
 * @brief GPIO signal: PIO0 */
#define BOARD_INITLEDSPINS_LED_RED_SIGNAL PIO0
/*!
 * @brief GPIO device name: GPIO */
#define BOARD_INITLEDSPINS_LED_RED_GPIO GPIO
/*!
 * @brief PIO0 pin index: 21 */
#define BOARD_INITLEDSPINS_LED_RED_GPIO_PIN 21U
/*!
 * @brief PORT device name: 0U */
#define BOARD_INITLEDSPINS_LED_RED_PORT 0U
/*!
 * @brief 0U pin index: 21 */
#define BOARD_INITLEDSPINS_LED_RED_PIN 21U
/*!
 * @brief GPIO PIO0 channel: 21 */
#define BOARD_INITLEDSPINS_LED_RED_CHANNEL 21
/*!
 * @brief Pin name */
#define BOARD_INITLEDSPINS_LED_RED_PIN_NAME PIO0_21
/*!
 * @brief Label */
#define BOARD_INITLEDSPINS_LED_RED_LABEL "J9[2]/J9[13]/J12[5]/Q5[G1]/ARD_LEDR_PWM"
/*!
 * @brief Identifier name */
#define BOARD_INITLEDSPINS_LED_RED_NAME "LED_RED"
/*!
 * @brief Direction */
#define BOARD_INITLEDSPINS_LED_RED_DIRECTION kPIN_MUX_DirectionOutput
/* @} */

/*! @name PIO0_22 (number 51), J12[8]/Q4[G1]/ARD_LEDB_PWM
  @{ */
#define BOARD_INITLEDSPINS_LED_BLUE_PERIPHERAL GPIO                    /*!<@brief Device name: GPIO */
#define BOARD_INITLEDSPINS_LED_BLUE_SIGNAL PIO0                        /*!<@brief GPIO signal: PIO0 */
#define BOARD_INITLEDSPINS_LED_BLUE_GPIO GPIO                          /*!<@brief GPIO device name: GPIO */
#define BOARD_INITLEDSPINS_LED_BLUE_GPIO_PIN 22U                       /*!<@brief PIO0 pin index: 22 */
#define BOARD_INITLEDSPINS_LED_BLUE_PORT 0U                            /*!<@brief PORT device name: 0U */
#define BOARD_INITLEDSPINS_LED_BLUE_PIN 22U                            /*!<@brief 0U pin index: 22 */
#define BOARD_INITLEDSPINS_LED_BLUE_CHANNEL 22                         /*!<@brief GPIO PIO0 channel: 22 */
#define BOARD_INITLEDSPINS_LED_BLUE_PIN_NAME PIO0_22                   /*!<@brief Pin name */
#define BOARD_INITLEDSPINS_LED_BLUE_LABEL "J12[8]/Q4[G1]/ARD_LEDB_PWM" /*!<@brief Label */
#define BOARD_INITLEDSPINS_LED_BLUE_NAME "LED_BLUE"                    /*!<@brief Identifier name */
#define BOARD_INITLEDSPINS_LED_BLUE_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */
                                                                       /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLEDsPins(void); /* Function assigned for the Cortex-M33 */

#define IOCON_PIO_ASW_DI 0x00u        /*!<@brief Analog switch is open (disabled) */
#define IOCON_PIO_DIGITAL_EN 0x0100u  /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC0 0x00u         /*!<@brief Selects pin function 0 */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_PULLUP 0x20u   /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name PIO1_9 (number 3), SW3/J13[2]/ARD_BTN_USR_P1_9
  @{ */
#define BOARD_INITBUTTONSPINS_USR_PERIPHERAL GPIO                     /*!<@brief Device name: GPIO */
#define BOARD_INITBUTTONSPINS_USR_SIGNAL PIO1                         /*!<@brief GPIO signal: PIO1 */
#define BOARD_INITBUTTONSPINS_USR_GPIO GPIO                           /*!<@brief GPIO device name: GPIO */
#define BOARD_INITBUTTONSPINS_USR_GPIO_PIN 9U                         /*!<@brief PIO1 pin index: 9 */
#define BOARD_INITBUTTONSPINS_USR_PORT 1U                             /*!<@brief PORT device name: 1U */
#define BOARD_INITBUTTONSPINS_USR_PIN 9U                              /*!<@brief 1U pin index: 9 */
#define BOARD_INITBUTTONSPINS_USR_CHANNEL 9                           /*!<@brief GPIO PIO1 channel: 9 */
#define BOARD_INITBUTTONSPINS_USR_PIN_NAME PIO1_9                     /*!<@brief Pin name */
#define BOARD_INITBUTTONSPINS_USR_LABEL "SW3/J13[2]/ARD_BTN_USR_P1_9" /*!<@brief Label */
#define BOARD_INITBUTTONSPINS_USR_NAME "USR"                          /*!<@brief Identifier name */
#define BOARD_INITBUTTONSPINS_USR_DIRECTION kPIN_MUX_DirectionInput   /*!<@brief Direction */
                                                                      /* @} */

/*! @name PIO0_28 (number 44), SW1/J8[2]/J10[1]/J12[15]/MIK_EXP_BTN_WK
  @{ */
/*!
 * @brief Device name: GPIO */
#define BOARD_INITBUTTONSPINS_WAKEUP_PERIPHERAL GPIO
/*!
 * @brief GPIO signal: PIO0 */
#define BOARD_INITBUTTONSPINS_WAKEUP_SIGNAL PIO0
/*!
 * @brief GPIO device name: GPIO */
#define BOARD_INITBUTTONSPINS_WAKEUP_GPIO GPIO
/*!
 * @brief PIO0 pin index: 28 */
#define BOARD_INITBUTTONSPINS_WAKEUP_GPIO_PIN 28U
/*!
 * @brief PORT device name: 0U */
#define BOARD_INITBUTTONSPINS_WAKEUP_PORT 0U
/*!
 * @brief 0U pin index: 28 */
#define BOARD_INITBUTTONSPINS_WAKEUP_PIN 28U
/*!
 * @brief GPIO PIO0 channel: 28 */
#define BOARD_INITBUTTONSPINS_WAKEUP_CHANNEL 28
/*!
 * @brief Pin name */
#define BOARD_INITBUTTONSPINS_WAKEUP_PIN_NAME PIO0_28
/*!
 * @brief Label */
#define BOARD_INITBUTTONSPINS_WAKEUP_LABEL "SW1/J8[2]/J10[1]/J12[15]/MIK_EXP_BTN_WK"
/*!
 * @brief Identifier name */
#define BOARD_INITBUTTONSPINS_WAKEUP_NAME "WAKEUP"
/*!
 * @brief Direction */
#define BOARD_INITBUTTONSPINS_WAKEUP_DIRECTION kPIN_MUX_DirectionInput
/* @} */

/*! @name PIO0_5 (number 58), SW4/J9[7]/J17[7]/JS3[1]/U22[11]/U23[4]/N4M_ISP_MODE
  @{ */
/*!
 * @brief Device name: GPIO */
#define BOARD_INITBUTTONSPINS_ISP_PERIPHERAL GPIO
/*!
 * @brief GPIO signal: PIO0 */
#define BOARD_INITBUTTONSPINS_ISP_SIGNAL PIO0
/*!
 * @brief GPIO device name: GPIO */
#define BOARD_INITBUTTONSPINS_ISP_GPIO GPIO
/*!
 * @brief PIO0 pin index: 5 */
#define BOARD_INITBUTTONSPINS_ISP_GPIO_PIN 5U
/*!
 * @brief PORT device name: 0U */
#define BOARD_INITBUTTONSPINS_ISP_PORT 0U
/*!
 * @brief 0U pin index: 5 */
#define BOARD_INITBUTTONSPINS_ISP_PIN 5U
/*!
 * @brief GPIO PIO0 channel: 5 */
#define BOARD_INITBUTTONSPINS_ISP_CHANNEL 5
/*!
 * @brief Pin name */
#define BOARD_INITBUTTONSPINS_ISP_PIN_NAME PIO0_5
/*!
 * @brief Label */
#define BOARD_INITBUTTONSPINS_ISP_LABEL "SW4/J9[7]/J17[7]/JS3[1]/U22[11]/U23[4]/N4M_ISP_MODE"
/*!
 * @brief Identifier name */
#define BOARD_INITBUTTONSPINS_ISP_NAME "ISP"
/*!
 * @brief Direction */
#define BOARD_INITBUTTONSPINS_ISP_DIRECTION kPIN_MUX_DirectionInput
/* @} */

/*! @name RESETN (number 23), SW2/J7[2]/J10[9]/J10[10]/U18[16]/N4M_RESET#
  @{ */
/*!
 * @brief Device name: SYSCON */
#define BOARD_INITBUTTONSPINS_RESET_PERIPHERAL SYSCON
/*!
 * @brief SYSCON signal: RESET */
#define BOARD_INITBUTTONSPINS_RESET_SIGNAL RESET
/*!
 * @brief Pin name */
#define BOARD_INITBUTTONSPINS_RESET_PIN_NAME RESETN
/*!
 * @brief Label */
#define BOARD_INITBUTTONSPINS_RESET_LABEL "SW2/J7[2]/J10[9]/J10[10]/U18[16]/N4M_RESET#"
/*!
 * @brief Identifier name */
#define BOARD_INITBUTTONSPINS_RESET_NAME "RESET"
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitBUTTONsPins(void); /* Function assigned for the Cortex-M33 */

#define IOCON_PIO_DIGITAL_EN 0x0100u  /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC0 0x00u         /*!<@brief Selects pin function 0 */
#define IOCON_PIO_FUNC1 0x01u         /*!<@brief Selects pin function 1 */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x00u    /*!<@brief No addition pin function */
#define IOCON_PIO_MODE_PULLUP 0x20u   /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name FC0_RXD_SDA_MOSI_DATA (number 45), J8[6]/J9[18]/U12[6]/FC0_I2C_SDA
  @{ */
/*!
 * @brief Device name: FLEXCOMM0 */
#define BOARD_INITACCELPINS_FC0_I2C_SDA_PERIPHERAL FLEXCOMM0
/*!
 * @brief FLEXCOMM0 signal: RXD_SDA_MOSI_DATA */
#define BOARD_INITACCELPINS_FC0_I2C_SDA_SIGNAL RXD_SDA_MOSI_DATA
/*!
 * @brief Pin name */
#define BOARD_INITACCELPINS_FC0_I2C_SDA_PIN_NAME FC0_RXD_SDA_MOSI_DATA
/*!
 * @brief Label */
#define BOARD_INITACCELPINS_FC0_I2C_SDA_LABEL "J8[6]/J9[18]/U12[6]/FC0_I2C_SDA"
/*!
 * @brief Identifier name */
#define BOARD_INITACCELPINS_FC0_I2C_SDA_NAME "FC0_I2C_SDA"
/* @} */

/*! @name FC0_TXD_SCL_MISO_WS (number 52), J8[5]/J10[3]/U12[4]/FC0_I2C_SCL
  @{ */
/*!
 * @brief Device name: FLEXCOMM0 */
#define BOARD_INITACCELPINS_FC0_I2C_SCL_PERIPHERAL FLEXCOMM0
/*!
 * @brief FLEXCOMM0 signal: TXD_SCL_MISO_WS */
#define BOARD_INITACCELPINS_FC0_I2C_SCL_SIGNAL TXD_SCL_MISO_WS
/*!
 * @brief Pin name */
#define BOARD_INITACCELPINS_FC0_I2C_SCL_PIN_NAME FC0_TXD_SCL_MISO_WS
/*!
 * @brief Label */
#define BOARD_INITACCELPINS_FC0_I2C_SCL_LABEL "J8[5]/J10[3]/U12[4]/FC0_I2C_SCL"
/*!
 * @brief Identifier name */
#define BOARD_INITACCELPINS_FC0_I2C_SCL_NAME "FC0_I2C_SCL"
/* @} */

/*! @name PIO1_23 (number 27), J9[5]/U12[11]/ACC_INT_EXP_P1_23
  @{ */
/*!
 * @brief Device name: GPIO */
#define BOARD_INITACCELPINS_ACCL_INTR_PERIPHERAL GPIO
/*!
 * @brief GPIO signal: PIO1 */
#define BOARD_INITACCELPINS_ACCL_INTR_SIGNAL PIO1
/*!
 * @brief GPIO device name: GPIO */
#define BOARD_INITACCELPINS_ACCL_INTR_GPIO GPIO
/*!
 * @brief PIO1 pin index: 23 */
#define BOARD_INITACCELPINS_ACCL_INTR_GPIO_PIN 23U
/*!
 * @brief PORT device name: 1U */
#define BOARD_INITACCELPINS_ACCL_INTR_PORT 1U
/*!
 * @brief 1U pin index: 23 */
#define BOARD_INITACCELPINS_ACCL_INTR_PIN 23U
/*!
 * @brief GPIO PIO1 channel: 23 */
#define BOARD_INITACCELPINS_ACCL_INTR_CHANNEL 23
/*!
 * @brief Pin name */
#define BOARD_INITACCELPINS_ACCL_INTR_PIN_NAME PIO1_23
/*!
 * @brief Label */
#define BOARD_INITACCELPINS_ACCL_INTR_LABEL "J9[5]/U12[11]/ACC_INT_EXP_P1_23"
/*!
 * @brief Identifier name */
#define BOARD_INITACCELPINS_ACCL_INTR_NAME "ACCL_INTR"
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitACCELPins(void); /* Function assigned for the Cortex-M33 */

#define IOCON_PIO_DIGITAL_EN 0x0100u  /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC1 0x01u         /*!<@brief Selects pin function 1 */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x00u    /*!<@brief No addition pin function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name CAN0_TD (number 41), J18[7]/JP26[2]/U24[13]/CAN__HSSPI_ISP_PIO1_2
  @{ */
/*!
 * @brief Device name: CAN0 */
#define BOARD_INITCANPINS_CAN_TXD_PERIPHERAL CAN0
/*!
 * @brief CAN0 signal: CAN_TD */
#define BOARD_INITCANPINS_CAN_TXD_SIGNAL CAN_TD
/*!
 * @brief Pin name */
#define BOARD_INITCANPINS_CAN_TXD_PIN_NAME CAN0_TD
/*!
 * @brief Label */
#define BOARD_INITCANPINS_CAN_TXD_LABEL "J18[7]/JP26[2]/U24[13]/CAN__HSSPI_ISP_PIO1_2"
/*!
 * @brief Identifier name */
#define BOARD_INITCANPINS_CAN_TXD_NAME "CAN_TXD"
/* @} */

/*! @name CAN0_RD (number 42), J18[5]/JP25[2]/U24[12]/CAN__HSSPI_ISP_PIO1_3
  @{ */
/*!
 * @brief Device name: CAN0 */
#define BOARD_INITCANPINS_CAN_RXD_PERIPHERAL CAN0
/*!
 * @brief CAN0 signal: CAN_RD */
#define BOARD_INITCANPINS_CAN_RXD_SIGNAL CAN_RD
/*!
 * @brief Pin name */
#define BOARD_INITCANPINS_CAN_RXD_PIN_NAME CAN0_RD
/*!
 * @brief Label */
#define BOARD_INITCANPINS_CAN_RXD_LABEL "J18[5]/JP25[2]/U24[12]/CAN__HSSPI_ISP_PIO1_3"
/*!
 * @brief Identifier name */
#define BOARD_INITCANPINS_CAN_RXD_NAME "CAN_RXD"
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitCANPins(void); /* Function assigned for the Cortex-M33 */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
