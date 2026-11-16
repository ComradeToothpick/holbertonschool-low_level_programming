#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of chars of 'size' length, and initializes
 * it with a specific char c
 * @size: The number of elements the array will have in it
 * @c: The character to initialize each element with
 * Return: A pointer to the begining of the array,
 * or NULL if size = 0, or if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *output;

	i = 0;
	if (size == 0)
	{
		return (NULL);
	}
	output = malloc(sizeof(char) * size);
	if (output)
	{
		while (i < size)
		{
			output[i] = c;
			i++;
		}
		return (output);
	}
	return (NULL);
}
