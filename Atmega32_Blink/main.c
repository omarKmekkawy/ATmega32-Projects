#include <util/delay.h>

#define F_CPU 16000000UL

#define DDRB *((volatile unsigned char*)(0x37))
#define PORTB *((volatile unsigned char*)(0x38))

int main(void)
{
	DDRB |= (1<<2);

    while(1)
    {
	   PORTB |= (1<<2);
	   _delay_ms(1000);
	   PORTB &= ~(1<<2);
	   _delay_ms(1000);
    }
}
