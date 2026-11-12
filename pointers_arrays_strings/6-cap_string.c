#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in the string s
 * @s: The address of the first character of the string
 * Return: The address of the now capitalized string
 */
char *cap_string(char *s)
{
	int length;
	char c;
	char prev_c;

	length = 0;
	c = '0';
	prev_c = ' ';
	while (c != 0)
	{
		c = *(s + length);
		if (is_seperator(prev_c) == 1 && c >= 'a' && c <= 'z')
		{
			*(s + length) -= 32;
		}
		prev_c = c;
		length++;
	}
	return (s);
}

/**
 * is_seperator - Checks the character c against a predefined string of allowed
 * seperators
 * @c: the input character to compare
 * Return: 1 if c is a seperator, 0 otherwise
 */
int is_seperator(char c)
{
	int n;
	char string[13];

	string[0] = ' ';
	string[1] = '	';
	string[2] = '\n';
	string[3] = ',';
	string[4] = '.';
	string[5] = ';';
	string[6] = '!';
	string[7] = '?';
	string[8] = '"';
	string[9] = ')';
	string[10] = '(';
	string[11] = '}';
	string[12] = '{';
	n = 0;
	while (n < 13)
	{
		if (c == string[n++])
		{
			return (1);
		}
	}
	return (0);
}
