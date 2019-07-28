/*
 * led.c
 *
 *  Created on: Jul 27, 2019
 *      Author: ywu1
 */

/* Kernel includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "timers.h"

#include "led.h"




void LED_RGB_RED_Ctrl(xLED_Status xStatus)
{
	PINS_DRV_WritePin(RGB_RED_PORT,RGB_RED,xStatus);
}

void LED_RGB_GREEN_Ctrl(xLED_Status xStatus)
{
	PINS_DRV_WritePin(RGB_GREEN_PORT,RGB_GREEN,xStatus);
}

void LED_RGB_BLUE_Ctrl(xLED_Status xStatus)
{
	PINS_DRV_WritePin(RGB_BLUE_PORT,RGB_BLUE,xStatus);
}

vLedTask(void *pvParameter)
{
	(void)pvParameter;

	for(;;)
	{
		LED_RGB_RED_Ctrl(xLED_ON);
		vTaskDelay(portTICK_PERIOD_MS * 1000);
		LED_RGB_RED_Ctrl(xLED_OFF);
		vTaskDelay(portTICK_PERIOD_MS * 1000);
	}

}

