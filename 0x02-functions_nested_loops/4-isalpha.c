#include "main.h"

/**
 * _isalpha - Check if c is an alphabet
 *
 * @c: an input character
 *
 * Return: Returns an integer.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
