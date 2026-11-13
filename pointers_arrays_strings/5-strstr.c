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

	if (*needle == 0)
	{
		return (haystack);
	}
	c = '0';
	i = 0;
	while (c != 0)
	{
		c = *(haystack + i);
		if (c != 0 && c == *needle)
		{
			needle_found = valid_string(haystack, needle, i);
			if (needle_found == -1)
			{
				return (haystack + i);
			}
			else
			{
				i += needle_found;
			}
		}
		i++;
	}
	return (NULL);
}

/**
 * valid_string - Checks if the string accept begins at the address s
 * @s: the address of the beginning character of the string to search
 * @accept: The substring s is being validated against
 * @k: How far into s to start checking for matches
 * Return: -1 if the substring was found, otherwise, then umber of
 * characters that were checked (i)
 */
int valid_string(char *s, char *accept, int k)
{
	int i;
	char c;

	if (*accept == 0)
	{
		return (-1);
	}
	i = 0;
	c = '0';
	while (c != 0)
	{
		c = *(accept + i);
		if (c == 0)
		{
			return (-1);
		}
		if (*(s + k + i) == 0)
		{
			return (i);
		}
		if (c != *(s + k + i))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
