#include <stdio.h>
#include <unistd.h>
/*
 * main- is a function, it prints the
 * sentence in the printf function
 * return- is a function, returns a value (1)when the ckde runs well
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
