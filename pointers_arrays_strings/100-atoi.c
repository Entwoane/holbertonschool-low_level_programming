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
	int i = 0;
	int j = 1;
	unsigned int k = 0;

	while (s[i] == ' ')
		i++;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			j *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			k = k * 10 + (s[i] - '0');
		}
		else if (k > 0)
		break;
		i++;
	}
	return (k * j);
}
