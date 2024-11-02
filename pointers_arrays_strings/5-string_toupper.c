#include"main.h"
/**
 * string_toupper - entry point
 *@str : char to convert
 *
 *Return: On success 1.
 * On error, 0 is returned
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	for (; *ptr; ptr++)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
	}
	return (str);
}
