/*
 * GPIO_Reg.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Admin
 */

#ifndef MCAL_GPIO_REG_H_
#define MCAL_GPIO_REG_H_

#define PINB  ((volatile unsigned char*)(0x36)) // PINB @ address 0x36#define DDRB  ((volatile unsigned char*)(0x37)) // DDRB @ address 0x37#define PORTB ((volatile unsigned char*)(0x38)) // PORTB @ address 0x38#define PINA  ((volatile unsigned char*)(0x39)) // PINA @ address 0x39#define DDRA  ((volatile unsigned char*)(0x3A)) // DDRA @ address 0x3A#define PORTA ((volatile unsigned char*)(0x3B)) // PORTA @ address 0x3B#define PINC  ((volatile unsigned char*)(0x33)) // PINC @ address 0x33#define DDRC  ((volatile unsigned char*)(0x34)) // DDRC @ address 0x34#define PORTC ((volatile unsigned char*)(0x35)) // PORTC @ address 0x35

#define PIND  ((volatile unsigned char*)(0x30)) // PIND @ address 0x30
#define DDRD  ((volatile unsigned char*)(0x31)) // DDRD @ address 0x31
#define PORTD ((volatile unsigned char*)(0x32)) // PORTD @ address 0x32#endif /* MCAL_GPIO_REG_H_ */