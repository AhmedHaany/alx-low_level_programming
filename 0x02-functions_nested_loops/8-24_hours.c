#include "main.h"

/**
 * jack_bauer - print every houre and minute
*/
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			putchar ((hr / 10) + '0');
			putchar ((hr % 10) + '0');
			putchar (':');
			putchar ((min / 10) + '0');
			putchar ((min % 10) + '0');
			putchar ('\n');
		}
	}
}
