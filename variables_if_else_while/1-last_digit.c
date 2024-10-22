#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints last digits of a random number.
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int nmod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nmod = n % 10;

	if (nmod > 5)
	{
	printf("The last digit of %d is %d and is greater than 5\n", n, nmod);
	}
	else if (nmod == 0)
	{
	printf("The last digit of %d is %d and is 0\n", n, nmod);
	}
	else
	{
	printf("The last digit of %d is %d and is less than 6 and not 0\n", n, nmod);
	}
	return (0);
}
