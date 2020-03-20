#include <util/delay.h>
#include "MCAL/GPIO.h"
#include "MCAL/GPIO_Reg.h"

#define F_CPU 16000000UL

int main(void)
{

	pinMode(DDRB,0,OUTPUT);

    while(1)
    {
	   digitalWrite(PORTB,0,HIGH);
	   _delay_ms(500);
	   digitalWrite(PORTB,0,LOW);
	   _delay_ms(500);
    }
}
