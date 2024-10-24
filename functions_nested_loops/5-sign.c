#include "main.h"
/**
 * print_sign - entry point
 *@n : number
 *
 *Return: On success 1.
 * On error, 0 is returned
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
