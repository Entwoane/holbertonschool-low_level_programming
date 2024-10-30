#include"main.h"
/**
 * print_rev - entry point
 *@s: pointer
 *
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	while (count > 0)
	{
		count--;
	_putchar(s[count - 1]);
	}
	_putchar('\n');

}
