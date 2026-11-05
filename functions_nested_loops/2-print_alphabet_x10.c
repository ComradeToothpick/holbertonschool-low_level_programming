#include "main.h"

/**
 * print_alphabet_x10 - prints each letter of the alphabet in lower case,
 * followed by a new line, repeats this 10 times
 */
void print_alphabet_x10(void)
{
	int n;
	int repeats;

	repeats = 0;
	while (repeats < 10)
	{
		n = 0;
		repeats++;
		while (n < 26)
		{
			_putchar(97 + n++);
		}
		_putchar('\n');
	}
}
