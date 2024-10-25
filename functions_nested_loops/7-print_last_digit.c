#include"main.h"
/**
* print_last_digit - entry point
*@r : integer
*
*Return: On success 0.
*/
int print_last_digit(int r)
{
	int lastdigit;

	lastdigit = r % 10;

	if (lastdigit < 0)

	lastdigit = -lastdigit;
	 _putchar('0' + lastdigit);


	return (lastdigit);
}
