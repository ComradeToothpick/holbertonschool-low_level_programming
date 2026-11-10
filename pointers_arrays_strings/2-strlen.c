#include "main.h"

/**
 * _strlen - Takes a memory address of a char, and returns the length of the
 * string that starts at that memory address
 * @s: the memory address of the start of an array of chaaracters (A string)
 * Return: The length of the string
 */
int _strlen(char *s)
{
	char c;
	int length;

	length = 0;
	c = *s;
	while (c > 0)
	{
		length++;
		c = *(s + length);
	}
	return (length);
}
