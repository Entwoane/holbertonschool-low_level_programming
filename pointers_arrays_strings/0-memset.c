#include"main.h"
/**
 * _memset - entry point
 *@s: pointer
 *@b: string
 *@n: n bytes
 *
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned char *p = (unsigned char *)s;

	while (n--)
	{
		*p++ = (unsigned char) b;
	}

	return (s);
}
