#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Creates a pointer to a character and allocates memory for it.
 * Copies the string from the given address to the new address.
 * @str: The address of the string to be copied to the new address
 * Return: The pointer to the new string, or NULL if it fails
 */
char *_strdup(char *str)
{
	int i;
	char *output;
	char c;

	i = 0;
	c = '0';
	if (str == NULL)
	{
		return (NULL);
	}
	while (c != 0)
	{
		c = *(str + i);
		i++;
	}
	if (i == 0)
	{
		return (NULL);
	}
	output = malloc(sizeof(char) * i);
	if (output)
	{
		i = 0;
		c = '0';
		while (c != 0)
		{
			c = *(str + i);
			output[i] = c;
			i++;
		}
		return (output);
	}
	return (NULL);
}
