#include "main.h"

/**
 * _strncpy - Copies the first n characters of src to dest, adding null
 * character to the end if not included in the component of src that was copied
 * @dest: The address the first n bytes of src will be copied to
 * @src: The address of the second part of the final string
 * @n: The amount of characters to include from the start of src
 * Return: The address of the concatonated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char c;
	int length;

	c = '0';
	length = 0;
	while (c != 0 && length < n)
	{
		c = *(src + length);
		*(dest + length) = c;
		length++;
	}
	while (c == 0 && length < n)
	{
		*(dest + length) = '\0';
		length++;
	}
	return (dest);
}
