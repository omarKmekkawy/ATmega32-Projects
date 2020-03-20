/*
 * GPIO_Reg.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Admin
 */

#ifndef MCAL_GPIO_REG_H_
#define MCAL_GPIO_REG_H_

#define PINB  ((volatile unsigned char*)(0x36)) // PINB @ address 0x36
#define DDRB  ((volatile unsigned char*)(0x37)) // PINB @ address 0x37
#define PORTB ((volatile unsigned char*)(0x38)) // PINB @ address 0x38

#define PINA  ((volatile unsigned char*)(0x39)) // PINB @ address 0x39
#define DDRA  ((volatile unsigned char*)(0x3A)) // PINB @ address 0x3A
#define PORTA ((volatile unsigned char*)(0x3B)) // PINB @ address 0x3B

#define PINC  ((volatile unsigned char*)(0x33)) // PINB @ address 0x33
#define DDRC  ((volatile unsigned char*)(0x34)) // PINB @ address 0x34
#define PORTC ((volatile unsigned char*)(0x35)) // PINB @ address 0x35


#endif /* MCAL_GPIO_REG_H_ */
