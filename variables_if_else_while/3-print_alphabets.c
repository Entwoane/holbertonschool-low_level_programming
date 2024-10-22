#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints alphabet in lower then uppercase
* Return: Always 0 (Success)
*/
int main(void)
{
	char a = 'a';
	char b = 'A';

	for (char a = 'a'; a <= 'z'; a++)
{
	putchar(a);
}
	for (char b <= 'Z'; b++)
{
	putchar(b);
}
return (0);
}
