#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - function that prints a character
 * @args: argument list
 *
 * Return: char
 */
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}
/**
 * print_int - function that prints an integer
 * @args: argument list
 *
 * Return: int
 */
void print_int(va_list *args)
{
	printf("%i", va_arg(*args, int));
}
/**
 * print_float - function that prints a float
 * @args: argument list
 *
 * Return: float
 */
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}
/**
 * print_string - function that prints a string
 * @args: argument list
 *
 * Return: string
 */
void print_string(va_list *args)
{
	char *str = va_arg(*args, char *);

	if (str == NULL)
	{
	printf("(nil)");
	return;
	}
	printf("%s", str);
}
