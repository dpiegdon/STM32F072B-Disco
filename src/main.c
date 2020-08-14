
#include "stm32f072b_discovery.h"

int main(void)
{
	BSP_LED_Init(LED3);
	BSP_LED_Init(LED4);
	BSP_LED_Init(LED5);
	BSP_LED_Init(LED6);

	for(;;)
	{
		BSP_LED_Toggle(LED3);
		for (int j = 0; j < 100000; j++)
			;

		BSP_LED_Toggle(LED4);
		for (int j = 0; j < 100000; j++)
			;

		BSP_LED_Toggle(LED5);
		for (int j = 0; j < 100000; j++)
			;

		BSP_LED_Toggle(LED6);
		for (int j = 0; j < 100000; j++)
			;
	}

	return 0;
}
