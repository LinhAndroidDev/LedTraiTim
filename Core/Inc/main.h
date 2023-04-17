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
#include "stm32f1xx_hal.h"

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
#define LED_Pin GPIO_PIN_0
#define LED_GPIO_Port GPIOA
#define LEDA1_Pin GPIO_PIN_1
#define LEDA1_GPIO_Port GPIOA
#define LEDA2_Pin GPIO_PIN_2
#define LEDA2_GPIO_Port GPIOA
#define LEDA3_Pin GPIO_PIN_3
#define LEDA3_GPIO_Port GPIOA
#define LEDA4_Pin GPIO_PIN_4
#define LEDA4_GPIO_Port GPIOA
#define LEDA5_Pin GPIO_PIN_5
#define LEDA5_GPIO_Port GPIOA
#define LEDA6_Pin GPIO_PIN_6
#define LEDA6_GPIO_Port GPIOA
#define LEDA7_Pin GPIO_PIN_7
#define LEDA7_GPIO_Port GPIOA
#define LEDB0_Pin GPIO_PIN_0
#define LEDB0_GPIO_Port GPIOB
#define LEDB1_Pin GPIO_PIN_1
#define LEDB1_GPIO_Port GPIOB
#define BUTTON_Pin GPIO_PIN_12
#define BUTTON_GPIO_Port GPIOB
#define LEDB13_Pin GPIO_PIN_13
#define LEDB13_GPIO_Port GPIOB
#define LEDB14_Pin GPIO_PIN_14
#define LEDB14_GPIO_Port GPIOB
#define LEDA8_Pin GPIO_PIN_8
#define LEDA8_GPIO_Port GPIOA
#define LEDA9_Pin GPIO_PIN_9
#define LEDA9_GPIO_Port GPIOA
#define LEDA10_Pin GPIO_PIN_10
#define LEDA10_GPIO_Port GPIOA
#define LEDA11_Pin GPIO_PIN_11
#define LEDA11_GPIO_Port GPIOA
#define LEDA12_Pin GPIO_PIN_12
#define LEDA12_GPIO_Port GPIOA
#define LEDB5_Pin GPIO_PIN_5
#define LEDB5_GPIO_Port GPIOB
#define LEDB6_Pin GPIO_PIN_6
#define LEDB6_GPIO_Port GPIOB
#define LEDB7_Pin GPIO_PIN_7
#define LEDB7_GPIO_Port GPIOB
#define LEDB8_Pin GPIO_PIN_8
#define LEDB8_GPIO_Port GPIOB
#define LEDB9_Pin GPIO_PIN_9
#define LEDB9_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
