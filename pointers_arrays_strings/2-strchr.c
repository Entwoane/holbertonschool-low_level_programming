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
	do {
		if (*s == c)
			return (s);
		} while (*s++);

	return (0);

}
