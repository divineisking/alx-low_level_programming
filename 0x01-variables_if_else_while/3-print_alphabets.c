#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	int Ava;

	for (Ava = 'a'; Ava <= 'z'; Ava++)
		putchar(Ava);
	for (Ava = 'A'; Ava <= 'Z'; Ava++)
		putchar(Ava);
	putchar('\n');
	return (0);
}
