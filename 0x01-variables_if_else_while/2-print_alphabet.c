#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
* Return - Always 0 (Success)
*/int main(void)
	{
	char A;

	A = 'a';

	for (A = 'a'; A <= 'z'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
	}
