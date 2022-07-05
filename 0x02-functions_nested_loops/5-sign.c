#include "main.h"

/**
 * print_sign - checks a number and prints thebsign og number
 * @Ava: number ti xhevk
 *
 * Return: returns 1 if number is positive
 * else retruns 0 if number is 0
 * or -1 if number us negative
 */

int print_sign(int Ava)
{
	if (Ava > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (Ava == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (Ava < 0)
	{
		_putchar('-');
	}
	return (-1);
}
