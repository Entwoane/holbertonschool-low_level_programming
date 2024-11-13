#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocate memory for an array
 * @nmemb: nmemb elements
 * @size: size of bytes
 *
 * Return: pointer to the allocated memory
 * Return NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = 0;
	unsigned int total = 0;
	unsigned int i;
	unsigned char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;

	array = malloc(total);
	if (array == NULL)
		return (NULL);

	ptr = (unsigned char *)array;
	for (i = 0; i < total; i++)
		ptr[i] = 0;

	return (array);
}
