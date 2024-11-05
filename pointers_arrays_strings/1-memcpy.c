#include"main.h"
/**
 * _memcpy - entry point
 *@dest: destination
 *@src: source
 *@n: n bytes
 *
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
