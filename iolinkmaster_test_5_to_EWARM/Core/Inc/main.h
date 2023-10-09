/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32u5xx_hal.h"
#include "stm32u5xx_ll_ucpd.h"
#include "stm32u5xx_ll_bus.h"
#include "stm32u5xx_ll_cortex.h"
#include "stm32u5xx_ll_rcc.h"
#include "stm32u5xx_ll_system.h"
#include "stm32u5xx_ll_utils.h"
#include "stm32u5xx_ll_pwr.h"
#include "stm32u5xx_ll_gpio.h"
#include "stm32u5xx_ll_dma.h"

#include "stm32u5xx_ll_exti.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define iolink_irq__Pin GPIO_PIN_13
#define iolink_irq__GPIO_Port GPIOC
#define led_iolink1_g_Pin GPIO_PIN_0
#define led_iolink1_g_GPIO_Port GPIOC
#define led_iolink1_r_Pin GPIO_PIN_1
#define led_iolink1_r_GPIO_Port GPIOC
#define led_pwr_ok_Pin GPIO_PIN_2
#define led_pwr_ok_GPIO_Port GPIOC
#define led_pwr_fault_Pin GPIO_PIN_3
#define led_pwr_fault_GPIO_Port GPIOC
#define boost_shdn__Pin GPIO_PIN_2
#define boost_shdn__GPIO_Port GPIOA
#define led_usb_Pin GPIO_PIN_3
#define led_usb_GPIO_Port GPIOA
#define usbflt__Pin GPIO_PIN_4
#define usbflt__GPIO_Port GPIOC
#define usbdb__Pin GPIO_PIN_5
#define usbdb__GPIO_Port GPIOC
#define usb_vbus_adc_Pin GPIO_PIN_0
#define usb_vbus_adc_GPIO_Port GPIOB
#define tps272_curr_meas_Pin GPIO_PIN_1
#define tps272_curr_meas_GPIO_Port GPIOB
#define vin_ext_adc_Pin GPIO_PIN_2
#define vin_ext_adc_GPIO_Port GPIOB
#define tps272_flt__Pin GPIO_PIN_10
#define tps272_flt__GPIO_Port GPIOB
#define vin_ext_en_Pin GPIO_PIN_12
#define vin_ext_en_GPIO_Port GPIOB
#define tps272_dia_en_Pin GPIO_PIN_13
#define tps272_dia_en_GPIO_Port GPIOB
#define tps272_sel_Pin GPIO_PIN_14
#define tps272_sel_GPIO_Port GPIOB
#define tps272_en1_Pin GPIO_PIN_6
#define tps272_en1_GPIO_Port GPIOC
#define tps272_en2_Pin GPIO_PIN_7
#define tps272_en2_GPIO_Port GPIOC
#define tps272_latch_Pin GPIO_PIN_8
#define tps272_latch_GPIO_Port GPIOC
#define txena_Pin GPIO_PIN_9
#define txena_GPIO_Port GPIOC
#define spi1_cs__Pin GPIO_PIN_8
#define spi1_cs__GPIO_Port GPIOA
#define lia_Pin GPIO_PIN_10
#define lia_GPIO_Port GPIOA
#define txenb_Pin GPIO_PIN_11
#define txenb_GPIO_Port GPIOC

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
