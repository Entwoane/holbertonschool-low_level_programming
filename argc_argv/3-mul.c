#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function is main
 * @argc: arguments contents
 * @argv: arguments vectors
 * Return: on Sucess 0
 * On error, Jules is returned
 */
int main(int argc, char *argv[])
{
	unsigned int a;
	unsigned int b;
	unsigned int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);

	return (0);
}
