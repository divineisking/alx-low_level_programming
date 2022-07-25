#include "main.h"

/**
 * _strlen - returns or prints the length of a string
 * @s: the string to check
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
