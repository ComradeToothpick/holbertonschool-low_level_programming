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

	i = 0;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (!grid)
	{
		return (NULL);
	}
	while (i < height)
	{
		j = 0;
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (j < i)
			{
				free(grid[j++]);
			}
			return (NULL);
		}
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
