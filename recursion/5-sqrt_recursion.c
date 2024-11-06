#include "main.h"
/**
 * sqrt_helper - entry point
 * @n: number to compare
 *@i: base to check
 * Return: square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
	return (i);

	if (i * i > n)
	return (-1);

	return (sqrt_helper(n, i + 1));

}

/**
 * _sqrt_recursion - recursive function
 * @n: squared number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{

	return (sqrt_helper(n, 1));

}
