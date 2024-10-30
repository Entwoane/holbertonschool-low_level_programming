#include"main.h"
/**
 * puts2 - entry point
 *@str: pointer
 *
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int i = 0;
	int counter = 0;

	if (counter % 2 == 0)
	_putchar(str[i]);

	while (str[i] != '\0')
	{
	_putchar(str[i += 2]);
	}

	_putchar('\n');
}
