#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals of a size * size
 * array of int
 * @a: The array of integers
 * @size: the side length of the array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumA;
	int sumB;

	i = 0;
	sumA = 0;
	sumB = 0;
	while (i < size)
	{
		sumA += *(a + size * i + i);
		sumB += *(a + size * i + (size - i - 1));
		i++;
	}
	printf("%d, %d\n", sumA, sumB);
}
