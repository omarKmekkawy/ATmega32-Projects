/*
 * GPIO_Reg.h
 *
 *  Created on: ??�/??�/????
 *      Author: Admin
 */

#ifndef MCAL_GPIO_REG_H_
#define MCAL_GPIO_REG_H_

#define PINB  ((volatile unsigned char*)(0x36)) // PINB @ address 0x36

#define PIND  ((volatile unsigned char*)(0x30)) // PIND @ address 0x30
#define DDRD  ((volatile unsigned char*)(0x31)) // DDRD @ address 0x31
#define PORTD ((volatile unsigned char*)(0x32)) // PORTD @ address 0x32