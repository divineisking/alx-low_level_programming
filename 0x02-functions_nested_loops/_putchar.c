#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 *
 * _putchar - function that sends iys result
 * to stdout
 * @c character to send
 *
 * Return: Always 0
 */

int main(void)
{
	return (0);
}

int _putchar(char a)
{
	return (write(1, &a, 1));
}
