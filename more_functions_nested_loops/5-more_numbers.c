#include"main.h"
/**
 * more_numbers - entry point
 *
 *
 * return (0) success
 */
void more_numbers(void)
{
	int n;
	char a;

	for (n = 0; n <= 9; n++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
			_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
