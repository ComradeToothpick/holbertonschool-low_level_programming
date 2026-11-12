#include "main.h"

/**
 * string_toupper - Alters the string at address s by replacing all lower case
 * letters with upper case letters
 * @s: The address of the first character in the string
 * Return: The Address of the string that was altered
 */
char *string_toupper(char *s)
{
	int length;
	char c;

	c = '0';
	length = 0;
	while (c != 0)
	{
		c = *(s + length);
		if (c >= 'a' && c <= 'z')
		{
			*(s + length) -= 32;
		}
		length++;
	}
	return (s);
}
