#include"main.h"
/**
 * rev_string - entry point
 *@s: pointer
 *
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int count = 0;
	int i;
	char v[500];



	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		v[i] = s[count - 1 - i];

	}
		v[count] = '\0';

	for (i = 0; i <= count; i++)
	{
		s[i] = v[i];
	}
}
