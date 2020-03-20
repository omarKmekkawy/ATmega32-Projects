#include "GPIO.h"

/*******************************************************************************
 * The pinMode function sets a GPIO's pin as input or output
 *
 * Usage: pinMode(DDRB,2,INPUT);
 * This sets the Pin2 of PORTB as input
 * Parameters:
 * 1- DDRx: it takes a pointer to the Data Direction Register (DDRx) where x is ( A,B,C,D )
 * 2- PinNo: it represents the required pin number ( 0 to 7 )
 * 3- GPIOType: it takes one of two values (INPUT or OUTPUT)
 ******************************************************************************/
void pinMode(volatile unsigned char* DDRx, unsigned char PinNo,	GPIO_Type GPIOType) {

	if (GPIOType == INPUT) {
		*DDRx &= ~(1 << PinNo);
	} else {
		*DDRx |= (1 << PinNo);
	}

}

/*******************************************************************************
 * The digitalWrite function writes a specific bit with 0 or 1
 *
 * Usage: digitalWrite(PORTB,1,LOW);
 * This writes 0 to the pin1 of PORTB
 * Parameters:
 * 1- PORTx: it takes a pointer to the PORT Register (PORTx) where x is ( A,B,C,D )
 * 2- PinNo: it represents the required pin number ( 0 to 7 )
 * 3- GPIOValue: it takes one of two values (HIGH or LOW) HIGH = 1 , LOW = 0
 ******************************************************************************/
void digitalWrite(volatile unsigned char* PORTx, unsigned char PinNo, GPIO_Value GPIOValue) {

	if (GPIOValue == HIGH){
		*PORTx |= (1<<PinNo);
	}
	else {
		*PORTx &= ~(1<<PinNo);
	}

}
