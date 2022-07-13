#include "main.h"

/**
 * _put - returns or prints a tring standard output
 * @str: pointer to string to print
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
