#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one num to another
 * @n: number to flip
 * @m: number to flip
 *
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
