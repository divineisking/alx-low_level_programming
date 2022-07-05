#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int Ava;
	char Ama;

	for (Ava = 48; Ava <= 58; Ava++)
	{
		putchar(Ava);
	}
	for (Ama = 'a'; Ama <= 'f'; Ama++)
	{
		putchar(Ama);
	}
	putchar('\n');
	return (0);
}
