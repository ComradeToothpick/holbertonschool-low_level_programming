#include "main.h"

/**
 * print_triangle - prints a triangle with '#' with side lengths of size
 * @size: Side length of the square
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < size)
	{
		i++;
		j = size - i;
		k = i;
		while (j > 0)
		{
			j--;
			_putchar(' ');
		}
		while (k > 0)
		{
			k--;
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
