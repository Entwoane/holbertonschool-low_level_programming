#include "main.h"
#include <stdlib.h>
/**
 * create_array - entry point
 * @size: size of malloc
 * @c: char
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);

	*array = (char *)malloc(size * sizeof(char));
	if (array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
