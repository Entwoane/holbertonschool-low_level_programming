#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Print alphabet except e & q
 * Return: Always 0 if Success.
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
