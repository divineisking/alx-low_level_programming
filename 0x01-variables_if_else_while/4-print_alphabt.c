#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char Ava;

	Ava = 'a';

	while (Ava <= 'z')
	{
		if (Ava != 'e' && Ava != 'q')
		{
			putchar(Ava);
		}
		Ava++;
	}

	putchar('\n');

	return (0);
}
