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
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		arr[i] = min + i;

	return (arr);
}
