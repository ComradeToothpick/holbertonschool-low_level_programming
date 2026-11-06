#include "main.h"

/**
 * print_diagonal - prints a diagonal line of '\',
 * with ' ' before to line them up
 * @n: the number of '\' to print
 */
void print_diagonal(int n)
{
	int i;
	int spaces;
	int loops;

	loops = 0;
	spaces = 0;
	while (loops < n)
	{
		loops++;
		i = 0;
		while (i < spaces)
		{
			_putchar(' ');
			i++;
		}
		spaces++;
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
