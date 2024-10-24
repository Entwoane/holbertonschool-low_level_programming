#include "main.h"

/**
 * _isalpha - entry point
 *@c: char to output
 *
 *Return: On success 1.
 * On error, 0 is returned
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
