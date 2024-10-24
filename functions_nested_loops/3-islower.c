#include "main.h"

/**
 * _islower - entry point
 *@c: char to output
 *
 * Description: description
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
