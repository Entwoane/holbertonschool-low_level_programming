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
	int sum = 0;
	int num;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (argv[i][j] != '\0'); j++)
		{
			if (!isdigit((unsigned char)argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
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
