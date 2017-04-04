#include "sys.h"
#include "delay.h"  
#include "led.h"
#include "timer.h"
//ALIENTEK ̽����STM32F407������ ʵ��8
//��ʱ���ж�ʵ��  
//����֧�֣�www.openedv.com
//������������ӿƼ����޹�˾
  
int main(void)
{  
	Stm32_Clock_Init(336,8,2,7);//����ʱ��,168Mhz 
	delay_init(168);			//��ʱ��ʼ��  
	LED_Init();		  			//��ʼ��LED
 	TIM3_Int_Init(5000-1,8400-1);//10Khz�ļ���Ƶ�ʣ�����5K��Ϊ500ms     
	while(1)
	{
		LED0=!LED0;
		delay_ms(200);
	};
}
