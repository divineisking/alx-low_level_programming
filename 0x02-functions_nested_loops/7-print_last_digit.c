#include "main.h"

/**
 * print_last_digit - prints the kast digit of a number 
 * @Ava: number to check
 * Return: returns 
 */

int print_last_digit(int Ava)
{
	int a;

	if (Ava < 0)
	{
		Ava = -Ava;
	}

	a = Ava % 10;
	
	if (a < 0 )
	{
		a = -a;
	}

	_putchar(a + '0');
	return (Ava);
}
