#include "main.h"

/**
 *
 *
 */

int print_sign(int Ava)
{
	if (Ava > 0)
	{
		_putchar('+');
		return (1);
	}
	else if ( Ava == 0)
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
