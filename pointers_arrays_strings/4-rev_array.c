#include "main.h"

/**
 * reverse_array - Reverses an array of integers a of size n
 * @a: The address of the first element of the array
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	while (i < (n + 1) / 2)
	{
		temp = *(a + i);
		*(a + i) = *(a + (n - 1) - i);
		*(a + (n - 1) - i) = temp;
		i++;
	}
}
