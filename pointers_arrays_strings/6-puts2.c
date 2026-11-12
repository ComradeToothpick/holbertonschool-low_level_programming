#include "main.h"

/**
 * puts2 - prints every second character in the supplied string, followed by
 * a new line
 * @str: The memory address of the string to half print
 */
void puts2(char *str)
{
	int length;
	char c;

	length = 0;
	c = '0';
	while (c != 0)
	{
		c = *(str + length);
		if (c != 0 && (length % 2) == 0)
		{
			_putchar(c);
		}
		length++;
	}
	_putchar('\n');
}
