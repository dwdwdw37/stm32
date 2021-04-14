/*
 * control.h
 *
 *  Created on: Apr 12, 2021
 *      Author: 10970
 */

#ifndef CONTROL_H_
#define CONTROL_H_



void Set_Pwm(int moto);
int Incremental_PI (int Encoder,int Target,float Kp,float Ki);

#endif /* CONTROL_H_ */
