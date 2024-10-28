#include"main.h"
/**
 * print_numbers - entry point
 *
 *Return: On success 1.
 * On error, 0 is returned
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
