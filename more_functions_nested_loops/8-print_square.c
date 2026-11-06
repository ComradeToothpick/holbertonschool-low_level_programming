#include "main.h"

/**
 * print_square - prints a square with '#' of with side length of size
 * @size: Side length of the square
 */
void print_square(int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		i++;
		j = 0;
		while (j < size)
		{
			j++;
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
