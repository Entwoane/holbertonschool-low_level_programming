#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Function
 * @argc: argument count
 * @argv: argument values
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*pascal)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	pascal = get_op_func(argv[2]);

	if (pascal == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = pascal(num1, num2);

	printf("%d\n", result);
	return (0);

}
