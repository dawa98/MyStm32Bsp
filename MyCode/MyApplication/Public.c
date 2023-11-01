/* Includes ------------------------------------------------------------------*/
#include "MyApplication.h"

/* Private define-------------------------------------------------------------*/

/* Private variables----------------------------------------------------------*/
static void Memory_Clr(uint8_t*,uint16_t);   //内存清除函数

/* Public variables-----------------------------------------------------------*/
Public_t  Public = 
{
  Memory_Clr
};

/* Private function prototypes------------------------------------------------*/      

/*
	* @name   Memory_Set
	* @brief  内存清除函数
	* @param  pucBuffer -> 内存首地址
						LEN       -> 内存长度   
	* @retval None      
*/
static void Memory_Clr(uint8_t* pucBuffer,uint16_t LEN)
{
	uint16_t i;
	
	for(i=0;i<LEN;i++)
	{
		*(pucBuffer+i) = (uint8_t)0;
	}
}

/*
	* @name   fputc
	* @brief  fputc映射物理串口
	* @param  ch -> 待发送字符
	* @retval ch -> 已发送字符      
*/
int fputc(int ch,FILE* f)
{
	//通过查询的方式循环发送
	HAL_UART_Transmit(&huart_debug, (uint8_t *)&ch, 1, 0x000A);

	return ch;
}
/********************************************************
  End Of File
********************************************************/
