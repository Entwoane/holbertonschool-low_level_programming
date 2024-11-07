#include<stdio.h>
/**
* main - Entry point
*
* Description: Prints 1 to 9 with , and spaces
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int v = 44;
	int s = 32;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	if (n < 9)
	{
		putchar(v);
		putchar(s);
	}
	}
	putchar('\n');
return (0);
}
