#include "main.h"
#include <stdlib.h>
/**
 * _strdup - entry point
 * @str: string to duplicate
 *
 * Return: NULL if str = NULL
 * Return *str on success
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *ptr;

	if (str == NULL)
	return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	return (NULL);

	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);
}
