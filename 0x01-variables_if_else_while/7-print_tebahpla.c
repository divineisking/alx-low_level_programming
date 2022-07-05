#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char Ava;

	for (Ava = 'z'; Ava >= 'a'; Ava--)
	{
		putchar(Ava);
	}
	putchar('\n');
	return (0);
}
