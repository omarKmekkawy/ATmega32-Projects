/*
 * GPIO.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Admin
 */

#ifndef MCAL_GPIO_H_
#define MCAL_GPIO_H_

#include "GPIO_Reg.h"
#include "GPIO_Type_Def.h"



void pinMode(volatile unsigned char* DDRx, unsigned char PinNo, GPIO_Type GPIOType);
void digitalWrite(volatile unsigned char* PORTx,unsigned char PinNo,GPIO_Value GPIOValue);

#endif /* MCAL_GPIO_H_ */
