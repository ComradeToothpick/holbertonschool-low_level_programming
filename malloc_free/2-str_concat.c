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
	char *output;
	int s1_null;
	int s2_null;

	s1_null = 0;
	s2_null = 0;
	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		s1[0] = '\0';
		s1_null = 1;
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		s2[0] = '\0';
		s2_null = 1;
	}
	i = 0;
	c = '0';
	while (c != 0)
	{
		c = *(s1 + i);
		if (c != 0)
		{
			i++;
		}
	}
	j = 0;
	c = '0';
	while (c != 0)
	{
		c = *(s2 + j);
		j++;
	}
	output = str_concat_malloc(s1, s2, i + j);
	free_strings(s1, s2, s1_null, s2_null);
	return (output);
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

	i = 0;
	j = 0;
	c = '0';
	if (size == 0)
	{
		return ("");
	}
	output = malloc(sizeof(char) * size);
	if (output != NULL)
	{
		while (c != 0 && s1 != NULL)
		{
			c = *(s1 + i);
			if (c != 0)
			{
				output[i] = c;
				i++;
			}
		}
		c = '0';
		while (c != 0 && s2 != NULL)
		{
			c = *(s2 + j);
			output[i + j] = c;
			j++;
		}
		return (output);
	}
	return (NULL);
}

/**
 * free_strings - Frees the memory that was temporarily allocated
 * to s1 and s2 if needed
 * @s1: The memory address of the first string
 * @s2: The memory address of the second string
 * @s1_null: 1 if s1 needs to be freed, otherwise 0
 * @s2_null: 1 if s2 needs to be freed, otherwise 0
 */
void free_strings(char *s1, char *s2, int s1_null, int s2_null)
{
	if (s1_null == 1)
	{
		free(s1);
	}
	if (s2_null == 1)
	{
		free(s2);
	}
}
