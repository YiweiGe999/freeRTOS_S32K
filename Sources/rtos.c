/*
 * rtos.c
 *
 *  Created on: Jul 27, 2019
 *      Author: ywu1
 */


#include "rtos.h"

void RTOS_Init(void)
{
	xTaskCreate(vLedTask,"Led Task",configLED_TASK_STACK_SIZE,NULL,configLED_TASK_PRIORITY,NULL);
	xTaskCreate(vUartTask,"Uart Task",configUART_TASK_STACK_SIZE,NULL,configUART_TASK_PRIORITY,NULL);
}

void RTOS_Start(void)
{
	vTaskStartScheduler();
}
