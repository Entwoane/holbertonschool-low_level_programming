#include"main.h"
/**
 * _atoi - entry point
 *@s: pointer
 *
 *
 * Return: Always 0
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ')
	{
		s++;
	}
	if (*s == '-')
	{
		sign = -1;
	}
	s++;

	while (*s >= 48 && *s <= 57)
	{
		result = result * 10 + (*s - '0');
	}
	return (sign * result);
}
