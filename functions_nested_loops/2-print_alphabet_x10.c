#include"main.h"

/**
* print_alphabet_x10 - entry
* prints alphabet 10 times
*
* return always (0)
*/
void print_alphabet_x10(void)
{
	int n;
	char a;

	for (n = 0; n <= 9; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
