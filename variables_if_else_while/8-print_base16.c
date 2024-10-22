#include<stdio.h>
/**
* main - Entry point
*
* Description: Prints every base 16 numbers
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	char l;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
