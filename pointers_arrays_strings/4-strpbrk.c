#include "main.h"
/**
 * _strpbrk - entry point
 *@s: string
 *@accept: accepted characters
 *
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return (0);
}
