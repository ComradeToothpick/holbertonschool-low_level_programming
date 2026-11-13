#include "main.h"

/**
 * _memcpy - Copies the first n bytes of memory from the address src
 * to the address dest
 * @dest: The destination memory address
 * @src: The source memory address
 * @n: The number of bytes to copy
 * Return: The destination address (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
