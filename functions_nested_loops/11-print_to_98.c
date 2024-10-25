#include<stdio.h>
#include"main.h"
/**
* add - entry point
*
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
