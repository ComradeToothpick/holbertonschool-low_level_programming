#include "main.h"
#include <stdlib.h>
#include <stdbool.h>

/**
 * string_nconcat - Concatonates the first n bytes of the string s2
 * onto the end of s1
 * @s1: The first string to concatonate onto
 * @s2: The second string to concatonate the first n bytes of onto the
 * end of s1
 * @n: The number of bytes to take from s2
 * Return: The pointer to the concatonated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	bool s1_null, s2_null;

	s1_null = false;
	s2_null = false;
	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		*s1 = '\0';
		s1_null = true;
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		*s2 = '\0';
		s2_null = true;
	}
	output = malloc_output(s1, s2, n);
	if (output == NULL || s1 == NULL || s2 == NULL)
	{
		if (output != NULL)
			free(output);
		if (s1_null)
			free(s1);
		if (s2_null)
			free(s2);
		return (NULL);
	}
	output = assign_string(output, s1, s2, n);
	if (s1_null)
		free(s1);
	if (s2_null)
		free(s2);
	return (output);
}

/**
 * malloc_output - Returns an address with allocated memory
 * of length s1 + Math.Min(s2, n)
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to collect from s2
 * Return: The memory address of the correct size for output
 */
char *malloc_output(char *s1, char *s2, unsigned int n)
{
	char c, *out;
	unsigned int i, j;

	c = '0';
	i = 0;
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
	while (j <= n && c != 0)
	{
		c = *(s2 + j);
		j++;
	}
	out = malloc(sizeof(char) * (i + j));
	if (out == NULL)
		return (NULL);
	if (j > n)
		out[i + n] = '\0';
	return (out);
}

/**
 * assign_string - Assigns the characters in s1 and s2 to the
 * correct positions in output
 * @output: The string where the concatonated strings will be stored
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to copy from s2
 * Return: The final concatonated string
 */
char *assign_string(char *output, char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char c;

	c = '0';
	i = 0;
	j = 0;
	while (c != 0)
	{
		c = *(s1 + i);
		if (c != 0)
		{
			output[j] = c;
			j++;
			i++;
		}
	}
	i = 0;
	c = '0';
	while (c != 0 && i < n)
	{
		c = *(s2 + i);
		i++;
		output[j] = c;
		j++;
	}
	return (output);
}
