#include"main.h"
/**
 * _strlen - entry point
 *@s: pointer
 *
 *
 * Return: Always 0
 */
int _strlen(char *s)
{

	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
