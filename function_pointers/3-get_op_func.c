#include "calc.h"
#include <stdlib.h>
/**
 * get_op_func - function pointer that select the correct function
 * @s: char
 *
 * Return: operation asked
 */
int (*get_op_func(char *s))(int, int)
{
		op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		i++;
	if (ops[i].op != ops[*s].op)
		return (NULL);
	}

}
