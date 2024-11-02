#include"main.h"
/**
 *_strncat - entry point
 *@dest: destination
 *@src: source
 *@n: bytes to use
 *
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;

	while (dest[destlen] != '\0')
	destlen++;

	while (n > 0 && *src != '\0')
	{
		dest[destlen++] = *src++;
		n--;
	}

	dest[destlen] = '\0';

	return (dest);
}
