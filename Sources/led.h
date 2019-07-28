/*
 * led.h
 *
 *  Created on: Jul 27, 2019
 *      Author: ywu1
 */

#ifndef LED_H_
#define LED_H_

#include "pin_mux.h"
#include "pins_driver.h"


typedef enum{

	xLED_ON = 1,
	xLED_OFF

}xLED_Status;


#define RGB_RED_PORT	PTD
#define RGB_GREEN_PORT	PTD
#define RGB_BLUE_PORT	PTE

#define RGB_RED			16
#define RGB_GREEN		15
#define RGB_BLUE		8




void LED_RGB_RED_Ctrl(xLED_Status xStatus);
void LED_RGB_GREEN_Ctrl(xLED_Status xStatus);
void LED_RGB_BLUE_Ctrl(xLED_Status xStatus);


vLedTask(void *pvParameter);

#endif /* LED_H_ */
