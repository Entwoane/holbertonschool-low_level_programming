#include "main.h"
/**
 * _abs - entry point
 *@r : integer
 *
 *Return: On success 1.
 * On error, 0 is returned
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	return (r);
}
