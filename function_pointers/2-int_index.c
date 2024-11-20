#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an int
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function to user to compare values
 *
 * Return: Index of the first element for which cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}

	return (-1);
}
