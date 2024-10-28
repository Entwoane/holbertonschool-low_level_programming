#include"main.h"
/**
 * print_numbers - entry point
 *
 *
 * return (0) success
 */
void print_numbers(void)
{

	char array[] = "0123456789";
	int n = 0;

	while (array[n] != '\0')
	{
	_putchar(array[n]);
	n++;
	}
	_putchar('\n');
}
