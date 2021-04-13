

#ifndef __DATASCOPE_DP_H
#define __DATASCOPE_DP_H
 
#include "stm32f1xx_hal.h"

extern uint8_t DataScope_OutPut_Buffer[42];	   //������֡���ݻ�����

void Float2Byte(float *target,uint8_t *buf,uint8_t beg);

void DataScope_Get_Channel_Data(float Data,uint8_t Channel);    // дͨ�������� ������֡���ݻ�����

uint8_t DataScope_Data_Generate(uint8_t Channel_Number);  // ����֡�������ɺ���
 
 
#endif 



