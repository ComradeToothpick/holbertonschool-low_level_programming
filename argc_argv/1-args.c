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
	if (argv == NULL)
	{
		return (0);
	}
	printf("%d\n", argc);
	return (0);
}
