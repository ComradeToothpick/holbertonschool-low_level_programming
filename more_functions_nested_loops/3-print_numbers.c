#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		_putchar('0' + n++);
	}
	_putchar('\n');
}
