#include "main.h"

/**
 * more_numbers - prints numbers 0-14 10x
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; a < 15; b++)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}

			_putchar(b % 10 + '0');
		}

		_putchar('\n');
	}
}
