#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 except 2 and 4,
 * followed by a new line
 */
void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}
		n++;
	}
	_putchar('\n');
}
