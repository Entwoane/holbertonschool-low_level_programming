#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
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
/**
 * print_all - Function that prints anything
 * @format: format to print
 *
 * Return: format
 */
void print_all(const char * const format, ...)
{

	form f[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	int i = 0, j;
	char *separator = "";

	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (f[j].str)
		{
			if (f[j].str == format[i])
			{
				printf("%s", separator);
				f[j].print(&args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);

}

