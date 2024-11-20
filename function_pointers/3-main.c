#include "calc.h"
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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int num1 = atoi(argv[1]);
	char *operator = argv[2];
	int num2 = atoi(argv[3]);
}
