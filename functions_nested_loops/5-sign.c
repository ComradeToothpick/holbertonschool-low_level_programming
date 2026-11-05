#include "main.h"

/**
 * print_sign - returns a value and prints a sign according to the value of n
 * @n: the character or integer to be checked
 * n > 0: prints '+'
 * n == 0: prints '0'
 * n < 0: prints '-'
 * Return: 1 if n > 0, 0 if n == 0, or -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
