#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the substring
 * or NULL if the substring is absent
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[i] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[i + j] != needle[b])
				break;
		}
		if (!needle[j])
		{
			return (&haystack[i]);
		}
	}

	return (NULL);
}
