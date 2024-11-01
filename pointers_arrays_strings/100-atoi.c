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
	char c;
	int result = 0;
	int sign = 1;

	if (s[0] == '-')
	{
		s++;
		sign = -1;
	}
	while ((c = *s))
	{
		if (c >= 47 && c <= 57)
		{
			result *= 10;
			result += c - '0';
		}
		else
		{
			break;
		}
		s++;
	}

	return (result * sign);
}
