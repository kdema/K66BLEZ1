/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : pin_mux.c
**     Project     : USB-KW40
**     Processor   : MKW40Z160VHT4
**     Component   : PinSettings
**     Version     : Component 1.2.0, Driver 1.4, CPU db: 3.00.000
**     Repository  : KSDK
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-06-10, 14:09, # CodeGen: 3
**     Abstract    :
**
**     Settings    :
**
**     Contents    :
**         GPIO                - void pin_mux_GPIO(uint32_t instance);
**         I2C                 - void pin_mux_I2C(uint32_t instance);
**         TPM                 - void pin_mux_TPM(uint32_t instance);
**         RTC                 - void pin_mux_RTC(uint32_t instance);
**         SPI                 - void pin_mux_SPI(uint32_t instance);
**         LPUART              - void pin_mux_LPUART(uint32_t instance);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file pin_mux.c
** @version 1.4
** @brief
**
*/         
/*!
**  @addtogroup pin_mux_module pin_mux module documentation
**  @{
*/         

/* MODULE pin_mux. */


#include "fsl_device_registers.h"
#include "fsl_port_hal.h"
#include "pin_mux.h"


void configure_gpio_pins(uint32_t instance)
{
  switch(instance) {
    case 0:                             /* PTA */
      break;
    case 1:                             /* PTB */
      break;
    case 2:                             /* PTC */
      /* PORTC_PCR3    LLWU_P7*/
      PORT_HAL_SetMuxMode(PORTC,3u,kPortMuxAsGpio);
      /* PORTC_PCR5 */
      PORT_HAL_SetMuxMode(PORTC,5u,kPortMuxAsGpio);
      /* PORTC_PCR12 */
      PORT_HAL_SetMuxMode(PORTC,12u,kPortMuxAsGpio);
      break;
    default:
      break;
  }
}

void configure_i2c_pins(uint32_t instance)
{
  switch(instance) {
    case 0:                          /* I2C0 */
      /* PORTB_PCR0 */
      PORT_HAL_SetMuxMode(PORTB,0u,kPortMuxAlt3);
      PORT_HAL_SetPullCmd(PORTB,0u,true);
      PORT_HAL_SetPullMode(PORTB,0u,kPortPullUp);
      PORT_HAL_SetPassiveFilterCmd(PORTB,0u,false);
      /* PORTB_PCR1 */
      PORT_HAL_SetMuxMode(PORTB,1u,kPortMuxAlt3);
      PORT_HAL_SetPullCmd(PORTB,1u,true);
      PORT_HAL_SetPullMode(PORTB,1u,kPortPullUp);
      PORT_HAL_SetPassiveFilterCmd(PORTB,1u,false);

      break;
    case 1:
      /* PORTC_PCR2 */
      PORT_HAL_SetMuxMode(PORTC,2u,kPortMuxAlt3);
      PORT_HAL_SetPullCmd(PORTC,2u,true);
      PORT_HAL_SetPullMode(PORTC,2u,kPortPullUp);
      PORT_HAL_SetPassiveFilterCmd(PORTC,2u,false);
      /* PORTC_PCR3 */
      PORT_HAL_SetMuxMode(PORTC,3u,kPortMuxAlt3);
      PORT_HAL_SetPullCmd(PORTC,3u,true);
      PORT_HAL_SetPullMode(PORTC,3u,kPortPullUp);
      PORT_HAL_SetPassiveFilterCmd(PORTC,3u,false);
      break;
    case 2:
      break;
    case 3:
      break;
      case 4:
      break;
    default:
      break;
  }
}

void configure_rtc_pins(uint32_t instance)
{
    /* PORTB_PCR3 */
    PORT_HAL_SetMuxMode(PORTB,3u,kPortMuxAlt7);

}

void configure_lpuart_pins(uint32_t instance)
{
  switch(instance) {
    case 0:                             /* LPUART0 */
      /* PORTC_PCR6 */
      PORT_HAL_SetMuxMode(PORTC,6u,kPortMuxAlt4); /* TX */
      /* PORTC_PCR7 */
      PORT_HAL_SetMuxMode(PORTC,7u,kPortMuxAlt4); /* RX */
//      /* PORTC_PCR5 */
//      PORT_HAL_SetMuxMode(PORTC,5u,kPortMuxAlt4); /* CTS */
//      /* PORTC_PCR4 */
//      PORT_HAL_SetMuxMode(PORTC,4u,kPortMuxAlt4); /* RTS */
      break;
    default:
      break;
  }
}

void configure_spi_pins(uint32_t instance)
{
  switch(instance) {
    case 0:                          /* SPI0 */
      /* PORTC_PCR18 */
      PORT_HAL_SetMuxMode(PORTC,18u,kPortMuxAlt2); /* MOSI */
      /* PORTC_PCR17 */
      PORT_HAL_SetMuxMode(PORTC,17u,kPortMuxAlt2); /* MISO */
      /* PORTC_PCR16 */
      PORT_HAL_SetMuxMode(PORTC,16u,kPortMuxAlt2); /* CLK */
      /* PORTC_PCR19 */
      PORT_HAL_SetMuxMode(PORTC,19u,kPortMuxAlt2); /* PCS0 */
      break;
    case 1:                          /* SPI1 */
      /* PORTA_PCR16 */
      PORT_HAL_SetMuxMode(PORTA,16u,kPortMuxAlt2); /* MISO */
      /* PORTA_PCR17 */
      PORT_HAL_SetMuxMode(PORTA,17u,kPortMuxAlt2); /* MOSI */
      /* PORTA_PCR18 */
      PORT_HAL_SetMuxMode(PORTA,18u,kPortMuxAlt2); /* SCK */
      /* PORTA_PCR19 */
      PORT_HAL_SetMuxMode(PORTA,19u,kPortMuxAlt2); /* PCS0 */
      break;
    default:
      break;
  }
}

void configure_tpm_pins(uint32_t instance)
{
  switch(instance) {
    case 0:                             /* TPM0 */
      /* PORTC_PCR0 */
      PORT_HAL_SetMuxMode(PORTC,0u,kPortMuxAlt5); /* TPM0_CH1 */
      break;
    case 1:                             /* TPM1 */
      break;
    default:
      break;
  }
}

void configure_dac_pins(uint32_t instance)
{
    switch (instance)
    {
        case 0U:
          /* PORTB_PCR18 */
          PORT_HAL_SetMuxMode(PORTB,18u,kPortPinDisabled); /* DAC0 */    
          break;
        default:
            break;
    }
}

/* END pin_mux. */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
