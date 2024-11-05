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
	const char *h;
	const char *n;


	if (*needle == '\0')
		return ((char *)haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return ((char *)haystack);

		haystack++;
	}

	return (0);
}

