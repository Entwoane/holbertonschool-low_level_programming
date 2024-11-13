#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - entry point
 * @b: unsigned int
 *
 * Return: a pointer to the allocated memory
 * Return 98 if fail
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(*ptr) * b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
