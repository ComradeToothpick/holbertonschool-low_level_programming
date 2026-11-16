#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatonates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: The new address of the combined strings, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	char c;

	i = 0;
	c = '0';
	while (c != 0 && s1 != NULL)
	{
		c = s1[i];
		i++;
	}
	j = 0;
	c = '0';
	while (c != 0 && s2 != NULL)
	{
		c = s2[j];
		j++;
	}
	return (str_concat_malloc(s1, s2, i + j));
}

/**
 * str_concat_malloc - Allocates memory for the combined string of s1 and s2
 * and returns the memory address of the combined string
 * @s1: The first string
 * @s2: The second string
 * @size: The size of the total string
 * Return: The memory address of the new combined string, or NULL if it fails
 */
char *str_concat_malloc(char *s1, char *s2, unsigned int size)
{
	char c;
	int i;
	int j;
	char *output;

	if (size == 0)
	{
		output = malloc(sizeof(char));
		if (output)
		{
			output[0] = '\0';
			return (output);
		}
		return (NULL);
	}
	output = malloc(sizeof(char) * size);
	if (output)
	{
		i = 0;
		j = 0;
		c = '0';
		while (c != 0 && s1 != NULL)
		{
			c = s1[i];
			if (c != 0)
			{
				output[i] = c;
				i++;
			}
		}
		c = '0';
		while (c != 0 && s2 != NULL)
		{
			c = s2[j];
			output[i + j] = c;
			j++;
		}
		return (output);
	}
	return (NULL);
}
