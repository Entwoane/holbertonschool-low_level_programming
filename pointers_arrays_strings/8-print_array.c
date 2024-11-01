#include"main.h"
#include<stdio.h>
/**
 * print_array - entry point
 *@a: pointer
 *@n: number of elements of the array to be printed
 *
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;
	char *separator = "";
	char *space = "";

	for (i = 0; i < n; i++)
	{
		printf("%s%s%d", separator, space, a[i]);
		separator = ",";
		space = " ";
	}

	putchar('\n');
}
