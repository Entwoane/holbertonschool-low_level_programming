# include "main.h"
#include <stdio.h>
/**
 * print_diagsums- entry point
 *@a: array
 *@size: taille de l'array
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int m, n;
	int i;

	for (i = 0; i < size; i++)
	{
		m += a[i * size + i];
		n += a[i * size + (size - i - 1)];
	}
	printf("%d, %d", n, m);

}
