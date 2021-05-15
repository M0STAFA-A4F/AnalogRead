#define F_CPU 8000000UL
#include <util/delay.h>

#include "STD_TYPES.h"
#include "DIO_Interface.h"
#include "ADC_Interface.h"


#define RedLed		1
#define YellowLed	2
#define GreenLed	4

#define pot			0

int main()
{
	DIO_VidSetPinDirection(PORTC, 0, OUTPUT);
	DIO_VidSetPinDirection(PORTC, 1, OUTPUT);
	DIO_VidSetPinDirection(PORTC, 2, OUTPUT);

	ADC_VidInit();

	while(1)
	{
		if(ADC_U16ReadData(pot) <= 341)
		{
			DIO_VidSetPortValue(PORTC, RedLed);
		}
		else if(ADC_U16ReadData(pot) > 341 && ADC_U16ReadData(pot) <= 682)
		{
			DIO_VidSetPortValue(PORTC, YellowLed);
		}
		else
		{
			DIO_VidSetPortValue(PORTC, GreenLed);
		}
	}

	return 0;
}
