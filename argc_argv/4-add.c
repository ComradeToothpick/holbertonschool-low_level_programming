#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The number of arguments passed
 * @argv: An array of strings of each argument passed
 * Return: 0 on success, otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, total, collected_value;

	i = 1;
	total = 0;
	while (i < argc)
	{
		collected_value = atoi(argv[i]);
		if (collected_value == 0)
		{
			printf("Error\n");
			return (1);
		}
		total += collected_value;
		i++;
	}
	printf("%d\n", total);
	return (0);
}
