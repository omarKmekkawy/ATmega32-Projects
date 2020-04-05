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
#include "HAL/LCD.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// Define Area
#define F_CPU 16000000UL // Define the clock speed of the AVR = 16MHz

int x = 0;      // Int Variable to be printed on LCD
float y = 0;    // Float Variable to be printed on LCD
char string[8]; // Char Buffer for LCD
int main(void) {
	LCD_init(); // Initialize the LCD
	_delay_ms(50); // Delay for 50ms


	LCD_String_xy(0,0,"Print Float& Int");
	_delay_ms(5000);
    LCD_Clear();
	LCD_String_xy(0,0,"X= ");
	LCD_String_xy(1,0,"Y= ");

	while (1) {

		y += 0.01;
		x++;

		sprintf(string,"%d",x);
		LCD_String_xy(0,3,string);

		dtostrf(y,3,2,string);
		LCD_String_xy(1,3,string);

		_delay_ms(10);
	}
	return 0;
}
