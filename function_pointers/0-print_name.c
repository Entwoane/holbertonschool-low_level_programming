#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: pointer
 * @f: function pointer
 *
 * Return: Printed string
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
		f(name);
}
