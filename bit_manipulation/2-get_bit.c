#include "main.h"
#include <stdlib.h>
/**
 * get_bit - function that returns the value
 * of a bit at given index
 * @n: value
 * @index: index
 *
 * Return: Value of the bit at index
 * Return -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;
	int value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	m = 1 << index;
	value = (n & m) != 0;

	return (value);
}
