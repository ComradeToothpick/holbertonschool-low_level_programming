#include "main.h"

/**
 * leet - Converst the string starting at the address s to 1337sp34k
 * @s: The address of the first letter of the string
 * Return: The address to the converted string
 */
char *leet(char *s)
{
	int length;
	char c;

	c = '0';
	length = 0;
	while (c != 0)
	{
		c = *(s + length);
		*(s + length) = is_leet(c);
		length++;
	}
	return (s);
}

/**
 * is_leet - Checks if the char is convertable, then returns the char that
 * should be placed into the string
 * @c: The char to check
 * Return: The char that should go into the sting
 */
char is_leet(char c)
{
	char arr1[10];
	char arr2[10];
	int i;

	arr1[0] = 'a';
	arr1[1] = 'e';
	arr1[2] = 'o';
	arr1[3] = 't';
	arr1[4] = 'l';
	arr1[5] = 'A';
	arr1[6] = 'E';
	arr1[7] = 'O';
	arr1[8] = 'T';
	arr1[9] = 'L';
	arr2[0] = '4';
	arr2[1] = '3';
	arr2[2] = '0';
	arr2[3] = '7';
	arr2[4] = '1';
	arr2[5] = '4';
	arr2[6] = '3';
	arr2[7] = '0';
	arr2[8] = '7';
	arr2[9] = '1';
	i = 0;
	while (i < 10)
	{
		if (c == arr1[i])
		{
			return (arr2[i]);
		}
		i++;
	}
	return (c);
}
