#include"main.h"
/**
 * _isdigit - entry point
 *@c: char to output
 *
 *Return: On success 1.
 * On error, 0 is returned
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	return (1);

	return (0);

}
