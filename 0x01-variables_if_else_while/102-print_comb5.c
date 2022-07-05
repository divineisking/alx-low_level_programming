#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int a, v;

	for (a = 0; a <= 100; a++)
	{
		for (v = 0; v <= 100; v++)
		{
			if (a < v)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((v / 10) + 48);
				putchar((v % 10) + 48);
				if (a != 98 || v != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
