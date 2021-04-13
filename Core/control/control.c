/*
 * control.c
 *
 *  Created on: Apr 12, 2021
 *      Author: 10970
 */

#include "control.h"
#include <stdlib.h>
#include "stm32f1xx_hal.h"
#include "gpio.h"
#include "tim.h"

#define Amplitude 7100


void Set_Pwm(int moto)
{
	if(moto>Amplitude) moto = Amplitude;
	if(moto<-Amplitude) moto = -Amplitude;
	if(moto>0){
		HAL_GPIO_WritePin(GPIOB, AIN1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, AIN2_Pin, SET);
	}
	else{
		HAL_GPIO_WritePin(GPIOB, AIN1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, AIN2_Pin, RESET);
	}
	__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_1,abs(moto));
}

int Incremental_PI (int Encoder,int Target)
{
	float Kp=20,Ki=30;
	static int Bias,Pwm,Last_bias;
	Bias=Encoder-Target;
	Pwm+=Kp*(Bias-Last_bias)+Ki*Bias;
	Last_bias=Bias;
	return Pwm;
}
