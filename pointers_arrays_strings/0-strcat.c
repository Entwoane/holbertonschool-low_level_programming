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
	int i = 0;
	int j = 0;

	while (dest[destlen] != '\0')
	destlen++;


	while (dest[i] != '\0')
	i++;

	while (src[j] != '\0' && i < destlen - 1)
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);

}
