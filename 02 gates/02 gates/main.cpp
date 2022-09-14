#define F_CPU 8000000
#include <avr/io.h>


int main(void)
{
    DDRB=0xFF;
	PORTB=(0b11010010)^(0b10101010);
	
    while (1) 
    {
    }
}

