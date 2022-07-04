#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Return - Always 0 (Success)
*/

/* main - Entry point */
int main(void)
{
	char A;

	A = 'a';

	for (A <= 'z'; A++;)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
