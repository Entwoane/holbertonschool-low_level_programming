#include"main.h"
/**
 * cap_string - entry point
 *@str : char to convert
 *
 *Return: On success 1.
 * On error, 0 is returned
 */
char *cap_string(char *str)
{
	int i = 0;
	int j = 1;
	int k;
	char sep[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (j && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		j = 0;
		for (k = 0; sep[k] != '\0'; k++)
		{
			if (str[i] == sep[k])
			{
				j = 1;
				break;
			}
		}
		i++;
	}
	return (str);
}
