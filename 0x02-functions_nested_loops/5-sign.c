#include "main.h"

/**
 * int print_sign - Print sign of a number
 *
 * @n: an input character
 *
 * Return: Returns an integer
 */
 
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar("+");
		return (1);
	}
	else if (n == 0)
	{
		_putchar("0");
		return (0);
	}
	else 
	{
		_putchar("-");
		return (-1);
	}
}
