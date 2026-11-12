#include "main.h"

/**
 * _strcat - Concatonates src to the end of dest, replacing the null character
 * in dest
 * @dest: The address of the first string to appear in the combined string
 * @src: The address of the second string to appear in the combined string
 * Return: The address of the combined string
 */
char *_strcat(char *dest, char *src)
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
	while (c != 0)
	{
		c = *(src + length2);
		*(dest + length1 + length2) = c;
		length2++;
	}
	return (dest);
}
