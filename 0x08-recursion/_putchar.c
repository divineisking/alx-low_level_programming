#include <unistd.h>

/**
 * _putchar - writes a char to stdout
 * @c: The char to print
 *
 */

int _putchar(char c);

int _putchar(char c)
{
	return (write(1, &c, 1));
}
