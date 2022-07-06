#include "main.h"

/**
 * jack_bauer - prints every min in 24 hrs
 *
 */

void jack_bauer(void)
{
	int a, c;

	a = 0;

	while (a < 24)
	{
		c = 0;
		while (c < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar('\n');
			c++;
		}
		a++;
	}
}
