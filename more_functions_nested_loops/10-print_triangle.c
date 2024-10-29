#include"main.h"
/**
 * print_triangle - entry point
 * @size: size of triangle
 *
 * return (0) success
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = size; a >= 1; a--)
	{
		for (b = a; b >= 2; b--)
		{
			_putchar(32);
		}
		for (c = 1; c <= size - a + 1; c++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}

}
