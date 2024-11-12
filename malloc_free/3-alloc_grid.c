#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - entry point
 * @width: width
 * @height: height
 *
 * Return: a pointer to a 2D array
 * Return NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
			if (grid[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(grid[j]);
				free(grid);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				grid[i][j] = 0;
	}

	return (grid);
}
