#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - This function is main
 * @argc: arguments contents
 * @argv: arguments vectors
 * Return: on Sucess 0
 */
int main(int argc, char *argv[])
{
	unsigned int sum = 0;
	unsigned int num;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit((*argv[i])))
		{
			printf("Error\n");
			return (1);
		}

		num = atoi(argv[i]);
		if (num > 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);

	return (0);
}
