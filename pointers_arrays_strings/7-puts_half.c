#include"main.h"
/**
 * puts_half - entry point
 *@str: pointer
 *
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i = 0;
	int count = 0;
	char *halfstr = str;

	while (str[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count / 2; i++)
	{
		_putchar(*halfstr++);
	}
	_putchar('\n');


}
