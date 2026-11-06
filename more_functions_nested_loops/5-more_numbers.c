#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, followed by a new line
 * loops 10 times
 */
void more_numbers(void)
{
	int n;
	int loops;

	loops = 0;
	while (loops < 10)
	{
		n = 0;
		while (n < 15)
		{
			if (n >= 10)
			{
				_putchar('1');
			}
			_putchar('0' + (n++ % 10));
		}
		_putchar('\n');
		loops++;
	}
}
