#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s: The string to search
 * @accept: The search term, containing the bytes to check against s
 * Return: The number of bytes from the start of s that contain
 * only bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	char c;
	unsigned int accepted;

	i = 0;
	c = '0';
	accepted = 0;
	while (c != 0)
	{
		c = *(s + i);
		i++;
		if (is_accept(c, accept) == 1)
		{
			accepted++;
		}
		else
		{
			return (accepted);
		}
	}
	return (accepted);
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
		if (c == accept_c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
