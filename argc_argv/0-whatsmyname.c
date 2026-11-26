#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The number of arguments passed to the function
 * @argv: An array of strings containing each of the arguments passed to the
 * function
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 0)
	{
		return (0);
	}
	printf("%s\n", argv[0]);
	return (0);
}
