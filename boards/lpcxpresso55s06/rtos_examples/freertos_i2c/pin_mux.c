/*
 * Copyright 2017-2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v8.0
processor: LPC55S06
package_id: LPC55S06JBD64
mcu_data: ksdk2_0
processor_version: 0.8.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_iocon.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: cm33_core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '61', peripheral: FLEXCOMM0, signal: RXD_SDA_MOSI_DATA, pin_signal: PIO0_29/FC0_RXD_SDA_MOSI_DATA/CTIMER2_MAT3/SCT0_OUT8/CMP0_OUT/PLU_OUT2/SECURE_GPIO0_29,
    mode: inactive, slew_rate: standard, invert: disabled, open_drain: disabled}
  - {pin_num: '63', peripheral: FLEXCOMM0, signal: TXD_SCL_MISO_WS, pin_signal: PIO0_30/FC0_TXD_SCL_MISO_WS/CTIMER0_MAT0/SCT0_OUT9/SECURE_GPIO0_30, mode: inactive,
    slew_rate: standard, invert: disabled, open_drain: disabled}
  - {pin_num: '46', peripheral: FLEXCOMM1, signal: CTS_SDA_SSEL0, pin_signal: PIO0_13/FC1_CTS_SDA_SSEL0/UTICK_CAP0/CT_INP0/SCT_GPI0/FC1_RXD_SDA_MOSI_DATA/PLU_IN0/SECURE_GPIO0_13,
    mode: inactive, slew_rate: standard, invert: disabled, open_drain: disabled, ssel: signal3v3, filter_off: disabled, ecs: disabled, egp: i2c, i2cfilter: nonhighspeedmode}
  - {pin_num: '47', peripheral: FLEXCOMM1, signal: RTS_SCL_SSEL1, pin_signal: PIO0_14/FC1_RTS_SCL_SSEL1/UTICK_CAP1/CT_INP1/SCT_GPI1/FC1_TXD_SCL_MISO_WS/PLU_IN1/SECURE_GPIO0_14,
    mode: inactive, slew_rate: standard, invert: disabled, open_drain: disabled, ssel: signal3v3, filter_off: disabled, ecs: disabled, egp: i2c, i2cfilter: nonhighspeedmode}
  - {pin_num: '21', peripheral: FLEXCOMM4, signal: RXD_SDA_MOSI_DATA, pin_signal: PIO1_21/FC7_CTS_SDA_SSEL0/CTIMER3_MAT2/FC4_RXD_SDA_MOSI_DATA/PLU_OUT3, mode: inactive,
    slew_rate: standard, invert: disabled, open_drain: disabled}
  - {pin_num: '48', peripheral: FLEXCOMM4, signal: TXD_SCL_MISO_WS, pin_signal: PIO0_20/FC3_CTS_SDA_SSEL0/CTIMER1_MAT1/CT_INP15/SCT_GPI2/FC7_RXD_SDA_MOSI_DATA/HS_SPI_SSEL0/PLU_IN5/SECURE_GPIO0_20/FC4_TXD_SCL_MISO_WS,
    mode: inactive, slew_rate: standard, invert: disabled, open_drain: disabled}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M33 */
void BOARD_InitPins(void)
{
    /* Enables the clock for the I/O controller.: Enable Clock. */
    CLOCK_EnableClock(kCLOCK_Iocon);

    const uint32_t port0_pin13_config = (/* Pin is configured as FC1_CTS_SDA_SSEL0 */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* 3V3 signaling in I2C mode */
                                         IOCON_PIO_SSEL_3V3 |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* IO is an open drain cell */
                                         IOCON_PIO_ECS_DI |
                                         /* I2C mode */
                                         IOCON_PIO_EGP_I2C |
                                         /* I2C 50 ns glitch filter enabled. Typically used for Standard mode, Fast-mode and Fast-mode Plus I2C. */
                                         IOCON_PIO_I2CFILTER_NONHIGHSPEED);
    /* PORT0 PIN13 (coords: 46) is configured as FC1_CTS_SDA_SSEL0 */
    IOCON_PinMuxSet(IOCON, 0U, 13U, port0_pin13_config);

    const uint32_t port0_pin14_config = (/* Pin is configured as FC1_RTS_SCL_SSEL1 */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* 3V3 signaling in I2C mode */
                                         IOCON_PIO_SSEL_3V3 |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* IO is an open drain cell */
                                         IOCON_PIO_ECS_DI |
                                         /* I2C mode */
                                         IOCON_PIO_EGP_I2C |
                                         /* I2C 50 ns glitch filter enabled. Typically used for Standard mode, Fast-mode and Fast-mode Plus I2C. */
                                         IOCON_PIO_I2CFILTER_NONHIGHSPEED);
    /* PORT0 PIN14 (coords: 47) is configured as FC1_RTS_SCL_SSEL1 */
    IOCON_PinMuxSet(IOCON, 0U, 14U, port0_pin14_config);

    const uint32_t port0_pin20_config = (/* Pin is configured as FC4_TXD_SCL_MISO_WS */
                                         IOCON_PIO_FUNC11 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN20 (coords: 48) is configured as FC4_TXD_SCL_MISO_WS */
    IOCON_PinMuxSet(IOCON, 0U, 20U, port0_pin20_config);

    const uint32_t port0_pin29_config = (/* Pin is configured as FC0_RXD_SDA_MOSI_DATA */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN29 (coords: 61) is configured as FC0_RXD_SDA_MOSI_DATA */
    IOCON_PinMuxSet(IOCON, 0U, 29U, port0_pin29_config);

    const uint32_t port0_pin30_config = (/* Pin is configured as FC0_TXD_SCL_MISO_WS */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN30 (coords: 63) is configured as FC0_TXD_SCL_MISO_WS */
    IOCON_PinMuxSet(IOCON, 0U, 30U, port0_pin30_config);

    const uint32_t port1_pin21_config = (/* Pin is configured as FC4_RXD_SDA_MOSI_DATA */
                                         IOCON_PIO_FUNC5 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT1 PIN21 (coords: 21) is configured as FC4_RXD_SDA_MOSI_DATA */
    IOCON_PinMuxSet(IOCON, 1U, 21U, port1_pin21_config);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
