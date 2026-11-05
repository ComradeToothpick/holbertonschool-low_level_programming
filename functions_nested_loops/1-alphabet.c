#include "main.h"

/**
 * print_alphabet - prints each letter of the alphabet in lower case,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	int n;

	n = 0;
	while (n < 26)
	{
		_putchar(97 + n++);
	}
	_putchar('\n');
	return (0);
}
