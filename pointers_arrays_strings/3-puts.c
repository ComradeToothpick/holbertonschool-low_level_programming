#include "main.h"

/**
 * _puts - prints the string str using _putchar
 * @str: the memory address of the string to print
 */
void _puts(char *str)
{
	int length;
	char c;

	length = 0;
	c = 0;
	while (c != 0 || length == 0)
	{
		c = *(str + length++);
		if (c != 0)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
