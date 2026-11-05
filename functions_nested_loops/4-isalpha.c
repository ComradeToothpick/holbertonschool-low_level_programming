#include "main.h"

/**
 * _isalpha - checks the character to see if it is an alphabetical character
 * @c: The character to check
 * Return: 1 if c is lower case, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
