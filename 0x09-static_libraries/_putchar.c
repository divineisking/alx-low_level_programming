#include "main.h"
#include <unistd.h>

/**
 * _putcharr - prints the char c to stdout
 * @c: The character to.print
 *
 * Return: 1 on success, -1 on faliure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
