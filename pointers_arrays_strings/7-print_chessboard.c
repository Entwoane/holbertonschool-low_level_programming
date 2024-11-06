#include "main.h"
/**
 * print_chessboard - entry point
 *@a: array
 *
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int rows;
	int cols;

	for (rows = 0; rows < 8; rows++)
	{
		for (cols = 0; cols < 8; cols++)
		{
			_putchar(a[rows][cols]);
		}
	_putchar('\n');
	}

}
