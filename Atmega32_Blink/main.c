#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= (1<<PORTB3);

    while(1)
    {
	   PORTB |= (1<<PORTB3);
	   _delay_ms(1000);
	   PORTB &= ~(1<<PORTB3);
	   _delay_ms(1000);
    }
}
