#include "main.h"

/**
 * print_last_digit - Prints the value of the last digit of a given integer n
 * @n: input integer to take the last digit of
 * Return: The value of the last digit of n
 */
int print_last_digit(int n)
{
	int o;

	o = n % 10;
	if (o < 0)
	{
		o = o * -1;
	}
	_putchar('0' + o);
	return (o);
}
