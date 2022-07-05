#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int Ava;


	for (Ava = 48; Ava <= 58; Ava++)
	{
		putchar(Ava);
		if (Ava != 57)
		{
			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
