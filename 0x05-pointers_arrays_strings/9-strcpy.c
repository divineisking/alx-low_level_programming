#include "main.h"

/**
 * _strcpy - copy the string pointed to by str
 * including the terminating null byte (\0)
 * to the buffer pointed to by src
 * @dest: pointer to buffer
 * @src: string to copy
 *
 * Return: pointer to dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
