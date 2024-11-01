#include"main.h"
/**
 * _strcpy - entry point
 *@dest: destination
 *@src: source
 *
 *
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int count = 0;

	while (src[count] != '\0')
	count++;

	for (i = 0; i < count; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
