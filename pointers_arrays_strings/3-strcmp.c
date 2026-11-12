#include "main.h"

/**
 * _strcmp - Compares each character in s1 to each character in s2,
 * returning the first non 0 difference
 * @s1: The first string to compare
 * @s2: The second string to compare
 * Return: The first non 0 difference or 0 if the strings are identical
 */
int _strcmp(char *s1, char *s2)
{
	int difference;
	int length;
	int null_found;

	null_found = 0;
	length = 0;
	difference = 0;
	while (difference == 0 && null_found == 0)
	{
		if (*(s1 + length) != *(s2 + length))
		{
			difference = *(s1 + length) - *(s2 + length);
		}
		else if (*(s1 + length) == '\0')
		{
			null_found = 1;
		}
		length++;
	}
	return (difference);
}
