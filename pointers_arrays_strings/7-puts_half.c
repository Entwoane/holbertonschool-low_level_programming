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
	int count = 0;
	int i, n;

	while (str[count] != '\0')
	count++;

	if (count % 2 == 0)
	{
		for (i = count / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (count % 2)
	{
		for (n = (count - 1) / 2; n < count - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');

}
