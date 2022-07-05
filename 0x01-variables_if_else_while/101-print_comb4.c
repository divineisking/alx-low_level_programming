#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int Ava, Afa, Ama;

	for (Ava = 48; Ava <= 58; Ava++)
	{
		for (Afa = 49; Afa <= 58; Afa++)
		{
			for (Ama = 50; Ama <= 58; Ama++)
				if (Ama > Afa && Afa > Ava)
				{
					putchar(Ava);
					putchar(Afa);
					putchar(Ama);
					if (Ava != 55 || Afa != 56)
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
