#include "main.h"

/**
 * print_rev - Takes a the memory address of a string and prints ots reverse
 * @s: the memory address of the string
 */
void print_rev(char *s)
{
	int length;
	char c;

	length = 0;
	c = 0;
	while (c != 0 || length == 0)
	{
		c = *(s + length);
		if (c != 0)
		{
			length++;
		}
	}
	while (length >= 0)
	{
		c = *(s + length--);
		_putchar(c);
	}
	_putchar('\n');
}
