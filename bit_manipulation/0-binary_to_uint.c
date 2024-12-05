#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 * @b: pointer to a string of 0 and 1
 *
 * Return: converted number of 0 if there is one
 * or more chars in the string that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
	{
		return (0);
	}
	for (result = 0; *b; b++)
	{
		if (*b == '1')
		{
			result = (result << 1) | 1;
		}
		else if (*b == '0')
		{
			result <<= 1;
		}
		else
			return (0);
	}

	return (result);
}
