#include <util/delay.h>
#include "../../stdTypes.h"

#define PORTA *((u8*)0x3B)
#define DDRA  *((u8*)0x3A)
#define PINA  *((volatile u8*)0x39)

int main(void)
{
	DDRA = ~(0);
	while(1){
		for(int i = 0; i <= 7; ++i)
		{
			PORTA |= (1<<i);
			_delay_ms(100);
		}
		for(int i = 0; i <= 7; ++i)
		{
			PORTA &=~ (1<<i);
			_delay_ms(100);
		}
	}
	return 0;
}
