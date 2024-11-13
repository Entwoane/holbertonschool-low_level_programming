#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of int
 * @min: min
 * @max: max
 *
 * Return: pointer to the new array
 * Return NULL if fail
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = (int *) malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max + min; i++)
		arr[i] = min + i;

	return (arr);
}
