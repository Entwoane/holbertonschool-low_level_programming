#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - function that sets the value of a bit
 * to 0 at a given index
 * @n: value
 * @index: index
 *
 * Return: 1 if it worked
 * Return -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m = ~(1UL << index);
	*n &= m;

	return (1);
}
