#include "main.h"
/**
 * factorial - entry point
 * @n: string
 *
 * Return: 0
 */
int factorial(int n)
{
	if (n == 0)
	return (1);

	if (n < 0)
	return (-1);


	return (n * factorial(n - 1));

}
