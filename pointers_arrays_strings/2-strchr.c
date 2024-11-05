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
		if (*s == (char) c)
		{
			return ((char *)s);
		}
		s++;
	}

	return (0);

}
