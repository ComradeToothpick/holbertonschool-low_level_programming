#include "main.h"
#include <stdlib.h>

/**
 * array_range - Allocates memory for an array of abs(max - min) elements of
 * int and returns a pointer to the allocated memory. The memory is set to
 * count from min to max
 * @min: The number of elements in the array
 * @max: The number of bytes each element requires
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0
 * or if _calloc fails
 */
int *array_range(int min, int max)
{
	int *output;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	output = malloc(sizeof(int) * (max - min + 1));
	if (output == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max + 1)
	{
		*((output) + i) = min;
		i++;
		min++;
	}
	return (output);
}
