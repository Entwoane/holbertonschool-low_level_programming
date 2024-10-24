#include "main.h"

/**
 * _islower - entry point
 *@c: char to output
 *
 *Return: On success 1.
 * On error, 0 is returned
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
