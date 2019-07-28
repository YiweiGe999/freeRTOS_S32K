/*
 * uart.c
 *
 *  Created on: Jul 27, 2019
 *      Author: ywu1
 */
#include "uart.h"
#include "string.h"
uint8_t u8Flag = 0;

void Uart_RxCallback(void *driverState, uart_event_t event, void *userData)
{
	u8Flag = 1;
}

void vUartTask(void *pvParameter)
{
	(void)pvParameter;
	uint8_t u8RxBuffer[32] = {0};
	uint32_t bytesRemaining = 0;

	for(;;)
	{
		UART_ReceiveData(&uart_pal1_instance,u8RxBuffer,32);
		if(u8Flag == 1)
		{
			u8Flag = 0;
			UART_SendData(&uart_pal1_instance,u8RxBuffer,strlen(u8RxBuffer));
		}



	    /*if(UART_GetReceiveStatus(&uart_pal1_instance, &bytesRemaining) == STATUS_SUCCESS)
	    {
	    	UART_SendData(&uart_pal1_instance,&u8RxBuffer,1);
	    }*/

	    vTaskDelay(10);

	}

}
