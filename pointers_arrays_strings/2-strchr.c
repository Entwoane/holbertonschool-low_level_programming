#include "main.h"
/**
 * _strchr - entry point
 *@s: pointer
 *@c: string
 *
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (0);

}
