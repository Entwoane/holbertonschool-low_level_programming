#include"main.h"
/**
 * _isupper - entry point
 *@c: char to output
 *
 *Return: On success 1.
 * On error, 0 is returned
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	return (1);

	return (0);

}
