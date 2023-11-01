#ifndef __LED_H__
#define __LED_H__

#include "MyApplication.h"

//定义枚举类型
typedef enum
{
	LED_R = (uint8_t)0x01,
	LED_G = (uint8_t)0x02,
	LED_B = (uint8_t)0x03,
}LED_Num_t;

//定义结构体类型
typedef struct
{
	void (*LED_ON)(uint8_t);     //打开
	void (*LED_OFF)(uint8_t);    //关闭
	void (*LED_Flip)(uint8_t);   //翻转
} LED_t;

/* extern variables-----------------------------------------------------------*/
extern LED_t  LED;


#endif
/********************************************************
  End Of File
********************************************************/
