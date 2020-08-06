#include "button.h"


int* KEY_Scan(void){
	static int key[3];
	
	if(KEY0==0){
		key[0] = 1;
	}
	else if(KEY1==0){
		key[0] = 2;
	}
	else{
		key[0] = 0;		
	}
		
	if(KEY2==0){
		key[1] = 1;
	}
	else if(KEY3==0){
		key[1] = 2;
	}
	else{
		key[1] = 0;
	}
		
	if(KEY4==0){
		key[2] = 1;
	}
	else if(KEY5==0){
		key[2] = 2;
	}
	else{
		key[2] = 0;
	}
		
	return key;
}



