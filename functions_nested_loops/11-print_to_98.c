#include "main.h"

/**
 * print_to_98 - Prints the numbers from n to 98, followed by a new line
 * @n: The value to begin counting from
 */
void print_to_98(int n)
{
	int g;
	int temp;

	g = n;
	while (g != 98)
	{
		temp = g;
		if (temp < 0)
		{
			temp = temp * -1;
			_putchar('-');
		}
		if (g < 98)
		{
			g++;
		}
		else
		{
			g--;
		}
		if (temp >= 100)
		{
			_putchar('0' + hundreds_place(temp));
		}
		if (temp >= 10)
		{
			_putchar('0' + (((temp % 100) - (temp % 10)) / 10));
		}
		_putchar('0' + (temp % 10));
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

/**
 * hundreds_place - returns the value of the number in the hundreds place of n
 * @n: input integer
 * Return: The value of the number in the hundreds place of n
 */
int hundreds_place(int n)
{
	return ((n - (n % 100)) / 100);
}
