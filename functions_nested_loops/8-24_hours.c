#include "main.h"

/**
 * jack_bauer - Prints every possible time in 24 hour time format,
 * one time per line e.g. 23:59
 */
void jack_bauer(void)
{
	int hours;
	int minutes;

	hours = 0;
	minutes = 0;
	while (hours < 24)
	{
		while (minutes < 60)
		{
			_putchar('0' + (hours - (hours % 10)) / 10);
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (minutes - (minutes % 10)) / 10);
			_putchar('0' + (minutes % 10));
			_putchar('\n');
			minutes++;
		}
		minutes = 0;
		hours++;
	}
}
