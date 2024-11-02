/**
 *_strcmp - entry point
 *@s1: comparaison 1
 *@s2: comparaison 2
 *
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}

	return (*s1 - *s2);
}
