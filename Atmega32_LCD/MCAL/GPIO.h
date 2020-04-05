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

#define Setbit(Register,Bit) Register |= (1<<Bit)
#define Clrbit(Register,Bit) Register &= ~(1<<Bit)
#define tOGBIT(Register,Bit) 	(REG ^= (1 << BIT))
#define BIT_IS_SET(Register,Bit) (Register & (1 << Bit))
#define BIT_IS_CLEAR(Register,Bit)	(!(Register & (1 << Bit)))

void pinMode(volatile unsigned char* DDRx, unsigned char PinNo,
		GPIO_Type GPIOType);
void digitalWrite(volatile unsigned char* PORTx, unsigned char PinNo,
		GPIO_Value GPIOValue);
void portWrite(volatile unsigned char* PORTx, unsigned char Data);
#endif /* MCAL_GPIO_H_ */
