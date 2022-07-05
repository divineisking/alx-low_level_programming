#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (success)
 *
 */

int main(void)
{
	int Ava, Afa;

	for (Ava = 48; Ava <= 56; Ava++)
	{
		for (Afa = 49; Afa <= 57; Afa++)
			if (Afa > Ava)
			{
				putchar(Ava);
				putchar(Afa);
				if (Ava != 56 || Afa != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
