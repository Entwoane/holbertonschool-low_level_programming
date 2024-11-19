#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Function that execute a function given
 * as a parameter on each elements of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function to use
 *
 * Return: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0 || array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}

}
