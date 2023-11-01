#ifndef __LED_H__
#define __LED_H__

#include "MyApplication.h"

//����ö������
typedef enum
{
	LED_R = (uint8_t)0x01,
	LED_G = (uint8_t)0x02,
	LED_B = (uint8_t)0x03,
}LED_Num_t;

//����ṹ������
typedef struct
{
	void (*LED_ON)(uint8_t);     //��
	void (*LED_OFF)(uint8_t);    //�ر�
	void (*LED_Flip)(uint8_t);   //��ת
} LED_t;

/* extern variables-----------------------------------------------------------*/
extern LED_t  LED;


#endif
/********************************************************
  End Of File
********************************************************/
