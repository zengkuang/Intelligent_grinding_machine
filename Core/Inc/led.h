#ifndef LED_H
#define LED_H

#include "main.h"

#define led_on	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,	GPIO_PIN_RESET);
#define led_off  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET);


#endif
