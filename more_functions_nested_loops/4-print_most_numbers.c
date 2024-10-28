#include"main.h"
/**
 * print_most_numbers - entry point
 *
 *
 * return (0) success
 */
void print_most_numbers(void)
{

	char array[] = "01356789";
	int n = 0;

	while (array[n] != '\0')
	{
		_putchar(array[n]);
		n++;
	}
	_putchar('\n');
}
