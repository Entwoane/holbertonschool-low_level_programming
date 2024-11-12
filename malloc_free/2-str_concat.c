#include "main.h"
#include <stdlib.h>
/**
 * str_concat - entry point
 * @s1: string 1 Best
 * @s2: string 2 School
 *
 * Return: concatenated string
 * Return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;
	int j = 0;
	int k = 0;

	if (s1 == NULL)
		s1 = "";
	if	(s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		ptr[k] = s1[k];

	for (k = 0; k < j; k++)
		ptr[i + k] = s2[k];

	ptr[i + j] = '\0';
	return (ptr);
}
