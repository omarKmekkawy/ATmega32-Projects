/*********************************************************************
 *  Author: Omar Mekkawy
 *  Subject: ATmega32 LED Blink
 *  Date of creation: 20-3-2020
 *  All Copyright reserved
 ********************************************************************/

// Include Area
#include <util/delay.h>
#include "MCAL/GPIO.h"
#include "MCAL/GPIO_Reg.h"

// Define Area
#define F_CPU 16000000UL // Define the clock speed of the AVR = 16MHz

int main(void)
{

	pinMode(DDRB,0,OUTPUT); // Set the PORTB Pin0 as output

	// Infinite Loop
    while(1)
    {
	   digitalWrite(PORTB,0,HIGH); // Write 1 to the Pin0 of PORTB
	   _delay_ms(500);             // Delay for 500ms
	   digitalWrite(PORTB,0,LOW);  // Write 0 to the Pin0 of PORTB
	   _delay_ms(500);             // Delay for 500ms
    }
    return 0;
}
