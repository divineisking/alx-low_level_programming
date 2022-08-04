#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to initialize with array
 *
 * Return: pointer to the array (succcess)
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == 0)
		return (NULL);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
