#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: a two dimensional array
 */

int _putchar(char c);

void print_chessboard(char (*a)[8])
{
	int A, b;

	for (A = 0; A < 8; A++)
	{
		for (b = 0; b = 8; b++)
		{
			printf(a[A][b]);
		}

		printf('\n');
	}

}
