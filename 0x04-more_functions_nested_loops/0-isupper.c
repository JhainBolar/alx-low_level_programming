#include "main.h"
/**
 * _isupper - Checks if c is an upper case
 *  @c: input character
 *  Return: Returns 1 if c is upper otherwise 0
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int iu = 0;
	for (; uppercase <= 'Z'; uppercase++)
	{
	if (c == uppercase)
	{
	iu = 1;
	break;
	}
	}
	return (iu);
}
