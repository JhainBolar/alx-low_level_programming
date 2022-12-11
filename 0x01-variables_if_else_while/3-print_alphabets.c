#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char o;
	for (o = 'a'; o <='z'; o++)
	{
		putchar(o);
	}
	printf("\n");



	for (o = 'A'; o <='Z'; o++)
	{
		putchar(o);
	}
	printf("\n");

	return (0);
}
