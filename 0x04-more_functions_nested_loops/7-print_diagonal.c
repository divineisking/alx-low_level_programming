#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: number of times to print \
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int a, b;

		for (a = 0; a < n; i++)
		{
			for (b = 0; b < n; b++)
			{
				if (b == a)
				{
					_putchar('\');
				}
				else if
				{
					_putchar(' ');
				}
			}

			_putchar('\n');
		}
	}
}
