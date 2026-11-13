#include <stddef.h>
#include "main.h"

/**
 * _strchr - Finds the first occurance of the character c in the string
 * starting at s and returns the address of that occurance
 * @s: The address of the string to search
 * @c: The character to look for
 * Return: The address of the first occurance of c in s,
 * or NULL on fail to find
 */
char *_strchr(char *s, char c)
{
	int i;
	char string_c;

	i = 0;
	string_c = '0';
	while (string_c != 0)
	{
		string_c = *(s + i);
		if (string_c == c)
		{
			return (s + i);
		}
		if (string_c != 0)
		{
			i++;
		}
	}
	return (NULL);
}
