#include<stdio.h>
#include"main.h"
/**
* print_to_98 - entry point
*@n: integer
*
*Return: a + b result
*/
void print_to_98(int n)
{
	int end = 98;

	while (n > end)
	{
		printf("%2d, ", n);
		n--;
	}
	while (n <= 111)
	{
		if (n == 98)
		{
			printf("%d\n", n);
			break;
		}
		printf("%d, ", n);
		n++;
	}
}
