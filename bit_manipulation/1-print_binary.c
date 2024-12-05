#include "main.h"
#include <stdlib.h>
/**
 * print_binary - function that prints
 * the binary representation of a number
 * @n: binary representation
 */
void print_binary(unsigned long int n)
{
	int i;
	int start = 0;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			start = 1;
		}
		else if (start)
		{
			_putchar('0');
		}
	}

	if (start == 0)
	{
		_putchar('0');
	}
}
