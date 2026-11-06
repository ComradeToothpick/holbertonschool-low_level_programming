#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * prints the numbers from 1 to 100, replacing multiples of 3 with "Fizz",
 * and multiples of 5 with "Buzz"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int loops;
	int replaced;

	loops = 1;
	while (loops <= 100)
	{
		replaced = 0;
		if (loops % 3 == 0)
		{
			replaced = 1;
			fizz();
		}
		if (loops % 5 == 0)
		{
			replaced = 1;
			buzz();
		}
		if (replaced == 0)
		{
			print_number(loops);
		}
		loops++;
		if (loops <= 100)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}

/**
 * fizz - prints "Fizz" using _putchar
 */
void fizz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
}

/**
 * buzz - prints "Buzz" using _putchar
 */
void buzz(void)
{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
}

/**
 * print_number - prints the number n using only _putchar
 * @n: The number (integer) to be printed
 */
void print_number(int n)
{
	if (n >= 10)
	{
		_putchar('0' + ((n - (n % 10)) / 10));
	}
	_putchar('0' + (n % 10));
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
