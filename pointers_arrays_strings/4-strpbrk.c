#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - Locates the first occurance in s of any of the bytes
 * in the string accept
 * @s: The address of the string to check
 * @accept: The string of acceptable characters
 * Return: The address of the first occurence of a byte from accept in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char c;

	i = 0;
	c = '0';
	while (c != 0)
	{
		c = *(s + i);
		if (is_accept(c, accept) == 1)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}

/**
 * is_accept - checks the char c against the string accept
 * @c: The character to check
 * @accept: The string of acceptable characters
 * Return: 1 if c is acceptable, otherwise 0
 */
int is_accept(char c, char *accept)
{
	int i;
	char accept_c;

	i = 0;
	accept_c = '0';
	while (accept_c != 0)
	{
		accept_c = *(accept + i);
		if (c == accept_c && accept_c != 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
