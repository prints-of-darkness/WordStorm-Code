/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32h7xx_hal.h"

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
#define nOE_Pin GPIO_PIN_3
#define nOE_GPIO_Port GPIOE
#define nSLEEP_Pin GPIO_PIN_4
#define nSLEEP_GPIO_Port GPIOE
#define LAT_Pin GPIO_PIN_6
#define LAT_GPIO_Port GPIOE
#define STB4_Pin GPIO_PIN_13
#define STB4_GPIO_Port GPIOC
#define STB5_Pin GPIO_PIN_14
#define STB5_GPIO_Port GPIOC
#define STB6_Pin GPIO_PIN_15
#define STB6_GPIO_Port GPIOC
#define BUZZ_Pin GPIO_PIN_3
#define BUZZ_GPIO_Port GPIOA
#define STEP_Pin GPIO_PIN_6
#define STEP_GPIO_Port GPIOA
#define DIR_Pin GPIO_PIN_5
#define DIR_GPIO_Port GPIOC
#define MEN_Pin GPIO_PIN_0
#define MEN_GPIO_Port GPIOB
#define M0_Pin GPIO_PIN_1
#define M0_GPIO_Port GPIOB
#define RST_Pin GPIO_PIN_12
#define RST_GPIO_Port GPIOE
#define LEDEN_Pin GPIO_PIN_13
#define LEDEN_GPIO_Port GPIOE
#define USBEN_Pin GPIO_PIN_12
#define USBEN_GPIO_Port GPIOB
#define SDDET_Pin GPIO_PIN_15
#define SDDET_GPIO_Port GPIOA
#define STB1_Pin GPIO_PIN_10
#define STB1_GPIO_Port GPIOC
#define STB2_Pin GPIO_PIN_11
#define STB2_GPIO_Port GPIOC
#define STB3_Pin GPIO_PIN_12
#define STB3_GPIO_Port GPIOC
#define MTO_Pin GPIO_PIN_7
#define MTO_GPIO_Port GPIOB
#define HTO_Pin GPIO_PIN_8
#define HTO_GPIO_Port GPIOB
#define HUP_Pin GPIO_PIN_9
#define HUP_GPIO_Port GPIOB
#define MARK_Pin GPIO_PIN_0
#define MARK_GPIO_Port GPIOE
#define PAPER_Pin GPIO_PIN_1
#define PAPER_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
