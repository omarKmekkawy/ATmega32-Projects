/*********************************************************************
 *  Author: Omar Mekkawy
 *  Subject: ATmega32 IO
 *  Date of creation: 20-3-2020
 *  All Copyright reserved
 ********************************************************************/

// Include Area
#include <util/delay.h>
#include "MCAL/GPIO.h"
#include "MCAL/GPIO_Reg.h"

// Define Area
#define F_CPU 16000000UL // Define the clock speed of the AVR = 16MHzint main(void) {pinMode(DDRB,0,OUTPUT);      // Set the PORTB Pin0 as output
pinMode(DDRB,1,INPUT_PULLUP);// Set the PORTB Pin1 as input with pullup

// Infinite Loop
	while (1) {
		// check if the Push Button is pressed (with internal pull up resistor)
		if (!BIT_IS_SET(*PINB, 1)) {
			digitalWrite(PORTB,0,HIGH); // Write 1 to the Pin0 of PORTB
			_delay_ms(50); // Delay for 500ms
			digitalWrite(PORTB,0,LOW); // Write 0 to the Pin0 of PORTB
			_delay_ms(50); // Delay for 500ms
		}
	}
	return 0;
}
