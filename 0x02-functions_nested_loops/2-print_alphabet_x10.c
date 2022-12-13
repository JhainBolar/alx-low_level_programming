#include "main.h"

/**
 *
 * print_alphabet_x10 - print letters a-z times 10
 *
 * * Return: Returns void.
 */

void print_alphabet_x10(void)
{
	int a = 1;

	int b = 10;

	while (a <= b)

	{

	char c = 'a';

	while (c < 'z')

	{

	_putchar(c);

	c++;

	}

	a++;

	}

	_putchar('\n');

	return (0);
