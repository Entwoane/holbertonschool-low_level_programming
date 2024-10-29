#include"main.h"
/**
 * swap_int - entry point
 *@a: pointer
 *@b: pointer
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
