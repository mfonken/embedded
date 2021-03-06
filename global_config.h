/************************************************************************
 *  File: global_config.h
 *  Group: Rho Core
 ***********************************************************************/

#ifndef global_config_h
#define global_config_h

#include "global_types.h"

#ifdef __RHO__
#include "rho_master.h"
#else
#ifdef __OV9712__
#include "OV9712.h"
#else
#endif
#endif

#define THIS_ID           0x01

/* Global configurations */
#define HOST_COMMUNICATION_PROTOCOL     USART_PROTOCOL_TYPE
#define HOST_DEFAULT_CHANNEL            UART_Primary

#define CAMERA_COMMUNICATION_PROTOCOL   I2C_PROTOCOL_TYPE
#define CAMERA_COMMUNICATION_CHANNEL    I2C_Primary

#define USART_TIMEOUT	              100
#define UART_TIMEOUT	              USART_TIMEOUT

#define HOST_ADDRESS                0x01
#define HOST_COMM_RETRIES           3
#define HOST_COMMAND_RETURN_LENGTH  2
#define HOST_COMMAND_WAIT_TIME      5000
#define HOST_COMMAND_RETRY_TIME     1000

/* STM-Specific configurations */
#ifdef __STM32__
#define _PLATFORM_ STM

/* DMA Config */
#define RHO_TIM_DMA_ID      TIM_DMA_ID_CC2
#define RHO_TIM_DMA_CC	    TIM_DMA_CC2
#define RHO_TIM_IT_CC       TIM_IT_CC2
#define RHO_TIM_CHANNEL     TIM_CHANNEL_2

#define CAMERA_PORT     (GPIOA->IDR)
#define UART_TX_PORT    (USART1->TDR)

#define GPIO_Port_t     GPIO_TypeDef
#define TIMER_Handle_t  TIM_HandleTypeDef
#define I2C_Handle_t    I2C_HandleTypeDef
#define SPI_Handle_t    SPI_HandleTypeDef
#define UART_Handle_t   UART_HandleTypeDef
#define USB_Handle_t    PCD_HandleTypeDef
#endif /* __STM32__ */

#endif /* global_config_h */
