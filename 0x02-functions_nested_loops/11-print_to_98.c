#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from a to 98
 * @a: whete to stqrr printing from
 */

void print_to_98(int a)
{
	int b, c;

	if (a <= 98)
	{
		for (b = a; b <= 98; b++)
		{
			if (b != 98)
			{
				printf("%d, ", b);
			}
			else if ( b == 98)
			{
				printf("%d\n", b);
			}
		}

		else if (a >= 98)
		{
			for (c = a; c >= 98; j--)
			{
				if (j != 98)
				{
					printf("%d, ", c);
				}
				else if (c == 98)
				{
					printf("%d\n,", c);
				}
			}
		}
	}
}
