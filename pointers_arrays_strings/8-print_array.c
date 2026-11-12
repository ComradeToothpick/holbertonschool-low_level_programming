#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the first n elements of an array of intergers,
 * sepperated by ', '
 * @a: The memory address of the beginning of the array
 * @n: The number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", *(a + i++));
	}
	printf("\n");
}
