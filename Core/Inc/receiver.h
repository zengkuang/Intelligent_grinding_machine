#ifndef RECEIVER_H
#define RECEIVER_H

#include "main.h"

#define up_state HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_3)
#define middle_state HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_2)
#define down_state HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_1)

#endif
