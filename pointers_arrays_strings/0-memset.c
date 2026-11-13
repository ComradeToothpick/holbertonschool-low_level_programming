#include "main.h"

/**
 * _memset - Fills the first n bytes of memory  at s with a constant byte b
 * @s: The memory area to be filled
 * @b: The constant byte to fill with
 * @n: The number of bytes to fill
 * Return: The address of the newly filled data
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i++) = b;
	}
	return (s);
}
