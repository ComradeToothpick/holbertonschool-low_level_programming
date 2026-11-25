#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Takes the array of arguments and concatonates them
 * @ac: The number of arguments in the array
 * @av: The array to concatonate
 * Return: Pointer to the concatonated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, o, length;
	char c, *output;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	length = getstrlen(ac, av);
	output = malloc(sizeof(char) * (length + 1));
	i = 0;
	o = 0;
	while (i < ac)
	{
		j = 0;
		c = '0';
		while (c != 0)
		{
			c = av[i][j];
			if (c != 0)
			{
				output[o] = c;
			}
			else
			{
				output[o] = '\n';
			}
			o++;
			j++;
		}
		i++;
	}
	*(output + o) = '\0';
	return (output);
}

/**
 * getstrlen - Gets the length of the array av
 * @ac: The number of arguments in the array
 * @av: The array to measure
 * Return: The length of the array av
 */
int getstrlen(int ac, char **av)
{
	int i, j, length;
	char *string;
	char c;

	c = '0';
	length = 0;
	i = 0;
	while (i < ac)
	{
		string = *(av + i);
		j = 0;
		c = '0';
		while (c != 0)
		{
			c = *(string + j);
			length++;
			j++;
		}
		i++;
	}
	return (length);
}
