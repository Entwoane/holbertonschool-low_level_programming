#include "main.h"
#include <stdlib.h>
/**
 * set_bit - function that sets the value of
 * a bit to 1 at a given index
 * @n: value
 * @index: index starting from 0
 *
 * Return: 1 if it worked
 * Return -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m = 1 << index;
	*n |= m;

	return (index);
}
