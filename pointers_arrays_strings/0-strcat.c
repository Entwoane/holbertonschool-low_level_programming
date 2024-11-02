#include"main.h"
/**
 *_strcat - entry point
 *@dest: destination
 *@src: source
 *
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;


	while (dest[destlen] != '\0')
	destlen++;
	while (src[srclen] != '\0')
	srclen++;

	for (i = 0; i < srclen; i++)
	{
		dest[destlen + i] = src[i];
	}

	dest[destlen + srclen] = '\0';

	return (dest);
}
