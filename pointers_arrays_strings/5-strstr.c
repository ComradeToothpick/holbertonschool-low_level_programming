#include "main.h"
#include <stddef.h>

/**
 * _strstr - Finds the first occurance of the substring needle in the string
 * haystack. Returns a pointer with the address of the begining of the first
 * occurance.
 * @haystack: The string to search
 * @needle: The substring to search for
 * Return: The address of the first occurance of needle in haystack, or NULL
 * if no occurance is found
 */
char *_strstr(char *haystack, char *needle)
{
	char c;
	int i;
	int needle_found;

	c = '0';
	i = 0;
	needle_found = 0;
	while (c != 0)
	{
		c = *(haystack + i);
		if (c != 0 && c == *needle)
		{
			needle_found = valid_string(haystack + i, needle);
			if (needle_found == 1)
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}

/**
 * valid_string - Checks if the string accept begins at the address s
 * @s: the address of the beginning of a potential match to accept
 * @accept: The substring s is being validated against
 * Return: 1 if the substring was found, otherwise 0
 */
int valid_string(char *s, char *accept)
{
	int i;
	char c;

	i = 0;
	c = '0';
	while (c != 0)
	{
		c = *(accept + i);
		if (c == 0 && i > 0)
		{
			return (1);
		}
		if (c != *(s + i))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
