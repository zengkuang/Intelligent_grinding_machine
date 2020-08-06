#ifndef BUTTON_H
#define BUTTON_H

#include "main.h"

#define KEY0 		HAL_GPIO_ReadPin(GPIOE,GPIO_PIN_2) //PE2
#define KEY1 		HAL_GPIO_ReadPin(GPIOE,GPIO_PIN_3)	//PE3 

#define KEY2 		HAL_GPIO_ReadPin(GPIOE,GPIO_PIN_4) //PE4
#define KEY3 		HAL_GPIO_ReadPin(GPIOE,GPIO_PIN_5)	//PE5 

#define KEY4 		HAL_GPIO_ReadPin(GPIOE,GPIO_PIN_6) //PE6
#define KEY5 		HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13)	//PC13

#define KEY_Switch HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_0)	//PC0


int* KEY_Scan(void);
#endif
