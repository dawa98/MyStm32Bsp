/* Includes ------------------------------------------------------------------*/
#include "MyApplication.h"

/* Private define-------------------------------------------------------------*/

/* Private variables----------------------------------------------------------*/
static void LED_ON(uint8_t); 
static void LED_OFF(uint8_t);
static void LED_Flip(uint8_t);
/* Private function prototypes------------------------------------------------*/      

	
/* Public variables-----------------------------------------------------------*/

LED_t LED = 
{
	LED_ON,
	LED_OFF,
	LED_Flip
};


/*
	* @name   
	* @brief  
	* @param  None
	* @retval None      
*/
/*
	* @name   LED_ON
	* @brief  打开LED
	* @param  Num -> 编号
	* @retval None      
*/
static void LED_ON(uint8_t LED_Num)
{
	//条件选择语句
	switch(LED_Num)
	{
		case LED_R: HAL_GPIO_WritePin(LED_R_GPIO_Port,LED_R_Pin,GPIO_PIN_RESET); break;
		case LED_G: HAL_GPIO_WritePin(LED_G_GPIO_Port,LED_G_Pin,GPIO_PIN_RESET); break;
		case LED_B: HAL_GPIO_WritePin(LED_B_GPIO_Port,LED_B_Pin,GPIO_PIN_RESET); break;
		default: System.Assert_Failed();
	}
}

/*
	* @name   LED_OFF
	* @brief  关闭LED
	* @param  Num -> 编号
	* @retval None      
*/
static void LED_OFF(uint8_t LED_Num)
{
//条件选择语句
	switch(LED_Num)
	{
		case LED_R: HAL_GPIO_WritePin(LED_R_GPIO_Port,LED_R_Pin,GPIO_PIN_SET); break;
		case LED_G: HAL_GPIO_WritePin(LED_G_GPIO_Port,LED_G_Pin,GPIO_PIN_SET); break;
		case LED_B: HAL_GPIO_WritePin(LED_B_GPIO_Port,LED_B_Pin,GPIO_PIN_SET); break;
		default: System.Assert_Failed();
	}
}

/*
	* @name   LED_Flip
	* @brief  取反LED
	* @param  Num -> 编号
	* @retval None      
*/
static void LED_Flip(uint8_t LED_Num)
{
//条件选择语句
	switch(LED_Num)
	{
		case LED_R: HAL_GPIO_TogglePin(LED_R_GPIO_Port,LED_R_Pin); break;
		case LED_G: HAL_GPIO_TogglePin(LED_G_GPIO_Port,LED_G_Pin); break;
		case LED_B: HAL_GPIO_TogglePin(LED_B_GPIO_Port,LED_B_Pin); break;
		default: System.Assert_Failed();
	}
}

/********************************************************
  End Of File
********************************************************/
