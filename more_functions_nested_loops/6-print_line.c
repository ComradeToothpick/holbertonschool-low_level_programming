#include "main.h"

/**
 * print_line - prints a row of '_' n times, followed by a new line
 * @n: the number of '_' to print
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
