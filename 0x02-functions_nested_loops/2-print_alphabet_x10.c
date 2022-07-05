#include "main.h"

/**
 * print_alphabet_x10 - prints all letters of the alphabet
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	char Ava;
	int a;

	a = 0;

	while (a < 10)
	{
		Ava = 'a';

		while (Ava <= 'z')
		{
			_putchar(Ava);
			Ava++;
		}

		_putchar('\n');
		a++;
	}
}
