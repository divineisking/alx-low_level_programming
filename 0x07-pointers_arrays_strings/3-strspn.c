#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters
 * to match to s
 *
 * Return: the number of byte in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, d;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		d = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				d = 1;
			}
		}
		if (d == 0)
		{
			return (c);
		}
	}

	return (0);
}
