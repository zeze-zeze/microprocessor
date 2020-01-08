/*
 * mbed Microcontroller Library
 * Copyright (c) 2017-2018 Future Electronics
 * Copyright (c) 2019 Cypress Semiconductor Corporation
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "PeripheralNames.h"
#include "PeripheralPins.h"
#include "pinmap.h"

#if DEVICE_SERIAL
//*** SERIAL ***
const PinMap PinMap_UART_RX[] = {
    {P5_0, UART_5, CYHAL_PIN_IN_FUNCTION(P5_0_SCB5_UART_RX)},
    {P6_4, UART_6, CYHAL_PIN_IN_FUNCTION(P6_4_SCB6_UART_RX)},
    {P9_0, UART_2, CYHAL_PIN_IN_FUNCTION(P9_0_SCB2_UART_RX)},
    {P10_0, UART_1, CYHAL_PIN_IN_FUNCTION(P10_0_SCB1_UART_RX)},
    {NC,    NC,     0}
};
const PinMap PinMap_UART_TX[] = {
    {P5_1, UART_5, CYHAL_PIN_OUT_FUNCTION(P5_1_SCB5_UART_TX)},
    {P6_5, UART_6, CYHAL_PIN_OUT_FUNCTION(P6_5_SCB6_UART_TX)},
    {P7_1, UART_4, CYHAL_PIN_OUT_FUNCTION(P7_1_SCB4_UART_TX)},
    {P9_1, UART_2, CYHAL_PIN_OUT_FUNCTION(P9_1_SCB2_UART_TX)},
    {P10_1, UART_1, CYHAL_PIN_OUT_FUNCTION(P10_1_SCB1_UART_TX)},
    {NC,    NC,     0}
};
const PinMap PinMap_UART_RTS[] = {
    {P0_4, UART_0, CYHAL_PIN_OUT_FUNCTION(P0_4_SCB0_UART_RTS)},
    {P5_2, UART_5, CYHAL_PIN_OUT_FUNCTION(P5_2_SCB5_UART_RTS)},
    {P6_2, UART_3, CYHAL_PIN_OUT_FUNCTION(P6_2_SCB3_UART_RTS)},
    {P6_6, UART_6, CYHAL_PIN_OUT_FUNCTION(P6_6_SCB6_UART_RTS)},
    {P7_2, UART_4, CYHAL_PIN_OUT_FUNCTION(P7_2_SCB4_UART_RTS)},
    {P9_2, UART_2, CYHAL_PIN_OUT_FUNCTION(P9_2_SCB2_UART_RTS)},
    {P10_2, UART_1, CYHAL_PIN_OUT_FUNCTION(P10_2_SCB1_UART_RTS)},
    {NC,    NC,     0}
};
const PinMap PinMap_UART_CTS[] = {
    {P0_5, UART_0, CYHAL_PIN_IN_FUNCTION(P0_5_SCB0_UART_CTS)},
    {P5_3, UART_5, CYHAL_PIN_IN_FUNCTION(P5_3_SCB5_UART_CTS)},
    {P6_3, UART_3, CYHAL_PIN_IN_FUNCTION(P6_3_SCB3_UART_CTS)},
    {P6_7, UART_6, CYHAL_PIN_IN_FUNCTION(P6_7_SCB6_UART_CTS)},
    {P9_3, UART_2, CYHAL_PIN_IN_FUNCTION(P9_3_SCB2_UART_CTS)},
    {P10_3, UART_1, CYHAL_PIN_IN_FUNCTION(P10_3_SCB1_UART_CTS)},
    {NC,    NC,     0}
};
#endif // DEVICE_SERIAL


#if DEVICE_I2C
//*** I2C ***
const PinMap PinMap_I2C_SCL[] = {
    {P5_0, I2C_5, CYHAL_PIN_OD_FUNCTION(P5_0_SCB5_I2C_SCL)},
    {P6_4, I2C_6, CYHAL_PIN_OD_FUNCTION(P6_4_SCB6_I2C_SCL)},
    {P6_4, I2C_8, CYHAL_PIN_OD_FUNCTION(P6_4_SCB8_I2C_SCL)},
    {P9_0, I2C_2, CYHAL_PIN_OD_FUNCTION(P9_0_SCB2_I2C_SCL)},
    {P10_0, I2C_1, CYHAL_PIN_OD_FUNCTION(P10_0_SCB1_I2C_SCL)},
    {NC,    NC,    0}
};
const PinMap PinMap_I2C_SDA[] = {
    {P5_1, I2C_5, CYHAL_PIN_OD_FUNCTION(P5_1_SCB5_I2C_SDA)},
    {P6_5, I2C_6, CYHAL_PIN_OD_FUNCTION(P6_5_SCB6_I2C_SDA)},
    {P6_5, I2C_8, CYHAL_PIN_OD_FUNCTION(P6_5_SCB8_I2C_SDA)},
    {P7_1, I2C_4, CYHAL_PIN_OD_FUNCTION(P7_1_SCB4_I2C_SDA)},
    {P9_1, I2C_2, CYHAL_PIN_OD_FUNCTION(P9_1_SCB2_I2C_SDA)},
    {P10_1, I2C_1, CYHAL_PIN_OD_FUNCTION(P10_1_SCB1_I2C_SDA)},
    {NC,    NC,    0}
};
#endif // DEVICE_I2C

#if DEVICE_SPI
//*** SPI ***
const PinMap PinMap_SPI_MOSI[] = {
    {P5_0, SPI_5, CYHAL_PIN_OUT_FUNCTION(P5_0_SCB5_SPI_MOSI)},
    {P6_4, SPI_6, CYHAL_PIN_OUT_FUNCTION(P6_4_SCB6_SPI_MOSI)},
    {P6_4, SPI_8, CYHAL_PIN_OUT_FUNCTION(P6_4_SCB8_SPI_MOSI)},
    {P9_0, SPI_2, CYHAL_PIN_OUT_FUNCTION(P9_0_SCB2_SPI_MOSI)},
    {P10_0, SPI_1, CYHAL_PIN_OUT_FUNCTION(P10_0_SCB1_SPI_MOSI)},
    {NC,    NC,    0}
};
const PinMap PinMap_SPI_MISO[] = {
    {P5_1, SPI_5, CYHAL_PIN_IN_FUNCTION(P5_1_SCB5_SPI_MISO)},
    {P6_5, SPI_6, CYHAL_PIN_IN_FUNCTION(P6_5_SCB6_SPI_MISO)},
    {P6_5, SPI_8, CYHAL_PIN_IN_FUNCTION(P6_5_SCB8_SPI_MISO)},
    {P7_1, SPI_4, CYHAL_PIN_IN_FUNCTION(P7_1_SCB4_SPI_MISO)},
    {P9_1, SPI_2, CYHAL_PIN_IN_FUNCTION(P9_1_SCB2_SPI_MISO)},
    {P10_1, SPI_1, CYHAL_PIN_IN_FUNCTION(P10_1_SCB1_SPI_MISO)},
    {NC,    NC,    0}
};
const PinMap PinMap_SPI_SCLK[] = {
    {P0_4, SPI_0, CYHAL_PIN_OUT_FUNCTION(P0_4_SCB0_SPI_CLK)},
    {P5_2, SPI_5, CYHAL_PIN_OUT_FUNCTION(P5_2_SCB5_SPI_CLK)},
    {P6_2, SPI_3, CYHAL_PIN_OUT_FUNCTION(P6_2_SCB3_SPI_CLK)},
    {P6_2, SPI_8, CYHAL_PIN_OUT_FUNCTION(P6_2_SCB8_SPI_CLK)},
    {P6_6, SPI_6, CYHAL_PIN_OUT_FUNCTION(P6_6_SCB6_SPI_CLK)},
    {P6_6, SPI_8, CYHAL_PIN_OUT_FUNCTION(P6_6_SCB8_SPI_CLK)},
    {P7_2, SPI_4, CYHAL_PIN_OUT_FUNCTION(P7_2_SCB4_SPI_CLK)},
    {P9_2, SPI_2, CYHAL_PIN_OUT_FUNCTION(P9_2_SCB2_SPI_CLK)},
    {P10_2, SPI_1, CYHAL_PIN_OUT_FUNCTION(P10_2_SCB1_SPI_CLK)},
    {NC,    NC,    0}
};
const PinMap PinMap_SPI_SSEL[] = {
    {P0_5, SPI_0, CYHAL_PIN_OUT_FUNCTION(P0_5_SCB0_SPI_SELECT0)},
    {P5_3, SPI_5, CYHAL_PIN_OUT_FUNCTION(P5_3_SCB5_SPI_SELECT0)},
    {P6_3, SPI_3, CYHAL_PIN_OUT_FUNCTION(P6_3_SCB3_SPI_SELECT0)},
    {P6_3, SPI_8, CYHAL_PIN_OUT_FUNCTION(P6_3_SCB8_SPI_SELECT0)},
    {P6_7, SPI_6, CYHAL_PIN_OUT_FUNCTION(P6_7_SCB6_SPI_SELECT0)},
    {P6_7, SPI_8, CYHAL_PIN_OUT_FUNCTION(P6_7_SCB8_SPI_SELECT0)},
    {P9_3, SPI_2, CYHAL_PIN_OUT_FUNCTION(P9_3_SCB2_SPI_SELECT0)},
    {P10_3, SPI_1, CYHAL_PIN_OUT_FUNCTION(P10_3_SCB1_SPI_SELECT0)},
    {NC,    NC,    0}
};
#endif // DEVICE_SPI

#if DEVICE_PWMOUT
//*** PWM ***
const PinMap PinMap_PWM_OUT[] = {
    // 16-bit PWM outputs
    {P0_0, PWM_16b_0, CYHAL_PIN_OUT_FUNCTION(P0_0_TCPWM1_LINE0)},
    {P0_4, PWM_16b_2, CYHAL_PIN_OUT_FUNCTION(P0_4_TCPWM1_LINE2)},
    {P5_0, PWM_16b_4, CYHAL_PIN_OUT_FUNCTION(P5_0_TCPWM1_LINE4)},
    {P5_2, PWM_16b_5, CYHAL_PIN_OUT_FUNCTION(P5_2_TCPWM1_LINE5)},
    {P5_4, PWM_16b_6, CYHAL_PIN_OUT_FUNCTION(P5_4_TCPWM1_LINE6)},
    {P5_6, PWM_16b_7, CYHAL_PIN_OUT_FUNCTION(P5_6_TCPWM1_LINE7)},
    {P6_2, PWM_16b_9, CYHAL_PIN_OUT_FUNCTION(P6_2_TCPWM1_LINE9)},
    {P6_4, PWM_16b_10, CYHAL_PIN_OUT_FUNCTION(P6_4_TCPWM1_LINE10)},
    {P6_6, PWM_16b_11, CYHAL_PIN_OUT_FUNCTION(P6_6_TCPWM1_LINE11)},
    {P7_2, PWM_16b_13, CYHAL_PIN_OUT_FUNCTION(P7_2_TCPWM1_LINE13)},
    {P9_0, PWM_16b_20, CYHAL_PIN_OUT_FUNCTION(P9_0_TCPWM1_LINE20)},
    {P9_2, PWM_16b_21, CYHAL_PIN_OUT_FUNCTION(P9_2_TCPWM1_LINE21)},
    {P9_4, PWM_16b_0, CYHAL_PIN_OUT_FUNCTION(P9_4_TCPWM1_LINE0)},
    {P9_6, PWM_16b_1, CYHAL_PIN_OUT_FUNCTION(P9_6_TCPWM1_LINE1)},
    {P10_0, PWM_16b_22, CYHAL_PIN_OUT_FUNCTION(P10_0_TCPWM1_LINE22)},
    {P10_2, PWM_16b_23, CYHAL_PIN_OUT_FUNCTION(P10_2_TCPWM1_LINE23)},
    {P10_4, PWM_16b_0, CYHAL_PIN_OUT_FUNCTION(P10_4_TCPWM1_LINE0)},
    {P10_6, PWM_16b_2, CYHAL_PIN_OUT_FUNCTION(P10_6_TCPWM1_LINE2)},
    {P12_6, PWM_16b_7, CYHAL_PIN_OUT_FUNCTION(P12_6_TCPWM1_LINE7)},
    // 16-bit PWM inverted outputs
    {P0_1, PWM_16b_0, CYHAL_PIN_OUT_FUNCTION(P0_1_TCPWM1_LINE_COMPL0)},
    {P0_5, PWM_16b_2, CYHAL_PIN_OUT_FUNCTION(P0_5_TCPWM1_LINE_COMPL2)},
    {P5_1, PWM_16b_4, CYHAL_PIN_OUT_FUNCTION(P5_1_TCPWM1_LINE_COMPL4)},
    {P5_3, PWM_16b_5, CYHAL_PIN_OUT_FUNCTION(P5_3_TCPWM1_LINE_COMPL5)},
    {P5_5, PWM_16b_6, CYHAL_PIN_OUT_FUNCTION(P5_5_TCPWM1_LINE_COMPL6)},
    {P6_3, PWM_16b_9, CYHAL_PIN_OUT_FUNCTION(P6_3_TCPWM1_LINE_COMPL9)},
    {P6_5, PWM_16b_10, CYHAL_PIN_OUT_FUNCTION(P6_5_TCPWM1_LINE_COMPL10)},
    {P6_7, PWM_16b_11, CYHAL_PIN_OUT_FUNCTION(P6_7_TCPWM1_LINE_COMPL11)},
    {P7_1, PWM_16b_12, CYHAL_PIN_OUT_FUNCTION(P7_1_TCPWM1_LINE_COMPL12)},
    {P7_7, PWM_16b_15, CYHAL_PIN_OUT_FUNCTION(P7_7_TCPWM1_LINE_COMPL15)},
    {P9_1, PWM_16b_20, CYHAL_PIN_OUT_FUNCTION(P9_1_TCPWM1_LINE_COMPL20)},
    {P9_3, PWM_16b_21, CYHAL_PIN_OUT_FUNCTION(P9_3_TCPWM1_LINE_COMPL21)},
    {P9_5, PWM_16b_0, CYHAL_PIN_OUT_FUNCTION(P9_5_TCPWM1_LINE_COMPL0)},
    {P10_1, PWM_16b_22, CYHAL_PIN_OUT_FUNCTION(P10_1_TCPWM1_LINE_COMPL22)},
    {P10_3, PWM_16b_23, CYHAL_PIN_OUT_FUNCTION(P10_3_TCPWM1_LINE_COMPL23)},
    {P10_5, PWM_16b_0, CYHAL_PIN_OUT_FUNCTION(P10_5_TCPWM1_LINE_COMPL0)},
    {P12_7, PWM_16b_7, CYHAL_PIN_OUT_FUNCTION(P12_7_TCPWM1_LINE_COMPL7)},
    // 32-bit PWM outputs
    {P0_0, PWM_32b_0, CYHAL_PIN_OUT_FUNCTION(P0_0_TCPWM0_LINE0)},
    {P0_4, PWM_32b_2, CYHAL_PIN_OUT_FUNCTION(P0_4_TCPWM0_LINE2)},
    {P5_0, PWM_32b_4, CYHAL_PIN_OUT_FUNCTION(P5_0_TCPWM0_LINE4)},
    {P5_2, PWM_32b_5, CYHAL_PIN_OUT_FUNCTION(P5_2_TCPWM0_LINE5)},
    {P5_4, PWM_32b_6, CYHAL_PIN_OUT_FUNCTION(P5_4_TCPWM0_LINE6)},
    {P5_6, PWM_32b_7, CYHAL_PIN_OUT_FUNCTION(P5_6_TCPWM0_LINE7)},
    {P6_2, PWM_32b_1, CYHAL_PIN_OUT_FUNCTION(P6_2_TCPWM0_LINE1)},
    {P6_4, PWM_32b_2, CYHAL_PIN_OUT_FUNCTION(P6_4_TCPWM0_LINE2)},
    {P6_6, PWM_32b_3, CYHAL_PIN_OUT_FUNCTION(P6_6_TCPWM0_LINE3)},
    {P7_2, PWM_32b_5, CYHAL_PIN_OUT_FUNCTION(P7_2_TCPWM0_LINE5)},
    {P9_0, PWM_32b_4, CYHAL_PIN_OUT_FUNCTION(P9_0_TCPWM0_LINE4)},
    {P9_2, PWM_32b_5, CYHAL_PIN_OUT_FUNCTION(P9_2_TCPWM0_LINE5)},
    {P9_4, PWM_32b_7, CYHAL_PIN_OUT_FUNCTION(P9_4_TCPWM0_LINE7)},
    {P9_6, PWM_32b_0, CYHAL_PIN_OUT_FUNCTION(P9_6_TCPWM0_LINE0)},
    {P10_0, PWM_32b_6, CYHAL_PIN_OUT_FUNCTION(P10_0_TCPWM0_LINE6)},
    {P10_2, PWM_32b_7, CYHAL_PIN_OUT_FUNCTION(P10_2_TCPWM0_LINE7)},
    {P10_4, PWM_32b_0, CYHAL_PIN_OUT_FUNCTION(P10_4_TCPWM0_LINE0)},
    {P10_6, PWM_32b_1, CYHAL_PIN_OUT_FUNCTION(P10_6_TCPWM0_LINE1)},
    {P12_6, PWM_32b_7, CYHAL_PIN_OUT_FUNCTION(P12_6_TCPWM0_LINE7)},
    // 32-bit PWM inverted outputs
    {P0_1, PWM_32b_0, CYHAL_PIN_OUT_FUNCTION(P0_1_TCPWM0_LINE_COMPL0)},
    {P0_5, PWM_32b_2, CYHAL_PIN_OUT_FUNCTION(P0_5_TCPWM0_LINE_COMPL2)},
    {P5_1, PWM_32b_4, CYHAL_PIN_OUT_FUNCTION(P5_1_TCPWM0_LINE_COMPL4)},
    {P5_3, PWM_32b_5, CYHAL_PIN_OUT_FUNCTION(P5_3_TCPWM0_LINE_COMPL5)},
    {P5_5, PWM_32b_6, CYHAL_PIN_OUT_FUNCTION(P5_5_TCPWM0_LINE_COMPL6)},
    {P6_3, PWM_32b_1, CYHAL_PIN_OUT_FUNCTION(P6_3_TCPWM0_LINE_COMPL1)},
    {P6_5, PWM_32b_2, CYHAL_PIN_OUT_FUNCTION(P6_5_TCPWM0_LINE_COMPL2)},
    {P6_7, PWM_32b_3, CYHAL_PIN_OUT_FUNCTION(P6_7_TCPWM0_LINE_COMPL3)},
    {P7_1, PWM_32b_4, CYHAL_PIN_OUT_FUNCTION(P7_1_TCPWM0_LINE_COMPL4)},
    {P7_7, PWM_32b_7, CYHAL_PIN_OUT_FUNCTION(P7_7_TCPWM0_LINE_COMPL7)},
    {P9_1, PWM_32b_4, CYHAL_PIN_OUT_FUNCTION(P9_1_TCPWM0_LINE_COMPL4)},
    {P9_3, PWM_32b_5, CYHAL_PIN_OUT_FUNCTION(P9_3_TCPWM0_LINE_COMPL5)},
    {P9_5, PWM_32b_7, CYHAL_PIN_OUT_FUNCTION(P9_5_TCPWM0_LINE_COMPL7)},
    {P10_1, PWM_32b_6, CYHAL_PIN_OUT_FUNCTION(P10_1_TCPWM0_LINE_COMPL6)},
    {P10_3, PWM_32b_7, CYHAL_PIN_OUT_FUNCTION(P10_3_TCPWM0_LINE_COMPL7)},
    {P10_5, PWM_32b_0, CYHAL_PIN_OUT_FUNCTION(P10_5_TCPWM0_LINE_COMPL0)},
    {P12_7, PWM_32b_7, CYHAL_PIN_OUT_FUNCTION(P12_7_TCPWM0_LINE_COMPL7)},
    {NC,    NC,     0}
};
#endif // DEVICE_PWMOUT

#if DEVICE_ANALOGIN
const PinMap PinMap_ADC[] = {
    {P10_0, ADC_0, CYHAL_PIN_ANALOG_FUNCTION(HSIOM_SEL_GPIO)},
    {P10_1, ADC_0, CYHAL_PIN_ANALOG_FUNCTION(HSIOM_SEL_GPIO)},
    {P10_2, ADC_0, CYHAL_PIN_ANALOG_FUNCTION(HSIOM_SEL_GPIO)},
    {P10_3, ADC_0, CYHAL_PIN_ANALOG_FUNCTION(HSIOM_SEL_GPIO)},
    {P10_4, ADC_0, CYHAL_PIN_ANALOG_FUNCTION(HSIOM_SEL_GPIO)},
    {P10_5, ADC_0, CYHAL_PIN_ANALOG_FUNCTION(HSIOM_SEL_GPIO)},
    {P10_6, ADC_0, CYHAL_PIN_ANALOG_FUNCTION(HSIOM_SEL_GPIO)},
    {NC,    NC,     0}
};
#endif // DEVICE_ANALOGIN

#if DEVICE_ANALOGOUT
const PinMap PinMap_DAC[] = {
    {P9_6,  DAC_0, CYHAL_PIN_ANALOG_FUNCTION(HSIOM_SEL_GPIO)},
    {NC,    NC,     0}
};
#endif // DEVICE_ANALOGIN
