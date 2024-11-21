#ifndef VAR_FUNC_H
#define VAR_FUNC_H
#include <stdarg.h>
/**
 * struct formatter - Struct
 *
 * @str: string for print_string function
 * @print: The function associated to va_list
 */
typedef struct formatter
{
	char str;
	void (*print)(va_list *);
} form;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
