#include "main.h"

/**
 * _strcpy - copies the sring at src to the buffer pointed to by dest
 * @dest: the destination buffer to copy the sring to
 * @src: the source string to copy
 * Return: The pointer to the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int length;
	char c;

	length = 0;
	c = '0';
	while (c != 0)
	{
		c = *(src + length);
		*(dest + length) = c;
		length++;
	}
	return (dest);
}
