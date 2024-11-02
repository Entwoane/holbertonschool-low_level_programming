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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || i == '-')
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
		}
		if (str[i] == ' ' || str[i] == '.')
		{
			i++;
			if ((str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
		}
		if (str[i] == '\t' || str[i] == '\n')
		{
			i++;
			if ((str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
		}
	}

	return (str);
}
