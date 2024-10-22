#include<stdio.h>
/**
 * main - Entry Point
 *
 * Description: Print the alphabet in lowercase
 * Return: Always 0 if Success.
 */
int main(void)
{
	char a = 'a';

	do {
		putchar(a);
		a++;
	} while (a <= 'z');
	{
		putchar('\n');
	}
return (0);
}
