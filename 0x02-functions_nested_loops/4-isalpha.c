#include "main.h"

/**
 * _isalpha - checks for alphabet 
 *
 * @Ava: the character to be checked
 *
 * Return: 1 if Ava is an alphanet else 0
 */

int _isalpha(int Ava)
{
	return ((Ava >= 'a' && Ava <= 'z') || (Ava >= 'A' && Ava <= 'Z'));
}
