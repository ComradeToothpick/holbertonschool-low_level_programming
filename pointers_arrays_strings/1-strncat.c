#include "main.h"

/**
 * _strncat - Concatonates the first n characters of src to dest, adding null
 * character to the end if not included in the component of src that was copied
 * @dest: The address of the first component of the final string
 * @src: The address of the second part of the final string
 * @n: The amount of characters to include from the start of src
 * Return: The address of the concatonated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char c;
	int length1;
	int length2;

	c = '0';
	length1 = 0;
	while (c != 0)
	{
		c = *(dest + length1);
		if (c != 0)
		{
			length1++;
		}
	}
	c = '0';
	length2 = 0;
	while (c != 0 && length2 < n)
	{
		c = *(src + length2);
		*(dest + length1 + length2) = c;
		length2++;
	}
	if (*(dest + length1 + length2) != 0)
	{
		*(dest + length1 + length2 + 1) = '\0';
	}
	return (dest);
}
