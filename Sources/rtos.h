/*
 * rtos.h
 *
 *  Created on: Jul 27, 2019
 *      Author: ywu1
 */

#ifndef RTOS_H_
#define RTOS_H_

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "timers.h"

#include "led.h"
#include "uart.h"


#define configLED_TASK_STACK_SIZE			20
#define configLED_TASK_PRIORITY				(tskIDLE_PRIORITY + 2)

#define configUART_TASK_STACK_SIZE			200
#define configUART_TASK_PRIORITY				(tskIDLE_PRIORITY + 1)

void RTOS_Init(void);
void RTOS_Start(void);


#endif /* RTOS_H_ */
