#ifndef _STEP_MOTOR_H
#define _STEP_MOTOR_H

#include "main.h"
#include "tim.h"

#define motor1_locked HAL_GPIO_WritePin(GPIOD,GPIO_PIN_2,GPIO_PIN_SET);
#define motor1_unlock HAL_GPIO_WritePin(GPIOD,GPIO_PIN_2,GPIO_PIN_RESET);

#define motor1_left HAL_GPIO_WritePin(GPIOD,GPIO_PIN_3,GPIO_PIN_SET);
#define motor1_right HAL_GPIO_WritePin(GPIOD,GPIO_PIN_3,GPIO_PIN_RESET);

#define motor1_high_pluse   HAL_GPIO_WritePin(GPIOD,GPIO_PIN_4,GPIO_PIN_SET);
#define motor1_low_pluse   HAL_GPIO_WritePin(GPIOD,GPIO_PIN_4,GPIO_PIN_RESET);

#define motor2_locked HAL_GPIO_WritePin(GPIOD,GPIO_PIN_5,GPIO_PIN_SET);
#define motor2_unlock HAL_GPIO_WritePin(GPIOD,GPIO_PIN_5,GPIO_PIN_RESET);

#define motor2_left HAL_GPIO_WritePin(GPIOD,GPIO_PIN_6,GPIO_PIN_SET);
#define motor2_right HAL_GPIO_WritePin(GPIOD,GPIO_PIN_6,GPIO_PIN_RESET);

#define motor2_high_pluse  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_7,GPIO_PIN_SET);
#define motor2_low_pluse  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_7,GPIO_PIN_RESET);

#define motor3_locked HAL_GPIO_WritePin(GPIOC,GPIO_PIN_10,GPIO_PIN_SET);
#define motor3_unlock HAL_GPIO_WritePin(GPIOC,GPIO_PIN_10,GPIO_PIN_RESET);

#define motor3_left HAL_GPIO_WritePin(GPIOC,GPIO_PIN_11,GPIO_PIN_SET);
#define motor3_right HAL_GPIO_WritePin(GPIOC,GPIO_PIN_11,GPIO_PIN_RESET);

#define motor3_high_pluse   HAL_GPIO_WritePin(GPIOC,GPIO_PIN_12,GPIO_PIN_SET);
#define motor3_low_pluse   HAL_GPIO_WritePin(GPIOC,GPIO_PIN_12,GPIO_PIN_RESET);

#endif
