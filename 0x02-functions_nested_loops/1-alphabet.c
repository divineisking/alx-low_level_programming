#include "main.h"

/**
 * print_alphabet - prints letters a+z in lowercase
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	char Ava;

	Ava = 'a';

	while (Ava <= 'z')
	{
		_putchar(Ava);
		Ava++;
	}
	_putchar('\n');
}
