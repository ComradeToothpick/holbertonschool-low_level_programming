#include "main.h"

/**
 * puts_half - prints only the second half of a string
 * @str: the character pointer at the beginning of the string to print half of
 */
void puts_half(char *str)
{
	int length;
	int i;
	char c;

	length = 0;
	c = '0';
	while (c != 0)
	{
		c = *(str + length);
		if (c != 0)
		{
			length++;
		}
	}
	i = (length + 1) / 2;
	while (i < length)
	{
		c = *(str + i);
		if (c != 0)
		{
			_putchar(c);
			i++;
		}
	}
	_putchar('\n');
}
