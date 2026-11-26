#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The number of arguments passed
 * @argv: An array of the arguments passed
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 0 || argv == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
