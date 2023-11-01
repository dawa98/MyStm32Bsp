/* Includes ------------------------------------------------------------------*/
#include "MyApplication.h"

/* Private define-------------------------------------------------------------*/

/* Private variables----------------------------------------------------------*/
static void Peripheral_Set(void); 

/* Public variables-----------------------------------------------------------*/
MyInit_t MyInit = 
{
	Peripheral_Set
};

/* Private function prototypes------------------------------------------------*/      


/*
	* @name   Peripheral_Set
	* @brief  外设设置
	* @param  None
	* @retval None      
*/
static void Peripheral_Set()
{
	/*printf("----STM32物联网实战项目 - 代码整合2----\r\n");
	printf("Initialization completed, system startup!\r\n");
	printf("Software version is V%.1f\r\n\r\n",SoftWare_Version);
	
	printf("指示灯说明:\r\n");
	printf("LED1 : 系统指示灯，    间隔1s闪烁\r\n");		
	printf("LED2 : 电机转动指示灯，灯亮表示单极性步进电机正在转动\r\n");
	printf("LED3 : WIFI联网指示灯，灯亮表示联网成功\r\n");
	printf("PNP灯: TCP指示灯，     灯亮表示TCP连接成功\r\n");
	printf("NPN灯: WIFI模块返回异常指示灯，灯亮表示WIFI模块返回异常\r\n\r\n");
		
	printf("KEY1：单击控制单极性步进电机启动/停止\r\n");
	printf("KEY2：单击控制单极性步进电机加速\r\n");
	printf("KEY3：单击控制单极性步进电机减速\r\n");
	printf("KEY4：单击控制单极性步进电机换向\r\n");
	printf("KEY4：长按，WIFI模块进入配网模式\r\n");*/
	int a;
	
	
	printf("wihile前运行一次%d\r\n",sizeof(a));
	
	
	
}

/********************************************************
  End Of File
********************************************************/
