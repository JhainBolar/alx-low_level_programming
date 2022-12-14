#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 *  @x: An integre input
 *
 * Return: Absolute value of number r
 */
int print_last_digit(int x)
{
	int x;

	int d = x % 10;

	if (x < 0)
	{
		d = -d;
	}

	printf("%d", d);

}	
