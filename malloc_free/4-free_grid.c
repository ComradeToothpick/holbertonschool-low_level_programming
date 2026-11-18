#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees an array of size width * height
 * @grid: The pointer to the array
 * @height: The height of the array
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
