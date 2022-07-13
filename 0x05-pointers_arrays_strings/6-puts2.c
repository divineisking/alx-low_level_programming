#include "main.h"

/**
 * puts2 - prints a character out of 2 of a string
 * @str: string to print char from
 */

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < 10; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
