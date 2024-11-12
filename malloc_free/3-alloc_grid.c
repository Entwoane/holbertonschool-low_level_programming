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
	int i = 0, j = 0, k = 0;
	int value = 0;
	int **grid = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		grid[i] = malloc(width * sizeof(int));

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			grid[j][k] = value;
		}
	}

	return (grid);
}
