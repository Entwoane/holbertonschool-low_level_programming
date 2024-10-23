#include "main.h"
/**
* print_alphabet - writes the alphabet output
* 
* return (0) success
*/
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
