#include "main.h"
/**
 * is_prime - entry point
 * @num: num
 *@i: check tool
 * Return: square root
 */
int is_prime(int num, int i)
{
	if (i != 1)
	{
		if (num % i != 0)
		{
		return (is_prime(num, i - 1));
		}
		else
		return (0);
	}
	else
	return (1);
}

/**
 * is_prime_number - entry point
 * @n: number
 *
 * Return: square root
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);

	return (is_prime(n, n / 2));
}
