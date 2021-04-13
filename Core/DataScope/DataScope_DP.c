#include "DataScope_DP.h"
uint8_t DataScope_OutPut_Buffer[42] = {0};	   //���ڷ��ͻ�����


//����˵�����������ȸ�������ת��4�ֽ����ݲ�����ָ����ַ 
//����˵�����û�����ֱ�Ӳ����˺��� 
//target:Ŀ�굥��������
//buf:��д������
//beg:ָ��������ڼ���Ԫ�ؿ�ʼд��
//�����޷��� 
void Float2Byte(float *target,uint8_t *buf,uint8_t beg)
{
    uint8_t *point;
    point = (uint8_t*)target;	  //�õ�float�ĵ�ַ
    buf[beg]   = point[0];
    buf[beg+1] = point[1];
    buf[beg+2] = point[2];
    buf[beg+3] = point[3];
}
 
 
//����˵������������ͨ���ĵ����ȸ�������д�뷢�ͻ�����
//Data��ͨ������
//Channel��ѡ��ͨ����1-10��
//�����޷��� 
void DataScope_Get_Channel_Data(float Data,uint8_t Channel)
{
	if ( (Channel > 10) || (Channel == 0) ) return;  //ͨ����������10�����0��ֱ����������ִ�к���
  else
  {
     switch (Channel){
		case 1:  Float2Byte(&Data,DataScope_OutPut_Buffer,1); break;
		case 2:  Float2Byte(&Data,DataScope_OutPut_Buffer,5); break;
		case 3:  Float2Byte(&Data,DataScope_OutPut_Buffer,9); break;
		case 4:  Float2Byte(&Data,DataScope_OutPut_Buffer,13); break;
		case 5:  Float2Byte(&Data,DataScope_OutPut_Buffer,17); break;
		case 6:  Float2Byte(&Data,DataScope_OutPut_Buffer,21); break;
		case 7:  Float2Byte(&Data,DataScope_OutPut_Buffer,25); break;
		case 8:  Float2Byte(&Data,DataScope_OutPut_Buffer,29); break;
		case 9:  Float2Byte(&Data,DataScope_OutPut_Buffer,33); break;
		case 10: Float2Byte(&Data,DataScope_OutPut_Buffer,37); break;
     }
  }	 
}


//����˵�������� DataScopeV1.0 ����ȷʶ���֡��ʽ
//Channel_Number����Ҫ���͵�ͨ������
//���ط��ͻ��������ݸ���
//����0��ʾ֡��ʽ����ʧ�� 
uint8_t DataScope_Data_Generate(uint8_t Channel_Number)
{
	if ( (Channel_Number > 10) || (Channel_Number == 0) ) { return 0; }  //ͨ����������10�����0��ֱ����������ִ�к���
  else
  {	
	 DataScope_OutPut_Buffer[0] = '$';  //֡ͷ
		
	 switch(Channel_Number)   
   { 
		 case 1:   DataScope_OutPut_Buffer[5]  =  5; return  6;  
		 case 2:   DataScope_OutPut_Buffer[9]  =  9; return 10;
		 case 3:   DataScope_OutPut_Buffer[13] = 13; return 14; 
		 case 4:   DataScope_OutPut_Buffer[17] = 17; return 18;
		 case 5:   DataScope_OutPut_Buffer[21] = 21; return 22;  
		 case 6:   DataScope_OutPut_Buffer[25] = 25; return 26;
		 case 7:   DataScope_OutPut_Buffer[29] = 29; return 30; 
		 case 8:   DataScope_OutPut_Buffer[33] = 33; return 34; 
		 case 9:   DataScope_OutPut_Buffer[37] = 37; return 38;
		 case 10:  DataScope_OutPut_Buffer[41] = 41; return 42;
   }	 
  }
	return 0;
}











