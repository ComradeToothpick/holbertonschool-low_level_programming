#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers of size
 * width * height
 * @width: The width of the array, should be > 0
 * @height: The height of the array, should be > 0
 * Return: The address of the array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;
	int *data;

	i = 0;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	data = malloc(sizeof(int) * width * height);
	if (!grid)
	{
		if (data)
		{
			free(data);
		}
		return (NULL);
	}
	if (!data)
	{
		if (grid)
		{
			free(grid);
		}
		return (NULL);
	}
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			*(data + i * width + j) = 0;
			j++;
		}
		*(grid + i) = data + i * width;
		i++;
	}
	return (grid);
}
