#include "main.h"
/**
 * _strstr - entry point
 *@haystack: string
 *@needle: substring
 *
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
