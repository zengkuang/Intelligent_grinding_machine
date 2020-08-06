#include "step_motor.h"
#include "button.h"
#include "receiver.h"
#include "led.h"


uint8_t direction = 0;
int* key;
uint8_t motor1_lock = 1;
uint8_t motor2_lock = 1;
uint8_t motor3_lock = 1;


uint32_t count1 = 0;
uint32_t count2 = 0;
uint32_t count3 = 0;


uint32_t pluse_period = 50; // 50 * 10 us = 0.5ms = 2000 hz
uint32_t pluse_high = 10;

int auto_drive;
int switch_state;
int up;
int middle;
int down;
int pre_switch;

//int pulse_count = 0;
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef* tim_baseHandle)
{
		// TIMER 3 Interrupt
    if(tim_baseHandle->Instance == htim3.Instance){
			key = KEY_Scan();
			switch_state = KEY_Switch;
			up = up_state;
			middle = middle_state;
			down = down_state;
			
			switch (auto_drive){
				case 1:
					led_on;
				
					if(up ==0){
						motor1_lock = 0;
						motor1_left;
					}
					else if(middle == 0){
						motor1_lock = 1;
					}
					else if(down ==0){
						motor1_lock = 0;
						motor1_right;
					}
					else{
						motor1_lock = 1;
					
					}
				
				
					break;					
				case 0:
					
					led_off;
					
					// MOTOR 1
					if(key[0]){
						motor1_lock = 0;
						switch(key[0]){
							case 1:
								motor1_left;
								break;
							case 2:
								motor1_right;
								break;
							default:
								break;
						}
					
					}else{
						motor1_lock = 1;			
					}
					// MOTOR2
					if(key[1]){
						motor2_lock = 0;
						switch(key[1]){
							case 1:
								motor2_left;
								break;
							case 2:
								motor2_right;
								break;
							default:
								break;				
						}				
					}
					else{
						motor2_lock = 1;			
					}
					// MOTOR3
					if(key[2]){
						motor3_lock = 0;
						switch(key[2]){
							case 1:
								motor3_left;
								break;
							case 2:
								motor3_right;
								break;
							default:
								break;	
						}
					}
					else{
						motor3_lock = 1;
					}
					
				
				
				
					break;
					
				default:
					break;
			}

					
				

				
			
			if(switch_state == 0){
				if(pre_switch == 1){
					auto_drive = !auto_drive;
				}			
			}
			
			pre_switch = switch_state;
			
//			if(key){
//				motor_lock = 0;
//				switch(key){
//					case KEY0_PRES:	//direction 0
//						direction_left;
//						direction = 0;
//						break;
//					case KEY1_PRES:	//direction 1
//						direction_right;
//						direction = 1;
//						break;			
//				}			
//			}
//			else{
//				motor_lock = 1;
//			}
		}
		// TIMER 4 Interrupt
		else if(tim_baseHandle->Instance == htim4.Instance){
			// MOTOR1
			if(motor1_lock){
				motor1_locked;
			}
			else{
				motor1_unlock;
				count1++;
				if(count1 < pluse_high){
					motor1_high_pluse;
				}
				else{
					motor1_low_pluse;
				}
				
				if(count1 > pluse_period){
					count1 = 0;
				}		
			}
			// MOTOR2
			if(motor2_lock){
				motor2_locked;
			}
			else{
				motor2_unlock;
				count2++;
				
				if(count2 < pluse_high){
					motor2_high_pluse;
				}
				else{
					motor2_low_pluse;
				}
				
				if(count2 > pluse_period){
					count2 = 0;				
				}
			
			}
			// MOTOR3
			if(motor3_lock){
				motor3_locked;
			
			}
			else{
				motor3_unlock;
				count3++;
				
				if(count3<pluse_high){
					motor3_high_pluse;
				}
				else{
					motor3_low_pluse;
				}
				
				if(count3 > pluse_period){
					count3 = 0;
				}
			
			}
			
			
		}
		else{
		
		}

}

