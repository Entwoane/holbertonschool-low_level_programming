#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints numberz
* Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
return (0);
}