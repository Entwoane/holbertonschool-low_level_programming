#include "main.h"
/**
 * _strspn - entry point
 *@s: string
 *@accept: accepted characters
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;
	int a;
	int found = 0;


	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (a = 0; accept[a] != '\0'; a++)
		{
		if (s[i] == accept[a])
		{
			found = 1;
			count++;
			break;
		}
		}
		if (found == 0)
		{
		break;
		}
	}

	return (count);

}
