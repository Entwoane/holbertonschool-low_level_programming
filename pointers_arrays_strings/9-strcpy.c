#include"main.h"
/**
 * _strcpy - entry point
 *@dest: destination of strcpy
 *@src: source of strcpy
 *
 *
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
